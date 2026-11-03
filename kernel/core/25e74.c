#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25e74
 */

void FUN_00025e74(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_2 < (uint)param_1[1]) {
    recovered_25ec4(param_1,param_2);
    return;
  }
  recovered_29a7c(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined1 *)(*param_1 + uVar1) = *param_3;
    uVar1 = param_1[1] + 1;
    param_1[1] = uVar1;
  }
  return;
}
