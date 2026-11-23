#!/usr/bin/env python3
"""Execute differently sized views of overlapping stack and parameter fields.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import aggregate_views,rewrite_scalar_storage,physical_array_extent,rewrite_byte_ranges,exact_array_stores


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
    extent=physical_array_extent('uint32_t[3]',64,4)
    source+='\n#define counts (*( '+extent.replace('[',' (*)[')+' )(frame))\n'
    source+='''uint32_t split_counts(void){
 unsigned char frame[64] __attribute__((aligned(16)));volatile unsigned limit=16;
 for(unsigned i=0;i<16;i++)((uint32_t *)(void *)frame)[i]=i+1;
 uint32_t sum=0;for(unsigned i=0;i<limit;i++)sum+=counts[i];return sum;
}
#undef counts
'''
    source+=rewrite_byte_ranges('''int kinds(void){
 byte array[1];
 for(unsigned i=0;i<256;i++){
  array[0]=i;
  if((array[0]-5<2)!=(i==5 || i==6))return 1;
  if((1<(byte)array[0]-5)!=(i!=5 && i!=6))return 2;
 }
 return 0;
}
''')
    source+=exact_array_stores('''int array_expression(void){
  undefined1 local_16 [16];
  uint128 input=((uint128)0x123456789abcdef0ULL<<64)|0x9988776655443322ULL;
  uint128 mask=((uint128)0xff00ff00ff00ff00ULL<<64)|0x00ff00ff00ff00ffULL;
  local_16 = *(undefined1 (*) [16])(&input) ^ mask;
  return PF_PART16(local_16,0)!=(input^mask);
}
''')
    # Ghidra's register array becomes a scalar after memory stores are lowered.
    # Its value must never be mistaken for the address of the copied bytes.
    register_copy=exact_array_stores('''int register_copy(void){
  undefined1 auVar1 [16];
  uint128 target=0;
  PF_PART8(auVar1,0)=0x407f400000000000ULL;
  PF_PART8(auVar1,8)=0x4085e00000000000ULL;
  *(undefined1 (*) [16])(&target) = auVar1;
  return (uint64_t)target!=0x407f400000000000ULL ||
         (uint64_t)(target>>64)!=0x4085e00000000000ULL;
}
''').replace('undefined1 auVar1 [16]','uint128 auVar1')
    source+=register_copy
    source+='''int main(void){uint32_t value=7;double pointer=pf_bits_double(0x123456789abcdef0ULL);if((uintptr_t)address_bits(&pointer)!=0x123456789abcdef0ULL)return 9;return register_copy() || array_expression() || kinds() || split_counts()!=136 || stack_probe() || parameter_probe(3)!=0x12345600 || multiply(&value)!=28 || bits((void *)0x1000)!=0x4000;}\n'''
    root=Path(__file__).resolve().parents[1]
    with tempfile.TemporaryDirectory(prefix='permafrost-aggregate-')as directory:
        out=Path(directory);(out/'probe.c').write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-fsanitize=array-bounds','-fno-sanitize-recover=array-bounds','-nostdinc','-I',str(root/'sdk/include'),'-I',str(root/'kernel'),str(out/'probe.c'),'-o',str(out/'probe')],check=True)
        subprocess.run([str(out/'probe')],check=True)
    print('Per-access aggregate widths preserve adjacent bytes and parameter aliases; pointer scaling retains dereferences.')


if __name__=='__main__':main()
