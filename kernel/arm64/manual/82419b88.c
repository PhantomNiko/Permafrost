/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_82419b88(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  double in_d0;
  double extraout_d0 = 0;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_82419bec(param_1,param_2);
    uVar1 = param_1[1];
    while (in_d0 = extraout_d0, uVar1 < param_2) {
      *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
      uVar1 = uVar1 + 1;
      param_1[1] = uVar1;
    }
  }
  return in_d0;
}
