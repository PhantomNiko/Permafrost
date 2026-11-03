#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c463
 */

undefined4 recovered_3c463(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (((0x42 < param_2) && (param_1 != (int *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    if (((*param_1 == 0x54504257) && ((short)param_1[1] == 1)) &&
       (0xfffc < (ushort)(*(short *)((int)param_1 + 6) - 4U))) {
      recovered_213af((int)param_3,0,0x38);
      *param_3 = 3;
      param_3[1] = 0x42;
      param_3[2] = param_2 - 1;
      param_3[3] = (uint)*(ushort *)((int)param_1 + 6);
      param_3[4] = 0x41;
      param_3[5] = 0x20;
      param_3[6] = 1;
      param_3[8] = 0x41;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
