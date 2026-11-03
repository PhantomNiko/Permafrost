#include "functions.h"
#undef DAT_0005e6a8
#define DAT_0005e6a8 (*(uint32_t *)(0x5e6a8U))
#undef DAT_0005e6b4
#define DAT_0005e6b4 (*(uint8_t *)(0x5e6b4U))
#undef DAT_0005e6b8
#define DAT_0005e6b8 (*(uint *)(0x5e6b8U))
#undef DAT_0005e6bc
#define DAT_0005e6bc (*(uint *)(0x5e6bcU))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(void * *)(0x5e6c0U))
#undef DAT_0005e6c4
#define DAT_0005e6c4 (*(uint *)(0x5e6c4U))
#undef DAT_0005e6c8
#define DAT_0005e6c8 (*(void * *)(0x5e6c8U))
#undef DAT_0005e6cc
#define DAT_0005e6cc (*(void * *)(0x5e6ccU))
#undef DAT_0005e6d0
#define DAT_0005e6d0 (*(uint32_t *)(0x5e6d0U))
#undef DAT_0005e6d4
#define DAT_0005e6d4 (*(uint32_t *)(0x5e6d4U))
#undef DAT_0005e6d8
#define DAT_0005e6d8 (*(int *)(0x5e6d8U))
#undef DAT_0005e6dc
#define DAT_0005e6dc (*(uint *)(0x5e6dcU))
#undef DAT_0005e6e0
#define DAT_0005e6e0 (*(uint *)(0x5e6e0U))
#undef DAT_0005e6e4
#define DAT_0005e6e4 (*(void * *)(0x5e6e4U))
#undef DAT_0005e6e8
#define DAT_0005e6e8 (*(uint *)(0x5e6e8U))
#undef DAT_0005e6ec
#define DAT_0005e6ec (*(void * *)(0x5e6ecU))
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(void * *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(void * *)(0x5e6f4U))
#undef DAT_0005e6f8
#define DAT_0005e6f8 (*(void * *)(0x5e6f8U))
#undef DAT_0005e6fc
#define DAT_0005e6fc (*(uint32_t *)(0x5e6fcU))
#undef DAT_0005e700
#define DAT_0005e700 (*(uint32_t *)(0x5e700U))
#undef DAT_0005e704
#define DAT_0005e704 (*(uint8_t *)(0x5e704U))
#undef DAT_0005e708
#define DAT_0005e708 (*(uint32_t *)(0x5e708U))
#undef DAT_0005e70c
#define DAT_0005e70c (*(uint32_t *)(0x5e70cU))
#undef DAT_0005e710
#define DAT_0005e710 (*(uint32_t *)(0x5e710U))
#undef DAT_0005e714
#define DAT_0005e714 (*(uint32_t *)(0x5e714U))
#undef DAT_0005e718
#define DAT_0005e718 (*(uint8_t *)(0x5e718U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(uint8_t *)(0x5e71cU))
#undef DAT_000938e1
#define DAT_000938e1 (*(char *)(0x938e1U))
#undef _DAT_0005e718
#define _DAT_0005e718 (*(uint32_t *)(0x5e718U))
#define local_58d (*(undefined1 (*)[512])(frame + 16))
#define local_38d (*(undefined1 (*)[512])(frame + 528))
#define local_18d (*(char (*)[240])(frame + 1040))
#define local_9d (*(undefined1 *)(frame + 1280))
#define local_9c (*(uint *)(frame + 1281))
#define local_98 (*(int *)(frame + 1285))
#define local_94 (*(uint *)(frame + 1289))
#define local_90 (*(undefined1 (*)[8])(frame + 1293))
#define local_88 (*(int *)(frame + 1301))
#define local_84 (*(uint *)(frame + 1305))
#define local_80 (*(uint *)(frame + 1309))
#define local_7c (*(int *)(frame + 1313))
#define local_78 (*(uint *)(frame + 1317))
#define local_74 (*(uint *)(frame + 1321))
#define local_70 (*(void * *)(frame + 1325))
#define local_6c (*(uint *)(frame + 1329))
#define local_68 (*(void * *)(frame + 1333))
#define local_64 (*(void * *)(frame + 1337))
#define local_60 (*(void * *)(frame + 1341))
#define local_4c (*(uint *)(frame + 1361))
#define local_48 (*(uint *)(frame + 1365))
#define local_44 (*(void * *)(frame + 1369))
#define local_40 (*(uint *)(frame + 1373))
#define local_3c (*(void * *)(frame + 1377))
#define local_38 (*(void * *)(frame + 1381))
#define local_34 (*(void * *)(frame + 1385))
#define local_2d (*(undefined1 *)(frame + 1392))
#define local_2c (*(void * *)(frame + 1393))
#define local_28 (*(uint *)(frame + 1397))
#define local_24 (*(void * *)(frame + 1401))
#define local_20 (*(void * *)(frame + 1405))
#define local_1c (*(void * *)(frame + 1409))
#define local_18 (*(void * *)(frame + 1413))
#define local_14 (*(void * *)(frame + 1417))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3228e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_3228e(uint param_1,uint param_2,void *param_3,undefined4 param_4)

