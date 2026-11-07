/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8246d2e4(long param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;

  uVar3 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    uVar1 = 0;
    if (1 < param_2) {
      uVar1 = param_2 - 2;
    }
    if (1 < param_2) {
      param_2 = 2;
    }
    puVar2 = (uint *)(param_1 + (ulong)uVar1 * 4);
    for (uVar4 = (ulong)param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar3 = (ulong)*puVar2 | uVar3 << 0x20;
      puVar2 = puVar2 + 1;
    }
  }
  return uVar3;
}
