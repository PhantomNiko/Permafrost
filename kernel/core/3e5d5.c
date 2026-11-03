#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3e5d5
 */

int recovered_3e5d5(int *param_1)

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
    iVar3 = recovered_29600(iVar2,0x4005f);
    iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_29600(iVar2,0x4011e);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_29600(iVar2,0x40172);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_29600(iVar2,0x401f4);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_29600(iVar2,0x3fe57);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    if (iVar4 != 1) {
      iVar4 = recovered_29600(iVar2,0x3fe60);
      if (((char)iVar4 != '\0') && (iVar4 = recovered_29600(piVar1[1],0x3fe57), (char)iVar4 != '\0')
         ) {
        return iVar5;
      }
      iVar4 = recovered_29600(iVar2,0x3fe66);
      if ((char)iVar4 != '\0') {
        iVar4 = recovered_29600(piVar1[1],0x3fe57);
        return iVar4;
      }
    }
  }
  return 0;
}

