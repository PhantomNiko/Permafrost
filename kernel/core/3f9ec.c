#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f9ec
 */

void recovered_3f9ec(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 != 0) {
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      recovered_21203(*(int *)(param_1 + iVar1 * 4));
    }
    recovered_21203(param_1);
  }
  return;
}
