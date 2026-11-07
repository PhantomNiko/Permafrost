/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_82416188(long param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;

  uVar3 = *(ulong *)(param_1 + 0x30);
  if (CARRY8(param_3,uVar3)) {
    return false;
  }
  uVar2 = uVar3 + param_3;
  bVar1 = uVar2 <= *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    recovered_82400928((void *)param_2,(void *)(*(long *)(param_1 + 0x18) + uVar3),param_3);
    *(ulong *)(param_1 + 0x30) = uVar2;
  }
  return bVar1;
}
