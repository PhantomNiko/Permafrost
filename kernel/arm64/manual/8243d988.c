/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8243d988(long *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  long in_x2;
  long lVar3;

  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 1);
    if (0x1ff < uVar1 && (uVar1 & 0x1ff) == 0) {
      uVar2 = recovered_8243843c((ulong)*(byte *)(lVar3 + 4),
                                 (ulong)(*(int *)(lVar3 + 8) + (uVar1 >> 9) * param_2),in_x2,
                                 (ulong)uVar1);
      return uVar2;
    }
  }
  return 0;
}
