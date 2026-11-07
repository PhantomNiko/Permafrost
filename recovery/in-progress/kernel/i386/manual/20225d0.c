/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20225d0(int *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *data;
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar3 = recovered_2019540(param_2 * 8);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        uVar2 = *(undefined4 *)((int)data + iVar5 * 8);
        *(undefined4 *)((int)pvVar3 + iVar5 * 8 + 4) = *(undefined4 *)((int)data + iVar5 * 8 + 4);
        *(undefined4 *)((int)pvVar3 + iVar5 * 8) = uVar2;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    recovered_20195a0(data);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
    uVar4 = param_1[1];
    if (uVar4 < param_2) {
      do {
        *(undefined4 *)((int)pvVar3 + uVar4 * 8 + 4) = 0;
        *(undefined4 *)((int)pvVar3 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
      param_1[1] = param_2;
    }
  }
  return;
}
