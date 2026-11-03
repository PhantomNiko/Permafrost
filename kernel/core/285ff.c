#include "functions.h"
#undef DAT_00088e64
#define DAT_00088e64 (*(int *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
#undef DAT_00088e6c
#define DAT_00088e6c (*(uint *)(0x88e6cU))
#undef DAT_00088e70
#define DAT_00088e70 (*(int *)(0x88e70U))
#undef DAT_00088e74
#define DAT_00088e74 (*(uint *)(0x88e74U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x285ff
 */

undefined4 recovered_285ff(int param_1,undefined4 *param_2)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;

  if (param_2 == (undefined4 *)0x0 || param_1 == 0) {
    return 0;
  }
  iVar7 = DAT_00088e64 + 1;
  iVar5 = DAT_00088e64 * 0xc + -0xc;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      uVar2 = recovered_28a79(param_1);
      if (-1 < (int)uVar2) {
        iVar5 = DAT_00088e70;
        goto LAB_0002873f;
      }
      uVar2 = DAT_00088e6c + 1;
      if (uVar2 <= DAT_00088e74) goto LAB_00028709;
      uVar8 = 0x10;
      if (DAT_00088e74 != 0) {
        uVar8 = DAT_00088e74;
      }
      goto LAB_00028691;
    }
    iVar1 = iVar5 + -0xc;
    uVar2 = recovered_2896d((int *)(iVar5 + DAT_00088e68),param_1);
    iVar5 = iVar1;
  } while ((int)uVar2 < 0);
  iVar5 = *(int *)(DAT_00088e68 + 0xc + iVar1) + uVar2 * 0x2c;
LAB_0002874b:
  uVar4 = recovered_289c3((undefined4 *)(iVar5 + 4),param_2);
  return uVar4;
LAB_00028691:
  if (uVar2 <= uVar8) goto LAB_0002869f;
  if ((int)uVar8 < 0) {
    uVar8 = uVar2;
    goto LAB_0002869f;
  }
  uVar8 = uVar8 * 2;
  goto LAB_00028691;
LAB_0002869f:
  iVar5 = recovered_20e83(DAT_00088e70,uVar8 * 0x2c);
  if (iVar5 != 0) {
    puVar6 = (undefined1 *)(DAT_00088e74 * 0x2c + iVar5 + 0x28);
    for (; DAT_00088e74 < uVar8; DAT_00088e74 = DAT_00088e74 + 1) {
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
    DAT_00088e70 = iVar5;
    DAT_00088e74 = uVar8;
LAB_00028709:
    iVar5 = recovered_20ff4(param_1);
    pvVar3 = recovered_27c30(param_1,iVar5);
    iVar5 = DAT_00088e70;
    uVar2 = DAT_00088e6c;
    if (pvVar3 != (void *)0x0) {
      iVar7 = DAT_00088e6c * 0x2c;
      DAT_00088e6c = DAT_00088e6c + 1;
      *(void **)(DAT_00088e70 + iVar7) = pvVar3;
      *(undefined1 *)(iVar5 + 0x28 + iVar7) = 1;
LAB_0002873f:
      iVar5 = iVar5 + uVar2 * 0x2c;
      goto LAB_0002874b;
    }
  }
  return 0;
}
