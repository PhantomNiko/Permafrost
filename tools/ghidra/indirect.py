#!/usr/bin/env python3
"""Recover indirect-call argument areas for the C export's analysis pass.

Requires Capstone. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_AC_WRITE
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_REG_ESP


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('symbols', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--base', type=lambda s: int(s, 0), required=True)
    parser.add_argument('--text-end', type=lambda s: int(s, 0), required=True)
    args = parser.parse_args()
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    decoder.detail = decoder.skipdata = True
    instructions = list(decoder.disasm(
        args.binary.read_bytes()[:args.text_end - args.base], args.base))
    starts = {address for address, name in json.loads(args.symbols.read_text())}
    history, rows = [], []
    for index, instruction in enumerate(instructions):
        if not instruction.id:
            continue
        if instruction.address in starts:
            history = []
        if instruction.mnemonic == 'call' and instruction.operands[0].type != X86_OP_IMM:
            pushes, slots = 0, []
            for previous in reversed(history[-32:]):
                if previous.mnemonic in ('call', 'ret', 'jmp', 'leave'):
                    break
                if previous.mnemonic == 'mov' and previous.op_str == 'ebp, esp':
                    break
                if previous.mnemonic == 'sub' and previous.op_str.startswith('esp,'):
                    break
                if previous.mnemonic == 'push':
                    pushes += 1
                elif previous.mnemonic == 'pop':
                    pushes -= 1
                for operand in previous.operands:
                    if (operand.type == X86_OP_MEM and operand.mem.base == X86_REG_ESP
                            and 0 <= operand.mem.disp < 64 and operand.access & CS_AC_WRITE):
                        slots.append(operand.mem.disp + operand.size)
            count = max(pushes, (max(slots, default=0) + 3) // 4, 0)
            kind = 'unsigned int'
            for following in instructions[index + 1:index + 9]:
                if following.mnemonic.startswith('fld') or following.mnemonic == 'call':
                    break
                if following.mnemonic.startswith('fst'):
                    kind = 'double'
                    break
            rows.append('%x\t%d\t%s\n' % (instruction.address, count, kind))
        history.append(instruction)
    args.output.write_text(''.join(rows))
    print('Recovered %d indirect call argument areas.' % len(rows))


if __name__ == '__main__':
    main()
