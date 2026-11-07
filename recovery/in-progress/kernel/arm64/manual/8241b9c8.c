/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8241b9c8(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;

  if (param_1[4] == 0) {
    lVar4 = -1;
  }
  else {
    uVar2 = recovered_8241ba3c((long)param_1,param_2);
    plVar3 = (long *)(param_1[3] + uVar2 * 8);
    while ((lVar4 = *plVar3, lVar4 != -1 &&
           (bVar1 = recovered_8241ba84((undefined8 *)(*param_1 + lVar4 * 0x30),param_2), !bVar1))) {
      plVar3 = (long *)(param_1[6] + lVar4 * 8);
    }
  }
  return lVar4;
}
