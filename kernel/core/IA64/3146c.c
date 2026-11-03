#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3146c
 */

undefined4 recovered_3146c(int *param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;

  if (param_2 != 0 && param_1 != (int *)0x0) {
    iVar5 = *param_1;
    uVar1 = param_1[1];
    uVar4 = iVar5 + 1;
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
      iVar2 = recovered_21289(param_1[2],uVar7 * 0x24);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = param_1[1];
      puVar6 = (undefined4 *)(uVar4 * 0x24 + iVar2 + 0x20);
      for (; uVar4 < uVar7; uVar4 = uVar4 + 1) {
        puVar6[-8] = 0;
        puVar6[-7] = 0;
        puVar6[-6] = 0;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 9;
      }
      param_1[2] = iVar2;
      param_1[1] = uVar7;
      iVar5 = *param_1;
    }
    else {
      iVar2 = param_1[2];
    }
    iVar5 = iVar5 * 0x24;
    *(undefined4 *)(iVar2 + iVar5) = 0;
    *(undefined4 *)(iVar2 + 4 + iVar5) = 0;
    *(undefined4 *)(iVar2 + 8 + iVar5) = 0;
    *(undefined4 *)(iVar2 + 0xc + iVar5) = 0;
    *(undefined4 *)(iVar2 + 0x10 + iVar5) = 0;
    *(undefined4 *)(iVar2 + 0x14 + iVar5) = 0;
    *(undefined4 *)(iVar2 + 0x18 + iVar5) = 0;
    *(undefined4 *)(iVar2 + 0x1c + iVar5) = 0;
    *(undefined4 *)(iVar2 + 0x20 + iVar5) = 0;
    uVar3 = recovered_2c565((uint *)(*param_1 * 0x24 + param_1[2]),(uint *)param_2);
    if ((char)uVar3 != '\0') {
      *param_1 = *param_1 + 1;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return 0;
}
