/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82461e08(undefined2 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar1 = 0;
  if (param_1 != (undefined2 *)0x0) {
    recovered_8244cc8c((ulong *)(param_1 + 4));
    recovered_82400748(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    recovered_8244a8c0(*(long **)(param_1 + 0x1c),*(long *)(param_1 + 0x20));
    recovered_82400748(*(void **)(param_1 + 0x28));
    uVar2 = recovered_82400748(*(void **)(param_1 + 0x2c));
    uVar1 = (uint)uVar2;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *param_1 = 1;
  }
  return uVar1;
}
