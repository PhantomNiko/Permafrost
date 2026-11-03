#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_00088e64
#define DAT_00088e64 (*(uint *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
#undef DAT_00088f8c
#define DAT_00088f8c (*(uint *)(0x88f8cU))
#undef str_0003fe57
#define str_0003fe57 (*(char (*)[1])(0x3fe57U))
#undef str_00040648
#define str_00040648 (*(char (*)[1])(0x40648U))
#undef str_0004066f
#define str_0004066f (*(char (*)[1])(0x4066fU))
#undef str_0004069b
#define str_0004069b (*(char (*)[1])(0x4069bU))
#undef str_000406c6
#define str_000406c6 (*(char (*)[1])(0x406c6U))
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
#define puVar13 (*(uint * *)(frame + 16))
#define local_20 (*(byte ******** *)(frame + 120))
#define pcVar14 (*(char * *)(frame + 20))
#define local_1c (*(int * *)(frame + 124))
#define local_18 (*(byte ******** *)(frame + 128))
#define local_14 (*(byte ******** *)(frame + 132))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x317d8
 */

uint recovered_317d8(byte **param_1,int *param_2,byte **param_3,byte **param_4,int *param_5)

{
  unsigned char frame[184];

  undefined1 *puVar1;
  bool bVar2;
  undefined3 extraout_var = 0;
  byte ********ppppppppbVar3;
  byte ********ppppppppbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  byte ********ppppppppbVar9;
  undefined4 *puVar10;
  int iVar11;
  byte **ppbVar12;
  
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
  if (((param_5 == (int *)0x0 || param_2 == (int *)0x0) || (*param_2 != 9)) ||
     (iVar5 = param_2[8], iVar5 == 0)) {
    pcVar14 = str_00040648;
LAB_00031859:
    puVar13 = (uint *)0x0;
  }
  else {
    local_1c = param_2;
    if (*(char *)(iVar5 + 9) == '\x01') {
      local_18 = (byte ********)0x0;
      if (param_4 == (byte **)0x0) {
        ppppppppbVar3 = (byte ********)0x0;
      }
      else {
        bVar2 = recovered_3233b((uint *)(iVar5 + 0x14),(uint *)param_3);
        ppppppppbVar3 = (byte ********)CONCAT31(extraout_var,bVar2);
      }
      local_14 = (byte ********)((uint)(byte)((byte)ppppppppbVar3 ^ 1) + (int)param_4);
      if (local_14 == (byte ********)0x0) {
        param_4 = (byte **)0x0;
        local_14 = (byte ********)0x0;
        goto LAB_0003194f;
      }
      local_20 = ppppppppbVar3;
      ppppppppbVar3 = recovered_20df4((int)local_14 * 0x24);
      if (ppppppppbVar3 != (byte ********)0x0) {
        ppppppppbVar4 = ppppppppbVar3 + 8;
        ppppppppbVar9 = local_14;
        while (bVar2 = ppppppppbVar9 != (byte ********)0x0,
              ppppppppbVar9 = (byte ********)((int)ppppppppbVar9 + -1), bVar2) {
          ppppppppbVar4[-8] = (byte *******)0x0;
          ppppppppbVar4[-7] = (byte *******)0x0;
          ppppppppbVar4[-6] = (byte *******)0x0;
          ppppppppbVar4[-5] = (byte *******)0x0;
          ppppppppbVar4[-4] = (byte *******)0x0;
          ppppppppbVar4[-3] = (byte *******)0x0;
          ppppppppbVar4[-2] = (byte *******)0x0;
          ppppppppbVar4[-1] = (byte *******)0x0;
          *ppppppppbVar4 = (byte *******)0x0;
          ppppppppbVar4 = ppppppppbVar4 + 9;
        }
        iVar5 = 0;
        local_18 = ppppppppbVar3;
        if ((char)local_20 != '\0') {
LAB_00031907:
          ppppppppbVar3 = local_18 + iVar5 * 9;
          ppbVar12 = param_4;
          local_20 = (byte ********)param_1;
          while (param_4 = (byte **)local_14, bVar2 = ppbVar12 != (byte **)0x0,
                ppbVar12 = (byte **)((int)ppbVar12 + -1), bVar2) {
            uVar6 = recovered_289c3(ppppppppbVar3,param_3);
            ppppppppbVar9 = local_18;
            if ((char)uVar6 == '\0') {
              recovered_32415((int)local_18,(int)local_14);
              recovered_20dfd((int)ppppppppbVar9);
              pcVar14 = str_0004066f;
              puVar13 = (uint *)0x0;
              goto LAB_00031bf2;
            }
            ppppppppbVar3 = ppppppppbVar3 + 9;
            param_3 = param_3 + 9;
          }
          local_14 = local_18;
          param_1 = (byte **)local_20;
          goto LAB_0003194f;
        }
        uVar6 = recovered_289c3(ppppppppbVar3,(undefined4 *)(local_1c[8] + 0x14));
        if ((char)uVar6 != '\0') {
          iVar5 = 1;
          goto LAB_00031907;
        }
        param_4 = (byte **)local_14;
        ppppppppbVar3 = local_18;
LAB_00031c0b:
        recovered_32415((int)ppppppppbVar3,(int)param_4);
        recovered_20dfd((int)ppppppppbVar3);
      }
      pcVar14 = str_0004066f;
      goto LAB_00031859;
    }
    local_14 = (byte ********)0x0;
    local_18 = (byte ********)param_3;
LAB_0003194f:
    ppppppppbVar3 = local_14;
    iVar5 = local_1c[8];
    if (*(int *)(iVar5 + 4) == 1) {
      ppbVar12 = (byte **)&DAT_0003f254;
      if (*(byte ***)(iVar5 + 0x10) != (byte **)0x0) {
        ppbVar12 = *(byte ***)(iVar5 + 0x10);
      }
      uVar7 = recovered_32437((byte ********)param_1,ppbVar12,(byte **)local_18,param_4,param_5);
      ppppppppbVar3 = local_14;
      local_18 = (byte ********)CONCAT31(PF_PART3(local_18, 1),(char)uVar7);
      recovered_32415((int)local_14,(int)param_4);
      uVar7 = recovered_20dfd((int)ppppppppbVar3);
      return CONCAT31((int3)(uVar7 >> 8),PF_PART1(local_18, 0));
    }
    if (((byte ********)param_4 == (byte ********)0x0) || (*(char *)(iVar5 + 8) == '\0')) {
      iVar5 = DAT_00088e68;
      if (DAT_00088e64 == DAT_00088f8c) {
        uVar7 = 4;
        if (DAT_00088e64 != 0) {
          uVar7 = DAT_00088e64 * 2;
        }
        iVar5 = recovered_20e83(DAT_00088e68,uVar7 * 0xc);
        if (iVar5 == 0) {
          ppppppppbVar3 = local_14;
          goto LAB_00031c0b;
        }
        puVar10 = (undefined4 *)(DAT_00088f8c * 0xc + iVar5 + 8);
        DAT_00088e68 = iVar5;
        for (; DAT_00088f8c < uVar7; DAT_00088f8c = DAT_00088f8c + 1) {
          puVar10[-2] = 0;
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10 = puVar10 + 3;
        }
        DAT_00088f8c = uVar7;
      }
      piVar8 = local_1c;
      recovered_3e584((int *)(DAT_00088e64 * 0xc + iVar5));
      iVar5 = DAT_00088e68;
      if (DAT_00088e68 != 0) {
        iVar11 = DAT_00088e64 * 0xc;
        *(undefined4 *)(DAT_00088e68 + iVar11) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar11) = 0;
        *(undefined4 *)(iVar5 + 8 + iVar11) = 0;
      }
      DAT_00088e64 = DAT_00088e64 + 1;
      pcVar14 = *(char **)(piVar8[8] + 0xc);
      if (((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) ||
         (uVar6 = recovered_3957c((int)pcVar14,(int)piVar8), (char)uVar6 != '\0')) {
        local_20 = (byte ********)param_1;
        for (ppppppppbVar3 = (byte ********)0x0; ppppppppbVar9 = local_18, iVar5 = local_1c[8],
            ppppppppbVar3 < *(byte *********)(iVar5 + 0x3c);
            ppppppppbVar3 = (byte ********)((int)ppppppppbVar3 + 1)) {
          ppppppppbVar4 = (byte ********)0x0;
          if (ppppppppbVar3 < param_4) {
            ppppppppbVar4 = local_18;
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
          if (ppppppppbVar4 == (byte ********)0x0) {
            ppppppppbVar4 = &local_70;
          }
          uVar6 = recovered_3957c(*(int *)(*(int *)(iVar5 + 0x38) + (int)ppppppppbVar3 * 4),
                                  (int)ppppppppbVar4);
          if ((char)uVar6 == '\0') {
            recovered_396a9();
            ppppppppbVar9 = local_14;
            recovered_32415((int)local_14,(int)param_4);
            recovered_20dfd((int)ppppppppbVar9);
            puVar13 = *(uint **)(*(int *)(local_1c[8] + 0x38) + (int)ppppppppbVar3 * 4);
            pcVar14 = str_000406c6;
LAB_00031bf2:
            param_1 = (byte **)local_20;
            goto LAB_0003185c;
          }
          local_18 = ppppppppbVar9 + 9;
        }
        puVar13 = local_4c + 9;
        param_1 = (byte **)&local_24;
        uVar7 = recovered_2a897(*(int *)(iVar5 + 0x40),*(uint ************)(iVar5 + 0x44),
                                (int *)param_1,puVar13,local_4c);
        if ((char)uVar7 == '\0') {
          recovered_28761(local_4c);
          recovered_396a9();
          ppppppppbVar3 = local_14;
          recovered_32415((int)local_14,(int)param_4);
          recovered_20dfd((int)ppppppppbVar3);
          return 0;
        }
        recovered_396a9();
        ppppppppbVar3 = local_14;
        recovered_32415((int)local_14,(int)param_4);
        pcVar14 = (char *)0x31b66;
        recovered_20dfd((int)ppppppppbVar3);
        if (local_4c[9] == 2) {
          piVar8 = (int *)recovered_28761(param_5);
          puVar13 = local_4c;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *param_5 = *puVar13;
            puVar13 = puVar13 + 1;
            param_5 = param_5 + 1;
          }
LAB_00031cc2:
          return CONCAT31((int3)((uint)piVar8 >> 8),1);
        }
        if (local_4c[9] != 1) {
          recovered_28761(local_4c);
          *param_5 = 0;
          param_5[1] = 0;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[4] = 0;
          param_5[5] = 0;
          param_5[6] = 0;
          param_5[7] = 0;
          param_5[8] = 0;
          piVar8 = param_5;
          goto LAB_00031cc2;
        }
        local_70 = local_24;
        local_6c = &DAT_0003f254;
        if (local_24 < *(byte ********)(local_1c[8] + 0x44)) {
          puVar1 = *(undefined1 **)(*(int *)(local_1c[8] + 0x40) + (int)local_24 * 4);
          local_6c = &DAT_0003f254;
          if (puVar1 != (undefined1 *)0x0) {
            local_6c = puVar1;
          }
        }
        recovered_28761(local_4c);
        goto LAB_0003185c;
      }
      recovered_396a9();
      ppppppppbVar3 = local_14;
      recovered_32415((int)local_14,(int)param_4);
      recovered_20dfd((int)ppppppppbVar3);
      pcVar14 = str_0004066f;
      puVar13 = *(uint **)(local_1c[8] + 0xc);
    }
    else {
      recovered_32415((int)local_14,(int)param_4);
      recovered_20dfd((int)ppppppppbVar3);
      puVar13 = (uint *)str_0003fe57;
      if (*(uint **)(local_1c[8] + 0xc) != (uint *)0x0) {
        puVar13 = *(uint **)(local_1c[8] + 0xc);
      }
      pcVar14 = str_0004069b;
    }
  }
LAB_0003185c:
  recovered_2d241((uint)param_1,(char *)puVar13,pcVar14);
  return 0;
}

