#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f7dd
 */

void recovered_3f7dd(uint *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  if (param_1 != (uint *)0x0) {
    for (uVar1 = 0; uVar1 < *param_1; uVar1 = uVar1 + 1) {
      recovered_21203(*(int *)(param_1[2] + uVar1 * 4));
    }
    recovered_21203(param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
