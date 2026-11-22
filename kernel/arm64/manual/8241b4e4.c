/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8241b4e4(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;

  uVar1 = 0;
  if ((param_2 != 0) && (*param_1 != 0)) {
    uVar3 = 0;
    lVar2 = param_2 - *param_1;
    do {
      if ((ulong)param_1[1] < uVar3) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *param_3 = lVar2;
    uVar1 = 1;
  }
  return uVar1;
}
