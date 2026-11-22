/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000d000
#define DAT_1000d000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

void * recovered_10000470(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000d000;
}

#undef DAT_1000d000

#undef DAT_1000c4c0
#define DAT_1000c4c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000e000
#define DAT_1000e000 (*(int * *)(((uintptr_t)pf_module_state + 0x1b48U)))
#undef UNK_1000c4c4
#define UNK_1000c4c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef UNK_1000c4c8
#define UNK_1000c4c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef UNK_1000c4cc
#define UNK_1000c4cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_1000c4c0
#define _DAT_1000c4c0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef str_1000c4e8
#define str_1000c4e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30U)))
#undef str_1000c500
#define str_1000c500 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48U)))
#undef str_1000c512
#define str_1000c512 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aU)))
#undef str_1000c535
#define str_1000c535 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7dU)))
#undef str_1000c558
#define str_1000c558 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0U)))
#undef str_1000ca04
#define str_1000ca04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54cU)))
#undef str_1000cb08
#define str_1000cb08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x650U)))
#undef str_1000cb1f
#define str_1000cb1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x667U)))
#undef str_1000cb3c
#define str_1000cb3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x684U)))
#undef str_1000cb54
#define str_1000cb54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69cU)))
#undef str_1000cb72
#define str_1000cb72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6baU)))
#undef str_1000cb8b
#define str_1000cb8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d3U)))
#undef str_1000cbad
#define str_1000cbad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f5U)))
#undef str_1000cbc9
#define str_1000cbc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x711U)))
#undef str_1000cbe1
#define str_1000cbe1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x729U)))
#undef str_1000cbf6
#define str_1000cbf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73eU)))
#undef str_1000cc0c
#define str_1000cc0c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x754U)))
#undef uRam000000001000c4c4
#define uRam000000001000c4c4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef uRam000000001000c4c8
#define uRam000000001000c4c8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef uRam000000001000c4cc
#define uRam000000001000c4cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x14U)))
#define uStack_50 (*(undefined8 *)(frame + 1216))
#define uStack_40 (*(undefined8 *)(frame + 1232))
#define uStack_30 (*(undefined8 *)(frame + 1248))
#define local_4fc (*(undefined1 (*)[16])(frame + 20))
#define local_4ec (*(uint *)(frame + 36))
#define local_4e8 (*(uint *)(frame + 40))
#define local_4e4 (*(uint *)(frame + 44))
#define local_4c8 (*(undefined8 *)(frame + 72))
#define local_4b8 (*(undefined8 *)(frame + 88))
#define local_4a8 (*(undefined8 *)(frame + 104))
#define local_498 (*(undefined8 *)(frame + 120))
#define local_488 (*(undefined8 *)(frame + 136))
#define local_478 (*(undefined8 *)(frame + 152))
#define local_468 (*(undefined8 *)(frame + 168))
#define local_458 (*(undefined8 *)(frame + 184))
#define local_448 (*(undefined8 *)(frame + 200))
#define local_438 (*(undefined8 *)(frame + 216))
#define local_428 (*(undefined8 *)(frame + 232))
#define local_418 (*(undefined8 *)(frame + 248))
#define local_408 (*(undefined8 *)(frame + 264))
#define local_3f8 (*(undefined8 *)(frame + 280))
#define local_3e8 (*(undefined8 *)(frame + 296))
#define local_3d8 (*(undefined8 *)(frame + 312))
#define local_3c8 (*(int *)(frame + 328))
#define local_3b8 (*(undefined2 *)(frame + 344))
#define local_3b6 (*(undefined1 (*)[764])(frame + 346))
#define abStack_4ca (*(byte (*)[2])(frame + 70))
#define uStack_4c0 (*(undefined8 *)(frame + 80))
#define uStack_4b0 (*(undefined8 *)(frame + 96))
#define local_b8 (*(undefined4 *)(frame + 1112))
#define uStack_4a0 (*(undefined8 *)(frame + 112))
#define local_a8 (*(undefined8 *)(frame + 1128))
#define local_98 (*(undefined8 *)(frame + 1144))
#define uStack_490 (*(undefined8 *)(frame + 128))
#define local_88 (*(undefined8 *)(frame + 1160))
#define local_78 (*(undefined8 *)(frame + 1176))
#define uStack_480 (*(undefined8 *)(frame + 144))
#define local_68 (*(undefined8 *)(frame + 1192))
#define local_58 (*(undefined8 *)(frame + 1208))
#define uStack_470 (*(undefined8 *)(frame + 160))
#define local_48 (*(undefined8 *)(frame + 1224))
#define local_38 (*(undefined8 *)(frame + 1240))
#define uStack_460 (*(undefined8 *)(frame + 176))
#define uStack_450 (*(undefined8 *)(frame + 192))
#define uStack_440 (*(undefined8 *)(frame + 208))
#define uStack_430 (*(undefined8 *)(frame + 224))
#define uStack_410 (*(undefined8 *)(frame + 256))
#define uStack_400 (*(undefined8 *)(frame + 272))
#define uStack_3f0 (*(undefined8 *)(frame + 288))
#define uStack_3e0 (*(undefined8 *)(frame + 304))
#define uStack_3d0 (*(undefined8 *)(frame + 320))
#define cStack_3b9 (*(char *)(frame + 343))
#define abStack_ba (*(byte (*)[2])(frame + 1110))
#define uStack_b4 (*(undefined4 *)(frame + 1116))
#define uStack_b0 (*(undefined4 *)(frame + 1120))
#define uStack_ac (*(undefined4 *)(frame + 1124))
#define uStack_a0 (*(undefined8 *)(frame + 1136))
#define uStack_90 (*(undefined8 *)(frame + 1152))
#define uStack_80 (*(undefined8 *)(frame + 1168))
#define uStack_70 (*(undefined8 *)(frame + 1184))
#define uStack_60 (*(undefined8 *)(frame + 1200))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000480(int *api)

{
  unsigned char frame[1328] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  bool bVar15;

  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar7 = api[2];
  if (uVar7 < 0x10) {
    return 0;
  }
  PF_PART1(local_3b8, 0) = 0;
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
  } while (local_3b6[uVar4 - 2] != '\0');
  if (uVar4 + 1 < 0x70) {
    cVar10 = 'g';
    pcVar8 = str_1000c4e8;
    do {
      pcVar8 = pcVar8 + 1;
      local_3b6[uVar4 - 2] = cVar10;
      uVar4 = uVar4 + 1;
      cVar10 = *pcVar8;
      if (cVar10 == '\0') break;
    } while (uVar4 < 0x6f);
  }
  local_3b6[uVar4 - 2] = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
  } while (local_3b6[uVar4 - 1] != '\0');
  if (uVar4 + 2 < 0x70) {
    local_3b6[uVar4 - 1] = 0x3a;
    bVar15 = uVar5 != 0x6e;
    uVar5 = uVar4 + 2;
    if (bVar15) {
      uVar5 = uVar4 + 3;
      local_3b6[uVar4] = 0x20;
      if (uVar5 < 0x6f) {
        uVar5 = uVar4 + 4;
        local_3b6[uVar4 + 1] = 0x6b;
        if (uVar5 < 0x6f) {
          uVar5 = uVar4 + 5;
          local_3b6[uVar4 + 2] = 0x41;
          if (uVar5 < 0x6f) {
            uVar5 = uVar4 + 6;
            local_3b6[uVar4 + 3] = 0x50;
            if (uVar5 < 0x6f) {
              uVar5 = uVar4 + 7;
              local_3b6[uVar4 + 4] = 0x49;
              if (uVar5 < 0x6f) {
                uVar5 = uVar4 + 8;
                local_3b6[uVar4 + 5] = 0x20;
                if (uVar5 < 0x6f) {
                  local_3b6[uVar4 + 6] = 0x76;
                  uVar5 = uVar4 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_3b6[uVar5 - 2] = 0;
  uVar6 = api[1];
  uVar5 = (ulong)uVar6;
  if (uVar5 < 1000000) {
    if (uVar6 == 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x70) {
        *(undefined2 *)(local_3b6 + (uVar4 - 2)) = 0x30;
      }
    }
    else {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar9 = uVar4;
        uVar6 = (uint)uVar5;
        abStack_4ca[uVar9 + 3] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
        uVar4 = uVar9 + 1;
        if (8 < uVar4) break;
        uVar5 = uVar5 / 10;
      } while (9 < uVar6);
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        do {
          uVar11 = uVar5;
          uVar5 = uVar11 + 1;
        } while (local_3b6[uVar11 - 2] != '\0');
        uVar5 = uVar4;
        if (uVar11 + 1 < 0x70) {
          local_3b6[uVar11 - 2] = abStack_4ca[uVar9 + 3];
          local_3b6[uVar11 - 1] = 0;
        }
      }
      else {
        uVar5 = uVar9 + 2;
      }
      while (uVar4 != 0) {
        uVar4 = 0;
        do {
          uVar9 = uVar4;
          uVar4 = uVar9 + 1;
        } while (local_3b6[uVar9 - 2] != '\0');
        if (uVar9 + 1 < 0x70) {
          local_3b6[uVar9 - 2] = abStack_4ca[uVar5 + 1];
          local_3b6[uVar9 - 1] = 0;
        }
        pbVar1 = abStack_4ca + uVar5;
        uVar5 = uVar5 - 2;
        uVar4 = 0;
        do {
          uVar9 = uVar4;
          uVar4 = uVar9 + 1;
        } while (local_3b6[uVar9 - 2] != '\0');
        uVar4 = uVar5;
        if (uVar9 + 1 < 0x70) {
          local_3b6[uVar9 - 2] = *pbVar1;
          local_3b6[uVar9 - 1] = 0;
        }
      }
    }
  }
  else {
    iVar2 = (int)(uVar5 / 1000);
    uVar3 = uVar6 + iVar2 * -1000;
    uVar4 = 0xffffffffffffffff;
    uVar6 = uVar6 / 1000000;
    do {
      uVar9 = uVar4;
      abStack_4ca[uVar9 + 3] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      uVar4 = uVar9 + 1;
      if (8 < uVar4) break;
      bVar15 = 9 < uVar6;
      uVar6 = uVar6 / 10;
    } while (bVar15);
    if ((uVar4 & 1) == 0) {
      uVar11 = 0;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
      } while (local_3b6[uVar12 - 2] != '\0');
      uVar11 = uVar4;
      if (uVar12 + 1 < 0x70) {
        local_3b6[uVar12 - 2] = abStack_4ca[uVar9 + 3];
        local_3b6[uVar12 - 1] = 0;
      }
    }
    else {
      uVar11 = uVar9 + 2;
    }
    while (uVar4 != 0) {
      uVar4 = 0;
      do {
        uVar9 = uVar4;
        uVar4 = uVar9 + 1;
      } while (local_3b6[uVar9 - 2] != '\0');
      if (uVar9 + 1 < 0x70) {
        local_3b6[uVar9 - 2] = abStack_4ca[uVar11 + 1];
        local_3b6[uVar9 - 1] = 0;
      }
      pbVar1 = abStack_4ca + uVar11;
      uVar11 = uVar11 - 2;
      uVar4 = 0;
      do {
        uVar9 = uVar4;
        uVar4 = uVar9 + 1;
      } while (local_3b6[uVar9 - 2] != '\0');
      uVar4 = uVar11;
      if (uVar9 + 1 < 0x70) {
        local_3b6[uVar9 - 2] = *pbVar1;
        local_3b6[uVar9 - 1] = 0;
      }
    }
    uVar4 = 0;
    do {
      uVar9 = uVar4;
      uVar4 = uVar9 + 1;
    } while (local_3b6[uVar9 - 2] != '\0');
    if (uVar4 < 0x70) {
      local_3b6[uVar9 - 2] = 0x2e;
      uVar9 = uVar4;
    }
    local_3b6[uVar9 - 2] = 0;
    uVar6 = iVar2 + (int)((uVar5 / 1000) / 1000) * -1000;
    if (uVar6 == 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x70) {
        *(undefined2 *)(local_3b6 + (uVar4 - 2)) = 0x30;
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      do {
        uVar4 = uVar5;
        abStack_4ca[uVar4 + 3] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
        uVar5 = uVar4 + 1;
        if (8 < uVar5) break;
        bVar15 = 9 < uVar6;
        uVar6 = uVar6 / 10;
      } while (bVar15);
      if ((uVar5 & 1) == 0) {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (local_3b6[uVar11 - 2] != '\0');
        uVar9 = uVar5;
        if (uVar11 + 1 < 0x70) {
          local_3b6[uVar11 - 2] = abStack_4ca[uVar4 + 3];
          local_3b6[uVar11 - 1] = 0;
        }
      }
      else {
        uVar9 = uVar4 + 2;
      }
      while (uVar5 != 0) {
        uVar5 = 0;
        do {
          uVar4 = uVar5;
          uVar5 = uVar4 + 1;
        } while (local_3b6[uVar4 - 2] != '\0');
        if (uVar4 + 1 < 0x70) {
          local_3b6[uVar4 - 2] = abStack_4ca[uVar9 + 1];
          local_3b6[uVar4 - 1] = 0;
        }
        pbVar1 = abStack_4ca + uVar9;
        uVar9 = uVar9 - 2;
        uVar5 = 0;
        do {
          uVar4 = uVar5;
          uVar5 = uVar4 + 1;
        } while (local_3b6[uVar4 - 2] != '\0');
        uVar5 = uVar9;
        if (uVar4 + 1 < 0x70) {
          local_3b6[uVar4 - 2] = *pbVar1;
          local_3b6[uVar4 - 1] = 0;
        }
      }
    }
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar5 < 0x70) {
        local_3b6[uVar4 - 2] = 0x2e;
        uVar4 = uVar5;
      }
      local_3b6[uVar4 - 2] = 0;
      uVar5 = 0xffffffffffffffff;
      do {
        uVar4 = uVar5;
        abStack_4ca[uVar4 + 3] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
        uVar5 = uVar4 + 1;
        if (8 < uVar5) break;
        bVar15 = 9 < uVar3;
        uVar3 = uVar3 / 10;
      } while (bVar15);
      if ((uVar5 & 1) == 0) {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (local_3b6[uVar11 - 2] != '\0');
        uVar9 = uVar5;
        if (uVar11 + 1 < 0x70) {
          local_3b6[uVar11 - 2] = abStack_4ca[uVar4 + 3];
          local_3b6[uVar11 - 1] = 0;
        }
      }
      else {
        uVar9 = uVar4 + 2;
      }
      while (uVar5 != 0) {
        uVar5 = 0;
        do {
          uVar4 = uVar5;
          uVar5 = uVar4 + 1;
        } while (local_3b6[uVar4 - 2] != '\0');
        if (uVar4 + 1 < 0x70) {
          local_3b6[uVar4 - 2] = abStack_4ca[uVar9 + 1];
          local_3b6[uVar4 - 1] = 0;
        }
        pbVar1 = abStack_4ca + uVar9;
        uVar9 = uVar9 - 2;
        uVar5 = 0;
        do {
          uVar4 = uVar5;
          uVar5 = uVar4 + 1;
        } while (local_3b6[uVar4 - 2] != '\0');
        uVar5 = uVar9;
        if (uVar4 + 1 < 0x70) {
          local_3b6[uVar4 - 2] = *pbVar1;
          local_3b6[uVar4 - 1] = 0;
        }
      }
    }
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar4 = uVar5;
    uVar5 = uVar4 + 1;
  } while (local_3b6[uVar4 - 1] != '\0');
  if (uVar4 + 2 < 0x70) {
    local_3b6[uVar4 - 1] = 0x20;
    bVar15 = uVar5 != 0x6e;
    uVar5 = uVar4 + 2;
    if (bVar15) {
      uVar5 = uVar4 + 3;
      local_3b6[uVar4] = 0x72;
      if (uVar5 < 0x6f) {
        uVar5 = uVar4 + 4;
        local_3b6[uVar4 + 1] = 0x65;
        if (uVar5 < 0x6f) {
          uVar5 = uVar4 + 5;
          local_3b6[uVar4 + 2] = 0x61;
          if (uVar5 < 0x6f) {
            uVar5 = uVar4 + 6;
            local_3b6[uVar4 + 3] = 100;
            if (uVar5 < 0x6f) {
              local_3b6[uVar4 + 4] = 0x79;
              uVar5 = uVar4 + 7;
            }
          }
        }
      }
    }
  }
  local_3b6[uVar5 - 2] = 0;
  if ((0x2b < uVar7) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(&local_3b8);
  }
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  bVar15 = true;
  if (((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
     ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) {
    iVar2 = (*(code *)(ulong)(uint)api[0xf])(&local_4c8);
    bVar15 = iVar2 == 0;
  }
  recovered_10001860(api,recovered_10001a90,&local_418);
  if (((*api == 0x54584b57) && (0x9b < (uint)api[2])) &&
     (((code *)(ulong)(uint)api[0x20] != (code *)0x0 &&
      ((api[0x26] != 0 && (iVar2 = (*(code *)(ulong)(uint)api[0x20])(), iVar2 != 0)))))) {
    recovered_1000ad30(api,iVar2,10,recovered_10001bb0,&local_418);
  }
  puVar13 = &local_4c8;
  if (bVar15) {
    puVar13 = (undefined8 *)0x0;
  }
  recovered_10001c60((long)puVar13,(uint *)&local_418,(undefined1 *)&local_3b8);
  if ((code *)(ulong)(uint)api[3] == (code *)0x0) {
    return 0;
  }
  iVar2 = (*(code *)(ulong)(uint)api[3])(str_1000c500,str_1000c512,&local_3b8);
  if (iVar2 == 0) {
    return 0;
  }
  if ((code *)(ulong)(uint)api[4] != (code *)0x0) {
    uVar6 = PF_PART4(local_468, 4) + (uint)(PF_PART4(local_468, 4) == 0);
    uVar7 = 0x40;
    if (uVar6 < 0x40) {
      uVar7 = uVar6;
    }
    uVar6 = 1;
    if (!bVar15) {
      uVar6 = uVar7;
    }
    (*(code *)(ulong)(uint)api[4])(uVar6,uVar6 * 0x60);
  }
  if ((code *)(ulong)(uint)api[6] != (code *)0x0) {
    (*(code *)(ulong)(uint)api[6])(0x80,0x100,0x100,0x10,3);
  }
  recovered_10001860(api,recovered_10003ea0,&local_418);
  if ((((*api == 0x54584b57) && (0x9b < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0x20] != (code *)0x0)) &&
     ((api[0x26] != 0 && (iVar2 = (*(code *)(ulong)(uint)api[0x20])(), iVar2 != 0)))) {
    recovered_1000ad30(api,iVar2,10,recovered_100086f0,&local_418);
  }
  if (local_3c8 == 0) {
    DAT_1000e000 = api;
    if (((code *)(ulong)(uint)api[8] == (code *)0x0) ||
       (iVar2 = (*(code *)(ulong)(uint)api[8])(recovered_1000bc10,3,str_1000c558), iVar2 == 0)) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar14 = 0;
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cb1f;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    else {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar14 = 1;
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cb08;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    local_3b6[uVar4 - 2] = 0;
    if ((((*api == 0x54584b57) && (0xa7 < (uint)api[2])) &&
        ((code *)(ulong)(uint)api[0x29] != (code *)0x0)) &&
       (iVar2 = (*(code *)(ulong)(uint)api[0x29])(recovered_1000bc40,7,str_1000c558), iVar2 != 0)) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar14 = 1;
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cb3c;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    else {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cb54;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    local_3b6[uVar4 - 2] = 0;
    uStack_3e0 = CONCAT44(PF_PART4(uStack_3e0, 4),uVar14);
    iVar2 = *api;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar10 = ' ';
      pcVar8 = str_1000c535;
      do {
        pcVar8 = pcVar8 + 1;
        local_3b6[uVar4 - 2] = cVar10;
        uVar4 = uVar4 + 1;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    local_3b6[uVar4 - 2] = 0;
    iVar2 = *api;
  }
  if (((iVar2 == 0x54584b57) && (0x43 < (uint)api[2])) &&
     (((code *)(ulong)(uint)api[0x10] != (code *)0x0 &&
      (iVar2 = (*(code *)(ulong)(uint)api[0x10])(local_4fc),
      local_4e4 != 0 && ((local_4e8 != 0 && local_4ec != 0) && iVar2 != 0))))) {
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar5 < 0x300) {
      local_3b6[uVar4 - 2] = 0x20;
      uVar4 = uVar5;
    }
    local_3b6[uVar4 - 2] = 0;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar10 = 'f';
      pcVar8 = str_1000ca04;
      do {
        pcVar8 = pcVar8 + 1;
        local_3b6[uVar4 - 2] = cVar10;
        uVar4 = uVar4 + 1;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    local_3b6[uVar4 - 2] = 0;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar5 < 0x300) {
      local_3b6[uVar4 - 2] = 0x3d;
      uVar4 = uVar5;
    }
    local_3b6[uVar4 - 2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5;
      abStack_ba[uVar4 + 3] = (char)local_4ec + (char)(local_4ec / 10) * -10 | 0x30;
      uVar5 = uVar4 + 1;
      if (8 < uVar5) break;
      bVar15 = 9 < local_4ec;
      local_4ec = local_4ec / 10;
    } while (bVar15);
    if ((uVar5 & 1) == 0) {
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (local_3b6[uVar11 - 2] != '\0');
      uVar9 = uVar5;
      if (uVar11 + 1 < 0x300) {
        local_3b6[uVar11 - 2] = abStack_ba[uVar4 + 3];
        local_3b6[uVar11 - 1] = 0;
      }
    }
    else {
      uVar9 = uVar4 + 2;
    }
    while (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x300) {
        local_3b6[uVar4 - 2] = abStack_ba[uVar9 + 1];
        local_3b6[uVar4 - 1] = 0;
      }
      pbVar1 = abStack_ba + uVar9;
      uVar9 = uVar9 - 2;
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar5 = uVar9;
      if (uVar4 + 1 < 0x300) {
        local_3b6[uVar4 - 2] = *pbVar1;
        local_3b6[uVar4 - 1] = 0;
      }
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar5 < 0x300) {
      local_3b6[uVar4 - 2] = 0x78;
      uVar4 = uVar5;
    }
    local_3b6[uVar4 - 2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5;
      abStack_ba[uVar4 + 3] = (byte)(local_4e8 % 10) | 0x30;
      uVar5 = uVar4 + 1;
      if (8 < uVar5) break;
      bVar15 = 9 < local_4e8;
      local_4e8 = local_4e8 / 10;
    } while (bVar15);
    if ((uVar5 & 1) == 0) {
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (local_3b6[uVar11 - 2] != '\0');
      uVar9 = uVar5;
      if (uVar11 + 1 < 0x300) {
        local_3b6[uVar11 - 2] = abStack_ba[uVar4 + 3];
        local_3b6[uVar11 - 1] = 0;
      }
    }
    else {
      uVar9 = uVar4 + 2;
    }
    while (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x300) {
        local_3b6[uVar4 - 2] = abStack_ba[uVar9 + 1];
        local_3b6[uVar4 - 1] = 0;
      }
      pbVar1 = abStack_ba + uVar9;
      uVar9 = uVar9 - 2;
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar5 = uVar9;
      if (uVar4 + 1 < 0x300) {
        local_3b6[uVar4 - 2] = *pbVar1;
        local_3b6[uVar4 - 1] = 0;
      }
    }
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar5 < 0x300) {
      local_3b6[uVar4 - 2] = 0x78;
      uVar4 = uVar5;
    }
    local_3b6[uVar4 - 2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5;
      abStack_ba[uVar4 + 3] = (byte)(local_4e4 % 10) | 0x30;
      uVar5 = uVar4 + 1;
      if (8 < uVar5) break;
      bVar15 = 9 < local_4e4;
      local_4e4 = local_4e4 / 10;
    } while (bVar15);
    if ((uVar5 & 1) == 0) {
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (local_3b6[uVar11 - 2] != '\0');
      uVar9 = uVar5;
      if (uVar11 + 1 < 0x300) {
        local_3b6[uVar11 - 2] = abStack_ba[uVar4 + 3];
        local_3b6[uVar11 - 1] = 0;
      }
    }
    else {
      uVar9 = uVar4 + 2;
    }
    while (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x300) {
        local_3b6[uVar4 - 2] = abStack_ba[uVar9 + 1];
        local_3b6[uVar4 - 1] = 0;
      }
      pbVar1 = abStack_ba + uVar9;
      uVar9 = uVar9 - 2;
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar5 = uVar9;
      if (uVar4 + 1 < 0x300) {
        local_3b6[uVar4 - 2] = *pbVar1;
        local_3b6[uVar4 - 1] = 0;
      }
    }
    if (((*api == 0x54584b57) && (0xb7 < (uint)api[2])) &&
       (((code *)(ulong)(uint)api[0x2d] != (code *)0x0 &&
        (uVar5 = (*(code *)(ulong)(uint)api[0x2d])(1), (uVar5 & 1) != 0)))) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cb8b;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    else {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cbad;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    local_3b6[uVar4 - 2] = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_b8 = _DAT_1000c4c0;
    uStack_b4 = uRam000000001000c4c4;
    uStack_b0 = uRam000000001000c4c8;
    uStack_ac = uRam000000001000c4cc;
    local_a8 = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (*(char *)((long)&local_a8 + uVar4 + 1) != '\0');
    if (uVar4 + 2 < 0x40) {
      cVar10 = 'g';
      pcVar8 = str_1000cbc9;
      uVar4 = uVar4 + 2;
      do {
        uVar5 = uVar4;
        pcVar8 = pcVar8 + 1;
        *(char *)((long)&uStack_ac + uVar5 + 3) = cVar10;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
        uVar4 = uVar5 + 1;
      } while (uVar5 < 0x3f);
    }
    *(undefined1 *)((long)&local_a8 + uVar5) = 0;
    local_68 = local_68 & 0xffffffffffffff00;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (*(char *)((long)&local_68 + uVar4 + 1) != '\0');
    if (uVar4 + 2 < 0x40) {
      cVar10 = 'h';
      pcVar8 = str_1000cbe1;
      uVar4 = uVar4 + 2;
      do {
        uVar5 = uVar4;
        pcVar8 = pcVar8 + 1;
        *(char *)((long)&uStack_70 + uVar5 + 7) = cVar10;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
        uVar4 = uVar5 + 1;
      } while (uVar5 < 0x3f);
    }
    *(undefined1 *)((long)&local_68 + uVar5) = 0;
    if ((((*api == 0x54584b57) && (199 < (uint)api[2])) &&
        ((code *)(ulong)(uint)api[0x31] != (code *)0x0)) &&
       (iVar2 = (*(code *)(ulong)(uint)api[0x31])(&local_b8,recovered_1000bc80), iVar2 != 0)) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar14 = 1;
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cbf6;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    else {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (local_3b6[uVar4 - 2] != '\0');
      uVar14 = 0;
      if (uVar4 + 1 < 0x300) {
        cVar10 = ' ';
        pcVar8 = str_1000cc0c;
        do {
          pcVar8 = pcVar8 + 1;
          local_3b6[uVar4 - 2] = cVar10;
          uVar4 = uVar4 + 1;
          cVar10 = *pcVar8;
          if (cVar10 == '\0') break;
        } while (uVar4 < 0x2ff);
      }
    }
    local_3b6[uVar4 - 2] = 0;
  }
  else {
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
    } while (local_3b6[uVar4 - 2] != '\0');
    if (uVar4 + 1 < 0x300) {
      cVar10 = ' ';
      pcVar8 = str_1000cb72;
      do {
        pcVar8 = pcVar8 + 1;
        local_3b6[uVar4 - 2] = cVar10;
        uVar4 = uVar4 + 1;
        cVar10 = *pcVar8;
        if (cVar10 == '\0') break;
      } while (uVar4 < 0x2ff);
    }
    local_3b6[uVar4 - 2] = 0;
    uVar14 = 0;
  }
  local_3e8 = CONCAT44(uVar14,(undefined4)local_3e8);
  recovered_10001c60((long)puVar13,(uint *)&local_418,(undefined1 *)&local_3b8);
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    (*(code *)(ulong)(uint)api[3])(str_1000c500,str_1000c512,&local_3b8);
  }
  return 1;
}

