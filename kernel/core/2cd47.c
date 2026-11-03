#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cd47
 */

undefined4 recovered_2cd47(int *param_1,uint *param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  recovered_2cdd5(param_1,param_2);
  uVar3 = *param_2;
  uVar5 = param_1[1];
  if (uVar3 < uVar5) {
    iVar4 = *param_1;
    cVar1 = *(char *)(iVar4 + uVar3);
    if ((cVar1 == '-') || (cVar1 == '+')) {
      uVar3 = uVar3 + 1;
      *param_2 = uVar3;
      uVar5 = param_1[1];
    }
    if (uVar3 < uVar5) {
      iVar2 = 0;
      if ((byte)(*(char *)(iVar4 + uVar3) - 0x3aU) < 0xf6) {
        return 0;
      }
      while ((uVar3 < uVar5 && ((byte)(*(byte *)(iVar4 + uVar3) - 0x30) < 10))) {
        iVar2 = iVar2 * 10 + (uint)*(byte *)(iVar4 + uVar3) + -0x30;
        uVar3 = uVar3 + 1;
        *param_2 = uVar3;
        uVar5 = param_1[1];
      }
      iVar4 = -iVar2;
      if (cVar1 != '-') {
        iVar4 = iVar2;
      }
      *param_3 = iVar4;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}
