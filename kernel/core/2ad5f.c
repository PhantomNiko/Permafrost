#include "functions.h"
#undef DAT_0007cfdc
#define DAT_0007cfdc (*(int *)(0x7cfdcU))
#undef DAT_0007cfe0
#define DAT_0007cfe0 (*(int *)(0x7cfe0U))
#undef DAT_0007cfe4
#define DAT_0007cfe4 (*(uint *)(0x7cfe4U))
#undef DAT_0007cfe8
#define DAT_0007cfe8 (*(int *)(0x7cfe8U))
#undef DAT_0007cfec
#define DAT_0007cfec (*(uint *)(0x7cfecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ad5f
 */

undefined4 recovered_2ad5f(int param_1,undefined4 *param_2)

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
  iVar7 = DAT_0007cfdc + 1;
  iVar5 = DAT_0007cfdc * 0xc + -0xc;
  do {
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      uVar2 = recovered_2b1d9(param_1);
      if (-1 < (int)uVar2) {
        iVar5 = DAT_0007cfe8;
        goto LAB_0002ae9f;
      }
      uVar2 = DAT_0007cfe4 + 1;
      if (uVar2 <= DAT_0007cfec) goto LAB_0002ae69;
      uVar8 = 0x10;
      if (DAT_0007cfec != 0) {
        uVar8 = DAT_0007cfec;
      }
      goto LAB_0002adf1;
    }
    iVar1 = iVar5 + -0xc;
    uVar2 = recovered_2b0cd((int *)(iVar5 + DAT_0007cfe0),param_1);
    iVar5 = iVar1;
  } while ((int)uVar2 < 0);
  iVar5 = *(int *)(DAT_0007cfe0 + 0xc + iVar1) + uVar2 * 0x2c;
LAB_0002aeab:
  uVar4 = recovered_2b123((undefined4 *)(iVar5 + 4),param_2);
  return uVar4;
LAB_0002adf1:
  if (uVar2 <= uVar8) goto LAB_0002adff;
  if ((int)uVar8 < 0) {
    uVar8 = uVar2;
    goto LAB_0002adff;
  }
  uVar8 = uVar8 * 2;
  goto LAB_0002adf1;
LAB_0002adff:
  iVar5 = recovered_20e83(DAT_0007cfe8,uVar8 * 0x2c);
  if (iVar5 != 0) {
    puVar6 = (undefined1 *)(DAT_0007cfec * 0x2c + iVar5 + 0x28);
    for (; DAT_0007cfec < uVar8; DAT_0007cfec = DAT_0007cfec + 1) {
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
    DAT_0007cfe8 = iVar5;
    DAT_0007cfec = uVar8;
LAB_0002ae69:
    iVar5 = recovered_20ff4(param_1);
    pvVar3 = recovered_28bbf(param_1,iVar5);
    iVar5 = DAT_0007cfe8;
    uVar2 = DAT_0007cfe4;
    if (pvVar3 != (void *)0x0) {
      iVar7 = DAT_0007cfe4 * 0x2c;
      DAT_0007cfe4 = DAT_0007cfe4 + 1;
      *(void **)(DAT_0007cfe8 + iVar7) = pvVar3;
      *(undefined1 *)(iVar5 + 0x28 + iVar7) = 1;
LAB_0002ae9f:
      iVar5 = iVar5 + uVar2 * 0x2c;
      goto LAB_0002aeab;
    }
  }
  return 0;
}
