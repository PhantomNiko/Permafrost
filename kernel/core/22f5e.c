#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22f5e
 */

bool FUN_00022f5e(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;

  if ((param_1 == 0) || (param_2 == 0 && param_3 != 0)) {
    return false;
  }
  iVar1 = recovered_22e99(param_1,param_2,param_3);
  return iVar1 != 0;
}
