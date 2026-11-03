#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2af9c
 */

void recovered_2af9c(int *param_1,undefined4 *param_2,undefined2 *param_3)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  uint uVar2;
  int iVar3;

  iVar3 = param_1[1];
  if (iVar3 == param_1[2]) {
    uVar2 = 4;
    if (iVar3 != 0) {
      uVar2 = iVar3 * 2;
    }
    recovered_2b0c6(param_1,uVar2);
    iVar3 = param_1[1];
  }
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_2;
  *(undefined2 *)(puVar1 + 1) = *param_3;
  param_1[1] = iVar3 + 1;
  return;
}