{
  unsigned char frame[1469] = {0};

  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  byte bVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  void *fat;
  uint uVar10;
  ulonglong uVar11;

  bVar6 = (byte)param_1;
  bVar2 = recovered_3864c(bVar6,param_2,(int)local_58d,0x200);
  if (!bVar2) {
    return 0;
  }
  iVar3 = recovered_213fb((int)local_58d,0x57350,8);
  local_4c = param_1;
  local_28 = param_1 & 0xff;
  if (iVar3 == 0) {
    recovered_39f57();
    bVar2 = recovered_3864c(bVar6,param_2,(int)local_38d,0x200);
    if (!bVar2) {
      return 0;
    }
    recovered_21348((int)local_90,(int)local_38d,0x44);
    iVar3 = recovered_213fb((int)local_90,0x57350,8);
    if ((local_80 == 0 || local_84 == 0) || (local_88 != 1 || iVar3 != 0)) {
      return 0;
    }
    lVar1 = ZEXT48(local_70) * (ulonglong)local_80 + (ulonglong)local_74;
    local_14 = (void *)lVar1;
    local_18 = (void *)((ulonglong)local_84 * (ulonglong)local_80);
    local_20 = local_70;
    local_1c = (void *)((int)local_70 + 2);
    local_38 = (void *)CONCAT31(PF_PART3(local_38, 1),(void *)0xfffffffd < local_70);
    local_2c = (void *)0x0;
    local_44 = (void *)0x0;
    local_34 = local_68;
    if (0x7ffffffe < (uint)local_70 >> 1) {
      return 0;
    }
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      return 0;
    }
    if ((int)((ulonglong)local_84 * (ulonglong)local_80 >> 0x20) != 0) {
      return 0;
    }
    if ((void *)0x3ffffffd < local_70) {
      return 0;
    }
    uVar9 = (uint)((void *)0xfffffffd < local_70) << 2 | (uint)local_1c >> 0x1e;
    uVar10 = (int)local_1c * 4;
    if (local_78 >> 0x17 < uVar9 || (local_78 >> 0x17) - uVar9 < (uint)(local_78 << 9 < uVar10)) {
      return 0;
    }
    if ((param_3 != (void *)0x0) && (param_3 < local_14)) {
      return 0;
    }
    pvVar7 = local_14;
    if (local_14 < local_60) {
      pvVar7 = local_60;
    }
    fat = param_3;
    if (pvVar7 < param_3) {
      fat = pvVar7;
    }
    local_24 = param_3;
    if (param_3 == (void *)0x0) {
      fat = pvVar7;
      local_24 = pvVar7;
    }
    DAT_0005e6a8 = 0xffff;
    local_48 = param_2;
    bVar2 = recovered_38a82((uint)local_64);
    if (bVar2) {
      DAT_0005e6f4 = local_1c;
      DAT_0005e6f0 = recovered_211fa(uVar10);
      uVar9 = local_48;
      if (DAT_0005e6f0 != (void *)0x0) {
        bVar2 = recovered_3864c((byte)local_28,local_7c + local_48,(int)DAT_0005e6f0,uVar10);
        pvVar7 = local_18;
        if (!bVar2) goto LAB_0003271b;
        local_38 = (void *)((uint)local_34 >> 8);
        pvVar5 = (void *)0x2;
        do {
          DAT_0005e6f8 = pvVar5;
          if (DAT_0005e6f4 <= DAT_0005e6f8) {
            DAT_0005e6f8 = (void *)0x2;
            break;
          }
          pvVar5 = (void *)((int)DAT_0005e6f8 + 1);
        } while (*(int *)((int)DAT_0005e6f0 + (int)DAT_0005e6f8 * 4) != 0);
        DAT_0005e6fc = 0;
        DAT_0005e700 = 0;
        DAT_0005e704 = 0;
        uVar10 = recovered_38756(local_28,uVar9,local_74,local_80,(uint)local_18,(int)DAT_0005e6f0,
                                 (uint)local_1c,local_6c,(uint)local_68,&local_2c,(int *)&local_44);
        if ((char)uVar10 == '\0') goto LAB_0003271b;
        if (local_34 < (void *)0x1000000) {
          local_9c = (int)pvVar7 - 1;
          local_98 = (pvVar7 != (void *)0x0) - 1;
          local_94 = (int)local_1c - 2;
          pvVar7 = (void *)0x0;
          while (pvVar7 != local_38) {
            local_3c = (void *)0x0;
            pvVar5 = (void *)((int)local_2c + (int)pvVar7 * 0x100);
            local_40 = 0;
            local_20 = pvVar7;
            recovered_21348((int)local_18d,(int)pvVar5,0xf0);
            local_9d = 0;
            if (local_18d[0] != '\0') {
              if (DAT_000938e1 == '\x01') {
                uVar10 = recovered_38756(local_28,uVar9,local_74,local_80,(uint)local_18,
                                         (int)DAT_0005e6f0,(uint)local_1c,
                                         *(uint *)((int)pvVar5 + 0xf0),*(uint *)((int)pvVar5 + 0xf4)
                                         ,&local_3c,(int *)&local_40);
                if ((char)uVar10 == '\0') goto LAB_0003285e;
              }
              else {
                local_34 = DAT_0005e6f0;
                local_14 = *(void **)((int)pvVar5 + 0xf0);
                uVar10 = *(uint *)((int)pvVar5 + 0xf4);
                local_40 = 0;
                if (uVar10 != 0) {
                  if (((local_18 != (void *)0x0) && ((void *)0x1 < local_1c)) &&
                     (DAT_0005e6f0 != (void *)0x0)) {
                    uVar11 = recovered_20fc2(CONCAT44(local_98 + (uint)CARRY4(uVar10,local_9c),
                                                      uVar10 + local_9c),ZEXT48(local_18));
                    iVar3 = (int)(uVar11 >> 0x20);
                    uVar10 = (uint)uVar11;
                    bVar2 = (uint)(local_94 < uVar10) <= (uint)-iVar3;
                    if (iVar3 != 0 || (iVar3 != 0 || !bVar2)) {
                      uVar10 = 0;
                    }
                    if (iVar3 == 0 && (iVar3 == 0 && bVar2)) {
                      uVar8 = 0;
                      do {
                        local_2d = (void *)0x1 < local_14;
                        do {
                          if (uVar10 == uVar8) {
                            local_40 = uVar10;
                            goto LAB_00032a02;
                          }
                          if (local_1c <= local_14 || !(bool)local_2d) goto LAB_0003285e;
                          uVar8 = uVar8 + 1;
                        } while (uVar10 <= uVar8);
                        local_14 = *(void **)((int)local_34 + (int)local_14 * 4);
                        uVar9 = local_48;
                      } while (1 < (int)local_14 + 1U);
                    }
                  }
                  goto LAB_0003285e;
                }
                if (local_14 != (void *)0x0) goto LAB_0003285e;
              }
LAB_00032a02:
              uVar4 = recovered_39f65((int)local_18d,(int)local_3c,*(int *)((int)pvVar5 + 0xf4),
                                      *(uint *)((int)pvVar5 + 0xf8),
                                      *(undefined4 *)((int)pvVar5 + 0xf0),local_40);
              if ((char)uVar4 == '\0') goto LAB_0003285e;
            }
            pvVar7 = (void *)((int)local_20 + 1);
          }
          recovered_21203((int)local_2c);
          DAT_0005e6b4 = (undefined1)local_4c;
          DAT_0005e6b8 = local_84;
          DAT_0005e6bc = local_80;
          DAT_0005e6c0 = local_18;
          DAT_0005e6cc = local_24;
          DAT_0005e6d4 = 2;
          DAT_0005e6d8 = local_7c;
          DAT_0005e6dc = local_78;
          DAT_0005e6e0 = local_74;
          DAT_0005e6e4 = local_70;
          DAT_0005e6e8 = local_6c;
          DAT_0005e6ec = local_68;
          DAT_0005e6c4 = uVar9;
          DAT_0005e6c8 = fat;
          goto LAB_000327d1;
        }
LAB_0003285e:
        fat = local_2c;
LAB_00032713:
        recovered_21203((int)fat);
      }
    }
LAB_0003271b:
    recovered_39f57();
  }
  else {
    local_2c = (void *)0x0;
    bVar2 = recovered_3864c(bVar6,param_2,(int)local_38d,0x200);
    if (!bVar2) {
      return 0;
    }
    recovered_21348((int)local_90,(int)local_38d,0x44);
    uVar4 = recovered_3a168((int)local_90,(uint)param_3,(uint *)0x0,(uint *)&local_2c);
    if ((char)uVar4 == '\0') {
      return 0;
    }
    recovered_39f57();
    local_1c = (void *)((ulonglong)local_84 * (ulonglong)local_80);
    local_18 = local_70;
    local_20 = local_68;
    fat = (void *)0x0;
    if (((void *)0xfffffffd < local_68 || ((void *)0x7fffff < local_70 || 0x7fffff < local_78)) ||
        (int)((ulonglong)local_84 * (ulonglong)local_80 >> 0x20) != 0) {
      return 0;
    }
    if (DAT_000938e1 == '\x01') {
      uVar10 = local_78 << 9;
      fat = recovered_211fa(uVar10);
      if (fat == (void *)0x0) {
        return 0;
      }
      bVar2 = recovered_3864c((byte)local_28,local_7c + param_2,(int)fat,uVar10);
      if (bVar2) goto LAB_000323bc;
    }
    else {
LAB_000323bc:
      uVar10 = (int)local_18 * 0x200;
      local_14 = recovered_211fa(uVar10 + (uVar10 == 0));
      if (local_14 != (void *)0x0) {
        if ((uVar10 == 0) ||
           (bVar2 = recovered_3864c((byte)local_28,local_74 + param_2,(int)local_14,uVar10), bVar2))
        {
          DAT_0005e6a8 = 0x100;
          bVar2 = recovered_38a82((uint)local_64);
          if (bVar2) {
            local_20 = (void *)((int)local_20 + 2);
            pvVar5 = (void *)0x0;
            pvVar7 = local_14;
            while (pvVar5 < local_64) {
              local_44 = (void *)0x0;
              local_3c = (void *)0x0;
              local_38 = pvVar5;
              local_18 = pvVar7;
              recovered_21348((int)local_18d,(int)pvVar7,0xf0);
              local_9d = 0;
              pvVar7 = local_18;
              if (local_18d[0] != '\0') {
                pvVar5 = *(void **)((int)local_18 + 0xf0);
                local_24 = *(void **)((int)local_18 + 0xf4);
                if (local_24 == (void *)0x0) {
                  bVar2 = pvVar5 != (void *)0x0;
                  pvVar5 = (void *)0x0;
                  if (bVar2) goto LAB_00032706;
                }
                else if (((pvVar5 < (void *)0x2) || (local_20 <= pvVar5)) ||
                        ((uint)(ZEXT48(local_1c) * ZEXT48(local_68) >> 0x20) <
                         (uint)((void *)(ZEXT48(local_1c) * ZEXT48(local_68)) < local_24)))
                goto LAB_00032706;
                if (DAT_000938e1 == '\x01') {
                  uVar10 = recovered_38756(local_28,param_2,local_6c,local_80,(uint)local_1c,
                                           (int)fat,(uint)local_20,(uint)pvVar5,(uint)local_24,
                                           &local_44,(int *)&local_3c);
                  if ((char)uVar10 == '\0') goto LAB_00032706;
                  pvVar5 = *(void **)((int)local_18 + 0xf0);
                  local_24 = *(void **)((int)local_18 + 0xf4);
                }
                pvVar7 = local_18;
                uVar4 = recovered_39f65((int)local_18d,(int)local_44,(int)local_24,
                                        *(uint *)((int)local_18 + 0xf8),pvVar5,local_3c);
                if ((char)uVar4 == '\0') goto LAB_00032706;
              }
              pvVar7 = (void *)((int)pvVar7 + 0x100);
              pvVar5 = (void *)((int)local_38 + 1);
            }
            recovered_21203((int)local_14);
            recovered_21203((int)fat);
            DAT_0005e6b4 = (undefined1)local_4c;
            DAT_0005e6b8 = local_84;
            DAT_0005e6bc = local_80;
            DAT_0005e6c0 = local_1c;
            if (param_3 == (void *)0x0) {
              param_3 = local_2c;
            }
            DAT_0005e6c8 = local_2c;
            DAT_0005e6d4 = 1;
            DAT_0005e6d8 = local_7c;
            DAT_0005e6dc = local_78;
            DAT_0005e6e0 = local_6c;
            DAT_0005e6e4 = local_68;
            DAT_0005e6f4 = local_20;
            DAT_0005e6c4 = param_2;
            DAT_0005e6cc = param_3;
LAB_000327d1:
            DAT_0005e6d0 = param_4;
            DAT_0005e708 = 0;
            DAT_0005e70c = 0;
            DAT_0005e710 = 0;
            DAT_0005e714 = 0;
            _DAT_0005e718 = 0;
            DAT_0005e71c = 1;
            return CONCAT31((int3)((uint)fat >> 8),1);
          }
LAB_00032706:
          recovered_21203((int)local_14);
          goto LAB_00032713;
        }
        recovered_21203((int)local_14);
      }
    }
    recovered_21203((int)fat);
  }
  return 0;
}
