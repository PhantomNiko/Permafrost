/* Native oracle for ARM byte-table lookup and extension.
 * Pooka's Free Software License. */
#include "../kernel/armv7/neon.h"
typedef union {uint64_t word;unsigned char bytes[8];} Word;
#define TABLE_CASE(length,instruction,list) \
 if(count==length) { \
  __asm__ volatile("vld1.8 {d0},[%0]\n\tvld1.8 {d1},[%1]\n\t" \
   "vld1.8 {d4,d5,d6,d7},[%2]\n\t" instruction " d1," list ",d0\n\t" \
   "vst1.8 {d1},[%3]" \
   ::"r"(indices),"r"(fallback),"r"(table),"r"(out) \
   :"d0","d1","d4","d5","d6","d7","memory");return; \
 }
static void native_table(unsigned extension,unsigned count,const unsigned char *indices,
 const unsigned char *fallback,const unsigned char *table,unsigned char *out) {
 if(extension) {
  TABLE_CASE(1,"vtbx.8","{d4}") TABLE_CASE(2,"vtbx.8","{d4,d5}")
  TABLE_CASE(3,"vtbx.8","{d4,d5,d6}") TABLE_CASE(4,"vtbx.8","{d4,d5,d6,d7}")
 } else {
  TABLE_CASE(1,"vtbl.8","{d4}") TABLE_CASE(2,"vtbl.8","{d4,d5}")
  TABLE_CASE(3,"vtbl.8","{d4,d5,d6}") TABLE_CASE(4,"vtbl.8","{d4,d5,d6,d7}")
 }
}
int main(void) {
 for(unsigned count=1;count<=4;count++)
 for(unsigned extension=0;extension<2;extension++)
 for(unsigned base=0;base<256;base+=8) {
  Word indices={0},fallback={0},table[4]={{0},{0},{0},{0}},out={0};
  for(unsigned i=0;i<8;i++) {
   indices.bytes[i]=(unsigned char)(base+i);
   fallback.bytes[i]=(unsigned char)(i*31+19);
   for(unsigned j=0;j<4;j++)table[j].bytes[i]=(unsigned char)((i+j*8)*7+3);
  }
  native_table(extension,count,indices.bytes,fallback.bytes,table[0].bytes,out.bytes);
  uint64_t expected=PFVectorTableLookup(indices.word,table[0].word,table[1].word,
      table[2].word,table[3].word,count,extension?fallback.word:0);
  if(out.word!=expected)return 1+extension;
 }
 return 42;
}
