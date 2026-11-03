#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b577
 */

int recovered_2b577(void)

{
  unsigned char frame[64];

  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;

  local_c = 0;
  if (DAT_0004ce98 == 0) {
    bVar1 = 0x80;
  }
  else {
    bVar1 = DAT_00006068;
  }
  uVar2 = recovered_2b5c6((uint)bVar1,(int *)&local_c);
  puVar4 = (uint *)&DAT_00006084;
  if (DAT_0004ce98 == 0) {
    puVar4 = &local_c;
  }
  if ((char)uVar2 != '\0') {
    puVar4 = &local_c;
  }
  iVar3 = 0;
  if (0x41 < *puVar4) {
    iVar3 = *puVar4 - 0x41;
  }
  return iVar3;
}
