#include "functions.h"
#undef DAT_0005e938
#define DAT_0005e938 (*(int *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
#define local_2c4 (*(undefined1 (*)[512])(frame + 16))
#define local_c4 (*(undefined1 (*)[68])(frame + 528))
#define local_80 (*(undefined1 (*)[8])(frame + 596))
#define local_78 (*(int *)(frame + 604))
#define local_74 (*(int *)(frame + 608))
#define local_70 (*(int *)(frame + 612))
#define local_50 (*(uint *)(frame + 644))
#define local_3c (*(int *)(frame + 664))
#define local_38 (*(uint *)(frame + 668))
#define local_34 (*(uint *)(frame + 672))
#define local_30 (*(uint *)(frame + 676))
#define local_2c (*(int *)(frame + 680))
#define local_28 (*(uint *)(frame + 684))
#define local_24 (*(uint *)(frame + 688))
#define local_20 (*(uint *)(frame + 692))
#define local_1c (*(uint *)(frame + 696))
#define local_18 (*(uint *)(frame + 700))
#define local_14 (*(int * *)(frame + 704))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x5450a
 */

undefined4 recovered_5450a(int *param_1,int *param_2)

{
  unsigned char frame[756] = {0};

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
  if (((param_1[5] < 1) || (puVar1 = recovered_54ab5((char)param_1[1]), puVar1 == (undefined4 *)0x0)
      ) || (puVar1[10] == 0)) {
    return 0;
  }
  recovered_213af((int)param_2,0,0x54);
  uVar2 = recovered_3baee((uint)*(byte *)(puVar1 + 1),puVar1[3],param_2,0);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  local_3c = *param_2;
  if (local_3c != param_1[10]) {
    return 0;
  }
  local_18 = param_1[2];
  param_2[0xe] = local_18;
  local_2c = param_1[3];
  param_2[0x10] = local_2c;
  local_28 = (local_18 - 1) + local_2c;
  param_2[0xf] = local_28;
  local_30 = param_2[1];
  local_34 = param_2[2];
  piVar4 = &DAT_0005e93c;
  uVar6 = local_30;
  iVar5 = DAT_0005e938;
  local_20 = local_34;
  while (bVar7 = iVar5 != 0, iVar5 = iVar5 + -1, bVar7) {
    if (((*piVar4 != *param_1) && ((char)piVar4[1] == (char)param_1[1])) &&
       ((0 < piVar4[5] && (piVar4[10] == local_3c)))) {
      local_24 = piVar4[2];
      local_38 = (local_24 + piVar4[3]) - 1;
      uVar3 = piVar4[3] + local_24;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      if (local_18 <= local_38) {
        uVar3 = uVar6;
      }
      if (local_28 < local_24) {
        if (local_24 - 1 < local_20) {
          local_20 = local_24 - 1;
        }
      }
      uVar6 = uVar3;
    }
    piVar4 = piVar4 + 0xd;
  }
  if (uVar6 <= local_18 && local_18 - uVar6 != 0) {
    param_2[0x11] = local_18 - uVar6;
  }
  if (local_34 < local_28 || local_18 < local_30) {
    return 0;
  }
  if (local_28 <= local_20 && local_20 - local_28 != 0) {
    param_2[0x12] = local_20 - local_28;
  }
  local_1c = 0;
  uVar6 = 1;
  if (local_2c == 0) goto LAB_000546ce;
  local_14 = param_2;
  bVar7 = recovered_3864c(*(byte *)(param_1 + 1),local_18,(int)local_2c4,0x200);
  if (!bVar7) goto LAB_000546ce;
  recovered_21348((int)local_c4,(int)local_2c4,0x44);
  uVar2 = recovered_3a168((int)local_c4,param_1[3],&local_1c,(uint *)0x0);
  uVar3 = local_1c;
  piVar4 = param_2;
  if ((char)uVar2 == '\0') {
    recovered_21348((int)local_80,(int)local_2c4,0x44);
    iVar5 = recovered_213fb((int)local_80,0x57350,8);
    if (((iVar5 == 0) && (local_78 == 1)) && (local_74 == 0x200)) {
      uVar3 = local_50;
      piVar4 = local_14;
      if (local_70 != 0) goto joined_r0x0005472a;
    }
    iVar5 = recovered_3c207((int)local_2c4,param_1[3],(undefined4 *)0x0,(uint *)0x0,(uint *)0x0,
                            (uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,&local_1c,(uint *)0x0);
    param_2 = local_14;
    if (local_1c == 0 || iVar5 == 0) goto LAB_000546ce;
  }
  else {
joined_r0x0005472a:
    local_14 = piVar4;
    local_1c = uVar3;
    param_2 = local_14;
    if (local_1c == 0) goto LAB_000546ce;
  }
  uVar6 = local_1c;
  param_2 = local_14;
LAB_000546ce:
  param_2[0x13] = uVar6;
  iVar5 = param_1[3];
  param_2[0x14] = param_2[0x12] + iVar5;
  return CONCAT31((int3)((uint)(param_2[0x12] + iVar5) >> 8),1);
}
