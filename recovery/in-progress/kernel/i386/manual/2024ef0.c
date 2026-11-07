/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(void * *)(frame + 28))
int recovered_2024ef0(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  local_14 = (void *)*param_1;
  bVar10 = local_14 == (void *)0x0;
  if (bVar10) {
    uVar9 = param_1[1];
  }
  else {
    uVar9 = param_2 - (int)local_14 >> 2;
  }
  if (param_3 != param_4) {
    uVar2 = (uint)((int)param_4 + (-4 - (int)param_3)) >> 2;
    uVar8 = param_1[1];
    uVar3 = param_1[2];
    uVar7 = uVar8 + 1 + uVar2;
    if (uVar3 < uVar7) {
      uVar8 = 4;
      if (uVar3 != 0) {
        uVar8 = uVar3;
      }
      do {
        uVar3 = uVar8;
        uVar8 = uVar3 * 2;
      } while (uVar3 < uVar7);
      local_14 = recovered_2019540(uVar3 * 4);
      pvVar4 = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          *(undefined4 *)((int)local_14 + iVar6 * 4) = *(undefined4 *)((int)pvVar4 + iVar6 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_20195a0(pvVar4);
      *param_1 = (int)local_14;
      param_1[2] = uVar3;
      uVar8 = param_1[1];
    }
    if (uVar9 < uVar8) {
      uVar7 = uVar8;
      do {
        *(undefined4 *)((int)local_14 + uVar7 * 4 + uVar2 * 4) =
             *(undefined4 *)((int)local_14 + uVar7 * 4 + -4);
        uVar7 = uVar7 - 1;
      } while (uVar9 < uVar7);
    }
    puVar5 = (undefined4 *)((int)local_14 + uVar9 * 4);
    do {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    } while (param_3 != param_4);
    param_1[1] = uVar8 + uVar2 + 1;
    bVar10 = local_14 == (void *)0x0;
  }
  pvVar4 = (void *)0x0;
  if (!bVar10) {
    pvVar4 = (void *)((int)local_14 + uVar9 * 4);
  }
  return (int)pvVar4;
}