#undef DAT_1000c4c0
#undef DAT_1000e000
#undef UNK_1000c4c4
#undef UNK_1000c4c8
#undef UNK_1000c4cc
#undef _DAT_1000c4c0
#undef str_1000c4e8
#undef str_1000c500
#undef str_1000c512
#undef str_1000c535
#undef str_1000c558
#undef str_1000ca04
#undef str_1000cb08
#undef str_1000cb1f
#undef str_1000cb3c
#undef str_1000cb54
#undef str_1000cb72
#undef str_1000cb8b
#undef str_1000cbad
#undef str_1000cbc9
#undef str_1000cbe1
#undef str_1000cbf6
#undef str_1000cc0c
#undef uRam000000001000c4c4
#undef uRam000000001000c4c8
#undef uRam000000001000c4cc
#undef uStack_50
#undef uStack_40
#undef uStack_30
#undef local_4fc
#undef local_4ec
#undef local_4e8
#undef local_4e4
#undef local_4c8
#undef local_4b8
#undef local_4a8
#undef local_498
#undef local_488
#undef local_478
#undef local_468
#undef local_458
#undef local_448
#undef local_438
#undef local_428
#undef local_418
#undef local_408
#undef local_3f8
#undef local_3e8
#undef local_3d8
#undef local_3c8
#undef local_3b8
#undef local_3b6
#undef abStack_4ca
#undef uStack_4c0
#undef uStack_4b0
#undef local_b8
#undef uStack_4a0
#undef local_a8
#undef local_98
#undef uStack_490
#undef local_88
#undef local_78
#undef uStack_480
#undef local_68
#undef local_58
#undef uStack_470
#undef local_48
#undef local_38
#undef uStack_460
#undef uStack_450
#undef uStack_440
#undef uStack_430
#undef uStack_410
#undef uStack_400
#undef uStack_3f0
#undef uStack_3e0
#undef uStack_3d0
#undef cStack_3b9
#undef abStack_ba
#undef uStack_b4
#undef uStack_b0
#undef uStack_ac
#undef uStack_a0
#undef uStack_90
#undef uStack_80
#undef uStack_70
#undef uStack_60

#define local_a8 (*(undefined1 (*)[44])(frame + 24))
#define local_7c (*(undefined1 (*)[12])(frame + 68))
#define local_70 (*(char *)(frame + 80))
#define local_50 (*(code * *)(frame + 112))
#define local_44 (*(uint *)(frame + 124))
#define local_40 (*(undefined8 *)(frame + 128))
#define local_34 (*(uint *)(frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

void recovered_10001860(int *param_1,undefined *param_2,undefined8 param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;

  if ((((param_1 != (int *)0x0 && param_2 != (undefined *)0x0) && (*param_1 == 0x54584b57)) &&
      (0x5f < (uint)param_1[2])) && (param_1[0x17] != 0)) {
    local_44 = 0;
    local_50 = (code *)param_2;
    local_40 = param_3;
    do {
      local_34 = local_44 & 0xff;
      iVar4 = 0;
      do {
        uVar3 = (undefined1)iVar4;
        uVar2 = recovered_1000aab0(param_1,local_34,uVar3,0,local_7c);
        pcVar1 = local_50;
        if (((int)uVar2 != 0) && ((*local_50)(param_1,local_7c,local_40), local_70 < '\0')) {
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,1,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,2,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,3,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,4,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,5,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,6,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
          uVar2 = recovered_1000aab0(param_1,local_34,uVar3,7,local_a8);
          if ((int)uVar2 != 0) {
            (*pcVar1)(param_1,local_a8,local_40);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x20);
      local_44 = local_44 + 1;
    } while (local_44 != 0x10);
  }
  return;
}

#undef local_a8
#undef local_7c
#undef local_70
#undef local_50
#undef local_44
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a90
 */

undefined8 recovered_10001a90(undefined8 param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;

  if (param_2 == 0 || param_3 == 0) {
    return 0;
  }
  sVar1 = *(short *)(param_2 + 4);
  if (sVar1 == 0x106b) {
    lVar3 = 0x40;
LAB_10001b50:
    *(undefined4 *)(param_3 + lVar3) = 1;
  }
  else if (sVar1 == -0x7f7a) {
    uVar2 = *(ushort *)(param_2 + 6);
    lVar3 = 0x4c;
    uVar4 = uVar2 - 0x2815;
    if (((uVar4 < 0x37) && ((0x400023f8100001U >> ((ulong)uVar4 & 0x3f) & 1) != 0)) ||
       (((uVar2 == 0x2a02 || (uVar2 == 0x2a00)) &&
        ((*(undefined4 *)(param_3 + 0x48) = 1, uVar4 < 0x37 &&
         ((0x400023f8100001U >> ((ulong)uVar4 & 0x3f) & 1) != 0)))))) goto LAB_10001b50;
  }
  else if (sVar1 == 0x10de) {
    uVar2 = *(ushort *)(param_2 + 6);
    lVar3 = 0x44;
    if ((((uVar2 - 0xaa2 < 0x1f) && ((0x408040b9U >> (uVar2 - 0xaa2 & 0x1f) & 1) != 0)) ||
        (uVar2 == 0x863)) || (uVar2 == 0x867)) goto LAB_10001b50;
  }
  uVar4 = 1;
  if (*(int *)(param_3 + 0x44) == 0) {
    if (*(int *)(param_3 + 0x48) == 0) {
      lVar3 = 0x4c;
      if ((*(int *)(param_3 + 0x3c) == 0) && (*(int *)(param_3 + 0x40) == 0)) {
        uVar4 = 0;
        goto LAB_10001b62;
      }
    }
    else {
      if ((*(int *)(param_3 + 0x4c) != 0) || (*(int *)(param_3 + 0x3c) != 0)) goto LAB_10001b62;
      lVar3 = 0x40;
    }
    uVar4 = (uint)(*(int *)(param_3 + lVar3) != 0);
  }
LAB_10001b62:
  *(uint *)(param_3 + 0x50) = uVar4;
  return 0;
}


#undef DAT_1000c597
#define DAT_1000c597 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdfU)))
#undef str_1000c589
#define str_1000c589 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1U)))
#undef str_1000c591
#define str_1000c591 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb0
 */

undefined8 recovered_10001bb0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  long lVar3;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  bVar1 = recovered_1000ae90(param_2,str_1000c589);
  if ((((int)CONCAT71(extraout_var,bVar1) != 0) ||
      (bVar1 = recovered_1000ae90(param_2,str_1000c591), (int)CONCAT71(extraout_var_00,bVar1) != 0))
     || (bVar1 = recovered_1000ae90(param_2,&DAT_1000c597),
        (int)CONCAT71(extraout_var_01,bVar1) != 0)) {
    *(undefined4 *)(param_4 + 0x3c) = 1;
  }
  uVar2 = 1;
  if (*(int *)(param_4 + 0x44) == 0) {
    if (*(int *)(param_4 + 0x48) == 0) {
      lVar3 = 0x4c;
      if ((*(int *)(param_4 + 0x3c) == 0) && (*(int *)(param_4 + 0x40) == 0)) {
        uVar2 = 0;
        goto LAB_10001c18;
      }
    }
    else {
      if ((*(int *)(param_4 + 0x4c) != 0) || (*(int *)(param_4 + 0x3c) != 0)) goto LAB_10001c18;
      lVar3 = 0x40;
    }
    uVar2 = (uint)(*(int *)(param_4 + lVar3) != 0);
  }
LAB_10001c18:
  *(uint *)(param_4 + 0x50) = uVar2;
  return 0;
}

#undef DAT_1000c597
#undef str_1000c589
#undef str_1000c591

#undef DAT_1000c6ca
#define DAT_1000c6ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x212U)))
#undef DAT_1000c6d4
#define DAT_1000c6d4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21cU)))
#undef DAT_1000c6f2
#define DAT_1000c6f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x23aU)))
#undef str_1000c59c
#define str_1000c59c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4U)))
#undef str_1000c600
#define str_1000c600 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148U)))
#undef str_1000c610
#define str_1000c610 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158U)))
#undef str_1000c61a
#define str_1000c61a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x162U)))
#undef str_1000c625
#define str_1000c625 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16dU)))
#undef str_1000c633
#define str_1000c633 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17bU)))
#undef str_1000c643
#define str_1000c643 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18bU)))
#undef str_1000c68d
#define str_1000c68d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5U)))
#undef str_1000c6a1
#define str_1000c6a1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e9U)))
#undef str_1000c6af
#define str_1000c6af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f7U)))
#undef str_1000c6bd
#define str_1000c6bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
#undef str_1000c6dd
#define str_1000c6dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x225U)))
#undef str_1000c6e7
#define str_1000c6e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22fU)))
#undef str_1000c6f7
#define str_1000c6f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

void recovered_10001c60(long param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  char cVar10;
  bool bVar11;

  if (param_3 == (undefined1 *)0x0) {
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 100), uVar1 != 0)) {
LAB_10001da9:
      uVar5 = (ulong)uVar1;
      uVar2 = 0;
      do {
        uVar1 = (uint)uVar5;
        abStack_13[uVar2 + 1] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
        uVar4 = uVar2 + 1;
        if (8 < uVar2) break;
        uVar5 = uVar5 / 10;
        uVar2 = uVar4;
      } while (9 < uVar1);
      do {
        if (param_3 != (undefined1 *)0x0) {
          uVar5 = 0;
          do {
            uVar2 = uVar5;
            uVar5 = uVar2 + 1;
          } while (param_3[uVar2] != '\0');
          if (uVar5 < 0x300) {
            param_3[uVar2] = abStack_13[uVar4];
            param_3[uVar5] = 0;
          }
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      goto LAB_10001e69;
    }
  }
  else {
    *param_3 = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'm';
      pcVar3 = str_1000c59c;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 100);
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar5 < 0x300) {
        param_3[uVar2] = 0x20;
        uVar2 = uVar5;
      }
      param_3[uVar2] = 0;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        cVar8 = 'h';
        pcVar3 = str_1000c600;
        do {
          pcVar3 = pcVar3 + 1;
          param_3[uVar2] = cVar8;
          uVar2 = uVar2 + 1;
          cVar8 = *pcVar3;
          if (cVar8 == '\0') break;
        } while (uVar2 < 0x2ff);
      }
      param_3[uVar2] = 0;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar5 < 0x300) {
        param_3[uVar2] = 0x3d;
        uVar2 = uVar5;
      }
      param_3[uVar2] = 0;
      if (uVar1 != 0) goto LAB_10001da9;
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
LAB_10001e69:
      if ((param_3 != (undefined1 *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar2] = 0x20;
          uVar2 = uVar5;
        }
        param_3[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar2 + 1 < 0x300) {
          cVar8 = 'p';
          pcVar3 = str_1000c610;
          do {
            pcVar3 = pcVar3 + 1;
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar3;
            if (cVar8 == '\0') break;
          } while (uVar2 < 0x2ff);
        }
        param_3[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        if (uVar5 < 0x300) {
          param_3[uVar2] = 0x3d;
          uVar2 = uVar5;
        }
        param_3[uVar2] = 0;
        uVar5 = 0;
        do {
          uVar2 = uVar5;
          uVar5 = uVar2 + 1;
        } while (param_3[uVar2] != '\0');
        cVar8 = *(char *)(param_1 + 4);
        if (uVar2 + 1 < 0x300 && cVar8 != '\0') {
          pcVar3 = (char *)(param_1 + 5);
          do {
            param_3[uVar2] = cVar8;
            uVar2 = uVar2 + 1;
            cVar8 = *pcVar3;
            if (cVar8 == '\0') break;
            pcVar3 = pcVar3 + 1;
          } while (uVar2 < 0x2ff);
        }
        param_3[uVar2] = 0;
      }
    }
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  uVar1 = *param_2;
  if (param_3 == (undefined1 *)0x0) {
    if (uVar1 != 0) goto LAB_10002059;
LAB_100020e8:
    uVar1 = param_2[1];
LAB_100020f5:
    if (uVar1 != 0) goto LAB_100021e9;
LAB_10002278:
    uVar1 = param_2[2];
LAB_10002285:
    if (uVar1 != 0) goto LAB_10002379;
LAB_10002408:
    uVar1 = param_2[3];
LAB_10002415:
    if (uVar1 != 0) goto LAB_10002509;
LAB_10002598:
    uVar1 = param_2[4];
LAB_100025a5:
    if (uVar1 != 0) goto LAB_100026e9;
LAB_10002778:
    uVar1 = param_2[5];
LAB_10002785:
    if (uVar1 != 0) goto LAB_100028b9;
LAB_10002948:
    uVar1 = param_2[6];
LAB_10002955:
    if (uVar1 != 0) goto LAB_10002a89;
LAB_10002b18:
    uVar1 = param_2[7];
LAB_10002b25:
    if (uVar1 != 0) goto LAB_10002c09;
LAB_10002c98:
    uVar1 = param_2[8];
LAB_10002ca5:
    if (uVar1 != 0) goto LAB_10002da9;
LAB_10002e38:
    uVar1 = param_2[9];
LAB_10002e45:
    if (uVar1 != 0) goto LAB_10002f49;
LAB_10002fd8:
    uVar1 = param_2[10];
LAB_10002fe5:
    if (uVar1 != 0) goto LAB_100030f9;
LAB_10003188:
    uVar1 = param_2[0xb];
LAB_10003195:
    if (uVar1 != 0) goto LAB_100032a9;
LAB_10003338:
    uVar1 = param_2[0xc];
LAB_10003345:
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'p';
      pcVar3 = str_1000c61a;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[1];
    }
    else {
LAB_10002059:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_100020a8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_100020e8;
          goto LAB_100020a8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[1];
      if (param_3 == (undefined1 *)0x0) goto LAB_100020f5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'p';
      pcVar3 = str_1000c625;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[2];
    }
    else {
LAB_100021e9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002238:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002278;
          goto LAB_10002238;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[2];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002285;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'f';
      pcVar3 = str_1000c633;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[3];
    }
    else {
LAB_10002379:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_100023c8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002408;
          goto LAB_100023c8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[3];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002415;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar8 = 'f';
      pcVar3 = str_1000c643;
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[4];
    }
    else {
LAB_10002509:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002558:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002598;
          goto LAB_10002558;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[4];
      if (param_3 == (undefined1 *)0x0) goto LAB_100025a5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x67;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x72;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x61;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x70;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x68;
              if (uVar5 < 0x2ff) {
                uVar5 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x69;
                if (uVar5 < 0x2ff) {
                  uVar5 = uVar2 + 8;
                  param_3[uVar2 + 7] = 99;
                  if (uVar5 < 0x2ff) {
                    param_3[uVar2 + 8] = 0x73;
                    uVar5 = uVar2 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[5];
    }
    else {
LAB_100026e9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002738:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002778;
          goto LAB_10002738;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[5];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002785;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x73;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x74;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x6f;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x72;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x61;
              if (uVar5 < 0x2ff) {
                uVar5 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x67;
                if (uVar5 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x65;
                  uVar5 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[6];
    }
    else {
LAB_100028b9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002908:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002948;
          goto LAB_10002908;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[6];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002955;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x6e;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x65;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x74;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x77;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x6f;
              if (uVar5 < 0x2ff) {
                uVar5 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x72;
                if (uVar5 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x6b;
                  uVar5 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[7];
    }
    else {
LAB_10002a89:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002ad8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002b18;
          goto LAB_10002ad8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[7];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002b25;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x75;
      uVar4 = uVar5;
      if (uVar5 != 0x2ff) {
        uVar4 = uVar2 + 2;
        param_3[uVar5] = 0x73;
        if (uVar4 < 0x2ff) {
          param_3[uVar2 + 2] = 0x62;
          uVar4 = uVar2 + 3;
        }
      }
    }
    else {
      uVar4 = uVar2;
    }
    param_3[uVar4] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[8];
    }
    else {
LAB_10002c09:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002c58:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002c98;
          goto LAB_10002c58;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[8];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002ca5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x61;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x75;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 100;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x69;
            if (uVar5 < 0x2ff) {
              param_3[uVar2 + 5] = 0x6f;
              uVar5 = uVar2 + 6;
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[9];
    }
    else {
LAB_10002da9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002df8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002e38;
          goto LAB_10002df8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[9];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002e45;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x69;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x6e;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x70;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x75;
            if (uVar5 < 0x2ff) {
              param_3[uVar2 + 5] = 0x74;
              uVar5 = uVar2 + 6;
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[10];
    }
    else {
LAB_10002f49:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10002f98:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10002fd8;
          goto LAB_10002f98;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[10];
      if (param_3 == (undefined1 *)0x0) goto LAB_10002fe5;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x62;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x72;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x69;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 100;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x67;
              if (uVar5 < 0x2ff) {
                param_3[uVar2 + 6] = 0x65;
                uVar5 = uVar2 + 7;
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xb];
    }
    else {
LAB_100030f9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_10003148:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10003188;
          goto LAB_10003148;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xb];
      if (param_3 == (undefined1 *)0x0) goto LAB_10003195;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x73;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x65;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x72;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x69;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x61;
              if (uVar5 < 0x2ff) {
                param_3[uVar2 + 6] = 0x6c;
                uVar5 = uVar2 + 7;
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      uVar1 = param_2[0xc];
    }
    else {
LAB_100032a9:
      uVar5 = 0;
      do {
        abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
        uVar2 = uVar5 + 1;
        if (8 < uVar5) break;
        bVar11 = 9 < uVar1;
        uVar5 = uVar2;
        uVar1 = uVar1 / 10;
      } while (bVar11);
LAB_100032f8:
      do {
        uVar5 = uVar2 - 1;
        if (param_3 == (undefined1 *)0x0) {
          uVar2 = uVar5;
          if (uVar5 == 0) goto LAB_10003338;
          goto LAB_100032f8;
        }
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          uVar4 = uVar6 + 1;
        } while (param_3[uVar6] != '\0');
        if (uVar4 < 0x300) {
          param_3[uVar6] = abStack_13[uVar2];
          param_3[uVar4] = 0;
        }
        uVar2 = uVar5;
      } while (uVar5 != 0);
      uVar1 = param_2[0xc];
      if (param_3 == (undefined1 *)0x0) goto LAB_10003345;
    }
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2 + 1] != '\0');
    if (uVar2 + 2 < 0x300) {
      param_3[uVar5] = 0x75;
      bVar11 = uVar5 != 0x2fe;
      uVar5 = uVar2 + 2;
      if (bVar11) {
        uVar5 = uVar2 + 3;
        param_3[uVar2 + 2] = 0x6e;
        if (uVar5 < 0x2ff) {
          uVar5 = uVar2 + 4;
          param_3[uVar2 + 3] = 0x6b;
          if (uVar5 < 0x2ff) {
            uVar5 = uVar2 + 5;
            param_3[uVar2 + 4] = 0x6e;
            if (uVar5 < 0x2ff) {
              uVar5 = uVar2 + 6;
              param_3[uVar2 + 5] = 0x6f;
              if (uVar5 < 0x2ff) {
                uVar5 = uVar2 + 7;
                param_3[uVar2 + 6] = 0x77;
                if (uVar5 < 0x2ff) {
                  param_3[uVar2 + 7] = 0x6e;
                  uVar5 = uVar2 + 8;
                }
              }
            }
          }
        }
      }
    }
    param_3[uVar5] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    if (uVar1 == 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        uVar5 = uVar2 + 1;
      } while (param_3[uVar2] != '\0');
      if (uVar2 + 1 < 0x300) {
        *(undefined2 *)(param_3 + uVar2) = 0x30;
      }
      goto LAB_10003519;
    }
  }
  uVar5 = 0;
  do {
    abStack_13[uVar5 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
    uVar2 = uVar5 + 1;
    if (8 < uVar5) break;
    bVar11 = 9 < uVar1;
    uVar5 = uVar2;
    uVar1 = uVar1 / 10;
  } while (bVar11);
  do {
    if (param_3 != (undefined1 *)0x0) {
      uVar5 = 0;
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 + 1;
      } while (param_3[uVar4] != '\0');
      if (uVar5 < 0x300) {
        param_3[uVar4] = abStack_13[uVar2];
        param_3[uVar5] = 0;
      }
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
LAB_10003519:
  pcVar3 = &DAT_1000c6f2;
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0xd] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'f';
      pcVar9 = str_1000c68d;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0xe] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'i';
      pcVar9 = str_1000c6a1;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0xf] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'a';
      pcVar9 = str_1000c6af;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0x10] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'a';
      pcVar9 = str_1000c6bd;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0x11] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'm';
      pcVar9 = &DAT_1000c6ca;
      do {
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
        pcVar9 = pcVar9 + 1;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0x12] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'g';
      pcVar9 = &DAT_1000c6d4;
      do {
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
        pcVar9 = pcVar9 + 1;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  pcVar7 = &DAT_1000c6f2;
  if (param_2[0x13] == 0) {
    pcVar7 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar7, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'i';
      pcVar9 = str_1000c6dd;
      do {
        pcVar9 = pcVar9 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar9;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar7;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  if (param_2[0x14] == 0) {
    pcVar3 = str_1000c6f7;
  }
  if ((param_3 != (undefined1 *)0x0) && (cVar8 = *pcVar3, cVar8 != '\0')) {
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x20;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      cVar10 = 'p';
      pcVar7 = str_1000c6e7;
      do {
        pcVar7 = pcVar7 + 1;
        param_3[uVar2] = cVar10;
        uVar2 = uVar2 + 1;
        cVar10 = *pcVar7;
        if (cVar10 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar5 < 0x300) {
      param_3[uVar2] = 0x3d;
      uVar2 = uVar5;
    }
    param_3[uVar2] = 0;
    uVar5 = 0;
    do {
      uVar2 = uVar5;
      uVar5 = uVar2 + 1;
    } while (param_3[uVar2] != '\0');
    if (uVar2 + 1 < 0x300) {
      do {
        pcVar3 = pcVar3 + 1;
        param_3[uVar2] = cVar8;
        uVar2 = uVar2 + 1;
        cVar8 = *pcVar3;
        if (cVar8 == '\0') break;
      } while (uVar2 < 0x2ff);
    }
    param_3[uVar2] = 0;
  }
  return;
}

#undef DAT_1000c6ca
#undef DAT_1000c6d4
#undef DAT_1000c6f2
#undef str_1000c59c
#undef str_1000c600
#undef str_1000c610
#undef str_1000c61a
#undef str_1000c625
#undef str_1000c633
#undef str_1000c643
#undef str_1000c68d
#undef str_1000c6a1
#undef str_1000c6af
#undef str_1000c6bd
#undef str_1000c6dd
#undef str_1000c6e7
#undef str_1000c6f7
#undef abStack_13

#undef DAT_1000c66f
#define DAT_1000c66f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b7U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b8U)))
#undef DAT_1000c671
#define DAT_1000c671 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_1000c672
#define DAT_1000c672 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1baU)))
#undef DAT_1000c673
#define DAT_1000c673 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bbU)))
#undef DAT_1000c674
#define DAT_1000c674 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bcU)))
#undef DAT_1000c675
#define DAT_1000c675 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bdU)))
#undef DAT_1000c676
#define DAT_1000c676 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1beU)))
#undef DAT_1000c677
#define DAT_1000c677 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bfU)))
#undef DAT_1000c678
#define DAT_1000c678 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c0U)))
#undef str_1000c56f
#define str_1000c56f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7U)))
#undef str_1000c656
#define str_1000c656 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_1000c65f
#define str_1000c65f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_1000c667
#define str_1000c667 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_1000c67f
#define str_1000c67f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000c686
#define str_1000c686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_1000c6fd
#define str_1000c6fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x245U)))
#undef str_1000c711
#define str_1000c711 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000c718
#define str_1000c718 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x260U)))
#undef str_1000c73c
#define str_1000c73c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x284U)))
#undef str_1000c752
#define str_1000c752 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29aU)))
#undef str_1000c75b
#define str_1000c75b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a3U)))
#undef str_1000c76b
#define str_1000c76b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b3U)))
#undef str_1000c77f
#define str_1000c77f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c7U)))
#undef str_1000c797
#define str_1000c797 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dfU)))
#undef str_1000c7af
#define str_1000c7af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f7U)))
#undef str_1000c7c8
#define str_1000c7c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x310U)))
#undef str_1000c7d9
#define str_1000c7d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x321U)))
#undef str_1000c7e9
#define str_1000c7e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x331U)))
#undef str_1000c7f8
#define str_1000c7f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
#undef str_1000c80e
#define str_1000c80e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x356U)))
#undef str_1000c818
#define str_1000c818 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x360U)))
#undef str_1000c824
#define str_1000c824 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36cU)))
#undef str_1000c839
#define str_1000c839 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x381U)))
#undef str_1000c845
#define str_1000c845 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38dU)))
#undef str_1000c85e
#define str_1000c85e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a6U)))
#undef str_1000c866
#define str_1000c866 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aeU)))
#undef str_1000c86e
#define str_1000c86e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b6U)))
#undef str_1000c888
#define str_1000c888 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d0U)))
#undef str_1000c892
#define str_1000c892 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3daU)))
#define uStack_5d0 (*(undefined8 *)(frame + 16))
#define cStack_349 (*(char *)(frame + 663))
#define local_5c8 (*(undefined4 *)(frame + 24))
#define local_5c4 (*(undefined1 (*)[635])(frame + 28))
#define cStack_c9 (*(char *)(frame + 1303))
#define local_348 (*(undefined2 *)(frame + 664))
#define local_346 (*(undefined1 (*)[637])(frame + 666))
#define local_c8 (*(undefined4 *)(frame + 1304))
#define local_5c (*(uint *)(frame + 1412))
#define local_58 (*(int * *)(frame + 1416))
#define local_4c (*(uint *)(frame + 1428))
#define local_48 (*(undefined4 *)(frame + 1432))
#define local_44 (*(undefined4 *)(frame + 1436))
#define local_38 (*(int * *)(frame + 1448))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

undefined8 recovered_10003ea0(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[1536] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  char *pcVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  byte bVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  ulong uVar15;
  ushort uVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  char *pcVar21;
  ulong uVar22;
  char cVar23;
  char cVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;

  if (param_2 == (byte *)0x0) {
    return 0;
  }
  bVar11 = param_2[8];
  switch((uintptr_t)(bVar11)) {
  case 1:
    pcVar6 = str_1000c65f;
    break;
  case 2:
    pcVar6 = str_1000c667;
    break;
  case 3:
    pcVar6 = str_1000c656;
    break;
  case 4:
    pcVar6 = &DAT_1000c673;
    break;
  default:
switchD_10003edd_caseD_5:
    pcVar12 = str_1000c711;
    if (bVar11 == 6) {
      pcVar12 = str_1000c67f;
    }
    pcVar6 = str_1000c686;
    if (bVar11 != 7) {
      pcVar6 = pcVar12;
    }
    break;
  case 0xc:
    if (param_2[9] != 3) goto switchD_10003edd_caseD_5;
    pcVar6 = &DAT_1000c66f;
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  *param_3 = *param_3 + 1;
  uStack_5d0 = 0x10003f4f;
  local_38 = param_1;
  recovered_1000b1e0((long)param_3,pcVar6);
  PF_PART1(local_348, 0) = '\0';
  uVar5 = 0xffffffffffffffff;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 - 1] != '\0');
  if (uVar8 + 2 < 0x280) {
    local_346[uVar8 - 1] = 0x72;
    bVar26 = uVar5 != 0x27e;
    uVar5 = uVar8 + 2;
    if (bVar26) {
      uVar5 = uVar8 + 3;
      local_346[uVar8] = 0x6f;
      if (uVar5 < 0x27f) {
        uVar5 = uVar8 + 4;
        local_346[uVar8 + 1] = 0x6c;
        if (uVar5 < 0x27f) {
          uVar5 = uVar8 + 5;
          local_346[uVar8 + 2] = 0x65;
          if (uVar5 < 0x27f) {
            local_346[uVar8 + 3] = 0x3d;
            uVar5 = uVar8 + 6;
          }
        }
      }
    }
  }
  local_5c4[uVar5 + 0x27c] = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 + 0x27c] != '\0');
  cVar10 = *pcVar6;
  if (uVar8 + 1 < 0x280) {
    pcVar12 = pcVar6;
    cVar7 = cVar10;
    if (cVar10 != '\0') {
      do {
        local_5c4[uVar8 + 0x27c] = cVar7;
        uVar8 = uVar8 + 1;
        cVar7 = pcVar12[1];
        if (cVar7 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar8 < 0x27f);
    }
  }
  local_5c4[uVar8 + 0x27c] = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 + 0x27c] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar7 = ' ';
    pcVar12 = str_1000c6fd;
    do {
      pcVar12 = pcVar12 + 1;
      local_5c4[uVar8 + 0x27c] = cVar7;
      uVar8 = uVar8 + 1;
      cVar7 = *pcVar12;
      if (cVar7 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  local_5c4[uVar8 + 0x27c] = 0;
  local_58 = param_3;
  if (cVar10 != '\0') {
    pcVar12 = pcVar6 + 6;
    do {
      cVar7 = cVar10 + ' ';
      if (0x19 < (byte)(cVar10 + 0xbfU)) {
        cVar7 = cVar10;
      }
      cVar10 = pcVar12[-5];
      if (cVar7 == 'd') {
        pcVar21 = str_1000c711 + 1;
        if (cVar10 != '\0') {
          cVar7 = cVar10 + ' ';
          if (0x19 < (byte)(cVar10 + 0xbfU)) {
            cVar7 = cVar10;
          }
          if (cVar7 != 'e') goto LAB_100040fa;
          cVar7 = pcVar12[-4];
          pcVar21 = str_1000c711 + 2;
          if (cVar7 != '\0') {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            if (cVar23 != 'v') goto LAB_100040fa;
            cVar7 = pcVar12[-3];
            pcVar21 = str_1000c711 + 3;
            if (cVar7 != '\0') {
              cVar23 = cVar7 + ' ';
              if (0x19 < (byte)(cVar7 + 0xbfU)) {
                cVar23 = cVar7;
              }
              if (cVar23 != 'i') goto LAB_100040fa;
              cVar7 = pcVar12[-2];
              pcVar21 = str_1000c711 + 4;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 'c') goto LAB_100040fa;
                cVar7 = pcVar12[-1];
                pcVar21 = str_1000c711 + 5;
                if (cVar7 != '\0') {
                  cVar23 = cVar7 + ' ';
                  if (0x19 < (byte)(cVar7 + 0xbfU)) {
                    cVar23 = cVar7;
                  }
                  if (cVar23 != 'e') goto LAB_100040fa;
                  pcVar21 = str_1000c711 + 6;
                  if (*pcVar12 != '\0') goto LAB_100054d4;
                }
              }
            }
          }
        }
        if (*pcVar21 == '\0') goto LAB_100054d4;
      }
LAB_100040fa:
      pcVar12 = pcVar12 + 1;
    } while (cVar10 != '\0');
  }
  if (((param_3[0x14] != 0) && (param_2[8] == 0xc)) && (param_2[9] == 3)) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar10 = ' ';
      pcVar6 = str_1000c718;
      do {
        pcVar6 = pcVar6 + 1;
        local_5c4[uVar8 + 0x27c] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar6;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    goto LAB_100054cc;
  }
  local_5c8 = 0;
  if (((local_38 == (int *)0x0) || (*local_38 != 0x54584b57)) ||
     (((uint)local_38[2] < 100 || (local_38[0x18] == 0)))) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar10 = ' ';
      pcVar12 = str_1000c77f;
      do {
        pcVar12 = pcVar12 + 1;
        local_5c4[uVar8 + 0x27c] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x27f);
    }
  }
  else {
    if ((code *)(ulong)(uint)local_38[0x17] != (code *)0x0) {
      uStack_5d0 = 0x100042ed;
      iVar19 = (*(code *)(ulong)(uint)local_38[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_5c8)
      ;
      if (iVar19 != 0) {
        uVar25 = 1;
        if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
          uVar25 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
        }
        uVar20 = uVar25 | 2;
        if (*(uint *)(param_2 + 0x18) == 0) {
          uVar20 = uVar25;
        }
        if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
          uVar20 = uVar25 | 1;
        }
        uVar25 = uVar20 | 2;
        if (*(uint *)(param_2 + 0x1c) == 0) {
          uVar25 = uVar20;
        }
        if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
          uVar25 = uVar20 | 1;
        }
        uVar20 = uVar25 | 2;
        if (*(uint *)(param_2 + 0x20) == 0) {
          uVar20 = uVar25;
        }
        if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
          uVar20 = uVar25 | 1;
        }
        uVar25 = uVar20 | 2;
        if (*(uint *)(param_2 + 0x24) == 0) {
          uVar25 = uVar20;
        }
        if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
          uVar25 = uVar20 | 1;
        }
        uVar20 = uVar25 | 2;
        if (*(uint *)(param_2 + 0x28) == 0) {
          uVar20 = uVar25;
        }
        if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
          uVar20 = uVar25 | 1;
        }
        cVar10 = *pcVar6;
        if (cVar10 != '\0') {
          local_5c = uVar20;
          pcVar12 = pcVar6 + 7;
          cVar7 = cVar10;
          do {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            cVar7 = pcVar12[-6];
            if (cVar23 == 's') {
              pcVar21 = str_1000c65f + 1;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 't') goto LAB_10004776;
                cVar23 = pcVar12[-5];
                pcVar21 = str_1000c65f + 2;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'o') goto LAB_10004776;
                  cVar23 = pcVar12[-4];
                  pcVar21 = str_1000c65f + 3;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'r') goto LAB_10004776;
                    cVar23 = pcVar12[-3];
                    pcVar21 = str_1000c65f + 4;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'a') goto LAB_10004776;
                      cVar23 = pcVar12[-2];
                      pcVar21 = str_1000c65f + 5;
                      if (cVar23 != '\0') {
                        cVar24 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar24 = cVar23;
                        }
                        if (cVar24 != 'g') goto LAB_10004776;
                        cVar23 = pcVar12[-1];
                        pcVar21 = str_1000c65f + 6;
                        if (cVar23 != '\0') {
                          cVar24 = cVar23 + ' ';
                          if (0x19 < (byte)(cVar23 + 0xbfU)) {
                            cVar24 = cVar23;
                          }
                          if (cVar24 != 'e') goto LAB_10004776;
                          pcVar21 = str_1000c65f + 7;
                          if (*pcVar12 != '\0') goto LAB_100069bd;
                        }
                      }
                    }
                  }
                }
              }
              if (*pcVar21 == '\0') goto LAB_100069bd;
            }
