#include "functions.h"
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41501
 */

uint recovered_41501(int param_1,int param_2,undefined1 *param_3)

{
  unsigned char frame[68];

  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  uVar3 = 0;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
    for (iVar5 = 0; param_2 != iVar5; iVar5 = iVar5 + 1) {
      local_14 = 0;
      bVar1 = recovered_37af6((int *)param_1,&local_14);
      if (!bVar1) {
        return 0;
      }
      if ((iVar5 != 0) && (uVar3 < 0x1ff)) {
        *(undefined2 *)(param_3 + uVar3) = 0x20;
        uVar3 = uVar3 + 1;
      }
      iVar2 = recovered_213fa(local_14);
      iVar4 = 0x1ff - uVar3;
      if (iVar2 + uVar3 < 0x200) {
        iVar4 = iVar2;
      }
      recovered_21348((int)(param_3 + uVar3),local_14,iVar4);
      uVar3 = uVar3 + iVar4;
      param_3[uVar3] = 0;
      recovered_21203(local_14);
      param_1 = param_1 + 0x24;
    }
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}
