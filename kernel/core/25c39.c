#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25c39
 */

bool recovered_25c39(uint *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  bool bVar2;

  if (param_3 == 0) {
    bVar2 = true;
  }
  else {
    iVar1 = recovered_22b37(param_2,1,param_3,param_1);
    bVar2 = iVar1 == param_3;
  }
  return bVar2;
}
