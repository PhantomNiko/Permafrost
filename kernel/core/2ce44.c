#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ce44
 */

void recovered_2ce44(int *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_2ce74(param_1,param_2,uVar1);
  return;
}
