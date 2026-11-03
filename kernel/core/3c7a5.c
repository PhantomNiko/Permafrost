#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c7a5
 */

undefined4 recovered_3c7a5(int *param_1,uint *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_EDX = 0;
  uint uVar3;

  if (param_2 != (uint *)0x0 && param_1 != (int *)0x0) {
    uVar2 = *param_2;
    if (param_3 <= uVar2) {
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2;
    }
    for (; uVar3 < param_3; uVar3 = uVar3 * 2) {
      if ((int)uVar3 < 0) {
        uVar3 = param_3;
        break;
      }
    }
    iVar1 = recovered_21289(*param_1,uVar3 * 4);
    if (iVar1 != 0) {
      for (uVar2 = *param_2; uVar2 < uVar3; uVar2 = uVar2 + 1) {
        *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
      }
      *param_1 = iVar1;
      *param_2 = uVar3;
      return CONCAT31((int3)((uint)extraout_EDX >> 8),1);
    }
  }
  return 0;
}
