#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2aa01
 */

uint recovered_2aa01(int *param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[64];

  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  if ((param_3 == 0 || param_2 == 0) || ((param_3 & param_3 - 1) != 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (param_4 < (uint)param_1[1]) {
      uVar3 = recovered_2a783((byte *)(*param_1 + param_4 * 0x108));
      for (; param_3 != uVar5; uVar5 = uVar5 + 1) {
        uVar3 = uVar3 & param_3 - 1;
        uVar1 = *(uint *)(param_2 + uVar3 * 4);
        if (uVar1 == 0xffffffff) {
          *(uint *)(param_2 + uVar3 * 4) = param_4;
          bVar2 = 1;
          goto LAB_0002aaa7;
        }
        if (uVar1 < (uint)param_1[1]) {
          iVar4 = recovered_21415(uVar1 * 0x108 + *param_1,*param_1 + param_4 * 0x108);
          if (iVar4 == 0) break;
        }
        uVar3 = uVar3 + 1;
      }
      bVar2 = 0;
LAB_0002aaa7:
      uVar5 = CONCAT31((int3)(uVar5 >> 8),uVar5 < param_3 & bVar2);
    }
  }
  return uVar5;
}
