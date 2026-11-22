/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824178ac(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar1 = 4;
    if (lVar3 != 0) {
      uVar1 = lVar3 << 1;
    }
    recovered_8241c658(param_1,uVar1);
    lVar3 = param_1[1];
  }
  puVar2 = (undefined8 *)(*param_1 + lVar3 * 0x18);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  param_1[1] = lVar3 + 1;
  return;
}
