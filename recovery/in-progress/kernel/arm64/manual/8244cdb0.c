/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_8244cdb0(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;

  uVar1 = 0;
  if (param_1 != (ulong *)0x0) {
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
      recovered_8243166c((undefined8 *)((long)param_1[2] + lVar2));
      lVar2 = lVar2 + 0x40;
    }
    uVar3 = recovered_82400748((void *)param_1[2]);
    uVar1 = (uint)uVar3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return uVar1;
}
