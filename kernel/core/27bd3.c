#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_000475e8
#define DAT_000475e8 (*(int *)(0x475e8U))
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef DAT_0004808c
#define DAT_0004808c (*(int *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
#undef DAT_00048094
#define DAT_00048094 (*(uint8_t *)(0x48094U))
#undef DAT_00048098
#define DAT_00048098 (*(uint32_t *)(0x48098U))
#undef DAT_0004809c
#define DAT_0004809c (*(uint32_t *)(0x4809cU))
#undef DAT_000480c0
#define DAT_000480c0 (*(uint32_t *)(0x480c0U))
#undef DAT_0007cfd4
#define DAT_0007cfd4 (*(uint8_t *)(0x7cfd4U))
#undef _DAT_00006084
#define _DAT_00006084 (*(uint *)(0x6084U))
#define local_3420 (*(int (*)[3328])(frame + 16))
#define local_20 (*(int *)(frame + 13328))
#define local_1c (*(uint *)(frame + 13332))
#define local_18 (*(int *)(frame + 13336))
#define local_14 (*(uint *)(frame + 13340))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27bd3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_27bd3(void)

{
  unsigned char frame[13392];

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;

  local_14 = 0;
  local_20 = DAT_0004808c;
  if (DAT_00047e84 == 0) {
    bVar4 = 0x80;
  }
  else {
    bVar4 = DAT_00006068;
  }
  recovered_20f42((int)local_3420,0x48090,0x3400);
  DAT_0004808c = 0;
  recovered_20fa9(0x48090,0,0x3400);
  uVar2 = recovered_2a36d((uint)bVar4,(int *)&local_14);
  if ((((char)uVar2 == '\0') && (DAT_00047e84 != 0)) && (_DAT_00006084 != 0)) {
    local_14 = _DAT_00006084;
  }
  else if (local_14 == 0) goto LAB_00027c71;
  recovered_2bf8f(bVar4,local_14,'\x01');
LAB_00027c71:
  for (uVar5 = 0x80; iVar1 = DAT_0004808c, uVar5 != 0x90; uVar5 = uVar5 + 1) {
    local_1c = 0;
    if (bVar4 != uVar5) {
      uVar2 = recovered_2a36d(uVar5 & 0xff,(int *)&local_1c);
      if ((local_1c != 0 & (byte)uVar2) == 1) {
        recovered_2bf8f((byte)uVar5,local_1c,'\0');
      }
    }
  }
  iVar3 = 0;
  local_18 = DAT_000475e8;
  do {
    if (iVar3 == iVar1) {
      DAT_0007cfd4 = 1;
      return iVar1 != 0;
    }
    piVar6 = local_3420;
    iVar7 = local_20;
    while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
      if ((((&DAT_00048094)[iVar3 * 0x34] == (char)piVar6[1]) &&
          ((&DAT_00048098)[iVar3 * 0xd] == piVar6[2])) &&
         ((&DAT_0004809c)[iVar3 * 0xd] == piVar6[3])) {
        (&DAT_000480c0)[iVar3 * 0xd] = piVar6[0xc];
        if (local_18 == *piVar6) {
          DAT_000475e8 = (&DAT_00048090)[iVar3 * 0xd];
          local_18 = DAT_000475e8;
        }
        break;
      }
      piVar6 = piVar6 + 0xd;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}
