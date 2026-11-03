#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2718e
 */

uint recovered_2718e(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;
  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 < (uint)param_1[1]) {
    recovered_271f2(param_1,param_2);
    return extraout_EAX;
  }
  recovered_2722e(param_1,param_2);
  uVar1 = param_1[1];
  while (uVar1 < param_2) {
    *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
    uVar1 = uVar1 + 1;
    param_1[1] = uVar1;
  }
  return uVar1;
}
