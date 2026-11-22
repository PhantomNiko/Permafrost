/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8244cc8c(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != (ulong *)0x0) {
    for (uVar1 = 0; uVar1 < *param_1; uVar1 = uVar1 + 1) {
      recovered_82400748(*(void **)((long)param_1[2] + uVar1 * 8));
    }
    uVar1 = recovered_82400748((void *)param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return uVar1;
}
