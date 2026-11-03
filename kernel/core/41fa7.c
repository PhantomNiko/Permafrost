#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41fa7
 */

undefined4 recovered_41fa7(int param_1,uint *param_2,uint param_3)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar6 = *param_2;
  if (param_3 <= uVar6) {
    return 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = 0;
  do {
    if (param_3 <= uVar6) {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + uVar6 * 4);
    iVar2 = recovered_2100f(iVar3,0x43363);
    if (iVar2 == 0) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar2 = recovered_2100f(iVar3,0x43388);
      if (iVar2 == 0) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar4 + -1;
      }
      else {
        iVar2 = recovered_2100f(iVar3,0x43307);
        if (iVar2 == 0) {
          iVar5 = iVar5 + 1;
        }
        else {
          iVar2 = recovered_2100f(iVar3,0x43309);
          if (iVar2 == 0) {
            if (iVar5 == 0) {
              return 0;
            }
            iVar5 = iVar5 + -1;
          }
          else {
            iVar2 = recovered_2100f(iVar3,0x437eb);
            if (iVar2 == 0) {
              iVar1 = iVar1 + 1;
            }
            else {
              iVar3 = recovered_2100f(iVar3,0x437ed);
              if (iVar3 == 0) {
                if (iVar1 == 0) {
                  return 0;
                }
                iVar1 = iVar1 + -1;
              }
            }
          }
        }
      }
    }
    uVar6 = *param_2 + 1;
    *param_2 = uVar6;
  } while (!((iVar4 == 0 && iVar5 == 0) && iVar1 == 0));
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}
