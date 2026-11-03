#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_0007cfdc
#define DAT_0007cfdc (*(uint *)(0x7cfdcU))
#undef DAT_0007cfe0
#define DAT_0007cfe0 (*(int *)(0x7cfe0U))
#undef DAT_0007d104
#define DAT_0007d104 (*(uint *)(0x7d104U))
#undef str_000432d8
#define str_000432d8 (*(char (*)[1])(0x432d8U))
#undef str_00043ac9
#define str_00043ac9 (*(char (*)[1])(0x43ac9U))
#undef str_00043af0
#define str_00043af0 (*(char (*)[1])(0x43af0U))
#undef str_00043b1c
#define str_00043b1c (*(char (*)[1])(0x43b1cU))
#undef str_00043b47
#define str_00043b47 (*(char (*)[1])(0x43b47U))
#define local_70 (*(byte ******* *)(frame + 40))
#define local_6c (*(undefined1 * *)(frame + 44))
#define local_68 (*(undefined4 *)(frame + 48))
#define local_64 (*(undefined4 *)(frame + 52))
#define local_60 (*(undefined4 *)(frame + 56))
#define local_5c (*(undefined4 *)(frame + 60))
#define local_58 (*(undefined4 *)(frame + 64))
#define local_54 (*(undefined4 *)(frame + 68))
#define local_50 (*(undefined4 *)(frame + 72))
#define local_4c (*(uint (*)[10])(frame + 76))
#define local_24 (*(byte ******* *)(frame + 116))
#define local_20 (*(byte ******** *)(frame + 120))
#define local_1c (*(int * *)(frame + 124))
#define local_18 (*(byte ******** *)(frame + 128))
#define local_14 (*(byte ******** *)(frame + 132))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33f5a
 */

uint recovered_33f5a(byte **param_1,int *param_2,byte **param_3,byte **param_4,uint *param_5)

