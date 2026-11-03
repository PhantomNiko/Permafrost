#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2732c
 */

void FUN_0002732c(int *param_1,uint param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    FUN_0002b39c(param_1,param_2);
    return;
  }
  recovered_2b3d8(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined2 *)(*param_1 + uVar1 * 2) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return;
}
