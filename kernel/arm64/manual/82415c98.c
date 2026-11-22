/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_82415c98(long *param_1,undefined4 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_82415a10(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}
