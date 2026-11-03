#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5585c
 */

int recovered_5585c(int *param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX = 0;

  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(int *)param_1[2];
    iVar1 = recovered_3b7e1(iVar2,0x58576);
    iVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar1 == '\0') {
      iVar1 = recovered_3b7e1(iVar2,0x58635);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_3b7e1(iVar2,0x58689);
        if ((char)iVar1 == '\0') {
          iVar2 = recovered_3b7e1(iVar2,0x5870b);
          if ((char)iVar2 == '\0') {
            iVar3 = recovered_558d1(param_1);
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}
