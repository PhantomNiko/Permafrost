#include "functions.h"
#undef DAT_00006068
#define DAT_00006068 (*(byte *)(0x6068U))
#undef DAT_00006084
#define DAT_00006084 (*(uint8_t *)(0x6084U))
#undef DAT_0005d764
#define DAT_0005d764 (*(int *)(0x5d764U))
#undef DAT_0005e924
#define DAT_0005e924 (*(int *)(0x5e924U))
#undef DAT_0005e938
#define DAT_0005e938 (*(int *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
#undef DAT_0005e940
#define DAT_0005e940 (*(uint8_t *)(0x5e940U))
#undef DAT_0005e944
#define DAT_0005e944 (*(uint32_t *)(0x5e944U))
#undef DAT_0005e948
#define DAT_0005e948 (*(uint32_t *)(0x5e948U))
#undef DAT_0005e96c
#define DAT_0005e96c (*(uint32_t *)(0x5e96cU))
#undef DAT_000938e0
#define DAT_000938e0 (*(uint8_t *)(0x938e0U))
#undef DAT_000938e1
#define DAT_000938e1 (*(uint8_t *)(0x938e1U))
#undef DAT_000938e4
#define DAT_000938e4 (*(uint32_t *)(0x938e4U))
#undef DAT_000938e8
#define DAT_000938e8 (*(uint32_t *)(0x938e8U))
#undef _DAT_00006084
#define _DAT_00006084 (*(uint *)(0x6084U))
#define local_3420 (*(int (*)[3328])(frame + 16))
#define local_20 (*(int *)(frame + 13328))
#define local_1c (*(uint *)(frame + 13332))
#define local_18 (*(int *)(frame + 13336))
#define local_14 (*(uint *)(frame + 13340))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x365c7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_365c7(void)

{
  unsigned char frame[13392] = {0};

  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  local_14 = 0;
  local_20 = DAT_0005e938;
  if (DAT_0005e924 == 0) {
    bVar3 = 0x80;
  }
  else {
    bVar3 = DAT_00006068;
  }
  recovered_21348((int)local_3420,0x5e93c,0x3400);
  DAT_0005e938 = 0;
  recovered_213af(0x5e93c,0,0x3400);
  uVar2 = recovered_3975f((uint)bVar3,(int *)&local_14);
  if ((((char)uVar2 == '\0') && (DAT_0005e924 != 0)) && (_DAT_00006084 != 0)) {
    local_14 = _DAT_00006084;
  }
  else if (local_14 == 0) goto LAB_00036668;
  recovered_3b85f(bVar3,local_14,'\x01');
LAB_00036668:
  for (uVar4 = 0x80; uVar4 != 0x90; uVar4 = uVar4 + 1) {
    local_1c = 0;
    if (bVar3 != uVar4) {
      uVar2 = recovered_3975f(uVar4 & 0xff,(int *)&local_1c);
      if ((local_1c != 0 & (byte)uVar2) == 1) {
        recovered_3b85f((byte)uVar4,local_1c,'\0');
      }
    }
  }
  for (iVar6 = -0x60; iVar1 = DAT_0005e938, iVar6 != 0; iVar6 = iVar6 + 0xc) {
    if ((((&DAT_000938e0)[iVar6] == '\x01') && (*(int *)((int)&DAT_000938e8 + iVar6) != 0)) &&
       (*(uint *)((int)&DAT_000938e4 + iVar6) != 0)) {
      recovered_3b85f((&DAT_000938e1)[iVar6],*(uint *)((int)&DAT_000938e4 + iVar6),'\0');
    }
  }
  iVar6 = 0;
  local_18 = DAT_0005d764;
  do {
    if (iVar6 == iVar1) {
      DAT_000938e0 = 1;
      return iVar1 != 0;
    }
    piVar5 = local_3420;
    iVar7 = local_20;
    while (bVar8 = iVar7 != 0, iVar7 = iVar7 + -1, bVar8) {
      if ((((&DAT_0005e940)[iVar6 * 0x34] == (char)piVar5[1]) &&
          ((&DAT_0005e944)[iVar6 * 0xd] == piVar5[2])) &&
         ((&DAT_0005e948)[iVar6 * 0xd] == piVar5[3])) {
        (&DAT_0005e96c)[iVar6 * 0xd] = piVar5[0xc];
        if (local_18 == *piVar5) {
          DAT_0005d764 = (&DAT_0005e93c)[iVar6 * 0xd];
          local_18 = DAT_0005d764;
        }
        break;
      }
      piVar5 = piVar5 + 0xd;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
