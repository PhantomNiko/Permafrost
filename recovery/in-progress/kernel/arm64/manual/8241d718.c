/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 * recovered_8241d718(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;

  recovered_8241d750(param_1,param_2);
  uVar1 = *(undefined2 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x1c) = uVar1;
  return param_1;
}
