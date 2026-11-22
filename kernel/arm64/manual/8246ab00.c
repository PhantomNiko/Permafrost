/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246ab00(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  recovered_82400748(*(void **)(param_1 + 0xe));
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x16); uVar1 = uVar1 + 1) {
    recovered_82400748(*(void **)((long)*(void **)(param_1 + 0x14) + uVar1 * 8));
  }
  recovered_82400748(*(void **)(param_1 + 0x14));
  recovered_8243166c((undefined8 *)(param_1 + 0x18));
  recovered_8246ab54(param_1);
  return;
}
