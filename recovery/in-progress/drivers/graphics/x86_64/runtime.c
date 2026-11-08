/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000f000
#define DAT_1000f000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

undefined * recovered_10000470(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000f000;
}

#undef DAT_1000f000

#undef DAT_1000e5a0
#define DAT_1000e5a0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef DAT_1000e720
#define DAT_1000e720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x188U)))
#undef DAT_10010000
#define DAT_10010000 (*(byte *)(((uintptr_t)pf_module_state + 0x1a68U)))
#undef UNK_1000e5a8
#define UNK_1000e5a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#undef _DAT_1000e5a0
#define _DAT_1000e5a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8U)))
#undef str_1000e5b0
#define str_1000e5b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18U)))
#undef str_1000e5c5
#define str_1000e5c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dU)))
#undef str_1000e5f7
#define str_1000e5f7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fU)))
#undef str_1000e606
#define str_1000e606 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6eU)))
#undef str_1000e616
#define str_1000e616 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eU)))
#undef str_1000e623
#define str_1000e623 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bU)))
#undef str_1000e62e
#define str_1000e62e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96U)))
#undef str_1000e63a
#define str_1000e63a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2U)))
#undef str_1000e648
#define str_1000e648 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0U)))
#undef str_1000e654
#define str_1000e654 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcU)))
#undef str_1000e660
#define str_1000e660 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8U)))
#undef str_1000e66d
#define str_1000e66d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5U)))
#undef str_1000e677
#define str_1000e677 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdfU)))
#undef str_1000e682
#define str_1000e682 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaU)))
#undef str_1000e68e
#define str_1000e68e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6U)))
#undef str_1000e69f
#define str_1000e69f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_1000e6af
#define str_1000e6af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x117U)))
#undef str_1000e6b9
#define str_1000e6b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x121U)))
#undef str_1000e6c4
#define str_1000e6c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12cU)))
#undef str_1000e6d0
#define str_1000e6d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138U)))
#undef str_1000e6ee
#define str_1000e6ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x156U)))
#undef str_1000e711
#define str_1000e711 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x179U)))
#undef str_1000e725
#define str_1000e725 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18dU)))
#undef str_1000e72c
#define str_1000e72c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x194U)))
#undef str_1000e73c
#define str_1000e73c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_1000e74b
#define str_1000e74b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_1000ed95
#define str_1000ed95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fdU)))
#undef str_1000edb1
#define str_1000edb1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x819U)))
#undef str_1000edc6
#define str_1000edc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82eU)))
#undef str_1000edd2
#define str_1000edd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83aU)))
#undef str_1000ede2
#define str_1000ede2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84aU)))
#undef uRam000000001000e5a8
#define uRam000000001000e5a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x10U)))
#define abStack_5a6 (*(byte (*)[45])(frame + 26))
#define bStack_579 (*(byte *)(frame + 71))
#define uStack_160 (*(undefined8 *)(frame + 1120))
#define acStack_119 (*(char (*)[21])(frame + 1191))
#define uStack_b0 (*(undefined8 *)(frame + 1296))
#define uStack_a0 (*(undefined8 *)(frame + 1312))
#define uStack_90 (*(undefined8 *)(frame + 1328))
#define abStack_7a (*(byte (*)[50])(frame + 1350))
#define local_578 (*(undefined2 *)(frame + 72))
#define local_576 (*(undefined1 (*)[1034])(frame + 74))
#define local_16c (*(undefined4 *)(frame + 1108))
#define local_168 (*(undefined8 *)(frame + 1112))
#define local_158 (*(char (*)[63])(frame + 1128))
#define local_104 (*(uint *)(frame + 1212))
#define local_c8 (*(uint *)(frame + 1272))
#define local_c4 (*(uint *)(frame + 1276))
#define local_c0 (*(uint *)(frame + 1280))
#define local_bc (*(int *)(frame + 1284))
#define local_b8 (*(undefined8 *)(frame + 1288))
#define local_a8 (*(undefined8 *)(frame + 1304))
#define local_98 (*(undefined8 *)(frame + 1320))
#define local_88 (*(undefined4 *)(frame + 1336))
#define local_48 (*(undefined4 *)(frame + 1400))
#define local_3c (*(uint *)(frame + 1412))
#define local_38 (*(int * *)(frame + 1416))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000480(int *api)

