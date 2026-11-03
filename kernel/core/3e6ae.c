#include "functions.h"
#undef DAT_00088e64
#define DAT_00088e64 (*(int *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
#undef DAT_00088e70
#define DAT_00088e70 (*(int *)(0x88e70U))
#undef str_00040024
#define str_00040024 (*(char (*)[1])(0x40024U))
#undef str_00042fc6
#define str_00042fc6 (*(char (*)[1])(0x42fc6U))
#undef str_00042fe7
#define str_00042fe7 (*(char (*)[1])(0x42fe7U))
#undef str_00042ffd
#define str_00042ffd (*(char (*)[1])(0x42ffdU))
#define local_48 (*(uint *)(frame + 108))
#define local_44 (*(int *)(frame + 112))
#define local_40 (*(uint (*)[10])(frame + 116))
#define local_16 (*(byte (*)[2])(frame + 158))
#define local_14 (*(float *)(frame + 160))
#define local_90 (*(uint (*)[9])(frame + 36))
#define local_6c (*(ushort (*)[18])(frame + 72))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3e6ae
 */

undefined4 recovered_3e6ae(uint param_1,int param_2,char *param_3,uint *param_4,byte *param_5,int param_6)

{
  unsigned char frame[212];

  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_6 == 0 || (param_5 == (byte *)0x0 || param_3 == (char *)0x0)) {
    return 0;
  }
  if ((param_4 == (uint *)0x0) || (*param_4 == 0)) {
    iVar7 = recovered_2100f((int)param_5,0x40214);
    if (iVar7 != 0) {
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = 0;
      local_40[6] = 0;
      local_40[7] = 0;
      local_40[8] = 0;
      local_90[0] = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      local_90[3] = 0;
      local_90[4] = 0;
      local_90[5] = 0;
      local_90[6] = 0;
      local_90[7] = 0;
      local_90[8] = 0;
      local_6c[0] = (ushort)*param_5;
      iVar8 = DAT_00088e64 + 1;
      iVar7 = DAT_00088e64 * 0xc + -0xc;
      local_40[9] = param_2;
      local_14 = (float)param_1;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          uVar3 = recovered_28a79((int)param_3);
          if ((int)uVar3 < 0) {
            recovered_2d241((uint)local_14,param_3,str_00042fe7,param_3);
            goto LAB_0003eadf;
          }
          iVar7 = DAT_00088e70;
          goto LAB_0003e954;
        }
        iVar1 = iVar7 + -0xc;
        uVar3 = recovered_2896d((int *)(iVar7 + DAT_00088e68),(int)param_3);
        iVar7 = iVar1;
      } while ((int)uVar3 < 0);
      iVar7 = *(int *)(DAT_00088e68 + 0xc + iVar1);
LAB_0003e954:
      uVar4 = recovered_289c3(local_40,(undefined4 *)(iVar7 + uVar3 * 0x2c + 4));
      param_1 = (uint)local_14;
      if ((char)uVar4 == '\0') {
LAB_0003eadf:
        puVar5 = local_40;
      }
      else {
        uVar4 = recovered_2f479(local_14,(char *)local_6c,local_40,(uint *)param_6,(int *)local_90);
        if ((char)uVar4 != '\0') {
          uVar3 = recovered_2dab7(local_40[9],(int)param_3,(int)local_90);
          recovered_28761(local_40);
          uVar6 = recovered_28761(local_90);
          if ((char)uVar3 != '\0') {
            return CONCAT31((int3)(uVar6 >> 8),1);
          }
          format = str_00040024;
          goto LAB_0003ebed;
        }
        recovered_28761(local_40);
        puVar5 = local_90;
      }
      recovered_28761(puVar5);
      return 0;
    }
    uVar3 = recovered_2dab7(param_2,(int)param_3,param_6);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    format = str_00040024;
    goto LAB_0003ebed;
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_16[0] = *param_5;
  local_16[1] = 0;
  bVar2 = false;
  iVar7 = DAT_00088e64;
  local_40[9] = param_2;
  local_14 = (float)param_1;
  do {
    iVar8 = iVar7 * 0xc + -0xc;
    do {
      bVar9 = iVar7 == 0;
      iVar7 = iVar7 + -1;
      if ((bool)(bVar9 | bVar2)) {
        puVar5 = local_40;
        if (!bVar2) {
          uVar3 = recovered_28a79((int)param_3);
          if ((int)uVar3 < 0) {
            iVar7 = recovered_2100f((int)param_5,0x40214);
            if (iVar7 != 0) {
              recovered_28761(local_40);
              format = str_00042fe7;
              goto LAB_0003ebea;
            }
            if (*(int *)param_4[2] == 1) {
              bVar2 = recovered_2db7f(local_40);
            }
            else {
              bVar2 = recovered_28c07(local_40);
            }
            if (bVar2 == false) goto LAB_0003ebd8;
          }
          else {
            uVar4 = recovered_289c3(local_40,(undefined4 *)(DAT_00088e70 + uVar3 * 0x2c + 4));
            if ((char)uVar4 == '\0') goto LAB_0003eb1b;
          }
        }
        iVar7 = 0;
        uVar3 = 1;
        goto LAB_0003e876;
      }
      uVar3 = recovered_2896d((int *)(DAT_00088e68 + iVar8),(int)param_3);
      iVar8 = iVar8 + -0xc;
    } while ((int)uVar3 < 0);
    uVar4 = recovered_289c3(local_40,(undefined4 *)
                                     (*(int *)(DAT_00088e68 + 0xc + iVar8) + uVar3 * 0x2c + 4));
    bVar2 = true;
  } while ((char)uVar4 != '\0');
