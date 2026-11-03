#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dfda
 */

void recovered_2dfda(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}
