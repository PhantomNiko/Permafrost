#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(int *)(0x5e6a0U))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(byte *)(0x5e71cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37ecf
 */

int recovered_37ecf(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  iVar1 = 0;
  if ((DAT_0005e6c0 != 0 & DAT_0005e71c) == 1) {
    piVar2 = (int *)(DAT_0005e69c + 0xf8);
    iVar1 = 0;
    iVar3 = DAT_0005e6a0;
    while (bVar4 = iVar3 != 0, iVar3 = iVar3 + -1, bVar4) {
      iVar1 = iVar1 + (*piVar2 + (DAT_0005e6c0 - 1)) / DAT_0005e6c0;
      piVar2 = piVar2 + 0x43;
    }
  }
  return iVar1;
}
