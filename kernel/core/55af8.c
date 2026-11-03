#include "functions.h"
#undef DAT_000938f0
#define DAT_000938f0 (*(int *)(0x938f0U))
#undef DAT_00093900
#define DAT_00093900 (*(int *)(0x93900U))
#undef DAT_00093904
#define DAT_00093904 (*(int *)(0x93904U))
#undef str_0005853b
#define str_0005853b (*(char (*)[1])(0x5853bU))
#undef str_0005c750
#define str_0005c750 (*(char (*)[1])(0x5c750U))
#undef str_0005c771
#define str_0005c771 (*(char (*)[1])(0x5c771U))
#undef str_0005c787
#define str_0005c787 (*(char (*)[1])(0x5c787U))
#define local_48 (*(uint *)(frame + 108))
#define local_44 (*(int *)(frame + 112))
#define local_40 (*(uint (*)[10])(frame + 116))
#define local_16 (*(byte (*)[2])(frame + 158))
#define local_14 (*(float *)(frame + 160))
#define local_90 (*(uint (*)[9])(frame + 36))
#define local_6c (*(ushort (*)[18])(frame + 72))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x55af8
 */

undefined4 recovered_55af8(uint param_1,int param_2,char *param_3,uint *param_4,byte *param_5,int param_6)

{
  unsigned char frame[212] = {0};

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
    iVar7 = recovered_214f9((int)param_5,0x5872b);
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
      iVar8 = DAT_00093900 + 1;
      iVar7 = DAT_00093900 * 0xc + -0xc;
      local_40[9] = param_2;
      local_14 = (float)param_1;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          uVar3 = recovered_3a966((int)param_3);
          if ((int)uVar3 < 0) {
            recovered_3f39b((uint)local_14,param_3,str_0005c771,param_3);
            goto LAB_00055f29;
          }
          iVar7 = DAT_000938f0;
          goto LAB_00055d9e;
        }
        iVar1 = iVar7 + -0xc;
        uVar3 = recovered_3ad11((int *)(iVar7 + DAT_00093904),(int)param_3);
        iVar7 = iVar1;
      } while ((int)uVar3 < 0);
      iVar7 = *(int *)(DAT_00093904 + 0xc + iVar1);
LAB_00055d9e:
      uVar4 = recovered_3a8b0(local_40,(uint *)(iVar7 + uVar3 * 0x2c + 4));
      param_1 = (uint)local_14;
      if ((char)uVar4 == '\0') {
LAB_00055f29:
        puVar5 = local_40;
      }
      else {
        uVar4 = recovered_42ce8(local_14,(char *)local_6c,local_40,(uint *)param_6,(int *)local_90);
        if ((char)uVar4 != '\0') {
          uVar3 = recovered_3fc11(local_40[9],(int)param_3,(int)local_90);
          recovered_3352a(local_40);
          uVar6 = recovered_3352a(local_90);
          if ((char)uVar3 != '\0') {
            return CONCAT31((int3)(uVar6 >> 8),1);
          }
          format = str_0005853b;
          goto LAB_00056037;
        }
        recovered_3352a(local_40);
        puVar5 = local_90;
      }
      recovered_3352a(puVar5);
      return 0;
    }
    uVar3 = recovered_3fc11(param_2,(int)param_3,param_6);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    format = str_0005853b;
    goto LAB_00056037;
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
  iVar7 = DAT_00093900;
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
          uVar3 = recovered_3a966((int)param_3);
          if ((int)uVar3 < 0) {
            iVar7 = recovered_214f9((int)param_5,0x5872b);
            if (iVar7 != 0) {
              recovered_3352a(local_40);
              format = str_0005c771;
              goto LAB_00056034;
            }
            if (*(int *)param_4[2] == 1) {
              bVar2 = recovered_41490(local_40);
            }
            else {
              bVar2 = recovered_3a72d(local_40);
            }
            if (bVar2 == false) goto LAB_00056022;
          }
          else {
            uVar4 = recovered_3a8b0(local_40,(uint *)(DAT_000938f0 + uVar3 * 0x2c + 4));
            if ((char)uVar4 == '\0') goto LAB_00055f65;
          }
        }
        iVar7 = 0;
        uVar3 = 1;
        goto LAB_00055cc0;
      }
      uVar3 = recovered_3ad11((int *)(DAT_00093904 + iVar8),(int)param_3);
      iVar8 = iVar8 + -0xc;
    } while ((int)uVar3 < 0);
    uVar4 = recovered_3a8b0(local_40,(uint *)(*(int *)(DAT_00093904 + 0xc + iVar8) + uVar3 * 0x2c +
                                             4));
    bVar2 = true;
  } while ((char)uVar4 != '\0');
LAB_00055f65:
  recovered_3352a(local_40);
  format = str_0005c750;
LAB_00056034:
  param_1 = (uint)local_14;
LAB_00056037:
  recovered_3f39b(param_1,param_3,format);
  return 0;
LAB_00055cc0:
  if (*param_4 <= uVar3) goto LAB_00055e1c;
  uVar6 = param_4[2];
  local_48 = uVar3;
  local_44 = iVar7;
  iVar8 = recovered_214f9((int)param_5,0x5872b);
  puVar5 = (uint *)recovered_414e6((int *)puVar5,(int *)(uVar6 + iVar7),iVar8 == 0);
  if (puVar5 == (uint *)0x0) goto LAB_00055fe8;
  iVar7 = recovered_214f9((int)param_5,0x5872b);
  if ((iVar7 == 0) && (*puVar5 == 0)) {
    if (*(int *)(param_4[2] + 0x24 + local_44) == 1) {
      bVar2 = recovered_41490(puVar5);
    }
    else {
      bVar2 = recovered_3a72d(puVar5);
    }
    if (bVar2 == false) goto LAB_00056022;
  }
  iVar7 = local_44 + 0x24;
  uVar3 = local_48 + 1;
  goto LAB_00055cc0;
LAB_00055e1c:
  iVar7 = recovered_214f9((int)param_5,0x5872b);
  if (iVar7 == 0) {
    uVar4 = recovered_416d3((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),
                            (int *)param_6,1);
    if ((char)uVar4 != '\0') {
LAB_00055fb5:
      uVar3 = recovered_3fc11(local_40[9],(int)param_3,(int)local_40);
      uVar6 = recovered_3352a(local_40);
      if ((char)uVar3 != '\0') {
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
      format = str_0005853b;
      param_1 = (uint)local_14;
      goto LAB_00056037;
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
    iVar7 = recovered_44f21((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),local_90);
    if ((char)iVar7 != '\0') {
      uVar4 = recovered_42ce8(local_14,(char *)local_16,local_90,(uint *)param_6,(int *)local_6c);
      if (((char)uVar4 != '\0') &&
         (uVar4 = recovered_416d3((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),
                                  (int *)local_6c,0), (char)uVar4 != '\0')) {
        recovered_3352a(local_90);
        recovered_3352a((undefined4 *)local_6c);
        goto LAB_00055fb5;
      }
    }
    recovered_3352a(local_90);
    recovered_3352a((undefined4 *)local_6c);
  }
LAB_00055fe8:
  recovered_3352a(local_40);
  format = str_0005c787;
  goto LAB_00056034;
LAB_00056022:
  recovered_3352a(local_40);
  format = str_0005853b;
  goto LAB_00056034;
}
