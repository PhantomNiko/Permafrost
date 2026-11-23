/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint *)(((uintptr_t)pf_module_state + 0x4604U)))
#undef str_10003ce0
#define str_10003ce0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10003d0a
#define str_10003d0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#undef str_10003d1b
#define str_10003d1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x273U)))
#define auStack_cb0 (*(undefined1 (*)[3248])(pf_stack_frame + 16))
#define iStack_ca0 (*(int *)(pf_stack_frame + 32))
#define auStack_c98 (*(undefined1 (*)[3224])(pf_stack_frame + 40))
#define iStack_c64 (*(int *)(pf_stack_frame + 92))
#define iStack_c60 (*(int *)(pf_stack_frame + 96))
#define iStack_c5c (*(int *)(pf_stack_frame + 100))
#define auStack_a20 (*(undefined1 (*)[2592])(pf_stack_frame + 672))
#define iStack_6c4 (*(int *)(pf_stack_frame + 1532))
#define iStack_6c0 (*(int *)(pf_stack_frame + 1536))
#define iStack_6bc (*(int *)(pf_stack_frame + 1540))
#define uStack_6b4 (*(uint *)(pf_stack_frame + 1548))
#define lStack_508 (*(long *)(pf_stack_frame + 1976))
#define lStack_4f0 (*(long *)(pf_stack_frame + 2000))
#define uStack_4cc (*(uint *)(pf_stack_frame + 2036))
#define iStack_4c8 (*(int *)(pf_stack_frame + 2040))
#define cStack_4c4 (*(char *)(pf_stack_frame + 2044))
#define iStack_4c0 (*(int *)(pf_stack_frame + 2048))
#define iStack_4bc (*(int *)(pf_stack_frame + 2052))
#define cStack_480 (*(char *)(pf_stack_frame + 2112))
#define uStack_47f (*(undefined1 *)(pf_stack_frame + 2113))
#define uStack_47c (*(uint *)(pf_stack_frame + 2116))
#define uStack_478 (*(uint *)(pf_stack_frame + 2120))
#define uStack_45c (*(undefined8 *)(pf_stack_frame + 2148))
#define uStack_450 (*(undefined8 *)(pf_stack_frame + 2160))
#define uStack_448 (*(undefined8 *)(pf_stack_frame + 2168))
#define uStack_440 (*(undefined8 *)(pf_stack_frame + 2176))
#define auStack_3a8 (*(undefined1 (*)[936])(pf_stack_frame + 2328))
#define auStack_360 (*(undefined1 (*)[864])(pf_stack_frame + 2400))
#define uStack_168 (*(uint *)(pf_stack_frame + 2904))
#define uStack_164 (*(uint *)(pf_stack_frame + 2908))
#define uStack_160 (*(uint *)(pf_stack_frame + 2912))
#define iStack_158 (*(int *)(pf_stack_frame + 2920))
#define iStack_154 (*(int *)(pf_stack_frame + 2924))
#define iStack_150 (*(int *)(pf_stack_frame + 2928))
#define iStack_140 (*(int *)(pf_stack_frame + 2944))
#define lStack_138 (*(long *)(pf_stack_frame + 2952))
#define uStack_130 (*(ulong *)(pf_stack_frame + 2960))
#define auStack_124 (*(undefined1 (*)[292])(pf_stack_frame + 2972))
#define cStack_114 (*(char *)(pf_stack_frame + 2988))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 2992))
#define uStack_10c (*(undefined8 *)(pf_stack_frame + 2996))
#define uStack_104 (*(undefined8 *)(pf_stack_frame + 3004))
#define uStack_ec (*(undefined8 *)(pf_stack_frame + 3028))
#define uStack_e4 (*(undefined8 *)(pf_stack_frame + 3036))
#define uStack_dc (*(undefined8 *)(pf_stack_frame + 3044))
#define uStack_d4 (*(undefined8 *)(pf_stack_frame + 3052))
#define uStack_cc (*(undefined8 *)(pf_stack_frame + 3060))
#define uStack_c4 (*(undefined8 *)(pf_stack_frame + 3068))
#define local_c84 (*(uint *)(pf_stack_frame + 60))
#define local_c58 (*(uint *)(pf_stack_frame + 104))
#define local_a1c (*(uint *)(pf_stack_frame + 676))
#define local_a18 (*(uint *)(pf_stack_frame + 680))
#define local_9f0 (*(long *)(pf_stack_frame + 720))
#define local_6d0 (*(long *)(pf_stack_frame + 1520))
#define local_6c8 (*(uint *)(pf_stack_frame + 1528))
#define local_6b8 (*(undefined4 *)(pf_stack_frame + 1544))
#define local_6b0 (*(undefined4 *)(pf_stack_frame + 1552))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005f0
 */

undefined8 recovered_100005f0(void)

{
  unsigned char pf_stack_frame[3296] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int coordinate;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;

  thunk_memset(auStack_a20,0,0x8b8);
  thunk_pf_app_window_spec(auStack_c98,str_10003d0a,DAT_100080a8,DAT_100080ac);
  local_c84 = thunk_terror_ui_colour(0);
  local_c58 = local_c58 | 1;
  uVar8 = thunk_terror_ui_window_open(auStack_a20,auStack_c98);
  if (uVar8 != 0) {
    local_6d0 = local_9f0;
    if (local_9f0 != 0) {
      DAT_100080a8 = local_a1c;
      DAT_100080ac = local_a18;
      local_6c8 = 0;
      local_6b8 = 0xffffffff;
      local_6b0 = 0xffffffff;
      terror_ui_window_set_custom_menus(auStack_a20,str_10003d1b);
      recovered_10000c70((long)auStack_a20);
      recovered_10001518((long)auStack_a20);
      while( true ) {
        terror_ui_window_begin_frame(auStack_a20);
        thunk_memset(auStack_c98,0,0x278);
        uVar12 = local_a18;
        uVar8 = local_a1c;
        uVar9 = thunk_terror_ui_window_query(auStack_a20,auStack_c98);
        if (((uVar9 == 0) || (bVar6 = thunk_terror_ui_window_info_requests_close(auStack_c98), (bVar6 & 1) != 0)) ||
           (uVar9 = thunk_terror_ui_window_sync_buffer(auStack_a20,auStack_c98), uVar9 == 0)) break;
        local_6d0 = local_9f0;
        DAT_100080a8 = local_a1c;
        DAT_100080ac = local_a18;
        if (local_a1c != uVar8 || local_a18 != uVar12) {
          recovered_10001518((long)auStack_a20);
        }
        if (((iStack_c64 != 0) && (iStack_c64 != iStack_6bc)) &&
           (iStack_6bc = iStack_c64, iStack_c60 == 1)) {
          if (iStack_c5c == 2) {
            recovered_1000251c((long)auStack_a20);
            recovered_10001518((long)auStack_a20);
          }
          else if (iStack_c5c == 1) {
            recovered_10002444((long)auStack_a20);
          }
          else if (iStack_c5c == 0) {
            recovered_100023d4((long)auStack_a20);
          }
        }
        thunk_memset(&uStack_168,0,0x30);
        uVar10 = terror_ui_window_pointer_state_ex(auStack_a20,&uStack_168);
        coordinate = iStack_150;
        iVar4 = iStack_154;
        iVar3 = iStack_158;
        uVar9 = uStack_160;
        uVar12 = uStack_164;
        uVar8 = uStack_168;
        iVar11 = iStack_4c8;
        if (uVar10 != 0) {
          iStack_4c8 = iStack_140;
          iVar11 = iStack_140 - iVar11;
          if (((iVar11 != 0) && ((uStack_168 >> 1 & 1) != 0)) &&
             (bVar7 = recovered_1000280c(iStack_154,iStack_150,0x7c00000010,
                                         (ulong)(DAT_100080a8 - 0x20) | 0xc600000000), bVar7)) {
            uVar10 = 0;
            if (10 < uStack_47c) {
              uVar10 = uStack_47c - 0xb;
            }
            lVar13 = (long)iVar11 + (long)iVar11 * -4 + (ulong)uStack_4cc;
            if (lVar13 <= (long)(ulong)uVar10) {
              uVar10 = (uint)lVar13 & ((uint)(lVar13 >> 0x3f) ^ 0xffffffff);
            }
            if (uStack_4cc != uVar10) {
              uStack_4cc = uVar10;
              recovered_10001518((long)auStack_a20);
            }
          }
          if (cStack_4c4 == '\x01') {
            if ((uVar12 & 1) == 0) {
              cStack_4c4 = '\0';
            }
            else if (coordinate != iStack_4bc) {
              recovered_10002838(auStack_124,(long)auStack_a20);
              lStack_138 = (ulong)(uStack_47c - 0xb) << 0x20;
              if (uStack_47c < 0xb || uStack_47c - 0xb == 0) {
                lStack_138 = 0;
              }
              uStack_130 = (ulong)uStack_4cc | 0xb00000000;
              iStack_4bc = coordinate;
              if (cStack_114 == '\x01') {
                uVar10 = thunk_terror_ui_scrollbar_value_from_point(auStack_110,&lStack_138,coordinate,iStack_4c0);
                uVar12 = 0;
                if (10 < uStack_47c) {
                  uVar12 = uStack_47c - 0xb;
                }
                if ((long)(int)uVar10 <= (long)(ulong)uVar12) {
                  uVar12 = uVar10 & ((int)uVar10 >> 0x3f ^ 0xffffffffU);
                }
                if (uStack_4cc != uVar12) {
                  uStack_4cc = uVar12;
                  recovered_10001518((long)auStack_a20);
                }
              }
            }
          }
          if ((((uVar9 & 1) != 0) && ((uVar8 >> 1 & 1) != 0)) && (iVar3 != iStack_6c0)) {
            iStack_6c0 = iVar3;
            recovered_10002838(auStack_124,(long)auStack_a20);
            if ((cStack_114 == '\x01') &&
               (bVar7 = recovered_1000280c(iVar4,coordinate,uStack_10c,uStack_104), bVar7)) {
              bVar7 = recovered_1000280c(iVar4,coordinate,uStack_ec,uStack_e4);
              if (bVar7) {
                lVar13 = (ulong)uStack_4cc - 1;
                uVar8 = 0;
                if (10 < uStack_47c) {
                  uVar8 = uStack_47c - 0xb;
                }
                if (lVar13 <= (long)(ulong)uVar8) {
                  uVar8 = (uint)lVar13 & ((uint)(lVar13 >> 0x3f) ^ 0xffffffff);
                }
                if (uStack_4cc != uVar8) {
LAB_100008d8:
                  uStack_4cc = uVar8;
                }
              }
              else {
                bVar7 = recovered_1000280c(iVar4,coordinate,uStack_dc,uStack_d4);
                uVar5 = uStack_c4;
                uVar14 = uStack_cc;
                if (bVar7) {
                  uVar8 = 0;
                  if (10 < uStack_47c) {
                    uVar8 = uStack_47c - 0xb;
                  }
                  if ((ulong)uStack_4cc + 1 < (ulong)uVar8) {
                    uVar8 = uStack_4cc + 1;
                  }
                  if (uStack_4cc != uVar8) {
                    uStack_4cc = uVar8;
                  }
                }
                else {
                  bVar7 = recovered_1000280c(iVar4,coordinate,uStack_cc,uStack_c4);
                  if (bVar7) {
                    cStack_4c4 = '\x01';
                    iStack_4c0 = coordinate - (int)((ulong)uVar14 >> 0x20);
                    iStack_4bc = coordinate;
                  }
                  else {
                    lStack_138 = (ulong)(uStack_47c - 0xb) << 0x20;
                    if (uStack_47c < 0xb || uStack_47c - 0xb == 0) {
                      lStack_138 = 0;
                    }
                    uStack_130 = (ulong)uStack_4cc | 0xb00000000;
                    uVar12 = thunk_terror_ui_scrollbar_value_from_point(auStack_110,&lStack_138,coordinate,
                                                (int)((ulong)uVar5 >> 0x20) / 2);
                    uVar8 = 0;
                    if (10 < uStack_47c) {
                      uVar8 = uStack_47c - 0xb;
                    }
                    if ((long)(int)uVar12 <= (long)(ulong)uVar8) {
                      uVar8 = uVar12 & ((int)uVar12 >> 0x3f ^ 0xffffffffU);
                    }
                    if (uStack_4cc != uVar8) goto LAB_100008d8;
                  }
                }
              }
            }
            else {
              uVar8 = iVar4 - 0x5c;
              if (0xffffffb3 < uVar8 && 0xffffffed < coordinate - 0x1eU) {
                recovered_100023d4((long)auStack_a20);
                goto LAB_10000b2c;
              }
              if (uVar8 < 0xffffffb4 || coordinate - 0x34U < 0xffffffee) {
                if (uVar8 < 0xffffffb4 || coordinate - 0x4aU < 0xffffffee) {
                  bVar7 = recovered_1000280c(iVar4,coordinate,0x7c00000010,
                                             (ulong)(DAT_100080a8 - 0x20) | 0xc600000000);
                  if (bVar7) {
                    uVar8 = uStack_4cc + (coordinate + -0x7c) / 0x12;
                    if (uVar8 < uStack_47c) {
                      local_6b8 = *(undefined4 *)(lStack_4f0 + (ulong)uVar8 * 0x1b8);
                      goto LAB_10000b28;
                    }
                  }
                  else {
                    if (((local_6c8 & 0xfffffffe) == 2) &&
                       (iVar4 - 0x46U < 0xfa && coordinate - 0x188U < 0x16)) {
                      recovered_100028b8((long)auStack_a20);
                      if (uStack_478 == 0) {
                        local_6b0 = 0xffffffff;
                      }
                      else {
                        uVar8 = 0;
                        if (uStack_478 != 0) {
                          uVar8 = (uStack_6b4 + 1) / uStack_478;
                        }
                        uStack_6b4 = (uStack_6b4 + 1) - uVar8 * uStack_478;
                        local_6b0 = *(undefined4 *)(lStack_508 + (ulong)uStack_6b4 * 0x28 + 0x1c);
                      }
                      thunk_memset(auStack_3a8,0,0x48);
                      thunk_memset(auStack_360,0,0x48);
                      uStack_47f = 0;
                      uStack_45c = 0;
                      uStack_448 = 0;
                      uStack_450 = 0;
                      uStack_440 = 0;
                      recovered_10000c70((long)auStack_a20);
                      goto LAB_10000b28;
                    }
                    lVar13 = 0;
                    for (uVar15 = 0; uVar15 != 5; uVar15 = uVar15 + 1) {
                      uVar14 = 0x1800000088;
                      if (uVar15 != 1) {
                        uVar14 = 0x1800000074;
                      }
                      lVar1 = 0xda;
                      if (uVar15 < 2) {
                        lVar1 = 0xc6;
                      }
                      uVar2 = (ulong)((int)(lVar1 + lVar13) + 0x14);
                      if (uVar15 < 3) {
                        uVar2 = lVar1 + lVar13;
                      }
                      bVar7 = recovered_1000280c(iVar4,coordinate,uVar2 | 0x16400000000,uVar14);
                      if (bVar7) {
                        local_6c8 = (uint)uVar15;
                        goto LAB_10000b28;
                      }
                      lVar13 = lVar13 + 0x74;
                    }
                  }
                  goto LAB_10000b2c;
                }
                recovered_1000251c((long)auStack_a20);
              }
              else {
                recovered_10002444((long)auStack_a20);
              }
            }
LAB_10000b28:
            recovered_10001518((long)auStack_a20);
          }
        }
LAB_10000b2c:
        thunk_memset(auStack_cb0,0,0x18);
        bVar7 = recovered_10002344(0x168);
        if (bVar7) {
          uVar8 = UINT_82010968;
          if (uVar8 == 0) goto LAB_10000b5c;
          iVar11 = (*(code *)(ulong)uVar8)(auStack_cb0);
          bVar7 = iVar11 == 0;
        }
        else {
LAB_10000b5c:
          bVar7 = true;
        }
        if ((cStack_480 != '\x01') || ((!bVar7 && (0x11 < (uint)(iStack_ca0 - iStack_6c4))))) {
          recovered_10000c70((long)auStack_a20);
          recovered_10001518((long)auStack_a20);
        }
        thunk_terror_ui_yield_frames(4);
      }
      thunk_terror_ui_window_close(auStack_a20);
      uVar14 = 0;
      goto LAB_10000bd8;
    }
    thunk_terror_ui_window_close(auStack_a20);
  }
  bVar7 = recovered_10002344(0x28);
  if (bVar7) {
    uVar8 = UINT_82010828;
    if (uVar8 != 0) {
      (*(code *)(ulong)uVar8)(str_10003ce0);
    }
  }
  uVar14 = 1;
LAB_10000bd8:
  recovered_10000c04((long)auStack_a20);
  return uVar14;
}

