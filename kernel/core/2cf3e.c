#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cf3e
 */

uint recovered_2cf3e(int *param_1,int param_2,int *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  int iVar2;

  uVar1 = 0;
  if (param_2 != 0 && *param_1 != 0) {
    iVar2 = param_2 - *param_1;
    do {
      if ((uint)param_1[1] < uVar1) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (iVar2 + 1U != uVar1);
    *param_3 = iVar2;
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1;
}
