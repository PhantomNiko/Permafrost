/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045372d (*(uint8_t *)(0x8247e058U))
#define PTR_DAT_4045a210 (*(uint8_t * *)(0x82486628U))
undefined * recovered_824643f8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 1U < 5) {
    return (&PTR_DAT_4045a210)[param_1 - 1U];
  }
  return &DAT_4045372d;
}