LAB_0003eb1b:
  recovered_28761(local_40);
  format = str_00042fc6;
LAB_0003ebea:
  param_1 = (uint)local_14;
LAB_0003ebed:
  recovered_2d241(param_1,param_3,format);
  return 0;
LAB_0003e876:
  if (*param_4 <= uVar3) goto LAB_0003e9d2;
  uVar6 = param_4[2];
  local_48 = uVar3;
  local_44 = iVar7;
  iVar8 = recovered_2100f((int)param_5,0x40214);
  puVar5 = (uint *)recovered_2dbd5((int *)puVar5,(int *)(uVar6 + iVar7),iVar8 == 0);
  if (puVar5 == (uint *)0x0) goto LAB_0003eb9e;
  iVar7 = recovered_2100f((int)param_5,0x40214);
  if ((iVar7 == 0) && (*puVar5 == 0)) {
    if (*(int *)(param_4[2] + 0x24 + local_44) == 1) {
      bVar2 = recovered_2db7f(puVar5);
    }
    else {
      bVar2 = recovered_28c07(puVar5);
    }
    if (bVar2 == false) goto LAB_0003ebd8;
  }
  iVar7 = local_44 + 0x24;
  uVar3 = local_48 + 1;
  goto LAB_0003e876;
LAB_0003e9d2:
  iVar7 = recovered_2100f((int)param_5,0x40214);
  if (iVar7 == 0) {
    uVar4 = recovered_2ddc2((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),
                            (int *)param_6,1);
    if ((char)uVar4 != '\0') {
LAB_0003eb6b:
      uVar3 = recovered_2dab7(local_40[9],(int)param_3,(int)local_40);
      uVar6 = recovered_28761(local_40);
      if ((char)uVar3 != '\0') {
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
      format = str_00040024;
      param_1 = (uint)local_14;
      goto LAB_0003ebed;
    }
  }
  else {
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[5] = 0;
    local_90[6] = 0;
    local_90[7] = 0;
    local_90[8] = 0;
    local_6c[0] = 0;
    local_6c[1] = 0;
    local_6c[2] = 0;
    local_6c[3] = 0;
    local_6c[4] = 0;
    local_6c[5] = 0;
    local_6c[6] = 0;
    local_6c[7] = 0;
    local_6c[8] = 0;
    local_6c[9] = 0;
    local_6c[10] = 0;
    local_6c[0xb] = 0;
    local_6c[0xc] = 0;
    local_6c[0xd] = 0;
    local_6c[0xe] = 0;
    local_6c[0xf] = 0;
    local_6c[0x10] = 0;
    local_6c[0x11] = 0;
    uVar4 = recovered_31532((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),local_90);
    if ((char)uVar4 != '\0') {
      uVar4 = recovered_2f479(local_14,(char *)local_16,local_90,(uint *)param_6,(int *)local_6c);
      if (((char)uVar4 != '\0') &&
         (uVar4 = recovered_2ddc2((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),
                                  (int *)local_6c,0), (char)uVar4 != '\0')) {
        recovered_28761(local_90);
        recovered_28761((undefined4 *)local_6c);
        goto LAB_0003eb6b;
      }
    }
    recovered_28761(local_90);
    recovered_28761((undefined4 *)local_6c);
  }
LAB_0003eb9e:
  recovered_28761(local_40);
  format = str_00042ffd;
  goto LAB_0003ebea;
LAB_0003ebd8:
  recovered_28761(local_40);
  format = str_00040024;
  goto LAB_0003ebea;
}

