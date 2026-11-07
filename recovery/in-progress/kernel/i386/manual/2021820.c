/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2021820(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *data;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    pvVar2 = recovered_2019540(param_2);
    data = (void *)*param_1;
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        *(undefined1 *)((int)pvVar2 + iVar4) = *(undefined1 *)((int)data + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    recovered_20195a0(data);
    *param_1 = (int)pvVar2;
    param_1[2] = param_2;
    uVar3 = param_1[1];
    if (uVar3 < param_2) {
      do {
        *(undefined1 *)(*param_1 + uVar3) = *param_3;
        uVar3 = param_1[1] + 1;
        param_1[1] = uVar3;
      } while (uVar3 < param_2);
    }
  }
  return;
}
