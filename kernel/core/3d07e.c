#include "functions.h"
#undef DAT_000445d8
#define DAT_000445d8 (*(int *)(0x445d8U))
#undef DAT_00088e5e
#define DAT_00088e5e (*(char *)(0x88e5eU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d07e
 */

int recovered_3d07e(int context)

{
  unsigned char frame[64];

  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((((DAT_00088e5e != '\0') || (bVar2 = recovered_2627e(), bVar2)) &&
      (piVar3 = recovered_27df0(context), piVar3 != (int *)0x0)) &&
     ((iVar1 = piVar3[8], iVar1 != 0 &&
      (uVar4 = recovered_3d40c((int)piVar3,iVar1), (char)uVar4 != '\0')))) {
    piVar3[8] = iVar1;
    DAT_000445d8 = *piVar3;
    return CONCAT31((int3)((uint)*piVar3 >> 8),1);
  }
  return 0;
}

