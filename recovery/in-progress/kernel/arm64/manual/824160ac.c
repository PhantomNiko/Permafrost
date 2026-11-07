/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044de38 (*(uint8_t *)(0x82472fc8U))
int recovered_824160ac(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 < 7) && ((0x5dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(int *)(param_1 + 8) * *(int *)(&DAT_4044de38 + (ulong)uVar1 * 4);
  }
  return 0;
}