LAB_10004776:
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          pcVar12 = pcVar6 + 7;
          cVar7 = cVar10;
          do {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            cVar7 = pcVar12[-6];
            if (cVar23 == 'n') {
              pcVar21 = str_1000c667 + 1;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 'e') goto LAB_1000675d;
                cVar23 = pcVar12[-5];
                pcVar21 = str_1000c667 + 2;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 't') goto LAB_1000675d;
                  cVar23 = pcVar12[-4];
                  pcVar21 = str_1000c667 + 3;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'w') goto LAB_1000675d;
                    cVar23 = pcVar12[-3];
                    pcVar21 = str_1000c667 + 4;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'o') goto LAB_1000675d;
                      cVar23 = pcVar12[-2];
                      pcVar21 = str_1000c667 + 5;
                      if (cVar23 != '\0') {
                        cVar24 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar24 = cVar23;
                        }
                        if (cVar24 != 'r') goto LAB_1000675d;
                        cVar23 = pcVar12[-1];
                        pcVar21 = str_1000c667 + 6;
                        if (cVar23 != '\0') {
                          cVar24 = cVar23 + ' ';
                          if (0x19 < (byte)(cVar23 + 0xbfU)) {
                            cVar24 = cVar23;
                          }
                          if (cVar24 != 'k') goto LAB_1000675d;
                          pcVar21 = str_1000c667 + 7;
                          if (*pcVar12 != '\0') goto LAB_100069bd;
                        }
                      }
                    }
                  }
                }
              }
              if (*pcVar21 == '\0') goto LAB_100069bd;
            }
LAB_1000675d:
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          pcVar12 = pcVar6 + 3;
          cVar7 = cVar10;
          do {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            cVar7 = pcVar12[-2];
            if (cVar23 == 'u') {
              pcVar21 = &DAT_1000c670;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 's') goto LAB_10006931;
                cVar23 = pcVar12[-1];
                pcVar21 = &DAT_1000c671;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'b') goto LAB_10006931;
                  pcVar21 = &DAT_1000c672;
                  if (*pcVar12 != '\0') goto LAB_100069bd;
                }
              }
              if (*pcVar21 == '\0') goto LAB_100069bd;
            }
LAB_10006931:
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          pcVar12 = pcVar6 + 8;
          cVar7 = cVar10;
          do {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            cVar7 = pcVar12[-7];
            if (cVar23 == 'f') {
              pcVar21 = str_1000c752 + 1;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 'i') goto LAB_10006a01;
                cVar23 = pcVar12[-6];
                pcVar21 = str_1000c752 + 2;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'r') goto LAB_10006a01;
                  cVar23 = pcVar12[-5];
                  pcVar21 = str_1000c752 + 3;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'e') goto LAB_10006a01;
                    cVar23 = pcVar12[-4];
                    pcVar21 = str_1000c752 + 4;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'w') goto LAB_10006a01;
                      cVar23 = pcVar12[-3];
                      pcVar21 = str_1000c752 + 5;
                      if (cVar23 != '\0') {
                        cVar24 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar24 = cVar23;
                        }
                        if (cVar24 != 'i') goto LAB_10006a01;
                        cVar23 = pcVar12[-2];
                        pcVar21 = str_1000c752 + 6;
                        if (cVar23 != '\0') {
                          cVar24 = cVar23 + ' ';
                          if (0x19 < (byte)(cVar23 + 0xbfU)) {
                            cVar24 = cVar23;
                          }
                          if (cVar24 != 'r') goto LAB_10006a01;
                          cVar23 = pcVar12[-1];
                          pcVar21 = str_1000c752 + 7;
                          if (cVar23 != '\0') {
                            cVar24 = cVar23 + ' ';
                            if (0x19 < (byte)(cVar23 + 0xbfU)) {
                              cVar24 = cVar23;
                            }
                            if (cVar24 != 'e') goto LAB_10006a01;
                            pcVar21 = str_1000c752 + 8;
                            if (*pcVar12 != '\0') goto LAB_100069bd;
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (*pcVar21 == '\0') goto LAB_100069bd;
            }
LAB_10006a01:
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          pcVar12 = pcVar6 + 5;
          cVar7 = cVar10;
          do {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            cVar7 = pcVar12[-4];
            if (cVar23 == 'a') {
              pcVar21 = &DAT_1000c674;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 'u') goto LAB_10006bbb;
                cVar23 = pcVar12[-3];
                pcVar21 = &DAT_1000c675;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'd') goto LAB_10006bbb;
                  cVar23 = pcVar12[-2];
                  pcVar21 = &DAT_1000c676;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'i') goto LAB_10006bbb;
                    cVar23 = pcVar12[-1];
                    pcVar21 = &DAT_1000c677;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'o') goto LAB_10006bbb;
                      pcVar21 = &DAT_1000c678;
                      if (*pcVar12 != '\0') goto LAB_100069bd;
                    }
                  }
                }
              }
              if (*pcVar21 == '\0') goto LAB_100069bd;
            }