{
  unsigned char frame[184];

  undefined1 *puVar1;
  int *piVar2;
  bool bVar3;
  undefined3 extraout_var = 0;
  byte ********ppppppppbVar4;
  byte ********ppppppppbVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte ********ppppppppbVar9;
  undefined4 *puVar10;
  int iVar11;
  byte **ppbVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;

  local_4c[9] = 0;
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  local_4c[3] = 0;
  local_4c[4] = 0;
  local_4c[5] = 0;
  local_4c[6] = 0;
  local_4c[7] = 0;
  local_4c[8] = 0;
  local_24 = (byte *******)0x0;
  if (((param_5 == (uint *)0x0 || param_2 == (int *)0x0) || (*param_2 != 9)) ||
     (iVar6 = param_2[8], iVar6 == 0)) {
    pcVar15 = str_00043ac9;
LAB_00033fdb:
    puVar14 = (uint *)0x0;
  }
  else {
    local_1c = param_2;
    if (*(char *)(iVar6 + 9) == '\x01') {
      local_18 = (byte ********)0x0;
      if (param_4 == (byte **)0x0) {
        ppppppppbVar4 = (byte ********)0x0;
      }
      else {
        bVar3 = recovered_34abd((uint *)(iVar6 + 0x14),(uint *)param_3);
        ppppppppbVar4 = (byte ********)CONCAT31(extraout_var,bVar3);
      }
      local_14 = (byte ********)((uint)(byte)((byte)ppppppppbVar4 ^ 1) + (int)param_4);
      if (local_14 == (byte ********)0x0) {
        param_4 = (byte **)0x0;
        local_14 = (byte ********)0x0;
        goto LAB_000340d1;
      }
      local_20 = ppppppppbVar4;
      ppppppppbVar4 = recovered_20df4((int)local_14 * 0x24);
      if (ppppppppbVar4 != (byte ********)0x0) {
        ppppppppbVar5 = ppppppppbVar4 + 8;
        ppppppppbVar9 = local_14;
        while (bVar3 = ppppppppbVar9 != (byte ********)0x0,
              ppppppppbVar9 = (byte ********)((int)ppppppppbVar9 + -1), bVar3) {
          ppppppppbVar5[-8] = (byte *******)0x0;
          ppppppppbVar5[-7] = (byte *******)0x0;
          ppppppppbVar5[-6] = (byte *******)0x0;
          ppppppppbVar5[-5] = (byte *******)0x0;
          ppppppppbVar5[-4] = (byte *******)0x0;
          ppppppppbVar5[-3] = (byte *******)0x0;
          ppppppppbVar5[-2] = (byte *******)0x0;
          ppppppppbVar5[-1] = (byte *******)0x0;
          *ppppppppbVar5 = (byte *******)0x0;
          ppppppppbVar5 = ppppppppbVar5 + 9;
        }
        iVar6 = 0;
        local_18 = ppppppppbVar4;
        if ((char)local_20 != '\0') {
LAB_00034089:
          ppppppppbVar4 = local_18 + iVar6 * 9;
          ppbVar12 = param_4;
          local_20 = (byte ********)param_1;
          while (param_4 = (byte **)local_14, bVar3 = ppbVar12 != (byte **)0x0,
                ppbVar12 = (byte **)((int)ppbVar12 + -1), bVar3) {
            uVar7 = recovered_2b123(ppppppppbVar4,param_3);
            ppppppppbVar9 = local_18;
            if ((char)uVar7 == '\0') {
              recovered_34b97((int)local_18,(int)local_14);
              recovered_20dfd((int)ppppppppbVar9);
              pcVar15 = str_00043af0;
              puVar14 = (uint *)0x0;
              goto LAB_00034374;
            }
            ppppppppbVar4 = ppppppppbVar4 + 9;
            param_3 = param_3 + 9;
          }
          local_14 = local_18;
          param_1 = (byte **)local_20;
          goto LAB_000340d1;
        }
        uVar7 = recovered_2b123(ppppppppbVar4,(undefined4 *)(local_1c[8] + 0x14));
        if ((char)uVar7 != '\0') {
          iVar6 = 1;
          goto LAB_00034089;
        }
        param_4 = (byte **)local_14;
        ppppppppbVar4 = local_18;
LAB_0003438d:
        recovered_34b97((int)ppppppppbVar4,(int)param_4);
        recovered_20dfd((int)ppppppppbVar4);
      }
      pcVar15 = str_00043af0;
      goto LAB_00033fdb;
    }
    local_14 = (byte ********)0x0;
    local_18 = (byte ********)param_3;
LAB_000340d1:
    ppppppppbVar4 = local_14;
    iVar6 = local_1c[8];
    if (*(int *)(iVar6 + 4) == 1) {
      ppbVar12 = (byte **)&DAT_00042614;
      if (*(byte ***)(iVar6 + 0x10) != (byte **)0x0) {
        ppbVar12 = *(byte ***)(iVar6 + 0x10);
      }
      uVar8 = recovered_34bb9((byte ********)param_1,ppbVar12,(byte **)local_18,param_4,param_5);
      ppppppppbVar4 = local_14;
      local_18 = (byte ********)CONCAT31(PF_PART3(local_18, 1),(char)uVar8);
      recovered_34b97((int)local_14,(int)param_4);
      uVar8 = recovered_20dfd((int)ppppppppbVar4);
      return CONCAT31((int3)(uVar8 >> 8),PF_PART1(local_18, 0));
    }
    if (((byte ********)param_4 == (byte ********)0x0) || (*(char *)(iVar6 + 8) == '\0')) {
      iVar6 = DAT_0007cfe0;
      if (DAT_0007cfdc == DAT_0007d104) {
        uVar8 = 4;
        if (DAT_0007cfdc != 0) {
          uVar8 = DAT_0007cfdc * 2;
        }
        iVar6 = recovered_20e83(DAT_0007cfe0,uVar8 * 0xc);
        if (iVar6 == 0) {
          ppppppppbVar4 = local_14;
          goto LAB_0003438d;
        }
        puVar10 = (undefined4 *)(DAT_0007d104 * 0xc + iVar6 + 8);
        DAT_0007cfe0 = iVar6;
        for (; DAT_0007d104 < uVar8; DAT_0007d104 = DAT_0007d104 + 1) {
          puVar10[-2] = 0;
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10 = puVar10 + 3;
        }
        DAT_0007d104 = uVar8;
      }
      piVar2 = local_1c;
      recovered_41929((int *)(DAT_0007cfdc * 0xc + iVar6));
      iVar6 = DAT_0007cfe0;
      if (DAT_0007cfe0 != 0) {
        iVar11 = DAT_0007cfdc * 0xc;
        *(undefined4 *)(DAT_0007cfe0 + iVar11) = 0;
        *(undefined4 *)(iVar6 + 4 + iVar11) = 0;
        *(undefined4 *)(iVar6 + 8 + iVar11) = 0;
      }
      DAT_0007cfdc = DAT_0007cfdc + 1;
      pcVar15 = *(char **)(piVar2[8] + 0xc);
      if (((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) ||
         (uVar7 = recovered_3c0a5((int)pcVar15,(int)piVar2), (char)uVar7 != '\0')) {
        local_20 = (byte ********)param_1;
        for (ppppppppbVar4 = (byte ********)0x0; ppppppppbVar9 = local_18, iVar6 = local_1c[8],
            ppppppppbVar4 < *(byte *********)(iVar6 + 0x3c);
            ppppppppbVar4 = (byte ********)((int)ppppppppbVar4 + 1)) {
          ppppppppbVar5 = (byte ********)0x0;
          if (ppppppppbVar4 < param_4) {
            ppppppppbVar5 = local_18;
          }
          local_70 = (byte *******)0x0;
          local_6c = (undefined1 *)0x0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          if (ppppppppbVar5 == (byte ********)0x0) {
            ppppppppbVar5 = &local_70;
          }
          uVar7 = recovered_3c0a5(*(int *)(*(int *)(iVar6 + 0x38) + (int)ppppppppbVar4 * 4),
                                  (int)ppppppppbVar5);
          if ((char)uVar7 == '\0') {
            recovered_3c1d2();
            ppppppppbVar9 = local_14;
            recovered_34b97((int)local_14,(int)param_4);
            recovered_20dfd((int)ppppppppbVar9);
            puVar14 = *(uint **)(*(int *)(local_1c[8] + 0x38) + (int)ppppppppbVar4 * 4);
            pcVar15 = str_00043b47;
LAB_00034374:
            param_1 = (byte **)local_20;
            goto LAB_00033fde;
          }
          local_18 = ppppppppbVar9 + 9;
        }
        puVar14 = local_4c + 9;
        param_1 = (byte **)&local_24;
        uVar8 = recovered_2d019(*(int *)(iVar6 + 0x40),*(uint ************)(iVar6 + 0x44),
                                (int *)param_1,puVar14,local_4c);
        if ((char)uVar8 == '\0') {
          recovered_2aec1(local_4c);
          recovered_3c1d2();
          ppppppppbVar4 = local_14;
          recovered_34b97((int)local_14,(int)param_4);
          recovered_20dfd((int)ppppppppbVar4);
          return 0;
        }
        recovered_3c1d2();
        ppppppppbVar4 = local_14;
        recovered_34b97((int)local_14,(int)param_4);
        pcVar15 = (char *)0x342e8;
        recovered_20dfd((int)ppppppppbVar4);
        if (local_4c[9] == 2) {
          puVar14 = (uint *)recovered_2aec1(param_5);
          puVar13 = local_4c;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *param_5 = *puVar13;
            puVar13 = puVar13 + 1;
            param_5 = param_5 + 1;
          }
LAB_00034444:
          return CONCAT31((int3)((uint)puVar14 >> 8),1);
        }
        if (local_4c[9] != 1) {
          recovered_2aec1(local_4c);
          *param_5 = 0;
          param_5[1] = 0;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[8] = 0;
          puVar14 = param_5;
          goto LAB_00034444;
        }
        local_70 = local_24;
        local_6c = &DAT_00042614;
        if (local_24 < *(byte ********)(local_1c[8] + 0x44)) {
          puVar1 = *(undefined1 **)(*(int *)(local_1c[8] + 0x40) + (int)local_24 * 4);
          local_6c = &DAT_00042614;
          if (puVar1 != (undefined1 *)0x0) {
            local_6c = puVar1;
          }
        }
        recovered_2aec1(local_4c);
        goto LAB_00033fde;
      }
      recovered_3c1d2();
      ppppppppbVar4 = local_14;
      recovered_34b97((int)local_14,(int)param_4);
      recovered_20dfd((int)ppppppppbVar4);
      pcVar15 = str_00043af0;
      puVar14 = *(uint **)(local_1c[8] + 0xc);
    }
    else {
      recovered_34b97((int)local_14,(int)param_4);
      recovered_20dfd((int)ppppppppbVar4);
      puVar14 = (uint *)str_000432d8;
      if (*(uint **)(local_1c[8] + 0xc) != (uint *)0x0) {
        puVar14 = *(uint **)(local_1c[8] + 0xc);
      }
      pcVar15 = str_00043b1c;
    }
  }
LAB_00033fde:
  recovered_2f9c3((uint)param_1,(char *)puVar14,pcVar15);
  return 0;
}
