/* Native instruction oracle for scalar NEON shifts and width conversion.
 * Pooka's Free Software License. */
#include "../kernel/armv7/neon.h"
typedef union { uint128 bits; unsigned char bytes[16]; } Vector;
#define SHIFT_CASE(op,bits,mnemonic,amount) \
 if(operation==op && element_bits==bits && shift==amount) { \
  if(width==16) __asm__ volatile( \
   "vld1.8 {d0,d1},[%0]\n\t" mnemonic " q0,q0,#" #amount "\n\tvst1.8 {d0,d1},[%1]" \
   ::"r"(input),"r"(out):"d0","d1","memory"); \
  else __asm__ volatile( \
   "vld1.8 {d0},[%0]\n\t" mnemonic " d0,d0,#" #amount "\n\tvst1.8 {d0},[%1]" \
   ::"r"(input),"r"(out):"d0","memory"); \
  return; \
 }
#define SHIFT_WIDTH(bits,last) \
 SHIFT_CASE(0,bits,"vshl.i" #bits,3) SHIFT_CASE(0,bits,"vshl.i" #bits,last) \
 SHIFT_CASE(1,bits,"vshr.u" #bits,3) SHIFT_CASE(1,bits,"vshr.u" #bits,bits) \
 SHIFT_CASE(2,bits,"vshr.s" #bits,3) SHIFT_CASE(2,bits,"vshr.s" #bits,bits) \
 SHIFT_CASE(3,bits,"vsra.u" #bits,3) SHIFT_CASE(3,bits,"vsra.u" #bits,bits) \
 SHIFT_CASE(4,bits,"vsra.s" #bits,3) SHIFT_CASE(4,bits,"vsra.s" #bits,bits)
static void native_shift(unsigned operation,unsigned element_bits,unsigned shift,
 unsigned width,const unsigned char *input,unsigned char *out) {
 SHIFT_WIDTH(8,7) SHIFT_WIDTH(16,15) SHIFT_WIDTH(32,31) SHIFT_WIDTH(64,63)
}
#define CONVERSION_CASE(op,bits,mnemonic) \
 if(operation==op && element_bits==bits) { \
  __asm__ volatile("vld1.8 {d0,d1},[%0]\n\t" mnemonic "\n\tvst1.8 {d2,d3},[%1]" \
   ::"r"(input),"r"(out):"d0","d1","d2","d3","memory");return; \
 }
static void native_conversion(unsigned operation,unsigned element_bits,
 const unsigned char *input,unsigned char *out) {
 CONVERSION_CASE(0,8,"vmovl.u8 q1,d0") CONVERSION_CASE(0,16,"vmovl.u16 q1,d0")
 CONVERSION_CASE(0,32,"vmovl.u32 q1,d0")
 CONVERSION_CASE(1,8,"vmovl.s8 q1,d0") CONVERSION_CASE(1,16,"vmovl.s16 q1,d0")
 CONVERSION_CASE(1,32,"vmovl.s32 q1,d0")
 CONVERSION_CASE(2,16,"vmovn.i16 d2,q0") CONVERSION_CASE(2,32,"vmovn.i32 d2,q0")
 CONVERSION_CASE(2,64,"vmovn.i64 d2,q0")
 CONVERSION_CASE(3,8,"vshll.u8 q1,d0,#3") CONVERSION_CASE(3,16,"vshll.u16 q1,d0,#3")
 CONVERSION_CASE(3,32,"vshll.u32 q1,d0,#3")
 CONVERSION_CASE(4,8,"vshll.s8 q1,d0,#3") CONVERSION_CASE(4,16,"vshll.s16 q1,d0,#3")
 CONVERSION_CASE(4,32,"vshll.s32 q1,d0,#3")
}
static unsigned state=0xc3a61bf9;
static unsigned random_byte(void){state=state*1664525+1013904223;return state>>24;}
int main(void) {
 for(unsigned test=0;test<8;test++) {
  Vector input={.bits=0};
  for(unsigned i=0;i<16;i++)input.bytes[i]=test==0?0xff:random_byte();
  for(unsigned width=8;width<=16;width+=8)
  for(unsigned bits=8;bits<=64;bits*=2)
  for(unsigned operation=0;operation<5;operation++)
  for(unsigned boundary=0;boundary<2;boundary++) {
   unsigned shift=boundary?(operation==0?bits-1:bits):3;
   Vector out={.bits=0};
   native_shift(operation,bits,shift,width,input.bytes,out.bytes);
   uint128 expected=operation<3?pf_neon_shift(input.bits,shift,bits,operation!=2,operation!=0):
       VectorShiftRightAccumulate(input.bits,input.bits,shift,bits,operation==3);
   if(width==8)expected&=UINT64_MAX;
   if(out.bits!=expected)return 1+operation;
  }
  for(unsigned bits=8;bits<=32;bits*=2)
  for(unsigned operation=0;operation<5;operation++) {
   Vector out={.bits=0};
   native_conversion(operation,operation==2?bits*2:bits,input.bytes,out.bytes);
   uint128 expected=operation==2?VectorCopyNarrow(input.bits,bits/4):operation<2?
       VectorCopyLong((uint64_t)input.bits,bits/8,operation==0):
       VectorShiftLongLeft((uint64_t)input.bits,3,bits,operation==3);
   if(operation==2)out.bits&=UINT64_MAX;
   if(out.bits!=expected)return 4+operation;
  }
 }
 return 42;
}
