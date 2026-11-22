/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b000
#define DAT_1000b000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa62U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001210
 */

void * recovered_10001210(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000b000;
}

#undef DAT_1000b000

#undef DAT_1000a82a
#define DAT_1000a82a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x28cU)))
#undef DAT_1000c000
#define DAT_1000c000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a62U)))
#undef str_1000a788
#define str_1000a788 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1eaU)))
#undef str_1000a7a0
#define str_1000a7a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x202U)))
#undef str_1000a7b2
#define str_1000a7b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x214U)))
#undef str_1000a7d5
#define str_1000a7d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x237U)))
#undef str_1000a7f8
#define str_1000a7f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25aU)))
#undef str_1000a832
#define str_1000a832 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x294U)))
#undef str_1000ad43
#define str_1000ad43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a5U)))
#undef str_1000ae97
#define str_1000ae97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f9U)))
#undef str_1000aeae
#define str_1000aeae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x910U)))
#undef str_1000aecb
#define str_1000aecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92dU)))
#undef str_1000aee3
#define str_1000aee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x945U)))
#undef str_1000af01
#define str_1000af01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x963U)))
#undef str_1000af1a
#define str_1000af1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97cU)))
#undef str_1000af3c
#define str_1000af3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99eU)))
#undef str_1000af58
#define str_1000af58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9baU)))
#undef str_1000af70
#define str_1000af70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d2U)))
#undef str_1000af85
#define str_1000af85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e7U)))
#undef str_1000af9b
#define str_1000af9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9fdU)))
#define local_474 (*(int *)(frame + 124))
#define local_430 (*(undefined1 (*)[16])(frame + 192))
#define local_420 (*(uint *)(frame + 208))
#define abStack_4d9 (*(byte (*)[101])(frame + 23))
#define local_41c (*(uint *)(frame + 212))
#define local_418 (*(uint *)(frame + 216))
#define local_3fc (*(uint (*)[13])(frame + 244))
#define local_3c8 (*(undefined4 *)(frame + 296))
#define local_3c4 (*(undefined4 *)(frame + 300))
#define local_3ac (*(undefined4 *)(frame + 324))
#define local_3a8 (*(byte (*)[767])(frame + 328))
#define local_a8 (*(undefined4 *)(frame + 1096))
#define local_a4 (*(undefined4 *)(frame + 1100))
#define local_a0 (*(undefined4 *)(frame + 1104))
#define bStack_a9 (*(byte *)(frame + 1095))
#define local_9c (*(undefined4 *)(frame + 1108))
#define local_98 (*(char (*)[64])(frame + 1112))
#define local_58 (*(char (*)[64])(frame + 1176))
#define local_18 (*(uint *)(frame + 1240))
#define local_14 (*(byte * *)(frame + 1244))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001220
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_10001220(int *api)

{
  unsigned char frame[1296] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  pbVar7 = (byte *)api[2];
  if (pbVar7 < 0x10) {
    return 0;
  }
  local_3a8[0] = 0;
  uVar10 = 0;
  do {
    uVar1 = uVar10;
    uVar10 = uVar1 + 1;
  } while (local_3a8[uVar1] != 0);
  if (uVar1 + 1 < 0x70) {
    bVar5 = 0x67;
    pcVar3 = str_1000a788;
    do {
      pcVar3 = pcVar3 + 1;
      local_3a8[uVar1] = bVar5;
      uVar1 = uVar1 + 1;
      bVar5 = *pcVar3;
      if (bVar5 == 0) break;
    } while (uVar1 < 0x6f);
  }
  local_3a8[uVar1] = 0;
  uVar10 = 0;
  do {
    uVar1 = uVar10;
    uVar10 = uVar1 + 1;
  } while (local_3a8[uVar1] != 0);
  if (uVar1 + 1 < 0x70) {
    bVar5 = 0x3a;
    pbVar4 = &DAT_1000a82a;
    do {
      local_3a8[uVar1] = bVar5;
      uVar1 = uVar1 + 1;
      bVar5 = *pbVar4;
      if (bVar5 == 0) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar1 < 0x6f);
  }
  local_3a8[uVar1] = 0;
  uVar10 = api[1];
  if (uVar10 < 1000000) {
    if (uVar10 == 0) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar1 + 1 < 0x70) {
        (local_3a8 + uVar1)[0] = 0x30;
        (local_3a8 + uVar1)[1] = 0;
      }
    }
    else {
      local_14 = pbVar7;
      uVar1 = 0;
      do {
        abStack_4d9[uVar1 + 1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        pbVar7 = local_14;
        uVar9 = uVar1 + 1;
        if (8 < uVar1) break;
        bVar11 = 9 < uVar10;
        uVar1 = uVar9;
        uVar10 = uVar10 / 10;
      } while (bVar11);
      do {
        pbVar4 = abStack_4d9 + uVar9;
        uVar9 = uVar9 - 1;
        uVar10 = 0;
        do {
          uVar1 = uVar10;
          uVar10 = uVar1 + 1;
        } while (local_3a8[uVar1] != 0);
        if (uVar1 + 1 < 0x70) {
          local_3a8[uVar1] = *pbVar4;
          local_3a8[uVar1 + 1] = 0;
        }
      } while (uVar9 != 0);
    }
  }
  else {
    local_14 = pbVar7;
    local_18 = uVar10 % 1000;
    uVar1 = uVar10 / 1000000;
    uVar9 = 0;
    do {
      abStack_4d9[uVar9 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
      uVar8 = uVar9 + 1;
      if (8 < uVar9) break;
      bVar11 = 9 < uVar1;
      uVar1 = uVar1 / 10;
      uVar9 = uVar8;
    } while (bVar11);
    do {
      pbVar7 = abStack_4d9 + uVar8;
      uVar8 = uVar8 - 1;
      uVar1 = 0;
      do {
        uVar9 = uVar1;
        uVar1 = uVar9 + 1;
      } while (local_3a8[uVar9] != 0);
      if (uVar9 + 1 < 0x70) {
        local_3a8[uVar9] = *pbVar7;
        local_3a8[uVar9 + 1] = 0;
      }
    } while (uVar8 != 0);
    uVar1 = 0;
    do {
      uVar9 = uVar1;
      uVar1 = uVar9 + 1;
    } while (local_3a8[uVar9] != 0);
    if (uVar1 < 0x70) {
      local_3a8[uVar9] = 0x2e;
      uVar9 = uVar1;
    }
    local_3a8[uVar9] = 0;
    uVar1 = local_18;
    uVar10 = (uVar10 / 1000) % 1000;
    if (uVar10 == 0) {
      uVar10 = 0;
      do {
        uVar9 = uVar10;
        uVar10 = uVar9 + 1;
      } while (local_3a8[uVar9] != 0);
      if (uVar9 + 1 < 0x70) {
        (local_3a8 + uVar9)[0] = 0x30;
        (local_3a8 + uVar9)[1] = 0;
      }
    }
    else {
      uVar9 = 0;
      do {
        abStack_4d9[uVar9 + 1] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
        uVar1 = local_18;
        uVar8 = uVar9 + 1;
        if (8 < uVar9) break;
        bVar11 = 9 < uVar10;
        uVar9 = uVar8;
        uVar10 = uVar10 / 10;
      } while (bVar11);
      do {
        pbVar7 = abStack_4d9 + uVar8;
        uVar8 = uVar8 - 1;
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar10 = uVar9 + 1;
        } while (local_3a8[uVar9] != 0);
        if (uVar9 + 1 < 0x70) {
          local_3a8[uVar9] = *pbVar7;
          local_3a8[uVar9 + 1] = 0;
        }
      } while (uVar8 != 0);
    }
    pbVar7 = local_14;
    if (uVar1 != 0) {
      uVar10 = 0;
      do {
        uVar9 = uVar10;
        uVar10 = uVar9 + 1;
      } while (local_3a8[uVar9] != 0);
      if (uVar10 < 0x70) {
        local_3a8[uVar9] = 0x2e;
        uVar9 = uVar10;
      }
      local_3a8[uVar9] = 0;
      uVar10 = 0;
      do {
        abStack_4d9[uVar10 + 1] = (byte)(uVar1 % 10) | 0x30;
        pbVar7 = local_14;
        uVar9 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar11 = 9 < uVar1;
        uVar1 = uVar1 / 10;
        uVar10 = uVar9;
      } while (bVar11);
      do {
        pbVar4 = abStack_4d9 + uVar9;
        uVar9 = uVar9 - 1;
        uVar10 = 0;
        do {
          uVar1 = uVar10;
          uVar10 = uVar1 + 1;
        } while (local_3a8[uVar1] != 0);
        if (uVar1 + 1 < 0x70) {
          local_3a8[uVar1] = *pbVar4;
          local_3a8[uVar1 + 1] = 0;
        }
      } while (uVar9 != 0);
    }
  }
  uVar10 = 0;
  do {
    uVar1 = uVar10;
    uVar10 = uVar1 + 1;
  } while (local_3a8[uVar1] != 0);
  if (uVar1 + 1 < 0x70) {
    bVar5 = 0x20;
    pcVar3 = str_1000a832;
    do {
      pcVar3 = pcVar3 + 1;
      local_3a8[uVar1] = bVar5;
      uVar1 = uVar1 + 1;
      bVar5 = *pcVar3;
      if (bVar5 == 0) break;
    } while (uVar1 < 0x6f);
  }
  local_3a8[uVar1] = 0;
  if ((0x2b < pbVar7) && ((code *)api[10] != (code *)0x0)) {
    (*(code *)api[10])(local_3a8);
  }
  iVar2 = -0xa8;
  do {
    local_430[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  iVar2 = -0x54;
  do {
    local_3a8[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  bVar11 = true;
  if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) && ((code *)api[0xf] != (code *)0x0)) {
    iVar2 = (*(code *)api[0xf])(abStack_4d9 + 1);
    bVar11 = iVar2 == 0;
  }
  recovered_10001f90(api,recovered_100021c0,local_3fc);
  if (((*api == 0x54584b57) && (0x9b < (uint)api[2])) &&
     (((code *)api[0x20] != (code *)0x0 &&
      ((api[0x26] != 0 && (iVar2 = (*(code *)api[0x20])(), iVar2 != 0)))))) {
    recovered_10009240(api,iVar2,10,recovered_100022c0,local_3fc);
  }
  local_14 = (byte *)0x0;
  if (!bVar11) {
    local_14 = abStack_4d9 + 1;
  }
  recovered_10002360((int)local_14,local_3fc,local_3a8);
  if ((code *)api[3] == (code *)0x0) {
    return 0;
  }
  iVar2 = (*(code *)api[3])(str_1000a7a0,str_1000a7b2,local_3a8);
  if (iVar2 == 0) {
    return 0;
  }
  if ((code *)api[4] != (code *)0x0) {
    uVar10 = local_474 + (uint)(local_474 == 0);
    if (0x3f < uVar10) {
      uVar10 = 0x40;
    }
    uVar1 = 1;
    if (!bVar11) {
      uVar1 = uVar10;
    }
    (*(code *)api[4])(uVar1,uVar1 * 0x60);
  }
  if ((code *)api[6] != (code *)0x0) {
    (*(code *)api[6])(0x80,0x100,0x100,0x10,3);
  }
  recovered_10001f90(api,recovered_10003e60,local_3fc);
  if ((((*api == 0x54584b57) && (0x9b < (uint)api[2])) && ((code *)api[0x20] != (code *)0x0)) &&
     ((api[0x26] != 0 && (iVar2 = (*(code *)api[0x20])(), iVar2 != 0)))) {
    recovered_10009240(api,iVar2,10,recovered_10007480,local_3fc);
  }
  if (local_3ac == 0) {
    DAT_1000c000 = api;
    if (((code *)api[8] == (code *)0x0) ||
       (iVar2 = (*(code *)api[8])(recovered_10009e10,3,str_1000a7f8), iVar2 == 0)) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      local_3c4 = 0;
      if (uVar1 + 1 < 0x300) {
        bVar5 = 0x20;
        pcVar3 = str_1000aeae;
        do {
          pcVar3 = pcVar3 + 1;
          local_3a8[uVar1] = bVar5;
          uVar1 = uVar1 + 1;
          bVar5 = *pcVar3;
          if (bVar5 == 0) break;
        } while (uVar1 < 0x2ff);
      }
    }
    else {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      local_3c4 = 1;
      if (uVar1 + 1 < 0x300) {
        bVar5 = 0x20;
        pcVar3 = str_1000ae97;
        do {
          pcVar3 = pcVar3 + 1;
          local_3a8[uVar1] = bVar5;
          uVar1 = uVar1 + 1;
          bVar5 = *pcVar3;
          if (bVar5 == 0) break;
        } while (uVar1 < 0x2ff);
      }
    }
    local_3a8[uVar1] = 0;
    if ((((*api == 0x54584b57) && (0xa7 < (uint)api[2])) && ((code *)api[0x29] != (code *)0x0)) &&
       (iVar2 = (*(code *)api[0x29])(recovered_10009e40,7,str_1000a7f8), iVar2 != 0)) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      local_3c4 = 1;
      if (uVar1 + 1 < 0x300) {
        bVar5 = 0x20;
        pcVar3 = str_1000aecb;
        do {
          pcVar3 = pcVar3 + 1;
          local_3a8[uVar1] = bVar5;
          uVar1 = uVar1 + 1;
          bVar5 = *pcVar3;
          if (bVar5 == 0) break;
        } while (uVar1 < 0x2ff);
      }
    }
    else {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar1 + 1 < 0x300) {
        bVar5 = 0x20;
        pcVar3 = str_1000aee3;
        do {
          pcVar3 = pcVar3 + 1;
          local_3a8[uVar1] = bVar5;
          uVar1 = uVar1 + 1;
          bVar5 = *pcVar3;
          if (bVar5 == 0) break;
        } while (uVar1 < 0x2ff);
      }
    }
    local_3a8[uVar1] = 0;
    iVar2 = *api;
  }
  else {
    uVar10 = 0;
    do {
      uVar1 = uVar10;
      uVar10 = uVar1 + 1;
    } while (local_3a8[uVar1] != 0);
    if (uVar1 + 1 < 0x300) {
      bVar5 = 0x20;
      pcVar3 = str_1000a7d5;
      do {
        pcVar3 = pcVar3 + 1;
        local_3a8[uVar1] = bVar5;
        uVar1 = uVar1 + 1;
        bVar5 = *pcVar3;
        if (bVar5 == 0) break;
      } while (uVar1 < 0x2ff);
    }
    local_3a8[uVar1] = 0;
    iVar2 = *api;
  }
  if (((iVar2 == 0x54584b57) && (0x43 < (uint)api[2])) && ((code *)api[0x10] != (code *)0x0)) {
    iVar2 = (*(code *)api[0x10])(local_430);
    local_18 = local_418;
    if (local_418 != 0 && ((local_41c != 0 && local_420 != 0) && iVar2 != 0)) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar10 < 0x300) {
        local_3a8[uVar1] = 0x20;
        uVar1 = uVar10;
      }
      local_3a8[uVar1] = 0;
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar1 + 1 < 0x300) {
        bVar5 = 0x66;
        pcVar3 = str_1000ad43;
        do {
          pcVar3 = pcVar3 + 1;
          local_3a8[uVar1] = bVar5;
          uVar1 = uVar1 + 1;
          bVar5 = *pcVar3;
          if (bVar5 == 0) break;
        } while (uVar1 < 0x2ff);
      }
      local_3a8[uVar1] = 0;
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar10 < 0x300) {
        local_3a8[uVar1] = 0x3d;
        uVar1 = uVar10;
      }
      local_3a8[uVar1] = 0;
      uVar10 = 0;
      do {
        local_3a8[uVar10 + 0x300] = (byte)(local_420 % 10) | 0x30;
        uVar1 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar11 = 9 < local_420;
        uVar10 = uVar1;
        local_420 = local_420 / 10;
      } while (bVar11);
      do {
        iVar2 = uVar1 + 0x2ff;
        uVar1 = uVar1 - 1;
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar10 = uVar9 + 1;
        } while (local_3a8[uVar9] != 0);
        if (uVar9 + 1 < 0x300) {
          local_3a8[uVar9] = local_3a8[iVar2];
          local_3a8[uVar9 + 1] = 0;
        }
      } while (uVar1 != 0);
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar10 < 0x300) {
        local_3a8[uVar1] = 0x78;
        uVar1 = uVar10;
      }
      local_3a8[uVar1] = 0;
      uVar10 = 0;
      do {
        local_3a8[uVar10 + 0x300] = (byte)(local_41c % 10) | 0x30;
        uVar9 = local_18;
        uVar1 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar11 = 9 < local_41c;
        local_41c = local_41c / 10;
        uVar10 = uVar1;
      } while (bVar11);
      do {
        iVar2 = uVar1 + 0x2ff;
        uVar1 = uVar1 - 1;
        uVar10 = 0;
        do {
          uVar8 = uVar10;
          uVar10 = uVar8 + 1;
        } while (local_3a8[uVar8] != 0);
        if (uVar8 + 1 < 0x300) {
          local_3a8[uVar8] = local_3a8[iVar2];
          local_3a8[uVar8 + 1] = 0;
        }
      } while (uVar1 != 0);
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_3a8[uVar1] != 0);
      if (uVar10 < 0x300) {
        local_3a8[uVar1] = 0x78;
        uVar1 = uVar10;
      }
      local_3a8[uVar1] = 0;
      uVar10 = 0;
      do {
        local_3a8[uVar10 + 0x300] = (byte)(uVar9 % 10) | 0x30;
        uVar1 = uVar10 + 1;
        if (8 < uVar10) break;
        bVar11 = 9 < uVar9;
        uVar9 = uVar9 / 10;
        uVar10 = uVar1;
      } while (bVar11);
      do {
        iVar2 = uVar1 + 0x2ff;
        uVar1 = uVar1 - 1;
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          uVar10 = uVar9 + 1;
        } while (local_3a8[uVar9] != 0);
        if (uVar9 + 1 < 0x300) {
          local_3a8[uVar9] = local_3a8[iVar2];
          local_3a8[uVar9 + 1] = 0;
        }
      } while (uVar1 != 0);
      if (((*api == 0x54584b57) && (0xb7 < (uint)api[2])) &&
         (((code *)api[0x2d] != (code *)0x0 && (uVar10 = (*(code *)api[0x2d])(1), (uVar10 & 1) != 0)
          ))) {
        uVar10 = 0;
        do {
          uVar1 = uVar10;
          uVar10 = uVar1 + 1;
        } while (local_3a8[uVar1] != 0);
        if (uVar1 + 1 < 0x300) {
          bVar5 = 0x20;
          pcVar3 = str_1000af1a;
          do {
            pcVar3 = pcVar3 + 1;
            local_3a8[uVar1] = bVar5;
            uVar1 = uVar1 + 1;
            bVar5 = *pcVar3;
            if (bVar5 == 0) break;
          } while (uVar1 < 0x2ff);
        }
      }
      else {
        uVar10 = 0;
        do {
          uVar1 = uVar10;
          uVar10 = uVar1 + 1;
        } while (local_3a8[uVar1] != 0);
        if (uVar1 + 1 < 0x300) {
          bVar5 = 0x20;
          pcVar3 = str_1000af3c;
          do {
            pcVar3 = pcVar3 + 1;
            local_3a8[uVar1] = bVar5;
            uVar1 = uVar1 + 1;
            bVar5 = *pcVar3;
            if (bVar5 == 0) break;
          } while (uVar1 < 0x2ff);
        }
      }
      local_3a8[uVar1] = 0;
      iVar2 = -0x90;
      do {
        local_58[iVar2 + 0x40] = '\0';
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
      local_a8 = 0x90;
      local_a4 = 0xc;
      local_a0 = 7;
      local_9c = 0x100;
      local_98[0] = '\0';
      uVar10 = 0xffffffff;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_98[uVar1 + 1] != '\0');
      if (uVar1 + 2 < 0x40) {
        cVar6 = 'g';
        pcVar3 = str_1000af58;
        do {
          pcVar3 = pcVar3 + 1;
          local_98[uVar10] = cVar6;
          uVar10 = uVar10 + 1;
          cVar6 = *pcVar3;
          if (cVar6 == '\0') break;
        } while (uVar10 < 0x3f);
      }
      local_98[uVar10] = '\0';
      local_58[0] = '\0';
      uVar10 = 0xffffffff;
      do {
        uVar1 = uVar10;
        uVar10 = uVar1 + 1;
      } while (local_58[uVar1 + 1] != '\0');
      if (uVar1 + 2 < 0x40) {
        cVar6 = 'h';
        pcVar3 = str_1000af70;
        do {
          pcVar3 = pcVar3 + 1;
          local_58[uVar10] = cVar6;
          uVar10 = uVar10 + 1;
          cVar6 = *pcVar3;
          if (cVar6 == '\0') break;
        } while (uVar10 < 0x3f);
      }
      local_58[uVar10] = '\0';
      if ((((*api == 0x54584b57) && (199 < (uint)api[2])) && ((code *)api[0x31] != (code *)0x0)) &&
         (iVar2 = (*(code *)api[0x31])(&local_a8,recovered_10009e70), iVar2 != 0)) {
        uVar10 = 0;
        do {
          uVar1 = uVar10;
          uVar10 = uVar1 + 1;
        } while (local_3a8[uVar1] != 0);
        local_3c8 = 1;
        if (uVar1 + 1 < 0x300) {
          bVar5 = 0x20;
          pcVar3 = str_1000af85;
          do {
            pcVar3 = pcVar3 + 1;
            local_3a8[uVar1] = bVar5;
            uVar1 = uVar1 + 1;
            bVar5 = *pcVar3;
            if (bVar5 == 0) break;
          } while (uVar1 < 0x2ff);
        }
      }
      else {
        uVar10 = 0;
        do {
          uVar1 = uVar10;
          uVar10 = uVar1 + 1;
        } while (local_3a8[uVar1] != 0);
        local_3c8 = 0;
        if (uVar1 + 1 < 0x300) {
          bVar5 = 0x20;
          pcVar3 = str_1000af9b;
          do {
            pcVar3 = pcVar3 + 1;
            local_3a8[uVar1] = bVar5;
            uVar1 = uVar1 + 1;
            bVar5 = *pcVar3;
            if (bVar5 == 0) break;
          } while (uVar1 < 0x2ff);
        }
      }
      local_3a8[uVar1] = 0;
      goto LAB_10001ae1;
    }
  }
  uVar10 = 0;
  do {
    uVar1 = uVar10;
    uVar10 = uVar1 + 1;
  } while (local_3a8[uVar1] != 0);
  if (uVar1 + 1 < 0x300) {
    bVar5 = 0x20;
    pcVar3 = str_1000af01;
    do {
      pcVar3 = pcVar3 + 1;
      local_3a8[uVar1] = bVar5;
      uVar1 = uVar1 + 1;
      bVar5 = *pcVar3;
      if (bVar5 == 0) break;
    } while (uVar1 < 0x2ff);
  }
  local_3a8[uVar1] = 0;
  local_3c8 = 0;
LAB_10001ae1:
  recovered_10002360((int)local_14,local_3fc,local_3a8);
  if ((code *)api[3] != (code *)0x0) {
    (*(code *)api[3])(str_1000a7a0,str_1000a7b2,local_3a8);
  }
  return 1;
}

#undef DAT_1000a82a
#undef DAT_1000c000
#undef str_1000a788
#undef str_1000a7a0
#undef str_1000a7b2
#undef str_1000a7d5
#undef str_1000a7f8
#undef str_1000a832
#undef str_1000ad43
#undef str_1000ae97
#undef str_1000aeae
#undef str_1000aecb
#undef str_1000aee3
#undef str_1000af01
#undef str_1000af1a
#undef str_1000af3c
#undef str_1000af58
#undef str_1000af70
#undef str_1000af85
#undef str_1000af9b
#undef local_474
#undef local_430
#undef local_420
#undef abStack_4d9
#undef local_41c
#undef local_418
#undef local_3fc
#undef local_3c8
#undef local_3c4
#undef local_3ac
#undef local_3a8
#undef local_a8
#undef local_a4
#undef local_a0
#undef bStack_a9
#undef local_9c
#undef local_98
#undef local_58
#undef local_18
#undef local_14