#undef DAT_100080a8
#undef DAT_100080ac
#undef str_10003ce0
#undef str_10003d0a
#undef str_10003d1b
#undef auStack_cb0
#undef iStack_ca0
#undef auStack_c98
#undef iStack_c64
#undef iStack_c60
#undef iStack_c5c
#undef auStack_a20
#undef iStack_6c4
#undef iStack_6c0
#undef iStack_6bc
#undef uStack_6b4
#undef lStack_508
#undef lStack_4f0
#undef uStack_4cc
#undef iStack_4c8
#undef cStack_4c4
#undef iStack_4c0
#undef iStack_4bc
#undef cStack_480
#undef uStack_47f
#undef uStack_47c
#undef uStack_478
#undef uStack_45c
#undef uStack_450
#undef uStack_448
#undef uStack_440
#undef auStack_3a8
#undef auStack_360
#undef uStack_168
#undef uStack_164
#undef uStack_160
#undef iStack_158
#undef iStack_154
#undef iStack_150
#undef iStack_140
#undef lStack_138
#undef uStack_130
#undef auStack_124
#undef cStack_114
#undef auStack_110
#undef uStack_10c
#undef uStack_104
#undef uStack_ec
#undef uStack_e4
#undef uStack_dc
#undef uStack_d4
#undef uStack_cc
#undef uStack_c4
#undef local_c84
#undef local_c58
#undef local_a1c
#undef local_a18
#undef local_9f0
#undef local_6d0
#undef local_6c8
#undef local_6b8
#undef local_6b0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c04
 */

void recovered_10000c04(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002390(*(undefined8 *)(param_1 + 0x518));
  recovered_10002390(*(undefined8 *)(param_1 + 0x520));
  recovered_10002390(*(undefined8 *)(param_1 + 0x530));
  recovered_10002390(*(undefined8 *)(param_1 + 0x538));
  recovered_10002390(*(undefined8 *)(param_1 + 0x540));
  recovered_10002390(*(undefined8 *)(param_1 + 0x548));
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x5a4) = 0;
  return;
}


#undef UINT_820108b8
#define UINT_820108b8 (*(uint *)(0x820108b8U))
#undef UINT_82010908
#define UINT_82010908 (*(uint *)(0x82010908U))
#undef UINT_82010910
#define UINT_82010910 (*(uint *)(0x82010910U))
#define local_2f8 (*(undefined8 *)(pf_stack_frame + 24))
#define iStack_2f0 (*(int *)(pf_stack_frame + 32))
#define bStack_2ec (*(byte *)(pf_stack_frame + 36))
#define uStack_2c4 (*(ulong *)(pf_stack_frame + 76))
#define uStack_2bc (*(ulong *)(pf_stack_frame + 84))
#define uStack_2b4 (*(ulong *)(pf_stack_frame + 92))
#define uStack_2ac (*(ulong *)(pf_stack_frame + 100))
#define aiStack_264 (*(int (*)[153])(pf_stack_frame + 172))
#define auStack_220 (*(undefined1 (*)[544])(pf_stack_frame + 240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c70
 */

void recovered_10000c70(long param_1)

{
  unsigned char pf_stack_frame[816] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  int *piVar16;
  int *piVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  long lVar32;

  local_2f8 = 0;
  if (param_1 == 0) {
    return;
  }
  bVar8 = *(int *)(param_1 + 0x368) == -1;
  thunk_memset(aiStack_264,0,0x44);
  thunk_memset(&iStack_2f0,0,0x8c);
  bVar9 = recovered_10002344(0x108);
  if (!bVar9) {
    return;
  }
  uVar31 = UINT_82010908;
  if (uVar31 == 0) {
    return;
  }
  iVar10 = (*(code *)(ulong)uVar31)(aiStack_264);
  if (iVar10 == 0) {
    return;
  }
  bVar7 = *(byte *)(param_1 + 0x5a0);
  uVar31 = (uint)bVar7;
  if ((bVar7 == 1) && (uVar11 = aiStack_264[0] - *(int *)(param_1 + 0x3b8), uVar11 != 0)) {
    uVar31 = uVar11;
  }
  bVar9 = recovered_10002344(0xb8);
  if (bVar9) {
    uVar11 = UINT_820108b8;
    if ((uVar11 == 0) || (iVar10 = (*(code *)(ulong)uVar11)(), iVar10 == 0)) goto LAB_10000d24;
  }
  else {
LAB_10000d24:
    iVar10 = 1;
  }
  *(int *)(param_1 + 0x5ac) = iVar10;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  recovered_100028b8(param_1);
  iVar10 = *(int *)(param_1 + 0x370);
  if ((-1 < iVar10) && (bVar9 = recovered_10002344(0x110), bVar9)) {
    uVar11 = UINT_82010910;
    if ((uVar11 != 0) && (iVar10 = (*(code *)(ulong)uVar11)(iVar10,&iStack_2f0), iVar10 != 0)) {
      thunk_memcpy((void *)(param_1 + 0x3fc),&iStack_2f0,0x8c);
      goto LAB_10000d7c;
    }
  }
  thunk_memset((void *)(param_1 + 0x3fc),0,0x8c);
LAB_10000d7c:
  uVar12 = recovered_10002b5c(0,0,(long)&local_2f8 + 4);
  if (((int)uVar12 != 0) && (-1 < (long)local_2f8)) {
    uVar11 = *(uint *)(param_1 + 0x550);
    uVar23 = (ulong)uVar11;
    if (uVar11 < PF_PART4(local_2f8, 4)) {
      uVar25 = 0x10;
      if (uVar11 != 0) {
        uVar25 = uVar11;
      }
      do {
        uVar11 = uVar25;
        uVar23 = (ulong)uVar11;
        uVar25 = uVar11 << 1;
      } while (uVar11 < PF_PART4(local_2f8, 4));
      pvVar13 = (void *)recovered_100027c0(uVar23 * 0x1b8);
      pvVar14 = (void *)recovered_100027c0(uVar23 << 4);
      uVar29 = uVar23 * 0x20 + (ulong)uVar11 * -4;
      pvVar15 = (void *)recovered_100027c0(uVar29);
      piVar16 = (int *)recovered_100027c0((ulong)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar11 * 0x1b4);
      if ((((pvVar13 == (void *)0x0) || (pvVar14 == (void *)0x0)) || (pvVar15 == (void *)0x0)) ||
         (piVar16 == (int *)0x0)) {
        recovered_10002390(pvVar13);
        recovered_10002390(pvVar14);
        recovered_10002390(pvVar15);
        recovered_10002390(piVar16);
        return;
      }
      thunk_memset(pvVar13,0,uVar23 * 0x1b8);
      thunk_memset(pvVar14,0,uVar23 << 4);
      thunk_memset(pvVar15,0,uVar29);
      if (*(uint *)(param_1 + 0x550) != 0) {
        thunk_memcpy(pvVar13,*(void **)(param_1 + 0x530),
                           (ulong)*(uint *)(param_1 + 0x550) * 0x1b8);
        thunk_memcpy(pvVar14,*(void **)(param_1 + 0x538),
                           (ulong)*(uint *)(param_1 + 0x550) << 4);
        thunk_memcpy(pvVar15,*(void **)(param_1 + 0x540),
                           (ulong)*(uint *)(param_1 + 0x550) * 0x1c);
      }
      recovered_10002390(*(undefined8 *)(param_1 + 0x530));
      recovered_10002390(*(undefined8 *)(param_1 + 0x538));
      recovered_10002390(*(undefined8 *)(param_1 + 0x540));
      recovered_10002390(*(undefined8 *)(param_1 + 0x548));
      *(void **)(param_1 + 0x530) = pvVar13;
      *(void **)(param_1 + 0x538) = pvVar14;
      *(void **)(param_1 + 0x540) = pvVar15;
      *(int **)(param_1 + 0x548) = piVar16;
      *(uint *)(param_1 + 0x550) = uVar11;
    }
    else {
      piVar16 = *(int **)(param_1 + 0x548);
    }
    uVar12 = recovered_10002b5c(piVar16,uVar23,&local_2f8);
    if ((int)uVar12 != 0) {
      uVar29 = local_2f8 & 0xffffffff;
      uVar23 = (ulong)*(uint *)(param_1 + 0x550);
      if (uVar29 <= uVar23) {
        for (uVar24 = 0; uVar24 < uVar23; uVar24 = uVar24 + 1) {
          if (*(char *)(*(long *)(param_1 + 0x540) + uVar24 * 0x1c + 0x18) != '\0') {
            piVar17 = (int *)(*(long *)(param_1 + 0x540) + uVar24 * 0x1c);
            lVar32 = uVar29 + 1;
            piVar26 = piVar16;
            do {
              lVar32 = lVar32 + -1;
              if (lVar32 == 0) {
                thunk_memset(piVar17,0,0x1c);
                uVar23 = (ulong)*(uint *)(param_1 + 0x550);
                break;
              }
              iVar10 = *piVar26;
              piVar26 = piVar26 + 0x6d;
            } while (iVar10 != *piVar17);
          }
        }
        uVar23 = 0;
        lVar32 = 0;
        lVar30 = 0;
        uVar11 = uVar31;
        if (uVar31 < 2) {
          uVar11 = 1;
        }
        uVar29 = (ulong)uVar11;
        while( true ) {
          uVar24 = local_2f8 & 0xffffffff;
          if (uVar24 <= uVar23) break;
          if (*(char *)(param_1 + 0x5a0) == '\x01') {
            lVar22 = 0xc;
            for (uVar24 = 0; *(uint *)(param_1 + 0x550) != uVar24; uVar24 = uVar24 + 1) {
              lVar2 = *(long *)(param_1 + 0x538) + lVar22;
              if ((*(char *)(lVar2 + -0xc) == '\x01') &&
                 (*(int *)(lVar2 + -8) == piVar16[uVar23 * 0x6d])) {
                if (uVar24 < *(uint *)(param_1 + 0x550)) {
                  uVar24 = (ulong)(uint)((piVar16 + uVar23 * 0x6d)[5] -
                                        *(int *)(*(long *)(param_1 + 0x538) + lVar22));
                  goto LAB_10001024;
                }
                break;
              }
              lVar22 = lVar22 + 0x10;
            }
          }
          uVar24 = 0;
LAB_10001024:
          piVar17 = piVar16 + uVar23 * 0x6d;
          thunk_memcpy((void *)(*(long *)(param_1 + 0x530) + uVar23 * 0x1b8),piVar17,0x1b4);
          iVar10 = *piVar17;
          piVar26 = (int *)0x0;
          for (lVar22 = 0; (ulong)*(uint *)(param_1 + 0x550) * 0x1c != lVar22;
              lVar22 = lVar22 + 0x1c) {
            piVar20 = (int *)(*(long *)(param_1 + 0x540) + lVar22);
            if ((char)piVar20[6] != '\0') {
              if (*piVar20 == iVar10) {
                piVar26 = (int *)(*(long *)(param_1 + 0x540) + lVar22);
                goto LAB_100010a8;
              }
              piVar20 = (int *)0x0;
            }
            if (piVar26 != (int *)0x0) {
              piVar20 = piVar26;
            }
            piVar26 = piVar20;
          }
          if (piVar26 == (int *)0x0) {
            piVar26 = *(int **)(param_1 + 0x540);
          }
          thunk_memset(piVar26,0,0x1c);
          *piVar26 = iVar10;
          iVar10 = *piVar17;
LAB_100010a8:
          uVar11 = *(uint *)(param_1 + 0x5ac);
          if (uVar11 < 2) {
            uVar11 = 1;
          }
          uVar21 = 0;
          if (uVar29 * uVar11 != 0) {
            uVar21 = (uVar24 * 1000) / (uVar29 * uVar11);
          }
          if (999 < uVar21) {
            uVar21 = 1000;
          }
          uVar11 = recovered_10002bbc(piVar26,iVar10,(uint)uVar21);
          *(uint *)(*(long *)(param_1 + 0x530) + uVar23 * 0x1b8 + 0x1b4) = uVar11;
          iVar10 = *piVar17;
          uVar28 = piVar17[1];
          uVar11 = uVar28 >> 0x10 & 0xff;
          uVar25 = uVar28 >> 2 & 1;
          if (uVar11 != 0) {
            uVar25 = uVar11;
          }
          *(uint *)(param_1 + 0x5b0) = uVar25 + *(int *)(param_1 + 0x5b0);
          iVar6 = 0;
          if (uVar25 <= (uint)piVar17[2]) {
            iVar6 = piVar17[2] - uVar25;
          }
          *(int *)(param_1 + 0x5b4) = iVar6 + *(int *)(param_1 + 0x5b4);
          bVar9 = (uVar28 & 1) != 0;
          uVar21 = 0;
          if (bVar9) {
            uVar21 = uVar24;
          }
          lVar32 = uVar21 + lVar32;
          if (bVar9) {
            uVar24 = 0;
          }
          lVar30 = uVar24 + lVar30;
          bVar8 = (bool)(iVar10 == *(int *)(param_1 + 0x368) | bVar8);
          uVar23 = uVar23 + 1;
        }
        *(uint *)(param_1 + 0x5a4) = (uint)local_2f8;
        uVar11 = 0;
        if (10 < (uint)local_2f8) {
          uVar11 = (uint)local_2f8 - 0xb;
        }
        if (uVar11 < *(uint *)(param_1 + 0x554)) {
          *(uint *)(param_1 + 0x554) = uVar11;
        }
        pvVar13 = *(void **)(param_1 + 0x530);
        if (1 < (uint)local_2f8 && pvVar13 != (void *)0x0) {
          uVar11 = (uint)local_2f8 >> 1;
          uVar25 = (uint)local_2f8;
          if (uVar11 == 0) goto LAB_100011a0;
LAB_10001188:
          uVar11 = uVar11 - 1;
          pvVar14 = (void *)((long)pvVar13 + (ulong)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar11 * 0x1b8);
          thunk_memcpy(auStack_220,pvVar14,0x1b4);
          uVar28 = *(uint *)((long)pvVar14 + 0x1b4);
          do {
            uVar25 = (uint)uVar24;
            uVar27 = uVar11;
            while (pvVar14 = (void *)((long)pvVar13 + (ulong)uVar27 * 0x1b8), uVar27 < uVar25 >> 1)
            {
              uVar5 = uVar27 << 1 | 1;
              uVar1 = uVar27 * 2 + 2;
              uVar27 = uVar5;
              if ((uVar1 < uVar25) &&
                 (uVar27 = uVar1,
                 *(uint *)((long)pvVar13 + (ulong)uVar5 * 0x1b8 + 0x1b4) <=
                 *(uint *)((long)pvVar13 + (ulong)uVar1 * 0x1b8 + 0x1b4))) {
                uVar27 = uVar5;
              }
              pvVar15 = (void *)((long)pvVar13 + (ulong)uVar27 * 0x1b8);
              if (uVar28 <= *(uint *)((long)pvVar15 + 0x1b4)) break;
              thunk_memcpy(pvVar14,pvVar15,0x1b8);
            }
            thunk_memcpy(pvVar14,auStack_220,0x1b4);
            *(uint *)((long)pvVar14 + 0x1b4) = uVar28;
            if (uVar11 != 0) goto LAB_10001188;
LAB_100011a0:
            uVar24 = (ulong)(uVar25 - 1);
            if (uVar25 - 1 == 0) break;
            pvVar14 = (void *)((long)pvVar13 + uVar24 * 0x1b8);
            thunk_memcpy(auStack_220,pvVar14,0x1b4);
            uVar28 = *(uint *)((long)pvVar14 + 0x1b4);
            thunk_memcpy(pvVar14,pvVar13,0x1b8);
            uVar11 = 0;
          } while( true );
        }
        if (!bVar8) {
          *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
          *(undefined1 *)(param_1 + 0x708) = 0;
        }
        uVar11 = *(uint *)(param_1 + 0x5ac);
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        uVar23 = 0;
        if (uVar29 * uVar11 != 0) {
          uVar23 = (ulong)(lVar30 * 1000) / (uVar29 * uVar11);
        }
        if (999 < uVar23) {
          uVar23 = 1000;
        }
        uVar11 = recovered_10002bbc((int *)(param_1 + 0x568),1,(uint)uVar23);
        *(uint *)(param_1 + 0x5b8) = uVar11;
        uVar11 = *(uint *)(param_1 + 0x5ac);
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        uVar23 = 0;
        if (uVar29 * uVar11 != 0) {
          uVar23 = (ulong)(lVar32 * 1000) / (uVar29 * uVar11);
        }
        if (999 < uVar23) {
          uVar23 = 1000;
        }
        uVar11 = recovered_10002bbc((int *)(param_1 + 0x584),0,(uint)uVar23);
        uVar25 = 1000 - *(int *)(param_1 + 0x5b8);
        if (uVar25 <= uVar11) {
          uVar11 = uVar25;
        }
        *(uint *)(param_1 + 0x5bc) = uVar11;
        *(uint *)(param_1 + 0x5c0) = (1000 - *(int *)(param_1 + 0x5b8)) - uVar11;
        thunk_memmove((void *)(param_1 + 0x5e8),(void *)(param_1 + 0x5e9),0x47);
        thunk_memmove((void *)(param_1 + 0x630),(void *)(param_1 + 0x631),0x47);
        *(char *)(param_1 + 0x62f) = (char)(*(uint *)(param_1 + 0x5b8) / 10);
        *(char *)(param_1 + 0x677) = (char)(*(uint *)(param_1 + 0x5bc) / 10);
        if (((*(char *)(param_1 + 0x5a1) == '\x01') && (uVar31 != 0)) &&
           (iStack_2f0 == *(int *)(param_1 + 0x488))) {
          lVar32 = 0;
          if (*(ulong *)(param_1 + 0x4b4) <= uStack_2c4) {
            lVar32 = uStack_2c4 - *(ulong *)(param_1 + 0x4b4);
          }
          uVar29 = (ulong)uVar31;
          uVar23 = 0;
          if (uVar29 != 0) {
            uVar23 = (ulong)(lVar32 * 0x12) / uVar29;
          }
          if (0xfffffffe < uVar23) {
            uVar23 = 0xffffffff;
          }
          *(int *)(param_1 + 0x5c4) = (int)uVar23;
          lVar32 = 0;
          if (*(ulong *)(param_1 + 0x4bc) <= uStack_2bc) {
            lVar32 = uStack_2bc - *(ulong *)(param_1 + 0x4bc);
          }
          uVar23 = 0;
          if (uVar29 != 0) {
            uVar23 = (ulong)(lVar32 * 0x12) / uVar29;
          }
          if (0xfffffffe < uVar23) {
            uVar23 = 0xffffffff;
          }
          *(int *)(param_1 + 0x5c8) = (int)uVar23;
          lVar32 = 0;
          if (*(ulong *)(param_1 + 0x4c4) <= uStack_2b4) {
            lVar32 = uStack_2b4 - *(ulong *)(param_1 + 0x4c4);
          }
          uVar23 = 0;
          if (uVar29 != 0) {
            uVar23 = (ulong)(lVar32 * 0x12) / uVar29;
          }
          *(ulong *)(param_1 + 0x5d0) = uVar23;
          lVar32 = 0;
          if (*(ulong *)(param_1 + 0x4cc) <= uStack_2ac) {
            lVar32 = uStack_2ac - *(ulong *)(param_1 + 0x4cc);
          }
          uVar24 = 0;
          if (uVar29 != 0) {
            uVar24 = (ulong)(lVar32 * 0x12) / uVar29;
          }
          *(ulong *)(param_1 + 0x5d8) = uVar24;
          uVar21 = *(ulong *)(param_1 + 0x5e0);
          uVar29 = uVar23;
          if (uVar23 <= uVar21) {
            uVar29 = uVar21;
          }
          if (uVar21 < uVar23 || uVar29 < uVar24) {
            if (uVar24 <= uVar29) {
              uVar24 = uVar29;
            }
            *(ulong *)(param_1 + 0x5e0) = uVar24;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x5c4) = 0;
          *(undefined8 *)(param_1 + 0x5d8) = 0;
          *(undefined8 *)(param_1 + 0x5d0) = 0;
        }
        thunk_memmove((void *)(param_1 + 0x678),(void *)(param_1 + 0x679),0x47);
        thunk_memmove((void *)(param_1 + 0x6c0),(void *)(param_1 + 0x6c1),0x47);
        uVar18 = 0;
        uVar23 = *(ulong *)(param_1 + 0x5e0);
        if ((*(long *)(param_1 + 0x5d0) != 0) && (uVar23 != 0)) {
          uVar29 = 0;
          if (uVar23 != 0) {
            uVar29 = (ulong)(*(long *)(param_1 + 0x5d0) * 100) / uVar23;
          }
          if (99 < uVar29) {
            uVar29 = 100;
          }
          uVar18 = (undefined1)uVar29;
        }
        uVar19 = 0;
        *(undefined1 *)(param_1 + 0x6bf) = uVar18;
        if ((uVar23 != 0) && (*(long *)(param_1 + 0x5d8) != 0)) {
          uVar29 = 0;
          if (uVar23 != 0) {
            uVar29 = (ulong)(*(long *)(param_1 + 0x5d8) * 100) / uVar23;
          }
          if (99 < uVar29) {
            uVar29 = 100;
          }
          uVar19 = (undefined1)uVar29;
        }
        *(undefined1 *)(param_1 + 0x707) = uVar19;
        thunk_memcpy((void *)(param_1 + 0x3b8),aiStack_264,0x44);
        thunk_memcpy((void *)(param_1 + 0x374),aiStack_264,0x44);
        *(int *)(param_1 + 0x35c) = aiStack_264[0];
        thunk_memcpy((void *)(param_1 + 0x488),&iStack_2f0,0x8c);
        *(undefined1 *)(param_1 + 0x5a0) = 1;
        *(byte *)(param_1 + 0x5a1) = bStack_2ec & 1;
        if (*(uint *)(param_1 + 0x550) != 0) {
          thunk_memset(*(void **)(param_1 + 0x538),0,(ulong)*(uint *)(param_1 + 0x550) << 4);
          uVar31 = *(uint *)(param_1 + 0x5a4);
          lVar32 = 4;
          lVar30 = 0x10;
          for (uVar23 = 0; (uVar31 != uVar23 && (uVar23 < *(uint *)(param_1 + 0x550)));
              uVar23 = uVar23 + 1) {
            puVar3 = (undefined4 *)(*(long *)(param_1 + 0x538) + lVar32);
            *(undefined1 *)(puVar3 + -1) = 1;
            puVar4 = (undefined8 *)(*(long *)(param_1 + 0x530) + lVar30);
            *puVar3 = *(undefined4 *)(puVar4 + -2);
            *(undefined8 *)(puVar3 + 1) = *puVar4;
            lVar32 = lVar32 + 0x10;
            lVar30 = lVar30 + 0x1b8;
          }
        }
      }
    }
  }
  return;
}