{
  unsigned char frame[1504] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  byte bVar15;
  char *pcVar16;
  ulong uVar17;
  char *pcVar18;
  undefined1 uVar19;
  char cVar20;
  uint uVar21;
  ulong uVar22;
  char *pcVar23;
  int *piVar24;
  undefined8 unaff_R12;
  char *pcVar25;
  bool bVar26;
  bool bVar27;
  uint128 auVar28;
  uint128 auVar29;

  local_c0 = 0;
  if (api == (int *)0x0) {
    return 0;
  }
  if (*api != 0x54584b57) {
    return 0;
  }
  uVar21 = api[2];
  if (uVar21 < 0x10) {
    return 0;
  }
  local_168 = local_168 & 0xffffffffffffff00;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (local_576[uVar9 + 0x40e] != '\0');
  if (uVar9 + 1 < 0x60) {
    cVar20 = 'q';
    pcVar16 = str_1000e5b0;
    do {
      pcVar16 = pcVar16 + 1;
      local_576[uVar9 + 0x40e] = cVar20;
      uVar9 = uVar9 + 1;
      cVar20 = *pcVar16;
      if (cVar20 == '\0') break;
    } while (uVar9 < 0x5f);
  }
  local_576[uVar9 + 0x40e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (local_576[uVar9 + 0x40e] != '\0');
  if (uVar9 + 1 < 0x60) {
    cVar20 = ':';
    pcVar16 = str_1000e711;
    do {
      pcVar16 = pcVar16 + 1;
      local_576[uVar9 + 0x40e] = cVar20;
      uVar9 = uVar9 + 1;
      cVar20 = *pcVar16;
      if (cVar20 == '\0') break;
    } while (uVar9 < 0x5f);
  }
  local_576[uVar9 + 0x40e] = 0;
  if (api[1] == 0) {
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (local_576[uVar9 + 0x40e] != '\0');
    if (uVar9 + 1 < 0x60) {
      *(undefined2 *)(local_576 + uVar9 + 0x40e) = 0x30;
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
    uVar4 = api[1];
    do {
      uVar9 = uVar17;
      abStack_7a[uVar9 + 3] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
      uVar17 = uVar9 + 1;
      if (8 < uVar17) break;
      bVar26 = 9 < uVar4;
      uVar4 = uVar4 / 10;
    } while (bVar26);
    if ((uVar17 & 1) == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (local_576[uVar11 + 0x40e] != '\0');
      uVar10 = uVar17;
      if (uVar11 + 1 < 0x60) {
        local_576[uVar11 + 0x40e] = abStack_7a[uVar9 + 3];
        local_576[uVar11 + 0x40f] = 0;
      }
    }
    else {
      uVar10 = uVar9 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (local_576[uVar9 + 0x40e] != '\0');
      if (uVar9 + 1 < 0x60) {
        local_576[uVar9 + 0x40e] = abStack_7a[uVar10 + 1];
        local_576[uVar9 + 0x40f] = 0;
      }
      pbVar1 = abStack_7a + uVar10;
      uVar10 = uVar10 - 2;
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (local_576[uVar9 + 0x40e] != '\0');
      uVar17 = uVar10;
      if (uVar9 + 1 < 0x60) {
        local_576[uVar9 + 0x40e] = *pbVar1;
        local_576[uVar9 + 0x40f] = 0;
      }
    }
  }
  uVar17 = 0xffffffffffffffff;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (local_576[uVar9 + 0x40f] != '\0');
  if (uVar9 + 2 < 0x60) {
    local_576[uVar9 + 0x40f] = 0x20;
    bVar26 = uVar17 != 0x5e;
    uVar17 = uVar9 + 2;
    if (bVar26) {
      uVar17 = uVar9 + 3;
      local_576[uVar9 + 0x410] = 0x72;
      if (uVar17 < 0x5f) {
        uVar17 = uVar9 + 4;
        *(undefined1 *)(uVar9 + 3 + (long)&local_168) = 0x65;
        if (uVar17 < 0x5f) {
          uVar17 = uVar9 + 5;
          local_158[uVar9 - 0xc] = 'a';
          if (uVar17 < 0x5f) {
            uVar17 = uVar9 + 6;
            local_158[uVar9 - 0xb] = 'd';
            if (uVar17 < 0x5f) {
              local_158[uVar9 - 10] = 'y';
              uVar17 = uVar9 + 7;
            }
          }
        }
      }
    }
  }
  local_576[uVar17 + 0x40e] = 0;
  if ((0x2b < uVar21) && ((code *)(ulong)(uint)api[10] != (code *)0x0)) {
    (*(code *)(ulong)(uint)api[10])(&local_168);
  }
  DAT_10010000 = 0;
  abStack_7a[2] = 0;
  abStack_7a[3] = 0;
  abStack_7a[4] = 0;
  abStack_7a[5] = 0;
  abStack_7a[6] = 0;
  abStack_7a[7] = 0;
  abStack_7a[8] = 0;
  abStack_7a[9] = 0;
  abStack_7a[10] = 0;
  abStack_7a[0xb] = 0;
  abStack_7a[0xc] = 0;
  abStack_7a[0xd] = 0;
  abStack_7a[0xe] = 0;
  abStack_7a[0xf] = 0;
  abStack_7a[0x10] = 0;
  abStack_7a[0x11] = 0;
  abStack_7a[0x12] = 0;
  abStack_7a[0x13] = 0;
  abStack_7a[0x14] = 0;
  abStack_7a[0x15] = 0;
  abStack_7a[0x16] = 0;
  abStack_7a[0x17] = 0;
  abStack_7a[0x18] = 0;
  abStack_7a[0x19] = 0;
  abStack_7a[0x1a] = 0;
  abStack_7a[0x1b] = 0;
  abStack_7a[0x1c] = 0;
  abStack_7a[0x1d] = 0;
  abStack_7a[0x1e] = 0;
  abStack_7a[0x1f] = 0;
  abStack_7a[0x20] = 0;
  abStack_7a[0x21] = 0;
  abStack_7a[0x22] = 0;
  abStack_7a[0x23] = 0;
  abStack_7a[0x24] = 0;
  abStack_7a[0x25] = 0;
  abStack_7a[0x26] = 0;
  abStack_7a[0x27] = 0;
  abStack_7a[0x28] = 0;
  abStack_7a[0x29] = 0;
  abStack_7a[0x2a] = 0;
  abStack_7a[0x2b] = 0;
  abStack_7a[0x2c] = 0;
  abStack_7a[0x2d] = 0;
  abStack_7a[0x2e] = 0;
  abStack_7a[0x2f] = 0;
  abStack_7a[0x30] = 0;
  abStack_7a[0x31] = 0;
  local_48 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uVar21 = (uint)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  local_38 = api;
  if ((((*api == 0x54584b57) && (0x43 < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0x10] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0x10])(abStack_7a + 2), iVar3 != 0)) {
    uVar21 = 0;
    uVar4 = CONCAT13(abStack_7a[9],CONCAT12(abStack_7a[8],CONCAT11(abStack_7a[7],abStack_7a[6]))) |
            CONCAT13(abStack_7a[5],CONCAT12(abStack_7a[4],CONCAT11(abStack_7a[3],abStack_7a[2])));
    if ((uVar4 == 0) ||
       (PF_PART4(auVar28, 0) =
             -(uint)(CONCAT13(abStack_7a[0x11],
                              CONCAT12(abStack_7a[0x10],CONCAT11(abStack_7a[0xf],abStack_7a[0xe])))
                    == 0),
       PF_PART4(auVar28, 4) =
            -(uint)(CONCAT13(abStack_7a[0x15],
                             CONCAT12(abStack_7a[0x14],CONCAT11(abStack_7a[0x13],abStack_7a[0x12])))
                   == 0),
       PF_PART4(auVar28, 8) =
            -(uint)(CONCAT13(abStack_7a[0x19],
                             CONCAT12(abStack_7a[0x18],CONCAT11(abStack_7a[0x17],abStack_7a[0x16])))
                   == 0),
       PF_PART4(auVar28, 12) =
            -(uint)(SUB164((uint128)0x0,0xc) ==
                   CONCAT13(abStack_7a[0x1d],
                            CONCAT12(abStack_7a[0x1c],CONCAT11(abStack_7a[0x1b],abStack_7a[0x1a]))))
       , uVar5 = movmskps(uVar4,auVar28), (char)uVar5 != '\0')) goto LAB_10000a1e;
    local_b8 = CONCAT17(abStack_7a[9],
                        CONCAT16(abStack_7a[8],
                                 CONCAT15(abStack_7a[7],
                                          CONCAT14(abStack_7a[6],
                                                   CONCAT13(abStack_7a[5],
                                                            CONCAT12(abStack_7a[4],
                                                                     CONCAT11(abStack_7a[3],
                                                                              abStack_7a[2])))))));
    uStack_b0 = CONCAT17(abStack_7a[0x11],
                         CONCAT16(abStack_7a[0x10],
                                  CONCAT15(abStack_7a[0xf],
                                           CONCAT14(abStack_7a[0xe],
                                                    CONCAT13(abStack_7a[0xd],
                                                             CONCAT12(abStack_7a[0xc],
                                                                      CONCAT11(abStack_7a[0xb],
                                                                               abStack_7a[10])))))))
    ;
    local_a8 = CONCAT17(abStack_7a[0x19],
                        CONCAT16(abStack_7a[0x18],
                                 CONCAT15(abStack_7a[0x17],
                                          CONCAT14(abStack_7a[0x16],
                                                   CONCAT13(abStack_7a[0x15],
                                                            CONCAT12(abStack_7a[0x14],
                                                                     CONCAT11(abStack_7a[0x13],
                                                                              abStack_7a[0x12]))))))
                       );
    uStack_a0 = CONCAT17(abStack_7a[0x21],
                         CONCAT16(abStack_7a[0x20],
                                  CONCAT15(abStack_7a[0x1f],
                                           CONCAT14(abStack_7a[0x1e],
                                                    CONCAT13(abStack_7a[0x1d],
                                                             CONCAT12(abStack_7a[0x1c],
                                                                      CONCAT11(abStack_7a[0x1b],
                                                                               abStack_7a[0x1a])))))
                                 ));
    local_98 = CONCAT17(abStack_7a[0x29],
                        CONCAT16(abStack_7a[0x28],
                                 CONCAT15(abStack_7a[0x27],
                                          CONCAT14(abStack_7a[0x26],
                                                   CONCAT13(abStack_7a[0x25],
                                                            CONCAT12(abStack_7a[0x24],
                                                                     CONCAT11(abStack_7a[0x23],
                                                                              abStack_7a[0x22]))))))
                       );
    uStack_90 = CONCAT17(abStack_7a[0x31],
                         CONCAT16(abStack_7a[0x30],
                                  CONCAT15(abStack_7a[0x2f],
                                           CONCAT14(abStack_7a[0x2e],
                                                    CONCAT13(abStack_7a[0x2d],
                                                             CONCAT12(abStack_7a[0x2c],
                                                                      CONCAT11(abStack_7a[0x2b],
                                                                               abStack_7a[0x2a])))))
                                 ));
    local_88 = local_48;
    iVar7 = 1;
    uVar21 = 0;
    iVar8 = 0;
LAB_10000ad8:
    pcVar16 = str_1000e6af;
    local_3c = uVar21;
    if (((*api == 0x54584b57) && (0xb7 < (uint)api[2])) &&
       ((code *)(ulong)(uint)api[0x2d] != (code *)0x0)) {
      uVar17 = (*(code *)(ulong)(uint)api[0x2d])(1);
      pcVar16 = str_1000e69f;
      if ((uVar17 & 1) == 0) {
        pcVar16 = str_1000e6af;
      }
      api = local_38;
    }
    else {
    }
  }
  else {
LAB_10000a1e:
    iVar3 = 0;
    if ((code *)(ulong)(uint)api[5] == (code *)0x0) {
      iVar7 = 0;
      iVar8 = 0;
      goto LAB_10000ad8;
    }
    iVar6 = (*(code *)(ulong)(uint)api[5])(0x500,800,0x20);
    if (iVar6 == 0) {
      iVar7 = 0;
      iVar8 = 0;
      iVar3 = 0;
      goto LAB_10000ad8;
    }
    pcVar16 = str_1000e6af;
    iVar8 = 1;
    if (*api == 0x54584b57) {
      uVar4 = api[2];
      iVar7 = 0;
      if (0xa3 < uVar4) {
        if ((code *)(ulong)(uint)api[0x28] == (code *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (*(code *)(ulong)(uint)api[0x28])();
          if (*api != 0x54584b57) {
            local_3c = uVar21;
            iVar3 = 0;
            iVar8 = 1;
            api = local_38;
            goto LAB_10000b2e;
          }
          api = local_38;
        }
        uVar4 = api[2];
      }
      iVar3 = 0;
      iVar8 = iVar6;
      if ((0x43 < uVar4) && ((code *)(ulong)(uint)api[0x10] != (code *)0x0)) {
        iVar3 = (*(code *)(ulong)(uint)api[0x10])(&local_b8);
        api = local_38;
      }
      goto LAB_10000ad8;
    }
    local_3c = uVar21;
    iVar3 = 0;
    iVar7 = 0;
  }
LAB_10000b2e:
  bVar26 = CONCAT13(abStack_7a[9],CONCAT12(abStack_7a[8],CONCAT11(abStack_7a[7],abStack_7a[6]))) ==
           0;
  bVar2 = CONCAT13(abStack_7a[5],CONCAT12(abStack_7a[4],CONCAT11(abStack_7a[3],abStack_7a[2]))) == 0
  ;
  bVar27 = CONCAT13(abStack_7a[0x11],
                    CONCAT12(abStack_7a[0x10],CONCAT11(abStack_7a[0xf],abStack_7a[0xe]))) == 0;
  if (((bVar27 || bVar26 && bVar2) ||
      (uVar21 = CONCAT13(abStack_7a[0x15],
                         CONCAT12(abStack_7a[0x14],CONCAT11(abStack_7a[0x13],abStack_7a[0x12]))),
      uVar17 = (ulong)uVar21, uVar21 == 0)) ||
     ((uVar21 = CONCAT13(abStack_7a[0x19],
                         CONCAT12(abStack_7a[0x18],CONCAT11(abStack_7a[0x17],abStack_7a[0x16]))),
      uVar21 == 0 ||
      (CONCAT13(abStack_7a[0x1d],
                CONCAT12(abStack_7a[0x1c],CONCAT11(abStack_7a[0x1b],abStack_7a[0x1a]))) == 0)))) {
    uVar9 = 0x3c0;
    uVar10 = 0x220;
    if ((!(PF_PART4(local_b8, 4) != 0 || (uint)local_b8 != 0)) || (PF_PART4(uStack_b0, 4) == 0))
    goto LAB_10000b9e;
    uVar17 = local_a8 & 0xffffffff;
    if (((uint)local_a8 == 0) ||
       ((PF_PART4(local_a8, 4) == 0 || (uVar21 = PF_PART4(local_a8, 4), (uint)uStack_a0 == 0))))
    goto LAB_10000b9e;
  }
  uVar10 = (ulong)uVar21;
  uVar9 = uVar17;
LAB_10000b9e:
  local_16c = iVar7;
  if ((((!((bVar27 || bVar26 && bVar2) ||
          CONCAT13(abStack_7a[0x15],
                   CONCAT12(abStack_7a[0x14],CONCAT11(abStack_7a[0x13],abStack_7a[0x12]))) == 0)) &&
       (CONCAT13(abStack_7a[0x19],
                 CONCAT12(abStack_7a[0x18],CONCAT11(abStack_7a[0x17],abStack_7a[0x16]))) != 0)) &&
      (CONCAT13(abStack_7a[0x1d],
                CONCAT12(abStack_7a[0x1c],CONCAT11(abStack_7a[0x1b],abStack_7a[0x1a]))) != 0)) ||
     (((PF_PART4(local_b8, 4) | (uint)local_b8) == 0 ||
      (PF_PART4(auVar29, 0) = -(uint)(PF_PART4(uStack_b0, 4) == 0), PF_PART4(auVar29, 4) = -(uint)((uint)local_a8 == 0),
      PF_PART4(auVar29, 8) = -(uint)(PF_PART4(local_a8, 4) == 0), PF_PART4(auVar29, 12) = -(uint)((uint)uStack_a0 == 0),
      uVar5 = movmskps(PF_PART4(local_b8, 4) | (uint)local_b8,auVar29), (char)uVar5 != '\0')))) {
    pcVar25 = str_1000e6c4;
    if ((code *)(ulong)(uint)api[7] != (code *)0x0) {
      local_bc = iVar8;
      iVar7 = (*(code *)(ulong)(uint)api[7])(uVar9,uVar10,0x20);
      pcVar25 = str_1000e6c4;
      iVar8 = local_bc;
      if (iVar7 != 0) {
        iVar3 = 0;
        pcVar25 = str_1000e6b9;
        if (((*api == 0x54584b57) && (0x43 < (uint)api[2])) &&
           ((code *)(ulong)(uint)api[0x10] != (code *)0x0)) {
          iVar3 = (*(code *)(ulong)(uint)api[0x10])(&local_b8);
          iVar8 = local_bc;
        }
      }
    }
  }
  else {
    pcVar25 = str_1000e6c4;
  }
  PF_PART1(local_578, 0) = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    bVar15 = 0x74;
    pcVar14 = str_1000e5c5;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar11 + 0x2e] = bVar15;
      uVar11 = uVar11 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar11 < 0x3ff);
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x20;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    bVar15 = 0x70;
    pcVar14 = str_1000e5f7;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar11 + 0x2e] = bVar15;
      uVar11 = uVar11 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar11 < 0x3ff);
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x3d;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x31;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x32;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x38;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x30;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x20;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    bVar15 = 0x70;
    pcVar14 = str_1000e606;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar11 + 0x2e] = bVar15;
      uVar11 = uVar11 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar11 < 0x3ff);
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x3d;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x38;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x30;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x30;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x20;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    bVar15 = 0x70;
    pcVar14 = str_1000e616;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar11 + 0x2e] = bVar15;
      uVar11 = uVar11 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar11 < 0x3ff);
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x3d;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x33;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    (abStack_5a6 + uVar11 + 0x2e)[0] = 0x32;
    (abStack_5a6 + uVar11 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x20;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar11 + 1 < 0x400) {
    bVar15 = 0x72;
    pcVar14 = str_1000e623;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar11 + 0x2e] = bVar15;
      uVar11 = uVar11 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar11 < 0x3ff);
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar11 = uVar17;
    uVar17 = uVar11 + 1;
  } while (abStack_5a6[uVar11 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar11 + 0x2e] = 0x3d;
    uVar11 = uVar17;
  }
  abStack_5a6[uVar11 + 0x2e] = 0;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar11 = uVar17;
    uVar21 = (uint)uVar9;
    local_576[uVar11 + 0x40f] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
    uVar17 = uVar11 + 1;
    if (8 < uVar17) break;
    uVar9 = uVar9 / 10;
  } while (9 < uVar21);
  cVar20 = (char)local_3c;
  if ((uVar17 & 1) == 0) {
    uVar9 = 0;
    do {
      uVar22 = uVar9;
      uVar9 = uVar22 + 1;
    } while (abStack_5a6[uVar22 + 0x2e] != 0);
    uVar9 = uVar17;
    if (uVar22 + 1 < 0x400) {
      abStack_5a6[uVar22 + 0x2e] = local_576[uVar11 + 0x40f];
      local_576[uVar22 - 1] = 0;
    }
  }
  else {
    uVar9 = uVar11 + 2;
  }
  while (uVar17 != 0) {
    uVar17 = 0;
    do {
      uVar11 = uVar17;
      uVar17 = uVar11 + 1;
    } while (abStack_5a6[uVar11 + 0x2e] != 0);
    if (uVar11 + 1 < 0x400) {
      abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40d];
      local_576[uVar11 - 1] = 0;
    }
    lVar13 = uVar9 + 0x40c;
    uVar17 = uVar9 - 2;
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      uVar9 = uVar11 + 1;
    } while (abStack_5a6[uVar11 + 0x2e] != 0);
    uVar9 = uVar17;
    if (uVar11 + 1 < 0x400) {
      abStack_5a6[uVar11 + 0x2e] = local_576[lVar13];
      local_576[uVar11 - 1] = 0;
    }
  }
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x20;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar9 + 1 < 0x400) {
    bVar15 = 0x72;
    pcVar14 = str_1000e62e;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x3d;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  if ((int)uVar10 == 0) {
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
      (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
    }
  }
  else {
    uVar17 = 0xffffffffffffffff;
    do {
      uVar9 = uVar17;
      uVar21 = (uint)uVar10;
      local_576[uVar9 + 0x40f] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
      uVar17 = uVar9 + 1;
      if (8 < uVar17) break;
      uVar10 = uVar10 / 10;
    } while (9 < uVar21);
    if ((uVar17 & 1) == 0) {
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        uVar10 = uVar11 + 1;
      } while (abStack_5a6[uVar11 + 0x2e] != 0);
      uVar10 = uVar17;
      if (uVar11 + 1 < 0x400) {
        abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
        local_576[uVar11 - 1] = 0;
      }
    }
    else {
      uVar10 = uVar9 + 2;
    }
    while (uVar17 != 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
        local_576[uVar9 - 1] = 0;
      }
      lVar13 = uVar10 + 0x40c;
      uVar10 = uVar10 - 2;
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      uVar17 = uVar10;
      if (uVar9 + 1 < 0x400) {
        abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
        local_576[uVar9 - 1] = 0;
      }
    }
  }
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x20;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (local_576[uVar9 - 1] != '\0');
  if (uVar9 + 2 < 0x400) {
    local_576[uVar9 - 1] = 0x72;
    bVar26 = uVar17 != 0x3fe;
    uVar17 = uVar9 + 2;
    if (bVar26) {
      uVar17 = uVar9 + 3;
      local_576[uVar9] = 0x61;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar9 + 4;
        local_576[uVar9 + 1] = 0x6d;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar9 + 5;
          local_576[uVar9 + 2] = 0x66;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar9 + 6;
            local_576[uVar9 + 3] = 0x62;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar9 + 7;
              local_576[uVar9 + 4] = 0x42;
              if (uVar17 < 0x3ff) {
                uVar17 = uVar9 + 8;
                local_576[uVar9 + 5] = 0x70;
                if (uVar17 < 0x3ff) {
                  local_576[uVar9 + 6] = 0x70;
                  uVar17 = uVar9 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  abStack_5a6[uVar17 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x3d;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar9 + 1 < 0x400) {
    (abStack_5a6 + uVar9 + 0x2e)[0] = 0x33;
    (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar9 + 1 < 0x400) {
    (abStack_5a6 + uVar9 + 0x2e)[0] = 0x32;
    (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
  }
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  pcVar14 = &DAT_1000e720;
  pcVar18 = &DAT_1000e720;
  if (iVar8 == 0) {
    pcVar18 = str_1000e725;
  }
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x20;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar9 + 1 < 0x400) {
    bVar15 = 0x6d;
    pcVar23 = str_1000e63a;
    do {
      pcVar23 = pcVar23 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar23;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x3d;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if ((uVar9 + 1 < 0x400) && (bVar15 = *pcVar18, bVar15 != 0)) {
    do {
      pcVar18 = pcVar18 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar18;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (local_16c == 0) {
    pcVar14 = str_1000e725;
  }
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x20;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar9 + 1 < 0x400) {
    bVar15 = 0x6d;
    pcVar18 = str_1000e648;
    do {
      pcVar18 = pcVar18 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar18;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x3d;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if ((uVar9 + 1 < 0x400) && (bVar15 = *pcVar14, bVar15 != 0)) {
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  if (cVar20 == '\0') {
    uVar21 = CONCAT13(abStack_7a[0x15],
                      CONCAT12(abStack_7a[0x14],CONCAT11(abStack_7a[0x13],abStack_7a[0x12])));
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x62;
      pcVar14 = str_1000e654;
      do {
        pcVar14 = pcVar14 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar14;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (uVar21 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        local_576[uVar9 + 0x40f] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
          local_576[uVar9 - 1] = 0;
        }
        lVar13 = uVar10 + 0x40c;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
          local_576[uVar9 - 1] = 0;
        }
      }
    }
    uVar21 = CONCAT13(abStack_7a[0x19],
                      CONCAT12(abStack_7a[0x18],CONCAT11(abStack_7a[0x17],abStack_7a[0x16])));
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x62;
      pcVar14 = str_1000e660;
      do {
        pcVar14 = pcVar14 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar14;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (uVar21 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        local_576[uVar9 + 0x40f] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
          local_576[uVar9 - 1] = 0;
        }
        lVar13 = uVar10 + 0x40c;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
          local_576[uVar9 - 1] = 0;
        }
      }
    }
    uVar21 = CONCAT13(abStack_7a[0x1d],
                      CONCAT12(abStack_7a[0x1c],CONCAT11(abStack_7a[0x1b],abStack_7a[0x1a])));
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x62;
      pcVar14 = str_1000e66d;
      do {
        pcVar14 = pcVar14 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar14;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (uVar21 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        local_576[uVar9 + 0x40f] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
          local_576[uVar9 - 1] = 0;
        }
        lVar13 = uVar10 + 0x40c;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
          local_576[uVar9 - 1] = 0;
        }
      }
    }
  }
  if (iVar3 != 0) {
    uVar21 = (uint)local_a8;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x61;
      pcVar14 = str_1000e677;
      do {
        pcVar14 = pcVar14 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar14;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (uVar21 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        local_576[uVar9 + 0x40f] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
          local_576[uVar9 - 1] = 0;
        }
        lVar13 = uVar10 + 0x40c;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
          local_576[uVar9 - 1] = 0;
        }
      }
    }
    uVar21 = PF_PART4(local_a8, 4);
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x61;
      pcVar14 = str_1000e682;
      do {
        pcVar14 = pcVar14 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar14;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (uVar21 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        local_576[uVar9 + 0x40f] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
          local_576[uVar9 - 1] = 0;
        }
        lVar13 = uVar10 + 0x40c;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
          local_576[uVar9 - 1] = 0;
        }
      }
    }
    uVar21 = (uint)uStack_a0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0xffffffffffffffff;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (local_576[uVar9 - 1] != '\0');
    if (uVar9 + 2 < 0x400) {
      local_576[uVar9 - 1] = 0x61;
      bVar26 = uVar17 != 0x3fe;
      uVar17 = uVar9 + 2;
      if (bVar26) {
        uVar17 = uVar9 + 3;
        local_576[uVar9] = 0x66;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar9 + 4;
          local_576[uVar9 + 1] = 0x74;
          if (uVar17 < 0x3ff) {
            uVar17 = uVar9 + 5;
            local_576[uVar9 + 2] = 0x65;
            if (uVar17 < 0x3ff) {
              uVar17 = uVar9 + 6;
              local_576[uVar9 + 3] = 0x72;
              if (uVar17 < 0x3ff) {
                uVar17 = uVar9 + 7;
                local_576[uVar9 + 4] = 0x42;
                if (uVar17 < 0x3ff) {
                  uVar17 = uVar9 + 8;
                  local_576[uVar9 + 5] = 0x70;
                  if (uVar17 < 0x3ff) {
                    local_576[uVar9 + 6] = 0x70;
                    uVar17 = uVar9 + 9;
                  }
                }
              }
            }
          }
        }
      }
    }
    abStack_5a6[uVar17 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (uVar21 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        local_576[uVar9 + 0x40f] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
          local_576[uVar9 - 1] = 0;
        }
        lVar13 = uVar10 + 0x40c;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
          local_576[uVar9 - 1] = 0;
        }
      }
    }
  }
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x20;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar9 + 1 < 0x400) {
    bVar15 = 0x66;
    pcVar14 = str_1000e68e;
    do {
      pcVar14 = pcVar14 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar14;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x3d;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if ((uVar9 + 1 < 0x400) && (bVar15 = *pcVar16, bVar15 != 0)) {
    do {
      pcVar16 = pcVar16 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar16;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x20;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0xffffffffffffffff;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (local_576[uVar9 - 1] != '\0');
  if (uVar9 + 2 < 0x400) {
    local_576[uVar9 - 1] = 0x72;
    bVar26 = uVar17 != 0x3fe;
    uVar17 = uVar9 + 2;
    if (bVar26) {
      uVar17 = uVar9 + 3;
      local_576[uVar9] = 0x61;
      if (uVar17 < 0x3ff) {
        uVar17 = uVar9 + 4;
        local_576[uVar9 + 1] = 0x6d;
        if (uVar17 < 0x3ff) {
          uVar17 = uVar9 + 5;
          local_576[uVar9 + 2] = 0x66;
          if (uVar17 < 0x3ff) {
            local_576[uVar9 + 3] = 0x62;
            uVar17 = uVar9 + 6;
          }
        }
      }
    }
  }
  abStack_5a6[uVar17 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  if (uVar17 < 0x400) {
    abStack_5a6[uVar9 + 0x2e] = 0x3d;
    uVar9 = uVar17;
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  uVar17 = 0;
  do {
    uVar9 = uVar17;
    uVar17 = uVar9 + 1;
  } while (abStack_5a6[uVar9 + 0x2e] != 0);
  bVar15 = *pcVar25;
  if (uVar9 + 1 < 0x400 && bVar15 != 0) {
    do {
      pcVar25 = pcVar25 + 1;
      abStack_5a6[uVar9 + 0x2e] = bVar15;
      uVar9 = uVar9 + 1;
      bVar15 = *pcVar25;
      if (bVar15 == 0) break;
    } while (uVar9 < 0x3ff);
  }
  abStack_5a6[uVar9 + 0x2e] = 0;
  if ((((*api == 0x54584b57) && (0x3f < (uint)api[2])) &&
      ((code *)(ulong)(uint)api[0xf] != (code *)0x0)) &&
     (iVar3 = (*(code *)(ulong)(uint)api[0xf])(&local_168), iVar3 != 0)) {
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x68;
      pcVar16 = str_1000e72c;
      do {
        pcVar16 = pcVar16 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar16;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (local_104 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      uVar21 = local_104;
      do {
        uVar9 = uVar17;
        abStack_5a6[uVar9 + 3] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = abStack_5a6[uVar9 + 3];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = abStack_5a6[uVar10 + 1];
          local_576[uVar9 - 1] = 0;
        }
        pbVar1 = abStack_5a6 + uVar10;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = *pbVar1;
          local_576[uVar9 - 1] = 0;
        }
      }
    }
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x6d;
      pcVar16 = str_1000e73c;
      do {
        pcVar16 = pcVar16 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar16;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    iVar3 = 8;
    do {
      uVar21 = local_c8 >> ((char)iVar3 * '\x04' - 4U & 0x1f) & 0xf;
      cVar20 = (char)uVar21;
      bVar15 = cVar20 + 0x37;
      if (uVar21 < 10) {
        bVar15 = cVar20 + 0x30;
      }
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        local_576[uVar9 - 1] = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x20;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar9 + 1 < 0x400) {
      bVar15 = 0x6d;
      pcVar16 = str_1000e74b;
      do {
        pcVar16 = pcVar16 + 1;
        abStack_5a6[uVar9 + 0x2e] = bVar15;
        uVar9 = uVar9 + 1;
        bVar15 = *pcVar16;
        if (bVar15 == 0) break;
      } while (uVar9 < 0x3ff);
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    uVar17 = 0;
    do {
      uVar9 = uVar17;
      uVar17 = uVar9 + 1;
    } while (abStack_5a6[uVar9 + 0x2e] != 0);
    if (uVar17 < 0x400) {
      abStack_5a6[uVar9 + 0x2e] = 0x3d;
      uVar9 = uVar17;
    }
    abStack_5a6[uVar9 + 0x2e] = 0;
    if (local_c4 == 0) {
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
        (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
      }
    }
    else {
      uVar17 = 0xffffffffffffffff;
      uVar21 = local_c4;
      do {
        uVar9 = uVar17;
        abStack_5a6[uVar9 + 3] = (byte)(uVar21 % 10) | 0x30;
        uVar17 = uVar9 + 1;
        if (8 < uVar17) break;
        bVar26 = 9 < uVar21;
        uVar21 = uVar21 / 10;
      } while (bVar26);
      if ((uVar17 & 1) == 0) {
        uVar10 = 0;
        do {
          uVar11 = uVar10;
          uVar10 = uVar11 + 1;
        } while (abStack_5a6[uVar11 + 0x2e] != 0);
        uVar10 = uVar17;
        if (uVar11 + 1 < 0x400) {
          abStack_5a6[uVar11 + 0x2e] = abStack_5a6[uVar9 + 3];
          local_576[uVar11 - 1] = 0;
        }
      }
      else {
        uVar10 = uVar9 + 2;
      }
      while (uVar17 != 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = abStack_5a6[uVar10 + 1];
          local_576[uVar9 - 1] = 0;
        }
        pbVar1 = abStack_5a6 + uVar10;
        uVar10 = uVar10 - 2;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        uVar17 = uVar10;
        if (uVar9 + 1 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = *pbVar1;
          local_576[uVar9 - 1] = 0;
        }
      }
    }
  }
  iVar3 = 0;
  if ((code *)(ulong)(uint)api[3] != (code *)0x0) {
    iVar8 = (*(code *)(ulong)(uint)api[3])(str_1000e725 + 6,str_1000e6d0,&local_578);
    piVar24 = local_38;
    iVar3 = 0;
    if (iVar8 != 0) {
      if (((*api == 0x54584b57) && (0x5f < (uint)local_38[2])) && (local_38[0x17] != 0)) {
        uVar21 = 0;
        pbVar1 = abStack_5a6 + 2;
        do {
          uVar4 = uVar21 & 0xff;
          iVar3 = 0;
          local_3c = uVar21;
          do {
            uVar19 = (undefined1)iVar3;
            uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,0,(undefined1 *)&local_168);
            if ((int)uVar12 != 0) {
              recovered_10003820(piVar24,(byte *)&local_168,(int *)&local_c0);
              if (((int8_t)PF_PART1(uStack_160, 4)) < '\0') {
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,1,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,2,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,3,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,4,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,5,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,6,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
                uVar12 = recovered_10005c60(piVar24,uVar4,uVar19,7,pbVar1);
                if ((int)uVar12 != 0) {
                  recovered_10003820(piVar24,pbVar1,(int *)&local_c0);
                }
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x20);
          uVar21 = local_3c + 1;
        } while (uVar21 != 8);
      }
      bVar15 = DAT_10010000;
      lVar13 = 0;
      do {
        local_576[lVar13 + 0x40e] = 0;
        local_576[lVar13 + 0x40f] = 0;
        local_576[lVar13 + 0x410] = 0;
        local_576[lVar13 + 0x411] = 0;
        local_158[lVar13 + -0xc] = '\0';
        local_158[lVar13 + -0xb] = '\0';
        local_158[lVar13 + -10] = '\0';
        local_158[lVar13 + -9] = '\0';
        local_158[lVar13 + -8] = '\0';
        local_158[lVar13 + -7] = '\0';
        local_158[lVar13 + -6] = '\0';
        local_158[lVar13 + -5] = '\0';
        lVar13 = lVar13 + 0xc;
      } while (lVar13 != 0x90);
      local_168 = _DAT_1000e5a0;
      uStack_160 = uRam000000001000e5a8;
      local_158[0] = '\0';
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (local_158[uVar9 + 1] != '\0');
      pcVar16 = str_1000edb1;
      if ((DAT_10010000 & 1) != 0) {
        pcVar16 = str_1000ed95;
      }
      cVar20 = *pcVar16;
      uVar10 = uVar9 + 2;
      if (uVar9 + 2 < 0x40 && cVar20 != '\0') {
        do {
          uVar17 = uVar10;
          pcVar16 = pcVar16 + 1;
          local_158[uVar17 - 1] = cVar20;
          cVar20 = *pcVar16;
          if (cVar20 == '\0') break;
          uVar10 = uVar17 + 1;
        } while (uVar17 < 0x3f);
      }
      local_158[uVar17] = '\0';
      acStack_119[1] = 0;
      uVar17 = 0xffffffffffffffff;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (acStack_119[uVar9 + 2] != '\0');
      if (uVar9 + 2 < 0x40) {
        cVar20 = 'q';
        pcVar16 = str_1000e5b0;
        uVar9 = uVar9 + 2;
        do {
          uVar17 = uVar9;
          pcVar16 = pcVar16 + 1;
          acStack_119[uVar17] = cVar20;
          cVar20 = *pcVar16;
          if (cVar20 == '\0') break;
          uVar9 = uVar17 + 1;
        } while (uVar17 < 0x3f);
      }
      acStack_119[uVar17 + 1] = '\0';
      if (((*local_38 == 0x54584b57) && (199 < (uint)local_38[2])) &&
         (((code *)(ulong)(uint)local_38[0x31] != (code *)0x0 &&
          (iVar3 = (*(code *)(ulong)(uint)local_38[0x31])(&local_168,recovered_1000dd60), iVar3 != 0
          )))) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        pcVar16 = str_1000ede2;
        if ((bVar15 & 1) != 0) {
          pcVar16 = str_1000edd2;
        }
        if (uVar17 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = 0x20;
          uVar9 = uVar17;
        }
        piVar24 = local_38;
        abStack_5a6[uVar9 + 0x2e] = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          bVar15 = 0x67;
          pcVar25 = str_1000edc6;
          do {
            pcVar25 = pcVar25 + 1;
            abStack_5a6[uVar9 + 0x2e] = bVar15;
            uVar9 = uVar9 + 1;
            bVar15 = *pcVar25;
            if (bVar15 == 0) break;
          } while (uVar9 < 0x3ff);
        }
        abStack_5a6[uVar9 + 0x2e] = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar17 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = 0x3d;
          uVar9 = uVar17;
        }
        abStack_5a6[uVar9 + 0x2e] = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        bVar15 = *pcVar16;
        if (uVar9 + 1 < 0x400 && bVar15 != 0) {
          do {
            pcVar16 = pcVar16 + 1;
            abStack_5a6[uVar9 + 0x2e] = bVar15;
            uVar9 = uVar9 + 1;
            bVar15 = *pcVar16;
            if (bVar15 == 0) break;
          } while (uVar9 < 0x3ff);
        }
      }
      else {
        piVar24 = local_38;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar17 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = 0x20;
          uVar9 = uVar17;
        }
        abStack_5a6[uVar9 + 0x2e] = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          bVar15 = 0x67;
          pcVar16 = str_1000edc6;
          do {
            pcVar16 = pcVar16 + 1;
            abStack_5a6[uVar9 + 0x2e] = bVar15;
            uVar9 = uVar9 + 1;
            bVar15 = *pcVar16;
            if (bVar15 == 0) break;
          } while (uVar9 < 0x3ff);
        }
        abStack_5a6[uVar9 + 0x2e] = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar17 < 0x400) {
          abStack_5a6[uVar9 + 0x2e] = 0x3d;
          uVar9 = uVar17;
        }
        abStack_5a6[uVar9 + 0x2e] = 0;
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          bVar15 = 0x75;
          pcVar16 = str_1000e6c4;
          do {
            pcVar16 = pcVar16 + 1;
            abStack_5a6[uVar9 + 0x2e] = bVar15;
            uVar9 = uVar9 + 1;
            bVar15 = *pcVar16;
            if (bVar15 == 0) break;
          } while (uVar9 < 0x3ff);
        }
      }
      abStack_5a6[uVar9 + 0x2e] = 0;
      uVar21 = local_c0;
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar17 < 0x400) {
        abStack_5a6[uVar9 + 0x2e] = 0x20;
        uVar9 = uVar17;
      }
      abStack_5a6[uVar9 + 0x2e] = 0;
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar9 + 1 < 0x400) {
        bVar15 = 0x70;
        pcVar16 = str_1000e6ee;
        do {
          pcVar16 = pcVar16 + 1;
          abStack_5a6[uVar9 + 0x2e] = bVar15;
          uVar9 = uVar9 + 1;
          bVar15 = *pcVar16;
          if (bVar15 == 0) break;
        } while (uVar9 < 0x3ff);
      }
      abStack_5a6[uVar9 + 0x2e] = 0;
      uVar17 = 0;
      do {
        uVar9 = uVar17;
        uVar17 = uVar9 + 1;
      } while (abStack_5a6[uVar9 + 0x2e] != 0);
      if (uVar17 < 0x400) {
        abStack_5a6[uVar9 + 0x2e] = 0x3d;
        uVar9 = uVar17;
      }
      abStack_5a6[uVar9 + 0x2e] = 0;
      if (uVar21 == 0) {
        uVar17 = 0;
        do {
          uVar9 = uVar17;
          uVar17 = uVar9 + 1;
        } while (abStack_5a6[uVar9 + 0x2e] != 0);
        if (uVar9 + 1 < 0x400) {
          (abStack_5a6 + uVar9 + 0x2e)[0] = 0x30;
          (abStack_5a6 + uVar9 + 0x2e)[1] = 0;
        }
      }
      else {
        uVar17 = 0xffffffffffffffff;
        do {
          uVar9 = uVar17;
          local_576[uVar9 + 0x40f] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
          uVar17 = uVar9 + 1;
          if (8 < uVar17) break;
          bVar26 = 9 < uVar21;
          uVar21 = uVar21 / 10;
        } while (bVar26);
        if ((uVar17 & 1) == 0) {
          uVar10 = 0;
          do {
            uVar11 = uVar10;
            uVar10 = uVar11 + 1;
          } while (abStack_5a6[uVar11 + 0x2e] != 0);
          uVar10 = uVar17;
          if (uVar11 + 1 < 0x400) {
            abStack_5a6[uVar11 + 0x2e] = local_576[uVar9 + 0x40f];
            local_576[uVar11 - 1] = 0;
          }
        }
        else {
          uVar10 = uVar9 + 2;
        }
        while (uVar17 != 0) {
          uVar17 = 0;
          do {
            uVar9 = uVar17;
            uVar17 = uVar9 + 1;
          } while (abStack_5a6[uVar9 + 0x2e] != 0);
          if (uVar9 + 1 < 0x400) {
            abStack_5a6[uVar9 + 0x2e] = local_576[uVar10 + 0x40d];
            local_576[uVar9 - 1] = 0;
          }
          lVar13 = uVar10 + 0x40c;
          uVar10 = uVar10 - 2;
          uVar17 = 0;
          do {
            uVar9 = uVar17;
            uVar17 = uVar9 + 1;
          } while (abStack_5a6[uVar9 + 0x2e] != 0);
          uVar17 = uVar10;
          if (uVar9 + 1 < 0x400) {
            abStack_5a6[uVar9 + 0x2e] = local_576[lVar13];
            local_576[uVar9 - 1] = 0;
          }
        }
      }
      iVar3 = 1;
      if ((code *)(ulong)(uint)piVar24[3] != (code *)0x0) {
        (*(code *)(ulong)(uint)piVar24[3])(str_1000e725 + 6,str_1000e6d0,&local_578);
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

#undef DAT_1000e5a0
#undef DAT_1000e720
#undef DAT_10010000
#undef UNK_1000e5a8
#undef _DAT_1000e5a0
#undef str_1000e5b0
#undef str_1000e5c5
#undef str_1000e5f7
#undef str_1000e606
#undef str_1000e616
#undef str_1000e623
#undef str_1000e62e
#undef str_1000e63a
#undef str_1000e648
#undef str_1000e654
#undef str_1000e660
#undef str_1000e66d
#undef str_1000e677
#undef str_1000e682
#undef str_1000e68e
#undef str_1000e69f
#undef str_1000e6af
#undef str_1000e6b9
#undef str_1000e6c4
#undef str_1000e6d0
#undef str_1000e6ee
#undef str_1000e711
#undef str_1000e725
#undef str_1000e72c
#undef str_1000e73c
#undef str_1000e74b
#undef str_1000ed95
#undef str_1000edb1
#undef str_1000edc6
#undef str_1000edd2
#undef str_1000ede2
#undef uRam000000001000e5a8
#undef abStack_5a6
#undef bStack_579
#undef uStack_160
#undef acStack_119
#undef uStack_b0
#undef uStack_a0
#undef uStack_90
#undef abStack_7a
#undef local_578
#undef local_576
#undef local_16c
#undef local_168
#undef local_158
#undef local_104
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_a8
#undef local_98
#undef local_88
#undef local_48
#undef local_3c
#undef local_38

#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036c0
 */

void recovered_100036c0(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;

  if (param_1 == 0) {
    if ((int)param_3 == 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    if (uVar3 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar3) = 0x20;
      uVar2 = uVar3;
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    if (param_2 != (char *)0x0) {
      cVar4 = *param_2;
      if (uVar2 + 1 < 0x400 && cVar4 != '\0') {
        do {
          param_2 = param_2 + 1;
          *(char *)(param_1 + uVar2) = cVar4;
          uVar2 = uVar2 + 1;
          cVar4 = *param_2;
          if (cVar4 == '\0') break;
        } while (uVar2 < 0x3ff);
      }
      *(undefined1 *)(param_1 + uVar2) = 0;
    }
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    if (uVar3 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar3) = 0x3d;
      uVar2 = uVar3;
    }
    *(undefined1 *)(param_1 + uVar2) = 0;
    if ((int)param_3 == 0) {
      uVar3 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar1 != '\0');
      if (uVar3 < 0x400) {
        *(undefined2 *)(param_1 + -1 + uVar3) = 0x30;
        return;
      }
      return;
    }
  }
  uVar3 = 0;
  do {
    uVar5 = (uint)param_3;
    uVar6 = (param_3 & 0xffffffff) / 10;
    abStack_13[uVar3 + 1] = (char)param_3 + (char)uVar6 * -10 | 0x30;
    uVar2 = uVar3 + 1;
    if (8 < uVar3) break;
    uVar3 = uVar2;
    param_3 = uVar6;
  } while (9 < uVar5);
  do {
    if (param_1 != 0) {
      uVar3 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar3);
        uVar3 = uVar3 + 1;
      } while (*pcVar1 != '\0');
      if (uVar3 < 0x400) {
        *(byte *)(param_1 + -1 + uVar3) = abStack_13[uVar2];
        *(undefined1 *)(param_1 + uVar3) = 0;
      }
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

#undef abStack_13

#undef DAT_10010000
#define DAT_10010000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a68U)))
#undef DAT_10010010
#define DAT_10010010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a78U)))
#undef DAT_10010011
#define DAT_10010011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a79U)))
#undef DAT_10010012
#define DAT_10010012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7aU)))
#undef DAT_10010013
#define DAT_10010013 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7bU)))
#undef DAT_10010014
#define DAT_10010014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7cU)))
#undef DAT_10010015
#define DAT_10010015 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7dU)))
#undef DAT_10010016
#define DAT_10010016 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7eU)))
#undef DAT_10010017
#define DAT_10010017 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a7fU)))
#undef DAT_10010018
#define DAT_10010018 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a80U)))
#undef DAT_10010020
#define DAT_10010020 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a88U)))
#undef DAT_10010021
#define DAT_10010021 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a89U)))
#undef DAT_10010022
#define DAT_10010022 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8aU)))
#undef DAT_10010023
#define DAT_10010023 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8bU)))
#undef DAT_10010024
#define DAT_10010024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8cU)))
#undef DAT_10010025
#define DAT_10010025 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8dU)))
#undef DAT_10010026
#define DAT_10010026 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8eU)))
#undef DAT_10010027
#define DAT_10010027 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a8fU)))
#undef DAT_10010028
#define DAT_10010028 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a90U)))
#undef DAT_1001002c
#define DAT_1001002c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a94U)))
#undef DAT_1001002e
#define DAT_1001002e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a96U)))
#undef DAT_1001002f
#define DAT_1001002f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a97U)))
#undef DAT_10010030
#define DAT_10010030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a98U)))
#undef DAT_10010034
#define DAT_10010034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a9cU)))
#undef DAT_10010036
#define DAT_10010036 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a9eU)))
#undef DAT_10010037
#define DAT_10010037 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a9fU)))
#undef DAT_10010040
#define DAT_10010040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aa8U)))
#undef DAT_10010041
#define DAT_10010041 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aa9U)))
#undef DAT_10010042
#define DAT_10010042 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aaaU)))
#undef DAT_10010043
#define DAT_10010043 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aabU)))
#undef DAT_10010044
#define DAT_10010044 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aacU)))
#undef DAT_10010045
#define DAT_10010045 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aadU)))
#undef DAT_10010046
#define DAT_10010046 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aaeU)))
#undef DAT_10010047
#define DAT_10010047 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aafU)))
#undef DAT_10010048
#define DAT_10010048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab0U)))
#undef DAT_10010049
#define DAT_10010049 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab1U)))
#undef DAT_1001004a
#define DAT_1001004a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab2U)))
#undef DAT_1001004b
#define DAT_1001004b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab3U)))
#undef DAT_1001004c
#define DAT_1001004c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab4U)))
#undef DAT_1001004d
#define DAT_1001004d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab5U)))
#undef DAT_1001004e
#define DAT_1001004e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab6U)))
#undef DAT_1001004f
#define DAT_1001004f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab7U)))
#undef DAT_10010050
#define DAT_10010050 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab8U)))
#undef DAT_10010051
#define DAT_10010051 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ab9U)))
#undef DAT_10010052
#define DAT_10010052 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1abaU)))
#undef DAT_10010053
#define DAT_10010053 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1abbU)))
#undef DAT_10010060
#define DAT_10010060 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ac8U)))
#undef DAT_10010064
#define DAT_10010064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1accU)))
#undef DAT_10010065
#define DAT_10010065 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acdU)))
#undef DAT_10010066
#define DAT_10010066 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aceU)))
#undef DAT_10010067
#define DAT_10010067 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1acfU)))
#undef DAT_10010068
#define DAT_10010068 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad0U)))
#undef DAT_10010069
#define DAT_10010069 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad1U)))
#undef DAT_1001006a
#define DAT_1001006a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad2U)))
#undef DAT_1001006b
#define DAT_1001006b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad3U)))
#undef DAT_1001006c
#define DAT_1001006c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad4U)))
#undef DAT_1001006d
#define DAT_1001006d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad5U)))
#undef DAT_1001006e
#define DAT_1001006e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad6U)))
#undef DAT_1001006f
#define DAT_1001006f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad7U)))
#undef DAT_10010070
#define DAT_10010070 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad8U)))
#undef DAT_10010071
#define DAT_10010071 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ad9U)))
#undef DAT_10010072
#define DAT_10010072 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adaU)))
#undef DAT_10010073
#define DAT_10010073 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adbU)))
#undef DAT_10010074
#define DAT_10010074 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adcU)))
#undef DAT_10010075
#define DAT_10010075 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1addU)))
#undef DAT_10010076
#define DAT_10010076 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adeU)))
#undef DAT_10010077
#define DAT_10010077 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1adfU)))
#undef DAT_10010080
#define DAT_10010080 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae8U)))
#undef DAT_10010081
#define DAT_10010081 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ae9U)))
#undef DAT_10010082
#define DAT_10010082 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aeaU)))
#undef DAT_10010083
#define DAT_10010083 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aebU)))
#undef DAT_10010084
#define DAT_10010084 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aecU)))
#undef DAT_10010085
#define DAT_10010085 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aedU)))
#undef DAT_10010086
#define DAT_10010086 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aeeU)))
#undef DAT_10010087
#define DAT_10010087 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1aefU)))
#undef DAT_10010088
#define DAT_10010088 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af0U)))
#undef DAT_10010089
#define DAT_10010089 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af1U)))
#undef DAT_1001008a
#define DAT_1001008a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af2U)))
#undef DAT_1001008b
#define DAT_1001008b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1af3U)))
#undef _DAT_10010018
#define _DAT_10010018 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1a80U)))
#undef _DAT_10010028
#define _DAT_10010028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a90U)))
#undef _DAT_1001002c
#define _DAT_1001002c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1a94U)))
#undef _DAT_10010030
#define _DAT_10010030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1a98U)))
#undef _DAT_10010034
#define _DAT_10010034 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1a9cU)))
#undef _DAT_10010060
#define _DAT_10010060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1ac8U)))
#undef str_1000e75a
#define str_1000e75a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_1000e767
#define str_1000e767 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cfU)))
#undef str_1000e77d
#define str_1000e77d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e5U)))
#undef str_1000e791
#define str_1000e791 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f9U)))
#undef str_1000e7a7
#define str_1000e7a7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20fU)))
#undef str_1000eb4c
#define str_1000eb4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b4U)))
#undef str_1000eb6a
#define str_1000eb6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5d2U)))
#undef str_1000eb86
#define str_1000eb86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5eeU)))
#undef str_1000eb9c
#define str_1000eb9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x604U)))
#undef str_1000ebb6
#define str_1000ebb6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x61eU)))
#undef str_1000ebc6
#define str_1000ebc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62eU)))
#undef str_1000ebd3
#define str_1000ebd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63bU)))
#undef str_1000ebe3
#define str_1000ebe3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64bU)))
#undef str_1000ebed
#define str_1000ebed (*(char (*)[1])(((uintptr_t)pf_module_state + 0x655U)))
#undef str_1000ebf5
#define str_1000ebf5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65dU)))
#undef str_1000ebfe
#define str_1000ebfe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x666U)))
#undef str_1000ec06
#define str_1000ec06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66eU)))
#undef str_1000ec1e
#define str_1000ec1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x686U)))
#define local_4f8 (*(undefined8 *)(frame + 1048))
#define local_4f0 (*(undefined1 (*)[68])(frame + 1056))
#define local_4ac (*(byte *)(frame + 1124))
#define local_4a4 (*(uint *)(frame + 1132))
#define local_498 (*(long *)(frame + 1144))
#define local_f8 (*(undefined4 *)(frame + 2072))
#define local_8c (*(uint *)(frame + 2180))
#define local_88 (*(uint *)(frame + 2184))
#define local_84 (*(undefined4 *)(frame + 2188))
#define local_80 (*(undefined4 *)(frame + 2192))
#define local_7c (*(undefined4 *)(frame + 2196))
#define local_78 (*(undefined4 *)(frame + 2200))
#define local_74 (*(undefined4 *)(frame + 2204))
#define local_70 (*(undefined4 *)(frame + 2208))
#define local_6c (*(undefined4 *)(frame + 2212))
#define local_68 (*(undefined4 *)(frame + 2216))
#define local_64 (*(uint *)(frame + 2220))
#define local_60 (*(byte * *)(frame + 2224))
#define local_54 (*(uint *)(frame + 2236))
#define local_50 (*(undefined4 *)(frame + 2240))
#define local_4c (*(undefined4 *)(frame + 2244))
#define local_40 (*(uint *)(frame + 2256))
#define local_3c (*(uint *)(frame + 2260))
#define local_38 (*(int * *)(frame + 2264))
#define acStack_8f9 (*(char (*)[1024])(frame + 23))
#define cStack_4f9 (*(char *)(frame + 1047))
#define cStack_f9 (*(char *)(frame + 2071))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003820
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003820(int *param_1,byte *param_2,int *param_3)

{
  unsigned char frame[2352] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  undefined7 extraout_var = 0;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  ushort uVar10;
  int iVar11;
  char *pcVar12;
  char cVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;

  if (((param_2 == (byte *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) ||
     (*(short *)(param_2 + 6) != 0x1050)) {
    sVar5 = *(short *)(param_2 + 6);
    bVar3 = sVar5 == 0x1050;
    if (param_2[8] != 3 && !bVar3) {
      return;
    }
  }
  else {
    bVar3 = true;
    sVar5 = 0x1050;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  pbVar21 = param_2 + 8;
  acStack_8f9[1] = '\0';
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 1] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = 'r';
    pcVar12 = str_1000e75a;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_8f9[uVar9 + 1] = cVar13;
      uVar9 = uVar9 + 1;
      cVar13 = *pcVar12;
      if (cVar13 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  acStack_8f9[uVar9 + 1] = '\0';
  if (bVar3) {
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (acStack_8f9[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x400) {
      cVar13 = ' ';
      pcVar12 = str_1000e767;
      do {
        pcVar12 = pcVar12 + 1;
        acStack_8f9[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar12;
        if (cVar13 == '\0') break;
      } while (uVar9 < 0x3ff);
    }
LAB_10003a1c:
    acStack_8f9[uVar9 + 1] = '\0';
  }
  else if (*(short *)(param_2 + 4) == 0x1234) {
    if (sVar5 == 0x1111) {
      uVar18 = 0;
      do {
        uVar9 = uVar18;
        uVar18 = uVar9 + 1;
      } while (acStack_8f9[uVar9 + 1] != '\0');
      if (uVar9 + 1 < 0x400) {
        cVar13 = ' ';
        pcVar12 = str_1000e77d;
        do {
          pcVar12 = pcVar12 + 1;
          acStack_8f9[uVar9 + 1] = cVar13;
          uVar9 = uVar9 + 1;
          cVar13 = *pcVar12;
          if (cVar13 == '\0') break;
        } while (uVar9 < 0x3ff);
      }
      goto LAB_10003a1c;
    }
  }
  else if (*(short *)(param_2 + 4) == 0x1013) {
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (acStack_8f9[uVar9 + 1] != '\0');
    if (uVar9 + 1 < 0x400) {
      cVar13 = ' ';
      pcVar12 = str_1000e791;
      do {
        pcVar12 = pcVar12 + 1;
        acStack_8f9[uVar9 + 1] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar12;
        if (cVar13 == '\0') break;
      } while (uVar9 < 0x3ff);
    }
    goto LAB_10003a1c;
  }
  recovered_10005ee0(param_1,param_2,(long)(acStack_8f9 + 1));
  local_f8 = 0;
  local_4c = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_54 = 0;
  if ((((param_2 != (byte *)0x0) && (*(short *)(param_2 + 4) == 0x1af4)) &&
      (*(short *)(param_2 + 6) == 0x1050)) || (*(short *)(param_2 + 6) == 0x1050)) {
    bVar3 = recovered_1000c740(param_1,param_2,&local_4f8);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      uVar18 = 0;
      do {
        uVar9 = uVar18;
        uVar18 = uVar9 + 1;
      } while (acStack_8f9[uVar9 + 1] != '\0');
      if (uVar9 + 1 < 0x400) {
        cVar13 = ' ';
        pcVar12 = str_1000eb4c;
        do {
          pcVar12 = pcVar12 + 1;
          acStack_8f9[uVar9 + 1] = cVar13;
          uVar9 = uVar9 + 1;
          cVar13 = *pcVar12;
          if (cVar13 == '\0') break;
        } while (uVar9 < 0x3ff);
      }
    }
    else {
      recovered_1000cda0(param_1,&local_4f8);
      if ((local_4ac & 8) == 0) {
        uVar18 = 0;
        do {
          uVar9 = uVar18;
          uVar18 = uVar9 + 1;
        } while (acStack_8f9[uVar9 + 1] != '\0');
        if (uVar9 + 1 < 0x400) {
          cVar13 = ' ';
          pcVar12 = str_1000eb6a;
          do {
            pcVar12 = pcVar12 + 1;
            acStack_8f9[uVar9 + 1] = cVar13;
            uVar9 = uVar9 + 1;
            cVar13 = *pcVar12;
            if (cVar13 == '\0') break;
          } while (uVar9 < 0x3ff);
        }
      }
      else if ((local_4a4 < 2) || (local_498 == 0)) {
        uVar18 = 0;
        do {
          uVar9 = uVar18;
          uVar18 = uVar9 + 1;
        } while (acStack_8f9[uVar9 + 1] != '\0');
        if (uVar9 + 1 < 0x400) {
          cVar13 = ' ';
          pcVar12 = str_1000eb86;
          do {
            pcVar12 = pcVar12 + 1;
            acStack_8f9[uVar9 + 1] = cVar13;
            uVar9 = uVar9 + 1;
            cVar13 = *pcVar12;
            if (cVar13 == '\0') break;
          } while (uVar9 < 0x3ff);
        }
      }
      else {
        DAT_10010010 = 0;
        DAT_10010011 = 0;
        DAT_10010012 = 0;
        DAT_10010013 = 0;
        DAT_10010014 = 0;
        DAT_10010015 = 0;
        DAT_10010016 = 0;
        DAT_10010017 = 0;
        _DAT_10010018 = 0;
        DAT_10010020 = 0;
        DAT_10010021 = 0;
        DAT_10010022 = 0;
        DAT_10010023 = 0;
        DAT_10010024 = 0;
        DAT_10010025 = 0;
        DAT_10010026 = 0;
        DAT_10010027 = 0;
        _DAT_10010028 = 0;
        _DAT_1001002c = 0;
        DAT_1001002e = 0;
        DAT_1001002f = 0;
        _DAT_10010030 = 0;
        _DAT_10010034 = 0;
        DAT_10010036 = 0;
        DAT_10010037 = 0;
        DAT_10010040 = 0;
        DAT_10010041 = 0;
        DAT_10010042 = 0;
        DAT_10010043 = 0;
        DAT_10010044 = 0;
        DAT_10010045 = 0;
        DAT_10010046 = 0;
        DAT_10010047 = 0;
        DAT_10010048 = 0;
        DAT_10010049 = 0;
        DAT_1001004a = 0;
        DAT_1001004b = 0;
        DAT_1001004c = 0;
        DAT_1001004d = 0;
        DAT_1001004e = 0;
        DAT_1001004f = 0;
        DAT_10010050 = 0;
        DAT_10010051 = 0;
        DAT_10010052 = 0;
        DAT_10010053 = 0;
        _DAT_10010060 = 0;
        DAT_10010064 = 0;
        DAT_10010065 = 0;
        DAT_10010066 = 0;
        DAT_10010067 = 0;
        DAT_10010068 = 0;
        DAT_10010069 = 0;
        DAT_1001006a = 0;
        DAT_1001006b = 0;
        DAT_1001006c = 0;
        DAT_1001006d = 0;
        DAT_1001006e = 0;
        DAT_1001006f = 0;
        DAT_10010070 = 0;
        DAT_10010071 = 0;
        DAT_10010072 = 0;
        DAT_10010073 = 0;
        DAT_10010074 = 0;
        DAT_10010075 = 0;
        DAT_10010076 = 0;
        DAT_10010077 = 0;
        lVar6 = 0;
        do {
          (&DAT_10010080)[lVar6] = 0;
          (&DAT_10010081)[lVar6] = 0;
          (&DAT_10010082)[lVar6] = 0;
          (&DAT_10010083)[lVar6] = 0;
          (&DAT_10010084)[lVar6] = 0;
          (&DAT_10010085)[lVar6] = 0;
          (&DAT_10010086)[lVar6] = 0;
          (&DAT_10010087)[lVar6] = 0;
          (&DAT_10010088)[lVar6] = 0;
          (&DAT_10010089)[lVar6] = 0;
          (&DAT_1001008a)[lVar6] = 0;
          (&DAT_1001008b)[lVar6] = 0;
          lVar6 = lVar6 + 0xc;
        } while (lVar6 != 0x198);
        if ((((((((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x73 < (uint)param_1[2]))
               && (((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
                   (iVar11 = (*(code *)(ulong)(uint)param_1[0x1c])
                                       (0,&DAT_10010010,0x20,&local_f8,&local_4c), iVar11 != 0))))
              && (*param_1 == 0x54584b57)) &&
             ((0x73 < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)))) &&
            ((iVar11 = (*(code *)(ulong)(uint)param_1[0x1c])(0,&DAT_10010030,8,&local_84,&local_80),
             iVar11 != 0 &&
             (((*param_1 == 0x54584b57 && (0x73 < (uint)param_1[2])) &&
              ((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)))))) &&
           ((((iVar11 = (*(code *)(ulong)(uint)param_1[0x1c])
                                  (0,&DAT_10010040,0x14,&local_7c,&local_78), iVar11 != 0 &&
              (*param_1 == 0x54584b57)) && (0x73 < (uint)param_1[2])) &&
            ((((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0 &&
              (iVar11 = (*(code *)(ulong)(uint)param_1[0x1c])
                                  (0,&DAT_10010060,0x18,&local_74,&local_70), iVar11 != 0)) &&
             ((*param_1 == 0x54584b57 &&
              (((0x73 < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1c] != (code *)0x0)) &&
               (iVar11 = (*(code *)(ulong)(uint)param_1[0x1c])
                                   (0,&DAT_10010080,0x198,&local_6c,&local_68), iVar11 != 0)))))))))
           ) {
          _DAT_10010060 = 0x100;
          DAT_10010010 = (undefined1)local_74;
          DAT_10010011 = (undefined1)((uint)local_74 >> 8);
          DAT_10010012 = (undefined1)((uint)local_74 >> 0x10);
          DAT_10010013 = (undefined1)((uint)local_74 >> 0x18);
          DAT_10010014 = (undefined1)local_70;
          DAT_10010015 = (undefined1)((uint)local_70 >> 8);
          DAT_10010016 = (undefined1)((uint)local_70 >> 0x10);
          DAT_10010017 = (undefined1)((uint)local_70 >> 0x18);
          _DAT_10010018 = 0x1000100000018;
          DAT_10010020 = (undefined1)local_6c;
          DAT_10010021 = (undefined1)((uint)local_6c >> 8);
          DAT_10010022 = (undefined1)((uint)local_6c >> 0x10);
          DAT_10010023 = (undefined1)((uint)local_6c >> 0x18);
          DAT_10010024 = (undefined1)local_68;
          DAT_10010025 = (undefined1)((uint)local_68 >> 8);
          DAT_10010026 = (undefined1)((uint)local_68 >> 0x10);
          DAT_10010027 = (undefined1)((uint)local_68 >> 0x18);
          _DAT_10010028 = 0x198;
          _DAT_1001002c = 2;
          _DAT_10010030 = 0x10000;
          _DAT_10010034 = 0;
          local_60 = pbVar21;
          recovered_1000d8f0(param_1,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x16,0);
          recovered_1000d8f0(param_1,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x18,2);
          recovered_1000d960(param_1,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x20,local_f8,
                             local_4c);
          recovered_1000d960(param_1,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x28,local_84,
                             local_80);
          recovered_1000d960(param_1,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x30,local_7c,
                             local_78);
          local_38 = param_1;
          if ((((*param_1 == 0x54584b57) && (0x77 < (uint)param_1[2])) &&
              (((code *)(ulong)(uint)param_1[0x1d] != (code *)0x0 &&
               ((((*(code *)(ulong)(uint)param_1[0x1d])(0,&DAT_10010010,0x20),
                 *local_38 == 0x54584b57 && (0x77 < (uint)local_38[2])) &&
                (((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0 &&
                 (((((*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_10010030,8),
                    *local_38 == 0x54584b57 && (0x77 < (uint)local_38[2])) &&
                   ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)) &&
                  (((*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_10010040,0x14),
                   *local_38 == 0x54584b57 && (0x77 < (uint)local_38[2])))))))))))) &&
             (((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0 &&
              ((((*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_10010060,0x18),
                *local_38 == 0x54584b57 && (0x77 < (uint)local_38[2])) &&
               ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)))))) {
            (*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_10010080,0x198);
          }
          piVar2 = local_38;
          recovered_1000d8f0(local_38,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x1c,1);
          recovered_1000d870(piVar2,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x1c,
                             (long)&local_64);
          recovered_1000d790(piVar2,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x14,
                             (long)&local_54);
          recovered_1000d810(piVar2,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8));
          recovered_1000d790(piVar2,CONCAT71(PF_PART7(local_4f8, 1),(undefined1)local_4f8),0x14,
                             (long)&local_54);
          if (((*piVar2 == 0x54584b57) && (0x7b < (uint)local_38[2])) &&
             ((code *)(ulong)(uint)local_38[0x1e] != (code *)0x0)) {
            (*(code *)(ulong)(uint)local_38[0x1e])();
          }
          recovered_1000d8f0(local_38,local_498,0,0);
          iVar11 = 100;
          do {
            if (((*local_38 == 0x54584b57) && (0x77 < (uint)local_38[2])) &&
               ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)) {
              (*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_10010040,0x14);
            }
            uVar20 = (uint)CONCAT11(DAT_10010043,DAT_10010042);
            if (uVar20 != 0) goto LAB_1000583d;
            if (((*local_38 == 0x54584b57) && (0x33 < (uint)local_38[2])) &&
               ((code *)(ulong)(uint)local_38[0xc] != (code *)0x0)) {
              (*(code *)(ulong)(uint)local_38[0xc])();
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          uVar20 = 0;
LAB_1000583d:
          if (((*local_38 == 0x54584b57) && (0x77 < (uint)local_38[2])) &&
             ((code *)(ulong)(uint)local_38[0x1d] != (code *)0x0)) {
            (*(code *)(ulong)(uint)local_38[0x1d])(0,&DAT_10010080,0x198);
          }
          if (uVar20 == 0) {
            uVar22 = 0;
            local_40 = 0;
            local_3c = 0;
            uVar16 = 0;
            local_50 = 0;
          }
          else {
            local_88 = (uint)DAT_10010080;
            local_8c = (uint)DAT_10010083;
            local_3c = 0;
            lVar6 = 0x2b;
            local_40 = 0;
            uVar22 = 0;
            do {
              bVar3 = *(int *)(lVar6 + ((uintptr_t)pf_module_state + 0x1ae5U)) != 0;
              bVar23 = *(uint *)(&DAT_10010075 + lVar6) != 0;
              bVar24 = *(uint *)(lVar6 + ((uintptr_t)pf_module_state + 0x1ae1U)) != 0;
              bVar25 = uVar22 == 0;
              uVar22 = uVar22 + (bVar24 && (bVar23 && bVar3));
              if ((bVar24 && (bVar23 && bVar3)) && bVar25) {
                local_40 = *(uint *)(&DAT_10010075 + lVar6);
              }
              if ((bVar24 && (bVar23 && bVar3)) && bVar25) {
                local_3c = *(uint *)(lVar6 + ((uintptr_t)pf_module_state + 0x1ae1U));
              }
              lVar6 = lVar6 + 0x18;
            } while (lVar6 != 0x1ab);
            local_50 = CONCAT13(DAT_1001004b,
                                CONCAT12(DAT_1001004a,CONCAT11(DAT_10010049,DAT_10010048)));
            uVar16 = CONCAT13(DAT_10010083,
                              CONCAT12(DAT_10010082,CONCAT11(DAT_10010081,DAT_10010080)));
          }
          pcVar12 = acStack_8f9 + 1;
          recovered_10005ae0((long)pcVar12,0x400,str_1000ebb6);
          recovered_100036c0((long)pcVar12,str_1000ebc6,2);
          recovered_100036c0((long)pcVar12,str_1000ebd3,(ulong)local_64);
          recovered_10005b50((long)pcVar12,str_1000ebe3,local_54);
          recovered_100036c0((long)pcVar12,str_1000ebed,(ulong)uVar20);
          recovered_100036c0((long)pcVar12,str_1000ebf5,(ulong)local_50);
          recovered_10005b50((long)pcVar12,str_1000ebfe,uVar16);
          recovered_100036c0((long)pcVar12,str_1000ec06,(ulong)uVar22);
          if ((local_40 != 0) && (local_3c != 0)) {
            recovered_1000da70((long)(acStack_8f9 + 1),(ulong)local_40,(ulong)local_3c);
          }
          param_1 = local_38;
          pbVar21 = local_60;
          if (uVar16 == 0x1101) {
            DAT_10010000 = 1;
          }
          goto LAB_10004394;
        }
        uVar18 = 0;
        do {
          uVar9 = uVar18;
          uVar18 = uVar9 + 1;
        } while (acStack_8f9[uVar9 + 1] != '\0');
        if (uVar9 + 1 < 0x400) {
          cVar13 = ' ';
          pcVar12 = str_1000eb9c;
          do {
            pcVar12 = pcVar12 + 1;
            acStack_8f9[uVar9 + 1] = cVar13;
            uVar9 = uVar9 + 1;
            cVar13 = *pcVar12;
            if (cVar13 == '\0') break;
          } while (uVar9 < 0x3ff);
        }
      }
    }
    acStack_8f9[uVar9 + 1] = '\0';
  }
LAB_10004394:
  local_38 = (int *)recovered_1000c3b0((long)param_2);
  if (param_2 == (byte *)0x0) {
    return;
  }
  local_f8 = local_f8 & 0xffffff00;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  if (uVar9 + 1 < 0x60) {
    cVar13 = '/';
    pcVar12 = str_1000e7a7;
    do {
      pcVar12 = pcVar12 + 1;
      *(char *)((long)&local_f8 + uVar9) = cVar13;
      uVar9 = uVar9 + 1;
      cVar13 = *pcVar12;
      if (cVar13 == '\0') break;
    } while (uVar9 < 0x5f);
  }
  *(undefined1 *)((long)&local_f8 + uVar9) = 0;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  if (uVar18 < 0x60) {
    *(undefined1 *)((long)&local_f8 + uVar9) = 0x2f;
    uVar9 = uVar18;
  }
  *(undefined1 *)((long)&local_f8 + uVar9) = 0;
  bVar8 = *param_2;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  bVar4 = (bVar8 >> 4) + 0x37;
  if (bVar8 < 0xa0) {
    bVar4 = bVar8 >> 4 | 0x30;
  }
  if (uVar9 + 1 < 0x60) {
    *(byte *)((long)&local_f8 + uVar9) = bVar4;
    *(undefined1 *)((long)&local_f8 + uVar9 + 1) = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  cVar13 = bVar8 + 0x37;
  if (bVar8 < 10) {
    cVar13 = bVar8 + 0x30;
  }
  if (uVar9 + 1 < 0x60) {
    *(char *)((long)&local_f8 + uVar9) = cVar13;
    *(undefined1 *)((long)&local_f8 + uVar9 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  if (uVar18 < 0x60) {
    *(undefined1 *)((long)&local_f8 + uVar9) = 0x3a;
    uVar9 = uVar18;
  }
  *(undefined1 *)((long)&local_f8 + uVar9) = 0;
  bVar8 = param_2[1];
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  bVar14 = (bVar8 >> 4) + 0x37;
  if (bVar8 < 0xa0) {
    bVar14 = bVar8 >> 4 | 0x30;
  }
  if (uVar9 + 1 < 0x60) {
    *(byte *)((long)&local_f8 + uVar9) = bVar14;
    *(undefined1 *)((long)&local_f8 + uVar9 + 1) = 0;
  }
  bVar8 = bVar8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  cVar15 = bVar8 + 0x37;
  if (bVar8 < 10) {
    cVar15 = bVar8 + 0x30;
  }
  if (uVar9 + 1 < 0x60) {
    *(char *)((long)&local_f8 + uVar9) = cVar15;
    *(undefined1 *)((long)&local_f8 + uVar9 + 1) = 0;
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (*(char *)((long)&local_f8 + uVar9) != '\0');
  local_60 = pbVar21;
  if (uVar18 < 0x60) {
    *(undefined1 *)((long)&local_f8 + uVar9) = 0x2e;
    uVar9 = uVar18;
  }
  *(undefined1 *)((long)&local_f8 + uVar9) = 0;
  bVar8 = param_2[2];
  if (bVar8 == 0) {
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (*(char *)((long)&local_f8 + uVar9) != '\0');
    if (uVar9 + 1 < 0x60) {
      *(undefined2 *)((long)&local_f8 + uVar9) = 0x30;
    }
  }
  else {
    uVar9 = (ulong)(uint)bVar8;
    uVar18 = 0xffffffffffffffff;
    do {
      uVar7 = uVar18;
      uVar20 = (uint)uVar9;
      *(byte *)((long)&local_4c + uVar7 + 1) = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      uVar18 = uVar7 + 1;
      if (8 < uVar18) break;
      uVar9 = uVar9 / 10;
    } while (9 < uVar20);
    if ((uVar18 & 1) == 0) {
      uVar9 = 0;
      do {
        uVar17 = uVar9;
        uVar9 = uVar17 + 1;
      } while (*(char *)((long)&local_f8 + uVar17) != '\0');
      uVar9 = uVar18;
      if (uVar17 + 1 < 0x60) {
        *(undefined1 *)((long)&local_f8 + uVar17) = *(undefined1 *)((long)&local_4c + uVar7 + 1);
        *(undefined1 *)((long)&local_f8 + uVar17 + 1) = 0;
      }
    }
    else {
      uVar9 = uVar7 + 2;
    }
    while (uVar18 != 0) {
      uVar18 = 0;
      do {
        uVar7 = uVar18;
        uVar18 = uVar7 + 1;
      } while (*(char *)((long)&local_f8 + uVar7) != '\0');
      if (uVar7 + 1 < 0x60) {
        *(undefined1 *)((long)&local_f8 + uVar7) = *(undefined1 *)((long)&local_50 + uVar9 + 3);
        *(undefined1 *)((long)&local_f8 + uVar7 + 1) = 0;
      }
      lVar6 = uVar9 + 2;
      uVar9 = uVar9 - 2;
      uVar18 = 0;
      do {
        uVar7 = uVar18;
        uVar18 = uVar7 + 1;
      } while (*(char *)((long)&local_f8 + uVar7) != '\0');
      uVar18 = uVar9;
      if (uVar7 + 1 < 0x60) {
        *(undefined1 *)((long)&local_f8 + uVar7) = *(undefined1 *)((long)&local_50 + lVar6);
        *(undefined1 *)((long)&local_f8 + uVar7 + 1) = 0;
      }
    }
  }
  PF_PART1(local_4f8, 0) = 0;
  uVar18 = 0xffffffffffffffff;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x402] != '\0');
  if (uVar9 + 2 < 0x400) {
    *(undefined1 *)((long)&local_4f8 + uVar18) = 0x70;
    bVar3 = uVar18 != 0x3fe;
    uVar18 = uVar9 + 2;
    if (bVar3) {
      uVar18 = uVar9 + 3;
      acStack_8f9[uVar9 + 0x403] = 'c';
      if (uVar18 < 0x3ff) {
        uVar18 = uVar9 + 4;
        acStack_8f9[uVar9 + 0x404] = 'i';
        if (uVar18 < 0x3ff) {
          local_4f0[uVar9 - 4] = 0x3d;
          uVar18 = uVar9 + 5;
        }
      }
    }
  }
  acStack_8f9[uVar18 + 0x401] = '\0';
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = cVar13;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar18 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = ':';
    uVar9 = uVar18;
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = bVar14;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar18 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = '.';
    uVar9 = uVar18;
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  pbVar21 = local_60;
  if (bVar8 == 0) {
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (acStack_8f9[uVar9 + 0x401] != '\0');
    if (uVar9 + 1 < 0x400) {
      (acStack_8f9 + uVar9 + 0x401)[0] = '0';
      (acStack_8f9 + uVar9 + 0x401)[1] = '\0';
    }
  }
  else {
    uVar18 = 0xffffffffffffffff;
    uVar20 = (uint)bVar8;
    do {
      uVar9 = uVar18;
      *(byte *)((long)&local_4c + uVar9 + 1) = (byte)(uVar20 % 10) | 0x30;
      uVar18 = uVar9 + 1;
      if (8 < uVar18) break;
      bVar3 = 9 < uVar20;
      uVar20 = uVar20 / 10;
    } while (bVar3);
    if ((uVar18 & 1) == 0) {
      uVar7 = 0;
      do {
        uVar17 = uVar7;
        uVar7 = uVar17 + 1;
      } while (acStack_8f9[uVar17 + 0x401] != '\0');
      uVar7 = uVar18;
      if (uVar17 + 1 < 0x400) {
        acStack_8f9[uVar17 + 0x401] = *(char *)((long)&local_4c + uVar9 + 1);
        acStack_8f9[uVar17 + 0x402] = '\0';
      }
    }
    else {
      uVar7 = uVar9 + 2;
    }
    while (uVar18 != 0) {
      uVar18 = 0;
      do {
        uVar9 = uVar18;
        uVar18 = uVar9 + 1;
      } while (acStack_8f9[uVar9 + 0x401] != '\0');
      if (uVar9 + 1 < 0x400) {
        acStack_8f9[uVar9 + 0x401] = *(char *)((long)&local_50 + uVar7 + 3);
        acStack_8f9[uVar9 + 0x402] = '\0';
      }
      lVar6 = uVar7 + 2;
      uVar7 = uVar7 - 2;
      uVar18 = 0;
      do {
        uVar9 = uVar18;
        uVar18 = uVar9 + 1;
      } while (acStack_8f9[uVar9 + 0x401] != '\0');
      uVar18 = uVar7;
      if (uVar9 + 1 < 0x400) {
        acStack_8f9[uVar9 + 0x401] = *(char *)((long)&local_50 + lVar6);
        acStack_8f9[uVar9 + 0x402] = '\0';
      }
    }
  }
  uVar18 = 0xffffffffffffffff;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x402] != '\0');
  if (uVar9 + 2 < 0x400) {
    acStack_8f9[uVar9 + 0x402] = ' ';
    bVar3 = uVar18 != 0x3fe;
    uVar18 = uVar9 + 2;
    if (bVar3) {
      uVar18 = uVar9 + 3;
      acStack_8f9[uVar9 + 0x403] = 'v';
      if (uVar18 < 0x3ff) {
        uVar18 = uVar9 + 4;
        acStack_8f9[uVar9 + 0x404] = 'e';
        if (uVar18 < 0x3ff) {
          uVar18 = uVar9 + 5;
          local_4f0[uVar9 - 4] = 0x6e;
          if (uVar18 < 0x3ff) {
            uVar18 = uVar9 + 6;
            *(undefined1 *)((long)&local_4f8 + uVar9 + 5) = 100;
            if (uVar18 < 0x3ff) {
              uVar18 = uVar9 + 7;
              local_4f0[uVar9 - 2] = 0x6f;
              if (uVar18 < 0x3ff) {
                uVar18 = uVar9 + 8;
                local_4f0[uVar9 - 1] = 0x72;
                if (uVar18 < 0x3ff) {
                  local_4f0[uVar9] = 0x3d;
                  uVar18 = uVar9 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8f9[uVar18 + 0x401] = '\0';
  uVar1 = *(ushort *)(param_2 + 4);
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    bVar8 = (byte)(uVar1 >> 8);
    bVar4 = (bVar8 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar4 = bVar8 >> 4 | 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar10 = uVar1 >> 8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = (char)uVar10;
    cVar15 = cVar13 + '7';
    if (uVar10 < 10) {
      cVar15 = cVar13 + '0';
    }
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar10 = uVar1 >> 4 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = (char)uVar10;
    cVar15 = cVar13 + '7';
    if (uVar10 < 10) {
      cVar15 = cVar13 + '0';
    }
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = (char)(uVar1 & 0xf);
    cVar15 = cVar13 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar15 = cVar13 + '0';
    }
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0xffffffffffffffff;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x402] != '\0');
  if (uVar9 + 2 < 0x400) {
    acStack_8f9[uVar9 + 0x402] = ' ';
    bVar3 = uVar18 != 0x3fe;
    uVar18 = uVar9 + 2;
    if (bVar3) {
      uVar18 = uVar9 + 3;
      acStack_8f9[uVar9 + 0x403] = 'd';
      if (uVar18 < 0x3ff) {
        uVar18 = uVar9 + 4;
        acStack_8f9[uVar9 + 0x404] = 'e';
        if (uVar18 < 0x3ff) {
          uVar18 = uVar9 + 5;
          local_4f0[uVar9 - 4] = 0x76;
          if (uVar18 < 0x3ff) {
            uVar18 = uVar9 + 6;
            *(undefined1 *)((long)&local_4f8 + uVar9 + 5) = 0x69;
            if (uVar18 < 0x3ff) {
              uVar18 = uVar9 + 7;
              local_4f0[uVar9 - 2] = 99;
              if (uVar18 < 0x3ff) {
                uVar18 = uVar9 + 8;
                local_4f0[uVar9 - 1] = 0x65;
                if (uVar18 < 0x3ff) {
                  local_4f0[uVar9] = 0x3d;
                  uVar18 = uVar9 + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  acStack_8f9[uVar18 + 0x401] = '\0';
  uVar1 = *(ushort *)(param_2 + 6);
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    bVar8 = (byte)(uVar1 >> 8);
    bVar4 = (bVar8 >> 4) + 0x37;
    if (uVar1 < 0xa000) {
      bVar4 = bVar8 >> 4 | 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar10 = uVar1 >> 8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = (char)uVar10;
    cVar15 = cVar13 + '7';
    if (uVar10 < 10) {
      cVar15 = cVar13 + '0';
    }
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar10 = uVar1 >> 4 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = (char)uVar10;
    cVar15 = cVar13 + '7';
    if (uVar10 < 10) {
      cVar15 = cVar13 + '0';
    }
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = (char)(uVar1 & 0xf);
    cVar15 = cVar13 + '7';
    if ((uVar1 & 0xf) < 10) {
      cVar15 = cVar13 + '0';
    }
    acStack_8f9[uVar9 + 0x401] = cVar15;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0xffffffffffffffff;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x402] != '\0');
  if (uVar9 + 2 < 0x400) {
    acStack_8f9[uVar9 + 0x402] = ' ';
    bVar3 = uVar18 != 0x3fe;
    uVar18 = uVar9 + 2;
    if (bVar3) {
      uVar18 = uVar9 + 3;
      acStack_8f9[uVar9 + 0x403] = 'c';
      if (uVar18 < 0x3ff) {
        uVar18 = uVar9 + 4;
        acStack_8f9[uVar9 + 0x404] = 'l';
        if (uVar18 < 0x3ff) {
          uVar18 = uVar9 + 5;
          *(undefined1 *)((long)&local_4f8 + uVar9 + 4) = 0x61;
          if (uVar18 < 0x3ff) {
            uVar18 = uVar9 + 6;
            local_4f0[uVar9 - 3] = 0x73;
            if (uVar18 < 0x3ff) {
              uVar18 = uVar9 + 7;
              local_4f0[uVar9 - 2] = 0x73;
              if (uVar18 < 0x3ff) {
                local_4f0[uVar9 - 1] = 0x3d;
                uVar18 = uVar9 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8f9[uVar18 + 0x401] = '\0';
  bVar8 = *pbVar21;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    bVar4 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar4 = bVar8 >> 4 | 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  bVar8 = bVar8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar13 = bVar8 + 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = cVar13;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar18 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = '.';
    uVar9 = uVar18;
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  bVar8 = param_2[9];
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    bVar4 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar4 = bVar8 >> 4 | 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  bVar8 = bVar8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar13 = bVar8 + 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = cVar13;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar18 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = '.';
    uVar9 = uVar18;
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  bVar8 = param_2[10];
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    bVar4 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar4 = bVar8 >> 4 | 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  bVar8 = bVar8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar13 = bVar8 + 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = cVar13;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = ' ';
    pcVar12 = str_1000ec1e;
    do {
      pcVar12 = pcVar12 + 1;
      acStack_8f9[uVar9 + 0x401] = cVar13;
      uVar9 = uVar9 + 1;
      cVar13 = *pcVar12;
      if (cVar13 == '\0') break;
    } while (uVar9 < 0x3ff);
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  bVar8 = param_2[0xb];
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    bVar4 = (bVar8 >> 4) + 0x37;
    if (bVar8 < 0xa0) {
      bVar4 = bVar8 >> 4 | 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = bVar4;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  bVar8 = bVar8 & 0xf;
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar9 + 1 < 0x400) {
    cVar13 = bVar8 + 0x37;
    if (bVar8 < 10) {
      cVar13 = bVar8 + 0x30;
    }
    acStack_8f9[uVar9 + 0x401] = cVar13;
    acStack_8f9[uVar9 + 0x402] = '\0';
  }
  uVar20 = *(uint *)(param_2 + 0x10);
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar18 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = ' ';
    uVar9 = uVar18;
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  uVar18 = 0xffffffffffffffff;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x402] != '\0');
  if (uVar9 + 2 < 0x400) {
    acStack_8f9[uVar9 + 0x402] = 'c';
    bVar3 = uVar18 != 0x3fe;
    uVar18 = uVar9 + 2;
    if (bVar3) {
      uVar18 = uVar9 + 3;
      acStack_8f9[uVar9 + 0x403] = 'o';
      if (uVar18 < 0x3ff) {
        uVar18 = uVar9 + 4;
        acStack_8f9[uVar9 + 0x404] = 'm';
        if (uVar18 < 0x3ff) {
          uVar18 = uVar9 + 5;
          *(undefined1 *)((long)&local_4f8 + uVar9 + 4) = 0x6d;
          if (uVar18 < 0x3ff) {
            uVar18 = uVar9 + 6;
            local_4f0[uVar9 - 3] = 0x61;
            if (uVar18 < 0x3ff) {
              uVar18 = uVar9 + 7;
              local_4f0[uVar9 - 2] = 0x6e;
              if (uVar18 < 0x3ff) {
                local_4f0[uVar9 - 1] = 100;
                uVar18 = uVar9 + 8;
              }
            }
          }
        }
      }
    }
  }
  acStack_8f9[uVar18 + 0x401] = '\0';
  uVar18 = 0;
  do {
    uVar9 = uVar18;
    uVar18 = uVar9 + 1;
  } while (acStack_8f9[uVar9 + 0x401] != '\0');
  if (uVar18 < 0x400) {
    acStack_8f9[uVar9 + 0x401] = '=';
    uVar9 = uVar18;
  }
  acStack_8f9[uVar9 + 0x401] = '\0';
  iVar11 = 8;
  do {
    uVar16 = uVar20 >> ((char)iVar11 * '\x04' - 4U & 0x1f) & 0xf;
    cVar13 = (char)uVar16;
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (acStack_8f9[uVar9 + 0x401] != '\0');
    if (uVar9 + 1 < 0x400) {
      cVar15 = cVar13 + '7';
      if (uVar16 < 10) {
        cVar15 = cVar13 + '0';
      }
      acStack_8f9[uVar9 + 0x401] = cVar15;
      acStack_8f9[uVar9 + 0x402] = '\0';
    }
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  uVar18 = 0;
  do {
    uVar20 = *(uint *)(param_2 + uVar18 * 4 + 0x14);
    if (uVar20 != 0) {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar7 = uVar9;
        uVar9 = uVar7 + 1;
      } while (acStack_8f9[uVar7 + 0x402] != '\0');
      if (uVar7 + 2 < 0x400) {
        acStack_8f9[uVar7 + 0x402] = ' ';
        bVar3 = uVar9 != 0x3fe;
        uVar9 = uVar7 + 2;
        if (bVar3) {
          uVar9 = uVar7 + 3;
          acStack_8f9[uVar7 + 0x403] = 'b';
          if (uVar9 < 0x3ff) {
            uVar9 = uVar7 + 4;
            acStack_8f9[uVar7 + 0x404] = 'a';
            if (uVar9 < 0x3ff) {
              local_4f0[uVar7 - 4] = 0x72;
              uVar9 = uVar7 + 5;
            }
          }
        }
      }
      acStack_8f9[uVar9 + 0x401] = '\0';
      if (uVar18 == 0) {
        uVar9 = 0;
        do {
          uVar7 = uVar9;
          uVar9 = uVar7 + 1;
        } while (acStack_8f9[uVar7 + 0x401] != '\0');
        if (uVar7 + 1 < 0x400) {
          (acStack_8f9 + uVar7 + 0x401)[0] = '0';
          (acStack_8f9 + uVar7 + 0x401)[1] = '\0';
        }
      }
      else {
        uVar7 = 0xffffffffffffffff;
        uVar9 = uVar18;
        do {
          uVar17 = uVar7;
          uVar7 = uVar9 & 0xffffffff;
          uVar16 = (uint)uVar9;
          uVar9 = uVar7 / 10;
          *(byte *)((long)&local_4c + uVar17 + 1) = (char)uVar7 + (char)uVar9 * -10 | 0x30;
          uVar7 = uVar17 + 1;
          if (8 < uVar7) break;
        } while (9 < uVar16);
        if ((uVar7 & 1) == 0) {
          uVar9 = 0;
          do {
            uVar19 = uVar9;
            uVar9 = uVar19 + 1;
          } while (acStack_8f9[uVar19 + 0x401] != '\0');
          uVar9 = uVar7;
          if (uVar19 + 1 < 0x400) {
            acStack_8f9[uVar19 + 0x401] = *(char *)((long)&local_4c + uVar17 + 1);
            acStack_8f9[uVar19 + 0x402] = '\0';
          }
        }
        else {
          uVar9 = uVar17 + 2;
        }
        while (uVar7 != 0) {
          uVar7 = 0;
          do {
            uVar17 = uVar7;
            uVar7 = uVar17 + 1;
          } while (acStack_8f9[uVar17 + 0x401] != '\0');
          if (uVar17 + 1 < 0x400) {
            acStack_8f9[uVar17 + 0x401] = *(char *)((long)&local_50 + uVar9 + 3);
            acStack_8f9[uVar17 + 0x402] = '\0';
          }
          lVar6 = uVar9 + 2;
          uVar9 = uVar9 - 2;
          uVar7 = 0;
          do {
            uVar17 = uVar7;
            uVar7 = uVar17 + 1;
          } while (acStack_8f9[uVar17 + 0x401] != '\0');
          uVar7 = uVar9;
          if (uVar17 + 1 < 0x400) {
            acStack_8f9[uVar17 + 0x401] = *(char *)((long)&local_50 + lVar6);
            acStack_8f9[uVar17 + 0x402] = '\0';
          }
        }
      }
      uVar9 = 0;
      do {
        uVar7 = uVar9;
        uVar9 = uVar7 + 1;
      } while (acStack_8f9[uVar7 + 0x401] != '\0');
      if (uVar9 < 0x400) {
        acStack_8f9[uVar7 + 0x401] = '=';
        uVar7 = uVar9;
      }
      acStack_8f9[uVar7 + 0x401] = '\0';
      iVar11 = 8;
      do {
        uVar16 = uVar20 >> ((char)iVar11 * '\x04' - 4U & 0x1f) & 0xf;
        cVar13 = (char)uVar16;
        uVar9 = 0;
        do {
          uVar7 = uVar9;
          uVar9 = uVar7 + 1;
        } while (acStack_8f9[uVar7 + 0x401] != '\0');
        if (uVar7 + 1 < 0x400) {
          cVar15 = cVar13 + '7';
          if (uVar16 < 10) {
            cVar15 = cVar13 + '0';
          }
          acStack_8f9[uVar7 + 0x401] = cVar15;
          acStack_8f9[uVar7 + 0x402] = '\0';
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 != 6);
  if (acStack_8f9[1] != '\0') {
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (acStack_8f9[uVar9 + 0x401] != '\0');
    if (uVar18 < 0x400) {
      acStack_8f9[uVar9 + 0x401] = ' ';
      uVar9 = uVar18;
    }
    acStack_8f9[uVar9 + 0x401] = '\0';
    uVar18 = 0;
    do {
      uVar9 = uVar18;
      uVar18 = uVar9 + 1;
    } while (acStack_8f9[uVar9 + 0x401] != '\0');
    if (uVar9 + 1 < 0x400) {
      pcVar12 = acStack_8f9 + 2;
      cVar13 = acStack_8f9[1];
      do {
        acStack_8f9[uVar9 + 0x401] = cVar13;
        uVar9 = uVar9 + 1;
        cVar13 = *pcVar12;
        if (cVar13 == '\0') break;
        pcVar12 = pcVar12 + 1;
      } while (uVar9 < 0x3ff);
    }
    acStack_8f9[uVar9 + 0x401] = '\0';
  }
  if ((param_1 != (int *)0x0) && ((code *)(ulong)(uint)param_1[3] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[3])(&local_f8,local_38,&local_4f8);
  }
  return;
}

#undef DAT_10010000
#undef DAT_10010010
#undef DAT_10010011
#undef DAT_10010012
#undef DAT_10010013
#undef DAT_10010014
#undef DAT_10010015
#undef DAT_10010016
#undef DAT_10010017
#undef DAT_10010018
#undef DAT_10010020
#undef DAT_10010021
#undef DAT_10010022
#undef DAT_10010023
#undef DAT_10010024
#undef DAT_10010025
#undef DAT_10010026
#undef DAT_10010027
#undef DAT_10010028
#undef DAT_1001002c
#undef DAT_1001002e
#undef DAT_1001002f
#undef DAT_10010030
#undef DAT_10010034
#undef DAT_10010036
#undef DAT_10010037
#undef DAT_10010040
#undef DAT_10010041
#undef DAT_10010042
#undef DAT_10010043
#undef DAT_10010044
#undef DAT_10010045
#undef DAT_10010046
#undef DAT_10010047
#undef DAT_10010048
#undef DAT_10010049
#undef DAT_1001004a
#undef DAT_1001004b
#undef DAT_1001004c
#undef DAT_1001004d
#undef DAT_1001004e
#undef DAT_1001004f
#undef DAT_10010050
#undef DAT_10010051
#undef DAT_10010052
#undef DAT_10010053
#undef DAT_10010060
#undef DAT_10010064
#undef DAT_10010065
#undef DAT_10010066
#undef DAT_10010067
#undef DAT_10010068
#undef DAT_10010069
#undef DAT_1001006a
#undef DAT_1001006b
#undef DAT_1001006c
#undef DAT_1001006d
#undef DAT_1001006e
#undef DAT_1001006f
#undef DAT_10010070
#undef DAT_10010071
#undef DAT_10010072
#undef DAT_10010073
#undef DAT_10010074
#undef DAT_10010075
#undef DAT_10010076
#undef DAT_10010077
#undef DAT_10010080
#undef DAT_10010081
#undef DAT_10010082
#undef DAT_10010083
#undef DAT_10010084
#undef DAT_10010085
#undef DAT_10010086
#undef DAT_10010087
#undef DAT_10010088
#undef DAT_10010089
#undef DAT_1001008a
#undef DAT_1001008b
#undef _DAT_10010018
#undef _DAT_10010028
#undef _DAT_1001002c
#undef _DAT_10010030
#undef _DAT_10010034
#undef _DAT_10010060
#undef str_1000e75a
#undef str_1000e767
#undef str_1000e77d
#undef str_1000e791
#undef str_1000e7a7
#undef str_1000eb4c
#undef str_1000eb6a
#undef str_1000eb86
#undef str_1000eb9c
#undef str_1000ebb6
#undef str_1000ebc6
#undef str_1000ebd3
#undef str_1000ebe3
#undef str_1000ebed
#undef str_1000ebf5
#undef str_1000ebfe
#undef str_1000ec06
#undef str_1000ec1e
#undef local_4f8
#undef local_4f0
#undef local_4ac
#undef local_4a4
#undef local_498
#undef local_f8
#undef local_8c
#undef local_88
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
#undef local_54
#undef local_50
#undef local_4c
#undef local_40
#undef local_3c
#undef local_38
#undef acStack_8f9
#undef cStack_4f9
#undef cStack_f9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ae0
 */

void recovered_10005ae0(long param_1,ulong param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;

  if (param_1 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      uVar4 = uVar1 + 1;
    } while (*(char *)(param_1 + uVar1) != '\0');
    if (param_3 != (char *)0x0) {
      cVar3 = *param_3;
      if (uVar1 + 1 < param_2 && cVar3 != '\0') {
        do {
          param_3 = param_3 + 1;
          *(char *)(param_1 + uVar1) = cVar3;
          cVar3 = *param_3;
          uVar4 = uVar1 + 1;
          if (cVar3 == '\0') break;
          uVar2 = uVar1 + 2;
          uVar1 = uVar4;
        } while (uVar2 < param_2);
      }
      else {
        uVar4 = uVar1;
      }
      *(undefined1 *)(param_1 + uVar4) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b50
 */

void recovered_10005b50(long param_1,char *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;

  if (param_1 != 0) {
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar7 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar7) = 0x20;
      uVar3 = uVar7;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (param_2 != (char *)0x0) {
      cVar4 = *param_2;
      if (uVar3 + 1 < 0x400 && cVar4 != '\0') {
        do {
          param_2 = param_2 + 1;
          *(char *)(param_1 + uVar3) = cVar4;
          uVar3 = uVar3 + 1;
          cVar4 = *param_2;
          if (cVar4 == '\0') break;
        } while (uVar3 < 0x3ff);
      }
      *(undefined1 *)(param_1 + uVar3) = 0;
    }
    uVar7 = 0;
    do {
      uVar3 = uVar7;
      uVar7 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar3) != '\0');
    if (uVar7 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar7) = 0x3d;
      uVar3 = uVar7;
    }
    *(undefined1 *)(param_1 + uVar3) = 0;
  }
  iVar2 = 8;
  do {
    uVar6 = param_3 >> ((char)iVar2 * '\x04' - 4U & 0x1f) & 0xf;
    cVar4 = (char)uVar6;
    cVar5 = cVar4 + '7';
    if (uVar6 < 10) {
      cVar5 = cVar4 + '0';
    }
    if (param_1 != 0) {
      uVar7 = 0;
      do {
        pcVar1 = (char *)(param_1 + uVar7);
        uVar7 = uVar7 + 1;
      } while (*pcVar1 != '\0');
      if (uVar7 < 0x400) {
        *(char *)(param_1 + -1 + uVar7) = cVar5;
        *(undefined1 *)(param_1 + uVar7) = 0;
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


#define local_50 (*(undefined4 *)(frame + 16))
#define local_4c (*(undefined4 *)(frame + 20))
#define local_48 (*(int * *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_34 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005c60
 */

undefined8
recovered_10005c60(int *param_1,uint param_2,undefined1 param_3,undefined1 param_4,
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

#undef str_1000e7b5
#define str_1000e7b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_1000e7c5
#define str_1000e7c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22dU)))
#undef str_1000e7d9
#define str_1000e7d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x241U)))
#undef str_1000e7f1
#define str_1000e7f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x259U)))
#undef str_1000e809
#define str_1000e809 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x271U)))
#undef str_1000e822
#define str_1000e822 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28aU)))
#undef str_1000e833
#define str_1000e833 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#undef str_1000e843
#define str_1000e843 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2abU)))
#undef str_1000e852
#define str_1000e852 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2baU)))
#undef str_1000e86e
#define str_1000e86e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2d6U)))
#undef str_1000e879
#define str_1000e879 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e1U)))
#undef str_1000e889
#define str_1000e889 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f1U)))
#undef str_1000e899
#define str_1000e899 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x301U)))
#undef str_1000e8a6
#define str_1000e8a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30eU)))
#undef str_1000e8bc
#define str_1000e8bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x324U)))
#undef str_1000e8d2
#define str_1000e8d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_1000e8e8
#define str_1000e8e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x350U)))
#undef str_1000e8fe
#define str_1000e8fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x366U)))
#undef str_1000e917
#define str_1000e917 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37fU)))
#undef str_1000e92f
#define str_1000e92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x397U)))
#undef str_1000e93c
#define str_1000e93c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a4U)))
#undef str_1000e94d
#define str_1000e94d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b5U)))
#undef str_1000e961
#define str_1000e961 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c9U)))
#undef str_1000e971
#define str_1000e971 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d9U)))
#undef str_1000e988
#define str_1000e988 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f0U)))
#undef str_1000e99b
#define str_1000e99b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x403U)))
#undef str_1000e9a5
#define str_1000e9a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40dU)))
#undef str_1000e9b8
#define str_1000e9b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000e9cf
#define str_1000e9cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x437U)))
#undef str_1000e9db
#define str_1000e9db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x443U)))
#undef str_1000e9e7
#define str_1000e9e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44fU)))
#undef str_1000e9f4
#define str_1000e9f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45cU)))
#undef str_1000e9fe
#define str_1000e9fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x466U)))
#undef str_1000ea12
#define str_1000ea12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x47aU)))
#undef str_1000ea21
#define str_1000ea21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x489U)))
#undef str_1000ea34
#define str_1000ea34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49cU)))
#undef str_1000ea46
#define str_1000ea46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4aeU)))
#undef str_1000ea5c
#define str_1000ea5c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c4U)))
#undef str_1000ea66
#define str_1000ea66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ceU)))
#undef str_1000ea72
#define str_1000ea72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4daU)))
#undef str_1000ea87
#define str_1000ea87 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4efU)))
#undef str_1000ea93
#define str_1000ea93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4fbU)))
#undef str_1000ea9e
#define str_1000ea9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_1000eaa8
#define str_1000eaa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x510U)))
#undef str_1000eabd
#define str_1000eabd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x525U)))
#undef str_1000eace
#define str_1000eace (*(char (*)[1])(((uintptr_t)pf_module_state + 0x536U)))
#undef str_1000eada
#define str_1000eada (*(char (*)[1])(((uintptr_t)pf_module_state + 0x542U)))
#undef str_1000eae6
#define str_1000eae6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x54eU)))
#undef str_1000eaf2
#define str_1000eaf2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55aU)))
#undef str_1000eb01
#define str_1000eb01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x569U)))
#undef str_1000eb0b
#define str_1000eb0b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
#undef str_1000eb19
#define str_1000eb19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x581U)))
#undef str_1000eb2a
#define str_1000eb2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x592U)))
#undef str_1000eb36
#define str_1000eb36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x59eU)))
#undef str_1000eb42
#define str_1000eb42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5aaU)))
#define bStack_e1 (*(byte *)(frame + 31))
#define local_e0 (*(undefined8 *)(frame + 32))
#define local_d0 (*(ulong *)(frame + 48))
#define local_c8 (*(ulong *)(frame + 56))
#define local_c0 (*(uint *)(frame + 64))
#define local_bc (*(uint *)(frame + 68))
#define local_b0 (*(uint *)(frame + 80))
#define local_ac (*(uint *)(frame + 84))
#define local_a8 (*(uint *)(frame + 88))
#define local_a4 (*(uint *)(frame + 92))
#define local_a0 (*(uint *)(frame + 96))
#define local_9c (*(uint *)(frame + 100))
#define local_98 (*(uint *)(frame + 104))
#define local_94 (*(uint *)(frame + 108))
#define local_90 (*(uint *)(frame + 112))
#define local_8c (*(uint *)(frame + 116))
#define local_88 (*(uint *)(frame + 120))
#define local_80 (*(ulong *)(frame + 128))
#define local_78 (*(uint *)(frame + 136))
#define local_70 (*(int * *)(frame + 144))
#define local_68 (*(undefined1 * *)(frame + 152))
#define local_5c (*(uint *)(frame + 164))
#define local_58 (*(uint *)(frame + 168))
#define local_54 (*(uint *)(frame + 172))
#define local_50 (*(uint *)(frame + 176))
#define local_4c (*(undefined4 *)(frame + 180))
#define local_48 (*(undefined8 *)(frame + 184))
#define local_38 (*(uint *)(frame + 200))
#define local_34 (*(uint *)(frame + 204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ee0
 */

void recovered_10005ee0(int *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined7 extraout_var = 0;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  char cVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int *piVar18;
  undefined8 in_R11;
  undefined7 uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;

  uVar19 = (undefined7)((ulong)in_R11 >> 8);
  if (param_2 == (undefined1 *)0x0) {
    uVar9 = CONCAT71(uVar19,param_1 == (int *)0x0);
    bVar24 = true;
joined_r0x10006164:
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000e7d9;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
LAB_100061ac:
    local_34 = (uint)uVar9;
    uVar3 = 0;
    uVar21 = uVar3;
    if (!bVar24) {
LAB_1000646f:
      if ((param_2 == (undefined1 *)0x0) || (*(short *)(param_2 + 4) != 0x1af4)) goto LAB_1000aa71;
      uVar1 = *(ushort *)(param_2 + 6);
      uVar3 = uVar1 & 0xffffffc0;
      if (uVar3 == 0x1000) {
        uVar3 = uVar1 - 0x1000;
      }
      else {
        if (uVar3 != 0x1040) goto LAB_1000aa71;
        uVar3 = uVar1 - 0x1040;
      }
      if (uVar3 == 0xffffffff) goto LAB_1000aa71;
      if (param_3 == 0) {
        if (uVar3 != 0) goto LAB_100065f9;
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + 1 + uVar11) != '\0');
        if (uVar11 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar9) = 0x76;
          uVar6 = uVar11 + 2;
          if (uVar9 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar9) = 0x69;
            uVar6 = uVar11 + 3;
            if (uVar11 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar9) = 0x72;
              uVar6 = uVar11 + 4;
              if (uVar11 + 4 < 0x3ff) {
                *(undefined1 *)(param_3 + 3 + uVar9) = 0x74;
                uVar6 = uVar11 + 5;
                if (uVar11 + 5 < 0x3ff) {
                  *(undefined1 *)(uVar11 + 5 + param_3) = 0x69;
                  uVar6 = uVar11 + 6;
                  if (uVar11 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar9) = 0x6f;
                    uVar6 = uVar11 + 7;
                    if (uVar11 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar9) = 0x49;
                      uVar6 = uVar11 + 8;
                      if (uVar11 + 8 < 0x3ff) {
                        *(undefined1 *)(param_3 + 7 + uVar9) = 100;
                        uVar9 = uVar11 + 9;
                        goto LAB_100065be;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_100065be:
          uVar6 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        if (uVar3 == 0) {
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
          }
        }
        else {
LAB_100065f9:
          uVar9 = 0;
          do {
            *(byte *)((long)&local_e0 + uVar9) = (byte)(uVar3 % 10) | 0x30;
            uVar11 = uVar9 + 1;
            if (8 < uVar9) break;
            bVar24 = 9 < uVar3;
            uVar9 = uVar11;
            uVar3 = uVar3 / 10;
          } while (bVar24);
          do {
            if (param_3 != 0) {
              uVar9 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar9);
                uVar9 = uVar9 + 1;
              } while (*pcVar8 != '\0');
              if (uVar9 < 0x400) {
                *(byte *)(param_3 + -1 + uVar9) = (&bStack_e1)[uVar11];
                *(undefined1 *)(param_3 + uVar9) = 0;
              }
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      bVar24 = recovered_1000c740(param_1,param_2,&local_e0);
      uVar3 = local_34;
      if ((int)CONCAT71(extraout_var,bVar24) == 0) {
        local_50 = uVar21;
        if (local_ac != 0) {
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar8 = str_1000e86e;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar11) = cVar12;
                uVar11 = uVar11 + 1;
                cVar12 = *pcVar8;
                if (cVar12 == '\0') break;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          uVar9 = 0;
          do {
            *(byte *)((long)&local_48 + uVar9) = (byte)(local_ac % 10) | 0x30;
            uVar11 = uVar9 + 1;
            if (8 < uVar9) break;
            bVar24 = 9 < local_ac;
            uVar9 = uVar11;
            local_ac = local_ac / 10;
          } while (bVar24);
          do {
            if (param_3 != 0) {
              uVar9 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar9);
                uVar9 = uVar9 + 1;
              } while (*pcVar8 != '\0');
              if (uVar9 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar9) =
                     *(undefined1 *)((long)&local_4c + uVar11 + 3);
                *(undefined1 *)(param_3 + uVar9) = 0;
              }
            }
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (*(ushort *)(param_2 + 6) < 0x1040) {
          bVar24 = true;
          uVar9 = 0;
          local_70 = param_1;
LAB_100083a9:
          local_48 = local_48 & 0xffffffff00000000;
          local_38 = 0;
          if ((*(uint *)(param_2 + uVar9 * 4 + 0x14) & 1) == 0) goto LAB_10008390;
          if ((char)uVar3 != '\0') goto LAB_10008390;
          if (*param_1 != 0x54584b57) goto LAB_10008390;
          if ((uint)param_1[2] < 0x58) goto LAB_10008390;
          if ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0) goto LAB_10008390;
          uVar15 = *(uint *)(param_2 + uVar9 * 4 + 0x14) & 0xfffffffc;
          uVar14 = uVar15 + 0x12;
          local_54 = CONCAT31(PF_PART3(local_54, 1),bVar24);
          iVar22 = (*(code *)(ulong)(uint)param_1[0x15])((short)uVar14,1,&local_48);
          piVar18 = local_70;
          uVar16 = local_54 & 0xff;
          param_1 = local_70;
          uVar3 = local_34;
          if (iVar22 == 0) goto LAB_10008390;
          if (param_3 == 0) {
            if (uVar9 == 0) goto LAB_1000b4f6;
            goto LAB_1000b34c;
          }
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000e879;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'l';
            pcVar8 = str_1000e9f4;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = ' ';
            pcVar8 = str_1000e9fe;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          if (uVar9 == 0) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
            }
LAB_1000b474:
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              cVar12 = 'v';
              pcVar8 = str_1000ea12;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar11) = cVar12;
                uVar11 = uVar11 + 1;
                cVar12 = *pcVar8;
                if (cVar12 == '\0') break;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
              uVar11 = uVar9;
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          else {
LAB_1000b34c:
            uVar11 = 0;
            do {
              uVar3 = (uint)uVar9;
              uVar5 = (uVar9 & 0xffffffff) / 10;
              *(byte *)((long)&local_e0 + uVar11) = (char)uVar9 + (char)uVar5 * -10 | 0x30;
              uVar6 = uVar11 + 1;
              if (8 < uVar11) break;
              uVar11 = uVar6;
              uVar9 = uVar5;
            } while (9 < uVar3);
            do {
              while (uVar9 = uVar6 - 1, param_3 != 0) {
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(byte *)(param_3 + -1 + uVar11) = (&bStack_e1)[uVar6];
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                uVar6 = uVar9;
                if (uVar9 == 0) goto LAB_1000b474;
              }
              uVar6 = uVar9;
            } while (uVar9 != 0);
          }
LAB_1000b4f6:
          uVar21 = local_50;
          iVar22 = 8;
LAB_1000b501:
          uVar3 = uVar15 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000b5ec;
            goto LAB_1000b501;
          }
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(char *)(param_3 + -1 + uVar9) = cVar7;
            *(undefined1 *)(param_3 + uVar9) = 0;
          }
          iVar22 = iVar22 + -1;
          if (iVar22 != 0) goto LAB_1000b501;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000ea21;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
LAB_1000b5ec:
          iVar22 = 8;
          do {
            uVar3 = (uint)local_48 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar3;
            cVar7 = cVar12 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 != 0) {
              uVar9 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar9);
                uVar9 = uVar9 + 1;
              } while (*pcVar8 != '\0');
              if (uVar9 < 0x400) {
                *(char *)(param_3 + -1 + uVar9) = cVar7;
                *(undefined1 *)(param_3 + uVar9) = 0;
              }
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          if (*piVar18 == 0x54584b57) {
            uVar3 = piVar18[2];
            if (uVar3 < 0x5c) {
LAB_1000b663:
              if (uVar3 < 0x58) goto LAB_1000c381;
            }
            else if ((code *)(ulong)(uint)piVar18[0x16] != (code *)0x0) {
              (*(code *)(ulong)(uint)piVar18[0x16])(uVar14 & 0xffff,1,0);
              uVar16 = local_54 & 0xff;
              if (*local_70 != 0x54584b57) goto LAB_1000c381;
              uVar3 = local_70[2];
              piVar18 = local_70;
              if (0x5b < uVar3) {
                if ((code *)(ulong)(uint)local_70[0x16] == (code *)0x0) goto LAB_1000b6d6;
                (*(code *)(ulong)(uint)local_70[0x16])(uVar14 & 0xffff,1,3);
                uVar16 = local_54 & 0xff;
                if (*local_70 != 0x54584b57) goto LAB_1000c381;
                uVar3 = local_70[2];
                piVar18 = local_70;
              }
              goto LAB_1000b663;
            }
LAB_1000b6d6:
            if ((code *)(ulong)(uint)piVar18[0x15] != (code *)0x0) {
              iVar22 = (*(code *)(ulong)(uint)piVar18[0x15])(uVar14 & 0xffff,1,&local_38);
              uVar16 = local_54 & 0xff;
              if (iVar22 != 0) {
                if (param_3 != 0) {
                  uVar9 = 0;
                  do {
                    uVar11 = uVar9;
                    uVar9 = uVar11 + 1;
                  } while (*(char *)(param_3 + uVar11) != '\0');
                  if (uVar9 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
                    uVar11 = uVar9;
                  }
                  *(undefined1 *)(param_3 + uVar11) = 0;
                  uVar9 = 0;
                  do {
                    uVar11 = uVar9;
                    uVar9 = uVar11 + 1;
                  } while (*(char *)(param_3 + uVar11) != '\0');
                  if (uVar11 + 1 < 0x400) {
                    cVar12 = 'v';
                    pcVar8 = str_1000ea34;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar11) = cVar12;
                      uVar11 = uVar11 + 1;
                      cVar12 = *pcVar8;
                      if (cVar12 == '\0') break;
                    } while (uVar11 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar11) = 0;
                  uVar9 = 0;
                  do {
                    uVar11 = uVar9;
                    uVar9 = uVar11 + 1;
                  } while (*(char *)(param_3 + uVar11) != '\0');
                  if (uVar9 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
                    uVar11 = uVar9;
                  }
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                iVar22 = 8;
                uVar16 = local_54 & 0xff;
                do {
                  uVar3 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar12 = (char)uVar3;
                  cVar7 = cVar12 + '7';
                  if (uVar3 < 10) {
                    cVar7 = cVar12 + '0';
                  }
                  if (param_3 != 0) {
                    uVar9 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar9);
                      uVar9 = uVar9 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar9 < 0x400) {
                      *(char *)(param_3 + -1 + uVar9) = cVar7;
                      *(undefined1 *)(param_3 + uVar9) = 0;
                    }
                  }
                  iVar22 = iVar22 + -1;
                  uVar21 = local_50;
                } while (iVar22 != 0);
              }
            }
          }
LAB_1000c381:
          if (param_3 != 0 && (uVar16 & 1) == 0) goto LAB_10008325;
          uVar21 = uVar16 & 1 | uVar21;
          goto LAB_1000aa71;
        }
LAB_10008316:
        uVar21 = local_50;
        if (param_3 != 0) {
LAB_10008325:
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = ' ';
            pcVar8 = str_1000e852;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        goto LAB_1000aa71;
      }
      recovered_1000cda0(param_1,&local_e0);
      if (param_3 == 0) {
        if (local_ac != 0) goto LAB_10006919;
LAB_100069a8:
        if (local_c0 == 0) goto LAB_10006c51;
      }
      else {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000e879;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0xffffffffffffffff;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + 1 + uVar11) != '\0');
        if (uVar11 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar9) = 0x6d;
          uVar6 = uVar11 + 2;
          if (uVar9 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar9) = 0x6f;
            uVar6 = uVar11 + 3;
            if (uVar11 + 3 < 0x3ff) {
              *(undefined1 *)(uVar11 + 3 + param_3) = 100;
              uVar6 = uVar11 + 4;
              if (uVar11 + 4 < 0x3ff) {
                *(undefined1 *)(param_3 + 3 + uVar9) = 0x65;
                uVar6 = uVar11 + 5;
                if (uVar11 + 5 < 0x3ff) {
                  *(undefined1 *)(param_3 + 4 + uVar9) = 0x72;
                  uVar6 = uVar11 + 6;
                  if (uVar11 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar9) = 0x6e;
                    uVar9 = uVar11 + 7;
                    goto LAB_10006845;
                  }
                }
              }
            }
          }
        }
        else {
LAB_10006845:
          uVar6 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000e86e;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        if (local_ac != 0) {
LAB_10006919:
          uVar9 = 0;
          do {
            *(byte *)((long)&local_48 + uVar9) = (char)local_ac + (char)(local_ac / 10) * -10 | 0x30
            ;
            uVar11 = uVar9 + 1;
            if (8 < uVar9) break;
            bVar24 = 9 < local_ac;
            uVar9 = uVar11;
            local_ac = local_ac / 10;
          } while (bVar24);
LAB_10006968:
          do {
            uVar9 = uVar11 - 1;
            if (param_3 != 0) {
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar6) =
                     *(undefined1 *)((long)&local_4c + uVar11 + 3);
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar11 = uVar9;
              if (uVar9 == 0) goto LAB_100069d9;
              goto LAB_10006968;
            }
            uVar11 = uVar9;
          } while (uVar9 != 0);
          goto LAB_100069a8;
        }
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
LAB_100069d9:
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000e889;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        if (local_c0 == 0) {
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
          }
LAB_10006b79:
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000e899;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          goto LAB_10006c51;
        }
      }
      uVar9 = 0;
      do {
        *(byte *)((long)&local_48 + uVar9) = (char)local_c0 + (char)(local_c0 / 10) * -10 | 0x30;
        uVar11 = uVar9 + 1;
        if (8 < uVar9) break;
        bVar24 = 9 < local_c0;
        uVar9 = uVar11;
        local_c0 = local_c0 / 10;
      } while (bVar24);
LAB_10006afc:
      do {
        uVar9 = uVar11 - 1;
        if (param_3 != 0) {
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar11 = uVar9;
          if (uVar9 == 0) goto LAB_10006b79;
          goto LAB_10006afc;
        }
        uVar11 = uVar9;
      } while (uVar9 != 0);
LAB_10006c51:
      iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
LAB_10006c68:
      do {
        uVar21 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar3 = (uint)(byte)((char)uVar21 + 0x37);
        if (uVar21 < 10) {
          uVar3 = uVar21 + 0x30;
        }
        PF_PART2(local_48, 0) = (ushort)(byte)local_48;
        if (param_3 == 0) goto LAB_10006c60;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_48 + 1);
          do {
            *(char *)(param_3 + uVar11) = (char)uVar3;
            uVar11 = uVar11 + 1;
            uVar3 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e8a6;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10006db1:
      iVar22 = 8;
LAB_10006dc4:
      uVar3 = local_a8 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10006ee1;
        goto LAB_10006dc4;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10006dc4;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e8bc;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10006ee1:
      iVar22 = 8;
LAB_10006ef4:
      uVar3 = local_a4 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10007011;
        goto LAB_10006ef4;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10006ef4;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e8d2;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10007011:
      iVar22 = 8;
LAB_10007024:
      uVar3 = local_a0 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10007141;
        goto LAB_10007024;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10007024;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e8e8;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10007141:
      iVar22 = 8;
LAB_10007154:
      uVar3 = local_9c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_10007271;
        goto LAB_10007154;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10007154;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e8fe;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10007271:
      iVar22 = 8;
LAB_10007284:
      uVar3 = local_98 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_100073a1;
        goto LAB_10007284;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_10007284;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e917;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
LAB_100073a1:
      iVar22 = 8;
LAB_100073b4:
      uVar3 = local_94 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar3;
      cVar7 = cVar12 + '7';
      if (uVar3 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 == 0) {
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto code_r0x10007404;
        goto LAB_100073b4;
      }
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(char *)(param_3 + -1 + uVar9) = cVar7;
        *(undefined1 *)(param_3 + uVar9) = 0;
      }
      iVar22 = iVar22 + -1;
      if (iVar22 != 0) goto LAB_100073b4;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e92f;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_90 == 0) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
LAB_100074d9:
        uVar9 = 0;
        do {
          *(byte *)((long)&local_48 + uVar9) = (char)local_90 + (char)(local_90 / 10) * -10 | 0x30;
          uVar11 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar24 = 9 < local_90;
          uVar9 = uVar11;
          local_90 = local_90 / 10;
        } while (bVar24);
        do {
          while (uVar9 = uVar11 - 1, param_3 == 0) {
            uVar11 = uVar9;
            if (uVar9 == 0) goto LAB_10007568;
          }
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar11 = uVar9;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e93c;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_8c == 0) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
LAB_10007669:
        uVar9 = 0;
        do {
          *(byte *)((long)&local_48 + uVar9) = (char)local_8c + (char)(local_8c / 10) * -10 | 0x30;
          uVar11 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar24 = 9 < local_8c;
          uVar9 = uVar11;
          local_8c = local_8c / 10;
        } while (bVar24);
        do {
          while (uVar9 = uVar11 - 1, param_3 == 0) {
            uVar11 = uVar9;
            if (uVar9 == 0) goto LAB_100076f8;
          }
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar11 = uVar9;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e94d;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_88 == 0) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
LAB_100077f9:
        uVar9 = 0;
        do {
          *(byte *)((long)&local_48 + uVar9) = (char)local_88 + (char)(local_88 / 10) * -10 | 0x30;
          uVar11 = uVar9 + 1;
          if (8 < uVar9) break;
          bVar24 = 9 < local_88;
          uVar9 = uVar11;
          local_88 = local_88 / 10;
        } while (bVar24);
        do {
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar9) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
              *(undefined1 *)(param_3 + uVar9) = 0;
            }
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (local_80 != 0) {
        if (param_3 == 0) {
LAB_100078da:
          if (local_bc != 0) goto LAB_10007979;
        }
        else {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000e961;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          if (local_bc == 0) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
            }
          }
          else {
LAB_10007979:
            uVar9 = 0;
            do {
              *(byte *)((long)&local_48 + uVar9) =
                   (char)local_bc + (char)(local_bc / 10) * -10 | 0x30;
              uVar11 = uVar9 + 1;
              if (8 < uVar9) break;
              bVar24 = 9 < local_bc;
              uVar9 = uVar11;
              local_bc = local_bc / 10;
            } while (bVar24);
            do {
              while (uVar9 = uVar11 - 1, param_3 == 0) {
                uVar11 = uVar9;
                if (uVar9 == 0) goto LAB_10007af1;
              }
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar6) =
                     *(undefined1 *)((long)&local_4c + uVar11 + 3);
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar11 = uVar9;
            } while (uVar9 != 0);
          }
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000e971;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
LAB_10007af1:
        iVar22 = 8;
LAB_10007b04:
        do {
          uVar3 = local_b0 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) goto LAB_10007b50;
          uVar9 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar9);
            uVar9 = uVar9 + 1;
          } while (*pcVar8 != '\0');
          if (uVar9 < 0x400) {
            *(char *)(param_3 + -1 + uVar9) = cVar7;
            *(undefined1 *)(param_3 + uVar9) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = 'v';
          pcVar8 = str_1000e988;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar9 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
          uVar11 = uVar9;
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
LAB_10007c41:
        iVar22 = (uint)(local_80 >> 0x20 != 0) * 8 + 8;
        do {
          uVar21 = (uint)(local_80 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
          uVar3 = (uint)(byte)((char)uVar21 + 0x37);
          if (uVar21 < 10) {
            uVar3 = uVar21 + 0x30;
          }
          PF_PART2(local_48, 0) = (ushort)(byte)local_48;
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              pbVar17 = (byte *)((long)&local_48 + 1);
              do {
                *(char *)(param_3 + uVar11) = (char)uVar3;
                uVar11 = uVar11 + 1;
                uVar3 = (uint)*pbVar17;
                if (*pbVar17 == 0) break;
                pbVar17 = pbVar17 + 1;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (local_d0 != 0) {
        iVar22 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
        if (param_3 != 0) {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000e99b;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
LAB_10007dc1:
        do {
          uVar21 = (uint)(local_d0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
          uVar3 = (uint)(byte)((char)uVar21 + 0x37);
          if (uVar21 < 10) {
            uVar3 = uVar21 + 0x30;
          }
          PF_PART2(local_48, 0) = (ushort)(byte)local_48;
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              pbVar17 = (byte *)((long)&local_48 + 1);
              do {
                *(char *)(param_3 + uVar11) = (char)uVar3;
                uVar11 = uVar11 + 1;
                uVar3 = (uint)*pbVar17;
                if (*pbVar17 == 0) break;
                pbVar17 = pbVar17 + 1;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (local_c8 != 0) {
        iVar22 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
        if (param_3 != 0) {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar11 + 1 < 0x400) {
            cVar12 = 'v';
            pcVar8 = str_1000e9a5;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar11) = cVar12;
              uVar11 = uVar11 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar11 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
LAB_10007f41:
        do {
          uVar21 = (uint)(local_c8 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
          uVar3 = (uint)(byte)((char)uVar21 + 0x37);
          if (uVar21 < 10) {
            uVar3 = uVar21 + 0x30;
          }
          PF_PART2(local_48, 0) = (ushort)(byte)local_48;
          if (param_3 != 0) {
            uVar9 = 0;
            do {
              uVar11 = uVar9;
              uVar9 = uVar11 + 1;
            } while (*(char *)(param_3 + uVar11) != '\0');
            if (uVar11 + 1 < 0x400) {
              pbVar17 = (byte *)((long)&local_48 + 1);
              do {
                *(char *)(param_3 + uVar11) = (char)uVar3;
                uVar11 = uVar11 + 1;
                uVar3 = (uint)*pbVar17;
                if (*pbVar17 == 0) break;
                pbVar17 = pbVar17 + 1;
              } while (uVar11 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
      if (param_3 == 0) goto LAB_1000a9cd;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar8 = str_1000e9b8;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      if (local_78 != 0) goto LAB_1000a9d5;
      uVar9 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar9);
        uVar9 = uVar9 + 1;
      } while (*pcVar8 != '\0');
      if (uVar9 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
      }
LAB_100080c9:
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      pcVar8 = str_1000e9db;
      if ((local_94 & 8) == 0) {
        pcVar8 = str_1000e9e7;
      }
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar11 + 1 < 0x400) {
        cVar12 = 'v';
        pcVar10 = str_1000e9cf;
        do {
          pcVar10 = pcVar10 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar10;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if ((uVar11 + 1 < 0x400) && (cVar12 = *pcVar8, cVar12 != '\0')) {
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar11) = cVar12;
          uVar11 = uVar11 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar11 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      goto LAB_1000aa68;
    }
  }
  else {
    iVar22 = -1;
    if (*(short *)(param_2 + 4) == 0x1af4) {
      uVar1 = *(ushort *)(param_2 + 6);
      uVar3 = uVar1 & 0xffffffc0;
      if (uVar3 == 0x1000) {
        iVar22 = uVar1 - 0x1000;
      }
      else {
        iVar22 = uVar1 - 0x1040;
        if (uVar3 != 0x1040) {
          iVar22 = -1;
        }
      }
    }
    bVar24 = iVar22 == -1;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_48 = local_48 & 0xffffffff00000000;
    if (param_1 == (int *)0x0) {
      uVar9 = CONCAT71(uVar19,1);
      goto joined_r0x10006164;
    }
    if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 100)) || (param_1[0x18] == 0)) {
      uVar9 = 0;
      goto joined_r0x10006164;
    }
    if (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0) &&
       (iVar4 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_e0),
       iVar4 != 0)) {
      uVar3 = 1;
      if ((*(uint *)(param_2 + 0x14) & 1) == 0) {
        uVar3 = (uint)(*(uint *)(param_2 + 0x14) != 0) * 2;
      }
      uVar21 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x18) == 0) {
        uVar21 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
        uVar21 = uVar3 | 1;
      }
      uVar3 = uVar21 | 2;
      if (*(uint *)(param_2 + 0x1c) == 0) {
        uVar3 = uVar21;
      }
      if ((*(uint *)(param_2 + 0x1c) & 1) != 0) {
        uVar3 = uVar21 | 1;
      }
      uVar21 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x20) == 0) {
        uVar21 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
        uVar21 = uVar3 | 1;
      }
      uVar3 = uVar21 | 2;
      if (*(uint *)(param_2 + 0x24) == 0) {
        uVar3 = uVar21;
      }
      if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
        uVar3 = uVar21 | 1;
      }
      uVar21 = uVar3 | 2;
      if (*(uint *)(param_2 + 0x28) == 0) {
        uVar21 = uVar3;
      }
      if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
        uVar21 = uVar3 | 1;
      }
      local_34 = uVar21 | 4;
      if ((param_2[8] == '\x06') && (param_2[9] != '\0')) {
        local_34 = uVar21 | 6;
      }
      local_48 = CONCAT44(PF_PART4(local_48, 4),(uint)local_e0 | local_34);
      if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x18] != (code *)0x0)) {
        iVar4 = (*(code *)(ulong)(uint)param_1[0x18])(*param_2,param_2[1],param_2[2],4,2);
        uVar9 = (ulong)local_34;
        if (iVar4 != 0) {
          if (((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
             ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) {
            (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],4,2,&local_48);
            uVar9 = (ulong)local_34;
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar6 + 1 < 0x400) {
              cVar12 = 'p';
              pcVar8 = str_1000e822;
              do {
                pcVar8 = pcVar8 + 1;
                *(char *)(param_3 + uVar6) = cVar12;
                uVar6 = uVar6 + 1;
                cVar12 = *pcVar8;
                if (cVar12 == '\0') break;
              } while (uVar6 < 0x3ff);
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          iVar4 = 8;
LAB_10009328:
          do {
            uVar3 = (uint)local_e0 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar3;
            cVar7 = cVar12 + '7';
            if (uVar3 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_1000937d;
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar7;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'p';
            pcVar8 = str_1000e833;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10009414:
          iVar4 = 8;
LAB_1000941f:
          uVar3 = (uint)local_48 >> ((char)iVar4 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_100094fe;
            goto LAB_1000941f;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar4 = iVar4 + -1;
          if (iVar4 != 0) goto LAB_1000941f;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'p';
            pcVar8 = str_1000e843;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100094fe:
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0x1c) | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0x18) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)((uint)uVar9 >> 0x14) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0x10) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 0xc) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 8) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)(uVar9 >> 4) & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(byte *)(param_3 + -1 + uVar11) = (byte)uVar9 & 0xf | 0x30;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          uVar3 = (uint)(((uint)uVar9 & ~(uint)local_48) == 0);
          goto joined_r0x1000967b;
        }
      }
      if (param_3 != 0) {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000e809;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar11) = cVar12;
            uVar11 = uVar11 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar11 < 0x3ff);
        }
        goto LAB_10006458;
      }
LAB_1000667d:
      uVar9 = 0;
      goto LAB_100061ac;
    }
    if (param_3 == 0) goto LAB_1000667d;
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      uVar9 = uVar11 + 1;
    } while (*(char *)(param_3 + uVar11) != '\0');
    if (uVar11 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000e7f1;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar11) = cVar12;
        uVar11 = uVar11 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar11 < 0x3ff);
    }
LAB_10006458:
    uVar3 = 0;
    *(undefined1 *)(param_3 + uVar11) = 0;
joined_r0x1000967b:
    local_34 = 0;
    uVar9 = 0;
    uVar21 = uVar3;
    if (iVar22 != -1) goto LAB_1000646f;
  }
  local_38 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  if (param_2 == (undefined1 *)0x0) {
    uVar21 = 1;
    if (uVar3 == 0) {
      uVar21 = 0;
    }
    goto LAB_1000aa71;
  }
  local_34 = (uint)uVar9;
  if ((param_2[8] == '\x01') && (param_2[9] == '\x06')) {
    if (((*(uint *)(param_2 + 0x24) & 7) != 4) &&
       ((((uVar21 = *(uint *)(param_2 + 0x28), (uVar21 & 6) != 4 && (uVar21 != 0)) &&
         ((uVar21 & 1) == 0)) && (uVar21 = uVar21 & 0xfffffff0, uVar21 != 0)))) {
      local_e0 = 0;
      local_48 = local_48 & 0xffffffff00000000;
      if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
        if (0xbb < (uint)param_1[2]) {
          if ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0) goto LAB_10008cc4;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar21,0,0x1000);
          uVar9 = (ulong)local_34;
          if (iVar22 == 0) goto LAB_100061ff;
LAB_10008cfa:
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
            uVar11 = 0xffffffffffffffff;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + 1 + uVar6) != '\0');
            if (uVar6 + 2 < 0x400) {
              *(undefined1 *)(param_3 + uVar11) = 0x61;
              uVar5 = uVar6 + 2;
              if (uVar11 != 0x3fe) {
                *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
                uVar5 = uVar6 + 3;
                if (uVar6 + 3 < 0x3ff) {
                  *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                  uVar5 = uVar6 + 4;
                  if (uVar6 + 4 < 0x3ff) {
                    *(undefined1 *)(param_3 + 3 + uVar11) = 0x69;
                    uVar5 = uVar6 + 5;
                    if (uVar6 + 5 < 0x3ff) {
                      *(undefined1 *)(uVar6 + 5 + param_3) = 0x4d;
                      uVar5 = uVar6 + 6;
                      if (uVar6 + 6 < 0x3ff) {
                        *(undefined1 *)(param_3 + 5 + uVar11) = 0x6d;
                        uVar5 = uVar6 + 7;
                        if (uVar6 + 7 < 0x3ff) {
                          *(undefined1 *)(param_3 + 6 + uVar11) = 0x69;
                          uVar5 = uVar6 + 8;
                          if (uVar6 + 8 < 0x3ff) {
                            *(undefined1 *)(param_3 + 7 + uVar11) = 0x6f;
                            uVar11 = uVar6 + 9;
                            goto LAB_1000a8b9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_1000a8b9:
              uVar5 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar5) = 0;
            uVar11 = 0;
            do {
              uVar6 = uVar11;
              uVar11 = uVar6 + 1;
            } while (*(char *)(param_3 + uVar6) != '\0');
            if (uVar11 < 0x400) {
              *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
              uVar6 = uVar11;
            }
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
          do {
            uVar14 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
            uVar21 = (uint)(byte)((char)uVar14 + 0x37);
            if (uVar14 < 10) {
              uVar21 = uVar14 + 0x30;
            }
            PF_PART2(local_48, 0) = (ushort)(byte)local_48;
            if (param_3 != 0) {
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                pbVar17 = (byte *)((long)&local_48 + 1);
                do {
                  *(char *)(param_3 + uVar6) = (char)uVar21;
                  uVar6 = uVar6 + 1;
                  uVar21 = (uint)*pbVar17;
                  if (*pbVar17 == 0) break;
                  pbVar17 = pbVar17 + 1;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if (((local_e0 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                 ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ad19;
              (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
            }
            uVar9 = (ulong)local_34;
          }
LAB_1000ad19:
          if (local_e0 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar11 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))
                   )) goto LAB_1000ad89;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
              }
              uVar9 = (ulong)local_34;
            }
LAB_1000ad89:
            if (local_e0 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar11 = local_e0 + 0xc;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar11 >> 0x20 != 0) ||
                     (((uint)param_1[2] < 0x6c ||
                      ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000b406;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_58);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_58);
                }
                uVar9 = (ulong)local_34;
              }
LAB_1000b406:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar11 = local_e0 + 0x10;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000bc33;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_5c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_5c);
                }
                uVar9 = (ulong)local_34;
              }
            }
          }
LAB_1000bc33:
          if ((-1 < (int)local_4c) && (local_e0 != 0)) {
            if (*param_1 == 0x54584b57) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0))
              {
                if ((uVar11 >> 0x20 != 0) ||
                   (((uint)param_1[2] < 0x70 || ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0))
                   )) goto LAB_1000bcac;
                (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,local_4c | 0x80000000);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
              }
              uVar9 = (ulong)local_34;
            }
LAB_1000bcac:
            if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
              uVar11 = local_e0 + 4;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                   ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000bd18;
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
              }
              uVar9 = (ulong)local_34;
            }
          }
