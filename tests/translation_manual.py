#!/usr/bin/env python3
"""Compile a reused unit without requiring a redundant decompiler export.

Pooka's Free Software License.
"""
import json
from pathlib import Path
import subprocess
import sys
import tempfile


def main():
    repository = Path(__file__).resolve().parents[1]
    sys.path.insert(0, str(repository / 'tools' / 'ghidra'))
    from merge import merge
    with tempfile.TemporaryDirectory(prefix='permafrost-manual-unit-') as directory:
        root = Path(directory)
        notes, manual, units = (root / name for name in ('notes', 'manual', 'units'))
        notes.mkdir()
        manual.mkdir()
        (notes / '1000.c').write_text('''
unsigned int recovered_1000(unsigned int value)
{
  return pf_varargs_6000(thunk_FUN_2010(value));
}
''')
        (notes / '1000.tsv').write_text('G\tthunk_FUN_2010\t2000\tundefined:1\nG\tpf_varargs_6000\t60000000\tundefined:1\n')
        (manual / '2000.c').write_text('''
#include "functions.h"
unsigned int recovered_2000(unsigned int value) { return value + 1; }
''')
        layout = root / 'layout.json'
        layout.write_text(json.dumps({'translation': {
            'pointer_bytes': 8,
            'declarations': ['#define thunk_FUN_2010 recovered_2000',
                             '#define pf_varargs_6000 recovered_2000'],
        }}))
        subprocess.run([sys.executable, str(repository / 'tools/ghidra/translate.py'),
                        '--layout', str(layout), '--notes', str(notes),
                        '--manual', str(manual), '--out', str(units)], check=True)
        merge(units, root / 'runtime.c', root / 'functions.h')
        with (root / 'runtime.c').open('a') as stream:
            stream.write('\nint main(void) { return recovered_1000(5) != 7; }\n')
        executable = root / 'check'
        subprocess.run(['clang', '-std=c11', '-I', str(repository / 'kernel'),
                        str(root / 'runtime.c'), '-o', str(executable)], check=True)
        subprocess.run([str(executable)], check=True)
    print('Reused unit: declaration, direct call and inline body passed.')


if __name__ == '__main__':
    main()