#undef UINT_820108b8
#undef UINT_82010908
#undef UINT_82010910
#undef local_2f8
#undef iStack_2f0
#undef bStack_2ec
#undef uStack_2c4
#undef uStack_2bc
#undef uStack_2b4
#undef uStack_2ac
#undef aiStack_264
#undef auStack_220

#undef DAT_10003cc0
#define DAT_10003cc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218U)))
#undef DAT_10003d55
#define DAT_10003d55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef DAT_10003dcb
#define DAT_10003dcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x323U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint *)(((uintptr_t)pf_module_state + 0x4604U)))
#undef PTR_DAT_10004048
#define PTR_DAT_10004048 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5a0U)))
#undef PTR_str_10003d68_10004008
#define PTR_str_10003d68_10004008 (*(char * *)(((uintptr_t)pf_module_state + 0x560U)))
#undef str_10003d0a
#define str_10003d0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#undef str_10003d5a
#define str_10003d5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10003d60
#define str_10003d60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_10003dce
#define str_10003dce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x326U)))
#undef str_10003e25
#define str_10003e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
#undef str_10003e2d
#define str_10003e2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x385U)))
#undef str_10003e37
#define str_10003e37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_10003e3f
#define str_10003e3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x397U)))
#undef str_10003e52
#define str_10003e52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aaU)))
#undef str_10003e66
#define str_10003e66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_10003e74
#define str_10003e74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ccU)))
#undef str_10003e7e
#define str_10003e7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
#undef str_10003e84
#define str_10003e84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_10003e8a
#define str_10003e8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e2U)))
#undef str_10003e93
#define str_10003e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ebU)))
#undef str_10003ea2
#define str_10003ea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_10003eb3
#define str_10003eb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10003ec1
#define str_10003ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x419U)))
#undef str_10003ed0
#define str_10003ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x428U)))
#undef str_10003ede
#define str_10003ede (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#undef str_10003eef
#define str_10003eef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_10003f01
#define str_10003f01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_10003f16
#define str_10003f16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46eU)))
#undef str_10003f3e
#define str_10003f3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
#undef str_10003f4e
#define str_10003f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a6U)))
#undef str_10003f5a
#define str_10003f5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b2U)))
#undef str_10003f68
#define str_10003f68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_10003f77
#define str_10003f77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_10003f8e
#define str_10003f8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e6U)))
#undef str_10003fa1
#define str_10003fa1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f9U)))
#define uStack_1e8 (*(ulong *)(pf_stack_frame + 24))
#define uStack_1e0 (*(ulong *)(pf_stack_frame + 32))
#define uStack_1d8 (*(ulong *)(pf_stack_frame + 40))
#define uStack_1d0 (*(ulong *)(pf_stack_frame + 48))
#define uStack_1c8 (*(ulong *)(pf_stack_frame + 56))
#define uStack_1c0 (*(uint *)(pf_stack_frame + 64))
#define acStack_1a4 (*(char (*)[420])(pf_stack_frame + 92))
#define bStack_194 (*(byte *)(pf_stack_frame + 108))
#define auStack_190 (*(undefined1 (*)[400])(pf_stack_frame + 112))
#define acStack_e8 (*(char (*)[232])(pf_stack_frame + 280))
#define acStack_a8 (*(char (*)[168])(pf_stack_frame + 344))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001518
 */

void recovered_10001518(long param_1)

