#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b0c3
 */

uint recovered_2b0c3(int param_1,uint param_2)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = recovered_2b140(param_1,param_2);
  if ((char)uVar2 != '\0') {
    uVar3 = *(uint *)(param_1 + 4);
    if (param_2 < uVar3) {
      iVar5 = param_2 << 5;
      for (uVar4 = param_2; uVar4 < uVar3; uVar4 = uVar4 + 1) {
        recovered_24daf((undefined4 *)(*(int *)(param_1 + 0xc) + iVar5));
        iVar1 = *(int *)(param_1 + 0xc);
        *(undefined4 *)(iVar1 + iVar5) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar5) = 0;
        *(undefined4 *)(iVar1 + 8 + iVar5) = 0;
        *(undefined4 *)(iVar1 + 0xc + iVar5) = 0;
        *(undefined4 *)(iVar1 + 0x10 + iVar5) = 0;
        *(undefined4 *)(iVar1 + 0x14 + iVar5) = 0;
        *(undefined4 *)(iVar1 + 0x18 + iVar5) = 0;
        *(undefined4 *)(iVar1 + 0x1c + iVar5) = 0;
        uVar3 = *(uint *)(param_1 + 4);
        iVar5 = iVar5 + 0x20;
      }
    }
    *(uint *)(param_1 + 4) = param_2;
    uVar2 = CONCAT31((int3)(param_2 >> 8),(char)uVar2);
  }
  return uVar2;
}

