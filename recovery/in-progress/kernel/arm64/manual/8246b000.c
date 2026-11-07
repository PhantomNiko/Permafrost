/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246b000(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;

  if (((param_1 != (long *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = recovered_8246b1ec(param_1,(byte *)param_2);
    if (-1 < (int)uVar1) {
      lVar4 = *param_1;
LAB_40448f98:
      uVar3 = recovered_8244ed8c((undefined8 *)(lVar4 + (long)(int)uVar1 * 0x50 + 8),
                                 (undefined8 *)param_3);
      return uVar3;
    }
    uVar3 = recovered_8246b258(param_1,param_1[1] + 1);
    if ((int)uVar3 != 0) {
      uVar1 = recovered_82400de8((char *)param_2);
      lVar2 = recovered_8244a904(param_2,uVar1);
      if (lVar2 != 0) {
        lVar4 = *param_1;
        uVar1 = param_1[1];
        param_1[1] = uVar1 + 1;
        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 0x50);
        *plVar5 = lVar2;
        *(undefined1 *)(plVar5 + 9) = 1;
        goto LAB_40448f98;
      }
    }
  }
  return 0;
}
