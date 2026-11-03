#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4197a
 */

int recovered_4197a(int *param_1)

{
  unsigned char frame[64];

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX = 0;
  int iVar5;

  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, iVar4 != 0)) {
    piVar1 = (int *)param_1[2];
    iVar2 = *piVar1;
    iVar3 = recovered_2bd88(iVar2,0x434e0);
    iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2bd88(iVar2,0x4359f);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2bd88(iVar2,0x435f3);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2bd88(iVar2,0x43675);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2bd88(iVar2,0x432d8);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    if (iVar4 != 1) {
      iVar4 = recovered_2bd88(iVar2,0x432e1);
      if (((char)iVar4 != '\0') && (iVar4 = recovered_2bd88(piVar1[1],0x432d8), (char)iVar4 != '\0')
         ) {
        return iVar5;
      }
      iVar4 = recovered_2bd88(iVar2,0x432e7);
      if ((char)iVar4 != '\0') {
        iVar4 = recovered_2bd88(piVar1[1],0x432d8);
        return iVar4;
      }
    }
  }
  return 0;
}
