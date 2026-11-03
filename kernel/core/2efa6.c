#include "functions.h"
#undef PTR_DAT_0005d004
#define PTR_DAT_0005d004 (*(uint8_t * *)(0x5d004U))
#undef PTR_DAT_0005d01c
#define PTR_DAT_0005d01c (*(uint8_t * *)(0x5d01cU))
#undef PTR_DAT_0005d02c
#define PTR_DAT_0005d02c (*(uint8_t * *)(0x5d02cU))
#undef PTR_DAT_0005d038
#define PTR_DAT_0005d038 (*(uint8_t * *)(0x5d038U))
#undef PTR_FUN_0005d014
#define PTR_FUN_0005d014 (*(uint8_t * *)(0x5d014U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2efa6
 */

void FUN_0002efa6(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_0005d004;
  if (*PTR_DAT_0005d004 == '\0') {
    uVar4 = recovered_23367((uint *)PTR_DAT_0005d004);
    puVar3 = PTR_DAT_0005d01c;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_0005d038;
      *(undefined **)PTR_DAT_0005d01c = PTR_DAT_0005d02c + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_23360();
      recovered_23376(puVar2);
    }
  }
  return;
}
