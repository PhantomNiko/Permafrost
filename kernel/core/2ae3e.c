#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ae3e
 */

int recovered_2ae3e(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_2aeec(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 8;
}
