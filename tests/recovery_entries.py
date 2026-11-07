#!/usr/bin/env python3
"""Retain native thunk entry addresses independently of target symbol names.

Pooka's Free Software License.
"""
from pathlib import Path
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from merge import entry_bindings


def main():
    with tempfile.TemporaryDirectory(prefix='permafrost-entry-bindings-')as directory:
        root=Path(directory)
        (root/'8241f980.c').write_text('void *thunk_FUN_8241f984(unsigned n) { return 0; }\n')
        (root/'8241f984.c').write_text('void *FUN_8241f984(unsigned n) { return 0; }\n')
        assert entry_bindings(root)=={
            '8241f980':'thunk_FUN_8241f984',
            '8241f984':'FUN_8241f984',
        }
        (root/'82420000.c').write_text('/* Missing function recovery. */\n')
        try:entry_bindings(root)
        except ValueError:pass
        else:raise AssertionError('An unbound original entry was silently omitted')
    print('Thunk aliases retain both native entries; incomplete units fail explicitly.')


if __name__=='__main__':main()
