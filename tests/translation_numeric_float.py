#!/usr/bin/env python3
"""Execute recovered numeric conversions and IEEE representation views.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import rewrite_scalar_storage


def main():
    functions='''
float number(unsigned char value) { return (float)CONCAT31(0,value); }
float representation(unsigned high,unsigned char low) { return (float)CONCAT31(high,low); }
static void output(float *out) { *out=3.5f; }
float stack_view(void) {
 unsigned long long slot=0;
 output((float *)&slot);
 return (float)slot;
}
float integer_conversion(unsigned value) { return (float)value; }
void *float_pointer(float f_value) { return (void *)f_value; }
void *double_pointer(double d_value) { return (void *)d_value; }
void *value_pointer(pf_kernel_value *value) { return (void *)value->number; }
#define VectorSignedToFloat(v,m) ((double)(int32_t)(v))
void *converted_pointer(int v) { return (void *)VectorSignedToFloat(v,0); }
uint raw_conversion(int value) {
 uint bits;
 bits=VectorSignedToFloat(value,0);
 return bits;
}
float converted_view(int value) {
 uint bits;
 bits=VectorSignedToFloat(value,0);
 return (float)bits;
}
void value_storage(uint *out,float f_storage) {
 out[1]=(int)f_storage;
 out[2]=f_storage;
}
'''
    source='#include "support.h"\n'+rewrite_scalar_storage(functions)+'''
int main(void) {
 if(stack_view()!=3.5f || integer_conversion(7)!=7.0f)return 4;
 if((uintptr_t)float_pointer(pf_bits_float(0x240000))!=0x240000)return 5;
 if((uintptr_t)double_pointer(pf_bits_double(0x12345678))!=0x12345678)return 6;
 pf_kernel_value value={.number=pf_bits_float(0x240000)};
 if((uintptr_t)value_pointer(&value)!=0x240000)return 7;
 if((uintptr_t)converted_pointer(-7)!=pf_float_bits(-7.0f))return 8;
 if(raw_conversion(-7)!=pf_float_bits(-7.0f)||converted_view(-7)!=-7.0f)return 9;
 uint stored[3]={0};value_storage(stored,3.5f);
 if(stored[1]!=3||stored[2]!=pf_float_bits(3.5f))return 10;
 for(unsigned i=0;i<256;i++) {
  if(number(i)!=(float)i)return 1;
  unsigned bits=(0x3fc012u<<8)|i;
  if(pf_float_bits(representation(0x3fc012u,i))!=bits)return 2;
  if(pf_float_bits(representation(0,i))!=i)return 3;
 }
 return 0;
}
'''
    with tempfile.TemporaryDirectory(prefix='permafrost-conversions-')as directory:
        root=Path(directory);path=root/'probe.c';path.write_text(source)
        subprocess.run(['clang','-std=c11','-O2','-I','kernel',str(path),'-o',str(root/'probe')],check=True)
        subprocess.run([str(root/'probe')],check=True)
    print('Numeric byte conversion and IEEE byte views preserve their distinct values.')


if __name__=='__main__':main()
