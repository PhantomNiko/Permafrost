#!/usr/bin/env python3
"""Prepare recovered C for compilation while preserving observed stack layouts.

The output remains a low-level translation with address-based identifiers.
It requires review and execution tests; this tool does not certify correctness.
"""
import argparse
from pathlib import Path
import re


def ctype(description):
    if description.startswith('P:'):
        return ctype(description[2:]) + ' *'
    if description.startswith('A:'):
        _, count, element = description.split(':', 2)
        return ctype(element) + '[' + count + ']'
    name, size = description.rsplit(':', 1)
    if name == 'void':
        return 'void'
    if name == 'string':
        return 'char[1]'
    if name == 'undefined':
        return 'uint8_t'
    if name.startswith('undefined'):
        return {'1': 'uint8_t', '2': 'uint16_t', '3': 'uint32_t',
                '4': 'uint32_t', '8': 'uint64_t'}.get(size, 'uint32_t')
    if name in ('char', 'bool', 'byte', 'ushort', 'uint', 'int', 'short', 'float', 'double', 'longdouble'):
        return 'long double' if name == 'longdouble' else name
    return {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t', 10: 'long double'}.get(int(size), 'uint32_t')


def lvalue(typename, pointer):
    match = re.match(r'^(.*?)\[(\d+)\]$', typename)
    if match:
        return '(*(%s (*)[%s])(%s))' % (match[1], match[2], pointer)
    return '(*(%s *)(%s))' % (typename, pointer)


def signature(source):
    before = source[:source.index('\n{')].strip()
    return re.sub(r'/\*.*?\*/', '', before, flags=re.S).strip().replace('__fastcall ', '').replace('__cdecl ', '').replace('__thiscall ', '')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--notes', type=Path, default=Path('build/decompiled'))
    parser.add_argument('--out', type=Path, default=Path('build/c-rewrite'))
    args = parser.parse_args()
    manual_names = ('2083b', '20874', '216bc', '21c41', '2609c', '26135', '286b0', '288cc')
    manual = {name: (Path('kernel/core') / (name + '.c')).read_text() for name in manual_names}
    args.out.mkdir(parents=True, exist_ok=True)
    sources = {p.stem: p.read_text() for p in sorted(args.notes.glob('*.c')) if p.stem != 'recovered'}
    header = ['/* Permafrost 0.1; Pooka\'s Free Software License. */', '#pragma once', '#include "support.h"']
    for source in sources.values():
        header.append(signature(source) + ';')
    (args.out / 'functions.h').write_text('\n'.join(header) + '\n')
    for address, source in sources.items():
        metadata = [line.split('\t') for line in (args.notes / (address + '.tsv')).read_text().splitlines()]
        globals_by_address = {int(row[2], 16): row[3] for row in metadata if row[0] == 'G'}
        memory_types = {}
        for row in metadata:
            if row[0] == 'M':
                size, kind = row[3].split(':', 1)
                number = int(row[2], 16)
                if number not in memory_types or int(size) > memory_types[number][0]:
                    memory_types[number] = (int(size), kind)
        globals_used = sorted(set(re.findall(r'\b(?:_?DAT|PTR_DAT|str|_LAB)_[0-9a-f]{8}\b', source)))
        preamble = ['#include "functions.h"']
        for name in globals_used:
            number = int(name[-8:], 16)
            kind = globals_by_address.get(number, 'uint:4')
            if name.startswith('_DAT'):
                kind = memory_types.get(number, (4, 'uint:4'))[1]
            typename = 'char[1]' if name.startswith('str_') else ctype(kind)
            preamble += ['#undef ' + name, '#define %s %s' % (name, lvalue(typename, '0x%xU' % number))]
        locals_used = [row for row in metadata if row[0] == 'L']
        frame_size = max([32] + [-int(row[2]) + 16 for row in locals_used])
        macros = []
        for row in locals_used:
            _, name, offset, kind = row
            # Use the printed declaration's type, including its inferred array
            # extent; the stack offset preserves aliasing between adjacent fields.
            pattern = r'^  (.*?)\b' + re.escape(name) + r'(\s*\[\s*\d+\s*\])?;\n'
            match = re.search(pattern, source, re.M)
            if not match:
                continue
            typename = match[1].strip() + (re.sub(r'\s', '', match[2]) if match[2] else '')
            source = source[:match.start()] + source[match.end():]
            macros.append('#define %s %s' % (name, lvalue(typename, 'frame + %d' % (frame_size + int(offset)))))
        source = source.replace('__fastcall ', '').replace('__cdecl ', '').replace('__thiscall ', '')
        source = re.sub(r'\b(\w+)\._(\d+)_(\d+)_',
                        lambda m: 'PF_PART%s(%s, %s)' % (m[3], m[1], m[2]), source)
        source = re.sub(r'switch\(([^\n]+)\)', r'switch((uintptr_t)(\1))', source)
        source = re.sub(r'case \([^)]*\*\)(0x[0-9a-f]+):', r'case \1:', source)
        source = re.sub(r'\(float\)(\w+\[2\])', r'pf_bits_float((uint32_t)\1)', source)
        source = source.replace('ushort in_FPUControlWord;', 'ushort in_FPUControlWord = pf_fpu_control();')
        if address == '28be0':
            source = source.replace('(undefined *******)\n                                                     ((float)DAT_0002f0a8 * _DAT_0002ca88)',
                                    '(undefined *******)(uintptr_t)pf_float_bits((float)DAT_0002f0a8 * _DAT_0002ca88)')
            source = re.sub(r'\(float\)(ppppppp\w+)', r'pf_bits_float((uintptr_t)\1)', source)
        source = re.sub(r'^(  (?:undefined\d*|int|uint|char|byte|ushort|ulonglong|longlong|float10|float|double)\s+\**(?:extraout_\w+|in_EAX|unaff_EBX));$',
                        r'\1 = 0;', source, flags=re.M)
        opening = source.index('\n{') + 2
        source = source[:opening] + '\n  unsigned char frame[%d];\n' % (frame_size + 32) + source[opening:]
        (args.out / (address + '.c')).write_text('\n'.join(preamble + macros) + '\n' + source)
    for name, content in manual.items():
        (args.out / (name + '.c')).write_text(content)


if __name__ == '__main__':
    main()
