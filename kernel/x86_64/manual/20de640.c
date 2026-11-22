/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20de640(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        recovered_20de6a0((undefined4 *)(*(long *)(param_1 + 0x40) + lVar1));
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0xa8;
      } while (uVar2 < *(ulong *)(param_1 + 0x48));
    }
    recovered_2000bb0(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}
