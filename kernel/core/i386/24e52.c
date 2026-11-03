#include "functions.h"
#undef DAT_0004ce1c
#define DAT_0004ce1c (*(uint32_t *)(0x4ce1cU))
#undef DAT_0004ce28
#define DAT_0004ce28 (*(uint8_t *)(0x4ce28U))
#undef DAT_0004ce2c
#define DAT_0004ce2c (*(uint *)(0x4ce2cU))
#undef DAT_0004ce30
#define DAT_0004ce30 (*(uint *)(0x4ce30U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(void * *)(0x4ce34U))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(uint *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(void * *)(0x4ce3cU))
#undef DAT_0004ce40
#define DAT_0004ce40 (*(void * *)(0x4ce40U))
#undef DAT_0004ce44
#define DAT_0004ce44 (*(uint32_t *)(0x4ce44U))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(uint32_t *)(0x4ce48U))
#undef DAT_0004ce4c
#define DAT_0004ce4c (*(int *)(0x4ce4cU))
#undef DAT_0004ce50
#define DAT_0004ce50 (*(uint *)(0x4ce50U))
#undef DAT_0004ce54
#define DAT_0004ce54 (*(uint *)(0x4ce54U))
#undef DAT_0004ce58
#define DAT_0004ce58 (*(void * *)(0x4ce58U))
#undef DAT_0004ce5c
#define DAT_0004ce5c (*(uint *)(0x4ce5cU))
#undef DAT_0004ce60
#define DAT_0004ce60 (*(void * *)(0x4ce60U))
#undef DAT_0004ce64
#define DAT_0004ce64 (*(void * *)(0x4ce64U))
#undef DAT_0004ce68
#define DAT_0004ce68 (*(uint *)(0x4ce68U))
#undef DAT_0004ce6c
#define DAT_0004ce6c (*(uint *)(0x4ce6cU))
#undef DAT_0004ce70
#define DAT_0004ce70 (*(uint32_t *)(0x4ce70U))
#undef DAT_0004ce74
#define DAT_0004ce74 (*(uint32_t *)(0x4ce74U))
#undef DAT_0004ce78
#define DAT_0004ce78 (*(uint8_t *)(0x4ce78U))
#undef DAT_0004ce7c
#define DAT_0004ce7c (*(uint32_t *)(0x4ce7cU))
#undef DAT_0004ce80
#define DAT_0004ce80 (*(uint32_t *)(0x4ce80U))
#undef DAT_0004ce84
#define DAT_0004ce84 (*(uint32_t *)(0x4ce84U))
#undef DAT_0004ce88
#define DAT_0004ce88 (*(uint32_t *)(0x4ce88U))
#undef DAT_0004ce8c
#define DAT_0004ce8c (*(uint8_t *)(0x4ce8cU))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(uint8_t *)(0x4ce90U))
#undef _DAT_0004ce8c
#define _DAT_0004ce8c (*(uint32_t *)(0x4ce8cU))
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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24e52
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_24e52(uint param_1,uint param_2,uint param_3,undefined4 param_4)

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
  bVar2 = recovered_2b362(param_1,param_2,(int)local_379,0x200);
  if (!bVar2) {
    return 0;
  }
  iVar3 = recovered_213cb((int)local_379,0x46250,8);
  if (iVar3 == 0) {
    recovered_2bceb();
    uVar8 = local_34 & 0xff;
    bVar2 = recovered_2b362(uVar8,param_2,(int)local_88,0x44);
    if (!bVar2) {
      return 0;
    }
    local_24 = uVar8;
    iVar3 = recovered_213cb((int)local_88,0x46250,8);
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
    DAT_0004ce1c = 0xffff;
    bVar2 = recovered_2a733(local_5c);
    pvVar4 = local_14;
    if (bVar2) {
      DAT_0004ce68 = local_2c;
      DAT_0004ce64 = recovered_211fa((uint)local_14);
      if ((DAT_0004ce64 != (void *)0x0) &&
         (bVar2 = recovered_2b362(local_24,local_74 + param_2,(int)DAT_0004ce64,(uint)pvVar4), bVar2
         )) {
        local_14 = (void *)((uint)local_30 >> 8);
        uVar8 = 2;
        do {
          DAT_0004ce6c = uVar8;
          if (DAT_0004ce68 <= DAT_0004ce6c) {
            DAT_0004ce6c = 2;
            break;
          }
          uVar8 = DAT_0004ce6c + 1;
        } while (*(int *)((int)DAT_0004ce64 + DAT_0004ce6c * 4) != 0);
        DAT_0004ce70 = 0;
        DAT_0004ce74 = 0;
        DAT_0004ce78 = 0;
        local_28 = pvVar7;
        uVar8 = recovered_2bcf9(local_24,param_2,local_6c,local_78,(uint)local_1c,(int)DAT_0004ce64,
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
                 ((uVar8 = recovered_2bcf9(local_24,param_2,local_6c,local_78,(uint)local_1c,
                                           (int)DAT_0004ce64,local_2c,
                                           *(uint *)((int)pvVar4 + iVar3 + 0xf0),
                                           *(uint *)((int)pvVar4 + iVar3 + 0xf4),&local_40,&local_44
                                          ), (char)uVar8 == '\0' ||
                  (uVar6 = recovered_2be29((int)local_179,(int)local_40,
                                           *(undefined4 *)((int)pvVar4 + iVar3 + 0xf4),
                                           *(undefined4 *)((int)pvVar4 + iVar3 + 0xf8),
                                           *(undefined4 *)((int)pvVar4 + iVar3 + 0xf0),local_44),
                  (char)uVar6 == '\0')))) {
                recovered_21203((int)local_40);
                goto LAB_000254c7;
              }
              iVar3 = iVar3 + 0x100;
            }
            recovered_21203((int)local_20);
            DAT_0004ce28 = (undefined1)local_34;
            DAT_0004ce2c = local_7c;
            DAT_0004ce30 = local_78;
            DAT_0004ce34 = local_1c;
            DAT_0004ce3c = local_28;
            DAT_0004ce40 = local_18;
            DAT_0004ce48 = 2;
            DAT_0004ce4c = local_74;
            DAT_0004ce50 = local_70;
            DAT_0004ce54 = local_6c;
            DAT_0004ce58 = local_68;
            DAT_0004ce5c = local_64;
            DAT_0004ce60 = local_60;
            DAT_0004ce38 = param_2;
            goto LAB_00025560;
          }
LAB_000254c7:
          pvVar4 = local_20;
          goto LAB_000254ca;
        }
      }
    }
