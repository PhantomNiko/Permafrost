#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22b37
 */

int recovered_22b37(int param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar5 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != 0)) &&
     ((param_4 != (uint *)0x0 && (*(char *)((int)param_4 + 0x111) == '\x01')))) {
    iVar3 = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_223d7(param_1,iVar3);
      param_4[0x42] = param_4[0x42] + iVar3;
      iVar5 = param_3;
    }
    else {
      if (*(char *)((int)param_4 + 0x112) == '\0') {
        uVar4 = param_4[0x42];
      }
      else {
        uVar4 = param_4[0x40];
        param_4[0x42] = uVar4;
      }
      uVar1 = recovered_22916((int)param_4,uVar4 + iVar3);
      if ((char)uVar1 != '\0') {
        uVar4 = param_4[0x40];
        uVar2 = param_4[0x42];
        if (uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
          recovered_213af(uVar4 + param_4[0x3f],0,uVar2 - uVar4);
          uVar2 = param_4[0x42];
        }
        recovered_21348(uVar2 + param_4[0x3f],param_1,iVar3);
        uVar4 = iVar3 + param_4[0x42];
        param_4[0x42] = uVar4;
        if (param_4[0x40] < uVar4) {
          param_4[0x40] = uVar4;
        }
        *(undefined2 *)((int)param_4 + 0x113) = 1;
        iVar5 = param_3;
      }
    }
  }
  return iVar5;
}
