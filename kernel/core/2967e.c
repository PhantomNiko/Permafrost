#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2967e
 */

int recovered_2967e(int param_1,int param_2,char param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  uVar1 = recovered_297af(param_1,param_2);
  if ((int)uVar1 < 0) {
    if (param_3 == '\0') {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 8);
    uVar2 = *(int *)(param_1 + 4) + 1;
    if (uVar1 < uVar2) {
      uVar7 = 4;
      if (uVar1 != 0) {
        uVar7 = uVar1;
      }
      for (; uVar7 < uVar2; uVar7 = uVar7 * 2) {
        if ((int)uVar7 < 0) {
          uVar7 = uVar2;
          break;
        }
      }
      iVar3 = recovered_20e83(*(int *)(param_1 + 0xc),uVar7 * 0x28);
      if (iVar3 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 8);
      puVar5 = (undefined4 *)(uVar1 * 0x28 + iVar3 + 0x24);
      for (; uVar1 < uVar7; uVar1 = uVar1 + 1) {
        puVar5[-9] = 0;
        puVar5[-8] = 0;
        puVar5[-7] = 0;
        puVar5[-6] = 0;
        puVar5[-5] = 0;
        puVar5[-4] = 0;
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 10;
      }
      *(int *)(param_1 + 0xc) = iVar3;
      *(uint *)(param_1 + 8) = uVar7;
    }
    iVar3 = recovered_20ff4(param_2);
    pvVar4 = recovered_27c30(param_2,iVar3);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 4) * 0x28;
    *(void **)(iVar3 + iVar6) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    *(undefined4 *)(iVar3 + 4 + iVar6) = 0;
    *(undefined4 *)(iVar3 + 8 + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0xc + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0x10 + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0x14 + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0x18 + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0x20 + iVar6) = 0;
    *(undefined4 *)(iVar3 + 0x24 + iVar6) = 0;
    uVar1 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar1 + 1;
  }
  return *(int *)(param_1 + 0xc) + uVar1 * 0x28 + 4;
}