#define local_7c (*(undefined1 (*)[44])(frame + 36))
#define local_50 (*(undefined1 (*)[12])(frame + 80))
#define local_44 (*(char *)(frame + 92))
#define local_24 (*(uint *)(frame + 124))
#define local_20 (*(int * *)(frame + 128))
#define local_1c (*(uint *)(frame + 132))
#define local_18 (*(code * *)(frame + 136))
#define local_14 (*(int *)(frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f90
 */

void recovered_10001f90(int *in_ECX,undefined *in_EDX,undefined4 param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  int *in_ECX_00;
  int iVar1;
  int iVar2;
  byte bVar3;

  if ((((in_ECX != (int *)0x0 && in_EDX != (undefined *)0x0) && (*in_ECX == 0x54584b57)) &&
      (0x5f < (uint)in_ECX[2])) && (in_ECX[0x17] != 0)) {
    local_24 = 0;
    local_14 = 0;
    local_20 = in_ECX;
    local_18 = (code *)in_EDX;
    do {
      local_1c = local_24 & 0xff;
      iVar2 = 0;
      do {
        in_ECX_00 = local_20;
        bVar3 = (byte)iVar2;
        iVar1 = recovered_10009030(local_20,(char)local_1c,bVar3,0,local_50);
        if (iVar1 != 0) {
          iVar1 = (*local_18)(in_ECX_00,local_50,param_3);
          local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
          if (local_44 < '\0') {
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,1,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,2,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,3,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,4,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,5,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,6,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
            iVar1 = recovered_10009030(in_ECX_00,(char)local_1c,bVar3,7,local_7c);
            if (iVar1 != 0) {
              iVar1 = (*local_18)(in_ECX_00,local_7c,param_3);
              local_14 = (local_14 + 1) - (uint)(iVar1 == 0);
            }
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0x20);
      local_24 = local_24 + 1;
    } while (local_24 != 0x10);
  }
  return;
}

#undef local_7c
#undef local_50
#undef local_44
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

undefined4 recovered_100021c0(undefined4 param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  int iVar2;
  uint uVar3;

  if (param_2 == 0 || param_3 == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_2 + 4);
  if (sVar1 == 0x106b) {
    iVar2 = 0x40;
switchD_1000223d_caseD_0:
    *(undefined4 *)(param_3 + iVar2) = 1;
  }
  else if (sVar1 == -0x7f7a) {
    uVar3 = (uint)*(ushort *)(param_2 + 6);
    iVar2 = 0x4c;
    switch((uintptr_t)(uVar3 - 0x2815)) {
    case 0:
    case 0x14:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x25:
    case 0x36:
      goto switchD_1000223d_caseD_0;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
      break;
    default:
      if ((uVar3 == 0x2a02) || (uVar3 == 0x2a00)) {
        *(undefined4 *)(param_3 + 0x48) = 1;
        switch((uintptr_t)(uVar3 - 0x2815)) {
        case 0:
        case 0x14:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x25:
        case 0x36:
          goto switchD_1000223d_caseD_0;
        }
      }
    }
  }
  else if (sVar1 == 0x10de) {
    uVar3 = (uint)*(ushort *)(param_2 + 6);
    iVar2 = 0x44;
    if ((((uVar3 - 0xaa2 < 0x1f) && ((0x408040b9U >> (uVar3 - 0xaa2 & 0x1f) & 1) != 0)) ||
        (uVar3 == 0x863)) || (uVar3 == 0x867)) goto switchD_1000223d_caseD_0;
  }
  uVar3 = 1;
  if (*(int *)(param_3 + 0x44) == 0) {
    if (*(int *)(param_3 + 0x48) == 0) {
      iVar2 = 0x4c;
      if ((*(int *)(param_3 + 0x3c) == 0) && (*(int *)(param_3 + 0x40) == 0)) {
        uVar3 = 0;
        goto LAB_1000225b;
      }
    }
    else {
      if ((*(int *)(param_3 + 0x4c) != 0) || (*(int *)(param_3 + 0x3c) != 0)) goto LAB_1000225b;
      iVar2 = 0x40;
    }
    uVar3 = (uint)(*(int *)(param_3 + iVar2) != 0);
  }
LAB_1000225b:
  *(uint *)(param_3 + 0x50) = uVar3;
  return 0;
}


#undef DAT_1000a847
#define DAT_1000a847 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef str_1000a839
#define str_1000a839 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#undef str_1000a841
#define str_1000a841 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022c0
 */

undefined4 recovered_100022c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar2;
  int iVar3;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  bVar1 = recovered_10009380(param_2,str_1000a839);
  if (((CONCAT31(extraout_var,bVar1) != 0) ||
      (bVar1 = recovered_10009380(param_2,str_1000a841), CONCAT31(extraout_var_00,bVar1) != 0)) ||
     (bVar1 = recovered_10009380(param_2,&DAT_1000a847), CONCAT31(extraout_var_01,bVar1) != 0)) {
    *(undefined4 *)(param_4 + 0x3c) = 1;
  }
  uVar2 = 1;
  if (*(int *)(param_4 + 0x44) == 0) {
    if (*(int *)(param_4 + 0x48) == 0) {
      iVar3 = 0x4c;
      if ((*(int *)(param_4 + 0x3c) == 0) && (*(int *)(param_4 + 0x40) == 0)) {
        uVar2 = 0;
        goto LAB_1000231b;
      }
    }
    else {
      if ((*(int *)(param_4 + 0x4c) != 0) || (*(int *)(param_4 + 0x3c) != 0)) goto LAB_1000231b;
      iVar3 = 0x40;
    }
    uVar2 = (uint)(*(int *)(param_4 + iVar3) != 0);
  }
LAB_1000231b:
  *(uint *)(param_4 + 0x50) = uVar2;
  return 0;
}

#undef DAT_1000a847
#undef str_1000a839
#undef str_1000a841

#undef DAT_1000a920
#define DAT_1000a920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000a924
#define DAT_1000a924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x386U)))
#undef DAT_1000a982
#define DAT_1000a982 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e4U)))
#undef DAT_1000a98c
#define DAT_1000a98c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3eeU)))
#undef DAT_1000a9aa
#define DAT_1000a9aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40cU)))
#undef str_1000a84c
#define str_1000a84c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aeU)))
#undef str_1000a8b0
#define str_1000a8b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x312U)))
#undef str_1000a8c0
#define str_1000a8c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#undef str_1000a8ca
#define str_1000a8ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32cU)))
#undef str_1000a8d5
#define str_1000a8d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_1000a8e3
#define str_1000a8e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x345U)))
#undef str_1000a8f3
#define str_1000a8f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x355U)))
#undef str_1000a906
#define str_1000a906 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000a90f
#define str_1000a90f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000a917
#define str_1000a917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000a929
#define str_1000a929 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_1000a92f
#define str_1000a92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000a936
#define str_1000a936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#undef str_1000a93d
#define str_1000a93d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x39fU)))
#undef str_1000a945
#define str_1000a945 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a7U)))
#undef str_1000a959
#define str_1000a959 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bbU)))
#undef str_1000a967
#define str_1000a967 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c9U)))
#undef str_1000a975
#define str_1000a975 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d7U)))
#undef str_1000a995
#define str_1000a995 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f7U)))
#undef str_1000a99f
#define str_1000a99f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_1000a9af
#define str_1000a9af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x411U)))
#define local_14 (*(uint * *)(frame + 28))
#define abStack_1f (*(byte (*)[11])(frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002360
 */

void recovered_10002360(int in_ECX,uint *in_EDX,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;

  local_14 = in_EDX;
  if (param_3 == (undefined1 *)0x0) {
    if ((in_ECX != 0) && (uVar7 = *(uint *)(in_ECX + 100), uVar7 != 0)) {
LAB_10002470:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (byte)(uVar7 % 10) | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
      do {
        if (param_3 != (undefined1 *)0x0) {
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            uVar7 = uVar3 + 1;
          } while (param_3[uVar3] != '\0');
          if (uVar7 < 0x300) {
            param_3[uVar3] = abStack_1f[uVar4];
            param_3[uVar7] = 0;
          }
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      goto LAB_1000250a;
    }
  }
  else {
    *param_3 = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (param_3[uVar3] != '\0');
    if (uVar3 + 1 < 0x300) {
      cVar5 = 'm';
      pcVar6 = str_1000a84c;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar3] = cVar5;
        uVar3 = uVar3 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar3 < 0x2ff);
    }
    param_3[uVar3] = 0;
    if (in_ECX != 0) {
      uVar7 = *(uint *)(in_ECX + 100);
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        cVar5 = 'h';
        pcVar6 = str_1000a8b0;
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = cVar5;
          uVar4 = uVar4 + 1;
          cVar5 = *pcVar6;
          if (cVar5 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      if (uVar7 != 0) goto LAB_10002470;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
LAB_1000250a:
      if ((param_3 != (undefined1 *)0x0) && (*(char *)(in_ECX + 4) != '\0')) {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar7 < 0x300) {
          param_3[uVar3] = 0x20;
          uVar3 = uVar7;
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar3 + 1 < 0x300) {
          cVar5 = 'p';
          pcVar6 = str_1000a8c0;
          do {
            pcVar6 = pcVar6 + 1;
            param_3[uVar3] = cVar5;
            uVar3 = uVar3 + 1;
            cVar5 = *pcVar6;
            if (cVar5 == '\0') break;
          } while (uVar3 < 0x2ff);
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        if (uVar7 < 0x300) {
          param_3[uVar3] = 0x3d;
          uVar3 = uVar7;
        }
        param_3[uVar3] = 0;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (param_3[uVar3] != '\0');
        cVar5 = *(char *)(in_ECX + 4);
        if (uVar3 + 1 < 0x300 && cVar5 != '\0') {
          pcVar6 = (char *)(in_ECX + 5);
          do {
            param_3[uVar3] = cVar5;
            uVar3 = uVar3 + 1;
            cVar5 = *pcVar6;
            if (cVar5 == '\0') break;
            pcVar6 = pcVar6 + 1;
          } while (uVar3 < 0x2ff);
        }
        param_3[uVar3] = 0;
      }
    }
  }
  if (local_14 == (uint *)0x0) {
    return;
  }
  uVar7 = *local_14;
  if (param_3 == (undefined1 *)0x0) {
    if (uVar7 != 0) goto LAB_100026a4;
LAB_10002729:
    uVar7 = local_14[1];
LAB_10002738:
    if (uVar7 != 0) goto LAB_100027f4;
LAB_10002879:
    uVar7 = local_14[2];
LAB_10002888:
    if (uVar7 != 0) goto LAB_10002944;
LAB_100029c9:
    uVar7 = local_14[3];
LAB_100029d8:
    if (uVar7 != 0) goto LAB_10002a94;
LAB_10002b19:
    uVar7 = local_14[4];
LAB_10002b28:
    if (uVar7 != 0) goto LAB_10002be4;
LAB_10002c69:
    uVar7 = local_14[5];
LAB_10002c78:
    if (uVar7 != 0) goto LAB_10002d34;
LAB_10002db9:
    uVar7 = local_14[6];
LAB_10002dc8:
    if (uVar7 != 0) goto LAB_10002e84;
LAB_10002f09:
    uVar7 = local_14[7];
LAB_10002f18:
    if (uVar7 != 0) goto LAB_10002fd4;
LAB_10003059:
    uVar7 = local_14[8];
LAB_10003068:
    if (uVar7 != 0) goto LAB_10003124;
LAB_100031a9:
    uVar7 = local_14[9];
LAB_100031b8:
    if (uVar7 != 0) goto LAB_10003274;
LAB_100032f9:
    uVar7 = local_14[10];
LAB_10003308:
    if (uVar7 != 0) goto LAB_100033c4;
LAB_10003449:
    uVar7 = local_14[0xb];
LAB_10003458:
    if (uVar7 != 0) goto LAB_10003514;
LAB_10003599:
    uVar7 = local_14[0xc];
LAB_100035a8:
    if (uVar7 == 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'p';
      pcVar6 = str_1000a8ca;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[1];
    }
    else {
LAB_100026a4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100026e6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10002729;
          goto LAB_100026e6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[1];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002738;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'p';
      pcVar6 = str_1000a8d5;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[2];
    }
    else {
LAB_100027f4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10002836:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10002879;
          goto LAB_10002836;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[2];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002888;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'f';
      pcVar6 = str_1000a8e3;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[3];
    }
    else {
LAB_10002944:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10002986:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100029c9;
          goto LAB_10002986;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[3];
      if (param_3 == (undefined1 *)0x0) goto LAB_100029d8;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'f';
      pcVar6 = str_1000a8f3;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[4];
    }
    else {
LAB_10002a94:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10002ad6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10002b19;
          goto LAB_10002ad6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[4];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002b28;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'g';
      pcVar6 = str_1000a906;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[5];
    }
    else {
LAB_10002be4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10002c26:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10002c69;
          goto LAB_10002c26;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[5];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002c78;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 's';
      pcVar6 = str_1000a90f;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[6];
    }
    else {
LAB_10002d34:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10002d76:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10002db9;
          goto LAB_10002d76;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[6];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002dc8;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'n';
      pcVar6 = str_1000a917;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[7];
    }
    else {
LAB_10002e84:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10002ec6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10002f09;
          goto LAB_10002ec6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[7];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002f18;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'u';
      pcVar6 = &DAT_1000a920;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[8];
    }
    else {
LAB_10002fd4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10003016:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10003059;
          goto LAB_10003016;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[8];
      if (param_3 == (undefined1 *)0x0) goto LAB_10003068;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'a';
      pcVar6 = &DAT_1000a924;
      do {
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[9];
    }
    else {
LAB_10003124:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10003166:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100031a9;
          goto LAB_10003166;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[9];
      if (param_3 == (undefined1 *)0x0) goto LAB_100031b8;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'i';
      pcVar6 = str_1000a929;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[10];
    }
    else {
LAB_10003274:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_100032b6:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_100032f9;
          goto LAB_100032b6;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[10];
      if (param_3 == (undefined1 *)0x0) goto LAB_10003308;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'b';
      pcVar6 = str_1000a92f;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[0xb];
    }
    else {
LAB_100033c4:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10003406:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10003449;
          goto LAB_10003406;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xb];
      if (param_3 == (undefined1 *)0x0) goto LAB_10003458;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 's';
      pcVar6 = str_1000a936;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      uVar7 = local_14[0xc];
    }
    else {
LAB_10003514:
      uVar3 = 0;
      do {
        abStack_1f[uVar3 + 1] = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
        uVar4 = uVar3 + 1;
        if (8 < uVar3) break;
        bVar2 = 9 < uVar7;
        uVar3 = uVar4;
        uVar7 = uVar7 / 10;
      } while (bVar2);
LAB_10003556:
      do {
        uVar7 = uVar4 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar4 = uVar7;
          if (uVar7 == 0) goto LAB_10003599;
          goto LAB_10003556;
        }
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          uVar3 = uVar8 + 1;
        } while (param_3[uVar8] != '\0');
        if (uVar3 < 0x300) {
          param_3[uVar8] = abStack_1f[uVar4];
          param_3[uVar3] = 0;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      uVar7 = local_14[0xc];
      if (param_3 == (undefined1 *)0x0) goto LAB_100035a8;
    }
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x20;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar5 = 'u';
      pcVar6 = str_1000a93d;
      do {
        pcVar6 = pcVar6 + 1;
        param_3[uVar4] = cVar5;
        uVar4 = uVar4 + 1;
        cVar5 = *pcVar6;
        if (cVar5 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    param_3[uVar4] = 0;
    uVar3 = 0;
    do {
      uVar4 = uVar3;
      uVar3 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (uVar3 < 0x300) {
      param_3[uVar4] = 0x3d;
      uVar4 = uVar3;
    }
    param_3[uVar4] = 0;
    if (uVar7 == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar3 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar3) = 0x30;
      }
      goto LAB_100036e7;
    }
  }
  uVar3 = 0;
  do {
    abStack_1f[uVar3 + 1] = (byte)(uVar7 % 10) | 0x30;
    uVar4 = uVar3 + 1;
    if (8 < uVar3) break;
    bVar2 = 9 < uVar7;
    uVar3 = uVar4;
    uVar7 = uVar7 / 10;
  } while (bVar2);
  do {
    if (param_3 != (undefined1 *)0x0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (param_3[uVar3] != '\0');
      if (uVar7 < 0x300) {
        param_3[uVar3] = abStack_1f[uVar4];
        param_3[uVar7] = 0;
      }
    }
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
LAB_100036e7:
  pcVar6 = str_1000a9af;
  if (local_14[0xd] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x66,bVar1);
        pcVar9 = str_1000a945;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0xe] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x69,bVar1);
        pcVar9 = str_1000a959;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0xf] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x61,bVar1);
        pcVar9 = str_1000a967;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0x10] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x61,bVar1);
        pcVar9 = str_1000a975;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0x11] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x6d,bVar1);
        pcVar9 = &DAT_1000a982;
        do {
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0x12] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x67,bVar1);
        pcVar9 = &DAT_1000a98c;
        do {
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0x13] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x69,bVar1);
        pcVar9 = str_1000a995;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  pcVar6 = str_1000a9af;
  if (local_14[0x14] != 0) {
    pcVar6 = &DAT_1000a9aa;
  }
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = *pcVar6;
    uVar7 = (uint)bVar1;
    if (bVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x20;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        uVar7 = (uint)CONCAT11(0x70,bVar1);
        pcVar9 = str_1000a99f;
        do {
          pcVar9 = pcVar9 + 1;
          param_3[uVar4] = (char)(uVar7 >> 8);
          uVar4 = uVar4 + 1;
          uVar7 = (uint)CONCAT11(*pcVar9,(char)uVar7);
          if (*pcVar9 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar3 < 0x300) {
        param_3[uVar4] = 0x3d;
        uVar4 = uVar3;
      }
      param_3[uVar4] = 0;
      uVar3 = 0;
      do {
        uVar4 = uVar3;
        uVar3 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar4 + 1 < 0x300) {
        do {
          pcVar6 = pcVar6 + 1;
          param_3[uVar4] = (char)uVar7;
          uVar4 = uVar4 + 1;
          uVar7 = (uint)(byte)*pcVar6;
          if (*pcVar6 == 0) break;
        } while (uVar4 < 0x2ff);
      }
      param_3[uVar4] = 0;
    }
  }
  return;
}

#undef DAT_1000a920
#undef DAT_1000a924
#undef DAT_1000a982
#undef DAT_1000a98c
#undef DAT_1000a9aa
#undef str_1000a84c
#undef str_1000a8b0
#undef str_1000a8c0
#undef str_1000a8ca
#undef str_1000a8d5
#undef str_1000a8e3
#undef str_1000a8f3
#undef str_1000a906
#undef str_1000a90f
#undef str_1000a917
#undef str_1000a929
#undef str_1000a92f
#undef str_1000a936
#undef str_1000a93d
#undef str_1000a945
#undef str_1000a959
#undef str_1000a967
#undef str_1000a975
#undef str_1000a995
#undef str_1000a99f
#undef str_1000a9af
#undef local_14
#undef abStack_1f

#undef DAT_1000a91f
#define DAT_1000a91f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x381U)))
#undef DAT_1000a920
#define DAT_1000a920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000a921
#define DAT_1000a921 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_1000a922
#define DAT_1000a922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_1000a923
#define DAT_1000a923 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x385U)))
#undef DAT_1000a924
#define DAT_1000a924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x386U)))
#undef DAT_1000a925
#define DAT_1000a925 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x387U)))
#undef DAT_1000a926
#define DAT_1000a926 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x388U)))
#undef DAT_1000a927
#define DAT_1000a927 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x389U)))
#undef DAT_1000a928
#define DAT_1000a928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x38aU)))
#undef DAT_1000a9b6
#define DAT_1000a9b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x418U)))
#undef DAT_1000aad6
#define DAT_1000aad6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x538U)))
#undef DAT_1000aade
#define DAT_1000aade (*(uint8_t *)(((uintptr_t)pf_module_state + 0x540U)))
#undef DAT_1000ab11
#define DAT_1000ab11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x573U)))
#undef DAT_1000ab19
#define DAT_1000ab19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57bU)))
#undef DAT_1000ab21
#define DAT_1000ab21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x583U)))
#undef DAT_1000ab4e
#define DAT_1000ab4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b0U)))
#undef DAT_1000ab7e
#define DAT_1000ab7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e0U)))
#undef DAT_1000ab86
#define DAT_1000ab86 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5e8U)))
#undef DAT_1000ab8e
#define DAT_1000ab8e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5f0U)))
#undef DAT_1000aba0
#define DAT_1000aba0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x602U)))
#undef DAT_1000abae
#define DAT_1000abae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x610U)))
#undef DAT_1000abd8
#define DAT_1000abd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63aU)))
#undef str_1000a80f
#define str_1000a80f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x271U)))
#undef str_1000a906
#define str_1000a906 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000a90f
#define str_1000a90f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000a917
#define str_1000a917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000a92f
#define str_1000a92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000a936
#define str_1000a936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#undef str_1000a9bb
#define str_1000a9bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41dU)))
#undef str_1000a9cf
#define str_1000a9cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x431U)))
#undef str_1000a9d6
#define str_1000a9d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x438U)))
#undef str_1000a9fa
#define str_1000a9fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45cU)))
#undef str_1000aa10
#define str_1000aa10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x472U)))
#undef str_1000aa19
#define str_1000aa19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
#undef str_1000aa29
#define str_1000aa29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48bU)))
#undef str_1000aa3d
#define str_1000aa3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49fU)))
#undef str_1000aa55
#define str_1000aa55 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b7U)))
#undef str_1000aa6d
#define str_1000aa6d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_1000aa86
#define str_1000aa86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e8U)))
#undef str_1000aa97
#define str_1000aa97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f9U)))
#undef str_1000aaa7
#define str_1000aaa7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x509U)))
#undef str_1000aab6
#define str_1000aab6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x518U)))
#undef str_1000aacc
#define str_1000aacc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52eU)))
#undef str_1000aae5
#define str_1000aae5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x547U)))
#undef str_1000aaef
#define str_1000aaef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x551U)))
#undef str_1000aafb
#define str_1000aafb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55dU)))
#undef str_1000ab28
#define str_1000ab28 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58aU)))
#undef str_1000ab34
#define str_1000ab34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x596U)))
#undef str_1000ab53
#define str_1000ab53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b5U)))
#undef str_1000ab5b
#define str_1000ab5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bdU)))
#undef str_1000ab63
#define str_1000ab63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c5U)))
#undef str_1000ab95
#define str_1000ab95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f7U)))
#undef str_1000aba4
#define str_1000aba4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x606U)))
#undef str_1000abb2
#define str_1000abb2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x614U)))
#undef str_1000abbb
#define str_1000abbb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61dU)))
#undef str_1000abc4
#define str_1000abc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x626U)))
#undef str_1000abcc
#define str_1000abcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62eU)))
#define local_2c (*(uint *)(frame + 1412))
#define local_25 (*(byte *)(frame + 1419))
#define local_24 (*(uint (*)[3])(frame + 1420))
#define local_18 (*(uint *)(frame + 1432))
#define local_14 (*(uint *)(frame + 1436))
#define cStack_595 (*(char *)(frame + 27))
#define cStack_315 (*(char *)(frame + 667))
#define cStack_95 (*(char *)(frame + 1307))
#define local_594 (*(undefined4 *)(frame + 28))
#define local_314 (*(undefined2 *)(frame + 668))
#define local_94 (*(undefined4 *)(frame + 1308))
#define local_34 (*(char * *)(frame + 1404))
#define local_30 (*(uint *)(frame + 1408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e60
 */

