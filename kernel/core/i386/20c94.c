#include "functions.h"
#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_0004c60c
#define DAT_0004c60c (*(char *)(0x4c60cU))
#undef DAT_0004c610
#define DAT_0004c610 (*(int *)(0x4c610U))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#define local_24 (*(int *)(frame + 664))
#define local_20 (*(uint *)(frame + 668))
#define local_1c (*(uint *)(frame + 672))
#define local_18 (*(uint *)(frame + 676))
#define local_14 (*(uint *)(frame + 680))
#define auStackY_2ac (*(uint (*)[128])(frame + 16))
#define auStack_a8 (*(uint (*)[33])(frame + 532))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20c94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_20c94(void)

{
  unsigned char frame[732];

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;

  local_24 = 0;
  if (DAT_0004c60c == '\0') {
    DAT_0004c610 = 0;
    local_18 = 0x10;
    if (_DAT_0000608c < 0x10) {
      local_18 = _DAT_0000608c;
    }
    uVar4 = 0;
    in_EAX = 0;
    while (in_EAX != local_18) {
      uVar6 = *(uint *)(&DAT_00006090 + in_EAX * 8);
      local_14 = in_EAX;
      uVar1 = *(uint *)(&DAT_00006094 + in_EAX * 8);
      uVar2 = uVar1 + uVar6;
      if ((uVar2 < 0x300001) <= CARRY4(uVar1,uVar6) && uVar1 != 0) {
        if (uVar6 < 0x300001) {
          uVar6 = 0x300000;
        }
        if (uVar4 < 0x10) {
          local_1c = uVar4;
          while ((uVar4 != 0 && (uVar6 < auStackY_2ac[uVar4 * 2 + 0x80]))) {
            uVar1 = auStackY_2ac[uVar4 * 2 + 0x80];
            auStack_a8[uVar4 * 2 + 2] = auStack_a8[uVar4 * 2];
            auStack_a8[uVar4 * 2 + 1] = uVar1;
            uVar4 = uVar4 - 1;
          }
          auStack_a8[uVar4 * 2 + 1] = uVar6;
          auStack_a8[uVar4 * 2 + 2] = uVar2 - uVar6;
          uVar4 = local_1c + 1;
        }
      }
      in_EAX = local_14 + 1;
    }
    iVar7 = 0;
    if (uVar4 != 0) {
      local_1c = uVar4;
      iVar7 = 1;
      for (uVar4 = 1; local_1c != uVar4; uVar4 = uVar4 + 1) {
        uVar6 = auStack_a8[uVar4 * 2 + 1];
        local_14 = uVar4;
        bVar8 = CARRY4(auStack_a8[uVar4 * 2 + 2],uVar6);
        uVar2 = auStack_a8[uVar4 * 2 + 2] + uVar6;
        local_18 = CONCAT31(PF_PART3(local_18, 1),bVar8);
        local_20 = auStackY_2ac[iVar7 * 2 + 0x80];
        uVar3 = auStack_a8[iVar7 * 2] + local_20;
        uVar1 = (uint)CARRY4(auStack_a8[iVar7 * 2],local_20);
        uVar6 = (uint)(uVar3 < uVar6);
        if (uVar1 < uVar6) {
          in_EAX = auStack_a8[uVar4 * 2 + 1];
          auStack_a8[iVar7 * 2 + 2] = auStack_a8[uVar4 * 2 + 2];
          auStack_a8[iVar7 * 2 + 1] = in_EAX;
          iVar7 = iVar7 + 1;
        }
        else {
          in_EAX = CONCAT31((int3)(uVar1 - uVar6 >> 8),bVar8);
          if (uVar1 < bVar8 || uVar1 - bVar8 < (uint)(uVar3 < uVar2)) {
            auStack_a8[iVar7 * 2] = uVar2 - local_20;
          }
          uVar4 = local_14;
        }
      }
    }
    for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
      recovered_21e0a(auStack_a8[iVar5 * 2 + 1],auStack_a8[iVar5 * 2 + 2],&local_24);
      in_EAX = extraout_EAX;
    }
    if (DAT_0004c610 == 0) {
      uVar4 = 0x4000000;
      if (0x300000 < _DAT_00006088) {
        uVar4 = _DAT_00006088 & 0xfffffff0;
      }
      uVar6 = 0x3d00000;
      if (0x30001c < uVar4) {
        uVar6 = uVar4 - 0x300000;
      }
      recovered_21e0a(0x300000,uVar6,&local_24);
      in_EAX = extraout_EAX_00;
    }
    DAT_0004c60c = '\x01';
  }
  return in_EAX;
}