LAB_000254d2:
    recovered_2bceb();
  }
  else {
    recovered_2bceb();
    uVar8 = local_34 & 0xff;
    bVar2 = recovered_2b362(uVar8,param_2,(int)local_88,0x44);
    if (!bVar2) {
      return 0;
    }
    local_24 = uVar8;
    iVar3 = recovered_213cb((int)local_88,0x46258,8);
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
    bVar2 = recovered_2b362(local_24,local_74 + local_2c,(int)pvVar4,(uint)local_14);
    if (bVar2) {
      local_14 = pvVar4;
      pvVar4 = recovered_211fa(uVar8 + (uVar8 == 0));
      if (pvVar4 != (void *)0x0) {
        if ((uVar8 == 0) ||
           (bVar2 = recovered_2b362(local_24,local_6c + base,(int)pvVar4,uVar8), bVar2)) {
          DAT_0004ce1c = 0x100;
          bVar2 = recovered_2a733(local_5c);
          if (bVar2) {
            local_1c = (void *)((int)local_1c + 2);
            local_30 = pvVar4;
            for (uVar8 = 0; uVar8 < local_5c; uVar8 = uVar8 + 1) {
              local_20 = (void *)0x0;
              local_38 = 0;
              recovered_21348((int)local_179,(int)pvVar4,0xf0);
              local_89 = 0;
              if ((local_179[0] != '\0') &&
                 ((uVar5 = recovered_2bcf9(local_24,base,local_64,local_78,(uint)local_28,
                                           (int)local_14,(uint)local_1c,
                                           *(uint *)((int)pvVar4 + 0xf0),
                                           *(uint *)((int)pvVar4 + 0xf4),&local_20,&local_38),
                  (char)uVar5 == '\0' ||
                  (uVar6 = recovered_2be29((int)local_179,(int)local_20,
                                           *(undefined4 *)((int)pvVar4 + 0xf4),
                                           *(undefined4 *)((int)pvVar4 + 0xf8),
                                           *(undefined4 *)((int)pvVar4 + 0xf0),local_38),
                  (char)uVar6 == '\0')))) {
                recovered_21203((int)local_20);
                pvVar4 = local_30;
                goto LAB_0002536e;
              }
              pvVar4 = (void *)((int)pvVar4 + 0x100);
            }
            recovered_21203((int)local_30);
            recovered_21203((int)local_14);
            DAT_0004ce28 = (undefined1)local_34;
            DAT_0004ce2c = local_7c;
            DAT_0004ce30 = local_78;
            DAT_0004ce34 = local_28;
            DAT_0004ce38 = base;
            DAT_0004ce3c = local_3c;
            DAT_0004ce40 = local_18;
            DAT_0004ce48 = 1;
            DAT_0004ce4c = local_74;
            DAT_0004ce50 = local_70;
            DAT_0004ce54 = local_64;
            DAT_0004ce58 = local_60;
LAB_00025560:
            DAT_0004ce44 = param_4;
            DAT_0004ce7c = 0;
            DAT_0004ce80 = 0;
            DAT_0004ce84 = 0;
            DAT_0004ce88 = 0;
            _DAT_0004ce8c = 0;
            DAT_0004ce90 = 1;
            return CONCAT31((int3)((uint)local_60 >> 8),1);
          }
LAB_0002536e:
          recovered_21203((int)pvVar4);
          pvVar4 = local_14;
LAB_000254ca:
          recovered_21203((int)pvVar4);
          goto LAB_000254d2;
        }
        recovered_21203((int)pvVar4);
      }
      pvVar4 = local_14;
    }
    recovered_21203((int)pvVar4);
  }
  return 0;
}
