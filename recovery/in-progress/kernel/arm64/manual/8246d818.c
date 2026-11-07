/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246d818(long param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = (ulong)param_3;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      iVar2 = -1;
      if (uVar1 != 0) {
        iVar2 = param_2 + 1;
      }
      *(int *)(param_1 + (ulong)param_2 * 4) = iVar2;
      param_2 = param_2 + 1;
    }
  }
  return;
}
