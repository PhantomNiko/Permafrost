/* Pooka's Free Software License. Integer conversion at IEEE rounding boundaries. */
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


extern double __floatdidf(int64_t);
static int signed_double_rounding(void) {
 static const struct { int64_t value; uint64_t bits; } cases[]={
 {0x0LL,0x0ULL},
 {-0x1LL,0xbff0000000000000ULL},
 {0x1LL,0x3ff0000000000000ULL},
 {(-0x7fffffffffffffffLL-1),0xc3e0000000000000ULL},
 {0x7fffffffffffffffLL,0x43e0000000000000ULL},
 {-0x20000000000001LL,0xc340000000000000ULL},
 {-0x20000000000003LL,0xc340000000000002ULL},
 {0x20000000000003LL,0x4340000000000002ULL},
 };
 for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);i++) {
  union { double number; uint64_t bits; } converted={.number=__floatdidf(cases[i].value)};
  if(converted.bits!=cases[i].bits)return 0;
 }
 return 1;
}
int main(void) { return unsigned_float_rounding() && signed_double_rounding()?42:73; }
