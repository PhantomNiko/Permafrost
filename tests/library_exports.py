#!/usr/bin/env python3
"""Check module-owned numeric routines and aliases into initialized data.

Pooka's Free Software License.
"""
import json
from pathlib import Path
import sys

sys.path[:0] = [str(Path(__file__).resolve().parents[1] / 'tools')]
from library_native import build_library
from native import inspect
from dylib import inspect as dynamic
from dll import DLL


def main():
    root = Path('build/tests/library-exports')
    root.mkdir(parents=True, exist_ok=True)
    (root / 'functions.h').write_text('''#include "support.h"
long long provided_conversion(double value);
uint64_t call_conversion(void);
extern unsigned char pf_module_state[];
''')
    (root / 'runtime.c').write_text('''#include "functions.h"
long long provided_conversion(double value) { return (long long)value + 7; }
uint64_t call_conversion(void) { return provided_conversion(3.0); }
''')
    (root / 'state.c').write_text('unsigned char pf_module_state[16]={[3]=0x7b};\n')
    profile = dict(architecture='x86_64', module='ExportProbe', version='1.0',
                   install_name='ExportProbe',
                   relocations=[dict(offset=8, width=8, tag=0,
                                     target=dict(kind='image', offset=0))],
                   functions={'0': 'provided_conversion', '1': 'call_conversion'},
                   exports=[dict(name='___fixdfdi', address=0, weak=False, section=1),
                            dict(name='_call_conversion', address=1, weak=False, section=1),
                            dict(name='___fixunsdfdi', address=3, weak=False, section=1),
                            dict(name='_pf_exported_byte', address=2, weak=False, section=2)],
                   data_exports=[dict(name='_pf_exported_byte', offset=3, weak=False)])
    (root / 'profile.json').write_text(json.dumps(profile))
    path = build_library(root, root / 'linked')
    binary = path.read_bytes()
    metadata, memory = inspect(binary)
    exports = {item['name']: item['address'] for item in dynamic(binary)['exports']}
    assert memory[exports['_pf_exported_byte'] - metadata['base']] == 0x7b
    library = DLL(path)
    assert library.call('_call_conversion') == 10
    from numeric_library import integer
    assert integer(library, '___fixunsdfdi', 4294967313.0) == 4294967313
    import struct
    pointer = exports['_pf_exported_byte'] + library.base + 5
    assert struct.unpack('<Q', library.cpu.mem_read(pointer, 8))[0] == library.base
    print('Library exports: module numeric routine and initialized data alias passed.')


if __name__ == '__main__':
    main()
