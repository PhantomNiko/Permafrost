/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000d000
#define DAT_1000d000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011e0
 */

undefined * recovered_100011e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000d000;
}

#undef DAT_1000d000

#undef DAT_1000c747
#define DAT_1000c747 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef DAT_1000c7a4
#define DAT_1000c7a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x266U)))
#undef DAT_1000c7d8
#define DAT_1000c7d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x29aU)))
#undef DAT_1000c84b
#define DAT_1000c84b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x30dU)))
#undef DAT_1000c856
#define DAT_1000c856 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x318U)))
#undef DAT_1000e000
#define DAT_1000e000 (*(byte *)(((uintptr_t)pf_module_state + 0x1ac2U)))
#undef str_1000c6bc
#define str_1000c6bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17eU)))
#undef str_1000c6d1
#define str_1000c6d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x193U)))
#undef str_1000c703
#define str_1000c703 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c5U)))
#undef str_1000c712
#define str_1000c712 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d4U)))
#undef str_1000c722
#define str_1000c722 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e4U)))
#undef str_1000c72f
#define str_1000c72f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f1U)))
#undef str_1000c73a
#define str_1000c73a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_1000c74f
#define str_1000c74f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x211U)))
#undef str_1000c75d
#define str_1000c75d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21fU)))
#undef str_1000c769
#define str_1000c769 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22bU)))
#undef str_1000c775
#define str_1000c775 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x237U)))
#undef str_1000c782
#define str_1000c782 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x244U)))
#undef str_1000c78c
#define str_1000c78c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24eU)))
#undef str_1000c797
#define str_1000c797 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000c7ac
#define str_1000c7ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26eU)))
#undef str_1000c7bd
#define str_1000c7bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x27fU)))
#undef str_1000c7cd
#define str_1000c7cd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_1000c7dd
#define str_1000c7dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29fU)))
#undef str_1000c7e8
#define str_1000c7e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aaU)))
#undef str_1000c7f4
#define str_1000c7f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b6U)))
#undef str_1000c812
#define str_1000c812 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d4U)))
#undef str_1000c835
#define str_1000c835 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_1000c844
#define str_1000c844 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x306U)))
#undef str_1000c850
#define str_1000c850 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_1000c857
#define str_1000c857 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x319U)))
#undef str_1000c867
#define str_1000c867 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x329U)))
#undef str_1000c876
#define str_1000c876 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x338U)))
#undef str_1000cf61
#define str_1000cf61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa23U)))
#undef str_1000cf7d
#define str_1000cf7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3fU)))
#undef str_1000cf92
#define str_1000cf92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa54U)))
#undef str_1000cf9e
#define str_1000cf9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa60U)))
#undef str_1000cfae
#define str_1000cfae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa70U)))
#define local_5c (*(undefined1 *)(frame + 1316))
#define local_5b (*(undefined1 *)(frame + 1317))
#define auStack_4dc (*(undefined1 (*)[16])(frame + 164))
#define local_5a (*(undefined1 *)(frame + 1318))
#define local_59 (*(undefined1 *)(frame + 1319))
#define local_58 (*(undefined1 *)(frame + 1320))
#define local_57 (*(undefined1 *)(frame + 1321))
#define abStack_c5 (*(byte (*)[45])(frame + 1211))
#define local_56 (*(undefined1 *)(frame + 1322))
#define local_55 (*(undefined1 *)(frame + 1323))
#define local_54 (*(undefined1 *)(frame + 1324))
#define local_53 (*(undefined1 *)(frame + 1325))
#define local_52 (*(undefined1 *)(frame + 1326))
#define local_51 (*(undefined1 *)(frame + 1327))
#define local_50 (*(int *)(frame + 1328))
#define local_4c (*(int *)(frame + 1332))
#define local_48 (*(undefined1 *)(frame + 1336))
#define local_47 (*(undefined1 *)(frame + 1337))
#define local_46 (*(undefined1 *)(frame + 1338))
#define local_45 (*(undefined1 *)(frame + 1339))
#define local_44 (*(int *)(frame + 1340))
#define local_40 (*(uint *)(frame + 1344))
#define local_3c (*(uint *)(frame + 1348))
#define local_38 (*(uint *)(frame + 1352))
#define local_34 (*(undefined1 *)(frame + 1356))
#define local_33 (*(undefined1 *)(frame + 1357))
#define local_32 (*(undefined1 *)(frame + 1358))
#define local_31 (*(undefined1 *)(frame + 1359))
#define local_30 (*(undefined1 *)(frame + 1360))
#define local_2f (*(undefined1 *)(frame + 1361))
#define local_2e (*(undefined1 *)(frame + 1362))
#define local_2d (*(undefined1 *)(frame + 1363))
#define local_2c (*(undefined1 *)(frame + 1364))
#define local_2b (*(undefined1 *)(frame + 1365))
#define local_2a (*(undefined1 *)(frame + 1366))
#define local_29 (*(undefined1 *)(frame + 1367))
#define local_28 (*(undefined1 *)(frame + 1368))
#define local_27 (*(undefined1 *)(frame + 1369))
#define local_26 (*(undefined1 *)(frame + 1370))
#define local_25 (*(undefined1 *)(frame + 1371))
#define local_24 (*(undefined1 *)(frame + 1372))
#define local_23 (*(undefined1 *)(frame + 1373))
#define local_22 (*(undefined1 *)(frame + 1374))
#define local_21 (*(undefined1 *)(frame + 1375))
#define local_20 (*(undefined1 *)(frame + 1376))
#define local_1f (*(undefined1 *)(frame + 1377))
#define local_1e (*(undefined1 *)(frame + 1378))
#define local_1d (*(undefined1 *)(frame + 1379))
#define local_1c (*(byte * *)(frame + 1380))
#define local_18 (*(uint *)(frame + 1384))
#define local_14 (*(byte * *)(frame + 1388))
#define local_56c (*(undefined4 *)(frame + 20))
#define local_568 (*(undefined4 *)(frame + 24))
#define local_564 (*(undefined4 *)(frame + 28))
#define local_560 (*(undefined4 *)(frame + 32))
#define local_55c (*(char (*)[64])(frame + 36))
#define local_51c (*(char (*)[20])(frame + 100))
#define local_508 (*(uint *)(frame + 120))
#define local_4cc (*(uint *)(frame + 180))
#define local_4c8 (*(undefined4 *)(frame + 184))
#define local_4c4 (*(byte (*)[1023])(frame + 188))
#define local_98 (*(uint *)(frame + 1256))
#define local_94 (*(int *)(frame + 1260))
#define local_90 (*(undefined4 *)(frame + 1264))
#define local_8c (*(int *)(frame + 1268))
#define local_88 (*(int *)(frame + 1272))
#define local_84 (*(int *)(frame + 1276))
#define local_80 (*(int *)(frame + 1280))
#define local_7c (*(undefined1 *)(frame + 1284))
#define local_7b (*(undefined1 *)(frame + 1285))
#define local_7a (*(undefined1 *)(frame + 1286))
#define local_79 (*(undefined1 *)(frame + 1287))
#define local_78 (*(int *)(frame + 1288))
#define local_74 (*(uint *)(frame + 1292))
#define local_70 (*(uint *)(frame + 1296))
#define local_6c (*(uint *)(frame + 1300))
#define local_68 (*(undefined1 *)(frame + 1304))
#define local_67 (*(undefined1 *)(frame + 1305))
#define local_66 (*(undefined1 *)(frame + 1306))
#define local_65 (*(undefined1 *)(frame + 1307))
#define local_64 (*(undefined1 *)(frame + 1308))
#define local_63 (*(undefined1 *)(frame + 1309))
#define bStack_56d (*(byte *)(frame + 19))
#define local_62 (*(undefined1 *)(frame + 1310))
#define local_61 (*(undefined1 *)(frame + 1311))
#define local_60 (*(undefined1 *)(frame + 1312))
#define local_5f (*(undefined1 *)(frame + 1313))
#define local_5e (*(undefined1 *)(frame + 1314))
#define local_5d (*(undefined1 *)(frame + 1315))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

int recovered_100011f0(int *api)

