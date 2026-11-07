/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824615d4(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;

  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = recovered_824512e8(param_1,param_2);
    if ((int)uVar3 < 0) {
      uVar2 = 0;
    }
    else {
      uVar6 = uVar3 & 0xffffffff;
      lVar1 = (uVar3 & 0xffffffff) * 8 + (uVar3 & 0xffffffff);
      recovered_82400748(*(void **)(*(long *)(param_1 + 0x18) + lVar1 * 8));
      recovered_8243166c((undefined8 *)(*(long *)(param_1 + 0x18) + lVar1 * 8 + 8));
      uVar4 = *(ulong *)(param_1 + 8);
      if (uVar6 + 1 < uVar4) {
        recovered_82400a00((void *)(*(long *)(param_1 + 0x18) + uVar6 * 0x48),
                           (void *)(*(long *)(param_1 + 0x18) + (ulong)((int)uVar3 + 1) * 0x48),
                           (uVar4 + ~uVar6) * 0x48);
        uVar4 = *(ulong *)(param_1 + 8);
      }
      *(ulong *)(param_1 + 8) = uVar4 - 1;
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + (uVar4 - 1) * 0x48);
      puVar5[1] = 0;
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5[4] = 0;
      puVar5[3] = 0;
      puVar5[5] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[8] = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}
