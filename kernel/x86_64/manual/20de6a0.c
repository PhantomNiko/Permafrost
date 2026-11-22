/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20de6a0(undefined4 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 != (undefined4 *)0x0) {
    recovered_2000bb0(*(void **)(param_1 + 0xe));
    if (*(long *)(param_1 + 0x16) != 0) {
      uVar1 = 0;
      do {
        recovered_2000bb0(*(void **)(*(long *)(param_1 + 0x14) + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulong *)(param_1 + 0x16));
    }
    recovered_2000bb0(*(void **)(param_1 + 0x14));
    recovered_205ec00((undefined8 *)(param_1 + 0x18));
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((long)param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[0x12] = 1;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    param_1[0x1a] = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}