{
  unsigned char frame[1440] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  char cVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;

  local_18 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  if ((uint)api[2] < 0x10) {
    return 0;
  }
  local_14 = (byte *)api[2];
  local_4c4[0] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x60) {
    bVar11 = 0x71;
    pcVar6 = str_1000c6bc;
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x5f);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x60) {
    bVar11 = 0x3a;
    pcVar6 = str_1000c835;
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x5f);
  }
  local_4c4[uVar2] = 0;
  if (api[1] == 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar2 + 1 < 0x60) {
      (local_4c4 + uVar2)[0] = 0x30;
      (local_4c4 + uVar2)[1] = 0;
    }
  }
  else {
    uVar5 = api[1];
    uVar2 = 0;
    do {
      local_55c[uVar2 - 0x10] = (byte)(uVar5 % 10) | 0x30;
      uVar12 = uVar2 + 1;
      if (8 < uVar2) break;
      bVar1 = 9 < uVar5;
      uVar5 = uVar5 / 10;
      uVar2 = uVar12;
    } while (bVar1);
    do {
      iVar3 = uVar12 - 0x11;
      uVar12 = uVar12 - 1;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x60) {
        local_4c4[uVar2] = local_55c[iVar3];
        local_4c4[uVar2 + 1] = 0;
      }
    } while (uVar12 != 0);
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x60) {
    bVar11 = 0x20;
    pcVar6 = str_1000c844;
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x5f);
  }
  local_4c4[uVar2] = 0;
  if (0x2b < local_14) {
    uVar2 = 0;
    if ((code *)api[10] != (code *)0x0) {
      uVar2 = (*(code *)api[10])(local_4c4);
    }
  }
  DAT_1000e000 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_47 = 0;
  local_46 = 0;
  local_45 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  local_23 = 0;
  local_22 = 0;
  local_21 = 0;
  local_20 = 0;
  local_1f = 0;
  local_1e = 0;
  local_1d = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_67 = 0;
  local_66 = 0;
  local_65 = 0;
  local_64 = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0;
  local_60 = 0;
  local_5f = 0;
  local_5e = 0;
  local_5d = 0;
  local_5c = 0;
  local_5b = 0;
  local_5a = 0;
  local_59 = 0;
  local_58 = 0;
  local_57 = 0;
  local_56 = 0;
  local_55 = 0;
  local_54 = 0;
  local_53 = 0;
  local_52 = 0;
  local_51 = 0;
  local_90 = CONCAT31((int3)(uVar2 >> 8),1);
  if (((((*api == 0x54584b57) && (0x43 < (uint)api[2])) && ((code *)api[0x10] != (code *)0x0)) &&
      ((iVar3 = (*(code *)api[0x10])(&local_50), iVar3 != 0 &&
       (local_90 = 0, local_4c != 0 || local_50 != 0)))) &&
     (((local_44 != 0 && ((local_40 != 0 && (local_3c != 0)))) && (local_38 != 0)))) {
    iVar4 = -0x34;
    do {
      *(undefined1 *)((int)&local_50 + iVar4) = *(undefined1 *)((int)&local_1c + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
    iVar4 = 0;
    local_88 = 1;
    local_90 = 0;
LAB_10001668:
    local_8c = iVar4;
    if (((*api == 0x54584b57) && (0xb7 < (uint)api[2])) && ((code *)api[0x2d] != (code *)0x0)) {
      uVar5 = (*(code *)api[0x2d])(1);
      local_1c = (byte *)str_1000c7cd;
      if ((uVar5 & 1) != 0) {
        local_1c = (byte *)str_1000c7bd;
      }
    }
    else {
      local_1c = (byte *)str_1000c7cd;
    }
  }
  else {
    iVar3 = 0;
    if (((code *)api[5] == (code *)0x0) || (iVar4 = (*(code *)api[5])(0x500,800,0x20), iVar4 == 0))
    {
      local_88 = 0;
      iVar4 = 0;
      goto LAB_10001668;
    }
    if (*api == 0x54584b57) {
      uVar5 = api[2];
      local_88 = 0;
      if (0xa3 < uVar5) {
        if ((code *)api[0x28] == (code *)0x0) {
          local_88 = 0;
        }
        else {
          local_8c = 1;
          local_1c = (byte *)str_1000c7cd;
          local_88 = (*(code *)api[0x28])();
          if (*api != 0x54584b57) {
            iVar3 = 0;
            goto LAB_100016d1;
          }
        }
        uVar5 = api[2];
      }
      iVar3 = 0;
      if ((0x43 < uVar5) && ((code *)api[0x10] != (code *)0x0)) {
        iVar3 = (*(code *)api[0x10])(&local_84);
      }
      goto LAB_10001668;
    }
    local_8c = 1;
    local_1c = (byte *)str_1000c7cd;
    iVar3 = 0;
    local_88 = 0;
  }
LAB_100016d1:
  if (((local_44 == 0 || local_4c == 0 && local_50 == 0) || (local_40 == 0)) || (local_3c == 0)) {
LAB_100016e5:
    uVar12 = 0x3c0;
    local_98 = 0x220;
    if (((local_80 == 0 && local_84 == 0) || (local_78 == 0)) ||
       ((local_74 == 0 || (local_70 == 0)))) goto LAB_10001734;
    uVar5 = local_74;
    uVar2 = local_70;
    if (local_6c == 0) goto LAB_10001734;
  }
  else {
    uVar5 = local_40;
    uVar2 = local_3c;
    if (local_38 == 0) goto LAB_100016e5;
  }
  local_98 = uVar2;
  uVar12 = uVar5;
LAB_10001734:
  local_94 = iVar3;
  if ((((((local_44 != 0 && (local_4c != 0 || local_50 != 0)) && local_40 != 0) && (local_3c != 0))
       && (local_38 != 0)) || ((local_80 == 0 && local_84 == 0 || (local_78 == 0)))) ||
     ((local_74 == 0 || ((local_70 == 0 || (pcVar6 = str_1000c7e8, local_6c == 0)))))) {
    pcVar6 = str_1000c7e8;
    if (((code *)api[7] != (code *)0x0) &&
       (iVar3 = (*(code *)api[7])(uVar12,local_98,0x20), iVar3 != 0)) {
      local_94 = 0;
      pcVar6 = str_1000c7dd;
      if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) && ((code *)api[0x10] != (code *)0x0)) {
        local_94 = (*(code *)api[0x10])(&local_84);
      }
    }
  }
  local_4c4[0] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x74;
    pcVar7 = str_1000c6d1;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x70;
    pcVar7 = str_1000c703;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x31;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x32;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x38;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x30;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x70;
    pcVar7 = str_1000c712;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x38;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x30;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x30;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x70;
    pcVar7 = str_1000c722;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x33;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x32;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x72;
    pcVar7 = str_1000c72f;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  local_14 = (byte *)pcVar6;
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    local_55c[uVar5 - 0x10] = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
    uVar13 = local_98;
    uVar2 = uVar5 + 1;
    if (8 < uVar5) break;
    bVar1 = 9 < uVar12;
    uVar5 = uVar2;
    uVar12 = uVar12 / 10;
  } while (bVar1);
  do {
    iVar3 = uVar2 - 0x11;
    uVar2 = uVar2 - 1;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      local_4c4[uVar12] = local_55c[iVar3];
      local_4c4[uVar12 + 1] = 0;
    }
  } while (uVar2 != 0);
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x72;
    pcVar6 = str_1000c73a;
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  pbVar10 = local_14;
  if (uVar13 == 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar2 + 1 < 0x400) {
      (local_4c4 + uVar2)[0] = 0x30;
      (local_4c4 + uVar2)[1] = 0;
    }
  }
  else {
    uVar5 = 0;
    do {
      local_55c[uVar5 - 0x10] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
      pbVar10 = local_14;
      uVar2 = uVar5 + 1;
      if (8 < uVar5) break;
      bVar1 = 9 < uVar13;
      uVar5 = uVar2;
      uVar13 = uVar13 / 10;
    } while (bVar1);
    do {
      iVar3 = uVar2 - 0x11;
      uVar2 = uVar2 - 1;
      uVar5 = 0;
      do {
        uVar12 = uVar5;
        uVar5 = uVar12 + 1;
      } while (local_4c4[uVar12] != 0);
      if (uVar12 + 1 < 0x400) {
        local_4c4[uVar12] = local_55c[iVar3];
        local_4c4[uVar12 + 1] = 0;
      }
    } while (uVar2 != 0);
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x72;
    pbVar8 = &DAT_1000c747;
    do {
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pbVar8;
      if (bVar11 == 0) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  iVar3 = local_8c;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x33;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    (local_4c4 + uVar2)[0] = 0x32;
    (local_4c4 + uVar2)[1] = 0;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  pcVar6 = str_1000c850;
  if (iVar3 != 0) {
    pcVar6 = &DAT_1000c84b;
  }
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x6d;
    pcVar7 = str_1000c74f;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if ((uVar2 + 1 < 0x400) && (bVar11 = *pcVar6, bVar11 != 0)) {
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  pcVar6 = str_1000c850;
  if (local_88 != 0) {
    pcVar6 = &DAT_1000c84b;
  }
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x6d;
    pcVar7 = str_1000c75d;
    do {
      pcVar7 = pcVar7 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar7;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if ((uVar2 + 1 < 0x400) && (bVar11 = *pcVar6, bVar11 != 0)) {
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = local_40;
  if ((char)local_90 == '\0') {
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      uVar2 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar2 < 0x400) {
      local_4c4[uVar12] = 0x20;
      uVar12 = uVar2;
    }
    local_4c4[uVar12] = 0;
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      uVar2 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      bVar11 = 0x62;
      pcVar6 = str_1000c769;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar12] = bVar11;
        uVar12 = uVar12 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar12 < 0x3ff);
    }
    local_4c4[uVar12] = 0;
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      uVar2 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar2 < 0x400) {
      local_4c4[uVar12] = 0x3d;
      uVar12 = uVar2;
    }
    local_4c4[uVar12] = 0;
    if (uVar5 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar2 = 0;
      do {
        local_55c[uVar2 - 0x10] = (byte)(uVar5 % 10) | 0x30;
        uVar12 = uVar2 + 1;
        if (8 < uVar2) break;
        bVar1 = 9 < uVar5;
        uVar5 = uVar5 / 10;
        uVar2 = uVar12;
      } while (bVar1);
      do {
        iVar3 = uVar12 - 0x11;
        uVar12 = uVar12 - 1;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          local_4c4[uVar2] = local_55c[iVar3];
          local_4c4[uVar2 + 1] = 0;
        }
      } while (uVar12 != 0);
    }
    uVar2 = local_3c;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x20;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      bVar11 = 0x62;
      pcVar6 = str_1000c775;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar12] = bVar11;
        uVar12 = uVar12 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar12 < 0x3ff);
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x3d;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    if (uVar2 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar5 = 0;
      do {
        local_55c[uVar5 - 0x10] = (byte)(uVar2 % 10) | 0x30;
        uVar12 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar1 = 9 < uVar2;
        uVar2 = uVar2 / 10;
        uVar5 = uVar12;
      } while (bVar1);
      do {
        iVar3 = uVar12 - 0x11;
        uVar12 = uVar12 - 1;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          local_4c4[uVar2] = local_55c[iVar3];
          local_4c4[uVar2 + 1] = 0;
        }
      } while (uVar12 != 0);
    }
    uVar2 = local_38;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x20;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      bVar11 = 0x62;
      pcVar6 = str_1000c782;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar12] = bVar11;
        uVar12 = uVar12 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar12 < 0x3ff);
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x3d;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    pbVar10 = local_14;
    if (uVar2 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar5 = 0;
      do {
        local_55c[uVar5 - 0x10] = (byte)(uVar2 % 10) | 0x30;
        pbVar10 = local_14;
        uVar12 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar1 = 9 < uVar2;
        uVar2 = uVar2 / 10;
        uVar5 = uVar12;
      } while (bVar1);
      do {
        iVar3 = uVar12 - 0x11;
        uVar12 = uVar12 - 1;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          local_4c4[uVar2] = local_55c[iVar3];
          local_4c4[uVar2 + 1] = 0;
        }
      } while (uVar12 != 0);
    }
  }
  uVar5 = local_74;
  if (local_94 != 0) {
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      uVar2 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar2 < 0x400) {
      local_4c4[uVar12] = 0x20;
      uVar12 = uVar2;
    }
    local_4c4[uVar12] = 0;
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      uVar2 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      bVar11 = 0x61;
      pcVar6 = str_1000c78c;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar12] = bVar11;
        uVar12 = uVar12 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar12 < 0x3ff);
    }
    local_4c4[uVar12] = 0;
    uVar2 = 0;
    do {
      uVar12 = uVar2;
      uVar2 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar2 < 0x400) {
      local_4c4[uVar12] = 0x3d;
      uVar12 = uVar2;
    }
    local_4c4[uVar12] = 0;
    if (uVar5 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar2 = 0;
      do {
        local_55c[uVar2 - 0x10] = (byte)(uVar5 % 10) | 0x30;
        uVar12 = uVar2 + 1;
        if (8 < uVar2) break;
        bVar1 = 9 < uVar5;
        uVar5 = uVar5 / 10;
        uVar2 = uVar12;
      } while (bVar1);
      do {
        iVar3 = uVar12 - 0x11;
        uVar12 = uVar12 - 1;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          local_4c4[uVar2] = local_55c[iVar3];
          local_4c4[uVar2 + 1] = 0;
        }
      } while (uVar12 != 0);
    }
    uVar2 = local_70;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x20;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      bVar11 = 0x61;
      pcVar6 = str_1000c797;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar12] = bVar11;
        uVar12 = uVar12 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar12 < 0x3ff);
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x3d;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    if (uVar2 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar5 = 0;
      do {
        local_55c[uVar5 - 0x10] = (byte)(uVar2 % 10) | 0x30;
        uVar12 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar1 = 9 < uVar2;
        uVar2 = uVar2 / 10;
        uVar5 = uVar12;
      } while (bVar1);
      do {
        iVar3 = uVar12 - 0x11;
        uVar12 = uVar12 - 1;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          local_4c4[uVar2] = local_55c[iVar3];
          local_4c4[uVar2 + 1] = 0;
        }
      } while (uVar12 != 0);
    }
    uVar2 = local_6c;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x20;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar12 + 1 < 0x400) {
      bVar11 = 0x61;
      pbVar10 = &DAT_1000c7a4;
      do {
        local_4c4[uVar12] = bVar11;
        uVar12 = uVar12 + 1;
        bVar11 = *pbVar10;
        if (bVar11 == 0) break;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 < 0x3ff);
    }
    local_4c4[uVar12] = 0;
    uVar5 = 0;
    do {
      uVar12 = uVar5;
      uVar5 = uVar12 + 1;
    } while (local_4c4[uVar12] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar12] = 0x3d;
      uVar12 = uVar5;
    }
    local_4c4[uVar12] = 0;
    pbVar10 = local_14;
    if (uVar2 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar5 = 0;
      do {
        local_55c[uVar5 - 0x10] = (byte)(uVar2 % 10) | 0x30;
        pbVar10 = local_14;
        uVar12 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar1 = 9 < uVar2;
        uVar2 = uVar2 / 10;
        uVar5 = uVar12;
      } while (bVar1);
      do {
        iVar3 = uVar12 - 0x11;
        uVar12 = uVar12 - 1;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          local_4c4[uVar2] = local_55c[iVar3];
          local_4c4[uVar2 + 1] = 0;
        }
      } while (uVar12 != 0);
    }
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x66;
    pcVar6 = str_1000c7ac;
    do {
      pcVar6 = pcVar6 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pcVar6;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  pbVar8 = local_1c;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if ((uVar2 + 1 < 0x400) && (bVar11 = *pbVar8, bVar11 != 0)) {
    do {
      pbVar8 = pbVar8 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pbVar8;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x20;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar2 + 1 < 0x400) {
    bVar11 = 0x72;
    pbVar8 = &DAT_1000c7d8;
    do {
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pbVar8;
      if (bVar11 == 0) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  if (uVar5 < 0x400) {
    local_4c4[uVar2] = 0x3d;
    uVar2 = uVar5;
  }
  local_4c4[uVar2] = 0;
  uVar5 = 0;
  do {
    uVar2 = uVar5;
    uVar5 = uVar2 + 1;
  } while (local_4c4[uVar2] != 0);
  bVar11 = *pbVar10;
  if (uVar2 + 1 < 0x400 && bVar11 != 0) {
    do {
      pbVar10 = pbVar10 + 1;
      local_4c4[uVar2] = bVar11;
      uVar2 = uVar2 + 1;
      bVar11 = *pbVar10;
      if (bVar11 == 0) break;
    } while (uVar2 < 0x3ff);
  }
  local_4c4[uVar2] = 0;
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) && ((code *)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)api[0xf])(&local_56c), iVar3 != 0)) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    local_4c4[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar2 + 1 < 0x400) {
      bVar11 = 0x68;
      pcVar6 = str_1000c857;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar2] = bVar11;
        uVar2 = uVar2 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar2 < 0x3ff);
    }
    local_4c4[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    local_4c4[uVar2] = 0;
    if (local_508 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar5 = 0;
      do {
        abStack_c5[uVar5 + 1] = (char)local_508 + (char)(local_508 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar1 = 9 < local_508;
        local_508 = local_508 / 10;
        uVar5 = uVar2;
      } while (bVar1);
      do {
        pbVar10 = abStack_c5 + uVar2;
        uVar2 = uVar2 - 1;
        uVar5 = 0;
        do {
          uVar12 = uVar5;
          uVar5 = uVar12 + 1;
        } while (local_4c4[uVar12] != 0);
        if (uVar12 + 1 < 0x400) {
          local_4c4[uVar12] = *pbVar10;
          local_4c4[uVar12 + 1] = 0;
        }
      } while (uVar2 != 0);
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    local_4c4[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar2 + 1 < 0x400) {
      bVar11 = 0x6d;
      pcVar6 = str_1000c867;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar2] = bVar11;
        uVar2 = uVar2 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar2 < 0x3ff);
    }
    local_4c4[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    local_4c4[uVar2] = 0;
    iVar3 = 8;
    do {
      uVar5 = local_4cc >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar5;
      if (uVar5 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        local_4c4[uVar2] = bVar11;
        local_4c4[uVar2 + 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    local_4c4[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar2 + 1 < 0x400) {
      bVar11 = 0x6d;
      pcVar6 = str_1000c876;
      do {
        pcVar6 = pcVar6 + 1;
        local_4c4[uVar2] = bVar11;
        uVar2 = uVar2 + 1;
        bVar11 = *pcVar6;
        if (bVar11 == 0) break;
      } while (uVar2 < 0x3ff);
    }
    local_4c4[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (local_4c4[uVar2] != 0);
    if (uVar5 < 0x400) {
      local_4c4[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    local_4c4[uVar2] = 0;
    if (local_4c8 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_4c4[uVar2] != 0);
      if (uVar2 + 1 < 0x400) {
        (local_4c4 + uVar2)[0] = 0x30;
        (local_4c4 + uVar2)[1] = 0;
      }
    }
    else {
      uVar5 = 0;
      do {
        abStack_c5[uVar5 + 1] = (char)local_4c8 + (char)(local_4c8 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar1 = 9 < local_4c8;
        local_4c8 = local_4c8 / 10;
        uVar5 = uVar2;
      } while (bVar1);
      do {
        pbVar10 = abStack_c5 + uVar2;
        uVar2 = uVar2 - 1;
        uVar5 = 0;
        do {
          uVar12 = uVar5;
          uVar5 = uVar12 + 1;
        } while (local_4c4[uVar12] != 0);
        if (uVar12 + 1 < 0x400) {
          local_4c4[uVar12] = *pbVar10;
          local_4c4[uVar12 + 1] = 0;
        }
      } while (uVar2 != 0);
    }
  }
  iVar3 = 0;
  if ((code *)api[3] != (code *)0x0) {
    iVar4 = (*(code *)api[3])(&DAT_1000c856,str_1000c7f4,local_4c4);
    iVar3 = 0;
    if (iVar4 != 0) {
      if (((*api == 0x54584b57) && (0x5f < (uint)api[2])) && (api[0x17] != 0)) {
        pbVar10 = (byte *)0x0;
        do {
          iVar3 = 0;
          local_14 = pbVar10;
          do {
            bVar11 = (byte)iVar3;
            iVar4 = recovered_10005570(api,bVar11,0,(undefined1 *)&local_56c);
            if (iVar4 != 0) {
              recovered_10003840(api,(byte *)&local_56c,(int *)&local_18);
              if ((char)local_560 < '\0') {
                iVar4 = recovered_10005570(api,bVar11,1,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
                iVar4 = recovered_10005570(api,bVar11,2,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
                iVar4 = recovered_10005570(api,bVar11,3,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
                iVar4 = recovered_10005570(api,bVar11,4,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
                iVar4 = recovered_10005570(api,bVar11,5,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
                iVar4 = recovered_10005570(api,bVar11,6,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
                iVar4 = recovered_10005570(api,bVar11,7,abStack_c5 + 1);
                if (iVar4 != 0) {
                  recovered_10003840(api,abStack_c5 + 1,(int *)&local_18);
                }
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x20);
          pbVar10 = local_14 + 1;
        } while (pbVar10 != (byte *)0x8);
      }
      bVar11 = DAT_1000e000;
      iVar3 = -0x90;
      do {
        auStack_4dc[iVar3] = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
      local_56c = 0x90;
      local_568 = 0xc;
      local_564 = 7;
      local_560 = 0x100;
      local_55c[0] = '\0';
      uVar5 = 0xffffffff;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_55c[uVar2 + 1] != '\0');
      pcVar6 = str_1000cf61;
      if ((DAT_1000e000 & 1) == 0) {
        pcVar6 = str_1000cf7d;
      }
      cVar9 = *pcVar6;
      if (uVar2 + 2 < 0x40 && cVar9 != '\0') {
        do {
          pcVar6 = pcVar6 + 1;
          local_55c[uVar5] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar6;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3f);
      }
      local_55c[uVar5] = '\0';
      local_51c[0] = '\0';
      uVar5 = 0xffffffff;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (local_51c[uVar2 + 1] != '\0');
      if (uVar2 + 2 < 0x40) {
        cVar9 = 'q';
        pcVar6 = str_1000c6bc;
        do {
          pcVar6 = pcVar6 + 1;
          local_51c[uVar5] = cVar9;
          uVar5 = uVar5 + 1;
          cVar9 = *pcVar6;
          if (cVar9 == '\0') break;
        } while (uVar5 < 0x3f);
      }
      local_51c[uVar5] = '\0';
      if (((*api == 0x54584b57) && (199 < (uint)api[2])) &&
         (((code *)api[0x31] != (code *)0x0 &&
          (iVar3 = (*(code *)api[0x31])(&local_56c,recovered_1000be10), iVar3 != 0)))) {
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        pcVar6 = str_1000cf9e;
        if ((bVar11 & 1) == 0) {
          pcVar6 = str_1000cfae;
        }
        if (uVar5 < 0x400) {
          local_4c4[uVar2] = 0x20;
          uVar2 = uVar5;
        }
        local_4c4[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          bVar11 = 0x67;
          pcVar7 = str_1000cf92;
          do {
            pcVar7 = pcVar7 + 1;
            local_4c4[uVar2] = bVar11;
            uVar2 = uVar2 + 1;
            bVar11 = *pcVar7;
            if (bVar11 == 0) break;
          } while (uVar2 < 0x3ff);
        }
        local_4c4[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar5 < 0x400) {
          local_4c4[uVar2] = 0x3d;
          uVar2 = uVar5;
        }
        local_4c4[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        bVar11 = *pcVar6;
        if (uVar2 + 1 < 0x400 && bVar11 != 0) {
          do {
            pcVar6 = pcVar6 + 1;
            local_4c4[uVar2] = bVar11;
            uVar2 = uVar2 + 1;
            bVar11 = *pcVar6;
            if (bVar11 == 0) break;
          } while (uVar2 < 0x3ff);
        }
      }
      else {
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar5 < 0x400) {
          local_4c4[uVar2] = 0x20;
          uVar2 = uVar5;
        }
        local_4c4[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          bVar11 = 0x67;
          pcVar6 = str_1000cf92;
          do {
            pcVar6 = pcVar6 + 1;
            local_4c4[uVar2] = bVar11;
            uVar2 = uVar2 + 1;
            bVar11 = *pcVar6;
            if (bVar11 == 0) break;
          } while (uVar2 < 0x3ff);
        }
        local_4c4[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar5 < 0x400) {
          local_4c4[uVar2] = 0x3d;
          uVar2 = uVar5;
        }
        local_4c4[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          bVar11 = 0x75;
          pcVar6 = str_1000c7e8;
          do {
            pcVar6 = pcVar6 + 1;
            local_4c4[uVar2] = bVar11;
            uVar2 = uVar2 + 1;
            bVar11 = *pcVar6;
            if (bVar11 == 0) break;
          } while (uVar2 < 0x3ff);
        }
      }
      local_4c4[uVar2] = 0;
      uVar2 = local_18;
      uVar5 = 0;
      do {
        uVar12 = uVar5;
        uVar5 = uVar12 + 1;
      } while (local_4c4[uVar12] != 0);
      if (uVar5 < 0x400) {
        local_4c4[uVar12] = 0x20;
        uVar12 = uVar5;
      }
      local_4c4[uVar12] = 0;
      uVar5 = 0;
      do {
        uVar12 = uVar5;
        uVar5 = uVar12 + 1;
      } while (local_4c4[uVar12] != 0);
      if (uVar12 + 1 < 0x400) {
        bVar11 = 0x70;
        pcVar6 = str_1000c812;
        do {
          pcVar6 = pcVar6 + 1;
          local_4c4[uVar12] = bVar11;
          uVar12 = uVar12 + 1;
          bVar11 = *pcVar6;
          if (bVar11 == 0) break;
        } while (uVar12 < 0x3ff);
      }
      local_4c4[uVar12] = 0;
      uVar5 = 0;
      do {
        uVar12 = uVar5;
        uVar5 = uVar12 + 1;
      } while (local_4c4[uVar12] != 0);
      if (uVar5 < 0x400) {
        local_4c4[uVar12] = 0x3d;
        uVar12 = uVar5;
      }
      local_4c4[uVar12] = 0;
      if (uVar2 == 0) {
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (local_4c4[uVar2] != 0);
        if (uVar2 + 1 < 0x400) {
          (local_4c4 + uVar2)[0] = 0x30;
          (local_4c4 + uVar2)[1] = 0;
        }
      }
      else {
        uVar5 = 0;
        do {
          local_55c[uVar5 - 0x10] = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
          uVar12 = uVar5 + 1;
          if (8 < uVar5) break;
          bVar1 = 9 < uVar2;
          uVar2 = uVar2 / 10;
          uVar5 = uVar12;
        } while (bVar1);
        do {
          iVar3 = uVar12 - 0x11;
          uVar12 = uVar12 - 1;
          uVar5 = 0;
          do {
            uVar2 = uVar5;
            uVar5 = uVar2 + 1;
          } while (local_4c4[uVar2] != 0);
          if (uVar2 + 1 < 0x400) {
            local_4c4[uVar2] = local_55c[iVar3];
            local_4c4[uVar2 + 1] = 0;
          }
        } while (uVar12 != 0);
      }
      iVar3 = 1;
      if ((code *)api[3] != (code *)0x0) {
        (*(code *)api[3])(&DAT_1000c856,str_1000c7f4,local_4c4);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}
/* Freestanding zero service; Pooka's Free Software License. */
void __bzero(void *p,unsigned long n)
{
 volatile unsigned char *d=p;while(n--)*d++=0;
}

#undef DAT_1000c747
#undef DAT_1000c7a4
#undef DAT_1000c7d8
#undef DAT_1000c84b
#undef DAT_1000c856
#undef DAT_1000e000
#undef str_1000c6bc
#undef str_1000c6d1
#undef str_1000c703
#undef str_1000c712
#undef str_1000c722
#undef str_1000c72f
#undef str_1000c73a
#undef str_1000c74f
#undef str_1000c75d
#undef str_1000c769
#undef str_1000c775
#undef str_1000c782
#undef str_1000c78c
#undef str_1000c797
#undef str_1000c7ac
#undef str_1000c7bd
#undef str_1000c7cd
#undef str_1000c7dd
#undef str_1000c7e8
#undef str_1000c7f4
#undef str_1000c812
#undef str_1000c835
#undef str_1000c844
#undef str_1000c850
#undef str_1000c857
#undef str_1000c867
#undef str_1000c876
#undef str_1000cf61
#undef str_1000cf7d
#undef str_1000cf92
#undef str_1000cf9e
#undef str_1000cfae
#undef local_5c
#undef local_5b
#undef auStack_4dc
#undef local_5a
#undef local_59
#undef local_58
#undef local_57
#undef abStack_c5
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4c
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_2b
#undef local_2a
#undef local_29
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22
#undef local_21
#undef local_20
#undef local_1f
#undef local_1e
#undef local_1d
#undef local_1c
#undef local_18
#undef local_14
#undef local_56c
#undef local_568
#undef local_564
#undef local_560
#undef local_55c
#undef local_51c
#undef local_508
#undef local_4cc
#undef local_4c8
#undef local_4c4
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef bStack_56d
#undef local_62
#undef local_61
#undef local_60
#undef local_5f
#undef local_5e
#undef local_5d

#define local_11 (*(bool *)(frame + 31))
#define abStack_1c (*(byte (*)[11])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f0
 */

void recovered_100036f0(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;

  if (in_ECX == 0) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x20;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (in_EDX != (char *)0x0) {
      cVar5 = *in_EDX;
      local_11 = cVar5 == '\0';
      if (uVar3 + 1 < 0x400 && cVar5 != '\0') {
        do {
          in_EDX = in_EDX + 1;
          *(char *)(in_ECX + uVar3) = cVar5;
          uVar3 = uVar3 + 1;
          cVar5 = *in_EDX;
          if (cVar5 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      uVar4 = uVar3 + 1;
    } while (*(char *)(in_ECX + uVar3) != '\0');
    if (uVar4 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar4) = 0x3d;
      uVar3 = uVar4;
    }
    *(undefined1 *)(in_ECX + uVar3) = 0;
    if (param_3 == 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < 0x400) {
        *(undefined2 *)(in_ECX + -1 + uVar4) = 0x30;
        return;
      }
      return;
    }
  }
  uVar4 = 0;
  do {
    abStack_1c[uVar4 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    uVar3 = uVar4 + 1;
    if (8 < uVar4) break;
    bVar2 = 9 < param_3;
    param_3 = param_3 / 10;
    uVar4 = uVar3;
  } while (bVar2);
  do {
    if (in_ECX != 0) {
      uVar4 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar4);
        uVar4 = uVar4 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 < 0x400) {
        *(byte *)(in_ECX + -1 + uVar4) = abStack_1c[uVar3];
        *(undefined1 *)(in_ECX + uVar4) = 0;
      }
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}

#undef local_11
#undef abStack_1c

#undef DAT_1000cdbf
#define DAT_1000cdbf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x881U)))
#undef DAT_1000cdf1
#define DAT_1000cdf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8b3U)))
#undef DAT_1000e000
#define DAT_1000e000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ac2U)))
#undef DAT_1000e010
#define DAT_1000e010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad2U)))
#undef DAT_1000e011
#define DAT_1000e011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad3U)))
#undef DAT_1000e012
#define DAT_1000e012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad4U)))
#undef DAT_1000e013
#define DAT_1000e013 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad5U)))
#undef DAT_1000e014
#define DAT_1000e014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad6U)))
#undef DAT_1000e015
#define DAT_1000e015 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad7U)))
#undef DAT_1000e016
#define DAT_1000e016 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad8U)))
#undef DAT_1000e017
#define DAT_1000e017 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef DAT_1000e018
#define DAT_1000e018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adaU)))
#undef DAT_1000e01c
#define DAT_1000e01c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adeU)))
#undef DAT_1000e020
#define DAT_1000e020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae2U)))
#undef DAT_1000e021
#define DAT_1000e021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae3U)))
#undef DAT_1000e022
#define DAT_1000e022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae4U)))
#undef DAT_1000e023
#define DAT_1000e023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae5U)))
#undef DAT_1000e024
#define DAT_1000e024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae6U)))
#undef DAT_1000e025
#define DAT_1000e025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae7U)))
#undef DAT_1000e026
#define DAT_1000e026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae8U)))
#undef DAT_1000e027
#define DAT_1000e027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae9U)))
#undef DAT_1000e028
#define DAT_1000e028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aeaU)))
#undef DAT_1000e02c
#define DAT_1000e02c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aeeU)))
#undef DAT_1000e02e
#define DAT_1000e02e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af0U)))
#undef DAT_1000e02f
#define DAT_1000e02f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af1U)))
#undef DAT_1000e030
#define DAT_1000e030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af2U)))
#undef DAT_1000e034
#define DAT_1000e034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af6U)))
#undef DAT_1000e036
#define DAT_1000e036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af8U)))
#undef DAT_1000e037
#define DAT_1000e037 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af9U)))
#undef DAT_1000e040
#define DAT_1000e040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b02U)))
#undef DAT_1000e041
#define DAT_1000e041 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b03U)))
#undef DAT_1000e042
#define DAT_1000e042 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b04U)))
#undef DAT_1000e043
#define DAT_1000e043 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b05U)))
#undef DAT_1000e044
#define DAT_1000e044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b06U)))
#undef DAT_1000e045
#define DAT_1000e045 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b07U)))
#undef DAT_1000e046
#define DAT_1000e046 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b08U)))
#undef DAT_1000e047
#define DAT_1000e047 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b09U)))
#undef DAT_1000e048
#define DAT_1000e048 (*(byte *)(((uintptr_t)pf_module_state + 0x1b0aU)))
#undef DAT_1000e049
#define DAT_1000e049 (*(byte *)(((uintptr_t)pf_module_state + 0x1b0bU)))
#undef DAT_1000e04a
#define DAT_1000e04a (*(byte *)(((uintptr_t)pf_module_state + 0x1b0cU)))
#undef DAT_1000e04b
#define DAT_1000e04b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0dU)))
#undef DAT_1000e04c
#define DAT_1000e04c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0eU)))
#undef DAT_1000e04d
#define DAT_1000e04d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b0fU)))
#undef DAT_1000e04e
#define DAT_1000e04e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b10U)))
#undef DAT_1000e04f
#define DAT_1000e04f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b11U)))
#undef DAT_1000e050
#define DAT_1000e050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b12U)))
#undef DAT_1000e051
#define DAT_1000e051 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b13U)))
#undef DAT_1000e052
#define DAT_1000e052 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b14U)))
#undef DAT_1000e053
#define DAT_1000e053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b15U)))
#undef DAT_1000e060
#define DAT_1000e060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b22U)))
#undef DAT_1000e064
#define DAT_1000e064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b26U)))
#undef DAT_1000e065
#define DAT_1000e065 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b27U)))
#undef DAT_1000e066
#define DAT_1000e066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b28U)))
#undef DAT_1000e067
#define DAT_1000e067 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b29U)))
#undef DAT_1000e068
#define DAT_1000e068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2aU)))
#undef DAT_1000e069
#define DAT_1000e069 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2bU)))
#undef DAT_1000e06a
#define DAT_1000e06a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2cU)))
#undef DAT_1000e06b
#define DAT_1000e06b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2dU)))
#undef DAT_1000e06c
#define DAT_1000e06c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2eU)))
#undef DAT_1000e06d
#define DAT_1000e06d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b2fU)))
#undef DAT_1000e06e
#define DAT_1000e06e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b30U)))
#undef DAT_1000e06f
#define DAT_1000e06f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b31U)))
#undef DAT_1000e070
#define DAT_1000e070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b32U)))
#undef DAT_1000e071
#define DAT_1000e071 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b33U)))
#undef DAT_1000e072
#define DAT_1000e072 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b34U)))
#undef DAT_1000e073
#define DAT_1000e073 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b35U)))
#undef DAT_1000e074
#define DAT_1000e074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b36U)))
#undef DAT_1000e075
#define DAT_1000e075 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b37U)))
#undef DAT_1000e076
#define DAT_1000e076 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b38U)))
#undef DAT_1000e077
#define DAT_1000e077 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b39U)))
#undef DAT_1000e080
#define DAT_1000e080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b42U)))
#undef DAT_1000e081
#define DAT_1000e081 (*(byte *)(((uintptr_t)pf_module_state + 0x1b43U)))
#undef DAT_1000e082
#define DAT_1000e082 (*(byte *)(((uintptr_t)pf_module_state + 0x1b44U)))
#undef DAT_1000e083
#define DAT_1000e083 (*(byte *)(((uintptr_t)pf_module_state + 0x1b45U)))
#undef _DAT_1000e018
#define _DAT_1000e018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1adaU)))
#undef _DAT_1000e01c
#define _DAT_1000e01c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1adeU)))
#undef _DAT_1000e028
#define _DAT_1000e028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aeaU)))
#undef _DAT_1000e02c
#define _DAT_1000e02c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1aeeU)))
#undef _DAT_1000e030
#define _DAT_1000e030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1af2U)))
#undef _DAT_1000e034
#define _DAT_1000e034 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1af6U)))
#undef _DAT_1000e060
#define _DAT_1000e060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1b22U)))
#undef str_1000c885
#define str_1000c885 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
#undef str_1000c892
#define str_1000c892 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x354U)))
#undef str_1000c8a8
#define str_1000c8a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36aU)))
#undef str_1000c8bc
#define str_1000c8bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37eU)))
#undef str_1000c8d2
#define str_1000c8d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x394U)))
#undef str_1000ccec
#define str_1000ccec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7aeU)))
#undef str_1000cd0a
#define str_1000cd0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ccU)))
#undef str_1000cd26
#define str_1000cd26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e8U)))
#undef str_1000cd3c
#define str_1000cd3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7feU)))
#undef str_1000cd56
#define str_1000cd56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x818U)))
#undef str_1000cd66
#define str_1000cd66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x828U)))
#undef str_1000cd73
#define str_1000cd73 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x835U)))
#undef str_1000cd83
#define str_1000cd83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x845U)))
#undef str_1000cd8d
#define str_1000cd8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84fU)))
#undef str_1000cd95
#define str_1000cd95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x857U)))
#undef str_1000cd9e
#define str_1000cd9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x860U)))
#undef str_1000cda6
#define str_1000cda6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x868U)))
#undef str_1000cdc3
#define str_1000cdc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x885U)))
#undef str_1000cdcc
#define str_1000cdcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88eU)))
#undef str_1000cdd5
#define str_1000cdd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x897U)))
#undef str_1000cddd
#define str_1000cddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89fU)))
#undef str_1000cde8
#define str_1000cde8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8aaU)))
#define local_4dc (*(undefined4 *)(frame + 1044))
#define local_4a0 (*(byte *)(frame + 1104))
#define local_498 (*(uint *)(frame + 1112))
#define local_48c (*(int *)(frame + 1124))
#define local_dc (*(undefined4 *)(frame + 2068))
#define local_7c (*(uint *)(frame + 2164))
#define local_78 (*(uint *)(frame + 2168))
#define local_74 (*(uint *)(frame + 2172))
#define local_70 (*(uint *)(frame + 2176))
#define local_6c (*(uint *)(frame + 2180))
#define local_68 (*(undefined4 *)(frame + 2184))
#define local_64 (*(undefined4 (*)[3])(frame + 2188))
#define local_58 (*(undefined4 *)(frame + 2200))
#define local_54 (*(undefined4 *)(frame + 2204))
#define local_50 (*(undefined4 *)(frame + 2208))
#define local_4c (*(undefined4 *)(frame + 2212))
#define local_48 (*(undefined4 *)(frame + 2216))
#define local_44 (*(undefined4 *)(frame + 2220))
#define local_40 (*(undefined4 *)(frame + 2224))
#define local_3c (*(undefined4 *)(frame + 2228))
#define local_38 (*(uint *)(frame + 2232))
#define local_34 (*(uint *)(frame + 2236))
#define local_30 (*(uint *)(frame + 2240))
#define local_2c (*(uint *)(frame + 2244))
#define local_28 (*(uint *)(frame + 2248))
#define local_24 (*(uint *)(frame + 2252))
#define local_20 (*(char * *)(frame + 2256))
#define local_1c (*(byte * *)(frame + 2260))
#define local_18 (*(ushort * *)(frame + 2264))
#define local_14 (*(int * *)(frame + 2268))
#define acStack_8dd (*(char (*)[1024])(frame + 19))
#define cStack_4dd (*(char *)(frame + 1043))
#define cStack_dd (*(char *)(frame + 2067))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003840(int *in_ECX,byte *in_EDX,int *param_3)

{
  unsigned char frame[2320] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  code *pcVar2;
  uint3 uVar3;
  char cVar4;
  int *piVar5;
  bool bVar6;
  short sVar7;
  undefined3 extraout_var = 0;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  byte bVar14;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  char cVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  ushort *puVar21;

  if (((in_EDX == (byte *)0x0) || (*(short *)(in_EDX + 4) != 0x1af4)) ||
     (*(short *)(in_EDX + 6) != 0x1050)) {
    sVar7 = *(short *)(in_EDX + 6);
    bVar6 = sVar7 == 0x1050;
    if (in_EDX[8] != 3 && !bVar6) {
      return;
    }
  }
  else {
    bVar6 = true;
    sVar7 = 0x1050;
  }
  pbVar13 = in_EDX + 8;
  local_18 = (ushort *)in_EDX;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  acStack_8dd[1] = '\0';
  uVar8 = 0;
  do {
    uVar17 = uVar8;
    uVar8 = uVar17 + 1;
  } while (acStack_8dd[uVar17 + 1] != '\0');
  if (uVar17 + 1 < 0x400) {
    cVar15 = 'r';
    pcVar19 = str_1000c885;
    do {
      pcVar19 = pcVar19 + 1;
      acStack_8dd[uVar17 + 1] = cVar15;
      uVar17 = uVar17 + 1;
      cVar15 = *pcVar19;
      if (cVar15 == '\0') break;
    } while (uVar17 < 0x3ff);
  }
  acStack_8dd[uVar17 + 1] = '\0';
  puVar21 = local_18;
  if (bVar6) {
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 1] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000c892;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 1] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
LAB_100039f7:
    acStack_8dd[uVar17 + 1] = '\0';
  }
  else if (local_18[2] == 0x1234) {
    if (sVar7 == 0x1111) {
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 1] != '\0');
      if (uVar17 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar19 = str_1000c8a8;
        do {
          pcVar19 = pcVar19 + 1;
          acStack_8dd[uVar17 + 1] = cVar15;
          uVar17 = uVar17 + 1;
          cVar15 = *pcVar19;
          if (cVar15 == '\0') break;
        } while (uVar17 < 0x3ff);
      }
      goto LAB_100039f7;
    }
  }
  else if (local_18[2] == 0x1013) {
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 1] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000c8bc;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 1] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
    goto LAB_100039f7;
  }
  recovered_10005780((uint)(acStack_8dd + 1),in_ECX,(undefined1 *)puVar21,(int)(acStack_8dd + 1));
  local_dc = 0;
  local_64[0] = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (((puVar21 == (ushort *)0x0) || (puVar21[2] != 0x1af4)) || (puVar21[3] != 0x1050)) {
    if (puVar21[3] != 0x1050) goto LAB_100042ef;
  }
  bVar6 = recovered_1000aac0(in_ECX,puVar21,&local_4dc);
  if (CONCAT31(extraout_var,bVar6) == 0) {
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 1] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000ccec;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 1] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
  }
  else {
    recovered_1000b180(in_ECX,&local_4dc);
    if ((local_4a0 & 8) == 0) {
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 1] != '\0');
      if (uVar17 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar19 = str_1000cd0a;
        do {
          pcVar19 = pcVar19 + 1;
          acStack_8dd[uVar17 + 1] = cVar15;
          uVar17 = uVar17 + 1;
          cVar15 = *pcVar19;
          if (cVar15 == '\0') break;
        } while (uVar17 < 0x3ff);
      }
    }
    else if ((local_498 < 2) || (local_48c == 0)) {
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 1] != '\0');
      if (uVar17 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar19 = str_1000cd26;
        do {
          pcVar19 = pcVar19 + 1;
          acStack_8dd[uVar17 + 1] = cVar15;
          uVar17 = uVar17 + 1;
          cVar15 = *pcVar19;
          if (cVar15 == '\0') break;
        } while (uVar17 < 0x3ff);
      }
    }
    else {
      DAT_1000e010 = 0;
      DAT_1000e011 = 0;
      DAT_1000e012 = 0;
      DAT_1000e013 = 0;
      DAT_1000e014 = 0;
      DAT_1000e015 = 0;
      DAT_1000e016 = 0;
      DAT_1000e017 = 0;
      _DAT_1000e018 = 0;
      _DAT_1000e01c = 0;
      DAT_1000e020 = 0;
      DAT_1000e021 = 0;
      DAT_1000e022 = 0;
      DAT_1000e023 = 0;
      DAT_1000e024 = 0;
      DAT_1000e025 = 0;
      DAT_1000e026 = 0;
      DAT_1000e027 = 0;
      _DAT_1000e028 = 0;
      _DAT_1000e02c = 0;
      DAT_1000e02e = 0;
      DAT_1000e02f = 0;
      _DAT_1000e030 = 0;
      _DAT_1000e034 = 0;
      DAT_1000e036 = 0;
      DAT_1000e037 = 0;
      DAT_1000e040 = 0;
      DAT_1000e041 = 0;
      DAT_1000e042 = 0;
      DAT_1000e043 = 0;
      DAT_1000e044 = 0;
      DAT_1000e045 = 0;
      DAT_1000e046 = 0;
      DAT_1000e047 = 0;
      DAT_1000e048 = 0;
      DAT_1000e049 = 0;
      DAT_1000e04a = 0;
      DAT_1000e04b = 0;
      DAT_1000e04c = 0;
      DAT_1000e04d = 0;
      DAT_1000e04e = 0;
      DAT_1000e04f = 0;
      DAT_1000e050 = 0;
      DAT_1000e051 = 0;
      DAT_1000e052 = 0;
      DAT_1000e053 = 0;
      _DAT_1000e060 = 0;
      DAT_1000e064 = 0;
      DAT_1000e065 = 0;
      DAT_1000e066 = 0;
      DAT_1000e067 = 0;
      DAT_1000e068 = 0;
      DAT_1000e069 = 0;
      DAT_1000e06a = 0;
      DAT_1000e06b = 0;
      DAT_1000e06c = 0;
      DAT_1000e06d = 0;
      DAT_1000e06e = 0;
      DAT_1000e06f = 0;
      DAT_1000e070 = 0;
      DAT_1000e071 = 0;
      DAT_1000e072 = 0;
      DAT_1000e073 = 0;
      DAT_1000e074 = 0;
      DAT_1000e075 = 0;
      DAT_1000e076 = 0;
      DAT_1000e077 = 0;
      iVar18 = -0x198;
      do {
        *(undefined1 *)(iVar18 + ((uintptr_t)pf_module_state + 0x1cdaU)) = 0;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0);
      if ((((((((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) && (0x73 < (uint)in_ECX[2])) &&
             (((code *)in_ECX[0x1c] != (code *)0x0 &&
              (iVar18 = (*(code *)in_ECX[0x1c])(0,&DAT_1000e010,0x20,&local_dc,local_64),
              iVar18 != 0)))) && (*in_ECX == 0x54584b57)) &&
           ((0x73 < (uint)in_ECX[2] && ((code *)in_ECX[0x1c] != (code *)0x0)))) &&
          ((iVar18 = (*(code *)in_ECX[0x1c])(0,&DAT_1000e030,8,&local_58,&local_54), iVar18 != 0 &&
           (((*in_ECX == 0x54584b57 && (0x73 < (uint)in_ECX[2])) &&
            ((code *)in_ECX[0x1c] != (code *)0x0)))))) &&
         (((((iVar18 = (*(code *)in_ECX[0x1c])(0,&DAT_1000e040,0x14,&local_50,&local_4c),
             iVar18 != 0 && (*in_ECX == 0x54584b57)) && (0x73 < (uint)in_ECX[2])) &&
           (((code *)in_ECX[0x1c] != (code *)0x0 &&
            (iVar18 = (*(code *)in_ECX[0x1c])(0,&DAT_1000e060,0x18,&local_48,&local_44), iVar18 != 0
            )))) && ((*in_ECX == 0x54584b57 &&
                     (((0x73 < (uint)in_ECX[2] && ((code *)in_ECX[0x1c] != (code *)0x0)) &&
                      (iVar18 = (*(code *)in_ECX[0x1c])(0,&DAT_1000e080,0x198,&local_40,&local_3c),
                      iVar18 != 0)))))))) {
        _DAT_1000e060 = 0x100;
        DAT_1000e010 = (undefined1)local_48;
        DAT_1000e011 = (undefined1)((uint)local_48 >> 8);
        DAT_1000e012 = (undefined1)((uint)local_48 >> 0x10);
        DAT_1000e013 = (undefined1)((uint)local_48 >> 0x18);
        DAT_1000e014 = (undefined1)local_44;
        DAT_1000e015 = (undefined1)((uint)local_44 >> 8);
        DAT_1000e016 = (undefined1)((uint)local_44 >> 0x10);
        DAT_1000e017 = (undefined1)((uint)local_44 >> 0x18);
        _DAT_1000e018 = 0x18;
        _DAT_1000e01c = 0x10001;
        DAT_1000e020 = (undefined1)local_40;
        DAT_1000e021 = (undefined1)((uint)local_40 >> 8);
        DAT_1000e022 = (undefined1)((uint)local_40 >> 0x10);
        DAT_1000e023 = (undefined1)((uint)local_40 >> 0x18);
        DAT_1000e024 = (undefined1)local_3c;
        DAT_1000e025 = (undefined1)((uint)local_3c >> 8);
        DAT_1000e026 = (undefined1)((uint)local_3c >> 0x10);
        DAT_1000e027 = (undefined1)((uint)local_3c >> 0x18);
        _DAT_1000e028 = 0x198;
        _DAT_1000e02c = 2;
        _DAT_1000e030 = 0x10000;
        _DAT_1000e034 = 0;
        local_1c = pbVar13;
        recovered_1000ba90(in_ECX,local_4dc,0x16,0);
        recovered_1000ba90(in_ECX,local_4dc,0x18,2);
        recovered_1000bae0(in_ECX,local_4dc,0x20,local_dc,local_64[0]);
        recovered_1000bae0(in_ECX,local_4dc,0x28,local_58,local_54);
        recovered_1000bae0(in_ECX,local_4dc,0x30,local_50,local_4c);
        local_14 = in_ECX;
        if ((((*in_ECX == 0x54584b57) && (0x77 < (uint)in_ECX[2])) &&
            (((code *)in_ECX[0x1d] != (code *)0x0 &&
             ((((*(code *)in_ECX[0x1d])(0,&DAT_1000e010,0x20), *local_14 == 0x54584b57 &&
               (0x77 < (uint)local_14[2])) &&
              (((code *)local_14[0x1d] != (code *)0x0 &&
               (((((*(code *)local_14[0x1d])(0,&DAT_1000e030,8), *local_14 == 0x54584b57 &&
                  (0x77 < (uint)local_14[2])) && ((code *)local_14[0x1d] != (code *)0x0)) &&
                (((*(code *)local_14[0x1d])(0,&DAT_1000e040,0x14), *local_14 == 0x54584b57 &&
                 (0x77 < (uint)local_14[2])))))))))))) &&
           ((((code *)local_14[0x1d] != (code *)0x0 &&
             (((*(code *)local_14[0x1d])(0,&DAT_1000e060,0x18), *local_14 == 0x54584b57 &&
              (0x77 < (uint)local_14[2])))) && ((code *)local_14[0x1d] != (code *)0x0)))) {
          (*(code *)local_14[0x1d])(0,&DAT_1000e080,0x198);
        }
        piVar5 = local_14;
        recovered_1000ba90(local_14,local_4dc,0x1c,1);
        recovered_1000ba30(piVar5,local_4dc,0x1c,(int)&local_38);
        recovered_1000b980(piVar5,local_4dc,0x14,(int)&local_34);
        recovered_1000b9e0(piVar5,local_4dc,local_34 | 4);
        recovered_1000b980(piVar5,local_4dc,0x14,(int)&local_34);
        if (((*piVar5 == 0x54584b57) && (0x7b < (uint)local_14[2])) &&
           ((code *)local_14[0x1e] != (code *)0x0)) {
          (*(code *)local_14[0x1e])();
        }
        recovered_1000ba90(local_14,local_48c,0,0);
        iVar18 = 100;
        do {
          if (((*local_14 == 0x54584b57) && (0x77 < (uint)local_14[2])) &&
             ((code *)local_14[0x1d] != (code *)0x0)) {
            (*(code *)local_14[0x1d])(0,&DAT_1000e040,0x14);
          }
          uVar8 = (uint)CONCAT11(DAT_1000e043,DAT_1000e042);
          if (uVar8 != 0) goto LAB_10005132;
          if (((*local_14 == 0x54584b57) && (0x33 < (uint)local_14[2])) &&
             ((code *)local_14[0xc] != (code *)0x0)) {
            (*(code *)local_14[0xc])(100);
          }
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
        uVar8 = 0;
LAB_10005132:
        if (((*local_14 == 0x54584b57) && (0x77 < (uint)local_14[2])) &&
           ((code *)local_14[0x1d] != (code *)0x0)) {
          (*(code *)local_14[0x1d])(0,&DAT_1000e080,0x198);
        }
        if (uVar8 == 0) {
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          uVar17 = 0;
          local_20 = (char *)0x0;
        }
        else {
          local_68 = (uint)DAT_1000e048;
          local_6c = (uint)DAT_1000e049;
          local_70 = (uint)DAT_1000e04a;
          local_74 = (uint)DAT_1000e080;
          local_78 = (uint)DAT_1000e081;
          local_7c = (uint)DAT_1000e082;
          local_30 = (uint)DAT_1000e083;
          local_24 = 0;
          iVar18 = -0x180;
          local_28 = 0;
          local_2c = 0;
          do {
            uVar17 = *(uint *)(iVar18 + ((uintptr_t)pf_module_state + 0x1ce2U));
            uVar12 = *(uint *)(iVar18 + ((uintptr_t)pf_module_state + 0x1ce6U));
            bVar6 = *(int *)(iVar18 + ((uintptr_t)pf_module_state + 0x1ceaU)) != 0;
            if ((uVar12 != 0 && (uVar17 != 0 && bVar6)) && local_2c == 0) {
              local_28 = uVar17;
              local_24 = uVar12;
            }
            local_2c = local_2c +
                       (CONCAT11(local_2c == 0,uVar12 != 0 && (uVar17 != 0 && bVar6)) & 0xff);
            iVar18 = iVar18 + 0x18;
          } while (iVar18 != 0);
          local_20 = (char *)CONCAT13(DAT_1000e04b,
                                      CONCAT12(DAT_1000e04a,CONCAT11(DAT_1000e049,DAT_1000e048)));
          uVar17 = CONCAT13(DAT_1000e083,CONCAT12(DAT_1000e082,CONCAT11(DAT_1000e081,DAT_1000e080)))
          ;
        }
        pcVar19 = acStack_8dd + 1;
        recovered_100053d0((int)pcVar19,0x400,str_1000cd56);
        recovered_100036f0((int)pcVar19,str_1000cd66,2);
        recovered_100036f0((int)pcVar19,str_1000cd73,local_38);
        recovered_10005440((int)pcVar19,str_1000cd83,local_34);
        recovered_100036f0((int)pcVar19,str_1000cd8d,uVar8);
        recovered_100036f0((int)pcVar19,str_1000cd95,(uint)local_20);
        recovered_10005440((int)pcVar19,str_1000cd9e,uVar17);
        recovered_100036f0((int)pcVar19,str_1000cda6,local_2c);
        if ((local_28 != 0) && (local_24 != 0)) {
          recovered_1000bb80((int)(acStack_8dd + 1),local_28,local_24);
        }
        pbVar13 = local_1c;
        puVar21 = local_18;
        in_ECX = local_14;
        if (uVar17 == 0x1101) {
          DAT_1000e000 = 1;
        }
        goto LAB_100042ef;
      }
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 1] != '\0');
      if (uVar17 + 1 < 0x400) {
        cVar15 = ' ';
        pcVar19 = str_1000cd3c;
        do {
          pcVar19 = pcVar19 + 1;
          acStack_8dd[uVar17 + 1] = cVar15;
          uVar17 = uVar17 + 1;
          cVar15 = *pcVar19;
          if (cVar15 == '\0') break;
        } while (uVar17 < 0x3ff);
      }
    }
  }
  acStack_8dd[uVar17 + 1] = '\0';
LAB_100042ef:
  local_20 = recovered_1000a8f0((int)puVar21);
  if (puVar21 != (ushort *)0x0) {
    local_dc = local_dc & 0xffffff00;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (*(char *)((int)local_64 + (uVar17 - 0x78)) != '\0');
    if (uVar17 + 1 < 0x60) {
      cVar15 = '/';
      pcVar19 = str_1000c8d2;
      do {
        pcVar19 = pcVar19 + 1;
        *(char *)((int)local_64 + (uVar17 - 0x78)) = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x5f);
    }
    *(undefined1 *)((int)local_64 + (uVar17 - 0x78)) = 0;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (*(char *)((int)local_64 + (uVar17 - 0x78)) != '\0');
    if (uVar8 < 0x60) {
      *(undefined1 *)((int)local_64 + (uVar17 - 0x78)) = 0x2f;
      uVar17 = uVar8;
    }
    *(undefined1 *)((int)local_64 + (uVar17 - 0x78)) = 0;
    bVar16 = (byte)*puVar21;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (*(char *)((int)local_64 + (uVar17 - 0x78)) != '\0');
    if (bVar16 < 0xa0) {
      bVar9 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar9 = (bVar16 >> 4) + 0x37;
    }
    if (uVar17 + 1 < 0x60) {
      *(byte *)((int)local_64 + (uVar17 - 0x78)) = bVar9;
      *(undefined1 *)((int)local_64 + (uVar17 - 0x77)) = 0;
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (*(char *)((int)local_64 + (uVar17 - 0x78)) != '\0');
    bVar14 = (byte)(bVar16 & 0xffff0f);
    if (bVar14 < 10) {
      uVar3 = bVar16 & 0xffff0f | 0x30;
    }
    else {
      uVar3 = (uint3)(byte)(bVar14 + 0x37);
    }
    if (uVar17 + 1 < 0x60) {
      *(char *)((int)local_64 + (uVar17 - 0x78)) = (char)uVar3;
      *(undefined1 *)((int)local_64 + (uVar17 - 0x77)) = 0;
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (*(char *)((int)local_64 + (uVar17 - 0x78)) != '\0');
    if (uVar8 < 0x60) {
      *(undefined1 *)((int)local_64 + (uVar17 - 0x78)) = 0x3a;
      uVar17 = uVar8;
    }
    *(undefined1 *)((int)local_64 + (uVar17 - 0x78)) = 0;
    bVar16 = *(byte *)((int)puVar21 + 1);
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (*(char *)((int)local_64 + (uVar17 - 0x78)) != '\0');
    if (bVar16 < 0xa0) {
      bVar14 = bVar16 >> 4 | 0x30;
    }
    else {
      bVar14 = (bVar16 >> 4) + 0x37;
    }
    if (uVar17 + 1 < 0x60) {
      *(byte *)((int)local_64 + (uVar17 - 0x78)) = bVar14;
      *(undefined1 *)((int)local_64 + (uVar17 - 0x77)) = 0;
    }
    uVar8 = CONCAT31(uVar3,bVar16) & 0xffffff0f;
    uVar17 = 0;
    do {
      uVar12 = uVar17;
      uVar17 = uVar12 + 1;
    } while (*(char *)((int)local_64 + (uVar12 - 0x78)) != '\0');
    if ((byte)uVar8 < 10) {
      uVar8 = uVar8 | 0x30;
    }
    else {
      uVar8 = CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 + 0x37);
    }
    if (uVar12 + 1 < 0x60) {
      *(char *)((int)local_64 + (uVar12 - 0x78)) = (char)uVar8;
      *(undefined1 *)((int)local_64 + (uVar12 - 0x77)) = 0;
    }
    uVar17 = 0;
    do {
      uVar12 = uVar17;
      uVar17 = uVar12 + 1;
    } while (*(char *)((int)local_64 + (uVar12 - 0x78)) != '\0');
    local_14 = in_ECX;
    if (uVar17 < 0x60) {
      *(undefined1 *)((int)local_64 + (uVar12 - 0x78)) = 0x2e;
      uVar12 = uVar17;
    }
    *(undefined1 *)((int)local_64 + (uVar12 - 0x78)) = 0;
    uVar17 = (uint)(byte)puVar21[1];
    local_1c = pbVar13;
    local_2c = CONCAT31(PF_PART3(local_2c, 1),bVar9);
    local_28 = CONCAT31(PF_PART3(local_28, 1),(char)uVar8);
    local_24 = CONCAT31(PF_PART3(local_24, 1),bVar14);
    if (uVar17 == 0) {
      uVar12 = 0;
      do {
        uVar20 = uVar12;
        uVar12 = uVar20 + 1;
      } while (*(char *)((int)local_64 + (uVar20 - 0x78)) != '\0');
      if (uVar20 + 1 < 0x60) {
        *(undefined2 *)((int)local_64 + (uVar20 - 0x78)) = 0x30;
      }
    }
    else {
      local_30 = CONCAT31(PF_PART3(local_30, 1),(char)(uVar8 >> 8));
      uVar8 = uVar17;
      uVar12 = 0;
      do {
        acStack_8dd[uVar12 + 0x401] = (byte)(uVar8 % 10) | 0x30;
        pbVar13 = local_1c;
        uVar20 = uVar12 + 1;
        if (8 < uVar12) break;
        bVar6 = 9 < uVar8;
        uVar8 = uVar8 / 10;
        uVar12 = uVar20;
      } while (bVar6);
      uVar8 = (local_30 & 0xff) << 8;
      do {
        iVar18 = uVar20 + 0x400;
        uVar20 = uVar20 - 1;
        uVar12 = 0;
        do {
          uVar11 = uVar12;
          uVar12 = uVar11 + 1;
        } while (*(char *)((int)local_64 + (uVar11 - 0x78)) != '\0');
        if (uVar11 + 1 < 0x60) {
          *(char *)((int)local_64 + (uVar11 - 0x78)) = acStack_8dd[iVar18];
          *(undefined1 *)((int)local_64 + (uVar11 - 0x77)) = 0;
        }
      } while (uVar20 != 0);
    }
    local_4dc = local_4dc & 0xffffff00;
    uVar12 = 0;
    do {
      uVar20 = uVar12;
      uVar12 = uVar20 + 1;
    } while (acStack_8dd[uVar20 + 0x401] != '\0');
    if (uVar20 + 1 < 0x400) {
      uVar8 = CONCAT31((int3)(uVar8 >> 8),0x70);
      pcVar19 = &DAT_1000cdbf;
      do {
        acStack_8dd[uVar20 + 0x401] = (char)uVar8;
        uVar20 = uVar20 + 1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),*pcVar19);
        if (*pcVar19 == '\0') break;
        pcVar19 = pcVar19 + 1;
      } while (uVar20 < 0x3ff);
    }
    acStack_8dd[uVar20 + 0x401] = '\0';
    uVar12 = 0;
    do {
      uVar20 = uVar12;
      uVar12 = uVar20 + 1;
    } while (acStack_8dd[uVar20 + 0x401] != '\0');
    cVar15 = (char)local_28;
    cVar4 = (char)local_24;
    if (uVar20 + 1 < 0x400) {
      acStack_8dd[uVar20 + 0x401] = (char)local_2c;
      acStack_8dd[uVar20 + 0x402] = '\0';
    }
    uVar12 = 0;
    do {
      uVar20 = uVar12;
      uVar12 = uVar20 + 1;
    } while (acStack_8dd[uVar20 + 0x401] != '\0');
    if (uVar20 + 1 < 0x400) {
      acStack_8dd[uVar20 + 0x401] = (char)(uVar8 >> 8);
      acStack_8dd[uVar20 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar8 < 0x400) {
      acStack_8dd[uVar12 + 0x401] = ':';
      uVar12 = uVar8;
    }
    acStack_8dd[uVar12 + 0x401] = '\0';
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar12 + 1 < 0x400) {
      acStack_8dd[uVar12 + 0x401] = cVar4;
      acStack_8dd[uVar12 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar12 + 1 < 0x400) {
      acStack_8dd[uVar12 + 0x401] = cVar15;
      acStack_8dd[uVar12 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar8 < 0x400) {
      acStack_8dd[uVar12 + 0x401] = '.';
      uVar12 = uVar8;
    }
    acStack_8dd[uVar12 + 0x401] = '\0';
    puVar21 = local_18;
    if (uVar17 == 0) {
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 0x401] != '\0');
      if (uVar17 + 1 < 0x400) {
        (acStack_8dd + uVar17 + 0x401)[0] = '0';
        (acStack_8dd + uVar17 + 0x401)[1] = '\0';
      }
    }
    else {
      uVar8 = 0;
      do {
        *(byte *)((int)local_64 + uVar8) = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
        puVar21 = local_18;
        uVar12 = uVar8 + 1;
        if (8 < uVar8) break;
        bVar6 = 9 < uVar17;
        uVar8 = uVar12;
        uVar17 = uVar17 / 10;
      } while (bVar6);
      do {
        iVar18 = uVar12 - 1;
        uVar12 = uVar12 - 1;
        uVar8 = 0;
        do {
          uVar17 = uVar8;
          uVar8 = uVar17 + 1;
        } while (acStack_8dd[uVar17 + 0x401] != '\0');
        if (uVar17 + 1 < 0x400) {
          acStack_8dd[uVar17 + 0x401] = *(char *)((int)local_64 + iVar18);
          acStack_8dd[uVar17 + 0x402] = '\0';
        }
        pbVar13 = local_1c;
      } while (uVar12 != 0);
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000cdc3;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 0x401] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
    acStack_8dd[uVar17 + 0x401] = '\0';
    uVar1 = puVar21[2];
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)(uVar1 >> 8);
      if (uVar1 < 0xa000) {
        bVar16 = bVar16 >> 4 | 0x30;
      }
      else {
        bVar16 = (bVar16 >> 4) + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar10 = uVar1 >> 8 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)uVar10;
      if (uVar10 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar10 = uVar1 >> 4 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)uVar10;
      if (uVar10 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)(uVar1 & 0xf);
      if ((uVar1 & 0xf) < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000cdcc;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 0x401] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
    acStack_8dd[uVar17 + 0x401] = '\0';
    uVar1 = puVar21[3];
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)(uVar1 >> 8);
      if (uVar1 < 0xa000) {
        bVar16 = bVar16 >> 4 | 0x30;
      }
      else {
        bVar16 = (bVar16 >> 4) + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar10 = uVar1 >> 8 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)uVar10;
      if (uVar10 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar10 = uVar1 >> 4 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)uVar10;
      if (uVar10 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      bVar16 = (byte)(uVar1 & 0xf);
      if ((uVar1 & 0xf) < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000cdd5;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 0x401] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
    acStack_8dd[uVar17 + 0x401] = '\0';
    bVar16 = *pbVar13;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 0xa0) {
        bVar9 = bVar16 >> 4 | 0x30;
      }
      else {
        bVar9 = (bVar16 >> 4) + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar9;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    bVar16 = bVar16 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar8 < 0x400) {
      acStack_8dd[uVar17 + 0x401] = '.';
      uVar17 = uVar8;
    }
    acStack_8dd[uVar17 + 0x401] = '\0';
    bVar16 = *(byte *)((int)puVar21 + 9);
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 0xa0) {
        bVar9 = bVar16 >> 4 | 0x30;
      }
      else {
        bVar9 = (bVar16 >> 4) + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar9;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    bVar16 = bVar16 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar8 < 0x400) {
      acStack_8dd[uVar17 + 0x401] = '.';
      uVar17 = uVar8;
    }
    acStack_8dd[uVar17 + 0x401] = '\0';
    bVar16 = (byte)puVar21[5];
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 0xa0) {
        bVar9 = bVar16 >> 4 | 0x30;
      }
      else {
        bVar9 = (bVar16 >> 4) + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar9;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    bVar16 = bVar16 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      cVar15 = ' ';
      pcVar19 = str_1000cddd;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar17 + 0x401] = cVar15;
        uVar17 = uVar17 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar17 < 0x3ff);
    }
    acStack_8dd[uVar17 + 0x401] = '\0';
    bVar16 = *(byte *)((int)puVar21 + 0xb);
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 0xa0) {
        bVar9 = bVar16 >> 4 | 0x30;
      }
      else {
        bVar9 = (bVar16 >> 4) + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar9;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    bVar16 = bVar16 & 0xf;
    uVar8 = 0;
    do {
      uVar17 = uVar8;
      uVar8 = uVar17 + 1;
    } while (acStack_8dd[uVar17 + 0x401] != '\0');
    if (uVar17 + 1 < 0x400) {
      if (bVar16 < 10) {
        bVar16 = bVar16 | 0x30;
      }
      else {
        bVar16 = bVar16 + 0x37;
      }
      acStack_8dd[uVar17 + 0x401] = bVar16;
      acStack_8dd[uVar17 + 0x402] = '\0';
    }
    uVar17 = *(uint *)(puVar21 + 8);
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar8 < 0x400) {
      acStack_8dd[uVar12 + 0x401] = ' ';
      uVar12 = uVar8;
    }
    acStack_8dd[uVar12 + 0x401] = '\0';
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar12 + 1 < 0x400) {
      cVar15 = 'c';
      pcVar19 = str_1000cde8;
      do {
        pcVar19 = pcVar19 + 1;
        acStack_8dd[uVar12 + 0x401] = cVar15;
        uVar12 = uVar12 + 1;
        cVar15 = *pcVar19;
        if (cVar15 == '\0') break;
      } while (uVar12 < 0x3ff);
    }
    acStack_8dd[uVar12 + 0x401] = '\0';
    uVar8 = 0;
    do {
      uVar12 = uVar8;
      uVar8 = uVar12 + 1;
    } while (acStack_8dd[uVar12 + 0x401] != '\0');
    if (uVar8 < 0x400) {
      acStack_8dd[uVar12 + 0x401] = '=';
      uVar12 = uVar8;
    }
    acStack_8dd[uVar12 + 0x401] = '\0';
    iVar18 = 8;
    do {
      uVar12 = uVar17 >> ((char)iVar18 * '\x04' - 4U & 0x1f) & 0xf;
      bVar9 = (byte)uVar12;
      bVar16 = bVar9 + 0x37;
      uVar8 = 0;
      do {
        uVar20 = uVar8;
        uVar8 = uVar20 + 1;
      } while (acStack_8dd[uVar20 + 0x401] != '\0');
      if (uVar20 + 1 < 0x400) {
        if (uVar12 < 10) {
          bVar16 = bVar9 | 0x30;
        }
        acStack_8dd[uVar20 + 0x401] = bVar16;
        acStack_8dd[uVar20 + 0x402] = '\0';
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    uVar8 = 0;
    puVar21 = local_18;
    do {
      local_1c = (byte *)uVar8;
      uVar8 = *(uint *)(puVar21 + uVar8 * 2 + 10);
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uVar12 = uVar17;
          uVar17 = uVar12 + 1;
        } while (acStack_8dd[uVar12 + 0x401] != '\0');
        if (uVar12 + 1 < 0x400) {
          cVar15 = ' ';
          pcVar19 = &DAT_1000cdf1;
          do {
            acStack_8dd[uVar12 + 0x401] = cVar15;
            uVar12 = uVar12 + 1;
            cVar15 = *pcVar19;
            if (cVar15 == '\0') break;
            pcVar19 = pcVar19 + 1;
          } while (uVar12 < 0x3ff);
        }
        acStack_8dd[uVar12 + 0x401] = '\0';
        if (local_1c == (byte *)0x0) {
          uVar17 = 0;
          do {
            uVar12 = uVar17;
            uVar17 = uVar12 + 1;
          } while (acStack_8dd[uVar12 + 0x401] != '\0');
          if (uVar12 + 1 < 0x400) {
            (acStack_8dd + uVar12 + 0x401)[0] = '0';
            (acStack_8dd + uVar12 + 0x401)[1] = '\0';
          }
        }
        else {
          pbVar13 = local_1c;
          uVar17 = 0;
          do {
            *(byte *)((int)local_64 + uVar17) =
                 (char)pbVar13 + (char)((uint)pbVar13 / 10) * -10 | 0x30;
            uVar12 = uVar17 + 1;
            if (8 < uVar17) break;
            bVar6 = 9 < pbVar13;
            pbVar13 = (byte *)((uint)pbVar13 / 10);
            uVar17 = uVar12;
          } while (bVar6);
          do {
            iVar18 = uVar12 - 1;
            uVar12 = uVar12 - 1;
            uVar17 = 0;
            do {
              uVar20 = uVar17;
              uVar17 = uVar20 + 1;
            } while (acStack_8dd[uVar20 + 0x401] != '\0');
            if (uVar20 + 1 < 0x400) {
              acStack_8dd[uVar20 + 0x401] = *(char *)((int)local_64 + iVar18);
              acStack_8dd[uVar20 + 0x402] = '\0';
            }
          } while (uVar12 != 0);
          puVar21 = local_18;
        }
        uVar17 = 0;
        do {
          uVar12 = uVar17;
          uVar17 = uVar12 + 1;
        } while (acStack_8dd[uVar12 + 0x401] != '\0');
        if (uVar17 < 0x400) {
          acStack_8dd[uVar12 + 0x401] = '=';
          uVar12 = uVar17;
        }
        acStack_8dd[uVar12 + 0x401] = '\0';
        iVar18 = 8;
        do {
          uVar12 = uVar8 >> ((char)iVar18 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar12;
          bVar16 = bVar9 + 0x37;
          uVar17 = 0;
          do {
            uVar20 = uVar17;
            uVar17 = uVar20 + 1;
          } while (acStack_8dd[uVar20 + 0x401] != '\0');
          if (uVar20 + 1 < 0x400) {
            if (uVar12 < 10) {
              bVar16 = bVar9 | 0x30;
            }
            acStack_8dd[uVar20 + 0x401] = bVar16;
            acStack_8dd[uVar20 + 0x402] = '\0';
          }
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      piVar5 = local_14;
      uVar8 = (int)local_1c + 1;
    } while (uVar8 != 6);
    if (acStack_8dd[1] != '\0') {
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 0x401] != '\0');
      if (uVar8 < 0x400) {
        acStack_8dd[uVar17 + 0x401] = ' ';
        uVar17 = uVar8;
      }
      acStack_8dd[uVar17 + 0x401] = '\0';
      uVar8 = 0;
      do {
        uVar17 = uVar8;
        uVar8 = uVar17 + 1;
      } while (acStack_8dd[uVar17 + 0x401] != '\0');
      if (uVar17 + 1 < 0x400) {
        pcVar19 = acStack_8dd + 2;
        cVar15 = acStack_8dd[1];
        do {
          acStack_8dd[uVar17 + 0x401] = cVar15;
          uVar17 = uVar17 + 1;
          cVar15 = *pcVar19;
          if (cVar15 == '\0') break;
          pcVar19 = pcVar19 + 1;
        } while (uVar17 < 0x3ff);
      }
      acStack_8dd[uVar17 + 0x401] = '\0';
    }
    if ((piVar5 != (int *)0x0) && (pcVar2 = (code *)piVar5[3], pcVar2 != (code *)0x0)) {
      (*pcVar2)(&local_dc,local_20,&local_4dc);
    }
  }
  return;
}

