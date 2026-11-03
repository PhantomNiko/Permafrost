#include "functions.h"
#undef DAT_0002f0b4
#define DAT_0002f0b4 (*(uint32_t *)(0x2f0b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20788
 */

int recovered_20788(void)

{
  unsigned char frame[64];

  int iVar1;
  int *piVar2;
  
  recovered_2072e();
  iVar1 = 0;
  for (piVar2 = &DAT_0002f0b4; piVar2 = (int *)*piVar2, piVar2 != (int *)0x0; piVar2 = piVar2 + 1) {
    if ((char)piVar2[2] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  return iVar1;
}

