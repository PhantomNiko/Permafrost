#include "functions.h"
#undef DAT_00006110
#define DAT_00006110 (*(uint8_t *)(0x6110U))
#undef DAT_00006114
#define DAT_00006114 (*(uint8_t *)(0x6114U))
#undef DAT_0003f184
#define DAT_0003f184 (*(uint8_t *)(0x3f184U))
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_0003f339
#define DAT_0003f339 (*(uint8_t *)(0x3f339U))
#undef DAT_0003f495
#define DAT_0003f495 (*(uint8_t *)(0x3f495U))
#undef DAT_0003f49f
#define DAT_0003f49f (*(uint8_t *)(0x3f49fU))
#undef DAT_00044dec
#define DAT_00044dec (*(int *)(0x44decU))
#undef DAT_00044ee8
#define DAT_00044ee8 (*(uint32_t *)(0x44ee8U))
#undef DAT_00054df0
#define DAT_00054df0 (*(int *)(0x54df0U))
#undef DAT_00054df8
#define DAT_00054df8 (*(uint *)(0x54df8U))
#undef DAT_00054dfc
#define DAT_00054dfc (*(uint *)(0x54dfcU))
#undef DAT_00054e00
#define DAT_00054e00 (*(uint *)(0x54e00U))
#undef DAT_00054e08
#define DAT_00054e08 (*(uint *)(0x54e08U))
#undef DAT_00054e28
#define DAT_00054e28 (*(byte *)(0x54e28U))
#undef DAT_00054e2e
#define DAT_00054e2e (*(uint8_t *)(0x54e2eU))
#undef DAT_00078c48
#define DAT_00078c48 (*(uint *)(0x78c48U))
#undef DAT_00078c4c
#define DAT_00078c4c (*(int *)(0x78c4cU))
#undef DAT_00078c50
#define DAT_00078c50 (*(uint *)(0x78c50U))
#undef DAT_00078c54
#define DAT_00078c54 (*(uint8_t *)(0x78c54U))
#undef DAT_00078c58
#define DAT_00078c58 (*(uint *)(0x78c58U))
#undef DAT_00078c5c
#define DAT_00078c5c (*(uint8_t *)(0x78c5cU))
#undef DAT_00078d5c
#define DAT_00078d5c (*(uint16_t *)(0x78d5cU))
#undef _DAT_00006110
#define _DAT_00006110 (*(uint *)(0x6110U))
#undef _DAT_00006114
#define _DAT_00006114 (*(uint *)(0x6114U))
#undef str_0003f198
#define str_0003f198 (*(char (*)[1])(0x3f198U))
#undef str_0003f47c
#define str_0003f47c (*(char (*)[1])(0x3f47cU))
#undef str_0003f488
#define str_0003f488 (*(char (*)[1])(0x3f488U))
#undef str_0003f499
#define str_0003f499 (*(char (*)[1])(0x3f499U))
#undef str_0003f4a3
#define str_0003f4a3 (*(char (*)[1])(0x3f4a3U))
#undef str_0003f4c8
#define str_0003f4c8 (*(char (*)[1])(0x3f4c8U))
#undef str_0003f4e3
#define str_0003f4e3 (*(char (*)[1])(0x3f4e3U))
#undef str_0003f4e9
#define str_0003f4e9 (*(char (*)[1])(0x3f4e9U))
#undef str_0003f4ef
#define str_0003f4ef (*(char (*)[1])(0x3f4efU))
#undef str_0003f4fd
#define str_0003f4fd (*(char (*)[1])(0x3f4fdU))
#define pcVar10 (*(char * *)(frame + 16))
#define pcVar11 (*(char * *)(frame + 16))
#define local_3d0 (*(char (*)[256])(frame + 40))
#define local_2d0 (*(undefined1 (*)[256])(frame + 296))
#define local_1d0 (*(char (*)[160])(frame + 552))
#define local_130 (*(char (*)[64])(frame + 712))
#define local_f0 (*(char (*)[96])(frame + 776))
#define local_90 (*(char (*)[32])(frame + 872))
#define local_70 (*(char (*)[32])(frame + 904))
#define local_50 (*(char (*)[32])(frame + 936))
#define local_30 (*(uint *)(frame + 968))
#define local_2c (*(int *)(frame + 972))
#define local_28 (*(int *)(frame + 976))
#define local_24 (*(uint *)(frame + 980))
#define local_20 (*(uint *)(frame + 984))
#define local_1c (*(uint *)(frame + 988))
#define local_18 (*(uint *)(frame + 992))
#define local_14 (*(undefined * *)(frame + 996))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27297
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_27297(uint columns)

