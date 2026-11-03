#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c225
 */

uint recovered_2c225(uint *param_1)

{
  unsigned char frame[64];

  uint in_EAX = 0;
  uint uVar1;

  if (param_1 != (uint *)0x0) {
    if (*param_1 < 2) {
      for (uVar1 = 0; uVar1 < param_1[0xf]; uVar1 = uVar1 + 1) {
        recovered_21203(*(int *)(param_1[0xe] + uVar1 * 4));
      }
      recovered_21203(param_1[0xe]);
      recovered_2c297((undefined4 *)param_1[0x10],param_1[0x11]);
      recovered_21203(param_1[3]);
      recovered_21203(param_1[4]);
      recovered_25fea(param_1 + 5);
      in_EAX = recovered_21203((int)param_1);
    }
    else {
      in_EAX = *param_1 - 1;
      *param_1 = in_EAX;
    }
  }
  return in_EAX;
}
