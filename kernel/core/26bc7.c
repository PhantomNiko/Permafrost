#include "functions.h"
#undef DAT_00057430
#define DAT_00057430 (*(char *)(0x57430U))
#undef DAT_00057431
#define DAT_00057431 (*(char *)(0x57431U))
#undef DAT_00058432
#define DAT_00058432 (*(uint16_t *)(0x58432U))
#undef PTR_DAT_00044018
#define PTR_DAT_00044018 (*(uint8_t * *)(0x44018U))
#undef PTR_DAT_0004401c
#define PTR_DAT_0004401c (*(uint8_t * *)(0x4401cU))
#undef PTR_DAT_00044020
#define PTR_DAT_00044020 (*(uint8_t * *)(0x44020U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26bc7
 */

undefined4 recovered_26bc7(void)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 unaff_EBX = 0;
  undefined4 uVar3;
  
  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (DAT_00057430 == '\0') {
    if (DAT_00057431 == '\0') {
      DAT_00057431 = '\x01';
      iVar1 = FUN_000200ce();
      if ((iVar1 != 0) &&
         (iVar1 = (uint)*(ushort *)PTR_DAT_0004401c + (uint)*(ushort *)PTR_DAT_00044020 * 0x10,
         iVar1 != 0)) {
        uVar2 = 0x10;
        if (0xffef < (ushort)(*(ushort *)PTR_DAT_00044018 - 0x11)) {
          uVar2 = (uint)*(ushort *)PTR_DAT_00044018;
        }
        recovered_20f42(0x57432,iVar1,uVar2 << 8);
        DAT_00057430 = 1;
        DAT_00058432 = (short)uVar2;
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

