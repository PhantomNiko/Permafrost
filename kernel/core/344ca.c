#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x344ca
 */

undefined4 recovered_344ca(int param_1,uint param_2)

{
  unsigned char frame[64];

  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  if (param_1 == 0) {
    return 0;
  }
  uVar2 = recovered_34551(param_1,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 8);
    if (param_2 < uVar3) {
      iVar4 = param_2 * 0x24;
      for (uVar5 = param_2; uVar5 < uVar3; uVar5 = uVar5 + 1) {
        recovered_25fea((undefined4 *)(*(int *)(param_1 + 0x10) + iVar4));
        iVar1 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(iVar1 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 8 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0xc + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x10 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x14 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x18 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x1c + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x20 + iVar4) = 0;
        uVar3 = *(uint *)(param_1 + 8);
        iVar4 = iVar4 + 0x24;
      }
    }
    *(uint *)(param_1 + 8) = param_2;
    uVar2 = CONCAT31((int3)(param_2 >> 8),1);
  }
  return uVar2;
}
