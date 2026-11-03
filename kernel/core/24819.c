#include "functions.h"
#undef DAT_00047e08
#define DAT_00047e08 (*(uint32_t *)(0x47e08U))
#undef DAT_00047e14
#define DAT_00047e14 (*(uint8_t *)(0x47e14U))
#undef DAT_00047e18
#define DAT_00047e18 (*(uint *)(0x47e18U))
#undef DAT_00047e1c
#define DAT_00047e1c (*(uint *)(0x47e1cU))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e24
#define DAT_00047e24 (*(uint32_t *)(0x47e24U))
#undef DAT_00047e28
#define DAT_00047e28 (*(void * *)(0x47e28U))
#undef DAT_00047e2c
#define DAT_00047e2c (*(void * *)(0x47e2cU))
#undef DAT_00047e30
#define DAT_00047e30 (*(uint32_t *)(0x47e30U))
#undef DAT_00047e34
#define DAT_00047e34 (*(uint32_t *)(0x47e34U))
#undef DAT_00047e38
#define DAT_00047e38 (*(void * *)(0x47e38U))
#undef DAT_00047e3c
#define DAT_00047e3c (*(uint32_t *)(0x47e3cU))
#undef DAT_00047e40
#define DAT_00047e40 (*(void * *)(0x47e40U))
#undef DAT_00047e44
#define DAT_00047e44 (*(void * *)(0x47e44U))
#undef DAT_00047e48
#define DAT_00047e48 (*(void * *)(0x47e48U))
#undef DAT_00047e4c
#define DAT_00047e4c (*(void * *)(0x47e4cU))
#undef DAT_00047e50
#define DAT_00047e50 (*(void * *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(uint *)(0x47e54U))
#undef DAT_00047e58
#define DAT_00047e58 (*(uint *)(0x47e58U))
#undef DAT_00047e5c
#define DAT_00047e5c (*(uint32_t *)(0x47e5cU))
#undef DAT_00047e60
#define DAT_00047e60 (*(uint32_t *)(0x47e60U))
#undef DAT_00047e64
#define DAT_00047e64 (*(uint8_t *)(0x47e64U))
#undef DAT_00047e68
#define DAT_00047e68 (*(uint32_t *)(0x47e68U))
#undef DAT_00047e6c
#define DAT_00047e6c (*(uint32_t *)(0x47e6cU))
#undef DAT_00047e70
#define DAT_00047e70 (*(uint32_t *)(0x47e70U))
#undef DAT_00047e74
#define DAT_00047e74 (*(uint32_t *)(0x47e74U))
#undef DAT_00047e78
#define DAT_00047e78 (*(uint8_t *)(0x47e78U))
#undef DAT_00047e7c
#define DAT_00047e7c (*(uint8_t *)(0x47e7cU))
#undef _DAT_00047e78
#define _DAT_00047e78 (*(uint32_t *)(0x47e78U))
#define local_18 (*(uint *)(frame + 889))
#define local_14 (*(void * *)(frame + 893))
#define local_381 (*(undefined1 (*)[512])(frame + 16))
#define local_181 (*(char (*)[240])(frame + 528))
#define local_91 (*(undefined1 *)(frame + 768))
#define local_90 (*(uint *)(frame + 769))
#define local_8c (*(undefined1 (*)[8])(frame + 773))
#define local_84 (*(int *)(frame + 781))
#define local_80 (*(uint *)(frame + 785))
#define local_7c (*(uint *)(frame + 789))
#define local_78 (*(void * *)(frame + 793))
#define local_74 (*(undefined4 *)(frame + 797))
#define local_70 (*(void * *)(frame + 801))
#define local_6c (*(void * *)(frame + 805))
#define local_68 (*(void * *)(frame + 809))
#define local_64 (*(void * *)(frame + 813))
#define local_60 (*(uint *)(frame + 817))
#define local_5c (*(void * *)(frame + 821))
#define local_48 (*(int *)(frame + 841))
#define local_44 (*(uint *)(frame + 845))
#define local_40 (*(int *)(frame + 849))
#define local_3c (*(void * *)(frame + 853))
#define local_38 (*(int *)(frame + 857))
#define local_34 (*(undefined4 *)(frame + 861))
#define local_30 (*(void * *)(frame + 865))
#define local_2c (*(void * *)(frame + 869))
#define local_28 (*(void * *)(frame + 873))
#define local_24 (*(int *)(frame + 877))
#define local_20 (*(void * *)(frame + 881))
#define local_1c (*(uint *)(frame + 885))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24819
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_24819(uint param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  unsigned char frame[945];

  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  void *pvVar8;

  uVar4 = recovered_2a1fc(param_1,param_2,(int)local_381,0x200);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  local_34 = param_2;
  iVar5 = recovered_20fc5((int)local_381,0x42600,8);
  if (iVar5 == 0) {
    recovered_2a945();
    uVar4 = recovered_2a1fc(param_1 & 0xff,local_34,(int)local_8c,0x44);
    if ((char)uVar4 == '\0') {
      return 0;
    }
    iVar5 = recovered_20fc5((int)local_8c,0x42600,8);
    local_1c = local_80;
    if ((local_7c == 0 || local_80 == 0) || (local_84 != 1 || iVar5 != 0)) {
      return 0;
    }
    local_2c = local_78;
    local_24 = 0;
    local_18 = local_7c;
    local_38 = 0;
    pvVar6 = (void *)((int)local_6c * local_7c + (int)local_70);
    local_20 = local_64;
    if ((param_3 != (void *)0x0) && (param_3 < pvVar6)) {
      return 0;
    }
    local_30 = local_70;
    uVar7 = (int)pvVar6 * local_80;
    if (pvVar6 < local_5c) {
      pvVar6 = local_5c;
    }
    local_28 = param_3;
    if (pvVar6 < param_3) {
      local_28 = pvVar6;
    }
    local_3c = param_3;
    if (param_3 == (void *)0x0) {
      local_28 = pvVar6;
      local_3c = pvVar6;
    }
    pvVar6 = recovered_20df4(uVar7);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    local_44 = uVar7;
    uVar4 = recovered_2a1fc(param_1 & 0xff,local_34,(int)pvVar6,uVar7);
    if ((char)uVar4 == '\0') goto LAB_00024bef;
    DAT_00047e08 = 0xffff;
    local_14 = pvVar6;
    bVar3 = recovered_29650(local_60);
    if (bVar3) {
      DAT_00047e54 = (int)local_6c + 2;
      DAT_00047e50 = recovered_20df4((int)local_6c * 4 + 8);
      if (DAT_00047e50 != (void *)0x0) {
        local_18 = local_18 * local_1c;
        local_30 = (void *)((int)local_30 << 9);
        local_1c = (uint)local_20 >> 8;
        local_2c = (void *)((int)local_14 + (int)local_2c * 0x200);
        recovered_20f42((int)DAT_00047e50,(int)local_2c,DAT_00047e54 << 2);
        pvVar6 = local_14;
        uVar7 = 2;
        do {
          DAT_00047e58 = uVar7;
          if (DAT_00047e54 <= DAT_00047e58) {
            DAT_00047e58 = 2;
            break;
          }
          uVar7 = DAT_00047e58 + 1;
        } while (*(int *)((int)DAT_00047e50 + DAT_00047e58 * 4) != 0);
        DAT_00047e5c = 0;
        DAT_00047e60 = 0;
        DAT_00047e64 = 0;
        bVar3 = recovered_2a953((int)local_14,local_44,(int)local_30,local_18,(int)local_2c,
                                (int)local_6c + 2,(uint)local_68,(uint)local_64,&local_24,&local_38)
        ;
        if (!bVar3) goto LAB_00024d32;
        if (local_20 < (void *)0x1000000) {
          iVar5 = 0;
          while( true ) {
            iVar2 = local_24;
            if (local_1c == 0) break;
            local_40 = 0;
            local_48 = 0;
            local_1c = local_1c - 1;
            recovered_20f42((int)local_181,local_24 + iVar5,0xf0);
            local_91 = 0;
            if (local_181[0] != '\0') {
              local_20 = (void *)((int)local_6c + 2);
              bVar3 = recovered_2a953((int)local_14,local_44,(int)local_30,local_18,(int)local_2c,
                                      (uint)local_20,*(uint *)(iVar2 + 0xf0 + iVar5),
                                      *(uint *)(iVar2 + 0xf4 + iVar5),&local_40,&local_48);
              if ((!bVar3) ||
                 (uVar4 = recovered_2aa74((int)local_181,local_40,
                                          *(undefined4 *)(iVar2 + 0xf4 + iVar5),
                                          *(undefined4 *)(iVar2 + 0xf8 + iVar5),
                                          *(undefined4 *)(iVar2 + 0xf0 + iVar5),local_48),
                 (char)uVar4 == '\0')) {
                recovered_20dfd(local_40);
                goto LAB_00024e14;
              }
            }
            iVar5 = iVar5 + 0x100;
          }
          recovered_20dfd(local_24);
          recovered_20dfd((int)local_14);
          DAT_00047e14 = (undefined1)param_1;
          DAT_00047e18 = local_80;
          DAT_00047e1c = local_7c;
          DAT_00047e20 = local_18;
          DAT_00047e24 = local_34;
          DAT_00047e28 = local_28;
          DAT_00047e2c = local_3c;
          DAT_00047e34 = 2;
          DAT_00047e38 = local_78;
          DAT_00047e3c = local_74;
          DAT_00047e40 = local_70;
          DAT_00047e44 = local_6c;
          DAT_00047e48 = local_68;
          DAT_00047e4c = local_64;
          goto LAB_00024c9e;
        }
LAB_00024e14:
        recovered_20dfd(local_24);
      }
    }
    pvVar6 = local_14;
  }
  else {
    recovered_2a945();
    uVar4 = recovered_2a1fc(param_1 & 0xff,local_34,(int)local_8c,0x44);
    if ((char)uVar4 == '\0') {
      return 0;
    }
    iVar5 = recovered_20fc5((int)local_8c,0x42608,8);
    local_1c = local_80;
    if ((local_7c == 0 || local_80 == 0) || (local_84 != 1 || iVar5 != 0)) {
      return 0;
    }
    local_18 = local_7c;
    local_2c = local_68;
    pvVar6 = (void *)((int)local_64 * local_7c + (int)local_68);
    local_20 = local_78;
    if ((param_3 != (void *)0x0) && (param_3 < pvVar6)) {
      return 0;
    }
    local_28 = local_70;
    local_30 = (void *)((int)pvVar6 * local_80);
    if (pvVar6 < local_5c) {
      pvVar6 = local_5c;
    }
    local_14 = param_3;
    if (pvVar6 < param_3) {
      local_14 = pvVar6;
    }
    if (param_3 == (void *)0x0) {
      local_14 = pvVar6;
      param_3 = pvVar6;
    }
    pvVar6 = recovered_20df4((uint)local_30);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    local_3c = param_3;
    uVar4 = recovered_2a1fc(param_1 & 0xff,local_34,(int)pvVar6,(uint)local_30);
    if ((char)uVar4 == '\0') {
LAB_00024bef:
      recovered_20dfd((int)pvVar6);
      return 0;
    }
    DAT_00047e08 = 0x100;
    bVar3 = recovered_29650(local_60);
    if (bVar3) {
      local_18 = local_18 * local_1c;
      local_2c = (void *)((int)local_2c << 9);
      local_20 = (void *)((int)local_20 * 0x200 + (int)pvVar6);
      pvVar8 = (void *)((int)local_28 * 0x200 + (int)pvVar6);
      local_90 = param_1;
      local_28 = pvVar6;
      for (uVar7 = 0; uVar7 < local_60; uVar7 = uVar7 + 1) {
        local_24 = 0;
        local_38 = 0;
        recovered_20f42((int)local_181,(int)pvVar8,0xf0);
        uVar1 = local_90;
        local_91 = 0;
        if (local_181[0] != '\0') {
          local_1c = uVar7;
          bVar3 = recovered_2a953((int)local_28,(uint)local_30,(int)local_2c,local_18,(int)local_20,
                                  (int)local_64 + 2,*(uint *)((int)pvVar8 + 0xf0),
                                  *(uint *)((int)pvVar8 + 0xf4),&local_24,&local_38);
          if (bVar3) {
            uVar4 = recovered_2aa74((int)local_181,local_24,*(undefined4 *)((int)pvVar8 + 0xf4),
                                    *(undefined4 *)((int)pvVar8 + 0xf8),
                                    *(undefined4 *)((int)pvVar8 + 0xf0),local_38);
            param_1 = uVar1;
            if ((char)uVar4 != '\0') goto LAB_00024a44;
          }
          recovered_20dfd(local_24);
          pvVar6 = local_28;
          goto LAB_00024d32;
        }
LAB_00024a44:
        pvVar8 = (void *)((int)pvVar8 + 0x100);
      }
      recovered_20dfd((int)local_28);
      DAT_00047e14 = (undefined1)param_1;
      DAT_00047e18 = local_80;
      DAT_00047e1c = local_7c;
      DAT_00047e20 = local_18;
      DAT_00047e24 = local_34;
      DAT_00047e28 = local_14;
      DAT_00047e2c = local_3c;
      DAT_00047e34 = 1;
      DAT_00047e38 = local_78;
      DAT_00047e3c = local_74;
      DAT_00047e40 = local_68;
      DAT_00047e44 = local_64;
LAB_00024c9e:
      DAT_00047e30 = param_4;
      DAT_00047e68 = 0;
      DAT_00047e6c = 0;
      DAT_00047e70 = 0;
      DAT_00047e74 = 0;
      _DAT_00047e78 = 0;
      DAT_00047e7c = 1;
      return CONCAT31((int3)((uint)local_64 >> 8),1);
    }
  }
LAB_00024d32:
  recovered_20dfd((int)pvVar6);
  recovered_2a945();
  return 0;
}
