#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45565
 */

int recovered_45565(int *param_1)

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
    iVar3 = recovered_2d39e(iVar2,0x47231);
    iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d39e(iVar2,0x472f0);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d39e(iVar2,0x47344);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d39e(iVar2,0x473c6);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d39e(iVar2,0x47029);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    if (iVar4 != 1) {
      iVar4 = recovered_2d39e(iVar2,0x47032);
      if (((char)iVar4 != '\0') && (iVar4 = recovered_2d39e(piVar1[1],0x47029), (char)iVar4 != '\0')
         ) {
        return iVar5;
      }
      iVar4 = recovered_2d39e(iVar2,0x47038);
      if ((char)iVar4 != '\0') {
        iVar4 = recovered_2d39e(piVar1[1],0x47029);
        return iVar4;
      }
    }
  }
  return 0;
}
