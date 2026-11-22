/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2021780(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *data;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar4 = param_1[1];
  if (uVar4 == param_1[2]) {
    uVar5 = 4;
    if (uVar4 != 0) {
      uVar5 = uVar4 * 2;
    }
    if (uVar4 < uVar5) {
      pvVar3 = recovered_2019540(uVar5 * 8);
      data = (void *)*param_1;
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        iVar6 = 0;
        do {
          uVar2 = *(undefined4 *)((int)data + iVar6 * 8);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8 + 4) = *(undefined4 *)((int)data + iVar6 * 8 + 4);
          *(undefined4 *)((int)pvVar3 + iVar6 * 8) = uVar2;
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      recovered_20195a0(data);
      *param_1 = (int)pvVar3;
      param_1[2] = uVar5;
      uVar4 = param_1[1];
    }
  }
  iVar1 = *param_1;
  uVar2 = *param_2;
  *(undefined4 *)(iVar1 + 4 + uVar4 * 8) = param_2[1];
  *(undefined4 *)(iVar1 + uVar4 * 8) = uVar2;
  param_1[1] = uVar4 + 1;
  return;
}
