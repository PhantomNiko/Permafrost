/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8243a1c8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  uVar2 = 0;
  if ((param_1 != 0) && (uVar1 = recovered_82400de8((char *)param_1), uVar2 = 0, uVar1 != 0)) {
    uVar2 = (uVar1 + 0xc) / 0xd;
  }
  return uVar2;
}