LAB_10006bbb:
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          pcVar12 = pcVar6 + 8;
          do {
            cVar7 = cVar10 + ' ';
            if (0x19 < (byte)(cVar10 + 0xbfU)) {
              cVar7 = cVar10;
            }
            cVar10 = pcVar12[-7];
            if (cVar7 == 'g') {
              pcVar21 = str_1000c656 + 1;
              if (cVar10 != '\0') {
                cVar7 = cVar10 + ' ';
                if (0x19 < (byte)(cVar10 + 0xbfU)) {
                  cVar7 = cVar10;
                }
                if (cVar7 != 'r') goto LAB_10006ce8;
                cVar7 = pcVar12[-6];
                pcVar21 = str_1000c656 + 2;
                if (cVar7 != '\0') {
                  cVar23 = cVar7 + ' ';
                  if (0x19 < (byte)(cVar7 + 0xbfU)) {
                    cVar23 = cVar7;
                  }
                  if (cVar23 != 'a') goto LAB_10006ce8;
                  cVar7 = pcVar12[-5];
                  pcVar21 = str_1000c656 + 3;
                  if (cVar7 != '\0') {
                    cVar23 = cVar7 + ' ';
                    if (0x19 < (byte)(cVar7 + 0xbfU)) {
                      cVar23 = cVar7;
                    }
                    if (cVar23 != 'p') goto LAB_10006ce8;
                    cVar7 = pcVar12[-4];
                    pcVar21 = str_1000c656 + 4;
                    if (cVar7 != '\0') {
                      cVar23 = cVar7 + ' ';
                      if (0x19 < (byte)(cVar7 + 0xbfU)) {
                        cVar23 = cVar7;
                      }
                      if (cVar23 != 'h') goto LAB_10006ce8;
                      cVar7 = pcVar12[-3];
                      pcVar21 = str_1000c656 + 5;
                      if (cVar7 != '\0') {
                        cVar23 = cVar7 + ' ';
                        if (0x19 < (byte)(cVar7 + 0xbfU)) {
                          cVar23 = cVar7;
                        }
                        if (cVar23 != 'i') goto LAB_10006ce8;
                        cVar7 = pcVar12[-2];
                        pcVar21 = str_1000c656 + 6;
                        if (cVar7 != '\0') {
                          cVar23 = cVar7 + ' ';
                          if (0x19 < (byte)(cVar7 + 0xbfU)) {
                            cVar23 = cVar7;
                          }
                          if (cVar23 != 'c') goto LAB_10006ce8;
                          cVar7 = pcVar12[-1];
                          pcVar21 = str_1000c656 + 7;
                          if (cVar7 != '\0') {
                            cVar23 = cVar7 + ' ';
                            if (0x19 < (byte)(cVar7 + 0xbfU)) {
                              cVar23 = cVar7;
                            }
                            if (cVar23 != 's') goto LAB_10006ce8;
                            pcVar21 = str_1000c656 + 8;
                            if (*pcVar12 != '\0') goto LAB_100069bd;
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (*pcVar21 == '\0') goto LAB_100069bd;
            }
LAB_10006ce8:
            pcVar12 = pcVar12 + 1;
          } while (cVar10 != '\0');
        }
        goto LAB_10006e74;
      }
    }
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar10 = ' ';
      pcVar12 = str_1000c797;
      do {
        pcVar12 = pcVar12 + 1;
        local_5c4[uVar8 + 0x27c] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x27f);
    }
  }
LAB_1000442c:
  local_5c4[uVar8 + 0x27c] = 0;
  bVar26 = false;
LAB_10004437:
  local_c8 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  bVar28 = false;
  bVar27 = false;
  if ((param_2[8] == 1) && (param_2[9] == 6)) {
    uVar25 = *(uint *)(param_2 + 0x28);
    if ((uVar25 & 1) == 0 && uVar25 != 0) {
      local_5c8 = 0;
      if (((((uVar25 & 0xfffffff0) != 0 && local_38 != (int *)0x0) && (*local_38 == 0x54584b57)) &&
          (0x67 < (uint)local_38[2])) && ((code *)(ulong)(uint)local_38[0x19] != (code *)0x0)) {
        uStack_5d0 = 0x100044cd;
        iVar19 = (*(code *)(ulong)(uint)local_38[0x19])(uVar25 & 0xfffffff0,0,0x1000);
        if (iVar19 != 0) {
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_346[uVar8 - 1] != '\0');
          if (uVar8 + 2 < 0x280) {
            local_346[uVar8 - 1] = 0x61;
            bVar27 = uVar5 != 0x27e;
            uVar5 = uVar8 + 2;
            if (bVar27) {
              uVar5 = uVar8 + 3;
              local_346[uVar8] = 0x68;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 4;
                local_346[uVar8 + 1] = 99;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 5;
                  local_346[uVar8 + 2] = 0x69;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 6;
                    local_346[uVar8 + 3] = 0x4d;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 7;
                      local_346[uVar8 + 4] = 0x6d;
                      if (uVar5 < 0x27f) {
                        uVar5 = uVar8 + 8;
                        local_346[uVar8 + 5] = 0x69;
                        if (uVar5 < 0x27f) {
                          local_346[uVar8 + 6] = 0x6f;
                          uVar5 = uVar8 + 9;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c4[uVar5 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_5c8 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar7 = (char)uVar25;
            cVar10 = cVar7 + '7';
            if (uVar25 < 10) {
              cVar10 = cVar7 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar10;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          if (((local_5c8 != 0) && (*local_38 == 0x54584b57)) &&
             ((0x6b < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)))) {
            uStack_5d0 = 0x10007274;
            (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8,4,&local_c8);
            if (((local_5c8 != 0) && (*local_38 == 0x54584b57)) &&
               ((0x6b < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0))))
            {
              uStack_5d0 = 0x100072ae;
              (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8 + 4,4,&local_44);
              if ((((local_5c8 != 0) && (*local_38 == 0x54584b57)) && (0x6b < (uint)local_38[2])) &&
                 ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)) {
                uStack_5d0 = 0x100072e0;
                (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8 + 0xc,4,&local_48);
                if (((local_5c8 != 0) && (*local_38 == 0x54584b57)) &&
                   ((0x6b < (uint)local_38[2] &&
                    ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)))) {
                  uStack_5d0 = 0x10007312;
                  (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8 + 0x10,4,&local_4c);
                }
              }
            }
          }
          if (((-1 < (int)local_44) && (local_5c8 != 0)) && (*local_38 == 0x54584b57)) {
            iVar19 = local_5c8 + 4;
            uVar25 = local_38[2];
            if (uVar25 < 0x70) {
joined_r0x10007fd6:
              if (uVar25 < 0x6c) goto LAB_10007fef;
            }
            else if ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0) {
              uStack_5d0 = 0x10007fb3;
              (*(code *)(ulong)(uint)local_38[0x1b])(iVar19,4,local_44 | 0x80000000);
              if ((local_5c8 == 0) || (*local_38 != 0x54584b57)) goto LAB_10007fef;
              uVar25 = local_38[2];
              iVar19 = local_5c8 + 4;
              goto joined_r0x10007fd6;
            }
            if ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0) {
              uStack_5d0 = 0x10007fef;
              (*(code *)(ulong)(uint)local_38[0x1a])(iVar19,4,&local_44);
            }
          }
LAB_10007fef:
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_346[uVar8 - 1] != '\0');
          if (uVar8 + 2 < 0x280) {
            local_346[uVar8 - 1] = 0x61;
            bVar27 = uVar5 != 0x27e;
            uVar5 = uVar8 + 2;
            if (bVar27) {
              uVar5 = uVar8 + 3;
              local_346[uVar8] = 0x68;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 4;
                local_346[uVar8 + 1] = 99;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 5;
                  local_346[uVar8 + 2] = 0x69;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 6;
                    local_346[uVar8 + 3] = 0x43;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 7;
                      local_346[uVar8 + 4] = 0x61;
                      if (uVar5 < 0x27f) {
                        local_346[uVar8 + 5] = 0x70;
                        uVar5 = uVar8 + 8;
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c4[uVar5 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_c8 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar10 = (char)uVar25;
            cVar7 = cVar10 + '7';
            if (uVar25 < 10) {
              cVar7 = cVar10 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar7;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_346[uVar8 - 1] != '\0');
          if (uVar8 + 2 < 0x280) {
            local_346[uVar8 - 1] = 0x61;
            bVar27 = uVar5 != 0x27e;
            uVar5 = uVar8 + 2;
            if (bVar27) {
              uVar5 = uVar8 + 3;
              local_346[uVar8] = 0x68;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 4;
                local_346[uVar8 + 1] = 99;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 5;
                  local_346[uVar8 + 2] = 0x69;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 6;
                    local_346[uVar8 + 3] = 0x47;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 7;
                      local_346[uVar8 + 4] = 0x68;
                      if (uVar5 < 0x27f) {
                        local_346[uVar8 + 5] = 99;
                        uVar5 = uVar8 + 8;
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c4[uVar5 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_44 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar10 = (char)uVar25;
            cVar7 = cVar10 + '7';
            if (uVar25 < 10) {
              cVar7 = cVar10 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar7;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar8 + 1 < 0x280) {
            cVar10 = 'a';
            pcVar12 = str_1000c80e;
            do {
              pcVar12 = pcVar12 + 1;
              local_5c4[uVar8 + 0x27c] = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar12;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x27f);
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_48 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar10 = (char)uVar25;
            cVar7 = cVar10 + '7';
            if (uVar25 < 10) {
              cVar7 = cVar10 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar7;
              local_346[uVar8 - 1] = 0;
            }
            uVar25 = local_4c;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar8 + 1 < 0x280) {
            cVar10 = 'a';
            pcVar12 = str_1000c818;
            do {
              pcVar12 = pcVar12 + 1;
              local_5c4[uVar8 + 0x27c] = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar12;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x27f);
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          bVar27 = true;
          do {
            uVar20 = uVar25 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar7 = (char)uVar20;
            cVar10 = cVar7 + '7';
            if (uVar20 < 10) {
              cVar10 = cVar7 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar10;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          goto LAB_10004567;
        }
      }
    }
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar10 = ' ';
      pcVar12 = str_1000c7f8;
      do {
        pcVar12 = pcVar12 + 1;
        local_5c4[uVar8 + 0x27c] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    local_5c4[uVar8 + 0x27c] = 0;
    bVar27 = false;
  }
LAB_10004567:
  local_c8 = 0;
  local_44 = 0;
  local_48 = 0;
  if ((param_2[8] == 4) && (param_2[9] == 3)) {
    uVar25 = *(uint *)(param_2 + 0x14);
    if ((uVar25 & 1) == 0 && uVar25 != 0) {
      local_5c8 = 0;
      if (((((uVar25 & 0xfffffff0) != 0 && local_38 != (int *)0x0) && (*local_38 == 0x54584b57)) &&
          (0x67 < (uint)local_38[2])) && ((code *)(ulong)(uint)local_38[0x19] != (code *)0x0)) {
        uStack_5d0 = 0x100045f1;
        iVar19 = (*(code *)(ulong)(uint)local_38[0x19])(uVar25 & 0xfffffff0,0,0x1000);
        if (iVar19 != 0) {
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_346[uVar8 - 1] != '\0');
          if (uVar8 + 2 < 0x280) {
            local_346[uVar8 - 1] = 0x68;
            bVar28 = uVar5 != 0x27e;
            uVar5 = uVar8 + 2;
            if (bVar28) {
              uVar5 = uVar8 + 3;
              local_346[uVar8] = 100;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 4;
                local_346[uVar8 + 1] = 0x61;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 5;
                  local_346[uVar8 + 2] = 0x4d;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 6;
                    local_346[uVar8 + 3] = 0x6d;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 7;
                      local_346[uVar8 + 4] = 0x69;
                      if (uVar5 < 0x27f) {
                        local_346[uVar8 + 5] = 0x6f;
                        uVar5 = uVar8 + 8;
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c4[uVar5 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_5c8 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar7 = (char)uVar25;
            cVar10 = cVar7 + '7';
            if (uVar25 < 10) {
              cVar10 = cVar7 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar10;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar25 = 0;
          if (local_5c8 != 0) {
            if (((*local_38 == 0x54584b57) && (0x6b < (uint)local_38[2])) &&
               ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)) {
              uStack_5d0 = 0x100073f6;
              (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8,4,&local_c8);
              if (local_5c8 != 0) {
                if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 0x6c)) ||
                   ((code *)(ulong)(uint)local_38[0x1a] == (code *)0x0)) goto LAB_10007438;
                uStack_5d0 = 0x10007430;
                (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8 + 8,4,&local_44);
                uVar25 = local_5c8;
              }
            }
            else {
LAB_10007438:
              uVar25 = local_5c8;
            }
          }
          if ((local_44 & 1) == 0) {
            uVar20 = 0;
            if (uVar25 == 0) goto LAB_10007475;
            if (*local_38 == 0x54584b57) {
              iVar19 = uVar25 + 8;
              uVar2 = local_38[2];
              if (uVar2 < 0x70) {
joined_r0x10008525:
                if (uVar2 < 0x6c) goto LAB_100074a9;
              }
              else if ((code *)(ulong)(uint)local_38[0x1b] != (code *)0x0) {
                uStack_5d0 = 0x100084fa;
                (*(code *)(ulong)(uint)local_38[0x1b])(iVar19,4,local_44 | 1);
                if (local_5c8 == 0) goto LAB_10007475;
                if (*local_38 != 0x54584b57) goto LAB_100074a9;
                uVar2 = local_38[2];
                iVar19 = local_5c8 + 8;
                uVar25 = local_5c8;
                goto joined_r0x10008525;
              }
              uVar20 = uVar25;
              if ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0) {
                uStack_5d0 = 0x10008549;
                (*(code *)(ulong)(uint)local_38[0x1a])(iVar19,4,&local_44);
                uVar20 = local_5c8;
              }
              goto LAB_10007475;
            }
          }
          else {
            uVar20 = uVar25;
LAB_10007475:
            if (((*local_38 == 0x54584b57) && (0x6b < (uint)local_38[2])) &&
               ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)) {
              uStack_5d0 = 0x100074a9;
              (*(code *)(ulong)(uint)local_38[0x1a])(uVar20 + 0xe,2,&local_48);
            }
          }
LAB_100074a9:
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_346[uVar8 - 1] != '\0');
          if (uVar8 + 2 < 0x280) {
            local_346[uVar8 - 1] = 0x68;
            bVar28 = uVar5 != 0x27e;
            uVar5 = uVar8 + 2;
            if (bVar28) {
              uVar5 = uVar8 + 3;
              local_346[uVar8] = 100;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 4;
                local_346[uVar8 + 1] = 0x61;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 5;
                  local_346[uVar8 + 2] = 0x47;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 6;
                    local_346[uVar8 + 3] = 99;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 7;
                      local_346[uVar8 + 4] = 0x61;
                      if (uVar5 < 0x27f) {
                        local_346[uVar8 + 5] = 0x70;
                        uVar5 = uVar8 + 8;
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c4[uVar5 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_c8 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar10 = (char)uVar25;
            cVar7 = cVar10 + '7';
            if (uVar25 < 10) {
              cVar7 = cVar10 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar7;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0xffffffffffffffff;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_346[uVar8 - 1] != '\0');
          if (uVar8 + 2 < 0x280) {
            local_346[uVar8 - 1] = 0x68;
            bVar28 = uVar5 != 0x27e;
            uVar5 = uVar8 + 2;
            if (bVar28) {
              uVar5 = uVar8 + 3;
              local_346[uVar8] = 100;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 4;
                local_346[uVar8 + 1] = 0x61;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 5;
                  local_346[uVar8 + 2] = 0x47;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 6;
                    local_346[uVar8 + 3] = 99;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 7;
                      local_346[uVar8 + 4] = 0x74;
                      if (uVar5 < 0x27f) {
                        local_346[uVar8 + 5] = 0x6c;
                        uVar5 = uVar8 + 8;
                      }
                    }
                  }
                }
              }
            }
          }
          local_5c4[uVar5 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          do {
            uVar25 = local_44 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar10 = (char)uVar25;
            cVar7 = cVar10 + '7';
            if (uVar25 < 10) {
              cVar7 = cVar10 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar7;
              local_346[uVar8 - 1] = 0;
            }
            uVar25 = local_48;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x20;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar8 + 1 < 0x280) {
            cVar10 = 'h';
            pcVar12 = str_1000c839;
            do {
              pcVar12 = pcVar12 + 1;
              local_5c4[uVar8 + 0x27c] = cVar10;
              uVar8 = uVar8 + 1;
              cVar10 = *pcVar12;
              if (cVar10 == '\0') break;
            } while (uVar8 < 0x27f);
          }
          local_5c4[uVar8 + 0x27c] = 0;
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar5 < 0x280) {
            local_5c4[uVar8 + 0x27c] = 0x3d;
            uVar8 = uVar5;
          }
          local_5c4[uVar8 + 0x27c] = 0;
          iVar19 = 8;
          bVar28 = true;
          do {
            uVar20 = uVar25 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
            cVar7 = (char)uVar20;
            cVar10 = cVar7 + '7';
            if (uVar20 < 10) {
              cVar10 = cVar7 + '0';
            }
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar8 + 1 < 0x280) {
              local_5c4[uVar8 + 0x27c] = cVar10;
              local_346[uVar8 - 1] = 0;
            }
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          goto LAB_10004686;
        }
      }
    }
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar10 = ' ';
      pcVar12 = str_1000c824;
      do {
        pcVar12 = pcVar12 + 1;
        local_5c4[uVar8 + 0x27c] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    local_5c4[uVar8 + 0x27c] = 0;
    bVar28 = false;
  }
LAB_10004686:
  local_5c8 = 0;
  local_c8 = 0;
  local_44 = 0;
  bVar29 = false;
  if ((param_2[8] == 0xc) && (param_2[9] == 3)) {
    if (param_2[10] == 0) {
      local_48 = 0;
      local_4c = 0;
      uVar25 = *(uint *)(param_2 + 0x24);
      uVar20 = uVar25 & 0xffffffe0;
      if (((byte)uVar25 & uVar20 != 0) != 0) {
LAB_100049a7:
        if ((((local_38 != (int *)0x0) && (*local_38 == 0x54584b57)) && (0x57 < (uint)local_38[2]))
           && ((code *)(ulong)(uint)local_38[0x15] != (code *)0x0)) {
          uStack_5d0 = 0x100049d0;
          (*(code *)(ulong)(uint)local_38[0x15])(uVar20 & 0xffff,2,&local_48);
          if (((*local_38 == 0x54584b57) && (0x57 < (uint)local_38[2])) &&
             ((code *)(ulong)(uint)local_38[0x15] != (code *)0x0)) {
            uStack_5d0 = 0x100049fd;
            (*(code *)(ulong)(uint)local_38[0x15])((short)(uVar20 | 2),2,&local_4c,uVar20 | 2);
          }
        }
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (local_5c4[uVar8 + 0x27c] != '\0');
        if (uVar5 < 0x280) {
          local_5c4[uVar8 + 0x27c] = 0x20;
          uVar8 = uVar5;
        }
        local_5c4[uVar8 + 0x27c] = 0;
        uVar5 = 0xffffffffffffffff;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (local_346[uVar8 - 1] != '\0');
        if (uVar8 + 2 < 0x280) {
          local_346[uVar8 - 1] = 0x75;
          bVar29 = uVar5 != 0x27e;
          uVar5 = uVar8 + 2;
          if (bVar29) {
            uVar5 = uVar8 + 3;
            local_346[uVar8] = 0x73;
            if (uVar5 < 0x27f) {
              uVar5 = uVar8 + 4;
              local_346[uVar8 + 1] = 0x62;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 5;
                local_346[uVar8 + 2] = 0x49;
                if (uVar5 < 0x27f) {
                  local_346[uVar8 + 3] = 0x6f;
                  uVar5 = uVar8 + 6;
                }
              }
            }
          }
        }
        local_5c4[uVar5 + 0x27c] = 0;
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (local_5c4[uVar8 + 0x27c] != '\0');
        if (uVar5 < 0x280) {
          local_5c4[uVar8 + 0x27c] = 0x3d;
          uVar8 = uVar5;
        }
        local_5c4[uVar8 + 0x27c] = 0;
        iVar19 = 8;
        do {
          uVar25 = uVar20 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
          cVar10 = (char)uVar25;
          cVar7 = cVar10 + '7';
          if (uVar25 < 10) {
            cVar7 = cVar10 + '0';
          }
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar8 + 1 < 0x280) {
            local_5c4[uVar8 + 0x27c] = cVar7;
            local_346[uVar8 - 1] = 0;
          }
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        uStack_5d0 = 0x10004be1;
        recovered_1000ba50((long)&local_348,str_1000c85e,local_48);
        uStack_5d0 = 0x10004bf3;
        recovered_1000ba50((long)&local_348,str_1000c866,local_4c);
        bVar29 = true;
        goto LAB_10004bf8;
      }
      uVar20 = *(uint *)(param_2 + 0x14);
      if ((((uVar20 & 1) == 0) && (uVar20 = *(uint *)(param_2 + 0x18), (uVar20 & 1) == 0)) &&
         (uVar20 = *(uint *)(param_2 + 0x1c), (uVar20 & 1) == 0)) {
        uVar2 = *(uint *)(param_2 + 0x20);
        uVar20 = uVar2;
        if ((uVar2 & 1) == 0) {
          uVar20 = uVar25;
        }
        if ((((uVar2 | uVar25) & 1) != 0) || (uVar20 = *(uint *)(param_2 + 0x28), (uVar20 & 1) != 0)
           ) goto LAB_1000499e;
      }
      else {
LAB_1000499e:
        uVar20 = uVar20 & 0xfffffffc;
        if (uVar20 != 0) goto LAB_100049a7;
      }
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (local_5c4[uVar8 + 0x27c] != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar10 = ' ';
        pcVar12 = str_1000c845;
        do {
          pcVar12 = pcVar12 + 1;
          local_5c4[uVar8 + 0x27c] = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar12;
          if (cVar10 == '\0') break;
        } while (uVar8 < 0x27f);
      }
    }
    else {
      uVar25 = *(uint *)(param_2 + 0x14);
      if ((uVar25 & 1) == 0 && uVar25 != 0) {
        local_5c8 = 0;
        if ((((uVar25 & 0xfffffff0) != 0 && local_38 != (int *)0x0) && (*local_38 == 0x54584b57)) &&
           ((0x67 < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x19] != (code *)0x0)))) {
          uStack_5d0 = 0x10004735;
          iVar19 = (*(code *)(ulong)(uint)local_38[0x19])(uVar25 & 0xfffffff0,0,0x1000);
          if (iVar19 != 0) {
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar5 < 0x280) {
              local_5c4[uVar8 + 0x27c] = 0x20;
              uVar8 = uVar5;
            }
            local_5c4[uVar8 + 0x27c] = 0;
            uVar5 = 0xffffffffffffffff;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_346[uVar8 - 1] != '\0');
            if (uVar8 + 2 < 0x280) {
              local_346[uVar8 - 1] = 0x75;
              bVar29 = uVar5 != 0x27e;
              uVar5 = uVar8 + 2;
              if (bVar29) {
                uVar5 = uVar8 + 3;
                local_346[uVar8] = 0x73;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 4;
                  local_346[uVar8 + 1] = 0x62;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 5;
                    local_346[uVar8 + 2] = 0x4d;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 6;
                      local_346[uVar8 + 3] = 0x6d;
                      if (uVar5 < 0x27f) {
                        uVar5 = uVar8 + 7;
                        local_346[uVar8 + 4] = 0x69;
                        if (uVar5 < 0x27f) {
                          local_346[uVar8 + 5] = 0x6f;
                          uVar5 = uVar8 + 8;
                        }
                      }
                    }
                  }
                }
              }
            }
            local_5c4[uVar5 + 0x27c] = 0;
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar5 < 0x280) {
              local_5c4[uVar8 + 0x27c] = 0x3d;
              uVar8 = uVar5;
            }
            local_5c4[uVar8 + 0x27c] = 0;
            iVar19 = 8;
            do {
              uVar25 = local_5c8 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
              cVar7 = (char)uVar25;
              cVar10 = cVar7 + '7';
              if (uVar25 < 10) {
                cVar10 = cVar7 + '0';
              }
              uVar5 = 0;
              do {
                uVar8 = uVar5;
                uVar5 = uVar8 + 1;
              } while (local_5c4[uVar8 + 0x27c] != '\0');
              if (uVar8 + 1 < 0x280) {
                local_5c4[uVar8 + 0x27c] = cVar10;
                local_346[uVar8 - 1] = 0;
              }
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
            if ((((local_5c8 != 0) && (*local_38 == 0x54584b57)) && (0x6b < (uint)local_38[2])) &&
               ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0)) {
              uStack_5d0 = 0x10007a34;
              (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8,4,&local_c8);
              if (((local_5c8 != 0) && (*local_38 == 0x54584b57)) &&
                 ((0x6b < (uint)local_38[2] && ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0))
                 )) {
                uStack_5d0 = 0x10007a66;
                (*(code *)(ulong)(uint)local_38[0x1a])(local_5c8 + 4,4,&local_44);
              }
            }
            uVar25 = local_c8;
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar5 < 0x280) {
              local_5c4[uVar8 + 0x27c] = 0x20;
              uVar8 = uVar5;
            }
            local_5c4[uVar8 + 0x27c] = 0;
            uVar5 = 0xffffffffffffffff;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_346[uVar8 - 1] != '\0');
            if (uVar8 + 2 < 0x280) {
              local_346[uVar8 - 1] = 0x75;
              bVar29 = uVar5 != 0x27e;
              uVar5 = uVar8 + 2;
              if (bVar29) {
                uVar5 = uVar8 + 3;
                local_346[uVar8] = 0x73;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 4;
                  local_346[uVar8 + 1] = 0x62;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 5;
                    local_346[uVar8 + 2] = 0x52;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 6;
                      local_346[uVar8 + 3] = 0x65;
                      if (uVar5 < 0x27f) {
                        uVar5 = uVar8 + 7;
                        local_346[uVar8 + 4] = 0x67;
                        if (uVar5 < 0x27f) {
                          local_346[uVar8 + 5] = 0x30;
                          uVar5 = uVar8 + 8;
                        }
                      }
                    }
                  }
                }
              }
            }
            local_5c4[uVar5 + 0x27c] = 0;
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar5 < 0x280) {
              local_5c4[uVar8 + 0x27c] = 0x3d;
              uVar8 = uVar5;
            }
            local_5c4[uVar8 + 0x27c] = 0;
            iVar19 = 8;
            do {
              uVar20 = uVar25 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
              cVar10 = (char)uVar20;
              cVar7 = cVar10 + '7';
              if (uVar20 < 10) {
                cVar7 = cVar10 + '0';
              }
              uVar5 = 0;
              do {
                uVar8 = uVar5;
                uVar5 = uVar8 + 1;
              } while (local_5c4[uVar8 + 0x27c] != '\0');
              if (uVar8 + 1 < 0x280) {
                local_5c4[uVar8 + 0x27c] = cVar7;
                local_346[uVar8 - 1] = 0;
              }
              uVar20 = local_44;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar5 < 0x280) {
              local_5c4[uVar8 + 0x27c] = 0x20;
              uVar8 = uVar5;
            }
            local_5c4[uVar8 + 0x27c] = 0;
            uVar5 = 0xffffffffffffffff;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_346[uVar8 - 1] != '\0');
            if (uVar8 + 2 < 0x280) {
              local_346[uVar8 - 1] = 0x75;
              bVar29 = uVar5 != 0x27e;
              uVar5 = uVar8 + 2;
              if (bVar29) {
                uVar5 = uVar8 + 3;
                local_346[uVar8] = 0x73;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 4;
                  local_346[uVar8 + 1] = 0x62;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 5;
                    local_346[uVar8 + 2] = 0x52;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 6;
                      local_346[uVar8 + 3] = 0x65;
                      if (uVar5 < 0x27f) {
                        uVar5 = uVar8 + 7;
                        local_346[uVar8 + 4] = 0x67;
                        if (uVar5 < 0x27f) {
                          local_346[uVar8 + 5] = 0x34;
                          uVar5 = uVar8 + 8;
                        }
                      }
                    }
                  }
                }
              }
            }
            local_5c4[uVar5 + 0x27c] = 0;
            uVar5 = 0;
            do {
              uVar8 = uVar5;
              uVar5 = uVar8 + 1;
            } while (local_5c4[uVar8 + 0x27c] != '\0');
            if (uVar5 < 0x280) {
              local_5c4[uVar8 + 0x27c] = 0x3d;
              uVar8 = uVar5;
            }
            local_5c4[uVar8 + 0x27c] = 0;
            iVar19 = 8;
            do {
              uVar25 = uVar20 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
              cVar10 = (char)uVar25;
              cVar7 = cVar10 + '7';
              if (uVar25 < 10) {
                cVar7 = cVar10 + '0';
              }
              uVar5 = 0;
              do {
                uVar8 = uVar5;
                uVar5 = uVar8 + 1;
              } while (local_5c4[uVar8 + 0x27c] != '\0');
              if (uVar8 + 1 < 0x280) {
                local_5c4[uVar8 + 0x27c] = cVar7;
                local_346[uVar8 - 1] = 0;
              }
              bVar29 = true;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
            goto LAB_10004bf8;
          }
        }
      }
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (local_5c4[uVar8 + 0x27c] != '\0');
      if (uVar8 + 1 < 0x280) {
        cVar10 = ' ';
        pcVar12 = str_1000c86e;
        do {
          pcVar12 = pcVar12 + 1;
          local_5c4[uVar8 + 0x27c] = cVar10;
          uVar8 = uVar8 + 1;
          cVar10 = *pcVar12;
          if (cVar10 == '\0') break;
        } while (uVar8 < 0x27f);
      }
    }
    local_5c4[uVar8 + 0x27c] = 0;
    bVar29 = false;
  }
LAB_10004bf8:
  pcVar12 = str_1000c75b;
  if (((!bVar27 && !bVar26) && !bVar28) && !bVar29) {
    cVar10 = *pcVar6;
    if (cVar10 == '\0') {
      pcVar12 = str_1000c76b;
    }
    else {
      pcVar21 = pcVar6 + 8;
      cVar7 = cVar10;
      do {
        cVar23 = cVar7 + ' ';
        if (0x19 < (byte)(cVar7 + 0xbfU)) {
          cVar23 = cVar7;
        }
        cVar7 = pcVar21[-7];
        if (cVar23 == 'g') {
          pcVar13 = str_1000c656 + 1;
          if (cVar7 != '\0') {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            if (cVar23 != 'r') goto LAB_10004c59;
            cVar23 = pcVar21[-6];
            pcVar13 = str_1000c656 + 2;
            if (cVar23 != '\0') {
              cVar24 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar24 = cVar23;
              }
              if (cVar24 != 'a') goto LAB_10004c59;
              cVar23 = pcVar21[-5];
              pcVar13 = str_1000c656 + 3;
              if (cVar23 != '\0') {
                cVar24 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar24 = cVar23;
                }
                if (cVar24 != 'p') goto LAB_10004c59;
                cVar23 = pcVar21[-4];
                pcVar13 = str_1000c656 + 4;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'h') goto LAB_10004c59;
                  cVar23 = pcVar21[-3];
                  pcVar13 = str_1000c656 + 5;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'i') goto LAB_10004c59;
                    cVar23 = pcVar21[-2];
                    pcVar13 = str_1000c656 + 6;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'c') goto LAB_10004c59;
                      cVar23 = pcVar21[-1];
                      pcVar13 = str_1000c656 + 7;
                      if (cVar23 != '\0') {
                        cVar24 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar24 = cVar23;
                        }
                        if (cVar24 != 's') goto LAB_10004c59;
                        pcVar13 = str_1000c656 + 8;
                        if (*pcVar21 != '\0') goto LAB_10004f7a;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar13 == '\0') goto LAB_10004f7a;
        }
LAB_10004c59:
        pcVar21 = pcVar21 + 1;
      } while (cVar7 != '\0');
      pcVar21 = pcVar6 + 7;
      cVar7 = cVar10;
      do {
        cVar23 = cVar7 + ' ';
        if (0x19 < (byte)(cVar7 + 0xbfU)) {
          cVar23 = cVar7;
        }
        cVar7 = pcVar21[-6];
        if (cVar23 == 'n') {
          pcVar13 = str_1000c667 + 1;
          if (cVar7 != '\0') {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            if (cVar23 != 'e') goto LAB_10004e1a;
            cVar23 = pcVar21[-5];
            pcVar13 = str_1000c667 + 2;
            if (cVar23 != '\0') {
              cVar24 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar24 = cVar23;
              }
              if (cVar24 != 't') goto LAB_10004e1a;
              cVar23 = pcVar21[-4];
              pcVar13 = str_1000c667 + 3;
              if (cVar23 != '\0') {
                cVar24 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar24 = cVar23;
                }
                if (cVar24 != 'w') goto LAB_10004e1a;
                cVar23 = pcVar21[-3];
                pcVar13 = str_1000c667 + 4;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'o') goto LAB_10004e1a;
                  cVar23 = pcVar21[-2];
                  pcVar13 = str_1000c667 + 5;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'r') goto LAB_10004e1a;
                    cVar23 = pcVar21[-1];
                    pcVar13 = str_1000c667 + 6;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'k') goto LAB_10004e1a;
                      pcVar13 = str_1000c667 + 7;
                      if (*pcVar21 != '\0') goto LAB_10004f7a;
                    }
                  }
                }
              }
            }
          }
          if (*pcVar13 == '\0') goto LAB_10004f7a;
        }
