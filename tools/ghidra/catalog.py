#!/usr/bin/env python3
"""Recover entry/return hints from original direct-call sites for Ghidra."""
import argparse
import json
from pathlib import Path
from capstone import Cs, CS_ARCH_X86, CS_MODE_32


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('kernel', type=Path)
    parser.add_argument('--out', type=Path, default=Path('build'))
    args = parser.parse_args()
    decoder = Cs(CS_ARCH_X86, CS_MODE_32)
    decoder.detail = True
    blob = args.kernel.read_bytes()
    layout = json.loads(Path('recovery/layout.json').read_text())
    base, start, end = (layout[key] for key in ('kernel_base', 'text_start', 'text_end'))
    instructions = list(decoder.disasm(blob[start-base:end-base], start))
    hints = {}
    for index, instruction in enumerate(instructions):
        if instruction.mnemonic != 'call' or not instruction.op_str.startswith('0x'):
            continue
        address = int(instruction.op_str, 16)
        if not start <= address < end:
            continue
        hints.setdefault(address, '-')
        for following in instructions[index + 1:index + 13]:
            if following.mnemonic in ('call', 'ret', 'jmp'):
                break
            reads, writes = following.regs_access()
            reads = {following.reg_name(r) for r in reads}
            writes = {following.reg_name(r) for r in writes}
            if reads & {'st(0)', 'st0', 'fp0'}:
                hints[address] = 'F'
                break
            if reads & {'eax', 'ax', 'al', 'ah'}:
                if hints[address] != 'F':
                    hints[address] = 'U'
                break
            if writes & {'eax', 'ax', 'al', 'ah'}:
                break
    args.out.mkdir(parents=True, exist_ok=True)
    (args.out / 'function-seeds-calls.txt').write_text(''.join('%x\n' % x for x in sorted(hints)))
    (args.out / 'return-hints.txt').write_text(''.join('%x\t%s\n' % item for item in sorted(hints.items())))


if __name__ == '__main__':
    main()
