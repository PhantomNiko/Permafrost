/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_82415d98(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  lVar3 = *param_1;
  if (lVar3 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - lVar3 >> 2;
  }
  if (3 < (ulong)((long)param_4 - (long)param_3)) {
    uVar8 = (ulong)((long)param_4 - (long)param_3) >> 2;
    uVar5 = param_1[1];
    uVar4 = param_1[2];
    uVar6 = uVar5;
    if (uVar4 < uVar5 + uVar8) {
      uVar6 = 4;
      if (uVar4 != 0) {
        uVar6 = uVar4;
      }
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 << 1;
      } while (uVar4 < uVar5 + uVar8);
      recovered_82415a10(param_1,uVar4);
      uVar5 = param_1[1];
      uVar6 = uVar5;
    }
    while (uVar7 < uVar5) {
      puVar1 = (undefined4 *)(*param_1 + (uVar5 - 1) * 4);
      puVar1[uVar8] = *puVar1;
      uVar5 = uVar5 - 1;
    }
    lVar3 = uVar7 << 2;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined4 *)(*param_1 + lVar3) = *param_3;
      lVar3 = lVar3 + 4;
    }
    param_1[1] = uVar6 + uVar8;
    lVar3 = *param_1;
  }
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + uVar7 * 4;
  }
  return lVar2;
}
