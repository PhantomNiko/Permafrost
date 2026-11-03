#include "functions.h"
#undef DAT_0004ee10
#define DAT_0004ee10 (*(int *)(0x4ee10U))
#undef DAT_0004ee14
#define DAT_0004ee14 (*(int *)(0x4ee14U))
#undef DAT_0004ee34
#define DAT_0004ee34 (*(uint *)(0x4ee34U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(byte *)(0x4ee90U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a3b6
 */

int recovered_2a3b6(void)

{
  unsigned char frame[64];

  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  iVar1 = 0;
  if ((DAT_0004ee34 != 0 & DAT_0004ee90) == 1) {
    piVar2 = (int *)(DAT_0004ee10 + 0xf8);
    iVar1 = 0;
    iVar3 = DAT_0004ee14;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      iVar1 = iVar1 + (*piVar2 + (DAT_0004ee34 - 1)) / DAT_0004ee34;
      piVar2 = piVar2 + 0x42;
    }
  }
  return iVar1;
}