#undef DAT_1000cdbf
#undef DAT_1000cdf1
#undef DAT_1000e000
#undef DAT_1000e010
#undef DAT_1000e011
#undef DAT_1000e012
#undef DAT_1000e013
#undef DAT_1000e014
#undef DAT_1000e015
#undef DAT_1000e016
#undef DAT_1000e017
#undef DAT_1000e018
#undef DAT_1000e01c
#undef DAT_1000e020
#undef DAT_1000e021
#undef DAT_1000e022
#undef DAT_1000e023
#undef DAT_1000e024
#undef DAT_1000e025
#undef DAT_1000e026
#undef DAT_1000e027
#undef DAT_1000e028
#undef DAT_1000e02c
#undef DAT_1000e02e
#undef DAT_1000e02f
#undef DAT_1000e030
#undef DAT_1000e034
#undef DAT_1000e036
#undef DAT_1000e037
#undef DAT_1000e040
#undef DAT_1000e041
#undef DAT_1000e042
#undef DAT_1000e043
#undef DAT_1000e044
#undef DAT_1000e045
#undef DAT_1000e046
#undef DAT_1000e047
#undef DAT_1000e048
#undef DAT_1000e049
#undef DAT_1000e04a
#undef DAT_1000e04b
#undef DAT_1000e04c
#undef DAT_1000e04d
#undef DAT_1000e04e
#undef DAT_1000e04f
#undef DAT_1000e050
#undef DAT_1000e051
#undef DAT_1000e052
#undef DAT_1000e053
#undef DAT_1000e060
#undef DAT_1000e064
#undef DAT_1000e065
#undef DAT_1000e066
#undef DAT_1000e067
#undef DAT_1000e068
#undef DAT_1000e069
#undef DAT_1000e06a
#undef DAT_1000e06b
#undef DAT_1000e06c
#undef DAT_1000e06d
#undef DAT_1000e06e
#undef DAT_1000e06f
#undef DAT_1000e070
#undef DAT_1000e071
#undef DAT_1000e072
#undef DAT_1000e073
#undef DAT_1000e074
#undef DAT_1000e075
#undef DAT_1000e076
#undef DAT_1000e077
#undef DAT_1000e080
#undef DAT_1000e081
#undef DAT_1000e082
#undef DAT_1000e083
#undef _DAT_1000e018
#undef _DAT_1000e01c
#undef _DAT_1000e028
#undef _DAT_1000e02c
#undef _DAT_1000e030
#undef _DAT_1000e034
#undef _DAT_1000e060
#undef str_1000c885
#undef str_1000c892
#undef str_1000c8a8
#undef str_1000c8bc
#undef str_1000c8d2
#undef str_1000ccec
#undef str_1000cd0a
#undef str_1000cd26
#undef str_1000cd3c
#undef str_1000cd56
#undef str_1000cd66
#undef str_1000cd73
#undef str_1000cd83
#undef str_1000cd8d
#undef str_1000cd95
#undef str_1000cd9e
#undef str_1000cda6
#undef str_1000cdc3
#undef str_1000cdcc
#undef str_1000cdd5
#undef str_1000cddd
#undef str_1000cde8
#undef local_4dc
#undef local_4a0
#undef local_498
#undef local_48c
#undef local_dc
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef acStack_8dd
#undef cStack_4dd
#undef cStack_dd

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100053d0
 */

