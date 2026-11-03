#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c051
 */

bool recovered_2c051(uint param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != 0) {
    *param_3 = 0;
    uVar2 = 0;
    uVar1 = 0;
    for (uVar3 = 0; uVar3 != param_2; uVar3 = uVar3 + 1) {
      uVar1 = uVar1 + param_1;
      while (param_2 <= uVar1) {
        uVar2 = uVar2 + (uVar2 < param_1);
        uVar1 = uVar1 - param_2;
      }
      param_3[uVar3 + 1] = uVar2;
    }
    param_3[param_2] = param_1;
  }
  return param_1 != 0;
}
