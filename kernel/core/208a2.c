#include "functions.h"
#undef DAT_00006088
#define DAT_00006088 (*(uint8_t *)(0x6088U))
#undef DAT_0000608c
#define DAT_0000608c (*(uint8_t *)(0x608cU))
#undef DAT_00006090
#define DAT_00006090 (*(uint8_t *)(0x6090U))
#undef DAT_00006094
#define DAT_00006094 (*(uint8_t *)(0x6094U))
#undef DAT_000445e8
#define DAT_000445e8 (*(uint8_t *)(0x445e8U))
#undef DAT_000445ec
#define DAT_000445ec (*(int *)(0x445ecU))
#undef _DAT_00006088
#define _DAT_00006088 (*(uint *)(0x6088U))
#undef _DAT_0000608c
#define _DAT_0000608c (*(uint *)(0x608cU))
#define uStack_18 (*(uint *)(frame + 676))
#define uStack_14 (*(uint *)(frame + 680))
#define auStack_a8 (*(uint (*)[33])(frame + 532))
#define iStack_24 (*(int *)(frame + 664))
#define uStack_20 (*(uint *)(frame + 668))
#define uStack_1c (*(uint *)(frame + 672))
#define auStackY_2ac (*(uint (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x208a2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_208a2(void)

{
  unsigned char frame[732];

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  DAT_000445e8 = 0;
  iStack_24 = 0;
  DAT_000445ec = 0;
  uStack_18 = 0x10;
  if (_DAT_0000608c < 0x10) {
    uStack_18 = _DAT_0000608c;
  }
  uVar4 = 0;
  uVar1 = 0;
  while (uVar1 != uStack_18) {
    uVar6 = *(uint *)(&DAT_00006090 + uVar1 * 8);
    uStack_14 = uVar1;
    uVar1 = *(uint *)(&DAT_00006094 + uVar1 * 8);
    uVar2 = uVar1 + uVar6;
    if ((uVar2 < 0x300001) <= CARRY4(uVar1,uVar6) && uVar1 != 0) {
      if (uVar6 < 0x300001) {
        uVar6 = 0x300000;
      }
      if (uVar4 < 0x10) {
        uStack_1c = uVar4;
        while ((uVar4 != 0 && (uVar6 < auStackY_2ac[uVar4 * 2 + 0x80]))) {
          uVar1 = auStackY_2ac[uVar4 * 2 + 0x80];
          auStack_a8[uVar4 * 2 + 2] = auStack_a8[uVar4 * 2];
          auStack_a8[uVar4 * 2 + 1] = uVar1;
          uVar4 = uVar4 - 1;
        }
        auStack_a8[uVar4 * 2 + 1] = uVar6;
        auStack_a8[uVar4 * 2 + 2] = uVar2 - uVar6;
        uVar4 = uStack_1c + 1;
      }
    }
    uVar1 = uStack_14 + 1;
  }
  iVar7 = 0;
  if (uVar4 != 0) {
    uStack_1c = uVar4;
    iVar7 = 1;
    for (uVar4 = 1; uStack_1c != uVar4; uVar4 = uVar4 + 1) {
      uVar1 = auStack_a8[uVar4 * 2 + 1];
      uStack_14 = uVar4;
      uVar6 = auStack_a8[uVar4 * 2 + 2];
      uStack_18 = CONCAT31(PF_PART3(uStack_18, 1),CARRY4(uVar6,uVar1));
      uStack_20 = auStackY_2ac[iVar7 * 2 + 0x80];
      uVar3 = auStack_a8[iVar7 * 2] + uStack_20;
      uVar2 = (uint)CARRY4(auStack_a8[iVar7 * 2],uStack_20);
      if (uVar2 < (uVar3 < uVar1)) {
        uVar1 = auStack_a8[uVar4 * 2 + 1];
        auStack_a8[iVar7 * 2 + 2] = auStack_a8[uVar4 * 2 + 2];
        auStack_a8[iVar7 * 2 + 1] = uVar1;
        iVar7 = iVar7 + 1;
      }
      else {
        uVar4 = (uint)CARRY4(uVar6,uVar1);
        if (uVar2 < uVar4 || uVar2 - uVar4 < (uint)(uVar3 < uVar6 + uVar1)) {
          auStack_a8[iVar7 * 2] = (uVar6 + uVar1) - uStack_20;
        }
        uVar4 = uStack_14;
      }
    }
  }
  for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
    recovered_21a04(auStack_a8[iVar5 * 2 + 1],auStack_a8[iVar5 * 2 + 2],&iStack_24);
  }
  if (DAT_000445ec == 0) {
    uVar4 = 0x4000000;
    if (0x300000 < _DAT_00006088) {
      uVar4 = _DAT_00006088 & 0xfffffff0;
    }
    uVar1 = 0x3d00000;
    if (0x30001c < uVar4) {
      uVar1 = uVar4 - 0x300000;
    }
    recovered_21a04(0x300000,uVar1,&iStack_24);
  }
  DAT_000445e8 = 1;
  return;
}
