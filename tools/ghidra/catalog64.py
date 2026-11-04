#!/usr/bin/env python3
"""Infer x86-64 return-register hints within symbol-bounded native functions.

Analysis only; requires Capstone. Pooka's Free Software License.
"""
import argparse
import json
from pathlib import Path
from capstone import Cs, CS_ARCH_X86, CS_MODE_64


def functions(metadata):
    base = metadata['base']
    if not any(name == '_lua_probe_binary_header' for address, name in metadata['symbols']):
        return sorted({address for address, name in metadata['symbols']} | {metadata['entry']})
    # The probe header contains exported mutable words in __text. They are
    # symbols, but are not functions. The shared zero-return stub is code.
    return sorted({address for address, name in metadata['symbols']
                   if address >= base + 0x84 or address in (base + 0x14, base + 0x29)} |
                  {metadata['entry']})


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('analysis', type=Path)
    a = p.parse_args()
    metadata = json.loads((a.analysis / 'metadata.json').read_text())
    raw = (a.analysis / 'memory.bin').read_bytes()
    base = metadata['base']
    end = next(address + size for name, address, size in metadata['sections'] if name == '__text')
    starts = functions(metadata)
    decoder = Cs(CS_ARCH_X86, CS_MODE_64)
    decoder.detail = True
    hints = {}
    rank = {'B': 1, 'N': 2, 'Q': 3, 'S': 4, 'D': 5}
    for start, limit in zip(starts, starts[1:] + [end]):
        sequence = list(decoder.disasm(raw[start-base:limit-base], start))
        for index, instruction in enumerate(sequence):
            if instruction.mnemonic != 'call' or not instruction.op_str.startswith('0x'):
                continue
            target = int(instruction.op_str, 16)
            if target not in starts:
                continue
            live_integer, live_float = True, True
            hint = None
            for following in sequence[index+1:index+17]:
                if following.mnemonic in ('call', 'ret', 'jmp', 'ud2'):
                    break
                reads, writes = following.regs_access()
                reads = {following.reg_name(r) for r in reads}
                writes = {following.reg_name(r) for r in writes}
                if live_float and 'xmm0' in reads:
                    hint = 'S' if any(s in following.mnemonic for s in ('ss', 'cvtss')) else 'D'
                    break
                if live_integer and reads & {'rax', 'eax', 'ax', 'al', 'ah'}:
                    hint = 'Q' if 'rax' in reads else ('N' if reads & {'eax', 'ax'} else 'B')
                    break
                if writes & {'rax', 'eax', 'ax', 'al', 'ah'}:
                    live_integer = False
                if 'xmm0' in writes:
                    live_float = False
                if not live_integer and not live_float:
                    break
            if hint and rank[hint] > rank.get(hints.get(target), 0):
                hints[target] = hint
    (a.analysis / 'seeds.txt').write_text(''.join('%x\n' % x for x in starts))
    (a.analysis / 'return-hints.txt').write_text(''.join('%x\t%s\n' % x for x in sorted(hints.items())))
    print('Inferred %d return hints for %d x86-64 functions' % (len(hints), len(starts)))


if __name__ == '__main__':
    main()
