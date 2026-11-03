#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dc12
 */

int recovered_2dc12(int *param_1,undefined8 *param_2)

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
    recovered_2dc54(param_1,uVar2);
    iVar3 = param_1[1];
  }
  iVar1 = *param_1;
  *(undefined8 *)(iVar1 + iVar3 * 8) = *param_2;
  param_1[1] = iVar3 + 1;
  return iVar1 + iVar3 * 8;
}
