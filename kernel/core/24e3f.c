#include "functions.h"
#undef DAT_0004ee1c
#define DAT_0004ee1c (*(uint32_t *)(0x4ee1cU))
#undef DAT_0004ee28
#define DAT_0004ee28 (*(uint8_t *)(0x4ee28U))
#undef DAT_0004ee2c
#define DAT_0004ee2c (*(uint *)(0x4ee2cU))
#undef DAT_0004ee30
#define DAT_0004ee30 (*(uint *)(0x4ee30U))
#undef DAT_0004ee34
#define DAT_0004ee34 (*(void * *)(0x4ee34U))
#undef DAT_0004ee38
#define DAT_0004ee38 (*(uint *)(0x4ee38U))
#undef DAT_0004ee3c
#define DAT_0004ee3c (*(void * *)(0x4ee3cU))
#undef DAT_0004ee40
#define DAT_0004ee40 (*(void * *)(0x4ee40U))
#undef DAT_0004ee44
#define DAT_0004ee44 (*(uint32_t *)(0x4ee44U))
#undef DAT_0004ee48
#define DAT_0004ee48 (*(uint32_t *)(0x4ee48U))
#undef DAT_0004ee4c
#define DAT_0004ee4c (*(int *)(0x4ee4cU))
#undef DAT_0004ee50
#define DAT_0004ee50 (*(uint *)(0x4ee50U))
#undef DAT_0004ee54
#define DAT_0004ee54 (*(uint *)(0x4ee54U))
#undef DAT_0004ee58
#define DAT_0004ee58 (*(void * *)(0x4ee58U))
#undef DAT_0004ee5c
#define DAT_0004ee5c (*(uint *)(0x4ee5cU))
#undef DAT_0004ee60
#define DAT_0004ee60 (*(void * *)(0x4ee60U))
#undef DAT_0004ee64
#define DAT_0004ee64 (*(void * *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(uint *)(0x4ee68U))
#undef DAT_0004ee6c
#define DAT_0004ee6c (*(uint *)(0x4ee6cU))
#undef DAT_0004ee70
#define DAT_0004ee70 (*(uint32_t *)(0x4ee70U))
#undef DAT_0004ee74
#define DAT_0004ee74 (*(uint32_t *)(0x4ee74U))
#undef DAT_0004ee78
#define DAT_0004ee78 (*(uint8_t *)(0x4ee78U))
#undef DAT_0004ee7c
#define DAT_0004ee7c (*(uint32_t *)(0x4ee7cU))
#undef DAT_0004ee80
#define DAT_0004ee80 (*(uint32_t *)(0x4ee80U))
#undef DAT_0004ee84
#define DAT_0004ee84 (*(uint32_t *)(0x4ee84U))
#undef DAT_0004ee88
#define DAT_0004ee88 (*(uint32_t *)(0x4ee88U))
#undef DAT_0004ee8c
#define DAT_0004ee8c (*(uint8_t *)(0x4ee8cU))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(uint8_t *)(0x4ee90U))
#undef _DAT_0004ee8c
#define _DAT_0004ee8c (*(uint32_t *)(0x4ee8cU))
#define local_379 (*(undefined1 (*)[512])(frame + 16))
#define local_179 (*(char (*)[240])(frame + 528))
#define local_89 (*(undefined1 *)(frame + 768))
#define local_88 (*(undefined1 (*)[8])(frame + 769))
#define local_80 (*(int *)(frame + 777))
#define local_7c (*(uint *)(frame + 781))
#define local_78 (*(uint *)(frame + 785))
#define local_74 (*(int *)(frame + 789))
#define local_70 (*(uint *)(frame + 793))
#define local_6c (*(uint *)(frame + 797))
#define local_68 (*(void * *)(frame + 801))
#define local_64 (*(uint *)(frame + 805))
#define local_60 (*(void * *)(frame + 809))
#define local_5c (*(uint *)(frame + 813))
#define local_58 (*(void * *)(frame + 817))
#define local_44 (*(int *)(frame + 837))
#define local_40 (*(void * *)(frame + 841))
#define local_3c (*(void * *)(frame + 845))
#define local_38 (*(int *)(frame + 849))
#define local_34 (*(uint *)(frame + 853))
#define local_30 (*(void * *)(frame + 857))
#define local_2c (*(uint *)(frame + 861))
#define local_28 (*(void * *)(frame + 865))
#define local_24 (*(uint *)(frame + 869))
#define local_20 (*(void * *)(frame + 873))
#define local_1c (*(void * *)(frame + 877))
#define local_18 (*(void * *)(frame + 881))
#define local_14 (*(void * *)(frame + 885))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24e3f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_24e3f(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[937];

  longlong lVar1;
  uint base;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;

  local_34 = param_1;
  bVar2 = recovered_2b35c(param_1,param_2,(int)local_379,0x200);
  if (!bVar2) {
    return 0;
  }
  iVar3 = recovered_213cb((int)local_379,0x48508,8);
  if (iVar3 == 0) {
    recovered_2bce5();
    uVar8 = local_34 & 0xff;
    bVar2 = recovered_2b35c(uVar8,param_2,(int)local_88,0x44);
    if (!bVar2) {
      return 0;
    }
    local_24 = uVar8;
    iVar3 = recovered_213cb((int)local_88,0x48508,8);
    if ((local_78 == 0 || local_7c == 0) || (local_80 != 1 || iVar3 != 0)) {
      return 0;
    }
    lVar1 = ZEXT48(local_68) * (ulonglong)local_78 + (ulonglong)local_6c;
    local_3c = (void *)lVar1;
    local_1c = (void *)((ulonglong)local_7c * (ulonglong)local_78);
    local_2c = (int)local_68 + 2;
    local_28 = (void *)CONCAT31(PF_PART3(local_28, 1),(void *)0xfffffffd < local_68);
    local_20 = (void *)0x0;
    local_38 = 0;
    local_30 = local_60;
    if (0x7ffffffe < (uint)local_68 >> 1) {
      return 0;
    }
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      return 0;
    }
    if ((int)((ulonglong)local_7c * (ulonglong)local_78 >> 0x20) != 0) {
      return 0;
    }
    if ((void *)0x3ffffffd < local_68) {
      return 0;
    }
    uVar8 = (uint)((void *)0xfffffffd < local_68) << 2 | local_2c >> 0x1e;
    local_14 = (void *)(local_2c * 4);
    if (local_70 >> 0x17 < uVar8 ||
        (local_70 >> 0x17) - uVar8 < (uint)((void *)(local_70 << 9) < local_14)) {
      return 0;
    }
    if ((param_3 != 0) && (param_3 < local_3c)) {
      return 0;
    }
    pvVar4 = local_3c;
    if (local_3c < local_58) {
      pvVar4 = local_58;
    }
    pvVar7 = (void *)param_3;
    if (pvVar4 < param_3) {
      pvVar7 = pvVar4;
    }
    local_18 = (void *)param_3;
    if (param_3 == 0) {
      pvVar7 = pvVar4;
      local_18 = pvVar4;
    }
    DAT_0004ee1c = 0xffff;
    bVar2 = recovered_2a72d(local_5c);
    pvVar4 = local_14;
    if (bVar2) {
      DAT_0004ee68 = local_2c;
      DAT_0004ee64 = recovered_211fa((uint)local_14);
      if ((DAT_0004ee64 != (void *)0x0) &&
         (bVar2 = recovered_2b35c(local_24,local_74 + param_2,(int)DAT_0004ee64,(uint)pvVar4), bVar2
         )) {
        local_14 = (void *)((uint)local_30 >> 8);
        uVar8 = 2;
        do {
          DAT_0004ee6c = uVar8;
          if (DAT_0004ee68 <= DAT_0004ee6c) {
            DAT_0004ee6c = 2;
            break;
          }
          uVar8 = DAT_0004ee6c + 1;
        } while (*(int *)((int)DAT_0004ee64 + DAT_0004ee6c * 4) != 0);
        DAT_0004ee70 = 0;
        DAT_0004ee74 = 0;
        DAT_0004ee78 = 0;
        local_28 = pvVar7;
        uVar8 = recovered_2bcf3(local_24,param_2,local_6c,local_78,(uint)local_1c,(int)DAT_0004ee64,
                                local_2c,local_64,(uint)local_60,&local_20,&local_38);
        if ((char)uVar8 != '\0') {
          if (local_30 < (void *)0x1000000) {
            iVar3 = 0;
            while( true ) {
              pvVar4 = local_20;
              bVar2 = local_14 == (void *)0x0;
              local_14 = (void *)((int)local_14 + -1);
              if (bVar2) break;
              local_40 = (void *)0x0;
              local_44 = 0;
              recovered_21348((int)local_179,(int)local_20 + iVar3,0xf0);
              local_89 = 0;
              if ((local_179[0] != '\0') &&
                 ((uVar8 = recovered_2bcf3(local_24,param_2,local_6c,local_78,(uint)local_1c,
                                           (int)DAT_0004ee64,local_2c,
                                           *(uint *)((int)pvVar4 + iVar3 + 0xf0),
                                           *(uint *)((int)pvVar4 + iVar3 + 0xf4),&local_40,&local_44
                                          ), (char)uVar8 == '\0' ||
                  (uVar6 = recovered_2be23((int)local_179,(int)local_40,
                                           *(undefined4 *)((int)pvVar4 + iVar3 + 0xf4),
                                           *(undefined4 *)((int)pvVar4 + iVar3 + 0xf8),
                                           *(undefined4 *)((int)pvVar4 + iVar3 + 0xf0),local_44),
                  (char)uVar6 == '\0')))) {
                recovered_21203((int)local_40);
                goto LAB_000254b4;
              }
              iVar3 = iVar3 + 0x100;
            }
            recovered_21203((int)local_20);
            DAT_0004ee28 = (undefined1)local_34;
            DAT_0004ee2c = local_7c;
            DAT_0004ee30 = local_78;
            DAT_0004ee34 = local_1c;
            DAT_0004ee3c = local_28;
            DAT_0004ee40 = local_18;
            DAT_0004ee48 = 2;
            DAT_0004ee4c = local_74;
            DAT_0004ee50 = local_70;
            DAT_0004ee54 = local_6c;
            DAT_0004ee58 = local_68;
            DAT_0004ee5c = local_64;
            DAT_0004ee60 = local_60;
            DAT_0004ee38 = param_2;
            goto LAB_0002554d;
          }
LAB_000254b4:
          pvVar4 = local_20;
          goto LAB_000254b7;
        }
      }
    }
