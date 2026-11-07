/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint128 recovered_8241859c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = (double)(int)*(short *)(param_1 + 0xaa);
  return auVar1;
}
