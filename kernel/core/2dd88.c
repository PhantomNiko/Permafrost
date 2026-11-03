#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dd88
 */

int recovered_2dd88(int *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int *piVar3;

  if (param_1[4] != 0) {
    uVar2 = recovered_2ddd0((int)param_1,(int)param_2);
    piVar3 = (int *)(uVar2 * 4 + param_1[3]);
    while (iVar1 = *piVar3, iVar1 != -1) {
      if (*(int *)(*param_1 + iVar1 * 0x28) == *param_2) {
        return *param_1 + iVar1 * 0x28;
      }
      piVar3 = (int *)(iVar1 * 4 + param_1[6]);
    }
  }
  return param_1[1] * 0x28 + *param_1;
}
