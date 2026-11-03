#include "functions.h"
#undef DAT_00082060
#define DAT_00082060 (*(uint *)(0x82060U))
#undef DAT_00082064
#define DAT_00082064 (*(int *)(0x82064U))
#undef DAT_00082068
#define DAT_00082068 (*(uint *)(0x82068U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c225
 */

undefined4 recovered_2c225(int param_1,uint *param_2)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar1 = recovered_2c5a5(param_1);
  if ((int)uVar1 < 0) {
    uVar1 = DAT_00082060 + 1;
    if (DAT_00082068 < uVar1) {
      uVar6 = 0x10;
      if (DAT_00082068 != 0) {
        uVar6 = DAT_00082068;
      }
      for (; uVar6 < uVar1; uVar6 = uVar6 * 2) {
        if ((int)uVar6 < 0) {
          uVar6 = uVar1;
          break;
        }
      }
      iVar2 = recovered_21289(DAT_00082064,uVar6 * 0x2c);
      if (iVar2 == 0) {
        return 0;
      }
      puVar5 = (undefined1 *)(DAT_00082068 * 0x2c + iVar2 + 0x28);
      for (; DAT_00082068 < uVar6; DAT_00082068 = DAT_00082068 + 1) {
        *(undefined4 *)(puVar5 + -0x28) = 0;
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
        puVar5 = puVar5 + 0x2c;
      }
      DAT_00082064 = iVar2;
      DAT_00082068 = uVar6;
    }
    iVar2 = recovered_213fa(param_1);
    pvVar3 = recovered_29c28(param_1,iVar2);
    iVar2 = DAT_00082064;
    uVar1 = DAT_00082060;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    iVar7 = DAT_00082060 * 0x2c;
    DAT_00082060 = DAT_00082060 + 1;
    *(void **)(DAT_00082064 + iVar7) = pvVar3;
    *(undefined1 *)(iVar2 + 0x28 + iVar7) = 1;
  }
  else {
    iVar2 = DAT_00082064;
  }
  uVar4 = recovered_2c4ef((uint *)(iVar2 + uVar1 * 0x2c + 4),param_2);
  return uVar4;
}
