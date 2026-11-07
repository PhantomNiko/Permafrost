/* Native oracle for per-lane shifts, saturation, and cumulative FPSCR.QC.
 * Pooka's Free Software License. */
#include "../kernel/armv7/neon.h"
typedef union {uint128 bits;unsigned char bytes[16];} Vector;
#define NATIVE_CASE(op,bytes,instruction) \
 if(operation==op && element==bytes) { \
  if(width==16) __asm__ volatile( \
   "vld1.8 {d0,d1},[%0]\n\tvld1.8 {d2,d3},[%1]\n\t" instruction " q0,q0,q1\n\tvst1.8 {d0,d1},[%2]" \
   ::"r"(left),"r"(counts),"r"(out):"d0","d1","d2","d3","memory"); \
  else __asm__ volatile( \
   "vld1.8 {d0},[%0]\n\tvld1.8 {d1},[%1]\n\t" instruction " d0,d0,d1\n\tvst1.8 {d0},[%2]" \
   ::"r"(left),"r"(counts),"r"(out):"d0","d1","memory"); \
  return; \
 }
#define WIDTH(bits,bytes) \
 NATIVE_CASE(0,bytes,"vshl.u" #bits) NATIVE_CASE(1,bytes,"vshl.s" #bits) \
 NATIVE_CASE(2,bytes,"vqshl.u" #bits) NATIVE_CASE(3,bytes,"vqshl.s" #bits)
static void native_shift(unsigned operation,unsigned element,unsigned width,
 const unsigned char *left,const unsigned char *counts,unsigned char *out) {
 WIDTH(8,1) WIDTH(16,2) WIDTH(32,4) WIDTH(64,8)
}
static void clear_qc(void){unsigned value=0;__asm__ volatile("vmsr fpscr,%0"::"r"(value):"memory");}
static unsigned qc(void){unsigned value;__asm__ volatile("vmrs %0,fpscr":"=r"(value));return value&(1u<<27);}
static unsigned state=0x37cf0a56;
static unsigned random_byte(void){state=state*1664525+1013904223;return state>>24;}
int main(void) {
 for(unsigned test=0;test<16;test++)
 for(unsigned width=8;width<=16;width+=8)
 for(unsigned element=1;element<=8;element*=2)
 for(unsigned operation=0;operation<4;operation++) {
  /* Unicorn's ARM32 backend traps on variable VSHL.64. Fixed 64-bit
     shifts have a separate native oracle in neon_shifts.c. */
  if(element==8 && operation<2)continue;
  Vector input={.bits=0},counts={.bits=0},out={.bits=0};
  for(unsigned i=0;i<width;i++) {
   input.bytes[i]=test==0?0xff:random_byte();
   counts.bytes[i]=random_byte();
  }
  for(unsigned i=0;i<width;i+=element) {
   const unsigned shifts[]={0,1,7,8,15,16,31,32,63,64,127,128,192,224,248,255};
   counts.bytes[i]=(unsigned char)shifts[test];
  }
  Vector native_counts=counts;
  /* Native lane counts are sign-extended; the C input retains the other
     bits to check that only the signed low byte selects the shift. */
  if(element==8)for(unsigned i=0;i<width;i+=8) {
   uint64_t count=(uint64_t)(int64_t)(int8_t)counts.bytes[i];
   for(unsigned j=0;j<8;j++)native_counts.bytes[i+j]=(unsigned char)(count>>(j*8));
  }
  clear_qc();native_shift(operation,element,width,input.bytes,native_counts.bytes,out.bytes);
  unsigned expected_qc=qc();clear_qc();
  uint128 expected=pf_neon_shift_counts(input.bits,counts.bits,element,
      !(operation&1),!(operation&1),operation>=2);
  unsigned actual_qc=qc();
  if(width==8)expected&=UINT64_MAX;
  if(out.bits!=expected)return 1+operation;
  if(expected_qc!=actual_qc)return 5+operation;
  /* Saturation is cumulative: a following non-saturating instruction
     cannot clear an earlier event. */
  if(actual_qc) {
   (void)pf_neon_shift_counts(0,0,element,1,1,1);
   if(qc()!=actual_qc)return 9;
  }
 }
 return 42;
}
