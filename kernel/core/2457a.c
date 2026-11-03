#include "functions.h"
#undef DAT_0002ca40
#define DAT_0002ca40 (*(uint8_t *)(0x2ca40U))
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#undef DAT_0002cb7a
#define DAT_0002cb7a (*(uint8_t *)(0x2cb7aU))
#undef DAT_0002cb9a
#define DAT_0002cb9a (*(uint8_t *)(0x2cb9aU))
#undef DAT_0002f1b4
#define DAT_0002f1b4 (*(uint32_t *)(0x2f1b4U))
#undef DAT_0003f0bc
#define DAT_0003f0bc (*(int *)(0x3f0bcU))
#undef DAT_0003f0c0
#define DAT_0003f0c0 (*(uint *)(0x3f0c0U))
#undef DAT_0003f0c4
#define DAT_0003f0c4 (*(uint *)(0x3f0c4U))
#undef DAT_0003f0c8
#define DAT_0003f0c8 (*(uint *)(0x3f0c8U))
#undef DAT_0003f0d0
#define DAT_0003f0d0 (*(uint *)(0x3f0d0U))
#undef DAT_0003f0d4
#define DAT_0003f0d4 (*(byte *)(0x3f0d4U))
#undef DAT_0003f0d8
#define DAT_0003f0d8 (*(uint8_t *)(0x3f0d8U))
#undef DAT_0003f1c8
#define DAT_0003f1c8 (*(uint *)(0x3f1c8U))
#undef DAT_0003f1cc
#define DAT_0003f1cc (*(uint8_t *)(0x3f1ccU))
#undef DAT_0006f3f8
#define DAT_0006f3f8 (*(uint *)(0x6f3f8U))
#undef DAT_0006f3fc
#define DAT_0006f3fc (*(int *)(0x6f3fcU))
#undef DAT_0006f400
#define DAT_0006f400 (*(uint *)(0x6f400U))
#undef DAT_0006f404
#define DAT_0006f404 (*(uint8_t *)(0x6f404U))
#undef str_0002ca43
#define str_0002ca43 (*(char (*)[1])(0x2ca43U))
#undef str_0002cb81
#define str_0002cb81 (*(char (*)[1])(0x2cb81U))
#undef str_0002cb8d
#define str_0002cb8d (*(char (*)[1])(0x2cb8dU))
#undef str_0002cb9e
#define str_0002cb9e (*(char (*)[1])(0x2cb9eU))
#undef str_0002cbaf
#define str_0002cbaf (*(char (*)[1])(0x2cbafU))
#undef str_0002cbca
#define str_0002cbca (*(char (*)[1])(0x2cbcaU))
#undef str_0002cbd0
#define str_0002cbd0 (*(char (*)[1])(0x2cbd0U))
#undef str_0002cbd6
#define str_0002cbd6 (*(char (*)[1])(0x2cbd6U))
#undef str_0002cbe5
#define str_0002cbe5 (*(char (*)[1])(0x2cbe5U))
#define local_250 (*(char (*)[160])(frame + 368))
#define local_1b0 (*(char (*)[64])(frame + 528))
#define local_170 (*(char (*)[256])(frame + 592))
#define local_70 (*(undefined1 (*)[32])(frame + 848))
#define local_50 (*(undefined1 (*)[32])(frame + 880))
#define local_30 (*(uint *)(frame + 912))
#define local_2c (*(int *)(frame + 916))
#define local_28 (*(int *)(frame + 920))
#define local_24 (*(uint *)(frame + 924))
#define local_20 (*(uint *)(frame + 928))
#define local_1c (*(uint *)(frame + 932))
#define local_18 (*(undefined1 * *)(frame + 936))
#define local_14 (*(uint *)(frame + 940))
#define local_3b0 (*(undefined1 (*)[256])(frame + 16))
#define local_2b0 (*(char (*)[96])(frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2457a
 */

void recovered_2457a(uint columns)

