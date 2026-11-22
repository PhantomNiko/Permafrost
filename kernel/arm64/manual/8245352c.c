/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8245352c(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = recovered_824512e8(param_1,param_2);
    if ((int)uVar2 < 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x18) + (uVar2 & 0xffffffff) * 0x48 + 8;
    }
  }
  return lVar1;
}
