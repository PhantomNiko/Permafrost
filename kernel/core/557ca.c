#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x557ca
 */

undefined4 recovered_557ca(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;
  uint uVar5;

  uVar2 = param_1[2];
  uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (uVar2 < param_2) {
    uVar5 = 8;
    if (uVar2 != 0) {
      uVar5 = uVar2;
    }
    for (; uVar5 < param_2; uVar5 = uVar5 * 2) {
      if ((int)uVar5 < 0) {
        uVar5 = param_2;
        break;
      }
    }
    iVar1 = recovered_21289(*param_1,uVar5 * 0x2c);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = param_1[2];
      puVar3 = (undefined1 *)(uVar2 * 0x2c + iVar1 + 0x28);
      for (; uVar2 < uVar5; uVar2 = uVar2 + 1) {
        *(undefined4 *)(puVar3 + -0x28) = 0;
        *(undefined4 *)(puVar3 + -0x24) = 0;
        *(undefined4 *)(puVar3 + -0x20) = 0;
        *(undefined4 *)(puVar3 + -0x1c) = 0;
        *(undefined4 *)(puVar3 + -0x18) = 0;
        *(undefined4 *)(puVar3 + -0x14) = 0;
        *(undefined4 *)(puVar3 + -0x10) = 0;
        *(undefined4 *)(puVar3 + -0xc) = 0;
        *(undefined4 *)(puVar3 + -8) = 0;
        *(undefined4 *)(puVar3 + -4) = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 0x2c;
      }
      *param_1 = iVar1;
      param_1[2] = uVar5;
    }
  }
  return uVar4;
}
