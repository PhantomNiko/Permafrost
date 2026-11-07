/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_8241bbcc(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;
  double in_d0;
  double extraout_d0 = 0;

  if ((ulong)param_1[2] < param_2) {
    recovered_8241bc60(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_8241bc74((undefined8 *)(extraout_x0 + lVar1),(undefined8 *)(*param_1 + lVar1));
      recovered_8241aee4((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x30;
    }
    recovered_8240facc((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
    in_d0 = extraout_d0;
  }
  return in_d0;
}
