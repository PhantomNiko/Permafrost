#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b160
 */

void recovered_2b160(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = param_1[1];
  if (iVar3 == param_1[2]) {
    uVar4 = 4;
    if (iVar3 != 0) {
      uVar4 = iVar3 * 2;
    }
    recovered_2b528(param_1,uVar4);
    iVar3 = param_1[1];
  }
  iVar1 = *param_1;
  iVar3 = iVar3 * 0x10;
  *(undefined4 *)(iVar1 + 0xc + iVar3) = param_2[3];
  *(undefined4 *)(iVar1 + 8 + iVar3) = param_2[2];
  uVar2 = *param_2;
  *(undefined4 *)(iVar1 + 4 + iVar3) = param_2[1];
  *(undefined4 *)(iVar1 + iVar3) = uVar2;
  param_1[1] = param_1[1] + 1;
  return;
}
