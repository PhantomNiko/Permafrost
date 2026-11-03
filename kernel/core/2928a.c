#include "functions.h"
#undef DAT_000525bc
#define DAT_000525bc (*(char *)(0x525bcU))
#undef DAT_000525bd
#define DAT_000525bd (*(char *)(0x525bdU))
#undef DAT_000535be
#define DAT_000535be (*(uint16_t *)(0x535beU))
#undef PTR_DAT_0004e018
#define PTR_DAT_0004e018 (*(uint8_t * *)(0x4e018U))
#undef PTR_DAT_0004e01c
#define PTR_DAT_0004e01c (*(uint8_t * *)(0x4e01cU))
#undef PTR_DAT_0004e020
#define PTR_DAT_0004e020 (*(uint8_t * *)(0x4e020U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2928a
 */

undefined4 recovered_2928a(void)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  undefined4 unaff_EBX = 0;
  undefined4 uVar3;

  uVar3 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (DAT_000525bc == '\0') {
    if (DAT_000525bd == '\0') {
      DAT_000525bd = '\x01';
      iVar1 = FUN_0002010a();
      if ((iVar1 != 0) &&
         (iVar1 = (uint)*(ushort *)PTR_DAT_0004e01c + (uint)*(ushort *)PTR_DAT_0004e020 * 0x10,
         iVar1 != 0)) {
        uVar2 = 0x10;
        if (0xffef < (ushort)(*(ushort *)PTR_DAT_0004e018 - 0x11)) {
          uVar2 = (uint)*(ushort *)PTR_DAT_0004e018;
        }
        recovered_21348(0x525be,iVar1,uVar2 << 8);
        DAT_000525bc = 1;
        DAT_000535be = (short)uVar2;
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
