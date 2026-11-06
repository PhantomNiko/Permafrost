#!/usr/bin/env python3
"""Compile and execute recovered stack views with array pointer declarators.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools/ghidra'))
from translate import lvalue, stack_declaration


def main():
    source = '  undefined1 (*local_40) [16];\n  param_1 = local_40;\n'
    declaration, kind = stack_declaration(source, 'local_40')
    assert declaration[0] == '  undefined1 (*local_40) [16];\n'
    assert kind == 'undefined1(*)[16]'
    assert stack_declaration('  param_1 = local_40;\n', 'local_40') == (None, None)
    assert stack_declaration('  uint local_20[2][3];\n', 'local_20')[1] == 'uint[2][3]'
    code = '''#include <stdint.h>
int main(void) {
    _Alignas(16) uint8_t frame[64] = {0};
    uint8_t rows[2][16] = {{0}};
    POINTER = rows;
    POINTER[1][3] = 42;
    VOLATILE_POINTER = rows;
    VOLATILE_POINTER[0][2] = 17;
    MATRIX[1][2] = 0x1234;
    return rows[1][3] != 42 || rows[0][2] != 17 || *(uint16_t *)(frame+42) != 0x1234;
}
'''
    code = code.replace('VOLATILE_POINTER', lvalue('uint8_t(*)[16]', 'frame+16', True))
    code = code.replace('POINTER', lvalue('uint8_t(*)[16]', 'frame'))
    code = code.replace('MATRIX', lvalue('uint16_t[2][3]', 'frame+32'))
    with tempfile.TemporaryDirectory(prefix='permafrost-declarators-') as directory:
        root = Path(directory)
        (root / 'probe.c').write_text(code)
        subprocess.run(['clang', '-std=c11', '-Wall', '-Wextra', '-Werror',
                        str(root / 'probe.c'), '-o', str(root / 'probe')], check=True)
        subprocess.run([str(root / 'probe')], check=True)
    print('Recovered pointer and multidimensional array views passed.')


if __name__ == '__main__':
    main()
