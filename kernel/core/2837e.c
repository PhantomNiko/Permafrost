#include "functions.h"
#undef DAT_0004b59c
#define DAT_0004b59c (*(char *)(0x4b59cU))
#undef DAT_0004b59d
#define DAT_0004b59d (*(char *)(0x4b59dU))
#undef DAT_0004c59e
#define DAT_0004c59e (*(uint16_t *)(0x4c59eU))
#undef PTR_DAT_00047018
#define PTR_DAT_00047018 (*(uint8_t * *)(0x47018U))
#undef PTR_DAT_0004701c
#define PTR_DAT_0004701c (*(uint8_t * *)(0x4701cU))
#undef PTR_DAT_00047020
#define PTR_DAT_00047020 (*(uint8_t * *)(0x47020U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2837e
 */

undefined4 recovered_2837e(void)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 unaff_EBX = 0;
  undefined4 uVar3;

  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (DAT_0004b59c == '\0') {
    if (DAT_0004b59d == '\0') {
      DAT_0004b59d = '\x01';
      iVar1 = FUN_000200ce();
      if ((iVar1 != 0) &&
         (iVar1 = (uint)*(ushort *)PTR_DAT_0004701c + (uint)*(ushort *)PTR_DAT_00047020 * 0x10,
         iVar1 != 0)) {
        uVar2 = 0x10;
        if (0xffef < (ushort)(*(ushort *)PTR_DAT_00047018 - 0x11)) {
          uVar2 = (uint)*(ushort *)PTR_DAT_00047018;
        }
        recovered_20f42(0x4b59e,iVar1,uVar2 << 8);
        DAT_0004b59c = 1;
        DAT_0004c59e = (short)uVar2;
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
