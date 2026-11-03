#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2538c
 */

undefined4 * recovered_2538c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  recovered_253bc(param_1 + 2,param_2 + 2);
  return param_1;
}