LAB_1000bd18:
          if (param_3 == 0) goto LAB_1000bdfa;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x61;
            uVar5 = uVar6 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
              uVar5 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                uVar5 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(uVar6 + 4 + param_3) = 0x69;
                  uVar5 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar11) = 0x43;
                    uVar5 = uVar6 + 6;
                    if (uVar6 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar11) = 0x61;
                      uVar5 = uVar6 + 7;
                      if (uVar6 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar11) = 0x70;
                        uVar11 = uVar6 + 8;
                        goto LAB_1000bdd1;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000bdd1:
            uVar5 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar5) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000bdfa:
          iVar22 = 8;
LAB_1000be08:
          do {
            uVar21 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar21;
            cVar7 = cVar12 + '7';
            if (uVar21 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 == 0) goto LAB_1000be5d;
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar7;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x61;
            uVar5 = uVar6 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar11) = 0x68;
              uVar5 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 99;
                uVar5 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(uVar6 + 4 + param_3) = 0x69;
                  uVar5 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar11) = 0x47;
                    uVar5 = uVar6 + 6;
                    if (uVar6 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar11) = 0x68;
                      uVar5 = uVar6 + 7;
                      if (uVar6 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar11) = 99;
                        uVar11 = uVar6 + 8;
                        goto LAB_1000bf1e;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000bf1e:
            uVar5 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar5) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000bf48:
          iVar22 = 8;
