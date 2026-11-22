/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5eaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000420
 */

void * recovered_10000420(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x15eaU)))
#undef DAT_10005008
#define DAT_10005008 (*(int *)(((uintptr_t)pf_module_state + 0x15f2U)))
#undef str_10003a16
#define str_10003a16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10003a3c
#define str_10003a3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x26U)))
#define local_98 (*(undefined4 *)(frame + 72))
#define local_94 (*(undefined4 *)(frame + 76))
#define local_90 (*(undefined4 *)(frame + 80))
#define local_8c (*(undefined4 *)(frame + 84))
#define abStack_c6 (*(byte (*)[45])(frame + 26))
#define local_88 (*(undefined4 *)(frame + 88))
#define bStack_99 (*(byte *)(frame + 71))
#define local_84 (*(undefined4 *)(frame + 92))
#define local_34 (*(uint *)(frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000430
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_10000430(int *api)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;

  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar2 = api[2];
  if (uVar2 < 0x10) {
    return 0;
  }
  local_98 = local_98 & 0xffffff00;
  uVar7 = 0;
  do {
    uVar3 = uVar7;
    uVar7 = uVar3 + 1;
  } while (abStack_c6[uVar3 + 0x2e] != 0);
  if (uVar3 + 1 < 0x60) {
    bVar8 = 0x6e;
    pcVar6 = str_10003a16;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_c6[uVar3 + 0x2e] = bVar8;
      uVar3 = uVar3 + 1;
      bVar8 = *pcVar6;
      if (bVar8 == 0) break;
    } while (uVar3 < 0x5f);
  }
  abStack_c6[uVar3 + 0x2e] = 0;
  uVar7 = 0;
  do {
    uVar3 = uVar7;
    uVar7 = uVar3 + 1;
  } while (abStack_c6[uVar3 + 0x2e] != 0);
  if (uVar3 + 1 < 0x60) {
    bVar8 = 0x3a;
    pcVar6 = str_10003a3c;
    do {
      pcVar6 = pcVar6 + 1;
      abStack_c6[uVar3 + 0x2e] = bVar8;
      uVar3 = uVar3 + 1;
      bVar8 = *pcVar6;
      if (bVar8 == 0) break;
    } while (uVar3 < 0x5f);
  }
  abStack_c6[uVar3 + 0x2e] = 0;
  if (api[1] == 0) {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (abStack_c6[uVar3 + 0x2e] != 0);
    if (uVar3 + 1 < 0x60) {
      (abStack_c6 + uVar3 + 0x2e)[0] = 0x30;
      (abStack_c6 + uVar3 + 0x2e)[1] = 0;
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
    uVar10 = api[1];
    do {
      uVar3 = uVar7;
      abStack_c6[uVar3 + 3] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar7 = uVar3 + 1;
      if (8 < uVar7) break;
      bVar14 = 9 < uVar10;
      uVar10 = uVar10 / 10;
    } while (bVar14);
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
      do {
        uVar9 = uVar4;
        uVar4 = uVar9 + 1;
      } while (abStack_c6[uVar9 + 0x2e] != 0);
      uVar4 = uVar7;
      if (uVar9 + 1 < 0x60) {
        abStack_c6[uVar9 + 0x2e] = abStack_c6[uVar3 + 3];
        abStack_c6[uVar9 + 0x2f] = 0;
      }
    }
    else {
      uVar4 = uVar3 + 2;
    }
    while (uVar7 != 0) {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (abStack_c6[uVar3 + 0x2e] != 0);
      if (uVar3 + 1 < 0x60) {
        abStack_c6[uVar3 + 0x2e] = abStack_c6[uVar4 + 1];
        abStack_c6[uVar3 + 0x2f] = 0;
      }
      pbVar1 = abStack_c6 + uVar4;
      uVar4 = uVar4 - 2;
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        uVar7 = uVar3 + 1;
      } while (abStack_c6[uVar3 + 0x2e] != 0);
      uVar7 = uVar4;
      if (uVar3 + 1 < 0x60) {
        abStack_c6[uVar3 + 0x2e] = *pbVar1;
        abStack_c6[uVar3 + 0x2f] = 0;
      }
    }
  }
  uVar7 = 0xffffffffffffffff;
  do {
    uVar3 = uVar7;
    uVar7 = uVar3 + 1;
  } while (abStack_c6[uVar3 + 0x2f] != 0);
  if (uVar3 + 2 < 0x60) {
    abStack_c6[uVar3 + 0x2f] = 0x20;
    bVar14 = uVar7 != 0x5e;
    uVar7 = uVar3 + 2;
    if (bVar14) {
      uVar7 = uVar3 + 3;
      abStack_c6[uVar3 + 0x30] = 0x72;
      if (uVar7 < 0x5f) {
        uVar7 = uVar3 + 4;
        abStack_c6[uVar3 + 0x31] = 0x65;
        if (uVar7 < 0x5f) {
          uVar7 = uVar3 + 5;
          abStack_c6[uVar3 + 0x32] = 0x61;
          if (uVar7 < 0x5f) {
            uVar7 = uVar3 + 6;
            abStack_c6[uVar3 + 0x33] = 100;
            if (uVar7 < 0x5f) {
              abStack_c6[uVar3 + 0x34] = 0x79;
              uVar7 = uVar3 + 7;
            }
          }
        }
      }
    }
  }
  abStack_c6[uVar7 + 0x2e] = 0;
  if (((0x2b < uVar2) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) &&
     ((*(code *)(ulong)(uint)api[10])(&local_98), *api != 0x54584b57)) {
    DAT_10005000 = api;
    return 0;
  }
  DAT_10005000 = api;
  if ((0x5f < (uint)api[2]) && (api[0x17] != 0)) {
    uVar2 = 0;
    iVar11 = 0;
    do {
      uVar10 = uVar2 & 0xff;
      iVar13 = 0;
      local_34 = uVar2;
      do {
        uVar12 = (undefined1)iVar13;
        uVar5 = recovered_10002920(api,uVar10,uVar12,0,(undefined1 *)&local_98);
        if ((int)uVar5 != 0) {
          uVar5 = recovered_100009a0(api,(byte *)&local_98);
          iVar11 = (int)uVar5 + iVar11;
          if ((char)local_8c < '\0') {
            pbVar1 = abStack_c6 + 2;
            uVar5 = recovered_10002920(api,uVar10,uVar12,1,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
            uVar5 = recovered_10002920(api,uVar10,uVar12,2,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
            uVar5 = recovered_10002920(api,uVar10,uVar12,3,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
            uVar5 = recovered_10002920(api,uVar10,uVar12,4,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
            uVar5 = recovered_10002920(api,uVar10,uVar12,5,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
            uVar5 = recovered_10002920(api,uVar10,uVar12,6,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
            uVar5 = recovered_10002920(api,uVar10,uVar12,7,pbVar1);
            if ((int)uVar5 != 0) {
              uVar5 = recovered_100009a0(api,pbVar1);
              iVar11 = iVar11 + (int)uVar5;
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0x20);
      uVar2 = local_34 + 1;
    } while (uVar2 != 0x20);
    if (DAT_10005008 != 0 && iVar11 != 0) {
      local_98 = 1;
      local_94 = DAT_10005008;
      local_90 = 0x10002700;
      local_8c = 0x10002810;
      local_88 = 0x10002820;
      local_84 = 0x10002830;
      if (((*api == 0x54584b57) && (0xd3 < (uint)api[2])) &&
         (((code *)(ulong)(uint)api[0x34] != (code *)0x0 &&
          (iVar11 = (*(code *)(ulong)(uint)api[0x34])(&local_98), iVar11 != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

#undef DAT_10005000
#undef DAT_10005008
#undef str_10003a16
#undef str_10003a3c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef abStack_c6
#undef local_88
#undef bStack_99
#undef local_84
#undef local_34

#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x15f2U)))
#undef DAT_1000500c
#define DAT_1000500c (*(uint *)(((uintptr_t)pf_module_state + 0x15f6U)))
#undef DAT_10005010
#define DAT_10005010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15faU)))
#undef DAT_10005018
#define DAT_10005018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1602U)))
#undef DAT_10005020
#define DAT_10005020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x160aU)))
#undef DAT_10005024
#define DAT_10005024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x160eU)))
#undef DAT_10005038
#define DAT_10005038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1622U)))
#undef DAT_1000503c
#define DAT_1000503c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1626U)))
#undef DAT_10005068
#define DAT_10005068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1652U)))
#undef DAT_1000506c
#define DAT_1000506c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1656U)))
#undef DAT_10005090
#define DAT_10005090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x167aU)))
#undef DAT_100050f0
#define DAT_100050f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16daU)))
#undef DAT_10005100
#define DAT_10005100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16eaU)))
#undef DAT_10005410
#define DAT_10005410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19faU)))
#undef DAT_10005414
#define DAT_10005414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19feU)))
#undef DAT_10005418
#define DAT_10005418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a02U)))
#undef DAT_1000541c
#define DAT_1000541c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a06U)))
#undef DAT_10005420
#define DAT_10005420 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a0aU)))
#undef str_10003a4b
#define str_10003a4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35U)))
#undef str_10003a5f
#define str_10003a5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49U)))
#undef str_10003a7b
#define str_10003a7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65U)))
#undef str_10003a8b
#define str_10003a8b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75U)))
#undef str_10003aa6
#define str_10003aa6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x90U)))
#undef str_10003ab4
#define str_10003ab4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9eU)))
#undef str_10003acc
#define str_10003acc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6U)))
#undef str_10003ae4
#define str_10003ae4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
#undef str_10003afd
#define str_10003afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7U)))
#undef str_10003b0e
#define str_10003b0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf8U)))
#undef str_10003b1e
#define str_10003b1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x108U)))
#undef str_10003b2d
#define str_10003b2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117U)))
#undef str_10003b3e
#define str_10003b3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x128U)))
#undef str_10003b52
#define str_10003b52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13cU)))
#define local_3c (*(undefined4 *)(frame + 1076))
#define cStack_459 (*(char *)(frame + 23))
#define local_458 (*(undefined2 *)(frame + 24))
#define local_456 (*(undefined1 (*)[1034])(frame + 26))
#define local_4c (*(uint *)(frame + 1060))
#define local_48 (*(undefined4 *)(frame + 1064))
#define local_44 (*(uint *)(frame + 1068))
#define local_40 (*(undefined4 *)(frame + 1072))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009a0
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_100009a0(int *param_1,byte *param_2)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined7 extraout_var = 0;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  long lVar15;
  ulong uVar16;
  undefined4 *puVar17;
  int iVar18;
  char *pcVar19;
  char cVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  bool bVar25;

  uVar4 = DAT_1000500c;
  if (param_2[8] != 1) {
    return 0;
  }
  if (param_2[9] != 8) {
    return 0;
  }
  if (param_2[10] != 2) {
    return 0;
  }
  if (3 < (ulong)DAT_1000500c) {
    return 0;
  }
  PF_PART1(local_458, 0) = 0;
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  lVar15 = (ulong)DAT_1000500c * 0x100;
  if (uVar7 + 1 < 0x400) {
    cVar20 = 't';
    pcVar19 = str_10003a4b;
    do {
      pcVar19 = pcVar19 + 1;
      local_456[uVar7 - 2] = cVar20;
      uVar7 = uVar7 + 1;
      cVar20 = *pcVar19;
      if (cVar20 == '\0') break;
    } while (uVar7 < 0x3ff);
  }
  puVar17 = (undefined4 *)(&DAT_10005010 + lVar15);
  local_456[uVar7 - 2] = 0;
  uVar3 = *(ushort *)(param_2 + 4);
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  if (uVar16 < 0x400) {
    local_456[uVar7 - 2] = 0x20;
    uVar7 = uVar16;
  }
  local_456[uVar7 - 2] = 0;
  uVar16 = 0xffffffffffffffff;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 1] != '\0');
  if (uVar7 + 2 < 0x400) {
    local_456[uVar7 - 1] = 0x76;
    bVar25 = uVar16 != 0x3fe;
    uVar16 = uVar7 + 2;
    if (bVar25) {
      uVar16 = uVar7 + 3;
      local_456[uVar7] = 0x65;
      if (uVar16 < 0x3ff) {
        uVar16 = uVar7 + 4;
        local_456[uVar7 + 1] = 0x6e;
        if (uVar16 < 0x3ff) {
          uVar16 = uVar7 + 5;
          local_456[uVar7 + 2] = 100;
          if (uVar16 < 0x3ff) {
            uVar16 = uVar7 + 6;
            local_456[uVar7 + 3] = 0x6f;
            if (uVar16 < 0x3ff) {
              local_456[uVar7 + 4] = 0x72;
              uVar16 = uVar7 + 7;
            }
          }
        }
      }
    }
  }
  local_456[uVar16 - 2] = 0;
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  if (uVar16 < 0x400) {
    local_456[uVar7 - 2] = 0x3d;
    uVar7 = uVar16;
  }
  local_456[uVar7 - 2] = 0;
  iVar18 = 8;
  do {
    uVar21 = uVar3 >> ((char)iVar18 * '\x04' - 4U & 0x1f) & 0xf;
    cVar20 = (char)uVar21;
    cVar14 = cVar20 + '7';
    if (uVar21 < 10) {
      cVar14 = cVar20 + '0';
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      local_456[uVar7 - 2] = cVar14;
      local_456[uVar7 - 1] = 0;
    }
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  uVar3 = *(ushort *)(param_2 + 6);
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  if (uVar16 < 0x400) {
    local_456[uVar7 - 2] = 0x20;
    uVar7 = uVar16;
  }
  local_456[uVar7 - 2] = 0;
  uVar16 = 0xffffffffffffffff;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 1] != '\0');
  if (uVar7 + 2 < 0x400) {
    local_456[uVar7 - 1] = 100;
    bVar25 = uVar16 != 0x3fe;
    uVar16 = uVar7 + 2;
    if (bVar25) {
      uVar16 = uVar7 + 3;
      local_456[uVar7] = 0x65;
      if (uVar16 < 0x3ff) {
        uVar16 = uVar7 + 4;
        local_456[uVar7 + 1] = 0x76;
        if (uVar16 < 0x3ff) {
          uVar16 = uVar7 + 5;
          local_456[uVar7 + 2] = 0x69;
          if (uVar16 < 0x3ff) {
            uVar16 = uVar7 + 6;
            local_456[uVar7 + 3] = 99;
            if (uVar16 < 0x3ff) {
              local_456[uVar7 + 4] = 0x65;
              uVar16 = uVar7 + 7;
            }
          }
        }
      }
    }
  }
  local_456[uVar16 - 2] = 0;
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  if (uVar16 < 0x400) {
    local_456[uVar7 - 2] = 0x3d;
    uVar7 = uVar16;
  }
  local_456[uVar7 - 2] = 0;
  iVar18 = 8;
  do {
    uVar21 = uVar3 >> ((char)iVar18 * '\x04' - 4U & 0x1f) & 0xf;
    cVar20 = (char)uVar21;
    cVar14 = cVar20 + '7';
    if (uVar21 < 10) {
      cVar14 = cVar20 + '0';
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      local_456[uVar7 - 2] = cVar14;
      local_456[uVar7 - 1] = 0;
    }
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  bVar2 = *param_2;
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  if (uVar16 < 0x400) {
    local_456[uVar7 - 2] = 0x20;
    uVar7 = uVar16;
  }
  local_456[uVar7 - 2] = 0;
  uVar16 = 0xffffffffffffffff;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 1] != '\0');
  if (uVar7 + 2 < 0x400) {
    local_456[uVar7 - 1] = 0x62;
    bVar25 = uVar16 != 0x3fe;
    uVar16 = uVar7 + 2;
    if (bVar25) {
      uVar16 = uVar7 + 3;
      local_456[uVar7] = 0x75;
      if (uVar16 < 0x3ff) {
        local_456[uVar7 + 1] = 0x73;
        uVar16 = uVar7 + 4;
      }
    }
  }
  local_456[uVar16 - 2] = 0;
  uVar16 = 0;
  do {
    uVar7 = uVar16;
    uVar16 = uVar7 + 1;
  } while (local_456[uVar7 - 2] != '\0');
  if (uVar16 < 0x400) {
    local_456[uVar7 - 2] = 0x3d;
    uVar7 = uVar16;
  }
  local_456[uVar7 - 2] = 0;
  if (bVar2 == 0) {
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
  }
  else {
    uVar16 = 0xffffffffffffffff;
    uVar7 = (ulong)(uint)bVar2;
    do {
      uVar11 = uVar16;
      uVar6 = (uint)uVar7;
      *(byte *)((long)&local_3c + uVar11 + 1) = (char)uVar7 + (char)(uVar7 / 10) * -10 | 0x30;
      uVar16 = uVar11 + 1;
      if (8 < uVar16) break;
      uVar7 = uVar7 / 10;
    } while (9 < uVar6);
    if ((uVar16 & 1) == 0) {
      uVar7 = 0;
      do {
        uVar13 = uVar7;
        uVar7 = uVar13 + 1;
      } while (local_456[uVar13 - 2] != '\0');
      uVar7 = uVar16;
      if (uVar13 + 1 < 0x400) {
        local_456[uVar13 - 2] = *(undefined1 *)((long)&local_3c + uVar11 + 1);
        local_456[uVar13 - 1] = 0;
      }
    }
    else {
      uVar7 = uVar11 + 2;
    }
    while (uVar16 != 0) {
      uVar16 = 0;
      do {
        uVar11 = uVar16;
        uVar16 = uVar11 + 1;
      } while (local_456[uVar11 - 2] != '\0');
      if (uVar11 + 1 < 0x400) {
        local_456[uVar11 - 2] = *(undefined1 *)((long)&local_40 + uVar7 + 3);
        local_456[uVar11 - 1] = 0;
      }
      lVar9 = uVar7 + 2;
      uVar7 = uVar7 - 2;
      uVar16 = 0;
      do {
        uVar11 = uVar16;
        uVar16 = uVar11 + 1;
      } while (local_456[uVar11 - 2] != '\0');
      uVar16 = uVar7;
      if (uVar11 + 1 < 0x400) {
        local_456[uVar11 - 2] = *(undefined1 *)((long)&local_40 + lVar9);
        local_456[uVar11 - 1] = 0;
      }
    }
  }
  local_3c = 0;
  local_40 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar20 = ' ';
      pcVar19 = str_10003ab4;
      do {
        pcVar19 = pcVar19 + 1;
        local_456[uVar7 - 2] = cVar20;
        uVar7 = uVar7 + 1;
        cVar20 = *pcVar19;
        if (cVar20 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
LAB_1000121e:
    local_456[uVar7 - 2] = 0;
  }
  else {
    if (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0) ||
       (iVar18 = (*(code *)(ulong)(uint)param_1[0x17])
                           ((uint)bVar2,param_2[1],param_2[2],4,2,&local_3c), iVar18 == 0)) {
      uVar16 = 0;
      do {
        uVar7 = uVar16;
        uVar16 = uVar7 + 1;
      } while (local_456[uVar7 - 2] != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar20 = ' ';
        pcVar19 = str_10003acc;
        do {
          pcVar19 = pcVar19 + 1;
          local_456[uVar7 - 2] = cVar20;
          uVar7 = uVar7 + 1;
          cVar20 = *pcVar19;
          if (cVar20 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
      goto LAB_1000121e;
    }
    uVar6 = 1;
    if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
      uVar6 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
    }
    uVar23 = uVar6 | 2;
    if (*(uint *)(param_2 + 0x18) == 0) {
      uVar23 = uVar6;
    }
    if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
      uVar23 = uVar6 | 1;
    }
    uVar6 = uVar23 | 2;
    if (*(uint *)(param_2 + 0x1c) == 0) {
      uVar6 = uVar23;
    }
    if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
      uVar6 = uVar23 | 1;
    }
    uVar23 = uVar6 | 2;
    if (*(uint *)(param_2 + 0x20) == 0) {
      uVar23 = uVar6;
    }
    if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
      uVar23 = uVar6 | 1;
    }
    uVar6 = uVar23 | 2;
    if (*(uint *)(param_2 + 0x24) == 0) {
      uVar6 = uVar23;
    }
    if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
      uVar6 = uVar23 | 1;
    }
    uVar23 = uVar6 | 2;
    if (*(uint *)(param_2 + 0x28) == 0) {
      uVar23 = uVar6;
    }
    if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
      uVar23 = uVar6 | 1;
    }
    uVar6 = uVar23 | 4;
    if ((param_2[8] == 6) && (param_2[9] != 0)) {
      uVar6 = uVar23 | 6;
    }
    local_40 = local_3c | uVar6;
    if ((((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) ||
        ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) ||
       (iVar18 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2),
       iVar18 == 0)) {
      uVar16 = 0;
      do {
        uVar7 = uVar16;
        uVar16 = uVar7 + 1;
      } while (local_456[uVar7 - 2] != '\0');
      if (uVar7 + 1 < 0x400) {
        cVar20 = ' ';
        pcVar19 = str_10003ae4;
        do {
          pcVar19 = pcVar19 + 1;
          local_456[uVar7 - 2] = cVar20;
          uVar7 = uVar7 + 1;
          cVar20 = *pcVar19;
          if (cVar20 == '\0') break;
        } while (uVar7 < 0x3ff);
      }
      goto LAB_1000121e;
    }
    if (((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) {
      (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_40);
    }
    uVar23 = local_3c;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar16 < 0x400) {
      local_456[uVar7 - 2] = 0x20;
      uVar7 = uVar16;
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar20 = 'p';
      pcVar19 = str_10003afd;
      do {
        pcVar19 = pcVar19 + 1;
        local_456[uVar7 - 2] = cVar20;
        uVar7 = uVar7 + 1;
        cVar20 = *pcVar19;
        if (cVar20 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar16 < 0x400) {
      local_456[uVar7 - 2] = 0x3d;
      uVar7 = uVar16;
    }
    local_456[uVar7 - 2] = 0;
    iVar18 = 8;
    do {
      uVar22 = uVar23 >> ((char)iVar18 * '\x04' - 4U & 0x1f) & 0xf;
      cVar20 = (char)uVar22;
      cVar14 = cVar20 + '7';
      if (uVar22 < 10) {
        cVar14 = cVar20 + '0';
      }
      uVar16 = 0;
      do {
        uVar7 = uVar16;
        uVar16 = uVar7 + 1;
      } while (local_456[uVar7 - 2] != '\0');
      if (uVar7 + 1 < 0x400) {
        local_456[uVar7 - 2] = cVar14;
        local_456[uVar7 - 1] = 0;
      }
      uVar22 = local_40;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar16 < 0x400) {
      local_456[uVar7 - 2] = 0x20;
      uVar7 = uVar16;
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar20 = 'p';
      pcVar19 = str_10003b0e;
      do {
        pcVar19 = pcVar19 + 1;
        local_456[uVar7 - 2] = cVar20;
        uVar7 = uVar7 + 1;
        cVar20 = *pcVar19;
        if (cVar20 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar16 < 0x400) {
      local_456[uVar7 - 2] = 0x3d;
      uVar7 = uVar16;
    }
    local_456[uVar7 - 2] = 0;
    iVar18 = 8;
    do {
      uVar23 = uVar22 >> ((char)iVar18 * '\x04' - 4U & 0x1f) & 0xf;
      cVar20 = (char)uVar23;
      cVar14 = cVar20 + '7';
      if (uVar23 < 10) {
        cVar14 = cVar20 + '0';
      }
      uVar16 = 0;
      do {
        uVar7 = uVar16;
        uVar16 = uVar7 + 1;
      } while (local_456[uVar7 - 2] != '\0');
      if (uVar7 + 1 < 0x400) {
        local_456[uVar7 - 2] = cVar14;
        local_456[uVar7 - 1] = 0;
      }
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar16 < 0x400) {
      local_456[uVar7 - 2] = 0x20;
      uVar7 = uVar16;
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      cVar20 = 'p';
      pcVar19 = str_10003b1e;
      do {
        pcVar19 = pcVar19 + 1;
        local_456[uVar7 - 2] = cVar20;
        uVar7 = uVar7 + 1;
        cVar20 = *pcVar19;
        if (cVar20 == '\0') break;
      } while (uVar7 < 0x3ff);
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar16 < 0x400) {
      local_456[uVar7 - 2] = 0x3d;
      uVar7 = uVar16;
    }
    local_456[uVar7 - 2] = 0;
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      *(undefined2 *)(local_456 + (uVar7 - 2)) = 0x30;
    }
    uVar16 = 0;
    do {
      uVar7 = uVar16;
      uVar16 = uVar7 + 1;
    } while (local_456[uVar7 - 2] != '\0');
    if (uVar7 + 1 < 0x400) {
      local_456[uVar7 - 2] = (byte)uVar6 | 0x30;
      local_456[uVar7 - 1] = 0;
    }
    if ((uVar6 & ~uVar22) == 0) {
      local_40 = 0;
      local_48 = 0;
      local_4c = 0;
      uVar6 = *(uint *)(param_2 + 0x14);
      if ((uVar6 & 1) == 0 && uVar6 != 0) {
        iVar18 = 0;
        if ((uVar6 & 6) == 4) {
          iVar18 = *(int *)(param_2 + 0x18);
        }
        uVar6 = uVar6 & 0xfffffff0;
        if (!(uVar6 == 0 && iVar18 == 0)) {
          puVar1 = (ulong *)(&DAT_10005018 + lVar15);
          *puVar1 = 0;
          local_3c = 0;
          if (*param_1 == 0x54584b57) {
            if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
              if ((0x67 < (uint)param_1[2] && iVar18 == 0) &&
                 (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                  (iVar18 = (*(code *)(ulong)(uint)param_1[0x19])(uVar6,0,0x4000,&local_3c),
                  iVar18 != 0)))) {
                uVar16 = (ulong)local_3c;
                *puVar1 = uVar16;
                goto LAB_100017b3;
              }
            }
            else {
              iVar18 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar6,iVar18,0x4000,puVar1);
              if (iVar18 != 0) {
                uVar16 = *puVar1;
LAB_100017b3:
                if ((uVar16 != 0) && (*param_1 == 0x54584b57)) {
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if (((uVar16 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                       ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100026b7;
                    iVar18 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar16,4,&local_40);
                  }
                  else {
                    iVar18 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar16,4,&local_40);
                  }
                  if (((iVar18 != 0) && (*puVar1 != 0)) && (*param_1 == 0x54584b57)) {
                    uVar16 = *puVar1 + 4;
                    if (((uint)param_1[2] < 0xc0) ||
                       ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                      if ((uVar16 >> 0x20 != 0) ||
                         (((uint)param_1[2] < 0x6c ||
                          ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_100026b7;
                      iVar18 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar16,4,&local_48);
                    }
                    else {
                      iVar18 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar16,4,&local_48);
                    }
                    if (iVar18 != 0) {
                      local_3c = 0;
                      if ((*puVar1 != 0) && (*param_1 == 0x54584b57)) {
                        uVar16 = *puVar1 + 0x1c;
                        if (((uint)param_1[2] < 0xc0) ||
                           ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                          if (((uVar16 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100026b7;
                          iVar18 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar16,4,&local_3c);
                        }
                        else {
                          iVar18 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar16,4,&local_3c);
                        }
                        uVar6 = local_40;
                        if ((iVar18 != 0) && ((local_3c & 1) == 0)) {
                          uVar23 = 4 << ((byte)local_48 & 0xf);
                          *(uint *)(&DAT_10005020 + lVar15) = uVar23;
                          if (uVar23 < 0x401) {
                            uVar23 = 0x20;
                            if ((local_40 & 0xffff) < 0x20) {
                              uVar23 = (local_40 & 0xffff) + 1;
                            }
                            *(uint *)(&DAT_10005024 + lVar15) = uVar23;
                            if (1 < uVar23) {
                              uVar16 = *(long *)(&DAT_10005018 + lVar15) + 0x1000;
                              uVar8 = recovered_10002c20(param_1,(ulong *)(lVar15 + ((uintptr_t)pf_module_state + 0x161aU)),0x10
                                                         ,0x40,uVar16);
                              if ((((int)uVar8 != 0) &&
                                  (uVar8 = recovered_10002c20(param_1,(ulong *)(lVar15 + ((uintptr_t)pf_module_state + 0x164aU))
                                                              ,0x10,0x10,
                                                              *(uint *)(&DAT_10005020 + lVar15) +
                                                              uVar16), (int)uVar8 != 0)) &&
                                 ((uVar8 = recovered_10002c20(param_1,(ulong *)(&DAT_10005090 +
                                                                               lVar15),
                                                              *(int *)(&DAT_10005024 + lVar15),0x40,
                                                              (uint)(*(int *)(&DAT_10005020 + lVar15
                                                                             ) * 2) + uVar16),
                                  (int)uVar8 != 0 &&
                                  (uVar8 = recovered_10002c20(param_1,(ulong *)(lVar15 + ((uintptr_t)pf_module_state + 0x16aaU))
                                                              ,*(int *)(&DAT_10005024 + lVar15),0x10
                                                              ,uVar16 + (uint)(*(int *)(&
                                                  DAT_10005020 + lVar15) * 3)), (int)uVar8 != 0))))
                              {
                                if (*param_1 == 0x54584b57) {
                                  if (((uint)param_1[2] < 0x38) ||
                                     ((code *)(ulong)(uint)param_1[0xd] == (code *)0x0)) {
                                    *(undefined8 *)(&DAT_100050f0 + lVar15) = 0;
                                    uVar16 = 0;
                                  }
                                  else {
                                    lVar9 = (*(code *)(ulong)(uint)param_1[0xd])(0x3000);
                                    uVar16 = lVar9 + 0xfffU & 0xfffffffffffff000;
                                    if (lVar9 == 0) {
                                      uVar16 = 0;
                                    }
                                    iVar18 = *param_1;
                                    *(ulong *)(&DAT_100050f0 + lVar15) = uVar16;
                                    if (iVar18 != 0x54584b57) goto LAB_10001a92;
                                  }
                                  if (((uint)param_1[2] < 0x38) ||
                                     ((code *)(ulong)(uint)param_1[0xd] == (code *)0x0))
                                  goto LAB_10001a92;
                                  lVar9 = (*(code *)(ulong)(uint)param_1[0xd])(0x2000);
                                  uVar16 = *(ulong *)(&DAT_100050f0 + lVar15);
                                }
                                else {
                                  *(undefined8 *)(&DAT_100050f0 + lVar15) = 0;
                                  uVar16 = 0;
LAB_10001a92:
                                  lVar9 = 0;
                                }
                                uVar7 = lVar9 + 0xfffU & 0xfffffffffffff000;
                                if (lVar9 == 0) {
                                  uVar7 = 0;
                                }
                                *(ulong *)(&DAT_10005100 + lVar15) = uVar7;
                                if (((((uVar16 != 0) && (uVar7 != 0)) && (*param_1 == 0x54584b57))
                                    && ((0x73 < (uint)param_1[2] &&
                                        ((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)))) &&
                                   ((iVar18 = (*(code *)(ulong)(uint)param_1[0x1c])
                                                        (0,uVar16,0x2000,lVar15 + ((uintptr_t)pf_module_state + 0x16e2U),
                                                         lVar15 + ((uintptr_t)pf_module_state + 0x16e6U)), iVar18 != 0 &&
                                    ((*param_1 == 0x54584b57 && (0x73 < (uint)param_1[2])))))) {
                                  if ((!(*(long *)(&DAT_10005100 + lVar15) == 0 ||
                                        (code *)(ulong)(uint)param_1[0x1c] == (code *)0x0)) &&
                                     ((iVar18 = (*(code *)(ulong)(uint)param_1[0x1c])
                                                          (0,*(long *)(&DAT_10005100 + lVar15),
                                                           0x1000,lVar15 + ((uintptr_t)pf_module_state + 0x16f2U),
                                                           lVar15 + ((uintptr_t)pf_module_state + 0x16f6U)), iVar18 != 0 &&
                                      (uVar8 = recovered_10002ba0(param_1,(long)puVar17,0x14,
                                                                  (long)&local_4c), (int)uVar8 != 0)
                                      ))) {
                                    iVar18 = (uVar6 >> 0x18) * 500 + 500;
                                    if ((local_4c & 1) != 0) {
                                      recovered_10002db0(param_1,(long)puVar17,0x14,
                                                         local_4c & 0xfffffffe);
                                      uVar8 = recovered_10002e20(param_1,(long)puVar17,0,iVar18);
                                      if ((int)uVar8 == 0) goto LAB_100026b7;
                                    }
                                    recovered_10002db0(param_1,(long)puVar17,0x24,0xf000f);
                                    recovered_10002db0(param_1,(long)puVar17,0x28,
                                                       *(undefined4 *)(&DAT_10005038 + lVar15));
                                    recovered_10002db0(param_1,(long)puVar17,0x2c,
                                                       *(undefined4 *)(&DAT_1000503c + lVar15));
                                    recovered_10002db0(param_1,(long)puVar17,0x30,
                                                       *(undefined4 *)(&DAT_10005068 + lVar15));
                                    recovered_10002db0(param_1,(long)puVar17,0x34,
                                                       *(undefined4 *)(&DAT_1000506c + lVar15));
                                    recovered_10002db0(param_1,(long)puVar17,0xc,0xffffffff);
                                    recovered_10002db0(param_1,(long)puVar17,0x14,0x460000);
                                    recovered_10002db0(param_1,(long)puVar17,0x14,0x460001);
                                    uVar8 = recovered_10002e20(param_1,(long)puVar17,1,iVar18);
                                    if (((int)uVar8 != 0) &&
                                       (bVar25 = recovered_10002f40(param_1,(long)puVar17),
                                       (int)CONCAT71(extraout_var,bVar25) != 0)) {
                                      *puVar17 = 1;
                                      DAT_1000500c = DAT_1000500c + 1;
                                      uVar8 = 1;
                                      uVar10 = recovered_10003400(param_1,(long)puVar17,1,0);
                                      if ((int)uVar10 != 0) {
                                        uVar6 = *(uint *)(*(long *)(&DAT_10005100 + lVar15) + 0x204)
                                        ;
                                        uVar23 = 8;
                                        if (uVar6 < 8) {
                                          uVar23 = uVar6;
                                        }
                                        if ((uVar6 != 0) && (DAT_10005008 < 8)) {
                                          local_44 = 1;
                                          do {
                                            uVar10 = recovered_10003400(param_1,(long)puVar17,0,
                                                                        local_44);
                                            if ((int)uVar10 != 0) {
                                              plVar5 = *(long **)(&DAT_10005100 + lVar15);
                                              if (*plVar5 != 0) {
                                                uVar16 = (ulong)(*(byte *)((long)plVar5 + 0x1a) &
                                                                0xf);
                                                bVar2 = *(byte *)((long)plVar5 + uVar16 * 4 + 0x82);
                                                if ((bVar2 == 9) || (bVar2 == 0xc)) {
                                                  lVar9 = uVar16 * 4;
                                                  if ((*(char *)((long)plVar5 + lVar9 + 0x80) ==
                                                       '\0') &&
                                                     (*(char *)((long)plVar5 + lVar9 + 0x81) == '\0'
                                                     )) {
                                                    uVar7 = *plVar5 << (bVar2 - 9 & 0x3f);
                                                    uVar16 = 0xffffffff;
                                                    if (uVar7 < 0xffffffff) {
                                                      uVar16 = uVar7;
                                                    }
                                                    uVar11 = (ulong)DAT_10005008;
                                                    uVar6 = 1 << (bVar2 & 0x1f);
                                                    *(uint *)(&DAT_10005414 + uVar11 * 0x14) = uVar4
                                                    ;
                                                    *(uint *)(&DAT_10005418 + uVar11 * 0x14) =
                                                         local_44;
                                                    *(uint *)(&DAT_1000541c + uVar11 * 0x14) = uVar6
                                                    ;
                                                    *(int *)(&DAT_10005420 + uVar11 * 0x14) =
                                                         (int)uVar16;
                                                    *(undefined4 *)(&DAT_10005410 + uVar11 * 0x14) =
                                                         1;
                                                    DAT_10005008 = DAT_10005008 + 1;
                                                    uVar11 = 0;
                                                    do {
                                                      uVar13 = uVar11;
                                                      uVar11 = uVar13 + 1;
                                                    } while (local_456[uVar13 - 2] != '\0');
                                                    if (uVar11 < 0x400) {
                                                      local_456[uVar13 - 2] = 0x20;
                                                      uVar13 = uVar11;
                                                    }
                                                    local_456[uVar13 - 2] = 0;
                                                    uVar11 = 0xffffffffffffffff;
                                                    do {
                                                      uVar13 = uVar11;
                                                      uVar11 = uVar13 + 1;
                                                    } while (local_456[uVar13 - 1] != '\0');
                                                    if (uVar13 + 2 < 0x400) {
                                                      local_456[uVar13 - 1] = 0x6e;
                                                      bVar25 = uVar11 != 0x3fe;
                                                      uVar11 = uVar13 + 2;
                                                      if (bVar25) {
                                                        uVar11 = uVar13 + 3;
                                                        local_456[uVar13] = 0x73;
                                                        if (uVar11 < 0x3ff) {
                                                          uVar11 = uVar13 + 4;
                                                          local_456[uVar13 + 1] = 0x69;
                                                          if (uVar11 < 0x3ff) {
                                                            local_456[uVar13 + 2] = 100;
                                                            uVar11 = uVar13 + 5;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    local_456[uVar11 - 2] = 0;
                                                    uVar11 = 0;
                                                    do {
                                                      uVar13 = uVar11;
                                                      uVar11 = uVar13 + 1;
                                                    } while (local_456[uVar13 - 2] != '\0');
                                                    if (uVar11 < 0x400) {
                                                      local_456[uVar13 - 2] = 0x3d;
                                                      uVar13 = uVar11;
                                                    }
                                                    local_456[uVar13 - 2] = 0;
                                                    uVar11 = 0xffffffffffffffff;
                                                    uVar22 = local_44;
                                                    do {
                                                      uVar13 = uVar11;
                                                      *(byte *)((long)&local_3c + uVar13 + 1) =
                                                           (char)uVar22 + (char)(uVar22 / 10) * -10
                                                           | 0x30;
                                                      uVar11 = uVar13 + 1;
                                                      if (8 < uVar11) break;
                                                      bVar25 = 9 < uVar22;
                                                      uVar22 = uVar22 / 10;
                                                    } while (bVar25);
                                                    if ((uVar11 & 1) == 0) {
                                                      uVar12 = 0;
                                                      do {
                                                        uVar24 = uVar12;
                                                        uVar12 = uVar24 + 1;
                                                      } while (local_456[uVar24 - 2] != '\0');
                                                      uVar12 = uVar11;
                                                      if (uVar24 + 1 < 0x400) {
                                                        local_456[uVar24 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_3c + uVar13 + 1);
                                                        local_456[uVar24 - 1] = 0;
                                                      }
                                                    }
                                                    else {
                                                      uVar12 = uVar13 + 2;
                                                    }
                                                    while (uVar11 != 0) {
                                                      uVar11 = 0;
                                                      do {
                                                        uVar13 = uVar11;
                                                        uVar11 = uVar13 + 1;
                                                      } while (local_456[uVar13 - 2] != '\0');
                                                      if (uVar13 + 1 < 0x400) {
                                                        local_456[uVar13 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + uVar12 + 3);
                                                        local_456[uVar13 - 1] = 0;
                                                      }
                                                      lVar9 = uVar12 + 2;
                                                      uVar12 = uVar12 - 2;
                                                      uVar11 = 0;
                                                      do {
                                                        uVar13 = uVar11;
                                                        uVar11 = uVar13 + 1;
                                                      } while (local_456[uVar13 - 2] != '\0');
                                                      uVar11 = uVar12;
                                                      if (uVar13 + 1 < 0x400) {
                                                        local_456[uVar13 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + lVar9);
                                                        local_456[uVar13 - 1] = 0;
                                                      }
                                                    }
                                                    uVar11 = 0;
                                                    do {
                                                      uVar13 = uVar11;
                                                      uVar11 = uVar13 + 1;
                                                    } while (local_456[uVar13 - 2] != '\0');
                                                    if (uVar11 < 0x400) {
                                                      local_456[uVar13 - 2] = 0x20;
                                                      uVar13 = uVar11;
                                                    }
                                                    local_456[uVar13 - 2] = 0;
                                                    uVar11 = 0xffffffffffffffff;
                                                    do {
                                                      uVar13 = uVar11;
                                                      uVar11 = uVar13 + 1;
                                                    } while (local_456[uVar13 - 1] != '\0');
                                                    if (uVar13 + 2 < 0x400) {
                                                      local_456[uVar13 - 1] = 0x73;
                                                      bVar25 = uVar11 != 0x3fe;
                                                      uVar11 = uVar13 + 2;
                                                      if (bVar25) {
                                                        uVar11 = uVar13 + 3;
                                                        local_456[uVar13] = 0x65;
                                                        if (uVar11 < 0x3ff) {
                                                          uVar11 = uVar13 + 4;
                                                          local_456[uVar13 + 1] = 99;
                                                          if (uVar11 < 0x3ff) {
                                                            uVar11 = uVar13 + 5;
                                                            local_456[uVar13 + 2] = 0x74;
                                                            if (uVar11 < 0x3ff) {
                                                              uVar11 = uVar13 + 6;
                                                              local_456[uVar13 + 3] = 0x6f;
                                                              if (uVar11 < 0x3ff) {
                                                                uVar11 = uVar13 + 7;
                                                                local_456[uVar13 + 4] = 0x72;
                                                                if (uVar11 < 0x3ff) {
                                                                  local_456[uVar13 + 5] = 0x73;
                                                                  uVar11 = uVar13 + 8;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    local_456[uVar11 - 2] = 0;
                                                    uVar11 = 0;
                                                    do {
                                                      uVar13 = uVar11;
                                                      uVar11 = uVar13 + 1;
                                                    } while (local_456[uVar13 - 2] != '\0');
                                                    if (uVar11 < 0x400) {
                                                      local_456[uVar13 - 2] = 0x3d;
                                                      uVar13 = uVar11;
                                                    }
                                                    local_456[uVar13 - 2] = 0;
                                                    if (uVar7 == 0) {
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      if (uVar7 + 1 < 0x400) {
                                                        *(undefined2 *)(local_456 + (uVar7 - 2)) =
                                                             0x30;
                                                      }
                                                    }
                                                    else {
                                                      uVar7 = 0xffffffffffffffff;
                                                      do {
                                                        uVar13 = uVar7;
                                                        uVar22 = (uint)uVar16;
                                                        uVar11 = (uVar16 & 0xffffffff) / 10;
                                                        *(byte *)((long)&local_3c + uVar13 + 1) =
                                                             (char)uVar16 + (char)uVar11 * -10 |
                                                             0x30;
                                                        uVar7 = uVar13 + 1;
                                                        if (8 < uVar7) break;
                                                        uVar16 = uVar11;
                                                      } while (9 < uVar22);
                                                      if ((uVar7 & 1) == 0) {
                                                        uVar16 = 0;
                                                        do {
                                                          uVar11 = uVar16;
                                                          uVar16 = uVar11 + 1;
                                                        } while (local_456[uVar11 - 2] != '\0');
                                                        uVar16 = uVar7;
                                                        if (uVar11 + 1 < 0x400) {
                                                          local_456[uVar11 - 2] =
                                                               *(undefined1 *)
                                                                ((long)&local_3c + uVar13 + 1);
                                                          local_456[uVar11 - 1] = 0;
                                                        }
                                                      }
                                                      else {
                                                        uVar16 = uVar13 + 2;
                                                      }
                                                      while (uVar7 != 0) {
                                                        uVar7 = 0;
                                                        do {
                                                          uVar11 = uVar7;
                                                          uVar7 = uVar11 + 1;
                                                        } while (local_456[uVar11 - 2] != '\0');
                                                        if (uVar11 + 1 < 0x400) {
                                                          local_456[uVar11 - 2] =
                                                               *(undefined1 *)
                                                                ((long)&local_40 + uVar16 + 3);
                                                          local_456[uVar11 - 1] = 0;
                                                        }
                                                        lVar9 = uVar16 + 2;
                                                        uVar16 = uVar16 - 2;
                                                        uVar7 = 0;
                                                        do {
                                                          uVar11 = uVar7;
                                                          uVar7 = uVar11 + 1;
                                                        } while (local_456[uVar11 - 2] != '\0');
                                                        uVar7 = uVar16;
                                                        if (uVar11 + 1 < 0x400) {
                                                          local_456[uVar11 - 2] =
                                                               *(undefined1 *)
                                                                ((long)&local_40 + lVar9);
                                                          local_456[uVar11 - 1] = 0;
                                                        }
                                                      }
                                                    }
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar16 < 0x400) {
                                                      local_456[uVar7 - 2] = 0x20;
                                                      uVar7 = uVar16;
                                                    }
                                                    local_456[uVar7 - 2] = 0;
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar7 + 1 < 0x400) {
                                                      cVar20 = 'n';
                                                      pcVar19 = str_10003b52;
                                                      do {
                                                        pcVar19 = pcVar19 + 1;
                                                        local_456[uVar7 - 2] = cVar20;
                                                        uVar7 = uVar7 + 1;
                                                        cVar20 = *pcVar19;
                                                        if (cVar20 == '\0') break;
                                                      } while (uVar7 < 0x3ff);
                                                    }
                                                    local_456[uVar7 - 2] = 0;
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar16 < 0x400) {
                                                      local_456[uVar7 - 2] = 0x3d;
                                                      uVar7 = uVar16;
                                                    }
                                                    local_456[uVar7 - 2] = 0;
                                                    uVar16 = 0xffffffffffffffff;
                                                    do {
                                                      uVar7 = uVar16;
                                                      *(byte *)((long)&local_3c + uVar7 + 1) =
                                                           (char)uVar6 + (char)(uVar6 / 10) * -10 |
                                                           0x30;
                                                      uVar16 = uVar7 + 1;
                                                      if (8 < uVar16) break;
                                                      bVar25 = 9 < uVar6;
                                                      uVar6 = uVar6 / 10;
                                                    } while (bVar25);
                                                    if ((uVar16 & 1) == 0) {
                                                      uVar11 = 0;
                                                      do {
                                                        uVar13 = uVar11;
                                                        uVar11 = uVar13 + 1;
                                                      } while (local_456[uVar13 - 2] != '\0');
                                                      uVar11 = uVar16;
                                                      if (uVar13 + 1 < 0x400) {
                                                        local_456[uVar13 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_3c + uVar7 + 1);
                                                        local_456[uVar13 - 1] = 0;
                                                      }
                                                    }
                                                    else {
                                                      uVar11 = uVar7 + 2;
                                                    }
                                                    while (uVar16 != 0) {
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      if (uVar7 + 1 < 0x400) {
                                                        local_456[uVar7 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + uVar11 + 3);
                                                        local_456[uVar7 - 1] = 0;
                                                      }
                                                      lVar9 = uVar11 + 2;
                                                      uVar11 = uVar11 - 2;
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      uVar16 = uVar11;
                                                      if (uVar7 + 1 < 0x400) {
                                                        local_456[uVar7 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + lVar9);
                                                        local_456[uVar7 - 1] = 0;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar16 < 0x400) {
                                                      local_456[uVar7 - 2] = 0x20;
                                                      uVar7 = uVar16;
                                                    }
                                                    local_456[uVar7 - 2] = 0;
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar7 + 1 < 0x400) {
                                                      cVar20 = 's';
                                                      pcVar19 = str_10003b3e;
                                                      do {
                                                        pcVar19 = pcVar19 + 1;
                                                        local_456[uVar7 - 2] = cVar20;
                                                        uVar7 = uVar7 + 1;
                                                        cVar20 = *pcVar19;
                                                        if (cVar20 == '\0') break;
                                                      } while (uVar7 < 0x3ff);
                                                    }
                                                    local_456[uVar7 - 2] = 0;
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar16 < 0x400) {
                                                      local_456[uVar7 - 2] = 0x3d;
                                                      uVar7 = uVar16;
                                                    }
                                                    local_456[uVar7 - 2] = 0;
                                                    uVar16 = 0xffffffffffffffff;
                                                    uVar6 = local_44;
                                                    do {
                                                      uVar7 = uVar16;
                                                      *(byte *)((long)&local_3c + uVar7 + 1) =
                                                           (char)uVar6 + (char)(uVar6 / 10) * -10 |
                                                           0x30;
                                                      uVar16 = uVar7 + 1;
                                                      if (8 < uVar16) break;
                                                      bVar25 = 9 < uVar6;
                                                      uVar6 = uVar6 / 10;
                                                    } while (bVar25);
                                                    if ((uVar16 & 1) == 0) {
                                                      uVar11 = 0;
                                                      do {
                                                        uVar13 = uVar11;
                                                        uVar11 = uVar13 + 1;
                                                      } while (local_456[uVar13 - 2] != '\0');
                                                      uVar11 = uVar16;
                                                      if (uVar13 + 1 < 0x400) {
                                                        local_456[uVar13 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_3c + uVar7 + 1);
                                                        local_456[uVar13 - 1] = 0;
                                                      }
                                                    }
                                                    else {
                                                      uVar11 = uVar7 + 2;
                                                    }
                                                    while (uVar16 != 0) {
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      if (uVar7 + 1 < 0x400) {
                                                        local_456[uVar7 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + uVar11 + 3);
                                                        local_456[uVar7 - 1] = 0;
                                                      }
                                                      lVar9 = uVar11 + 2;
                                                      uVar11 = uVar11 - 2;
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      uVar16 = uVar11;
                                                      if (uVar7 + 1 < 0x400) {
                                                        local_456[uVar7 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + lVar9);
                                                        local_456[uVar7 - 1] = 0;
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  uVar16 = 0;
                                                  do {
                                                    uVar7 = uVar16;
                                                    uVar16 = uVar7 + 1;
                                                  } while (local_456[uVar7 - 2] != '\0');
                                                  if (uVar16 < 0x400) {
                                                    local_456[uVar7 - 2] = 0x20;
                                                    uVar7 = uVar16;
                                                  }
                                                  local_456[uVar7 - 2] = 0;
                                                  uVar16 = 0;
                                                  do {
                                                    uVar7 = uVar16;
                                                    uVar16 = uVar7 + 1;
                                                  } while (local_456[uVar7 - 2] != '\0');
                                                  if (uVar7 + 1 < 0x400) {
                                                    cVar20 = 's';
                                                    pcVar19 = str_10003b2d;
                                                    do {
                                                      pcVar19 = pcVar19 + 1;
                                                      local_456[uVar7 - 2] = cVar20;
                                                      uVar7 = uVar7 + 1;
                                                      cVar20 = *pcVar19;
                                                      if (cVar20 == '\0') break;
                                                    } while (uVar7 < 0x3ff);
                                                  }
                                                  local_456[uVar7 - 2] = 0;
                                                  uVar16 = 0;
                                                  do {
                                                    uVar7 = uVar16;
                                                    uVar16 = uVar7 + 1;
                                                  } while (local_456[uVar7 - 2] != '\0');
                                                  if (uVar16 < 0x400) {
                                                    local_456[uVar7 - 2] = 0x3d;
                                                    uVar7 = uVar16;
                                                  }
                                                  local_456[uVar7 - 2] = 0;
                                                  if (bVar2 == 0) {
                                                    uVar16 = 0;
                                                    do {
                                                      uVar7 = uVar16;
                                                      uVar16 = uVar7 + 1;
                                                    } while (local_456[uVar7 - 2] != '\0');
                                                    if (uVar7 + 1 < 0x400) {
                                                      *(undefined2 *)(local_456 + (uVar7 - 2)) =
                                                           0x30;
                                                    }
                                                  }
                                                  else {
                                                    uVar16 = 0xffffffffffffffff;
                                                    uVar6 = (uint)bVar2;
                                                    do {
                                                      uVar7 = uVar16;
                                                      *(byte *)((long)&local_3c + uVar7 + 1) =
                                                           (char)uVar6 + (char)(uVar6 / 10) * -10 |
                                                           0x30;
                                                      uVar16 = uVar7 + 1;
                                                      if (8 < uVar16) break;
                                                      bVar25 = 9 < uVar6;
                                                      uVar6 = uVar6 / 10;
                                                    } while (bVar25);
                                                    if ((uVar16 & 1) == 0) {
                                                      uVar11 = 0;
                                                      do {
                                                        uVar13 = uVar11;
                                                        uVar11 = uVar13 + 1;
                                                      } while (local_456[uVar13 - 2] != '\0');
                                                      uVar11 = uVar16;
                                                      if (uVar13 + 1 < 0x400) {
                                                        local_456[uVar13 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_3c + uVar7 + 1);
                                                        local_456[uVar13 - 1] = 0;
                                                      }
                                                    }
                                                    else {
                                                      uVar11 = uVar7 + 2;
                                                    }
                                                    while (uVar16 != 0) {
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      if (uVar7 + 1 < 0x400) {
                                                        local_456[uVar7 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + uVar11 + 3);
                                                        local_456[uVar7 - 1] = 0;
                                                      }
                                                      lVar9 = uVar11 + 2;
                                                      uVar11 = uVar11 - 2;
                                                      uVar16 = 0;
                                                      do {
                                                        uVar7 = uVar16;
                                                        uVar16 = uVar7 + 1;
                                                      } while (local_456[uVar7 - 2] != '\0');
                                                      uVar16 = uVar11;
                                                      if (uVar7 + 1 < 0x400) {
                                                        local_456[uVar7 - 2] =
                                                             *(undefined1 *)
                                                              ((long)&local_40 + lVar9);
                                                        local_456[uVar7 - 1] = 0;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          } while ((local_44 < uVar23) &&
                                                  (local_44 = local_44 + 1, DAT_10005008 < 8));
                                        }
                                      }
                                      uVar4 = param_1[3];
                                      if (uVar4 == 0) {
                                        return 1;
                                      }
                                      pcVar19 = str_10003aa6;
                                      goto LAB_1000123e;
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
                }
              }
            }
          }
        }
      }
LAB_100026b7:
      uVar4 = param_1[3];
      if (uVar4 == 0) {
        return 0;
      }
      uVar8 = 0;
      pcVar19 = str_10003a8b;
      goto LAB_1000123e;
    }
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[3];
  if (uVar4 == 0) {
    return 0;
  }
  uVar8 = 0;
  pcVar19 = str_10003a5f;
LAB_1000123e:
  (*(code *)(ulong)uVar4)(pcVar19,str_10003a7b,&local_458);
  return uVar8;
}

#undef DAT_10005008
#undef DAT_1000500c
#undef DAT_10005010
#undef DAT_10005018
#undef DAT_10005020
#undef DAT_10005024
#undef DAT_10005038
#undef DAT_1000503c
#undef DAT_10005068
#undef DAT_1000506c
#undef DAT_10005090
#undef DAT_100050f0
#undef DAT_10005100
#undef DAT_10005410
#undef DAT_10005414
#undef DAT_10005418
#undef DAT_1000541c
#undef DAT_10005420
#undef str_10003a4b
#undef str_10003a5f
#undef str_10003a7b
#undef str_10003a8b
#undef str_10003aa6
#undef str_10003ab4
#undef str_10003acc
#undef str_10003ae4
#undef str_10003afd
#undef str_10003b0e
#undef str_10003b1e
#undef str_10003b2d
#undef str_10003b3e
#undef str_10003b52
#undef local_3c
#undef cStack_459
#undef local_458
#undef local_456
#undef local_4c
#undef local_48
#undef local_44
#undef local_40

#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x15f2U)))
#undef DAT_10005410
#define DAT_10005410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19faU)))
#undef DAT_10005420
#define DAT_10005420 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a0aU)))
#undef str_10003b5e
#define str_10003b5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002700
 */

undefined8 recovered_10002700(uint param_1,undefined4 *param_2,long param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  uVar1 = 0;
  if (((param_1 < DAT_10005008) && (param_2 != (undefined4 *)0x0)) &&
     (*(int *)(&DAT_10005410 + (ulong)param_1 * 0x14) != 0)) {
    *param_2 = *(undefined4 *)(&DAT_10005420 + (ulong)param_1 * 0x14);
    uVar1 = 1;
    if (param_4 != 0 && param_3 != 0) {
      if (param_4 - 1U == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = param_4 - 2;
        uVar5 = 8;
        if (uVar2 < 8) {
          uVar5 = (ulong)uVar2;
        }
        uVar4 = uVar5 + 1;
        uVar6 = (ulong)((uint)uVar4 & 3);
        if (uVar2 < 3) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          do {
            *(undefined4 *)(param_3 + uVar3) = *(undefined4 *)(str_10003b5e + uVar3);
            uVar3 = uVar3 + 4;
          } while (((uint)uVar4 & 0x1c) != uVar3);
        }
        if (uVar6 != 0) {
          lVar7 = -uVar6;
          do {
            *(char *)(param_3 + uVar3) = str_10003b5e[uVar3];
            uVar3 = uVar3 + 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0);
        }
        if (uVar3 < param_4 - 1U) {
          *(byte *)(param_3 + uVar4) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
          uVar4 = (ulong)((int)uVar5 + 2);
        }
      }
      *(undefined1 *)(param_3 + (uVar4 & 0xffffffff)) = 0;
    }
  }
  return uVar1;
}

#undef DAT_10005008
#undef DAT_10005410
#undef DAT_10005420
#undef str_10003b5e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002810
 */

void recovered_10002810(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003530(param_1,param_2,param_3,param_4,0);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

void recovered_10002820(uint param_1,uint param_2,long param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003530(param_1,param_2,param_3,param_4,1);
  return;
}


#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x15eaU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x15f2U)))
#undef DAT_10005028
#define DAT_10005028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1612U)))
#undef DAT_10005090
#define DAT_10005090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x167aU)))
#undef DAT_100050a4
#define DAT_100050a4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x168eU)))
#undef DAT_100050a8
#define DAT_100050a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1692U)))
#undef DAT_10005410
#define DAT_10005410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19faU)))
#undef DAT_10005414
#define DAT_10005414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19feU)))
#undef DAT_10005418
#define DAT_10005418 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a02U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002830
 */

bool recovered_10002830(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;

  piVar4 = DAT_10005000;
  if (param_1 < DAT_10005008) {
    if (DAT_10005000 != (int *)0x0 && *(int *)(&DAT_10005410 + (ulong)param_1 * 0x14) != 0) {
      lVar1 = (ulong)param_1 * 0x14;
      uVar3 = *(undefined4 *)(&DAT_10005418 + lVar1);
      lVar7 = (ulong)*(uint *)(&DAT_10005414 + lVar1) * 0x100;
      lVar1 = *(long *)(&DAT_10005090 + lVar7);
      iVar8 = *(int *)(&DAT_10005028 + lVar7) + 1;
      *(short *)(&DAT_10005028 + lVar7) = (short)iVar8;
      lVar6 = (ulong)*(uint *)(&DAT_100050a4 + lVar7) * (ulong)*(uint *)(&DAT_100050a8 + lVar7);
      *(undefined8 *)(lVar1 + lVar6) = 0;
      ((undefined8 *)(lVar1 + lVar6))[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar6);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar6);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar6);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(lVar1 + lVar6) = 0;
      *(char *)(lVar1 + 2 + lVar6) = (char)iVar8;
      *(char *)(lVar1 + 3 + lVar6) = (char)((uint)iVar8 >> 8);
      *(char *)(lVar1 + 4 + lVar6) = (char)uVar3;
      *(char *)(lVar1 + 5 + lVar6) = (char)((uint)uVar3 >> 8);
      *(char *)(lVar1 + 6 + lVar6) = (char)((uint)uVar3 >> 0x10);
      *(char *)(lVar1 + 7 + lVar6) = (char)((uint)uVar3 >> 0x18);
      bVar5 = recovered_10003130(piVar4,(undefined8 *)(&DAT_10005090 + lVar7),
                                 (long *)(lVar7 + ((uintptr_t)pf_module_state + 0x16aaU)),(short)iVar8);
      return bVar5;
    }
  }
  return false;
}

#undef DAT_10005000
#undef DAT_10005008
#undef DAT_10005028
#undef DAT_10005090
#undef DAT_100050a4
#undef DAT_100050a8
#undef DAT_10005410
#undef DAT_10005414
#undef DAT_10005418

#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002920
 */

undefined8
recovered_10002920(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef local_50
#undef local_4c
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ba0
 */

undefined8 recovered_10002ba0(int *param_1,long param_2,uint param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if (((*(long *)(param_2 + 8) != 0 && param_4 != 0) && (param_1 != (int *)0x0)) &&
     (*param_1 == 0x54584b57)) {
    uVar2 = *(long *)(param_2 + 8) + (ulong)param_3;
    if ((0xbf < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2f] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4,param_4);
      return uVar1;
    }
    if ((uVar2 >> 0x20 == 0) &&
       ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002c12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar2,4,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c20
 */

undefined8 recovered_10002c20(int *param_1,ulong *param_2,int param_3,int param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;

  uVar6 = param_4 * param_3;
  uVar3 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x38)) ||
     ((code *)(ulong)(uint)param_1[0xd] == (code *)0x0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = (*(code *)(ulong)(uint)param_1[0xd])(uVar6 + 0x1000);
  }
  uVar4 = lVar2 + 0xfffU & 0xfffffffffffff000;
  uVar5 = 0;
  if (lVar2 != 0) {
    uVar5 = uVar4;
  }
  *param_2 = uVar5;
  if (uVar5 != 0) {
    if (uVar6 != 0) {
      uVar4 = (ulong)(uVar6 & 3);
      if (uVar6 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined1 *)(*param_2 + uVar5) = 0;
          *(undefined1 *)(*param_2 + 1 + uVar5) = 0;
          *(undefined1 *)(*param_2 + 2 + uVar5) = 0;
          *(undefined1 *)(*param_2 + 3 + uVar5) = 0;
          uVar5 = uVar5 + 4;
        } while ((uVar6 & 0xfffffffc) != uVar5);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)(*param_2 + uVar5) = 0;
        uVar5 = uVar5 + 1;
      }
      uVar4 = *param_2;
    }
    if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) &&
       ((0x73 < (uint)param_1[2] &&
        (uVar4 != 0 && (code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)))) {
      uVar3 = 0;
      iVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(0,uVar4,uVar6,param_2 + 1,(long)param_2 + 0xc);
      if (iVar1 != 0) {
        *(int *)(param_2 + 2) = param_3;
        *(int *)((long)param_2 + 0x14) = param_4;
        param_2[5] = param_5;
        param_2[3] = 0;
        *(undefined4 *)(param_2 + 4) = 1;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002db0
 */

void recovered_10002db0(int *param_1,long param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((*(long *)(param_2 + 8) != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = *(long *)(param_2 + 8) + (ulong)param_3;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return;
    }
  }
  return;
}


#define uStack_38 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e20
 */

undefined8 recovered_10002e20(int *param_1,long param_2,int param_3,int param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong in_RAX;
  int iVar2;
  ulong uVar3;

  iVar2 = param_4 + 1;
  uStack_38 = in_RAX;
  while( true ) {
    uStack_38 = uStack_38 & 0xffffffff;
    if (*(long *)(param_2 + 8) == 0) {
      return 0;
    }
    if (param_1 == (int *)0x0) {
      return 0;
    }
    if (*param_1 != 0x54584b57) {
      return 0;
    }
    uVar3 = *(long *)(param_2 + 8) + 0x1c;
    if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
      if (uVar3 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)param_1[2] < 0x6c) {
        return 0;
      }
      if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
        return 0;
      }
      iVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar3,4,(long)&uStack_38 + 4);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar3,4,(long)&uStack_38 + 4);
    }
    if (iVar1 == 0) {
      return 0;
    }
    if ((uStack_38 & 0x200000000) != 0) break;
    if ((((byte)(uStack_38 >> 0x20) ^ param_3 == 0) & 1) != 0) {
      return 1;
    }
    if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
      (*(code *)(ulong)(uint)param_1[0xc])(1000);
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f40
 */

bool recovered_10002f40(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  undefined7 extraout_var = 0;
  int iVar6;
  long lVar7;
  int iVar8;

  lVar4 = *(long *)(param_2 + 0x20);
  iVar8 = *(int *)(param_2 + 0x18) + 1;
  *(short *)(param_2 + 0x18) = (short)iVar8;
  lVar7 = (ulong)*(uint *)(param_2 + 0x34) * (ulong)*(uint *)(param_2 + 0x38);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  ((undefined8 *)(lVar4 + lVar7))[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + lVar7) = 5;
  *(char *)(lVar4 + 2 + lVar7) = (char)iVar8;
  *(char *)(lVar4 + 3 + lVar7) = (char)((uint)iVar8 >> 8);
  *(undefined4 *)(lVar4 + 4 + lVar7) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(char *)(lVar4 + 0x18 + lVar7) = (char)uVar2;
  *(char *)(lVar4 + 0x19 + lVar7) = (char)((uint)uVar2 >> 8);
  *(char *)(lVar4 + 0x1a + lVar7) = (char)((uint)uVar2 >> 0x10);
  *(char *)(lVar4 + 0x1b + lVar7) = (char)((uint)uVar2 >> 0x18);
  *(char *)(lVar4 + 0x1c + lVar7) = (char)uVar3;
  *(char *)(lVar4 + 0x1d + lVar7) = (char)((uint)uVar3 >> 8);
  *(char *)(lVar4 + 0x1e + lVar7) = (char)((uint)uVar3 >> 0x10);
  *(char *)(lVar4 + 0x1f + lVar7) = (char)((uint)uVar3 >> 0x18);
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = 0;
  iVar6 = *(int *)(param_2 + 0x14) * 0x10000 + -0xffff;
  *(undefined2 *)(lVar4 + 0x28 + lVar7) = 1;
  *(char *)(lVar4 + 0x2a + lVar7) = (char)((uint)iVar6 >> 0x10);
  *(char *)(lVar4 + 0x2b + lVar7) = (char)((uint)iVar6 >> 0x18);
  *(undefined4 *)(lVar4 + 0x2c + lVar7) = 1;
  bVar5 = recovered_10003130(param_1,(undefined8 *)(param_2 + 0x20),(long *)(param_2 + 0x50),
                             (short)iVar8);
  if ((int)CONCAT71(extraout_var,bVar5) == 0) {
    return false;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  iVar8 = *(int *)(param_2 + 0x18) + 1;
  *(short *)(param_2 + 0x18) = (short)iVar8;
  lVar7 = (ulong)*(uint *)(param_2 + 0x34) * (ulong)*(uint *)(param_2 + 0x38);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  ((undefined8 *)(lVar4 + lVar7))[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + lVar7) = 1;
  *(char *)(lVar4 + 2 + lVar7) = (char)iVar8;
  *(char *)(lVar4 + 3 + lVar7) = (char)((uint)iVar8 >> 8);
  *(undefined4 *)(lVar4 + 4 + lVar7) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(char *)(lVar4 + 0x18 + lVar7) = (char)uVar2;
  *(char *)(lVar4 + 0x19 + lVar7) = (char)((uint)uVar2 >> 8);
  *(char *)(lVar4 + 0x1a + lVar7) = (char)((uint)uVar2 >> 0x10);
  *(char *)(lVar4 + 0x1b + lVar7) = (char)((uint)uVar2 >> 0x18);
  *(char *)(lVar4 + 0x1c + lVar7) = (char)uVar3;
  *(char *)(lVar4 + 0x1d + lVar7) = (char)((uint)uVar3 >> 8);
  *(char *)(lVar4 + 0x1e + lVar7) = (char)((uint)uVar3 >> 0x10);
  *(char *)(lVar4 + 0x1f + lVar7) = (char)((uint)uVar3 >> 0x18);
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = 0;
  iVar6 = *(int *)(param_2 + 0x14) * 0x10000 + -0xffff;
  *(undefined2 *)(lVar4 + 0x28 + lVar7) = 1;
  *(char *)(lVar4 + 0x2a + lVar7) = (char)((uint)iVar6 >> 0x10);
  *(char *)(lVar4 + 0x2b + lVar7) = (char)((uint)iVar6 >> 0x18);
  *(undefined4 *)(lVar4 + 0x2c + lVar7) = 0x10001;
  bVar5 = recovered_10003130(param_1,(undefined8 *)(param_2 + 0x20),(long *)(param_2 + 0x50),
                             (short)iVar8);
  return bVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003130
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_10003130(int *param_1,undefined8 *param_2,long *param_3,short param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;

  uVar11 = *(uint *)(param_2 + 2);
  if ((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) {
    *(uint *)(param_2 + 3) = (*(int *)(param_2 + 3) + 1U) % uVar11;
    return false;
  }
  if (((uint)param_1[2] < 0x78) || ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    uVar9 = (ulong)(*(int *)(param_2 + 3) + 1) % (ulong)uVar11;
    *(int *)(param_2 + 3) = (int)uVar9;
    uVar11 = param_1[2];
  }
  else {
    (*(code *)(ulong)(uint)param_1[0x1d])(0,*param_2,uVar11 * *(int *)((long)param_2 + 0x14));
    iVar6 = *param_1;
    uVar9 = (ulong)(*(int *)(param_2 + 3) + 1) % (ulong)*(uint *)(param_2 + 2);
    *(int *)(param_2 + 3) = (int)uVar9;
    if (iVar6 != 0x54584b57) {
      return false;
    }
    uVar11 = param_1[2];
  }
  if (0x7b < uVar11) {
    if ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0) {
      (*(code *)(ulong)(uint)param_1[0x1e])();
      if (*param_1 != 0x54584b57) {
        return false;
      }
      uVar9 = (ulong)*(uint *)(param_2 + 3);
    }
  }
  uVar4 = param_2[5];
  if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
    if (uVar4 >> 0x20 != 0) {
      return false;
    }
    if ((uint)param_1[2] < 0x70) {
      return false;
    }
    if ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0) {
      return false;
    }
    iVar6 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar4,4,uVar9);
  }
  else {
    iVar6 = (*(code *)(ulong)(uint)param_1[0x30])(uVar4,4);
  }
  if (iVar6 != 0) {
    uVar11 = 0xffffff9c;
    do {
      lVar5 = *param_3;
      uVar7 = *(uint *)((long)param_3 + 0x1c);
      uVar8 = *(uint *)((long)param_3 + 0x14);
      if (((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0x1d])(0,lVar5,(int)param_3[2] * uVar8);
      }
      lVar10 = (ulong)uVar8 * (ulong)uVar7;
      bVar1 = *(byte *)(lVar5 + 0xe + lVar10);
      uVar7 = bVar1 & 1;
      if (uVar7 == *(uint *)(param_3 + 4)) {
        sVar3 = *(short *)(lVar5 + 0xc + lVar10);
        bVar2 = *(byte *)(lVar5 + 0xf + lVar10);
        uVar8 = (*(int *)((long)param_3 + 0x1c) + 1U) % *(uint *)(param_3 + 2);
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        if (uVar8 == 0) {
          *(uint *)(param_3 + 4) = uVar7 ^ 1;
          iVar6 = *param_1;
        }
        else {
          iVar6 = *param_1;
        }
        if (iVar6 == 0x54584b57) {
          uVar9 = param_3[5];
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar9 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar9,4);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar9,4);
          }
        }
        if (sVar3 == param_4) {
          return ((uint)bVar2 << 0x18 | (uint)bVar1 << 0x10) < 0x20000;
        }
      }
      else if (((*param_1 == 0x54584b57) && (0x33 < (uint)param_1[2])) &&
              ((code *)(ulong)(uint)param_1[0xc] != (code *)0x0)) {
        (*(code *)(ulong)(uint)param_1[0xc])();
      }
      uVar11 = uVar11 + 100;
    } while (uVar11 < 0x4c4adc);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003400
 */

undefined8 recovered_10003400(int *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  undefined7 extraout_var = 0;
  undefined8 uVar6;
  long lVar7;
  int iVar8;

  lVar4 = *(long *)(param_2 + 0x20);
  iVar8 = *(int *)(param_2 + 0x18) + 1;
  *(short *)(param_2 + 0x18) = (short)iVar8;
  lVar7 = (ulong)*(uint *)(param_2 + 0x34) * (ulong)*(uint *)(param_2 + 0x38);
  *(undefined8 *)(lVar4 + lVar7) = 0;
  ((undefined8 *)(lVar4 + lVar7))[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar4 + lVar7) = 6;
  *(char *)(lVar4 + 2 + lVar7) = (char)iVar8;
  *(char *)(lVar4 + 3 + lVar7) = (char)((uint)iVar8 >> 8);
  *(char *)(lVar4 + 4 + lVar7) = (char)param_4;
  *(char *)(lVar4 + 5 + lVar7) = (char)((uint)param_4 >> 8);
  *(char *)(lVar4 + 6 + lVar7) = (char)((uint)param_4 >> 0x10);
  *(char *)(lVar4 + 7 + lVar7) = (char)((uint)param_4 >> 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(char *)(lVar4 + 0x18 + lVar7) = (char)uVar2;
  *(char *)(lVar4 + 0x19 + lVar7) = (char)((uint)uVar2 >> 8);
  *(char *)(lVar4 + 0x1a + lVar7) = (char)((uint)uVar2 >> 0x10);
  *(char *)(lVar4 + 0x1b + lVar7) = (char)((uint)uVar2 >> 0x18);
  *(char *)(lVar4 + 0x1c + lVar7) = (char)uVar3;
  *(char *)(lVar4 + 0x1d + lVar7) = (char)((uint)uVar3 >> 8);
  *(char *)(lVar4 + 0x1e + lVar7) = (char)((uint)uVar3 >> 0x10);
  *(char *)(lVar4 + 0x1f + lVar7) = (char)((uint)uVar3 >> 0x18);
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = 0;
  *(char *)(lVar4 + 0x28 + lVar7) = (char)param_3;
  *(char *)(lVar4 + 0x29 + lVar7) = (char)((uint)param_3 >> 8);
  *(char *)(lVar4 + 0x2a + lVar7) = (char)((uint)param_3 >> 0x10);
  *(char *)(lVar4 + 0x2b + lVar7) = (char)((uint)param_3 >> 0x18);
  bVar5 = recovered_10003130(param_1,(undefined8 *)(param_2 + 0x20),(long *)(param_2 + 0x50),
                             (short)iVar8);
  if ((int)CONCAT71(extraout_var,bVar5) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if ((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x77 < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)) {
      (*(code *)(ulong)(uint)param_1[0x1d])(0,*(undefined8 *)(param_2 + 0xf0),0x1000);
      uVar6 = 1;
    }
  }
  return uVar6;
}


#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x15eaU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint *)(((uintptr_t)pf_module_state + 0x15f2U)))
#undef DAT_10005010
#define DAT_10005010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x15faU)))
#undef DAT_100050f0
#define DAT_100050f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16daU)))
#undef DAT_10005410
#define DAT_10005410 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19faU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003530
 */

undefined8 recovered_10003530(uint param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  ulong uVar13;

  uVar6 = 0;
  if (param_1 < DAT_10005008) {
    puVar3 = (undefined *)0x0;
    if (*(int *)(&DAT_10005410 + (ulong)param_1 * 0x14) != 0) {
      puVar3 = &DAT_10005410 + (ulong)param_1 * 0x14;
    }
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  if ((((param_4 != 0) && (param_3 != 0)) && (puVar3 != (undefined *)0x0)) &&
     ((DAT_10005000 != (int *)0x0 &&
      (param_4 <= *(uint *)(puVar3 + 0x10) - param_2 && param_2 <= *(uint *)(puVar3 + 0x10))))) {
    uVar1 = *(uint *)(puVar3 + 0xc);
    lVar5 = (ulong)*(uint *)(puVar3 + 4) * 0x100;
    puVar12 = &DAT_10005010 + lVar5;
    do {
      uVar8 = (ulong)param_2 / (ulong)(uVar1 >> 9);
      uVar9 = param_2 % (uVar1 >> 9);
      iVar11 = uVar9 * 0x200;
      uVar4 = uVar9 * -0x200 + 0x2000;
      uVar2 = param_4 << 9;
      if ((ulong)uVar4 <= (ulong)param_4 << 9) {
        uVar2 = uVar4;
      }
      uVar4 = *(uint *)(puVar3 + 0xc);
      uVar10 = ((uVar4 + uVar2 + iVar11) - 1) / uVar4;
      uVar13 = (ulong)uVar2;
      if (param_5 == 0) {
        uVar6 = recovered_100037f0(DAT_10005000,(long)puVar12,*(undefined4 *)(puVar3 + 8),'\x02',
                                   uVar8,uVar10,uVar4);
        if ((int)uVar6 == 0) {
          return 0;
        }
        if (uVar2 != 0) {
          uVar8 = 0;
          do {
            uVar4 = (uint)uVar8;
            *(undefined1 *)(param_3 + uVar8) =
                 *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)(iVar11 + uVar4));
            *(undefined1 *)(param_3 + 1 + uVar8) =
                 *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)((uVar4 | 1) + iVar11));
            *(undefined1 *)(param_3 + 2 + uVar8) =
                 *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)((uVar4 | 2) + iVar11));
            *(undefined1 *)(param_3 + 3 + uVar8) =
                 *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)((uVar4 | 3) + iVar11));
            uVar8 = uVar8 + 4;
          } while (uVar13 != uVar8);
        }
      }
      else {
        if (((uVar2 + iVar11) % uVar4 != 0 || uVar9 != 0) &&
           (uVar6 = recovered_100037f0(DAT_10005000,(long)puVar12,*(undefined4 *)(puVar3 + 8),'\x02'
                                       ,uVar8,uVar10,uVar4), (int)uVar6 == 0)) {
          return 0;
        }
        if (uVar2 != 0) {
          uVar7 = 0;
          do {
            uVar4 = (uint)uVar7;
            *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)(iVar11 + uVar4)) =
                 *(undefined1 *)(param_3 + uVar7);
            *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)((uVar4 | 1) + iVar11)) =
                 *(undefined1 *)(param_3 + 1 + uVar7);
            *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)((uVar4 | 2) + iVar11)) =
                 *(undefined1 *)(param_3 + 2 + uVar7);
            *(undefined1 *)(*(long *)(&DAT_100050f0 + lVar5) + (ulong)((uVar4 | 3) + iVar11)) =
                 *(undefined1 *)(param_3 + 3 + uVar7);
            uVar7 = uVar7 + 4;
          } while (uVar13 != uVar7);
        }
        uVar6 = recovered_100037f0(DAT_10005000,(long)puVar12,*(undefined4 *)(puVar3 + 8),'\x01',
                                   uVar8,uVar10,*(int *)(puVar3 + 0xc));
        if ((int)uVar6 == 0) {
          return 0;
        }
      }
      param_3 = param_3 + uVar13;
      param_2 = param_2 + (uVar2 >> 9);
      param_4 = param_4 - (uVar2 >> 9);
    } while (param_4 != 0);
    uVar6 = 1;
  }
  return uVar6;
}

#undef DAT_10005000
#undef DAT_10005008
#undef DAT_10005010
#undef DAT_100050f0
#undef DAT_10005410

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037f0
 */

undefined8
recovered_100037f0(int *param_1,long param_2,undefined4 param_3,char param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined7 extraout_var = 0;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;

  uVar12 = param_7 * param_6;
  uVar10 = 0;
  if (0xffffdfff < uVar12 - 0x2001) {
    if ((((param_4 == '\x01') && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) &&
       ((0x77 < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)))) {
      (*(code *)(ulong)(uint)param_1[0x1d])(0,*(undefined8 *)(param_2 + 0xe0),uVar12);
    }
    lVar2 = *(long *)(param_2 + 0x80);
    lVar6 = (ulong)*(uint *)(param_2 + 0x94) * (ulong)*(uint *)(param_2 + 0x98);
    iVar4 = *(int *)(param_2 + 0x18) + 1;
    *(short *)(param_2 + 0x18) = (short)iVar4;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    ((undefined8 *)(lVar2 + lVar6))[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(char *)(lVar2 + lVar6) = param_4;
    *(char *)(lVar2 + 2 + lVar6) = (char)iVar4;
    *(char *)(lVar2 + 3 + lVar6) = (char)((uint)iVar4 >> 8);
    *(char *)(lVar2 + 4 + lVar6) = (char)param_3;
    *(char *)(lVar2 + 5 + lVar6) = (char)((uint)param_3 >> 8);
    *(char *)(lVar2 + 6 + lVar6) = (char)((uint)param_3 >> 0x10);
    *(char *)(lVar2 + 7 + lVar6) = (char)((uint)param_3 >> 0x18);
    if (uVar12 < 0x1001) {
      uVar5 = (ulong)*(uint *)(param_2 + 0xe8);
      uVar7 = *(undefined4 *)(param_2 + 0xec);
      lVar11 = 0;
      uVar9 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_2 + 0xe8);
      lVar11 = uVar5 + 0x1000;
      uVar9 = (undefined4)((ulong)lVar11 >> 0x20);
      uVar7 = (undefined4)(uVar5 >> 0x20);
    }
    *(char *)(lVar2 + 0x18 + lVar6) = (char)uVar5;
    *(char *)(lVar2 + 0x19 + lVar6) = (char)(uVar5 >> 8);
    *(char *)(lVar2 + 0x1a + lVar6) = (char)(uVar5 >> 0x10);
    *(char *)(lVar2 + 0x1b + lVar6) = (char)(uVar5 >> 0x18);
    *(char *)(lVar2 + 0x1c + lVar6) = (char)uVar7;
    *(char *)(lVar2 + 0x1d + lVar6) = (char)((uint)uVar7 >> 8);
    *(char *)(lVar2 + 0x1e + lVar6) = (char)((uint)uVar7 >> 0x10);
    *(char *)(lVar2 + 0x1f + lVar6) = (char)((uint)uVar7 >> 0x18);
    *(char *)(lVar2 + 0x20 + lVar6) = (char)lVar11;
    *(char *)(lVar2 + 0x21 + lVar6) = (char)((ulong)lVar11 >> 8);
    *(char *)(lVar2 + 0x22 + lVar6) = (char)((ulong)lVar11 >> 0x10);
    *(char *)(lVar2 + 0x23 + lVar6) = (char)((ulong)lVar11 >> 0x18);
    *(char *)(lVar2 + 0x24 + lVar6) = (char)uVar9;
    *(char *)(lVar2 + 0x25 + lVar6) = (char)((uint)uVar9 >> 8);
    *(char *)(lVar2 + 0x26 + lVar6) = (char)((uint)uVar9 >> 0x10);
    *(char *)(lVar2 + 0x27 + lVar6) = (char)((uint)uVar9 >> 0x18);
    *(char *)(lVar2 + 0x28 + lVar6) = (char)param_5;
    *(char *)(lVar2 + 0x29 + lVar6) = (char)((ulong)param_5 >> 8);
    *(char *)(lVar2 + 0x2a + lVar6) = (char)((ulong)param_5 >> 0x10);
    *(char *)(lVar2 + 0x2b + lVar6) = (char)((ulong)param_5 >> 0x18);
    *(undefined4 *)(lVar2 + 0x2c + lVar6) = 0;
    iVar8 = param_6 + -1;
    *(char *)(lVar2 + 0x30 + lVar6) = (char)iVar8;
    *(char *)(lVar2 + 0x31 + lVar6) = (char)((uint)iVar8 >> 8);
    *(char *)(lVar2 + 0x32 + lVar6) = (char)((uint)iVar8 >> 0x10);
    *(char *)(lVar2 + 0x33 + lVar6) = (char)((uint)iVar8 >> 0x18);
    bVar3 = recovered_10003130(param_1,(undefined8 *)(param_2 + 0x80),(long *)(param_2 + 0xb0),
                               (short)iVar4);
    if ((((int)CONCAT71(extraout_var,bVar3) != 0) && (uVar10 = 1, param_4 == '\x02')) &&
       ((param_1 != (int *)0x0 &&
        (((*param_1 == 0x54584b57 && (0x77 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0)))))) {
      (*(code *)(ulong)(uint)param_1[0x1d])(0,*(undefined8 *)(param_2 + 0xe0),uVar12);
    }
  }
  return uVar10;
}


void bzero(void *p,size_t n){volatile unsigned char *d=p;while(n--)*d++=0;}
void __bzero(void *p,size_t n){bzero(p,n);}
void *memset(void *p,int value,size_t n){volatile unsigned char *d=p;while(n--)*d++=value;return p;}
