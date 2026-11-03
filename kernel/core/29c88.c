#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29c88
 */

int recovered_29c88(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  iVar3 = param_1[1];
  if (iVar3 == param_1[2]) {
    uVar2 = 4;
    if (iVar3 != 0) {
      uVar2 = iVar3 * 2;
    }
    recovered_29c1c(param_1,uVar2);
    iVar3 = param_1[1];
  }
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + iVar3 * 4) = *param_2;
  iVar3 = param_1[1];
  param_1[1] = iVar3 + 1;
  return iVar1 + iVar3 * 4;
}
