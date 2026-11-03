#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d366
 */

int recovered_2d366(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = recovered_2d45e(param_1,param_2);
  if (iVar1 == -1) {
    iVar1 = param_1[1];
  }
  return *param_1 + iVar1 * 0x18;
}
