/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_82419e24(long *param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;

  if (*param_1 == 0) {
    uVar2 = param_1[1];
    uVar5 = uVar2;
  }
  else {
    uVar2 = param_1[1];
    uVar5 = param_2 - *param_1;
  }
  if (uVar2 == param_1[2]) {
    uVar3 = 4;
    if (uVar2 != 0) {
      uVar3 = uVar2 << 1;
    }
    recovered_82419d40(param_1,uVar3);
  }
  lVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = (undefined1 *)(lVar1 + uVar2);
  for (uVar3 = uVar2; uVar5 < uVar3; uVar3 = uVar3 - 1) {
    *puVar4 = puVar4[-1];
    puVar4 = puVar4 + -1;
  }
  *(undefined1 *)(lVar1 + uVar5) = *param_3;
  param_1[1] = uVar2 + 1;
  return lVar1 + uVar5;
}
