#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_0004e5f8
#define DAT_0004e5f8 (*(int *)(0x4e5f8U))
#undef DAT_0004ee98
#define DAT_0004ee98 (*(int *)(0x4ee98U))
#undef DAT_0004eeac
#define DAT_0004eeac (*(int *)(0x4eeacU))
#undef DAT_0004eeb0
#define DAT_0004eeb0 (*(uint32_t *)(0x4eeb0U))
#undef DAT_0004eeb4
#define DAT_0004eeb4 (*(uint8_t *)(0x4eeb4U))
#undef DAT_0004eeb8
#define DAT_0004eeb8 (*(uint32_t *)(0x4eeb8U))
#undef DAT_0004eebc
#define DAT_0004eebc (*(uint32_t *)(0x4eebcU))
#undef DAT_0004eee0
#define DAT_0004eee0 (*(uint32_t *)(0x4eee0U))
#undef DAT_00084054
#define DAT_00084054 (*(uint8_t *)(0x84054U))
#undef DAT_00084058
#define DAT_00084058 (*(uint32_t *)(0x84058U))
#undef DAT_0008405c
#define DAT_0008405c (*(uint32_t *)(0x8405cU))
#undef _DAT_00006084
#define _DAT_00006084 (*(uint *)(0x6084U))
#define local_20 (*(int *)(frame + 13328))
#define local_1c (*(uint *)(frame + 13332))
#define local_18 (*(int *)(frame + 13336))
#define local_14 (*(uint *)(frame + 13340))
#define local_3420 (*(int (*)[3328])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28aa6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_28aa6(void)

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
  local_20 = DAT_0004eeac;
  if (DAT_0004ee98 == 0) {
    bVar3 = 0x80;
  }
  else {
    bVar3 = DAT_00006068;
  }
  recovered_21348((int)local_3420,0x4eeb0,0x3400);
  DAT_0004eeac = 0;
  recovered_213af(0x4eeb0,0,0x3400);
  uVar2 = recovered_2b54a((uint)bVar3,(int *)&local_14);
  if ((((char)uVar2 == '\0') && (DAT_0004ee98 != 0)) && (_DAT_00006084 != 0)) {
    local_14 = _DAT_00006084;
  }
  else if (local_14 == 0) goto LAB_00028b47;
  recovered_2d562(bVar3,local_14,'\x01');
LAB_00028b47:
  for (uVar4 = 0x80; uVar4 != 0x90; uVar4 = uVar4 + 1) {
    local_1c = 0;
    if (bVar3 != uVar4) {
      uVar2 = recovered_2b54a(uVar4 & 0xff,(int *)&local_1c);
      if ((local_1c != 0 & (byte)uVar2) == 1) {
        recovered_2d562((byte)uVar4,local_1c,'\0');
      }
    }
  }
  for (iVar6 = -0x60; iVar1 = DAT_0004eeac, iVar6 != 0; iVar6 = iVar6 + 0xc) {
    if ((((&DAT_00084054)[iVar6] == '\x01') && (*(int *)((int)&DAT_0008405c + iVar6) != 0)) &&
       (*(uint *)((int)&DAT_00084058 + iVar6) != 0)) {
      recovered_2d562(*(byte *)(iVar6 + 0x84055),*(uint *)((int)&DAT_00084058 + iVar6),'\0');
    }
  }
  iVar6 = 0;
  local_18 = DAT_0004e5f8;
  do {
    if (iVar6 == iVar1) {
      DAT_00084054 = 1;
      return iVar1 != 0;
    }
    piVar5 = local_3420;
    iVar7 = local_20;
    while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
      if ((((&DAT_0004eeb4)[iVar6 * 0x34] == (char)piVar5[1]) &&
          ((&DAT_0004eeb8)[iVar6 * 0xd] == piVar5[2])) &&
         ((&DAT_0004eebc)[iVar6 * 0xd] == piVar5[3])) {
        (&DAT_0004eee0)[iVar6 * 0xd] = piVar5[0xc];
        if (local_18 == *piVar5) {
          DAT_0004e5f8 = (&DAT_0004eeb0)[iVar6 * 0xd];
          local_18 = DAT_0004e5f8;
        }
        break;
      }
      piVar5 = piVar5 + 0xd;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
