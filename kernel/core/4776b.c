#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4776b
 */

int recovered_4776b(int *param_1)

{
  unsigned char frame[64];

  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX = 0;

  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(int *)param_1[2];
    iVar1 = recovered_2d4e4(iVar2,0x4950b);
    iVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if ((char)iVar1 == '\0') {
      iVar1 = recovered_2d4e4(iVar2,0x495ca);
      if ((char)iVar1 == '\0') {
        iVar1 = recovered_2d4e4(iVar2,0x4961e);
        if ((char)iVar1 == '\0') {
          iVar2 = recovered_2d4e4(iVar2,0x496a0);
          if ((char)iVar2 == '\0') {
            iVar3 = recovered_477e0(param_1);
            return iVar3;
          }
        }
      }
    }
  }
  return iVar3;
}
