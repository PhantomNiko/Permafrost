#include "functions.h"
#undef DAT_00088e64
#define DAT_00088e64 (*(int *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3957c
 */

undefined4 recovered_3957c(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;

  iVar8 = DAT_00088e64 * 0xc + DAT_00088e68;
  piVar7 = (int *)(iVar8 + -0xc);
  if ((piVar7 == (int *)0x0 || DAT_00088e64 == 0) || (param_2 == 0 || param_1 == 0)) {
    return 0;
  }
  uVar1 = recovered_2896d(piVar7,param_1);
  if ((int)uVar1 < 0) {
    uVar1 = *(uint *)(iVar8 + -4);
    uVar2 = *(int *)(iVar8 + -8) + 1;
    if (uVar1 < uVar2) {
      uVar9 = 8;
      if (uVar1 != 0) {
        uVar9 = uVar1;
      }
      for (; uVar9 < uVar2; uVar9 = uVar9 * 2) {
        if ((int)uVar9 < 0) {
          uVar9 = uVar2;
          break;
        }
      }
      iVar3 = recovered_20e83(*piVar7,uVar9 * 0x2c);
      if (iVar3 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(iVar8 + -4);
      puVar6 = (undefined1 *)(uVar1 * 0x2c + iVar3 + 0x28);
      for (; uVar1 < uVar9; uVar1 = uVar1 + 1) {
        *(undefined4 *)(puVar6 + -0x28) = 0;
        *(undefined4 *)(puVar6 + -0x24) = 0;
        *(undefined4 *)(puVar6 + -0x20) = 0;
        *(undefined4 *)(puVar6 + -0x1c) = 0;
        *(undefined4 *)(puVar6 + -0x18) = 0;
        *(undefined4 *)(puVar6 + -0x14) = 0;
        *(undefined4 *)(puVar6 + -0x10) = 0;
        *(undefined4 *)(puVar6 + -0xc) = 0;
        *(undefined4 *)(puVar6 + -8) = 0;
        *(undefined4 *)(puVar6 + -4) = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x2c;
      }
      *(int *)(iVar8 + -0xc) = iVar3;
      *(uint *)(iVar8 + -4) = uVar9;
    }
    iVar3 = recovered_20ff4(param_1);
    pvVar4 = recovered_27c30(param_1,iVar3);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    iVar3 = *(int *)(iVar8 + -0xc);
    uVar1 = *(uint *)(iVar8 + -8);
    *(uint *)(iVar8 + -8) = uVar1 + 1;
    *(void **)(iVar3 + uVar1 * 0x2c) = pvVar4;
    *(undefined1 *)(iVar3 + 0x28 + uVar1 * 0x2c) = 1;
  }
  else {
    iVar3 = *piVar7;
  }
  uVar5 = recovered_289c3((undefined4 *)(iVar3 + uVar1 * 0x2c + 4),(undefined4 *)param_2);
  return uVar5;
}
