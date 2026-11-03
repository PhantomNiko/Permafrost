#include "functions.h"
#undef DAT_0004ce10
#define DAT_0004ce10 (*(int *)(0x4ce10U))
#undef DAT_0004ce14
#define DAT_0004ce14 (*(int *)(0x4ce14U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(byte *)(0x4ce90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a432
 */

int recovered_2a432(void)

{
  unsigned char frame[64];

  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  iVar1 = 0;
  if ((DAT_0004ce34 != 0 & DAT_0004ce90) == 1) {
    piVar2 = (int *)(DAT_0004ce10 + 0xf8);
    iVar1 = 0;
    iVar3 = DAT_0004ce14;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      iVar1 = iVar1 + (*piVar2 + (DAT_0004ce34 - 1)) / DAT_0004ce34;
      piVar2 = piVar2 + 0x42;
    }
  }
  return iVar1;
}
