#!/usr/bin/env python3
"""Execute differently sized views of overlapping stack and parameter fields.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import aggregate_views,rewrite_scalar_storage


def main():
    source='''#include "support.h"
#define local_8 (*(uint32_t *)(frame+8))
uint32_t stack_probe(void)
{
 unsigned char frame[32]={0};frame[7]=0x39;frame[16]=0x7b;
 _local_8=UINT64_C(0x1122334455667788);
 if(*(uint32_t *)(frame+12)!=0x11223344)return 1;
 if(frame[7]!=0x39 || frame[16]!=0x7b)return 2;
 return _local_8!=0x55667788;
}
#undef local_8
uint32_t parameter_probe(byte param_7)
{
 _param_7=0x123456ab;
 return _param_7 ^ param_7;
}
'''
    # Each function is translated independently, as in the recovery pipeline.
    split=source.index('uint32_t parameter_probe')
    source=aggregate_views(source[:split],[['L','local_8','-8','uint:4'],['S','stack','-8','8'],
        ['U','_local_8','1','8'],['U','_local_8','2','4']])+aggregate_views(source[split:],[
        ['U','_param_7','1','4'],['U','_param_7','2','4']])
    source+=rewrite_scalar_storage('''uint32_t multiply(uint32_t *pointer){
 return *pointer * 4;
}
uintptr_t bits(uint32_t *pointer){return pointer * 4;}
byte *address_bits(double *pointer){return (byte *)*pointer;}
''')
    source+='''int main(void){uint32_t value=7;double pointer=pf_bits_double(0x123456789abcdef0ULL);if((uintptr_t)address_bits(&pointer)!=0x123456789abcdef0ULL)return 9;return stack_probe() || parameter_probe(3)!=0x12345600 || multiply(&value)!=28 || bits((void *)0x1000)!=0x4000;}\n'''
    root=Path(__file__).resolve().parents[1]
    with tempfile.TemporaryDirectory(prefix='permafrost-aggregate-')as directory:
        out=Path(directory);(out/'probe.c').write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-nostdinc','-I',str(root/'sdk/include'),'-I',str(root/'kernel'),str(out/'probe.c'),'-o',str(out/'probe')],check=True)
        subprocess.run([str(out/'probe')],check=True)
    print('Per-access aggregate widths preserve adjacent bytes and parameter aliases; pointer scaling retains dereferences.')


if __name__=='__main__':main()
