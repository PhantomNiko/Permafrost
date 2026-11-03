#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b748
 */

void recovered_2b748(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;

  uVar8 = param_1[1];
  if (uVar8 == param_1[2]) {
    uVar3 = 4;
    if (uVar8 != 0) {
      uVar3 = uVar8 * 2;
    }
    if (uVar8 < uVar3) {
      pvVar1 = recovered_23162(uVar3 << 5);
      iVar5 = param_1[1];
      iVar2 = 0;
      while (bVar9 = iVar5 != 0, iVar5 = iVar5 + -1, bVar9) {
        puVar6 = (undefined4 *)(*param_1 + iVar2);
        puVar7 = (undefined4 *)((int)pvVar1 + iVar2);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar2 = iVar2 + 0x20;
      }
      recovered_23194();
      *param_1 = (int)pvVar1;
      param_1[2] = uVar3;
      uVar8 = param_1[1];
    }
  }
  puVar6 = (undefined4 *)(uVar8 * 0x20 + *param_1);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[1] = param_1[1] + 1;
  return;
}
