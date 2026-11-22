/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207ab20(int incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (incoming_edx == (char *)0x0 || incoming_ecx == 0) {
    return 0;
  }
  if ((*(uint *)(incoming_ecx + 8) < **(uint **)(incoming_ecx + 4)) &&
     (iVar1 = recovered_20022a0(*(char **)((*(uint **)(incoming_ecx + 4))[2] +
                                          *(uint *)(incoming_ecx + 8) * 4),incoming_edx), iVar1 == 0
     )) {
    *(int *)(incoming_ecx + 8) = *(int *)(incoming_ecx + 8) + 1;
    return 1;
  }
  return 0;
}