undefined4 recovered_10003e60(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[1488] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  char *pcVar12;
  byte bVar13;
  char *pcVar14;
  byte *pbVar15;
  ushort uVar16;
  char *pcVar17;
  uint uVar18;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  bVar9 = param_2[8];
  switch((uintptr_t)(bVar9)) {
  case 1:
    pcVar12 = str_1000a90f;
    break;
  case 2:
    pcVar12 = str_1000a917;
    break;
  case 3:
    pcVar12 = str_1000a906;
    break;
  case 4:
    pcVar12 = &DAT_1000a923;
    break;
  default:
switchD_10003e86_caseD_5:
    pcVar14 = str_1000a92f;
    if (bVar9 != 6) {
      pcVar14 = str_1000a9cf;
    }
    pcVar12 = str_1000a936;
    if (bVar9 != 7) {
      pcVar12 = pcVar14;
    }
    break;
  case 0xc:
    pcVar12 = &DAT_1000a91f;
    if (param_2[9] != 3) goto switchD_10003e86_caseD_5;
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  *param_3 = *param_3 + 1;
  recovered_10009640((int)param_3,(byte *)pcVar12);
  PF_PART1(local_314, 0) = '\0';
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_314 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    cVar4 = 'r';
    pcVar14 = &DAT_1000a9b6;
    do {
      *(char *)((int)&local_314 + uVar6) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar14;
      if (cVar4 == '\0') break;
      pcVar14 = pcVar14 + 1;
    } while (uVar6 < 0x27f);
  }
  *(undefined1 *)((int)&local_314 + uVar6) = 0;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_314 + uVar6) != '\0');
  bVar9 = *pcVar12;
  uVar7 = (uint)bVar9;
  if ((uVar6 + 1 < 0x280) && (bVar9 != 0)) {
    uVar7 = (uint)CONCAT11(bVar9,bVar9);
    pbVar15 = (byte *)pcVar12;
    do {
      pbVar15 = pbVar15 + 1;
      *(char *)((int)&local_314 + uVar6) = (char)(uVar7 >> 8);
      uVar6 = uVar6 + 1;
      uVar7 = (uint)CONCAT11(*pbVar15,(char)uVar7);
      if (*pbVar15 == 0) break;
    } while (uVar6 < 0x27f);
  }
  *(undefined1 *)((int)&local_314 + uVar6) = 0;
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_314 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    uVar7 = (uint)CONCAT11(0x20,(char)uVar7);
    pcVar14 = str_1000a9bb;
    do {
      pcVar14 = pcVar14 + 1;
      *(char *)((int)&local_314 + uVar11) = (char)(uVar7 >> 8);
      uVar11 = uVar11 + 1;
      uVar7 = (uint)CONCAT11(*pcVar14,(char)uVar7);
      if (*pcVar14 == '\0') break;
    } while (uVar11 < 0x27f);
  }
  *(undefined1 *)((int)&local_314 + uVar11) = 0;
  if ((char)uVar7 != '\0') {
    pbVar15 = (byte *)(pcVar12 + 6);
    do {
      cVar4 = (char)uVar7;
      if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      bVar9 = pbVar15[-5];
      uVar7 = (uint)bVar9;
      if (cVar4 != 'd') goto LAB_10003ffa;
      if (bVar9 == 0) {
        pcVar14 = str_1000a9cf + 1;
        goto LAB_10003ff1;
      }
      if ((byte)(bVar9 + 0xbf) < 0x1a) {
        if (bVar9 == 0x45) goto LAB_10004038;
      }
      else if (bVar9 == 0x65) {
LAB_10004038:
        bVar13 = pbVar15[-4];
        if (bVar13 == 0) {
          pcVar14 = str_1000a9cf + 2;
        }
        else {
          uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
          if ((byte)(bVar13 + 0xbf) < 0x1a) {
            bVar13 = bVar13 + 0x20;
          }
          if (bVar13 != 0x76) goto LAB_10003ffa;
          bVar13 = pbVar15[-3];
          if (bVar13 == 0) {
            pcVar14 = str_1000a9cf + 3;
          }
          else {
            uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
            if ((byte)(bVar13 + 0xbf) < 0x1a) {
              bVar13 = bVar13 + 0x20;
            }
            if (bVar13 != 0x69) goto LAB_10003ffa;
            bVar13 = pbVar15[-2];
            if (bVar13 == 0) {
              pcVar14 = str_1000a9cf + 4;
            }
            else {
              uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                bVar13 = bVar13 + 0x20;
              }
              if (bVar13 != 99) goto LAB_10003ffa;
              bVar13 = pbVar15[-1];
              if (bVar13 == 0) {
                pcVar14 = str_1000a9cf + 5;
              }
              else {
                uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  bVar13 = bVar13 + 0x20;
                }
                if (bVar13 != 0x65) goto LAB_10003ffa;
                pcVar14 = str_1000a9cf + 6;
                if (*pbVar15 != 0) goto LAB_10004e5f;
              }
            }
          }
        }
LAB_10003ff1:
        if (*pcVar14 == '\0') goto LAB_10004e5f;
      }
LAB_10003ffa:
      pbVar15 = pbVar15 + 1;
    } while ((char)uVar7 != '\0');
  }
  if (((param_3[0x14] != 0) && (param_2[8] == 0xc)) && (param_2[9] == 3)) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_314 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      cVar4 = ' ';
      pcVar12 = str_1000a9d6;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_314 + uVar6) = cVar4;
        uVar6 = uVar6 + 1;
        cVar4 = *pcVar12;
        if (cVar4 == '\0') break;
      } while (uVar6 < 0x27f);
    }
    goto LAB_10004e57;
  }
  local_594 = 0;
  if (((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 100 || (param_1[0x18] == 0)))) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_314 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      cVar4 = ' ';
      pcVar14 = str_1000aa3d;
      do {
        pcVar14 = pcVar14 + 1;
        *(char *)((int)&local_314 + uVar6) = cVar4;
        uVar6 = uVar6 + 1;
        cVar4 = *pcVar14;
        if (cVar4 == '\0') break;
      } while (uVar6 < 0x27f);
    }
  }
  else {
    if (((code *)param_1[0x17] != (code *)0x0) &&
       (iVar8 = (*(code *)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_594), iVar8 != 0)
       ) {
      if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
        uVar7 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
      }
      else {
        uVar7 = 1;
      }
      uVar6 = uVar7;
      if (*(uint *)(param_2 + 0x18) != 0) {
        uVar6 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
        uVar6 = uVar7 | 1;
      }
      uVar7 = uVar6;
      if (*(uint *)(param_2 + 0x1c) != 0) {
        uVar7 = uVar6 | 2;
      }
      if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
        uVar7 = uVar6 | 1;
      }
      uVar6 = uVar7;
      if (*(uint *)(param_2 + 0x20) != 0) {
        uVar6 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
        uVar6 = uVar7 | 1;
      }
      uVar7 = uVar6;
      if (*(uint *)(param_2 + 0x24) != 0) {
        uVar7 = uVar6 | 2;
      }
      if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
        uVar7 = uVar6 | 1;
      }
      local_14 = uVar7;
      if (*(uint *)(param_2 + 0x28) != 0) {
        local_14 = uVar7 | 2;
      }
      if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
        local_14 = uVar7 | 1;
      }
      uVar7 = (uint)(byte)*pcVar12;
      if (*pcVar12 != 0) {
        pbVar15 = (byte *)(pcVar12 + 7);
        uVar6 = uVar7;
        do {
          uVar5 = (undefined1)uVar7;
          cVar4 = (char)uVar6;
          uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          bVar9 = pbVar15[-6];
          uVar6 = (uint)bVar9;
          if (cVar4 == 's') {
            if (bVar9 == 0) {
              pcVar14 = str_1000a90f + 1;
            }
            else {
              bVar13 = bVar9;
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar13 = bVar9 + 0x20;
              }
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 != 0x74) goto LAB_10005c1d;
              bVar13 = pbVar15[-5];
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar14 = str_1000a90f + 2;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'o') goto LAB_10005c1d;
                bVar13 = pbVar15[-4];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar14 = str_1000a90f + 3;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'r') goto LAB_10005c1d;
                  bVar13 = pbVar15[-3];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar14 = str_1000a90f + 4;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'a') goto LAB_10005c1d;
                    bVar13 = pbVar15[-2];
                    uVar5 = (undefined1)uVar7;
                    uVar7 = (uint)CONCAT11(bVar13,uVar5);
                    if (bVar13 == 0) {
                      pcVar14 = str_1000a90f + 5;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                      }
                      if ((char)(uVar7 >> 8) != 'g') goto LAB_10005c1d;
                      bVar13 = pbVar15[-1];
                      uVar5 = (undefined1)uVar7;
                      uVar7 = (uint)CONCAT11(bVar13,uVar5);
                      if (bVar13 == 0) {
                        pcVar14 = str_1000a90f + 6;
                      }
                      else {
                        uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                        if ((byte)(bVar13 + 0xbf) < 0x1a) {
                          uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                        }
                        if ((char)(uVar7 >> 8) != 'e') goto LAB_10005c1d;
                        pcVar14 = str_1000a90f + 7;
                        if (*pbVar15 != 0) goto LAB_1000628d;
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar14 == '\0') goto LAB_1000628d;
          }
LAB_10005c1d:
          pbVar15 = pbVar15 + 1;
        } while ((char)uVar6 != '\0');
        pbVar15 = (byte *)(pcVar12 + 7);
        uVar6 = uVar7;
        do {
          uVar5 = (undefined1)uVar7;
          cVar4 = (char)uVar6;
          uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          bVar9 = pbVar15[-6];
          uVar6 = (uint)bVar9;
          if (cVar4 == 'n') {
            if (bVar9 == 0) {
              pcVar14 = str_1000a917 + 1;
            }
            else {
              bVar13 = bVar9;
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar13 = bVar9 + 0x20;
              }
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 != 0x65) goto LAB_10005d43;
              bVar13 = pbVar15[-5];
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar14 = str_1000a917 + 2;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 't') goto LAB_10005d43;
                bVar13 = pbVar15[-4];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar14 = str_1000a917 + 3;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'w') goto LAB_10005d43;
                  bVar13 = pbVar15[-3];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar14 = str_1000a917 + 4;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'o') goto LAB_10005d43;
                    bVar13 = pbVar15[-2];
                    uVar5 = (undefined1)uVar7;
                    uVar7 = (uint)CONCAT11(bVar13,uVar5);
                    if (bVar13 == 0) {
                      pcVar14 = str_1000a917 + 5;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                      }
                      if ((char)(uVar7 >> 8) != 'r') goto LAB_10005d43;
                      bVar13 = pbVar15[-1];
                      uVar5 = (undefined1)uVar7;
                      uVar7 = (uint)CONCAT11(bVar13,uVar5);
                      if (bVar13 == 0) {
                        pcVar14 = str_1000a917 + 6;
                      }
                      else {
                        uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                        if ((byte)(bVar13 + 0xbf) < 0x1a) {
                          uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                        }
                        if ((char)(uVar7 >> 8) != 'k') goto LAB_10005d43;
                        pcVar14 = str_1000a917 + 7;
                        if (*pbVar15 != 0) goto LAB_1000628d;
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar14 == '\0') goto LAB_1000628d;
          }
LAB_10005d43:
          pbVar15 = pbVar15 + 1;
        } while ((char)uVar6 != '\0');
        pbVar15 = (byte *)(pcVar12 + 3);
        uVar6 = uVar7;
        do {
          uVar5 = (undefined1)uVar7;
          cVar4 = (char)uVar6;
          uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          bVar9 = pbVar15[-2];
          uVar6 = (uint)bVar9;
          if (cVar4 == 'u') {
            if (bVar9 == 0) {
              pcVar14 = &DAT_1000a920;
            }
            else {
              bVar13 = bVar9;
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar13 = bVar9 + 0x20;
              }
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 != 0x73) goto LAB_10005eae;
              bVar13 = pbVar15[-1];
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar14 = &DAT_1000a921;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'b') goto LAB_10005eae;
                pcVar14 = &DAT_1000a922;
                if (*pbVar15 != 0) goto LAB_1000628d;
              }
            }
            if (*pcVar14 == '\0') goto LAB_1000628d;
          }
LAB_10005eae:
          pbVar15 = pbVar15 + 1;
        } while ((char)uVar6 != '\0');
        pbVar15 = (byte *)(pcVar12 + 8);
        uVar6 = uVar7;
        do {
          uVar5 = (undefined1)uVar7;
          cVar4 = (char)uVar6;
          uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          bVar9 = pbVar15[-7];
          uVar6 = (uint)bVar9;
          if (cVar4 == 'f') {
            if (bVar9 == 0) {
              pcVar14 = str_1000aa10 + 1;
            }
            else {
              bVar13 = bVar9;
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar13 = bVar9 + 0x20;
              }
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 != 0x69) goto LAB_10005f29;
              bVar13 = pbVar15[-6];
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar14 = str_1000aa10 + 2;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'r') goto LAB_10005f29;
                bVar13 = pbVar15[-5];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar14 = str_1000aa10 + 3;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'e') goto LAB_10005f29;
                  bVar13 = pbVar15[-4];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar14 = str_1000aa10 + 4;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'w') goto LAB_10005f29;
                    bVar13 = pbVar15[-3];
                    uVar5 = (undefined1)uVar7;
                    uVar7 = (uint)CONCAT11(bVar13,uVar5);
                    if (bVar13 == 0) {
                      pcVar14 = str_1000aa10 + 5;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                      }
                      if ((char)(uVar7 >> 8) != 'i') goto LAB_10005f29;
                      bVar13 = pbVar15[-2];
                      uVar5 = (undefined1)uVar7;
                      uVar7 = (uint)CONCAT11(bVar13,uVar5);
                      if (bVar13 == 0) {
                        pcVar14 = str_1000aa10 + 6;
                      }
                      else {
                        uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                        if ((byte)(bVar13 + 0xbf) < 0x1a) {
                          uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                        }
                        if ((char)(uVar7 >> 8) != 'r') goto LAB_10005f29;
                        bVar13 = pbVar15[-1];
                        uVar5 = (undefined1)uVar7;
                        uVar7 = (uint)CONCAT11(bVar13,uVar5);
                        if (bVar13 == 0) {
                          pcVar14 = str_1000aa10 + 7;
                        }
                        else {
                          uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                          if ((byte)(bVar13 + 0xbf) < 0x1a) {
                            uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                          }
                          if ((char)(uVar7 >> 8) != 'e') goto LAB_10005f29;
                          pcVar14 = str_1000aa10 + 8;
                          if (*pbVar15 != 0) goto LAB_1000628d;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar14 == '\0') goto LAB_1000628d;
          }
LAB_10005f29:
          pbVar15 = pbVar15 + 1;
        } while ((char)uVar6 != '\0');
        pbVar15 = (byte *)(pcVar12 + 5);
        uVar6 = uVar7;
        do {
          uVar5 = (undefined1)uVar7;
          cVar4 = (char)uVar6;
          uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          bVar9 = pbVar15[-4];
          uVar6 = (uint)bVar9;
          if (cVar4 == 'a') {
            if (bVar9 == 0) {
              pcVar14 = &DAT_1000a924;
            }
            else {
              bVar13 = bVar9;
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar13 = bVar9 + 0x20;
              }
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 != 0x75) goto LAB_1000607e;
              bVar13 = pbVar15[-3];
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar14 = &DAT_1000a925;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'd') goto LAB_1000607e;
                bVar13 = pbVar15[-2];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar14 = &DAT_1000a926;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'i') goto LAB_1000607e;
                  bVar13 = pbVar15[-1];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar14 = &DAT_1000a927;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'o') goto LAB_1000607e;
                    pcVar14 = &DAT_1000a928;
                    if (*pbVar15 != 0) goto LAB_1000628d;
                  }
                }
              }
            }
            if (*pcVar14 == '\0') goto LAB_1000628d;
          }
LAB_1000607e:
          pbVar15 = pbVar15 + 1;
        } while ((char)uVar6 != '\0');
        pbVar15 = (byte *)(pcVar12 + 8);
        do {
          cVar4 = (char)uVar7;
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          bVar9 = pbVar15[-7];
          uVar7 = (uint)bVar9;
          if (cVar4 == 'g') {
            if (bVar9 == 0) {
              pcVar14 = str_1000a906 + 1;
            }
            else {
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar13 = bVar9 + 0x20;
              }
              else {
                bVar13 = bVar9;
              }
              if (bVar13 != 0x72) goto LAB_1000614c;
              bVar13 = pbVar15[-6];
              if (bVar13 == 0) {
                pcVar14 = str_1000a906 + 2;
              }
              else {
                uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  bVar13 = bVar13 + 0x20;
                }
                if (bVar13 != 0x61) goto LAB_1000614c;
                bVar13 = pbVar15[-5];
                if (bVar13 == 0) {
                  pcVar14 = str_1000a906 + 3;
                }
                else {
                  uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    bVar13 = bVar13 + 0x20;
                  }
                  if (bVar13 != 0x70) goto LAB_1000614c;
                  bVar13 = pbVar15[-4];
                  if (bVar13 == 0) {
                    pcVar14 = str_1000a906 + 4;
                  }
                  else {
                    uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      bVar13 = bVar13 + 0x20;
                    }
                    if (bVar13 != 0x68) goto LAB_1000614c;
                    bVar13 = pbVar15[-3];
                    if (bVar13 == 0) {
                      pcVar14 = str_1000a906 + 5;
                    }
                    else {
                      uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        bVar13 = bVar13 + 0x20;
                      }
                      if (bVar13 != 0x69) goto LAB_1000614c;
                      bVar13 = pbVar15[-2];
                      if (bVar13 == 0) {
                        pcVar14 = str_1000a906 + 6;
                      }
                      else {
                        uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                        if ((byte)(bVar13 + 0xbf) < 0x1a) {
                          bVar13 = bVar13 + 0x20;
                        }
                        if (bVar13 != 99) goto LAB_1000614c;
                        bVar13 = pbVar15[-1];
                        if (bVar13 == 0) {
                          pcVar14 = str_1000a906 + 7;
                        }
                        else {
                          uVar7 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                          if ((byte)(bVar13 + 0xbf) < 0x1a) {
                            bVar13 = bVar13 + 0x20;
                          }
                          if (bVar13 != 0x73) goto LAB_1000614c;
                          pcVar14 = str_1000a906 + 8;
                          if (*pbVar15 != 0) goto LAB_1000628d;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar14 == '\0') goto LAB_1000628d;
          }
LAB_1000614c:
          pbVar15 = pbVar15 + 1;
        } while ((char)uVar7 != '\0');
      }
      goto LAB_10006296;
    }
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_314 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      cVar4 = ' ';
      pcVar14 = str_1000aa55;
      do {
        pcVar14 = pcVar14 + 1;
        *(char *)((int)&local_314 + uVar6) = cVar4;
        uVar6 = uVar6 + 1;
        cVar4 = *pcVar14;
        if (cVar4 == '\0') break;
      } while (uVar6 < 0x27f);
    }
  }
LAB_10004227:
  *(undefined1 *)((int)&local_314 + uVar6) = 0;
  local_14 = 0;