{
  unsigned char pf_stack_frame[544] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulonglong arg3;
  ulong uVar14;
  ulong uVar15;
  void *pixels;
  long lVar16;
  long lVar17;
  char *pcVar18;
  ulonglong arg3_00;
  ulong uVar19;
  int iVar20;
  undefined4 *puVar21;
  uint *puVar22;

  uVar4 = CONCAT44(DAT_100080ac,DAT_100080a8);
  uVar5 = recovered_10002d1c(0);
  recovered_10002c5c(param_1,0,uVar4,uVar5 & 0xffffff);
  uStack_1c8 = recovered_10002768(param_1);
  uVar5 = DAT_100080a8;
  if (uStack_1c8 == 0) {
    uStack_1c0 = 0;
  }
  else {
    uStack_1c0 = (uint)(*(int *)(param_1 + 0x368) != 0);
  }
  uVar6 = recovered_10002d1c(0x15);
  uVar10 = recovered_10002d1c(0x2d);
  lVar17 = 0;
  uVar3 = uVar6 >> 8;
  uVar2 = uVar6 >> 0x10;
  uVar7 = (uVar6 >> 0x10 & 0xff) * 0x58;
  uVar9 = (uVar6 >> 8 & 0xff) * 0x58;
  uVar8 = (uVar6 & 0xff) * 0x58;
  lVar16 = 0x58;
  uVar11 = uVar6 & 0xff;
  do {
    uVar6 = uVar6 & 0xff000000 |
            (uVar8 & 0xffff) / 0x58 & 0xff | ((uVar9 & 0xffff) / 0x58 & 0xff) << 8 |
            ((uVar7 & 0xffff) / 0x58 & 0xff) << 0x10;
    recovered_10002c5c(param_1,lVar17,(ulong)DAT_100080a8 | 0x100000000,uVar6);
    lVar17 = lVar17 + 0x100000000;
    uVar7 = uVar7 + ((uVar10 >> 0x10 & 0xff) - (uVar2 & 0xff));
    uVar9 = uVar9 + ((uVar10 >> 8 & 0xff) - (uVar3 & 0xff));
    uVar8 = uVar8 + ((uVar10 & 0xff) - uVar11);
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar14 = (ulong)(uVar5 - 0x78);
  uVar13 = (ulong)DAT_100080a8;
  uVar11 = recovered_10002d1c(3);
  recovered_10002c5c(param_1,0x5700000000,uVar13 | 0x100000000,uVar11 & 0xffffff);
  recovered_10002db0((void *)param_1,0xc00000010,0x120000004c,&DAT_10003d55,uStack_1c0);
  recovered_10002db0((void *)param_1,0x2200000010,0x120000004c,str_10003d5a,(uint)(uStack_1c8 != 0))
  ;
  recovered_10002db0((void *)param_1,0x3800000010,0x120000004c,str_10003d60,(uint)(uStack_1c8 != 0))
  ;
  uVar11 = recovered_10002d1c(0x1f);
  recovered_10002c5c(param_1,0xc00000068,uVar14 | 0x3e00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(3);
  recovered_10002e5c(param_1,0xc00000068,uVar14 | 0x3e00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(1);
  recovered_10002ef4((void *)param_1,0x70,0x27,(char *)(param_1 + 0x708),uVar11 & 0xffffff,
                     uVar5 - 0x88);
  uVar5 = DAT_100080a8;
  uVar13 = (ulong)(DAT_100080a8 - 0x20);
  uVar11 = recovered_10002d1c(0x1f);
  recovered_10002c5c(param_1,0x6a00000010,uVar13 | 0xec00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(3);
  recovered_10002e5c(param_1,0x6a00000010,uVar13 | 0xec00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(0x2a);
  recovered_10002c5c(param_1,0x6b00000011,(ulong)(uVar5 - 0x22) | 0x1200000000,uVar11 & 0xffffff);
  puVar21 = &DAT_10003cc0;
  for (lVar17 = 0; lVar17 != 8; lVar17 = lVar17 + 1) {
    iVar12 = (&DAT_10003cc0)[lVar17];
    pcVar18 = (&PTR_str_10003d68_10004008)[lVar17];
    uVar11 = 4;
    if (lVar17 != 2) {
      uVar11 = 1;
    }
    uVar11 = recovered_10002d1c(uVar11);
    recovered_10002ef4((void *)param_1,iVar12 + 0x13,0x70,pcVar18,uVar11 & 0xffffff,0x78);
    if (lVar17 != 0) {
      uVar11 = recovered_10002d1c(0x15);
      uVar13 = uVar13 & 0xffffffffff000000 | (ulong)uVar11 & 0xffffff;
      recovered_10002c5c(param_1,(ulong)(iVar12 + 0xe) | 0x6b00000000,0x1200000001,(uint)uVar13);
    }
  }
  uVar14 = 0x7c00000011;
  uVar11 = 0x81;
  for (uVar13 = 0; uVar13 != 0xb; uVar13 = uVar13 + 1) {
    uVar15 = uVar13 + *(uint *)(param_1 + 0x554);
    if (((uint)uVar15 < *(uint *)(param_1 + 0x5a4)) &&
       (*(int *)(*(long *)(param_1 + 0x530) + (uVar15 & 0xffffffff) * 0x1b8) ==
        *(int *)(param_1 + 0x368))) {
      uVar9 = 0xe;
      uVar7 = 0x2b;
    }
    else {
      uVar7 = 0x1f;
      if ((uVar13 & 1) != 0) {
        uVar7 = 0x2c;
      }
      uVar9 = 1;
    }
    uVar7 = recovered_10002d1c(uVar7);
    recovered_10002c5c(param_1,uVar14,(ulong)(uVar5 - 0x22) | 0x1200000000,uVar7 & 0xffffff);
    if ((uint)uVar15 < *(uint *)(param_1 + 0x5a4)) {
      puVar22 = (uint *)(*(long *)(param_1 + 0x530) + (uVar15 & 0xffffffff) * 0x1b8);
      uVar8 = recovered_10002d1c(uVar9);
      uVar15 = (ulong)uVar8;
      thunk_snprintf(acStack_1a4,0x40,&DAT_10003dcb,*puVar22);
      recovered_10002ef4((void *)param_1,0x25,uVar11,acStack_1a4,uVar8 & 0xffffff,0x46);
      uStack_1c8 = uStack_1c8 & 0xffffffffff000000 | uVar15 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x6d,uVar11,(char *)(puVar22 + 0x10),(uint)uStack_1c8,0xb4)
      ;
      thunk_snprintf(acStack_1a4,0x40,str_10003dce,puVar22[0x6d] / 10,puVar22[0x6d] % 10);
      uStack_1d0 = uStack_1d0 & 0xffffffffff000000 | uVar15 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x140,uVar11,acStack_1a4,(uint)uStack_1d0,0x2a);
      uVar7 = puVar22[1] >> 0x10 & 0xff;
      uVar9 = puVar22[1] >> 2 & 1;
      if (uVar7 != 0) {
        uVar9 = uVar7;
      }
      uVar7 = 0;
      if (uVar9 <= puVar22[2]) {
        uVar7 = puVar22[2] - uVar9;
      }
      thunk_snprintf(acStack_1a4,0x40,&DAT_10003dcb,uVar9);
      uStack_1d8 = uStack_1d8 & 0xffffffffff000000 | uVar15 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x18e,uVar11,acStack_1a4,(uint)uStack_1d8,0x2e);
      thunk_snprintf(acStack_1a4,0x40,&DAT_10003dcb,uVar7);
      uStack_1e0 = uStack_1e0 & 0xffffffffff000000 | uVar15 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x1e8,uVar11,acStack_1a4,(uint)uStack_1e0,0x2e);
      recovered_100030c0(*(ulong *)(puVar22 + 8),acStack_1a4,0x40);
      uStack_1e8 = uStack_1e8 & 0xffffffffff000000 | uVar15 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x22a,uVar11,acStack_1a4,(uint)uStack_1e8,0x54);
      recovered_100030c0(*(ulong *)(puVar22 + 10),acStack_1a4,0x40);
      puVar21 = (undefined4 *)((ulong)puVar21 & 0xffffffffff000000 | uVar15 & 0xffffff);
      recovered_10002ef4((void *)param_1,0x28a,uVar11,acStack_1a4,(uint)puVar21,0x60);
      recovered_10002ef4((void *)param_1,0x2f7,uVar11,(char *)(puVar22 + 0x28),uVar8 & 0xffffff,0x60
                        );
    }
    uVar14 = uVar14 + 0x1200000000;
    uVar11 = uVar11 + 0x12;
  }
  recovered_10002838(acStack_1a4,param_1);
  if ((bStack_194 & 1) != 0) {
    terror_ui_scrollbar_draw((void *)param_1,auStack_190,0x20);
  }
  lVar17 = 0;
  for (uVar13 = 0; uVar13 != 5; uVar13 = uVar13 + 1) {
    uVar15 = 0x1800000088;
    if (uVar13 != 1) {
      uVar15 = 0x1800000074;
    }
    lVar16 = 0xda;
    if (uVar13 < 2) {
      lVar16 = 0xc6;
    }
    uVar19 = (ulong)((int)(lVar16 + lVar17) + 0x14);
    if (uVar13 < 3) {
      uVar19 = lVar16 + lVar17;
    }
    uVar5 = 0x2b;
    if (uVar13 != *(uint *)(param_1 + 0x358)) {
      uVar5 = 2;
    }
    uVar5 = recovered_10002d1c(uVar5);
    uVar14 = uVar14 & 0xffffffffff000000 | (ulong)uVar5 & 0xffffff;
    recovered_10002c5c(param_1,uVar19 | 0x16400000000,uVar15,(uint)uVar14);
    uVar5 = recovered_10002d1c(3);
    uVar11 = uVar11 & 0xff000000 | uVar5 & 0xffffff;
    recovered_10002e5c(param_1,uVar19 | 0x16400000000,uVar15,uVar11);
    pcVar18 = (&PTR_DAT_10004048)[uVar13];
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,(int)uVar19 + 0xf,0x16c,pcVar18,uVar5 & 0xffffff,
                       (int)uVar15 + -0x16);
    lVar17 = lVar17 + 0x74;
  }
  uVar13 = (ulong)(DAT_100080a8 - 0x20);
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x358))) {
  case 0:
    uVar5 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x56,0x19c,str_10003e25,uVar5 & 0xffffff,0x46);
    thunk_snprintf(acStack_1a4,0x40,str_10003dce,*(uint *)(param_1 + 0x5b8) / 10,
                       *(uint *)(param_1 + 0x5b8) % 10);
    uVar5 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0xab,0x19c,acStack_1a4,uVar5 & 0xffffff,0x46);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x56,0x1b4,str_10003e2d,uVar5 & 0xffffff,0x50);
    thunk_snprintf(acStack_1a4,0x40,str_10003dce,*(uint *)(param_1 + 0x5bc) / 10,
                       *(uint *)(param_1 + 0x5bc) % 10);
    uVar5 = recovered_10002d1c(0x12);
    recovered_10002ef4((void *)param_1,0xab,0x1b4,acStack_1a4,uVar5 & 0xffffff,0x46);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x56,0x1cc,str_10003e37,uVar5 & 0xffffff,0x46);
    thunk_snprintf(acStack_1a4,0x40,str_10003dce,*(uint *)(param_1 + 0x5c0) / 10,
                       *(uint *)(param_1 + 0x5c0) % 10);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0xab,0x1cc,acStack_1a4,uVar5 & 0xffffff,0x46);
    uVar5 = recovered_10002d1c(0x23);
    recovered_10003174(param_1,0xfe,0x196,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(0x12);
    recovered_10003174(param_1,0xfe,0x1ae,uVar5 & 0xffffff);
    thunk_snprintf(acStack_1a4,0x40,str_10003e3f,*(uint *)(param_1 + 0x5b0));
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x19c,acStack_1a4,uVar5 & 0xffffff,0xaa);
    thunk_snprintf(acStack_1a4,0x40,str_10003e52,*(uint *)(param_1 + 0x5b4));
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x1b4,acStack_1a4,uVar5 & 0xffffff,0xaa);
    thunk_snprintf(acStack_1a4,0x40,str_10003e66,*(uint *)(param_1 + 0x398));
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x1cc,acStack_1a4,uVar5 & 0xffffff,0x78);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x23e,0x18c,str_10003e74,uVar5 & 0xffffff,0x50);
    lVar17 = param_1 + 0x5e8;
    lVar16 = param_1 + 0x630;
    uVar13 = 0x19e00000222;
    uVar14 = 0x4800000062;
    iVar12 = 1;
    goto LAB_100022f4;
  case 1:
    uVar19 = *(ulong *)(param_1 + 0x378);
    uVar15 = *(ulong *)(param_1 + 0x380);
    uVar14 = 0;
    if (uVar19 <= uVar15) {
      uVar14 = uVar15 - uVar19;
    }
    uVar5 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    recovered_100030c0(uVar19,acStack_1a4,0x40);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x5c,0x19c,str_10003e7e,uVar5 & 0xffffff,0x3c);
    uVar5 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0x94,0x19c,acStack_1a4,uVar5 & 0xffffff,0x6e);
    recovered_100030c0(uVar14,acStack_1a4,0x40);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x5c,0x1b4,str_10003e84,uVar5 & 0xffffff,0x3c);
    uVar5 = recovered_10002d1c(4);
    recovered_10002ef4((void *)param_1,0x94,0x1b4,acStack_1a4,uVar5 & 0xffffff,0x6e);
    recovered_100030c0(uVar15,acStack_1a4,0x40);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x19c,str_10003e8a,uVar5 & 0xffffff,0x50);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x1a2,0x19c,acStack_1a4,uVar5 & 0xffffff,0x6e);
    uVar5 = recovered_10002d1c(0x23);
    recovered_100035a4(param_1,0x234,0x1b8,uVar5 & 0xffffff);
    if (uVar15 != 0) {
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar13 = (uVar14 * 100) / uVar15;
      }
      if (10 < uVar13) {
        for (iVar12 = -0x20; iVar12 != 1; iVar12 = iVar12 + 1) {
          for (iVar20 = 0; iVar20 != 0x21; iVar20 = iVar20 + 1) {
            if ((uint)(iVar12 * iVar12 + iVar20 * iVar20) < 0x401) {
              uVar5 = recovered_10002d1c(4);
              uVar15 = uVar15 & 0xffffffffff000000 | (ulong)uVar5 & 0xffffff;
              recovered_10002d40(param_1,iVar20 + 0x234,iVar12 + 0x1b8,(int)uVar15);
            }
          }
        }
      }
    }
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x20c,0x1e2,acStack_1a4,uVar5 & 0xffffff,100);
    break;
  case 2:
    arg3 = *(ulonglong *)(param_1 + 0x428);
    arg3_00 = *(ulonglong *)(param_1 + 0x430);
    uVar15 = *(ulong *)(param_1 + 0x438);
    uVar14 = *(ulong *)(param_1 + 0x440);
    uVar5 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    recovered_10003624(param_1,0x17a00000010);
    thunk_snprintf(acStack_1a4,0x40,str_10003e93,arg3);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1a8,acStack_1a4,uVar5 & 0xffffff,0x82);
    thunk_snprintf(acStack_1a4,0x40,str_10003ea2,arg3_00);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1be,acStack_1a4,uVar5 & 0xffffff,0x8c);
    thunk_snprintf(acStack_1a4,0x40,str_10003eb3,*(uint *)(param_1 + 0x5c4));
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1d4,acStack_1a4,uVar5 & 0xffffff,0x82);
    thunk_snprintf(acStack_1a4,0x40,str_10003ec1,*(uint *)(param_1 + 0x5c8));
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1ea,acStack_1a4,uVar5 & 0xffffff,0x8c);
    recovered_100030c0(uVar15,acStack_a8,0x40);
    thunk_snprintf(acStack_1a4,0x40,str_10003ed0,acStack_a8);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x12e,0x1a8,acStack_1a4,uVar5 & 0xffffff,0xaa);
    recovered_100030c0(uVar14,acStack_a8,0x40);
    thunk_snprintf(acStack_1a4,0x40,str_10003ede,acStack_a8);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x12e,0x1be,acStack_1a4,uVar5 & 0xffffff,0xb4);
    recovered_10003714(*(ulong *)(param_1 + 0x5d0),acStack_a8);
    thunk_snprintf(acStack_1a4,0x40,str_10003eef,acStack_a8);
    uVar5 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0x12e,0x1d4,acStack_1a4,uVar5 & 0xffffff,0xbe);
    recovered_10003714(*(ulong *)(param_1 + 0x5d8),acStack_a8);
    thunk_snprintf(acStack_1a4,0x40,str_10003f01,acStack_a8);
    uVar5 = recovered_10002d1c(0x12);
    recovered_10002ef4((void *)param_1,0x12e,0x1ea,acStack_1a4,uVar5 & 0xffffff,200);
    recovered_10003714(*(ulong *)(param_1 + 0x5e0),acStack_a8);
    thunk_snprintf(acStack_1a4,0x40,str_10003f16,acStack_a8);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x232,0x18c,acStack_1a4,uVar5 & 0xffffff,0x82);
    recovered_100031e4(param_1,0x19e00000224,0x480000006a,param_1 + 0x678,param_1 + 0x6c0,0);
    uVar5 = recovered_10002d1c(0x23);
    recovered_10003174(param_1,0x1de,0x1ce,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(0x12);
    recovered_10003174(param_1,0x1de,0x1e6,uVar5 & 0xffffff);
    break;
  case 3:
    uVar15 = *(ulong *)(param_1 + 0x420);
    uVar19 = *(ulong *)(param_1 + 0x418);
    uVar14 = 0;
    if (uVar19 <= uVar15) {
      uVar14 = uVar15 - uVar19;
    }
    uVar5 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    recovered_10003624(param_1,0x17a00000010);
    recovered_100030c0(uVar19,acStack_1a4,0x40);
    recovered_100030c0(uVar14,acStack_a8,0x40);
    recovered_100030c0(uVar15,acStack_e8,0x40);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x4e,0x1c2,str_10003f3e,uVar5 & 0xffffff,0x82);
    uVar5 = recovered_10002d1c(4);
    recovered_10002ef4((void *)param_1,0xce,0x1c2,acStack_a8,uVar5 & 0xffffff,0x78);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x4e,0x1da,str_10003f4e,uVar5 & 0xffffff,100);
    uVar5 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0xce,0x1da,acStack_1a4,uVar5 & 0xffffff,0x78);
    uVar5 = recovered_10002d1c(0x23);
    recovered_100035a4(param_1,0x234,0x1cc,uVar5 & 0xffffff);
    if ((uVar15 != 0) && (uVar19 < uVar15)) {
      iVar12 = 0;
      if (uVar15 != 0) {
        iVar12 = (int)((uVar14 << 6) / uVar15);
      }
      for (iVar20 = -0x20; iVar20 != 0x21; iVar20 = iVar20 + 1) {
        for (uVar5 = 0x214; iVar1 = uVar5 - 0x234, iVar1 <= iVar12 + -0x20; uVar5 = uVar5 + 1) {
          if ((uint)(iVar20 * iVar20 + iVar1 * iVar1) < 0x401) {
            uVar11 = recovered_10002d1c(4);
            uVar15 = uVar15 & 0xffffffffff000000 | (ulong)uVar11 & 0xffffff;
            recovered_10002d40(param_1,uVar5,iVar20 + 0x1cc,(int)uVar15);
          }
        }
      }
    }
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x212,0x1f6,acStack_e8,uVar5 & 0xffffff,0x78);
    break;
  default:
    uVar5 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar5 & 0xffffff);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1a2,str_10003f5a,uVar5 & 0xffffff,0x6e);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1ba,str_10003f68,uVar5 & 0xffffff,0x78);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x130,0x1a2,str_10003f77,uVar5 & 0xffffff,0xa0);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x130,0x1ba,str_10003f8e,uVar5 & 0xffffff,0x8c);
    uVar5 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x230,0x18c,str_10003fa1,uVar5 & 0xffffff,0x82);
    uVar13 = 0x19e00000224;
    uVar14 = 0x480000006a;
    lVar17 = 0;
    lVar16 = 0;
    iVar12 = 0;
LAB_100022f4:
    recovered_100031e4(param_1,uVar13,uVar14,lVar17,lVar16,iVar12);
  }
  uVar7 = DAT_100080ac;
  uVar11 = DAT_100080a8;
  pixels = *(void **)(param_1 + 0x350);
  uVar5 = DAT_100080a8 << 2;
  uVar9 = thunk_terror_ui_colour(0);
  thunk_terror_ui_window_present((void *)param_1,str_10003d0a,pixels,uVar11,uVar7,uVar5,uVar9);
  return;
}

