#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x314f8
 */

void recovered_314f8(uint *param_1)

{
  unsigned char frame[64];

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