LAB_000254bf:
    recovered_2bce5();
  }
  else {
    recovered_2bce5();
    uVar8 = local_34 & 0xff;
    bVar2 = recovered_2b35c(uVar8,param_2,(int)local_88,0x44);
    if (!bVar2) {
      return 0;
    }
    local_24 = uVar8;
    iVar3 = recovered_213cb((int)local_88,0x48510,8);
    if ((local_78 == 0 || local_7c == 0) || (local_80 != 1 || iVar3 != 0)) {
      return 0;
    }
    local_1c = local_60;
    lVar1 = ZEXT48(local_60) * (ulonglong)local_78 + (ulonglong)local_64;
    pvVar4 = (void *)lVar1;
    local_28 = (void *)((ulonglong)local_7c * (ulonglong)local_78);
    if (0x7ffffffe < (uint)local_60 >> 1) {
      return 0;
    }
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      return 0;
    }
    if (local_70 - 0x800000 < 0xff800001) {
      return 0;
    }
    if ((void *)0x7fffff < local_68) {
      return 0;
    }
    if ((int)((ulonglong)local_7c * (ulonglong)local_78 >> 0x20) != 0) {
      return 0;
    }
    uVar8 = (int)local_68 * 0x200;
    if ((uint)local_68 >> 0x17 < local_5c >> 0x18 ||
        ((uint)local_68 >> 0x17) - (local_5c >> 0x18) < (uint)(uVar8 < local_5c << 8)) {
      return 0;
    }
    if ((param_3 != 0) && (param_3 < pvVar4)) {
      return 0;
    }
    local_14 = (void *)(local_70 << 9);
    if (pvVar4 < local_58) {
      pvVar4 = local_58;
    }
    pvVar7 = (void *)param_3;
    if (pvVar4 < param_3) {
      pvVar7 = pvVar4;
    }
    local_18 = (void *)param_3;
    if (param_3 == 0) {
      pvVar7 = pvVar4;
      local_18 = pvVar4;
    }
    local_2c = param_2;
    pvVar4 = recovered_211fa((uint)local_14);
    base = local_2c;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    local_3c = pvVar7;
    bVar2 = recovered_2b35c(local_24,local_74 + local_2c,(int)pvVar4,(uint)local_14);
    if (bVar2) {
      local_14 = pvVar4;
      pvVar4 = recovered_211fa(uVar8 + (uVar8 == 0));
      if (pvVar4 != (void *)0x0) {
        if ((uVar8 == 0) ||
           (bVar2 = recovered_2b35c(local_24,local_6c + base,(int)pvVar4,uVar8), bVar2)) {
          DAT_0004ee1c = 0x100;
          bVar2 = recovered_2a72d(local_5c);
          if (bVar2) {
            local_1c = (void *)((int)local_1c + 2);
            local_30 = pvVar4;
            for (uVar8 = 0; uVar8 < local_5c; uVar8 = uVar8 + 1) {
              local_20 = (void *)0x0;
              local_38 = 0;
              recovered_21348((int)local_179,(int)pvVar4,0xf0);
              local_89 = 0;
              if ((local_179[0] != '\0') &&
                 ((uVar5 = recovered_2bcf3(local_24,base,local_64,local_78,(uint)local_28,
                                           (int)local_14,(uint)local_1c,
                                           *(uint *)((int)pvVar4 + 0xf0),
                                           *(uint *)((int)pvVar4 + 0xf4),&local_20,&local_38),
                  (char)uVar5 == '\0' ||
                  (uVar6 = recovered_2be23((int)local_179,(int)local_20,
                                           *(undefined4 *)((int)pvVar4 + 0xf4),
                                           *(undefined4 *)((int)pvVar4 + 0xf8),
                                           *(undefined4 *)((int)pvVar4 + 0xf0),local_38),
                  (char)uVar6 == '\0')))) {
                recovered_21203((int)local_20);
                pvVar4 = local_30;
                goto LAB_0002535b;
              }
              pvVar4 = (void *)((int)pvVar4 + 0x100);
            }
            recovered_21203((int)local_30);
            recovered_21203((int)local_14);
            DAT_0004ee28 = (undefined1)local_34;
            DAT_0004ee2c = local_7c;
            DAT_0004ee30 = local_78;
            DAT_0004ee34 = local_28;
            DAT_0004ee38 = base;
            DAT_0004ee3c = local_3c;
            DAT_0004ee40 = local_18;
            DAT_0004ee48 = 1;
            DAT_0004ee4c = local_74;
            DAT_0004ee50 = local_70;
            DAT_0004ee54 = local_64;
            DAT_0004ee58 = local_60;
LAB_0002554d:
            DAT_0004ee44 = param_4;
            DAT_0004ee7c = 0;
            DAT_0004ee80 = 0;
            DAT_0004ee84 = 0;
            DAT_0004ee88 = 0;
            _DAT_0004ee8c = 0;
            DAT_0004ee90 = 1;
            return CONCAT31((int3)((uint)local_60 >> 8),1);
          }
LAB_0002535b:
          recovered_21203((int)pvVar4);
          pvVar4 = local_14;
LAB_000254b7:
          recovered_21203((int)pvVar4);
          goto LAB_000254bf;
        }
        recovered_21203((int)pvVar4);
      }
      pvVar4 = local_14;
    }
    recovered_21203((int)pvVar4);
  }
  return 0;
}
