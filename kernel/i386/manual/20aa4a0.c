/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e1b6 (*(uint8_t *)(0x20c4dffU))
#define local_14 (*(uint *)(frame + 1132))
#define local_18 (*(byte * *)(frame + 1128))
#define local_1c (*(int * *)(frame + 1124))
#define local_20 (*(int *)(frame + 1120))
#define local_20d (*(undefined1 *)(frame + 627))
#define local_20e (*(undefined1 *)(frame + 626))
#define local_20f (*(undefined1 *)(frame + 625))
#define local_21 (*(byte *)(frame + 1119))
#define local_210 (*(undefined1 *)(frame + 624))
#define local_22 (*(byte *)(frame + 1118))
#define local_258 (*(uint *)(frame + 552))
#define local_25c (*(int *)(frame + 548))
#define local_268 (*(byte (*)[12])(frame + 536))
#define local_28 (*(uint *)(frame + 1112))
#define local_2c (*(byte * *)(frame + 1108))
#define local_2e (*(undefined2 *)(frame + 1106))
#define local_34 (*(int *)(frame + 1100))
#define local_38 (*(uint *)(frame + 1096))
#define local_3c (*(ulong *)(frame + 1092))
#define local_40 (*(int *)(frame + 1088))
#define local_410 (*(uint *)(frame + 112))
#define local_44 (*(uint *)(frame + 1084))
#define local_458 (*(uint *)(frame + 40))
#define local_45c (*(int *)(frame + 36))
#define local_468 (*(byte (*)[12])(frame + 24))
#define local_48 (*(uint *)(frame + 1080))
#define local_68 (*(undefined1 (*)[32])(frame + 1048))
uint recovered_20aa4a0(int incoming_ecx,int *incoming_edx,uint param_3,uint param_4,
                      char *in_stack_0000000c)

