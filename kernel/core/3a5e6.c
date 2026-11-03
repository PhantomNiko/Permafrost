#include "functions.h"
#undef DAT_000938ec
#define DAT_000938ec (*(uint *)(0x938ecU))
#undef DAT_000938f0
#define DAT_000938f0 (*(int *)(0x938f0U))
#undef DAT_000938f4
#define DAT_000938f4 (*(uint *)(0x938f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a5e6
 */

undefined4 recovered_3a5e6(int param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

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
  uVar1 = recovered_3a966(param_1);
  if ((int)uVar1 < 0) {
    uVar1 = DAT_000938ec + 1;
    if (DAT_000938f4 < uVar1) {
      uVar6 = 0x10;
      if (DAT_000938f4 != 0) {
        uVar6 = DAT_000938f4;
      }
      for (; uVar6 < uVar1; uVar6 = uVar6 * 2) {
        if ((int)uVar6 < 0) {
          uVar6 = uVar1;
          break;
        }
      }
      iVar2 = recovered_21289(DAT_000938f0,uVar6 * 0x2c);
      if (iVar2 == 0) {
        return 0;
      }
      puVar5 = (undefined1 *)(DAT_000938f4 * 0x2c + iVar2 + 0x28);
      for (; DAT_000938f4 < uVar6; DAT_000938f4 = DAT_000938f4 + 1) {
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
      DAT_000938f0 = iVar2;
      DAT_000938f4 = uVar6;
    }
    iVar2 = recovered_214de(param_1);
    pvVar3 = recovered_3773b(param_1,iVar2);
    iVar2 = DAT_000938f0;
    uVar1 = DAT_000938ec;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    iVar7 = DAT_000938ec * 0x2c;
    DAT_000938ec = DAT_000938ec + 1;
    *(void **)(DAT_000938f0 + iVar7) = pvVar3;
    *(undefined1 *)(iVar2 + 0x28 + iVar7) = 1;
  }
  else {
    iVar2 = DAT_000938f0;
  }
  uVar4 = recovered_3a8b0((uint *)(iVar2 + uVar1 * 0x2c + 4),param_2);
  return uVar4;
}
