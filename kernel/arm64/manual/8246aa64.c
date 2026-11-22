/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246aa64(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_1 != (long *)0x0) {
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_8243166c((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x40;
    }
    recovered_82400748((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
