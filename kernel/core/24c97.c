#include "functions.h"
#undef DAT_00070410
#define DAT_00070410 (*(uint *)(0x70410U))
#undef DAT_00070414
#define DAT_00070414 (*(int *)(0x70414U))
#undef DAT_00070418
#define DAT_00070418 (*(uint *)(0x70418U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24c97
 */

undefined4 recovered_24c97(int param_1,undefined4 *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
    return 0;
  }
  uVar1 = recovered_24fea(param_1);
  if ((int)uVar1 < 0) {
    uVar1 = DAT_00070410 + 1;
    if (DAT_00070418 < uVar1) {
      uVar6 = 0x10;
      if (DAT_00070418 != 0) {
        uVar6 = DAT_00070418;
      }
      for (; uVar6 < uVar1; uVar6 = uVar6 * 2) {
        if ((int)uVar6 < 0) {
          uVar6 = uVar1;
          break;
        }
      }
      iVar2 = recovered_20b68(DAT_00070414,uVar6 * 0x28);
      if (iVar2 == 0) {
        return 0;
      }
      puVar5 = (undefined1 *)(DAT_00070418 * 0x28 + iVar2 + 0x24);
      for (; DAT_00070418 < uVar6; DAT_00070418 = DAT_00070418 + 1) {
        *(undefined4 *)(puVar5 + -0x24) = 0;
        *(undefined4 *)(puVar5 + -0x20) = 0;
        *(undefined4 *)(puVar5 + -0x1c) = 0;
        *(undefined4 *)(puVar5 + -0x18) = 0;
        *(undefined4 *)(puVar5 + -0x14) = 0;
        *(undefined4 *)(puVar5 + -0x10) = 0;
        *(undefined4 *)(puVar5 + -0xc) = 0;
        *(undefined4 *)(puVar5 + -8) = 0;
        *(undefined4 *)(puVar5 + -4) = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0x28;
      }
      DAT_00070414 = iVar2;
      DAT_00070418 = uVar6;
    }
    iVar2 = recovered_20ccf(param_1);
    iVar3 = recovered_24f9e(param_1,iVar2);
    iVar2 = DAT_00070414;
    uVar1 = DAT_00070410;
    if (iVar3 == 0) {
      return 0;
    }
    iVar7 = DAT_00070410 * 0x28;
    DAT_00070410 = DAT_00070410 + 1;
    *(int *)(DAT_00070414 + iVar7) = iVar3;
    *(undefined1 *)(iVar2 + 0x24 + iVar7) = 1;
  }
  else {
    iVar2 = DAT_00070414;
  }
  uVar4 = recovered_25048((undefined4 *)(iVar2 + uVar1 * 0x28 + 4),param_2);
  return uVar4;
}

