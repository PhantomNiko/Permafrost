/* Pooka's Free Software License. Unsigned integer conversion at IEEE rounding boundaries. */
#include <stdint.h>
extern float __floatundisf(uint64_t);
static int unsigned_float_rounding(void) {
 static const struct { uint64_t value; uint32_t bits; } cases[]={
 {0x0ULL,0x0U},
 {0x1ULL,0x3f800000U},
 {0xffffffULL,0x4b7fffffU},
 {0x1000001ULL,0x4b800000U},
 {0x1000003ULL,0x4b800002U},
 {0xffffffffULL,0x4f800000U},
 {0x100000101ULL,0x4f800001U},
 {0x8000007fffffffffULL,0x5f000000U},
 {0x8000008000000000ULL,0x5f000000U},
 {0x8000008000000001ULL,0x5f000001U},
 {0xffffffffffffffffULL,0x5f800000U},
 };
 for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);i++) {
  union { float number; uint32_t bits; } converted={.number=__floatundisf(cases[i].value)};
  if(converted.bits!=cases[i].bits)return 0;
 }
 return 1;
}


int main(void) { return unsigned_float_rounding()?42:73; }
