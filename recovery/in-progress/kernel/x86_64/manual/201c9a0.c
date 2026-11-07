/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea20 (*(uint64_t volatile *)(0x215a250U))
void recovered_201c9a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_020cea20;
  DAT_020cea20 = lVar1 + 1;
  return;
}
