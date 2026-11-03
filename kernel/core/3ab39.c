#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ab39
 */

undefined4 recovered_3ab39(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;

  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  pvVar1 = recovered_211fa(0x12c000);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (param_1[2] != 0) {
      recovered_21203(param_1[2]);
    }
    *param_1 = 0x280;
    param_1[1] = 0x1e0;
    param_1[2] = pvVar1;
    *(undefined1 *)(param_1 + 3) = 1;
    uVar2 = recovered_213af((int)pvVar1,0,0x12c000);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar3;
}