LAB_10004e1a:
        pcVar21 = pcVar21 + 1;
      } while (cVar7 != '\0');
      pcVar21 = pcVar6 + 8;
      cVar7 = cVar10;
      do {
        cVar23 = cVar7 + ' ';
        if (0x19 < (byte)(cVar7 + 0xbfU)) {
          cVar23 = cVar7;
        }
        cVar7 = pcVar21[-7];
        if (cVar23 == 'f') {
          pcVar13 = str_1000c752 + 1;
          if (cVar7 != '\0') {
            cVar23 = cVar7 + ' ';
            if (0x19 < (byte)(cVar7 + 0xbfU)) {
              cVar23 = cVar7;
            }
            if (cVar23 != 'i') goto LAB_10005109;
            cVar23 = pcVar21[-6];
            pcVar13 = str_1000c752 + 2;
            if (cVar23 != '\0') {
              cVar24 = cVar23 + ' ';
              if (0x19 < (byte)(cVar23 + 0xbfU)) {
                cVar24 = cVar23;
              }
              if (cVar24 != 'r') goto LAB_10005109;
              cVar23 = pcVar21[-5];
              pcVar13 = str_1000c752 + 3;
              if (cVar23 != '\0') {
                cVar24 = cVar23 + ' ';
                if (0x19 < (byte)(cVar23 + 0xbfU)) {
                  cVar24 = cVar23;
                }
                if (cVar24 != 'e') goto LAB_10005109;
                cVar23 = pcVar21[-4];
                pcVar13 = str_1000c752 + 4;
                if (cVar23 != '\0') {
                  cVar24 = cVar23 + ' ';
                  if (0x19 < (byte)(cVar23 + 0xbfU)) {
                    cVar24 = cVar23;
                  }
                  if (cVar24 != 'w') goto LAB_10005109;
                  cVar23 = pcVar21[-3];
                  pcVar13 = str_1000c752 + 5;
                  if (cVar23 != '\0') {
                    cVar24 = cVar23 + ' ';
                    if (0x19 < (byte)(cVar23 + 0xbfU)) {
                      cVar24 = cVar23;
                    }
                    if (cVar24 != 'i') goto LAB_10005109;
                    cVar23 = pcVar21[-2];
                    pcVar13 = str_1000c752 + 6;
                    if (cVar23 != '\0') {
                      cVar24 = cVar23 + ' ';
                      if (0x19 < (byte)(cVar23 + 0xbfU)) {
                        cVar24 = cVar23;
                      }
                      if (cVar24 != 'r') goto LAB_10005109;
                      cVar23 = pcVar21[-1];
                      pcVar13 = str_1000c752 + 7;
                      if (cVar23 != '\0') {
                        cVar24 = cVar23 + ' ';
                        if (0x19 < (byte)(cVar23 + 0xbfU)) {
                          cVar24 = cVar23;
                        }
                        if (cVar24 != 'e') goto LAB_10005109;
                        pcVar13 = str_1000c752 + 8;
                        if (*pcVar21 != '\0') goto LAB_10004f7a;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar13 == '\0') goto LAB_10004f7a;
        }
LAB_10005109:
        pcVar21 = pcVar21 + 1;
      } while (cVar7 != '\0');
      pcVar6 = pcVar6 + 8;
      do {
        cVar7 = cVar10 + ' ';
        if (0x19 < (byte)(cVar10 + 0xbfU)) {
          cVar7 = cVar10;
        }
        cVar10 = pcVar6[-7];
        if (cVar7 == 'p') {
          pcVar21 = str_1000c56f + 1;
          if (cVar10 != '\0') {
            cVar7 = cVar10 + ' ';
            if (0x19 < (byte)(cVar10 + 0xbfU)) {
              cVar7 = cVar10;
            }
            if (cVar7 != 'l') goto LAB_100052e9;
            cVar7 = pcVar6[-6];
            pcVar21 = str_1000c56f + 2;
            if (cVar7 != '\0') {
              cVar23 = cVar7 + ' ';
              if (0x19 < (byte)(cVar7 + 0xbfU)) {
                cVar23 = cVar7;
              }
              if (cVar23 != 'a') goto LAB_100052e9;
              cVar7 = pcVar6[-5];
              pcVar21 = str_1000c56f + 3;
              if (cVar7 != '\0') {
                cVar23 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar23 = cVar7;
                }
                if (cVar23 != 't') goto LAB_100052e9;
                cVar7 = pcVar6[-4];
                pcVar21 = str_1000c56f + 4;
                if (cVar7 != '\0') {
                  cVar23 = cVar7 + ' ';
                  if (0x19 < (byte)(cVar7 + 0xbfU)) {
                    cVar23 = cVar7;
                  }
                  if (cVar23 != 'f') goto LAB_100052e9;
                  cVar7 = pcVar6[-3];
                  pcVar21 = str_1000c56f + 5;
                  if (cVar7 != '\0') {
                    cVar23 = cVar7 + ' ';
                    if (0x19 < (byte)(cVar7 + 0xbfU)) {
                      cVar23 = cVar7;
                    }
                    if (cVar23 != 'o') goto LAB_100052e9;
                    cVar7 = pcVar6[-2];
                    pcVar21 = str_1000c56f + 6;
                    if (cVar7 != '\0') {
                      cVar23 = cVar7 + ' ';
                      if (0x19 < (byte)(cVar7 + 0xbfU)) {
                        cVar23 = cVar7;
                      }
                      if (cVar23 != 'r') goto LAB_100052e9;
                      cVar7 = pcVar6[-1];
                      pcVar21 = str_1000c56f + 7;
                      if (cVar7 != '\0') {
                        cVar23 = cVar7 + ' ';
                        if (0x19 < (byte)(cVar7 + 0xbfU)) {
                          cVar23 = cVar7;
                        }
                        if (cVar23 != 'm') goto LAB_100052e9;
                        pcVar21 = str_1000c56f + 8;
                        if (*pcVar6 != '\0') goto LAB_10004f7a;
                      }
                    }
                  }
                }
              }
            }
          }
          if (*pcVar21 == '\0') goto LAB_10004f7a;
        }
LAB_100052e9:
        pcVar6 = pcVar6 + 1;
      } while (cVar10 != '\0');
LAB_1000546f:
      pcVar12 = str_1000c76b;
    }
  }
  param_3 = local_58;
LAB_1000547a:
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 + 0x27c] != '\0');
  cVar10 = *pcVar12;
  if (uVar8 + 1 < 0x280 && cVar10 != '\0') {
    do {
      pcVar12 = pcVar12 + 1;
      local_5c4[uVar8 + 0x27c] = cVar10;
      uVar8 = uVar8 + 1;
      cVar10 = *pcVar12;
      if (cVar10 == '\0') break;
    } while (uVar8 < 0x27f);
  }
LAB_100054cc:
  local_5c4[uVar8 + 0x27c] = 0;
LAB_100054d4:
  uStack_5d0 = 0x100054dc;
  pcVar6 = recovered_1000b890((long)param_2);
  local_c8 = local_c8 & 0xffffff00;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  if (uVar8 + 1 < 0x60) {
    cVar10 = '/';
    pcVar12 = str_1000c73c;
    do {
      pcVar12 = pcVar12 + 1;
      local_346[uVar8 + 0x27e] = cVar10;
      uVar8 = uVar8 + 1;
      cVar10 = *pcVar12;
      if (cVar10 == '\0') break;
    } while (uVar8 < 0x5f);
  }
  local_346[uVar8 + 0x27e] = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  if (uVar5 < 0x60) {
    local_346[uVar8 + 0x27e] = 0x2f;
    uVar8 = uVar5;
  }
  local_346[uVar8 + 0x27e] = 0;
  bVar11 = *param_2;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  bVar18 = (bVar11 >> 4) + 0x37;
  if (bVar11 < 0xa0) {
    bVar18 = bVar11 >> 4 | 0x30;
  }
  if (uVar8 + 1 < 0x60) {
    local_346[uVar8 + 0x27e] = bVar18;
    local_346[uVar8 + 0x27f] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  cVar10 = bVar11 + 0x37;
  if (bVar11 < 10) {
    cVar10 = bVar11 + 0x30;
  }
  if (uVar8 + 1 < 0x60) {
    local_346[uVar8 + 0x27e] = cVar10;
    local_346[uVar8 + 0x27f] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  if (uVar5 < 0x60) {
    local_346[uVar8 + 0x27e] = 0x3a;
    uVar8 = uVar5;
  }
  local_346[uVar8 + 0x27e] = 0;
  bVar11 = param_2[1];
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  bVar17 = (bVar11 >> 4) + 0x37;
  if (bVar11 < 0xa0) {
    bVar17 = bVar11 >> 4 | 0x30;
  }
  if (uVar8 + 1 < 0x60) {
    local_346[uVar8 + 0x27e] = bVar17;
    local_346[uVar8 + 0x27f] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  cVar7 = bVar11 + 0x37;
  if (bVar11 < 10) {
    cVar7 = bVar11 + 0x30;
  }
  if (uVar8 + 1 < 0x60) {
    local_346[uVar8 + 0x27e] = cVar7;
    local_346[uVar8 + 0x27f] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 + 0x27e] != '\0');
  if (uVar5 < 0x60) {
    local_346[uVar8 + 0x27e] = 0x2e;
    uVar8 = uVar5;
  }
  local_346[uVar8 + 0x27e] = 0;
  bVar11 = param_2[2];
  if (bVar11 == 0) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_346[uVar8 + 0x27e] != '\0');
    if (uVar8 + 1 < 0x60) {
      *(undefined2 *)(local_346 + uVar8 + 0x27e) = 0x30;
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
    uVar8 = (ulong)(uint)bVar11;
    do {
      uVar9 = uVar5;
      uVar25 = (uint)uVar8;
      *(byte *)((long)&local_44 + uVar9 + 1) = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
      uVar5 = uVar9 + 1;
      if (8 < uVar5) break;
      uVar8 = uVar8 / 10;
    } while (9 < uVar25);
    piVar14 = local_58;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
      do {
        uVar15 = uVar8;
        uVar8 = uVar15 + 1;
      } while (local_346[uVar15 + 0x27e] != '\0');
      uVar8 = uVar5;
      piVar4 = local_58;
      if (uVar15 + 1 < 0x60) {
        local_346[uVar15 + 0x27e] = *(undefined1 *)((long)&local_44 + uVar9 + 1);
        local_346[uVar15 + 0x27f] = 0;
        piVar14 = local_58;
        piVar4 = local_58;
      }
    }
    else {
      uVar8 = uVar9 + 2;
      piVar4 = local_58;
    }
    while( true ) {
      local_58 = piVar4;
      piVar4 = local_58;
      param_3 = local_58;
      local_58 = piVar14;
      if (uVar5 == 0) break;
      uVar5 = 0;
      do {
        uVar9 = uVar5;
        uVar5 = uVar9 + 1;
      } while (local_346[uVar9 + 0x27e] != '\0');
      if (uVar9 + 1 < 0x60) {
        local_346[uVar9 + 0x27e] = *(undefined1 *)((long)&local_48 + uVar8 + 3);
        local_346[uVar9 + 0x27f] = 0;
      }
      lVar3 = uVar8 + 2;
      uVar8 = uVar8 - 2;
      uVar5 = 0;
      do {
        uVar9 = uVar5;
        uVar5 = uVar9 + 1;
      } while (local_346[uVar9 + 0x27e] != '\0');
      piVar14 = local_58;
      uVar5 = uVar8;
      if (uVar9 + 1 < 0x60) {
        local_346[uVar9 + 0x27e] = *(undefined1 *)((long)&local_48 + lVar3);
        local_346[uVar9 + 0x27f] = 0;
        piVar14 = local_58;
      }
    }
  }
  local_5c8 = local_5c8 & 0xffffff00;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 3] != '\0');
  if (uVar8 + 2 < 0x280) {
    local_5c4[uVar8 - 3] = 0x70;
    bVar26 = uVar5 != 0x27e;
    uVar5 = uVar8 + 2;
    if (bVar26) {
      uVar5 = uVar8 + 3;
      local_5c4[uVar8 - 2] = 99;
      if (uVar5 < 0x27f) {
        uVar5 = uVar8 + 4;
        local_5c4[uVar8 - 1] = 0x69;
        if (uVar5 < 0x27f) {
          local_5c4[uVar8] = 0x3d;
          uVar5 = uVar8 + 5;
        }
      }
    }
  }
  local_5c4[uVar5 - 4] = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    local_5c4[uVar8 - 4] = cVar10;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar5 < 0x280) {
    local_5c4[uVar8 - 4] = 0x3a;
    uVar8 = uVar5;
  }
  local_5c4[uVar8 - 4] = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    local_5c4[uVar8 - 4] = bVar17;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar5 < 0x280) {
    local_5c4[uVar8 - 4] = 0x2e;
    uVar8 = uVar5;
  }
  local_5c4[uVar8 - 4] = 0;
  if (bVar11 == 0) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 - 4] != '\0');
    if (uVar8 + 1 < 0x280) {
      *(undefined2 *)(local_5c4 + (uVar8 - 4)) = 0x30;
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
    uVar25 = (uint)bVar11;
    do {
      uVar8 = uVar5;
      *(byte *)((long)&local_44 + uVar8 + 1) = (byte)(uVar25 % 10) | 0x30;
      uVar5 = uVar8 + 1;
      if (8 < uVar5) break;
      bVar26 = 9 < uVar25;
      uVar25 = uVar25 / 10;
    } while (bVar26);
    if ((uVar5 & 1) == 0) {
      uVar9 = 0;
      do {
        uVar15 = uVar9;
        uVar9 = uVar15 + 1;
      } while (local_5c4[uVar15 - 4] != '\0');
      uVar9 = uVar5;
      if (uVar15 + 1 < 0x280) {
        local_5c4[uVar15 - 4] = *(undefined1 *)((long)&local_44 + uVar8 + 1);
        local_5c4[uVar15 - 3] = 0;
      }
    }
    else {
      uVar9 = uVar8 + 2;
    }
    while (uVar5 != 0) {
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (local_5c4[uVar8 - 4] != '\0');
      if (uVar8 + 1 < 0x280) {
        local_5c4[uVar8 - 4] = *(undefined1 *)((long)&local_48 + uVar9 + 3);
        local_5c4[uVar8 - 3] = 0;
      }
      lVar3 = uVar9 + 2;
      uVar9 = uVar9 - 2;
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        uVar5 = uVar8 + 1;
      } while (local_5c4[uVar8 - 4] != '\0');
      uVar5 = uVar9;
      if (uVar8 + 1 < 0x280) {
        local_5c4[uVar8 - 4] = *(undefined1 *)((long)&local_48 + lVar3);
        local_5c4[uVar8 - 3] = 0;
      }
    }
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 3] != '\0');
  if (uVar8 + 2 < 0x280) {
    local_5c4[uVar8 - 3] = 0x20;
    bVar26 = uVar5 != 0x27e;
    uVar5 = uVar8 + 2;
    if (bVar26) {
      uVar5 = uVar8 + 3;
      local_5c4[uVar8 - 2] = 0x76;
      if (uVar5 < 0x27f) {
        uVar5 = uVar8 + 4;
        local_5c4[uVar8 - 1] = 0x65;
        if (uVar5 < 0x27f) {
          uVar5 = uVar8 + 5;
          local_5c4[uVar8] = 0x6e;
          if (uVar5 < 0x27f) {
            uVar5 = uVar8 + 6;
            local_5c4[uVar8 + 1] = 100;
            if (uVar5 < 0x27f) {
              uVar5 = uVar8 + 7;
              local_5c4[uVar8 + 2] = 0x6f;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 8;
                local_5c4[uVar8 + 3] = 0x72;
                if (uVar5 < 0x27f) {
                  local_5c4[uVar8 + 4] = 0x3d;
                  uVar5 = uVar8 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5c4[uVar5 - 4] = 0;
  uVar1 = *(ushort *)(param_2 + 4);
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar11 = (byte)(uVar1 >> 8);
    bVar18 = (bVar11 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar18 = bVar11 >> 4 | 0x30;
    }
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar16 = uVar1 >> 8 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = (char)uVar16;
    cVar7 = cVar10 + '7';
    if (uVar16 < 10) {
      cVar7 = cVar10 + '0';
    }
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar16 = uVar1 >> 4 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = (char)uVar16;
    cVar7 = cVar10 + '7';
    if (uVar16 < 10) {
      cVar7 = cVar10 + '0';
    }
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = (char)(uVar1 & 0xf);
    cVar7 = cVar10 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar7 = cVar10 + '0';
    }
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 3] != '\0');
  if (uVar8 + 2 < 0x280) {
    local_5c4[uVar8 - 3] = 0x20;
    bVar26 = uVar5 != 0x27e;
    uVar5 = uVar8 + 2;
    if (bVar26) {
      uVar5 = uVar8 + 3;
      local_5c4[uVar8 - 2] = 100;
      if (uVar5 < 0x27f) {
        uVar5 = uVar8 + 4;
        local_5c4[uVar8 - 1] = 0x65;
        if (uVar5 < 0x27f) {
          uVar5 = uVar8 + 5;
          local_5c4[uVar8] = 0x76;
          if (uVar5 < 0x27f) {
            uVar5 = uVar8 + 6;
            local_5c4[uVar8 + 1] = 0x69;
            if (uVar5 < 0x27f) {
              uVar5 = uVar8 + 7;
              local_5c4[uVar8 + 2] = 99;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 8;
                local_5c4[uVar8 + 3] = 0x65;
                if (uVar5 < 0x27f) {
                  local_5c4[uVar8 + 4] = 0x3d;
                  uVar5 = uVar8 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5c4[uVar5 - 4] = 0;
  uVar1 = *(ushort *)(param_2 + 6);
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar11 = (byte)(uVar1 >> 8);
    bVar18 = (bVar11 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar18 = bVar11 >> 4 | 0x30;
    }
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar16 = uVar1 >> 8 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = (char)uVar16;
    cVar7 = cVar10 + '7';
    if (uVar16 < 10) {
      cVar7 = cVar10 + '0';
    }
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar16 = uVar1 >> 4 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = (char)uVar16;
    cVar7 = cVar10 + '7';
    if (uVar16 < 10) {
      cVar7 = cVar10 + '0';
    }
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = (char)(uVar1 & 0xf);
    cVar7 = cVar10 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar7 = cVar10 + '0';
    }
    local_5c4[uVar8 - 4] = cVar7;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0xffffffffffffffff;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 3] != '\0');
  if (uVar8 + 2 < 0x280) {
    local_5c4[uVar8 - 3] = 0x20;
    bVar26 = uVar5 != 0x27e;
    uVar5 = uVar8 + 2;
    if (bVar26) {
      uVar5 = uVar8 + 3;
      local_5c4[uVar8 - 2] = 99;
      if (uVar5 < 0x27f) {
        uVar5 = uVar8 + 4;
        local_5c4[uVar8 - 1] = 0x6c;
        if (uVar5 < 0x27f) {
          uVar5 = uVar8 + 5;
          local_5c4[uVar8] = 0x61;
          if (uVar5 < 0x27f) {
            uVar5 = uVar8 + 6;
            local_5c4[uVar8 + 1] = 0x73;
            if (uVar5 < 0x27f) {
              uVar5 = uVar8 + 7;
              local_5c4[uVar8 + 2] = 0x73;
              if (uVar5 < 0x27f) {
                local_5c4[uVar8 + 3] = 0x3d;
                uVar5 = uVar8 + 8;
              }
            }
          }
        }
      }
    }
  }
  local_5c4[uVar5 - 4] = 0;
  bVar11 = param_2[8];
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar18 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar18 = bVar11 >> 4 | 0x30;
    }
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    local_5c4[uVar8 - 4] = cVar10;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar5 < 0x280) {
    local_5c4[uVar8 - 4] = 0x2e;
    uVar8 = uVar5;
  }
  local_5c4[uVar8 - 4] = 0;
  bVar11 = param_2[9];
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar18 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar18 = bVar11 >> 4 | 0x30;
    }
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    local_5c4[uVar8 - 4] = cVar10;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar5 < 0x280) {
    local_5c4[uVar8 - 4] = 0x2e;
    uVar8 = uVar5;
  }
  local_5c4[uVar8 - 4] = 0;
  bVar11 = param_2[10];
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar18 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar18 = bVar11 >> 4 | 0x30;
    }
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    local_5c4[uVar8 - 4] = cVar10;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = ' ';
    pcVar12 = str_1000c892;
    do {
      pcVar12 = pcVar12 + 1;
      local_5c4[uVar8 - 4] = cVar10;
      uVar8 = uVar8 + 1;
      cVar10 = *pcVar12;
      if (cVar10 == '\0') break;
    } while (uVar8 < 0x27f);
  }
  local_5c4[uVar8 - 4] = 0;
  bVar11 = param_2[0xb];
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    bVar18 = (bVar11 >> 4) + 0x37;
    if (bVar11 < 0xa0) {
      bVar18 = bVar11 >> 4 | 0x30;
    }
    local_5c4[uVar8 - 4] = bVar18;
    local_5c4[uVar8 - 3] = 0;
  }
  bVar11 = bVar11 & 0xf;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 - 4] != '\0');
  if (uVar8 + 1 < 0x280) {
    cVar10 = bVar11 + 0x37;
    if (bVar11 < 10) {
      cVar10 = bVar11 + 0x30;
    }
    local_5c4[uVar8 - 4] = cVar10;
    local_5c4[uVar8 - 3] = 0;
  }
  uVar5 = 0;
  do {
    uVar25 = *(uint *)(param_2 + uVar5 * 4 + 0x14);
    if (uVar25 != 0) {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
      } while (local_5c4[uVar9 - 3] != '\0');
      if (uVar9 + 2 < 0x280) {
        local_5c4[uVar9 - 3] = 0x20;
        bVar26 = uVar8 != 0x27e;
        uVar8 = uVar9 + 2;
        if (bVar26) {
          uVar8 = uVar9 + 3;
          local_5c4[uVar9 - 2] = 0x62;
          if (uVar8 < 0x27f) {
            uVar8 = uVar9 + 4;
            local_5c4[uVar9 - 1] = 0x61;
            if (uVar8 < 0x27f) {
              local_5c4[uVar9] = 0x72;
              uVar8 = uVar9 + 5;
            }
          }
        }
      }
      local_5c4[uVar8 - 4] = 0;
      if (uVar5 == 0) {
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (local_5c4[uVar9 - 4] != '\0');
        if (uVar9 + 1 < 0x280) {
          *(undefined2 *)(local_5c4 + (uVar9 - 4)) = 0x30;
        }
      }
      else {
        uVar9 = 0xffffffffffffffff;
        uVar8 = uVar5;
        do {
          uVar15 = uVar9;
          uVar9 = uVar8 & 0xffffffff;
          uVar20 = (uint)uVar8;
          uVar8 = uVar9 / 10;
          *(byte *)((long)&local_44 + uVar15 + 1) = (char)uVar9 + (char)uVar8 * -10 | 0x30;
          uVar9 = uVar15 + 1;
          if (8 < uVar9) break;
        } while (9 < uVar20);
        if ((uVar9 & 1) == 0) {
          uVar8 = 0;
          do {
            uVar22 = uVar8;
            uVar8 = uVar22 + 1;
          } while (local_5c4[uVar22 - 4] != '\0');
          uVar8 = uVar9;
          if (uVar22 + 1 < 0x280) {
            local_5c4[uVar22 - 4] = *(undefined1 *)((long)&local_44 + uVar15 + 1);
            local_5c4[uVar22 - 3] = 0;
          }
        }
        else {
          uVar8 = uVar15 + 2;
        }
        while (uVar9 != 0) {
          uVar9 = 0;
          do {
            uVar15 = uVar9;
            uVar9 = uVar15 + 1;
          } while (local_5c4[uVar15 - 4] != '\0');
          if (uVar15 + 1 < 0x280) {
            local_5c4[uVar15 - 4] = *(undefined1 *)((long)&local_48 + uVar8 + 3);
            local_5c4[uVar15 - 3] = 0;
          }
          lVar3 = uVar8 + 2;
          uVar8 = uVar8 - 2;
          uVar9 = 0;
          do {
            uVar15 = uVar9;
            uVar9 = uVar15 + 1;
          } while (local_5c4[uVar15 - 4] != '\0');
          uVar9 = uVar8;
          if (uVar15 + 1 < 0x280) {
            local_5c4[uVar15 - 4] = *(undefined1 *)((long)&local_48 + lVar3);
            local_5c4[uVar15 - 3] = 0;
          }
        }
      }
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
      } while (local_5c4[uVar9 - 4] != '\0');
      if (uVar8 < 0x280) {
        local_5c4[uVar9 - 4] = 0x3d;
        uVar9 = uVar8;
      }
      local_5c4[uVar9 - 4] = 0;
      iVar19 = 8;
      do {
        uVar20 = uVar25 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
        cVar10 = (char)uVar20;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          uVar8 = uVar9 + 1;
        } while (local_5c4[uVar9 - 4] != '\0');
        if (uVar9 + 1 < 0x280) {
          cVar7 = cVar10 + '7';
          if (uVar20 < 10) {
            cVar7 = cVar10 + '0';
          }
          local_5c4[uVar9 - 4] = cVar7;
          local_5c4[uVar9 - 3] = 0;
        }
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    cVar10 = (char)local_348;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 6);
  if ((char)local_348 != '\0') {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 - 4] != '\0');
    if (uVar5 < 0x280) {
      local_5c4[uVar8 - 4] = 0x20;
      uVar8 = uVar5;
    }
    local_5c4[uVar8 - 4] = 0;
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 - 4] != '\0');
    if (uVar8 + 1 < 0x280) {
      pcVar12 = (char *)((long)&local_348 + 1);
      do {
        local_5c4[uVar8 - 4] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar8 < 0x27f);
    }
    local_5c4[uVar8 - 4] = 0;
  }
  if ((local_38 != (int *)0x0) && ((code *)(ulong)(uint)local_38[3] != (code *)0x0)) {
    uStack_5d0 = 0x100066f9;
    iVar19 = (*(code *)(ulong)(uint)local_38[3])(&local_c8,pcVar6,&local_5c8);
    if (iVar19 != 0) {
      param_3[1] = param_3[1] + 1;
    }
  }
  return 1;
LAB_100069bd:
  uVar20 = uVar20 | 4;
