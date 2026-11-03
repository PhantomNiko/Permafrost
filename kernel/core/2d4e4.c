#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d4e4
 */

int recovered_2d4e4(int param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  iVar1 = recovered_2d4ff(param_1,param_2);
  return iVar1;
}