{
  unsigned char frame[1184] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint incoming_edx_00;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;

  uVar10 = param_4 + param_3;
  uVar6 = (uint)CARRY4(param_4,param_3);
  local_38 = uVar10 - 1;
  local_34 = (uVar6 - 1) + (uint)(uVar10 != 0);
  if ((((incoming_ecx == 0) || (*(int *)(incoming_ecx + 0x1c) != 0)) ||
      (*(char *)(incoming_ecx + 0x21) != '\0')) || (*incoming_edx != 2)) {
    return 0;
  }
  if (param_3 < (uint)incoming_edx[1]) {
    return 0;
  }
  if (local_34 != 0 || (uint)-local_34 < (uint)((uint)incoming_edx[2] < local_38)) {
    return 0;
  }
  uVar7 = incoming_edx[6] << 9;
  local_40 = incoming_edx[5] * incoming_edx[3];
  local_20 = incoming_ecx;
  local_1c = incoming_edx;
  local_18 = recovered_2001650(uVar7);
  if (local_18 == (byte *)0x0) {
    return 0;
  }
  local_14 = (uint)*(byte *)(local_20 + 4);
  local_3c = uVar7;
  uVar3 = recovered_204ed30(local_14,local_1c[4],(int)local_18,uVar7);
  if ((((char)uVar3 == '\0') ||
      (uVar3 = recovered_204ed30((uint)*(byte *)(local_20 + 4),local_1c[8],(int)local_468,0x200),
      (char)uVar3 == '\0')) ||
     (uVar3 = recovered_204ed30((uint)*(byte *)(local_20 + 4),local_1c[9],(int)local_268,0x200),
     (char)uVar3 == '\0')) {
LAB_0207a24a:
    local_14 = 0;
  }
  else {
    local_14 = 0;
    if (local_1c[3] != 0) {
      local_28 = 0xffffffff;
      local_14 = 0;
      do {
        iVar4 = local_1c[5] * local_14;
        local_2c = local_18 + iVar4;
        local_48 = *(uint *)(local_18 + iVar4 + 0x20);
        local_21 = local_18[iVar4 + 0x24];
        local_2e = *(undefined2 *)(local_18 + iVar4 + 0x25);
        local_22 = local_18[iVar4 + 0x27];
        uVar8 = *(uint *)(local_18 + iVar4 + 0x28);
        local_44 = *(uint *)(local_18 + iVar4 + 0x2c);
        iVar4 = recovered_2001ff0(local_2c,&DAT_0208e1b6,0x10);
        pbVar9 = local_18;
        uVar2 = local_28;
        if (iVar4 == 0) {
          uVar2 = local_14;
          if (local_28 != 0xffffffff) {
            uVar2 = local_28;
          }
        }
        else {
          uVar5 = CONCAT13(local_22,CONCAT21(local_2e,local_21)) + -1 + (uint)(local_48 != 0);
          if (uVar5 < local_44 || uVar5 - local_44 < (uint)(local_48 - 1 < uVar8)) {
            uVar8 = (uVar8 - local_48) + 1;
            if (((param_4 != 0) && (uVar8 != 0)) &&
               ((CARRY4(uVar8,local_48) != 0 ||
                 -(uint)CARRY4(uVar8,local_48) < (uint)(param_3 < uVar8 + local_48) &&
                (uVar6 != 0 || -uVar6 < (uint)(local_48 < uVar10))))) goto LAB_0207a24a;
          }
        }
        local_28 = uVar2;
        local_14 = local_14 + 1;
      } while (local_14 < (uint)local_1c[3]);
      local_14 = 0;
      if (local_28 != 0xffffffff) {
        iVar4 = local_1c[5] * local_28;
        local_2c = local_18 + iVar4;
        recovered_2001e00(local_2c,0,local_1c[5]);
        recovered_20ab9f0(in_stack_0000000c,local_2c);
        recovered_20a8b80((int)(pbVar9 + iVar4 + 0x10),incoming_edx_00);
        pbVar9[iVar4 + 0x20] = (byte)param_3;
        pbVar9[iVar4 + 0x21] = (byte)(param_3 >> 8);
        pbVar9[iVar4 + 0x22] = (byte)(param_3 >> 0x10);
        pbVar9[iVar4 + 0x23] = (byte)(param_3 >> 0x18);
        pbVar1 = pbVar9 + iVar4 + 0x24;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar9[iVar4 + 0x28] = (byte)local_38;
        pbVar9[iVar4 + 0x29] = (byte)(local_38 >> 8);
        pbVar9[iVar4 + 0x2a] = (byte)(local_38 >> 0x10);
        pbVar9[iVar4 + 0x2b] = (byte)(local_38 >> 0x18);
        pbVar9[iVar4 + 0x2c] = (byte)local_34;
        pbVar9[iVar4 + 0x2d] = (byte)((uint)local_34 >> 8);
        pbVar9[iVar4 + 0x2e] = (byte)((uint)local_34 >> 0x10);
        pbVar9[iVar4 + 0x2f] = (byte)((uint)local_34 >> 0x18);
        uVar11 = recovered_20abc50(in_stack_0000000c,local_28 + 1,(int)local_68);
        uVar7 = local_3c;
        uVar6 = local_1c[5];
        uVar10 = 0;
        if (0x37 < uVar6) {
          uVar10 = uVar6 - 0x38;
        }
        uVar8 = 0x48;
        if (uVar6 < 0x81) {
          uVar8 = uVar10;
        }
        recovered_20abde0(local_18 + iVar4 + 0x38,uVar8,(undefined1 *)uVar11);
        pbVar9 = local_18;
        local_410 = recovered_20a9b60(local_18,local_40);
        local_210 = (undefined1)local_410;
        local_20f = (undefined1)(local_410 >> 8);
        local_20e = (undefined1)(local_410 >> 0x10);
        local_20d = (undefined1)(local_410 >> 0x18);
        local_458 = 0;
        local_258 = 0;
        local_458 = recovered_20a9b60(local_468,local_45c);
        local_258 = recovered_20a9b60(local_268,local_25c);
        uVar3 = recovered_2050b00((uint)*(byte *)(local_20 + 4),local_1c[4],(int)pbVar9,uVar7);
        if ((char)uVar3 == '\0') goto LAB_0207a254;
        uVar3 = recovered_2050b00((uint)*(byte *)(local_20 + 4),local_1c[7],(int)pbVar9,uVar7);
        if (((char)uVar3 == '\0') ||
           (uVar3 = recovered_2050b00((uint)*(byte *)(local_20 + 4),local_1c[8],(int)local_468,0x200
                                     ), (char)uVar3 == '\0')) goto LAB_0207a24a;
        local_14 = recovered_2050b00((uint)*(byte *)(local_20 + 4),local_1c[9],(int)local_268,0x200)
        ;
      }
    }
  }
  pbVar9 = local_18;
LAB_0207a254:
  recovered_2001710(pbVar9);
  return local_14;
}
