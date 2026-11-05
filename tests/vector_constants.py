#!/usr/bin/env python3
"""Verify recovered vector slices read constant bytes rather than low RAM.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import vector_constant_loads


def main():
    expressions=[('*(uint32_t *)((undefined1 [16])0x0 + (undefined1 [16])0x4)',0),
                 ('*(void **)((undefined1 [16])0x0 + (undefined1 [16])0x8)',0),
                 ('*(uint32_t *)((undefined1 [16])0x1122334455667788 + (undefined1 [16])0x4)',0x11223344)]
    code='#include <stdint.h>\ntypedef unsigned char byte;\nint main(void){\n'
    for expression,expected in expressions:
        rewritten=vector_constant_loads(expression)
        if rewritten==expression:raise AssertionError('vector slice was not recovered')
        code+='if((uintptr_t)('+rewritten+')!='+hex(expected)+'ULL)return 1;\n'
    code+='return 0;}\n'
    with tempfile.TemporaryDirectory(prefix='permafrost-vector-test-')as temporary:
        root=Path(temporary);(root/'test.c').write_text(code)
        subprocess.run(['clang','-fno-strict-aliasing',str(root/'test.c'),'-o',str(root/'test')],check=True)
        subprocess.run([str(root/'test')],check=True)
    print('Constant vector byte slices passed.')


if __name__=='__main__':main()
