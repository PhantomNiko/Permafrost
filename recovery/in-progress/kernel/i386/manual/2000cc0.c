/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_02098a40 (*(uint8_t volatile *)(0x20df000U))
void recovered_2000cc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  DAT_02098a40 = 0;
  recovered_2000cd0();
  return;
}
