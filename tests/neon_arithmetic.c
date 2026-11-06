/* Native instruction oracle for scalar NEON arithmetic recovery.
 * Pooka's Free Software License. */
#include "../kernel/armv7/neon.h"
typedef union {uint128 bits;unsigned char bytes[16];} Vector;
#define NATIVE_CASE(op,bytes,instruction) \
 if(operation==op && element==bytes) { \
  if(width==16) __asm__ volatile( \
   "vld1.8 {d0,d1},[%0]\n\tvld1.8 {d2,d3},[%1]\n\t" instruction " q0,q0,q1\n\tvst1.8 {d0,d1},[%2]" \
   ::"r"(left),"r"(right),"r"(out):"d0","d1","d2","d3","memory"); \
  else __asm__ volatile( \
   "vld1.8 {d0},[%0]\n\tvld1.8 {d1},[%1]\n\t" instruction " d0,d0,d1\n\tvst1.8 {d0},[%2]" \
   ::"r"(left),"r"(right),"r"(out):"d0","d1","memory"); \
  return; \
 }
static void native_binary(unsigned operation,unsigned element,unsigned width,
 const unsigned char *left,const unsigned char *right,unsigned char *out) {
 NATIVE_CASE(0,1,"vadd.i8") NATIVE_CASE(0,2,"vadd.i16") NATIVE_CASE(0,4,"vadd.i32")
 NATIVE_CASE(1,1,"vsub.i8") NATIVE_CASE(1,2,"vsub.i16") NATIVE_CASE(1,4,"vsub.i32")
 NATIVE_CASE(2,1,"vmul.i8") NATIVE_CASE(2,2,"vmul.i16") NATIVE_CASE(2,4,"vmul.i32")
 NATIVE_CASE(3,1,"vceq.i8") NATIVE_CASE(3,2,"vceq.i16") NATIVE_CASE(3,4,"vceq.i32")
 NATIVE_CASE(4,1,"vcgt.s8") NATIVE_CASE(4,2,"vcgt.s16") NATIVE_CASE(4,4,"vcgt.s32")
 NATIVE_CASE(5,1,"vcgt.u8") NATIVE_CASE(5,2,"vcgt.u16") NATIVE_CASE(5,4,"vcgt.u32")
}
static unsigned state=0xd360a9fb;
static unsigned random_byte(void){state=state*1664525+1013904223;return state>>24;}
int main(void) {
 for(unsigned test=0;test<8;test++)
 for(unsigned width=8;width<=16;width+=8)
 for(unsigned element=1;element<=4;element*=2)
 for(unsigned operation=0;operation<6;operation++) {
  Vector left={.bits=0},right={.bits=0},out={.bits=0};
  for(unsigned i=0;i<width;i++) {
   left.bytes[i]=test==0?0xff:random_byte();
   right.bytes[i]=test==0?0x7f:random_byte();
  }
  native_binary(operation,element,width,left.bytes,right.bytes,out.bytes);
  uint128 expected=pf_neon_binary(left.bits,right.bits,element,operation<4?operation:4,operation==5);
  if(width==8)expected&=UINT64_MAX;
  if(out.bits!=expected)return 1+operation;
 }
 return 42;
}
