/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82419864(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_824198d8(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined8 *)(uVar1 + uVar2 * 8) = *(undefined8 *)(*param_1 + uVar2 * 8);
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}