LAB_1000bf53:
          uVar21 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000c034;
            goto LAB_1000bf53;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
          if (iVar22 != 0) goto LAB_1000bf53;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'a';
            pcVar8 = str_1000ea5c;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000c034:
          iVar22 = 8;
LAB_1000c03f:
          uVar21 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 == 0) {
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_1000c124;
            goto LAB_1000c03f;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
          if (iVar22 != 0) goto LAB_1000c03f;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            cVar12 = 'a';
            pcVar8 = str_1000ea66;
            do {
              pcVar8 = pcVar8 + 1;
              *(char *)(param_3 + uVar6) = cVar12;
              uVar6 = uVar6 + 1;
              cVar12 = *pcVar8;
              if (cVar12 == '\0') break;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000c124:
          iVar22 = 8;
          uVar21 = 1;
          do {
            uVar14 = local_5c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar14;
            cVar7 = cVar12 + '7';
            if (uVar14 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 != 0) {
              uVar11 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar8 != '\0');
              if (uVar11 < 0x400) {
                *(char *)(param_3 + -1 + uVar11) = cVar7;
                *(undefined1 *)(param_3 + uVar11) = 0;
              }
            }
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          goto LAB_10006270;
        }
        if (0x67 < (uint)param_1[2]) {
LAB_10008cc4:
          if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
            iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar21,0,0x1000);
            uVar9 = (ulong)local_34;
            if (iVar22 != 0) {
              local_e0 = local_48 & 0xffffffff;
              goto LAB_10008cfa;
            }
          }
        }
      }
    }