#undef DAT_10003cc0
#undef DAT_10003d55
#undef DAT_10003dcb
#undef DAT_100080a8
#undef DAT_100080ac
#undef PTR_DAT_10004048
#undef PTR_str_10003d68_10004008
#undef str_10003d0a
#undef str_10003d5a
#undef str_10003d60
#undef str_10003dce
#undef str_10003e25
#undef str_10003e2d
#undef str_10003e37
#undef str_10003e3f
#undef str_10003e52
#undef str_10003e66
#undef str_10003e74
#undef str_10003e7e
#undef str_10003e84
#undef str_10003e8a
#undef str_10003e93
#undef str_10003ea2
#undef str_10003eb3
#undef str_10003ec1
#undef str_10003ed0
#undef str_10003ede
#undef str_10003eef
#undef str_10003f01
#undef str_10003f16
#undef str_10003f3e
#undef str_10003f4e
#undef str_10003f5a
#undef str_10003f68
#undef str_10003f77
#undef str_10003f8e
#undef str_10003fa1
#undef uStack_1e8
#undef uStack_1e0
#undef uStack_1d8
#undef uStack_1d0
#undef uStack_1c8
#undef uStack_1c0
#undef acStack_1a4
#undef bStack_194
#undef auStack_190
#undef acStack_e8
#undef acStack_a8

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef Ram0000000082010800
#define Ram0000000082010800 (*(uint32_t *)(0x82010800U))
#undef Ram0000000082010804
#define Ram0000000082010804 (*(uint32_t *)(0x82010804U))
#undef Ram0000000082010808
#define Ram0000000082010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002344
 */

bool recovered_10002344(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000082010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000082010804, iVar1 != 0)) &&
     (uVar2 = Ram0000000082010808, 0xb < uVar2)) {
    uVar2 = Ram0000000082010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef Ram0000000082010800
#undef Ram0000000082010804
#undef Ram0000000082010808

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002390
 */

void recovered_10002390(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10002344(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100023c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

#undef DAT_10003cc0
#define DAT_10003cc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218U)))
#undef DAT_10003d55
#define DAT_10003d55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2adU)))
#undef DAT_10003dcb
#define DAT_10003dcb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x323U)))
#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint *)(((uintptr_t)pf_module_state + 0x4604U)))
#undef PTR_DAT_10004048
#define PTR_DAT_10004048 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5a0U)))
#undef PTR_str_10003d68_10004008
#define PTR_str_10003d68_10004008 (*(char * *)(((uintptr_t)pf_module_state + 0x560U)))
#undef str_10003d0a
#define str_10003d0a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x262U)))
#undef str_10003d5a
#define str_10003d5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b2U)))
#undef str_10003d60
#define str_10003d60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b8U)))
#undef str_10003dce
#define str_10003dce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x326U)))
#undef str_10003e25
#define str_10003e25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37dU)))
#undef str_10003e2d
#define str_10003e2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x385U)))
#undef str_10003e37
#define str_10003e37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38fU)))
#undef str_10003e3f
#define str_10003e3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x397U)))
#undef str_10003e52
#define str_10003e52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aaU)))
#undef str_10003e66
#define str_10003e66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3beU)))
#undef str_10003e74
#define str_10003e74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ccU)))
#undef str_10003e7e
#define str_10003e7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
#undef str_10003e84
#define str_10003e84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_10003e8a
#define str_10003e8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e2U)))
#undef str_10003e93
#define str_10003e93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3ebU)))
#undef str_10003ea2
#define str_10003ea2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_10003eb3
#define str_10003eb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40bU)))
#undef str_10003ec1
#define str_10003ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x419U)))
#undef str_10003ed0
#define str_10003ed0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x428U)))
#undef str_10003ede
#define str_10003ede (*(char (*)[1])(((uintptr_t)pf_module_state + 0x436U)))
#undef str_10003eef
#define str_10003eef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_10003f01
#define str_10003f01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x459U)))
#undef str_10003f16
#define str_10003f16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46eU)))
#undef str_10003f3e
#define str_10003f3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x496U)))
#undef str_10003f4e
#define str_10003f4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a6U)))
#undef str_10003f5a
#define str_10003f5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4b2U)))
#undef str_10003f68
#define str_10003f68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c0U)))
#undef str_10003f77
#define str_10003f77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_10003f8e
#define str_10003f8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e6U)))
#undef str_10003fa1
#define str_10003fa1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f9U)))
#define uStack_1e8 (*(ulong *)(pf_stack_frame + 24))
#define uStack_1e0 (*(ulong *)(pf_stack_frame + 32))
#define uStack_1d8 (*(ulong *)(pf_stack_frame + 40))
#define uStack_1d0 (*(ulong *)(pf_stack_frame + 48))
#define uStack_1c8 (*(ulong *)(pf_stack_frame + 56))
#define uStack_1c0 (*(uint *)(pf_stack_frame + 64))
#define acStack_1a4 (*(char (*)[420])(pf_stack_frame + 92))
#define bStack_194 (*(byte *)(pf_stack_frame + 108))
#define auStack_190 (*(undefined1 (*)[400])(pf_stack_frame + 112))
#define acStack_e8 (*(char (*)[232])(pf_stack_frame + 280))
#define acStack_a8 (*(char (*)[168])(pf_stack_frame + 344))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023d4
 */

void recovered_100023d4(long param_1)

{
  unsigned char pf_stack_frame[544] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  void *pixels;
  long lVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  int iVar21;
  undefined4 *puVar22;

  if ((param_1 == 0) || (iVar12 = *(int *)(param_1 + 0x368), iVar12 + 1U < 2)) {
    return;
  }
  bVar5 = recovered_10002344(0x10c);
  if (bVar5) {
    uVar6 = UINT_8201090c;
    if (uVar6 != 0) {
      (*(code *)(ulong)uVar6)(iVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x708) = 0;
  recovered_10000c70(param_1);
  uVar4 = CONCAT44(DAT_100080ac,DAT_100080a8);
  uVar6 = recovered_10002d1c(0);
  recovered_10002c5c(param_1,0,uVar4,uVar6 & 0xffffff);
  uStack_1c8 = recovered_10002768(param_1);
  uVar6 = DAT_100080a8;
  if (uStack_1c8 == 0) {
    uStack_1c0 = 0;
  }
  else {
    uStack_1c0 = (uint)(*(int *)(param_1 + 0x368) != 0);
  }
  uVar7 = recovered_10002d1c(0x15);
  uVar10 = recovered_10002d1c(0x2d);
  lVar18 = 0;
  uVar3 = uVar7 >> 8;
  uVar2 = uVar7 >> 0x10;
  uVar8 = (uVar7 >> 0x10 & 0xff) * 0x58;
  uVar9 = (uVar7 >> 8 & 0xff) * 0x58;
  uVar14 = (uVar7 & 0xff) * 0x58;
  lVar17 = 0x58;
  uVar11 = uVar7 & 0xff;
  do {
    uVar7 = uVar7 & 0xff000000 |
            (uVar14 & 0xffff) / 0x58 & 0xff | ((uVar9 & 0xffff) / 0x58 & 0xff) << 8 |
            ((uVar8 & 0xffff) / 0x58 & 0xff) << 0x10;
    recovered_10002c5c(param_1,lVar18,(ulong)DAT_100080a8 | 0x100000000,uVar7);
    lVar18 = lVar18 + 0x100000000;
    uVar8 = uVar8 + ((uVar10 >> 0x10 & 0xff) - (uVar2 & 0xff));
    uVar9 = uVar9 + ((uVar10 >> 8 & 0xff) - (uVar3 & 0xff));
    uVar14 = uVar14 + ((uVar10 & 0xff) - uVar11);
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  uVar15 = (ulong)(uVar6 - 0x78);
  uVar13 = (ulong)DAT_100080a8;
  uVar11 = recovered_10002d1c(3);
  recovered_10002c5c(param_1,0x5700000000,uVar13 | 0x100000000,uVar11 & 0xffffff);
  recovered_10002db0((void *)param_1,0xc00000010,0x120000004c,&DAT_10003d55,uStack_1c0);
  recovered_10002db0((void *)param_1,0x2200000010,0x120000004c,str_10003d5a,(uint)(uStack_1c8 != 0))
  ;
  recovered_10002db0((void *)param_1,0x3800000010,0x120000004c,str_10003d60,(uint)(uStack_1c8 != 0))
  ;
  uVar11 = recovered_10002d1c(0x1f);
  recovered_10002c5c(param_1,0xc00000068,uVar15 | 0x3e00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(3);
  recovered_10002e5c(param_1,0xc00000068,uVar15 | 0x3e00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(1);
  recovered_10002ef4((void *)param_1,0x70,0x27,(char *)(param_1 + 0x708),uVar11 & 0xffffff,
                     uVar6 - 0x88);
  uVar6 = DAT_100080a8;
  uVar13 = (ulong)(DAT_100080a8 - 0x20);
  uVar11 = recovered_10002d1c(0x1f);
  recovered_10002c5c(param_1,0x6a00000010,uVar13 | 0xec00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(3);
  recovered_10002e5c(param_1,0x6a00000010,uVar13 | 0xec00000000,uVar11 & 0xffffff);
  uVar11 = recovered_10002d1c(0x2a);
  recovered_10002c5c(param_1,0x6b00000011,(ulong)(uVar6 - 0x22) | 0x1200000000,uVar11 & 0xffffff);
  puVar22 = &DAT_10003cc0;
  for (lVar18 = 0; lVar18 != 8; lVar18 = lVar18 + 1) {
    iVar12 = (&DAT_10003cc0)[lVar18];
    pcVar19 = (&PTR_str_10003d68_10004008)[lVar18];
    uVar11 = 4;
    if (lVar18 != 2) {
      uVar11 = 1;
    }
    uVar11 = recovered_10002d1c(uVar11);
    recovered_10002ef4((void *)param_1,iVar12 + 0x13,0x70,pcVar19,uVar11 & 0xffffff,0x78);
    if (lVar18 != 0) {
      uVar11 = recovered_10002d1c(0x15);
      uVar13 = uVar13 & 0xffffffffff000000 | (ulong)uVar11 & 0xffffff;
      recovered_10002c5c(param_1,(ulong)(iVar12 + 0xe) | 0x6b00000000,0x1200000001,(uint)uVar13);
    }
  }
  uVar15 = 0x7c00000011;
  uVar11 = 0x81;
  for (uVar13 = 0; uVar13 != 0xb; uVar13 = uVar13 + 1) {
    uVar16 = uVar13 + *(uint *)(param_1 + 0x554);
    if (((uint)uVar16 < *(uint *)(param_1 + 0x5a4)) &&
       (*(int *)(*(long *)(param_1 + 0x530) + (uVar16 & 0xffffffff) * 0x1b8) ==
        *(int *)(param_1 + 0x368))) {
      uVar9 = 0xe;
      uVar8 = 0x2b;
    }
    else {
      uVar8 = 0x1f;
      if ((uVar13 & 1) != 0) {
        uVar8 = 0x2c;
      }
      uVar9 = 1;
    }
    uVar8 = recovered_10002d1c(uVar8);
    recovered_10002c5c(param_1,uVar15,(ulong)(uVar6 - 0x22) | 0x1200000000,uVar8 & 0xffffff);
    if ((uint)uVar16 < *(uint *)(param_1 + 0x5a4)) {
      lVar18 = *(long *)(param_1 + 0x530) + (uVar16 & 0xffffffff) * 0x1b8;
      uVar8 = recovered_10002d1c(uVar9);
      uVar16 = (ulong)uVar8;
      thunk_snprintf(acStack_1a4,0x40,&DAT_10003dcb);
      recovered_10002ef4((void *)param_1,0x25,uVar11,acStack_1a4,uVar8 & 0xffffff,0x46);
      uStack_1c8 = uStack_1c8 & 0xffffffffff000000 | uVar16 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x6d,uVar11,(char *)(lVar18 + 0x40),(uint)uStack_1c8,0xb4);
      thunk_snprintf(acStack_1a4,0x40,str_10003dce);
      uStack_1d0 = uStack_1d0 & 0xffffffffff000000 | uVar16 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x140,uVar11,acStack_1a4,(uint)uStack_1d0,0x2a);
      thunk_snprintf(acStack_1a4,0x40,&DAT_10003dcb);
      uStack_1d8 = uStack_1d8 & 0xffffffffff000000 | uVar16 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x18e,uVar11,acStack_1a4,(uint)uStack_1d8,0x2e);
      thunk_snprintf(acStack_1a4,0x40,&DAT_10003dcb);
      uStack_1e0 = uStack_1e0 & 0xffffffffff000000 | uVar16 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x1e8,uVar11,acStack_1a4,(uint)uStack_1e0,0x2e);
      recovered_100030c0(*(ulong *)(lVar18 + 0x20),acStack_1a4,0x40);
      uStack_1e8 = uStack_1e8 & 0xffffffffff000000 | uVar16 & 0xffffff;
      recovered_10002ef4((void *)param_1,0x22a,uVar11,acStack_1a4,(uint)uStack_1e8,0x54);
      recovered_100030c0(*(ulong *)(lVar18 + 0x28),acStack_1a4,0x40);
      puVar22 = (undefined4 *)((ulong)puVar22 & 0xffffffffff000000 | uVar16 & 0xffffff);
      recovered_10002ef4((void *)param_1,0x28a,uVar11,acStack_1a4,(uint)puVar22,0x60);
      recovered_10002ef4((void *)param_1,0x2f7,uVar11,(char *)(lVar18 + 0xa0),uVar8 & 0xffffff,0x60)
      ;
    }
    uVar15 = uVar15 + 0x1200000000;
    uVar11 = uVar11 + 0x12;
  }
  recovered_10002838(acStack_1a4,param_1);
  if ((bStack_194 & 1) != 0) {
    terror_ui_scrollbar_draw((void *)param_1,auStack_190,0x20);
  }
  lVar18 = 0;
  for (uVar13 = 0; uVar13 != 5; uVar13 = uVar13 + 1) {
    uVar16 = 0x1800000088;
    if (uVar13 != 1) {
      uVar16 = 0x1800000074;
    }
    lVar17 = 0xda;
    if (uVar13 < 2) {
      lVar17 = 0xc6;
    }
    uVar20 = (ulong)((int)(lVar17 + lVar18) + 0x14);
    if (uVar13 < 3) {
      uVar20 = lVar17 + lVar18;
    }
    uVar6 = 0x2b;
    if (uVar13 != *(uint *)(param_1 + 0x358)) {
      uVar6 = 2;
    }
    uVar6 = recovered_10002d1c(uVar6);
    uVar15 = uVar15 & 0xffffffffff000000 | (ulong)uVar6 & 0xffffff;
    recovered_10002c5c(param_1,uVar20 | 0x16400000000,uVar16,(uint)uVar15);
    uVar6 = recovered_10002d1c(3);
    uVar11 = uVar11 & 0xff000000 | uVar6 & 0xffffff;
    recovered_10002e5c(param_1,uVar20 | 0x16400000000,uVar16,uVar11);
    pcVar19 = (&PTR_DAT_10004048)[uVar13];
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,(int)uVar20 + 0xf,0x16c,pcVar19,uVar6 & 0xffffff,
                       (int)uVar16 + -0x16);
    lVar18 = lVar18 + 0x74;
  }
  uVar13 = (ulong)(DAT_100080a8 - 0x20);
  switch((uintptr_t)(*(undefined4 *)(param_1 + 0x358))) {
  case 0:
    uVar6 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x56,0x19c,str_10003e25,uVar6 & 0xffffff,0x46);
    thunk_snprintf(acStack_1a4,0x40,str_10003dce);
    uVar6 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0xab,0x19c,acStack_1a4,uVar6 & 0xffffff,0x46);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x56,0x1b4,str_10003e2d,uVar6 & 0xffffff,0x50);
    thunk_snprintf(acStack_1a4,0x40,str_10003dce);
    uVar6 = recovered_10002d1c(0x12);
    recovered_10002ef4((void *)param_1,0xab,0x1b4,acStack_1a4,uVar6 & 0xffffff,0x46);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x56,0x1cc,str_10003e37,uVar6 & 0xffffff,0x46);
    thunk_snprintf(acStack_1a4,0x40,str_10003dce);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0xab,0x1cc,acStack_1a4,uVar6 & 0xffffff,0x46);
    uVar6 = recovered_10002d1c(0x23);
    recovered_10003174(param_1,0xfe,0x196,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(0x12);
    recovered_10003174(param_1,0xfe,0x1ae,uVar6 & 0xffffff);
    thunk_snprintf(acStack_1a4,0x40,str_10003e3f);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x19c,acStack_1a4,uVar6 & 0xffffff,0xaa);
    thunk_snprintf(acStack_1a4,0x40,str_10003e52);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x1b4,acStack_1a4,uVar6 & 0xffffff,0xaa);
    thunk_snprintf(acStack_1a4,0x40,str_10003e66);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x1cc,acStack_1a4,uVar6 & 0xffffff,0x78);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x23e,0x18c,str_10003e74,uVar6 & 0xffffff,0x50);
    lVar18 = param_1 + 0x5e8;
    lVar17 = param_1 + 0x630;
    uVar13 = 0x19e00000222;
    uVar15 = 0x4800000062;
    iVar12 = 1;
    goto LAB_100022f4;
  case 1:
    uVar20 = *(ulong *)(param_1 + 0x378);
    uVar16 = *(ulong *)(param_1 + 0x380);
    uVar15 = 0;
    if (uVar20 <= uVar16) {
      uVar15 = uVar16 - uVar20;
    }
    uVar6 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    recovered_100030c0(uVar20,acStack_1a4,0x40);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x5c,0x19c,str_10003e7e,uVar6 & 0xffffff,0x3c);
    uVar6 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0x94,0x19c,acStack_1a4,uVar6 & 0xffffff,0x6e);
    recovered_100030c0(uVar15,acStack_1a4,0x40);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x5c,0x1b4,str_10003e84,uVar6 & 0xffffff,0x3c);
    uVar6 = recovered_10002d1c(4);
    recovered_10002ef4((void *)param_1,0x94,0x1b4,acStack_1a4,uVar6 & 0xffffff,0x6e);
    recovered_100030c0(uVar16,acStack_1a4,0x40);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x15a,0x19c,str_10003e8a,uVar6 & 0xffffff,0x50);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x1a2,0x19c,acStack_1a4,uVar6 & 0xffffff,0x6e);
    uVar6 = recovered_10002d1c(0x23);
    recovered_100035a4(param_1,0x234,0x1b8,uVar6 & 0xffffff);
    if (uVar16 != 0) {
      uVar13 = 0;
      if (uVar16 != 0) {
        uVar13 = (uVar15 * 100) / uVar16;
      }
      if (10 < uVar13) {
        for (iVar12 = -0x20; iVar12 != 1; iVar12 = iVar12 + 1) {
          for (iVar21 = 0; iVar21 != 0x21; iVar21 = iVar21 + 1) {
            if ((uint)(iVar12 * iVar12 + iVar21 * iVar21) < 0x401) {
              uVar6 = recovered_10002d1c(4);
              uVar16 = uVar16 & 0xffffffffff000000 | (ulong)uVar6 & 0xffffff;
              recovered_10002d40(param_1,iVar21 + 0x234,iVar12 + 0x1b8,(int)uVar16);
            }
          }
        }
      }
    }
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x20c,0x1e2,acStack_1a4,uVar6 & 0xffffff,100);
    break;
  case 2:
    uVar16 = *(ulong *)(param_1 + 0x438);
    uVar15 = *(ulong *)(param_1 + 0x440);
    uVar6 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    recovered_10003624(param_1,0x17a00000010);
    thunk_snprintf(acStack_1a4,0x40,str_10003e93);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1a8,acStack_1a4,uVar6 & 0xffffff,0x82);
    thunk_snprintf(acStack_1a4,0x40,str_10003ea2);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1be,acStack_1a4,uVar6 & 0xffffff,0x8c);
    thunk_snprintf(acStack_1a4,0x40,str_10003eb3);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1d4,acStack_1a4,uVar6 & 0xffffff,0x82);
    thunk_snprintf(acStack_1a4,0x40,str_10003ec1);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1ea,acStack_1a4,uVar6 & 0xffffff,0x8c);
    recovered_100030c0(uVar16,acStack_a8,0x40);
    thunk_snprintf(acStack_1a4,0x40,str_10003ed0);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x12e,0x1a8,acStack_1a4,uVar6 & 0xffffff,0xaa);
    recovered_100030c0(uVar15,acStack_a8,0x40);
    thunk_snprintf(acStack_1a4,0x40,str_10003ede);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x12e,0x1be,acStack_1a4,uVar6 & 0xffffff,0xb4);
    recovered_10003714(*(ulong *)(param_1 + 0x5d0),acStack_a8);
    thunk_snprintf(acStack_1a4,0x40,str_10003eef);
    uVar6 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0x12e,0x1d4,acStack_1a4,uVar6 & 0xffffff,0xbe);
    recovered_10003714(*(ulong *)(param_1 + 0x5d8),acStack_a8);
    thunk_snprintf(acStack_1a4,0x40,str_10003f01);
    uVar6 = recovered_10002d1c(0x12);
    recovered_10002ef4((void *)param_1,0x12e,0x1ea,acStack_1a4,uVar6 & 0xffffff,200);
    recovered_10003714(*(ulong *)(param_1 + 0x5e0),acStack_a8);
    thunk_snprintf(acStack_1a4,0x40,str_10003f16);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x232,0x18c,acStack_1a4,uVar6 & 0xffffff,0x82);
    recovered_100031e4(param_1,0x19e00000224,0x480000006a,param_1 + 0x678,param_1 + 0x6c0,0);
    uVar6 = recovered_10002d1c(0x23);
    recovered_10003174(param_1,0x1de,0x1ce,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(0x12);
    recovered_10003174(param_1,0x1de,0x1e6,uVar6 & 0xffffff);
    break;
  case 3:
    uVar16 = *(ulong *)(param_1 + 0x420);
    uVar20 = *(ulong *)(param_1 + 0x418);
    uVar15 = 0;
    if (uVar20 <= uVar16) {
      uVar15 = uVar16 - uVar20;
    }
    uVar6 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    recovered_10003624(param_1,0x17a00000010);
    recovered_100030c0(uVar20,acStack_1a4,0x40);
    recovered_100030c0(uVar15,acStack_a8,0x40);
    recovered_100030c0(uVar16,acStack_e8,0x40);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x4e,0x1c2,str_10003f3e,uVar6 & 0xffffff,0x82);
    uVar6 = recovered_10002d1c(4);
    recovered_10002ef4((void *)param_1,0xce,0x1c2,acStack_a8,uVar6 & 0xffffff,0x78);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x4e,0x1da,str_10003f4e,uVar6 & 0xffffff,100);
    uVar6 = recovered_10002d1c(0x11);
    recovered_10002ef4((void *)param_1,0xce,0x1da,acStack_1a4,uVar6 & 0xffffff,0x78);
    uVar6 = recovered_10002d1c(0x23);
    recovered_100035a4(param_1,0x234,0x1cc,uVar6 & 0xffffff);
    if ((uVar16 != 0) && (uVar20 < uVar16)) {
      iVar12 = 0;
      if (uVar16 != 0) {
        iVar12 = (int)((uVar15 << 6) / uVar16);
      }
      for (iVar21 = -0x20; iVar21 != 0x21; iVar21 = iVar21 + 1) {
        for (uVar6 = 0x214; iVar1 = uVar6 - 0x234, iVar1 <= iVar12 + -0x20; uVar6 = uVar6 + 1) {
          if ((uint)(iVar21 * iVar21 + iVar1 * iVar1) < 0x401) {
            uVar11 = recovered_10002d1c(4);
            uVar16 = uVar16 & 0xffffffffff000000 | (ulong)uVar11 & 0xffffff;
            recovered_10002d40(param_1,uVar6,iVar21 + 0x1cc,(int)uVar16);
          }
        }
      }
    }
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x212,0x1f6,acStack_e8,uVar6 & 0xffffff,0x78);
    break;
  default:
    uVar6 = recovered_10002d1c(0x2d);
    recovered_10002c5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(3);
    recovered_10002e5c(param_1,0x17a00000010,uVar13 | 0x7e00000000,uVar6 & 0xffffff);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1a2,str_10003f5a,uVar6 & 0xffffff,0x6e);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x58,0x1ba,str_10003f68,uVar6 & 0xffffff,0x78);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x130,0x1a2,str_10003f77,uVar6 & 0xffffff,0xa0);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x130,0x1ba,str_10003f8e,uVar6 & 0xffffff,0x8c);
    uVar6 = recovered_10002d1c(1);
    recovered_10002ef4((void *)param_1,0x230,0x18c,str_10003fa1,uVar6 & 0xffffff,0x82);
    uVar13 = 0x19e00000224;
    uVar15 = 0x480000006a;
    lVar18 = 0;
    lVar17 = 0;
    iVar12 = 0;
