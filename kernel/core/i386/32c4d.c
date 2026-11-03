#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32c4d
 */

undefined4 recovered_32c4d(int param_1,uint param_2)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBX = 0;
  undefined4 uVar4;
  uint uVar5;

  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (param_2 <= uVar2) {
      return uVar4;
    }
    uVar5 = 4;
    if (uVar2 != 0) {
      uVar5 = uVar2;
    }
    for (; uVar5 < param_2; uVar5 = uVar5 * 2) {
      if ((int)uVar5 < 0) {
        uVar5 = param_2;
        break;
      }
    }
    iVar1 = recovered_21289(*(int *)(param_1 + 0x10),uVar5 * 0x24);
    if (iVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      puVar3 = (undefined4 *)(uVar2 * 0x24 + iVar1 + 0x20);
      for (; uVar2 < uVar5; uVar2 = uVar2 + 1) {
        puVar3[-8] = 0;
        puVar3[-7] = 0;
        puVar3[-6] = 0;
        puVar3[-5] = 0;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 9;
      }
      *(int *)(param_1 + 0x10) = iVar1;
      *(uint *)(param_1 + 0xc) = uVar5;
      return uVar4;
    }
  }
  return 0;
}
