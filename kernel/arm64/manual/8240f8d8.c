/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047b820 (*(uint64_t volatile *)(0x82547900U))
void recovered_8240f8d8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = DAT_4047b820;
  DAT_4047b820 = lVar1 + 1;
  return;
}
