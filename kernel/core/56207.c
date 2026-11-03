#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x56207
 */

int recovered_56207(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      iVar1 = recovered_54ae4(param_1,*(int *)(param_1 + 0x2c));
      return iVar1;
    }
  }
  return iVar1;
}
