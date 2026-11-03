#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cfd6
 */

void recovered_2cfd6(int *param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  uVar2 = param_1[1];
  if (param_2 < uVar2) {
    iVar3 = uVar2 * 0xc;
    for (; iVar3 = iVar3 + -0xc, param_2 < uVar2; uVar2 = uVar2 - 1) {
      recovered_2de18((undefined4 *)(*param_1 + iVar3));
    }
    param_1[1] = param_2;
  }
  else if (uVar2 < param_2) {
    recovered_2d2d8(param_1,param_2);
    uVar2 = param_1[1];
    iVar3 = uVar2 * 0xc + 8;
    while (uVar2 < param_2) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + -8 + iVar3) = 0;
      *(undefined4 *)(iVar1 + -4 + iVar3) = 0;
      *(undefined4 *)(iVar1 + iVar3) = 0;
      uVar2 = uVar2 + 1;
      param_1[1] = uVar2;
      iVar3 = iVar3 + 0xc;
    }
  }
  return;
}
