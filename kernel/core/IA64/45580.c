#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45580
 */

int recovered_45580(int *param_1)

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
    iVar3 = recovered_2d3d6(iVar2,0x47286);
    iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d3d6(iVar2,0x47345);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d3d6(iVar2,0x47399);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d3d6(iVar2,0x4741b);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    iVar3 = recovered_2d3d6(iVar2,0x4707e);
    if ((char)iVar3 != '\0') {
      return iVar5;
    }
    if (iVar4 != 1) {
      iVar4 = recovered_2d3d6(iVar2,0x47087);
      if (((char)iVar4 != '\0') && (iVar4 = recovered_2d3d6(piVar1[1],0x4707e), (char)iVar4 != '\0')
         ) {
        return iVar5;
      }
      iVar4 = recovered_2d3d6(iVar2,0x4708d);
      if ((char)iVar4 != '\0') {
        iVar4 = recovered_2d3d6(piVar1[1],0x4707e);
        return iVar4;
      }
    }
  }
  return 0;
}
