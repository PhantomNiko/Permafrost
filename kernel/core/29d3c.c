#include "functions.h"
#define local_1c (*(uint *)(frame + 1084))
#define local_18 (*(void * *)(frame + 1088))
#define local_14 (*(uint *)(frame + 1092))
#define local_448 (*(undefined1 (*)[450])(frame + 16))
#define local_286 (*(undefined1 (*)[4])(frame + 466))
#define local_282 (*(uint (*)[14])(frame + 470))
#define local_248 (*(undefined1 (*)[12])(frame + 528))
#define local_23c (*(int *)(frame + 540))
#define local_230 (*(undefined8 *)(frame + 552))
#define local_228 (*(undefined8 *)(frame + 560))
#define local_220 (*(undefined8 *)(frame + 568))
#define local_218 (*(undefined8 *)(frame + 576))
#define local_210 (*(undefined1 (*)[16])(frame + 584))
#define local_200 (*(undefined8 *)(frame + 600))
#define local_1f8 (*(uint *)(frame + 608))
#define local_1f4 (*(uint *)(frame + 612))
#define local_48 (*(uint *)(frame + 1040))
#define local_44 (*(uint *)(frame + 1044))
#define local_40 (*(uint *)(frame + 1048))
#define local_3c (*(uint *)(frame + 1052))
#define local_38 (*(uint *)(frame + 1056))
#define local_34 (*(void * *)(frame + 1060))
#define local_30 (*(uint *)(frame + 1064))
#define local_2c (*(uint *)(frame + 1068))
#define local_28 (*(uint *)(frame + 1072))
#define local_24 (*(uint *)(frame + 1076))
#define local_20 (*(uint *)(frame + 1080))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29d3c
 */

undefined4 recovered_29d3c(uint param_1,uint param_2,undefined4 *param_3,char param_4)