LAB_100022f4:
    recovered_100031e4(param_1,uVar13,uVar15,lVar18,lVar17,iVar12);
  }
  uVar8 = DAT_100080ac;
  uVar11 = DAT_100080a8;
  pixels = *(void **)(param_1 + 0x350);
  uVar6 = DAT_100080a8 << 2;
  uVar9 = thunk_terror_ui_colour(0);
  thunk_terror_ui_window_present((void *)param_1,str_10003d0a,pixels,uVar11,uVar8,uVar6,uVar9);
  return;
}

#undef DAT_10003cc0
#undef DAT_10003d55
#undef DAT_10003dcb
#undef DAT_100080a8
#undef DAT_100080ac
#undef PTR_DAT_10004048
#undef PTR_str_10003d68_10004008
#undef str_10003d0a
#undef str_10003d5a
#undef str_10003d60
#undef str_10003dce
#undef str_10003e25
#undef str_10003e2d
#undef str_10003e37
#undef str_10003e3f
#undef str_10003e52
#undef str_10003e66
#undef str_10003e74
#undef str_10003e7e
#undef str_10003e84
#undef str_10003e8a
#undef str_10003e93
#undef str_10003ea2
#undef str_10003eb3
#undef str_10003ec1
#undef str_10003ed0
#undef str_10003ede
#undef str_10003eef
#undef str_10003f01
#undef str_10003f16
#undef str_10003f3e
#undef str_10003f4e
#undef str_10003f5a
#undef str_10003f68
#undef str_10003f77
#undef str_10003f8e
#undef str_10003fa1
#undef uStack_1e8
#undef uStack_1e0
#undef uStack_1d8
#undef uStack_1d0
#undef uStack_1c8
#undef uStack_1c0
#undef acStack_1a4
#undef bStack_194
#undef auStack_190
#undef acStack_e8
#undef acStack_a8

#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002444
 */

void recovered_10002444(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  void *records;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;

  local_38 = 0;
  if (param_1 == 0) {
    return;
  }
  lVar2 = recovered_10002768(param_1);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = thunk_terror_ui_window_list((void *)0x0,0,(void *)((long)&local_38 + 4));
  if (uVar1 == 0) {
    return;
  }
  if (PF_PART4(local_38, 4) == 0) {
    records = (void *)0x0;
    uVar1 = 0;
  }
  else {
    records = (void *)recovered_100027c0((ulong)PF_PART4(local_38, 4) * 0x278);
    uVar1 = PF_PART4(local_38, 4);
    if ((PF_PART4(local_38, 4) != 0) && (records == (void *)0x0)) goto LAB_100024cc;
  }
  uVar1 = thunk_terror_ui_window_list(records,uVar1,&local_38);
  if ((uVar1 != 0) && (uVar3 = local_38 & 0xffffffff, uVar3 <= local_38 >> 0x20)) {
    piVar5 = (int *)((long)records + 0x30);
    for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
      if (piVar5[-0xb] == *(int *)(param_1 + 0x368)) {
        thunk_terror_ui_window_configure(piVar5[-0xc],piVar5[-1],*piVar5,0xe,10);
        uVar3 = local_38 & 0xffffffff;
      }
      piVar5 = piVar5 + 0x9e;
    }
  }
LAB_100024cc:
  recovered_10002390(records);
  return;
}

#undef local_38

#undef DAT_82010a20
#define DAT_82010a20 (*(uint8_t *)(0x82010a20U))
#undef Ram0000000082010a20
#define Ram0000000082010a20 (*(uint32_t *)(0x82010a20U))
#undef str_10003d3a
#define str_10003d3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x292U)))
#undef str_10003d45
#define str_10003d45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29dU)))
#define abStack_244 (*(byte (*)[580])(pf_stack_frame + 28))
#define abStack_d0 (*(byte (*)[208])(pf_stack_frame + 400))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000251c
 */

void recovered_1000251c(long param_1)

{
  unsigned char pf_stack_frame[640] __attribute__((aligned(16))) = {0};

  char *arg5;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulonglong arg3;
  byte *pbVar12;
  byte *pbVar11;

  lVar6 = recovered_10002768(param_1);
  if (param_1 != 0) {
    if (lVar6 == 0) {
      *(undefined1 *)(param_1 + 0x708) = 0;
    }
    else {
      pbVar12 = (byte *)((uintptr_t)pf_module_state + 0x290U);
      if (*(byte *)(lVar6 + 0xc0) != 0) {
        pbVar12 = (byte *)(lVar6 + 0xc0);
      }
      arg5 = (char *)((uintptr_t)pf_module_state + 0x299U);
      if ((*(uint *)(lVar6 + 4) & 1) != 0) {
        arg5 = str_10003d3a;
      }
      arg3 = *(ulonglong *)(lVar6 + 0x30);
      uVar1 = *(undefined4 *)(lVar6 + 0x3c);
      abStack_244[0] = 0;
      bVar4 = recovered_10002344(0x220);
      if ((bVar4) && (iVar5 = Ram0000000082010a20, iVar5 != 0)) {
        uVar3 = Ram0000000082010a20;
        iVar5 = (*(code *)(ulong)uVar3)(uVar1,abStack_d0,0x80);
        if (-1 < iVar5) {
          uVar10 = 0;
          uVar7 = 1;
          do {
            lVar9 = 0;
            uVar8 = ~uVar10;
LAB_100025d4:
            bVar2 = abStack_d0[lVar9 + uVar10];
            if (bVar2 == 0) {
              if ((lVar9 != 0) && (1 < uVar7)) {
                lVar9 = 0;
                abStack_244[0] = 0x5b;
                pbVar11 = abStack_244;
                while( true ) {
                  pbVar11 = pbVar11 + 1;
                  if (abStack_d0[lVar9] == 0) break;
                  if (lVar9 + 2U < 0x174) {
                    *pbVar11 = abStack_d0[lVar9];
                  }
                  lVar9 = lVar9 + 1;
                }
                if (lVar9 + 2U < 0x174) {
                  *pbVar11 = 0x5d;
                }
                uVar7 = lVar9 + 3;
                if (uVar7 < 0x174) {
                  pbVar11[1] = 0x5c;
                }
                do {
                  pbVar11 = pbVar12 + 1;
                  bVar2 = *pbVar12;
                  pbVar12 = pbVar11;
                } while (bVar2 == 0x5c);
                bVar4 = true;
                while (bVar2 == 0x5c) {
                  if (!bVar4) {
                    bVar4 = true;
                    goto joined_r0x10002710;
                  }
                  bVar4 = true;
                  uVar10 = uVar7;
LAB_10002718:
                  uVar7 = uVar10;
                  bVar2 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                }
                if (bVar2 != 0) {
                  bVar4 = false;
joined_r0x10002710:
                  uVar10 = uVar7 + 1;
                  if (uVar7 + 1 < 0x174) {
                    abStack_244[uVar7] = bVar2;
                    uVar10 = uVar7 + 1;
                  }
                  goto LAB_10002718;
                }
                if (0x172 < uVar7) {
                  uVar7 = 0x173;
                }
                abStack_244[uVar7] = 0;
              }
              break;
            }
            if (uVar8 == 0xffffffffffffff80) break;
            if (bVar2 != 0x5c) {
              if ((((byte)(bVar2 - 0x30U) < 10 || (byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) ||
                  (bVar2 == 0x5f)) || (bVar2 == 0x2d)) goto LAB_10002628;
              break;
            }
            if (lVar9 == 0) break;
            uVar7 = uVar7 + 1;
            uVar10 = -uVar8;
            if (6 < uVar7) break;
          } while( true );
        }
      }
      thunk_snprintf((char *)(param_1 + 0x708),0x1b0,str_10003d45,arg3,abStack_244,arg5,
                         *(uint *)(lVar6 + 0x38));
    }
  }
  return;
LAB_10002628:
  lVar9 = lVar9 + 1;
  uVar8 = uVar8 - 1;
  goto LAB_100025d4;
}

#undef DAT_82010a20
#undef Ram0000000082010a20
#undef str_10003d3a
#undef str_10003d45
#undef abStack_244
#undef abStack_d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002768
 */

long recovered_10002768(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  long lVar2;
  long lVar3;

  if ((param_1 != 0) && (*(int *)(param_1 + 0x368) != -1)) {
    lVar3 = 0;
    while (lVar2 = lVar3 + 0x1b8, (ulong)*(uint *)(param_1 + 0x5a4) * 0x1b8 + 0x1b8 != lVar2) {
      piVar1 = (int *)(*(long *)(param_1 + 0x530) + lVar3);
      lVar3 = lVar2;
      if (*piVar1 == *(int *)(param_1 + 0x368)) {
        return *(long *)(param_1 + 0x530) + lVar2 + -0x1b8;
      }
    }
  }
  return 0;
}


#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027c0
 */

undefined8 recovered_100027c0(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002344(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100027f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return 0;
}

#undef UINT_8201084c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000280c
 */

bool recovered_1000280c(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)param_3;
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar1 = iVar2 + (int)param_4;
  return (((iVar2 <= param_1 && iVar1 != param_1) && (param_1 < iVar2 || param_1 <= iVar1)) &&
         iVar3 <= param_2) && param_2 < iVar3 + (int)((ulong)param_4 >> 0x20);
}


#undef DAT_100080a8
#define DAT_100080a8 (*(int *)(((uintptr_t)pf_module_state + 0x4600U)))
#define local_30 (*(undefined1 (*)[48])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002838
 */

void recovered_10002838(void *param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};


  PF_PART16(local_30,0) = recovered_10002890(param_2);
  thunk_pf_app_scrollbars_layout(0x7c00000010,(ulong)(DAT_100080a8 - 0x20) | 0xc600000000,local_30,(void *)0x0,
                     param_1);
  return;
}

