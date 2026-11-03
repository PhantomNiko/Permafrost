#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cf7c
 */

int recovered_2cf7c(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;

  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 - iVar1;
    uVar4 = param_3 - iVar1;
    iVar3 = uVar4 - uVar2;
    if (uVar2 <= uVar4 && iVar3 != 0) {
      uVar5 = uVar2;
      for (; uVar4 < (uint)param_1[1]; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar5) = *(undefined1 *)(*param_1 + uVar4);
        uVar5 = uVar5 + 1;
      }
      param_1[1] = param_1[1] - iVar3;
      if (*param_1 == 0) {
        return 0;
      }
      return uVar2 + *param_1;
    }
  }
  iVar3 = uVar2 + iVar1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  return iVar3;
}
