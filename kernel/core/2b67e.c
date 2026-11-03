#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b67e
 */

int recovered_2b67e(int *param_1,int param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (*param_1 == 0) {
    uVar2 = param_1[1];
    uVar4 = uVar2;
  }
  else {
    uVar2 = param_1[1];
    uVar4 = param_2 - *param_1;
  }
  if (uVar2 == param_1[2]) {
    uVar3 = 4;
    if (uVar2 != 0) {
      uVar3 = uVar2 * 2;
    }
    recovered_2b5e0(param_1,uVar3);
  }
  iVar1 = *param_1;
  uVar2 = param_1[1];
  for (uVar3 = uVar2; uVar4 < uVar3; uVar3 = uVar3 - 1) {
    *(undefined1 *)(iVar1 + uVar3) = *(undefined1 *)(iVar1 + -1 + uVar3);
  }
  *(undefined1 *)(iVar1 + uVar4) = *param_3;
  param_1[1] = uVar2 + 1;
  return iVar1 + uVar4;
}
