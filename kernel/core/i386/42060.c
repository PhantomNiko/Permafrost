#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42060
 */

undefined4 recovered_42060(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  if ((param_2 == 0 || param_1 == 0) || (uVar1 = recovered_2c5fc(param_1,param_2), (int)uVar1 < 0))
  {
    return 0;
  }
  iVar4 = uVar1 * 0x28;
  recovered_21203(*(int *)(*(int *)(param_1 + 0xc) + iVar4));
  recovered_2603e((undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 + 4));
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar1 + 1 < uVar2) {
    recovered_21369(iVar4 + *(int *)(param_1 + 0xc),(uVar1 + 1) * 0x28 + *(int *)(param_1 + 0xc),
                    (uVar2 + ~uVar1) * 0x28);
    uVar2 = *(uint *)(param_1 + 4);
  }
  *(uint *)(param_1 + 4) = uVar2 - 1;
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = (uVar2 - 1) * 0x28;
  *(undefined4 *)(iVar4 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 4 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 8 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0xc + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0x10 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0x14 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0x18 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0x1c + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0x20 + iVar3) = 0;
  *(undefined4 *)(iVar4 + 0x24 + iVar3) = 0;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}
