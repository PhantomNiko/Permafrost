/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2026b60(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *data;
  void *pvVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;

  uVar2 = param_1[1];
  if (uVar2 <= param_2) {
    if (param_2 <= uVar2) {
      return;
    }
    if ((uint)param_1[2] < param_2) {
      pvVar1 = recovered_2019540(param_2 * 2);
      data = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          *(undefined2 *)((int)pvVar1 + iVar5 * 2) = *(undefined2 *)((int)data + iVar5 * 2);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      recovered_20195a0(data);
      *param_1 = (int)pvVar1;
      param_1[2] = param_2;
      uVar2 = param_1[1];
    }
    iVar4 = param_2 - uVar2;
    if (param_2 < uVar2 || iVar4 == 0) {
      return;
    }
    puVar3 = (undefined2 *)(uVar2 * 2 + *param_1);
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}