LAB_100061ff:
    if (param_3 == 0) goto LAB_1000625f;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000ea46;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar12;
        uVar6 = uVar6 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar21 = 0;
  }
  else {
LAB_1000625f:
    uVar21 = 0;
  }
LAB_10006270:
  local_38 = 0;
  local_4c = 0;
  local_58 = 0;
  if ((param_2[8] == '\x04') && (param_2[9] == '\x03')) {
    uVar14 = *(uint *)(param_2 + 0x14);
    if ((uVar14 & 1) == 0 && uVar14 != 0) {
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 != 0 || iVar22 != 0) {
        local_e0 = 0;
        local_48 = (ulong)PF_PART4(local_48, 4) << 0x20;
        if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
               ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
              iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000);
              uVar9 = (ulong)local_34;
              if (iVar22 != 0) {
                local_e0 = local_48 & 0xffffffff;
                goto LAB_10008478;
              }
            }
          }
          else {
            iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000);
            uVar9 = (ulong)local_34;
            if (iVar22 != 0) {
LAB_10008478:
              if (param_3 != 0) {
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0xffffffffffffffff;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + 1 + uVar6) != '\0');
                if (uVar6 + 2 < 0x400) {
                  *(undefined1 *)(param_3 + uVar11) = 0x68;
                  uVar5 = uVar6 + 2;
                  if (uVar11 != 0x3fe) {
                    *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                    uVar5 = uVar6 + 3;
                    if (uVar6 + 3 < 0x3ff) {
                      *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                      uVar5 = uVar6 + 4;
                      if (uVar6 + 4 < 0x3ff) {
                        *(undefined1 *)(uVar6 + 4 + param_3) = 0x4d;
                        uVar5 = uVar6 + 5;
                        if (uVar6 + 5 < 0x3ff) {
                          *(undefined1 *)(param_3 + 4 + uVar11) = 0x6d;
                          uVar5 = uVar6 + 6;
                          if (uVar6 + 6 < 0x3ff) {
                            *(undefined1 *)(param_3 + 5 + uVar11) = 0x69;
                            uVar5 = uVar6 + 7;
                            if (uVar6 + 7 < 0x3ff) {
                              *(undefined1 *)(param_3 + 6 + uVar11) = 0x6f;
                              uVar11 = uVar6 + 8;
                              goto LAB_1000a51e;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
LAB_1000a51e:
                  uVar5 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar5) = 0;
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              iVar22 = (uint)(local_e0 >> 0x20 != 0) * 8 + 8;
              do {
                uVar16 = (uint)(local_e0 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
                uVar14 = (uint)(byte)((char)uVar16 + 0x37);
                if (uVar16 < 10) {
                  uVar14 = uVar16 + 0x30;
                }
                PF_PART2(local_48, 0) = (ushort)(byte)local_48;
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    pbVar17 = (byte *)((long)&local_48 + 1);
                    do {
                      *(char *)(param_3 + uVar6) = (char)uVar14;
                      uVar6 = uVar6 + 1;
                      uVar14 = (uint)*pbVar17;
                      if (*pbVar17 == 0) break;
                      pbVar17 = pbVar17 + 1;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                }
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((local_e0 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ab17;
                  (*(code *)(ulong)(uint)param_1[0x1a])(local_e0,4,&local_38);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(local_e0,4,&local_38);
                }
                uVar9 = (ulong)local_34;
              }
LAB_1000ab17:
              if ((local_e0 != 0) && (*param_1 == 0x54584b57)) {
                uVar11 = local_e0 + 8;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
                     ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ac0e;
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
                }
                uVar9 = (ulong)local_34;
              }
LAB_1000ac0e:
              if (((local_4c & 1) == 0) && (local_e0 != 0)) {
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x70 ||
                        ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0)))) goto LAB_1000b20d;
                    (*(code *)(ulong)(uint)param_1[0x1b])(uVar11,4,local_4c | 1);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar11,4);
                  }
                  uVar9 = (ulong)local_34;
                }
LAB_1000b20d:
                if (local_e0 == 0) goto LAB_1000b829;
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 8;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000b829;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
                  }
                  uVar9 = (ulong)local_34;
                  goto LAB_1000b829;
                }
              }
              else {
LAB_1000b829:
                if (*param_1 == 0x54584b57) {
                  uVar11 = local_e0 + 0xe;
                  if (((uint)param_1[2] < 0xc0) ||
                     ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                    if ((uVar11 >> 0x20 != 0) ||
                       (((uint)param_1[2] < 0x6c ||
                        ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)))) goto LAB_1000b890;
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,2,&local_58);
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,2,&local_58);
                  }
                  uVar9 = (ulong)local_34;
                }
              }
