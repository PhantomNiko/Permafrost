#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x39710
 */

int recovered_39710(void)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;

  local_c = 0;
  if (DAT_0005e924 == 0) {
    bVar1 = 0x80;
  }
  else {
    bVar1 = DAT_00006068;
  }
  uVar2 = recovered_3975f((uint)bVar1,(int *)&local_c);
  puVar4 = (uint *)&DAT_00006084;
  if (DAT_0005e924 == 0) {
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
