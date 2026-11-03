#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28c0b
 */

undefined4 recovered_28c0b(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_3 + iVar2 + 1;
  if (uVar1 < uVar3) {
    uVar4 = 0x20;
    if (uVar1 != 0) {
      uVar4 = uVar1;
    }
    for (; uVar4 < uVar3; uVar4 = uVar4 * 2) {
      if ((int)uVar4 < 0) {
        uVar4 = uVar3;
        break;
      }
    }
    iVar2 = recovered_20e83(param_1[2],uVar4);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[2] = iVar2;
    param_1[1] = uVar4;
    iVar2 = *param_1;
  }
  if (param_2 != 0 && param_3 != 0) {
    recovered_20f42(iVar2 + param_1[2],param_2,param_3);
    iVar2 = *param_1;
  }
  iVar2 = iVar2 + param_3;
  *param_1 = iVar2;
  *(undefined1 *)(param_1[2] + iVar2) = 0;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
