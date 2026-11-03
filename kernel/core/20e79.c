#include "functions.h"
#undef DAT_0005d7bc
#define DAT_0005d7bc (*(uint32_t *)(0x5d7bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20e79
 */

int recovered_20e79(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  int *piVar2;

  recovered_20c94();
  iVar1 = 0;
  for (piVar2 = &DAT_0005d7bc; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}
