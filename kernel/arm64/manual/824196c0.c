/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_824196c0(long *param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  lVar3 = param_1[1];
  if (lVar3 == param_1[2]) {
    uVar2 = 4;
    if (lVar3 != 0) {
      uVar2 = lVar3 << 1;
    }
    recovered_82419864(param_1,uVar2);
    lVar3 = param_1[1];
  }
  lVar4 = *param_1;
  puVar1 = (undefined4 *)(lVar4 + lVar3 * 8);
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *param_3;
  param_1[1] = lVar3 + 1;
  return lVar4 + (lVar3 + 1) * 8 + -8;
}
