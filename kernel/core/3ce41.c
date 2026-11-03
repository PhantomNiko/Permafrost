#include "functions.h"
#undef DAT_00054f20
#define DAT_00054f20 (*(int *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
#define local_280 (*(undefined1 (*)[512])(frame + 16))
#define local_80 (*(undefined1 (*)[8])(frame + 528))
#define local_78 (*(int *)(frame + 536))
#define local_74 (*(int *)(frame + 540))
#define local_70 (*(int *)(frame + 544))
#define local_5c (*(int *)(frame + 564))
#define local_58 (*(int *)(frame + 568))
#define local_3c (*(uint *)(frame + 596))
#define local_38 (*(int *)(frame + 600))
#define local_34 (*(uint *)(frame + 604))
#define local_30 (*(uint *)(frame + 608))
#define local_2c (*(uint *)(frame + 612))
#define local_28 (*(int *)(frame + 616))
#define local_24 (*(uint *)(frame + 620))
#define local_20 (*(uint *)(frame + 624))
#define local_1c (*(uint *)(frame + 628))
#define local_18 (*(uint *)(frame + 632))
#define local_14 (*(int * *)(frame + 636))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ce41
 */

undefined4 recovered_3ce41(int *param_1,int *param_2)

{
  unsigned char frame[688];

  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (((0 < param_1[4]) && (puVar1 = recovered_3d3dd((char)param_1[1]), puVar1 != (undefined4 *)0x0)
      ) && (puVar1[6] != 0)) {
    recovered_20fa9((int)param_2,0,0x54);
    uVar2 = recovered_29d3c((uint)*(byte *)(puVar1 + 1),puVar1[3],param_2,'\0');
    if (((char)uVar2 != '\0') && (local_38 = *param_2, local_38 == param_1[6])) {
      local_18 = param_1[2];
      param_2[0xe] = local_18;
      local_28 = param_1[3];
      param_2[0x10] = local_28;
      local_24 = (local_18 - 1) + local_28;
      param_2[0xf] = local_24;
      local_2c = param_2[1];
      local_30 = param_2[2];
      piVar4 = &DAT_00054f24;
      uVar6 = local_2c;
      iVar5 = DAT_00054f20;
      local_1c = local_30;
      while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
        if (((*piVar4 != *param_1) && ((char)piVar4[1] == (char)param_1[1])) &&
           ((0 < piVar4[4] && (piVar4[6] == local_38)))) {
          local_20 = piVar4[2];
          local_34 = (local_20 + piVar4[3]) - 1;
          uVar3 = piVar4[3] + local_20;
          if (uVar3 <= uVar6) {
            uVar3 = uVar6;
          }
          if (local_18 <= local_34) {
            uVar3 = uVar6;
          }
          if (local_24 < local_20) {
            if (local_20 - 1 < local_1c) {
              local_1c = local_20 - 1;
            }
          }
          uVar6 = uVar3;
        }
        piVar4 = piVar4 + 9;
      }
      if (uVar6 <= local_18 && local_18 - uVar6 != 0) {
        param_2[0x11] = local_18 - uVar6;
      }
      if (local_24 <= local_30 && local_2c <= local_18) {
        if (local_24 <= local_1c && local_1c - local_24 != 0) {
          param_2[0x12] = local_1c - local_24;
        }
        local_3c = 0;
        uVar6 = 1;
        if (local_28 != 0) {
          local_14 = param_2;
          uVar2 = recovered_29b1d((uint)*(byte *)(param_1 + 1),local_18,(int)local_280,0x200);
          if ((char)uVar2 == '\0') {
            param_2 = local_14;
          }
          else {
            recovered_20f42((int)local_80,(int)local_280,0x44);
            iVar5 = recovered_20fc5((int)local_80,0x3f248,8);
            if (local_70 == 0 || (local_74 != 0x200 || (local_78 != 1 || iVar5 != 0))) {
              iVar5 = recovered_2a226((int)local_280,param_1[3],(undefined4 *)0x0,(uint *)0x0,
                                      (uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,
                                      &local_3c,(uint *)0x0);
              uVar6 = 1;
              param_2 = local_14;
              if (local_3c == 0 || iVar5 == 0) goto LAB_0003d06b;
            }
            else {
              local_3c = local_70 * local_58 + local_5c;
              uVar6 = 1;
              param_2 = local_14;
              if (local_3c == 0) goto LAB_0003d06b;
            }
            uVar6 = local_3c;
          }
        }
LAB_0003d06b:
        param_2[0x13] = uVar6;
        iVar5 = param_1[3];
        param_2[0x14] = param_2[0x12] + iVar5;
        return CONCAT31((int3)((uint)(param_2[0x12] + iVar5) >> 8),1);
      }
    }
  }
  return 0;
}

