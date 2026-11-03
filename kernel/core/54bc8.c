#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x54bc8
 */

undefined8 recovered_54bc8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;

  uVar5 = 0;
  if (param_4 != 0 && param_2 != 0) {
    bVar6 = CARRY4(param_2,param_1);
    uVar1 = (uint)(param_3 < param_2 + param_1);
    uVar3 = -(uint)bVar6;
    param_2 = uVar3 - uVar1;
    uVar2 = (uint)(param_1 < param_4 + param_3);
    uVar4 = -(uint)CARRY4(param_4,param_3);
    uVar5 = CONCAT31((int3)(uVar4 - uVar2 >> 8),
                     (CARRY4(param_4,param_3) != 0 || uVar4 < uVar2) &&
                     (bVar6 != 0 || uVar3 < uVar1));
  }
  return CONCAT44(param_2,uVar5);
}
