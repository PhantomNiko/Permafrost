/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_824187bc(long *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long *plVar3;

  if (param_1[4] == 0) {
    return -1;
  }
  uVar1 = recovered_82418824((long)param_1,param_2);
  plVar3 = (long *)(param_1[3] + uVar1 * 8);
  while ((lVar2 = *plVar3, lVar2 != -1 && (*(int *)(*param_1 + lVar2 * 0xc) != *(int *)param_2))) {
    plVar3 = (long *)(param_1[6] + lVar2 * 8);
  }
  return lVar2;
}
