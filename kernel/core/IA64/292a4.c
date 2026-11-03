#include "functions.h"
#undef DAT_000505bc
#define DAT_000505bc (*(char *)(0x505bcU))
#undef DAT_000505bd
#define DAT_000505bd (*(char *)(0x505bdU))
#undef DAT_000515be
#define DAT_000515be (*(uint16_t *)(0x515beU))
#undef PTR_DAT_0004c018
#define PTR_DAT_0004c018 (*(uint8_t * *)(0x4c018U))
#undef PTR_DAT_0004c01c
#define PTR_DAT_0004c01c (*(uint8_t * *)(0x4c01cU))
#undef PTR_DAT_0004c020
#define PTR_DAT_0004c020 (*(uint8_t * *)(0x4c020U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x292a4
 */

undefined4 recovered_292a4(void)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 unaff_EBX = 0;
  undefined4 uVar3;

  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (DAT_000505bc == '\0') {
    if (DAT_000505bd == '\0') {
      DAT_000505bd = '\x01';
      iVar1 = FUN_0002010a();
      if ((iVar1 != 0) &&
         (iVar1 = (uint)*(ushort *)PTR_DAT_0004c01c + (uint)*(ushort *)PTR_DAT_0004c020 * 0x10,
         iVar1 != 0)) {
        uVar2 = 0x10;
        if (0xffef < (ushort)(*(ushort *)PTR_DAT_0004c018 - 0x11)) {
          uVar2 = (uint)*(ushort *)PTR_DAT_0004c018;
        }
        recovered_21348(0x505be,iVar1,uVar2 << 8);
        DAT_000505bc = 1;
        DAT_000515be = (short)uVar2;
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
