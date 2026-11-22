/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4045a560 (*(uint8_t volatile *)(0x8248b000U))
void recovered_824000b4(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_4045a560 = 0;
  recovered_824000c0();
  return;
}
