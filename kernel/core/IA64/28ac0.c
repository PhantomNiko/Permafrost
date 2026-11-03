#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_0004c5f8
#define DAT_0004c5f8 (*(int *)(0x4c5f8U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef DAT_0004ceac
#define DAT_0004ceac (*(int *)(0x4ceacU))
#undef DAT_0004ceb0
#define DAT_0004ceb0 (*(uint32_t *)(0x4ceb0U))
#undef DAT_0004ceb4
#define DAT_0004ceb4 (*(uint8_t *)(0x4ceb4U))
#undef DAT_0004ceb8
#define DAT_0004ceb8 (*(uint32_t *)(0x4ceb8U))
#undef DAT_0004cebc
#define DAT_0004cebc (*(uint32_t *)(0x4cebcU))
#undef DAT_0004cee0
#define DAT_0004cee0 (*(uint32_t *)(0x4cee0U))
#undef DAT_00082054
#define DAT_00082054 (*(uint8_t *)(0x82054U))
#undef DAT_00082058
#define DAT_00082058 (*(uint32_t *)(0x82058U))
#undef DAT_0008205c
#define DAT_0008205c (*(uint32_t *)(0x8205cU))
#undef _DAT_00006084
#define _DAT_00006084 (*(uint *)(0x6084U))
#define local_3420 (*(int (*)[3328])(frame + 16))
#define local_20 (*(int *)(frame + 13328))
#define local_1c (*(uint *)(frame + 13332))
#define local_18 (*(int *)(frame + 13336))
#define local_14 (*(uint *)(frame + 13340))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_28ac0(void)

{
  unsigned char frame[13392];

  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  local_14 = 0;
  local_20 = DAT_0004ceac;
  if (DAT_0004ce98 == 0) {
    bVar3 = 0x80;
  }
  else {
    bVar3 = DAT_00006068;
  }
  recovered_21348((int)local_3420,0x4ceb0,0x3400);
  DAT_0004ceac = 0;
  recovered_213af(0x4ceb0,0,0x3400);
  uVar2 = recovered_2b5c6((uint)bVar3,(int *)&local_14);
  if ((((char)uVar2 == '\0') && (DAT_0004ce98 != 0)) && (_DAT_00006084 != 0)) {
    local_14 = _DAT_00006084;
  }
  else if (local_14 == 0) goto LAB_00028b61;
  recovered_2d454(bVar3,local_14,'\x01');
LAB_00028b61:
  for (uVar4 = 0x80; uVar4 != 0x90; uVar4 = uVar4 + 1) {
    local_1c = 0;
    if (bVar3 != uVar4) {
      uVar2 = recovered_2b5c6(uVar4 & 0xff,(int *)&local_1c);
      if ((local_1c != 0 & (byte)uVar2) == 1) {
        recovered_2d454((byte)uVar4,local_1c,'\0');
      }
    }
  }
  for (iVar6 = -0x60; iVar1 = DAT_0004ceac, iVar6 != 0; iVar6 = iVar6 + 0xc) {
    if ((((&DAT_00082054)[iVar6] == '\x01') && (*(int *)((int)&DAT_0008205c + iVar6) != 0)) &&
       (*(uint *)((int)&DAT_00082058 + iVar6) != 0)) {
      recovered_2d454(*(byte *)(iVar6 + 0x82055),*(uint *)((int)&DAT_00082058 + iVar6),'\0');
    }
  }
  iVar6 = 0;
  local_18 = DAT_0004c5f8;
  do {
    if (iVar6 == iVar1) {
      DAT_00082054 = 1;
      return iVar1 != 0;
    }
    piVar5 = local_3420;
    iVar7 = local_20;
    while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
      if ((((&DAT_0004ceb4)[iVar6 * 0x34] == (char)piVar5[1]) &&
          ((&DAT_0004ceb8)[iVar6 * 0xd] == piVar5[2])) &&
         ((&DAT_0004cebc)[iVar6 * 0xd] == piVar5[3])) {
        (&DAT_0004cee0)[iVar6 * 0xd] = piVar5[0xc];
        if (local_18 == *piVar5) {
          DAT_0004c5f8 = (&DAT_0004ceb0)[iVar6 * 0xd];
          local_18 = DAT_0004c5f8;
        }
        break;
      }
      piVar5 = piVar5 + 0xd;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
