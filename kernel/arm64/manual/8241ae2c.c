/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint128 recovered_8241ae2c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = *(ulong *)(param_1 + 0x18);
  return auVar1;
}
