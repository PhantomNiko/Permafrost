#!/usr/bin/env python3
"""Correct ARM NEON effects in an analysis installation of Ghidra.

The two-register shuffles must read and write both operands. VTST also needs
its element width. Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import re


def patch(source):
    declarations = []
    for operation in ('Unzip', 'Zip', 'Transpose'):
        for half in ('Low', 'High'):
            declarations.append('define pcodeop PFVector' + operation + half + ';')
        pattern = r'([DQ])d = Vector' + operation + r'\(\1m,esize1819\);'

        def shuffle(match):
            register = match[1]
            size = 8 if register == 'D' else 16
            return (f'pf_left:{size} = {register}d;\n'
                    f'\tpf_right:{size} = {register}m;\n'
                    f'\t{register}d = PFVector{operation}Low(pf_left,pf_right,esize1819,{size}:4);\n'
                    f'\t{register}m = PFVector{operation}High(pf_left,pf_right,esize1819,{size}:4);')

        source, count = re.subn(pattern, shuffle, source)
        if count != 2:
            raise ValueError(f'Expected both register widths for {operation}, found {count}')
    declarations.append('define pcodeop PFVectorTest;')
    for register, size in [('D', 8), ('Q', 16)]:
        old = f'{register}d = VectorTest({register}n, {register}m);'
        if source.count(old) != 1:
            raise ValueError('Unexpected VTST model')
        source = source.replace(old, f'{register}d = PFVectorTest({register}n,{register}m,esize2021,{size}:4);')
    return '\n'.join(declarations) + '\n' + source


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('language_directory', type=Path)
    args = parser.parse_args()
    source = args.language_directory / 'ARMneon.sinc'
    original = source.with_suffix('.sinc.permafrost-original')
    if not original.exists():
        original.write_bytes(source.read_bytes())
    source.write_text(patch(original.read_text()))
    print('Updated NEON analysis effects; recompile ARM8_le.slaspec before importing snapshots.')


if __name__ == '__main__':
    main()