{
  unsigned char frame[1048];

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  DAT_00078c48 = 0;
  DAT_00078c4c = 0;
  DAT_00078c50 = 0;
  DAT_00078c54 = 0;
  local_14 = (undefined *)DAT_00054e00;
  uVar6 = 0;
  if ((DAT_00054e00 != 0 & DAT_00054e28) == 1) {
    uVar6 = 0;
    piVar8 = &DAT_00044ee8;
    iVar7 = DAT_00054df0;
    while (bVar9 = iVar7 != 0, iVar7 = iVar7 + -1, bVar9) {
      uVar6 = uVar6 + (*piVar8 + (DAT_00054e00 - 1)) / DAT_00054e00;
      piVar8 = piVar8 + 0x40;
    }
  }
  local_1c = DAT_00054dfc;
  lVar1 = 0;
  if (DAT_00054dfc != 0 && (DAT_00054df8 != 0 && DAT_00054e28 == 1)) {
    uVar3 = DAT_00054df0 * 0x100;
    uVar2 = (uVar3 + DAT_00054df8) - uVar3 % DAT_00054df8;
    if (uVar3 % DAT_00054df8 == 0) {
      uVar2 = uVar3;
    }
    local_20 = DAT_00054df8;
    local_30 = DAT_00054e08;
    local_28 = DAT_00054e08 - uVar2 / DAT_00054df8;
    local_2c = uVar2 / DAT_00054df8 + 1;
    iVar7 = 0x21;
    uVar2 = uVar6;
    do {
      uVar3 = uVar2;
      iVar7 = iVar7 + -1;
      local_24 = uVar6;
      if (iVar7 == 0) break;
      uVar2 = uVar3 * 4 + 8;
      uVar4 = uVar2 % DAT_00054df8;
      uVar5 = (DAT_00054df8 + uVar3 * 4 + 8) - uVar4;
      if (uVar4 == 0) {
        uVar5 = uVar2;
      }
      if (DAT_00054e08 <= local_2c + uVar5 / DAT_00054df8) {
        lVar1 = 0;
        goto LAB_000273d1;
      }
      uVar2 = (~(uVar5 / DAT_00054df8) + local_28) / DAT_00054dfc;
    } while (uVar3 < uVar2);
    lVar1 = 0;
    if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
      lVar1 = (ulonglong)(uVar3 - uVar6) * (ulonglong)DAT_00054e00;
    }
  }
LAB_000273d1:
  local_18 = columns;
  recovered_27711((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_90);
  uVar2 = recovered_20a97();
  uVar6 = 0;
  recovered_27711(uVar2,0,local_50);
  if (DAT_00044dec == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _DAT_00006110;
    uVar6 = _DAT_00006114;
  }
  pcVar11 = local_70;
  recovered_27711(uVar2,uVar6,pcVar11);
  pcVar10 = str_0003f499;
  recovered_219e1(local_1d0,0xa0,str_0003f47c,str_0003f488,&DAT_0003f495,str_0003f499);
  if (local_70[0] != '\0') {
    pcVar10 = &DAT_0003f49f;
    iVar7 = recovered_2100f((int)pcVar11,0x3f49f);
    if (iVar7 != 0) {
      pcVar10 = str_0003f4a3;
      goto LAB_00027493;
    }
  }
  pcVar11 = pcVar10;
  pcVar10 = str_0003f4c8;
LAB_00027493:
  recovered_219e1(local_f0,0x60,pcVar10,local_90,local_50,pcVar11);
  recovered_219e1(local_130,0x40,str_0003f4e3,str_0003f4e9);
  recovered_277bd(0x58448,str_0003f198,1);
  recovered_277bd(0x58448,&DAT_0003f254,0);
  recovered_277bd(0x58448,local_1d0,1);
  recovered_277bd(0x58448,local_130,1);
  recovered_277bd(0x58448,local_f0,1);
  recovered_277bd(0x58448,&DAT_0003f254,0);
  recovered_277bd(0x58448,str_0003f4ef,1);
  recovered_277bd(0x58448,&DAT_0003f254,0);
  recovered_277bd(0x58448,str_0003f4fd,1);
  recovered_277bd(0x58448,&DAT_0003f254,0);
  local_18 = local_18 + (local_18 == 0);
  local_14 = &DAT_00078c5c;
  uVar6 = 0;
  while (uVar6 < DAT_00078c58) {
    uVar2 = (uint)(ushort)(&DAT_00078d5c)[uVar6 * 0x81];
    local_20 = uVar6;
    if (uVar2 == 0) {
      recovered_277bd(0x58448,&DAT_0003f254,0);
    }
    else {
      uVar6 = 0;
      local_1c = uVar2;
      while ((uVar3 = local_18, uVar6 < local_1c && (DAT_00078c48 < 0x200))) {
        uVar5 = uVar2 - local_18;
        if (local_18 <= uVar2) {
          uVar2 = local_18;
        }
        recovered_277fa(0x58448,(int)(local_14 + uVar6),uVar2,0);
        uVar6 = uVar6 + uVar3;
        uVar2 = uVar5;
      }
    }
    local_14 = local_14 + 0x102;
    uVar6 = local_20 + 1;
  }
  recovered_219e1(local_3d0,0x100,&DAT_0003f339,&DAT_0003f184,&DAT_00054e2e);
  uVar6 = 0;
  local_14 = (undefined *)recovered_20ff4((int)local_3d0);
  for (; uVar2 = (int)local_14 - uVar6, !(local_14 < uVar6 || uVar2 == 0); uVar6 = uVar6 + uVar2) {
    if (0x1ff < DAT_00078c48) goto LAB_000276b7;
    if (local_18 <= uVar2) {
      uVar2 = local_18;
    }
    recovered_20f42((int)local_2d0,(int)(local_3d0 + uVar6),uVar2);
    local_2d0[uVar2] = 0;
    recovered_277bd(0x58448,local_2d0,0);
  }
  if (DAT_00078c48 == 0) {
    recovered_277bd(0x58448,&DAT_0003f254,0);
  }
  if (local_14 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
LAB_000276b7:
    uVar6 = 0;
    if ((uint)local_14 % local_18 == 0) {
      if (DAT_00078c48 < 0x200) {
        recovered_277bd(0x58448,&DAT_0003f254,0);
      }
    }
    else {
      uVar6 = (uint)local_14 % local_18;
    }
  }
  DAT_00078c4c = DAT_00078c48 - 1;
  DAT_00078c50 = uVar6;
  DAT_00078c54 = 1;
  return;
}