{
  unsigned char frame[1144];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;

  if (param_3 != (undefined4 *)0x0) {
    recovered_20fa9((int)param_3,0,0x38);
  }
  if (param_2 != 0) {
    local_38 = param_1 & 0xff;
    uVar2 = recovered_29b1d(local_38,0,(int)local_448,0x200);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    if ((param_3 != (undefined4 *)0x0) &&
       ((bVar1 = recovered_2a3f0((int)local_448), bVar1 ||
        (uVar2 = recovered_2a437((int)local_448), (char)uVar2 != '\0')))) {
      recovered_20fa9((int)param_3,0,0x38);
      iVar5 = 1;
      *param_3 = 1;
      param_3[1] = 1;
      param_3[2] = param_2 - 1;
      param_3[3] = 4;
      if (param_4 == '\0') {
        return 1;
      }
      puVar7 = local_282 + 1;
      for (; iVar5 != 5; iVar5 = iVar5 + 1) {
        if ((char)puVar7[-2] != -0x12) {
          if (puVar7[-1] != 0 && (*puVar7 != 0 && (char)puVar7[-2] != '\0')) {
            recovered_29cae((byte)local_38,puVar7[-1],*puVar7,iVar5,0,1);
          }
        }
        puVar7 = puVar7 + 4;
      }
      return 1;
    }
    if (param_2 == 1) {
      return 1;
    }
    uVar2 = recovered_29b1d(local_38,1,(int)local_248,0x200);
    if (param_3 == (undefined4 *)0x0) {
      return 1;
    }
    if ((char)uVar2 == '\0') {
      return 1;
    }
    iVar5 = recovered_20fc5((int)local_248,0x3fd22,8);
    if (iVar5 != 0) {
      return 1;
    }
    uVar9 = recovered_2a478(&local_228);
    local_18 = (void *)((ulonglong)uVar9 >> 0x20);
    local_20 = (uint)uVar9;
    uVar9 = recovered_2a478(&local_220);
    local_34 = (void *)((ulonglong)uVar9 >> 0x20);
    local_24 = (uint)uVar9;
    uVar9 = recovered_2a478(&local_218);
    local_30 = (uint)((ulonglong)uVar9 >> 0x20);
    local_28 = (uint)uVar9;
    uVar9 = recovered_2a478(&local_200);
    local_1c = (uint)((ulonglong)uVar9 >> 0x20);
    local_3c = (uint)uVar9;
    if (0x1a4 < local_23c - 0x5cU) {
      return 1;
    }
    if (local_1f8 == 0) {
      return 1;
    }
    if (local_1f4 < 0x80) {
      return 1;
    }
    local_40 = local_1f8;
    if ((local_1f4 & 7) != 0) {
      return 1;
    }
    local_44 = local_1f4;
    lVar10 = recovered_2a478(&local_230);
    if (lVar10 != 1) {
      return 1;
    }
    if ((local_30 < local_34 || local_30 - (int)local_34 < (uint)(local_28 < local_24)) ||
        (uint)(local_20 < param_2) <= local_18) {
      return 1;
    }
    if (local_1c < (local_3c < 2) || (local_28 < param_2) <= local_30) {
      return 1;
    }
    lVar10 = (ulonglong)local_44 * (ulonglong)local_40;
    uVar4 = (uint)((ulonglong)lVar10 >> 0x20);
    if (0x1000 < local_40 ||
        (param_2 >> 0x17 < uVar4 || (param_2 >> 0x17) - uVar4 < (uint)(param_2 << 9 < (uint)lVar10))
       ) {
      return 1;
    }
    uVar4 = (uint)((ulonglong)(lVar10 + 0x1ff) >> 0x20);
    local_48 = uVar4 >> 9;
    local_14 = uVar4 * 0x800000 | (uint)(lVar10 + 0x1ff) >> 9;
    local_2c = local_14 + local_3c;
    uVar4 = local_1c + local_48 + (uint)CARRY4(local_14,local_3c);
    bVar1 = uVar4 != 0 || -uVar4 < (uint)(param_2 < local_2c);
    local_1c = CONCAT31((int3)(-uVar4 - (uint)(param_2 < local_2c) >> 8),bVar1);
    bVar8 = local_34 < uVar4;
    uVar4 = (int)local_34 - uVar4;
    local_34 = (void *)(uVar4 - (local_24 < local_2c));
    if ((bVar8 || uVar4 < (local_24 < local_2c)) ||
        (local_18 <= local_48 && (uint)(local_14 < local_20) <= local_48 - (int)local_18 || bVar1))
    {
      return 1;
    }
    uVar6 = local_20 - local_14;
    uVar3 = ((int)local_18 - local_48) - (uint)(local_20 < local_14);
    uVar4 = (uint)(local_28 < uVar6);
    bVar1 = uVar3 <= local_30;
    uVar3 = local_30 - uVar3;
    local_30 = uVar3 - uVar4;
    if (bVar1 && uVar4 <= uVar3) {
      return 1;
    }
    recovered_20fa9((int)param_3,0,0x38);
    *param_3 = 2;
    param_3[1] = local_24;
    param_3[2] = local_28;
    param_3[3] = local_40;
    param_3[4] = local_3c;
    param_3[5] = local_44;
    param_3[6] = local_14;
    param_3[7] = uVar6;
    param_3[8] = 1;
    param_3[9] = local_20;
    recovered_20f42((int)(param_3 + 10),(int)local_210,0x10);
    if (param_4 == '\0') {
      return 1;
    }
    iVar5 = param_3[6];
    local_18 = recovered_20df4(iVar5 << 9);
    if (local_18 != (void *)0x0) {
      uVar2 = recovered_29b1d(local_38,param_3[4],(int)local_18,iVar5 << 9);
      if ((char)uVar2 != '\0') {
        uVar4 = 0;
        while (uVar4 < (uint)param_3[3]) {
          iVar5 = param_3[5] * uVar4;
          local_34 = (void *)((int)local_18 + iVar5);
          local_24 = uVar4;
          uVar9 = recovered_2a478((undefined8 *)((int)local_18 + iVar5 + 0x20));
          local_28 = (uint)((ulonglong)uVar9 >> 0x20);
          local_20 = (uint)uVar9;
          uVar9 = recovered_2a478((undefined8 *)((int)local_18 + iVar5 + 0x28));
          local_30 = (uint)((ulonglong)uVar9 >> 0x20);
          uVar4 = (uint)uVar9;
          iVar5 = recovered_20fc5((int)local_34,0x3f1a6,0x10);
          if ((iVar5 != 0) &&
             (uVar3 = (local_28 - 1) + (uint)(local_20 != 0),
             local_30 < (uVar4 < param_2) &&
             (uVar3 < local_30 || uVar3 - local_30 < (uint)(local_20 - 1 < uVar4)))) {
            recovered_29cae((byte)local_38,local_20,(uVar4 - local_20) + 1,local_24 + 1,0,2);
          }
          uVar4 = local_24 + 1;
        }
      }
      recovered_20dfd((int)local_18);
      return uVar2;
    }
  }
  return 0;
}
