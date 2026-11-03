#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29a3a
 */

void recovered_29a3a(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  recovered_29a7c(param_1,param_2[1]);
  for (uVar1 = 0; uVar1 < (uint)param_2[1]; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*param_1 + uVar1) = *(undefined1 *)(*param_2 + uVar1);
  }
  param_1[1] = param_2[1];
  return;
}
