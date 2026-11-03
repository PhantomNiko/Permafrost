#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x47659
 */

undefined4 recovered_47659(int param_1,undefined4 *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
LAB_000476cf:
    uVar3 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x24);
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar4 = iVar6 + 1;
    if (uVar1 < uVar4) {
      uVar7 = 4;
      if (uVar1 != 0) {
        uVar7 = uVar1;
      }
      for (; uVar7 < uVar4; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar4;
          break;
        }
      }
      iVar2 = recovered_21289(*(int *)(param_1 + 0x20),uVar7 * 0x5c);
      if (iVar2 == 0) goto LAB_000476cf;
      *(int *)(param_1 + 0x20) = iVar2;
      *(uint *)(param_1 + 0x28) = uVar7;
      iVar6 = *(int *)(param_1 + 0x24);
      uVar4 = iVar6 + 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x24) = uVar4;
    puVar8 = (undefined4 *)(iVar6 * 0x5c + iVar2);
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *param_2;
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}
