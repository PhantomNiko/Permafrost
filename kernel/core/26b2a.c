#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26b2a
 */

undefined4 recovered_26b2a(int param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_EAX = 0;

  uVar1 = *(uint *)(param_1 + 0x18);
  if ((CARRY4(param_3,uVar1)) || (*(uint *)(param_1 + 0x10) < param_3 + uVar1)) {
    uVar2 = 0;
  }
  else {
    recovered_21348(param_2,uVar1 + *(int *)(param_1 + 0xc),param_3);
    *(uint *)(param_1 + 0x18) = param_3 + uVar1;
    uVar2 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  return uVar2;
}
