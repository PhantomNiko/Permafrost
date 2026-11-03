#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x55980
 */

int recovered_55980(undefined4 *param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  if (param_2 == (int *)0x0 || param_1 == (undefined4 *)0x0) {
LAB_000559fd:
    iVar3 = 0;
  }
  else {
    recovered_55328(param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = recovered_557ca(param_1,param_2[1]);
    iVar3 = 0;
    if ((char)uVar2 != '\0') {
      for (uVar4 = 0; uVar4 < (uint)param_2[1]; uVar4 = uVar4 + 1) {
        iVar1 = *param_2;
        if ((*(char *)(iVar1 + 0x28 + iVar3) == '\x01') && (*(int *)(iVar1 + iVar3) != 0)) {
          uVar2 = recovered_555fa(param_1,*(int *)(iVar1 + iVar3),iVar1 + iVar3 + 4);
          if ((char)uVar2 == '\0') {
            recovered_55328(param_1);
            goto LAB_000559fd;
          }
        }
        iVar3 = iVar3 + 0x2c;
      }
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return iVar3;
}
