/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int * recovered_8241c3a4(long *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int *piVar2;
  long *plVar4;
  long lVar3;

  if (param_1[4] != 0) {
    uVar1 = recovered_8241c414((long)param_1,(byte *)param_2);
    plVar4 = (long *)(param_1[3] + uVar1 * 8);
    while (lVar3 = *plVar4, lVar3 != -1) {
      piVar2 = (int *)(*param_1 + lVar3 * 0x38);
      if (*piVar2 == *param_2) {
        return piVar2;
      }
      plVar4 = (long *)(param_1[6] + lVar3 * 8);
    }
  }
  return (int *)(*param_1 + param_1[1] * 0x38);
}
