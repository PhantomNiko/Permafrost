#include "functions.h"
#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20bdd
 */

undefined8 recovered_20bdd(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5)

{
  unsigned char frame[68];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;

  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    uVar5 = 0;
    local_14 = 0;
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
    for (uVar1 = 0x3f; -1 < (int)uVar1; uVar1 = uVar1 - 1) {
      uVar6 = uVar5 << 1 | uVar3 >> 0x1f;
      uVar8 = recovered_20b83(CONCAT44(param_2,param_1),uVar1 & 0xff);
      uVar5 = ((uint)uVar8 & 1) + uVar3 * 2;
      uVar9 = recovered_20b4a(1,uVar1 & 0xff);
      uVar4 = 0;
      uVar7 = 0;
      uVar8 = 0;
      if (param_4 <= uVar6 && (uint)(uVar5 < param_3) <= uVar6 - param_4) {
        uVar4 = param_3;
        uVar7 = param_4;
        uVar8 = uVar9;
      }
      uVar2 = uVar2 | (uint)(uVar8 >> 0x20);
      local_14 = local_14 | (uint)uVar8;
      uVar3 = uVar5 - uVar4;
      uVar5 = (uVar6 - uVar7) - (uint)(uVar5 < uVar4);
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar3;
    param_5[1] = uVar5;
  }
  return CONCAT44(uVar2,local_14);
}
