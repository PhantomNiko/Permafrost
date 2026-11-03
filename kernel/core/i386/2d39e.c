#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d39e
 */

int recovered_2d39e(int param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  iVar1 = recovered_2d3b9(param_1,param_2);
  return iVar1;
}
