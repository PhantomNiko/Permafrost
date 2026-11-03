#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(uint32_t *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(uint *)(0x47e00U))
#undef DAT_00047e0c
#define DAT_00047e0c (*(int *)(0x47e0cU))
#undef DAT_00047e10
#define DAT_00047e10 (*(uint *)(0x47e10U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29713
 */

uint recovered_29713(uint param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;

  uVar2 = DAT_00047e10;
  iVar1 = DAT_00047e0c;
  if ((param_1 < DAT_00047e00) &&
     (uVar3 = recovered_297f8(&DAT_00047dfc,DAT_00047e00), (char)uVar3 != '\0')) {
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
    if ((DAT_00047e0c == iVar1) && (DAT_00047e10 == uVar2)) {
      uVar4 = recovered_298a8(&DAT_00047dfc,DAT_00047e0c,uVar2,param_1);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