LAB_10004236:
  local_94 = 0;
  local_24[0] = 0;
  local_18 = 0;
  local_2c = 0;
  bVar1 = false;
  if ((param_2[8] == 1) && (param_2[9] == 6)) {
    uVar7 = *(uint *)(param_2 + 0x28);
    if ((uVar7 & 1) == 0 && uVar7 != 0) {
      local_594 = 0;
      if (((((uVar7 & 0xfffffff0) != 0 && param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
          (0x67 < (uint)param_1[2])) &&
         (((code *)param_1[0x19] != (code *)0x0 &&
          (iVar8 = (*(code *)param_1[0x19])(uVar7 & 0xfffffff0,0,0x1000,&local_594), iVar8 != 0))))
      {
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x20;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar6 + 1 < 0x280) {
          cVar4 = 'a';
          pcVar14 = str_1000aacc;
          do {
            pcVar14 = pcVar14 + 1;
            *(char *)((int)&local_314 + uVar6) = cVar4;
            uVar6 = uVar6 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
          } while (uVar6 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x3d;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        iVar8 = 8;
        do {
          uVar7 = local_594 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar7;
          if (uVar7 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar7 = 0;
          do {
            uVar6 = uVar7;
            uVar7 = uVar6 + 1;
          } while (*(char *)((int)&local_314 + uVar6) != '\0');
          if (uVar6 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar6) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar6 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if ((((((local_594 != 0) && (*param_1 == 0x54584b57)) &&
              ((0x6b < (uint)param_1[2] &&
               ((((code *)param_1[0x1a] != (code *)0x0 &&
                 ((*(code *)param_1[0x1a])(local_594,4,&local_94), local_594 != 0)) &&
                (*param_1 == 0x54584b57)))))) &&
             ((0x6b < (uint)param_1[2] && ((code *)param_1[0x1a] != (code *)0x0)))) &&
            ((*(code *)param_1[0x1a])(local_594 + 4,4,local_24), local_594 != 0)) &&
           ((((*param_1 == 0x54584b57 && (0x6b < (uint)param_1[2])) &&
             (((code *)param_1[0x1a] != (code *)0x0 &&
              ((((*(code *)param_1[0x1a])(local_594 + 0xc,4,&local_18), local_594 != 0 &&
                (*param_1 == 0x54584b57)) && (0x6b < (uint)param_1[2])))))) &&
            ((code *)param_1[0x1a] != (code *)0x0)))) {
          (*(code *)param_1[0x1a])(local_594 + 0x10,4,&local_2c);
        }
        if (((-1 < (int)local_24[0]) && (local_594 != 0)) && (*param_1 == 0x54584b57)) {
          iVar8 = local_594 + 4;
          uVar7 = param_1[2];
          if (uVar7 < 0x70) {
joined_r0x10006f4d:
            if (uVar7 < 0x6c) goto LAB_10006f68;
          }
          else if ((code *)param_1[0x1b] != (code *)0x0) {
            (*(code *)param_1[0x1b])(iVar8,4,local_24[0] | 0x80000000);
            if ((local_594 == 0) || (*param_1 != 0x54584b57)) goto LAB_10006f68;
            uVar7 = param_1[2];
            iVar8 = local_594 + 4;
            goto joined_r0x10006f4d;
          }
          if ((code *)param_1[0x1a] != (code *)0x0) {
            (*(code *)param_1[0x1a])(iVar8,4,local_24);
          }
        }
LAB_10006f68:
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x20;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar6 + 1 < 0x280) {
          cVar4 = 'a';
          pcVar14 = &DAT_1000aad6;
          do {
            *(char *)((int)&local_314 + uVar6) = cVar4;
            uVar6 = uVar6 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
            pcVar14 = pcVar14 + 1;
          } while (uVar6 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x3d;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        iVar8 = 8;
        do {
          uVar7 = local_94 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar7;
          if (uVar7 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar7 = 0;
          do {
            uVar6 = uVar7;
            uVar7 = uVar6 + 1;
          } while (*(char *)((int)&local_314 + uVar6) != '\0');
          if (uVar6 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar6) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar6 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x20;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar6 + 1 < 0x280) {
          cVar4 = 'a';
          pcVar14 = &DAT_1000aade;
          do {
            *(char *)((int)&local_314 + uVar6) = cVar4;
            uVar6 = uVar6 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
            pcVar14 = pcVar14 + 1;
          } while (uVar6 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x3d;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        iVar8 = 8;
        do {
          uVar7 = local_24[0] >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar7;
          if (uVar7 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar7 = 0;
          do {
            uVar6 = uVar7;
            uVar7 = uVar6 + 1;
          } while (*(char *)((int)&local_314 + uVar6) != '\0');
          if (uVar6 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar6) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar6 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x20;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar6 + 1 < 0x280) {
          cVar4 = 'a';
          pcVar14 = str_1000aae5;
          do {
            pcVar14 = pcVar14 + 1;
            *(char *)((int)&local_314 + uVar6) = cVar4;
            uVar6 = uVar6 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
          } while (uVar6 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          uVar7 = uVar6 + 1;
        } while (*(char *)((int)&local_314 + uVar6) != '\0');
        if (uVar7 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar6) = 0x3d;
          uVar6 = uVar7;
        }
        *(undefined1 *)((int)&local_314 + uVar6) = 0;
        iVar8 = 8;
        do {
          uVar7 = local_18 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar7;
          if (uVar7 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar7 = 0;
          do {
            uVar6 = uVar7;
            uVar7 = uVar6 + 1;
          } while (*(char *)((int)&local_314 + uVar6) != '\0');
          if (uVar6 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar6) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar6 + 1) = 0;
          }
          uVar7 = local_2c;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar11 + 1 < 0x280) {
          cVar4 = 'a';
          pcVar14 = str_1000aaef;
          do {
            pcVar14 = pcVar14 + 1;
            *(char *)((int)&local_314 + uVar11) = cVar4;
            uVar11 = uVar11 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
          } while (uVar11 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        iVar8 = 8;
        bVar1 = true;
        do {
          uVar6 = uVar7 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar6;
          if (uVar6 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar11 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar11) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        goto LAB_10004344;
      }
    }
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_314 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      cVar4 = ' ';
      pcVar14 = str_1000aab6;
      do {
        pcVar14 = pcVar14 + 1;
        *(char *)((int)&local_314 + uVar6) = cVar4;
        uVar6 = uVar6 + 1;
        cVar4 = *pcVar14;
        if (cVar4 == '\0') break;
      } while (uVar6 < 0x27f);
    }
    *(undefined1 *)((int)&local_314 + uVar6) = 0;
    bVar1 = false;
  }
LAB_10004344:
  uVar7 = local_14;
  bVar3 = false;
  local_94 = 0;
  local_24[0] = 0;
  local_18 = 0;
  if ((param_2[8] == 4) && (param_2[9] == 3)) {
    uVar6 = *(uint *)(param_2 + 0x14);
    if ((uVar6 & 1) == 0 && uVar6 != 0) {
      local_594 = 0;
      if (((((uVar6 & 0xfffffff0) != 0 && param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
          (0x67 < (uint)param_1[2])) &&
         (((code *)param_1[0x19] != (code *)0x0 &&
          (iVar8 = (*(code *)param_1[0x19])(uVar6 & 0xfffffff0,0,0x1000,&local_594), iVar8 != 0))))
      {
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar11 + 1 < 0x280) {
          cVar4 = 'h';
          pcVar14 = &DAT_1000ab11;
          do {
            *(char *)((int)&local_314 + uVar11) = cVar4;
            uVar11 = uVar11 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
            pcVar14 = pcVar14 + 1;
          } while (uVar11 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        iVar8 = 8;
        do {
          uVar6 = local_594 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar6;
          if (uVar6 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar11 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar11) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar6 = 0;
        if (local_594 != 0) {
          if (((*param_1 == 0x54584b57) && (0x6b < (uint)param_1[2])) &&
             ((code *)param_1[0x1a] != (code *)0x0)) {
            (*(code *)param_1[0x1a])(local_594,4,&local_94);
            if (local_594 != 0) {
              if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 0x6c)) ||
                 ((code *)param_1[0x1a] == (code *)0x0)) goto LAB_10006732;
              (*(code *)param_1[0x1a])(local_594 + 8,4,local_24);
              uVar6 = local_594;
            }
          }
          else {
LAB_10006732:
            uVar6 = local_594;
          }
        }
        if ((local_24[0] & 1) == 0) {
          uVar11 = 0;
          if (uVar6 == 0) goto LAB_1000676e;
          if (*param_1 == 0x54584b57) {
            local_14 = uVar6 + 8;
            uVar11 = param_1[2];
            if (uVar11 < 0x70) {
joined_r0x1000737c:
              if (uVar11 < 0x6c) goto LAB_10006798;
            }
            else if ((code *)param_1[0x1b] != (code *)0x0) {
              (*(code *)param_1[0x1b])(uVar6 + 8,4,local_24[0] | 1);
              uVar11 = 0;
              if (local_594 == 0) goto LAB_1000676e;
              if (*param_1 != 0x54584b57) goto LAB_10006798;
              uVar11 = param_1[2];
              local_14 = local_594 + 8;
              uVar6 = local_594;
              goto joined_r0x1000737c;
            }
            uVar11 = uVar6;
            if ((code *)param_1[0x1a] != (code *)0x0) {
              (*(code *)param_1[0x1a])(local_14,4,local_24);
              uVar11 = local_594;
            }
            goto LAB_1000676e;
          }
        }
        else {
          uVar11 = uVar6;
LAB_1000676e:
          if (((*param_1 == 0x54584b57) && (0x6b < (uint)param_1[2])) &&
             ((code *)param_1[0x1a] != (code *)0x0)) {
            (*(code *)param_1[0x1a])(uVar11 + 0xe,2,&local_18);
          }
        }
LAB_10006798:
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar11 + 1 < 0x280) {
          cVar4 = 'h';
          pcVar14 = &DAT_1000ab19;
          do {
            *(char *)((int)&local_314 + uVar11) = cVar4;
            uVar11 = uVar11 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
            pcVar14 = pcVar14 + 1;
          } while (uVar11 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        iVar8 = 8;
        do {
          uVar6 = local_94 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar6;
          if (uVar6 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar11 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar11) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar11 + 1 < 0x280) {
          cVar4 = 'h';
          pcVar14 = &DAT_1000ab21;
          do {
            *(char *)((int)&local_314 + uVar11) = cVar4;
            uVar11 = uVar11 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
            pcVar14 = pcVar14 + 1;
          } while (uVar11 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_314 + uVar11) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
          uVar11 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar11) = 0;
        iVar8 = 8;
        do {
          uVar6 = local_24[0] >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar6;
          if (uVar6 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar11 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar11) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
          }
          uVar6 = local_18;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          uVar11 = uVar18 + 1;
        } while (*(char *)((int)&local_314 + uVar18) != '\0');
        if (uVar11 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar18) = 0x20;
          uVar18 = uVar11;
        }
        *(undefined1 *)((int)&local_314 + uVar18) = 0;
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          uVar11 = uVar18 + 1;
        } while (*(char *)((int)&local_314 + uVar18) != '\0');
        if (uVar18 + 1 < 0x280) {
          cVar4 = 'h';
          pcVar14 = str_1000ab28;
          do {
            pcVar14 = pcVar14 + 1;
            *(char *)((int)&local_314 + uVar18) = cVar4;
            uVar18 = uVar18 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
          } while (uVar18 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar18) = 0;
        uVar11 = 0;
        do {
          uVar18 = uVar11;
          uVar11 = uVar18 + 1;
        } while (*(char *)((int)&local_314 + uVar18) != '\0');
        if (uVar11 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar18) = 0x3d;
          uVar18 = uVar11;
        }
        *(undefined1 *)((int)&local_314 + uVar18) = 0;
        iVar8 = 8;
        do {
          uVar11 = uVar6 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar11;
          if (uVar11 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            uVar11 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar18 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar18) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar18 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
          bVar3 = true;
        } while (iVar8 != 0);
        goto LAB_10004451;
      }
    }
    uVar6 = 0;
    do {
      uVar11 = uVar6;
      uVar6 = uVar11 + 1;
    } while (*(char *)((int)&local_314 + uVar11) != '\0');
    if (uVar11 + 1 < 0x280) {
      cVar4 = ' ';
      pcVar14 = str_1000aafb;
      do {
        pcVar14 = pcVar14 + 1;
        *(char *)((int)&local_314 + uVar11) = cVar4;
        uVar11 = uVar11 + 1;
        cVar4 = *pcVar14;
        if (cVar4 == '\0') break;
      } while (uVar11 < 0x27f);
    }
    *(undefined1 *)((int)&local_314 + uVar11) = 0;
    bVar3 = false;
  }
LAB_10004451:
  local_594 = 0;
  local_94 = 0;
  local_24[0] = 0;
  bVar2 = false;
  if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
    if (param_2[10] == 0) {
      local_18 = 0;
      local_2c = 0;
      uVar6 = *(uint *)(param_2 + 0x24);
      uVar11 = uVar6 & 0xffffffe0;
      if (((byte)uVar6 & uVar11 != 0) != 0) {
LAB_100045cb:
        if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
           ((0x57 < (uint)param_1[2] &&
            (((((code *)param_1[0x15] != (code *)0x0 &&
               ((*(code *)param_1[0x15])(uVar11 & 0xffff,2,&local_18), *param_1 == 0x54584b57)) &&
              (0x57 < (uint)param_1[2])) && ((code *)param_1[0x15] != (code *)0x0)))))) {
          (*(code *)param_1[0x15])(uVar11 & 0xffff | 2,2,&local_2c);
        }
        uVar6 = 0;
        do {
          uVar18 = uVar6;
          uVar6 = uVar18 + 1;
        } while (*(char *)((int)&local_314 + uVar18) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar18) = 0x20;
          uVar18 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar18) = 0;
        uVar6 = 0;
        do {
          uVar18 = uVar6;
          uVar6 = uVar18 + 1;
        } while (*(char *)((int)&local_314 + uVar18) != '\0');
        if (uVar18 + 1 < 0x280) {
          cVar4 = 'u';
          pcVar14 = &DAT_1000ab4e;
          do {
            *(char *)((int)&local_314 + uVar18) = cVar4;
            uVar18 = uVar18 + 1;
            cVar4 = *pcVar14;
            if (cVar4 == '\0') break;
            pcVar14 = pcVar14 + 1;
          } while (uVar18 < 0x27f);
        }
        *(undefined1 *)((int)&local_314 + uVar18) = 0;
        uVar6 = 0;
        do {
          uVar18 = uVar6;
          uVar6 = uVar18 + 1;
        } while (*(char *)((int)&local_314 + uVar18) != '\0');
        if (uVar6 < 0x280) {
          *(undefined1 *)((int)&local_314 + uVar18) = 0x3d;
          uVar18 = uVar6;
        }
        *(undefined1 *)((int)&local_314 + uVar18) = 0;
        iVar8 = 8;
        do {
          uVar6 = uVar11 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
          bVar9 = (byte)uVar6;
          if (uVar6 < 10) {
            bVar9 = bVar9 | 0x30;
          }
          else {
            bVar9 = bVar9 + 0x37;
          }
          uVar6 = 0;
          do {
            uVar18 = uVar6;
            uVar6 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar18 + 1 < 0x280) {
            *(byte *)((int)&local_314 + uVar18) = bVar9;
            *(undefined1 *)((int)&local_314 + uVar18 + 1) = 0;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        recovered_10009c90((int)&local_314,str_1000ab53,local_18);
        recovered_10009c90((int)&local_314,str_1000ab5b,local_2c);
        bVar2 = true;
        goto LAB_100047b8;
      }
      uVar11 = *(uint *)(param_2 + 0x14);
      if ((((uVar11 & 1) == 0) && (uVar11 = *(uint *)(param_2 + 0x18), (uVar11 & 1) == 0)) &&
         (uVar11 = *(uint *)(param_2 + 0x1c), (uVar11 & 1) == 0)) {
        uVar18 = *(uint *)(param_2 + 0x20);
        uVar11 = uVar6;
        if ((uVar18 & 1) != 0) {
          uVar11 = uVar18;
        }
        if ((((uVar18 | uVar6) & 1) != 0) || (uVar11 = *(uint *)(param_2 + 0x28), (uVar11 & 1) != 0)
           ) goto LAB_100045c2;
      }
      else {
LAB_100045c2:
        uVar11 = uVar11 & 0xfffffffc;
        if (uVar11 != 0) goto LAB_100045cb;
      }
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)((int)&local_314 + uVar11) != '\0');
      if (uVar11 + 1 < 0x280) {
        cVar4 = ' ';
        pcVar14 = str_1000ab34;
        do {
          pcVar14 = pcVar14 + 1;
          *(char *)((int)&local_314 + uVar11) = cVar4;
          uVar11 = uVar11 + 1;
          cVar4 = *pcVar14;
          if (cVar4 == '\0') break;
        } while (uVar11 < 0x27f);
      }
    }
    else {
      uVar6 = *(uint *)(param_2 + 0x14);
      if ((uVar6 & 1) == 0 && uVar6 != 0) {
        local_594 = 0;
        if ((((uVar6 & 0xfffffff0) != 0 && param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
           ((0x67 < (uint)param_1[2] &&
            (((code *)param_1[0x19] != (code *)0x0 &&
             (iVar8 = (*(code *)param_1[0x19])(uVar6 & 0xfffffff0,0,0x1000,&local_594), iVar8 != 0))
            )))) {
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
            uVar11 = uVar6;
          }
          *(undefined1 *)((int)&local_314 + uVar11) = 0;
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar11 + 1 < 0x280) {
            cVar4 = 'u';
            pcVar14 = &DAT_1000ab7e;
            do {
              *(char *)((int)&local_314 + uVar11) = cVar4;
              uVar11 = uVar11 + 1;
              cVar4 = *pcVar14;
              if (cVar4 == '\0') break;
              pcVar14 = pcVar14 + 1;
            } while (uVar11 < 0x27f);
          }
          *(undefined1 *)((int)&local_314 + uVar11) = 0;
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_314 + uVar11) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
            uVar11 = uVar6;
          }
          *(undefined1 *)((int)&local_314 + uVar11) = 0;
          iVar8 = 8;
          do {
            uVar6 = local_594 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
            bVar9 = (byte)uVar6;
            if (uVar6 < 10) {
              bVar9 = bVar9 | 0x30;
            }
            else {
              bVar9 = bVar9 + 0x37;
            }
            uVar6 = 0;
            do {
              uVar11 = uVar6;
              uVar6 = uVar11 + 1;
            } while (*(char *)((int)&local_314 + uVar11) != '\0');
            if (uVar11 + 1 < 0x280) {
              *(byte *)((int)&local_314 + uVar11) = bVar9;
              *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if ((((local_594 != 0) && (*param_1 == 0x54584b57)) && (0x6b < (uint)param_1[2])) &&
             ((((code *)param_1[0x1a] != (code *)0x0 &&
               ((*(code *)param_1[0x1a])(local_594,4,&local_94), local_594 != 0)) &&
              ((*param_1 == 0x54584b57 &&
               ((0x6b < (uint)param_1[2] && ((code *)param_1[0x1a] != (code *)0x0)))))))) {
            (*(code *)param_1[0x1a])(local_594 + 4,4,local_24);
          }
          uVar11 = local_94;
          uVar6 = 0;
          do {
            uVar18 = uVar6;
            uVar6 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_314 + uVar18) = 0x20;
            uVar18 = uVar6;
          }
          *(undefined1 *)((int)&local_314 + uVar18) = 0;
          uVar6 = 0;
          do {
            uVar18 = uVar6;
            uVar6 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar18 + 1 < 0x280) {
            cVar4 = 'u';
            pcVar14 = &DAT_1000ab86;
            do {
              *(char *)((int)&local_314 + uVar18) = cVar4;
              uVar18 = uVar18 + 1;
              cVar4 = *pcVar14;
              if (cVar4 == '\0') break;
              pcVar14 = pcVar14 + 1;
            } while (uVar18 < 0x27f);
          }
          *(undefined1 *)((int)&local_314 + uVar18) = 0;
          uVar6 = 0;
          do {
            uVar18 = uVar6;
            uVar6 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar6 < 0x280) {
            *(undefined1 *)((int)&local_314 + uVar18) = 0x3d;
            uVar18 = uVar6;
          }
          *(undefined1 *)((int)&local_314 + uVar18) = 0;
          iVar8 = 8;
          do {
            uVar6 = uVar11 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
            bVar9 = (byte)uVar6;
            if (uVar6 < 10) {
              bVar9 = bVar9 | 0x30;
            }
            else {
              bVar9 = bVar9 + 0x37;
            }
            uVar6 = 0;
            do {
              uVar18 = uVar6;
              uVar6 = uVar18 + 1;
            } while (*(char *)((int)&local_314 + uVar18) != '\0');
            if (uVar18 + 1 < 0x280) {
              *(byte *)((int)&local_314 + uVar18) = bVar9;
              *(undefined1 *)((int)&local_314 + uVar18 + 1) = 0;
            }
            uVar6 = local_24[0];
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            uVar11 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar11 < 0x280) {
            *(undefined1 *)((int)&local_314 + uVar18) = 0x20;
            uVar18 = uVar11;
          }
          *(undefined1 *)((int)&local_314 + uVar18) = 0;
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            uVar11 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar18 + 1 < 0x280) {
            cVar4 = 'u';
            pcVar14 = &DAT_1000ab8e;
            do {
              *(char *)((int)&local_314 + uVar18) = cVar4;
              uVar18 = uVar18 + 1;
              cVar4 = *pcVar14;
              if (cVar4 == '\0') break;
              pcVar14 = pcVar14 + 1;
            } while (uVar18 < 0x27f);
          }
          *(undefined1 *)((int)&local_314 + uVar18) = 0;
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            uVar11 = uVar18 + 1;
          } while (*(char *)((int)&local_314 + uVar18) != '\0');
          if (uVar11 < 0x280) {
            *(undefined1 *)((int)&local_314 + uVar18) = 0x3d;
            uVar18 = uVar11;
          }
          *(undefined1 *)((int)&local_314 + uVar18) = 0;
          iVar8 = 8;
          do {
            uVar11 = uVar6 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
            bVar9 = (byte)uVar11;
            if (uVar11 < 10) {
              bVar9 = bVar9 | 0x30;
            }
            else {
              bVar9 = bVar9 + 0x37;
            }
            uVar11 = 0;
            do {
              uVar18 = uVar11;
              uVar11 = uVar18 + 1;
            } while (*(char *)((int)&local_314 + uVar18) != '\0');
            if (uVar18 + 1 < 0x280) {
              *(byte *)((int)&local_314 + uVar18) = bVar9;
              *(undefined1 *)((int)&local_314 + uVar18 + 1) = 0;
            }
            iVar8 = iVar8 + -1;
            bVar2 = true;
          } while (iVar8 != 0);
          goto LAB_100047b8;
        }
      }
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)((int)&local_314 + uVar11) != '\0');
      if (uVar11 + 1 < 0x280) {
        cVar4 = ' ';
        pcVar14 = str_1000ab63;
        do {
          pcVar14 = pcVar14 + 1;
          *(char *)((int)&local_314 + uVar11) = cVar4;
          uVar11 = uVar11 + 1;
          cVar4 = *pcVar14;
          if (cVar4 == '\0') break;
        } while (uVar11 < 0x27f);
      }
    }
    *(undefined1 *)((int)&local_314 + uVar11) = 0;
    bVar2 = false;
  }
LAB_100047b8:
  pcVar14 = str_1000aa19;
  if (((!bVar1 && uVar7 == 0) && !bVar3) && !bVar2) {
    uVar7 = (uint)(byte)*pcVar12;
    if (*pcVar12 != 0) {
      pbVar15 = (byte *)(pcVar12 + 8);
      uVar6 = uVar7;
      do {
        uVar5 = (undefined1)uVar7;
        cVar4 = (char)uVar6;
        uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          cVar4 = cVar4 + ' ';
        }
        bVar9 = pbVar15[-7];
        uVar6 = (uint)bVar9;
        if (cVar4 == 'g') {
          if (bVar9 == 0) {
            pcVar17 = str_1000a906 + 1;
          }
          else {
            bVar13 = bVar9;
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar13 = bVar9 + 0x20;
            }
            uVar7 = (uint)CONCAT11(bVar13,uVar5);
            if (bVar13 != 0x72) goto LAB_100047e5;
            bVar13 = pbVar15[-6];
            uVar7 = (uint)CONCAT11(bVar13,uVar5);
            if (bVar13 == 0) {
              pcVar17 = str_1000a906 + 2;
            }
            else {
              uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
              }
              if ((char)(uVar7 >> 8) != 'a') goto LAB_100047e5;
              bVar13 = pbVar15[-5];
              uVar5 = (undefined1)uVar7;
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar17 = str_1000a906 + 3;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'p') goto LAB_100047e5;
                bVar13 = pbVar15[-4];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar17 = str_1000a906 + 4;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'h') goto LAB_100047e5;
                  bVar13 = pbVar15[-3];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar17 = str_1000a906 + 5;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'i') goto LAB_100047e5;
                    bVar13 = pbVar15[-2];
                    uVar5 = (undefined1)uVar7;
                    uVar7 = (uint)CONCAT11(bVar13,uVar5);
                    if (bVar13 == 0) {
                      pcVar17 = str_1000a906 + 6;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                      }
                      if ((char)(uVar7 >> 8) != 'c') goto LAB_100047e5;
                      bVar13 = pbVar15[-1];
                      uVar5 = (undefined1)uVar7;
                      uVar7 = (uint)CONCAT11(bVar13,uVar5);
                      if (bVar13 == 0) {
                        pcVar17 = str_1000a906 + 7;
                      }
                      else {
                        uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                        if ((byte)(bVar13 + 0xbf) < 0x1a) {
                          uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                        }
                        if ((char)(uVar7 >> 8) != 's') goto LAB_100047e5;
                        pcVar17 = str_1000a906 + 8;
                        if (*pbVar15 != 0) goto LAB_10004d08;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar17 == '\0') goto LAB_10004d08;
        }
LAB_100047e5:
        pbVar15 = pbVar15 + 1;
      } while ((char)uVar6 != '\0');
      pbVar15 = (byte *)(pcVar12 + 7);
      uVar6 = uVar7;
      do {
        uVar5 = (undefined1)uVar7;
        cVar4 = (char)uVar6;
        uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          cVar4 = cVar4 + ' ';
        }
        bVar9 = pbVar15[-6];
        uVar6 = (uint)bVar9;
        if (cVar4 == 'n') {
          if (bVar9 == 0) {
            pcVar17 = str_1000a917 + 1;
          }
          else {
            bVar13 = bVar9;
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar13 = bVar9 + 0x20;
            }
            uVar7 = (uint)CONCAT11(bVar13,uVar5);
            if (bVar13 != 0x65) goto LAB_1000493f;
            bVar13 = pbVar15[-5];
            uVar7 = (uint)CONCAT11(bVar13,uVar5);
            if (bVar13 == 0) {
              pcVar17 = str_1000a917 + 2;
            }
            else {
              uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
              }
              if ((char)(uVar7 >> 8) != 't') goto LAB_1000493f;
              bVar13 = pbVar15[-4];
              uVar5 = (undefined1)uVar7;
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar17 = str_1000a917 + 3;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'w') goto LAB_1000493f;
                bVar13 = pbVar15[-3];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar17 = str_1000a917 + 4;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'o') goto LAB_1000493f;
                  bVar13 = pbVar15[-2];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar17 = str_1000a917 + 5;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'r') goto LAB_1000493f;
                    bVar13 = pbVar15[-1];
                    uVar5 = (undefined1)uVar7;
                    uVar7 = (uint)CONCAT11(bVar13,uVar5);
                    if (bVar13 == 0) {
                      pcVar17 = str_1000a917 + 6;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                      }
                      if ((char)(uVar7 >> 8) != 'k') goto LAB_1000493f;
                      pcVar17 = str_1000a917 + 7;
                      if (*pbVar15 != 0) goto LAB_10004d08;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar17 == '\0') goto LAB_10004d08;
        }
