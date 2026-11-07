/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8244ce58(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;

  uVar3 = 0;
  if ((param_1 != (long *)0x0) && (param_2 != (undefined8 *)0x0)) {
    lVar6 = *param_1;
    uVar2 = param_1[1];
    uVar5 = lVar6 + 1;
    if (uVar2 < uVar5) {
      uVar7 = 4;
      if (uVar2 != 0) {
        uVar7 = uVar2;
      }
      for (; uVar7 < uVar5; uVar7 = uVar7 << 1) {
        if ((long)uVar7 < 0) {
          uVar7 = uVar5;
          break;
        }
      }
      pvVar4 = recovered_82400820((void *)param_1[2],uVar7 << 6);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      uVar5 = param_1[1];
      lVar6 = uVar5 << 6;
      for (; uVar5 < uVar7; uVar5 = uVar5 + 1) {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar6);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[4] = 0;
        puVar1[6] = 0;
        puVar1[5] = 0;
        lVar6 = lVar6 + 0x40;
        puVar1[7] = 0;
      }
      param_1[1] = uVar7;
      param_1[2] = (long)pvVar4;
      lVar6 = *param_1;
    }
    else {
      pvVar4 = (void *)param_1[2];
    }
    puVar1 = (undefined8 *)((long)pvVar4 + lVar6 * 0x40);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    uVar3 = recovered_8244ed8c((undefined8 *)(param_1[2] + *param_1 * 0x40),param_2);
    if ((int)uVar3 != 0) {
      *param_1 = *param_1 + 1;
      uVar3 = 1;
    }
  }
  return uVar3;
}
