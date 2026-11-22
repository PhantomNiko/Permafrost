/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_824617b4(long param_1,long param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;

  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = recovered_824512e8(param_1,param_2);
  if ((int)uVar3 < 0) {
    if (param_3 == 0) {
      return 0;
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar3 = *(long *)(param_1 + 8) + 1;
    if (uVar2 < uVar3) {
      uVar8 = 4;
      if (uVar2 != 0) {
        uVar8 = uVar2;
      }
      for (; uVar8 < uVar3; uVar8 = uVar8 << 1) {
        if ((long)uVar8 < 0) {
          uVar8 = uVar3;
          break;
        }
      }
      pvVar4 = recovered_82400820(*(void **)(param_1 + 0x18),uVar8 * 0x48);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      uVar3 = *(ulong *)(param_1 + 0x10);
      lVar5 = uVar3 * 0x48;
      for (; uVar3 < uVar8; uVar3 = uVar3 + 1) {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar5);
        puVar1[1] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        puVar1[4] = 0;
        puVar1[3] = 0;
        puVar1[5] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
        puVar1[8] = 0;
        lVar5 = lVar5 + 0x48;
      }
      *(ulong *)(param_1 + 0x10) = uVar8;
      *(void **)(param_1 + 0x18) = pvVar4;
    }
    uVar3 = recovered_82400de8((char *)param_2);
    lVar5 = recovered_8244a904(param_2,uVar3);
    lVar6 = *(long *)(param_1 + 0x18);
    lVar7 = *(long *)(param_1 + 8);
    *(long *)(lVar6 + lVar7 * 0x48) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
    lVar6 = lVar6 + lVar7 * 0x48;
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    lVar5 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar5 + 1;
    lVar5 = *(long *)(param_1 + 0x18) + lVar5 * 0x48;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18) + (uVar3 & 0xffffffff) * 0x48;
  }
  return lVar5 + 8;
}
