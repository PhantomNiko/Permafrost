/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8241592c(long *param_1,ulong param_2,undefined4 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    recovered_824159ac(param_1,param_2);
    return;
  }
  recovered_82415a10(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}
