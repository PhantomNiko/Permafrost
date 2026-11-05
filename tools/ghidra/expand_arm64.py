#!/usr/bin/env python3
"""Expand LLVM ARM64 machine-outliner calls in an analysis snapshot.

The compiler shares instruction sequences without normal function boundaries.
Expanding them gives the decompiler the caller's stack and register context.
Never distribute the resulting analysis memory as an executable.
Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64_const import ARM64_OP_IMM


def branch(source, target, call=False):
    delta = target - source
    if delta & 3 or not -(1 << 27) <= delta < (1 << 27):
        raise ValueError('branch outside ARM64 immediate range')
    return struct.pack('<I', (0x94000000 if call else 0x14000000) |
                       ((delta >> 2) & 0x3ffffff))


def relocate(instruction, address):
    word = int.from_bytes(instruction.bytes, 'little')
    name = instruction.mnemonic
    if name in ('b', 'bl'):
        return branch(address, instruction.operands[0].imm, name == 'bl')
    if name in ('adr', 'adrp'):
        target = instruction.operands[1].imm
        delta = target - (address if name == 'adr' else address & ~4095)
        if name == 'adrp':
            delta >>= 12
        if not -(1 << 20) <= delta < (1 << 20):
            # ADR has only a 1 MiB range. Use the equivalent page-relative pair.
            if name != 'adr':
                raise ValueError('ADRP outside immediate range')
            register = word & 31
            page_delta = ((target & ~4095) - (address & ~4095)) >> 12
            page = (0x90000000 | register | ((page_delta & 3) << 29) |
                    (((page_delta >> 2) & 0x7ffff) << 5))
            add = 0x91000000 | ((target & 4095) << 10) | (register << 5) | register
            return struct.pack('<II', page, add)
        word = ((word & ~((3 << 29) | (0x7ffff << 5))) |
                ((delta & 3) << 29) | (((delta >> 2) & 0x7ffff) << 5))
    elif (name.startswith(('ldr', 'prfm')) and len(instruction.operands) > 1
          and instruction.operands[1].type == ARM64_OP_IMM):
        delta = instruction.operands[1].imm - address
        if delta & 3 or not -(1 << 20) <= delta < (1 << 20):
            raise ValueError('literal load outside immediate range')
        word = (word & ~(0x7ffff << 5)) | (((delta >> 2) & 0x7ffff) << 5)
    elif name.startswith(('b.', 'cb', 'tb')):
        raise ValueError('conditional branch inside an outlined sequence')
    return struct.pack('<I', word)


def expand(source, output):
    metadata = json.loads((source / 'metadata.json').read_text())
    if metadata['cpu'] != 0x100000c:
        raise ValueError('expected ARM64 analysis memory')
    original = (source / 'memory.bin').read_bytes()
    memory = bytearray(original)
    base = metadata['base']
    text, size = next((a, n) for k, a, n in metadata['sections'] if k == '__text')
    decoder = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    decoder.detail = True
    decoder.skipdata = True
    instructions = list(decoder.disasm(original[text-base:text-base+size], text))
    symbols = sorted(metadata['symbols'])
    helpers = {}
    for i, (address, name) in enumerate(symbols):
        if not name.startswith('_OUTLINED_FUNCTION_'):
            continue
        end = symbols[i+1][0] if i+1 < len(symbols) else text + size
        body = list(decoder.disasm(original[address-base:end-base], address))
        while body and body[-1].mnemonic == 'nop':
            body.pop()
        if not body or body[-1].mnemonic not in ('ret', 'b', 'br'):
            raise ValueError('unrecognized outlined terminator at %#x' % address)
        # A RET sequence must preserve its incoming LR. The two ordinary
        # helper calls save and restore LR on their own stack. No sequence may
        # restore a different caller's LR from a surrounding function frame.
        lr_stores = sum(x.mnemonic == 'str' and x.op_str.startswith('x30, [sp, #-')
                        for x in body)
        lr_loads = sum(x.mnemonic == 'ldr' and x.op_str.startswith('x30, [sp],')
                       for x in body)
        for x in body:
            if any(x.reg_name(op.reg) == 'lr' for op in x.operands
                   if op.type == 1) and x.mnemonic not in ('ret', 'str', 'ldr'):
                raise ValueError('outlined sequence modifies LR unexpectedly')
        if lr_stores != lr_loads:
            raise ValueError('outlined sequence does not preserve LR')
        helpers[address] = body
    memory.extend(bytes((-len(memory)) % 4096))
    expansions = []

    def emit(body, continuation, depth=0):
        if depth > 16:
            raise ValueError('recursive machine-outliner chain')
        for instruction in body[:-1]:
            if instruction.mnemonic == 'bl' and instruction.operands[0].imm in helpers:
                raise ValueError('nested outlined BL requires a continuation block')
            memory.extend(relocate(instruction, base + len(memory)))
        last = body[-1]
        if last.mnemonic == 'ret':
            memory.extend(branch(base + len(memory), continuation) if continuation is not None
                          else bytes(last.bytes))
        elif last.mnemonic == 'br':
            word = int.from_bytes(last.bytes, 'little')
            memory.extend(struct.pack('<I', word | (0x200000 if continuation is not None else 0)))
            if continuation is not None:
                memory.extend(branch(base + len(memory), continuation))
        else:
            target = last.operands[0].imm
            if target in helpers:
                emit(helpers[target], continuation, depth+1)
            elif continuation is None:
                memory.extend(branch(base + len(memory), target))
            else:
                memory.extend(branch(base + len(memory), target, True))
                memory.extend(branch(base + len(memory), continuation))

    helper_ranges = [(a, body[-1].address+4) for a, body in helpers.items()]
    for instruction in instructions:
        if instruction.mnemonic not in ('b', 'bl'):
            continue
        target = instruction.operands[0].imm
        if target not in helpers or any(a <= instruction.address < z for a, z in helper_ranges):
            continue
        clone = base + len(memory)
        emit(helpers[target], instruction.address+4 if instruction.mnemonic == 'bl' else None)
        offset = instruction.address-base
        memory[offset:offset+4] = branch(instruction.address, clone)
        expansions.append({'site': instruction.address, 'helper': target, 'clone': clone,
                           'end': base+len(memory)})
    metadata['symbols'] = [(a, n) for a, n in metadata['symbols'] if a not in helpers]
    metadata['outlined_expansions'] = expansions
    metadata['analysis_only'] = 'machine-outliner expansion'
    output.mkdir(parents=True, exist_ok=True)
    (output / 'memory.bin').write_bytes(memory)
    (output / 'metadata.json').write_text(json.dumps(metadata, indent=2) + '\n')
    print('Expanded %d calls to %d outlined sequences (%d analysis bytes).' %
          (len(expansions), len(helpers), len(memory)-len(original)))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    expand(args.source, args.output)
