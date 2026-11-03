#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cdd5
 */

void recovered_2cdd5(int *param_1,uint *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  iVar1 = *param_1;
  uVar3 = *param_2;
  while (((uVar3 < (uint)param_1[1] && (uVar2 = *(byte *)(iVar1 + uVar3) - 9, uVar2 < 0x18)) &&
         ((0x80001fU >> (uVar2 & 0x1f) & 1) != 0))) {
    uVar3 = uVar3 + 1;
    *param_2 = uVar3;
  }
  return;
}
