/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8244f978(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;

  uVar2 = 0;
  if ((param_1 != 0) && (uVar2 = recovered_8244f9f4(param_1,param_2), (int)uVar2 != 0)) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (param_2 < uVar3) {
      lVar4 = param_2 << 6;
      for (uVar5 = param_2; uVar5 < uVar3; uVar5 = uVar5 + 1) {
        recovered_8243166c((undefined8 *)(*(long *)(param_1 + 0x18) + lVar4));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar4);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[4] = 0;
        puVar1[6] = 0;
        puVar1[5] = 0;
        puVar1[7] = 0;
        uVar3 = *(ulong *)(param_1 + 8);
        lVar4 = lVar4 + 0x40;
      }
    }
    *(ulong *)(param_1 + 8) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}
