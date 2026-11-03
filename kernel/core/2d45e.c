#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d45e
 */

int recovered_2d45e(int *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;

  if (param_1[4] != 0) {
    uVar3 = recovered_2d4c0((int)param_1,param_2);
    piVar4 = (int *)(uVar3 * 4 + param_1[3]);
    while (iVar1 = *piVar4, iVar1 != -1) {
      cVar2 = recovered_2d50c((undefined4 *)(iVar1 * 0x18 + *param_1),param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
      piVar4 = (int *)(iVar1 * 4 + param_1[6]);
    }
  }
  return -1;
}