LAB_1000b890:
              if (param_3 == 0) goto LAB_1000b972;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + 1 + uVar6) != '\0');
              if (uVar6 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar11) = 0x68;
                uVar5 = uVar6 + 2;
                if (uVar11 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                  uVar5 = uVar6 + 3;
                  if (uVar6 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                    uVar5 = uVar6 + 4;
                    if (uVar6 + 4 < 0x3ff) {
                      *(undefined1 *)(uVar6 + 4 + param_3) = 0x47;
                      uVar5 = uVar6 + 5;
                      if (uVar6 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar11) = 99;
                        uVar5 = uVar6 + 6;
                        if (uVar6 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar11) = 0x61;
                          uVar5 = uVar6 + 7;
                          if (uVar6 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar11) = 0x70;
                            uVar11 = uVar6 + 8;
                            goto LAB_1000b949;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000b949:
                uVar5 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar5) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000b972:
              iVar22 = 8;
LAB_1000b980:
              do {
                uVar14 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar14;
                cVar7 = cVar12 + '7';
                if (uVar14 < 10) {
                  cVar7 = cVar12 + '0';
                }
                if (param_3 == 0) goto LAB_1000b9cd;
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(char *)(param_3 + -1 + uVar11) = cVar7;
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0xffffffffffffffff;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + 1 + uVar6) != '\0');
              if (uVar6 + 2 < 0x400) {
                *(undefined1 *)(param_3 + uVar11) = 0x68;
                uVar5 = uVar6 + 2;
                if (uVar11 != 0x3fe) {
                  *(undefined1 *)(param_3 + 1 + uVar11) = 100;
                  uVar5 = uVar6 + 3;
                  if (uVar6 + 3 < 0x3ff) {
                    *(undefined1 *)(param_3 + 2 + uVar11) = 0x61;
                    uVar5 = uVar6 + 4;
                    if (uVar6 + 4 < 0x3ff) {
                      *(undefined1 *)(uVar6 + 4 + param_3) = 0x47;
                      uVar5 = uVar6 + 5;
                      if (uVar6 + 5 < 0x3ff) {
                        *(undefined1 *)(param_3 + 4 + uVar11) = 99;
                        uVar5 = uVar6 + 6;
                        if (uVar6 + 6 < 0x3ff) {
                          *(undefined1 *)(param_3 + 5 + uVar11) = 0x74;
                          uVar5 = uVar6 + 7;
                          if (uVar6 + 7 < 0x3ff) {
                            *(undefined1 *)(param_3 + 6 + uVar11) = 0x6c;
                            uVar11 = uVar6 + 8;
                            goto LAB_1000ba8e;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
LAB_1000ba8e:
                uVar5 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar5) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000bab8:
              iVar22 = 8;
LAB_1000bac3:
              uVar14 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar14;
              cVar7 = cVar12 + '7';
              if (uVar14 < 10) {
                cVar7 = cVar12 + '0';
              }
              if (param_3 == 0) {
                iVar22 = iVar22 + -1;
                if (iVar22 == 0) goto LAB_1000bba4;
                goto LAB_1000bac3;
              }
              uVar11 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar11);
                uVar11 = uVar11 + 1;
              } while (*pcVar8 != '\0');
              if (uVar11 < 0x400) {
                *(char *)(param_3 + -1 + uVar11) = cVar7;
                *(undefined1 *)(param_3 + uVar11) = 0;
              }
              iVar22 = iVar22 + -1;
              if (iVar22 != 0) goto LAB_1000bac3;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar12 = 'h';
                pcVar8 = str_1000ea87;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar6) = cVar12;
                  uVar6 = uVar6 + 1;
                  cVar12 = *pcVar8;
                  if (cVar12 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000bba4:
              iVar22 = 8;
              do {
                uVar14 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                cVar12 = (char)uVar14;
                cVar7 = cVar12 + '7';
                if (uVar14 < 10) {
                  cVar7 = cVar12 + '0';
                }
                if (param_3 != 0) {
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(char *)(param_3 + -1 + uVar11) = cVar7;
                    *(undefined1 *)(param_3 + uVar11) = 0;
                  }
                }
                iVar22 = iVar22 + -1;
              } while (iVar22 != 0);
              uVar14 = 1;
              goto LAB_100084fe;
            }
          }
        }
      }
    }
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000ea72;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar14 = 0;
LAB_100084fe:
      uVar21 = uVar21 | uVar14;
    }
  }
  local_48 = 0;
  local_38 = 0;
  local_4c = 0;
  local_58 = 0;
  local_50 = uVar3;
  if (param_2[8] == '\f') {
    if (param_2[9] == '\x03') {
      uVar14 = *(uint *)(param_2 + 0x14);
      if ((uVar14 & 1) != 0 || uVar14 == 0) {
LAB_10008642:
        uVar11 = 0;
        local_54 = uVar21;
LAB_1000865d:
        local_5c = 0;
        uVar21 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
        if (((((uVar21 & 1) == 0) || ((short)(uVar21 & 0xfffffffc) == 0 || (char)uVar9 != '\0')) ||
            (*param_1 != 0x54584b57)) ||
           (((uint)param_1[2] < 0x58 || ((code *)(ulong)(uint)param_1[0x15] == (code *)0x0))))
        goto LAB_10008650;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x15])(uVar21 & 0xfffc,2,&local_5c);
        uVar3 = local_50;
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10008650;
        if (param_3 == 0) {
          if (uVar11 != 0) goto LAB_10008d3f;
          goto LAB_10008ff6;
        }
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)(param_3 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000ea93;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar5) = cVar12;
            uVar5 = uVar5 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
        if (uVar11 == 0) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
LAB_1000872a:
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar11 = 0xffffffffffffffff;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + 1 + uVar6) != '\0');
          if (uVar6 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar11) = 0x75;
            uVar5 = uVar6 + 2;
            if (uVar11 != 0x3fe) {
              *(undefined1 *)(uVar6 + 2 + param_3) = 0x73;
              uVar5 = uVar6 + 3;
              if (uVar6 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
                uVar5 = uVar6 + 4;
                if (uVar6 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar11) = 0x49;
                  uVar5 = uVar6 + 5;
                  if (uVar6 + 5 < 0x3ff) {
                    *(undefined1 *)(param_3 + 4 + uVar11) = 0x6f;
                    uVar11 = uVar6 + 6;
                    goto LAB_10008fcd;
                  }
                }
              }
            }
          }
          else {
LAB_10008fcd:
            uVar5 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar5) = 0;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar11 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
            uVar6 = uVar11;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        else {
LAB_10008d3f:
          uVar6 = 0;
          do {
            uVar14 = (uint)uVar11;
            uVar13 = (uVar11 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
            uVar5 = uVar6 + 1;
            if (8 < uVar6) break;
            uVar6 = uVar5;
            uVar11 = uVar13;
          } while (9 < uVar14);
          do {
            while (uVar11 = uVar5 - 1, param_3 != 0) {
              uVar6 = 0;
              do {
                pcVar8 = (char *)(param_3 + uVar6);
                uVar6 = uVar6 + 1;
              } while (*pcVar8 != '\0');
              if (uVar6 < 0x400) {
                *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
                *(undefined1 *)(param_3 + uVar6) = 0;
              }
              uVar5 = uVar11;
              if (uVar11 == 0) goto LAB_1000872a;
            }
            uVar5 = uVar11;
          } while (uVar11 != 0);
        }
LAB_10008ff6:
        iVar22 = 8;
        do {
          while( true ) {
            uVar14 = (uVar21 & 0xfffffffc) >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
            cVar12 = (char)uVar14;
            cVar7 = cVar12 + '7';
            if (uVar14 < 10) {
              cVar7 = cVar12 + '0';
            }
            if (param_3 != 0) break;
            iVar22 = iVar22 + -1;
            if (iVar22 == 0) goto LAB_100090ec;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar12 = 'u';
          pcVar8 = str_1000ea9e;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar12;
            uVar6 = uVar6 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100090ec:
        iVar22 = 8;
        do {
          uVar21 = local_5c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar21;
          cVar7 = cVar12 + '7';
          if (uVar21 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 != 0) {
            uVar11 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar11);
              uVar11 = uVar11 + 1;
            } while (*pcVar8 != '\0');
            if (uVar11 < 0x400) {
              *(char *)(param_3 + -1 + uVar11) = cVar7;
              *(undefined1 *)(param_3 + uVar11) = 0;
            }
          }
          iVar22 = iVar22 + -1;
          uVar21 = local_54;
        } while (iVar22 != 0);
        goto LAB_1000b1cd;
      }
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 == 0 && iVar22 == 0) goto LAB_10008642;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10008642;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if (((uint)param_1[2] < 0x68 || iVar22 != 0) ||
           ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) goto LAB_10008642;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000);
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10008642;
        local_48 = local_e0 & 0xffffffff;
      }
      else {
        iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000);
        uVar9 = (ulong)local_34;
        if (iVar22 == 0) goto LAB_10008642;
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0xffffffffffffffff;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + 1 + uVar6) != '\0');
        if (uVar6 + 2 < 0x400) {
          *(undefined1 *)(param_3 + uVar11) = 0x75;
          uVar5 = uVar6 + 2;
          if (uVar11 != 0x3fe) {
            *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
            uVar5 = uVar6 + 3;
            if (uVar6 + 3 < 0x3ff) {
              *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
              uVar5 = uVar6 + 4;
              if (uVar6 + 4 < 0x3ff) {
                *(undefined1 *)(uVar6 + 4 + param_3) = 0x4d;
                uVar5 = uVar6 + 5;
                if (uVar6 + 5 < 0x3ff) {
                  *(undefined1 *)(param_3 + 4 + uVar11) = 0x6d;
                  uVar5 = uVar6 + 6;
                  if (uVar6 + 6 < 0x3ff) {
                    *(undefined1 *)(param_3 + 5 + uVar11) = 0x69;
                    uVar5 = uVar6 + 7;
                    if (uVar6 + 7 < 0x3ff) {
                      *(undefined1 *)(param_3 + 6 + uVar11) = 0x6f;
                      uVar11 = uVar6 + 8;
                      goto LAB_1000a5de;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_1000a5de:
          uVar5 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
      }
      iVar22 = (uint)(local_48 >> 0x20 != 0) * 8 + 8;
      do {
        uVar16 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar14 = (uint)(byte)((char)uVar16 + 0x37);
        if (uVar16 < 10) {
          uVar14 = uVar16 + 0x30;
        }
        PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
        if (param_3 != 0) {
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar17 = (byte *)((long)&local_e0 + 1);
            do {
              *(char *)(param_3 + uVar6) = (char)uVar14;
              uVar6 = uVar6 + 1;
              uVar14 = (uint)*pbVar17;
              if (*pbVar17 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if (((local_48 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
             ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ab92;
          (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
        }
        uVar9 = (ulong)local_34;
      }
LAB_1000ab92:
      if (local_48 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar11 = local_48 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar11 >> 0x20 != 0) ||
               (((uint)param_1[2] < 0x6c || ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0))))
            goto LAB_1000ac98;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
          }
          uVar9 = (ulong)local_34;
        }
LAB_1000ac98:
        if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
          uVar11 = local_48 + 8;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
               ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000ae08;
            (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_58);
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_58);
          }
          uVar9 = (ulong)local_34;
        }
      }
LAB_1000ae08:
      if (param_3 == 0) goto LAB_1000aeea;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar11) = 0x75;
        uVar5 = uVar6 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
          uVar5 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
            uVar5 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar5 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar11) = 0x65;
                uVar5 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar11) = 0x67;
                  uVar5 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar11) = 0x30;
                    uVar11 = uVar6 + 8;
                    goto LAB_1000aec1;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_1000aec1:
        uVar5 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000aeea:
      iVar22 = 8;
LAB_1000aef8:
      do {
        uVar14 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar14;
        cVar7 = cVar12 + '7';
        if (uVar14 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 == 0) goto LAB_1000af4d;
        uVar11 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar8 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar7;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar11) = 0x75;
        uVar5 = uVar6 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
          uVar5 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
            uVar5 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar5 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar11) = 0x65;
                uVar5 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar11) = 0x67;
                  uVar5 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar11) = 0x34;
                    uVar11 = uVar6 + 8;
                    goto LAB_1000b00e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_1000b00e:
        uVar5 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000b038:
      iVar22 = 8;
      do {
        while( true ) {
          uVar14 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar14;
          cVar7 = cVar12 + '7';
          if (uVar14 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (param_3 != 0) break;
          iVar22 = iVar22 + -1;
          if (iVar22 == 0) goto LAB_1000b178;
        }
        uVar11 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar8 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar7;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + 1 + uVar6) != '\0');
      if (uVar6 + 2 < 0x400) {
        *(undefined1 *)(param_3 + uVar11) = 0x75;
        uVar5 = uVar6 + 2;
        if (uVar11 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar11) = 0x73;
          uVar5 = uVar6 + 3;
          if (uVar6 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar11) = 0x62;
            uVar5 = uVar6 + 4;
            if (uVar6 + 4 < 0x3ff) {
              *(undefined1 *)(uVar6 + 4 + param_3) = 0x52;
              uVar5 = uVar6 + 5;
              if (uVar6 + 5 < 0x3ff) {
                *(undefined1 *)(param_3 + 4 + uVar11) = 0x65;
                uVar5 = uVar6 + 6;
                if (uVar6 + 6 < 0x3ff) {
                  *(undefined1 *)(param_3 + 5 + uVar11) = 0x67;
                  uVar5 = uVar6 + 7;
                  if (uVar6 + 7 < 0x3ff) {
                    *(undefined1 *)(param_3 + 6 + uVar11) = 0x38;
                    uVar11 = uVar6 + 8;
                    goto LAB_1000b14e;
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_1000b14e:
        uVar5 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar5) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
LAB_1000b178:
      iVar22 = 8;
      do {
        uVar14 = local_58 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar14;
        cVar7 = cVar12 + '7';
        if (uVar14 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 != 0) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(char *)(param_3 + -1 + uVar11) = cVar7;
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
LAB_1000b1cd:
      uVar14 = 1;
      goto LAB_1000879e;
    }
  }
  goto LAB_100087a1;
LAB_1000937d:
  iVar4 = iVar4 + -1;
  if (iVar4 == 0) goto LAB_10009414;
  goto LAB_10009328;
LAB_10006c60:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10006db1;
  goto LAB_10006c68;
code_r0x10007404:
  if (local_90 != 0) goto LAB_100074d9;
LAB_10007568:
  if (local_8c != 0) goto LAB_10007669;
LAB_100076f8:
  if (local_88 != 0) goto LAB_100077f9;
  if (local_80 != 0) goto LAB_100078da;
  if (local_d0 != 0) {
    iVar22 = (uint)(local_d0 >> 0x20 != 0) * 8 + 8;
    goto LAB_10007dc1;
  }
  if (local_c8 != 0) {
    iVar22 = (uint)(local_c8 >> 0x20 != 0) * 8 + 8;
    goto LAB_10007f41;
  }
LAB_1000a9cd:
  if (local_78 != 0) {
LAB_1000a9d5:
    uVar9 = 0;
    do {
      *(byte *)((long)&local_48 + uVar9) = (char)local_78 + (char)(local_78 / 10) * -10 | 0x30;
      uVar11 = uVar9 + 1;
      if (8 < uVar9) break;
      bVar24 = 9 < local_78;
      uVar9 = uVar11;
      local_78 = local_78 / 10;
    } while (bVar24);
    do {
      while (uVar9 = uVar11 - 1, param_3 != 0) {
        uVar6 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar6);
          uVar6 = uVar6 + 1;
        } while (*pcVar8 != '\0');
        if (uVar6 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar6) = *(undefined1 *)((long)&local_4c + uVar11 + 3);
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        uVar11 = uVar9;
        if (uVar9 == 0) goto LAB_100080c9;
      }
      uVar11 = uVar9;
    } while (uVar9 != 0);
  }
LAB_1000aa68:
  uVar21 = 1;
  goto LAB_1000aa71;
LAB_10007b50:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_10007c41;
  goto LAB_10007b04;
LAB_10008390:
  bVar24 = uVar9 < 5;
  uVar9 = uVar9 + 1;
  if (uVar9 == 6) goto LAB_10008316;
  goto LAB_100083a9;
LAB_1000be5d:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_1000bf48;
  goto LAB_1000be08;
LAB_1000b9cd:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_1000bab8;
  goto LAB_1000b980;
LAB_10008650:
  uVar11 = uVar11 + 1;
  if (uVar11 == 6) goto LAB_1000874c;
  goto LAB_1000865d;
LAB_1000af4d:
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto LAB_1000b038;
  goto LAB_1000aef8;
LAB_10008a08:
  uVar3 = local_50;
  goto LAB_1000991e;
LAB_1000874c:
  uVar21 = local_54;
  uVar3 = local_50;
  if (param_3 != 0) {
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000eaa8;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar12;
        uVar6 = uVar6 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar14 = 0;
LAB_1000879e:
    uVar21 = uVar21 | uVar14;
  }
LAB_100087a1:
  local_48 = 0;
  local_38 = 0;
  local_4c = 0;
  if (param_2[8] == '\x02') {
    uVar14 = 1;
    uVar11 = 0;
    local_68 = param_2;
    local_54 = uVar21;
LAB_100087fa:
    if ((uVar11 != 0) && ((*(uint *)(param_2 + uVar11 * 4 + 0x10) & 7) == 4)) {
LAB_10008900:
      uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
      if ((uVar3 & 1) != 0) {
        if (!((short)(uVar3 & 0xfffffffc) == 0 || (char)uVar9 != '\0')) {
          if (*param_1 == 0x54584b57) {
            if (0x57 < (uint)param_1[2]) {
              if ((code *)(ulong)(uint)param_1[0x15] != (code *)0x0) {
                iVar22 = (*(code *)(ulong)(uint)param_1[0x15])(uVar3 & 0xfffc,2,&local_38);
                uVar21 = local_54;
                param_2 = local_68;
                uVar9 = (ulong)local_34;
                if (iVar22 == 0) goto LAB_100087e0;
                if (param_3 == 0) {
                  if (uVar11 == 0) goto LAB_10008b3e;
                  goto LAB_10008a49;
                }
                uVar6 = 0;
                do {
                  uVar5 = uVar6;
                  uVar6 = uVar5 + 1;
                } while (*(char *)(param_3 + uVar5) != '\0');
                if (uVar5 + 1 < 0x400) {
                  cVar12 = ' ';
                  pcVar8 = str_1000eaf2;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar5) = cVar12;
                    uVar5 = uVar5 + 1;
                    cVar12 = *pcVar8;
                    if (cVar12 == '\0') break;
                  } while (uVar5 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar5) = 0;
                if (uVar11 == 0) {
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
                  }
LAB_100089e6:
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                    uVar6 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar6 + 1 < 0x400) {
                    cVar12 = 'n';
                    pcVar8 = str_1000eb01;
                    do {
                      pcVar8 = pcVar8 + 1;
                      *(char *)(param_3 + uVar6) = cVar12;
                      uVar6 = uVar6 + 1;
                      cVar12 = *pcVar8;
                      if (cVar12 == '\0') break;
                    } while (uVar6 < 0x3ff);
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                  uVar11 = 0;
                  do {
                    uVar6 = uVar11;
                    uVar11 = uVar6 + 1;
                  } while (*(char *)(param_3 + uVar6) != '\0');
                  if (uVar11 < 0x400) {
                    *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                    uVar6 = uVar11;
                  }
                  *(undefined1 *)(param_3 + uVar6) = 0;
                }
                else {
LAB_10008a49:
                  uVar6 = 0;
                  do {
                    uVar16 = (uint)uVar11;
                    uVar13 = (uVar11 & 0xffffffff) / 10;
                    *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
                    uVar5 = uVar6 + 1;
                    if (8 < uVar6) break;
                    uVar6 = uVar5;
                    uVar11 = uVar13;
                  } while (9 < uVar16);
                  do {
                    while (uVar11 = uVar5 - 1, param_3 != 0) {
                      uVar6 = 0;
                      do {
                        pcVar8 = (char *)(param_3 + uVar6);
                        uVar6 = uVar6 + 1;
                      } while (*pcVar8 != '\0');
                      if (uVar6 < 0x400) {
                        *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
                        *(undefined1 *)(param_3 + uVar6) = 0;
                      }
                      uVar5 = uVar11;
                      if (uVar11 == 0) goto LAB_100089e6;
                    }
                    uVar5 = uVar11;
                  } while (uVar11 != 0);
                }
LAB_10008b3e:
                iVar22 = 8;
                do {
                  while( true ) {
                    uVar16 = (uVar3 & 0xfffffffc) >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                    cVar12 = (char)uVar16;
                    cVar7 = cVar12 + '7';
                    if (uVar16 < 10) {
                      cVar7 = cVar12 + '0';
                    }
                    if (param_3 != 0) break;
                    iVar22 = iVar22 + -1;
                    if (iVar22 == 0) goto LAB_10008c34;
                  }
                  uVar11 = 0;
                  do {
                    pcVar8 = (char *)(param_3 + uVar11);
                    uVar11 = uVar11 + 1;
                  } while (*pcVar8 != '\0');
                  if (uVar11 < 0x400) {
                    *(char *)(param_3 + -1 + uVar11) = cVar7;
                    *(undefined1 *)(param_3 + uVar11) = 0;
                  }
                  iVar22 = iVar22 + -1;
                } while (iVar22 != 0);
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar6 + 1 < 0x400) {
                  cVar12 = 'n';
                  pcVar8 = str_1000eb0b;
                  do {
                    pcVar8 = pcVar8 + 1;
                    *(char *)(param_3 + uVar6) = cVar12;
                    uVar6 = uVar6 + 1;
                    cVar12 = *pcVar8;
                    if (cVar12 == '\0') break;
                  } while (uVar6 < 0x3ff);
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
                uVar11 = 0;
                do {
                  uVar6 = uVar11;
                  uVar11 = uVar6 + 1;
                } while (*(char *)(param_3 + uVar6) != '\0');
                if (uVar11 < 0x400) {
                  *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                  uVar6 = uVar11;
                }
                *(undefined1 *)(param_3 + uVar6) = 0;
LAB_10008c34:
                iVar22 = 8;
                do {
                  uVar3 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
                  cVar12 = (char)uVar3;
                  cVar7 = cVar12 + '7';
                  if (uVar3 < 10) {
                    cVar7 = cVar12 + '0';
                  }
                  if (param_3 != 0) {
                    uVar11 = 0;
                    do {
                      pcVar8 = (char *)(param_3 + uVar11);
                      uVar11 = uVar11 + 1;
                    } while (*pcVar8 != '\0');
                    if (uVar11 < 0x400) {
                      *(char *)(param_3 + -1 + uVar11) = cVar7;
                      *(undefined1 *)(param_3 + uVar11) = 0;
                    }
                  }
                  iVar22 = iVar22 + -1;
                  uVar3 = local_50;
                } while (iVar22 != 0);
                goto LAB_1000990d;
              }
            }
          }
        }
      }
LAB_100087e0:
      bVar24 = uVar11 < 5;
      uVar11 = uVar11 + 1;
      uVar14 = (uint)bVar24;
      if (uVar11 == 6) goto LAB_10008a08;
      goto LAB_100087fa;
    }
    uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
    if ((uVar3 & 1) != 0 || uVar3 == 0) goto LAB_10008900;
    iVar22 = 0;
    if ((uVar3 & 6) == 4) {
      if (uVar11 == 5) goto LAB_10008900;
      iVar22 = *(int *)(param_2 + uVar11 * 4 + 0x18);
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 == 0 && iVar22 == 0) goto LAB_10008900;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10008900;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (0x67 < (uint)param_1[2] && iVar22 == 0) {
        if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
          iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000);
          uVar9 = (ulong)local_34;
          uVar21 = local_54;
          if (iVar22 != 0) {
            local_48 = local_e0 & 0xffffffff;
            goto LAB_10008dd4;
          }
        }
      }
      goto LAB_10008900;
    }
    iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000);
    uVar9 = (ulong)local_34;
    uVar21 = local_54;
    if (iVar22 == 0) goto LAB_10008900;
