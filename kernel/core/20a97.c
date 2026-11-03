#include "functions.h"
#undef DAT_000445ec
#define DAT_000445ec (*(uint32_t *)(0x445ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20a97
 */

int recovered_20a97(void)

{
  unsigned char frame[64];

  int iVar1;
  int *piVar2;
  
  recovered_208b2();
  iVar1 = 0;
  for (piVar2 = &DAT_000445ec; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

