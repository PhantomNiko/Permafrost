#!/usr/bin/env python3
"""Execute recovered numeric conversions and IEEE representation views.

Pooka's Free Software License.
"""
from pathlib import Path
import subprocess
import sys
import tempfile
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools/ghidra'))
from translate import rewrite_scalar_storage,rewrite_pointer_float_views,rewrite_float_pointer_expressions,rewrite_float_slot_views


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
void *indexed_pointer(pf_kernel_value *value) { return (void *)value[0].number; }
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
uint64_t wide_raw_conversion(int value) {
 uint64_t wide_bits;
 wide_bits=VectorSignedToFloat
          (value,0);
 return wide_bits;
}
double wide_converted_view(int value) {
 uint64_t wide_bits;
 wide_bits=VectorSignedToFloat(value,0);
 return (double)wide_bits;
}
void value_storage(uint *out,float f_storage) {
 out[1]=(int)f_storage;
 out[2]=f_storage;
}
float member_number(pf_kernel_value *records) { return (float)records->kind; }
double indexed_member(pf_kernel_value *records) { return (double)records[1].kind; }
uint upper_word(double upper_value) { return (ulong)upper_value >> 0x20; }
double joined_words(double joined_value) {
 return (double)(((ulonglong)joined_value & 0xffffffff00000000) + ((ulonglong)joined_value & 0xffffffff));
}
void *product_slot(float factor,int index) { return (void *)(factor*(float)index); }
void *quotient_slot(float numerator,float denominator) { return (void *)(numerator/denominator); }
float pointer_parameter(void *raw) { return (float)raw; }
float captured_address(int *addressed) { return (float)&addressed[1]; }
float casted_parameter(uintptr_t word) { return (float)(uint128 *)word; }
void *pointer_arithmetic(int *base) { return (void *)(base+2); }
void *integer_pointer(float numeric_pointer_value) { return (void *)((int)numeric_pointer_value); }
void *cast_expression(unsigned long long encoded) { return (void *)(float)pf_bits_double(encoded); }
void *extended_cast(long double extended_value) { return (void *)(float)(longdouble)extended_value; }
void *nested_extended_cast(float nested_value) { return (void *)(float)(longdouble)(float10)nested_value; }
void *integer_index(int *indexed_base,float floating_index) { return (void *)(indexed_base+(int)floating_index); }
'''
    functions=rewrite_float_pointer_expressions(rewrite_scalar_storage(functions))
    functions=rewrite_pointer_float_views(functions,{'raw','addressed'},False)
    functions+=rewrite_float_slot_views('''
uint mixed_pointer_slots(float *slots,uint offset) {
 slots[1] = (float)((uint)*slots+offset);
 return (uint)slots[1];
}
float numeric_pointer_slot(float *slots) { return slots[2]+0.25f; }
uint comma_pointer_slot(float *slots,uint offset) {
 if((slots[1] = (float)((uint)*slots+offset), (uint)slots[1]!=0))
  return (uint)slots[1];
 return 0;
}
uint copy_word_slot(float *slots,uint *word) {
 slots[1] = (float)*word;
 return (uint)slots[1];
}
uint converted_word_slot(float *slots,float number) {
 slots[1] = (float)(int)number;
 slots[2] = (float)1.5;
 return (uint)slots[1];
}
uint byte_word_slot(float *slots,void *word) {
 slots[1] = (float)(uint)*(byte *)word;
 return (uint)slots[1];
}
uint typed_word_slot(void *word) { return (uint)*(float *)word; }
uint dereference_word_slot(float *slot,uint word) {
 *slot = (float)word;
 return (uint)*slot;
}
''', pointer_slots=True)
    functions+=rewrite_float_slot_views('''
uint numeric_cast_pointer(float *slots) { return (uint)slots[2]; }
''')
    source='#include "support.h"\n'+rewrite_pointer_float_views(functions,{'records'},True)+'''
int main(void) {
 float mixed_slots[3]={pf_bits_float(0x03100000),0.0f,1.5f};
 if(mixed_pointer_slots(mixed_slots,4)!=0x03100004 ||
    pf_float_bits(mixed_slots[1])!=0x03100004 ||
    numeric_pointer_slot(mixed_slots)!=1.75f)return 26;
 if(comma_pointer_slot(mixed_slots,8)!=0x03100008)return 27;
 uint raw_word=0x03500000;
 if(copy_word_slot(mixed_slots,&raw_word)!=raw_word)return 28;
 if(converted_word_slot(mixed_slots,7.5f)!=7 || mixed_slots[2]!=1.5f)return 29;
 if(numeric_cast_pointer(mixed_slots)!=1)return 30;
 byte raw_byte=127;
 if(byte_word_slot(mixed_slots,&raw_byte)!=127)return 31;
 if(typed_word_slot(&raw_word)!=raw_word)return 32;
 if(dereference_word_slot(mixed_slots,0x03500000)!=0x03500000)return 33;
 if((uintptr_t)product_slot(1.5f,3)!=pf_float_bits(4.5f))return 16;
 if((uintptr_t)quotient_slot(-1.5f,2.0f)!=pf_float_bits(-0.75f))return 17;
 if(pointer_parameter((void *)(uintptr_t)0x3fc00000)!=1.5f)return 18;
 int addressed[4];
 if(pf_float_bits(captured_address(addressed))!=(uint32_t)(uintptr_t)&addressed[1])return 19;
 if(casted_parameter(0x3fc00000)!=1.5f)return 20;
 if(pointer_arithmetic(addressed)!=addressed+2 || (uintptr_t)integer_pointer(7.5f)!=7)return 21;
 if((uintptr_t)cast_expression(pf_double_bits(2.5))!=pf_float_bits(2.5f))return 22;
 if((uintptr_t)extended_cast(2.5L)!=pf_float_bits(2.5f))return 24;
 if((uintptr_t)nested_extended_cast(-1.25f)!=pf_float_bits(-1.25f))return 25;
 if(integer_index(addressed,2.5f)!=addressed+2)return 23;
 if(stack_view()!=3.5f || integer_conversion(7)!=7.0f)return 4;
 if((uintptr_t)float_pointer(pf_bits_float(0x240000))!=0x240000)return 5;
 if((uintptr_t)double_pointer(pf_bits_double(0x12345678))!=0x12345678)return 6;
 pf_kernel_value value={.number=pf_bits_float(0x240000)};
 if((uintptr_t)value_pointer(&value)!=0x240000)return 7;
 if((uintptr_t)indexed_pointer(&value)!=0x240000)return 12;
 if((uintptr_t)converted_pointer(-7)!=pf_float_bits(-7.0f))return 8;
 if(raw_conversion(-7)!=pf_float_bits(-7.0f)||converted_view(-7)!=-7.0f)return 9;
 if(wide_raw_conversion(-7)!=pf_double_bits(-7.0)||wide_converted_view(-7)!=-7.0)return 15;
 uint stored[3]={0};value_storage(stored,3.5f);
 if(stored[1]!=3||stored[2]!=pf_float_bits(3.5f))return 10;
 pf_kernel_value records[2]={{.kind=7},{.kind=9}};
 if(member_number(records)!=7.0f||indexed_member(records)!=9.0)return 11;
 for(uint64_t i=0;i<512;i++) {
  uint64_t bits=(i*UINT64_C(0x9e3779b97f4a7c15))^UINT64_C(0x4085e00000000000);
  if(upper_word(pf_bits_double(bits))!=(uint)(bits>>32))return 13;
  if(pf_double_bits(joined_words(pf_bits_double(bits)))!=bits)return 14;
 }
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
