#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cb66
 */

uint recovered_2cb66(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;

  if ((((param_2 != 0) && (param_3 < (uint)param_1[1])) &&
      (uVar1 = recovered_214de(param_2), uVar1 != 0)) &&
     (uVar2 = param_1[1], uVar1 <= uVar2 - param_3)) {
    for (; uVar1 + param_3 <= uVar2; param_3 = param_3 + 1) {
      iVar3 = recovered_213fb(*param_1 + param_3,param_2,uVar1);
      if (iVar3 == 0) {
        return param_3;
      }
      uVar2 = param_1[1];
    }
  }
  return 0xffffffff;
}
