#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d3d0
 */

int recovered_2d3d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 == param_1[2]) {
    uVar1 = 4;
    if (iVar2 != 0) {
      uVar1 = iVar2 * 2;
    }
    recovered_2d604(param_1,uVar1);
    iVar2 = param_1[1];
  }
  recovered_2d6e8((undefined4 *)(iVar2 * 0x18 + *param_1),param_2,param_3);
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return iVar2 * 0x18 + *param_1;
}
