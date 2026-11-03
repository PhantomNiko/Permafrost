#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d4c0
 */

uint recovered_2d4c0(int param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_2d4e6(param_1 + 0x24,param_2);
  return uVar1 & *(int *)(param_1 + 0x10) - 1U;
}
