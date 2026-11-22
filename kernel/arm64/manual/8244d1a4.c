/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8244d1a4(undefined4 *param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    recovered_8243166c((undefined8 *)param_1);
    *param_1 = 9;
    *(undefined8 *)(param_1 + 0xe) = param_2;
  }
  return param_1 != (undefined4 *)0x0;
}
