#include "functions.h"
#undef DAT_0004808c
#define DAT_0004808c (*(int *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
#define local_2c4 (*(undefined1 (*)[512])(frame + 16))
#define local_c4 (*(undefined1 (*)[8])(frame + 528))
#define local_bc (*(int *)(frame + 536))
#define local_b8 (*(int *)(frame + 540))
#define local_b4 (*(int *)(frame + 544))
#define local_a0 (*(int *)(frame + 564))
#define local_9c (*(int *)(frame + 568))
#define local_80 (*(undefined1 (*)[8])(frame + 596))
#define local_78 (*(int *)(frame + 604))
#define local_74 (*(int *)(frame + 608))
#define local_70 (*(int *)(frame + 612))
#define local_50 (*(uint *)(frame + 644))
#define local_3c (*(uint *)(frame + 664))
#define local_38 (*(int *)(frame + 668))
#define local_34 (*(uint *)(frame + 672))
#define local_30 (*(uint *)(frame + 676))
#define local_2c (*(uint *)(frame + 680))
#define local_28 (*(int *)(frame + 684))
#define local_24 (*(uint *)(frame + 688))
#define local_20 (*(int * *)(frame + 692))
#define local_1c (*(uint *)(frame + 696))
#define local_18 (*(uint *)(frame + 700))
#define local_14 (*(int * *)(frame + 704))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x406ce
 */

undefined4 recovered_406ce(int *param_1,int *param_2)

{
  unsigned char frame[756];

  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (((param_1[5] < 1) || (puVar2 = recovered_4101a((char)param_1[1]), puVar2 == (undefined4 *)0x0)
      ) || (puVar2[10] == 0)) {
    return 0;
  }
  recovered_20fa9((int)param_2,0,0x54);
  uVar3 = recovered_2c1c4((uint)*(byte *)(puVar2 + 1),puVar2[3],param_2,0);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  local_38 = *param_2;
  if (local_38 != param_1[10]) {
    return 0;
  }
  local_18 = param_1[2];
  param_2[0xe] = local_18;
  local_28 = param_1[3];
  param_2[0x10] = local_28;
  local_24 = (local_18 - 1) + local_28;
  param_2[0xf] = local_24;
  local_2c = param_2[1];
  local_30 = param_2[2];
  piVar5 = &DAT_00048090;
  uVar7 = local_2c;
  iVar6 = DAT_0004808c;
  local_1c = local_30;
  while (bVar8 = iVar6 != 0, iVar6 = iVar6 + -1, bVar8) {
    if (((*piVar5 != *param_1) && ((char)piVar5[1] == (char)param_1[1])) &&
       ((0 < piVar5[5] && (piVar5[10] == local_38)))) {
      uVar1 = piVar5[2];
      local_34 = (piVar5[3] + uVar1) - 1;
      uVar4 = piVar5[3] + uVar1;
      if (uVar4 <= uVar7) {
        uVar4 = uVar7;
      }
      if (local_18 <= local_34) {
        uVar4 = uVar7;
      }
      if (local_24 < uVar1) {
        if (uVar1 - 1 < local_1c) {
          local_1c = uVar1 - 1;
        }
      }
      uVar7 = uVar4;
    }
    piVar5 = piVar5 + 0xd;
  }
  if (uVar7 <= local_18 && local_18 - uVar7 != 0) {
    param_2[0x11] = local_18 - uVar7;
  }
  if (local_30 < local_24 || local_18 < local_2c) {
    return 0;
  }
  if (local_24 <= local_1c && local_1c - local_24 != 0) {
    param_2[0x12] = local_1c - local_24;
  }
  local_3c = 0;
  uVar7 = 1;
  if (local_28 == 0) goto LAB_000408b7;
  local_20 = param_1;
  local_14 = param_2;
  uVar3 = recovered_2a1fc((uint)*(byte *)(param_1 + 1),local_18,(int)local_2c4,0x200);
  if ((char)uVar3 == '\0') goto LAB_000408b7;
  recovered_20f42((int)local_c4,(int)local_2c4,0x44);
  iVar6 = recovered_20fc5((int)local_c4,0x42608,8);
  if (local_b4 == 0 || (local_b8 != 0x200 || (local_bc != 1 || iVar6 != 0))) {
    recovered_20f42((int)local_80,(int)local_2c4,0x44);
    iVar6 = recovered_20fc5((int)local_80,0x42600,8);
    uVar7 = 1;
    if (((iVar6 == 0) && (local_78 == 1)) &&
       ((local_74 == 0x200 && (uVar1 = local_50, local_70 != 0)))) goto joined_r0x00040918;
    iVar6 = recovered_2c8cc((int)local_2c4,param_1[3],(undefined4 *)0x0,(uint *)0x0,(uint *)0x0,
                            (uint *)0x0,(uint *)0x0,(uint *)0x0,(uint *)0x0,&local_3c,(uint *)0x0);
    param_2 = local_14;
    if (local_3c == 0 || iVar6 == 0) goto LAB_000408b7;
  }
  else {
    uVar1 = local_b4 * local_9c + local_a0;
    local_14 = param_2;
joined_r0x00040918:
    local_3c = uVar1;
    uVar7 = 1;
    param_2 = local_14;
    if (local_3c == 0) goto LAB_000408b7;
  }
  uVar7 = local_3c;
  param_2 = local_14;
LAB_000408b7:
  param_2[0x13] = uVar7;
  iVar6 = param_1[3];
  param_2[0x14] = param_2[0x12] + iVar6;
  return CONCAT31((int3)((uint)(param_2[0x12] + iVar6) >> 8),1);
}
