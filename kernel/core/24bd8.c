#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24bd8
 */

undefined4 recovered_24bd8(undefined4 *param_1)

{
  unsigned char frame[64];

  void *pvVar1;
  undefined4 extraout_EAX = 0;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  pvVar1 = recovered_20ae5(0x12c000);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_1[2] != 0) {
      recovered_20aee(param_1[2]);
    }
    *param_1 = 0x280;
    param_1[1] = 0x1e0;
    param_1[2] = pvVar1;
    *(undefined1 *)(param_1 + 3) = 1;
    recovered_20c84((int)pvVar1,0,0x12c000);
    uVar2 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  return uVar2;
}

