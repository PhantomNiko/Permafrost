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
    typedef unsigned long uintptr_t;
    typedef unsigned char byte;
    #define CONCAT31(a,b) (((unsigned int)(a)<<8)|(unsigned char)(b))
    static uint64_t pf_double_bits(double value) {
        union { double value; uint64_t bits; } view = { value };
        return view.bits;
    }
    static unsigned int pf_float_bits(float value) {
        union { float value; unsigned int bits; } view = { value };
        return view.bits;
    }
    static float pf_bits_float(unsigned int value) {
        union { unsigned int bits; float value; } view = { value };
        return view.value;
    }
    static double pf_bits_double(uint64_t value) {
        union { uint64_t bits; double value; } view = { value };
        return view.value;
    }
    static uint64_t NEON_ucvtf(uint64_t value) { return pf_double_bits((double)value); }
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
        if (slot != 0x4020000000000000ULL) return 3;
        void *spill = (void *)
            (float)
            (1.25);
        if ((uintptr_t)spill != 0x3fa00000U) return 4;
        double units = (double)NEON_ucvtf(sum(400,600));
        if (units != 1000.0) return 5;
        double joined=(double)((pf_double_bits(3.5)&0xffffffff00000000ULL)+(pf_double_bits(3.5)&0xffffffffULL));
        if(joined!=3.5)return 15;
        double joined_words;
        uint64_t split_bits=pf_double_bits(-13.25);
        double rejoined=(double)((split_bits & 0xffffffff00000000) + (split_bits & 0xffffffff));
        if(rejoined!=-13.25)return 18;
        joined_words=(double)(CONCAT44(0x400c0000,0));
        if(joined_words!=3.5)return 16;
        double integer_words=(double)CONCAT31(0,3);
        if(integer_words!=3.0)return 17;
        float float_flag = (float)CONCAT31(0,1);
        if (float_flag != 1.0f) return 9;
        float_flag = (float)(CONCAT31(0,1)&1);
        if (pf_float_bits(float_flag) != 1) return 10;
        byte character = ' ';
        if ((byte)character - 0x30 < 10) return 6;
        character = '*';
        if ((byte)character - 0x30 < 10) return 7;
        if (character - 0x30 < 10) return 8;
        byte characters[2] = {'*','7'};
        byte *cursor=characters;
        if (*cursor - 0x30 < 10) return 11;
        if (characters[0] - 0x30 < 10) return 12;
        if (*(byte *)((uintptr_t)characters+0) - 0x30 < 10) return 13;
        if (9 < *(byte *)((uintptr_t)characters+1) - 0x30) return 14;
        character = '7';
        return !(character - 0x30 < 10);
    }
    '''
    source = '#define CONCAT44(a,b) (((uint64_t)(a)<<32)|(unsigned int)(b))\n'+source
    source = module.rewrite_double_bits(source)
    source = module.rewrite_double_assignments(source, 'slot')
    source = module.rewrite_scalar_storage(source)
    with tempfile.TemporaryDirectory(prefix='permafrost-translation-') as directory:
        executable = Path(directory) / 'check'
        subprocess.run(['clang', '-x', 'c', '-std=c11', '-', '-o', str(executable)],
                       input=source.encode(), check=True)
        subprocess.run([str(executable)], check=True)
    print('Scalar assignment translation: condition, nested call and array cases passed.')


if __name__ == '__main__':
    main()
