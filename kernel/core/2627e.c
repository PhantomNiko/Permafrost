#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_000445d8
#define DAT_000445d8 (*(int *)(0x445d8U))
#undef DAT_00044dec
#define DAT_00044dec (*(int *)(0x44decU))
#undef DAT_00054f20
#define DAT_00054f20 (*(int *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
#undef DAT_00054f28
#define DAT_00054f28 (*(uint8_t *)(0x54f28U))
#undef DAT_00054f2c
#define DAT_00054f2c (*(uint32_t *)(0x54f2cU))
#undef DAT_00054f30
#define DAT_00054f30 (*(uint32_t *)(0x54f30U))
#undef DAT_00054f44
#define DAT_00054f44 (*(uint32_t *)(0x54f44U))
#undef DAT_00088e5e
#define DAT_00088e5e (*(uint8_t *)(0x88e5eU))
#undef _DAT_00006084
#define _DAT_00006084 (*(uint *)(0x6084U))
#define local_18 (*(int *)(frame + 9240))
#define local_14 (*(uint *)(frame + 9244))
#define local_2420 (*(int (*)[2304])(frame + 16))
#define local_20 (*(int *)(frame + 9232))
#define local_1c (*(uint *)(frame + 9236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2627e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_2627e(void)

{
  unsigned char frame[9296];

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  local_14 = 0;
  local_20 = DAT_00054f20;
  if (DAT_00044dec == 0) {
    bVar4 = 0x80;
  }
  else {
    bVar4 = DAT_00006068;
  }
  recovered_20f42((int)local_2420,0x54f24,0x2400);
  DAT_00054f20 = 0;
  recovered_20fa9(0x54f24,0,0x2400);
  uVar2 = recovered_27e67((uint)bVar4,(int *)&local_14);
  if ((((char)uVar2 == '\0') && (DAT_00044dec != 0)) && (_DAT_00006084 != 0)) {
    local_14 = _DAT_00006084;
  }
  else if (local_14 == 0) goto LAB_0002631c;
  recovered_29c1b(bVar4,local_14,'\x01');
LAB_0002631c:
  for (uVar5 = 0x80; iVar1 = DAT_00054f20, uVar5 != 0x90; uVar5 = uVar5 + 1) {
    local_1c = 0;
    if (bVar4 != uVar5) {
      uVar2 = recovered_27e67(uVar5 & 0xff,(int *)&local_1c);
      if ((local_1c != 0 & (byte)uVar2) == 1) {
        recovered_29c1b((byte)uVar5,local_1c,'\0');
      }
    }
  }
  iVar3 = 0;
  local_18 = DAT_000445d8;
  do {
    if (iVar3 == iVar1) {
      DAT_00088e5e = 1;
      return iVar1 != 0;
    }
    piVar6 = local_2420;
    iVar7 = local_20;
    while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
      if ((((&DAT_00054f28)[iVar3 * 0x24] == (char)piVar6[1]) &&
          ((&DAT_00054f2c)[iVar3 * 9] == piVar6[2])) && ((&DAT_00054f30)[iVar3 * 9] == piVar6[3])) {
        (&DAT_00054f44)[iVar3 * 9] = piVar6[8];
        if (local_18 == *piVar6) {
          DAT_000445d8 = (&DAT_00054f24)[iVar3 * 9];
          local_18 = DAT_000445d8;
        }
        break;
      }
      piVar6 = piVar6 + 9;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

