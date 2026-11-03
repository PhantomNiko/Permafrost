#include "functions.h"
#undef DAT_00061e48
#define DAT_00061e48 (*(char *)(0x61e48U))
#undef DAT_00061e49
#define DAT_00061e49 (*(char *)(0x61e49U))
#undef DAT_00062e4a
#define DAT_00062e4a (*(uint16_t *)(0x62e4aU))
#undef PTR_DAT_0005d08c
#define PTR_DAT_0005d08c (*(uint8_t * *)(0x5d08cU))
#undef PTR_DAT_0005d090
#define PTR_DAT_0005d090 (*(uint8_t * *)(0x5d090U))
#undef PTR_DAT_0005d094
#define PTR_DAT_0005d094 (*(uint8_t * *)(0x5d094U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36da3
 */

undefined4 recovered_36da3(void)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  undefined4 unaff_EBX = 0;
  undefined4 uVar3;

  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (DAT_00061e48 == '\0') {
    if (DAT_00061e49 == '\0') {
      DAT_00061e49 = '\x01';
      iVar1 = FUN_0002010a();
      if ((iVar1 != 0) &&
         (iVar1 = (uint)*(ushort *)PTR_DAT_0005d090 + (uint)*(ushort *)PTR_DAT_0005d094 * 0x10,
         iVar1 != 0)) {
        uVar2 = 0x10;
        if (0xffef < (ushort)(*(ushort *)PTR_DAT_0005d08c - 0x11)) {
          uVar2 = (uint)*(ushort *)PTR_DAT_0005d08c;
        }
        recovered_21348(0x61e4a,iVar1,uVar2 << 8);
        DAT_00061e48 = 1;
        DAT_00062e4a = (short)uVar2;
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
