#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26d70
 */

undefined4 recovered_26d70(int *param_1,uint param_2,uint *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;

  if (0x18 < param_2) {
    return 0;
  }
  uVar2 = param_1[5];
  while( true ) {
    if (param_2 <= uVar2) {
      uVar4 = recovered_20f50(0xffffffffffffffff,param_2 & 0xff);
      uVar3 = *(ulonglong *)(param_1 + 3);
      *param_3 = ((uint)uVar4 ^ 0xffffffff) & (uint)*(ulonglong *)(param_1 + 3);
      uVar3 = recovered_20f89(uVar3,param_2 & 0xff);
      *(ulonglong *)(param_1 + 3) = uVar3;
      param_1[5] = param_1[5] - param_2;
      return CONCAT31((int3)(param_2 >> 8),1);
    }
    uVar1 = param_1[2];
    if ((uint)param_1[1] <= uVar1) break;
    param_1[2] = uVar1 + 1;
    uVar3 = recovered_20f50((ulonglong)*(byte *)(*param_1 + uVar1),uVar2 & 0xff);
    param_1[3] = param_1[3] | (uint)uVar3;
    param_1[4] = param_1[4] | (uint)(uVar3 >> 0x20);
    uVar2 = uVar2 + 8;
    param_1[5] = uVar2;
  }
  return 0;
}
