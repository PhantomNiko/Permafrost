#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44c66
 */

bool recovered_44c66(char *param_1)

{
  unsigned char frame[64] = {0};

  char cVar1;
  uint uVar2;

  if (param_1 == (char *)0x0) {
    return false;
  }
  uVar2 = recovered_214de((int)param_1);
  if ((uVar2 < 2) || ((cVar1 = *param_1, cVar1 != '\'' && (cVar1 != '\"')))) {
    return false;
  }
  return param_1[uVar2 - 1] == cVar1;
}
