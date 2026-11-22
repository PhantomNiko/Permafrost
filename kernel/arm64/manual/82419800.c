/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82419800(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 0x20); uVar1 = uVar1 + 1) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar1 * 8) = 0xffffffffffffffff;
  }
  for (uVar1 = 0; uVar1 < *(ulong *)(param_1 + 8); uVar1 = uVar1 + 1) {
    recovered_8241973c((long *)param_1,uVar1);
  }
  return;
}
