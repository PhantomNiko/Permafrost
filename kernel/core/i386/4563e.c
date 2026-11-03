#include "functions.h"
#undef DAT_00082064
#define DAT_00082064 (*(int *)(0x82064U))
#undef DAT_00082074
#define DAT_00082074 (*(int *)(0x82074U))
#undef DAT_00082078
#define DAT_00082078 (*(int *)(0x82078U))
#undef str_000471f6
#define str_000471f6 (*(char (*)[1])(0x471f6U))
#undef str_0004af69
#define str_0004af69 (*(char (*)[1])(0x4af69U))
#undef str_0004af8a
#define str_0004af8a (*(char (*)[1])(0x4af8aU))
#undef str_0004afa0
#define str_0004afa0 (*(char (*)[1])(0x4afa0U))
#define local_6c (*(ushort (*)[18])(frame + 72))
#define local_48 (*(uint *)(frame + 108))
#define local_44 (*(int *)(frame + 112))
#define local_40 (*(uint (*)[10])(frame + 116))
#define local_16 (*(byte (*)[2])(frame + 158))
#define local_14 (*(float *)(frame + 160))
#define local_90 (*(uint (*)[9])(frame + 36))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4563e
 */

undefined4 recovered_4563e(uint param_1,int param_2,char *param_3,uint *param_4,byte *param_5,int param_6)

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
    iVar7 = recovered_21415((int)param_5,0x473e6);
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
      iVar8 = DAT_00082074 + 1;
      iVar7 = DAT_00082074 * 0xc + -0xc;
      local_40[9] = param_2;
      local_14 = (float)param_1;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 == 0) {
          uVar3 = recovered_2c5a5((int)param_3);
          if ((int)uVar3 < 0) {
            recovered_30ed3((uint)local_14,param_3,str_0004af8a,param_3);
            goto LAB_00045a6f;
          }
          iVar7 = DAT_00082064;
          goto LAB_000458e4;
        }
        iVar1 = iVar7 + -0xc;
        uVar3 = recovered_2c950((int *)(iVar7 + DAT_00082078),(int)param_3);
        iVar7 = iVar1;
      } while ((int)uVar3 < 0);
      iVar7 = *(int *)(DAT_00082078 + 0xc + iVar1);
LAB_000458e4:
      uVar4 = recovered_2c4ef(local_40,(uint *)(iVar7 + uVar3 * 0x2c + 4));
      param_1 = (uint)local_14;
      if ((char)uVar4 == '\0') {
LAB_00045a6f:
        puVar5 = local_40;
      }
      else {
        uVar4 = recovered_330ff(local_14,(char *)local_6c,local_40,(uint *)param_6,(int *)local_90);
        if ((char)uVar4 != '\0') {
          uVar3 = recovered_31749(local_40[9],(int)param_3,(int)local_90);
          recovered_2603e(local_40);
          uVar6 = recovered_2603e(local_90);
          if ((char)uVar3 != '\0') {
            return CONCAT31((int3)(uVar6 >> 8),1);
          }
          format = str_000471f6;
          goto LAB_00045b7d;
        }
        recovered_2603e(local_40);
        puVar5 = local_90;
      }
      recovered_2603e(puVar5);
      return 0;
    }
    uVar3 = recovered_31749(param_2,(int)param_3,param_6);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    format = str_000471f6;
    goto LAB_00045b7d;
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
  iVar7 = DAT_00082074;
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
          uVar3 = recovered_2c5a5((int)param_3);
          if ((int)uVar3 < 0) {
            iVar7 = recovered_21415((int)param_5,0x473e6);
            if (iVar7 != 0) {
              recovered_2603e(local_40);
              format = str_0004af8a;
              goto LAB_00045b7a;
            }
            if (*(int *)param_4[2] == 1) {
              bVar2 = recovered_31805(local_40);
            }
            else {
              bVar2 = recovered_2c36c(local_40);
            }
            if (bVar2 == false) goto LAB_00045b68;
          }
          else {
            uVar4 = recovered_2c4ef(local_40,(uint *)(DAT_00082064 + uVar3 * 0x2c + 4));
            if ((char)uVar4 == '\0') goto LAB_00045aab;
          }
        }
        iVar7 = 0;
        uVar3 = 1;
        goto LAB_00045806;
      }
      uVar3 = recovered_2c950((int *)(DAT_00082078 + iVar8),(int)param_3);
      iVar8 = iVar8 + -0xc;
    } while ((int)uVar3 < 0);
    uVar4 = recovered_2c4ef(local_40,(uint *)(*(int *)(DAT_00082078 + 0xc + iVar8) + uVar3 * 0x2c +
                                             4));
    bVar2 = true;
  } while ((char)uVar4 != '\0');
LAB_00045aab:
  recovered_2603e(local_40);
  format = str_0004af69;
LAB_00045b7a:
  param_1 = (uint)local_14;
LAB_00045b7d:
  recovered_30ed3(param_1,param_3,format);
  return 0;
LAB_00045806:
  if (*param_4 <= uVar3) goto LAB_00045962;
  uVar6 = param_4[2];
  local_48 = uVar3;
  local_44 = iVar7;
  iVar8 = recovered_21415((int)param_5,0x473e6);
  puVar5 = (uint *)recovered_3185b((int *)puVar5,(int *)(uVar6 + iVar7),iVar8 == 0);
  if (puVar5 == (uint *)0x0) goto LAB_00045b2e;
  iVar7 = recovered_21415((int)param_5,0x473e6);
  if ((iVar7 == 0) && (*puVar5 == 0)) {
    if (*(int *)(param_4[2] + 0x24 + local_44) == 1) {
      bVar2 = recovered_31805(puVar5);
    }
    else {
      bVar2 = recovered_2c36c(puVar5);
    }
    if (bVar2 == false) goto LAB_00045b68;
  }
  iVar7 = local_44 + 0x24;
  uVar3 = local_48 + 1;
  goto LAB_00045806;
LAB_00045962:
  iVar7 = recovered_21415((int)param_5,0x473e6);
  if (iVar7 == 0) {
    uVar4 = recovered_31a48((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),
                            (int *)param_6,1);
    if ((char)uVar4 != '\0') {
LAB_00045afb:
      uVar3 = recovered_31749(local_40[9],(int)param_3,(int)local_40);
      uVar6 = recovered_2603e(local_40);
      if ((char)uVar3 != '\0') {
        return CONCAT31((int3)(uVar6 >> 8),1);
      }
      format = str_000471f6;
      param_1 = (uint)local_14;
      goto LAB_00045b7d;
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
    iVar7 = recovered_3524f((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),local_90);
    if ((char)iVar7 != '\0') {
      uVar4 = recovered_330ff(local_14,(char *)local_16,local_90,(uint *)param_6,(int *)local_6c);
      if (((char)uVar4 != '\0') &&
         (uVar4 = recovered_31a48((int *)puVar5,(int *)(param_4[2] + *param_4 * 0x24 + -0x24),
                                  (int *)local_6c,0), (char)uVar4 != '\0')) {
        recovered_2603e(local_90);
        recovered_2603e((undefined4 *)local_6c);
        goto LAB_00045afb;
      }
    }
    recovered_2603e(local_90);
    recovered_2603e((undefined4 *)local_6c);
  }
LAB_00045b2e:
  recovered_2603e(local_40);
  format = str_0004afa0;
  goto LAB_00045b7a;
LAB_00045b68:
  recovered_2603e(local_40);
  format = str_000471f6;
  goto LAB_00045b7a;
}
