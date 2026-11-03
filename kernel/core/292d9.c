#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#undef DAT_00047e00
#define DAT_00047e00 (*(int *)(0x47e00U))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(byte *)(0x47e7cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x292d9
 */

int recovered_292d9(void)

{
  unsigned char frame[64];

  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  iVar1 = 0;
  if ((DAT_00047e20 != 0 & DAT_00047e7c) == 1) {
    piVar2 = (int *)(DAT_00047dfc + 0xf8);
    iVar1 = 0;
    iVar3 = DAT_00047e00;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      iVar1 = iVar1 + (*piVar2 + (DAT_00047e20 - 1)) / DAT_00047e20;
      piVar2 = piVar2 + 0x42;
    }
  }
  return iVar1;
}
