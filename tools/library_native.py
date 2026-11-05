#!/usr/bin/env python3
"""Link recovered C libraries and rebuild their data relocations from metadata.

The build consumes source and JSON only. Pooka's Free Software License.
"""
import argparse
import json
import os
from pathlib import Path
import re
import struct
import subprocess

from darwin import compile_object
from dylib import inspect, rebase_locations, replace_rebases, file_offset
from native import inspect as inspect_native


def build_library(source, output):
    source, output = Path(source), Path(output)
    profile = json.loads((source / 'profile.json').read_text())
    arch = profile['architecture']
    output.mkdir(parents=True, exist_ok=True)
    functions = {int(k, 16): v for k, v in profile['functions'].items()}
    exports = profile['exports']
    result_entries = {int(value, 16) for value in profile.get('arm64_sret_exports', [])}
    if result_entries and arch != 'arm64':
        raise ValueError('X8 result entry adapters require ARM64')
    if not result_entries <= functions.keys():
        raise ValueError('result entry adapter has no recovered implementation')
    stack_entries = {int(key, 16): value for key, value in profile.get('i386_sret_exports', {}).items()}
    if stack_entries and arch != 'i386':
        raise ValueError('stack result entry adapters require i386')
    if not stack_entries.keys() <= functions.keys():
        raise ValueError('stack result entry adapter has no recovered implementation')
    primary, aliases = {}, []
    for item in exports:
        address = item['address']
        if address not in functions:
            continue
        if address in primary:
            aliases.append((primary[address], item['name']))
        else:
            primary[address] = item['name']
    header = (source / 'functions.h').read_text()
    entry_source = []
    for address in sorted(result_entries):
        target = functions[address]
        if not re.fullmatch(r'[A-Za-z_][A-Za-z_0-9]*', target):
            raise ValueError('invalid recovered entry identifier')
        entry = 'pf_arm64_result_%x' % address
        header += '\nvoid ' + entry + '(void);\n'
        # Recovered C uses an explicit first result pointer. Native AAPCS64
        # callers supply that pointer in X8. Floating registers stay intact.
        moves = ['mov x%d,x%d' % (i + 1, i) for i in range(6, -1, -1)]
        moves += ['mov x0,x8', 'b _' + target]
        entry_source.append('__attribute__((naked)) void ' + entry +
                            '(void) { __asm__ volatile(' +
                            json.dumps('\n'.join(moves)) + '); }\n')
    for address, words in sorted(stack_entries.items()):
        target = functions[address]
        if not re.fullmatch(r'[A-Za-z_][A-Za-z_0-9]*', target) or not isinstance(words, int) or not 1 <= words <= 64:
            raise ValueError('invalid i386 result entry description')
        entry = 'pf_i386_result_%x' % address
        header += '\nvoid ' + entry + '(void);\n'
        # Darwin i386 C++ aggregate returns pop the hidden result pointer.
        # Internal recovered calls use ordinary C with an explicit first pointer.
        moves = ['pushl %ebp', 'movl %esp,%ebp', 'andl $-16,%esp']
        if (-4 * words) & 15:
            moves += ['subl $%d,%%esp' % ((-4 * words) & 15)]
        moves += ['pushl %d(%%ebp)' % (8 + 4 * index) for index in range(words - 1, -1, -1)]
        moves += ['call _' + target, 'movl 8(%ebp),%eax', 'leave', 'retl $4']
        entry_source.append('__attribute__((naked)) void ' + entry +
                            '(void) { __asm__ volatile(' + json.dumps('\n'.join(moves)) + '); }\n')
    for address, label in primary.items():
        name = ('pf_arm64_result_%x' % address if address in result_entries else 'pf_i386_result_%x' % address if address in stack_entries else functions[address])
        pattern = r'(?m)^([^#\n]*\b' + re.escape(name) + r'\([^;]*\));'
        attributes = ' __asm__(' + json.dumps(label) + ')'
        if next(e for e in exports if e['name'] == label)['weak']:
            attributes += ' __attribute__((weak))'
        header, count = re.subn(pattern, lambda m: m[1] + attributes + ';', header)
        if count != 1:
            raise ValueError('export has no unique C declaration: ' + label)
    (output / 'functions.h').write_text(header)
    (output / 'runtime.c').write_text((source / 'runtime.c').read_text() + ''.join(entry_source))
    objects = []
    for name in ('runtime', 'state'):
        path = output / (name + '.c') if name == 'runtime' else source / 'state.c'
        target = output / (name + '.o')
        compile_object(path, target, arch,
                       [str(output), str(source), 'kernel', 'sdk/include'], pic=True,
                       extra_flags=['-w', '-fno-inline-functions', '-ferror-limit=0',
                                    '-Wno-int-conversion', '-Wno-incompatible-pointer-types',
                                    '-Wno-incompatible-function-pointer-types'])
        objects.append(str(target))
    # A text stub satisfies ld's platform bookkeeping. No hosted runtime is
    # included; all referenced runtime functions are implemented by the C source.
    platform = 'macosx' if arch in ('i386', 'x86_64') else 'ios'
    stub = ('--- !tapi-tbd-v3\narchs: [ ' + arch + ' ]\nplatform: ' + platform +
            '\ninstall-name: /usr/lib/libSystem.B.dylib\nexports:\n'
            '  - archs: [ ' + arch + ' ]\n    symbols: [ _pf_link_dummy ]\n...\n')
    (output / 'libSystem.tbd').write_text(stub)
    linked = output / 'linked.dylib'
    command = [os.environ.get('PF_LD', 'ld'), '-arch', arch, '-dylib',
               '-no_uuid', '-no_fixup_chains', '-no_adhoc_codesign',
               '-install_name', profile['install_name'], '-o', str(linked),
               '-L' + str(output), '-lSystem', '-dead_strip_dylibs',
               '-undefined', 'dynamic_lookup']
    for old, new in aliases:
        command += ['-alias', old, new]
    # Every runtime dependency must resolve to source. The one dyld binder
    # import is generated by ld and is handled by the guest's library loader.
    subprocess.run(command + objects, check=True)
    binary = bytearray(linked.read_bytes())
    metadata = inspect(binary)
    native, memory = inspect_native(binary)
    symbols = dict((name, address) for address, name in
                   native['symbols'] + native['data_symbols'])
    anchor = symbols['_pf_module_state']
    locations = rebase_locations(binary, metadata)
    for relocation in profile['relocations']:
        target = relocation['target']
        if target['kind'] == 'function':
            address = int(target['address'], 16)
            label = ('_' + functions[address] if address in result_entries or address in stack_entries else
                     primary.get(address, '_' + functions[address]))
            value = symbols[label]
        elif target['kind'] == 'data':
            value = anchor + target['offset']
        elif target['kind'] == 'header':
            value = target['offset']
        else:
            raise ValueError('unknown source relocation target')
        value |= relocation.get('tag', 0)
        address = anchor + relocation['offset']
        width = relocation['width']
        struct.pack_into('<Q' if width == 8 else '<I', binary,
                         file_offset(metadata, address, width), value)
        locations.append((address, width))
    binary = replace_rebases(binary, locations)
    actual = inspect(binary)
    names = {item['name'] for item in actual['exports']}
    missing = {item['name'] for item in exports} - names
    if missing:
        raise ValueError('missing source library exports: ' + ', '.join(sorted(missing)))
    if {item['name'] for item in actual['imports']} - {'dyld_stub_binder'}:
        raise ValueError('source library acquired an unresolved runtime dependency')
    target = output / profile['module']
    target.write_bytes(binary)
    (output / 'source-map.json').write_text(json.dumps(symbols, indent=2) + '\n')
    return target


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    print(build_library(args.source, args.output))