{
  unsigned char frame[992];

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  
  DAT_0006f3f8 = 0;
  DAT_0006f3fc = 0;
  DAT_0006f400 = 0;
  DAT_0006f404 = 0;
  local_20 = DAT_0003f0c8;
  local_14 = 0;
  if ((DAT_0003f0c8 != 0 & DAT_0003f0d4) == 1) {
    local_14 = 0;
    piVar5 = &DAT_0002f1b4;
    iVar3 = DAT_0003f0bc;
    while (bVar7 = iVar3 != 0, iVar3 = iVar3 + -1, bVar7) {
      local_14 = local_14 + (*piVar5 + (DAT_0003f0c8 - 1)) / DAT_0003f0c8;
      piVar5 = piVar5 + 0x40;
    }
  }
  local_18 = (undefined1 *)DAT_0003f0c0;
  local_24 = DAT_0003f0c4;
  uVar2 = 0;
  if (DAT_0003f0c4 != 0 && (DAT_0003f0c0 != 0 && DAT_0003f0d4 == 1)) {
    local_30 = DAT_0003f0d0 / DAT_0003f0c0;
    uVar6 = DAT_0003f0bc * 0x100;
    uVar2 = (uVar6 + DAT_0003f0c0) - uVar6 % DAT_0003f0c0;
    if (uVar6 % DAT_0003f0c0 == 0) {
      uVar2 = uVar6;
    }
    local_28 = local_30 - uVar2 / DAT_0003f0c0;
    local_2c = uVar2 / DAT_0003f0c0 + 1;
    iVar3 = 0x21;
    uVar6 = local_14;
    while (uVar1 = uVar6, iVar3 = iVar3 + -1, iVar3 != 0) {
      uVar2 = uVar1 * 4 + 8;
      uVar4 = uVar2 % DAT_0003f0c0;
      uVar6 = (DAT_0003f0c0 + uVar1 * 4 + 8) - uVar4;
      if (uVar4 == 0) {
        uVar6 = uVar2;
      }
      uVar2 = 0;
      if ((local_30 <= local_2c + uVar6 / DAT_0003f0c0) ||
         (uVar6 = (~(uVar6 / DAT_0003f0c0) + local_28) / DAT_0003f0c4, uVar2 = uVar1, uVar6 <= uVar1
         )) goto LAB_000246a9;
    }
    uVar2 = uVar1;
  }
LAB_000246a9:
  uVar6 = (uVar2 - local_14) * DAT_0003f0c8;
  if (uVar2 <= local_14) {
    uVar6 = 0;
  }
  local_1c = columns;
  recovered_24ac5(uVar6,(int)local_70);
  uVar2 = recovered_20788();
  recovered_24ac5(uVar2,(int)local_50);
  recovered_216bc(local_250,0xa0,str_0002cb81,str_0002cb8d,&DAT_0002cb9a,str_0002cb9e);
  recovered_216bc(local_2b0,0x60,str_0002cbaf,local_70,local_50);
  recovered_216bc(local_1b0,0x40,str_0002cbca,str_0002cbd0);
  recovered_24b4a(0x4f1f8,str_0002ca43,1);
  recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
  recovered_24b4a(0x4f1f8,local_250,1);
  recovered_24b4a(0x4f1f8,local_1b0,1);
  recovered_24b4a(0x4f1f8,local_2b0,1);
  recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
  recovered_24b4a(0x4f1f8,str_0002cbd6,1);
  recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
  recovered_24b4a(0x4f1f8,str_0002cbe5,1);
  recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
  local_1c = local_1c + (local_1c == 0);
  local_18 = &DAT_0003f1cc;
  uVar2 = 0;
  while (uVar2 < DAT_0003f1c8) {
    local_24 = uVar2;
    if ((&DAT_0003f1cc)[uVar2 * 0x100] == '\0') {
      recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
    }
    else {
      local_20 = recovered_20ccf((int)(&DAT_0003f1cc + uVar2 * 0x100));
      uVar6 = 0;
      uVar2 = local_20;
      while ((uVar1 = local_1c, uVar6 < local_20 && (DAT_0006f3f8 < 0x200))) {
        uVar4 = uVar2 - local_1c;
        if (local_1c <= uVar2) {
          uVar2 = local_1c;
        }
        if (0xfe < uVar2) {
          uVar2 = 0xff;
        }
        local_14 = uVar6;
        recovered_20c1d((int)local_170,(int)(local_18 + uVar6),uVar2);
        local_170[uVar2] = '\0';
        recovered_24b4a(0x4f1f8,local_170,0);
        uVar6 = local_14 + uVar1;
        uVar2 = uVar4;
      }
    }
    local_18 = local_18 + 0x100;
    uVar2 = local_24 + 1;
  }
  recovered_216bc(local_170,0x100,&DAT_0002cb7a,&DAT_0002ca40,&DAT_0003f0d8);
  local_14 = recovered_20ccf((int)local_170);
  for (uVar2 = 0; uVar6 = local_14 - uVar2, uVar2 <= local_14 && uVar6 != 0; uVar2 = uVar2 + uVar6)
  {
    if (0x1ff < DAT_0006f3f8) goto LAB_00024993;
    if (local_1c <= uVar6) {
      uVar6 = local_1c;
    }
    recovered_20c1d((int)local_3b0,(int)(local_170 + uVar2),uVar6);
    local_3b0[uVar6] = 0;
    recovered_24b4a(0x4f1f8,local_3b0,0);
  }
  if (DAT_0006f3f8 == 0) {
    recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
  }
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
LAB_00024993:
    uVar2 = 0;
    if (local_14 % local_1c == 0) {
      if (DAT_0006f3f8 < 0x200) {
        recovered_24b4a(0x4f1f8,&DAT_0002ca9c,0);
      }
    }
    else {
      uVar2 = local_14 % local_1c;
    }
  }
  DAT_0006f3fc = DAT_0006f3f8 - 1;
  DAT_0006f400 = uVar2;
  DAT_0006f404 = 1;
  return;
}

