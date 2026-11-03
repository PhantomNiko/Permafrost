#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fb5e
 */

bool recovered_3fb5e(int param_1,int param_2)

{
  unsigned char frame[64];

  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_2 != 0 && param_1 != 0) {
    uVar1 = recovered_213fa(param_2);
    uVar2 = recovered_213fa(param_1);
    if (uVar1 <= uVar2) {
      iVar3 = recovered_213cb(param_1,param_2,uVar1);
      return iVar3 == 0;
    }
  }
  return false;
}