LAB_10008dd4:
    uVar21 = local_54;
    if (param_3 == 0) {
      if (uVar11 != 0) goto LAB_10008e82;
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      goto LAB_100091c6;
    }
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar6 = uVar5 + 1;
    } while (*(char *)(param_3 + uVar5) != '\0');
    if (uVar5 + 1 < 0x400) {
      cVar12 = ' ';
      pcVar8 = str_1000eabd;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar5) = cVar12;
        uVar5 = uVar5 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar5 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar5) = 0;
    if (uVar11 == 0) {
      uVar11 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar11);
        uVar11 = uVar11 + 1;
      } while (*pcVar8 != '\0');
      if (uVar11 < 0x400) {
        *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
      }
LAB_10008e3f:
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = 'n';
        pcVar8 = str_1000eace;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
    else {
LAB_10008e82:
      uVar6 = 0;
      do {
        uVar3 = (uint)uVar11;
        uVar13 = (uVar11 & 0xffffffff) / 10;
        *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
        uVar5 = uVar6 + 1;
        if (8 < uVar6) break;
        uVar6 = uVar5;
        uVar11 = uVar13;
      } while (9 < uVar3);
      do {
        while (uVar11 = uVar5 - 1, param_3 != 0) {
          uVar6 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar8 != '\0');
          if (uVar6 < 0x400) {
            *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
            *(undefined1 *)(param_3 + uVar6) = 0;
          }
          uVar5 = uVar11;
          if (uVar11 == 0) goto LAB_10008e3f;
        }
        uVar5 = uVar11;
      } while (uVar11 != 0);
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
    }
LAB_100091c6:
    uVar3 = local_50;
    do {
      uVar15 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar16 = (uint)(byte)((char)uVar15 + 0x37);
      if (uVar15 < 10) {
        uVar16 = uVar15 + 0x30;
      }
      PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_e0 + 1);
          do {
            *(char *)(param_3 + uVar6) = (char)uVar16;
            uVar6 = uVar6 + 1;
            uVar16 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar24) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_100096b7;
        (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
      }
      uVar9 = (ulong)local_34;
      uVar21 = local_54;
    }
LAB_100096b7:
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      uVar11 = local_48 + 4;
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((uVar11 >> 0x20 != 0) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_1000972d;
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar11,4,&local_4c);
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x2f])(uVar11,4,&local_4c);
      }
      uVar9 = (ulong)local_34;
      uVar21 = local_54;
    }
LAB_1000972d:
    if (param_3 != 0) {
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = 'n';
        pcVar8 = str_1000eada;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar11 = 0;
      do {
        uVar6 = uVar11;
        uVar11 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar11 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
        uVar6 = uVar11;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
    }
    iVar22 = 8;
    do {
      while( true ) {
        uVar16 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
        cVar12 = (char)uVar16;
        cVar7 = cVar12 + '7';
        if (uVar16 < 10) {
          cVar7 = cVar12 + '0';
        }
        if (param_3 != 0) break;
        iVar22 = iVar22 + -1;
        if (iVar22 == 0) goto LAB_100098b4;
      }
      uVar11 = 0;
      do {
        pcVar8 = (char *)(param_3 + uVar11);
        uVar11 = uVar11 + 1;
      } while (*pcVar8 != '\0');
      if (uVar11 < 0x400) {
        *(char *)(param_3 + -1 + uVar11) = cVar7;
        *(undefined1 *)(param_3 + uVar11) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar11 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
      uVar6 = uVar11;
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar6 + 1 < 0x400) {
      cVar12 = 'n';
      pcVar8 = str_1000eae6;
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar6) = cVar12;
        uVar6 = uVar6 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar6 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
    uVar11 = 0;
    do {
      uVar6 = uVar11;
      uVar11 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
    if (uVar11 < 0x400) {
      *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
      uVar6 = uVar11;
    }
    *(undefined1 *)(param_3 + uVar6) = 0;
LAB_100098b4:
    iVar22 = 8;
    do {
      uVar16 = local_4c >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
      cVar12 = (char)uVar16;
      cVar7 = cVar12 + '7';
      if (uVar16 < 10) {
        cVar7 = cVar12 + '0';
      }
      if (param_3 != 0) {
        uVar11 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar8 != '\0');
        if (uVar11 < 0x400) {
          *(char *)(param_3 + -1 + uVar11) = cVar7;
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
LAB_1000990d:
    uVar21 = uVar21 | uVar14;
  }
LAB_1000991e:
  local_38 = 0;
  uVar14 = 0;
  if (param_2[8] == '\x03') {
    uVar14 = *(uint *)(param_2 + 0x14);
    local_54 = uVar21;
    if ((uVar14 & 1) == 0 && uVar14 != 0) {
      iVar22 = 0;
      if ((uVar14 & 6) == 4) {
        iVar22 = *(int *)(param_2 + 0x18);
      }
      uVar14 = uVar14 & 0xfffffff0;
      if (uVar14 == 0 && iVar22 == 0) goto LAB_10009a2d;
      local_48 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10009a2d;
      if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
        if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
           ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
          uVar11 = 0;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar14,0,0x1000,&local_e0);
          uVar9 = (ulong)local_34;
          if (iVar22 != 0) {
            local_48 = local_e0 & 0xffffffff;
            bVar24 = true;
            bVar23 = true;
            if (param_3 == 0) goto LAB_1000a1e0;
            goto LAB_10009b7f;
          }
        }
        goto LAB_10009a2d;
      }
      iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar14,iVar22,0x1000,&local_48);
      uVar9 = (ulong)local_34;
      if (iVar22 == 0) goto LAB_10009a2d;
      if (param_3 == 0) {
LAB_1000a1e0:
        bVar24 = local_48 >> 0x20 != 0;
        iVar22 = (uint)bVar24 * 8 + 8;
        bVar2 = true;
        bVar23 = true;
      }
      else {
        uVar11 = 0;
        bVar24 = true;
        bVar23 = true;
LAB_10009b7f:
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          uVar6 = uVar5 + 1;
        } while (*(char *)(param_3 + uVar5) != '\0');
        if (uVar5 + 1 < 0x400) {
          cVar12 = ' ';
          pcVar8 = str_1000eb19;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar5) = cVar12;
            uVar5 = uVar5 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar5 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar5) = 0;
        if (bVar24) {
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(undefined2 *)(param_3 + -1 + uVar11) = 0x30;
          }
        }
        else {
          bVar24 = false;
LAB_1000a082:
          uVar6 = 0;
          do {
            uVar21 = (uint)uVar11;
            uVar13 = (uVar11 & 0xffffffff) / 10;
            *(byte *)((long)&local_e0 + uVar6) = (char)uVar11 + (char)uVar13 * -10 | 0x30;
            uVar5 = uVar6 + 1;
            if (8 < uVar6) break;
            uVar6 = uVar5;
            uVar11 = uVar13;
          } while (9 < uVar21);
LAB_1000a0cc:
          do {
            uVar11 = uVar5 - 1;
            if (bVar24) {
              uVar5 = uVar11;
              if (uVar11 == 0) {
                bVar24 = local_48 >> 0x20 != 0;
                iVar22 = (uint)bVar24 * 8 + 8;
                bVar2 = true;
                goto LAB_1000a1f9;
              }
              goto LAB_1000a0cc;
            }
            uVar6 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar6);
              uVar6 = uVar6 + 1;
            } while (*pcVar8 != '\0');
            if (uVar6 < 0x400) {
              *(byte *)(param_3 + -1 + uVar6) = (&bStack_e1)[uVar5];
              *(undefined1 *)(param_3 + uVar6) = 0;
            }
            uVar5 = uVar11;
          } while (uVar11 != 0);
        }
        bVar24 = local_48 >> 0x20 != 0;
        iVar22 = (uint)bVar24 * 8 + 8;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar6 + 1 < 0x400) {
          cVar12 = 'd';
          pcVar8 = str_1000eb2a;
          do {
            pcVar8 = pcVar8 + 1;
            *(char *)(param_3 + uVar6) = cVar12;
            uVar6 = uVar6 + 1;
            cVar12 = *pcVar8;
            if (cVar12 == '\0') break;
          } while (uVar6 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        uVar11 = 0;
        do {
          uVar6 = uVar11;
          uVar11 = uVar6 + 1;
        } while (*(char *)(param_3 + uVar6) != '\0');
        if (uVar11 < 0x400) {
          *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
          uVar6 = uVar11;
        }
        *(undefined1 *)(param_3 + uVar6) = 0;
        bVar2 = false;
      }
LAB_1000a1f9:
      do {
        uVar14 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
        uVar21 = (uint)(byte)((char)uVar14 + 0x37);
        if (uVar14 < 10) {
          uVar21 = uVar14 + 0x30;
        }
        PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
        if (!bVar2) {
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(param_3 + uVar6) != '\0');
          if (uVar6 + 1 < 0x400) {
            pbVar17 = (byte *)((long)&local_e0 + 1);
            do {
              *(char *)(param_3 + uVar6) = (char)uVar21;
              uVar6 = uVar6 + 1;
              uVar21 = (uint)*pbVar17;
              if (*pbVar17 == 0) break;
              pbVar17 = pbVar17 + 1;
            } while (uVar6 < 0x3ff);
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
        }
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
          if ((!bVar24) && (0x6b < (uint)param_1[2])) {
            if ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
              local_70 = param_1;
              iVar22 = (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
              goto LAB_1000a2fd;
            }
          }
        }
        else {
          local_70 = param_1;
          iVar22 = (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
LAB_1000a2fd:
          uVar9 = (ulong)local_34;
          param_1 = local_70;
          if (iVar22 == 0) {
          }
          else {
            if (!bVar2) {
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x20;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar6 + 1 < 0x400) {
                cVar12 = 'd';
                pcVar8 = str_1000eb36;
                do {
                  pcVar8 = pcVar8 + 1;
                  *(char *)(param_3 + uVar6) = cVar12;
                  uVar6 = uVar6 + 1;
                  cVar12 = *pcVar8;
                  if (cVar12 == '\0') break;
                } while (uVar6 < 0x3ff);
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
              uVar11 = 0;
              do {
                uVar6 = uVar11;
                uVar11 = uVar6 + 1;
              } while (*(char *)(param_3 + uVar6) != '\0');
              if (uVar11 < 0x400) {
                *(undefined1 *)(param_3 + -1 + uVar11) = 0x3d;
                uVar6 = uVar11;
              }
              *(undefined1 *)(param_3 + uVar6) = 0;
            }
            iVar22 = 8;
            do {
              uVar21 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
              cVar12 = (char)uVar21;
              cVar7 = cVar12 + '7';
              if (uVar21 < 10) {
                cVar7 = cVar12 + '0';
              }
              if (!bVar2) {
                uVar11 = 0;
                do {
                  pcVar8 = (char *)(param_3 + uVar11);
                  uVar11 = uVar11 + 1;
                } while (*pcVar8 != '\0');
                if (uVar11 < 0x400) {
                  *(char *)(param_3 + -1 + uVar11) = cVar7;
                  *(undefined1 *)(param_3 + uVar11) = 0;
                }
              }
              iVar22 = iVar22 + -1;
            } while (iVar22 != 0);
          }
        }
      }
    }
    else {
LAB_10009a2d:
      bVar23 = true;
      uVar11 = 1;
      lVar20 = 5;
      do {
        if ((*(uint *)(param_2 + uVar11 * 4 + 0x10) & 7) != 4) {
          uVar3 = *(uint *)(param_2 + uVar11 * 4 + 0x14);
          if ((uVar3 & 1) == 0 && uVar3 != 0) {
            iVar22 = 0;
            if ((uVar3 & 6) == 4) {
              if (lVar20 == 1) break;
              iVar22 = *(int *)(param_2 + uVar11 * 4 + 0x18);
            }
            uVar3 = uVar3 & 0xfffffff0;
            if (uVar3 != 0 || iVar22 != 0) {
              local_48 = 0;
              local_e0 = local_e0 & 0xffffffff00000000;
              if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
                if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)
                   ) {
                  if (0x67 < (uint)param_1[2] && iVar22 == 0) {
                    if ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0) {
                      local_68 = param_2;
                      iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000,&local_e0);
                      uVar9 = (ulong)local_34;
                      param_2 = local_68;
                      if (iVar22 != 0) {
                        local_48 = local_e0 & 0xffffffff;
                        goto LAB_10009b70;
                      }
                    }
                  }
                }
                else {
                  local_68 = param_2;
                  iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
                  uVar9 = (ulong)local_34;
                  param_2 = local_68;
                  if (iVar22 != 0) {
LAB_10009b70:
                    param_2 = local_68;
                    uVar3 = local_50;
                    if (param_3 != 0) {
                      bVar24 = false;
                      goto LAB_10009b7f;
                    }
                    bVar24 = true;
                    goto LAB_1000a082;
                  }
                }
              }
            }
          }
        }
        bVar23 = uVar11 < 5;
        uVar11 = uVar11 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      bVar23 = false;
      uVar3 = local_50;
    }
    uVar14 = (uint)bVar23;
    uVar21 = local_54;
  }
  uVar21 = uVar21 | uVar14 | uVar3;
  if (uVar21 != 0) goto LAB_1000aa71;
  local_38 = 0;
  uVar3 = *(uint *)(param_2 + 0x14);
  if ((uVar3 & 1) == 0 && uVar3 != 0) {
    iVar22 = 0;
    if ((uVar3 & 6) == 4) {
      iVar22 = *(int *)(param_2 + 0x18);
    }
    uVar3 = uVar3 & 0xfffffff0;
    if (uVar3 == 0 && iVar22 == 0) goto LAB_10009d1d;
    local_48 = 0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if (((char)uVar9 != '\0') || (*param_1 != 0x54584b57)) goto LAB_10009d1d;
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
         ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
        uVar11 = 0;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000,&local_e0);
        uVar9 = (ulong)local_34;
        if (iVar22 != 0) {
          local_48 = local_e0 & 0xffffffff;
          bVar24 = true;
          bVar23 = true;
          if (param_3 == 0) goto LAB_1000a338;
          goto LAB_10009e8a;
        }
      }
      goto LAB_10009d1d;
    }
    iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
    uVar9 = (ulong)local_34;
    if (iVar22 == 0) goto LAB_10009d1d;
    if (param_3 == 0) {
LAB_1000a338:
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      bVar2 = true;
      bVar23 = true;
    }
    else {
      uVar11 = 0;
      bVar24 = true;
      bVar23 = true;
LAB_10009e8a:
      uVar9 = 0;
      do {
        uVar6 = uVar9;
        uVar9 = uVar6 + 1;
      } while (*(char *)(param_3 + uVar6) != '\0');
      if (uVar6 + 1 < 0x400) {
        cVar12 = ' ';
        pcVar8 = str_1000eb42;
        do {
          pcVar8 = pcVar8 + 1;
          *(char *)(param_3 + uVar6) = cVar12;
          uVar6 = uVar6 + 1;
          cVar12 = *pcVar8;
          if (cVar12 == '\0') break;
        } while (uVar6 < 0x3ff);
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      if (bVar24) {
        uVar9 = 0;
        do {
          pcVar8 = (char *)(param_3 + uVar9);
          uVar9 = uVar9 + 1;
        } while (*pcVar8 != '\0');
        if (uVar9 < 0x400) {
          *(undefined2 *)(param_3 + -1 + uVar9) = 0x30;
        }
      }
      else {
        bVar24 = false;
LAB_10009f09:
        uVar9 = 0;
        do {
          uVar3 = (uint)uVar11;
          uVar5 = (uVar11 & 0xffffffff) / 10;
          *(byte *)((long)&local_e0 + uVar9) = (char)uVar11 + (char)uVar5 * -10 | 0x30;
          uVar6 = uVar9 + 1;
          if (8 < uVar9) break;
          uVar9 = uVar6;
          uVar11 = uVar5;
        } while (9 < uVar3);
LAB_10009f53:
        do {
          uVar9 = uVar6 - 1;
          if (bVar24) {
            uVar6 = uVar9;
            if (uVar9 == 0) {
              bVar24 = local_48 >> 0x20 != 0;
              iVar22 = (uint)bVar24 * 8 + 8;
              bVar2 = true;
              goto LAB_1000a351;
            }
            goto LAB_10009f53;
          }
          uVar11 = 0;
          do {
            pcVar8 = (char *)(param_3 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar8 != '\0');
          if (uVar11 < 0x400) {
            *(byte *)(param_3 + -1 + uVar11) = (&bStack_e1)[uVar6];
            *(undefined1 *)(param_3 + uVar11) = 0;
          }
          uVar6 = uVar9;
        } while (uVar9 != 0);
      }
      bVar24 = local_48 >> 0x20 != 0;
      iVar22 = (uint)bVar24 * 8 + 8;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      uVar9 = 0xffffffffffffffff;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + 1 + uVar11) != '\0');
      if (uVar11 + 2 < 0x400) {
        *(undefined1 *)(uVar9 + param_3) = 0x6d;
        uVar6 = uVar11 + 2;
        if (uVar9 != 0x3fe) {
          *(undefined1 *)(param_3 + 1 + uVar9) = 0x6d;
          uVar6 = uVar11 + 3;
          if (uVar11 + 3 < 0x3ff) {
            *(undefined1 *)(param_3 + 2 + uVar9) = 0x69;
            uVar6 = uVar11 + 4;
            if (uVar11 + 4 < 0x3ff) {
              *(undefined1 *)(param_3 + 3 + uVar9) = 0x6f;
              uVar9 = uVar11 + 5;
              goto LAB_1000a04a;
            }
          }
        }
      }
      else {
LAB_1000a04a:
        uVar6 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar6) = 0;
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 + 1;
      } while (*(char *)(param_3 + uVar11) != '\0');
      if (uVar9 < 0x400) {
        *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
        uVar11 = uVar9;
      }
      *(undefined1 *)(param_3 + uVar11) = 0;
      bVar2 = false;
    }
LAB_1000a351:
    do {
      uVar21 = (uint)(local_48 >> ((char)iVar22 * '\x04' - 4U & 0x3f)) & 0xf;
      uVar3 = (uint)(byte)((char)uVar21 + 0x37);
      if (uVar21 < 10) {
        uVar3 = uVar21 + 0x30;
      }
      PF_PART2(local_e0, 0) = (ushort)(byte)local_e0;
      if (!bVar2) {
        uVar9 = 0;
        do {
          uVar11 = uVar9;
          uVar9 = uVar11 + 1;
        } while (*(char *)(param_3 + uVar11) != '\0');
        if (uVar11 + 1 < 0x400) {
          pbVar17 = (byte *)((long)&local_e0 + 1);
          do {
            *(char *)(param_3 + uVar11) = (char)uVar3;
            uVar11 = uVar11 + 1;
            uVar3 = (uint)*pbVar17;
            if (*pbVar17 == 0) break;
            pbVar17 = pbVar17 + 1;
          } while (uVar11 < 0x3ff);
        }
        *(undefined1 *)(param_3 + uVar11) = 0;
      }
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    if ((local_48 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
        if (((bVar24) || ((uint)param_1[2] < 0x6c)) ||
           ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0)) goto LAB_10009e6f;
        iVar22 = (*(code *)(ulong)(uint)param_1[0x1a])(local_48,4,&local_38);
      }
      else {
        iVar22 = (*(code *)(ulong)(uint)param_1[0x2f])(local_48,4,&local_38);
      }
      if (iVar22 != 0) {
        if (!bVar2) {
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x20;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
          uVar9 = 0xffffffffffffffff;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + 1 + uVar11) != '\0');
          if (uVar11 + 2 < 0x400) {
            *(undefined1 *)(param_3 + uVar9) = 0x6d;
            uVar6 = uVar11 + 2;
            if (uVar9 != 0x3fe) {
              *(undefined1 *)(param_3 + 1 + uVar9) = 0x6d;
              uVar6 = uVar11 + 3;
              if (uVar11 + 3 < 0x3ff) {
                *(undefined1 *)(param_3 + 2 + uVar9) = 0x69;
                uVar6 = uVar11 + 4;
                if (uVar11 + 4 < 0x3ff) {
                  *(undefined1 *)(param_3 + 3 + uVar9) = 0x6f;
                  uVar6 = uVar11 + 5;
                  if (uVar11 + 5 < 0x3ff) {
                    *(undefined1 *)(uVar11 + 5 + param_3) = 0x52;
                    uVar6 = uVar11 + 6;
                    if (uVar11 + 6 < 0x3ff) {
                      *(undefined1 *)(param_3 + 5 + uVar9) = 0x65;
                      uVar6 = uVar11 + 7;
                      if (uVar11 + 7 < 0x3ff) {
                        *(undefined1 *)(param_3 + 6 + uVar9) = 0x67;
                        uVar6 = uVar11 + 8;
                        if (uVar11 + 8 < 0x3ff) {
                          *(undefined1 *)(param_3 + 7 + uVar9) = 0x30;
                          uVar9 = uVar11 + 9;
                          goto LAB_1000c238;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1000c238:
            uVar6 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar6) = 0;
          uVar9 = 0;
          do {
            uVar11 = uVar9;
            uVar9 = uVar11 + 1;
          } while (*(char *)(param_3 + uVar11) != '\0');
          if (uVar9 < 0x400) {
            *(undefined1 *)(param_3 + -1 + uVar9) = 0x3d;
            uVar11 = uVar9;
          }
          *(undefined1 *)(param_3 + uVar11) = 0;
        }
        iVar22 = 8;
        do {
          uVar3 = local_38 >> ((char)iVar22 * '\x04' - 4U & 0x1f) & 0xf;
          cVar12 = (char)uVar3;
          cVar7 = cVar12 + '7';
          if (uVar3 < 10) {
            cVar7 = cVar12 + '0';
          }
          if (!bVar2) {
            uVar9 = 0;
            do {
              pcVar8 = (char *)(param_3 + uVar9);
              uVar9 = uVar9 + 1;
            } while (*pcVar8 != '\0');
            if (uVar9 < 0x400) {
              *(char *)(param_3 + -1 + uVar9) = cVar7;
              *(undefined1 *)(param_3 + uVar9) = 0;
            }
          }
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
      }
    }
  }
  else {
LAB_10009d1d:
    bVar23 = true;
    uVar11 = 1;
    lVar20 = 5;
    local_68 = param_2;
    do {
      if (((*(uint *)(local_68 + uVar11 * 4 + 0x10) & 7) != 4) &&
         (uVar3 = *(uint *)(local_68 + uVar11 * 4 + 0x14), (uVar3 & 1) == 0 && uVar3 != 0)) {
        iVar22 = 0;
        if ((uVar3 & 6) == 4) {
          if (lVar20 == 1) break;
          iVar22 = *(int *)(local_68 + uVar11 * 4 + 0x18);
        }
        uVar3 = uVar3 & 0xfffffff0;
        if (uVar3 != 0 || iVar22 != 0) {
          local_48 = 0;
          local_e0 = local_e0 & 0xffffffff00000000;
          if (((char)uVar9 == '\0') && (*param_1 == 0x54584b57)) {
            if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
              if ((0x67 < (uint)param_1[2] && iVar22 == 0) &&
                 ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) {
                iVar22 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,0x1000,&local_e0);
                uVar9 = (ulong)local_34;
                if (iVar22 != 0) {
                  local_48 = local_e0 & 0xffffffff;
                  goto joined_r0x10009e63;
                }
              }
            }
            else {
              iVar22 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar22,0x1000,&local_48);
              uVar9 = (ulong)local_34;
              if (iVar22 != 0) {
joined_r0x10009e63:
                if (param_3 != 0) {
                  bVar24 = false;
                  goto LAB_10009e8a;
                }
                bVar24 = true;
                goto LAB_10009f09;
              }
            }
          }
        }
      }
      bVar23 = uVar11 < 5;
      uVar11 = uVar11 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    bVar23 = false;
  }
LAB_10009e6f:
  uVar21 = (uint)bVar23;
LAB_1000aa71:
  pcVar8 = str_1000e7b5;
  if (uVar21 == 0) {
    pcVar8 = str_1000e7c5;
  }
  if (param_3 != 0) {
    uVar9 = 0;
    do {
      uVar11 = uVar9;
      uVar9 = uVar11 + 1;
    } while (*(char *)(param_3 + uVar11) != '\0');
    if ((uVar11 + 1 < 0x400) && (cVar12 = *pcVar8, cVar12 != '\0')) {
      do {
        pcVar8 = pcVar8 + 1;
        *(char *)(param_3 + uVar11) = cVar12;
        uVar11 = uVar11 + 1;
        cVar12 = *pcVar8;
        if (cVar12 == '\0') break;
      } while (uVar11 < 0x3ff);
    }
    *(undefined1 *)(param_3 + uVar11) = 0;
  }
  return;
}

#undef str_1000e7b5
#undef str_1000e7c5
#undef str_1000e7d9
#undef str_1000e7f1
#undef str_1000e809
#undef str_1000e822
#undef str_1000e833
#undef str_1000e843
#undef str_1000e852
#undef str_1000e86e
#undef str_1000e879
#undef str_1000e889
#undef str_1000e899
#undef str_1000e8a6
#undef str_1000e8bc
#undef str_1000e8d2
#undef str_1000e8e8
#undef str_1000e8fe
#undef str_1000e917
#undef str_1000e92f
#undef str_1000e93c
#undef str_1000e94d
#undef str_1000e961
#undef str_1000e971
#undef str_1000e988
#undef str_1000e99b
#undef str_1000e9a5
#undef str_1000e9b8
#undef str_1000e9cf
#undef str_1000e9db
#undef str_1000e9e7
#undef str_1000e9f4
#undef str_1000e9fe
#undef str_1000ea12
#undef str_1000ea21
#undef str_1000ea34
#undef str_1000ea46
#undef str_1000ea5c
#undef str_1000ea66
#undef str_1000ea72
#undef str_1000ea87
#undef str_1000ea93
#undef str_1000ea9e
#undef str_1000eaa8
#undef str_1000eabd
#undef str_1000eace
#undef str_1000eada
#undef str_1000eae6
#undef str_1000eaf2
#undef str_1000eb01
#undef str_1000eb0b
#undef str_1000eb19
#undef str_1000eb2a
#undef str_1000eb36
#undef str_1000eb42
#undef bStack_e1
#undef local_e0
#undef local_d0
#undef local_c8
#undef local_c0
#undef local_bc
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_38
#undef local_34

#undef str_1000ec29
#define str_1000ec29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x691U)))
#undef str_1000ec34
#define str_1000ec34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69cU)))
#undef str_1000ec43
#define str_1000ec43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6abU)))
#undef str_1000ec54
#define str_1000ec54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bcU)))
#undef str_1000ec67
#define str_1000ec67 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6cfU)))
#undef str_1000ec7a
#define str_1000ec7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e2U)))
#undef str_1000ec8a
#define str_1000ec8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f2U)))
#undef str_1000ec99
#define str_1000ec99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x701U)))
#undef str_1000eca8
#define str_1000eca8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x710U)))
#undef str_1000ecb9
#define str_1000ecb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x721U)))
#undef str_1000ecc4
#define str_1000ecc4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72cU)))
#undef str_1000ecd0
#define str_1000ecd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x738U)))
#undef str_1000ecda
#define str_1000ecda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x742U)))
#undef str_1000ece3
#define str_1000ece3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74bU)))
#undef str_1000ecee
#define str_1000ecee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x756U)))
#undef str_1000ecf7
#define str_1000ecf7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x75fU)))
#undef str_1000ecff
#define str_1000ecff (*(char (*)[1])(((uintptr_t)pf_module_state + 0x767U)))
#undef str_1000ed08
#define str_1000ed08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x770U)))
#undef str_1000ed0f
#define str_1000ed0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x777U)))
#undef str_1000ed22
#define str_1000ed22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x78aU)))
#undef str_1000ed35
#define str_1000ed35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79dU)))
#undef str_1000ed48
#define str_1000ed48 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c3b0
 */

char * recovered_1000c3b0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  char *pcVar2;

  pcVar2 = str_1000ec29;
  if (param_1 != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x10ec) {
      if (uVar1 < 0x106b) {
        if (uVar1 == 0x1013) {
          if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
            return str_1000ece3;
          }
        }
        else if ((uVar1 == 0x1033) && (*(short *)(param_1 + 6) == 0x194)) {
          return str_1000ecda;
        }
      }
      else if (uVar1 == 0x106b) {
        if (*(short *)(param_1 + 6) == 0x21) goto LAB_1000c4c6;
      }
      else if ((uVar1 == 0x108e) && (*(short *)(param_1 + 6) == 0x2bad)) {
LAB_1000c4c6:
        return str_1000ed08;
      }
    }
    else if (uVar1 < 0x1af4) {
      if (uVar1 == 0x10ec) {
        if (*(short *)(param_1 + 6) == -0x7fd7) {
          return str_1000ecff;
        }
      }
      else if ((uVar1 == 0x1234) && (*(short *)(param_1 + 6) == 0x1111)) {
        return str_1000ecee;
      }
    }
    else if (uVar1 == 0x8086) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_1000ecc4;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_1000c56a;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_1000ecd0;
      }
    }
    else if (uVar1 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_1000ecf7;
      }
    }
    else if (uVar1 == 0x1af4) {
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
      case 0x1041:
        return str_1000ec34;
      case 0x1001:
      case 0x1042:
        return str_1000ec43;
      case 0x1002:
      case 0x1045:
        return str_1000ec54;
      case 0x1003:
      case 0x1043:
        return str_1000ec67;
      case 0x1004:
      case 0x1048:
        return str_1000ec7a;
      case 0x1005:
      case 0x1044:
        return str_1000ec8a;
      default:
        return str_1000ecb9;
      case 0x1050:
        return str_1000ec99;
      case 0x1052:
        return str_1000eca8;
      }
    }
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      return str_1000ed35;
    case 2:
      return str_1000ed22;
    case 3:
      return str_1000ed0f;
    case 4:
      pcVar2 = str_1000ed48;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_1000c56a:
        pcVar2 = recovered_1000dcf0((uint)*(byte *)(param_1 + 10));
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

