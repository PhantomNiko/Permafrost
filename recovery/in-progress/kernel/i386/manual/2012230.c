/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9179 (*(uint8_t volatile *)(0x2104ae0U))
undefined6 recovered_2012230(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  out(0x3f9,0);
  out(0x3fb,0x80);
  out(0x3f8,3);
  out(0x3f9,0);
  out(0x3fb,3);
  out(0x3fa,199);
  out(0x3fc,0xb);
  DAT_020b9179 = 1;
  return 0x3fc0000000b;
}
