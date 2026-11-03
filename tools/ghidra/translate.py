#!/usr/bin/env python3
"""Prepare recovered C for compilation while preserving observed stack layouts.

The output remains a low-level translation with address-based identifiers.
It requires review and execution tests; this tool does not certify correctness.
"""
import argparse
import json
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
        return 'double' if name == 'longdouble' else name
    return {1: 'uint8_t', 2: 'uint16_t', 4: 'uint32_t', 8: 'uint64_t', 10: 'long double'}.get(int(size), 'uint32_t')


def lvalue(typename, pointer):
    match = re.match(r'^(.*?)\[(\d+)\]$', typename)
    if match:
        return '(*(%s (*)[%s])(%s))' % (match[1], match[2], pointer)
    return '(*(%s *)(%s))' % (typename, pointer)


def signature(source):
    before = source[:source.index('\n{')].strip()
    return re.sub(r'__(?:fastcall|cdecl|thiscall)\s+', '', re.sub(r'/\*.*?\*/', '', before, flags=re.S)).strip()


def rewrite_double_bits(source):
    # Wrap balanced CONCAT/mask expressions rather than attempting to parse
    # their arbitrary nesting with a regular expression.
    pattern = r'\(double\)(?=(?:CONCAT\d+\(|\(pf_double_bits\())'
    for match in reversed(list(re.finditer(pattern, source))):
        start = match.end()
        opening = source.index('(', start)
        depth = 1
        end = opening + 1
        while depth:
            depth += (source[end] == '(') - (source[end] == ')')
            end += 1
        source = source[:match.start()] + 'pf_bits_double(' + source[start:end] + ')' + source[end:]
    return source


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--notes', type=Path, default=Path('build/decompiled'))
    parser.add_argument('--out', type=Path, default=Path('build/c-rewrite'))
    parser.add_argument('--manual', type=Path, default=Path('kernel/manual'))
    args = parser.parse_args()
    layout = json.loads(Path('recovery/layout.json').read_text())
    current = layout.get('translation', {})
    manual = {path.stem: path.read_text() for path in args.manual.glob('*.c')}
    args.out.mkdir(parents=True, exist_ok=True)
    sources = {p.stem: p.read_text() for p in sorted(args.notes.glob('*.c')) if p.stem != 'recovered'}
    header = ['/* Permafrost 0.3; Pooka\'s Free Software License. */', '#pragma once', '#include "support.h"']
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
        globals_used = sorted({row[1] for row in metadata if row[0] == 'G'} | set(re.findall(r'\b(?:_?DAT|str|_LAB)_[0-9a-f]{8}\b', source)))
        preamble = ['#include "functions.h"']
        for name in globals_used:
            number = int(name[-8:], 16)
            kind = globals_by_address.get(number, 'uint:4')
            if name.startswith('_DAT'):
                kind = memory_types.get(number, (4, 'uint:4'))[1]
            typename = 'char[1]' if name.startswith('str_') else ctype(kind)
            preamble += ['#undef ' + name, '#define %s %s' % (name, lvalue(typename, '0x%xU' % number))]
        pointer_names = {row[1] for row in metadata if row[0] in ('G', 'L') and row[3].startswith(('P:', 'A:'))}
        pointer_names.update(re.findall(r'^  [\w ]+\*+\s*(\w+)(?:\s*\[.*?\])?;', source, re.M))
        locals_used = [row for row in metadata if row[0] == 'L']
        frame_size = max([32] + [-int(row[2]) + 16 for row in locals_used])
        macros = []
        for row in locals_used:
            _, name, offset, kind = row
            # Distinct SSA temporaries can reuse a spill slot. Their C values
            # must remain independent; only named stack objects need aliases.
            if re.fullmatch(r'[A-Za-z]+Var\d+', name):
                continue
            # Use the printed declaration's type, including its inferred array
            # extent; the stack offset preserves aliasing between adjacent fields.
            pattern = r'^  (.*?)\b' + re.escape(name) + r'(\s*\[\s*\d+\s*\])?;\n'
            match = re.search(pattern, source, re.M)
            if not match:
                continue
            typename = match[1].strip() + (re.sub(r'\s', '', match[2]) if match[2] else '')
            source = source[:match.start()] + source[match.end():]
            macros.append('#define %s %s' % (name, lvalue(typename, 'frame + %d' % (frame_size + int(offset)))))
        source = re.sub(r'__(?:fastcall|cdecl|thiscall)\s+', '', source)
        source = re.sub(r'\b(\w+(?:\[[^]\n]+\])?)\.\s*_(\d+)_(\d+)_',
                        lambda m: 'PF_PART%s(%s, %s)' % (m[3], m[1], m[2]), source)
        source = re.sub(r'switch\(([^\n]+)\)', r'switch((uintptr_t)(\1))', source)
        source = re.sub(r'case \([^)]*\*\)(0x[0-9a-f]+):', r'case \1:', source)
        source = re.sub(r'\(float\)(\w+\[2\])', r'pf_bits_float((uint32_t)\1)', source)
        source = source.replace('ushort in_FPUControlWord;', 'ushort in_FPUControlWord = pf_fpu_control();')
        # The decompiler's pointer/float casts are bit reinterpretations.
        for name in sorted(pointer_names, key=len, reverse=True):
            source = re.sub(r'\(float\)(' + re.escape(name) + r'(?:\[[^]\n]+\])?)(?![\w\[])',
                            r'pf_bits_float((uintptr_t)\1)', source)
        source = re.sub(r'\(([^()]+\*+)\)\(float\)(\w+)',
                        r'(\1)(uintptr_t)pf_float_bits((float)\2)', source)
        seed = current['random_state']
        source = source.replace('(float10)DAT_000' + seed, '(float10)(uint)DAT_000' + seed)
        # Eight-byte stack slots often alias two integer words and a double.
        for name in re.findall(r'^  (?:double|longdouble) (\w+);', source, re.M) + [row[1] for row in locals_used if row[3] in ('double:8', 'longdouble:8')]:
            source = re.sub(r'\(ulonglong\)\s*' + name + r'\b', 'pf_double_bits(' + name + ')', source)
        source = rewrite_double_bits(source)
        if address == current['main']:
            source = re.sub(r'(_DAT_000062[0-9a-f]{2} = )(?:recovered_|FUN_000)([0-9a-f]+);', lambda m: m[1] + '0x' + m[2] + ';', source)
            source = source.replace('(uint)local_580', 'pf_float_bits(local_580)')
        if address == current['error_logger']:
            source = source.replace('\n{', '\n{\n  __builtin_va_list args;', 1)
            source = source.replace('local_10 = &dStack00000010;', '__builtin_va_start(args, format);\n  local_10 = (double *)args;')
            source = re.sub(r'(recovered_21685\([^;]+;)', r'\1\n  __builtin_va_end(args);', source, count=1)
        source = re.sub(r'^(  (?:undefined\d*|int|uint|char|byte|ushort|ulonglong|longlong|float10|float|double)\s+\**(?:extraout_\w+|in_EAX|unaff_EBX));$',
                        r'\1 = 0;', source, flags=re.M)
        opening = source.index('\n{') + 2
        source = source[:opening] + '\n  unsigned char frame[%d];\n' % (frame_size + 32) + source[opening:]
        (args.out / (address + '.c')).write_text('\n'.join(line.rstrip() for line in ('\n'.join(preamble + macros) + '\n' + source).splitlines()).rstrip() + '\n')
    for name, content in manual.items():
        (args.out / (name + '.c')).write_text(content)


if __name__ == '__main__':
    main()
