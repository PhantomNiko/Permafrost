/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_8241b59c(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  double in_d0;
  double extraout_d0 = 0;
  double extraout_d0_00 = 0;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    lVar3 = uVar2 * 0x18;
    for (; lVar3 = lVar3 + -0x18, param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_82416778((undefined8 *)(*param_1 + lVar3));
      in_d0 = extraout_d0;
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_8241b7f8(param_1,param_2);
    uVar2 = param_1[1];
    lVar3 = uVar2 * 0x18;
    while (in_d0 = extraout_d0_00, uVar2 < param_2) {
      puVar1 = (undefined8 *)(*param_1 + lVar3);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = uVar2 + 1;
      param_1[1] = uVar2;
      lVar3 = lVar3 + 0x18;
    }
  }
  return in_d0;
}
