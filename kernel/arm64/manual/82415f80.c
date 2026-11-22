/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82415f80(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_82416034(param_1,uVar1);
    lVar3 = param_1[1];
  }
  uVar4 = *param_2;
  puVar2 = (undefined8 *)(*param_1 + lVar3 * 0x10);
  puVar2[1] = param_2[1];
  *puVar2 = uVar4;
  param_1[1] = param_1[1] + 1;
  return;
}
