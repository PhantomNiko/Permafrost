#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x229a9
 */

undefined4 recovered_229a9(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_22cda(param_1);
    if (param_1[0x3f] != 0) {
      recovered_21203(param_1[0x3f]);
    }
    recovered_21203((int)param_1);
  }
  return uVar1;
}
