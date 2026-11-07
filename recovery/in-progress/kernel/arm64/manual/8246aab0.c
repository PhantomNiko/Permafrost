/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246aab0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_1 != 0) {
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < *(ulong *)(param_1 + 0x48); uVar2 = uVar2 + 1) {
      recovered_8246ab00((undefined4 *)((long)*(void **)(param_1 + 0x40) + lVar1));
      lVar1 = lVar1 + 0xa8;
    }
    recovered_82400748(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}
