/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82419d40(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    uVar1 = recovered_82419db4(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined1 *)(uVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = uVar1;
    param_1[2] = param_2;
  }
  return;
}