LAB_10006e74:
  if (param_2[8] == 6) {
    if (param_2[9] != 0) {
      uVar20 = uVar20 | 2;
    }
  }
  uVar25 = local_5c8 | uVar20;
  local_c8 = uVar25;
  if (((*local_38 != 0x54584b57) || ((uint)local_38[2] < 100)) ||
     ((code *)(ulong)(uint)local_38[0x18] == (code *)0x0)) {
LAB_10006f81:
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      cVar10 = ' ';
      pcVar12 = str_1000c7af;
      do {
        pcVar12 = pcVar12 + 1;
        local_5c4[uVar8 + 0x27c] = cVar10;
        uVar8 = uVar8 + 1;
        cVar10 = *pcVar12;
        if (cVar10 == '\0') break;
      } while (uVar8 < 0x27f);
    }
    goto LAB_1000442c;
  }
  uStack_5d0 = 0x10006ee2;
  iVar19 = (*(code *)(ulong)(uint)local_38[0x18])(*param_2,param_2[1],param_2[2],4,2,uVar25);
  if (iVar19 == 0) goto LAB_10006f81;
  if ((*local_38 == 0x54584b57) && (0x5f < (uint)local_38[2])) {
    if ((code *)(ulong)(uint)local_38[0x17] != (code *)0x0) {
      uStack_5d0 = 0x10006f29;
      (*(code *)(ulong)(uint)local_38[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_c8);
      uVar25 = local_c8;
    }
  }
  uStack_5d0 = 0x10006f4c;
  recovered_1000ba50((long)&local_348,str_1000c7c8,local_5c8);
  uStack_5d0 = 0x10006f5e;
  recovered_1000ba50((long)&local_348,str_1000c7d9,uVar25);
  uStack_5d0 = 0x10006f6f;
  recovered_1000ba50((long)&local_348,str_1000c7e9,uVar20);
  bVar26 = (uVar20 & ~uVar25) == 0;
  goto LAB_10004437;
LAB_10004f7a:
  uVar5 = 0;
  piVar14 = local_38;
LAB_10004f9d:
  local_44 = 0;
  uVar25 = *(uint *)(param_2 + uVar5 * 4 + 0x14);
  if ((uVar25 & 1) != 0 || uVar25 == 0) goto LAB_10004f90;
  local_c8 = 0;
  if (piVar14 == (int *)0x0) goto LAB_10004f90;
  if ((((uVar25 & 0xfffffff0) == 0) || (*piVar14 != 0x54584b57)) || ((uint)piVar14[2] < 0x68))
  goto LAB_10004f90;
  if ((code *)(ulong)(uint)piVar14[0x19] == (code *)0x0) goto LAB_10004f90;
  uStack_5d0 = 0x10004fed;
  iVar19 = (*(code *)(ulong)(uint)piVar14[0x19])(uVar25 & 0xfffffff0,0,0x1000);
  param_3 = local_58;
  piVar14 = local_38;
  if (iVar19 == 0) goto LAB_10004f90;
  uVar8 = 0;
  do {
    uVar9 = uVar8;
    uVar8 = uVar9 + 1;
  } while (local_5c4[uVar9 + 0x27c] != '\0');
  if (uVar9 + 1 < 0x280) {
    cVar10 = ' ';
    pcVar6 = str_1000c888;
    do {
      pcVar6 = pcVar6 + 1;
      local_5c4[uVar9 + 0x27c] = cVar10;
      uVar9 = uVar9 + 1;
      cVar10 = *pcVar6;
      if (cVar10 == '\0') break;
    } while (uVar9 < 0x27f);
  }
  local_5c4[uVar9 + 0x27c] = 0;
  if (uVar5 == 0) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      *(undefined2 *)(local_5c4 + uVar8 + 0x27c) = 0x30;
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
    do {
      uVar9 = uVar8;
      uVar25 = (uint)uVar5;
      uVar15 = (uVar5 & 0xffffffff) / 10;
      local_5c4[uVar9 - 3] = (char)uVar5 + (char)uVar15 * -10 | 0x30;
      uVar8 = uVar9 + 1;
      if (8 < uVar8) break;
      uVar5 = uVar15;
    } while (9 < uVar25);
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      do {
        uVar15 = uVar5;
        uVar5 = uVar15 + 1;
      } while (local_5c4[uVar15 + 0x27c] != '\0');
      uVar5 = uVar8;
      if (uVar15 + 1 < 0x280) {
        local_5c4[uVar15 + 0x27c] = local_5c4[uVar9 - 3];
        local_346[uVar15 - 1] = 0;
      }
    }
    else {
      uVar5 = uVar9 + 2;
    }
    while (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
      } while (local_5c4[uVar9 + 0x27c] != '\0');
      if (uVar9 + 1 < 0x280) {
        local_5c4[uVar9 + 0x27c] = local_5c4[uVar5 - 5];
        local_346[uVar9 - 1] = 0;
      }
      lVar3 = uVar5 - 6;
      uVar5 = uVar5 - 2;
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
      } while (local_5c4[uVar9 + 0x27c] != '\0');
      uVar8 = uVar5;
      if (uVar9 + 1 < 0x280) {
        local_5c4[uVar9 + 0x27c] = local_5c4[lVar3];
        local_346[uVar9 - 1] = 0;
      }
    }
  }
  uVar25 = local_c8;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 + 0x27c] != '\0');
  if (uVar5 < 0x280) {
    local_5c4[uVar8 + 0x27c] = 0x20;
    uVar8 = uVar5;
  }
  local_5c4[uVar8 + 0x27c] = 0;
  uVar5 = 0xffffffffffffffff;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_346[uVar8 - 1] != '\0');
  if (uVar8 + 2 < 0x280) {
    local_346[uVar8 - 1] = 0x6d;
    bVar26 = uVar5 != 0x27e;
    uVar5 = uVar8 + 2;
    if (bVar26) {
      uVar5 = uVar8 + 3;
      local_346[uVar8] = 0x6d;
      if (uVar5 < 0x27f) {
        uVar5 = uVar8 + 4;
        local_346[uVar8 + 1] = 0x69;
        if (uVar5 < 0x27f) {
          local_346[uVar8 + 2] = 0x6f;
          uVar5 = uVar8 + 5;
        }
      }
    }
  }
  local_5c4[uVar5 + 0x27c] = 0;
  uVar5 = 0;
  do {
    uVar8 = uVar5;
    uVar5 = uVar8 + 1;
  } while (local_5c4[uVar8 + 0x27c] != '\0');
  if (uVar5 < 0x280) {
    local_5c4[uVar8 + 0x27c] = 0x3d;
    uVar8 = uVar5;
  }
  local_5c4[uVar8 + 0x27c] = 0;
  iVar19 = 8;
  do {
    uVar20 = uVar25 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
    cVar7 = (char)uVar20;
    cVar10 = cVar7 + '7';
    if (uVar20 < 10) {
      cVar10 = cVar7 + '0';
    }
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      uVar5 = uVar8 + 1;
    } while (local_5c4[uVar8 + 0x27c] != '\0');
    if (uVar8 + 1 < 0x280) {
      local_5c4[uVar8 + 0x27c] = cVar10;
      local_346[uVar8 - 1] = 0;
    }
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  if (((uVar25 != 0) && (*local_38 == 0x54584b57)) && (0x6b < (uint)local_38[2])) {
    if ((code *)(ulong)(uint)local_38[0x1a] != (code *)0x0) {
      uStack_5d0 = 0x10007f69;
      iVar19 = (*(code *)(ulong)(uint)local_38[0x1a])(uVar25,4,&local_44);
      uVar25 = local_44;
      if (iVar19 != 0) {
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (local_5c4[uVar8 + 0x27c] != '\0');
        if (uVar5 < 0x280) {
          local_5c4[uVar8 + 0x27c] = 0x20;
          uVar8 = uVar5;
        }
        local_5c4[uVar8 + 0x27c] = 0;
        uVar5 = 0xffffffffffffffff;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (local_346[uVar8 - 1] != '\0');
        if (uVar8 + 2 < 0x280) {
          local_346[uVar8 - 1] = 0x6d;
          bVar26 = uVar5 != 0x27e;
          uVar5 = uVar8 + 2;
          if (bVar26) {
            uVar5 = uVar8 + 3;
            local_346[uVar8] = 0x6d;
            if (uVar5 < 0x27f) {
              uVar5 = uVar8 + 4;
              local_346[uVar8 + 1] = 0x69;
              if (uVar5 < 0x27f) {
                uVar5 = uVar8 + 5;
                local_346[uVar8 + 2] = 0x6f;
                if (uVar5 < 0x27f) {
                  uVar5 = uVar8 + 6;
                  local_346[uVar8 + 3] = 0x52;
                  if (uVar5 < 0x27f) {
                    uVar5 = uVar8 + 7;
                    local_346[uVar8 + 4] = 0x65;
                    if (uVar5 < 0x27f) {
                      uVar5 = uVar8 + 8;
                      local_346[uVar8 + 5] = 0x67;
                      if (uVar5 < 0x27f) {
                        local_346[uVar8 + 6] = 0x30;
                        uVar5 = uVar8 + 9;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_5c4[uVar5 + 0x27c] = 0;
        uVar5 = 0;
        do {
          uVar8 = uVar5;
          uVar5 = uVar8 + 1;
        } while (local_5c4[uVar8 + 0x27c] != '\0');
        if (uVar5 < 0x280) {
          local_5c4[uVar8 + 0x27c] = 0x3d;
          uVar8 = uVar5;
        }
        local_5c4[uVar8 + 0x27c] = 0;
        param_3 = local_58;
        iVar19 = 8;
        do {
          uVar20 = uVar25 >> ((char)iVar19 * '\x04' - 4U & 0x1f) & 0xf;
          cVar10 = (char)uVar20;
          cVar7 = cVar10 + '7';
          if (uVar20 < 10) {
            cVar7 = cVar10 + '0';
          }
          uVar5 = 0;
          do {
            uVar8 = uVar5;
            uVar5 = uVar8 + 1;
          } while (local_5c4[uVar8 + 0x27c] != '\0');
          if (uVar8 + 1 < 0x280) {
            local_5c4[uVar8 + 0x27c] = cVar7;
            local_346[uVar8 - 1] = 0;
          }
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
    }
  }
  goto LAB_1000547a;
LAB_10004f90:
  uVar5 = uVar5 + 1;
  if (uVar5 == 6) goto LAB_1000546f;
  goto LAB_10004f9d;
}

#undef DAT_1000c66f
#undef DAT_1000c670
#undef DAT_1000c671
#undef DAT_1000c672
#undef DAT_1000c673
#undef DAT_1000c674
#undef DAT_1000c675
#undef DAT_1000c676
#undef DAT_1000c677
#undef DAT_1000c678
#undef str_1000c56f
#undef str_1000c656
#undef str_1000c65f
#undef str_1000c667
#undef str_1000c67f
#undef str_1000c686
#undef str_1000c6fd
#undef str_1000c711
#undef str_1000c718
#undef str_1000c73c
#undef str_1000c752
#undef str_1000c75b
#undef str_1000c76b
#undef str_1000c77f
#undef str_1000c797
#undef str_1000c7af
#undef str_1000c7c8
#undef str_1000c7d9
#undef str_1000c7e9
#undef str_1000c7f8
#undef str_1000c80e
#undef str_1000c818
#undef str_1000c824
#undef str_1000c839
#undef str_1000c845
#undef str_1000c85e
#undef str_1000c866
#undef str_1000c86e
#undef str_1000c888
#undef str_1000c892
#undef uStack_5d0
#undef cStack_349
#undef local_5c8
#undef local_5c4
#undef cStack_c9
#undef local_348
#undef local_346
#undef local_c8
#undef local_5c
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_38

#undef DAT_1000c66f
#define DAT_1000c66f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b7U)))
#undef DAT_1000c670
#define DAT_1000c670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b8U)))
#undef DAT_1000c671
#define DAT_1000c671 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_1000c672
#define DAT_1000c672 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1baU)))
#undef DAT_1000ca10
#define DAT_1000ca10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x558U)))
#undef DAT_1000ca14
#define DAT_1000ca14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55cU)))
#undef DAT_1000ca1f
#define DAT_1000ca1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x567U)))
#undef DAT_1000ca24
#define DAT_1000ca24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56cU)))
#undef DAT_1000ca28
#define DAT_1000ca28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x570U)))
#undef DAT_1000ca4d
#define DAT_1000ca4d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x595U)))
#undef DAT_1000ca52
#define DAT_1000ca52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59aU)))
#undef DAT_1000ca57
#define DAT_1000ca57 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59fU)))
#undef DAT_1000ca5b
#define DAT_1000ca5b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5a3U)))
#undef str_1000c656
#define str_1000c656 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_1000c65f
#define str_1000c65f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_1000c667
#define str_1000c667 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_1000c679
#define str_1000c679 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_1000c67f
#define str_1000c67f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000c686
#define str_1000c686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_1000c9da
#define str_1000c9da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x522U)))
#undef str_1000c9f5
#define str_1000c9f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53dU)))
#undef str_1000c9fd
#define str_1000c9fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x545U)))
#undef str_1000ca04
#define str_1000ca04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54cU)))
#undef str_1000ca19
#define str_1000ca19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x561U)))
#undef str_1000ca2d
#define str_1000ca2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x575U)))
#undef str_1000ca36
#define str_1000ca36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57eU)))
#undef str_1000ca3c
#define str_1000ca3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x584U)))
#undef str_1000ca44
#define str_1000ca44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58cU)))
#undef str_1000ca60
#define str_1000ca60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a8U)))
#undef str_1000ca6e
#define str_1000ca6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b6U)))
#undef str_1000ca79
#define str_1000ca79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c1U)))
#undef str_1000ca89
#define str_1000ca89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d1U)))
#undef str_1000caa0
#define str_1000caa0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e8U)))
#undef str_1000caab
#define str_1000caab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f3U)))
#undef str_1000caba
#define str_1000caba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x602U)))
#undef str_1000cad0
#define str_1000cad0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x618U)))
#undef str_1000cadc
#define str_1000cadc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x624U)))
#undef str_1000cae6
#define str_1000cae6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62eU)))
#undef str_1000caf2
#define str_1000caf2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63aU)))
#define local_34 (*(uint *)(frame + 716))
#define acStack_1b9 (*(char (*)[389])(frame + 327))
#define local_2e8 (*(char (*)[260])(frame + 24))
#define local_1e4 (*(undefined1 (*)[8])(frame + 284))
#define local_1dc (*(uint *)(frame + 292))
#define local_1d8 (*(uint *)(frame + 296))
#define local_1d4 (*(uint *)(frame + 300))
#define local_1d0 (*(uint *)(frame + 304))
#define local_1cc (*(uint *)(frame + 308))
#define local_1c8 (*(uint *)(frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086f0
 */

undefined8 recovered_100086f0(int *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  unsigned char frame[800] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  undefined7 extraout_var_04 = 0;
  undefined7 extraout_var_05 = 0;
  undefined7 extraout_var_06 = 0;
  undefined7 extraout_var_07 = 0;
  undefined7 extraout_var_08 = 0;
  undefined7 extraout_var_09 = 0;
  undefined7 extraout_var_10 = 0;
  undefined7 extraout_var_11 = 0;
  undefined7 extraout_var_12 = 0;
  undefined7 extraout_var_13 = 0;
  undefined7 extraout_var_14 = 0;
  undefined7 extraout_var_15 = 0;
  undefined7 extraout_var_16 = 0;
  undefined7 extraout_var_17 = 0;
  undefined7 extraout_var_18 = 0;
  undefined7 extraout_var_19 = 0;
  undefined7 extraout_var_20 = 0;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  char *pcVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  char cVar14;
  char *pcVar15;
  char *pcVar16;

  bVar1 = recovered_1000ae90((long)param_2,str_1000c9f5);
  pcVar16 = str_1000c656;
  if (((((int)CONCAT71(extraout_var,bVar1) == 0) &&
       (bVar1 = recovered_1000ae90((long)param_2,str_1000c9fd),
       (int)CONCAT71(extraout_var_00,bVar1) == 0)) &&
      (bVar1 = recovered_1000ae90((long)param_2,str_1000ca04),
      (int)CONCAT71(extraout_var_01,bVar1) == 0)) &&
     (bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca10),
     (int)CONCAT71(extraout_var_02,bVar1) == 0)) {
    bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca14);
    pcVar16 = str_1000c65f;
    if (((int)CONCAT71(extraout_var_03,bVar1) == 0) &&
       (bVar1 = recovered_1000ae90((long)param_2,str_1000ca19),
       (int)CONCAT71(extraout_var_04,bVar1) == 0)) {
      pcVar16 = str_1000c65f;
      bVar1 = recovered_1000ae90((long)param_2,str_1000c65f);
      if ((((int)CONCAT71(extraout_var_05,bVar1) == 0) &&
          ((bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca1f),
           (int)CONCAT71(extraout_var_06,bVar1) == 0 &&
           (bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca24),
           (int)CONCAT71(extraout_var_07,bVar1) == 0)))) &&
         (bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca28),
         (int)CONCAT71(extraout_var_08,bVar1) == 0)) {
        bVar1 = recovered_1000ae90((long)param_2,str_1000ca2d);
        pcVar16 = str_1000c679;
        if ((((int)CONCAT71(extraout_var_09,bVar1) == 0) &&
            (bVar1 = recovered_1000ae90((long)param_2,str_1000ca36),
            (int)CONCAT71(extraout_var_10,bVar1) == 0)) &&
           (bVar1 = recovered_1000ae90((long)param_2,str_1000ca3c),
           (int)CONCAT71(extraout_var_11,bVar1) == 0)) {
          pcVar16 = str_1000c679;
          bVar1 = recovered_1000ae90((long)param_2,str_1000c679);
          if ((int)CONCAT71(extraout_var_12,bVar1) == 0) {
            pcVar16 = &DAT_1000c66f;
            bVar1 = recovered_1000ae90((long)param_2,&DAT_1000c66f);
            if ((int)CONCAT71(extraout_var_13,bVar1) == 0) {
              bVar1 = recovered_1000ae90((long)param_2,str_1000ca44);
              pcVar16 = str_1000c667;
              if ((((int)CONCAT71(extraout_var_14,bVar1) == 0) &&
                  (bVar1 = recovered_1000ae90((long)param_2,str_1000c667),
                  (int)CONCAT71(extraout_var_15,bVar1) == 0)) &&
                 (bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca4d),
                 (int)CONCAT71(extraout_var_16,bVar1) == 0)) {
                pcVar16 = str_1000c686;
                bVar1 = recovered_1000ae90((long)param_2,str_1000c686);
                if (((int)CONCAT71(extraout_var_17,bVar1) == 0) &&
                   (bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca52),
                   (int)CONCAT71(extraout_var_18,bVar1) == 0)) {
                  bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca57);
                  if ((int)CONCAT71(extraout_var_19,bVar1) == 0) {
                    bVar1 = recovered_1000ae90((long)param_2,&DAT_1000ca5b);
                    pcVar16 = (char *)0x0;
                    if ((int)CONCAT71(extraout_var_20,bVar1) != 0) {
                      pcVar16 = str_1000c67f;
                    }
                  }
                  else {
                    pcVar16 = str_1000c67f;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_2 == (uint *)0x0 || param_4 == 0) {
    return 0;
  }
  *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  if (pcVar16 == (char *)0x0) {
    return 0;
  }
  recovered_1000b1e0(param_4,pcVar16);
  local_2e8[0] = '\0';
  uVar7 = 0;
  do {
    uVar3 = uVar7;
    uVar7 = uVar3 + 1;
  } while (local_2e8[uVar3] != '\0');
  if (uVar3 + 1 < 0x100) {
    cVar2 = '/';
    pcVar6 = str_1000c9da;
    do {
      pcVar6 = pcVar6 + 1;
      local_2e8[uVar3] = cVar2;
      uVar3 = uVar3 + 1;
      cVar2 = *pcVar6;
      if (cVar2 == '\0') break;
    } while (uVar3 < 0xff);
  }
  local_2e8[uVar3] = '\0';
  cVar2 = (char)param_2[9];
  if (cVar2 != '/') {
    if (cVar2 == '\0') {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (local_2e8[uVar3 + 1] != '\0');
      if (uVar3 + 2 < 0x100) {
        local_2e8[uVar3 + 1] = '/';
        bVar1 = uVar7 != 0xfe;
        uVar7 = uVar3 + 2;
        if (bVar1) {
          uVar7 = uVar3 + 3;
          local_2e8[uVar3 + 2] = 'n';
          if (uVar7 < 0xff) {
            uVar7 = uVar3 + 4;
            local_2e8[uVar3 + 3] = 'o';
            if (uVar7 < 0xff) {
              uVar7 = uVar3 + 5;
              local_2e8[uVar3 + 4] = 'd';
              if (uVar7 < 0xff) {
                uVar7 = uVar3 + 6;
                local_2e8[uVar3 + 5] = 'e';
                if (uVar7 < 0xff) {
                  local_2e8[uVar3 + 6] = '/';
                  uVar7 = uVar3 + 7;
                }
              }
            }
          }
        }
      }
      local_2e8[uVar7] = '\0';
      uVar11 = *param_2;
      iVar9 = 8;
      do {
        uVar13 = uVar11 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
        cVar8 = (char)uVar13;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (local_2e8[uVar3] != '\0');
        if (uVar3 + 1 < 0x100) {
          cVar5 = cVar8 + '7';
          if (uVar13 < 10) {
            cVar5 = cVar8 + '0';
          }
          local_2e8[uVar3] = cVar5;
          local_2e8[uVar3 + 1] = '\0';
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      goto LAB_10008b77;
    }
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (local_2e8[uVar3] != '\0');
    if (uVar7 < 0x100) {
      local_2e8[uVar3] = '/';
      uVar3 = uVar7;
    }
    local_2e8[uVar3] = '\0';
  }
  uVar7 = 0;
  do {
    uVar3 = uVar7;
    uVar7 = uVar3 + 1;
  } while (local_2e8[uVar3] != '\0');
  if (uVar3 + 1 < 0x100 && cVar2 != '\0') {
    pcVar6 = (char *)((long)param_2 + 0x25);
    cVar8 = cVar2;
    do {
      local_2e8[uVar3] = cVar8;
      uVar3 = uVar3 + 1;
      cVar8 = *pcVar6;
      if (cVar8 == '\0') break;
      pcVar6 = pcVar6 + 1;
    } while (uVar3 < 0xff);
  }
  local_2e8[uVar3] = '\0';
LAB_10008b77:
  acStack_1b9[1] = 0;
  uVar7 = 0;
  do {
    uVar3 = uVar7;
    uVar7 = uVar3 + 1;
  } while (acStack_1b9[uVar3 + 1] != '\0');
  if (uVar3 + 1 < 0x180) {
    cVar8 = 'f';
    pcVar6 = str_1000ca60;
    do {
      pcVar6 = pcVar6 + 1;
      acStack_1b9[uVar3 + 1] = cVar8;
      uVar3 = uVar3 + 1;
      cVar8 = *pcVar6;
      if (cVar8 == '\0') break;
    } while (uVar3 < 0x17f);
  }
  acStack_1b9[uVar3 + 1] = '\0';
  uVar11 = *param_2;
  iVar9 = 8;
  do {
    uVar13 = uVar11 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
    cVar8 = (char)uVar13;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      cVar5 = cVar8 + '7';
      if (uVar13 < 10) {
        cVar5 = cVar8 + '0';
      }
      acStack_1b9[uVar3 + 1] = cVar5;
      acStack_1b9[uVar3 + 2] = '\0';
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (cVar2 != '\0') {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'p';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'a';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 't';
          if (uVar7 < 0x17f) {
            acStack_1b9[uVar3 + 5] = 'h';
            uVar7 = uVar3 + 5;
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      pcVar6 = (char *)((long)param_2 + 0x25);
      do {
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
  }
  cVar2 = (char)param_2[0x41];
  if (cVar2 != '\0') {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 't';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'y';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'p';
          if (uVar7 < 0x17f) {
            acStack_1b9[uVar3 + 5] = 'e';
            uVar7 = uVar3 + 5;
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      pcVar6 = (char *)((long)param_2 + 0x105);
      do {
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
  }
  cVar2 = (char)param_2[0x51];
  if (cVar2 != '\0') {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'm';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'o';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'd';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 'e';
            if (uVar7 < 0x17f) {
              acStack_1b9[uVar3 + 6] = 'l';
              uVar7 = uVar3 + 6;
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      pcVar6 = (char *)((long)param_2 + 0x145);
      do {
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
  }
  cVar2 = (char)param_2[0x69];
  if (cVar2 != '\0') {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      cVar8 = 'c';
      pcVar6 = str_1000ca6e;
      do {
        pcVar6 = pcVar6 + 1;
        acStack_1b9[uVar3 + 1] = cVar8;
        uVar3 = uVar3 + 1;
        cVar8 = *pcVar6;
        if (cVar8 == '\0') break;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      pcVar6 = (char *)((long)param_2 + 0x1a5);
      do {
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
  }
  if ((param_2[4] & 0x10) != 0) {
    uVar13 = param_2[5];
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'v';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'e';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'n';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 'd';
            if (uVar7 < 0x17f) {
              uVar7 = uVar3 + 6;
              acStack_1b9[uVar3 + 6] = 'o';
              if (uVar7 < 0x17f) {
                acStack_1b9[uVar3 + 7] = 'r';
                uVar7 = uVar3 + 7;
              }
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar10 = uVar13 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar10;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar10 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar13 = param_2[6];
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'd';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'e';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'v';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 'i';
            if (uVar7 < 0x17f) {
              uVar7 = uVar3 + 6;
              acStack_1b9[uVar3 + 6] = 'c';
              if (uVar7 < 0x17f) {
                acStack_1b9[uVar3 + 7] = 'e';
                uVar7 = uVar3 + 7;
              }
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar10 = uVar13 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar10;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar10 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar13 = param_2[7];
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'c';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'l';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'a';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 's';
            if (uVar7 < 0x17f) {
              acStack_1b9[uVar3 + 6] = 's';
              uVar7 = uVar3 + 6;
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar10 = uVar13 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar10;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar10 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar13 = param_2[8];
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'r';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'e';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'v';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 'i';
            if (uVar7 < 0x17f) {
              uVar7 = uVar3 + 6;
              acStack_1b9[uVar3 + 6] = 's';
              if (uVar7 < 0x17f) {
                uVar7 = uVar3 + 7;
                acStack_1b9[uVar3 + 7] = 'i';
                if (uVar7 < 0x17f) {
                  uVar7 = uVar3 + 8;
                  acStack_1b9[uVar3 + 8] = 'o';
                  if (uVar7 < 0x17f) {
                    acStack_1b9[uVar3 + 9] = 'n';
                    uVar7 = uVar3 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar10 = uVar13 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar10;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar10 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  cVar2 = *pcVar16;
  if (cVar2 != '\0') {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'r';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'o';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'l';
          if (uVar7 < 0x17f) {
            acStack_1b9[uVar3 + 5] = 'e';
            uVar7 = uVar3 + 5;
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    pcVar6 = pcVar16;
    if (uVar3 + 1 < 0x180) {
      do {
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = pcVar6[1];
        if (cVar2 == '\0') break;
        pcVar6 = pcVar6 + 1;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
  }
  local_34 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0xa0)) ||
     (((code *)(ulong)(uint)param_1[0x27] == (code *)0x0 ||
      (iVar9 = (*(code *)(ulong)(uint)param_1[0x27])(uVar11,0,local_1e4), iVar9 == 0)))) {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      cVar2 = ' ';
      pcVar16 = str_1000ca89;
      do {
        pcVar16 = pcVar16 + 1;
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar16;
        if (cVar2 == '\0') break;
      } while (uVar3 < 0x17f);
    }
  }
  else {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      cVar2 = 'r';
      pcVar6 = str_1000caa0;
      do {
        pcVar6 = pcVar6 + 1;
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar11 = local_1d8 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar11;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar11 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar3 + 1 < 0x180) {
      cVar2 = 'r';
      pcVar6 = str_1000caab;
      do {
        pcVar6 = pcVar6 + 1;
        acStack_1b9[uVar3 + 1] = cVar2;
        uVar3 = uVar3 + 1;
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
      } while (uVar3 < 0x17f);
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar11 = local_1d4 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar11;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar11 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'r';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'e';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'g';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 'B';
            if (uVar7 < 0x17f) {
              uVar7 = uVar3 + 6;
              acStack_1b9[uVar3 + 6] = 'y';
              if (uVar7 < 0x17f) {
                uVar7 = uVar3 + 7;
                acStack_1b9[uVar3 + 7] = 't';
                if (uVar7 < 0x17f) {
                  uVar7 = uVar3 + 8;
                  acStack_1b9[uVar3 + 8] = 'e';
                  if (uVar7 < 0x17f) {
                    acStack_1b9[uVar3 + 9] = 's';
                    uVar7 = uVar3 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar11 = local_1d0 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar11;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar11 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = ' ';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    uVar7 = 0xffffffffffffffff;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 2] != '\0');
    if (uVar3 + 2 < 0x180) {
      acStack_1b9[uVar3 + 2] = 'r';
      bVar1 = uVar7 != 0x17e;
      uVar7 = uVar3 + 2;
      if (bVar1) {
        uVar7 = uVar3 + 3;
        acStack_1b9[uVar3 + 3] = 'e';
        if (uVar7 < 0x17f) {
          uVar7 = uVar3 + 4;
          acStack_1b9[uVar3 + 4] = 'g';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 5;
            acStack_1b9[uVar3 + 5] = 'F';
            if (uVar7 < 0x17f) {
              uVar7 = uVar3 + 6;
              acStack_1b9[uVar3 + 6] = 'l';
              if (uVar7 < 0x17f) {
                uVar7 = uVar3 + 7;
                acStack_1b9[uVar3 + 7] = 'a';
                if (uVar7 < 0x17f) {
                  uVar7 = uVar3 + 8;
                  acStack_1b9[uVar3 + 8] = 'g';
                  if (uVar7 < 0x17f) {
                    acStack_1b9[uVar3 + 9] = 's';
                    uVar7 = uVar3 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    acStack_1b9[uVar7 + 1] = '\0';
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (acStack_1b9[uVar3 + 1] != '\0');
    if (uVar7 < 0x180) {
      acStack_1b9[uVar3 + 1] = '=';
      uVar3 = uVar7;
    }
    acStack_1b9[uVar3 + 1] = '\0';
    iVar9 = 8;
    do {
      uVar11 = local_1dc >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
      cVar2 = (char)uVar11;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar8 = cVar2 + '7';
        if (uVar11 < 10) {
          cVar8 = cVar2 + '0';
        }
        acStack_1b9[uVar3 + 1] = cVar8;
        acStack_1b9[uVar3 + 2] = '\0';
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if ((local_1dc & 0x20) == 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar2 = ' ';
        pcVar16 = str_1000caba;
        do {
          pcVar16 = pcVar16 + 1;
          acStack_1b9[uVar3 + 1] = cVar2;
          uVar3 = uVar3 + 1;
          cVar2 = *pcVar16;
          if (cVar2 == '\0') break;
        } while (uVar3 < 0x17f);
      }
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar7 < 0x180) {
        acStack_1b9[uVar3 + 1] = ' ';
        uVar3 = uVar7;
      }
      acStack_1b9[uVar3 + 1] = '\0';
      uVar7 = 0xffffffffffffffff;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 2] != '\0');
      if (uVar3 + 2 < 0x180) {
        acStack_1b9[uVar3 + 2] = 'm';
        bVar1 = uVar7 != 0x17e;
        uVar7 = uVar3 + 2;
        if (bVar1) {
          uVar7 = uVar3 + 3;
          acStack_1b9[uVar3 + 3] = 'a';
          if (uVar7 < 0x17f) {
            uVar7 = uVar3 + 4;
            acStack_1b9[uVar3 + 4] = 'p';
            if (uVar7 < 0x17f) {
              uVar7 = uVar3 + 5;
              acStack_1b9[uVar3 + 5] = 'p';
              if (uVar7 < 0x17f) {
                uVar7 = uVar3 + 6;
                acStack_1b9[uVar3 + 6] = 'e';
                if (uVar7 < 0x17f) {
                  acStack_1b9[uVar3 + 7] = 'd';
                  uVar7 = uVar3 + 7;
                }
              }
            }
          }
        }
      }
      acStack_1b9[uVar7 + 1] = '\0';
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar7 < 0x180) {
        acStack_1b9[uVar3 + 1] = '=';
        uVar3 = uVar7;
      }
      acStack_1b9[uVar3 + 1] = '\0';
      iVar9 = 8;
      do {
        uVar11 = local_1cc >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
        cVar2 = (char)uVar11;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (acStack_1b9[uVar3 + 1] != '\0');
        if (uVar3 + 1 < 0x180) {
          cVar8 = cVar2 + '7';
          if (uVar11 < 10) {
            cVar8 = cVar2 + '0';
          }
          acStack_1b9[uVar3 + 1] = cVar8;
          acStack_1b9[uVar3 + 2] = '\0';
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar7 < 0x180) {
        acStack_1b9[uVar3 + 1] = ' ';
        uVar3 = uVar7;
      }
      acStack_1b9[uVar3 + 1] = '\0';
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar2 = 'm';
        pcVar6 = str_1000cad0;
        do {
          pcVar6 = pcVar6 + 1;
          acStack_1b9[uVar3 + 1] = cVar2;
          uVar3 = uVar3 + 1;
          cVar2 = *pcVar6;
          if (cVar2 == '\0') break;
        } while (uVar3 < 0x17f);
      }
      acStack_1b9[uVar3 + 1] = '\0';
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar7 < 0x180) {
        acStack_1b9[uVar3 + 1] = '=';
        uVar3 = uVar7;
      }
      acStack_1b9[uVar3 + 1] = '\0';
      iVar9 = 8;
      do {
        uVar11 = local_1c8 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
        cVar2 = (char)uVar11;
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          uVar7 = uVar3 + 1;
        } while (acStack_1b9[uVar3 + 1] != '\0');
        if (uVar3 + 1 < 0x180) {
          cVar8 = cVar2 + '7';
          if (uVar11 < 10) {
            cVar8 = cVar2 + '0';
          }
          acStack_1b9[uVar3 + 1] = cVar8;
          acStack_1b9[uVar3 + 2] = '\0';
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (((3 < local_1c8) && (*param_1 == 0x54584b57)) &&
         ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
        iVar9 = (*(code *)(ulong)(uint)param_1[0x1a])(local_1cc,4,&local_34);
        uVar11 = local_34;
        if (iVar9 != 0) {
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            uVar7 = uVar3 + 1;
          } while (acStack_1b9[uVar3 + 1] != '\0');
          if (uVar7 < 0x180) {
            acStack_1b9[uVar3 + 1] = ' ';
            uVar3 = uVar7;
          }
          acStack_1b9[uVar3 + 1] = '\0';
          uVar7 = 0xffffffffffffffff;
          do {
            uVar3 = uVar7;
            uVar7 = uVar3 + 1;
          } while (acStack_1b9[uVar3 + 2] != '\0');
          if (uVar3 + 2 < 0x180) {
            acStack_1b9[uVar3 + 2] = 'r';
            bVar1 = uVar7 != 0x17e;
            uVar7 = uVar3 + 2;
            if (bVar1) {
              uVar7 = uVar3 + 3;
              acStack_1b9[uVar3 + 3] = 'e';
              if (uVar7 < 0x17f) {
                uVar7 = uVar3 + 4;
                acStack_1b9[uVar3 + 4] = 'g';
                if (uVar7 < 0x17f) {
                  acStack_1b9[uVar3 + 5] = '0';
                  uVar7 = uVar3 + 5;
                }
              }
            }
          }
          acStack_1b9[uVar7 + 1] = '\0';
          uVar7 = 0;
          do {
            uVar3 = uVar7;
            uVar7 = uVar3 + 1;
          } while (acStack_1b9[uVar3 + 1] != '\0');
          if (uVar7 < 0x180) {
            acStack_1b9[uVar3 + 1] = '=';
            uVar3 = uVar7;
          }
          acStack_1b9[uVar3 + 1] = '\0';
          iVar9 = 8;
          do {
            uVar13 = uVar11 >> ((char)iVar9 * '\x04' - 4U & 0x1f) & 0xf;
            cVar2 = (char)uVar13;
            uVar7 = 0;
            do {
              uVar3 = uVar7;
              uVar7 = uVar3 + 1;
            } while (acStack_1b9[uVar3 + 1] != '\0');
            if (uVar3 + 1 < 0x180) {
              cVar8 = cVar2 + '7';
              if (uVar13 < 10) {
                cVar8 = cVar2 + '0';
              }
              acStack_1b9[uVar3 + 1] = cVar8;
              acStack_1b9[uVar3 + 2] = '\0';
            }
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      cVar2 = *pcVar16;
      if (cVar2 != '\0') {
        pcVar6 = pcVar16 + 3;
        cVar8 = cVar2;
        do {
          cVar5 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar5 = cVar8;
          }
          cVar8 = pcVar6[-2];
          if (cVar5 == 'u') {
            pcVar15 = &DAT_1000c670;
            if (cVar8 != '\0') {
              cVar5 = cVar8 + ' ';
              if (0x19 < (byte)(cVar8 + 0xbfU)) {
                cVar5 = cVar8;
              }
              if (cVar5 != 's') goto LAB_1000a4ac;
              cVar5 = pcVar6[-1];
              pcVar15 = &DAT_1000c671;
              if (cVar5 != '\0') {
                cVar14 = cVar5 + ' ';
                if (0x19 < (byte)(cVar5 + 0xbfU)) {
                  cVar14 = cVar5;
                }
                if (cVar14 != 'b') goto LAB_1000a4ac;
                pcVar15 = &DAT_1000c672;
                if (*pcVar6 != '\0') goto LAB_1000aa40;
              }
            }
            if (*pcVar15 == '\0') goto LAB_1000aa40;
          }
LAB_1000a4ac:
          pcVar6 = pcVar6 + 1;
        } while (cVar8 != '\0');
        pcVar6 = pcVar16 + 7;
        cVar8 = cVar2;
        do {
          cVar5 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar5 = cVar8;
          }
          cVar8 = pcVar6[-6];
          if (cVar5 == 's') {
            pcVar15 = str_1000c65f + 1;
            if (cVar8 != '\0') {
              cVar5 = cVar8 + ' ';
              if (0x19 < (byte)(cVar8 + 0xbfU)) {
                cVar5 = cVar8;
              }
              if (cVar5 != 't') goto LAB_1000a56c;
              cVar5 = pcVar6[-5];
              pcVar15 = str_1000c65f + 2;
              if (cVar5 != '\0') {
                cVar14 = cVar5 + ' ';
                if (0x19 < (byte)(cVar5 + 0xbfU)) {
                  cVar14 = cVar5;
                }
                if (cVar14 != 'o') goto LAB_1000a56c;
                cVar5 = pcVar6[-4];
                pcVar15 = str_1000c65f + 3;
                if (cVar5 != '\0') {
                  cVar14 = cVar5 + ' ';
                  if (0x19 < (byte)(cVar5 + 0xbfU)) {
                    cVar14 = cVar5;
                  }
                  if (cVar14 != 'r') goto LAB_1000a56c;
                  cVar5 = pcVar6[-3];
                  pcVar15 = str_1000c65f + 4;
                  if (cVar5 != '\0') {
                    cVar14 = cVar5 + ' ';
                    if (0x19 < (byte)(cVar5 + 0xbfU)) {
                      cVar14 = cVar5;
                    }
                    if (cVar14 != 'a') goto LAB_1000a56c;
                    cVar5 = pcVar6[-2];
                    pcVar15 = str_1000c65f + 5;
                    if (cVar5 != '\0') {
                      cVar14 = cVar5 + ' ';
                      if (0x19 < (byte)(cVar5 + 0xbfU)) {
                        cVar14 = cVar5;
                      }
                      if (cVar14 != 'g') goto LAB_1000a56c;
                      cVar5 = pcVar6[-1];
                      pcVar15 = str_1000c65f + 6;
                      if (cVar5 != '\0') {
                        cVar14 = cVar5 + ' ';
                        if (0x19 < (byte)(cVar5 + 0xbfU)) {
                          cVar14 = cVar5;
                        }
                        if (cVar14 != 'e') goto LAB_1000a56c;
                        pcVar15 = str_1000c65f + 7;
                        if (*pcVar6 != '\0') goto LAB_1000aa40;
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar15 == '\0') goto LAB_1000aa40;
          }
LAB_1000a56c:
          pcVar6 = pcVar6 + 1;
        } while (cVar8 != '\0');
        pcVar6 = pcVar16 + 7;
        cVar8 = cVar2;
        do {
          cVar5 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar5 = cVar8;
          }
          cVar8 = pcVar6[-6];
          if (cVar5 == 'n') {
            pcVar15 = str_1000c667 + 1;
            if (cVar8 != '\0') {
              cVar5 = cVar8 + ' ';
              if (0x19 < (byte)(cVar8 + 0xbfU)) {
                cVar5 = cVar8;
              }
              if (cVar5 != 'e') goto LAB_1000a6fd;
              cVar5 = pcVar6[-5];
              pcVar15 = str_1000c667 + 2;
              if (cVar5 != '\0') {
                cVar14 = cVar5 + ' ';
                if (0x19 < (byte)(cVar5 + 0xbfU)) {
                  cVar14 = cVar5;
                }
                if (cVar14 != 't') goto LAB_1000a6fd;
                cVar5 = pcVar6[-4];
                pcVar15 = str_1000c667 + 3;
                if (cVar5 != '\0') {
                  cVar14 = cVar5 + ' ';
                  if (0x19 < (byte)(cVar5 + 0xbfU)) {
                    cVar14 = cVar5;
                  }
                  if (cVar14 != 'w') goto LAB_1000a6fd;
                  cVar5 = pcVar6[-3];
                  pcVar15 = str_1000c667 + 4;
                  if (cVar5 != '\0') {
                    cVar14 = cVar5 + ' ';
                    if (0x19 < (byte)(cVar5 + 0xbfU)) {
                      cVar14 = cVar5;
                    }
                    if (cVar14 != 'o') goto LAB_1000a6fd;
                    cVar5 = pcVar6[-2];
                    pcVar15 = str_1000c667 + 5;
                    if (cVar5 != '\0') {
                      cVar14 = cVar5 + ' ';
                      if (0x19 < (byte)(cVar5 + 0xbfU)) {
                        cVar14 = cVar5;
                      }
                      if (cVar14 != 'r') goto LAB_1000a6fd;
                      cVar5 = pcVar6[-1];
                      pcVar15 = str_1000c667 + 6;
                      if (cVar5 != '\0') {
                        cVar14 = cVar5 + ' ';
                        if (0x19 < (byte)(cVar5 + 0xbfU)) {
                          cVar14 = cVar5;
                        }
                        if (cVar14 != 'k') goto LAB_1000a6fd;
                        pcVar15 = str_1000c667 + 7;
                        if (*pcVar6 != '\0') goto LAB_1000aa40;
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar15 == '\0') goto LAB_1000aa40;
          }
LAB_1000a6fd:
          pcVar6 = pcVar6 + 1;
        } while (cVar8 != '\0');
        pcVar6 = pcVar16 + 8;
        do {
          cVar8 = cVar2 + ' ';
          if (0x19 < (byte)(cVar2 + 0xbfU)) {
            cVar8 = cVar2;
          }
          cVar2 = pcVar6[-7];
          if (cVar8 == 'g') {
            pcVar15 = str_1000c656 + 1;
            if (cVar2 != '\0') {
              cVar8 = cVar2 + ' ';
              if (0x19 < (byte)(cVar2 + 0xbfU)) {
                cVar8 = cVar2;
              }
              if (cVar8 != 'r') goto LAB_1000a892;
              cVar8 = pcVar6[-6];
              pcVar15 = str_1000c656 + 2;
              if (cVar8 != '\0') {
                cVar5 = cVar8 + ' ';
                if (0x19 < (byte)(cVar8 + 0xbfU)) {
                  cVar5 = cVar8;
                }
                if (cVar5 != 'a') goto LAB_1000a892;
                cVar8 = pcVar6[-5];
                pcVar15 = str_1000c656 + 3;
                if (cVar8 != '\0') {
                  cVar5 = cVar8 + ' ';
                  if (0x19 < (byte)(cVar8 + 0xbfU)) {
                    cVar5 = cVar8;
                  }
                  if (cVar5 != 'p') goto LAB_1000a892;
                  cVar8 = pcVar6[-4];
                  pcVar15 = str_1000c656 + 4;
                  if (cVar8 != '\0') {
                    cVar5 = cVar8 + ' ';
                    if (0x19 < (byte)(cVar8 + 0xbfU)) {
                      cVar5 = cVar8;
                    }
                    if (cVar5 != 'h') goto LAB_1000a892;
                    cVar8 = pcVar6[-3];
                    pcVar15 = str_1000c656 + 5;
                    if (cVar8 != '\0') {
                      cVar5 = cVar8 + ' ';
                      if (0x19 < (byte)(cVar8 + 0xbfU)) {
                        cVar5 = cVar8;
                      }
                      if (cVar5 != 'i') goto LAB_1000a892;
                      cVar8 = pcVar6[-2];
                      pcVar15 = str_1000c656 + 6;
                      if (cVar8 != '\0') {
                        cVar5 = cVar8 + ' ';
                        if (0x19 < (byte)(cVar8 + 0xbfU)) {
                          cVar5 = cVar8;
                        }
                        if (cVar5 != 'c') goto LAB_1000a892;
                        cVar8 = pcVar6[-1];
                        pcVar15 = str_1000c656 + 7;
                        if (cVar8 != '\0') {
                          cVar5 = cVar8 + ' ';
                          if (0x19 < (byte)(cVar8 + 0xbfU)) {
                            cVar5 = cVar8;
                          }
                          if (cVar5 != 's') goto LAB_1000a892;
                          pcVar15 = str_1000c656 + 8;
                          if (*pcVar6 != '\0') goto LAB_1000aa40;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (*pcVar15 == '\0') goto LAB_1000aa40;
          }
LAB_1000a892:
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
      }
      uVar4 = recovered_1000b140(pcVar16,str_1000cadc);
      if (((int)uVar4 != 0) || (uVar4 = recovered_1000b140(pcVar16,str_1000cae6), (int)uVar4 != 0))
      {
LAB_1000aa40:
        if ((*param_1 == 0x54584b57) &&
           ((0x7b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1e])();
        }
      }
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (acStack_1b9[uVar3 + 1] != '\0');
      if (uVar3 + 1 < 0x180) {
        cVar2 = ' ';
        pcVar16 = str_1000caf2;
        do {
          pcVar16 = pcVar16 + 1;
          acStack_1b9[uVar3 + 1] = cVar2;
          uVar3 = uVar3 + 1;
          cVar2 = *pcVar16;
          if (cVar2 == '\0') break;
        } while (uVar3 < 0x17f);
      }
    }
  }
  acStack_1b9[uVar3 + 1] = '\0';
  if ((char)param_2[0x31] == '\0') {
    puVar12 = param_2 + 0x41;
    if ((char)param_2[0x41] == '\0') {
      puVar12 = (uint *)str_1000ca79;
      if ((char)param_2[0x51] != '\0') {
        puVar12 = param_2 + 0x51;
      }
    }
  }
  else {
    puVar12 = param_2 + 0x31;
  }
  if (((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) &&
     (iVar9 = (*(code *)(ulong)(uint)param_1[3])(local_2e8,puVar12,acStack_1b9 + 1), iVar9 != 0)) {
    *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
  }
  return 1;
}

#undef DAT_1000c66f
#undef DAT_1000c670
#undef DAT_1000c671
#undef DAT_1000c672
#undef DAT_1000ca10
#undef DAT_1000ca14
#undef DAT_1000ca1f
#undef DAT_1000ca24
#undef DAT_1000ca28
#undef DAT_1000ca4d
#undef DAT_1000ca52
#undef DAT_1000ca57
#undef DAT_1000ca5b
#undef str_1000c656
#undef str_1000c65f
#undef str_1000c667
#undef str_1000c679
#undef str_1000c67f
#undef str_1000c686
#undef str_1000c9da
#undef str_1000c9f5
#undef str_1000c9fd
#undef str_1000ca04
#undef str_1000ca19
#undef str_1000ca2d
#undef str_1000ca36
#undef str_1000ca3c
#undef str_1000ca44
#undef str_1000ca60
#undef str_1000ca6e
#undef str_1000ca79
#undef str_1000ca89
#undef str_1000caa0
#undef str_1000caab
#undef str_1000caba
#undef str_1000cad0
#undef str_1000cadc
#undef str_1000cae6
#undef str_1000caf2
#undef local_34
#undef acStack_1b9
#undef local_2e8
#undef local_1e4
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8

#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aab0
 */

undefined8
recovered_1000aab0(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_1 == (int *)0x0 || param_5 == (undefined1 *)0x0) {
    return 0;
  }
  if (*param_1 != 0x54584b57) {
    return 0;
  }
  if ((uint)param_1[2] < 0x60) {
    return 0;
  }
  if ((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) {
    return 0;
  }
  uVar4 = param_2 & 0xff;
  local_48 = param_1;
  local_34 = param_2;
  iVar1 = (*(code *)(ulong)(uint)param_1[0x17])(uVar4,param_3,param_4,0,4,&local_3c);
  if (iVar1 == 0) {
    return 0;
  }
  if ((short)local_3c == 0) {
    return 0;
  }
  if ((short)local_3c == -1) {
    return 0;
  }
  if (*local_48 != 0x54584b57) {
    return 0;
  }
  if ((uint)local_48[2] < 0x60) {
    return 0;
  }
  if ((code *)(ulong)(uint)local_48[0x17] == (code *)0x0) {
    return 0;
  }
  iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,8,4,&local_50);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*local_48 != 0x54584b57) || ((uint)local_48[2] < 0x60)) ||
      ((code *)(ulong)(uint)local_48[0x17] == (code *)0x0)) ||
     (iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,4,4,param_5 + 0x10),
     iVar1 == 0)) {
    *(undefined4 *)(param_5 + 0x10) = 0;
  }
  if (((*local_48 == 0x54584b57) && (0x5f < (uint)local_48[2])) &&
     (((code *)(ulong)(uint)local_48[0x17] != (code *)0x0 &&
      (iVar1 = (*(code *)(ulong)(uint)local_48[0x17])(uVar4,param_3,param_4,0xc,4,&local_38),
      iVar1 != 0)))) {
  }
  else {
    local_38 = 0;
    PF_PART1(local_38, 2) = 0;
  }
  *param_5 = (char)local_34;
  param_5[1] = param_3;
  param_5[2] = param_4;
  *(undefined4 *)(param_5 + 4) = local_3c;
  *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
  param_5[9] = (char)((uint)local_50 >> 0x10);
  param_5[8] = (char)((uint)local_50 >> 0x18);
  param_5[0xc] = PF_PART1(local_38, 2);
  lVar5 = 0;
  piVar3 = local_48;
  do {
    local_4c = 0;
    uVar2 = 0;
    if (((*piVar3 == 0x54584b57) && (0x5f < (uint)piVar3[2])) &&
       ((code *)(ulong)(uint)piVar3[0x17] != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)(uint)piVar3[0x17])
                        (uVar4,param_3,param_4,lVar5 + 0x10U & 0xffff,4,&local_4c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = local_4c;
      }
      piVar3 = local_48;
    }
    *(undefined4 *)(param_5 + lVar5 + 0x14) = uVar2;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x18);
  return 1;
}

#undef local_48
#undef local_3c
#undef local_38
#undef local_34
#undef local_50
#undef local_4c

#define local_2ac (*(undefined1 (*)[8])(frame + 20))
#define local_2a4 (*(int *)(frame + 28))
#define local_2a0 (*(int *)(frame + 32))
#define local_48 (*(undefined8 *)(frame + 632))
#define local_40 (*(code * *)(frame + 640))
#define local_34 (*(int *)(frame + 652))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad30
 */

int recovered_1000ad30(int *param_1,int param_2,int param_3,undefined *param_4,undefined8 param_5)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  if (param_2 != 0 && (param_3 != 0 && param_4 != (undefined *)0x0)) {
    local_34 = param_3 + -1;
    iVar4 = 0;
    local_48 = param_5;
    local_40 = (code *)param_4;
    while ((param_1 != (int *)0x0 && (*param_1 == 0x54584b57))) {
      if ((uint)param_1[2] < 0x9c) {
        if ((uint)param_1[2] < 0x8c) {
          return iVar4;
        }
LAB_1000ae60:
        if ((code *)(ulong)(uint)param_1[0x22] == (code *)0x0) {
          return iVar4;
        }
        param_2 = (*(code *)(ulong)(uint)param_1[0x22])(param_2);
      }
      else {
        if ((code *)(ulong)(uint)param_1[0x26] == (code *)0x0) goto LAB_1000ae60;
        iVar3 = (*(code *)(ulong)(uint)param_1[0x26])(param_2,local_2ac);
        pcVar2 = local_40;
        uVar1 = local_48;
        if (iVar3 == 0) {
          if (*param_1 != 0x54584b57) {
            return iVar4;
          }
          if ((uint)param_1[2] < 0x8c) {
            return iVar4;
          }
          goto LAB_1000ae60;
        }
        iVar4 = iVar4 + 1;
        (*local_40)(param_1,local_2ac,param_3,local_48);
        param_2 = local_2a0;
        if (local_2a4 != 0) {
          iVar3 = recovered_1000ad30(param_1,local_2a4,local_34,pcVar2,uVar1);
          iVar4 = iVar4 + iVar3;
          param_2 = local_2a0;
        }
      }
      if (param_2 == 0) {
        return iVar4;
      }
    }
  }
  return iVar4;
}

#undef local_2ac
#undef local_2a4
#undef local_2a0
#undef local_48
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae90
 */

bool recovered_1000ae90(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  char cVar8;

  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = (char *)(param_1 + 0x24);
    cVar5 = *pcVar3;
    if (cVar5 != '\0') {
      lVar4 = param_1 + 0x25;
      do {
        lVar6 = 0;
        do {
          cVar1 = param_2[lVar6];
          if (cVar1 == '\0') {
            return true;
          }
          cVar8 = cVar5 + ' ';
          if (0x19 < (byte)(cVar5 + 0xbfU)) {
            cVar8 = cVar5;
          }
          cVar5 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar5 = cVar1;
          }
          if (cVar8 != cVar5) goto LAB_1000af2b;
          cVar5 = *(char *)(lVar4 + lVar6);
          lVar6 = lVar6 + 1;
        } while (cVar5 != '\0');
        if (param_2[lVar6] == '\0') {
          return true;
        }
LAB_1000af2b:
        cVar5 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        lVar4 = lVar4 + 1;
      } while (cVar5 != '\0');
      if (*param_2 == '\0') goto LAB_1000b113;
    }
    cVar5 = *(char *)(param_1 + 0xc4);
    if (cVar5 != '\0') {
      lVar4 = param_1 + 0xc4;
      lVar6 = param_1 + 0xc5;
      do {
        lVar7 = 0;
        do {
          cVar1 = param_2[lVar7];
          if (cVar1 == '\0') {
            return true;
          }
          cVar8 = cVar5 + ' ';
          if (0x19 < (byte)(cVar5 + 0xbfU)) {
            cVar8 = cVar5;
          }
          cVar5 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar5 = cVar1;
          }
          if (cVar8 != cVar5) goto LAB_1000afcb;
          cVar5 = *(char *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
        } while (cVar5 != '\0');
        if (param_2[lVar7] == '\0') {
          return true;
        }
LAB_1000afcb:
        cVar5 = *(char *)(lVar4 + 1);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
      } while (cVar5 != '\0');
      if (*param_2 == '\0') goto LAB_1000b113;
    }
    cVar5 = *(char *)(param_1 + 0x104);
    if (cVar5 != '\0') {
      lVar4 = param_1 + 0x104;
      lVar6 = param_1 + 0x105;
      do {
        lVar7 = 0;
        do {
          cVar1 = param_2[lVar7];
          if (cVar1 == '\0') {
            return true;
          }
          cVar8 = cVar5 + ' ';
          if (0x19 < (byte)(cVar5 + 0xbfU)) {
            cVar8 = cVar5;
          }
          cVar5 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar5 = cVar1;
          }
          if (cVar8 != cVar5) goto LAB_1000b06b;
          cVar5 = *(char *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
        } while (cVar5 != '\0');
        if (param_2[lVar7] == '\0') {
          return true;
        }
LAB_1000b06b:
        cVar5 = *(char *)(lVar4 + 1);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
      } while (cVar5 != '\0');
      if (*param_2 == '\0') goto LAB_1000b113;
    }
    cVar5 = *(char *)(param_1 + 0x144);
    if (cVar5 != '\0') {
      lVar4 = param_1 + 0x144;
      lVar6 = param_1 + 0x145;
      do {
        lVar7 = 0;
        do {
          cVar1 = param_2[lVar7];
          if (cVar1 == '\0') {
            return true;
          }
          cVar8 = cVar5 + ' ';
          if (0x19 < (byte)(cVar5 + 0xbfU)) {
            cVar8 = cVar5;
          }
          cVar5 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar5 = cVar1;
          }
          if (cVar8 != cVar5) goto LAB_1000b103;
          cVar5 = *(char *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
        } while (cVar5 != '\0');
        if (param_2[lVar7] == '\0') {
          return true;
        }
LAB_1000b103:
        cVar5 = *(char *)(lVar4 + 1);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
      } while (cVar5 != '\0');
    }
  }
LAB_1000b113:
  uVar2 = recovered_1000b140((char *)(param_1 + 0x1a4),param_2);
  return (int)uVar2 != 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b140
 */

undefined8 recovered_1000b140(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  char cVar5;

  if ((param_2 != (char *)0x0 && param_1 != (char *)0x0) && (*param_2 != '\0')) {
    cVar4 = *param_1;
    while (cVar4 != '\0') {
      lVar3 = 0;
      do {
        cVar2 = param_2[lVar3];
        if (cVar2 == '\0') {
          return 1;
        }
        cVar5 = cVar4 + ' ';
        if (0x19 < (byte)(cVar4 + 0xbfU)) {
          cVar5 = cVar4;
        }
        cVar4 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar4 = cVar2;
        }
        if (cVar5 != cVar4) goto LAB_1000b1c4;
        cVar4 = param_1[lVar3 + 1];
        lVar3 = lVar3 + 1;
      } while (cVar4 != '\0');
      if (param_2[lVar3] == '\0') {
        return 1;
      }
LAB_1000b1c4:
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar4 = *pcVar1;
    }
  }
  return 0;
}


#undef DAT_1000c670
#define DAT_1000c670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b8U)))
#undef DAT_1000c671
#define DAT_1000c671 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1b9U)))
#undef DAT_1000c672
#define DAT_1000c672 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1baU)))
#undef DAT_1000c673
#define DAT_1000c673 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1bbU)))
#undef str_1000c656
#define str_1000c656 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19eU)))
#undef str_1000c65f
#define str_1000c65f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a7U)))
#undef str_1000c667
#define str_1000c667 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_1000c679
#define str_1000c679 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c1U)))
#undef str_1000c67f
#define str_1000c67f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000c686
#define str_1000c686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1e0
 */

void recovered_1000b1e0(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;

  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    if (cVar1 != '\0') {
      pcVar3 = param_2 + 8;
      cVar8 = cVar1;
      do {
        cVar6 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar6 = cVar8;
        }
        cVar8 = pcVar3[-7];
        if (cVar6 == 'g') {
          pcVar7 = str_1000c656 + 1;
          if (cVar8 == '\0') {
LAB_1000b240:
            if (*pcVar7 != '\0') goto LAB_1000b24b;
          }
          else {
            cVar6 = cVar8 + ' ';
            if (0x19 < (byte)(cVar8 + 0xbfU)) {
              cVar6 = cVar8;
            }
            if (cVar6 != 'r') goto LAB_1000b24b;
            cVar6 = pcVar3[-6];
            pcVar7 = str_1000c656 + 2;
            if (cVar6 == '\0') goto LAB_1000b240;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'a') goto LAB_1000b24b;
            cVar6 = pcVar3[-5];
            pcVar7 = str_1000c656 + 3;
            if (cVar6 == '\0') goto LAB_1000b240;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'p') goto LAB_1000b24b;
            cVar6 = pcVar3[-4];
            pcVar7 = str_1000c656 + 4;
            if (cVar6 == '\0') goto LAB_1000b240;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'h') goto LAB_1000b24b;
            cVar6 = pcVar3[-3];
            pcVar7 = str_1000c656 + 5;
            if (cVar6 == '\0') goto LAB_1000b240;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'i') goto LAB_1000b24b;
            cVar6 = pcVar3[-2];
            pcVar7 = str_1000c656 + 6;
            if (cVar6 == '\0') goto LAB_1000b240;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'c') goto LAB_1000b24b;
            cVar6 = pcVar3[-1];
            pcVar7 = str_1000c656 + 7;
            if (cVar6 == '\0') goto LAB_1000b240;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 's') goto LAB_1000b24b;
            pcVar7 = str_1000c656 + 8;
            if (*pcVar3 == '\0') goto LAB_1000b240;
          }
          lVar4 = 0x10;
          goto LAB_1000b86f;
        }
LAB_1000b24b:
        pcVar3 = pcVar3 + 1;
      } while (cVar8 != '\0');
      pcVar3 = param_2 + 7;
      cVar8 = cVar1;
      do {
        cVar6 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar6 = cVar8;
        }
        cVar8 = pcVar3[-6];
        if (cVar6 == 's') {
          pcVar7 = str_1000c65f + 1;
          if (cVar8 == '\0') {
LAB_1000b430:
            if (*pcVar7 != '\0') goto LAB_1000b43b;
          }
          else {
            cVar6 = cVar8 + ' ';
            if (0x19 < (byte)(cVar8 + 0xbfU)) {
              cVar6 = cVar8;
            }
            if (cVar6 != 't') goto LAB_1000b43b;
            cVar6 = pcVar3[-5];
            pcVar7 = str_1000c65f + 2;
            if (cVar6 == '\0') goto LAB_1000b430;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'o') goto LAB_1000b43b;
            cVar6 = pcVar3[-4];
            pcVar7 = str_1000c65f + 3;
            if (cVar6 == '\0') goto LAB_1000b430;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'r') goto LAB_1000b43b;
            cVar6 = pcVar3[-3];
            pcVar7 = str_1000c65f + 4;
            if (cVar6 == '\0') goto LAB_1000b430;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'a') goto LAB_1000b43b;
            cVar6 = pcVar3[-2];
            pcVar7 = str_1000c65f + 5;
            if (cVar6 == '\0') goto LAB_1000b430;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'g') goto LAB_1000b43b;
            cVar6 = pcVar3[-1];
            pcVar7 = str_1000c65f + 6;
            if (cVar6 == '\0') goto LAB_1000b430;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'e') goto LAB_1000b43b;
            pcVar7 = str_1000c65f + 7;
            if (*pcVar3 == '\0') goto LAB_1000b430;
          }
          lVar4 = 0x14;
          goto LAB_1000b86f;
        }
LAB_1000b43b:
        pcVar3 = pcVar3 + 1;
      } while (cVar8 != '\0');
      pcVar3 = param_2 + 7;
      cVar8 = cVar1;
      do {
        cVar6 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar6 = cVar8;
        }
        cVar8 = pcVar3[-6];
        if (cVar6 == 'n') {
          pcVar7 = str_1000c667 + 1;
          if (cVar8 == '\0') {
LAB_1000b5e0:
            if (*pcVar7 != '\0') goto LAB_1000b5eb;
          }
          else {
            cVar6 = cVar8 + ' ';
            if (0x19 < (byte)(cVar8 + 0xbfU)) {
              cVar6 = cVar8;
            }
            if (cVar6 != 'e') goto LAB_1000b5eb;
            cVar6 = pcVar3[-5];
            pcVar7 = str_1000c667 + 2;
            if (cVar6 == '\0') goto LAB_1000b5e0;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 't') goto LAB_1000b5eb;
            cVar6 = pcVar3[-4];
            pcVar7 = str_1000c667 + 3;
            if (cVar6 == '\0') goto LAB_1000b5e0;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'w') goto LAB_1000b5eb;
            cVar6 = pcVar3[-3];
            pcVar7 = str_1000c667 + 4;
            if (cVar6 == '\0') goto LAB_1000b5e0;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'o') goto LAB_1000b5eb;
            cVar6 = pcVar3[-2];
            pcVar7 = str_1000c667 + 5;
            if (cVar6 == '\0') goto LAB_1000b5e0;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'r') goto LAB_1000b5eb;
            cVar6 = pcVar3[-1];
            pcVar7 = str_1000c667 + 6;
            if (cVar6 == '\0') goto LAB_1000b5e0;
            cVar5 = cVar6 + ' ';
            if (0x19 < (byte)(cVar6 + 0xbfU)) {
              cVar5 = cVar6;
            }
            if (cVar5 != 'k') goto LAB_1000b5eb;
            pcVar7 = str_1000c667 + 7;
            if (*pcVar3 == '\0') goto LAB_1000b5e0;
          }
          lVar4 = 0x18;
          goto LAB_1000b86f;
        }
LAB_1000b5eb:
        pcVar3 = pcVar3 + 1;
      } while (cVar8 != '\0');
      pcVar3 = param_2 + 3;
      do {
        cVar8 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar8 = cVar1;
        }
        cVar1 = pcVar3[-2];
        if (cVar8 == 'u') {
          pcVar7 = &DAT_1000c670;
          if (cVar1 == '\0') {
LAB_1000b770:
            if (*pcVar7 != '\0') goto LAB_1000b77a;
          }
          else {
            cVar8 = cVar1 + ' ';
            if (0x19 < (byte)(cVar1 + 0xbfU)) {
              cVar8 = cVar1;
            }
            if (cVar8 != 's') goto LAB_1000b77a;
            cVar8 = pcVar3[-1];
            pcVar7 = &DAT_1000c671;
            if (cVar8 == '\0') goto LAB_1000b770;
            cVar6 = cVar8 + ' ';
            if (0x19 < (byte)(cVar8 + 0xbfU)) {
              cVar6 = cVar8;
            }
            if (cVar6 != 'b') goto LAB_1000b77a;
            pcVar7 = &DAT_1000c672;
            if (*pcVar3 == '\0') goto LAB_1000b770;
          }
          lVar4 = 0x1c;
          goto LAB_1000b86f;
        }
LAB_1000b77a:
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    uVar2 = recovered_1000b140(param_2,&DAT_1000c673);
    lVar4 = 0x20;
    if ((int)uVar2 == 0) {
      uVar2 = recovered_1000b140(param_2,str_1000c679);
      lVar4 = 0x24;
      if ((int)uVar2 == 0) {
        uVar2 = recovered_1000b140(param_2,str_1000c67f);
        lVar4 = 0x28;
        if ((int)uVar2 == 0) {
          uVar2 = recovered_1000b140(param_2,str_1000c686);
          lVar4 = (ulong)((int)uVar2 == 0) * 4 + 0x2c;
        }
      }
    }
LAB_1000b86f:
    *(int *)(param_1 + lVar4) = *(int *)(param_1 + lVar4) + 1;
  }
  return;
}

#undef DAT_1000c670
#undef DAT_1000c671
#undef DAT_1000c672
#undef DAT_1000c673
#undef str_1000c656
#undef str_1000c65f
#undef str_1000c667
#undef str_1000c679
#undef str_1000c67f
#undef str_1000c686

#undef DAT_1000c4d0
#define DAT_1000c4d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1000c8a8
#define DAT_1000c8a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f0U)))
#undef DAT_1000c8ad
#define DAT_1000c8ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f5U)))
#undef DAT_1000c9a3
#define DAT_1000c9a3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ebU)))
#undef DAT_1000c9a8
#define DAT_1000c9a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f0U)))
#undef DAT_1000c9ad
#define DAT_1000c9ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4f5U)))
#undef DAT_1000c9b2
#define DAT_1000c9b2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4faU)))
#undef str_1000c89d
#define str_1000c89d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e5U)))
#undef str_1000c8b1
#define str_1000c8b1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f9U)))
#undef str_1000c8c0
#define str_1000c8c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x408U)))
#undef str_1000c8cb
#define str_1000c8cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x413U)))
#undef str_1000c8d9
#define str_1000c8d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x421U)))
#undef str_1000c8eb
#define str_1000c8eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x433U)))
#undef str_1000c8f5
#define str_1000c8f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000c901
#define str_1000c901 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x449U)))
#undef str_1000c90b
#define str_1000c90b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_1000c91c
#define str_1000c91c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x464U)))
#undef str_1000c92a
#define str_1000c92a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x472U)))
#undef str_1000c933
#define str_1000c933 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47bU)))
#undef str_1000c9b7
#define str_1000c9b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ffU)))
#undef str_1000c9c2
#define str_1000c9c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50aU)))
#undef str_1000c9cb
#define str_1000c9cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x513U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b890
 */

char * recovered_1000b890(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;

  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\f') {
    if (*(char *)(param_1 + 9) == '\x03') {
      bVar2 = *(byte *)(param_1 + 10);
      if (bVar2 < 0x30) {
        if (bVar2 == 0) {
          return &DAT_1000c9a3;
        }
        if (bVar2 == 0x10) {
          return &DAT_1000c9a8;
        }
        if (bVar2 == 0x20) {
          return &DAT_1000c9ad;
        }
      }
      else {
        if (bVar2 == 0x30) {
          return &DAT_1000c9b2;
        }
        if (bVar2 == 0x80) {
          return str_1000c9b7;
        }
        if (bVar2 == 0xfe) {
          return str_1000c9c2;
        }
      }
      return str_1000c9cb;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 9) == '\x03') {
      return &DAT_1000c8ad;
    }
  }
  else if ((cVar1 == '\x01') && (*(char *)(param_1 + 9) == '\x06')) {
    return &DAT_1000c8a8;
  }
  uVar3 = *(ushort *)(param_1 + 4);
  if (uVar3 < 0x11ab) {
    if (uVar3 == 0x106b) {
      return str_1000c933;
    }
    if (uVar3 == 0x10de) {
      pcVar5 = str_1000c8c0;
      if (cVar1 == '\x03') {
        pcVar5 = str_1000c8b1;
      }
      return pcVar5;
    }
    if (uVar3 == 0x1180) {
      return str_1000c92a;
    }
  }
  else {
    if (uVar3 == 0x11ab) {
      return str_1000c91c;
    }
    if (uVar3 == 0x14e4) {
      return str_1000c90b;
    }
    if (uVar3 == 0x8086) {
      if (cVar1 == '\x03') {
        return str_1000c8cb;
      }
      if (cVar1 != '\x06') {
        if ((cVar1 == '\f') && (*(char *)(param_1 + 9) == '\x05')) {
          return str_1000c8f5;
        }
        return str_1000c901;
      }
      pcVar5 = str_1000c901;
      if (*(char *)(param_1 + 9) == '\x01') {
        pcVar5 = str_1000c8eb;
      }
      pcVar4 = str_1000c8d9;
      if (*(char *)(param_1 + 9) != '\0') {
        pcVar4 = pcVar5;
      }
      return pcVar4;
    }
  }
  if ((byte)(cVar1 - 1U) < 6) {
    return &DAT_1000c4d0 + *(int *)(&DAT_1000c4d0 + (ulong)(byte)(cVar1 - 1U) * 4);
  }
  return str_1000c89d;
}

#undef DAT_1000c4d0
#undef DAT_1000c8a8
#undef DAT_1000c8ad
#undef DAT_1000c9a3
#undef DAT_1000c9a8
#undef DAT_1000c9ad
#undef DAT_1000c9b2
#undef str_1000c89d
#undef str_1000c8b1
#undef str_1000c8c0
#undef str_1000c8cb
#undef str_1000c8d9
#undef str_1000c8eb
#undef str_1000c8f5
#undef str_1000c901
#undef str_1000c90b
#undef str_1000c91c
#undef str_1000c92a
#undef str_1000c933
#undef str_1000c9b7
#undef str_1000c9c2
#undef str_1000c9cb

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba50
 */

void recovered_1000ba50(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;

  if (param_1 != 0) {
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x20;
      uVar4 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar4) = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (param_2 != (char *)0x0) {
      cVar5 = *param_2;
      if (uVar4 + 1 < 0x280 && cVar5 != '\0') {
        do {
          param_2 = param_2 + 1;
          *(char *)(param_1 + uVar4) = cVar5;
          uVar4 = uVar4 + 1;
          cVar5 = *param_2;
          if (cVar5 == '\0') break;
        } while (uVar4 < 0x27f);
      }
      *(undefined1 *)(param_1 + uVar4) = 0;
    }
    uVar6 = 0;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(char *)(param_1 + uVar4) != '\0');
    if (uVar6 < 0x280) {
      *(undefined1 *)(param_1 + -1 + uVar6) = 0x3d;
      uVar4 = uVar6;
    }
    *(undefined1 *)(param_1 + uVar4) = 0;
    uVar3 = param_3 >> 0xc & 0xf;
    cVar5 = (char)uVar3;
    cVar2 = cVar5 + '7';
    if (uVar3 < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    uVar3 = param_3 >> 8 & 0xf;
    cVar5 = (char)uVar3;
    cVar2 = cVar5 + '7';
    if (uVar3 < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    uVar3 = param_3 >> 4 & 0xf;
    cVar5 = (char)uVar3;
    cVar2 = cVar5 + '7';
    if (uVar3 < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
    cVar5 = (char)(param_3 & 0xf);
    cVar2 = cVar5 + '7';
    if ((param_3 & 0xf) < 10) {
      cVar2 = cVar5 + '0';
    }
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\0');
    if (uVar6 < 0x280) {
      *(char *)(param_1 + -1 + uVar6) = cVar2;
      *(undefined1 *)(param_1 + uVar6) = 0;
    }
  }
  return;
}


#undef DAT_1000e000
#define DAT_1000e000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1b48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc10
 */

undefined8 recovered_1000bc10(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (DAT_1000e000 != 0) {
    if (param_1 != 0 && (code *)(ulong)*(uint *)(DAT_1000e000 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)*(uint *)(DAT_1000e000 + 0x24))();
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_1000e000

#undef DAT_1000e000
#define DAT_1000e000 (*(int * *)(((uintptr_t)pf_module_state + 0x1b48U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc40
 */

undefined8 recovered_1000bc40(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((DAT_1000e000 == (int *)0x0) || (*DAT_1000e000 != 0x54584b57)) ||
      ((uint)DAT_1000e000[2] < 0xac)) || ((code *)(ulong)(uint)DAT_1000e000[0x2a] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000bc6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)DAT_1000e000[0x2a])();
  return uVar1;
}

#undef DAT_1000e000

#define local_68 (*(long *)(frame + 24))
#define local_60 (*(long *)(frame + 32))
#define local_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc80
 */

bool recovered_1000bc80(long param_1,uint param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined1 uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined1 uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  long lVar34;
  uint uVar35;
  ulong uVar36;
  bool bVar37;

  bVar37 = false;
  if (param_2 != 0 && param_1 != 0) {
    uVar33 = 0;
    bVar37 = false;
    do {
      lVar1 = param_1 + uVar33 * 0x70;
      iVar17 = *(int *)(param_1 + uVar33 * 0x70);
      if (iVar17 == 3) {
        if (*(int *)(lVar1 + 0x20) != 1) break;
        uVar26 = *(uint *)(lVar1 + 0x14);
        if (uVar26 == 0) break;
        uVar12 = *(uint *)(lVar1 + 0x18);
        if ((uVar12 == 0) || ((ulong)*(uint *)(lVar1 + 0x1c) < (ulong)uVar26 * 4)) break;
        uVar23 = *(uint *)(lVar1 + 0x38);
        if ((((ulong)*(uint *)(lVar1 + 0x10) != 0) &&
            ((ulong)*(uint *)(lVar1 + 0x10) < (ulong)*(uint *)(lVar1 + 0x1c) * (ulong)uVar12)) ||
           (*(int *)(lVar1 + 8) == 0)) break;
        uVar9 = *(uint *)(lVar1 + 0x40);
        uVar22 = *(uint *)(lVar1 + 0x44);
        uVar16 = *(uint *)(lVar1 + 0x50);
        uVar10 = uVar9;
        if ((int)uVar16 < (int)uVar9) {
          uVar10 = uVar16;
        }
        uVar5 = *(uint *)(lVar1 + 0x54);
        uVar35 = uVar9;
        if (uVar16 - uVar9 != 0 && (int)uVar9 <= (int)uVar16) {
          uVar35 = uVar16;
        }
        uVar11 = uVar22;
        if ((int)uVar5 < (int)uVar22) {
          uVar11 = uVar5;
        }
        uVar29 = uVar22;
        if (uVar5 - uVar22 != 0 && (int)uVar22 <= (int)uVar5) {
          uVar29 = uVar5;
        }
        uVar6 = *(uint *)(lVar1 + 0x60);
        if ((int)uVar6 < (int)uVar10) {
          uVar10 = uVar6;
        }
        uVar7 = *(uint *)(lVar1 + 100);
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
        if ((int)uVar35 < (int)uVar6) {
          uVar35 = uVar6;
        }
        if ((int)uVar29 < (int)uVar7) {
          uVar29 = uVar7;
        }
        if ((((-1 < (int)uVar35) && (-1 < (int)uVar29)) && ((int)uVar10 < (int)uVar26)) &&
           ((int)uVar11 < (int)uVar12)) {
          if ((int)uVar10 < 1) {
            uVar10 = 0;
          }
          if ((int)uVar11 < 1) {
            uVar11 = 0;
          }
          uVar8 = uVar26 - 1;
          if ((int)uVar35 < (int)uVar26) {
            uVar8 = uVar35;
          }
          uVar26 = uVar12 - 1;
          if ((int)uVar29 < (int)uVar12) {
            uVar26 = uVar29;
          }
          lVar13 = (long)(int)(uVar5 - uVar22);
          lVar18 = (long)(int)(uVar16 - uVar9);
          if (((int)(uVar6 - uVar9) * lVar13 != (int)(uVar7 - uVar22) * lVar18) &&
             ((int)uVar11 <= (int)uVar26)) {
            lVar27 = CONCAT44(*(undefined4 *)(lVar1 + 0xc),*(int *)(lVar1 + 8));
            local_68 = (int)(uVar10 - uVar9) * lVar13 - (int)(uVar11 - uVar22) * lVar18;
            local_60 = (long)(int)(uVar10 - uVar6) * (long)(int)(uVar22 - uVar7) -
                       (long)(int)(uVar11 - uVar7) * (long)(int)(uVar9 - uVar6);
            local_48 = (long)(int)(uVar10 - uVar16) * (long)(int)(uVar7 - uVar5) -
                       (long)(int)(uVar11 - uVar5) * (long)(int)(uVar6 - uVar16);
            uVar30 = (ulong)uVar11;
            do {
              if ((int)uVar10 <= (int)uVar8) {
                lVar28 = *(uint *)(lVar1 + 0x1c) * uVar30;
                lVar2 = lVar27 + lVar28;
                uVar20 = lVar28 + lVar27;
                lVar28 = local_48;
                lVar21 = local_68;
                lVar34 = local_60;
                uVar36 = (ulong)uVar10;
                do {
                  if ((((-1 < lVar28) && (-1 < lVar34)) && (-1 < lVar21)) ||
                     (((lVar28 < 1 && (lVar34 < 1)) && (lVar21 < 1)))) {
                    if ((uVar20 & 3) == 0) {
                      *(uint *)(lVar2 + uVar36 * 4) =
                           uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                           uVar23 << 0x18;
                    }
                    else {
                      *(char *)(lVar2 + uVar36 * 4) = (char)(uVar23 >> 0x18);
                      *(char *)(lVar2 + 1 + uVar36 * 4) = (char)(uVar23 >> 0x10);
                      *(char *)(lVar2 + 2 + uVar36 * 4) = (char)(uVar23 >> 8);
                      *(char *)(lVar2 + 3 + uVar36 * 4) = (char)uVar23;
                    }
                  }
                  lVar28 = lVar28 + (int)(uVar7 - uVar5);
                  lVar34 = lVar34 + (int)(uVar22 - uVar7);
                  lVar21 = lVar21 + lVar13;
                  uVar36 = uVar36 + 1;
                  uVar20 = uVar20 + 4;
                } while (uVar8 + 1 != uVar36);
              }
              local_48 = local_48 - (int)(uVar6 - uVar16);
              local_60 = local_60 - (int)(uVar9 - uVar6);
              local_68 = local_68 - lVar18;
              uVar30 = uVar30 + 1;
            } while (uVar30 != uVar26 + 1);
          }
        }
      }
      else if (iVar17 == 2) {
        if (*(int *)(lVar1 + 0x20) != 1) break;
        uVar26 = *(uint *)(lVar1 + 0x14);
        if (uVar26 == 0) break;
        uVar12 = *(uint *)(lVar1 + 0x18);
        if ((uVar12 == 0) || ((ulong)*(uint *)(lVar1 + 0x1c) < (ulong)uVar26 * 4)) break;
        uVar23 = *(uint *)(lVar1 + 0x28);
        uVar9 = *(uint *)(lVar1 + 0x2c);
        uVar22 = *(uint *)(lVar1 + 0x38);
        if ((((ulong)*(uint *)(lVar1 + 0x10) != 0) &&
            ((ulong)*(uint *)(lVar1 + 0x10) < (ulong)*(uint *)(lVar1 + 0x1c) * (ulong)uVar12)) ||
           (((*(int *)(lVar1 + 0x34) < 1 || (*(int *)(lVar1 + 0x30) < 1)) ||
            (*(int *)(lVar1 + 8) == 0)))) break;
        uVar16 = *(int *)(lVar1 + 0x30) + uVar23;
        if ((((0 < (int)uVar16) && (uVar10 = *(int *)(lVar1 + 0x34) + uVar9, 0 < (int)uVar10)) &&
            ((int)uVar23 < (int)uVar26)) && ((int)uVar9 < (int)uVar12)) {
          uVar30 = (ulong)uVar23;
          if ((int)uVar23 < 1) {
            uVar30 = 0;
          }
          uVar23 = (uint)uVar30;
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          if ((int)uVar26 <= (int)uVar16) {
            uVar16 = uVar26;
          }
          if ((int)uVar10 < (int)uVar12) {
            uVar12 = uVar10;
          }
          if ((int)uVar9 < (int)uVar12) {
            uVar26 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
            lVar18 = CONCAT44(*(undefined4 *)(lVar1 + 0xc),*(int *)(lVar1 + 8));
            uVar31 = (ulong)uVar9;
            uVar36 = (ulong)(~uVar23 + uVar16) + 1;
            uVar20 = uVar36 & 0xfffffffffffffff8;
            do {
              lVar13 = *(uint *)(lVar1 + 0x1c) * uVar31;
              puVar32 = (undefined1 *)(lVar18 + uVar30 * 4 + lVar13);
              if (((ulong)puVar32 & 3) == 0) {
                if ((int)uVar23 < (int)uVar16) {
                  if (~uVar23 + uVar16 < 7) {
                    uVar9 = uVar23;
                  }
                  else {
                    puVar32 = puVar32 + uVar20 * 4;
                    lVar13 = lVar13 + lVar18 + uVar30 * 4 + 0x10;
                    uVar15 = 0;
                    do {
                      puVar3 = (uint *)(lVar13 + -0x10 + uVar15 * 4);
                      *puVar3 = uVar26;
                      puVar3[1] = uVar26;
                      puVar3[2] = uVar26;
                      puVar3[3] = uVar26;
                      puVar3 = (uint *)(lVar13 + uVar15 * 4);
                      *puVar3 = uVar26;
                      puVar3[1] = uVar26;
                      puVar3[2] = uVar26;
                      puVar3[3] = uVar26;
                      uVar15 = uVar15 + 8;
                    } while (uVar20 != uVar15);
                    uVar9 = (int)uVar20 + uVar23;
                    if (uVar36 == uVar20) goto LAB_1000c060;
                  }
                  lVar13 = 0;
                  do {
                    *(uint *)(puVar32 + lVar13 * 4) = uVar26;
                    lVar13 = lVar13 + 1;
                  } while (uVar16 - uVar9 != (int)lVar13);
                }
              }
              else if ((int)uVar23 < (int)uVar16) {
                uVar14 = (undefined1)(uVar22 >> 0x18);
                uVar24 = (undefined1)(uVar22 >> 0x10);
                uVar25 = (undefined1)(uVar22 >> 8);
                uVar19 = (undefined1)uVar22;
                uVar15 = uVar30;
                if ((uVar16 - uVar23 & 1) != 0) {
                  if (lVar18 != 0) {
                    *puVar32 = uVar14;
                    puVar32[1] = uVar24;
                    puVar32[2] = uVar25;
                    puVar32[3] = uVar19;
                  }
                  puVar32 = puVar32 + 4;
                  uVar15 = (ulong)(uVar23 + 1);
                }
                if (uVar16 != uVar23 + 1) {
                  iVar17 = uVar16 - (int)uVar15;
                  do {
                    if (puVar32 != (undefined1 *)0x0) {
                      *puVar32 = uVar14;
                      puVar32[1] = uVar24;
                      puVar32[2] = uVar25;
                      puVar32[3] = uVar19;
                    }
                    puVar32[4] = uVar14;
                    puVar32[5] = uVar24;
                    puVar32[6] = uVar25;
                    puVar32[7] = uVar19;
                    puVar32 = puVar32 + 8;
                    iVar17 = iVar17 + -2;
                  } while (iVar17 != 0);
                }
              }
LAB_1000c060:
              uVar31 = uVar31 + 1;
            } while (uVar31 != uVar12);
          }
        }
      }
      else {
        if ((iVar17 != 1) || (*(int *)(lVar1 + 0x20) != 1)) break;
        uVar26 = *(uint *)(lVar1 + 0x14);
        if (uVar26 == 0) break;
        uVar12 = *(uint *)(lVar1 + 0x18);
        if ((uVar12 == 0) || ((ulong)*(uint *)(lVar1 + 0x1c) < (ulong)uVar26 * 4)) break;
        uVar23 = *(uint *)(lVar1 + 0x38);
        if ((((ulong)*(uint *)(lVar1 + 0x10) != 0) &&
            ((ulong)*(uint *)(lVar1 + 0x10) < (ulong)*(uint *)(lVar1 + 0x1c) * (ulong)uVar12)) ||
           ((((int)uVar12 < 1 || ((int)uVar26 < 1)) || (iVar17 = *(int *)(lVar1 + 8), iVar17 == 0)))
           ) break;
        uVar9 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 | uVar23 << 0x18;
        uVar4 = *(undefined4 *)(lVar1 + 0xc);
        uVar22 = uVar26 & 0x7ffffff8;
        uVar30 = 0;
        do {
          lVar18 = *(uint *)(lVar1 + 0x1c) * uVar30;
          puVar32 = (undefined1 *)(CONCAT44(uVar4,iVar17) + lVar18);
          if (((ulong)puVar32 & 3) == 0) {
            uVar16 = 0;
            if (7 < uVar26) {
              puVar32 = puVar32 + (ulong)uVar22 * 4;
              lVar18 = lVar18 + CONCAT44(uVar4,iVar17) + 0x10;
              lVar13 = 0;
              do {
                puVar3 = (uint *)(lVar18 + -0x10 + lVar13);
                *puVar3 = uVar9;
                puVar3[1] = uVar9;
                puVar3[2] = uVar9;
                puVar3[3] = uVar9;
                puVar3 = (uint *)(lVar18 + lVar13);
                *puVar3 = uVar9;
                puVar3[1] = uVar9;
                puVar3[2] = uVar9;
                puVar3[3] = uVar9;
                lVar13 = lVar13 + 0x20;
              } while ((ulong)(uVar26 >> 3 & 0xfffffff) * 0x20 != lVar13);
              uVar16 = uVar22;
              if (uVar22 == uVar26) goto LAB_1000be10;
            }
            lVar18 = 0;
            do {
              *(uint *)(puVar32 + lVar18 * 4) = uVar9;
              lVar18 = lVar18 + 1;
            } while (uVar26 - uVar16 != (int)lVar18);
          }
          else {
            uVar24 = (undefined1)uVar23;
            uVar14 = (undefined1)(uVar23 >> 8);
            uVar25 = (undefined1)(uVar23 >> 0x10);
            uVar19 = (undefined1)(uVar23 >> 0x18);
            uVar16 = uVar26 & 0x7ffffffe;
            if (uVar26 != 1) {
              do {
                if (puVar32 != (undefined1 *)0x0) {
                  *puVar32 = uVar19;
                  puVar32[1] = uVar25;
                  puVar32[2] = uVar14;
                  puVar32[3] = uVar24;
                }
                puVar32[4] = uVar19;
                puVar32[5] = uVar25;
                puVar32[6] = uVar14;
                puVar32[7] = uVar24;
                puVar32 = puVar32 + 8;
                uVar16 = uVar16 - 2;
              } while (uVar16 != 0);
            }
            if (((uVar26 & 1) != 0) && (puVar32 != (undefined1 *)0x0)) {
              *puVar32 = uVar19;
              puVar32[1] = uVar25;
              puVar32[2] = uVar14;
              puVar32[3] = uVar24;
            }
          }
LAB_1000be10:
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar12);
      }
      uVar33 = uVar33 + 1;
      bVar37 = param_2 <= uVar33;
    } while (uVar33 != param_2);
  }
  return bVar37;
}

#undef local_68
#undef local_60
#undef local_48

void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
