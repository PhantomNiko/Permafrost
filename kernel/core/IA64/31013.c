#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31013
 */

void recovered_31013(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64];

  int iVar1;
  undefined4 *puVar2;

  if (param_2 != (undefined4 *)0x0 && param_1 != (undefined4 *)0x0) {
    recovered_26052(param_1);
    puVar2 = param_2;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  return;
}
