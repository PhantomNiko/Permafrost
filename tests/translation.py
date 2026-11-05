#!/usr/bin/env python3
"""Execute recovered scalar assignments embedded in C conditions.

Pooka's Free Software License.
"""
from pathlib import Path
import importlib.util
import subprocess
import tempfile


def main():
    root = Path(__file__).resolve().parents[1]
    spec = importlib.util.spec_from_file_location('translate', root / 'tools/ghidra/translate.py')
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    source = '''
    typedef unsigned long long uint64_t;
    static uint64_t pf_double_bits(double value) {
        union { double value; uint64_t bits; } view = { value };
        return view.bits;
    }
    static int sum(int a, int b) { return a+b; }
    int main(void) {
        uint64_t slot = 0;
        int data[2] = { 7, 8 }, flag = 1, next = 0;
        if ((slot = (double)(sum(2,3)), next = 9, flag)) {
            if (slot != 0x4014000000000000ULL || next != 9) return 1;
        }
        if ((slot = (double)(sum(data[flag], sum(1,2))), flag)) {
            if (slot != 0x4026000000000000ULL) return 2;
        }
        slot = (double)(flag ? data[1] : data[0]);
        return slot != 0x4020000000000000ULL;
    }
    '''
    source = module.rewrite_double_assignments(source, 'slot')
    with tempfile.TemporaryDirectory(prefix='permafrost-translation-') as directory:
        executable = Path(directory) / 'check'
        subprocess.run(['clang', '-x', 'c', '-std=c11', '-', '-o', str(executable)],
                       input=source.encode(), check=True)
        subprocess.run([str(executable)], check=True)
    print('Scalar assignment translation: condition, nested call and array cases passed.')


if __name__ == '__main__':
    main()
