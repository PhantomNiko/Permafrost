/* Compare recovered scalar effects with native NEON instructions.
 * Pooka's Free Software License. */
#include "../kernel/armv7/neon.h"
typedef union { uint128 bits; unsigned char bytes[16]; } Vector;
static unsigned state=0x3611ac95;
static unsigned random_byte(void) {state=state*1664525+1013904223;return state>>24;}
static void native_shuffle(unsigned operation,unsigned element,unsigned width,
 const unsigned char *left,const unsigned char *right,unsigned char *low,unsigned char *high) {
 if(operation==0 && element==1 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvuzp.8 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==0 && element==1 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvuzp.8 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==0 && element==2 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvuzp.16 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==0 && element==2 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvuzp.16 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==0 && element==4 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvuzp.32 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==0 && element==4 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvuzp.32 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==1 && element==1 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvzip.8 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==1 && element==1 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvzip.8 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==1 && element==2 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvzip.16 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==1 && element==2 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvzip.16 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==1 && element==4 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvzip.32 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==1 && element==4 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvzip.32 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==2 && element==1 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvtrn.8 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==2 && element==1 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvtrn.8 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==2 && element==2 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvtrn.16 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==2 && element==2 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvtrn.16 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==2 && element==4 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvtrn.32 d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==2 && element==4 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvtrn.32 q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==3 && element==1 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvtst.8 d0, d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==3 && element==1 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvtst.8 q0, q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==3 && element==2 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvtst.16 d0, d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==3 && element==2 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvtst.16 q0, q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==3 && element==4 && width==8) {
  __asm__ volatile("vld1.8 {d0}, [%0]\n\tvld1.8 {d1}, [%1]\n\tvtst.32 d0, d0, d1\n\tvst1.8 {d0}, [%2]\n\tvst1.8 {d1}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
 if(operation==3 && element==4 && width==16) {
  __asm__ volatile("vld1.8 {d0,d1}, [%0]\n\tvld1.8 {d2,d3}, [%1]\n\tvtst.32 q0, q0, q1\n\tvst1.8 {d0,d1}, [%2]\n\tvst1.8 {d2,d3}, [%3]" :: "r"(left),"r"(right),"r"(low),"r"(high): "d0","d1","d2","d3","memory");
  return;
 }
}
int main(void) {
 for(unsigned test=0;test<32;test++)
 for(unsigned width=8;width<=16;width+=8)
 for(unsigned element=1;element<=4;element*=2)
 for(unsigned operation=0;operation<4;operation++) {
  Vector left={.bits=0},right={.bits=0},low={.bits=0},high={.bits=0};
  for(unsigned i=0;i<width;i++){left.bytes[i]=random_byte();right.bytes[i]=random_byte();}
  native_shuffle(operation,element,width,left.bytes,right.bytes,low.bytes,high.bytes);
  uint128 expected_low,expected_high;
  if(operation==3) {
   expected_low=pf_neon_test(left.bits,right.bits,element,width);expected_high=right.bits;
  } else {
   expected_low=pf_neon_permute(left.bits,right.bits,element,width,operation,0);
   expected_high=pf_neon_permute(left.bits,right.bits,element,width,operation,1);
  }
  if(low.bits!=expected_low || high.bits!=expected_high)return 1+operation;
 }
 return 42;
}
