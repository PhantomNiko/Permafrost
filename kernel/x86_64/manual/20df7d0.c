/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20df7d0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;

  if (param_2 == 0 || param_1 == 0) {
    return '\0';
  }
  lVar4 = *(long *)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar3 = lVar4 + 1;
  if (uVar1 < uVar3) {
    uVar5 = 4;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    for (; uVar5 < uVar3; uVar5 = uVar5 * 2) {
      if ((long)uVar5 < 0) {
        uVar5 = uVar3;
        break;
      }
    }
    pvVar2 = recovered_2000d40(*(void **)(param_1 + 0x40),uVar5 * 0xa8);
    if (pvVar2 == (void *)0x0) {
      return '\0';
    }
    *(void **)(param_1 + 0x40) = pvVar2;
    *(ulong *)(param_1 + 0x50) = uVar5;
    lVar4 = *(long *)(param_1 + 0x48);
    uVar3 = lVar4 + 1;
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x40);
  }
  *(ulong *)(param_1 + 0x48) = uVar3;
  recovered_2001410((void *)(lVar4 * 0xa8 + (long)pvVar2),(void *)param_2,0xa8);
  return '\x01';
}