LAB_1000493f:
        pbVar15 = pbVar15 + 1;
      } while ((char)uVar6 != '\0');
      pbVar15 = (byte *)(pcVar12 + 8);
      uVar6 = uVar7;
      do {
        uVar5 = (undefined1)uVar7;
        cVar4 = (char)uVar6;
        uVar7 = (uint)CONCAT11(cVar4 + 0xbfU,uVar5);
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          cVar4 = cVar4 + ' ';
        }
        bVar9 = pbVar15[-7];
        uVar6 = (uint)bVar9;
        if (cVar4 == 'f') {
          if (bVar9 == 0) {
            pcVar17 = str_1000aa10 + 1;
          }
          else {
            bVar13 = bVar9;
            if ((byte)(bVar9 + 0xbf) < 0x1a) {
              bVar13 = bVar9 + 0x20;
            }
            uVar7 = (uint)CONCAT11(bVar13,uVar5);
            if (bVar13 != 0x69) goto LAB_10004a6a;
            bVar13 = pbVar15[-6];
            uVar7 = (uint)CONCAT11(bVar13,uVar5);
            if (bVar13 == 0) {
              pcVar17 = str_1000aa10 + 2;
            }
            else {
              uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
              }
              if ((char)(uVar7 >> 8) != 'r') goto LAB_10004a6a;
              bVar13 = pbVar15[-5];
              uVar5 = (undefined1)uVar7;
              uVar7 = (uint)CONCAT11(bVar13,uVar5);
              if (bVar13 == 0) {
                pcVar17 = str_1000aa10 + 3;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                }
                if ((char)(uVar7 >> 8) != 'e') goto LAB_10004a6a;
                bVar13 = pbVar15[-4];
                uVar5 = (undefined1)uVar7;
                uVar7 = (uint)CONCAT11(bVar13,uVar5);
                if (bVar13 == 0) {
                  pcVar17 = str_1000aa10 + 4;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                  }
                  if ((char)(uVar7 >> 8) != 'w') goto LAB_10004a6a;
                  bVar13 = pbVar15[-3];
                  uVar5 = (undefined1)uVar7;
                  uVar7 = (uint)CONCAT11(bVar13,uVar5);
                  if (bVar13 == 0) {
                    pcVar17 = str_1000aa10 + 5;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                    }
                    if ((char)(uVar7 >> 8) != 'i') goto LAB_10004a6a;
                    bVar13 = pbVar15[-2];
                    uVar5 = (undefined1)uVar7;
                    uVar7 = (uint)CONCAT11(bVar13,uVar5);
                    if (bVar13 == 0) {
                      pcVar17 = str_1000aa10 + 6;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                      }
                      if ((char)(uVar7 >> 8) != 'r') goto LAB_10004a6a;
                      bVar13 = pbVar15[-1];
                      uVar5 = (undefined1)uVar7;
                      uVar7 = (uint)CONCAT11(bVar13,uVar5);
                      if (bVar13 == 0) {
                        pcVar17 = str_1000aa10 + 7;
                      }
                      else {
                        uVar6 = (uint)CONCAT11(bVar13 + 0xbf,bVar9);
                        if ((byte)(bVar13 + 0xbf) < 0x1a) {
                          uVar7 = (uint)CONCAT11(bVar13 + 0x20,uVar5);
                        }
                        if ((char)(uVar7 >> 8) != 'e') goto LAB_10004a6a;
                        pcVar17 = str_1000aa10 + 8;
                        if (*pbVar15 != 0) goto LAB_10004d08;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar17 == '\0') goto LAB_10004d08;
        }
LAB_10004a6a:
        pbVar15 = pbVar15 + 1;
      } while ((char)uVar6 != '\0');
      pbVar15 = (byte *)(pcVar12 + 8);
      do {
        cVar4 = (char)uVar7;
        if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          cVar4 = cVar4 + ' ';
        }
        bVar9 = pbVar15[-7];
        uVar7 = (uint)bVar9;
        if (cVar4 != 'p') goto LAB_10004bc2;
        if (bVar9 == 0) {
          pcVar12 = str_1000a80f + 1;
          goto LAB_10004bb9;
        }
        if ((byte)(bVar9 + 0xbf) < 0x1a) {
          if (bVar9 == 0x4c) goto LAB_10004c00;
        }
        else if (bVar9 == 0x6c) {
LAB_10004c00:
          bVar13 = pbVar15[-6];
          if (bVar13 == 0) {
            pcVar12 = str_1000a80f + 2;
          }
          else {
            if ((byte)(bVar13 + 0xbf) < 0x1a) {
              bVar13 = bVar13 + 0x20;
            }
            if (bVar13 != 0x61) goto LAB_10004bc2;
            bVar13 = pbVar15[-5];
            if (bVar13 == 0) {
              pcVar12 = str_1000a80f + 3;
            }
            else {
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                bVar13 = bVar13 + 0x20;
              }
              if (bVar13 != 0x74) goto LAB_10004bc2;
              bVar13 = pbVar15[-4];
              if (bVar13 == 0) {
                pcVar12 = str_1000a80f + 4;
              }
              else {
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  bVar13 = bVar13 + 0x20;
                }
                if (bVar13 != 0x66) goto LAB_10004bc2;
                bVar13 = pbVar15[-3];
                if (bVar13 == 0) {
                  pcVar12 = str_1000a80f + 5;
                }
                else {
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    bVar13 = bVar13 + 0x20;
                  }
                  if (bVar13 != 0x6f) goto LAB_10004bc2;
                  bVar13 = pbVar15[-2];
                  if (bVar13 == 0) {
                    pcVar12 = str_1000a80f + 6;
                  }
                  else {
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      bVar13 = bVar13 + 0x20;
                    }
                    if (bVar13 != 0x72) goto LAB_10004bc2;
                    bVar13 = pbVar15[-1];
                    if (bVar13 == 0) {
                      pcVar12 = str_1000a80f + 7;
                    }
                    else {
                      if ((byte)(bVar13 + 0xbf) < 0x1a) {
                        bVar13 = bVar13 + 0x20;
                      }
                      if (bVar13 != 0x6d) goto LAB_10004bc2;
                      pcVar12 = str_1000a80f + 8;
                      if (*pbVar15 != 0) goto LAB_10004d08;
                    }
                  }
                }
              }
            }
          }
LAB_10004bb9:
          if (*pcVar12 == '\0') goto LAB_10004d08;
        }
LAB_10004bc2:
        pbVar15 = pbVar15 + 1;
      } while (bVar9 != 0);
    }
LAB_10004e06:
    pcVar14 = str_1000aa29;
  }
LAB_10004e0b:
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_314 + uVar6) != '\0');
  cVar4 = *pcVar14;
  if (uVar6 + 1 < 0x280 && cVar4 != '\0') {
    do {
      pcVar14 = pcVar14 + 1;
      *(char *)((int)&local_314 + uVar6) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar14;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x27f);
  }
LAB_10004e57:
  *(undefined1 *)((int)&local_314 + uVar6) = 0;
