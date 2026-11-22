/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_4049a338(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_r4;

  if (param_1 != 0) {
    unaff_r4 = (undefined4 *)param_2;
  }
  if ((param_1 != 0 && param_2 != 0) &&
     (iVar1 = recovered_4049a394(param_1,*(int *)(param_1 + 8) + 1), iVar1 != 0)) {
    uVar2 = recovered_40498d84(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8) * 0x24 + -0x24,
                               unaff_r4);
    return uVar2;
  }
  return 0;
}
