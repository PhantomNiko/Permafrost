/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint128 recovered_82418590(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  ulong uVar2;

  uVar2 = NEON_ucvtf((ulong)*(ushort *)(param_1 + 0xa8));
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = uVar2;
  return auVar1;
}
