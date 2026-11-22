/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020ae080 (*(uint8_t volatile *)(0x2108000U))
void recovered_2000090(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_020ae080 = 0;
  recovered_20000b0();
  return;
}
