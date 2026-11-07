/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2021150(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *data;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;

  param_1[1] = 0;
  uVar2 = 0;
  if ((uint)param_1[2] < param_2) {
    pvVar3 = recovered_2019540(param_2);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar3 + iVar4) = *(undefined1 *)((int)data + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_20195a0(data);
    *param_1 = (int)pvVar3;
    param_1[2] = param_2;
    uVar2 = param_1[1];
  }
  while (uVar2 < param_2) {
    *(undefined1 *)(*param_1 + uVar2) = *param_3;
    uVar2 = param_1[1] + 1;
    param_1[1] = uVar2;
  }
  return;
}
