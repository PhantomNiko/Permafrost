/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_82439048(long *param_1,long param_2,uint param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;

  uVar4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    if (((param_3 & param_3 - 1) == 0) && (param_4 < (ulong)param_1[1])) {
      uVar2 = recovered_8243910c((byte *)(*param_1 + param_4 * 0x118));
      for (uVar6 = 0; param_3 != uVar6; uVar6 = uVar6 + 1) {
        uVar2 = uVar2 & param_3 - 1;
        uVar1 = *(uint *)(param_2 + (ulong)uVar2 * 4);
        if (uVar1 == 0xffffffff) {
          *(int *)(param_2 + (ulong)uVar2 * 4) = (int)param_4;
          uVar5 = 1;
          goto LAB_404254b8;
        }
        if (((ulong)uVar1 < (ulong)param_1[1]) &&
           (iVar3 = recovered_82400e0c((char *)(*param_1 + (ulong)uVar1 * 0x118),
                                       (char *)(*param_1 + param_4 * 0x118)), iVar3 == 0)) break;
        uVar2 = uVar2 + 1;
      }
      uVar5 = 0;
LAB_404254b8:
      uVar4 = 0;
      if (uVar6 < param_3) {
        uVar4 = uVar5;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
