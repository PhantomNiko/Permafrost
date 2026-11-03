#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x289b8
 */

int recovered_289b8(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  iVar3 = param_1[1];
  if (iVar3 == param_1[2]) {
    uVar2 = 4;
    if (iVar3 != 0) {
      uVar2 = iVar3 * 2;
    }
    recovered_2df26(param_1,uVar2);
    iVar3 = param_1[1];
  }
  iVar1 = *param_1;
  iVar4 = iVar3 * 0xc;
  *(undefined4 *)(iVar1 + iVar4) = 0;
  *(undefined4 *)(iVar1 + 4 + iVar4) = 0;
  *(undefined4 *)(iVar1 + 8 + iVar4) = 0;
  param_1[1] = iVar3 + 1;
  return iVar1 + iVar4;
}