#undef DAT_100080a8
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

uint128 recovered_10002890(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint128 auVar4;

  uVar2 = 0xb00000000;
  lVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x5a4) - 0xb;
    lVar3 = (ulong)uVar1 << 0x20;
    if (*(uint *)(param_1 + 0x5a4) < 0xb || uVar1 == 0) {
      lVar3 = 0;
    }
    uVar2 = (ulong)*(uint *)(param_1 + 0x554) | 0xb00000000;
  }
  PF_PART8(auVar4, 8) = uVar2;
  PF_PART8(auVar4, 0) = lVar3;
  return auVar4;
}


#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b8
 */

void recovered_100028b8(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;

  local_40 = 0;
  local_38 = 0;
  uVar4 = recovered_10002ad0(0,0,0,0,(long)&local_38 + 4,(long)&local_40 + 4);
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x36c) = 0xffffffff00000000;
    return;
  }
  if (*(uint *)(param_1 + 0x528) < PF_PART4(local_38, 4)) {
LAB_10002918:
    lVar5 = recovered_100027c0((ulong)PF_PART4(local_38, 4) * 0x28);
    if (PF_PART4(local_40, 4) == 0) {
      lVar6 = 0;
    }
    else {
LAB_10002930:
      lVar6 = recovered_100027c0((ulong)PF_PART4(local_40, 4));
    }
    if ((PF_PART4(local_38, 4) != 0) && (lVar5 == 0)) {
LAB_100029dc:
      recovered_10002390(lVar5);
      recovered_10002390(lVar6);
      return;
    }
    if (((PF_PART4(local_40, 4) != 0) && (lVar6 == 0)) ||
       (uVar4 = recovered_10002ad0(lVar5,(ulong)PF_PART4(local_38, 4),lVar6,(ulong)PF_PART4(local_40, 4),&local_38
                                   ,&local_40), (int)uVar4 == 0)) goto LAB_100029dc;
    if (PF_PART4(local_38, 4) < (uint)local_38) goto LAB_100029dc;
    if (PF_PART4(local_40, 4) < (uint)local_40) goto LAB_100029dc;
    recovered_10002390(*(undefined8 *)(param_1 + 0x518));
    recovered_10002390(*(undefined8 *)(param_1 + 0x520));
    *(long *)(param_1 + 0x518) = lVar5;
    *(long *)(param_1 + 0x520) = lVar6;
    *(uint *)(param_1 + 0x528) = PF_PART4(local_38, 4);
    *(uint *)(param_1 + 0x52c) = PF_PART4(local_40, 4);
  }
  else {
    if (*(uint *)(param_1 + 0x52c) < PF_PART4(local_40, 4)) {
      if (PF_PART4(local_38, 4) != 0) goto LAB_10002918;
      lVar5 = 0;
      goto LAB_10002930;
    }
    uVar4 = recovered_10002ad0(*(undefined8 *)(param_1 + 0x518),(ulong)*(uint *)(param_1 + 0x528),
                               *(undefined8 *)(param_1 + 0x520),(ulong)*(uint *)(param_1 + 0x52c),
                               &local_38,&local_40);
    if ((int)uVar4 == 0) {
      return;
    }
    if (*(uint *)(param_1 + 0x528) < (uint)local_38) {
      return;
    }
    if (*(uint *)(param_1 + 0x52c) < (uint)local_40) {
      return;
    }
  }
  *(uint *)(param_1 + 0x5a8) = (uint)local_38;
  lVar5 = 0x1c;
  for (uVar7 = 0; (uint)local_38 != uVar7; uVar7 = uVar7 + 1) {
    if (*(int *)(*(long *)(param_1 + 0x518) + lVar5) == *(int *)(param_1 + 0x370))
    goto LAB_10002ac8;
    lVar5 = lVar5 + 0x28;
  }
  bVar2 = recovered_10002344(0xbc);
  if (bVar2) {
    uVar1 = UINT_820108bc;
    if (uVar1 != 0) {
      iVar3 = (*(code *)(ulong)uVar1)();
      goto LAB_10002a7c;
    }
  }
  iVar3 = -1;
LAB_10002a7c:
  uVar7 = 0;
  lVar5 = 0x1c;
  while( true ) {
    if ((local_38 & 0xffffffff) == uVar7) {
      if ((uint)local_38 != 0) {
        *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(*(long *)(param_1 + 0x518) + 0x1c);
        *(undefined4 *)(param_1 + 0x36c) = 0;
      }
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x518) + lVar5) == iVar3) break;
    uVar7 = uVar7 + 1;
    lVar5 = lVar5 + 0x28;
  }
  *(int *)(param_1 + 0x370) = iVar3;
LAB_10002ac8:
  *(int *)(param_1 + 0x36c) = (int)uVar7;
  return;
}

#undef local_40
#undef local_38

#undef DAT_820109d0
#define DAT_820109d0 (*(uint8_t *)(0x820109d0U))
#undef Ram00000000820109d0
#define Ram00000000820109d0 (*(uint32_t *)(0x820109d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

undefined8
recovered_10002ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_10002344(0x1d0);
  if ((bVar2) && (uVar1 = Ram00000000820109d0, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar3;
  }
  return 0;
}

#undef DAT_820109d0
#undef Ram00000000820109d0

#undef UINT_82010904
#define UINT_82010904 (*(uint *)(0x82010904U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b5c
 */

undefined8 recovered_10002b5c(void *param_1,undefined8 param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10002344(0x104);
  if ((bVar1) && (uVar2 = UINT_82010904, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2,param_3);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010904

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

uint recovered_10002bbc(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;

  if (*param_1 != param_2) {
    thunk_memset(param_1,0,0x1c);
    *param_1 = param_2;
  }
  if (999 < param_3) {
    param_3 = 1000;
  }
  bVar1 = *(byte *)((long)param_1 + 0x19);
  *(ushort *)((long)(param_1 + 1) + (ulong)bVar1 * 2) = (ushort)param_3;
  uVar5 = bVar1 + 1;
  *(char *)((long)param_1 + 0x19) = (char)uVar5 + (char)(uVar5 / 10) * -10;
  uVar5 = (uint)*(byte *)(param_1 + 6);
  if (*(byte *)(param_1 + 6) < 10) {
    uVar5 = uVar5 + 1;
    *(char *)(param_1 + 6) = (char)uVar5;
  }
  uVar4 = 0;
  puVar3 = (ushort *)(param_1 + 1);
  for (uVar6 = (ulong)uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar4 = uVar4 + *puVar3;
    puVar3 = puVar3 + 1;
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar4 / uVar5;
  }
  return uVar2;
}


#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint *)(((uintptr_t)pf_module_state + 0x4604U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c5c
 */

void recovered_10002c5c(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_w21;

  uVar4 = (uint)param_2;
  uVar5 = uVar4;
  if ((int)DAT_100080a8 <= (int)uVar4) {
    uVar5 = DAT_100080a8;
  }
  uVar1 = 0;
  if (-1 < (int)uVar4) {
    uVar1 = uVar5;
  }
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar3 = uVar5;
  if ((int)DAT_100080ac <= (int)uVar5) {
    uVar3 = DAT_100080ac;
  }
  uVar6 = 0;
  if (-1 < param_2) {
    uVar6 = uVar3;
  }
  uVar4 = uVar4 + (int)param_3;
  uVar3 = uVar4;
  if ((int)DAT_100080a8 <= (int)uVar4) {
    uVar3 = DAT_100080a8;
  }
  uVar2 = 0;
  if (-1 < (int)uVar4) {
    uVar2 = uVar3;
  }
  uVar5 = uVar5 + (int)((ulong)param_3 >> 0x20);
  uVar4 = uVar5;
  if ((int)DAT_100080ac <= (int)uVar5) {
    uVar4 = DAT_100080ac;
  }
  uVar3 = 0;
  if (-1 < (int)uVar5) {
    uVar3 = uVar4;
  }
  for (; uVar4 = uVar1, (int)uVar6 < (int)uVar3; uVar6 = uVar6 + 1) {
    for (; (int)uVar4 < (int)uVar2; uVar4 = uVar4 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10002d40(param_1,uVar4,uVar6,unaff_w21);
    }
  }
  return;
}

#undef DAT_100080a8
#undef DAT_100080ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d1c
 */

uint recovered_10002d1c(uint role)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = thunk_terror_ui_colour(role);
  return uVar1 & 0xff00 | uVar1 << 0x10 | uVar1 >> 0x10 & 0xff;
}


#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(int *)(((uintptr_t)pf_module_state + 0x4604U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

void recovered_10002d40(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if ((((param_1 != 0) && (-1 < (int)(param_3 | param_2))) && (*(long *)(param_1 + 0x350) != 0)) &&
     ((int)param_2 < (int)DAT_100080a8 && (int)param_3 < DAT_100080ac)) {
    lVar1 = (ulong)param_2 + (ulong)DAT_100080a8 * (ulong)param_3;
    *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4) = (char)param_4;
    *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 1) = (char)((uint)param_4 >> 8);
    *(char *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 2) = (char)((uint)param_4 >> 0x10);
    *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar1 * 4 + 3) = 0xff;
  }
  return;
}

#undef DAT_100080a8
#undef DAT_100080ac

/* Native button geometry and tail-forwarded text; Pooka's Free Software License. */
void recovered_10002db0(void *state,ulonglong xy,ulonglong wh,char *label,int selected){
 uint32_t x=(uint32_t)xy,y=(uint32_t)(xy>>32),width=(uint32_t)wh;
 recovered_10002c5c((long)state,xy,wh,recovered_10002d1c(selected?2:59)&0xffffffU);
 recovered_10002e5c((long)state,xy,wh,recovered_10002d1c(3)&0xffffffU);
 uint64_t highlight=(uint64_t)(uint32_t)(x+1)|((uint64_t)(uint32_t)(y+1)<<32);
 recovered_10002c5c((long)state,highlight,(uint64_t)(uint32_t)(width-2)|(1ULL<<32),recovered_10002d1c(31)&0xffffffU);
 recovered_10002ef4(state,(int32_t)(x+9),(int32_t)(y+6),label,recovered_10002d1c(selected?1:50)&0xffffffU,(int32_t)(width-16));
}


#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint *)(((uintptr_t)pf_module_state + 0x4604U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e5c
 */

void recovered_10002e5c(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_w21;
  uint uVar6;
  ulong uVar7;

  uVar7 = param_3 & 0xffffffff | 0x100000000;
  recovered_10002c5c(param_1,param_2,uVar7,param_4 & 0xffffff);
  recovered_10002c5c(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar7,param_4 & 0xffffff);
  recovered_10002c5c(param_1,param_2,param_3 & 0xffffffff00000000 | 1,param_4 & 0xffffff);
  uVar6 = (int)param_3 + (int)param_2;
  uVar3 = uVar6 - 1;
  uVar4 = uVar3;
  if ((int)DAT_100080a8 <= (int)uVar3) {
    uVar4 = DAT_100080a8;
  }
  uVar1 = 0;
  if (-1 < (int)uVar3) {
    uVar1 = uVar4;
  }
  uVar4 = (uint)(param_2 >> 0x20);
  uVar2 = uVar4;
  if ((int)DAT_100080ac <= (int)uVar4) {
    uVar2 = DAT_100080ac;
  }
  uVar5 = 0;
  if (-1 < (long)((ulong)uVar3 | param_2 & 0xffffffff00000000)) {
    uVar5 = uVar2;
  }
  uVar3 = uVar6;
  if ((int)DAT_100080a8 <= (int)uVar6) {
    uVar3 = DAT_100080a8;
  }
  uVar2 = 0;
  if (-1 < (int)uVar6) {
    uVar2 = uVar3;
  }
  uVar4 = uVar4 + (int)(param_3 >> 0x20);
  uVar6 = uVar4;
  if ((int)DAT_100080ac <= (int)uVar4) {
    uVar6 = DAT_100080ac;
  }
  uVar3 = 0;
  if (-1 < (int)uVar4) {
    uVar3 = uVar6;
  }
  for (; uVar6 = uVar1, (int)uVar5 < (int)uVar3; uVar5 = uVar5 + 1) {
    for (; (int)uVar6 < (int)uVar2; uVar6 = uVar6 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10002d40(param_1,uVar6,uVar5,unaff_w21);
    }
  }
  return;
}

#undef DAT_100080a8
#undef DAT_100080ac

#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(int *)(((uintptr_t)pf_module_state + 0x4604U)))
#define lStack_58 (*(long *)(pf_stack_frame + 24))
#define uStack_4c (*(uint *)(pf_stack_frame + 36))
#define uStack_48 (*(uint *)(pf_stack_frame + 40))
#define uStack_44 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef4
 */