void recovered_100053d0(int in_ECX,uint in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (in_ECX != 0) {
    uVar4 = 0;
    do {
      uVar2 = uVar4;
      uVar4 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (param_3 != (char *)0x0) {
      cVar1 = *param_3;
      if (uVar2 + 1 < in_EDX && cVar1 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(in_ECX + uVar2) = cVar1;
          cVar1 = *param_3;
          uVar4 = uVar2 + 1;
          if (cVar1 == '\0') break;
          uVar3 = uVar2 + 2;
          uVar2 = uVar4;
        } while (uVar3 < in_EDX);
      }
      else {
        uVar4 = uVar2;
      }
      *(undefined1 *)(in_ECX + uVar4) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005440
 */

void recovered_10005440(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;

  if (in_ECX != 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar5 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar5) = 0x20;
      uVar2 = uVar5;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (in_EDX != (char *)0x0) {
      cVar3 = *in_EDX;
      if (uVar2 + 1 < 0x400 && cVar3 != '\0') {
        do {
          in_EDX = in_EDX + 1;
          *(char *)(in_ECX + uVar2) = cVar3;
          uVar2 = uVar2 + 1;
          cVar3 = *in_EDX;
          if (cVar3 == '\0') break;
        } while (uVar2 < 0x3ff);
      }
      *(undefined1 *)(in_ECX + uVar2) = 0;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar5 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar5) = 0x3d;
      uVar2 = uVar5;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
  }
  iVar6 = 8;
  do {
    uVar5 = param_3 >> ((char)iVar6 * '\x04' - 4U & 0x1f) & 0xf;
    bVar4 = (byte)uVar5;
    if (uVar5 < 10) {
      bVar4 = bVar4 | 0x30;
    }
    else {
      bVar4 = bVar4 + 0x37;
    }
    if (in_ECX != 0) {
      uVar5 = 0;
      do {
        pcVar1 = (char *)(in_ECX + uVar5);
        uVar5 = uVar5 + 1;
      } while (*pcVar1 != '\0');
      if (uVar5 < 0x400) {
        *(byte *)(in_ECX + -1 + uVar5) = bVar4;
        *(undefined1 *)(in_ECX + uVar5) = 0;
      }
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005570
 */

undefined4 recovered_10005570(int *in_ECX,byte param_2,byte param_3,undefined1 *param_4)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_DL;
  int *piVar4;

  local_24 = 0;
  local_30 = 0;
  local_20 = 0;
  if (in_ECX == (int *)0x0 || param_4 == (undefined1 *)0x0) {
    return 0;
  }
  if (*in_ECX != 0x54584b57) {
    return 0;
  }
  if ((uint)in_ECX[2] < 0x60) {
    return 0;
  }
  if ((code *)in_ECX[0x17] == (code *)0x0) {
    return 0;
  }
  local_1c = (uint)param_3;
  local_18 = (uint)param_2;
  local_14 = in_ECX;
  iVar1 = (*(code *)in_ECX[0x17])(in_DL,local_18,local_1c,0,4,&local_24);
  if (iVar1 == 0) {
    return 0;
  }
  if ((local_24 & 0xffff) == 0) {
    return 0;
  }
  if ((local_24 & 0xffff) == 0xffff) {
    return 0;
  }
  if (*local_14 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_14[2] < 0x60) {
    return 0;
  }
  if ((code *)local_14[0x17] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,8,4,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x60)) ||
      ((code *)local_14[0x17] == (code *)0x0)) ||
     (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,4,4,param_4 + 0x10), iVar1 == 0)) {
    *(undefined4 *)(param_4 + 0x10) = 0;
  }
  if (((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2])) &&
     (((code *)local_14[0x17] != (code *)0x0 &&
      (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,0xc,4,&local_20), iVar1 != 0)))) {
    local_28 = local_20 >> 0x10 & 0xff;
  }
  else {
    local_20 = 0;
    local_28 = 0;
  }
  *param_4 = in_DL;
  param_4[1] = param_2;
  param_4[2] = param_3;
  *(uint *)(param_4 + 4) = local_24;
  *(ushort *)(param_4 + 10) = (ushort)local_30 << 8 | (ushort)local_30 >> 8;
  param_4[9] = (char)((uint)local_30 >> 0x10);
  param_4[8] = (char)((uint)local_30 >> 0x18);
  param_4[0xc] = (char)local_28;
  iVar1 = -0x18;
  piVar4 = local_14;
  do {
    local_2c = 0;
    uVar2 = 0;
    if (((*piVar4 == 0x54584b57) && (0x5f < (uint)piVar4[2])) &&
       ((code *)piVar4[0x17] != (code *)0x0)) {
      iVar3 = (*(code *)piVar4[0x17])(in_DL,local_18,local_1c,iVar1 + 0x28U & 0xffff,4,&local_2c);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = local_2c;
      }
      piVar4 = local_14;
    }
    *(undefined4 *)(param_4 + iVar1 + 0x2c) = uVar2;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0);
  return 1;
}

#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_1000cba1
#define DAT_1000cba1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x663U)))
#undef DAT_1000cba9
#define DAT_1000cba9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x66bU)))
#undef DAT_1000cbdc
#define DAT_1000cbdc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x69eU)))
#undef DAT_1000cbe4
#define DAT_1000cbe4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6a6U)))
#undef DAT_1000cbec
#define DAT_1000cbec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6aeU)))
#undef DAT_1000cc00
#define DAT_1000cc00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6c2U)))
#undef DAT_1000cc08
#define DAT_1000cc08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6caU)))
#undef DAT_1000cc10
#define DAT_1000cc10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6d2U)))
#undef DAT_1000cc18
#define DAT_1000cc18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6daU)))
#undef DAT_1000cc2b
#define DAT_1000cc2b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6edU)))
#undef DAT_1000ccdf
#define DAT_1000ccdf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7a1U)))
#undef str_1000c8e0
#define str_1000c8e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a2U)))
#undef str_1000c8f0
#define str_1000c8f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b2U)))
#undef str_1000c904
#define str_1000c904 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c6U)))
#undef str_1000c91c
#define str_1000c91c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3deU)))
#undef str_1000c934
#define str_1000c934 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f6U)))
#undef str_1000c94d
#define str_1000c94d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40fU)))
#undef str_1000c95e
#define str_1000c95e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000c96e
#define str_1000c96e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x430U)))
#undef str_1000c97d
#define str_1000c97d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43fU)))
#undef str_1000c986
#define str_1000c986 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x448U)))
#undef str_1000c9a2
#define str_1000c9a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x464U)))
#undef str_1000c9ad
#define str_1000c9ad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46fU)))
#undef str_1000c9bd
#define str_1000c9bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47fU)))
#undef str_1000c9c4
#define str_1000c9c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x486U)))
#undef str_1000c9d4
#define str_1000c9d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
#undef str_1000c9e1
#define str_1000c9e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a3U)))
#undef str_1000c9f7
#define str_1000c9f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b9U)))
#undef str_1000ca0d
#define str_1000ca0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_1000ca23
#define str_1000ca23 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#undef str_1000ca39
#define str_1000ca39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fbU)))
#undef str_1000ca52
#define str_1000ca52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x514U)))
#undef str_1000ca6a
#define str_1000ca6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52cU)))
#undef str_1000ca77
#define str_1000ca77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x539U)))
#undef str_1000ca88
#define str_1000ca88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54aU)))
#undef str_1000ca9c
#define str_1000ca9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55eU)))
#undef str_1000caac
#define str_1000caac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56eU)))
#undef str_1000cac3
#define str_1000cac3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x585U)))
#undef str_1000cad6
#define str_1000cad6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x598U)))
#undef str_1000cae0
#define str_1000cae0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a2U)))
#undef str_1000caf3
#define str_1000caf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b5U)))
#undef str_1000cb0a
#define str_1000cb0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ccU)))
#undef str_1000cb16
#define str_1000cb16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d8U)))
#undef str_1000cb22
#define str_1000cb22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e4U)))
#undef str_1000cb2f
#define str_1000cb2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f1U)))
#undef str_1000cb39
#define str_1000cb39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fbU)))
#undef str_1000cb4d
#define str_1000cb4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60fU)))
#undef str_1000cb5c
#define str_1000cb5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61eU)))
#undef str_1000cb6f
#define str_1000cb6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x631U)))
#undef str_1000cb81
#define str_1000cb81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x643U)))
#undef str_1000cb97
#define str_1000cb97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x659U)))
#undef str_1000cbb0
#define str_1000cbb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x672U)))
#undef str_1000cbba
#define str_1000cbba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67cU)))
#undef str_1000cbc6
#define str_1000cbc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x688U)))
#undef str_1000cbf3
#define str_1000cbf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b5U)))
#undef str_1000cc1f
#define str_1000cc1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e1U)))
#undef str_1000cc30
#define str_1000cc30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f2U)))
#undef str_1000cc3a
#define str_1000cc3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fcU)))
#undef str_1000cc4f
#define str_1000cc4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x711U)))
#undef str_1000cc60
#define str_1000cc60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x722U)))
#undef str_1000cc6c
#define str_1000cc6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72eU)))
#undef str_1000cc78
#define str_1000cc78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73aU)))
#undef str_1000cc84
#define str_1000cc84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x746U)))
#undef str_1000cc93
#define str_1000cc93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x755U)))
#undef str_1000cc9d
#define str_1000cc9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75fU)))
#undef str_1000ccab
#define str_1000ccab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76dU)))
#undef str_1000ccbc
#define str_1000ccbc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77eU)))
#undef str_1000ccc8
#define str_1000ccc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78aU)))
#undef str_1000ccd4
#define str_1000ccd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x796U)))
#undef str_1000cce3
#define str_1000cce3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a5U)))
#define bStack_a5 (*(byte *)(frame + 27))
#define local_a4 (*(undefined4 *)(frame + 28))
#define local_9c (*(uint *)(frame + 36))
#define local_98 (*(uint *)(frame + 40))
#define local_94 (*(uint *)(frame + 44))
#define local_90 (*(uint *)(frame + 48))
#define local_84 (*(uint *)(frame + 60))
#define local_80 (*(uint *)(frame + 64))
#define local_7c (*(uint *)(frame + 68))
#define local_78 (*(uint *)(frame + 72))
#define local_74 (*(uint *)(frame + 76))
#define local_70 (*(uint *)(frame + 80))
#define local_6c (*(uint *)(frame + 84))
#define local_68 (*(uint *)(frame + 88))
#define local_64 (*(uint *)(frame + 92))
#define local_60 (*(uint *)(frame + 96))
#define local_5c (*(uint *)(frame + 100))
#define local_54 (*(uint *)(frame + 108))
#define local_50 (*(uint *)(frame + 112))
#define local_4c (*(uint *)(frame + 116))
#define local_48 (*(uint *)(frame + 120))
#define local_44 (*(uint *)(frame + 124))
#define local_40 (*(undefined4 *)(frame + 128))
#define local_3c (*(uint *)(frame + 132))
#define local_38 (*(uint *)(frame + 136))
#define local_34 (*(uint *)(frame + 140))
#define local_30 (*(uint *)(frame + 144))
#define local_2c (*(undefined4 *)(frame + 148))
#define local_28 (*(undefined4 *)(frame + 152))
#define local_1c (*(uint *)(frame + 164))
#define local_18 (*(int * *)(frame + 168))
#define local_14 (*(ushort * *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005780
 */

void recovered_10005780(uint in_EAX,int *in_ECX,undefined1 *in_EDX,int param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 uVar5;
  uint uVar3;
  code *pcVar4;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  ushort *puVar10;
  byte bVar11;
  uint uVar12;
  int *piVar13;
  byte *pbVar14;
  int *piVar15;
  bool bVar16;

  local_14 = (ushort *)in_EDX;
  if (in_EDX == (undefined1 *)0x0) {
    local_2c = CONCAT31((int3)(in_EAX >> 8),in_ECX == (int *)0x0);
    bVar16 = true;
LAB_10005887:
    if (param_4 != 0) {
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = ' ';
        pcVar7 = str_1000c904;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
    }
joined_r0x100058de:
    local_3c = 0;
    if (bVar16) {
LAB_100058e4:
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      local_48 = 0;
      if (local_14 == (ushort *)0x0) {
        uVar12 = 1;
        if (local_3c == 0) {
          uVar12 = 0;
        }
        goto LAB_100082ba;
      }
      if (((char)local_14[4] == '\x01') && (*(char *)((int)local_14 + 9) == '\x06')) {
        if (((((*(uint *)(local_14 + 0x12) & 7) != 4) &&
             ((uVar12 = *(uint *)(local_14 + 0x14), (uVar12 & 6) != 4 && (uVar12 != 0)))) &&
            ((uVar12 & 1) == 0)) && (uVar12 = uVar12 & 0xfffffff0, uVar12 != 0)) {
          local_28 = 0;
          local_a4 = 0;
          if (((char)local_2c == '\0') && (*in_ECX == 0x54584b57)) {
            if (0xbb < (uint)in_ECX[2]) {
              if ((code *)in_ECX[0x2e] == (code *)0x0) goto LAB_10008555;
              iVar1 = (*(code *)in_ECX[0x2e])(uVar12,0,0x1000,&local_28);
              if (iVar1 == 0) goto LAB_10005926;
              local_1c = local_28;
LAB_1000858b:
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar8 = 'a';
                  pcVar7 = str_1000cb97;
                  do {
                    pcVar7 = pcVar7 + 1;
                    *(char *)(param_4 + uVar6) = cVar8;
                    uVar6 = uVar6 + 1;
                    cVar8 = *pcVar7;
                    if (cVar8 == '\0') break;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              iVar1 = 8;
              do {
                uVar12 = local_1c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                if (uVar12 < 10) {
                  uVar12 = uVar12 | 0x30;
                }
                else {
                  uVar12 = (uint)(byte)((char)uVar12 + 0x37);
                }
                PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
                if (param_4 != 0) {
                  uVar6 = 0;
                  do {
                    uVar3 = uVar6;
                    uVar6 = uVar3 + 1;
                  } while (*(char *)(param_4 + uVar3) != '\0');
                  if (uVar3 + 1 < 0x400) {
                    pbVar14 = (byte *)((int)&local_a4 + 1);
                    do {
                      *(char *)(param_4 + uVar3) = (char)uVar12;
                      uVar3 = uVar3 + 1;
                      uVar12 = (uint)*pbVar14;
                      if (*pbVar14 == 0) break;
                      pbVar14 = pbVar14 + 1;
                    } while (uVar3 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar3) = 0;
                }
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
              local_28 = local_1c;
              if ((local_1c != 0) && (*in_ECX == 0x54584b57)) {
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_10009783;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_10009783:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_100097b5;
                  }
                  (*pcVar4)(local_1c,4,&local_30);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_1000a447;
                }
LAB_100097b5:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_1000a0bd;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_1000a0bd:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_1000a0f3;
                  }
                  local_28 = local_1c;
                  (*pcVar4)(local_1c + 4,4,&local_38);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_1000a447;
                }
LAB_1000a0f3:
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_1000a3b2;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_1000a3b2:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_1000a3e0;
                  }
                  local_28 = local_1c;
                  (*pcVar4)(local_1c + 0xc,4,&local_44);
                  local_1c = local_28;
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_1000a447;
                }
LAB_1000a3e0:
                local_28 = local_1c;
                if ((uint)in_ECX[2] < 0xc0) {
                  if (0x6b < (uint)in_ECX[2]) goto LAB_1000a42b;
                }
                else {
                  pcVar4 = (code *)in_ECX[0x2f];
                  if (pcVar4 == (code *)0x0) {
LAB_1000a42b:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_1000a447;
                  }
                  (*pcVar4)(local_1c + 0x10,4,&local_48);
                }
              }
LAB_1000a447:
              if ((((int)local_38 < 0) || (local_28 == 0)) || (*in_ECX != 0x54584b57))
              goto LAB_1000a4e1;
              iVar1 = local_28 + 4;
              uVar12 = in_ECX[2];
              if (uVar12 < 0xc4) {
                if (0x6f < uVar12) goto LAB_1000a484;
LAB_1000a4ba:
                if (uVar12 < 0x6c) goto LAB_1000a4e1;
LAB_1000a4cb:
                pcVar4 = (code *)in_ECX[0x1a];
                if (pcVar4 == (code *)0x0) goto LAB_1000a4e1;
              }
              else {
                pcVar4 = (code *)in_ECX[0x30];
                if (pcVar4 == (code *)0x0) {
LAB_1000a484:
                  pcVar4 = (code *)in_ECX[0x1b];
                  if (pcVar4 != (code *)0x0) goto LAB_1000a48b;
                }
                else {
LAB_1000a48b:
                  (*pcVar4)(iVar1,4,local_38 | 0x80000000);
                  if ((local_28 == 0) || (*in_ECX != 0x54584b57)) goto LAB_1000a4e1;
                  iVar1 = local_28 + 4;
                }
                uVar12 = in_ECX[2];
                if (uVar12 < 0xc0) goto LAB_1000a4ba;
                pcVar4 = (code *)in_ECX[0x2f];
                if (pcVar4 == (code *)0x0) goto LAB_1000a4cb;
              }
              (*pcVar4)(iVar1,4,&local_38);
LAB_1000a4e1:
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar8 = 'a';
                  pcVar7 = &DAT_1000cba1;
                  do {
                    *(char *)(param_4 + uVar6) = cVar8;
                    uVar6 = uVar6 + 1;
                    cVar8 = *pcVar7;
                    if (cVar8 == '\0') break;
                    pcVar7 = pcVar7 + 1;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
                uVar12 = 0;
                do {
                  uVar6 = uVar12;
                  uVar12 = uVar6 + 1;
                } while (*(char *)(param_4 + uVar6) != '\0');
                if (uVar12 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                  uVar6 = uVar12;
                }
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              iVar1 = 8;
LAB_1000a562:
              do {
                uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                bVar11 = (byte)uVar12;
                if (uVar12 < 10) {
                  bVar11 = bVar11 | 0x30;
                }
                else {
                  bVar11 = bVar11 + 0x37;
                }
                if (param_4 == 0) goto LAB_1000a5ab;
                uVar12 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (*pcVar7 != '\0');
                if (uVar12 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar12) = bVar11;
                  *(undefined1 *)(param_4 + uVar12) = 0;
                }
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'a';
                pcVar7 = &DAT_1000cba9;
                do {
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000a629:
              iVar1 = 8;
LAB_1000a633:
              uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 == 0) {
                iVar1 = iVar1 + -1;
                if (iVar1 == 0) goto LAB_1000a6f9;
                goto LAB_1000a633;
              }
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = bVar11;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
              iVar1 = iVar1 + -1;
              if (iVar1 != 0) goto LAB_1000a633;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'a';
                pcVar7 = str_1000cbb0;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000a6f9:
              iVar1 = 8;
LAB_1000a703:
              uVar12 = local_44 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 == 0) {
                iVar1 = iVar1 + -1;
                if (iVar1 == 0) goto LAB_1000a7c9;
                goto LAB_1000a703;
              }
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = bVar11;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
              iVar1 = iVar1 + -1;
              if (iVar1 != 0) goto LAB_1000a703;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'a';
                pcVar7 = str_1000cbba;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000a7c9:
              iVar1 = 8;
              do {
                uVar12 = local_48 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                bVar11 = (byte)uVar12;
                if (uVar12 < 10) {
                  bVar11 = bVar11 | 0x30;
                }
                else {
                  bVar11 = bVar11 + 0x37;
                }
                if (param_4 != 0) {
                  uVar12 = 0;
                  do {
                    pcVar7 = (char *)(param_4 + uVar12);
                    uVar12 = uVar12 + 1;
                  } while (*pcVar7 != '\0');
                  if (uVar12 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar12) = bVar11;
                    *(undefined1 *)(param_4 + uVar12) = 0;
                  }
                }
                iVar1 = iVar1 + -1;
                uVar12 = 1;
              } while (iVar1 != 0);
              goto LAB_1000598c;
            }
            if (0x67 < (uint)in_ECX[2]) {
LAB_10008555:
              if (((code *)in_ECX[0x19] != (code *)0x0) &&
                 (iVar1 = (*(code *)in_ECX[0x19])(uVar12,0,0x1000,&local_a4), iVar1 != 0)) {
                local_1c = local_a4;
                local_28 = local_a4;
                goto LAB_1000858b;
              }
            }
          }
        }
LAB_10005926:
        if (param_4 == 0) goto LAB_1000597c;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000cb81;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
      }
      else {
LAB_1000597c:
        uVar12 = 0;
      }
