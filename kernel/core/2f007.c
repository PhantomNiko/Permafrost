#include "functions.h"
#undef PTR_DAT_0005d010
#define PTR_DAT_0005d010 (*(uint8_t * *)(0x5d010U))
#undef PTR_DAT_0005d028
#define PTR_DAT_0005d028 (*(uint8_t * *)(0x5d028U))
#undef PTR_DAT_0005d030
#define PTR_DAT_0005d030 (*(uint8_t * *)(0x5d030U))
#undef PTR_DAT_0005d03c
#define PTR_DAT_0005d03c (*(uint8_t * *)(0x5d03cU))
#undef PTR_FUN_0005d018
#define PTR_FUN_0005d018 (*(uint8_t * *)(0x5d018U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f007
 */

void FUN_0002f007(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;

  puVar2 = PTR_DAT_0005d010;
  if (*PTR_DAT_0005d010 == '\0') {
    uVar4 = recovered_23367((uint *)PTR_DAT_0005d010);
    puVar3 = PTR_DAT_0005d028;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_0005d03c;
      *(undefined **)PTR_DAT_0005d028 = PTR_DAT_0005d030 + 8;
      *(undefined4 *)(puVar3 + 4) = uVar1;
      recovered_23360();
      recovered_23376(puVar2);
    }
  }
  return;
}
