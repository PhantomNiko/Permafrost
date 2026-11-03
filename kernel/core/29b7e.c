#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29b7e
 */

uint recovered_29b7e(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int *piVar2;

  param_1[1] = 0;
  if ((uint)param_1[1] <= param_2) {
    recovered_29c1c(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined4 *)(*param_1 + uVar1 * 4) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return uVar1;
  }
  piVar2 = param_1;
  if (param_2 < (uint)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((uint)param_1[1] < param_2) {
    recovered_29c1c(param_1,param_2);
    piVar2 = (int *)param_1[1];
    while (piVar2 < param_2) {
      *(undefined4 *)(*param_1 + (int)piVar2 * 4) = 0;
      piVar2 = (int *)(param_1[1] + 1);
      param_1[1] = (int)piVar2;
    }
  }
  return (uint)piVar2;
}