#undef str_1000ec29
#undef str_1000ec34
#undef str_1000ec43
#undef str_1000ec54
#undef str_1000ec67
#undef str_1000ec7a
#undef str_1000ec8a
#undef str_1000ec99
#undef str_1000eca8
#undef str_1000ecb9
#undef str_1000ecc4
#undef str_1000ecd0
#undef str_1000ecda
#undef str_1000ece3
#undef str_1000ecee
#undef str_1000ecf7
#undef str_1000ecff
#undef str_1000ed08
#undef str_1000ed0f
#undef str_1000ed22
#undef str_1000ed35
#undef str_1000ed48

#define local_48 (*(int *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(uint *)(frame + 48))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(uint *)(frame + 56))
#define local_34 (*(uint *)(frame + 60))
#define local_60 (*(int *)(frame + 16))
#define local_5c (*(uint *)(frame + 20))
#define local_58 (*(ulong *)(frame + 24))
#define local_50 (*(ulong *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c740
 */

bool recovered_1000c740(int *param_1,undefined1 *param_2,long *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;

  local_34 = 0;
  if (param_3 == (long *)0x0) {
    bVar7 = false;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined1 *)((long)param_3 + lVar3) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 1) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 2) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 3) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 4) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 5) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 6) = 0;
      *(undefined1 *)((long)param_3 + lVar3 + 7) = 0;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x70);
    bVar7 = false;
    if ((((param_2 != (undefined1 *)0x0) && ((param_2[0x12] & 0x10) != 0)) &&
        (param_1 != (int *)0x0)) &&
       (((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
        ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)))) {
      iVar2 = (*(code *)(ulong)(uint)param_1[0x17])(*param_2,param_2[1],param_2[2],0x34,1,&local_34)
      ;
      bVar7 = false;
      if (iVar2 != 0) {
        if (local_34 - 0x40 < 0xb0) {
          uVar6 = 0;
          while( true ) {
            local_60 = 0;
            local_5c = 0;
            local_48 = 0;
            local_38 = 0;
            local_44 = 0;
            local_40 = 0;
            if (((*param_1 != 0x54584b57) || ((uint)param_1[2] < 0x60)) ||
               ((((code *)(ulong)(uint)param_1[0x17] == (code *)0x0 ||
                 (((iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                      (*param_2,param_2[1],param_2[2],local_34 & 0xffff,1,&local_60)
                   , iVar2 == 0 || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)))) ||
                (((code *)(ulong)(uint)param_1[0x17] == (code *)0x0 ||
                 (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                    (*param_2,param_2[1],param_2[2],local_34 + 1 & 0xffff,1,
                                     &local_5c), iVar2 == 0)))))) break;
            if (((local_60 == 9) &&
                (((((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
                   (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0 &&
                    (((((iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                           (*param_2,param_2[1],param_2[2],local_34 + 3 & 0xffff,1,
                                            &local_48), iVar2 != 0 && (*param_1 == 0x54584b57)) &&
                       (0x5f < (uint)param_1[2])) &&
                      (((code *)(ulong)(uint)param_1[0x17] != (code *)0x0 &&
                       (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                          (*param_2,param_2[1],param_2[2],local_34 + 4 & 0xffff,1,
                                           &local_38), iVar2 != 0)))) && (*param_1 == 0x54584b57))))
                   )) && ((0x5f < (uint)param_1[2] &&
                          ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)))) &&
                 (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                    (*param_2,param_2[1],param_2[2],local_34 + 8 & 0xffff,4,
                                     &local_44), iVar2 != 0)))) &&
               ((((*param_1 == 0x54584b57 && (0x5f < (uint)param_1[2])) &&
                 ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                   (*param_2,param_2[1],param_2[2],local_34 + 0xc & 0xffff,4,
                                    &local_40), iVar2 != 0)))) {
              local_50 = 0;
              *(int *)((long)param_3 + 0x34) = *(int *)((long)param_3 + 0x34) + 1;
              if (((((local_48 == 1) && (local_58 = (ulong)local_44, !CARRY4(local_40,local_44))) &&
                   ((uVar4 = (ulong)local_38, local_38 < 6 && (local_40 != 0)))) &&
                  ((uVar4 == 0 || ((*(uint *)(param_2 + (ulong)(local_38 - 1) * 4 + 0x14) & 7) != 4)
                   ))) && (uVar1 = *(uint *)(param_2 + uVar4 * 4 + 0x14),
                          (uVar1 & 1) == 0 && uVar1 != 0)) {
                iVar2 = 0;
                if ((uVar1 & 6) == 4) {
                  if (4 < local_38) goto LAB_1000cb68;
                  iVar2 = *(int *)(param_2 + uVar4 * 4 + 0x18);
                }
                if (((local_40 + local_44 != 0) && ((uVar1 & 0xfffffff0) != 0 || iVar2 != 0)) &&
                   (local_3c = 0, *param_1 == 0x54584b57)) {
                  if (((uint)param_1[2] < 0xbc) ||
                     ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
                    if ((!((uint)param_1[2] < 0x68 || iVar2 != 0)) &&
                       (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                        (iVar2 = (*(code *)(ulong)(uint)param_1[0x19])
                                           (uVar1 & 0xfffffff0,0,local_40 + local_44,&local_3c),
                        iVar2 != 0)))) {
                      uVar4 = (ulong)local_3c;
                      goto LAB_1000cb51;
                    }
                  }
                  else {
                    iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
                    if (iVar2 != 0) {
                      uVar4 = local_50;
LAB_1000cb51:
                      *param_3 = uVar4 + local_58;
                      *(uint *)(param_3 + 4) = local_38;
                      goto LAB_1000cd4e;
                    }
                  }
                }
              }
LAB_1000cb68:
              if (((((local_48 == 2) && (local_58 = (ulong)local_44, !CARRY4(local_40,local_44))) &&
                   (uVar4 = (ulong)local_38, local_38 < 6)) && (local_40 != 0)) &&
                 (((uVar4 == 0 || ((*(uint *)(param_2 + (ulong)(local_38 - 1) * 4 + 0x14) & 7) != 4)
                   ) && (uVar1 = *(uint *)(param_2 + uVar4 * 4 + 0x14),
                        (uVar1 & 1) == 0 && uVar1 != 0)))) {
                iVar2 = 0;
                if ((uVar1 & 6) == 4) {
                  if (4 < local_38) goto LAB_1000ccde;
                  iVar2 = *(int *)(param_2 + uVar4 * 4 + 0x18);
                }
                if ((local_40 + local_44 != 0) && ((uVar1 & 0xfffffff0) != 0 || iVar2 != 0)) {
                  local_50 = 0;
                  local_3c = 0;
                  if (*param_1 == 0x54584b57) {
                    if (((uint)param_1[2] < 0xbc) ||
                       ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
                      if ((0x67 < (uint)param_1[2] && iVar2 == 0) &&
                         (((code *)(ulong)(uint)param_1[0x19] != (code *)0x0 &&
                          (iVar2 = (*(code *)(ulong)(uint)param_1[0x19])
                                             (uVar1 & 0xfffffff0,0,local_40 + local_44,&local_3c),
                          iVar2 != 0)))) {
                        local_50 = (ulong)local_3c;
                        goto LAB_1000cc72;
                      }
                    }
                    else {
                      iVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
                      if (iVar2 != 0) {
LAB_1000cc72:
                        local_50 = local_50 + local_58;
                        local_3c = 0;
                        param_3[1] = local_50;
                        *(uint *)((long)param_3 + 0x24) = local_38;
                        if ((((*param_1 == 0x54584b57) && (0x5f < (uint)param_1[2])) &&
                            ((code *)(ulong)(uint)param_1[0x17] != (code *)0x0)) &&
                           (iVar2 = (*(code *)(ulong)(uint)param_1[0x17])
                                              (*param_2,param_2[1],param_2[2],
                                               local_34 + 0x10 & 0xffff,4,&local_3c), iVar2 != 0)) {
                          *(uint *)(param_3 + 6) = local_3c;
                        }
                        goto LAB_1000cd4e;
                      }
                    }
                  }
                }
              }
LAB_1000ccde:
              if ((local_48 == 3) &&
                 (uVar5 = recovered_1000d630(param_1,(long)param_2,local_38,local_44,local_40,
                                             &local_50), (int)uVar5 != 0)) {
                param_3[2] = local_50;
                *(uint *)(param_3 + 5) = local_38;
              }
              else if ((local_48 == 4) &&
                      (uVar5 = recovered_1000d630(param_1,(long)param_2,local_38,local_44,local_40,
                                                  &local_50), (int)uVar5 != 0)) {
                param_3[3] = local_50;
                *(uint *)((long)param_3 + 0x2c) = local_38;
              }
            }
LAB_1000cd4e:
            if ((((local_5c == 0) || (local_5c == local_34)) || (local_34 = local_5c, 0x1e < uVar6))
               || (uVar6 = uVar6 + 1, 0xaf < local_5c - 0x40)) break;
          }
        }
        bVar7 = *param_3 != 0;
      }
    }
  }
  return bVar7;
}

#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_60
#undef local_5c
#undef local_58
#undef local_50

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cda0
 */

void recovered_1000cda0(int *param_1,ulong *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  local_1c = 0;
  if (param_2 == (ulong *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
    return;
  }
  if (*param_1 == 0x54584b57) {
    uVar2 = *param_2 + 0x14;
    if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
      if ((uVar2 >> 0x20 == 0) &&
         ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
        (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1);
      }
    }
    else {
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1);
    }
  }
  if (*param_2 != 0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 0x14;
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,0);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,0);
      }
    }
    uVar2 = *param_2;
    if ((uVar2 != 0) && (*param_1 == 0x54584b57)) {
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
           ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,0);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,0);
      }
      if (*param_2 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar2 = *param_2 + 4;
          if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4);
          }
        }
        uVar2 = *param_2;
        if ((uVar2 != 0) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
               ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,1);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,1);
          }
          if ((*param_2 != 0) && (*param_1 == 0x54584b57)) {
            uVar2 = *param_2 + 4;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if (((uVar2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) &&
                 ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)) {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,4);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,4);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(uint *)((long)param_2 + 0x44) = *(uint *)((long)param_2 + 0x3c) & 1;
  if (*param_2 != 0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 8;
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,0);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,0);
      }
    }
    if (*param_2 != 0) {
      if (*param_1 == 0x54584b57) {
        uVar2 = *param_2 + 0xc;
        if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
          if ((uVar2 >> 0x20 == 0) &&
             ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
            (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4);
          }
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4);
        }
      }
      if (*param_2 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar2 = *param_2 + 8;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,1);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,1);
          }
        }
        if (*param_2 != 0) {
          if (*param_1 != 0x54584b57) goto LAB_1000d1fd;
          uVar2 = *param_2 + 0xc;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4);
          }
        }
      }
    }
  }
  if (((*param_1 == 0x54584b57) && (0x7b < (uint)param_1[2])) &&
     ((code *)(ulong)(uint)param_1[0x1e] != (code *)0x0)) {
    (*(code *)(ulong)(uint)param_1[0x1e])();
  }
LAB_1000d1fd:
  if (*param_2 != 0) {
    if (*param_1 == 0x54584b57) {
      uVar2 = *param_2 + 0x14;
      if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
        if ((uVar2 >> 0x20 == 0) &&
           ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
          (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,1);
        }
      }
      else {
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,1);
      }
    }
    if (*param_2 != 0) {
      if (*param_1 == 0x54584b57) {
        uVar2 = *param_2 + 0x14;
        if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
          if ((uVar2 >> 0x20 == 0) &&
             ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
            (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,3);
          }
        }
        else {
          (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,3);
        }
      }
      if (*param_2 != 0) {
        if (*param_1 == 0x54584b57) {
          uVar2 = *param_2 + 0x14;
          if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
            if ((uVar2 >> 0x20 == 0) &&
               ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
              (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,1,0xb);
            }
          }
          else {
            (*(code *)(ulong)(uint)param_1[0x30])(uVar2,1,0xb);
          }
        }
        if (*param_2 != 0) {
          if (*param_1 == 0x54584b57) {
            uVar2 = *param_2 + 0x14;
            if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
              if ((uVar2 >> 0x20 == 0) &&
                 ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))))
              {
                (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1);
              }
            }
            else {
              (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1);
            }
          }
          if (*param_2 != 0) {
            if (*param_1 == 0x54584b57) {
              uVar2 = *param_2 + 0x12;
              if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0))
              {
                if ((uVar2 >> 0x20 == 0) &&
                   ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0))
                   )) {
                  (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,2);
                }
              }
              else {
                (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2);
              }
            }
            if (*param_2 != 0) {
              if (*param_1 == 0x54584b57) {
                uVar2 = *param_2 + 0x15;
                if (((uint)param_1[2] < 0xc0) || ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)
                   ) {
                  if ((uVar2 >> 0x20 == 0) &&
                     ((0x6b < (uint)param_1[2] &&
                      ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,1);
                  }
                }
                else {
                  (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,1);
                }
              }
              if (*param_2 != 0) {
                if (*param_1 == 0x54584b57) {
                  uVar2 = *param_2 + 0x16;
                  if (((uint)param_1[2] < 0xc4) ||
                     ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
                    if ((uVar2 >> 0x20 == 0) &&
                       ((0x6f < (uint)param_1[2] &&
                        ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                      (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,2,0);
                    }
                  }
                  else {
                    (*(code *)(ulong)(uint)param_1[0x30])(uVar2,2,0);
                  }
                }
                if (*param_2 != 0) {
                  if (*param_1 == 0x54584b57) {
                    uVar2 = *param_2 + 0x18;
                    if (((uint)param_1[2] < 0xc0) ||
                       ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                      if ((uVar2 >> 0x20 == 0) &&
                         ((0x6b < (uint)param_1[2] &&
                          ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                        (*(code *)(ulong)(uint)param_1[0x1a])
                                  (uVar2 & 0xffffffff,2,(long)param_2 + 0x54);
                      }
                    }
                    else {
                      (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2);
                    }
                  }
                  if (*param_2 != 0) {
                    if (*param_1 == 0x54584b57) {
                      uVar2 = *param_2 + 0x1c;
                      if (((uint)param_1[2] < 0xc0) ||
                         ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                        if ((uVar2 >> 0x20 == 0) &&
                           ((0x6b < (uint)param_1[2] &&
                            ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                          (*(code *)(ulong)(uint)param_1[0x1a])(uVar2 & 0xffffffff,2,param_2 + 0xb);
                        }
                      }
                      else {
                        (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2);
                      }
                    }
                    if ((*param_2 != 0) && (*param_1 == 0x54584b57)) {
                      uVar2 = *param_2 + 0x1e;
                      if (((uint)param_1[2] < 0xc0) ||
                         ((code *)(ulong)(uint)param_1[0x2f] == (code *)0x0)) {
                        if (uVar2 >> 0x20 != 0) {
                          return;
                        }
                        if ((uint)param_1[2] < 0x6c) {
                          return;
                        }
                        if ((code *)(ulong)(uint)param_1[0x1a] == (code *)0x0) {
                          return;
                        }
                        iVar1 = (*(code *)(ulong)(uint)param_1[0x1a])
                                          (uVar2 & 0xffffffff,2,&local_1c);
                      }
                      else {
                        iVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar2,2,&local_1c);
                      }
                      if (iVar1 != 0) {
                        *(uint *)((long)param_2 + 0x5c) = local_1c;
                        if (param_2[1] != 0) {
                          param_2[0xc] = (ulong)(uint)param_2[6] * (ulong)local_1c + param_2[1];
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
  return;
}

#undef local_1c

#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d630
 */

undefined8
recovered_1000d630(int *param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  uVar2 = 0;
  iVar3 = param_5 + param_4;
  if (((((!CARRY4(param_5,param_4)) && (param_5 != 0)) && (param_3 < 6)) &&
      (param_6 != (ulong *)0x0)) &&
     ((param_3 == 0 || ((*(uint *)(param_2 + 0x14 + (ulong)(param_3 - 1) * 4) & 7) != 4)))) {
    uVar4 = *(uint *)(param_2 + 0x14 + (ulong)param_3 * 4);
    if ((uVar4 & 1) == 0 && uVar4 != 0) {
      uVar2 = 0;
      iVar5 = 0;
      if ((uVar4 & 6) == 4) {
        if (4 < param_3) {
          return 0;
        }
        iVar5 = *(int *)(param_2 + 0x18 + (ulong)param_3 * 4);
      }
      uVar4 = uVar4 & 0xfffffff0;
      if ((iVar3 != 0) && (uVar4 != 0 || iVar5 != 0)) {
        *param_6 = 0;
        local_1c = 0;
        if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
          if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
            if ((uint)param_1[2] < 0x68 || iVar5 != 0) {
              return 0;
            }
            if ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0) {
              return 0;
            }
            iVar3 = (*(code *)(ulong)(uint)param_1[0x19])(uVar4,0,iVar3,&local_1c);
            if (iVar3 == 0) {
              return 0;
            }
            uVar1 = (ulong)local_1c;
          }
          else {
            iVar3 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar4,iVar5,iVar3,param_6);
            if (iVar3 == 0) {
              return 0;
            }
            uVar1 = *param_6;
          }
          *param_6 = param_4 + uVar1;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d790
 */

void recovered_1000d790(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0 && param_4 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xbf < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2f] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000d7db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1a])(uVar1 & 0xffffffff,1,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d810
 */

void recovered_1000d810(int *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = param_2 + 0x14;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000d848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000d868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,1);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d870
 */

void recovered_1000d870(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0 && param_4 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xbf < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x2f] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000d8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,2,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6b < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1a] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000d8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1a])(uVar1 & 0xffffffff,2,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8f0
 */

void recovered_1000d8f0(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar1 = (param_3 & 0xffffffff) + param_2;
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000d92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return;
    }
    if ((uVar1 >> 0x20 == 0) &&
       ((0x6f < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x1000d951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)(uint)param_1[0x1b])(uVar1 & 0xffffffff,2,param_4);
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d960
 */

void recovered_1000d960(int *param_1,long param_2,uint param_3,undefined4 param_4,undefined4 param_5
                       )

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  if (((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0x54584b57)) {
    uVar2 = (ulong)param_3 + param_2;
    if (((uint)param_1[2] < 0xc4) || ((code *)(ulong)(uint)param_1[0x30] == (code *)0x0)) {
      if (uVar2 >> 0x20 != 0) {
        return;
      }
      if ((uint)param_1[2] < 0x70) {
        return;
      }
      if ((code *)(ulong)(uint)param_1[0x1b] == (code *)0x0) {
        return;
      }
      iVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar2 & 0xffffffff,4,param_4);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4,param_4);
    }
    if ((iVar1 != 0) && (*param_1 == 0x54584b57)) {
      uVar2 = (ulong)param_3 + param_2 + 4;
      if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000da38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)(uint)param_1[0x30])(uVar2,4);
        return;
      }
      if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
         ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000da5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)(uint)param_1[0x1b])(uVar2,4,param_5);
        return;
      }
    }
  }
  return;
}


#undef str_1000ec12
#define str_1000ec12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67aU)))
#define abStack_13 (*(byte (*)[11])(frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000da70
 */

void recovered_1000da70(long param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;

  if (param_1 == 0) {
    if ((int)param_2 == 0) goto joined_r0x1000dcc2;
LAB_1000db41:
    uVar2 = 0;
    do {
      uVar4 = (uint)param_2;
      uVar6 = (param_2 & 0xffffffff) / 10;
      abStack_13[uVar2 + 1] = (char)param_2 + (char)uVar6 * -10 | 0x30;
      uVar1 = uVar2 + 1;
      if (8 < uVar2) break;
      uVar2 = uVar1;
      param_2 = uVar6;
    } while (9 < uVar4);
LAB_1000db98:
    do {
      uVar2 = uVar1 - 1;
      if (param_1 == 0) {
        uVar1 = uVar2;
        if (uVar2 == 0) goto joined_r0x1000dcc2;
        goto LAB_1000db98;
      }
      uVar6 = 0;
      do {
        pcVar3 = (char *)(param_1 + uVar6);
        uVar6 = uVar6 + 1;
      } while (*pcVar3 != '\0');
      if (uVar6 < 0x400) {
        *(byte *)(param_1 + -1 + uVar6) = abStack_13[uVar1];
        *(undefined1 *)(param_1 + uVar6) = 0;
      }
      uVar1 = uVar2;
    } while (uVar2 != 0);
    if (param_1 == 0) goto joined_r0x1000dcc2;
  }
  else {
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 + 1;
    } while (*(char *)(param_1 + uVar1) != '\0');
    if (uVar1 + 1 < 0x400) {
      cVar5 = ' ';
      pcVar3 = str_1000ec12;
      do {
        pcVar3 = pcVar3 + 1;
        *(char *)(param_1 + uVar1) = cVar5;
        uVar1 = uVar1 + 1;
        cVar5 = *pcVar3;
        if (cVar5 == '\0') break;
      } while (uVar1 < 0x3ff);
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
    uVar2 = 0;
    do {
      pcVar3 = (char *)(param_1 + uVar2);
      uVar2 = uVar2 + 1;
    } while (*pcVar3 != '\0');
    if (uVar2 < 0x400) {
      *(undefined2 *)(param_1 + -1 + uVar2) = 0x30;
    }
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 + 1;
    } while (*(char *)(param_1 + uVar1) != '\0');
    if (uVar2 < 0x400) {
      *(undefined1 *)(param_1 + -1 + uVar2) = 0x3d;
      uVar1 = uVar2;
    }
    *(undefined1 *)(param_1 + uVar1) = 0;
    if ((int)param_2 != 0) goto LAB_1000db41;
    uVar2 = 0;
    do {
      pcVar3 = (char *)(param_1 + uVar2);
      uVar2 = uVar2 + 1;
    } while (*pcVar3 != '\0');
    if (uVar2 < 0x400) {
      *(undefined2 *)(param_1 + -1 + uVar2) = 0x30;
    }
  }
  uVar2 = 0;
  do {
    uVar1 = uVar2;
    uVar2 = uVar1 + 1;
  } while (*(char *)(param_1 + uVar1) != '\0');
  if (uVar2 < 0x400) {
    *(undefined1 *)(param_1 + -1 + uVar2) = 0x78;
    uVar1 = uVar2;
  }
  *(undefined1 *)(param_1 + uVar1) = 0;
joined_r0x1000dcc2:
  if ((int)param_3 == 0) {
    if (param_1 != 0) {
      uVar2 = 0;
      do {
        pcVar3 = (char *)(param_1 + uVar2);
        uVar2 = uVar2 + 1;
      } while (*pcVar3 != '\0');
      if (uVar2 < 0x400) {
        *(undefined2 *)(param_1 + -1 + uVar2) = 0x30;
      }
    }
  }
  else {
    uVar2 = 0;
    do {
      uVar4 = (uint)param_3;
      uVar6 = (param_3 & 0xffffffff) / 10;
      abStack_13[uVar2 + 1] = (char)param_3 + (char)uVar6 * -10 | 0x30;
      uVar1 = uVar2 + 1;
      if (8 < uVar2) break;
      uVar2 = uVar1;
      param_3 = uVar6;
    } while (9 < uVar4);
    do {
      if (param_1 != 0) {
        uVar2 = 0;
        do {
          pcVar3 = (char *)(param_1 + uVar2);
          uVar2 = uVar2 + 1;
        } while (*pcVar3 != '\0');
        if (uVar2 < 0x400) {
          *(byte *)(param_1 + -1 + uVar2) = abStack_13[uVar1];
          *(undefined1 *)(param_1 + uVar2) = 0;
        }
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

#undef str_1000ec12
#undef abStack_13

#undef DAT_1000ed5e
#define DAT_1000ed5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7c6U)))
#undef DAT_1000ed63
#define DAT_1000ed63 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7cbU)))
#undef DAT_1000ed68
#define DAT_1000ed68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d0U)))
#undef DAT_1000ed6d
#define DAT_1000ed6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7d5U)))
#undef str_1000ed72
#define str_1000ed72 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7daU)))
#undef str_1000ed7d
#define str_1000ed7d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e5U)))
#undef str_1000ed86
#define str_1000ed86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7eeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dcf0
 */

char * recovered_1000dcf0(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 < 0x30) {
    if (param_1 == 0) {
      return &DAT_1000ed5e;
    }
    if (param_1 == 0x10) {
      return &DAT_1000ed63;
    }
    if (param_1 == 0x20) {
      return &DAT_1000ed68;
    }
  }
  else {
    if (param_1 == 0x30) {
      return &DAT_1000ed6d;
    }
    if (param_1 == 0x80) {
      return str_1000ed72;
    }
    if (param_1 == 0xfe) {
      return str_1000ed7d;
    }
  }
  return str_1000ed86;
}

#undef DAT_1000ed5e
#undef DAT_1000ed63
#undef DAT_1000ed68
#undef DAT_1000ed6d
#undef str_1000ed72
#undef str_1000ed7d
#undef str_1000ed86

#define local_68 (*(long *)(frame + 24))
#define local_60 (*(long *)(frame + 32))
#define local_48 (*(long *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd60
 */

uint32_t recovered_1000dd60(long param_1,uint param_2)

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
                    if (uVar36 == uVar20) goto LAB_1000e140;
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
LAB_1000e140:
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
              if (uVar22 == uVar26) goto LAB_1000def0;
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
LAB_1000def0:
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
