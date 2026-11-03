#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x558d1
 */

int recovered_558d1(int *param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX = 0;
  int iVar5;

  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, iVar4 != 0)) {
    piVar1 = (int *)param_1[2];
    iVar2 = *piVar1;
    iVar3 = recovered_3b7e1(iVar2,0x58364);
    iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    if (iVar4 != 1) {
      iVar4 = recovered_3b7e1(iVar2,0x5836d);
      if (((char)iVar4 != '\0') && (iVar4 = recovered_3b7e1(piVar1[1],0x58364), (char)iVar4 != '\0')
         ) {
        return iVar5;
      }
      iVar4 = recovered_3b7e1(iVar2,0x58373);
      if (((char)iVar4 != '\0') && (iVar4 = recovered_3b7e1(piVar1[1],0x58364), (char)iVar4 != '\0')
         ) {
        return iVar5;
      }
      iVar4 = recovered_3b7e1(iVar2,0x58379);
      if ((char)iVar4 != '\0') {
        iVar4 = recovered_3b7e1(piVar1[1],0x58364);
        return iVar4;
      }
    }
  }
  return 0;
}