LAB_10004e5f:
  local_34 = recovered_10009b10((int)param_2);
  local_94 = local_94 & 0xffffff00;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (uVar6 + 1 < 0x60) {
    cVar4 = '/';
    pcVar12 = str_1000a9fa;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)local_24 + (uVar6 - 0x70)) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x5f);
  }
  *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (uVar7 < 0x60) {
    *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0x2f;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0;
  bVar9 = *param_2;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (bVar9 < 0xa0) {
    uVar16 = CONCAT11(bVar9 >> 4,bVar9) | 0x3000;
  }
  else {
    uVar16 = CONCAT11((bVar9 >> 4) + 0x37,bVar9);
  }
  if (uVar6 + 1 < 0x60) {
    *(char *)((int)local_24 + (uVar6 - 0x70)) = (char)(uVar16 >> 8);
    *(undefined1 *)((int)local_24 + (uVar6 - 0x6f)) = 0;
  }
  uVar6 = uVar16 & 0xffffff0f;
  uVar7 = 0;
  do {
    uVar11 = uVar7;
    uVar7 = uVar11 + 1;
  } while (*(char *)((int)local_24 + (uVar11 - 0x70)) != '\0');
  if ((byte)uVar6 < 10) {
    uVar16 = (ushort)uVar6 | 0x30;
  }
  else {
    uVar16 = (ushort)CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 + 0x37);
  }
  if (uVar11 + 1 < 0x60) {
    *(char *)((int)local_24 + (uVar11 - 0x70)) = (char)uVar16;
    *(undefined1 *)((int)local_24 + (uVar11 - 0x6f)) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (uVar7 < 0x60) {
    *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0x3a;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0;
  bVar9 = param_2[1];
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (bVar9 < 0xa0) {
    bVar13 = bVar9 >> 4 | 0x30;
  }
  else {
    bVar13 = (bVar9 >> 4) + 0x37;
  }
  if (uVar6 + 1 < 0x60) {
    *(byte *)((int)local_24 + (uVar6 - 0x70)) = bVar13;
    *(undefined1 *)((int)local_24 + (uVar6 - 0x6f)) = 0;
  }
  bVar9 = bVar9 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (bVar9 < 10) {
    bVar9 = bVar9 | 0x30;
  }
  else {
    bVar9 = bVar9 + 0x37;
  }
  if (uVar6 + 1 < 0x60) {
    *(byte *)((int)local_24 + (uVar6 - 0x70)) = bVar9;
    *(undefined1 *)((int)local_24 + (uVar6 - 0x6f)) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)local_24 + (uVar6 - 0x70)) != '\0');
  if (uVar7 < 0x60) {
    *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0x2e;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)local_24 + (uVar6 - 0x70)) = 0;
  uVar7 = (uint)param_2[2];
  local_14 = CONCAT31(PF_PART3(local_14, 1),bVar9);
  local_25 = bVar13;
  if (uVar7 == 0) {
    uVar6 = 0;
    do {
      uVar11 = uVar6;
      uVar6 = uVar11 + 1;
    } while (*(char *)((int)local_24 + (uVar11 - 0x70)) != '\0');
    if (uVar11 + 1 < 0x60) {
      *(undefined2 *)((int)local_24 + (uVar11 - 0x70)) = 0x30;
    }
  }
  else {
    local_30 = uVar7;
    uVar7 = local_30;
    uVar6 = uVar7;
    uVar11 = 0;
    do {
      *(byte *)((int)local_24 + uVar11) = (byte)(uVar6 % 10) | 0x30;
      uVar18 = uVar11 + 1;
      if (8 < uVar11) break;
      bVar1 = 9 < uVar6;
      uVar6 = uVar6 / 10;
      uVar11 = uVar18;
    } while (bVar1);
    do {
      iVar8 = uVar18 - 1;
      uVar18 = uVar18 - 1;
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)((int)local_24 + (uVar11 - 0x70)) != '\0');
      if (uVar11 + 1 < 0x60) {
        *(undefined1 *)((int)local_24 + (uVar11 - 0x70)) = *(undefined1 *)((int)local_24 + iVar8);
        *(undefined1 *)((int)local_24 + (uVar11 - 0x6f)) = 0;
      }
    } while (uVar18 != 0);
  }
  local_594 = local_594 & 0xffffff00;
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    cVar4 = 'p';
    pcVar12 = &DAT_1000abae;
    do {
      *(char *)((int)&local_594 + uVar11) = cVar4;
      uVar11 = uVar11 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 < 0x27f);
  }
  *(undefined1 *)((int)&local_594 + uVar11) = 0;
  bVar9 = local_25;
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    *(char *)((int)&local_594 + uVar11) = (char)(uVar16 >> 8);
    *(undefined1 *)((int)&local_594 + uVar11 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    *(char *)((int)&local_594 + uVar11) = (char)uVar16;
    *(undefined1 *)((int)&local_594 + uVar11 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_594 + uVar11) = 0x3a;
    uVar11 = uVar6;
  }
  *(undefined1 *)((int)&local_594 + uVar11) = 0;
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    *(byte *)((int)&local_594 + uVar11) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar11 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    *(undefined1 *)((int)&local_594 + uVar11) = (undefined1)local_14;
    *(undefined1 *)((int)&local_594 + uVar11 + 1) = 0;
  }
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_594 + uVar11) != '\0');
  if (uVar6 < 0x280) {
    *(undefined1 *)((int)&local_594 + uVar11) = 0x2e;
    uVar11 = uVar6;
  }
  *(undefined1 *)((int)&local_594 + uVar11) = 0;
  if (uVar7 == 0) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_594 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      *(undefined2 *)((int)&local_594 + uVar6) = 0x30;
    }
  }
  else {
    uVar6 = 0;
    do {
      *(byte *)((int)local_24 + uVar6) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
      uVar11 = uVar6 + 1;
      if (8 < uVar6) break;
      bVar1 = 9 < uVar7;
      uVar6 = uVar11;
      uVar7 = uVar7 / 10;
    } while (bVar1);
    do {
      iVar8 = uVar11 - 1;
      uVar11 = uVar11 - 1;
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar7 = uVar6 + 1;
      } while (*(char *)((int)&local_594 + uVar6) != '\0');
      if (uVar6 + 1 < 0x280) {
        *(undefined1 *)((int)&local_594 + uVar6) = *(undefined1 *)((int)local_24 + iVar8);
        *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
      }
    } while (uVar11 != 0);
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    cVar4 = ' ';
    pcVar12 = str_1000abb2;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_594 + uVar6) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x27f);
  }
  *(undefined1 *)((int)&local_594 + uVar6) = 0;
  uVar16 = *(ushort *)(param_2 + 4);
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)(uVar16 >> 8);
    if (uVar16 < 0xa000) {
      bVar9 = bVar9 >> 4 | 0x30;
    }
    else {
      bVar9 = (bVar9 >> 4) + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar10 = uVar16 >> 8 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)uVar10;
    if (uVar10 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar10 = uVar16 >> 4 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)uVar10;
    if (uVar10 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)(uVar16 & 0xf);
    if ((uVar16 & 0xf) < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    cVar4 = ' ';
    pcVar12 = str_1000abbb;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_594 + uVar6) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x27f);
  }
  *(undefined1 *)((int)&local_594 + uVar6) = 0;
  uVar16 = *(ushort *)(param_2 + 6);
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)(uVar16 >> 8);
    if (uVar16 < 0xa000) {
      bVar9 = bVar9 >> 4 | 0x30;
    }
    else {
      bVar9 = (bVar9 >> 4) + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar10 = uVar16 >> 8 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)uVar10;
    if (uVar10 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar10 = uVar16 >> 4 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)uVar10;
    if (uVar10 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    bVar9 = (byte)(uVar16 & 0xf);
    if ((uVar16 & 0xf) < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    cVar4 = ' ';
    pcVar12 = str_1000abc4;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_594 + uVar6) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x27f);
  }
  *(undefined1 *)((int)&local_594 + uVar6) = 0;
  bVar9 = param_2[8];
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 0xa0) {
      bVar13 = bVar9 >> 4 | 0x30;
    }
    else {
      bVar13 = (bVar9 >> 4) + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar13;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  bVar9 = bVar9 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar7 < 0x280) {
    *(undefined1 *)((int)&local_594 + uVar6) = 0x2e;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)&local_594 + uVar6) = 0;
  bVar9 = param_2[9];
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 0xa0) {
      bVar13 = bVar9 >> 4 | 0x30;
    }
    else {
      bVar13 = (bVar9 >> 4) + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar13;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  bVar9 = bVar9 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar7 < 0x280) {
    *(undefined1 *)((int)&local_594 + uVar6) = 0x2e;
    uVar6 = uVar7;
  }
  *(undefined1 *)((int)&local_594 + uVar6) = 0;
  bVar9 = param_2[10];
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 0xa0) {
      bVar13 = bVar9 >> 4 | 0x30;
    }
    else {
      bVar13 = (bVar9 >> 4) + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar13;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  bVar9 = bVar9 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    cVar4 = ' ';
    pcVar12 = str_1000abcc;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_594 + uVar6) = cVar4;
      uVar6 = uVar6 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
    } while (uVar6 < 0x27f);
  }
  *(undefined1 *)((int)&local_594 + uVar6) = 0;
  bVar9 = param_2[0xb];
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 0xa0) {
      bVar13 = bVar9 >> 4 | 0x30;
    }
    else {
      bVar13 = (bVar9 >> 4) + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar13;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  bVar9 = bVar9 & 0xf;
  uVar7 = 0;
  do {
    uVar6 = uVar7;
    uVar7 = uVar6 + 1;
  } while (*(char *)((int)&local_594 + uVar6) != '\0');
  if (uVar6 + 1 < 0x280) {
    if (bVar9 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    *(byte *)((int)&local_594 + uVar6) = bVar9;
    *(undefined1 *)((int)&local_594 + uVar6 + 1) = 0;
  }
  uVar7 = 0;
  do {
    local_14 = uVar7;
    uVar7 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
    if (uVar7 != 0) {
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)((int)&local_594 + uVar11) != '\0');
      if (uVar11 + 1 < 0x280) {
        cVar4 = ' ';
        pcVar12 = &DAT_1000abd8;
        do {
          *(char *)((int)&local_594 + uVar11) = cVar4;
          uVar11 = uVar11 + 1;
          cVar4 = *pcVar12;
          if (cVar4 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while (uVar11 < 0x27f);
      }
      *(undefined1 *)((int)&local_594 + uVar11) = 0;
      if (local_14 == 0) {
        uVar6 = 0;
        do {
          uVar11 = uVar6;
          uVar6 = uVar11 + 1;
        } while (*(char *)((int)&local_594 + uVar11) != '\0');
        if (uVar11 + 1 < 0x280) {
          *(undefined2 *)((int)&local_594 + uVar11) = 0x30;
        }
      }
      else {
        uVar6 = local_14;
        uVar11 = 0;
        do {
          *(byte *)((int)local_24 + uVar11) = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
          uVar18 = uVar11 + 1;
          if (8 < uVar11) break;
          bVar1 = 9 < uVar6;
          uVar6 = uVar6 / 10;
          uVar11 = uVar18;
        } while (bVar1);
        do {
          iVar8 = uVar18 - 1;
          uVar18 = uVar18 - 1;
          uVar6 = 0;
          do {
            uVar11 = uVar6;
            uVar6 = uVar11 + 1;
          } while (*(char *)((int)&local_594 + uVar11) != '\0');
          if (uVar11 + 1 < 0x280) {
            *(undefined1 *)((int)&local_594 + uVar11) = *(undefined1 *)((int)local_24 + iVar8);
            *(undefined1 *)((int)&local_594 + uVar11 + 1) = 0;
          }
        } while (uVar18 != 0);
      }
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)((int)&local_594 + uVar11) != '\0');
      if (uVar6 < 0x280) {
        *(undefined1 *)((int)&local_594 + uVar11) = 0x3d;
        uVar11 = uVar6;
      }
      *(undefined1 *)((int)&local_594 + uVar11) = 0;
      iVar8 = 8;
      do {
        uVar11 = uVar7 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
        bVar13 = (byte)uVar11;
        bVar9 = bVar13 + 0x37;
        uVar6 = 0;
        do {
          uVar18 = uVar6;
          uVar6 = uVar18 + 1;
        } while (*(char *)((int)&local_594 + uVar18) != '\0');
        if (uVar18 + 1 < 0x280) {
          if (uVar11 < 10) {
            bVar9 = bVar13 | 0x30;
          }
          *(byte *)((int)&local_594 + uVar18) = bVar9;
          *(undefined1 *)((int)&local_594 + uVar18 + 1) = 0;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    cVar4 = (char)local_314;
    uVar7 = local_14 + 1;
  } while (uVar7 != 6);
  if ((char)local_314 != '\0') {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_594 + uVar6) != '\0');
    if (uVar7 < 0x280) {
      *(undefined1 *)((int)&local_594 + uVar6) = 0x20;
      uVar6 = uVar7;
    }
    *(undefined1 *)((int)&local_594 + uVar6) = 0;
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_594 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      pcVar12 = (char *)((int)&local_314 + 1);
      do {
        *(char *)((int)&local_594 + uVar6) = cVar4;
        uVar6 = uVar6 + 1;
        cVar4 = *pcVar12;
        if (cVar4 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar6 < 0x27f);
    }
    *(undefined1 *)((int)&local_594 + uVar6) = 0;
  }
  if (((param_1 != (int *)0x0) && ((code *)param_1[3] != (code *)0x0)) &&
     (iVar8 = (*(code *)param_1[3])(&local_94,local_34,&local_594), iVar8 != 0)) {
    param_3[1] = param_3[1] + 1;
  }
  return 1;
LAB_1000628d:
  local_14 = local_14 | 4;
LAB_10006296:
  if ((param_2[8] == 6) && (param_2[9] != 0)) {
    local_14 = local_14 | 2;
  }
  uVar7 = local_594 | local_14;
  local_94 = uVar7;
  if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
      ((code *)param_1[0x18] == (code *)0x0)) ||
     (iVar8 = (*(code *)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2,uVar7), iVar8 == 0)) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_314 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      cVar4 = ' ';
      pcVar14 = str_1000aa6d;
      do {
        pcVar14 = pcVar14 + 1;
        *(char *)((int)&local_314 + uVar6) = cVar4;
        uVar6 = uVar6 + 1;
        cVar4 = *pcVar14;
        if (cVar4 == '\0') break;
      } while (uVar6 < 0x27f);
    }
    goto LAB_10004227;
  }
  if ((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) {
    if ((code *)param_1[0x17] != (code *)0x0) {
      (*(code *)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_94);
      uVar7 = local_94;
    }
  }
  recovered_10009c90((int)&local_314,str_1000aa86,local_594);
  recovered_10009c90((int)&local_314,str_1000aa97,uVar7);
  uVar6 = local_14;
  recovered_10009c90((int)&local_314,str_1000aaa7,local_14);
  local_14 = (uint)((uVar6 & ~uVar7) == 0);
  goto LAB_10004236;
LAB_10004d08:
  uVar7 = 0;
LAB_10004d2a:
  local_24[0] = 0;
  uVar6 = *(uint *)(param_2 + uVar7 * 4 + 0x14);
  if ((((((uVar6 & 1) != 0 || uVar6 == 0) || (local_94 = 0, param_1 == (int *)0x0)) ||
       ((uVar6 & 0xfffffff0) == 0)) || ((*param_1 != 0x54584b57 || ((uint)param_1[2] < 0x68)))) ||
     (((code *)param_1[0x19] == (code *)0x0 ||
      (iVar8 = (*(code *)param_1[0x19])(uVar6 & 0xfffffff0,0,0x1000,&local_94), iVar8 == 0))))
  goto LAB_10004d20;
  uVar6 = 0;
  do {
    uVar11 = uVar6;
    uVar6 = uVar11 + 1;
  } while (*(char *)((int)&local_314 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    cVar4 = ' ';
    pcVar12 = str_1000ab95;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((int)&local_314 + uVar11) = cVar4;
      uVar11 = uVar11 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
    } while (uVar11 < 0x27f);
  }
  *(undefined1 *)((int)&local_314 + uVar11) = 0;
  if (uVar7 == 0) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
    } while (*(char *)((int)&local_314 + uVar6) != '\0');
    if (uVar6 + 1 < 0x280) {
      *(undefined2 *)((int)&local_314 + uVar6) = 0x30;
    }
  }
  else {
    uVar6 = 0;
    do {
      *(byte *)((int)&local_594 + uVar6) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
      uVar11 = uVar6 + 1;
      if (8 < uVar6) break;
      bVar1 = 9 < uVar7;
      uVar6 = uVar11;
      uVar7 = uVar7 / 10;
    } while (bVar1);
    do {
      pcVar12 = &cStack_595 + uVar11;
      uVar11 = uVar11 - 1;
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar7 = uVar6 + 1;
      } while (*(char *)((int)&local_314 + uVar6) != '\0');
      if (uVar6 + 1 < 0x280) {
        *(char *)((int)&local_314 + uVar6) = *pcVar12;
        *(undefined1 *)((int)&local_314 + uVar6 + 1) = 0;
      }
    } while (uVar11 != 0);
  }
  uVar6 = local_94;
  uVar7 = 0;
  do {
    uVar11 = uVar7;
    uVar7 = uVar11 + 1;
  } while (*(char *)((int)&local_314 + uVar11) != '\0');
  if (uVar7 < 0x280) {
    *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
    uVar11 = uVar7;
  }
  *(undefined1 *)((int)&local_314 + uVar11) = 0;
  uVar7 = 0;
  do {
    uVar11 = uVar7;
    uVar7 = uVar11 + 1;
  } while (*(char *)((int)&local_314 + uVar11) != '\0');
  if (uVar11 + 1 < 0x280) {
    cVar4 = 'm';
    pcVar12 = &DAT_1000aba0;
    do {
      *(char *)((int)&local_314 + uVar11) = cVar4;
      uVar11 = uVar11 + 1;
      cVar4 = *pcVar12;
      if (cVar4 == '\0') break;
      pcVar12 = pcVar12 + 1;
    } while (uVar11 < 0x27f);
  }
  *(undefined1 *)((int)&local_314 + uVar11) = 0;
  uVar7 = 0;
  do {
    uVar11 = uVar7;
    uVar7 = uVar11 + 1;
  } while (*(char *)((int)&local_314 + uVar11) != '\0');
  if (uVar7 < 0x280) {
    *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
    uVar11 = uVar7;
  }
  *(undefined1 *)((int)&local_314 + uVar11) = 0;
  iVar8 = 8;
  do {
    uVar7 = uVar6 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
    bVar9 = (byte)uVar7;
    if (uVar7 < 10) {
      bVar9 = bVar9 | 0x30;
    }
    else {
      bVar9 = bVar9 + 0x37;
    }
    uVar7 = 0;
    do {
      uVar11 = uVar7;
      uVar7 = uVar11 + 1;
    } while (*(char *)((int)&local_314 + uVar11) != '\0');
    if (uVar11 + 1 < 0x280) {
      *(byte *)((int)&local_314 + uVar11) = bVar9;
      *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (((uVar6 != 0) && (*param_1 == 0x54584b57)) &&
     ((0x6b < (uint)param_1[2] && ((code *)param_1[0x1a] != (code *)0x0)))) {
    iVar8 = (*(code *)param_1[0x1a])(uVar6,4,local_24);
    uVar7 = local_24[0];
    if (iVar8 == 0) goto LAB_10004e0b;
    uVar6 = 0;
    do {
      uVar11 = uVar6;
      uVar6 = uVar11 + 1;
    } while (*(char *)((int)&local_314 + uVar11) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)((int)&local_314 + uVar11) = 0x20;
      uVar11 = uVar6;
    }
    *(undefined1 *)((int)&local_314 + uVar11) = 0;
    uVar6 = 0;
    do {
      uVar11 = uVar6;
      uVar6 = uVar11 + 1;
    } while (*(char *)((int)&local_314 + uVar11) != '\0');
    if (uVar11 + 1 < 0x280) {
      cVar4 = 'm';
      pcVar12 = str_1000aba4;
      do {
        pcVar12 = pcVar12 + 1;
        *(char *)((int)&local_314 + uVar11) = cVar4;
        uVar11 = uVar11 + 1;
        cVar4 = *pcVar12;
        if (cVar4 == '\0') break;
      } while (uVar11 < 0x27f);
    }
    *(undefined1 *)((int)&local_314 + uVar11) = 0;
    uVar6 = 0;
    do {
      uVar11 = uVar6;
      uVar6 = uVar11 + 1;
    } while (*(char *)((int)&local_314 + uVar11) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)((int)&local_314 + uVar11) = 0x3d;
      uVar11 = uVar6;
    }
    *(undefined1 *)((int)&local_314 + uVar11) = 0;
    iVar8 = 8;
    do {
      uVar6 = uVar7 >> ((char)iVar8 * '\x04' - 4U & 0x1f) & 0xf;
      bVar9 = (byte)uVar6;
      if (uVar6 < 10) {
        bVar9 = bVar9 | 0x30;
      }
      else {
        bVar9 = bVar9 + 0x37;
      }
      uVar6 = 0;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 + 1;
      } while (*(char *)((int)&local_314 + uVar11) != '\0');
      if (uVar11 + 1 < 0x280) {
        *(byte *)((int)&local_314 + uVar11) = bVar9;
        *(undefined1 *)((int)&local_314 + uVar11 + 1) = 0;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  goto LAB_10004e0b;
LAB_10004d20:
  uVar7 = uVar7 + 1;
  if (uVar7 == 6) goto LAB_10004e06;
  goto LAB_10004d2a;
}

#undef DAT_1000a91f
#undef DAT_1000a920
#undef DAT_1000a921
#undef DAT_1000a922
#undef DAT_1000a923
#undef DAT_1000a924
#undef DAT_1000a925
#undef DAT_1000a926
#undef DAT_1000a927
#undef DAT_1000a928
#undef DAT_1000a9b6
#undef DAT_1000aad6
#undef DAT_1000aade
#undef DAT_1000ab11
#undef DAT_1000ab19
#undef DAT_1000ab21
#undef DAT_1000ab4e
#undef DAT_1000ab7e
#undef DAT_1000ab86
#undef DAT_1000ab8e
#undef DAT_1000aba0
#undef DAT_1000abae
#undef DAT_1000abd8
#undef str_1000a80f
#undef str_1000a906
#undef str_1000a90f
#undef str_1000a917
#undef str_1000a92f
#undef str_1000a936
#undef str_1000a9bb
#undef str_1000a9cf
#undef str_1000a9d6
#undef str_1000a9fa
#undef str_1000aa10
#undef str_1000aa19
#undef str_1000aa29
#undef str_1000aa3d
#undef str_1000aa55
#undef str_1000aa6d
#undef str_1000aa86
#undef str_1000aa97
#undef str_1000aaa7
#undef str_1000aab6
#undef str_1000aacc
#undef str_1000aae5
#undef str_1000aaef
#undef str_1000aafb
#undef str_1000ab28
#undef str_1000ab34
#undef str_1000ab53
#undef str_1000ab5b
#undef str_1000ab63
#undef str_1000ab95
#undef str_1000aba4
#undef str_1000abb2
#undef str_1000abbb
#undef str_1000abc4
#undef str_1000abcc
#undef local_2c
#undef local_25
#undef local_24
#undef local_18
#undef local_14
#undef cStack_595
#undef cStack_315
#undef cStack_95
#undef local_594
#undef local_314
#undef local_94
#undef local_34
#undef local_30

#undef DAT_1000a91f
#define DAT_1000a91f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x381U)))
#undef DAT_1000a920
#define DAT_1000a920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000a921
#define DAT_1000a921 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_1000a922
#define DAT_1000a922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_1000ad4f
#define DAT_1000ad4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b1U)))
#undef DAT_1000ad53
#define DAT_1000ad53 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7b5U)))
#undef DAT_1000ad5e
#define DAT_1000ad5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c0U)))
#undef DAT_1000ad63
#define DAT_1000ad63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c5U)))
#undef DAT_1000ad67
#define DAT_1000ad67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c9U)))
#undef DAT_1000ad8c
#define DAT_1000ad8c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7eeU)))
#undef DAT_1000ad91
#define DAT_1000ad91 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f3U)))
#undef DAT_1000ad96
#define DAT_1000ad96 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7f8U)))
#undef DAT_1000ad9a
#define DAT_1000ad9a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7fcU)))
#undef DAT_1000adae
#define DAT_1000adae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x810U)))
#undef DAT_1000adb3
#define DAT_1000adb3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x815U)))
#undef DAT_1000addf
#define DAT_1000addf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x841U)))
#undef DAT_1000adf4
#define DAT_1000adf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x856U)))
#undef DAT_1000ae67
#define DAT_1000ae67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8c9U)))
#undef str_1000a906
#define str_1000a906 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000a90f
#define str_1000a90f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000a917
#define str_1000a917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000a929
#define str_1000a929 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_1000a92f
#define str_1000a92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000a936
#define str_1000a936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
#undef str_1000a9cf
#define str_1000a9cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x431U)))
#undef str_1000ad19
#define str_1000ad19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x77bU)))
#undef str_1000ad34
#define str_1000ad34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x796U)))
#undef str_1000ad3c
#define str_1000ad3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79eU)))
#undef str_1000ad43
#define str_1000ad43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7a5U)))
#undef str_1000ad58
#define str_1000ad58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7baU)))
#undef str_1000ad6c
#define str_1000ad6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ceU)))
#undef str_1000ad75
#define str_1000ad75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d7U)))
#undef str_1000ad7b
#define str_1000ad7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7ddU)))
#undef str_1000ad83
#define str_1000ad83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e5U)))
#undef str_1000ad9f
#define str_1000ad9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x801U)))
#undef str_1000adb7
#define str_1000adb7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x819U)))
#undef str_1000adbd
#define str_1000adbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81fU)))
#undef str_1000adc8
#define str_1000adc8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82aU)))
#undef str_1000adcf
#define str_1000adcf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x831U)))
#undef str_1000add5
#define str_1000add5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x837U)))
#undef str_1000ade3
#define str_1000ade3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x845U)))
#undef str_1000adfa
#define str_1000adfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85cU)))
#undef str_1000ae11
#define str_1000ae11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x873U)))
#undef str_1000ae1c
#define str_1000ae1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x87eU)))
#undef str_1000ae2b
#define str_1000ae2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88dU)))
#undef str_1000ae34
#define str_1000ae34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x896U)))
#undef str_1000ae3d
#define str_1000ae3d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x89fU)))
#undef str_1000ae53
#define str_1000ae53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8b5U)))
#undef str_1000ae5a
#define str_1000ae5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bcU)))
#undef str_1000ae6b
#define str_1000ae6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8cdU)))
#undef str_1000ae75
#define str_1000ae75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d7U)))
#undef str_1000ae81
#define str_1000ae81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e3U)))
#define acStack_19d (*(char (*)[385])(frame + 323))
#define local_2c8 (*(byte (*)[256])(frame + 24))
#define local_1c8 (*(undefined1 (*)[8])(frame + 280))
#define local_1c0 (*(uint *)(frame + 288))
#define local_1bc (*(uint *)(frame + 292))
#define local_1b8 (*(uint *)(frame + 296))
#define local_1b4 (*(uint *)(frame + 300))
#define local_1b0 (*(uint *)(frame + 304))
#define local_1ac (*(uint *)(frame + 308))
#define local_1c (*(uint *)(frame + 708))
#define local_18 (*(uint *)(frame + 712))
#define local_14 (*(byte * *)(frame + 716))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007480
 */

undefined4 recovered_10007480(int *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  undefined3 extraout_var_08 = 0;
  undefined3 extraout_var_09 = 0;
  undefined3 extraout_var_10 = 0;
  uint uVar6;
  undefined3 extraout_var_11 = 0;
  undefined3 extraout_var_12 = 0;
  undefined3 extraout_var_13 = 0;
  undefined3 extraout_var_14 = 0;
  undefined3 extraout_var_15 = 0;
  undefined3 extraout_var_16 = 0;
  undefined3 extraout_var_17 = 0;
  undefined3 extraout_var_18 = 0;
  undefined3 extraout_var_19 = 0;
  undefined3 extraout_var_20 = 0;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  int iVar15;

  bVar2 = recovered_10009380((int)param_2,str_1000ad34);
  if ((CONCAT31(extraout_var,bVar2) == 0) &&
     (bVar2 = recovered_10009380((int)param_2,str_1000ad3c), CONCAT31(extraout_var_00,bVar2) == 0))
  {
    local_14 = (byte *)str_1000a906;
    bVar2 = recovered_10009380((int)param_2,str_1000ad43);
    if ((CONCAT31(extraout_var_01,bVar2) == 0) &&
       (bVar2 = recovered_10009380((int)param_2,&DAT_1000ad4f), CONCAT31(extraout_var_02,bVar2) == 0
       )) {
      bVar2 = recovered_10009380((int)param_2,&DAT_1000ad53);
      local_14 = (byte *)str_1000a90f;
      if ((CONCAT31(extraout_var_03,bVar2) == 0) &&
         (bVar2 = recovered_10009380((int)param_2,str_1000ad58),
         CONCAT31(extraout_var_04,bVar2) == 0)) {
        bVar2 = recovered_10009380((int)param_2,str_1000a90f);
        if ((CONCAT31(extraout_var_05,bVar2) == 0) &&
           (bVar2 = recovered_10009380((int)param_2,&DAT_1000ad5e),
           CONCAT31(extraout_var_06,bVar2) == 0)) {
          local_14 = (byte *)str_1000a90f;
          bVar2 = recovered_10009380((int)param_2,&DAT_1000ad63);
          if ((CONCAT31(extraout_var_07,bVar2) == 0) &&
             (bVar2 = recovered_10009380((int)param_2,&DAT_1000ad67),
             CONCAT31(extraout_var_08,bVar2) == 0)) {
            bVar2 = recovered_10009380((int)param_2,str_1000ad6c);
            local_14 = (byte *)str_1000a929;
            if ((CONCAT31(extraout_var_09,bVar2) == 0) &&
               ((bVar2 = recovered_10009380((int)param_2,str_1000ad75),
                CONCAT31(extraout_var_10,bVar2) == 0 &&
                (bVar2 = recovered_10009380((int)param_2,str_1000ad7b),
                CONCAT31(extraout_var_11,bVar2) == 0)))) {
              local_14 = (byte *)str_1000a929;
              bVar2 = recovered_10009380((int)param_2,str_1000a929);
              if (CONCAT31(extraout_var_12,bVar2) == 0) {
                local_14 = &DAT_1000a91f;
                bVar2 = recovered_10009380((int)param_2,&DAT_1000a91f);
                if (CONCAT31(extraout_var_13,bVar2) == 0) {
                  bVar2 = recovered_10009380((int)param_2,str_1000ad83);
                  local_14 = (byte *)str_1000a917;
                  if (CONCAT31(extraout_var_14,bVar2) == 0) {
                    local_14 = (byte *)str_1000a917;
                    bVar2 = recovered_10009380((int)param_2,str_1000a917);
                    if ((CONCAT31(extraout_var_15,bVar2) == 0) &&
                       (bVar2 = recovered_10009380((int)param_2,&DAT_1000ad8c),
                       CONCAT31(extraout_var_16,bVar2) == 0)) {
                      local_14 = (byte *)str_1000a936;
                      bVar2 = recovered_10009380((int)param_2,str_1000a936);
                      if ((CONCAT31(extraout_var_17,bVar2) == 0) &&
                         (bVar2 = recovered_10009380((int)param_2,&DAT_1000ad91),
                         CONCAT31(extraout_var_18,bVar2) == 0)) {
                        bVar2 = recovered_10009380((int)param_2,&DAT_1000ad96);
                        local_14 = (byte *)str_1000a92f;
                        if (CONCAT31(extraout_var_19,bVar2) == 0) {
                          bVar2 = recovered_10009380((int)param_2,&DAT_1000ad9a);
                          local_14 = (byte *)CONCAT31(extraout_var_20,bVar2);
                          if (local_14 != (byte *)0x0) {
                            local_14 = (byte *)str_1000a92f;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_14 = (byte *)str_1000a90f;
        }
      }
    }
  }
  else {
    local_14 = (byte *)str_1000a906;
  }
  if (param_2 == (uint *)0x0 || param_4 == 0) {
    return 0;
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  if (local_14 == (byte *)0x0) {
    return 0;
  }
  recovered_10009640(param_4,local_14);
  local_2c8[0] = 0;
  uVar6 = 0;
  do {
    uVar4 = uVar6;
    uVar6 = uVar4 + 1;
  } while (local_2c8[uVar4] != 0);
  if (uVar4 + 1 < 0x100) {
    bVar14 = 0x2f;
    pcVar7 = str_1000ad19;
    do {
      pcVar7 = pcVar7 + 1;
      local_2c8[uVar4] = bVar14;
      uVar4 = uVar4 + 1;
      bVar14 = *pcVar7;
      if (bVar14 == 0) break;
    } while (uVar4 < 0xff);
  }
  local_2c8[uVar4] = 0;
  uVar6 = param_2[9];
  local_18 = (uint)(byte)uVar6;
  if (local_18 == 0x2f) {
LAB_100076a7:
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (local_2c8[uVar5] != 0);
    if (uVar5 + 1 < 0x100 && (byte)uVar6 != 0) {
      pbVar8 = (byte *)((int)param_2 + 0x25);
      uVar6 = local_18;
      do {
        local_2c8[uVar5] = (byte)uVar6;
        uVar5 = uVar5 + 1;
        uVar6 = (uint)*pbVar8;
        if (*pbVar8 == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar5 < 0xff);
    }
    local_2c8[uVar5] = 0;
  }
  else {
    if (local_18 != 0) {
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (local_2c8[uVar5] != 0);
      if (uVar4 < 0x100) {
        local_2c8[uVar5] = 0x2f;
        uVar5 = uVar4;
      }
      local_2c8[uVar5] = 0;
      goto LAB_100076a7;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (local_2c8[uVar4] != 0);
    if (uVar4 + 1 < 0x100) {
      bVar14 = 0x2f;
      pbVar8 = &DAT_1000adf4;
      do {
        local_2c8[uVar4] = bVar14;
        uVar4 = uVar4 + 1;
        bVar14 = *pbVar8;
        if (bVar14 == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar4 < 0xff);
    }
    local_2c8[uVar4] = 0;
    uVar6 = *param_2;
    iVar15 = 8;
    do {
      uVar5 = uVar6 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar5;
      bVar12 = bVar14 + 0x37;
      uVar4 = 0;
      do {
        uVar9 = uVar4;
        uVar4 = uVar9 + 1;
      } while (local_2c8[uVar9] != 0);
      if (uVar9 + 1 < 0x100) {
        if (uVar5 < 10) {
          bVar12 = bVar14 | 0x30;
        }
        local_2c8[uVar9] = bVar12;
        local_2c8[uVar9 + 1] = 0;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  acStack_19d[1] = 0;
  uVar6 = 0;
  do {
    uVar4 = uVar6;
    uVar6 = uVar4 + 1;
  } while (acStack_19d[uVar4 + 1] != '\0');
  if (uVar4 + 1 < 0x180) {
    cVar13 = 'f';
    pcVar7 = str_1000ad9f;
    do {
      pcVar7 = pcVar7 + 1;
      acStack_19d[uVar4 + 1] = cVar13;
      uVar4 = uVar4 + 1;
      cVar13 = *pcVar7;
      if (cVar13 == '\0') break;
    } while (uVar4 < 0x17f);
  }
  acStack_19d[uVar4 + 1] = '\0';
  uVar6 = *param_2;
  iVar15 = 8;
  do {
    uVar5 = uVar6 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
    bVar14 = (byte)uVar5;
    bVar12 = bVar14 + 0x37;
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      if (uVar5 < 10) {
        bVar12 = bVar14 | 0x30;
      }
      acStack_19d[uVar9 + 1] = bVar12;
      acStack_19d[uVar9 + 2] = '\0';
    }
    uVar4 = local_18;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  if ((char)local_18 != '\0') {
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      cVar13 = 'p';
      pcVar7 = &DAT_1000adae;
      do {
        acStack_19d[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      pbVar8 = (byte *)((int)param_2 + 0x25);
      do {
        acStack_19d[uVar9 + 1] = (char)uVar4;
        uVar9 = uVar9 + 1;
        uVar4 = (uint)*pbVar8;
        if (*pbVar8 == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
  }
  bVar14 = (byte)param_2[0x41];
  uVar4 = (uint)bVar14;
  if (bVar14 != 0) {
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      uVar4 = (uint)CONCAT11(0x74,bVar14);
      pcVar7 = &DAT_1000adb3;
      do {
        acStack_19d[uVar9 + 1] = (char)(uVar4 >> 8);
        uVar9 = uVar9 + 1;
        uVar4 = (uint)CONCAT11(*pcVar7,(char)uVar4);
        if (*pcVar7 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      pbVar8 = (byte *)((int)param_2 + 0x105);
      do {
        acStack_19d[uVar9 + 1] = (char)uVar4;
        uVar9 = uVar9 + 1;
        uVar4 = (uint)*pbVar8;
        if (*pbVar8 == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
  }
  bVar14 = (byte)param_2[0x51];
  uVar4 = (uint)bVar14;
  if (bVar14 != 0) {
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      uVar4 = (uint)CONCAT11(0x6d,bVar14);
      pcVar7 = str_1000adb7;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar9 + 1] = (char)(uVar4 >> 8);
        uVar9 = uVar9 + 1;
        uVar4 = (uint)CONCAT11(*pcVar7,(char)uVar4);
        if (*pcVar7 == '\0') break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      pbVar8 = (byte *)((int)param_2 + 0x145);
      do {
        acStack_19d[uVar9 + 1] = (char)uVar4;
        uVar9 = uVar9 + 1;
        uVar4 = (uint)*pbVar8;
        if (*pbVar8 == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
  }
  bVar14 = (byte)param_2[0x69];
  uVar4 = (uint)bVar14;
  if (bVar14 != 0) {
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      uVar4 = (uint)CONCAT11(99,bVar14);
      pcVar7 = str_1000adbd;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar9 + 1] = (char)(uVar4 >> 8);
        uVar9 = uVar9 + 1;
        uVar4 = (uint)CONCAT11(*pcVar7,(char)uVar4);
        if (*pcVar7 == '\0') break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      pbVar8 = (byte *)((int)param_2 + 0x1a5);
      do {
        acStack_19d[uVar9 + 1] = (char)uVar4;
        uVar9 = uVar9 + 1;
        uVar4 = (uint)*pbVar8;
        if (*pbVar8 == 0) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
  }
  if ((param_2[4] & 0x10) != 0) {
    uVar5 = param_2[5];
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      cVar13 = 'v';
      pcVar7 = str_1000adc8;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar9 = uVar5 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar9;
      bVar12 = bVar14 + 0x37;
      uVar4 = 0;
      do {
        uVar10 = uVar4;
        uVar4 = uVar10 + 1;
      } while (acStack_19d[uVar10 + 1] != '\0');
      if (uVar10 + 1 < 0x180) {
        if (uVar9 < 10) {
          bVar12 = bVar14 | 0x30;
        }
        acStack_19d[uVar10 + 1] = bVar12;
        acStack_19d[uVar10 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar5 = param_2[6];
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      cVar13 = 'd';
      pcVar7 = str_1000a9cf;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar9 = uVar5 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar9;
      bVar12 = bVar14 + 0x37;
      uVar4 = 0;
      do {
        uVar10 = uVar4;
        uVar4 = uVar10 + 1;
      } while (acStack_19d[uVar10 + 1] != '\0');
      if (uVar10 + 1 < 0x180) {
        if (uVar9 < 10) {
          bVar12 = bVar14 | 0x30;
        }
        acStack_19d[uVar10 + 1] = bVar12;
        acStack_19d[uVar10 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar5 = param_2[7];
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      cVar13 = 'c';
      pcVar7 = str_1000adcf;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar9 = uVar5 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar9;
      bVar12 = bVar14 + 0x37;
      uVar4 = 0;
      do {
        uVar10 = uVar4;
        uVar4 = uVar10 + 1;
      } while (acStack_19d[uVar10 + 1] != '\0');
      if (uVar10 + 1 < 0x180) {
        if (uVar9 < 10) {
          bVar12 = bVar14 | 0x30;
        }
        acStack_19d[uVar10 + 1] = bVar12;
        acStack_19d[uVar10 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar5 = param_2[8];
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      cVar13 = 'r';
      pcVar7 = str_1000add5;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar4 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar4;
    }
    acStack_19d[uVar9 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar9 = uVar5 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar9;
      bVar12 = bVar14 + 0x37;
      uVar4 = 0;
      do {
        uVar10 = uVar4;
        uVar4 = uVar10 + 1;
      } while (acStack_19d[uVar10 + 1] != '\0');
      if (uVar10 + 1 < 0x180) {
        if (uVar9 < 10) {
          bVar12 = bVar14 | 0x30;
        }
        acStack_19d[uVar10 + 1] = bVar12;
        acStack_19d[uVar10 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  bVar14 = *local_14;
  uVar4 = (uint)bVar14;
  if (bVar14 != 0) {
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = ' ';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      uVar4 = (uint)CONCAT11(0x72,bVar14);
      pcVar7 = &DAT_1000addf;
      do {
        acStack_19d[uVar9 + 1] = (char)(uVar4 >> 8);
        uVar9 = uVar9 + 1;
        uVar4 = (uint)CONCAT11(*pcVar7,(char)uVar4);
        if (*pcVar7 == '\0') break;
        pcVar7 = pcVar7 + 1;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar5 < 0x180) {
      acStack_19d[uVar9 + 1] = '=';
      uVar9 = uVar5;
    }
    acStack_19d[uVar9 + 1] = '\0';
    uVar5 = 0;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 + 1;
    } while (acStack_19d[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x180) {
      pbVar8 = local_14;
      do {
        pbVar8 = pbVar8 + 1;
        acStack_19d[uVar9 + 1] = (char)uVar4;
        uVar9 = uVar9 + 1;
        uVar4 = (uint)*pbVar8;
        if (*pbVar8 == 0) break;
      } while (uVar9 < 0x17f);
    }
    acStack_19d[uVar9 + 1] = '\0';
  }
  local_1c = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0xa0)) ||
     (((code *)param_1[0x27] == (code *)0x0 ||
      (iVar15 = (*(code *)param_1[0x27])(uVar6,0,local_1c8), iVar15 == 0)))) {
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar4 + 1 < 0x180) {
      cVar13 = ' ';
      pcVar7 = str_1000adfa;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar4 + 1] = cVar13;
        uVar4 = uVar4 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar4 < 0x17f);
    }
  }
  else {
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = ' ';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar4 + 1 < 0x180) {
      cVar13 = 'r';
      pcVar7 = str_1000ae11;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar4 + 1] = cVar13;
        uVar4 = uVar4 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar4 < 0x17f);
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = '=';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar4 = local_1bc >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar4;
      bVar14 = bVar12 + 0x37;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_19d[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x180) {
        if (uVar4 < 10) {
          bVar14 = bVar12 | 0x30;
        }
        acStack_19d[uVar5 + 1] = bVar14;
        acStack_19d[uVar5 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = ' ';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar4 + 1 < 0x180) {
      cVar13 = 'r';
      pcVar7 = str_1000ae1c;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar4 + 1] = cVar13;
        uVar4 = uVar4 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar4 < 0x17f);
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = '=';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar4 = local_1b8 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar4;
      bVar14 = bVar12 + 0x37;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_19d[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x180) {
        if (uVar4 < 10) {
          bVar14 = bVar12 | 0x30;
        }
        acStack_19d[uVar5 + 1] = bVar14;
        acStack_19d[uVar5 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = ' ';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar4 + 1 < 0x180) {
      cVar13 = 'r';
      pcVar7 = str_1000ae2b;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar4 + 1] = cVar13;
        uVar4 = uVar4 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar4 < 0x17f);
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = '=';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar4 = local_1b4 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar12 = (byte)uVar4;
      bVar14 = bVar12 + 0x37;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_19d[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x180) {
        if (uVar4 < 10) {
          bVar14 = bVar12 | 0x30;
        }
        acStack_19d[uVar5 + 1] = bVar14;
        acStack_19d[uVar5 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = ' ';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar4 + 1 < 0x180) {
      cVar13 = 'r';
      pcVar7 = str_1000ae34;
      do {
        pcVar7 = pcVar7 + 1;
        acStack_19d[uVar4 + 1] = cVar13;
        uVar4 = uVar4 + 1;
        cVar13 = *pcVar7;
        if (cVar13 == '\0') break;
      } while (uVar4 < 0x17f);
    }
    acStack_19d[uVar4 + 1] = '\0';
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (acStack_19d[uVar4 + 1] != '\0');
    if (uVar6 < 0x180) {
      acStack_19d[uVar4 + 1] = '=';
      uVar4 = uVar6;
    }
    acStack_19d[uVar4 + 1] = '\0';
    iVar15 = 8;
    do {
      uVar4 = local_1c0 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
      bVar14 = (byte)uVar4;
      bVar12 = bVar14 + 0x37;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar6 = uVar5 + 1;
      } while (acStack_19d[uVar5 + 1] != '\0');
      if (uVar5 + 1 < 0x180) {
        if (uVar4 < 10) {
          bVar12 = bVar14 | 0x30;
        }
        acStack_19d[uVar5 + 1] = bVar12;
        acStack_19d[uVar5 + 2] = '\0';
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if ((local_1c0 & 0x20) == 0) {
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar4 + 1 < 0x180) {
        cVar13 = ' ';
        pcVar7 = str_1000ae3d;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_19d[uVar4 + 1] = cVar13;
          uVar4 = uVar4 + 1;
          cVar13 = *pcVar7;
          if (cVar13 == '\0') break;
        } while (uVar4 < 0x17f);
      }
    }
    else {
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar6 < 0x180) {
        acStack_19d[uVar4 + 1] = ' ';
        uVar4 = uVar6;
      }
      acStack_19d[uVar4 + 1] = '\0';
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar4 + 1 < 0x180) {
        cVar13 = 'm';
        pcVar7 = str_1000ae53;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_19d[uVar4 + 1] = cVar13;
          uVar4 = uVar4 + 1;
          cVar13 = *pcVar7;
          if (cVar13 == '\0') break;
        } while (uVar4 < 0x17f);
      }
      acStack_19d[uVar4 + 1] = '\0';
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar6 < 0x180) {
        acStack_19d[uVar4 + 1] = '=';
        uVar4 = uVar6;
      }
      acStack_19d[uVar4 + 1] = '\0';
      iVar15 = 8;
      do {
        uVar4 = local_1b0 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
        bVar12 = (byte)uVar4;
        bVar14 = bVar12 + 0x37;
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (acStack_19d[uVar5 + 1] != '\0');
        if (uVar5 + 1 < 0x180) {
          if (uVar4 < 10) {
            bVar14 = bVar12 | 0x30;
          }
          acStack_19d[uVar5 + 1] = bVar14;
          acStack_19d[uVar5 + 2] = '\0';
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar6 < 0x180) {
        acStack_19d[uVar4 + 1] = ' ';
        uVar4 = uVar6;
      }
      acStack_19d[uVar4 + 1] = '\0';
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar4 + 1 < 0x180) {
        cVar13 = 'm';
        pcVar7 = str_1000ae5a;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_19d[uVar4 + 1] = cVar13;
          uVar4 = uVar4 + 1;
          cVar13 = *pcVar7;
          if (cVar13 == '\0') break;
        } while (uVar4 < 0x17f);
      }
      acStack_19d[uVar4 + 1] = '\0';
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar6 < 0x180) {
        acStack_19d[uVar4 + 1] = '=';
        uVar4 = uVar6;
      }
      acStack_19d[uVar4 + 1] = '\0';
      iVar15 = 8;
      do {
        uVar4 = local_1ac >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
        bVar14 = (byte)uVar4;
        bVar12 = bVar14 + 0x37;
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (acStack_19d[uVar5 + 1] != '\0');
        if (uVar5 + 1 < 0x180) {
          if (uVar4 < 10) {
            bVar12 = bVar14 | 0x30;
          }
          acStack_19d[uVar5 + 1] = bVar12;
          acStack_19d[uVar5 + 2] = '\0';
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (((3 < local_1ac) && (*param_1 == 0x54584b57)) &&
         ((0x6b < (uint)param_1[2] && ((code *)param_1[0x1a] != (code *)0x0)))) {
        iVar15 = (*(code *)param_1[0x1a])(local_1b0,4,&local_1c);
        uVar6 = local_1c;
        if (iVar15 != 0) {
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
          } while (acStack_19d[uVar5 + 1] != '\0');
          if (uVar4 < 0x180) {
            acStack_19d[uVar5 + 1] = ' ';
            uVar5 = uVar4;
          }
          acStack_19d[uVar5 + 1] = '\0';
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
          } while (acStack_19d[uVar5 + 1] != '\0');
          if (uVar5 + 1 < 0x180) {
            cVar13 = 'r';
            pcVar7 = &DAT_1000ae67;
            do {
              acStack_19d[uVar5 + 1] = cVar13;
              uVar5 = uVar5 + 1;
              cVar13 = *pcVar7;
              if (cVar13 == '\0') break;
              pcVar7 = pcVar7 + 1;
            } while (uVar5 < 0x17f);
          }
          acStack_19d[uVar5 + 1] = '\0';
          uVar4 = 0;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
          } while (acStack_19d[uVar5 + 1] != '\0');
          if (uVar4 < 0x180) {
            acStack_19d[uVar5 + 1] = '=';
            uVar5 = uVar4;
          }
          acStack_19d[uVar5 + 1] = '\0';
          iVar15 = 8;
          do {
            uVar5 = uVar6 >> ((char)iVar15 * '\x04' - 4U & 0x1f) & 0xf;
            bVar14 = (byte)uVar5;
            bVar12 = bVar14 + 0x37;
            uVar4 = 0;
            do {
              uVar9 = uVar4;
              uVar4 = uVar9 + 1;
            } while (acStack_19d[uVar9 + 1] != '\0');
            if (uVar9 + 1 < 0x180) {
              if (uVar5 < 10) {
                bVar12 = bVar14 | 0x30;
              }
              acStack_19d[uVar9 + 1] = bVar12;
              acStack_19d[uVar9 + 2] = '\0';
            }
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
      }
      pbVar8 = local_14;
      uVar6 = (uint)*local_14;
      if (*local_14 != 0) {
        pbVar11 = local_14 + 3;
        uVar4 = uVar6;
        do {
          uVar3 = (undefined1)uVar6;
          cVar13 = (char)uVar4;
          uVar6 = (uint)CONCAT11(cVar13 + 0xbfU,uVar3);
          if ((byte)(cVar13 + 0xbfU) < 0x1a) {
            cVar13 = cVar13 + ' ';
          }
          bVar14 = pbVar11[-2];
          uVar4 = (uint)bVar14;
          if (cVar13 == 'u') {
            if (bVar14 == 0) {
              pcVar7 = &DAT_1000a920;
            }
            else {
              bVar12 = bVar14;
              if ((byte)(bVar14 + 0xbf) < 0x1a) {
                bVar12 = bVar14 + 0x20;
              }
              uVar6 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 != 0x73) goto LAB_10008a75;
              bVar12 = pbVar11[-1];
              uVar6 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 == 0) {
                pcVar7 = &DAT_1000a921;
              }
              else {
                uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                if ((byte)(bVar12 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                }
                if ((char)(uVar6 >> 8) != 'b') goto LAB_10008a75;
                pcVar7 = &DAT_1000a922;
                if (*pbVar11 != 0) goto LAB_10008eb3;
              }
            }
            if (*pcVar7 == '\0') goto LAB_10008eb3;
          }
LAB_10008a75:
          pbVar11 = pbVar11 + 1;
        } while ((char)uVar4 != '\0');
        pbVar11 = local_14 + 7;
        uVar4 = uVar6;
        do {
          uVar3 = (undefined1)uVar6;
          cVar13 = (char)uVar4;
          uVar6 = (uint)CONCAT11(cVar13 + 0xbfU,uVar3);
          if ((byte)(cVar13 + 0xbfU) < 0x1a) {
            cVar13 = cVar13 + ' ';
          }
          bVar14 = pbVar11[-6];
          uVar4 = (uint)bVar14;
          if (cVar13 == 's') {
            if (bVar14 == 0) {
              pcVar7 = str_1000a90f + 1;
            }
            else {
              bVar12 = bVar14;
              if ((byte)(bVar14 + 0xbf) < 0x1a) {
                bVar12 = bVar14 + 0x20;
              }
              uVar6 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 != 0x74) goto LAB_10008af0;
              bVar12 = pbVar11[-5];
              uVar6 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 == 0) {
                pcVar7 = str_1000a90f + 2;
              }
              else {
                uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                if ((byte)(bVar12 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                }
                if ((char)(uVar6 >> 8) != 'o') goto LAB_10008af0;
                bVar12 = pbVar11[-4];
                uVar3 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar12,uVar3);
                if (bVar12 == 0) {
                  pcVar7 = str_1000a90f + 3;
                }
                else {
                  uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                  if ((byte)(bVar12 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                  }
                  if ((char)(uVar6 >> 8) != 'r') goto LAB_10008af0;
                  bVar12 = pbVar11[-3];
                  uVar3 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar12,uVar3);
                  if (bVar12 == 0) {
                    pcVar7 = str_1000a90f + 4;
                  }
                  else {
                    uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                    if ((byte)(bVar12 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                    }
                    if ((char)(uVar6 >> 8) != 'a') goto LAB_10008af0;
                    bVar12 = pbVar11[-2];
                    uVar3 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar12,uVar3);
                    if (bVar12 == 0) {
                      pcVar7 = str_1000a90f + 5;
                    }
                    else {
                      uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                      if ((byte)(bVar12 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                      }
                      if ((char)(uVar6 >> 8) != 'g') goto LAB_10008af0;
                      bVar12 = pbVar11[-1];
                      uVar3 = (undefined1)uVar6;
                      uVar6 = (uint)CONCAT11(bVar12,uVar3);
                      if (bVar12 == 0) {
                        pcVar7 = str_1000a90f + 6;
                      }
                      else {
                        uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                        if ((byte)(bVar12 + 0xbf) < 0x1a) {
                          uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                        }
                        if ((char)(uVar6 >> 8) != 'e') goto LAB_10008af0;
                        pcVar7 = str_1000a90f + 7;
                        if (*pbVar11 != 0) goto LAB_10008eb3;
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar7 == '\0') goto LAB_10008eb3;
          }
LAB_10008af0:
          pbVar11 = pbVar11 + 1;
        } while ((char)uVar4 != '\0');
        pbVar11 = local_14 + 7;
        uVar4 = uVar6;
        do {
          uVar3 = (undefined1)uVar6;
          cVar13 = (char)uVar4;
          uVar6 = (uint)CONCAT11(cVar13 + 0xbfU,uVar3);
          if ((byte)(cVar13 + 0xbfU) < 0x1a) {
            cVar13 = cVar13 + ' ';
          }
          bVar14 = pbVar11[-6];
          uVar4 = (uint)bVar14;
          if (cVar13 == 'n') {
            if (bVar14 == 0) {
              pcVar7 = str_1000a917 + 1;
            }
            else {
              bVar12 = bVar14;
              if ((byte)(bVar14 + 0xbf) < 0x1a) {
                bVar12 = bVar14 + 0x20;
              }
              uVar6 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 != 0x65) goto LAB_10008c1c;
              bVar12 = pbVar11[-5];
              uVar6 = (uint)CONCAT11(bVar12,uVar3);
              if (bVar12 == 0) {
                pcVar7 = str_1000a917 + 2;
              }
              else {
                uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                if ((byte)(bVar12 + 0xbf) < 0x1a) {
                  uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                }
                if ((char)(uVar6 >> 8) != 't') goto LAB_10008c1c;
                bVar12 = pbVar11[-4];
                uVar3 = (undefined1)uVar6;
                uVar6 = (uint)CONCAT11(bVar12,uVar3);
                if (bVar12 == 0) {
                  pcVar7 = str_1000a917 + 3;
                }
                else {
                  uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                  if ((byte)(bVar12 + 0xbf) < 0x1a) {
                    uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                  }
                  if ((char)(uVar6 >> 8) != 'w') goto LAB_10008c1c;
                  bVar12 = pbVar11[-3];
                  uVar3 = (undefined1)uVar6;
                  uVar6 = (uint)CONCAT11(bVar12,uVar3);
                  if (bVar12 == 0) {
                    pcVar7 = str_1000a917 + 4;
                  }
                  else {
                    uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                    if ((byte)(bVar12 + 0xbf) < 0x1a) {
                      uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                    }
                    if ((char)(uVar6 >> 8) != 'o') goto LAB_10008c1c;
                    bVar12 = pbVar11[-2];
                    uVar3 = (undefined1)uVar6;
                    uVar6 = (uint)CONCAT11(bVar12,uVar3);
                    if (bVar12 == 0) {
                      pcVar7 = str_1000a917 + 5;
                    }
                    else {
                      uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                      if ((byte)(bVar12 + 0xbf) < 0x1a) {
                        uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                      }
                      if ((char)(uVar6 >> 8) != 'r') goto LAB_10008c1c;
                      bVar12 = pbVar11[-1];
                      uVar3 = (undefined1)uVar6;
                      uVar6 = (uint)CONCAT11(bVar12,uVar3);
                      if (bVar12 == 0) {
                        pcVar7 = str_1000a917 + 6;
                      }
                      else {
                        uVar4 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                        if ((byte)(bVar12 + 0xbf) < 0x1a) {
                          uVar6 = (uint)CONCAT11(bVar12 + 0x20,uVar3);
                        }
                        if ((char)(uVar6 >> 8) != 'k') goto LAB_10008c1c;
                        pcVar7 = str_1000a917 + 7;
                        if (*pbVar11 != 0) goto LAB_10008eb3;
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar7 == '\0') goto LAB_10008eb3;
          }
LAB_10008c1c:
          pbVar11 = pbVar11 + 1;
        } while ((char)uVar4 != '\0');
        pbVar11 = local_14 + 8;
        do {
          cVar13 = (char)uVar6;
          if ((byte)(cVar13 + 0xbfU) < 0x1a) {
            cVar13 = cVar13 + ' ';
          }
          bVar14 = pbVar11[-7];
          uVar6 = (uint)bVar14;
          if (cVar13 == 'g') {
            if (bVar14 == 0) {
              pcVar7 = str_1000a906 + 1;
            }
            else {
              if ((byte)(bVar14 + 0xbf) < 0x1a) {
                bVar12 = bVar14 + 0x20;
              }
              else {
                bVar12 = bVar14;
              }
              if (bVar12 != 0x72) goto LAB_10008d46;
              bVar12 = pbVar11[-6];
              if (bVar12 == 0) {
                pcVar7 = str_1000a906 + 2;
              }
              else {
                uVar6 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                if ((byte)(bVar12 + 0xbf) < 0x1a) {
                  bVar12 = bVar12 + 0x20;
                }
                if (bVar12 != 0x61) goto LAB_10008d46;
                bVar12 = pbVar11[-5];
                if (bVar12 == 0) {
                  pcVar7 = str_1000a906 + 3;
                }
                else {
                  uVar6 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                  if ((byte)(bVar12 + 0xbf) < 0x1a) {
                    bVar12 = bVar12 + 0x20;
                  }
                  if (bVar12 != 0x70) goto LAB_10008d46;
                  bVar12 = pbVar11[-4];
                  if (bVar12 == 0) {
                    pcVar7 = str_1000a906 + 4;
                  }
                  else {
                    uVar6 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                    if ((byte)(bVar12 + 0xbf) < 0x1a) {
                      bVar12 = bVar12 + 0x20;
                    }
                    if (bVar12 != 0x68) goto LAB_10008d46;
                    bVar12 = pbVar11[-3];
                    if (bVar12 == 0) {
                      pcVar7 = str_1000a906 + 5;
                    }
                    else {
                      uVar6 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                      if ((byte)(bVar12 + 0xbf) < 0x1a) {
                        bVar12 = bVar12 + 0x20;
                      }
                      if (bVar12 != 0x69) goto LAB_10008d46;
                      bVar12 = pbVar11[-2];
                      if (bVar12 == 0) {
                        pcVar7 = str_1000a906 + 6;
                      }
                      else {
                        uVar6 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                        if ((byte)(bVar12 + 0xbf) < 0x1a) {
                          bVar12 = bVar12 + 0x20;
                        }
                        if (bVar12 != 99) goto LAB_10008d46;
                        bVar12 = pbVar11[-1];
                        if (bVar12 == 0) {
                          pcVar7 = str_1000a906 + 7;
                        }
                        else {
                          uVar6 = (uint)CONCAT11(bVar12 + 0xbf,bVar14);
                          if ((byte)(bVar12 + 0xbf) < 0x1a) {
                            bVar12 = bVar12 + 0x20;
                          }
                          if (bVar12 != 0x73) goto LAB_10008d46;
                          pcVar7 = str_1000a906 + 8;
                          if (*pbVar11 != 0) goto LAB_10008eb3;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar7 == '\0') goto LAB_10008eb3;
          }
LAB_10008d46:
          pbVar11 = pbVar11 + 1;
        } while ((char)uVar6 != '\0');
      }
      iVar15 = recovered_100095c0((char *)local_14,str_1000ae6b);
      if ((iVar15 != 0) || (iVar15 = recovered_100095c0((char *)pbVar8,str_1000ae75), iVar15 != 0))
      {
LAB_10008eb3:
        if ((*param_1 == 0x54584b57) &&
           ((0x7b < (uint)param_1[2] && ((code *)param_1[0x1e] != (code *)0x0)))) {
          (*(code *)param_1[0x1e])();
        }
      }
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        uVar6 = uVar4 + 1;
      } while (acStack_19d[uVar4 + 1] != '\0');
      if (uVar4 + 1 < 0x180) {
        cVar13 = ' ';
        pcVar7 = str_1000ae81;
        do {
          pcVar7 = pcVar7 + 1;
          acStack_19d[uVar4 + 1] = cVar13;
          uVar4 = uVar4 + 1;
          cVar13 = *pcVar7;
          if (cVar13 == '\0') break;
        } while (uVar4 < 0x17f);
      }
    }
  }
  acStack_19d[uVar4 + 1] = '\0';
  if ((char)param_2[0x31] == '\0') {
    pcVar7 = (char *)(param_2 + 0x41);
    if ((char)*(uint *)pcVar7 != '\0') goto LAB_10007e0d;
    pcVar7 = str_1000ade3;
    puVar1 = param_2 + 0x51;
    if ((char)param_2[0x51] == '\0') goto LAB_10007e0d;
  }
  else {
    puVar1 = param_2 + 0x31;
  }
  pcVar7 = (char *)puVar1;
LAB_10007e0d:
  if (((param_1 != (int *)0x0) && ((code *)param_1[3] != (code *)0x0)) &&
     (iVar15 = (*(code *)param_1[3])(local_2c8,pcVar7,acStack_19d + 1), iVar15 != 0)) {
    *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
  }
  return 1;
}

#undef DAT_1000a91f
#undef DAT_1000a920
#undef DAT_1000a921
#undef DAT_1000a922
#undef DAT_1000ad4f
#undef DAT_1000ad53
#undef DAT_1000ad5e
#undef DAT_1000ad63
#undef DAT_1000ad67
#undef DAT_1000ad8c
#undef DAT_1000ad91
#undef DAT_1000ad96
#undef DAT_1000ad9a
#undef DAT_1000adae
#undef DAT_1000adb3
#undef DAT_1000addf
#undef DAT_1000adf4
#undef DAT_1000ae67
#undef str_1000a906
#undef str_1000a90f
#undef str_1000a917
#undef str_1000a929
#undef str_1000a92f
#undef str_1000a936
#undef str_1000a9cf
#undef str_1000ad19
#undef str_1000ad34
#undef str_1000ad3c
#undef str_1000ad43
#undef str_1000ad58
#undef str_1000ad6c
#undef str_1000ad75
#undef str_1000ad7b
#undef str_1000ad83
#undef str_1000ad9f
#undef str_1000adb7
#undef str_1000adbd
#undef str_1000adc8
#undef str_1000adcf
#undef str_1000add5
#undef str_1000ade3
#undef str_1000adfa
#undef str_1000ae11
#undef str_1000ae1c
#undef str_1000ae2b
#undef str_1000ae34
#undef str_1000ae3d
#undef str_1000ae53
#undef str_1000ae5a
#undef str_1000ae6b
#undef str_1000ae75
#undef str_1000ae81
#undef acStack_19d
#undef local_2c8
#undef local_1c8
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_1c
#undef local_18
#undef local_14

#define local_30 (*(undefined4 *)(frame + 16))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 32))
#define local_1c (*(uint *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_14 (*(int * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009030
 */

undefined4
recovered_10009030(int *in_ECX,undefined1 in_DL,byte param_3,byte param_4,undefined1 *param_5)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;

  local_24 = 0;
  local_30 = 0;
  local_20 = 0;
  if (in_ECX == (int *)0x0 || param_5 == (undefined1 *)0x0) {
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
  local_1c = (uint)param_4;
  local_18 = (uint)param_3;
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
     (iVar1 = (*(code *)local_14[0x17])(in_DL,local_18,local_1c,4,4,param_5 + 0x10), iVar1 == 0)) {
    *(undefined4 *)(param_5 + 0x10) = 0;
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
  *param_5 = in_DL;
  param_5[1] = param_3;
  param_5[2] = param_4;
  *(uint *)(param_5 + 4) = local_24;
  *(ushort *)(param_5 + 10) = (ushort)local_30 << 8 | (ushort)local_30 >> 8;
  param_5[9] = (char)((uint)local_30 >> 0x10);
  param_5[8] = (char)((uint)local_30 >> 0x18);
  param_5[0xc] = (char)local_28;
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
    *(undefined4 *)(param_5 + iVar1 + 0x2c) = uVar2;
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

#define local_274 (*(int *)(frame + 28))
#define local_270 (*(int *)(frame + 32))
#define local_18 (*(int *)(frame + 632))
#define local_14 (*(int *)(frame + 636))
#define local_27c (*(undefined1 (*)[8])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009240
 */

int recovered_10009240(int *in_ECX,int in_EDX,int param_3,undefined *param_4,undefined4 param_5)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = 0;
  if (in_EDX != 0 && (param_3 != 0 && param_4 != (undefined *)0x0)) {
    local_14 = param_3 + -1;
    iVar2 = 0;
    while ((in_ECX != (int *)0x0 && (*in_ECX == 0x54584b57))) {
      if ((uint)in_ECX[2] < 0x9c) {
        if ((uint)in_ECX[2] < 0x8c) {
          return iVar2;
        }
LAB_10009350:
        if ((code *)in_ECX[0x22] == (code *)0x0) {
          return iVar2;
        }
        in_EDX = (*(code *)in_ECX[0x22])(in_EDX);
      }
      else {
        if ((code *)in_ECX[0x26] == (code *)0x0) goto LAB_10009350;
        local_18 = in_EDX;
        iVar1 = (*(code *)in_ECX[0x26])(in_EDX,local_27c);
        if (iVar1 == 0) {
          if (*in_ECX != 0x54584b57) {
            return iVar2;
          }
          in_EDX = local_18;
          if ((uint)in_ECX[2] < 0x8c) {
            return iVar2;
          }
          goto LAB_10009350;
        }
        iVar2 = iVar2 + 1;
        (*(code *)param_4)(in_ECX,local_27c,param_3,param_5);
        in_EDX = local_270;
        if (local_274 != 0) {
          iVar1 = recovered_10009240(in_ECX,local_274,local_14,param_4,param_5);
          iVar2 = iVar2 + iVar1;
          in_EDX = local_270;
        }
      }
      if (in_EDX == 0) {
        return iVar2;
      }
    }
  }
  return iVar2;
}

#undef local_274
#undef local_270
#undef local_18
#undef local_14
#undef local_27c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009380
 */

bool recovered_10009380(int in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;

  if (in_ECX == 0) {
    return false;
  }
  if ((in_EDX != (char *)0x0) && (*in_EDX != '\0')) {
    pcVar1 = (char *)(in_ECX + 0x24);
    cVar3 = *pcVar1;
    if (cVar3 != '\0') {
      iVar6 = in_ECX + 0x25;
      do {
        iVar5 = 0;
        do {
          cVar4 = in_EDX[iVar5];
          if (cVar4 == '\0') {
            return true;
          }
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          if (cVar3 != cVar4) goto LAB_10009407;
          cVar3 = *(char *)(iVar6 + iVar5);
          iVar5 = iVar5 + 1;
        } while (cVar3 != '\0');
        if (in_EDX[iVar5] == '\0') {
          return true;
        }
LAB_10009407:
        cVar3 = pcVar1[1];
        pcVar1 = pcVar1 + 1;
        iVar6 = iVar6 + 1;
      } while (cVar3 != '\0');
      if (*in_EDX == '\0') goto LAB_10009594;
    }
    cVar3 = *(char *)(in_ECX + 0xc4);
    if (cVar3 != '\0') {
      iVar6 = in_ECX + 0xc4;
      iVar5 = in_ECX + 0xc5;
      do {
        iVar2 = 0;
        do {
          cVar4 = in_EDX[iVar2];
          if (cVar4 == '\0') {
            return true;
          }
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          if (cVar3 != cVar4) goto LAB_10009487;
          cVar3 = *(char *)(iVar5 + iVar2);
          iVar2 = iVar2 + 1;
        } while (cVar3 != '\0');
        if (in_EDX[iVar2] == '\0') {
          return true;
        }
LAB_10009487:
        cVar3 = *(char *)(iVar6 + 1);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (cVar3 != '\0');
      if (*in_EDX == '\0') goto LAB_10009594;
    }
    cVar3 = *(char *)(in_ECX + 0x104);
    if (cVar3 != '\0') {
      iVar6 = in_ECX + 0x104;
      iVar5 = in_ECX + 0x105;
      do {
        iVar2 = 0;
        do {
          cVar4 = in_EDX[iVar2];
          if (cVar4 == '\0') {
            return true;
          }
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          if (cVar3 != cVar4) goto LAB_1000950f;
          cVar3 = *(char *)(iVar5 + iVar2);
          iVar2 = iVar2 + 1;
        } while (cVar3 != '\0');
        if (in_EDX[iVar2] == '\0') {
          return true;
        }
LAB_1000950f:
        cVar3 = *(char *)(iVar6 + 1);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (cVar3 != '\0');
      if (*in_EDX == '\0') goto LAB_10009594;
    }
    cVar3 = *(char *)(in_ECX + 0x144);
    if (cVar3 != '\0') {
      iVar6 = in_ECX + 0x144;
      iVar5 = in_ECX + 0x145;
      do {
        iVar2 = 0;
        do {
          cVar4 = in_EDX[iVar2];
          if (cVar4 == '\0') {
            return true;
          }
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar4 + 0xbfU) < 0x1a) {
            cVar4 = cVar4 + ' ';
          }
          if (cVar3 != cVar4) goto LAB_10009587;
          cVar3 = *(char *)(iVar5 + iVar2);
          iVar2 = iVar2 + 1;
        } while (cVar3 != '\0');
        if (in_EDX[iVar2] == '\0') {
          return true;
        }
LAB_10009587:
        cVar3 = *(char *)(iVar6 + 1);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (cVar3 != '\0');
    }
  }
LAB_10009594:
  iVar6 = recovered_100095c0((char *)(in_ECX + 0x1a4),in_EDX);
  return iVar6 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095c0
 */

undefined4 recovered_100095c0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;

  if ((in_EDX != (char *)0x0 && in_ECX != (char *)0x0) && (*in_EDX != '\0')) {
    cVar2 = *in_ECX;
    while (cVar2 != '\0') {
      iVar4 = 0;
      do {
        cVar3 = in_EDX[iVar4];
        if (cVar3 == '\0') {
          return 1;
        }
        if ((byte)(cVar2 + 0xbfU) < 0x1a) {
          cVar2 = cVar2 + ' ';
        }
        if ((byte)(cVar3 + 0xbfU) < 0x1a) {
          cVar3 = cVar3 + ' ';
        }
        if (cVar2 != cVar3) goto LAB_1000962a;
        cVar2 = in_ECX[iVar4 + 1];
        iVar4 = iVar4 + 1;
      } while (cVar2 != '\0');
      if (in_EDX[iVar4] == '\0') {
        return 1;
      }
LAB_1000962a:
      pcVar1 = in_ECX + 1;
      in_ECX = in_ECX + 1;
      cVar2 = *pcVar1;
    }
  }
  return 0;
}


#undef DAT_1000a920
#define DAT_1000a920 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000a921
#define DAT_1000a921 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_1000a922
#define DAT_1000a922 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_1000a923
#define DAT_1000a923 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x385U)))
#undef str_1000a906
#define str_1000a906 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000a90f
#define str_1000a90f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x371U)))
#undef str_1000a917
#define str_1000a917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
#undef str_1000a929
#define str_1000a929 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38bU)))
#undef str_1000a92f
#define str_1000a92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x391U)))
#undef str_1000a936
#define str_1000a936 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x398U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(int in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;

  if (in_EDX != (byte *)0x0) {
    uVar3 = (uint)*in_EDX;
    if (*in_EDX != 0) {
      pbVar5 = in_EDX + 8;
      uVar9 = uVar3;
      do {
        uVar2 = (undefined1)uVar3;
        cVar7 = (char)uVar9;
        uVar3 = (uint)CONCAT11(cVar7 + 0xbfU,uVar2);
        if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          cVar7 = cVar7 + ' ';
        }
        bVar1 = pbVar5[-7];
        uVar9 = (uint)bVar1;
        if (cVar7 == 'g') {
          if (bVar1 == 0) {
            pcVar10 = str_1000a906 + 1;
LAB_1000966c:
            if (*pcVar10 == '\0') {
LAB_10009ae5:
              iVar6 = 0x10;
              goto LAB_10009aff;
            }
          }
          else {
            bVar8 = bVar1;
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar8 = bVar1 + 0x20;
            }
            uVar3 = (uint)CONCAT11(bVar8,uVar2);
            if (bVar8 == 0x72) {
              bVar8 = pbVar5[-6];
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a906 + 2;
                goto LAB_1000966c;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'a') goto LAB_10009675;
              bVar8 = pbVar5[-5];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a906 + 3;
                goto LAB_1000966c;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'p') goto LAB_10009675;
              bVar8 = pbVar5[-4];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a906 + 4;
                goto LAB_1000966c;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'h') goto LAB_10009675;
              bVar8 = pbVar5[-3];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a906 + 5;
                goto LAB_1000966c;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'i') goto LAB_10009675;
              bVar8 = pbVar5[-2];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a906 + 6;
                goto LAB_1000966c;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'c') goto LAB_10009675;
              bVar8 = pbVar5[-1];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a906 + 7;
                goto LAB_1000966c;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 's') goto LAB_10009675;
              pcVar10 = str_1000a906 + 8;
              if (*pbVar5 == 0) goto LAB_1000966c;
              goto LAB_10009ae5;
            }
          }
        }
LAB_10009675:
        pbVar5 = pbVar5 + 1;
      } while ((char)uVar9 != '\0');
      pbVar5 = in_EDX + 7;
      uVar9 = uVar3;
      do {
        uVar2 = (undefined1)uVar3;
        cVar7 = (char)uVar9;
        uVar3 = (uint)CONCAT11(cVar7 + 0xbfU,uVar2);
        if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          cVar7 = cVar7 + ' ';
        }
        bVar1 = pbVar5[-6];
        uVar9 = (uint)bVar1;
        if (cVar7 == 's') {
          if (bVar1 == 0) {
            pcVar10 = str_1000a90f + 1;
LAB_100097c6:
            if (*pcVar10 == '\0') {
LAB_10009aec:
              iVar6 = 0x14;
              goto LAB_10009aff;
            }
          }
          else {
            bVar8 = bVar1;
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar8 = bVar1 + 0x20;
            }
            uVar3 = (uint)CONCAT11(bVar8,uVar2);
            if (bVar8 == 0x74) {
              bVar8 = pbVar5[-5];
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a90f + 2;
                goto LAB_100097c6;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'o') goto LAB_100097cf;
              bVar8 = pbVar5[-4];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a90f + 3;
                goto LAB_100097c6;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'r') goto LAB_100097cf;
              bVar8 = pbVar5[-3];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a90f + 4;
                goto LAB_100097c6;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'a') goto LAB_100097cf;
              bVar8 = pbVar5[-2];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a90f + 5;
                goto LAB_100097c6;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'g') goto LAB_100097cf;
              bVar8 = pbVar5[-1];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a90f + 6;
                goto LAB_100097c6;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'e') goto LAB_100097cf;
              pcVar10 = str_1000a90f + 7;
              if (*pbVar5 == 0) goto LAB_100097c6;
              goto LAB_10009aec;
            }
          }
        }
LAB_100097cf:
        pbVar5 = pbVar5 + 1;
      } while ((char)uVar9 != '\0');
      pbVar5 = in_EDX + 7;
      uVar9 = uVar3;
      do {
        uVar2 = (undefined1)uVar3;
        cVar7 = (char)uVar9;
        uVar3 = (uint)CONCAT11(cVar7 + 0xbfU,uVar2);
        if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          cVar7 = cVar7 + ' ';
        }
        bVar1 = pbVar5[-6];
        uVar9 = (uint)bVar1;
        if (cVar7 == 'n') {
          if (bVar1 == 0) {
            pcVar10 = str_1000a917 + 1;
LAB_100098f1:
            if (*pcVar10 == '\0') {
LAB_10009af3:
              iVar6 = 0x18;
              goto LAB_10009aff;
            }
          }
          else {
            bVar8 = bVar1;
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar8 = bVar1 + 0x20;
            }
            uVar3 = (uint)CONCAT11(bVar8,uVar2);
            if (bVar8 == 0x65) {
              bVar8 = pbVar5[-5];
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a917 + 2;
                goto LAB_100098f1;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 't') goto LAB_100098fa;
              bVar8 = pbVar5[-4];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a917 + 3;
                goto LAB_100098f1;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'w') goto LAB_100098fa;
              bVar8 = pbVar5[-3];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a917 + 4;
                goto LAB_100098f1;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'o') goto LAB_100098fa;
              bVar8 = pbVar5[-2];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a917 + 5;
                goto LAB_100098f1;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'r') goto LAB_100098fa;
              bVar8 = pbVar5[-1];
              uVar2 = (undefined1)uVar3;
              uVar3 = (uint)CONCAT11(bVar8,uVar2);
              if (bVar8 == 0) {
                pcVar10 = str_1000a917 + 6;
                goto LAB_100098f1;
              }
              uVar9 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                uVar3 = (uint)CONCAT11(bVar8 + 0x20,uVar2);
              }
              if ((char)(uVar3 >> 8) != 'k') goto LAB_100098fa;
              pcVar10 = str_1000a917 + 7;
              if (*pbVar5 == 0) goto LAB_100098f1;
              goto LAB_10009af3;
            }
          }
        }
LAB_100098fa:
        pbVar5 = pbVar5 + 1;
      } while ((char)uVar9 != '\0');
      pbVar5 = in_EDX + 3;
      do {
        cVar7 = (char)uVar3;
        if ((byte)(cVar7 + 0xbfU) < 0x1a) {
          cVar7 = cVar7 + ' ';
        }
        bVar1 = pbVar5[-2];
        uVar3 = (uint)bVar1;
        if (cVar7 != 'u') goto LAB_10009a23;
        if (bVar1 == 0) {
          pcVar10 = &DAT_1000a920;
          goto LAB_10009a1a;
        }
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          if (bVar1 == 0x53) goto LAB_10009a5d;
        }
        else if (bVar1 == 0x73) {
LAB_10009a5d:
          bVar8 = pbVar5[-1];
          if (bVar8 == 0) {
            pcVar10 = &DAT_1000a921;
LAB_10009a1a:
            if (*pcVar10 == '\0') {
LAB_10009afa:
              iVar6 = 0x1c;
              goto LAB_10009aff;
            }
          }
          else {
            uVar3 = (uint)CONCAT11(bVar8 + 0xbf,bVar1);
            if ((byte)(bVar8 + 0xbf) < 0x1a) {
              bVar8 = bVar8 + 0x20;
            }
            if (bVar8 == 0x62) {
              pcVar10 = &DAT_1000a922;
              if (*pbVar5 == 0) goto LAB_10009a1a;
              goto LAB_10009afa;
            }
          }
        }
LAB_10009a23:
        pbVar5 = pbVar5 + 1;
      } while ((char)uVar3 != '\0');
    }
    iVar4 = recovered_100095c0((char *)in_EDX,&DAT_1000a923);
    iVar6 = 0x20;
    if (iVar4 == 0) {
      iVar4 = recovered_100095c0((char *)in_EDX,str_1000a929);
      iVar6 = 0x24;
      if (iVar4 == 0) {
        iVar4 = recovered_100095c0((char *)in_EDX,str_1000a92f);
        iVar6 = 0x28;
        if (iVar4 == 0) {
          iVar6 = recovered_100095c0((char *)in_EDX,str_1000a936);
          iVar6 = (uint)(iVar6 == 0) * 4 + 0x2c;
        }
      }
    }
LAB_10009aff:
    *(int *)(in_ECX + iVar6) = *(int *)(in_ECX + iVar6) + 1;
  }
  return;
}

#undef DAT_1000a920
#undef DAT_1000a921
#undef DAT_1000a922
#undef DAT_1000a923
#undef str_1000a906
#undef str_1000a90f
#undef str_1000a917
#undef str_1000a929
#undef str_1000a92f
#undef str_1000a936

#undef DAT_1000abe7
#define DAT_1000abe7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x649U)))
#undef DAT_1000abec
#define DAT_1000abec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64eU)))
#undef DAT_1000ace2
#define DAT_1000ace2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x744U)))
#undef DAT_1000ace7
#define DAT_1000ace7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x749U)))
#undef DAT_1000acec
#define DAT_1000acec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x74eU)))
#undef DAT_1000acf1
#define DAT_1000acf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x753U)))
#undef PTR_str_1000aca7_1000b014
#define PTR_str_1000aca7_1000b014 (*(char * *)(((uintptr_t)pf_module_state + 0xa76U)))
#undef str_1000abdc
#define str_1000abdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63eU)))
#undef str_1000abf0
#define str_1000abf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x652U)))
#undef str_1000abff
#define str_1000abff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x661U)))
#undef str_1000ac0a
#define str_1000ac0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66cU)))
#undef str_1000ac18
#define str_1000ac18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67aU)))
#undef str_1000ac2a
#define str_1000ac2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x68cU)))
#undef str_1000ac34
#define str_1000ac34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x696U)))
#undef str_1000ac40
#define str_1000ac40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a2U)))
#undef str_1000ac4a
#define str_1000ac4a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6acU)))
#undef str_1000ac5b
#define str_1000ac5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bdU)))
#undef str_1000ac69
#define str_1000ac69 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cbU)))
#undef str_1000ac72
#define str_1000ac72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d4U)))
#undef str_1000acf6
#define str_1000acf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x758U)))
#undef str_1000ad01
#define str_1000ad01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x763U)))
#undef str_1000ad0a
#define str_1000ad0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b10
 */

char * recovered_10009b10(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;

  cVar1 = *(char *)(in_ECX + 8);
  if (cVar1 == '\f') {
    if (*(char *)(in_ECX + 9) == '\x03') {
      bVar2 = *(byte *)(in_ECX + 10);
      if (bVar2 < 0x30) {
        if (bVar2 == 0) {
          return &DAT_1000ace2;
        }
        if (bVar2 == 0x10) {
          return &DAT_1000ace7;
        }
        if (bVar2 == 0x20) {
          return &DAT_1000acec;
        }
      }
      else {
        if (bVar2 == 0x30) {
          return &DAT_1000acf1;
        }
        if (bVar2 == 0x80) {
          return str_1000acf6;
        }
        if (bVar2 == 0xfe) {
          return str_1000ad01;
        }
      }
      return str_1000ad0a;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(in_ECX + 9) == '\x03') {
      return &DAT_1000abec;
    }
  }
  else if ((cVar1 == '\x01') && (*(char *)(in_ECX + 9) == '\x06')) {
    return &DAT_1000abe7;
  }
  uVar3 = *(ushort *)(in_ECX + 4);
  if (uVar3 < 0x11ab) {
    if (uVar3 == 0x106b) {
      return str_1000ac72;
    }
    if (uVar3 == 0x10de) {
      if (cVar1 == '\x03') {
        return str_1000abf0;
      }
      return str_1000abff;
    }
    if (uVar3 == 0x1180) {
      return str_1000ac69;
    }
  }
  else {
    if (uVar3 == 0x11ab) {
      return str_1000ac5b;
    }
    if (uVar3 == 0x14e4) {
      return str_1000ac4a;
    }
    if (uVar3 == 0x8086) {
      if (cVar1 == '\x03') {
        return str_1000ac0a;
      }
      if (cVar1 != '\x06') {
        if ((cVar1 == '\f') && (*(char *)(in_ECX + 9) == '\x05')) {
          return str_1000ac34;
        }
        return str_1000ac40;
      }
      pcVar4 = str_1000ac2a;
      if (*(char *)(in_ECX + 9) != '\x01') {
        pcVar4 = str_1000ac40;
      }
      if (*(char *)(in_ECX + 9) == '\0') {
        return str_1000ac18;
      }
      return pcVar4;
    }
  }
  if ((byte)(cVar1 - 1U) < 6) {
    return (&PTR_str_1000aca7_1000b014)[(byte)(cVar1 - 1U)];
  }
  return str_1000abdc;
}

#undef DAT_1000abe7
#undef DAT_1000abec
#undef DAT_1000ace2
#undef DAT_1000ace7
#undef DAT_1000acec
#undef DAT_1000acf1
#undef PTR_str_1000aca7_1000b014
#undef str_1000abdc
#undef str_1000abf0
#undef str_1000abff
#undef str_1000ac0a
#undef str_1000ac18
#undef str_1000ac2a
#undef str_1000ac34
#undef str_1000ac40
#undef str_1000ac4a
#undef str_1000ac5b
#undef str_1000ac69
#undef str_1000ac72
#undef str_1000acf6
#undef str_1000ad01
#undef str_1000ad0a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c90
 */

void recovered_10009c90(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;

  if (in_ECX != 0) {
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      uVar3 = uVar5 + 1;
    } while (*(char *)(in_ECX + uVar5) != '\0');
    if (uVar3 < 0x280) {
      *(undefined1 *)(in_ECX + -1 + uVar3) = 0x20;
      uVar5 = uVar3;
    }
    *(undefined1 *)(in_ECX + uVar5) = 0;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      uVar3 = uVar5 + 1;
    } while (*(char *)(in_ECX + uVar5) != '\0');
    if (in_EDX != (char *)0x0) {
      cVar4 = *in_EDX;
      if (uVar5 + 1 < 0x280 && cVar4 != '\0') {
        do {
          in_EDX = in_EDX + 1;
          *(char *)(in_ECX + uVar5) = cVar4;
          uVar5 = uVar5 + 1;
          cVar4 = *in_EDX;
          if (cVar4 == '\0') break;
        } while (uVar5 < 0x27f);
      }
      *(undefined1 *)(in_ECX + uVar5) = 0;
    }
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      uVar3 = uVar5 + 1;
    } while (*(char *)(in_ECX + uVar5) != '\0');
    if (uVar3 < 0x280) {
      *(undefined1 *)(in_ECX + -1 + uVar3) = 0x3d;
      uVar5 = uVar3;
    }
    *(undefined1 *)(in_ECX + uVar5) = 0;
    uVar3 = param_3 >> 0xc & 0xf;
    bVar2 = (byte)uVar3;
    if (uVar3 < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    uVar3 = param_3 >> 8 & 0xf;
    bVar2 = (byte)uVar3;
    if (uVar3 < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    uVar3 = param_3 >> 4 & 0xf;
    bVar2 = (byte)uVar3;
    if (uVar3 < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
    bVar2 = (byte)(param_3 & 0xf);
    if ((param_3 & 0xf) < 10) {
      bVar2 = bVar2 | 0x30;
    }
    else {
      bVar2 = bVar2 + 0x37;
    }
    uVar3 = 0;
    do {
      pcVar1 = (char *)(in_ECX + uVar3);
      uVar3 = uVar3 + 1;
    } while (*pcVar1 != '\0');
    if (uVar3 < 0x280) {
      *(byte *)(in_ECX + -1 + uVar3) = bVar2;
      *(undefined1 *)(in_ECX + uVar3) = 0;
    }
  }
  return;
}


#undef DAT_1000c000
#define DAT_1000c000 (*(int *)(((uintptr_t)pf_module_state + 0x1a62U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e10
 */

undefined4 recovered_10009e10(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (DAT_1000c000 != 0) {
    if (param_1 != 0 && *(code **)(DAT_1000c000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10009e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(DAT_1000c000 + 0x24))();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000c000

#undef DAT_1000c000
#define DAT_1000c000 (*(int * *)(((uintptr_t)pf_module_state + 0x1a62U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e40
 */

undefined4 recovered_10009e40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((DAT_1000c000 == (int *)0x0) || (*DAT_1000c000 != 0x54584b57)) ||
      ((uint)DAT_1000c000[2] < 0xac)) || ((code *)DAT_1000c000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10009e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)DAT_1000c000[0x2a])();
  return uVar1;
}

#undef DAT_1000c000

#define local_50 (*(uint *)(frame + 64))
#define local_44 (*(uint * *)(frame + 76))
#define local_40 (*(int *)(frame + 80))
#define local_34 (*(uint *)(frame + 92))
#define local_2c (*(int *)(frame + 100))
#define local_28 (*(uint * *)(frame + 104))
#define local_1c (*(uint * *)(frame + 116))
#define local_18 (*(int *)(frame + 120))
#define local_14 (*(int *)(frame + 124))
#define local_80 (*(uint *)(frame + 16))
#define local_7c (*(uint *)(frame + 20))
#define local_70 (*(undefined8 *)(frame + 32))
#define local_68 (*(int *)(frame + 40))
#define local_64 (*(uint *)(frame + 44))
#define local_60 (*(int *)(frame + 48))
#define local_5c (*(uint *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e70
 */

undefined8 recovered_10009e70(int param_1,uint param_2)

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

#undef local_50
#undef local_44
#undef local_40
#undef local_34
#undef local_2c
#undef local_28
#undef local_1c
#undef local_18
#undef local_14
#undef local_80
#undef local_7c
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_5c

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
