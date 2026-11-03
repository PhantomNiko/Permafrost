#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x273c6
 */

int recovered_273c6(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  iVar4 = *param_1;
  bVar8 = iVar4 == 0;
  if (bVar8) {
    uVar5 = param_1[1];
  }
  else {
    uVar5 = param_2 - iVar4 >> 2;
  }
  if (3 < (uint)((int)param_4 - (int)param_3)) {
    uVar6 = (uint)((int)param_4 - (int)param_3) >> 2;
    uVar2 = param_1[1];
    uVar7 = param_1[2];
    if (uVar7 < uVar2 + uVar6) {
      uVar1 = 4;
      if (uVar7 != 0) {
        uVar1 = uVar7;
      }
      do {
        uVar7 = uVar1;
        uVar1 = uVar7 * 2;
      } while (uVar7 < uVar2 + uVar6);
      recovered_2722e(param_1,uVar7);
      uVar2 = param_1[1];
    }
    for (uVar7 = uVar2; uVar5 < uVar7; uVar7 = uVar7 - 1) {
      *(undefined4 *)(uVar6 * 4 + -4 + *param_1 + uVar7 * 4) =
           *(undefined4 *)(*param_1 + -4 + uVar7 * 4);
    }
    iVar4 = uVar5 * 4;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined4 *)(*param_1 + iVar4) = *param_3;
      iVar4 = iVar4 + 4;
    }
    param_1[1] = uVar2 + uVar6;
    iVar4 = *param_1;
    bVar8 = iVar4 == 0;
  }
  iVar3 = 0;
  if (!bVar8) {
    iVar3 = iVar4 + uVar5 * 4;
  }
  return iVar3;
}