void recovered_10002ef4(void *state,int x,int y,char *text,uint rgb,int maximumWidth)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;

  if ((((state != (void *)0x0) && (maximumWidth != 0)) && (text != (char *)0x0)) &&
     (*(long *)((long)state + 0x350) != 0)) {
    thunk_memset(&lStack_58,0,0x18);
    bVar9 = recovered_10002344(0x178);
    if (bVar9) {
      uVar7 = UINT_82010978;
      if (((uVar7 != 0) &&
          (uVar6 = (rgb & 0xff00ff00 | 0xff000000) >> 8 | (rgb & 0xff00ff) << 8,
          iVar10 = (*(code *)(ulong)uVar7)
                             (text,0xffffffff,1,uVar6 >> 0x10 | uVar6 << 0x10,&lStack_58),
          iVar8 = DAT_100080ac, uVar7 = DAT_100080a8, iVar10 != 0)) && (lStack_58 != 0)) {
        if (uStack_4c << 2 <= uStack_44) {
          uVar15 = 0;
          uVar6 = uStack_4c;
          if ((uint)maximumWidth <= uStack_4c) {
            uVar6 = maximumWidth;
          }
          if (maximumWidth < 1) {
            uVar6 = uStack_4c;
          }
          for (; uVar15 < uStack_48; uVar15 = uVar15 + 1) {
            uVar3 = (int)uVar15 + y;
            if ((-1 < (int)uVar3) && ((int)uVar3 < iVar8)) {
              uVar1 = x;
              lVar2 = lStack_58;
              for (uVar16 = (ulong)uVar6; uVar16 != 0; uVar16 = uVar16 - 1) {
                if ((-1 < (int)uVar1) && ((int)uVar1 < (int)uVar7)) {
                  lVar12 = lVar2 + uVar15 * uStack_44;
                  bVar11 = *(byte *)(lVar12 + 3);
                  if (bVar11 != 0) {
                    lVar14 = uVar15 * uStack_44;
                    pbVar4 = (byte *)(*(long *)((long)state + 0x350) +
                                     ((ulong)uVar7 * (ulong)uVar3 + (ulong)uVar1) * 4);
                    if (bVar11 == 0xff) {
                      *pbVar4 = *(byte *)(lVar2 + lVar14);
                      pbVar4[1] = *(byte *)(lVar12 + 1);
                      bVar11 = *(byte *)(lVar12 + 2);
                    }
                    else {
                      uVar13 = (uint)bVar11;
                      uVar5 = uVar13 ^ 0xff;
                      *pbVar4 = (byte)((uVar5 * *pbVar4 + *(byte *)(lVar2 + lVar14) * uVar13 + 0x7f)
                                      / 0xff);
                      pbVar4[1] = (byte)((uVar5 * pbVar4[1] + *(byte *)(lVar12 + 1) * uVar13 + 0x7f)
                                        / 0xff);
                      bVar11 = (byte)((uVar5 * pbVar4[2] + *(byte *)(lVar12 + 2) * uVar13 + 0x7f) /
                                     0xff);
                    }
                    pbVar4[2] = bVar11;
                    pbVar4[3] = 0xff;
                  }
                }
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 4;
              }
            }
          }
        }
        recovered_10002390(lStack_58);
      }
    }
  }
  return;
}

#undef DAT_100080a8
#undef DAT_100080ac
#undef lStack_58
#undef uStack_4c
#undef uStack_48
#undef uStack_44

#undef DAT_10003dd4
#define DAT_10003dd4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32cU)))
#undef DAT_10003dd6
#define DAT_10003dd6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32eU)))
#undef DAT_10003dd9
#define DAT_10003dd9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_10003ddc
#define DAT_10003ddc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef str_10003ddf
#define str_10003ddf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x337U)))
#undef str_10003dee
#define str_10003dee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x346U)))
#define in_stack_ffffffffffffffe0 (*(undefined * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030c0
 */

void recovered_100030c0(ulong param_1,char *param_2,ulong param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char *arg2;
  long lVar1;
  undefined *arg4;
  ulong uVar2;

  if (param_1 >> 0x1e == 0) {
    if (param_1 >> 0x14 == 0) {
      if (param_1 < 0x400) {
        arg4 = &DAT_10003dd4;
        arg2 = str_10003dee;
        goto LAB_10003144;
      }
      in_stack_ffffffffffffffe0 = &DAT_10003ddc;
      uVar2 = 0x3ff;
      lVar1 = 10;
    }
    else {
      in_stack_ffffffffffffffe0 = &DAT_10003dd9;
      uVar2 = 0xfffff;
      lVar1 = 0x14;
    }
  }
  else {
    in_stack_ffffffffffffffe0 = &DAT_10003dd6;
    uVar2 = 0x3fffffff;
    lVar1 = 0x1e;
  }
  arg4 = (undefined *)((uVar2 & param_1) * 100 >> lVar1);
  arg2 = str_10003ddf;
  param_1 = param_1 >> lVar1;
LAB_10003144:
  thunk_snprintf(param_2,param_3,arg2,param_1,(ulonglong)arg4,in_stack_ffffffffffffffe0);
  return;
}

#undef DAT_10003dd4
#undef DAT_10003dd6
#undef DAT_10003dd9
#undef DAT_10003ddc
#undef str_10003ddf
#undef str_10003dee
#undef in_stack_ffffffffffffffe0

#undef DAT_100080a8
#define DAT_100080a8 (*(uint *)(((uintptr_t)pf_module_state + 0x4600U)))
#undef DAT_100080ac
#define DAT_100080ac (*(uint *)(((uintptr_t)pf_module_state + 0x4604U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003174
 */

void recovered_10003174(long param_1,int param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_w21;

  uVar5 = recovered_10002d1c(0x2a);
  recovered_10002c5c(param_1,CONCAT44(param_3,param_2),0x1200000012,uVar5 & 0xffffff);
  uVar5 = recovered_10002d1c(3);
  recovered_10002e5c(param_1,CONCAT44(param_3,param_2),0x1200000012,uVar5 & 0xffffff);
  uVar5 = param_2 + 5;
  uVar1 = param_3 + 5;
  uVar6 = uVar5;
  if ((int)DAT_100080a8 <= (int)uVar5) {
    uVar6 = DAT_100080a8;
  }
  uVar2 = 0;
  if (-1 < (int)uVar5) {
    uVar2 = uVar6;
  }
  uVar5 = uVar1;
  if ((int)DAT_100080ac <= (int)uVar1) {
    uVar5 = DAT_100080ac;
  }
  uVar6 = 0;
  if (-1 < (int)uVar1) {
    uVar6 = uVar5;
  }
  uVar5 = param_2 + 0xd;
  uVar1 = uVar5;
  if ((int)DAT_100080a8 <= (int)uVar5) {
    uVar1 = DAT_100080a8;
  }
  uVar3 = 0;
  if (-1 < (int)uVar5) {
    uVar3 = uVar1;
  }
  uVar5 = param_3 + 0xd;
  uVar1 = uVar5;
  if ((int)DAT_100080ac <= (int)uVar5) {
    uVar1 = DAT_100080ac;
  }
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar1;
  }
  for (; uVar5 = uVar2, (int)uVar6 < (int)uVar4; uVar6 = uVar6 + 1) {
    for (; (int)uVar5 < (int)uVar3; uVar5 = uVar5 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10002d40(param_1,uVar5,uVar6,unaff_w21);
    }
  }
  return;
}

#undef DAT_100080a8
#undef DAT_100080ac

#define uStack_b8 (*(uint *)(pf_stack_frame + 24))
#define uStack_b0 (*(uint *)(pf_stack_frame + 32))
#define uStack_90 (*(uint *)(pf_stack_frame + 64))
#define uStack_88 (*(uint *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031e4
 */

void recovered_100031e4(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;

  uVar5 = recovered_10002d1c(0x45);
  recovered_10002c5c(param_1,param_2,param_3,uVar5 & 0xffffff);
  uVar5 = recovered_10002d1c(0x46);
  recovered_10002e5c(param_1,param_2,param_3,uVar5 & 0xffffff);
  lVar17 = 0;
  uVar11 = (uint)param_3;
  uVar5 = uVar11 - 1;
  iVar15 = (int)(param_3 >> 0x20);
  iVar1 = (int)(param_2 >> 0x20) + iVar15;
  iVar3 = iVar1 + -2;
  iVar4 = iVar15 + -4;
  iVar1 = iVar1 + -1;
  uVar14 = param_2 & 0xffffffff;
  do {
    if ((ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) * 0x47 == lVar17) {
      return;
    }
    iVar16 = (int)lVar17;
    if ((int)uVar11 < 2) {
      lVar10 = 0x47;
      if (param_4 != 0) goto LAB_100032d4;
LAB_100032f4:
      uVar8 = 0;
      if (param_5 == 0) goto LAB_100032fc;
LAB_100032dc:
      uVar7 = (uint)*(byte *)(param_5 + lVar10);
    }
    else {
      iVar2 = 0;
      if (uVar5 != 0) {
        iVar2 = iVar16 / (int)uVar5;
      }
      lVar10 = (long)iVar2;
      if (param_4 == 0) goto LAB_100032f4;
LAB_100032d4:
      uVar8 = (uint)*(byte *)(param_4 + lVar10);
      if (param_5 != 0) goto LAB_100032dc;
LAB_100032fc:
      uVar7 = 0;
    }
    if (param_6 == 0) {
      if (lVar17 == 0) goto LAB_10003494;
      iVar2 = 0;
      if (uVar5 != 0) {
        iVar2 = (iVar16 + -0x47) / (int)uVar5;
      }
      uVar13 = (uint)uVar14;
      if (param_4 == 0) {
        uVar9 = 0;
        if (param_5 == 0) goto LAB_100034a8;
LAB_10003370:
        uVar12 = (uint)*(byte *)(param_5 + iVar2);
        uVar6 = (uint)*(byte *)(param_5 + iVar2);
      }
      else {
        uVar9 = (uint)*(byte *)(param_4 + iVar2);
        if (param_5 != 0) goto LAB_10003370;
LAB_100034a8:
        uVar12 = 0;
        uVar6 = 0;
      }
      if (param_4 != 0) {
        uVar6 = recovered_10002d1c(0x23);
        uStack_b0 = uStack_b0 & 0xff000000 | uVar6 & 0xffffff;
        recovered_100034d4(param_1,uVar13 - 1,(int)(uVar9 * iVar4) / -100 + iVar3,uVar13,
                           (int)(uVar8 * iVar4) / -100 + iVar3,uStack_b0);
        uVar6 = uVar12;
      }
      if (param_5 != 0) {
        uVar8 = recovered_10002d1c(0x12);
        uStack_b8 = uStack_b8 & 0xff000000 | uVar8 & 0xffffff;
        recovered_100034d4(param_1,uVar13 - 1,(int)(uVar6 * iVar4) / -100 + iVar3,uVar13,
                           (int)(uVar7 * iVar4) / -100 + iVar3,uStack_b8);
      }
    }
    else if ((lVar17 != 0) && ((ulong)uVar5 * 0x47 != lVar17 && 2 < iVar15)) {
      if ((int)uVar11 < 4) {
        lVar10 = 0x47;
        if (param_5 != 0) goto LAB_10003330;
LAB_1000340c:
        uVar8 = 0;
        if (param_4 == 0) goto LAB_10003414;
LAB_10003340:
        uVar7 = 100 - uVar8;
        if ((uint)*(byte *)(param_4 + lVar10) <= 100 - uVar8) {
          uVar7 = (uint)*(byte *)(param_4 + lVar10);
        }
      }
      else {
        iVar2 = 0;
        if (uVar11 - 3 != 0) {
          iVar2 = (iVar16 + -0x47) / (int)(uVar11 - 3);
        }
        lVar10 = (long)iVar2;
        if (param_5 == 0) goto LAB_1000340c;
LAB_10003330:
        uVar8 = (uint)*(byte *)(param_5 + lVar10);
        if (99 < uVar8) {
          uVar8 = 100;
        }
        if (param_4 != 0) goto LAB_10003340;
LAB_10003414:
        uVar7 = 0;
      }
      uVar9 = (uVar8 * (iVar15 + -2)) / 100;
      uVar13 = iVar1 - uVar9;
      uVar8 = iVar1 - ((uVar7 + uVar8) * (iVar15 + -2)) / 100;
      uVar7 = recovered_10002d1c(0x12);
      uStack_90 = uStack_90 & 0xff000000 | uVar7 & 0xffffff;
      recovered_10002c5c(param_1,uVar14 & 0xffffffff | (ulong)uVar13 << 0x20,
                         (ulong)uVar9 << 0x20 | 1,uStack_90);
      uVar7 = recovered_10002d1c(0x23);
      uStack_88 = uStack_88 & 0xff000000 | uVar7 & 0xffffff;
      recovered_10002c5c(param_1,uVar14 & 0xffffffff | (ulong)uVar8 << 0x20,
                         (ulong)(uVar13 - uVar8) << 0x20 | 1,uStack_88);
    }
LAB_10003494:
    lVar17 = lVar17 + 0x47;
    uVar14 = uVar14 + 1;
  } while( true );
}

#undef uStack_b8
#undef uStack_b0
#undef uStack_90
#undef uStack_88

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034d4
 */

void recovered_100034d4(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar7 = param_4 - param_2;
  iVar6 = -1;
  if (iVar7 != 0 && (int)param_2 <= (int)param_4) {
    iVar6 = 1;
  }
  iVar1 = -iVar7;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar5 = param_5 - param_3;
  iVar7 = -1;
  if (!(iVar5 == 0 || (int)param_5 < (int)param_3)) {
    iVar7 = 1;
    iVar5 = param_3 - param_5;
  }
  iVar8 = iVar5 + iVar1;
  while (recovered_10002d40(param_1,param_2,param_3,param_6 & 0xffffff),
        param_3 != param_5 || param_2 != param_4) {
    iVar4 = iVar8 * 2;
    iVar2 = 0;
    if (iVar5 <= iVar4) {
      iVar2 = iVar5;
    }
    iVar3 = 0;
    if (iVar5 <= iVar4) {
      iVar3 = iVar6;
    }
    param_2 = iVar3 + param_2;
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar7;
    }
    param_3 = iVar3 + param_3;
    iVar3 = 0;
    if (iVar4 <= iVar1) {
      iVar3 = iVar1;
    }
    iVar8 = iVar2 + iVar8 + iVar3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035a4
 */

void recovered_100035a4(long param_1,int param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint unaff_w22;
  int iVar1;
  int iVar2;

  for (iVar1 = -0x20; iVar1 != 0x21; iVar1 = iVar1 + 1) {
    for (iVar2 = -0x20; iVar2 != 0x21; iVar2 = iVar2 + 1) {
      if ((uint)(iVar1 * iVar1 + iVar2 * iVar2) < 0x401) {
        unaff_w22 = unaff_w22 & 0xff000000 | param_4 & 0xffffff;
        recovered_10002d40(param_1,param_2 + iVar2,iVar1 + param_3,unaff_w22);
      }
    }
  }
  return;
}


/* Native selector geometry and tail-forwarded text; Pooka's Free Software License. */
void recovered_10003624(long state,ulong xy){
 uint32_t x=(uint32_t)xy,y=(uint32_t)(xy>>32);
 uint64_t box=(uint64_t)(uint32_t)(x+54)|((uint64_t)(uint32_t)(y+14)<<32);
 const char *name=*(unsigned char *)(state+0x448)?(char *)(state+0x448):(char *)(pf_module_state+0x477);
 recovered_10002c5c(state,box,250ULL|(22ULL<<32),recovered_10002d1c(2)&0xffffffU);
 recovered_10002e5c(state,box,250ULL|(22ULL<<32),recovered_10002d1c(3)&0xffffffU);
 recovered_10002ef4((void *)state,(int32_t)(x+63),(int32_t)(y+21),(char *)name,recovered_10002d1c(1)&0xffffffU,216);
 box=(uint64_t)(uint32_t)(x+286)|((uint64_t)(uint32_t)(y+15)<<32);
 recovered_10002c5c(state,box,17ULL|(20ULL<<32),recovered_10002d1c(4)&0xffffffU);
 recovered_10002ef4((void *)state,(int32_t)(x+291),(int32_t)(y+21),(char *)(pf_module_state+0x48d),recovered_10002d1c(1)&0xffffffU,8);
}


#undef str_10003f37
#define str_10003f37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x48fU)))
#define auStack_40 (*(undefined1 (*)[64])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003714
 */

void recovered_10003714(ulong param_1,char *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};


  recovered_100030c0(param_1,auStack_40,0x20);
  thunk_snprintf(param_2,0x40,str_10003f37,auStack_40);
  return;
}

#undef str_10003f37
#undef auStack_40
