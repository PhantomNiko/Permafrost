/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long * recovered_82418730(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  recovered_8241443c(param_1,param_2[1]);
  for (uVar1 = 0; uVar1 < (ulong)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = *(undefined1 *)(*param_2 + uVar1);
  }
  param_1[1] = param_2[1];
  return param_1;
}
