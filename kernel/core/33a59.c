#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33a59
 */

bool recovered_33a59(char *param_1)

{
  unsigned char frame[64];

  char cVar1;
  uint uVar2;

  if (param_1 == (char *)0x0) {
    return false;
  }
  uVar2 = recovered_20ff4((int)param_1);
  if ((uVar2 < 2) || ((cVar1 = *param_1, cVar1 != '\'' && (cVar1 != '\"')))) {
    return false;
  }
  return param_1[uVar2 - 1] == cVar1;
}
