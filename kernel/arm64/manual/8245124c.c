/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8245124c(undefined4 *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  recovered_8243165c((undefined8 *)param_1);
  *param_1 = 5;
  param_1[1] = param_2;
  uVar1 = 0x3f800000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  param_1[2] = uVar1;
  return;
}
