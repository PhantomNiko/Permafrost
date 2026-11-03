#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_00044dec
#define DAT_00044dec (*(int *)(0x44decU))
#define local_c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27e18
 */

int recovered_27e18(void)

{
  unsigned char frame[64];

  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;

  local_c = 0;
  if (DAT_00044dec == 0) {
    bVar1 = 0x80;
  }
  else {
    bVar1 = DAT_00006068;
  }
  uVar2 = recovered_27e67((uint)bVar1,(int *)&local_c);
  puVar4 = (uint *)&DAT_00006084;
  if (DAT_00044dec == 0) {
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
