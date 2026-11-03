#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29cd0
 */

void recovered_29cd0(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;

  if ((uint)param_1[2] < param_2) {
    pvVar4 = recovered_23162(param_2 * 0xc);
    uVar1 = param_1[1];
    iVar5 = 0;
    for (uVar6 = 0; uVar6 < uVar1; uVar6 = uVar6 + 1) {
      iVar2 = *param_1;
      *(undefined4 *)((int)pvVar4 + iVar5 + 8) = *(undefined4 *)(iVar2 + 8 + iVar5);
      uVar3 = *(undefined4 *)(iVar2 + iVar5);
      *(undefined4 *)((int)pvVar4 + iVar5 + 4) = *(undefined4 *)(iVar2 + 4 + iVar5);
      *(undefined4 *)((int)pvVar4 + iVar5) = uVar3;
      iVar5 = iVar5 + 0xc;
    }
    recovered_23194();
    *param_1 = (int)pvVar4;
    param_1[2] = param_2;
  }
  return;
}
