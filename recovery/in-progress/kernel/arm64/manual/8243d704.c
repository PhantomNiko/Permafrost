/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_90 (*(undefined1 (*)[8])(frame + 16))
#define iStack_88 (*(int *)(frame + 24))
undefined8 recovered_8243d704(long *param_1,int param_2,long param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *buffer;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  uVar1 = *(uint *)((long)param_1 + 0x14);
  if ((uVar1 == 0) || ((int)param_1[3] == 0)) {
    return 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (param_2 - 1U) / uVar1;
  }
  recovered_82400b14(auStack_90,0,0x40);
  if (*(uint *)((long)param_1 + 0x24) <= uVar3) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 < 0x20) {
    return 0;
  }
  buffer = recovered_82400744((ulong)*(uint *)(param_1 + 1));
  if (buffer == (void *)0x0) {
    return 0;
  }
  uVar9 = (ulong)uVar2 * (ulong)uVar3;
  iVar4 = 0;
  if ((ulong)*(uint *)(param_1 + 1) != 0) {
    iVar4 = (int)(uVar9 / *(uint *)(param_1 + 1));
  }
  uVar6 = recovered_8243d988(param_1,*(int *)((long)param_1 + 0x1c) + iVar4);
  if ((int)uVar6 != 0) {
    uVar7 = (ulong)*(uint *)(param_1 + 1);
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar9 / uVar7;
    }
    recovered_82400928(auStack_90,(void *)((long)buffer + (uVar9 - uVar5 * uVar7)),
                       (ulong)*(uint *)(param_1 + 4));
    recovered_82400748(buffer);
    if (iStack_88 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 3);
    buffer = recovered_82400744((ulong)*(uint *)(param_1 + 1));
    if (buffer == (void *)0x0) {
      return 0;
    }
    uVar9 = (ulong)uVar2 * (ulong)((param_2 - 1U) - uVar3 * uVar1);
    iVar4 = 0;
    if ((ulong)*(uint *)(param_1 + 1) != 0) {
      iVar4 = (int)(uVar9 / *(uint *)(param_1 + 1));
    }
    uVar6 = recovered_8243d988(param_1,iStack_88 + iVar4);
    if ((int)uVar6 != 0) {
      uVar7 = (ulong)*(uint *)(param_1 + 1);
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar9 / uVar7;
      }
      lVar8 = uVar9 - uVar5 * uVar7;
      if (lVar8 + (ulong)*(uint *)(param_1 + 3) <= uVar7) {
        recovered_82400928((void *)param_3,(void *)((long)buffer + lVar8),
                           (ulong)*(uint *)(param_1 + 3));
        uVar6 = 1;
        goto LAB_40427708;
      }
    }
  }
  uVar6 = 0;
LAB_40427708:
  recovered_82400748(buffer);
  return uVar6;
}