LAB_1000598c:
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      local_18 = in_ECX;
      if (((char)local_14[4] == '\x04') && (*(char *)((int)local_14 + 9) == '\x03')) {
        uVar6 = *(uint *)(local_14 + 10);
        if ((uVar6 & 1) == 0 && uVar6 != 0) {
          iVar1 = 0;
          if ((uVar6 & 6) == 4) {
            iVar1 = *(int *)(local_14 + 0xc);
          }
          uVar6 = uVar6 & 0xfffffff0;
          if (uVar6 != 0 || iVar1 != 0) {
            local_28 = 0;
            local_a4 = 0;
            if (((char)local_2c == '\0') && (*in_ECX == 0x54584b57)) {
              if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
                if (((0x67 < (uint)in_ECX[2] && iVar1 == 0) && ((code *)in_ECX[0x19] != (code *)0x0)
                    ) && (iVar1 = (*(code *)in_ECX[0x19])(uVar6,0,0x1000,&local_a4), iVar1 != 0)) {
                  local_34 = uVar12;
                  local_28 = local_a4;
                  goto LAB_10007797;
                }
              }
              else {
                iVar1 = (*(code *)in_ECX[0x2e])(uVar6,iVar1,0x1000,&local_28);
                in_ECX = local_18;
                if (iVar1 != 0) {
                  local_34 = uVar12;
LAB_10007797:
                  if (param_4 != 0) {
                    uVar6 = 0;
                    do {
                      uVar3 = uVar6;
                      uVar6 = uVar3 + 1;
                    } while (*(char *)(param_4 + uVar3) != '\0');
                    if (uVar6 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar6) = 0x20;
                      uVar3 = uVar6;
                    }
                    *(undefined1 *)(param_4 + uVar3) = 0;
                    uVar6 = 0;
                    do {
                      uVar3 = uVar6;
                      uVar6 = uVar3 + 1;
                    } while (*(char *)(param_4 + uVar3) != '\0');
                    if (uVar3 + 1 < 0x400) {
                      cVar8 = 'h';
                      pcVar7 = &DAT_1000cbdc;
                      do {
                        *(char *)(param_4 + uVar3) = cVar8;
                        uVar3 = uVar3 + 1;
                        cVar8 = *pcVar7;
                        if (cVar8 == '\0') break;
                        pcVar7 = pcVar7 + 1;
                      } while (uVar3 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar3) = 0;
                    uVar6 = 0;
                    do {
                      uVar3 = uVar6;
                      uVar6 = uVar3 + 1;
                    } while (*(char *)(param_4 + uVar3) != '\0');
                    if (uVar6 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar6) = 0x3d;
                      uVar3 = uVar6;
                    }
                    *(undefined1 *)(param_4 + uVar3) = 0;
                  }
                  iVar1 = 8;
                  do {
                    uVar6 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar6;
                    if (uVar6 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
                    if (param_4 != 0) {
                      uVar6 = 0;
                      do {
                        uVar3 = uVar6;
                        uVar6 = uVar3 + 1;
                      } while (*(char *)(param_4 + uVar3) != '\0');
                      if (uVar3 + 1 < 0x400) {
                        pbVar14 = (byte *)((int)&local_a4 + 1);
                        do {
                          *(byte *)(param_4 + uVar3) = bVar11;
                          uVar3 = uVar3 + 1;
                          bVar11 = *pbVar14;
                          if (bVar11 == 0) break;
                          pbVar14 = pbVar14 + 1;
                        } while (uVar3 < 0x3ff);
                      }
                      *(undefined1 *)(param_4 + uVar3) = 0;
                      in_ECX = local_18;
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  uVar6 = 0;
                  local_34 = uVar12;
                  if (local_28 == 0) {
LAB_10009a49:
                  }
                  else if (*in_ECX == 0x54584b57) {
                    if ((uint)in_ECX[2] < 0xc0) {
                      if (0x6b < (uint)in_ECX[2]) goto LAB_100094e2;
LAB_10009748:
                      if ((uint)in_ECX[2] < 0xc0) {
                        if (0x6b < (uint)in_ECX[2]) goto LAB_10009a29;
LAB_10009a47:
                        uVar6 = local_28;
                      }
                      else {
                        pcVar4 = (code *)in_ECX[0x2f];
                        if (pcVar4 == (code *)0x0) {
LAB_10009a29:
                          pcVar4 = (code *)in_ECX[0x1a];
                          if (pcVar4 == (code *)0x0) goto LAB_10009a47;
                        }
                        (*pcVar4)(local_28 + 8,4,&local_38);
                        uVar6 = local_28;
                      }
                      goto LAB_10009a49;
                    }
                    pcVar4 = (code *)in_ECX[0x2f];
                    if (pcVar4 == (code *)0x0) {
LAB_100094e2:
                      pcVar4 = (code *)in_ECX[0x1a];
                      if (pcVar4 == (code *)0x0) goto LAB_10009748;
                    }
                    (*pcVar4)(local_28,4,&local_30);
                    uVar6 = 0;
                    if (local_28 != 0) {
                      uVar6 = local_28;
                      if (*in_ECX == 0x54584b57) goto LAB_10009748;
                    }
                  }
                  else {
                    uVar6 = local_28;
                  }
                  if ((local_38 & 1) == 0) {
                    uVar12 = 0;
                    if (uVar6 != 0) {
                      if (*in_ECX != 0x54584b57) goto LAB_10009ac4;
                      local_1c = uVar6 + 8;
                      uVar3 = in_ECX[2];
                      if (uVar3 < 0xc4) {
                        if (0x6f < uVar3) goto LAB_10009d42;
LAB_10009d8d:
                        uVar12 = uVar6;
                        if (0x6b < uVar3) {
LAB_1000a3fb:
                          pcVar4 = (code *)in_ECX[0x1a];
                          uVar12 = uVar6;
                          if (pcVar4 != (code *)0x0) goto LAB_1000a408;
                        }
                      }
                      else {
                        pcVar4 = (code *)in_ECX[0x30];
                        if (pcVar4 == (code *)0x0) {
LAB_10009d42:
                          pcVar4 = (code *)in_ECX[0x1b];
                          if (pcVar4 != (code *)0x0) goto LAB_10009d49;
                        }
                        else {
LAB_10009d49:
                          (*pcVar4)(local_1c,4,local_38 | 1);
                          uVar12 = 0;
                          if (local_28 == 0) goto LAB_10009a88;
                          if (*in_ECX != 0x54584b57) goto LAB_10009ac4;
                          local_1c = local_28 + 8;
                          uVar6 = local_28;
                        }
                        uVar3 = in_ECX[2];
                        if (uVar3 < 0xc0) goto LAB_10009d8d;
                        pcVar4 = (code *)in_ECX[0x2f];
                        if (pcVar4 == (code *)0x0) goto LAB_1000a3fb;
LAB_1000a408:
                        (*pcVar4)(local_1c,4,&local_38);
                        uVar12 = local_28;
                      }
                    }
                  }
                  else {
                    uVar12 = uVar6;
                  }
LAB_10009a88:
                  if (*in_ECX != 0x54584b57) goto LAB_10009ac4;
                  if ((uint)in_ECX[2] < 0xc0) {
                    if ((uint)in_ECX[2] < 0x6c) goto LAB_10009ac4;
LAB_10009aab:
                    pcVar4 = (code *)in_ECX[0x1a];
                    if (pcVar4 == (code *)0x0) goto LAB_10009ac4;
                  }
                  else {
                    pcVar4 = (code *)in_ECX[0x2f];
                    if (pcVar4 == (code *)0x0) goto LAB_10009aab;
                  }
                  (*pcVar4)(uVar12 + 0xe,2,&local_44);
LAB_10009ac4:
                  if (param_4 != 0) {
                    uVar12 = 0;
                    do {
                      uVar6 = uVar12;
                      uVar12 = uVar6 + 1;
                    } while (*(char *)(param_4 + uVar6) != '\0');
                    if (uVar12 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                      uVar6 = uVar12;
                    }
                    *(undefined1 *)(param_4 + uVar6) = 0;
                    uVar12 = 0;
                    do {
                      uVar6 = uVar12;
                      uVar12 = uVar6 + 1;
                    } while (*(char *)(param_4 + uVar6) != '\0');
                    if (uVar6 + 1 < 0x400) {
                      cVar8 = 'h';
                      pcVar7 = &DAT_1000cbe4;
                      do {
                        *(char *)(param_4 + uVar6) = cVar8;
                        uVar6 = uVar6 + 1;
                        cVar8 = *pcVar7;
                        if (cVar8 == '\0') break;
                        pcVar7 = pcVar7 + 1;
                      } while (uVar6 < 0x3ff);
                    }
                    *(undefined1 *)(param_4 + uVar6) = 0;
                    uVar12 = 0;
                    do {
                      uVar6 = uVar12;
                      uVar12 = uVar6 + 1;
                    } while (*(char *)(param_4 + uVar6) != '\0');
                    if (uVar12 < 0x400) {
                      *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                      uVar6 = uVar12;
                    }
                    *(undefined1 *)(param_4 + uVar6) = 0;
                  }
                  iVar1 = 8;
LAB_10009b45:
                  do {
                    uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar12;
                    if (uVar12 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    if (param_4 == 0) goto LAB_10009b8b;
                    uVar12 = 0;
                    do {
                      pcVar7 = (char *)(param_4 + uVar12);
                      uVar12 = uVar12 + 1;
                    } while (*pcVar7 != '\0');
                    if (uVar12 < 0x400) {
                      *(byte *)(param_4 + -1 + uVar12) = bVar11;
                      *(undefined1 *)(param_4 + uVar12) = 0;
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar8 = 'h';
                    pcVar7 = &DAT_1000cbec;
                    do {
                      *(char *)(param_4 + uVar6) = cVar8;
                      uVar6 = uVar6 + 1;
                      cVar8 = *pcVar7;
                      if (cVar8 == '\0') break;
                      pcVar7 = pcVar7 + 1;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10009c09:
                  iVar1 = 8;
LAB_10009c13:
                  uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                  bVar11 = (byte)uVar12;
                  if (uVar12 < 10) {
                    bVar11 = bVar11 | 0x30;
                  }
                  else {
                    bVar11 = bVar11 + 0x37;
                  }
                  if (param_4 == 0) {
                    iVar1 = iVar1 + -1;
                    if (iVar1 == 0) goto LAB_10009cd9;
                    goto LAB_10009c13;
                  }
                  uVar12 = 0;
                  do {
                    pcVar7 = (char *)(param_4 + uVar12);
                    uVar12 = uVar12 + 1;
                  } while (*pcVar7 != '\0');
                  if (uVar12 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar12) = bVar11;
                    *(undefined1 *)(param_4 + uVar12) = 0;
                  }
                  iVar1 = iVar1 + -1;
                  if (iVar1 != 0) goto LAB_10009c13;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar8 = 'h';
                    pcVar7 = str_1000cbf3;
                    do {
                      pcVar7 = pcVar7 + 1;
                      *(char *)(param_4 + uVar6) = cVar8;
                      uVar6 = uVar6 + 1;
                      cVar8 = *pcVar7;
                      if (cVar8 == '\0') break;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
                  uVar12 = 0;
                  do {
                    uVar6 = uVar12;
                    uVar12 = uVar6 + 1;
                  } while (*(char *)(param_4 + uVar6) != '\0');
                  if (uVar12 < 0x400) {
                    *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                    uVar6 = uVar12;
                  }
                  *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10009cd9:
                  iVar1 = 8;
                  do {
                    uVar12 = local_44 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
                    bVar11 = (byte)uVar12;
                    if (uVar12 < 10) {
                      bVar11 = bVar11 | 0x30;
                    }
                    else {
                      bVar11 = bVar11 + 0x37;
                    }
                    if (param_4 != 0) {
                      uVar12 = 0;
                      do {
                        pcVar7 = (char *)(param_4 + uVar12);
                        uVar12 = uVar12 + 1;
                      } while (*pcVar7 != '\0');
                      if (uVar12 < 0x400) {
                        *(byte *)(param_4 + -1 + uVar12) = bVar11;
                        *(undefined1 *)(param_4 + uVar12) = 0;
                      }
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                  uVar6 = 1;
                  uVar12 = local_34;
                  goto LAB_10007809;
                }
              }
            }
          }
        }
        if (param_4 != 0) {
          uVar6 = 0;
          do {
            uVar3 = uVar6;
            uVar6 = uVar3 + 1;
          } while (*(char *)(param_4 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            cVar8 = ' ';
            pcVar7 = str_1000cbc6;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar3) = cVar8;
              uVar3 = uVar3 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar3 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar3) = 0;
          uVar6 = 0;
LAB_10007809:
          uVar12 = uVar12 | uVar6;
        }
      }
      piVar15 = local_18;
      local_28 = 0;
      local_30 = 0;
      local_38 = 0;
      local_44 = 0;
      puVar10 = local_14;
      if (((char)local_14[4] != '\f') || (*(char *)((int)local_14 + 9) != '\x03'))
      goto LAB_10007a9c;
      uVar6 = *(uint *)(local_14 + 10);
      piVar13 = in_ECX;
      local_34 = uVar12;
      if ((uVar6 & 1) != 0 || uVar6 == 0) {
LAB_1000794d:
        uVar12 = 0;
        puVar10 = local_14;
LAB_1000796a:
        local_48 = 0;
        uVar6 = *(uint *)(puVar10 + uVar12 * 2 + 10);
        if ((uVar6 & 1) == 0) goto LAB_10007960;
        if ((((short)(uVar6 & 0xfffffffc) == 0 || (char)local_2c != '\0') ||
            (*piVar13 != 0x54584b57)) || ((uint)piVar13[2] < 0x58)) goto LAB_10007960;
        if ((code *)piVar13[0x15] == (code *)0x0) goto LAB_10007960;
        local_1c = uVar6 & 0xfffffffc;
        iVar1 = (*(code *)piVar13[0x15])(uVar6 & 0xfffc,2,&local_48);
        puVar10 = local_14;
        if (iVar1 == 0) goto LAB_10007960;
        if (param_4 == 0) {
          if (uVar12 != 0) goto LAB_100085ca;
          goto LAB_100087ac;
        }
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000cc1f;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        if (uVar12 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_10007a17:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'u';
            pcVar7 = &DAT_1000cc2b;
            do {
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
              pcVar7 = pcVar7 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        else {
LAB_100085ca:
          uVar6 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar6) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar3 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar16 = 9 < uVar12;
            uVar6 = uVar3;
            uVar12 = uVar12 / 10;
          } while (bVar16);
          do {
            while (uVar12 = uVar3 - 1, param_4 != 0) {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              uVar3 = uVar12;
              if (uVar12 == 0) goto LAB_10007a17;
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
        }
LAB_100087ac:
        iVar1 = 8;
LAB_100087b6:
        uVar12 = local_1c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100087d4;
LAB_10008802:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_10008880;
          goto LAB_100087b6;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_10008802;
LAB_100087d4:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100087b6;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'u';
          pcVar7 = str_1000cc30;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10008880:
        iVar1 = 8;
        do {
          uVar12 = local_48 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        goto LAB_1000a39b;
      }
      iVar1 = 0;
      if ((uVar6 & 6) == 4) {
        iVar1 = *(int *)(local_14 + 0xc);
      }
      uVar6 = uVar6 & 0xfffffff0;
      if (uVar6 == 0 && iVar1 == 0) goto LAB_1000794d;
      local_28 = 0;
      local_a4 = 0;
      if (((char)local_2c != '\0') || (*in_ECX != 0x54584b57)) goto LAB_1000794d;
      if (((uint)in_ECX[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
        piVar13 = piVar15;
        if ((((uint)in_ECX[2] < 0x68 || iVar1 != 0) || ((code *)local_18[0x19] == (code *)0x0)) ||
           (iVar1 = (*(code *)local_18[0x19])(uVar6,0,0x1000,&local_a4), iVar1 == 0))
        goto LAB_1000794d;
        local_28 = local_a4;
      }
      else {
        iVar1 = (*(code *)local_18[0x2e])(uVar6,iVar1,0x1000,&local_28);
        piVar13 = local_18;
        piVar15 = local_18;
        if (iVar1 == 0) goto LAB_1000794d;
      }
      if (param_4 != 0) {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'u';
          pcVar7 = &DAT_1000cc00;
          do {
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            pcVar7 = pcVar7 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
      }
      iVar1 = 8;
      do {
        uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        if (uVar12 < 10) {
          uVar12 = uVar12 | 0x30;
        }
        else {
          uVar12 = (uint)(byte)((char)uVar12 + 0x37);
        }
        PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
        if (param_4 != 0) {
          uVar6 = 0;
          do {
            uVar3 = uVar6;
            uVar6 = uVar3 + 1;
          } while (*(char *)(param_4 + uVar3) != '\0');
          if (uVar3 + 1 < 0x400) {
            pbVar14 = (byte *)((int)&local_a4 + 1);
            do {
              *(char *)(param_4 + uVar3) = (char)uVar12;
              uVar3 = uVar3 + 1;
              uVar12 = (uint)*pbVar14;
              if (*pbVar14 == 0) break;
              pbVar14 = pbVar14 + 1;
            } while (uVar3 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar3) = 0;
          piVar15 = local_18;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_1000a132;
      if ((uint)piVar15[2] < 0xc0) {
        if (0x6b < (uint)piVar15[2]) goto LAB_10009528;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10009528:
          pcVar4 = (code *)piVar15[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10009555;
        }
        (*pcVar4)(local_28,4,&local_30);
        if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_1000a132;
      }
LAB_10009555:
      if ((uint)piVar15[2] < 0xc0) {
        if (0x6b < (uint)piVar15[2]) goto LAB_100099d3;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_100099d3:
          pcVar4 = (code *)piVar15[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10009a03;
        }
        (*pcVar4)(local_28 + 4,4,&local_38);
        if ((local_28 == 0) || (*piVar15 != 0x54584b57)) goto LAB_1000a132;
      }
LAB_10009a03:
      if ((uint)piVar15[2] < 0xc0) {
        if ((uint)piVar15[2] < 0x6c) goto LAB_1000a132;
LAB_1000a119:
        pcVar4 = (code *)piVar15[0x1a];
        if (pcVar4 == (code *)0x0) goto LAB_1000a132;
      }
      else {
        pcVar4 = (code *)piVar15[0x2f];
        if (pcVar4 == (code *)0x0) goto LAB_1000a119;
      }
      (*pcVar4)(local_28 + 8,4,&local_44);
LAB_1000a132:
      if (param_4 != 0) {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'u';
          pcVar7 = &DAT_1000cc08;
          do {
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            pcVar7 = pcVar7 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
      }
      iVar1 = 8;
LAB_1000a1b3:
      do {
        uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 == 0) goto LAB_1000a1fb;
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'u';
        pcVar7 = &DAT_1000cc10;
        do {
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
          pcVar7 = pcVar7 + 1;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000a279:
      iVar1 = 8;
LAB_1000a283:
      uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar12;
      if (uVar12 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      if (param_4 == 0) {
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) goto LAB_1000a349;
        goto LAB_1000a283;
      }
      uVar12 = 0;
      do {
        pcVar7 = (char *)(param_4 + uVar12);
        uVar12 = uVar12 + 1;
      } while (*pcVar7 != '\0');
      if (uVar12 < 0x400) {
        *(byte *)(param_4 + -1 + uVar12) = bVar11;
        *(undefined1 *)(param_4 + uVar12) = 0;
      }
      iVar1 = iVar1 + -1;
      if (iVar1 != 0) goto LAB_1000a283;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'u';
        pcVar7 = &DAT_1000cc18;
        do {
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
          pcVar7 = pcVar7 + 1;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000a349:
      iVar1 = 8;
      do {
        uVar12 = local_44 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 != 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
LAB_1000a39b:
      uVar12 = 1;
      goto LAB_10007a79;
    }
  }
  else {
    uVar12 = 0xffffffff;
    if (*(short *)(in_EDX + 4) == 0x1af4) {
      uVar12 = (uint)*(ushort *)(in_EDX + 6);
      in_EAX = uVar12 & 0xffffffc0;
      if (in_EAX == 0x1000) {
        uVar12 = uVar12 - 0x1000;
      }
      else if (in_EAX == 0x1040) {
        uVar12 = uVar12 - 0x1040;
      }
      else {
        uVar12 = 0xffffffff;
      }
    }
    bVar16 = uVar12 == 0xffffffff;
    local_a4 = 0;
    local_28 = 0;
    if (in_ECX == (int *)0x0) {
      local_2c = CONCAT31((int3)(in_EAX >> 8),1);
      goto LAB_10005887;
    }
    if (((*in_ECX != 0x54584b57) || ((uint)in_ECX[2] < 100)) || (in_ECX[0x18] == 0)) {
      local_2c = 0;
      goto LAB_10005887;
    }
    local_1c = uVar12;
    if ((code *)in_ECX[0x17] == (code *)0x0) {
LAB_10005ad2:
      uVar12 = 0;
      if (param_4 != 0) {
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000c91c;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        goto LAB_10005ce3;
      }
LAB_10005d01:
      local_2c = 0;
      goto joined_r0x100058de;
    }
    local_2c = (uint)(byte)in_EDX[2];
    local_18 = in_ECX;
    iVar1 = (*(code *)in_ECX[0x17])(*in_EDX,in_EDX[1],local_2c,4,2,&local_a4);
    piVar15 = local_18;
    if (iVar1 == 0) goto LAB_10005ad2;
    if ((*(uint *)(local_14 + 10) & 1) == 0) {
      uVar12 = (uint)(*(uint *)(local_14 + 10) != 0) * 2;
    }
    else {
      uVar12 = 1;
    }
    uVar6 = uVar12;
    if (*(uint *)(local_14 + 0xc) != 0) {
      uVar6 = uVar12 | 2;
    }
    if ((*(uint *)(local_14 + 0xc) & 1) != 0) {
      uVar6 = uVar12 | 1;
    }
    uVar12 = uVar6;
    if (*(uint *)(local_14 + 0xe) != 0) {
      uVar12 = uVar6 | 2;
    }
    if ((*(uint *)(local_14 + 0xe) & 1) != 0) {
      uVar12 = uVar6 | 1;
    }
    uVar6 = uVar12;
    if (*(uint *)(local_14 + 0x10) != 0) {
      uVar6 = uVar12 | 2;
    }
    if ((*(uint *)(local_14 + 0x10) & 1) != 0) {
      uVar6 = uVar12 | 1;
    }
    uVar12 = uVar6;
    if (*(uint *)(local_14 + 0x12) != 0) {
      uVar12 = uVar6 | 2;
    }
    if ((*(uint *)(local_14 + 0x12) & 1) != 0) {
      uVar12 = uVar6 | 1;
    }
    uVar6 = uVar12;
    if (*(uint *)(local_14 + 0x14) != 0) {
      uVar6 = uVar12 | 2;
    }
    if ((*(uint *)(local_14 + 0x14) & 1) != 0) {
      uVar6 = uVar12 | 1;
    }
    local_2c = uVar6 | 4;
    if (((char)local_14[4] == '\x06') && (*(char *)((int)local_14 + 9) != '\0')) {
      local_2c = uVar6 | 6;
    }
    local_28 = local_a4 | local_2c;
    if ((*in_ECX == 0x54584b57) && (99 < (uint)in_ECX[2])) {
      if ((code *)in_ECX[0x18] != (code *)0x0) {
        local_34 = CONCAT31(PF_PART3(local_34, 1),(char)*local_14);
        local_3c = (uint)*(byte *)((int)local_14 + 1);
        iVar1 = (*(code *)in_ECX[0x18])
                          ((char)*local_14,local_3c,(char)local_14[1],4,2,local_a4 | local_2c);
        piVar13 = local_18;
        in_ECX = piVar15;
        if (iVar1 != 0) {
          if (((*piVar15 == 0x54584b57) && (0x5f < (uint)piVar15[2])) &&
             ((code *)piVar15[0x17] != (code *)0x0)) {
            (*(code *)piVar15[0x17])
                      ((char)*local_14,*(undefined1 *)((int)local_14 + 1),(char)local_14[1],4,2,
                       &local_28);
            in_ECX = piVar13;
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'p';
              pcVar7 = str_1000c94d;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
          iVar1 = 8;
LAB_10008c63:
          uVar12 = local_a4 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) {
            bVar11 = bVar11 + 0x37;
            if (param_4 != 0) goto LAB_10008c80;
LAB_10008cb2:
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_10008d30;
            goto LAB_10008c63;
          }
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_10008cb2;
LAB_10008c80:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 != 0) goto LAB_10008c63;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'p';
            pcVar7 = str_1000c95e;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10008d30:
          iVar1 = 8;
LAB_10008d3a:
          uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) {
            bVar11 = bVar11 + 0x37;
            if (param_4 != 0) goto LAB_10008d57;
LAB_10008d82:
            iVar1 = iVar1 + -1;
            if (iVar1 == 0) goto LAB_10008dfa;
            goto LAB_10008d3a;
          }
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_10008d82;
LAB_10008d57:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 != 0) goto LAB_10008d3a;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'p';
            pcVar7 = str_1000c96e;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10008dfa:
          bVar11 = (byte)(local_2c >> 0x18);
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11 >> 4 | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11 & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)(local_2c >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = (byte)local_2c & 0xf | 0x30;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          local_3c = (uint)((local_2c & ~local_28) == 0);
          local_2c = 0;
          goto LAB_10005cf7;
        }
      }
    }
    uVar12 = 0;
    if (param_4 == 0) goto LAB_10005d01;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000c934;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
LAB_10005ce3:
    *(undefined1 *)(param_4 + uVar6) = 0;
    local_3c = 0;
    local_2c = 0;
LAB_10005cf7:
    local_2c = 0;
    if (local_1c == 0xffffffff) goto LAB_100058e4;
  }
  uVar12 = 0;
  if ((local_14 != (ushort *)0x0) && (local_14[2] == 0x1af4)) {
    local_18 = in_ECX;
    uVar6 = (uint)local_14[3];
    if ((uVar6 & 0xffffffc0) == 0x1000) {
      uVar6 = uVar6 - 0x1000;
    }
    else {
      if ((uVar6 & 0xffffffc0) != 0x1040) goto LAB_100082b8;
      uVar6 = uVar6 - 0x1040;
    }
    if (uVar6 != 0xffffffff) {
      if (param_4 == 0) {
        if (uVar6 != 0) goto LAB_10005e07;
      }
      else {
        uVar12 = 0;
        do {
          uVar3 = uVar12;
          uVar12 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar3 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar12 = 0;
        do {
          uVar3 = uVar12;
          uVar12 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000c97d;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar12 = 0;
        do {
          uVar3 = uVar12;
          uVar12 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar3 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        if (uVar6 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_10005e07:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar12) = (byte)(uVar6 % 10) | 0x30;
            uVar3 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < uVar6;
            uVar12 = uVar3;
            uVar6 = uVar6 / 10;
          } while (bVar16);
          do {
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      puVar10 = local_14;
      piVar15 = local_18;
      bVar16 = recovered_1000aac0(local_18,local_14,&local_a4);
      if (CONCAT31(extraout_var,bVar16) != 0) {
        recovered_1000b180(piVar15,&local_a4);
        if (param_4 == 0) {
          if (local_80 != 0) goto LAB_1000608a;
LAB_10006116:
          if (local_94 == 0) goto LAB_1000634d;
        }
        else {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_1000c9ad;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'm';
            pcVar7 = str_1000c9bd;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_1000c9a2;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          if (local_80 != 0) {
LAB_1000608a:
            uVar12 = 0;
            do {
              *(byte *)((int)&local_28 + uVar12) =
                   (char)local_80 + (char)(local_80 / 10) * -10 | 0x30;
              uVar6 = uVar12 + 1;
              if (8 < uVar12) break;
              bVar16 = 9 < local_80;
              local_80 = local_80 / 10;
              uVar12 = uVar6;
            } while (bVar16);
LAB_100060da:
            do {
              uVar12 = uVar6 - 1;
              if (param_4 != 0) {
                uVar3 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar3);
                  uVar3 = uVar3 + 1;
                } while (*pcVar7 != '\0');
                if (uVar3 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar3) =
                       *(undefined1 *)((int)&local_2c + uVar6 + 3);
                  *(undefined1 *)(param_4 + uVar3) = 0;
                }
                uVar6 = uVar12;
                if (uVar12 == 0) goto LAB_10006157;
                goto LAB_100060da;
              }
              uVar6 = uVar12;
            } while (uVar12 != 0);
            goto LAB_10006116;
          }
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_10006157:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_1000c9c4;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          if (local_94 == 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
            }
LAB_100062c7:
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_1000c9d4;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            goto LAB_1000634d;
          }
        }
        uVar12 = 0;
        do {
          *(byte *)((int)&local_28 + uVar12) = (char)local_94 + (char)(local_94 / 10) * -10 | 0x30;
          uVar6 = uVar12 + 1;
          if (8 < uVar12) break;
          bVar16 = 9 < local_94;
          local_94 = local_94 / 10;
          uVar12 = uVar6;
        } while (bVar16);
LAB_10006256:
        do {
          uVar12 = uVar6 - 1;
          if (param_4 != 0) {
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar6 = uVar12;
            if (uVar12 == 0) goto LAB_100062c7;
            goto LAB_10006256;
          }
          uVar6 = uVar12;
        } while (uVar12 != 0);
LAB_1000634d:
        iVar1 = 8;
LAB_10006367:
        do {
          uVar12 = local_a4 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          PF_PART2(local_28, 0) = (ushort)(byte)local_28;
          if (param_4 == 0) goto LAB_10006360;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar14 = (byte *)((int)&local_28 + 1);
            do {
              *(byte *)(param_4 + uVar6) = bVar11;
              uVar6 = uVar6 + 1;
              bVar11 = *pbVar14;
              if (bVar11 == 0) break;
              pbVar14 = pbVar14 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000c9e1;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000648d:
        iVar1 = 8;
LAB_100064a3:
        do {
          uVar12 = local_7c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) goto code_r0x100064b9;
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_100064f7;
LAB_100064c0:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000c9f7;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000658d:
        iVar1 = 8;
LAB_100065a3:
        do {
          uVar12 = local_78 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (9 < uVar12) goto code_r0x100065b9;
          bVar11 = bVar11 | 0x30;
          if (param_4 == 0) goto LAB_100065f7;
LAB_100065c0:
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(byte *)(param_4 + -1 + uVar12) = bVar11;
            *(undefined1 *)(param_4 + uVar12) = 0;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca0d;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000668d:
        iVar1 = 8;
LAB_100066a3:
        uVar12 = local_74 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100066c0;
LAB_100066f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000678d;
          goto LAB_100066a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100066f7;
LAB_100066c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100066a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca23;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000678d:
        iVar1 = 8;
LAB_100067a3:
        uVar12 = local_70 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100067c0;
LAB_100067f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000688d;
          goto LAB_100067a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100067f7;
LAB_100067c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100067a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca39;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000688d:
        iVar1 = 8;
LAB_100068a3:
        uVar12 = local_6c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100068c0;
LAB_100068f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_1000698d;
          goto LAB_100068a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100068f7;
LAB_100068c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100068a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca52;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_1000698d:
        iVar1 = 8;
LAB_100069a3:
        uVar12 = local_68 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (9 < uVar12) {
          bVar11 = bVar11 + 0x37;
          if (param_4 != 0) goto LAB_100069c0;
LAB_100069f7:
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto code_r0x100069fa;
          goto LAB_100069a3;
        }
        bVar11 = bVar11 | 0x30;
        if (param_4 == 0) goto LAB_100069f7;
LAB_100069c0:
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_100069a3;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca6a;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_64 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_10006aba:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_28 + uVar12) = (char)local_64 + (char)(local_64 / 10) * -10 | 0x30
            ;
            uVar6 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < local_64;
            local_64 = local_64 / 10;
            uVar12 = uVar6;
          } while (bVar16);
          do {
            while (uVar12 = uVar6 - 1, param_4 == 0) {
              uVar6 = uVar12;
              if (uVar12 == 0) goto LAB_10006b46;
            }
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar6 = uVar12;
          } while (uVar12 != 0);
        }
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca77;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_60 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_10006c1a:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_28 + uVar12) = (char)local_60 + (char)(local_60 / 10) * -10 | 0x30
            ;
            uVar6 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < local_60;
            local_60 = local_60 / 10;
            uVar12 = uVar6;
          } while (bVar16);
          do {
            while (uVar12 = uVar6 - 1, param_4 == 0) {
              uVar6 = uVar12;
              if (uVar12 == 0) goto LAB_10006ca6;
            }
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar6 = uVar12;
          } while (uVar12 != 0);
        }
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000ca88;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_5c == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
        }
        else {
LAB_10006d86:
          uVar12 = 0;
          do {
            *(byte *)((int)&local_28 + uVar12) = (byte)(local_5c % 10) | 0x30;
            uVar6 = uVar12 + 1;
            if (8 < uVar12) break;
            bVar16 = 9 < local_5c;
            local_5c = local_5c / 10;
            uVar12 = uVar6;
          } while (bVar16);
          do {
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = *(undefined1 *)((int)&local_2c + uVar6 + 3)
                ;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_54 != 0) {
          if (param_4 == 0) {
LAB_10006e3a:
            if (local_90 != 0) goto LAB_10006eca;
          }
          else {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_1000ca9c;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            if (local_90 == 0) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
              }
            }
            else {
LAB_10006eca:
              uVar12 = 0;
              do {
                *(byte *)((int)&local_28 + uVar12) =
                     (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
                uVar6 = uVar12 + 1;
                if (8 < uVar12) break;
                bVar16 = 9 < local_90;
                local_90 = local_90 / 10;
                uVar12 = uVar6;
              } while (bVar16);
              do {
                while (uVar12 = uVar6 - 1, param_4 == 0) {
                  uVar6 = uVar12;
                  if (uVar12 == 0) goto LAB_10006ffd;
                }
                uVar3 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar3);
                  uVar3 = uVar3 + 1;
                } while (*pcVar7 != '\0');
                if (uVar3 < 0x400) {
                  *(undefined1 *)(param_4 + -1 + uVar3) =
                       *(undefined1 *)((int)&local_2c + uVar6 + 3);
                  *(undefined1 *)(param_4 + uVar3) = 0;
                }
                uVar6 = uVar12;
              } while (uVar12 != 0);
            }
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_1000caac;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
LAB_10006ffd:
          iVar1 = 8;
LAB_10007013:
          do {
            uVar12 = local_84 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (9 < uVar12) goto code_r0x10007029;
            bVar11 = bVar11 | 0x30;
            if (param_4 == 0) goto LAB_10007067;
LAB_10007030:
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_1000cac3;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100070fd:
          iVar1 = 8;
          do {
            uVar12 = local_54 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar14 = (byte *)((int)&local_28 + 1);
                do {
                  *(byte *)(param_4 + uVar6) = bVar11;
                  uVar6 = uVar6 + 1;
                  bVar11 = *pbVar14;
                  if (bVar11 == 0) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (local_9c != 0) {
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_1000cad6;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
LAB_1000721d:
          iVar1 = 8;
          do {
            uVar12 = local_9c >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar14 = (byte *)((int)&local_28 + 1);
                do {
                  *(byte *)(param_4 + uVar6) = bVar11;
                  uVar6 = uVar6 + 1;
                  bVar11 = *pbVar14;
                  if (bVar11 == 0) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (local_98 != 0) {
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'v';
              pcVar7 = str_1000cae0;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
LAB_1000733d:
          iVar1 = 8;
          do {
            uVar12 = local_98 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            PF_PART2(local_28, 0) = (ushort)(byte)local_28;
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar14 = (byte *)((int)&local_28 + 1);
                do {
                  *(byte *)(param_4 + uVar6) = bVar11;
                  uVar6 = uVar6 + 1;
                  bVar11 = *pbVar14;
                  if (bVar11 == 0) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (param_4 == 0) goto LAB_1000821c;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000caf3;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        if (local_50 != 0) goto LAB_10008224;
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
        }
LAB_10007497:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        pcVar7 = str_1000cb22;
        if ((local_68 & 8) != 0) {
          pcVar7 = str_1000cb16;
        }
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar9 = str_1000cb0a;
          do {
            pcVar9 = pcVar9 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar9;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if ((uVar6 + 1 < 0x400) && (cVar8 = *pcVar7, cVar8 != '\0')) {
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 1;
        goto LAB_100082b8;
      }
      if (local_80 != 0) {
        if (param_4 != 0) {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_1000c9a2;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        uVar12 = 0;
        do {
          *(byte *)((int)&local_28 + uVar12) = (byte)(local_80 % 10) | 0x30;
          uVar6 = uVar12 + 1;
          if (8 < uVar12) break;
          bVar16 = 9 < local_80;
          uVar12 = uVar6;
          local_80 = local_80 / 10;
        } while (bVar16);
        do {
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          uVar6 = uVar6 - 1;
          puVar10 = local_14;
        } while (uVar6 != 0);
      }
      if (puVar10[3] < 0x1040) {
        uVar12 = 0;
        bVar16 = true;
LAB_100076ce:
        local_28 = 0;
        local_30 = 0;
        if ((*(uint *)(puVar10 + uVar12 * 2 + 10) & 1) == 0) goto LAB_100076c0;
        if ((((char)local_2c != '\0') || (*local_18 != 0x54584b57)) || ((uint)local_18[2] < 0x58))
        goto LAB_100076c0;
        if ((code *)local_18[0x15] == (code *)0x0) goto LAB_100076c0;
        local_34 = *(uint *)(puVar10 + uVar12 * 2 + 10) & 0xfffffffc;
        local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar16);
        uVar6 = local_34 + 0x12 & 0xffff;
        iVar1 = (*(code *)local_18[0x15])(uVar6,1,&local_28);
        puVar10 = local_14;
        if (iVar1 == 0) goto LAB_100076c0;
        local_14 = (ushort *)uVar6;
        if (param_4 == 0) {
          if (uVar12 != 0) goto LAB_10009898;
          goto LAB_10009e2c;
        }
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar6) = 0x20;
          uVar3 = uVar6;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000c9ad;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar6) = 0x3d;
          uVar3 = uVar6;
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = 'l';
          pcVar7 = str_1000cb2f;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000cb39;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        if (uVar12 == 0) {
          uVar12 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar12);
            uVar12 = uVar12 + 1;
          } while (*pcVar7 != '\0');
          if (uVar12 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
          }
LAB_10009dbc:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'v';
            pcVar7 = str_1000cb4d;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        else {
LAB_10009898:
          uVar6 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar6) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar3 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar16 = 9 < uVar12;
            uVar6 = uVar3;
            uVar12 = uVar12 / 10;
          } while (bVar16);
          do {
            while (uVar12 = uVar3 - 1, param_4 != 0) {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              uVar3 = uVar12;
              if (uVar12 == 0) goto LAB_10009dbc;
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
        }
LAB_10009e2c:
        puVar10 = local_14;
        piVar15 = local_18;
        iVar1 = 8;
LAB_10009e36:
        uVar12 = local_34 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar12;
        if (uVar12 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        if (param_4 == 0) {
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) goto LAB_10009ef9;
          goto LAB_10009e36;
        }
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
        iVar1 = iVar1 + -1;
        if (iVar1 != 0) goto LAB_10009e36;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'v';
          pcVar7 = str_1000cb5c;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
LAB_10009ef9:
        iVar1 = 8;
        do {
          uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          if (param_4 != 0) {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        if (*local_18 == 0x54584b57) {
          uVar12 = local_18[2];
          if (uVar12 < 0x5c) {
LAB_10009f62:
            if (uVar12 < 0x58) goto LAB_1000a8c6;
          }
          else if ((code *)local_18[0x16] != (code *)0x0) {
            (*(code *)local_18[0x16])(local_14,1,0);
            if (*piVar15 != 0x54584b57) goto LAB_1000a8c6;
            uVar12 = piVar15[2];
            if (0x5b < uVar12) {
              if ((code *)piVar15[0x16] == (code *)0x0) goto LAB_10009fba;
              (*(code *)piVar15[0x16])(puVar10,1,3);
              if (*piVar15 != 0x54584b57) goto LAB_1000a8c6;
              uVar12 = piVar15[2];
            }
            goto LAB_10009f62;
          }
LAB_10009fba:
          if (((code *)piVar15[0x15] != (code *)0x0) &&
             (iVar1 = (*(code *)piVar15[0x15])(puVar10,1,&local_30), iVar1 != 0)) {
            if (param_4 != 0) {
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar8 = 'v';
                pcVar7 = str_1000cb6f;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar6) = cVar8;
                  uVar6 = uVar6 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
              uVar12 = 0;
              do {
                uVar6 = uVar12;
                uVar12 = uVar6 + 1;
              } while (*(char *)(param_4 + uVar6) != '\0');
              if (uVar12 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
                uVar6 = uVar12;
              }
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = 8;
            do {
              uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (*pcVar7 != '\0');
                if (uVar12 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar12) = bVar11;
                  *(undefined1 *)(param_4 + uVar12) = 0;
                }
              }
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
LAB_1000a8c6:
        if (param_4 != 0 && (local_1c & 1) == 0) goto LAB_10007663;
        uVar12 = local_1c & 1;
        goto LAB_100082b8;
      }
LAB_10007653:
      uVar12 = 0;
      if (param_4 != 0) {
LAB_10007663:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000c986;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
      }
    }
  }
LAB_100082b8:
  uVar12 = uVar12 | local_3c;
  goto LAB_100082ba;
LAB_1000a5ab:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000a629;
  goto LAB_1000a562;
LAB_10009b8b:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_10009c09;
  goto LAB_10009b45;
LAB_10007960:
  uVar12 = uVar12 + 1;
  if (uVar12 == 6) goto LAB_10007a37;
  goto LAB_1000796a;
LAB_1000a1fb:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000a279;
  goto LAB_1000a1b3;
LAB_10007cbe:
  uVar12 = local_34;
  goto LAB_10007cc8;
LAB_10006360:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000648d;
  goto LAB_10006367;
code_r0x100064b9:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_100064c0;
LAB_100064f7:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000658d;
  goto LAB_100064a3;
code_r0x100065b9:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_100065c0;
LAB_100065f7:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_1000668d;
  goto LAB_100065a3;
code_r0x100069fa:
  if (local_64 != 0) goto LAB_10006aba;
LAB_10006b46:
  if (local_60 != 0) goto LAB_10006c1a;
LAB_10006ca6:
  if (local_5c != 0) goto LAB_10006d86;
  if (local_54 != 0) goto LAB_10006e3a;
  if (local_9c != 0) goto LAB_1000721d;
  if (local_98 != 0) goto LAB_1000733d;
LAB_1000821c:
  if (local_50 == 0) {
    uVar12 = 1;
    goto LAB_100082b8;
  }
LAB_10008224:
  uVar12 = 0;
  do {
    *(byte *)((int)&local_28 + uVar12) = (char)local_50 + (char)(local_50 / 10) * -10 | 0x30;
    uVar6 = uVar12 + 1;
    if (8 < uVar12) break;
    bVar16 = 9 < local_50;
    local_50 = local_50 / 10;
    uVar12 = uVar6;
  } while (bVar16);
  do {
    while (uVar12 = uVar6 - 1, param_4 != 0) {
      uVar3 = 0;
      do {
        pcVar7 = (char *)(param_4 + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar7 != '\0');
      if (uVar3 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar3) = *(undefined1 *)((int)&local_2c + uVar6 + 3);
        *(undefined1 *)(param_4 + uVar3) = 0;
      }
      uVar6 = uVar12;
      if (uVar12 == 0) goto LAB_10007497;
    }
    uVar6 = uVar12;
  } while (uVar12 != 0);
  uVar12 = 1;
  goto LAB_100082b8;
code_r0x10007029:
  bVar11 = bVar11 + 0x37;
  if (param_4 != 0) goto LAB_10007030;
LAB_10007067:
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) goto LAB_100070fd;
  goto LAB_10007013;
LAB_100076c0:
  bVar16 = uVar12 < 5;
  uVar12 = uVar12 + 1;
  if (uVar12 == 6) goto LAB_10007653;
  goto LAB_100076ce;
LAB_10007a37:
  uVar12 = local_34;
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000cc3a;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
    uVar12 = 0;
LAB_10007a79:
    puVar10 = local_14;
    uVar12 = local_34 | uVar12;
  }
LAB_10007a9c:
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((char)puVar10[4] == '\x02') {
    uVar6 = 0;
    bVar16 = true;
    local_34 = uVar12;
LAB_10007ad2:
    local_1c = CONCAT31(PF_PART3(local_1c, 1),bVar16);
    if ((uVar6 != 0) && ((*(uint *)(puVar10 + uVar6 * 2 + 8) & 7) == 4)) {
LAB_10007bd0:
      uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
      if ((uVar12 & 1) != 0) {
        if (((!((short)(uVar12 & 0xfffffffc) == 0 || (char)local_2c != '\0')) &&
            (*local_18 == 0x54584b57)) && (0x57 < (uint)local_18[2])) {
          if ((code *)local_18[0x15] != (code *)0x0) {
            iVar1 = (*(code *)local_18[0x15])(uVar12 & 0xfffc,2,&local_30);
            puVar10 = local_14;
            if (iVar1 == 0) goto LAB_10007ac0;
            if (param_4 == 0) {
              if (uVar6 != 0) goto LAB_1000831b;
              goto LAB_100083ea;
            }
            uVar3 = 0;
            do {
              uVar2 = uVar3;
              uVar3 = uVar2 + 1;
            } while (*(char *)(param_4 + uVar2) != '\0');
            if (uVar2 + 1 < 0x400) {
              cVar8 = ' ';
              pcVar7 = str_1000cc84;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar2) = cVar8;
                uVar2 = uVar2 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar2 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar2) = 0;
            if (uVar6 == 0) {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(undefined2 *)(param_4 + -1 + uVar6) = 0x30;
              }
LAB_10007c95:
              uVar6 = 0;
              do {
                uVar3 = uVar6;
                uVar6 = uVar3 + 1;
              } while (*(char *)(param_4 + uVar3) != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar6) = 0x20;
                uVar3 = uVar6;
              }
              *(undefined1 *)(param_4 + uVar3) = 0;
              uVar6 = 0;
              do {
                uVar3 = uVar6;
                uVar6 = uVar3 + 1;
              } while (*(char *)(param_4 + uVar3) != '\0');
              if (uVar3 + 1 < 0x400) {
                cVar8 = 'n';
                pcVar7 = str_1000cc93;
                do {
                  pcVar7 = pcVar7 + 1;
                  *(char *)(param_4 + uVar3) = cVar8;
                  uVar3 = uVar3 + 1;
                  cVar8 = *pcVar7;
                  if (cVar8 == '\0') break;
                } while (uVar3 < 0x3ff);
              }
              *(undefined1 *)(param_4 + uVar3) = 0;
              uVar6 = 0;
              do {
                uVar3 = uVar6;
                uVar6 = uVar3 + 1;
              } while (*(char *)(param_4 + uVar3) != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_4 + -1 + uVar6) = 0x3d;
                uVar3 = uVar6;
              }
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            else {
LAB_1000831b:
              uVar3 = 0;
              do {
                *(byte *)((int)&local_a4 + uVar3) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
                uVar2 = uVar3 + 1;
                if (8 < uVar3) break;
                bVar16 = 9 < uVar6;
                uVar3 = uVar2;
                uVar6 = uVar6 / 10;
              } while (bVar16);
              do {
                while (uVar6 = uVar2 - 1, param_4 != 0) {
                  uVar3 = 0;
                  do {
                    pcVar7 = (char *)(param_4 + uVar3);
                    uVar3 = uVar3 + 1;
                  } while (*pcVar7 != '\0');
                  if (uVar3 < 0x400) {
                    *(byte *)(param_4 + -1 + uVar3) = (&bStack_a5)[uVar2];
                    *(undefined1 *)(param_4 + uVar3) = 0;
                  }
                  uVar2 = uVar6;
                  if (uVar6 == 0) goto LAB_10007c95;
                }
                uVar2 = uVar6;
              } while (uVar6 != 0);
            }
LAB_100083ea:
            iVar1 = 8;
LAB_100083f4:
            uVar6 = (uVar12 & 0xfffffffc) >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar6;
            if (9 < uVar6) {
              bVar11 = bVar11 + 0x37;
              if (param_4 != 0) goto LAB_10008411;
LAB_10008442:
              iVar1 = iVar1 + -1;
              if (iVar1 == 0) goto LAB_100084c0;
              goto LAB_100083f4;
            }
            bVar11 = bVar11 | 0x30;
            if (param_4 == 0) goto LAB_10008442;
LAB_10008411:
            uVar6 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pcVar7 != '\0');
            if (uVar6 < 0x400) {
              *(byte *)(param_4 + -1 + uVar6) = bVar11;
              *(undefined1 *)(param_4 + uVar6) = 0;
            }
            iVar1 = iVar1 + -1;
            if (iVar1 != 0) goto LAB_100083f4;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'n';
              pcVar7 = str_1000cc9d;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100084c0:
            iVar1 = 8;
            do {
              uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
              bVar11 = (byte)uVar12;
              if (uVar12 < 10) {
                bVar11 = bVar11 | 0x30;
              }
              else {
                bVar11 = bVar11 + 0x37;
              }
              if (param_4 != 0) {
                uVar12 = 0;
                do {
                  pcVar7 = (char *)(param_4 + uVar12);
                  uVar12 = uVar12 + 1;
                } while (*pcVar7 != '\0');
                if (uVar12 < 0x400) {
                  *(byte *)(param_4 + -1 + uVar12) = bVar11;
                  *(undefined1 *)(param_4 + uVar12) = 0;
                }
              }
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
            goto LAB_1000972b;
          }
        }
      }
LAB_10007ac0:
      bVar16 = uVar6 < 5;
      uVar6 = uVar6 + 1;
      if (uVar6 == 6) goto LAB_10007cbe;
      goto LAB_10007ad2;
    }
    uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
    puVar10 = local_14;
    if ((uVar12 & 1) != 0 || uVar12 == 0) goto LAB_10007bd0;
    iVar1 = 0;
    if ((uVar12 & 6) == 4) {
      if (uVar6 == 5) goto LAB_10007bd0;
      iVar1 = *(int *)(local_14 + uVar6 * 2 + 0xc);
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 == 0 && iVar1 == 0) goto LAB_10007bd0;
    local_28 = 0;
    local_a4 = 0;
    if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10007bd0;
    if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
      if ((!((uint)local_18[2] < 0x68 || iVar1 != 0)) && ((code *)local_18[0x19] != (code *)0x0)) {
        iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
        puVar10 = local_14;
        if (iVar1 != 0) {
          local_28 = local_a4;
          goto LAB_1000864f;
        }
      }
      goto LAB_10007bd0;
    }
    iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
    puVar10 = local_14;
    if (iVar1 == 0) goto LAB_10007bd0;
LAB_1000864f:
    if (param_4 == 0) {
      if (uVar6 != 0) goto LAB_100086cb;
      goto LAB_10008b4c;
    }
    uVar12 = 0;
    do {
      uVar3 = uVar12;
      uVar12 = uVar3 + 1;
    } while (*(char *)(param_4 + uVar3) != '\0');
    if (uVar3 + 1 < 0x400) {
      cVar8 = ' ';
      pcVar7 = str_1000cc4f;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar3) = cVar8;
        uVar3 = uVar3 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar3 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar3) = 0;
    if (uVar6 == 0) {
      uVar12 = 0;
      do {
        pcVar7 = (char *)(param_4 + uVar12);
        uVar12 = uVar12 + 1;
      } while (*pcVar7 != '\0');
      if (uVar12 < 0x400) {
        *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
      }
LAB_100086a4:
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'n';
        pcVar7 = str_1000cc60;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
    }
    else {
LAB_100086cb:
      uVar12 = 0;
      do {
        *(byte *)((int)&local_a4 + uVar12) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar3 = uVar12 + 1;
        if (8 < uVar12) break;
        bVar16 = 9 < uVar6;
        uVar12 = uVar3;
        uVar6 = uVar6 / 10;
      } while (bVar16);
      do {
        while (uVar12 = uVar3 - 1, param_4 != 0) {
          uVar6 = 0;
          do {
            pcVar7 = (char *)(param_4 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar7 != '\0');
          if (uVar6 < 0x400) {
            *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
          uVar3 = uVar12;
          if (uVar12 == 0) goto LAB_100086a4;
        }
        uVar3 = uVar12;
      } while (uVar12 != 0);
    }
LAB_10008b4c:
    iVar1 = 8;
    do {
      uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      if (uVar12 < 10) {
        uVar12 = uVar12 | 0x30;
      }
      else {
        uVar12 = (uint)(byte)((char)uVar12 + 0x37);
      }
      PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
      if (param_4 != 0) {
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          pbVar14 = (byte *)((int)&local_a4 + 1);
          do {
            *(char *)(param_4 + uVar3) = (char)uVar12;
            uVar3 = uVar3 + 1;
            uVar12 = (uint)*pbVar14;
            if (*pbVar14 == 0) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((local_28 != 0) && (*local_18 == 0x54584b57)) {
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_10009387;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10009387:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_100093ba;
        }
        (*pcVar4)(local_28,4,&local_30);
        if ((local_28 == 0) || (*local_18 != 0x54584b57)) goto LAB_10009597;
      }
LAB_100093ba:
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_1000957b;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_1000957b:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10009597;
        }
        (*pcVar4)(local_28 + 4,4,&local_38);
      }
    }
LAB_10009597:
    if (param_4 != 0) {
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar8 = 'n';
        pcVar7 = str_1000cc6c;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar6) = cVar8;
          uVar6 = uVar6 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
      uVar12 = 0;
      do {
        uVar6 = uVar12;
        uVar12 = uVar6 + 1;
      } while (*(char *)(param_4 + uVar6) != '\0');
      if (uVar12 < 0x400) {
        *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
        uVar6 = uVar12;
      }
      *(undefined1 *)(param_4 + uVar6) = 0;
    }
    iVar1 = 8;
LAB_10009618:
    uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
    bVar11 = (byte)uVar12;
    if (9 < uVar12) {
      bVar11 = bVar11 + 0x37;
      if (param_4 != 0) goto LAB_10009635;
LAB_10009662:
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) goto LAB_100096e0;
      goto LAB_10009618;
    }
    bVar11 = bVar11 | 0x30;
    if (param_4 == 0) goto LAB_10009662;
LAB_10009635:
    uVar12 = 0;
    do {
      pcVar7 = (char *)(param_4 + uVar12);
      uVar12 = uVar12 + 1;
    } while (*pcVar7 != '\0');
    if (uVar12 < 0x400) {
      *(byte *)(param_4 + -1 + uVar12) = bVar11;
      *(undefined1 *)(param_4 + uVar12) = 0;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 != 0) goto LAB_10009618;
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar12 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
      uVar6 = uVar12;
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar8 = 'n';
      pcVar7 = str_1000cc78;
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if (uVar12 < 0x400) {
      *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
      uVar6 = uVar12;
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
LAB_100096e0:
    iVar1 = 8;
    do {
      uVar12 = local_38 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar12;
      if (uVar12 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      if (param_4 != 0) {
        uVar12 = 0;
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(byte *)(param_4 + -1 + uVar12) = bVar11;
          *(undefined1 *)(param_4 + uVar12) = 0;
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
LAB_1000972b:
    puVar10 = local_14;
    uVar12 = local_34 | local_1c & 1;
  }
LAB_10007cc8:
  local_30 = 0;
  uVar6 = 0;
  if ((char)puVar10[4] == '\x03') {
    uVar6 = *(uint *)(puVar10 + 10);
    local_34 = uVar12;
    if ((uVar6 & 1) == 0 && uVar6 != 0) {
      iVar1 = 0;
      if ((uVar6 & 6) == 4) {
        iVar1 = *(int *)(local_14 + 0xc);
      }
      uVar6 = uVar6 & 0xfffffff0;
      if (uVar6 == 0 && iVar1 == 0) goto LAB_10007dc8;
      local_28 = 0;
      local_a4 = 0;
      if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10007dc8;
      if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)local_18[2] && iVar1 == 0) && ((code *)local_18[0x19] != (code *)0x0)) {
          iVar1 = (*(code *)local_18[0x19])(uVar6,0,0x1000,&local_a4);
          uVar6 = 0;
          if (iVar1 != 0) {
            local_28 = local_a4;
            goto joined_r0x10007db1;
          }
        }
        goto LAB_10007dc8;
      }
      iVar1 = (*(code *)local_18[0x2e])(uVar6,iVar1,0x1000,&local_28);
      uVar6 = 0;
      uVar12 = local_34;
      if (iVar1 == 0) goto LAB_10007dc8;
joined_r0x10007db1:
      uVar5 = (undefined3)((uint)iVar1 >> 8);
      if (param_4 == 0) {
        local_40 = CONCAT31(uVar5,1);
        local_1c = CONCAT31(uVar5,1);
      }
      else {
        uVar12 = 0;
        local_40 = CONCAT31(uVar5,1);
        local_1c = CONCAT31(uVar5,1);
LAB_10007eed:
        uVar6 = 0;
        do {
          uVar3 = uVar6;
          uVar6 = uVar3 + 1;
        } while (*(char *)(param_4 + uVar3) != '\0');
        if (uVar3 + 1 < 0x400) {
          cVar8 = ' ';
          pcVar7 = str_1000ccab;
          do {
            pcVar7 = pcVar7 + 1;
            *(char *)(param_4 + uVar3) = cVar8;
            uVar3 = uVar3 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
          } while (uVar3 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar3) = 0;
        uVar6 = 0;
        if ((char)local_40 == '\0') {
          local_4c = 0;
LAB_100088e0:
          uVar6 = 0;
          do {
            *(byte *)((int)&local_a4 + uVar6) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
            uVar3 = uVar6 + 1;
            if (8 < uVar6) break;
            bVar16 = 9 < uVar12;
            uVar6 = uVar3;
            uVar12 = uVar12 / 10;
          } while (bVar16);
          do {
            while (uVar12 = uVar3 - 1, (char)local_4c == '\0') {
              uVar6 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar7 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_4 + -1 + uVar6) = (&bStack_a5)[uVar3];
                *(undefined1 *)(param_4 + uVar6) = 0;
              }
              uVar3 = uVar12;
              if (uVar12 == 0) {
                local_40 = 1;
                goto LAB_1000896b;
              }
            }
            uVar3 = uVar12;
          } while (uVar12 != 0);
          local_40 = 1;
          uVar12 = local_34;
        }
        else {
          do {
            pcVar7 = (char *)(param_4 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar7 != '\0');
          if (uVar6 < 0x400) {
            *(undefined2 *)(param_4 + -1 + uVar6) = 0x30;
          }
LAB_1000896b:
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'd';
            pcVar7 = str_1000ccbc;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          local_40 = 0;
          uVar12 = local_34;
        }
      }
      iVar1 = 8;
      local_4c = local_28;
      do {
        uVar6 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
        bVar11 = (byte)uVar6;
        if (uVar6 < 10) {
          bVar11 = bVar11 | 0x30;
        }
        else {
          bVar11 = bVar11 + 0x37;
        }
        PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
        if ((char)local_40 == '\0') {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar14 = (byte *)((int)&local_a4 + 1);
            do {
              *(byte *)(param_4 + uVar6) = bVar11;
              uVar6 = uVar6 + 1;
              bVar11 = *pbVar14;
              if (bVar11 == 0) break;
              pbVar14 = pbVar14 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = local_34;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      if ((local_28 == 0) || (*local_18 != 0x54584b57)) {
LAB_10008aed:
        uVar6 = local_1c;
        puVar10 = local_14;
      }
      else {
        if ((uint)local_18[2] < 0xc0) {
          if (0x6b < (uint)local_18[2]) goto LAB_10008aa3;
          goto LAB_10008aed;
        }
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_10008aa3:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_10008aed;
        }
        iVar1 = (*pcVar4)(local_28,4,&local_30);
        if (iVar1 == 0) goto LAB_10008aed;
        if ((char)local_40 == '\0') {
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar8 = 'd';
            pcVar7 = str_1000ccc8;
            do {
              pcVar7 = pcVar7 + 1;
              *(char *)(param_4 + uVar6) = cVar8;
              uVar6 = uVar6 + 1;
              cVar8 = *pcVar7;
              if (cVar8 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
          uVar12 = 0;
          do {
            uVar6 = uVar12;
            uVar12 = uVar6 + 1;
          } while (*(char *)(param_4 + uVar6) != '\0');
          if (uVar12 < 0x400) {
            *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
            uVar6 = uVar12;
          }
          *(undefined1 *)(param_4 + uVar6) = 0;
        }
        iVar1 = 8;
        do {
          uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
          bVar11 = (byte)uVar12;
          if (uVar12 < 10) {
            bVar11 = bVar11 | 0x30;
          }
          else {
            bVar11 = bVar11 + 0x37;
          }
          if ((char)local_40 == '\0') {
            uVar12 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar12);
              uVar12 = uVar12 + 1;
            } while (*pcVar7 != '\0');
            if (uVar12 < 0x400) {
              *(byte *)(param_4 + -1 + uVar12) = bVar11;
              *(undefined1 *)(param_4 + uVar12) = 0;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar6 = local_1c;
        puVar10 = local_14;
        uVar12 = local_34;
      }
    }
    else {
LAB_10007dc8:
      uVar12 = 1;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
      puVar10 = local_14;
      do {
        uVar3 = *(uint *)(puVar10 + uVar12 * 2 + 8) & 7;
        local_1c = uVar6;
        if (uVar3 != 4) {
          uVar3 = *(uint *)(puVar10 + uVar12 * 2 + 10);
          puVar10 = local_14;
          if ((uVar3 & 1) == 0 && uVar3 != 0) {
            iVar1 = 0;
            if ((uVar3 & 6) == 4) {
              if (uVar12 == 5) break;
              iVar1 = *(int *)(local_14 + uVar12 * 2 + 0xc);
            }
            uVar3 = uVar3 & 0xfffffff0;
            if (uVar3 != 0 || iVar1 != 0) {
              local_28 = 0;
              local_a4 = 0;
              if (((char)local_2c == '\0') && (*local_18 == 0x54584b57)) {
                if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
                  if ((0x67 < (uint)local_18[2] && iVar1 == 0) &&
                     ((code *)local_18[0x19] != (code *)0x0)) {
                    iVar1 = (*(code *)local_18[0x19])(uVar3,0,0x1000,&local_a4);
                    uVar3 = 0;
                    puVar10 = local_14;
                    if (iVar1 != 0) {
                      local_28 = local_a4;
                      uVar6 = local_a4;
                      goto LAB_10007ede;
                    }
                  }
                }
                else {
                  uVar6 = (*(code *)local_18[0x2e])(uVar3,iVar1,0x1000,&local_28);
                  uVar3 = 0;
                  puVar10 = local_14;
                  if (uVar6 != 0) {
LAB_10007ede:
                    if (param_4 != 0) {
                      local_40 = 0;
                      goto LAB_10007eed;
                    }
                    local_4c = CONCAT31((int3)(uVar6 >> 8),1);
                    goto LAB_100088e0;
                  }
                }
              }
            }
          }
        }
        bVar16 = uVar12 < 5;
        uVar12 = uVar12 + 1;
        uVar6 = CONCAT31((int3)(uVar3 >> 8),bVar16);
      } while (uVar12 != 6);
      uVar6 = 0;
      uVar12 = local_34;
    }
    uVar6 = uVar6 & 1;
  }
  uVar12 = uVar12 | uVar6 | local_3c;
  if (uVar12 != 0) goto LAB_100082ba;
  local_30 = 0;
  uVar12 = *(uint *)(puVar10 + 10);
  if ((uVar12 & 1) == 0 && uVar12 != 0) {
    iVar1 = 0;
    if ((uVar12 & 6) == 4) {
      iVar1 = *(int *)(local_14 + 0xc);
    }
    uVar12 = uVar12 & 0xfffffff0;
    if (uVar12 == 0 && iVar1 == 0) goto LAB_10008062;
    local_28 = 0;
    local_a4 = 0;
    if (((char)local_2c != '\0') || (*local_18 != 0x54584b57)) goto LAB_10008062;
    if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)local_18[2] && iVar1 == 0) && ((code *)local_18[0x19] != (code *)0x0)) {
        iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
        uVar12 = 0;
        if (iVar1 != 0) {
          local_28 = local_a4;
          goto joined_r0x1000804b;
        }
      }
      goto LAB_10008062;
    }
    iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
    uVar12 = 0;
    if (iVar1 == 0) goto LAB_10008062;
joined_r0x1000804b:
    uVar5 = (undefined3)((uint)iVar1 >> 8);
    if (param_4 == 0) {
      bVar16 = true;
      local_1c = CONCAT31(uVar5,1);
    }
    else {
      uVar6 = 0;
      local_14 = (ushort *)CONCAT31(uVar5,1);
      local_1c = CONCAT31(uVar5,1);
LAB_1000818d:
      uVar12 = 0;
      do {
        uVar3 = uVar12;
        uVar12 = uVar3 + 1;
      } while (*(char *)(param_4 + uVar3) != '\0');
      if (uVar3 + 1 < 0x400) {
        cVar8 = ' ';
        pcVar7 = str_1000ccd4;
        do {
          pcVar7 = pcVar7 + 1;
          *(char *)(param_4 + uVar3) = cVar8;
          uVar3 = uVar3 + 1;
          cVar8 = *pcVar7;
          if (cVar8 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)(param_4 + uVar3) = 0;
      uVar12 = 0;
      if ((char)local_14 == '\0') {
LAB_10008f67:
        uVar3 = 0;
        do {
          *(byte *)((int)&local_a4 + uVar3) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
          uVar2 = uVar3 + 1;
          if (8 < uVar3) break;
          bVar16 = 9 < uVar6;
          uVar6 = uVar6 / 10;
          uVar3 = uVar2;
        } while (bVar16);
LAB_10008fa2:
        do {
          uVar6 = uVar2 - 1;
          if ((char)uVar12 == '\0') {
            uVar3 = 0;
            do {
              pcVar7 = (char *)(param_4 + uVar3);
              uVar3 = uVar3 + 1;
            } while (*pcVar7 != '\0');
            if (uVar3 < 0x400) {
              *(byte *)(param_4 + -1 + uVar3) = (&bStack_a5)[uVar2];
              *(undefined1 *)(param_4 + uVar3) = 0;
            }
            uVar2 = uVar6;
            if (uVar6 == 0) goto LAB_10008fe4;
            goto LAB_10008fa2;
          }
          uVar2 = uVar6;
        } while (uVar6 != 0);
        bVar16 = true;
      }
      else {
        do {
          pcVar7 = (char *)(param_4 + uVar12);
          uVar12 = uVar12 + 1;
        } while (*pcVar7 != '\0');
        if (uVar12 < 0x400) {
          *(undefined2 *)(param_4 + -1 + uVar12) = 0x30;
        }
LAB_10008fe4:
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar8 = 'm';
          pcVar7 = &DAT_1000ccdf;
          do {
            *(char *)(param_4 + uVar6) = cVar8;
            uVar6 = uVar6 + 1;
            cVar8 = *pcVar7;
            if (cVar8 == '\0') break;
            pcVar7 = pcVar7 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar12 < 0x400) {
          *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
          uVar6 = uVar12;
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
        bVar16 = false;
      }
    }
    iVar1 = 8;
    local_14 = (ushort *)local_28;
    do {
      uVar12 = local_28 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
      bVar11 = (byte)uVar12;
      if (uVar12 < 10) {
        bVar11 = bVar11 | 0x30;
      }
      else {
        bVar11 = bVar11 + 0x37;
      }
      PF_PART2(local_a4, 0) = (ushort)(byte)local_a4;
      if (!bVar16) {
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
        } while (*(char *)(param_4 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          pbVar14 = (byte *)((int)&local_a4 + 1);
          do {
            *(byte *)(param_4 + uVar6) = bVar11;
            uVar6 = uVar6 + 1;
            bVar11 = *pbVar14;
            if (bVar11 == 0) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_4 + uVar6) = 0;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((local_28 != 0) && (*local_18 == 0x54584b57)) {
      if ((uint)local_18[2] < 0xc0) {
        if (0x6b < (uint)local_18[2]) goto LAB_1000911f;
      }
      else {
        pcVar4 = (code *)local_18[0x2f];
        if (pcVar4 == (code *)0x0) {
LAB_1000911f:
          pcVar4 = (code *)local_18[0x1a];
          if (pcVar4 == (code *)0x0) goto LAB_100081ef;
        }
        iVar1 = (*pcVar4)(local_28,4,&local_30);
        if (iVar1 != 0) {
          if (!bVar16) {
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x20;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar8 = 'm';
              pcVar7 = str_1000cce3;
              do {
                pcVar7 = pcVar7 + 1;
                *(char *)(param_4 + uVar6) = cVar8;
                uVar6 = uVar6 + 1;
                cVar8 = *pcVar7;
                if (cVar8 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
            uVar12 = 0;
            do {
              uVar6 = uVar12;
              uVar12 = uVar6 + 1;
            } while (*(char *)(param_4 + uVar6) != '\0');
            if (uVar12 < 0x400) {
              *(undefined1 *)(param_4 + -1 + uVar12) = 0x3d;
              uVar6 = uVar12;
            }
            *(undefined1 *)(param_4 + uVar6) = 0;
          }
          iVar1 = 8;
          do {
            uVar12 = local_30 >> ((char)iVar1 * '\x04' - 4U & 0x1f) & 0xf;
            bVar11 = (byte)uVar12;
            if (uVar12 < 10) {
              bVar11 = bVar11 | 0x30;
            }
            else {
              bVar11 = bVar11 + 0x37;
            }
            if (!bVar16) {
              uVar12 = 0;
              do {
                pcVar7 = (char *)(param_4 + uVar12);
                uVar12 = uVar12 + 1;
              } while (*pcVar7 != '\0');
              if (uVar12 < 0x400) {
                *(byte *)(param_4 + -1 + uVar12) = bVar11;
                *(undefined1 *)(param_4 + uVar12) = 0;
              }
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
  }
  else {
LAB_10008062:
    uVar6 = 1;
    local_1c = CONCAT31((int3)(uVar12 >> 8),1);
    puVar10 = local_14;
    do {
      uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 8) & 7;
      if (uVar12 != 4) {
        uVar12 = *(uint *)(puVar10 + uVar6 * 2 + 10);
        puVar10 = local_14;
        if ((uVar12 & 1) == 0 && uVar12 != 0) {
          iVar1 = 0;
          if ((uVar12 & 6) == 4) {
            if (uVar6 == 5) break;
            iVar1 = *(int *)(local_14 + uVar6 * 2 + 0xc);
          }
          uVar12 = uVar12 & 0xfffffff0;
          if (uVar12 != 0 || iVar1 != 0) {
            local_28 = 0;
            local_a4 = 0;
            if (((char)local_2c == '\0') && (*local_18 == 0x54584b57)) {
              if (((uint)local_18[2] < 0xbc) || ((code *)local_18[0x2e] == (code *)0x0)) {
                if ((0x67 < (uint)local_18[2] && iVar1 == 0) &&
                   ((code *)local_18[0x19] != (code *)0x0)) {
                  iVar1 = (*(code *)local_18[0x19])(uVar12,0,0x1000,&local_a4);
                  uVar12 = 0;
                  puVar10 = local_14;
                  if (iVar1 != 0) {
                    local_28 = local_a4;
                    goto LAB_1000817e;
                  }
                }
              }
              else {
                iVar1 = (*(code *)local_18[0x2e])(uVar12,iVar1,0x1000,&local_28);
                uVar12 = 0;
                puVar10 = local_14;
                if (iVar1 != 0) {
LAB_1000817e:
                  if (param_4 != 0) {
                    local_14 = (ushort *)0x0;
                    goto LAB_1000818d;
                  }
                  uVar12 = 1;
                  goto LAB_10008f67;
                }
              }
            }
          }
        }
      }
      bVar16 = uVar6 < 5;
      uVar6 = uVar6 + 1;
      local_1c = CONCAT31((int3)(uVar12 >> 8),bVar16);
    } while (uVar6 != 6);
    local_1c = 0;
  }
LAB_100081ef:
  uVar12 = local_1c & 1;
LAB_100082ba:
  pcVar7 = str_1000c8f0;
  if (uVar12 != 0) {
    pcVar7 = str_1000c8e0;
  }
  if (param_4 != 0) {
    uVar12 = 0;
    do {
      uVar6 = uVar12;
      uVar12 = uVar6 + 1;
    } while (*(char *)(param_4 + uVar6) != '\0');
    if ((uVar6 + 1 < 0x400) && (cVar8 = *pcVar7, cVar8 != '\0')) {
      do {
        pcVar7 = pcVar7 + 1;
        *(char *)(param_4 + uVar6) = cVar8;
        uVar6 = uVar6 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_4 + uVar6) = 0;
  }
  return;
}

#undef DAT_1000cba1
#undef DAT_1000cba9
#undef DAT_1000cbdc
#undef DAT_1000cbe4
#undef DAT_1000cbec
#undef DAT_1000cc00
#undef DAT_1000cc08
#undef DAT_1000cc10
#undef DAT_1000cc18
#undef DAT_1000cc2b
#undef DAT_1000ccdf
#undef str_1000c8e0
#undef str_1000c8f0
#undef str_1000c904
#undef str_1000c91c
#undef str_1000c934
#undef str_1000c94d
#undef str_1000c95e
#undef str_1000c96e
#undef str_1000c97d
#undef str_1000c986
#undef str_1000c9a2
#undef str_1000c9ad
#undef str_1000c9bd
#undef str_1000c9c4
#undef str_1000c9d4
#undef str_1000c9e1
#undef str_1000c9f7
#undef str_1000ca0d
#undef str_1000ca23
#undef str_1000ca39
#undef str_1000ca52
#undef str_1000ca6a
#undef str_1000ca77
#undef str_1000ca88
#undef str_1000ca9c
#undef str_1000caac
#undef str_1000cac3
#undef str_1000cad6
#undef str_1000cae0
#undef str_1000caf3
#undef str_1000cb0a
#undef str_1000cb16
#undef str_1000cb22
#undef str_1000cb2f
#undef str_1000cb39
#undef str_1000cb4d
#undef str_1000cb5c
#undef str_1000cb6f
#undef str_1000cb81
#undef str_1000cb97
#undef str_1000cbb0
#undef str_1000cbba
#undef str_1000cbc6
#undef str_1000cbf3
#undef str_1000cc1f
#undef str_1000cc30
#undef str_1000cc3a
#undef str_1000cc4f
#undef str_1000cc60
#undef str_1000cc6c
#undef str_1000cc78
#undef str_1000cc84
#undef str_1000cc93
#undef str_1000cc9d
#undef str_1000ccab
#undef str_1000ccbc
#undef str_1000ccc8
#undef str_1000ccd4
#undef str_1000cce3
#undef bStack_a5
#undef local_a4
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_14

#undef str_1000cdf5
#define str_1000cdf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b7U)))
#undef str_1000ce00
#define str_1000ce00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c2U)))
#undef str_1000ce0f
#define str_1000ce0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d1U)))
#undef str_1000ce20
#define str_1000ce20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e2U)))
#undef str_1000ce33
#define str_1000ce33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f5U)))
#undef str_1000ce46
#define str_1000ce46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x908U)))
#undef str_1000ce56
#define str_1000ce56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x918U)))
#undef str_1000ce65
#define str_1000ce65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x927U)))
#undef str_1000ce74
#define str_1000ce74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x936U)))
#undef str_1000ce85
#define str_1000ce85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x947U)))
#undef str_1000ce90
#define str_1000ce90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x952U)))
#undef str_1000ce9c
#define str_1000ce9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x95eU)))
#undef str_1000cea6
#define str_1000cea6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x968U)))
#undef str_1000ceaf
#define str_1000ceaf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x971U)))
#undef str_1000ceba
#define str_1000ceba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97cU)))
#undef str_1000cec3
#define str_1000cec3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x985U)))
#undef str_1000cecb
#define str_1000cecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98dU)))
#undef str_1000ced4
#define str_1000ced4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x996U)))
#undef str_1000cedb
#define str_1000cedb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99dU)))
#undef str_1000ceee
#define str_1000ceee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b0U)))
#undef str_1000cf01
#define str_1000cf01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c3U)))
#undef str_1000cf14
#define str_1000cf14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a8f0
 */

char * recovered_1000a8f0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  if (in_ECX == 0) {
    return str_1000cdf5;
  }
  uVar1 = *(ushort *)(in_ECX + 4);
  if (uVar1 < 0x10ec) {
    if (uVar1 < 0x106b) {
      if (uVar1 == 0x1013) {
        if ((*(ushort *)(in_ECX + 6) & 0xfffe) == 0xb8) {
          return str_1000ceaf;
        }
      }
      else if ((uVar1 == 0x1033) && (*(short *)(in_ECX + 6) == 0x194)) {
        return str_1000cea6;
      }
    }
    else if (uVar1 == 0x106b) {
      if (*(short *)(in_ECX + 6) == 0x21) {
        return str_1000ced4;
      }
    }
    else if ((uVar1 == 0x108e) && (*(short *)(in_ECX + 6) == 0x2bad)) {
      return str_1000ced4;
    }
  }
  else if (uVar1 < 0x1af4) {
    if (uVar1 == 0x10ec) {
      if (*(short *)(in_ECX + 6) == -0x7fd7) {
        return str_1000cecb;
      }
    }
    else if ((uVar1 == 0x1234) && (*(short *)(in_ECX + 6) == 0x1111)) {
      return str_1000ceba;
    }
  }
  else if (uVar1 == 0x8086) {
    if (*(short *)(in_ECX + 6) == 0x100e) {
      return str_1000ce90;
    }
    if (*(char *)(in_ECX + 8) == '\f') {
      if (*(char *)(in_ECX + 9) == '\x03') goto LAB_1000aa6f;
    }
    else if ((*(char *)(in_ECX + 8) == '\x04') && (*(char *)(in_ECX + 9) == '\x03')) {
      return str_1000ce9c;
    }
  }
  else if (uVar1 == 0x1b36) {
    if (*(short *)(in_ECX + 6) == 0x100) {
      return str_1000cec3;
    }
  }
  else if (uVar1 == 0x1af4) {
    switch((uintptr_t)(*(undefined2 *)(in_ECX + 6))) {
    case 0x1000:
    case 0x1041:
      return str_1000ce00;
    case 0x1001:
    case 0x1042:
      return str_1000ce0f;
    case 0x1002:
    case 0x1045:
      return str_1000ce20;
    case 0x1003:
    case 0x1043:
      return str_1000ce33;
    case 0x1004:
    case 0x1048:
      return str_1000ce46;
    case 0x1005:
    case 0x1044:
      return str_1000ce56;
    default:
      return str_1000ce85;
    case 0x1050:
      return str_1000ce65;
    case 0x1052:
      return str_1000ce74;
    }
  }
  switch((uintptr_t)(*(undefined1 *)(in_ECX + 8))) {
  case 1:
    return str_1000cf01;
  case 2:
    return str_1000ceee;
  case 3:
    return str_1000cedb;
  case 4:
    return str_1000cf14;
  case 0xc:
    if (*(char *)(in_ECX + 9) == '\x03') {
LAB_1000aa6f:
      pcVar2 = recovered_1000bdb0((uint)*(byte *)(in_ECX + 10));
      return pcVar2;
    }
  }
  return str_1000cdf5;
}

#undef str_1000cdf5
#undef str_1000ce00
#undef str_1000ce0f
#undef str_1000ce20
#undef str_1000ce33
#undef str_1000ce46
#undef str_1000ce56
#undef str_1000ce65
#undef str_1000ce74
#undef str_1000ce85
#undef str_1000ce90
#undef str_1000ce9c
#undef str_1000cea6
#undef str_1000ceaf
#undef str_1000ceba
#undef str_1000cec3
#undef str_1000cecb
#undef str_1000ced4
#undef str_1000cedb
#undef str_1000ceee
#undef str_1000cf01
#undef str_1000cf14

#define local_44 (*(int *)(frame + 28))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(int *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_30 (*(code * *)(frame + 48))
#define local_2c (*(int *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(uint *)(frame + 60))
#define local_20 (*(int *)(frame + 64))
#define local_1c (*(ushort * *)(frame + 68))
#define local_18 (*(uint *)(frame + 72))
#define local_14 (*(int * *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aac0
 */

bool recovered_1000aac0(int *in_ECX,ushort *in_EDX,int *param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;

  local_24 = 0;
  bVar5 = false;
  if (param_3 != (int *)0x0) {
    iVar3 = -0x58;
    do {
      *(undefined1 *)((int)param_3 + iVar3 + 0x58) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
    if ((((in_EDX != (ushort *)0x0) && ((in_EDX[9] & 0x10) != 0)) && (in_ECX != (int *)0x0)) &&
       (((*in_ECX == 0x54584b57 && (0x5f < (uint)in_ECX[2])) &&
        ((code *)in_ECX[0x17] != (code *)0x0)))) {
      local_1c = in_EDX;
      local_14 = in_ECX;
      iVar3 = (*(code *)in_ECX[0x17])
                        ((char)*in_EDX,*(undefined1 *)((int)in_EDX + 1),(char)in_EDX[1],0x34,1,
                         &local_24);
      bVar5 = false;
      if (iVar3 != 0) {
        if (local_24 - 0x40 < 0xb0) {
          uVar4 = 0;
          while( true ) {
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            local_28 = 0;
            local_38 = 0;
            local_34 = 0;
            if (((*local_14 != 0x54584b57) || ((uint)local_14[2] < 0x60)) ||
               ((code *)local_14[0x17] == (code *)0x0)) break;
            local_18 = CONCAT31(PF_PART3(local_18, 1),(char)*local_1c);
            local_30 = (code *)(local_24 & 0xffff);
            iVar3 = (*(code *)local_14[0x17])
                              ((char)*local_1c,*(undefined1 *)((int)local_1c + 1),(char)local_1c[1],
                               local_30,1,&local_44);
            if ((((iVar3 == 0) || (*local_14 != 0x54584b57)) || ((uint)local_14[2] < 0x60)) ||
               ((code *)local_14[0x17] == (code *)0x0)) break;
            local_18 = (uint)(byte)local_1c[1];
            iVar3 = (*(code *)local_14[0x17])
                              (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 1 & 0xffff,1,
                               &local_40);
            if (iVar3 == 0) break;
            if (((local_44 == 9) && (*local_14 == 0x54584b57)) &&
               ((0x5f < (uint)local_14[2] && ((code *)local_14[0x17] != (code *)0x0)))) {
              local_18 = (uint)(byte)local_1c[1];
              iVar3 = (*(code *)local_14[0x17])
                                (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 3 & 0xffff,1,
                                 &local_3c);
              if ((((iVar3 != 0) && (*local_14 == 0x54584b57)) && (0x5f < (uint)local_14[2])) &&
                 ((code *)local_14[0x17] != (code *)0x0)) {
                local_18 = (uint)(byte)local_1c[1];
                iVar3 = (*(code *)local_14[0x17])
                                  (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 4 & 0xffff,1,
                                   &local_28);
                if ((((iVar3 != 0) && (*local_14 == 0x54584b57)) && (0x5f < (uint)local_14[2])) &&
                   ((code *)local_14[0x17] != (code *)0x0)) {
                  local_18 = (uint)(byte)local_1c[1];
                  iVar3 = (*(code *)local_14[0x17])
                                    (*local_1c & 0xff,*local_1c >> 8,local_18,local_24 + 8 & 0xffff,
                                     4,&local_38);
                  if (((iVar3 != 0) && (*local_14 == 0x54584b57)) &&
                     ((0x5f < (uint)local_14[2] && ((code *)local_14[0x17] != (code *)0x0)))) {
                    local_18 = (uint)(byte)local_1c[1];
                    iVar3 = (*(code *)local_14[0x17])
                                      (*local_1c & 0xff,*local_1c >> 8,local_18,
                                       local_24 + 0xc & 0xffff,4,&local_34);
                    if (iVar3 != 0) {
                      local_20 = 0;
                      param_3[9] = param_3[9] + 1;
                      if (local_3c == 1) {
                        local_18 = local_38;
                        iVar3 = local_34 + local_38;
                        if (((!CARRY4(local_34,local_38)) && (local_28 < 6)) &&
                           ((local_34 != 0 &&
                            (((local_28 == 0 || ((*(uint *)(local_1c + local_28 * 2 + 8) & 7) != 4))
                             && (uVar2 = *(uint *)(local_1c + local_28 * 2 + 10),
                                (uVar2 & 1) == 0 && uVar2 != 0)))))) {
                          iVar1 = 0;
                          if ((uVar2 & 6) == 4) {
                            if (4 < local_28) goto LAB_1000af30;
                            iVar1 = *(int *)(local_1c + local_28 * 2 + 0xc);
                          }
                          uVar2 = uVar2 & 0xfffffff0;
                          if (((iVar3 != 0) && (uVar2 != 0 || iVar1 != 0)) &&
                             (local_2c = 0, *local_14 == 0x54584b57)) {
                            if (((uint)local_14[2] < 0xbc) ||
                               (local_30 = (code *)local_14[0x2e], local_30 == (code *)0x0)) {
                              if ((!((uint)local_14[2] < 0x68 || iVar1 != 0)) &&
                                 (((code *)local_14[0x19] != (code *)0x0 &&
                                  (iVar3 = (*(code *)local_14[0x19])(uVar2,0,iVar3,&local_2c),
                                  iVar3 != 0)))) {
                                iVar3 = local_2c;
                                goto LAB_1000af1d;
                              }
                            }
                            else {
                              iVar3 = (*local_30)(uVar2,iVar1,iVar3,&local_20);
                              if (iVar3 != 0) {
                                iVar3 = local_20;
LAB_1000af1d:
                                *param_3 = iVar3 + local_18;
                                param_3[4] = local_28;
                                goto LAB_1000b145;
                              }
                            }
                          }
                        }
                      }
LAB_1000af30:
                      if (local_3c == 2) {
                        local_18 = local_38;
                        iVar3 = local_34 + local_38;
                        if (((((!CARRY4(local_34,local_38)) && (local_28 < 6)) && (local_34 != 0))
                            && ((local_28 == 0 ||
                                ((*(uint *)(local_1c + local_28 * 2 + 8) & 7) != 4)))) &&
                           (uVar2 = *(uint *)(local_1c + local_28 * 2 + 10),
                           (uVar2 & 1) == 0 && uVar2 != 0)) {
                          iVar1 = 0;
                          if ((uVar2 & 6) == 4) {
                            if (4 < local_28) goto LAB_1000b0da;
                            iVar1 = *(int *)(local_1c + local_28 * 2 + 0xc);
                          }
                          uVar2 = uVar2 & 0xfffffff0;
                          if ((iVar3 != 0) && (uVar2 != 0 || iVar1 != 0)) {
                            local_20 = 0;
                            local_2c = 0;
                            if (*local_14 == 0x54584b57) {
                              if (((uint)local_14[2] < 0xbc) ||
                                 (local_30 = (code *)local_14[0x2e], local_30 == (code *)0x0)) {
                                if ((0x67 < (uint)local_14[2] && iVar1 == 0) &&
                                   (((code *)local_14[0x19] != (code *)0x0 &&
                                    (iVar3 = (*(code *)local_14[0x19])(uVar2,0,iVar3,&local_2c),
                                    iVar3 != 0)))) {
                                  local_20 = local_2c;
                                  goto LAB_1000b058;
                                }
                              }
                              else {
                                iVar3 = (*local_30)(uVar2,iVar1,iVar3,&local_20);
                                if (iVar3 != 0) {
LAB_1000b058:
                                  local_20 = local_20 + local_18;
                                  local_2c = 0;
                                  param_3[1] = local_20;
                                  param_3[5] = local_28;
                                  if (((*local_14 == 0x54584b57) && (0x5f < (uint)local_14[2])) &&
                                     ((code *)local_14[0x17] != (code *)0x0)) {
                                    local_18 = (uint)(byte)local_1c[1];
                                    iVar3 = (*(code *)local_14[0x17])
                                                      (*local_1c & 0xff,*local_1c >> 8,local_18,
                                                       local_24 + 0x10 & 0xffff,4,&local_2c);
                                    if (iVar3 != 0) {
                                      param_3[8] = local_2c;
                                    }
                                  }
                                  goto LAB_1000b145;
                                }
                              }
                            }
                          }
                        }
                      }
LAB_1000b0da:
                      if ((local_3c == 3) &&
                         (iVar3 = recovered_1000b850(local_14,(int)local_1c,local_28,local_38,
                                                     local_34,&local_20), iVar3 != 0)) {
                        param_3[2] = local_20;
                        param_3[6] = local_28;
                      }
                      else if ((local_3c == 4) &&
                              (iVar3 = recovered_1000b850(local_14,(int)local_1c,local_28,local_38,
                                                          local_34,&local_20), iVar3 != 0)) {
                        param_3[3] = local_20;
                        param_3[7] = local_28;
                      }
                    }
                  }
                }
              }
            }
LAB_1000b145:
            if ((((local_40 == 0) || (local_40 == local_24)) || (local_24 = local_40, 0x1e < uVar4))
               || (uVar4 = uVar4 + 1, 0xaf < local_40 - 0x40)) break;
          }
        }
        bVar5 = *param_3 != 0;
      }
    }
  }
  return bVar5;
}

#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_14 (*(int * *)(frame + 28))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(int * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b180
 */

void recovered_1000b180(int *in_ECX,int *in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;

  local_1c = 0;
  if (in_EDX == (int *)0x0) {
    return;
  }
  iVar1 = *in_EDX;
  if (iVar1 == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    in_EDX[0xc] = 0;
    uVar2 = in_EDX[0xb] & 1;
    iVar1 = 0x34;
    goto LAB_1000b1f7;
  }
  iVar3 = *in_ECX;
  if (iVar3 == 0x54584b57) {
    iVar3 = iVar1 + 0x14;
    if ((uint)in_ECX[2] < 0xc0) {
      if (0x6b < (uint)in_ECX[2]) goto LAB_1000b209;
LAB_1000b1cb:
      if ((uint)in_ECX[2] < 0xc0) {
        iVar3 = 0x54584b57;
        if ((uint)in_ECX[2] < 0x6c) goto LAB_1000b378;
LAB_1000b259:
        pcVar4 = (code *)in_ECX[0x1a];
        if (pcVar4 != (code *)0x0) goto LAB_1000b260;
      }
      else {
        pcVar4 = (code *)in_ECX[0x2f];
        if (pcVar4 == (code *)0x0) goto LAB_1000b259;
LAB_1000b260:
        (*pcVar4)(iVar1 + 4,4,in_EDX + 10);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_1000b35b;
        iVar3 = *in_ECX;
        if (iVar3 != 0x54584b57) goto LAB_1000b378;
      }
      if ((uint)in_ECX[2] < 0xc4) {
        iVar3 = 0x54584b57;
        if ((uint)in_ECX[2] < 0x70) goto LAB_1000b378;
LAB_1000b33a:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) {
          iVar3 = 0x54584b57;
          goto LAB_1000b378;
        }
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) goto LAB_1000b33a;
      }
      (*pcVar4)(iVar1,4,1);
      iVar1 = *in_EDX;
      if (iVar1 != 0) {
        iVar3 = *in_ECX;
        goto LAB_1000b378;
      }
    }
    else {
      pcVar4 = (code *)in_ECX[0x2f];
      if (pcVar4 == (code *)0x0) {
LAB_1000b209:
        pcVar4 = (code *)in_ECX[0x1a];
        if (pcVar4 != (code *)0x0) goto LAB_1000b210;
LAB_1000b23a:
        if ((uint)in_ECX[2] < 0xc4) {
          if (0x6f < (uint)in_ECX[2]) goto LAB_1000b2b6;
        }
        else {
          pcVar4 = (code *)in_ECX[0x30];
          if (pcVar4 == (code *)0x0) {
LAB_1000b2b6:
            pcVar4 = (code *)in_ECX[0x1b];
            if (pcVar4 == (code *)0x0) goto LAB_1000b2e2;
          }
          (*pcVar4)(iVar3,1,0);
          iVar1 = *in_EDX;
          if (iVar1 == 0) goto LAB_1000b35b;
          iVar3 = *in_ECX;
          if (iVar3 != 0x54584b57) goto LAB_1000b378;
        }
LAB_1000b2e2:
        if ((uint)in_ECX[2] < 0xc4) {
          if ((uint)in_ECX[2] < 0x70) goto LAB_1000b1cb;
LAB_1000b302:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_1000b1cb;
        }
        else {
          pcVar4 = (code *)in_ECX[0x30];
          if (pcVar4 == (code *)0x0) goto LAB_1000b302;
        }
        (*pcVar4)(iVar1,4,0);
        iVar1 = *in_EDX;
        if (iVar1 != 0) {
          iVar3 = *in_ECX;
          if (iVar3 != 0x54584b57) goto LAB_1000b378;
          goto LAB_1000b1cb;
        }
      }
      else {
LAB_1000b210:
        (*pcVar4)(iVar3,1,in_EDX + 0xe);
        iVar1 = *in_EDX;
        if (iVar1 != 0) {
          iVar3 = *in_ECX;
          if (iVar3 != 0x54584b57) goto LAB_1000b378;
          iVar3 = iVar1 + 0x14;
          goto LAB_1000b23a;
        }
      }
    }
LAB_1000b35b:
    in_EDX[0xc] = 0;
    in_EDX[0xd] = in_EDX[0xb] & 1;
LAB_1000b516:
    if (((*in_ECX == 0x54584b57) && (0x7b < (uint)in_ECX[2])) &&
       ((code *)in_ECX[0x1e] != (code *)0x0)) {
      (*(code *)in_ECX[0x1e])();
    }
  }
  else {
LAB_1000b378:
    if (iVar3 == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc0) {
        if (0x6b < (uint)in_ECX[2]) goto LAB_1000b39c;
        goto LAB_1000b3dc;
      }
      pcVar4 = (code *)in_ECX[0x2f];
      if (pcVar4 == (code *)0x0) {
LAB_1000b39c:
        pcVar4 = (code *)in_ECX[0x1a];
        if (pcVar4 == (code *)0x0) goto LAB_1000b3dc;
      }
      (*pcVar4)(iVar1 + 4,4,in_EDX + 0xb);
      iVar1 = *in_EDX;
      in_EDX[0xc] = 0;
      in_EDX[0xd] = in_EDX[0xb] & 1;
      if (iVar1 == 0) goto LAB_1000b516;
      iVar3 = *in_ECX;
    }
    else {
LAB_1000b3dc:
      in_EDX[0xc] = 0;
      in_EDX[0xd] = in_EDX[0xb] & 1;
    }
    local_14 = in_EDX + 0xc;
    local_18 = in_EDX + 0xd;
    if (iVar3 == 0x54584b57) {
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) goto LAB_1000b420;
LAB_1000b454:
        iVar3 = 0;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) {
LAB_1000b420:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_1000b454;
        }
        (*pcVar4)(iVar1 + 8,4,0);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_1000b516;
        if (*in_ECX != 0x54584b57) goto LAB_1000b52d;
        iVar3 = *local_14;
      }
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) goto LAB_1000b472;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) {
LAB_1000b472:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_1000b49e;
        }
        (*pcVar4)(iVar1 + 0xc,4,iVar3);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_1000b516;
        if (*in_ECX != 0x54584b57) goto LAB_1000b52d;
      }
LAB_1000b49e:
      if ((uint)in_ECX[2] < 0xc4) {
        if (0x6f < (uint)in_ECX[2]) goto LAB_1000b4ba;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) {
LAB_1000b4ba:
          pcVar4 = (code *)in_ECX[0x1b];
          if (pcVar4 == (code *)0x0) goto LAB_1000b4df;
        }
        (*pcVar4)(iVar1 + 8,4,1);
        iVar1 = *in_EDX;
        if (iVar1 == 0) goto LAB_1000b516;
        if (*in_ECX != 0x54584b57) goto LAB_1000b52d;
      }
LAB_1000b4df:
      if ((uint)in_ECX[2] < 0xc4) {
        if ((uint)in_ECX[2] < 0x70) goto LAB_1000b516;
LAB_1000b500:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) goto LAB_1000b516;
      }
      else {
        pcVar4 = (code *)in_ECX[0x30];
        if (pcVar4 == (code *)0x0) goto LAB_1000b500;
      }
      (*pcVar4)(iVar1 + 0xc,4,*local_18);
      goto LAB_1000b516;
    }
  }
LAB_1000b52d:
  iVar1 = *in_EDX;
  if (iVar1 == 0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  iVar3 = iVar1 + 0x14;
  if ((uint)in_ECX[2] < 0xc4) {
    if (0x6f < (uint)in_ECX[2]) goto LAB_1000b575;
  }
  else {
    pcVar4 = (code *)in_ECX[0x30];
    if (pcVar4 == (code *)0x0) {
LAB_1000b575:
      pcVar4 = (code *)in_ECX[0x1b];
      if (pcVar4 != (code *)0x0) goto LAB_1000b57c;
    }
    else {
LAB_1000b57c:
      (*pcVar4)(iVar3,1,1);
      iVar1 = *in_EDX;
      if (iVar1 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      iVar3 = iVar1 + 0x14;
    }
    if ((uint)in_ECX[2] < 0xc4) {
      if (0x6f < (uint)in_ECX[2]) goto LAB_1000b60c;
    }
    else {
      pcVar4 = (code *)in_ECX[0x30];
      if (pcVar4 == (code *)0x0) {
LAB_1000b60c:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) goto LAB_1000b639;
      }
      (*pcVar4)(iVar3,1,3);
      iVar1 = *in_EDX;
      if (iVar1 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      iVar3 = iVar1 + 0x14;
    }
LAB_1000b639:
    if ((uint)in_ECX[2] < 0xc4) {
      if (0x6f < (uint)in_ECX[2]) goto LAB_1000b6a4;
    }
    else {
      pcVar4 = (code *)in_ECX[0x30];
      if (pcVar4 == (code *)0x0) {
LAB_1000b6a4:
        pcVar4 = (code *)in_ECX[0x1b];
        if (pcVar4 == (code *)0x0) goto LAB_1000b556;
      }
      (*pcVar4)(iVar3,1,0xb);
      iVar1 = *in_EDX;
      if (iVar1 == 0) {
        return;
      }
      if (*in_ECX != 0x54584b57) {
        return;
      }
      iVar3 = iVar1 + 0x14;
    }
  }
LAB_1000b556:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_1000b5c1;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_1000b5c1:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_1000b5ed;
    }
    (*pcVar4)(iVar3,1,in_EDX + 0xf);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000b5ed:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_1000b659;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_1000b659:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_1000b688;
    }
    (*pcVar4)(iVar1 + 0x12,2,in_EDX + 0x10);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000b688:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_1000b6e4;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_1000b6e4:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_1000b713;
    }
    (*pcVar4)(iVar1 + 0x15,1,in_EDX + 0x15);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000b713:
  if ((uint)in_ECX[2] < 0xc4) {
    if (0x6f < (uint)in_ECX[2]) goto LAB_1000b72f;
  }
  else {
    pcVar4 = (code *)in_ECX[0x30];
    if (pcVar4 == (code *)0x0) {
LAB_1000b72f:
      pcVar4 = (code *)in_ECX[0x1b];
      if (pcVar4 == (code *)0x0) goto LAB_1000b75c;
    }
    (*pcVar4)(iVar1 + 0x16,2,0);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000b75c:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_1000b778;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_1000b778:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_1000b7a7;
    }
    (*pcVar4)(iVar1 + 0x18,2,in_EDX + 0x11);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000b7a7:
  if ((uint)in_ECX[2] < 0xc0) {
    if (0x6b < (uint)in_ECX[2]) goto LAB_1000b7c3;
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) {
LAB_1000b7c3:
      pcVar4 = (code *)in_ECX[0x1a];
      if (pcVar4 == (code *)0x0) goto LAB_1000b7ea;
    }
    (*pcVar4)(iVar1 + 0x1c,2,in_EDX + 0x12);
    iVar1 = *in_EDX;
    if (iVar1 == 0) {
      return;
    }
    if (*in_ECX != 0x54584b57) {
      return;
    }
  }
LAB_1000b7ea:
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return;
    }
LAB_1000b806:
    pcVar4 = (code *)in_ECX[0x1a];
    if (pcVar4 == (code *)0x0) {
      return;
    }
  }
  else {
    pcVar4 = (code *)in_ECX[0x2f];
    if (pcVar4 == (code *)0x0) goto LAB_1000b806;
  }
  iVar1 = (*pcVar4)(iVar1 + 0x1e,2,&local_1c);
  if (iVar1 == 0) {
    return;
  }
  in_EDX[0x13] = local_1c;
  if (in_EDX[1] == 0) {
    return;
  }
  uVar2 = local_1c * in_EDX[8] + in_EDX[1];
  iVar1 = 0x50;
LAB_1000b1f7:
  *(uint *)((int)in_EDX + iVar1) = uVar2;
  return;
}

#undef local_14
#undef local_1c
#undef local_18

#define local_18 (*(int *)(frame + 24))
#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b850
 */

undefined4
recovered_1000b850(int *in_ECX,int in_EDX,uint param_3,uint param_4,uint param_5,int *param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  iVar2 = param_5 + param_4;
  if (((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) && (param_6 != (int *)0x0))
     && (((param_3 == 0 || ((*(uint *)(in_EDX + 0x10 + param_3 * 4) & 7) != 4)) &&
         (uVar1 = *(uint *)(in_EDX + 0x14 + param_3 * 4), (uVar1 & 1) == 0 && uVar1 != 0)))) {
    uVar3 = 0;
    local_14 = 0;
    if ((uVar1 & 6) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_14 = *(int *)(in_EDX + 0x18 + param_3 * 4);
    }
    uVar1 = uVar1 & 0xfffffff0;
    if ((iVar2 != 0) && (uVar1 != 0 || local_14 != 0)) {
      *param_6 = 0;
      local_18 = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
          if ((uint)in_ECX[2] < 0x68 || local_14 != 0) {
            return 0;
          }
          if ((code *)in_ECX[0x19] == (code *)0x0) {
            return 0;
          }
          iVar2 = (*(code *)in_ECX[0x19])(uVar1,0,iVar2,&local_18);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else {
          iVar2 = (*(code *)in_ECX[0x2e])(uVar1,local_14,iVar2,param_6);
          if (iVar2 == 0) {
            return 0;
          }
          local_18 = *param_6;
        }
        *param_6 = local_18 + param_4;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b980
 */

void recovered_1000b980(int *in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (in_EDX == 0 || param_4 == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return;
    }
  }
  else {
    pcVar1 = (code *)in_ECX[0x2f];
    if (pcVar1 != (code *)0x0) goto LAB_1000b9c5;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return;
  }
LAB_1000b9c5:
  (*pcVar1)(in_EDX + param_3,1,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b9e0
 */

void recovered_1000b9e0(int *in_ECX,int in_EDX,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (((in_EDX != 0) && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_1000ba11;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_1000ba11:
      (*pcVar1)(in_EDX + 0x14,1,param_3);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba30
 */

void recovered_1000ba30(int *in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (in_EDX == 0 || param_4 == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc0) {
    if ((uint)in_ECX[2] < 0x6c) {
      return;
    }
  }
  else {
    pcVar1 = (code *)in_ECX[0x2f];
    if (pcVar1 != (code *)0x0) goto LAB_1000ba75;
  }
  pcVar1 = (code *)in_ECX[0x1a];
  if (pcVar1 == (code *)0x0) {
    return;
  }
LAB_1000ba75:
  (*pcVar1)(in_EDX + param_3,2,param_4);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba90
 */

void recovered_1000ba90(int *in_ECX,int in_EDX,int param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  if (((in_EDX != 0) && (in_ECX != (int *)0x0)) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc4) {
      if ((uint)in_ECX[2] < 0x70) {
        return;
      }
    }
    else {
      pcVar1 = (code *)in_ECX[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_1000bac1;
    }
    pcVar1 = (code *)in_ECX[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_1000bac1:
      (*pcVar1)(in_EDX + param_3,2,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bae0
 */

void recovered_1000bae0(int *in_ECX,int in_EDX,int param_3,undefined4 param_4,undefined4 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;

  if (in_EDX == 0) {
    return;
  }
  if (in_ECX == (int *)0x0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc4) {
    if ((uint)in_ECX[2] < 0x70) {
      return;
    }
LAB_1000bb18:
    pcVar2 = (code *)in_ECX[0x1b];
    if (pcVar2 == (code *)0x0) {
      return;
    }
  }
  else {
    pcVar2 = (code *)in_ECX[0x30];
    if (pcVar2 == (code *)0x0) goto LAB_1000bb18;
  }
  iVar1 = (*pcVar2)(in_EDX + param_3,4,param_4);
  if (iVar1 == 0) {
    return;
  }
  if (*in_ECX != 0x54584b57) {
    return;
  }
  if ((uint)in_ECX[2] < 0xc4) {
    if ((uint)in_ECX[2] < 0x70) {
      return;
    }
  }
  else {
    pcVar2 = (code *)in_ECX[0x30];
    if (pcVar2 != (code *)0x0) goto LAB_1000bb66;
  }
  pcVar2 = (code *)in_ECX[0x1b];
  if (pcVar2 == (code *)0x0) {
    return;
  }
LAB_1000bb66:
  (*pcVar2)(in_EDX + param_3 + 4,4,param_5);
  return;
}


#undef str_1000cdb2
#define str_1000cdb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x874U)))
#define abStack_1b (*(byte (*)[11])(frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bb80
 */

void recovered_1000bb80(int in_ECX,uint in_EDX,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;

  if (in_ECX == 0) {
    if (in_EDX == 0) goto joined_r0x1000bcbf;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar2 + 1 < 0x400) {
      cVar5 = ' ';
      pcVar4 = str_1000cdb2;
      do {
        pcVar4 = pcVar4 + 1;
        *(char *)(in_ECX + uVar2) = cVar5;
        uVar2 = uVar2 + 1;
        cVar5 = *pcVar4;
        if (cVar5 == '\0') break;
      } while (uVar2 < 0x3ff);
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
    uVar3 = 0;
    do {
      pcVar4 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar4 != '\0');
    if (uVar3 < 0x400) {
      *(undefined2 *)(in_ECX + -1 + uVar3) = 0x30;
    }
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(in_ECX + uVar2) != '\0');
    if (uVar3 < 0x400) {
      *(undefined1 *)(in_ECX + -1 + uVar3) = 0x3d;
      uVar2 = uVar3;
    }
    *(undefined1 *)(in_ECX + uVar2) = 0;
    if (in_EDX == 0) {
      uVar3 = 0;
      do {
        pcVar4 = (char *)(in_ECX + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar4 != '\0');
      if (uVar3 < 0x400) {
        *(undefined2 *)(in_ECX + -1 + uVar3) = 0x30;
      }
LAB_1000bd5a:
      uVar3 = 0;
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 + 1;
      } while (*(char *)(in_ECX + uVar2) != '\0');
      if (uVar3 < 0x400) {
        *(undefined1 *)(in_ECX + -1 + uVar3) = 0x78;
        uVar2 = uVar3;
      }
      *(undefined1 *)(in_ECX + uVar2) = 0;
      goto joined_r0x1000bcbf;
    }
  }
  uVar3 = 0;
  do {
    abStack_1b[uVar3 + 1] = (char)in_EDX + (char)(in_EDX / 10) * -10 | 0x30;
    uVar2 = uVar3 + 1;
    if (8 < uVar3) break;
    bVar1 = 9 < in_EDX;
    uVar3 = uVar2;
    in_EDX = in_EDX / 10;
  } while (bVar1);
LAB_1000bc66:
  do {
    uVar3 = uVar2 - 1;
    if (in_ECX != 0) {
      uVar6 = 0;
      do {
        pcVar4 = (char *)(in_ECX + uVar6);
        uVar6 = uVar6 + 1;
      } while (*pcVar4 != '\0');
      if (uVar6 < 0x400) {
        *(byte *)(in_ECX + -1 + uVar6) = abStack_1b[uVar2];
        *(undefined1 *)(in_ECX + uVar6) = 0;
      }
      uVar2 = uVar3;
      if (uVar3 == 0) {
        if (in_ECX != 0) goto LAB_1000bd5a;
        break;
      }
      goto LAB_1000bc66;
    }
    uVar2 = uVar3;
  } while (uVar3 != 0);
joined_r0x1000bcbf:
  if (param_3 == 0) {
    if (in_ECX != 0) {
      uVar3 = 0;
      do {
        pcVar4 = (char *)(in_ECX + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar4 != '\0');
      if (uVar3 < 0x400) {
        *(undefined2 *)(in_ECX + -1 + uVar3) = 0x30;
      }
    }
  }
  else {
    uVar3 = 0;
    do {
      abStack_1b[uVar3 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
      uVar2 = uVar3 + 1;
      if (8 < uVar3) break;
      bVar1 = 9 < param_3;
      param_3 = param_3 / 10;
      uVar3 = uVar2;
    } while (bVar1);
    do {
      if (in_ECX != 0) {
        uVar3 = 0;
        do {
          pcVar4 = (char *)(in_ECX + uVar3);
          uVar3 = uVar3 + 1;
        } while (*pcVar4 != '\0');
        if (uVar3 < 0x400) {
          *(byte *)(in_ECX + -1 + uVar3) = abStack_1b[uVar2];
          *(undefined1 *)(in_ECX + uVar3) = 0;
        }
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

#undef str_1000cdb2
#undef abStack_1b

#undef DAT_1000cf2a
#define DAT_1000cf2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9ecU)))
#undef DAT_1000cf2f
#define DAT_1000cf2f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f1U)))
#undef DAT_1000cf34
#define DAT_1000cf34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f6U)))
#undef DAT_1000cf39
#define DAT_1000cf39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fbU)))
#undef str_1000cf3e
#define str_1000cf3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa00U)))
#undef str_1000cf49
#define str_1000cf49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0bU)))
#undef str_1000cf52
#define str_1000cf52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa14U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bdb0
 */

char * recovered_1000bdb0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (in_ECX < 0x30) {
    if (in_ECX == 0) {
      return &DAT_1000cf2a;
    }
    if (in_ECX == 0x10) {
      return &DAT_1000cf2f;
    }
    if (in_ECX == 0x20) {
      return &DAT_1000cf34;
    }
  }
  else {
    if (in_ECX == 0x30) {
      return &DAT_1000cf39;
    }
    if (in_ECX == 0x80) {
      return str_1000cf3e;
    }
    if (in_ECX == 0xfe) {
      return str_1000cf49;
    }
  }
  return str_1000cf52;
}

#undef DAT_1000cf2a
#undef DAT_1000cf2f
#undef DAT_1000cf34
#undef DAT_1000cf39
#undef str_1000cf3e
#undef str_1000cf49
#undef str_1000cf52

#define local_80 (*(uint *)(frame + 16))
#define local_7c (*(uint *)(frame + 20))
#define local_70 (*(undefined8 *)(frame + 32))
#define local_68 (*(int *)(frame + 40))
#define local_64 (*(uint *)(frame + 44))
#define local_60 (*(int *)(frame + 48))
#define local_5c (*(uint *)(frame + 52))
#define local_50 (*(uint *)(frame + 64))
#define local_44 (*(uint * *)(frame + 76))
#define local_40 (*(int *)(frame + 80))
#define local_34 (*(uint *)(frame + 92))
#define local_2c (*(int *)(frame + 100))
#define local_28 (*(uint * *)(frame + 104))
#define local_1c (*(uint * *)(frame + 116))
#define local_18 (*(int *)(frame + 120))
#define local_14 (*(int *)(frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be10
 */

undefined8 recovered_1000be10(int param_1,uint param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_EDX;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;

  uVar7 = 0;
  puVar13 = (uint *)CONCAT31((int3)((uint)in_EDX >> 8),param_2 == 0 || param_1 == 0);
  if (param_2 != 0 && param_1 != 0) {
    bVar21 = false;
    local_50 = 0;
    do {
      iVar1 = param_1 + local_50 * 0x70;
      iVar14 = *(int *)(param_1 + local_50 * 0x70);
      if (iVar14 == 3) {
        if (((*(int *)(iVar1 + 0x20) != 1) || (uVar7 = *(uint *)(iVar1 + 0x14), uVar7 == 0)) ||
           (uVar19 = *(uint *)(iVar1 + 0x18), uVar19 == 0)) break;
        uVar4 = (uint)(*(uint *)(iVar1 + 0x1c) < uVar7 * 4);
        uVar16 = -(uVar7 >> 0x1e);
        puVar13 = (uint *)(uVar16 - uVar4);
        if (uVar7 >> 0x1e != 0 || uVar16 < uVar4) break;
        uVar4 = *(uint *)(iVar1 + 0x38);
        lVar6 = (ulonglong)uVar19 * (ulonglong)*(uint *)(iVar1 + 0x1c);
        puVar13 = (uint *)((ulonglong)lVar6 >> 0x20);
        if (((*(uint *)(iVar1 + 0x10) != 0) &&
            (puVar13 != (uint *)0x0 ||
             (uint)-(int)puVar13 < (uint)(*(uint *)(iVar1 + 0x10) < (uint)lVar6))) ||
           ((*(int *)(iVar1 + 8) == 0 || (*(int *)(iVar1 + 0xc) != 0)))) break;
        iVar14 = *(int *)(iVar1 + 0x40);
        iVar18 = *(int *)(iVar1 + 0x50);
        uVar16 = iVar18 - iVar14;
        iVar10 = iVar18;
        if (iVar14 <= iVar18) {
          iVar10 = iVar14;
        }
        iVar11 = iVar18;
        if (uVar16 == 0 || iVar18 < iVar14) {
          iVar11 = iVar14;
        }
        puVar9 = *(uint **)(iVar1 + 0x44);
        puVar2 = *(uint **)(iVar1 + 0x54);
        uVar17 = (int)puVar2 - (int)puVar9;
        puVar20 = puVar2;
        if ((int)puVar9 <= (int)puVar2) {
          puVar20 = puVar9;
        }
        puVar13 = puVar2;
        if (uVar17 == 0 || (int)puVar2 < (int)puVar9) {
          puVar13 = puVar9;
        }
        iVar3 = *(int *)(iVar1 + 0x60);
        local_2c = iVar3;
        if (iVar10 <= iVar3) {
          local_2c = iVar10;
        }
        puVar8 = *(uint **)(iVar1 + 100);
        local_28 = puVar8;
        if ((int)puVar20 <= (int)puVar8) {
          local_28 = puVar20;
        }
        local_40 = iVar3;
        if (iVar3 <= iVar11) {
          local_40 = iVar11;
        }
        local_44 = puVar8;
        if ((int)puVar8 <= (int)puVar13) {
          local_44 = puVar13;
        }
        if (((-1 < local_40) && (-1 < (int)local_44)) &&
           ((local_2c < (int)uVar7 && ((int)local_28 < (int)uVar19)))) {
          if (local_2c < 1) {
            local_2c = 0;
          }
          if ((int)local_28 < 1) {
            local_28 = (uint *)0x0;
          }
          if ((int)uVar7 <= local_40) {
            local_40 = uVar7 - 1;
          }
          if ((int)uVar19 <= (int)local_44) {
            local_44 = (uint *)(uVar19 - 1);
          }
          lVar6 = (longlong)(iVar3 - iVar14) * (longlong)(int)uVar17;
          lVar5 = (longlong)((int)puVar8 - (int)puVar9) * (longlong)(int)uVar16;
          puVar13 = (uint *)((uint)((ulonglong)lVar5 >> 0x20) ^ (uint)((ulonglong)lVar6 >> 0x20));
          if (((int)lVar5 != (int)lVar6 || puVar13 != (uint *)0x0) &&
             ((int)local_28 <= (int)local_44)) {
            uVar7 = (int)puVar8 - (int)puVar2;
            iVar10 = iVar3 - iVar18;
            uVar19 = (int)puVar9 - (int)puVar8;
            local_70 = (longlong)(local_2c - iVar14) * (longlong)(int)uVar17 -
                       (longlong)((int)local_28 - (int)puVar9) * (longlong)(int)uVar16;
            lVar6 = (longlong)(local_2c - iVar3) * (longlong)(int)uVar19 -
                    (longlong)((int)local_28 - (int)puVar8) * (longlong)(iVar14 - iVar3);
            lVar5 = (longlong)(local_2c - iVar18) * (longlong)(int)uVar7 -
                    (longlong)((int)local_28 - (int)puVar2) * (longlong)iVar10;
            iVar18 = *(int *)(iVar1 + 8) + local_2c * 4;
            do {
              local_60 = (int)((ulonglong)lVar5 >> 0x20);
              local_5c = (uint)lVar5;
              local_68 = (int)((ulonglong)lVar6 >> 0x20);
              local_64 = (uint)lVar6;
              if (local_2c <= local_40) {
                iVar11 = *(int *)(iVar1 + 0x1c) * (int)local_28;
                puVar13 = (uint *)(iVar18 + iVar11);
                uVar12 = iVar11 + iVar18;
                local_7c = (uint)local_70;
                local_80 = local_64;
                local_18 = local_68;
                local_34 = local_5c;
                iVar11 = (local_40 - local_2c) + 1;
                iVar15 = PF_PART4(local_70, 4);
                do {
                  if ((((-1 < local_60) && (-1 < local_18)) && (-1 < iVar15)) ||
                     ((((SBORROW4(0,local_60) != SBORROW4(-local_60,(uint)(local_34 != 0))) ==
                        (int)(-local_60 - (uint)(local_34 != 0)) < 0 &&
                       ((SBORROW4(0,local_18) != SBORROW4(-local_18,(uint)(local_80 != 0))) ==
                        (int)(-local_18 - (uint)(local_80 != 0)) < 0)) &&
                      ((SBORROW4(0,iVar15) != SBORROW4(-iVar15,(uint)(local_7c != 0))) ==
                       (int)(-iVar15 - (uint)(local_7c != 0)) < 0)))) {
                    if ((uVar12 & 3) == 0) {
                      *puVar13 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                                 uVar4 << 0x18;
                    }
                    else {
                      *(char *)puVar13 = (char)(uVar4 >> 0x18);
                      *(char *)((int)puVar13 + 1) = (char)(uVar4 >> 0x10);
                      *(char *)((int)puVar13 + 2) = (char)(uVar4 >> 8);
                      *(char *)((int)puVar13 + 3) = (char)uVar4;
                    }
                  }
                  bVar21 = CARRY4(local_34,uVar7);
                  local_34 = local_34 + uVar7;
                  local_60 = local_60 + ((int)uVar7 >> 0x1f) + (uint)bVar21;
                  bVar21 = CARRY4(local_80,uVar19);
                  local_80 = local_80 + uVar19;
                  local_18 = local_18 + ((int)uVar19 >> 0x1f) + (uint)bVar21;
                  bVar21 = CARRY4(local_7c,uVar17);
                  local_7c = local_7c + uVar17;
                  iVar15 = iVar15 + ((int)uVar17 >> 0x1f) + (uint)bVar21;
                  puVar13 = puVar13 + 1;
                  uVar12 = uVar12 + 4;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              puVar13 = (uint *)(iVar10 >> 0x1f);
              lVar5 = lVar5 - iVar10;
              lVar6 = lVar6 - (iVar14 - iVar3);
              local_70 = CONCAT44((PF_PART4(local_70, 4) - ((int)uVar16 >> 0x1f)) -
                                  (uint)((uint)local_70 < uVar16),(uint)local_70 - uVar16);
              bVar21 = local_28 != local_44;
              local_28 = (uint *)((int)local_28 + 1);
            } while (bVar21);
          }
        }
      }
      else if (iVar14 == 2) {
        if (((*(int *)(iVar1 + 0x20) != 1) ||
            (puVar9 = *(uint **)(iVar1 + 0x14), puVar9 == (uint *)0x0)) ||
           (puVar2 = *(uint **)(iVar1 + 0x18), puVar2 == (uint *)0x0)) break;
        uVar7 = (uint)(*(uint *)(iVar1 + 0x1c) < (uint)((int)puVar9 * 4));
        uVar19 = -((uint)puVar9 >> 0x1e);
        puVar13 = (uint *)(uVar19 - uVar7);
        if ((uint)puVar9 >> 0x1e != 0 || uVar19 < uVar7) break;
        local_14 = *(int *)(iVar1 + 0x28);
        puVar20 = *(uint **)(iVar1 + 0x2c);
        lVar6 = ZEXT48(puVar2) * (ulonglong)*(uint *)(iVar1 + 0x1c);
        iVar14 = (int)((ulonglong)lVar6 >> 0x20);
        puVar13 = *(uint **)(iVar1 + 0x30);
        uVar7 = *(uint *)(iVar1 + 0x38);
        if (((((*(uint *)(iVar1 + 0x10) != 0) &&
              (iVar14 != 0 || (uint)-iVar14 < (uint)(*(uint *)(iVar1 + 0x10) < (uint)lVar6))) ||
             (iVar14 = *(int *)(iVar1 + 8), iVar14 == 0)) ||
            ((*(int *)(iVar1 + 0x34) < 1 || ((int)puVar13 < 1)))) || (*(int *)(iVar1 + 0xc) != 0))
        break;
        local_1c = (uint *)((int)puVar13 + local_14);
        puVar13 = puVar9;
        if (((0 < (int)local_1c) &&
            (puVar8 = (uint *)(*(int *)(iVar1 + 0x34) + (int)puVar20), 0 < (int)puVar8)) &&
           ((local_14 < (int)puVar9 && ((int)puVar20 < (int)puVar2)))) {
          if (local_14 < 1) {
            local_14 = 0;
          }
          if ((int)puVar20 < 1) {
            puVar20 = (uint *)0x0;
          }
          if ((int)puVar9 <= (int)local_1c) {
            local_1c = puVar9;
          }
          if ((int)puVar2 <= (int)puVar8) {
            puVar8 = puVar2;
          }
          puVar13 = puVar2;
          if ((int)puVar20 < (int)puVar8) {
            puVar13 = (uint *)(uVar7 >> 0x10);
            do {
              puVar9 = (uint *)(*(int *)(iVar1 + 0x1c) * (int)puVar20 + iVar14 + local_14 * 4);
              if (((uint)puVar9 & 3) == 0) {
                if (local_14 < (int)local_1c) {
                  iVar18 = (int)local_1c - local_14;
                  do {
                    *puVar9 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18;
                    puVar9 = puVar9 + 1;
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                }
              }
              else {
                iVar18 = (int)local_1c - local_14;
                if (local_14 < (int)local_1c) {
                  do {
                    if (puVar9 != (uint *)0x0) {
                      *(char *)puVar9 = (char)(uVar7 >> 0x18);
                      *(char *)((int)puVar9 + 1) = (char)(uVar7 >> 0x10);
                      *(char *)((int)puVar9 + 2) = (char)(uVar7 >> 8);
                      *(char *)((int)puVar9 + 3) = (char)uVar7;
                    }
                    puVar9 = puVar9 + 1;
                    iVar18 = iVar18 + -1;
                  } while (iVar18 != 0);
                }
              }
              puVar20 = (uint *)((int)puVar20 + 1);
            } while (puVar20 != puVar8);
          }
        }
      }
      else {
        if ((((iVar14 != 1) || (*(int *)(iVar1 + 0x20) != 1)) ||
            (uVar7 = *(uint *)(iVar1 + 0x14), uVar7 == 0)) ||
           (uVar19 = *(uint *)(iVar1 + 0x18), uVar19 == 0)) break;
        uVar4 = (uint)(*(uint *)(iVar1 + 0x1c) < uVar7 * 4);
        uVar16 = -(uVar7 >> 0x1e);
        puVar13 = (uint *)(uVar16 - uVar4);
        if (uVar7 >> 0x1e != 0 || uVar16 < uVar4) break;
        uVar4 = *(uint *)(iVar1 + 0x38);
        lVar6 = (ulonglong)*(uint *)(iVar1 + 0x1c) * (ulonglong)uVar19;
        puVar13 = (uint *)((ulonglong)lVar6 >> 0x20);
        if ((((*(uint *)(iVar1 + 0x10) != 0) &&
             (puVar13 != (uint *)0x0 ||
              (uint)-(int)puVar13 < (uint)(*(uint *)(iVar1 + 0x10) < (uint)lVar6))) ||
            ((iVar14 = *(int *)(iVar1 + 8), iVar14 == 0 || (((int)uVar19 < 1 || ((int)uVar7 < 1)))))
            ) || (*(int *)(iVar1 + 0xc) != 0)) break;
        uVar16 = 0;
        do {
          puVar13 = (uint *)(*(int *)(iVar1 + 0x1c) * uVar16 + iVar14);
          if (((uint)puVar13 & 3) == 0) {
            uVar17 = uVar7;
            do {
              *puVar13 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18;
              puVar13 = puVar13 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          else {
            uVar17 = uVar7;
            do {
              if (puVar13 != (uint *)0x0) {
                *(char *)puVar13 = (char)(uVar4 >> 0x18);
                *(char *)((int)puVar13 + 1) = (char)(uVar4 >> 0x10);
                *(char *)((int)puVar13 + 2) = (char)(uVar4 >> 8);
                *(char *)((int)puVar13 + 3) = (char)uVar4;
              }
              puVar13 = puVar13 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar19);
      }
      local_50 = local_50 + 1;
      bVar21 = param_2 <= local_50;
    } while (local_50 != param_2);
    uVar7 = (uint)bVar21;
  }
  return CONCAT44(puVar13,uVar7);
}

#undef local_80
#undef local_7c
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_50
#undef local_44
#undef local_40
#undef local_34
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_14
