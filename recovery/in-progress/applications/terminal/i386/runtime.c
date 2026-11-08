#include "../../window_focus.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006950
#define DAT_00006950 (*(uint8_t *)(0x6950U))
#undef DAT_01807eef
#define DAT_01807eef (*(uint8_t *)(0x1807eefU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram00006950
#define Ram00006950 (*(uint32_t *)(0x6950U))
#undef UINT_00006828
#define UINT_00006828 (*(uint *)(0x6828U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006890
#define UINT_00006890 (*(uint *)(0x6890U))
#undef UINT_00006894
#define UINT_00006894 (*(uint *)(0x6894U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#undef UNK_01807da0
#define UNK_01807da0 (*(uint8_t *)(0x1807da0U))
#undef UNK_01807e24
#define UNK_01807e24 (*(uint8_t *)(0x1807e24U))
#undef UNK_01807e44
#define UNK_01807e44 (*(uint8_t *)(0x1807e44U))
#undef UNK_01807ec8
#define UNK_01807ec8 (*(uint8_t *)(0x1807ec8U))
#undef UNK_01807f23
#define UNK_01807f23 (*(uint8_t *)(0x1807f23U))
#undef UNK_01807f5c
#define UNK_01807f5c (*(uint8_t *)(0x1807f5cU))
#undef UNK_01807f85
#define UNK_01807f85 (*(uint8_t *)(0x1807f85U))
#undef UNK_01807f93
#define UNK_01807f93 (*(uint8_t *)(0x1807f93U))
#undef UNK_01807f98
#define UNK_01807f98 (*(uint8_t *)(0x1807f98U))
#undef UNK_01807f9d
#define UNK_01807f9d (*(uint8_t *)(0x1807f9dU))
#undef UNK_01807fa2
#define UNK_01807fa2 (*(uint8_t *)(0x1807fa2U))
#undef UNK_01807fa6
#define UNK_01807fa6 (*(uint8_t *)(0x1807fa6U))
#undef UNK_01807fab
#define UNK_01807fab (*(uint8_t *)(0x1807fabU))
#define local_50 (*(byte * *)(frame + 6912))
#define local_48 (*(uint *)(frame + 6920))
#define local_44 (*(byte * *)(frame + 6924))
#define local_40 (*(byte * *)(frame + 6928))
#define local_3c (*(byte * *)(frame + 6932))
#define local_38 (*(byte * *)(frame + 6936))
#define local_34 (*(byte * *)(frame + 6940))
#define local_30 (*(byte * *)(frame + 6944))
#define local_2c (*(uint *)(frame + 6948))
#define local_28 (*(byte * *)(frame + 6952))
#define local_24 (*(byte * *)(frame + 6956))
#define local_20 (*(byte * *)(frame + 6960))
#define local_1c (*(byte * *)(frame + 6964))
#define local_18 (*(byte * *)(frame + 6968))
#define local_14 (*(byte * *)(frame + 6972))
#define local_1a9c (*(undefined4 *)(frame + 180))
#define local_1a98 (*(undefined4 *)(frame + 184))
#define local_1a94 (*(int *)(frame + 188))
#define local_1a90 (*(int *)(frame + 192))
#define local_1a8c (*(undefined4 *)(frame + 196))
#define local_1a88 (*(byte * *)(frame + 200))
#define local_1a84 (*(byte * *)(frame + 204))
#define local_1a74 (*(uint *)(frame + 220))
#define local_1a70 (*(undefined4 *)(frame + 224))
#define local_1a6c (*(uint *)(frame + 228))
#define local_1a68 (*(int *)(frame + 232))
#define local_1a64 (*(uint *)(frame + 236))
#define local_1a60 (*(undefined4 *)(frame + 240))
#define local_169c (*(int *)(frame + 1204))
#define local_1698 (*(byte * *)(frame + 1208))
#define local_1694 (*(byte * *)(frame + 1212))
#define local_1690 (*(uint *)(frame + 1216))
#define local_1670 (*(void * *)(frame + 1248))
#define local_135c (*(void * *)(frame + 2036))
#define local_1358 (*(byte * *)(frame + 2040))
#define local_1354 (*(undefined4 *)(frame + 2044))
#define local_1350 (*(uint *)(frame + 2048))
#define local_134c (*(uint *)(frame + 2052))
#define local_1348 (*(byte * *)(frame + 2056))
#define local_1344 (*(byte * *)(frame + 2060))
#define local_1340 (*(byte * *)(frame + 2064))
#define local_133c (*(char *)(frame + 2068))
#define local_133b (*(undefined2 *)(frame + 2069))
#define local_1338 (*(int *)(frame + 2072))
#define local_1334 (*(int *)(frame + 2076))
#define local_1330 (*(undefined4 *)(frame + 2080))
#define local_132c (*(byte (*)[160])(frame + 2084))
#define local_128c (*(int *)(frame + 2244))
#define local_1288 (*(int *)(frame + 2248))
#define local_1284 (*(byte * *)(frame + 2252))
#define local_1280 (*(uint *)(frame + 2256))
#define local_127c (*(int *)(frame + 2260))
#define local_1278 (*(char *)(frame + 2264))
#define local_1277 (*(char *)(frame + 2265))
#define auStackY_1b40 (*(undefined1 (*)[128])(frame + 16))
#define local_1274 (*(int *)(frame + 2268))
#define local_1270 (*(int *)(frame + 2272))
#define local_126c (*(int *)(frame + 2276))
#define local_1268 (*(uint *)(frame + 2280))
#define local_1264 (*(char (*)[512])(frame + 2284))
#define local_1064 (*(byte (*)[4096])(frame + 2796))
#define local_64 (*(byte * *)(frame + 6892))
#define local_60 (*(void * *)(frame + 6896))
#define local_5c (*(int *)(frame + 6900))
#define local_58 (*(int *)(frame + 6904))
#define local_54 (*(int *)(frame + 6908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000780
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_10000780(void)

{
  unsigned char frame[7024] __attribute__((aligned(16))) = {0};

  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined4 extraout_ECX = 0;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar16;
  uint uVar15;
  undefined4 extraout_EDX = 0;
  byte bVar17;
  undefined3 uVar18;
  undefined4 *puVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  bool bVar25;
  byte *pbVar26;

  memset(&local_169c,0,0x1638);
  iVar9 = Ram00006800;
  puVar19 = (undefined4 *)(auStackY_1b40 + 0x84);
  if (iVar9 == 0x50414d57) {
    iVar9 = Ram00006804;
    puVar19 = (undefined4 *)(auStackY_1b40 + 0x84);
    if (iVar9 != 0) {
      uVar3 = Ram00006808;
      puVar19 = (undefined4 *)(auStackY_1b40 + 0x84);
      if (0xb < uVar3) {
        uVar3 = Ram00006808;
        puVar19 = (undefined4 *)(auStackY_1b40 + 0x84);
        if (0x4f < uVar3) {
          pcVar2 = (code *)UINT_0000684c;
          puVar19 = (undefined4 *)(auStackY_1b40 + 0x84);
          if (pcVar2 != (code *)0x0) {
            local_1358 = (*pcVar2)(0x3e800);
            puVar19 = (undefined4 *)(auStackY_1b40 + 0x84);
            if (local_1358 == (byte *)0x0) goto LAB_10006c47;
            memset(local_1358,0,0x3e800);
            pf_app_window_spec(&local_1a9c,"Cancer",0x2f8,400);
            local_1a8c = 0x4c91c4;
            local_1a6c = local_1a6c | 1;
            uVar3 = terror_ui_window_open(&local_169c,&local_1a9c);
            if (uVar3 != 0) {
              pbVar26 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
              terror_ui_window_set_menus(&local_169c,"","Copy Line|Paste","");
              if ((local_135c != (void *)0x0) ||
                 (local_135c = local_1670, local_1670 != (void *)0x0)) {
                local_1334 = 6;
                local_1330 = (byte *)0xa;
                memset(&local_60,0,0x18);
                iVar9 = Ram00006800;
                if (((iVar9 == 0x50414d57) &&
                    (((iVar9 = Ram00006804, iVar9 != 0 && (uVar3 = Ram00006808, 0xb < uVar3)) &&
                     (uVar3 = Ram00006808, 0x17b < uVar3)))) &&
                   (pcVar2 = (code *)UINT_00006978, pcVar2 != (code *)0x0)) {
                  pbVar26 = (byte *)0x0;
                  uVar3 = (*pcVar2)("W",0xffffffff,0x80000001,0,&local_60);
                  if (uVar3 != 0) {
                    if (local_54 - 1U < 0x40) {
                      local_1334 = local_54;
                    }
                    if (local_50 + -1 < (byte *)0x40) {
                      local_1330 = local_50;
                    }
                    if (((((local_60 != (void *)0x0) && (local_5c == 0)) &&
                         ((local_60 != (void *)0x0 &&
                          ((iVar9 = Ram00006800, iVar9 == 0x50414d57 &&
                           (iVar9 = Ram00006804, iVar9 != 0)))))) &&
                        (uVar3 = Ram00006808, 0xb < uVar3)) &&
                       ((uVar3 = Ram00006808, 0x53 < uVar3 &&
                        (pcVar2 = (code *)UINT_00006850, pcVar2 != (code *)0x0)))) {
                      (*pcVar2)(local_60);
                    }
                    memset(&local_60,0,0x18);
                  }
                }
                if (local_1358 != (byte *)0x0) {
                  if (local_1288 < 1000) {
                    iVar9 = local_128c + local_1288;
                    local_1288 = local_1288 + 1;
                  }
                  else {
                    iVar9 = recovered_10006ca0((int)&local_169c,
                                               (char *)(local_1358 +
                                                       (local_128c +
                                                       ((uint)((ulonglong)
                                                               ((longlong)local_128c * 0x10624dd3)
                                                              >> 0x26) - (local_128c >> 0x1f)) *
                                                       -1000) * 0x100));
                    local_128c = local_128c + 1 + ((local_128c + 1) / 1000) * -1000;
                    iVar20 = (int)local_1284 - iVar9;
                    if (iVar20 == 0 || (int)local_1284 < iVar9) {
                      iVar20 = 0;
                    }
                    iVar9 = local_1288 + -1 + local_128c;
                    local_1284 = (byte *)iVar20;
                  }
                  iVar9 = (iVar9 + ((uint)((ulonglong)((longlong)iVar9 * 0x10624dd3) >> 0x26) -
                                   (iVar9 >> 0x1f)) * -1000) * 0x100;
                  local_1358[iVar9] = 0x54;
                  local_1358[iVar9 + 1] = 0x65;
                  local_1358[iVar9 + 2] = 0x72;
                  local_1358[iVar9 + 3] = 0x6d;
                  local_1358[iVar9 + 4] = 0x69;
                  local_1358[iVar9 + 5] = 0x6e;
                  local_1358[iVar9 + 6] = 0x61;
                  local_1358[iVar9 + 7] = 0x6c;
                  local_1358[iVar9 + 8] = 0x20;
                  local_1358[iVar9 + 9] = 0x43;
                  local_1358[iVar9 + 10] = 0x61;
                  local_1358[iVar9 + 0xb] = 0x6e;
                  local_1358[iVar9 + 0xc] = 99;
                  local_1358[iVar9 + 0xd] = 0x65;
                  local_1358[iVar9 + 0xe] = 0x72;
                  local_1358[iVar9 + 0xf] = 0;
                }
                if (local_1288 < 1) {
                  iVar9 = 0;
                }
                else {
                  iVar20 = 0;
                  iVar9 = 0;
                  do {
                    if (local_1358 == (byte *)0x0) {
                      pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                    }
                    else {
                      iVar4 = local_128c + iVar20;
                      pbVar23 = local_1358 +
                                (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26)
                                         - (iVar4 >> 0x1f)) * -1000) * 0x100;
                    }
                    iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                    iVar9 = iVar9 + iVar4;
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < local_1288);
                }
                pbVar23 = local_1330 + 2;
                pbVar21 = pbVar23;
                if ((int)local_1330 < 1) {
                  pbVar21 = (byte *)0xc;
                }
                pbVar5 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar5 = local_1694;
                }
                pbVar5 = pbVar5 + (-0x26 - (int)pbVar21);
                if ((int)local_1330 < 1) {
                  if ((int)pbVar5 < 0x11) {
                    pbVar5 = (byte *)0x10;
                  }
                  pbVar23 = (byte *)0xc;
                }
                else if ((int)pbVar5 <= (int)(local_1330 + 6)) {
                  pbVar5 = local_1330 + 6;
                }
                uVar3 = (uint)pbVar5 / (uint)pbVar23;
                local_1284 = (byte *)((iVar9 - uVar3) - (uint)(uVar3 == 0));
                if ((int)local_1284 < 1) {
                  local_1284 = (byte *)0x0;
                }
                local_1277 = '\x01';
                pbVar23 = (byte *)(local_1280 >> 0xc & 1);
                local_34 = (byte *)CONCAT31((int3)(uVar3 >> 8),1);
LAB_10000c27:
                pbVar21 = local_1698;
                local_14 = local_1694;
                local_28 = pbVar23;
                memset(&local_1a9c,0,0x278);
                pf_app_refresh_inactive_info(&local_169c);                uVar3 = terror_ui_window_query(&local_169c,&local_1a9c);
                if ((uVar3 != 0) &&
                   (uVar3 = terror_ui_window_sync_buffer(&local_169c,&local_1a9c), uVar3 != 0)) {
                  local_135c = local_1670;
                  if ((local_1698 != pbVar21) || (local_1694 != local_14)) {
                    local_1278 = '\x01';
                  }
                  local_1354 = local_1a70;
                  local_1350 = local_1a6c;
                  local_134c = local_1a74;
                  if ((local_1a68 != 0) && (local_1a68 != local_127c)) {
                    local_127c = local_1a68;
                    if ((local_1a64 ^ 2) == 0 && local_1a60 == 0) {
                      recovered_10006df0((int)&local_169c);
                    }
                    else if ((local_1a64 ^ 2) == 0 && local_1a60 == 1) {
                      recovered_10007050((int)&local_169c);
                    }
                  }
                  if ((local_1a74 & 0x11) == 0) {
                    local_18 = (byte *)CONCAT31(PF_PART3(local_18, 1),local_1278);
                    if (local_1278 == '\x01') {
                      local_1278 = '\0';
                    }
                    iVar9 = 0;
                    while( true ) {
                      local_14 = local_1284;
                      iVar20 = 0;
                      local_2c = iVar9;
                      if (0 < local_1288) {
                        iVar9 = 0;
                        iVar20 = 0;
                        do {
                          if (local_1358 == (byte *)0x0) {
                            pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                          }
                          else {
                            iVar4 = local_128c + iVar9;
                            pbVar23 = local_1358 +
                                      (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >>
                                                      0x26) - (iVar4 >> 0x1f)) * -1000) * 0x100;
                          }
                          iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                          iVar20 = iVar20 + iVar4;
                          iVar9 = iVar9 + 1;
                        } while (iVar9 < local_1288);
                      }
                      pbVar23 = (byte *)0x190;
                      if (local_1694 != (byte *)0x0) {
                        pbVar23 = local_1694;
                      }
                      pbVar21 = local_1330 + 2;
                      pbVar5 = local_1330 + 6;
                      if ((int)local_1330 < 1) {
                        pbVar21 = (byte *)0xc;
                        pbVar5 = (byte *)0x10;
                      }
                      pbVar8 = pbVar23 + (-0x26 - (int)pbVar21);
                      if ((int)(pbVar23 + (-0x26 - (int)pbVar21)) <= (int)pbVar5) {
                        pbVar8 = pbVar5;
                      }
                      iVar20 = (iVar20 - (uint)pbVar8 / (uint)pbVar21) -
                               (uint)((uint)pbVar8 / (uint)pbVar21 == 0);
                      if (iVar20 < 1) {
                        iVar20 = 0;
                      }
                      iVar9 = Ram00006800;
                      if (((((iVar9 != 0x50414d57) || (iVar9 = Ram00006804, iVar9 == 0)) ||
                           (uVar3 = Ram00006808, uVar3 < 0xc)) ||
                          ((uVar3 = Ram00006808, uVar3 < 0x154 ||
                           (pcVar2 = (code *)Ram00006950, pcVar2 == (code *)0x0)))) ||
                         ((iVar9 = (*pcVar2)(), iVar9 == 0 || ((byte)local_1a9c == 0)))) break;
                      recovered_10007270((int)&local_169c,(byte *)&local_1a9c);
                      iVar9 = CONCAT31((int3)((uint)iVar20 >> 8),1);
                      if (iVar20 <= (int)local_14) {
                        if (local_1288 < 1) {
                          iVar20 = 0;
                        }
                        else {
                          iVar9 = 0;
                          iVar20 = 0;
                          do {
                            if (local_1358 == (byte *)0x0) {
                              pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                            }
                            else {
                              iVar4 = local_128c + iVar9;
                              pbVar23 = local_1358 +
                                        (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3)
                                                        >> 0x26) - (iVar4 >> 0x1f)) * -1000) * 0x100
                              ;
                            }
                            iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                            iVar20 = iVar20 + iVar4;
                            iVar9 = iVar9 + 1;
                          } while (iVar9 < local_1288);
                        }
                        pbVar23 = (byte *)0x190;
                        if (local_1694 != (byte *)0x0) {
                          pbVar23 = local_1694;
                        }
                        pbVar21 = local_1330 + 2;
                        pbVar5 = local_1330 + 6;
                        iVar9 = CONCAT31((int3)((uint)iVar9 >> 8),1);
                        if ((int)local_1330 < 1) {
                          pbVar21 = (byte *)0xc;
                          pbVar5 = (byte *)0x10;
                        }
                        pbVar8 = pbVar23 + (-0x26 - (int)pbVar21);
                        if ((int)(pbVar23 + (-0x26 - (int)pbVar21)) <= (int)pbVar5) {
                          pbVar8 = pbVar5;
                        }
                        local_1284 = (byte *)((iVar20 - (uint)pbVar8 / (uint)pbVar21) -
                                             (uint)((uint)pbVar8 / (uint)pbVar21 == 0));
                        if ((int)local_1284 < 1) {
                          local_1284 = (byte *)0x0;
                        }
                      }
                    }
                    if ((local_1274 != 0) && (local_14 = (byte *)0x0, local_1270 != 0)) {
                      local_24 = local_1284;
                      if (0 < local_1288) {
                        iVar9 = 0;
                        local_14 = (byte *)0x0;
                        do {
                          if (local_1358 == (byte *)0x0) {
                            pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                          }
                          else {
                            iVar20 = local_128c + iVar9;
                            pbVar23 = local_1358 +
                                      (iVar20 + ((uint)((ulonglong)((longlong)iVar20 * 0x10624dd3)
                                                       >> 0x26) - (iVar20 >> 0x1f)) * -1000) * 0x100
                            ;
                          }
                          iVar20 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                          local_14 = (byte *)((int)local_14 + iVar20);
                          iVar9 = iVar9 + 1;
                        } while (iVar9 < local_1288);
                      }
                      uVar3 = local_2c;
                      pbVar23 = (byte *)0x190;
                      if (local_1694 != (byte *)0x0) {
                        pbVar23 = local_1694;
                      }
                      pbVar21 = local_1330 + 2;
                      pbVar5 = local_1330 + 6;
                      if ((int)local_1330 < 1) {
                        pbVar21 = (byte *)0xc;
                        pbVar5 = (byte *)0x10;
                      }
                      pbVar8 = pbVar23 + (-0x26 - (int)pbVar21);
                      if ((int)(pbVar23 + (-0x26 - (int)pbVar21)) <= (int)pbVar5) {
                        pbVar8 = pbVar5;
                      }
                      local_14 = (byte *)(((int)local_14 - (uint)pbVar8 / (uint)pbVar21) -
                                         (uint)((uint)pbVar8 / (uint)pbVar21 == 0));
                      if ((int)local_14 < 1) {
                        local_14 = (byte *)0x0;
                      }
                      if (local_1064[0] == 0) {
                        if (local_126c != 0) goto LAB_100012a9;
                        local_20 = local_1358;
                        if (local_1358 == (byte *)0x0) goto LAB_100012a9;
                        if (999 < local_1288) {
                          pbVar23 = (byte *)0x2d2;
                          if (local_1698 != (byte *)0x0) {
                            pbVar23 = local_1698 + -0x26;
                          }
                          local_38 = (byte *)((local_128c +
                                              ((uint)((ulonglong)((longlong)local_128c * 0x10624dd3)
                                                     >> 0x26) - (local_128c >> 0x1f)) * -1000) *
                                             0x100);
                          pbVar21 = local_38 + (int)local_1358;
                          local_30 = (byte *)(local_1334 + 8);
                          local_1c = (byte *)local_1334;
                          if (local_1334 < 1) {
                            local_30 = (byte *)0xe;
                            local_1c = (byte *)0x6;
                          }
                          if ((int)pbVar23 <= (int)local_30) {
                            pbVar23 = local_30;
                          }
                          local_1c = (byte *)((int)(pbVar23 + -8) / (int)local_1c);
                          pbVar23 = (byte *)0x1;
                          if ((int)local_1c < 2) {
                            local_1c = (byte *)0x1;
                          }
                          if (local_1358[(int)local_38] != 0) {
                            pbVar23 = (byte *)0x0;
                            pbVar5 = (byte *)0x0;
                            local_20 = pbVar21;
                            do {
                              local_30 = pbVar23;
                              pbVar8 = (byte *)strlen((char *)local_20);
                              if ((int)local_1c < (int)pbVar8) {
                                pbVar8 = (byte *)0xffffffff;
                                pbVar23 = (byte *)0x0;
                                do {
                                  bVar17 = local_20[(int)pbVar23];
                                  if (bVar17 == 0) break;
                                  pbVar12 = pbVar23;
                                  if (bVar17 != 9) {
                                    pbVar12 = pbVar8;
                                  }
                                  pbVar8 = pbVar23;
                                  if (bVar17 != 0x20) {
                                    pbVar8 = pbVar12;
                                  }
                                  pbVar23 = pbVar23 + 1;
                                } while (local_1c != pbVar23);
                                if ((int)pbVar8 < 1) {
                                  pbVar8 = local_1c;
                                }
                              }
                              pbVar23 = local_30;
                              if ((int)pbVar8 < 1) goto LAB_100011eb;
                              for (pbVar5 = pbVar5 + (int)pbVar8;
                                  (bVar17 = pbVar21[(int)pbVar5], bVar17 == 0x20 || (bVar17 == 9));
                                  pbVar5 = pbVar5 + 1) {
                              }
                              pbVar23 = local_30 + 1;
                              if (((int)pbVar5 < 0) ||
                                 (local_20 = pbVar21 + (int)pbVar5, bVar17 == 0)) goto LAB_100011eb;
                            } while( true );
                          }
                          goto LAB_1000120a;
                        }
                        iVar9 = local_128c + local_1288;
                        local_1288 = local_1288 + 1;
                        goto LAB_1000124d;
                      }
                      recovered_10007270((int)&local_169c,local_1064);
                      goto LAB_100012a9;
                    }
                    local_14 = (byte *)0x0;
                    uVar3 = local_2c;
                    goto LAB_100013af;
                  }
                }
                goto LAB_10006b6f;
              }
              terror_ui_window_close(&local_169c);
            }
            iVar9 = Ram00006800;
            puVar19 = (undefined4 *)(auStackY_1b40 + 0x80);
            if (iVar9 == 0x50414d57) {
              iVar9 = Ram00006804;
              puVar19 = (undefined4 *)(auStackY_1b40 + 0x80);
              if (iVar9 != 0) {
                uVar3 = Ram00006808;
                puVar19 = (undefined4 *)(auStackY_1b40 + 0x80);
                if (0xb < uVar3) {
                  uVar3 = Ram00006808;
                  puVar19 = (undefined4 *)(auStackY_1b40 + 0x80);
                  if (0x53 < uVar3) {
                    pcVar2 = (code *)UINT_00006850;
                    puVar19 = (undefined4 *)(auStackY_1b40 + 0x80);
                    if (pcVar2 != (code *)0x0) {
                      (*pcVar2)(local_1358);
                      puVar19 = (undefined4 *)(auStackY_1b40 + 0x80);
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
  local_1358 = (byte *)0x0;
LAB_10006c47:
  iVar9 = Ram00006800;
  if ((((iVar9 == 0x50414d57) && (iVar9 = Ram00006804, iVar9 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0x2b < uVar3 && (pcVar2 = (code *)UINT_00006828, pcVar2 != (code *)0x0))
     )) {
    *puVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9U));
    puVar19[-1] = 0x10006c89;
    (*pcVar2)((char *)*puVar19);
  }
  return 0;
LAB_100011eb:
  if ((int)pbVar23 < 2) {
    pbVar23 = (byte *)0x1;
  }
LAB_1000120a:
  local_128c = (local_128c + 1) % 1000;
  pbVar21 = local_1284 + -(int)pbVar23;
  if (pbVar21 == (byte *)0x0 || (int)local_1284 < (int)pbVar23) {
    pbVar21 = (byte *)0x0;
  }
  iVar9 = local_1288 + -1 + local_128c;
  local_1284 = pbVar21;
  local_20 = local_1358;
LAB_1000124d:
  iVar9 = (iVar9 + ((uint)((ulonglong)((longlong)iVar9 * 0x10624dd3) >> 0x26) - (iVar9 >> 0x1f)) *
                   -1000) * 0x100;
  local_20[iVar9] = 0x45;
  local_20[iVar9 + 1] = 0x52;
  local_20[iVar9 + 2] = 0x52;
  local_20[iVar9 + 3] = 0x4f;
  local_20[iVar9 + 4] = 0x52;
  local_20[iVar9 + 5] = 0;
  uVar3 = local_2c;
  local_1358 = local_20;
LAB_100012a9:
  local_1064[0] = 0;
  local_1264[0] = '\0';
  local_1268 = 0;
  local_1270 = 0;
  local_1274 = 0;
  uVar6 = CONCAT31((int3)((uint)local_24 >> 8),1);
  bVar25 = (int)local_14 <= (int)local_24;
  local_14 = (byte *)uVar6;
  if (bVar25) {
    if (local_1288 < 1) {
      iVar9 = 0;
    }
    else {
      iVar20 = 0;
      iVar9 = 0;
      do {
        if (local_1358 == (byte *)0x0) {
          pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
        }
        else {
          iVar4 = local_128c + iVar20;
          pbVar23 = local_1358 +
                    (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                             (iVar4 >> 0x1f)) * -1000) * 0x100;
        }
        iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
        iVar9 = iVar9 + iVar4;
        iVar20 = iVar20 + 1;
      } while (iVar20 < local_1288);
    }
    pbVar23 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar23 = local_1694;
    }
    pbVar21 = local_1330 + 2;
    pbVar5 = local_1330 + 6;
    if ((int)local_1330 < 1) {
      pbVar21 = (byte *)0xc;
      pbVar5 = (byte *)0x10;
    }
    pbVar8 = pbVar23 + (-0x26 - (int)pbVar21);
    if ((int)(pbVar23 + (-0x26 - (int)pbVar21)) <= (int)pbVar5) {
      pbVar8 = pbVar5;
    }
    local_1284 = (byte *)((iVar9 - (uint)pbVar8 / (uint)pbVar21) -
                         (uint)((uint)pbVar8 / (uint)pbVar21 == 0));
    if ((int)local_1284 < 1) {
      local_1284 = (byte *)0x0;
    }
    uVar3 = local_2c;
  }
LAB_100013af:
  uVar18 = (undefined3)(uVar3 >> 8);
  bVar17 = (byte)uVar3 | (byte)local_18;
  local_48 = local_134c & 6;
  if (((local_48 == 2) || (PF_PART1(local_133b, 1) != '\0')) || ((char)local_133b != '\0')) {
    memset(&local_1a9c,0,0x1c);
    uVar3 = terror_ui_window_pointer_state(&local_169c,&local_1a9c);
    if (uVar3 != 0) {
      if (local_133c == '\0') {
        local_133c = '\x01';
        if (local_1698 == (byte *)0x0) {
          local_1348 = (byte *)0x17c;
        }
        else {
          local_1348 = (byte *)((int)local_1698 / 2);
        }
        if (local_1694 == (byte *)0x0) {
          local_1344 = (byte *)0xc8;
        }
        else {
          local_1344 = (byte *)((int)local_1694 / 2);
        }
      }
      local_1340 = (byte *)0x0;
      if (((uint)local_1a9c & 4) != 0) {
        pbVar23 = (byte *)0x2f7;
        if (local_1698 != (byte *)0x0) {
          pbVar23 = local_1698 + -1;
        }
        pbVar21 = local_1a88;
        if ((int)pbVar23 <= (int)local_1a88) {
          pbVar21 = pbVar23;
        }
        local_1348 = (byte *)0x0;
        if (-1 < (int)local_1a88) {
          local_1348 = pbVar21;
        }
        pbVar23 = (byte *)0x18f;
        if (local_1694 != (byte *)0x0) {
          pbVar23 = local_1694 + -1;
        }
        pbVar21 = local_1a84;
        if ((int)pbVar23 <= (int)local_1a84) {
          pbVar21 = pbVar23;
        }
        local_1344 = (byte *)0x0;
        if (-1 < (int)local_1a84) {
          local_1344 = pbVar21;
        }
        local_1340 = local_1a98;
      }
    }
    if (local_48 == 2) {
      local_1c = (byte *)0x0;
      pbVar23 = (byte *)0x0;
      PF_PART1(local_2c, 0) = bVar17;
      PF_PART3(local_2c, 1) = uVar18;
LAB_10001500:
      iVar9 = Ram00006800;
      if (((iVar9 == 0x50414d57) && (iVar9 = Ram00006804, iVar9 != 0)) &&
         ((uVar3 = Ram00006808, 0xb < uVar3 &&
          ((uVar3 = Ram00006808, 0x2f < uVar3 &&
           (pcVar2 = (code *)UINT_0000682c, pcVar2 != (code *)0x0)))))) {
        local_18 = pbVar23;
        uVar3 = (*pcVar2)();
        if (uVar3 != 0) {
          uVar10 = uVar3 >> 8 & 0xff;
          if ((uVar3 & 0x800000ff) == 0x80000000 && uVar10 == 0) goto LAB_1000156b;
          uVar15 = uVar3 & 0xff;
          if ((uVar3 & 0x40000) != 0) {
            if (((uVar3 & 0xbf) == 3 || uVar15 == 99) || uVar10 == 0x2e) {
              uVar6 = recovered_10006df0((int)&local_169c);
              local_1c = (byte *)CONCAT31((int3)((uint)local_1c >> 8),(byte)local_1c | (byte)uVar6);
              bVar17 = (byte)local_2c;
              uVar18 = PF_PART3(local_2c, 1);
            }
            else {
              bVar17 = (byte)local_2c;
              uVar18 = PF_PART3(local_2c, 1);
              if (((uVar3 & 0xbf) == 0x16 || uVar15 == 0x76) || uVar10 == 0x2f) {
                uVar6 = recovered_10007050((int)&local_169c);
                local_1c = (byte *)CONCAT31((int3)((uint)local_1c >> 8),(byte)local_1c | (byte)uVar6
                                           );
              }
            }
            goto LAB_1000156b;
          }
          if ((uVar3 & 0x20000) != 0) goto LAB_1000156b;
          bVar14 = (byte)uVar3;
          if (uVar15 - 0x20 < 0x5f) {
            uVar13 = strlen((char *)local_132c);
            local_1c = (byte *)CONCAT31((int3)((uint)extraout_EDX >> 8),1);
            if (uVar13 + 1 < 0xa0) {
              local_132c[uVar13] = bVar14;
              local_132c[uVar13 + 1] = 0;
            }
            goto LAB_1000156b;
          }
          if (((uVar10 == 0xe) || (bVar14 == 0x7f)) || ((uVar3 & 0xff) == 8)) {
            uVar13 = strlen((char *)local_132c);
            local_1c = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
            if (uVar13 != 0) {
              local_132c[uVar13 - 1] = 0;
            }
            goto LAB_1000156b;
          }
          if (((uVar10 == 0x1c) || (bVar14 == 0xd)) || ((uVar3 & 0xff) == 10)) {
            local_20 = local_1284;
            if (local_1288 < 1) {
              iVar9 = 0;
            }
            else {
              iVar20 = 0;
              iVar9 = 0;
              do {
                if (local_1358 == (byte *)0x0) {
                  pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                }
                else {
                  iVar4 = local_128c + iVar20;
                  pbVar23 = local_1358 +
                            (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                                     (iVar4 >> 0x1f)) * -1000) * 0x100;
                }
                iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                iVar9 = iVar9 + iVar4;
                iVar20 = iVar20 + 1;
              } while (iVar20 < local_1288);
            }
            pbVar23 = (byte *)0x190;
            if (local_1694 != (byte *)0x0) {
              pbVar23 = local_1694;
            }
            pbVar21 = local_1330 + 2;
            pbVar5 = local_1330 + 6;
            if ((int)local_1330 < 1) {
              pbVar21 = (byte *)0xc;
              pbVar5 = (byte *)0x10;
            }
            pbVar8 = pbVar23 + (-0x26 - (int)pbVar21);
            if ((int)(pbVar23 + (-0x26 - (int)pbVar21)) <= (int)pbVar5) {
              pbVar8 = pbVar5;
            }
            local_24 = (byte *)((iVar9 - (uint)pbVar8 / (uint)pbVar21) -
                               (uint)((uint)pbVar8 / (uint)pbVar21 == 0));
            pbVar21 = local_132c;
            pbVar23 = local_132c;
            while( true ) {
              pbVar21 = pbVar21 + 1;
              uVar3 = (uint)*pbVar23;
              if ((0x17 < uVar3 - 9) || ((0x800013U >> (uVar3 - 9 & 0x1f) & 1) == 0)) break;
              pbVar23 = pbVar23 + 1;
            }
            local_1c = (byte *)0x0;
            if ((int)local_24 < 1) {
              local_24 = (byte *)0x0;
            }
            if (*pbVar23 != 0) {
              uVar10 = uVar3;
              pbVar5 = pbVar21;
              while (bVar17 = (byte)uVar10, bVar17 < 0x21) {
                    /* WARNING: Switch is manually overridden */
                switch((uintptr_t)(uVar10)) {
                case 9: case 10: case 13: case 32:
                  uVar10 = (uint)pbVar23[1];
                  pbVar23 = pbVar23 + 1;
                  pbVar5 = pbVar5 + 1;
                  break;
                case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 11: case 12: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31:
                  goto override_jmp_1000178d_case_1;
                case 0:
                  goto override_jmp_1000178d_case_2;
                }
              }
              if (uVar10 != 0x3e) {
override_jmp_1000178d_case_1:
                if ((byte)(bVar17 + 0xbf) < 0x1a) {
                  bVar17 = bVar17 | 0x20;
                }
                if (9 < (byte)(pbVar23[bVar17 == 0x69] - 0x30U)) {
override_jmp_1000178d_case_2:
                  iVar9 = -0x3f;
                  do {
                    if (uVar3 < 0x20) {
                      if ((uVar3 == 0) || (uVar3 == 9)) goto LAB_1000181f;
                    }
                    else if ((uVar3 == 0x20) || (uVar3 == 0x2c)) goto LAB_1000181f;
                    if (iVar9 == 0) goto LAB_1000181f;
                    *(char *)((int)&local_1a60 + iVar9 + 3) = (char)uVar3;
                    uVar3 = (uint)pbVar21[iVar9 + 0x3f];
                    iVar9 = iVar9 + 1;
                  } while( true );
                }
                pbVar5 = pbVar5 + (bVar17 == 0x69);
                do {
                  bVar17 = *pbVar5;
                  pbVar5 = pbVar5 + 1;
                } while ((byte)(bVar17 - 0x30U) < 10);
                local_1c = (byte *)0x1;
                if (bVar17 != 0x3e) goto override_jmp_1000178d_case_2;
                goto override_jmp_10001858_case_4;
              }
              goto LAB_100017a1;
            }
            goto override_jmp_10001858_case_4;
          }
          if (uVar15 != 0x1b) {
            if (uVar10 != 1) goto LAB_1000156b;
          }
          local_1277 = '\0';
          bVar17 = 1;
          goto LAB_1000287e;
        }
      }
      goto LAB_10002876;
    }
    bVar17 = bVar17 | (byte)local_14;
    goto LAB_1000287e;
  }
  local_2c = CONCAT31(uVar18,bVar17 | (byte)local_14) & 0xffffff01;
  local_133b = 0;
LAB_10002eea:
  local_14 = local_1284;
  if (local_1288 < 1) {
    iVar9 = 0;
  }
  else {
    iVar20 = 0;
    iVar9 = 0;
    do {
      if (local_1358 == (byte *)0x0) {
        pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
      }
      else {
        iVar4 = local_128c + iVar20;
        pbVar23 = local_1358 +
                  (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                           (iVar4 >> 0x1f)) * -1000) * 0x100;
      }
      iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
      iVar9 = iVar9 + iVar4;
      iVar20 = iVar20 + 1;
    } while (iVar20 < local_1288);
  }
  local_1c = local_1330 + 2;
  local_20 = local_1330;
  pbVar23 = local_1c;
  if ((int)local_1330 < 1) {
    pbVar23 = (byte *)0xc;
  }
  pbVar21 = (byte *)0x190;
  if (local_1694 != (byte *)0x0) {
    pbVar21 = local_1694;
  }
  pbVar23 = pbVar21 + (-0x26 - (int)pbVar23);
  local_24 = local_1694;
  if ((int)local_1330 < 1) {
    if ((int)pbVar23 < 0x11) {
      pbVar23 = (byte *)0x10;
    }
    pbVar5 = (byte *)0xc;
  }
  else {
    if ((int)pbVar23 <= (int)(local_1330 + 6)) {
      pbVar23 = local_1330 + 6;
    }
    pbVar5 = local_1c;
  }
  pbVar23 = (byte *)((iVar9 - (uint)pbVar23 / (uint)pbVar5) -
                    (uint)((uint)pbVar23 / (uint)pbVar5 == 0));
  if ((int)pbVar23 < 1) {
    pbVar23 = (byte *)0x0;
  }
  pbVar5 = local_14;
  if ((int)pbVar23 <= (int)local_14) {
    pbVar5 = pbVar23;
  }
  local_1284 = (byte *)0x0;
  if (-1 < (int)local_14) {
    local_1284 = pbVar5;
  }
  if (local_48 == 2) {
    pbVar23 = (byte *)(local_1280 >> 0xc & 1);
  }
  else {
    pbVar23 = (byte *)0x1;
  }
  uVar3 = local_2c;
  if (local_28 != pbVar23 || local_1284 != local_14) {
    uVar3 = CONCAT31((int3)(local_2c >> 8),1);
  }
  if ((((uint)local_34 & 1) == 0) && ((char)uVar3 == '\0')) {
    local_1280 = local_1280 + 1;
  }
  else {
    pbVar5 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar5 = local_1698;
    }
    local_14 = pbVar5;
    if ((int)pbVar5 < 1) {
      local_14 = (byte *)0x0;
    }
    pbVar8 = pbVar21;
    if ((int)pbVar21 < 1) {
      pbVar8 = (byte *)0x0;
    }
    pbVar21 = (byte *)((int)pbVar21 >> 0x1f & (uint)pbVar21);
    if ((int)pbVar21 < (int)pbVar8) {
      pbVar5 = (byte *)((int)pbVar5 >> 0x1f & (uint)pbVar5);
      do {
        pbVar12 = pbVar5;
        if ((int)pbVar5 < (int)local_14) {
          do {
            if (-1 < (int)((uint)pbVar12 | (uint)pbVar21) && local_135c != (void *)0x0) {
              pbVar22 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar22 = local_1698;
              }
              if ((int)pbVar12 < (int)pbVar22) {
                pbVar22 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar22 = local_1694;
                }
                if ((int)pbVar21 < (int)pbVar22) {
                  uVar10 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar10 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar10 = local_1690;
                  }
                  iVar9 = uVar10 * (int)pbVar21;
                  *(undefined1 *)((int)local_135c + (int)pbVar12 * 4 + iVar9) = 0x4c;
                  *(undefined1 *)((int)local_135c + (int)pbVar12 * 4 + iVar9 + 1) = 0x91;
                  *(undefined1 *)((int)local_135c + (int)pbVar12 * 4 + iVar9 + 2) = 0xc4;
                  *(undefined1 *)((int)local_135c + (int)pbVar12 * 4 + iVar9 + 3) = 0xd9;
                }
              }
            }
            pbVar12 = pbVar12 + 1;
          } while (local_14 != pbVar12);
        }
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 != pbVar8);
    }
    local_1c = local_1330 + 2;
    if ((int)local_1330 < 1) {
      local_1c = (byte *)0xc;
    }
    local_44 = (byte *)0x2d2;
    if (local_1698 != (byte *)0x0) {
      local_44 = local_1698 + -0x26;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    if (local_1334 < 1) {
      pbVar5 = (byte *)0xe;
      if ((int)local_44 < 0xf) goto LAB_10003185;
    }
    else {
      pbVar5 = (byte *)(local_1334 + 8);
      if ((int)local_44 <= (int)pbVar5) {
LAB_10003185:
        local_44 = pbVar5;
      }
    }
    pbVar5 = pbVar21 + (-0x26 - (int)local_1c);
    local_40 = pbVar5;
    if ((int)local_1330 < 1) {
      pbVar8 = (byte *)0x10;
      if ((int)pbVar5 < 0x10) goto LAB_100031a5;
    }
    else {
      pbVar8 = local_1330 + 6;
      if ((int)pbVar5 < (int)pbVar8) {
LAB_100031a5:
        local_40 = pbVar8;
      }
    }
    iVar9 = local_1334;
    if (local_1334 < 1) {
      iVar9 = 6;
    }
    local_14 = (byte *)((int)(local_44 + -8) / iVar9);
    if ((int)local_14 < 2) {
      local_14 = (byte *)0x1;
    }
    if ((int)local_1330 < 1) {
      pbVar8 = (byte *)0x10;
      if ((int)pbVar5 < 0x11) goto LAB_100031e1;
    }
    else {
      pbVar8 = local_1330 + 6;
      if ((int)pbVar5 <= (int)(local_1330 + 6)) {
LAB_100031e1:
        pbVar5 = pbVar8;
      }
    }
    local_18 = (byte *)0x0;
    local_34 = (byte *)((uint)pbVar5 / (uint)local_1c + (uint)((uint)pbVar5 / (uint)local_1c == 0));
    local_1a9c = (byte *)((uint)local_1a9c & 0xff000000);
    pbVar5 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar5 = local_1698;
    }
    local_1c = pbVar5;
    if (0x1b < (int)pbVar5) {
      local_1c = (byte *)0x1c;
    }
    local_3c = local_44 + 0x1c;
    pbVar8 = local_3c;
    if ((int)pbVar5 <= (int)local_3c) {
      pbVar8 = pbVar5;
    }
    if (-0x1d < (int)local_44) {
      local_18 = pbVar8;
    }
    local_38 = local_40 + 10;
    pbVar5 = local_38;
    if ((int)pbVar21 <= (int)local_38) {
      pbVar5 = pbVar21;
    }
    if (10 < (int)pbVar5) {
      pbVar21 = (byte *)0xa;
      do {
        pbVar8 = local_1c;
        if ((int)local_1c < (int)local_18) {
          do {
            if (-1 < (int)pbVar8 && local_135c != (void *)0x0) {
              pbVar12 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar12 = local_1698;
              }
              if ((int)pbVar8 < (int)pbVar12) {
                pbVar12 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar12 = local_1694;
                }
                if ((int)pbVar21 < (int)pbVar12) {
                  uVar10 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar10 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar10 = local_1690;
                  }
                  iVar9 = uVar10 * (int)pbVar21;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9) = 0x4c;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 1) = 0x91;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 2) = 0xc4;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 3) = 0xd9;
                }
              }
            }
            pbVar8 = pbVar8 + 1;
          } while (local_18 != pbVar8);
        }
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 != pbVar5);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    pbVar5 = pbVar21;
    if (0x1b < (int)pbVar21) {
      pbVar5 = (byte *)0x1c;
    }
    pbVar8 = local_3c;
    if ((int)pbVar21 <= (int)local_3c) {
      pbVar8 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-0x1d < (int)local_44) {
      pbVar21 = pbVar8;
    }
    if ((local_1694 == (byte *)0x0 || 10 < (int)local_1694) && ((int)pbVar5 < (int)pbVar21)) {
      do {
        if (-1 < (int)pbVar5 && local_135c != (void *)0x0) {
          pbVar8 = (byte *)0x2f8;
          if (local_1698 != (byte *)0x0) {
            pbVar8 = local_1698;
          }
          if (((int)pbVar5 < (int)pbVar8) && (local_1694 == (byte *)0x0 || 10 < (int)local_1694)) {
            uVar10 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar10 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar10 = local_1690;
            }
            iVar9 = uVar10 * 10;
            *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0;
            *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0;
            *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0;
            *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar21 != pbVar5);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_30 = local_1698;
    local_28 = pbVar21;
    if (0x1b < (int)pbVar21) {
      local_28 = (byte *)0x1c;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar8 = local_40 + 9;
    pbVar12 = pbVar8;
    if ((int)pbVar5 <= (int)pbVar8) {
      pbVar12 = pbVar5;
    }
    local_1c = (byte *)0x0;
    pbVar22 = (byte *)0x0;
    if (-1 < (int)pbVar8) {
      pbVar22 = pbVar12;
    }
    pbVar8 = local_3c;
    if ((int)pbVar21 <= (int)local_3c) {
      pbVar8 = pbVar21;
    }
    local_18 = (byte *)0x0;
    if (-0x1d < (int)local_44) {
      local_18 = pbVar8;
    }
    pbVar21 = local_38;
    if ((int)pbVar5 <= (int)local_38) {
      pbVar21 = pbVar5;
    }
    if (-1 < (int)local_38) {
      local_1c = pbVar21;
    }
    if ((int)pbVar22 < (int)local_1c) {
      do {
        pbVar21 = local_28;
        if ((int)local_28 < (int)local_18) {
          do {
            if (-1 < (int)((uint)pbVar21 | (uint)pbVar22) && local_135c != (void *)0x0) {
              pbVar5 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar5 = local_1698;
              }
              if ((int)pbVar21 < (int)pbVar5) {
                pbVar5 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar5 = local_1694;
                }
                if ((int)pbVar22 < (int)pbVar5) {
                  uVar10 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar10 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar10 = local_1690;
                  }
                  iVar9 = uVar10 * (int)pbVar22;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar21 = pbVar21 + 1;
          } while (local_18 != pbVar21);
        }
        pbVar22 = pbVar22 + 1;
      } while (pbVar22 != local_1c);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_18 = pbVar21;
    if (0x1b < (int)pbVar21) {
      local_18 = (byte *)0x1c;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar8 = local_38;
    if ((int)pbVar5 <= (int)local_38) {
      pbVar8 = pbVar5;
    }
    if (10 < (int)pbVar8) {
      local_28 = (byte *)((int)local_18 * 4);
      pbVar5 = (byte *)0xa;
      do {
        if (((0x1c < (int)pbVar21) && (local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_18 < (int)local_1698)))) {
          pbVar12 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar12 = local_1694;
          }
          if ((int)pbVar5 < (int)pbVar12) {
            uVar10 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar10 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar10 = local_1690;
            }
            pbVar12 = local_28 + uVar10 * (int)pbVar5;
            *(byte *)((int)local_135c + (int)pbVar12) = 0;
            pbVar12[(int)local_135c + 1] = 0;
            pbVar12[(int)local_135c + 2] = 0;
            pbVar12[(int)local_135c + 3] = 0xff;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar8 != pbVar5);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    pbVar8 = local_44 + 0x1b;
    pbVar5 = pbVar8;
    if ((int)pbVar21 <= (int)pbVar8) {
      pbVar5 = pbVar21;
    }
    local_18 = (byte *)0x0;
    local_1c = (byte *)0x0;
    if (-1 < (int)pbVar8) {
      local_1c = pbVar5;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar8 = local_3c;
    if ((int)pbVar21 <= (int)local_3c) {
      pbVar8 = pbVar21;
    }
    if (-1 < (int)local_3c) {
      local_18 = pbVar8;
    }
    pbVar21 = local_38;
    if ((int)pbVar5 <= (int)local_38) {
      pbVar21 = pbVar5;
    }
    if (10 < (int)pbVar21) {
      pbVar5 = (byte *)0xa;
      do {
        pbVar8 = local_1c;
        if ((int)local_1c < (int)local_18) {
          do {
            if (-1 < (int)pbVar8 && local_135c != (void *)0x0) {
              pbVar12 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar12 = local_1698;
              }
              if ((int)pbVar8 < (int)pbVar12) {
                pbVar12 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar12 = local_1694;
                }
                if ((int)pbVar5 < (int)pbVar12) {
                  uVar10 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar10 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar10 = local_1690;
                  }
                  iVar9 = uVar10 * (int)pbVar5;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 1) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 2) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar8 = pbVar8 + 1;
          } while (local_18 != pbVar8);
        }
        pbVar5 = pbVar5 + 1;
        local_28 = pbVar21;
      } while (pbVar5 != pbVar21);
    }
    local_64 = pbVar23;
    local_2c = uVar3;
    local_20 = local_1284;
    if (0 < local_1288) {
      pbVar23 = (byte *)0x0;
      local_3c = (byte *)0x0;
      local_20 = local_1284;
      do {
        if (local_1358 == (byte *)0x0) {
          pbVar21 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
        }
        else {
          pbVar21 = local_3c + local_128c;
          pbVar21 = local_1358 +
                    (int)(pbVar21 +
                         ((uint)((ulonglong)((longlong)(int)pbVar21 * 0x10624dd3) >> 0x26) -
                         ((int)pbVar21 >> 0x1f)) * -1000) * 0x100;
        }
        local_30 = (byte *)recovered_10006ca0((int)&local_169c,(char *)pbVar21);
        pbVar5 = local_20 + -(int)local_30;
        if ((int)local_20 < (int)local_30) {
          do {
            pbVar5 = (byte *)0x0;
            if ((int)local_34 <= (int)pbVar23) break;
            if ((int)local_1330 < 1) {
              local_24 = (byte *)0xc;
            }
            else {
              local_24 = local_1330 + 2;
            }
            local_28 = pbVar23;
            if ((int)local_20 < 1) {
              iVar9 = 0;
LAB_10003942:
              local_18 = pbVar21 + iVar9;
              pbVar23 = (byte *)strlen((char *)local_18);
              if ((int)local_14 < (int)pbVar23) {
                pbVar23 = (byte *)0xffffffff;
                uVar13 = 0;
                do {
                  bVar17 = local_18[uVar13];
                  if (bVar17 == 0) break;
                  uVar7 = uVar13;
                  if (bVar17 != 9) {
                    uVar7 = (ulong)pbVar23;
                  }
                  pbVar23 = (byte *)uVar13;
                  if (bVar17 != 0x20) {
                    pbVar23 = (byte *)uVar7;
                  }
                  uVar13 = uVar13 + 1;
                } while (local_14 != (byte *)uVar13);
                if ((int)pbVar23 < 1) {
                  pbVar23 = local_14;
                }
              }
              if ((int)pbVar23 < 1) goto LAB_1000399b;
            }
            else {
              bVar17 = *pbVar21;
              pbVar23 = (byte *)0x0;
              iVar9 = 0;
              do {
                if (bVar17 == 0) break;
                if (iVar9 < 0) {
                  pbVar5 = (byte *)0x0;
                }
                else {
                  local_18 = pbVar21 + iVar9;
                  local_1c = pbVar23;
                  pbVar5 = (byte *)strlen((char *)local_18);
                  pbVar23 = local_1c;
                  if ((int)local_14 < (int)pbVar5) {
                    pbVar5 = (byte *)0xffffffff;
                    uVar13 = 0;
                    do {
                      bVar17 = local_18[uVar13];
                      if (bVar17 == 0) break;
                      uVar7 = uVar13;
                      if (bVar17 != 9) {
                        uVar7 = (ulong)pbVar5;
                      }
                      pbVar5 = (byte *)uVar13;
                      if (bVar17 != 0x20) {
                        pbVar5 = (byte *)uVar7;
                      }
                      uVar13 = uVar13 + 1;
                    } while (local_14 != (byte *)uVar13);
                    if ((int)pbVar5 < 1) {
                      pbVar5 = local_14;
                    }
                  }
                }
                for (iVar9 = iVar9 + (int)pbVar5;
                    (bVar17 = pbVar21[iVar9], bVar17 == 0x20 || (bVar17 == 9)); iVar9 = iVar9 + 1) {
                }
                pbVar23 = pbVar23 + 1;
              } while (pbVar23 != local_20);
              if (-1 < iVar9) goto LAB_10003942;
LAB_1000399b:
              pbVar23 = local_14;
            }
            iVar20 = (int)local_24 * (int)local_28 + 0xc;
            if ((int)local_1330 < 1) {
              if ((int)local_40 < iVar20) goto LAB_100039f1;
            }
            else if ((int)local_38 < (int)(local_1330 + iVar20)) goto LAB_100039f1;
            pbVar26 = (byte *)CONCAT22(CONCAT11((char)((uint)pbVar26 >> 0x18),PF_PART1(local_1a9c, 2)),
                                       (undefined2)local_1a9c);
            recovered_10007a10((int)&local_169c,0x20,iVar20,(char *)(pbVar21 + iVar9),(uint)pbVar23,
                               (uint)pbVar26);
            pbVar23 = local_28 + 1;
            local_20 = local_20 + 1;
            pbVar5 = (byte *)0x0;
          } while ((int)local_20 < (int)local_30);
        }
        local_3c = local_3c + 1;
      } while (((int)local_3c < local_1288) && (local_20 = pbVar5, (int)pbVar23 < (int)local_34));
    }
LAB_100039f1:
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    else {
      pbVar23 = local_1330 + 2;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar21 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0x10;
      if ((int)pbVar21 < 0x10) goto LAB_10003a2a;
    }
    else {
      pbVar23 = local_1330 + 6;
      if ((int)pbVar21 < (int)(local_1330 + 6)) {
LAB_10003a2a:
        pbVar21 = pbVar23;
      }
    }
    local_28 = (byte *)0x12;
    if ((byte *)0x33 < pbVar21) {
      local_28 = pbVar21 + -0x22;
    }
    recovered_10007760(&local_1a9c,(int)&local_169c);
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_18 = pbVar23;
    if (9 < (int)pbVar23) {
      local_18 = (byte *)0xa;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = pbVar21;
    if (9 < (int)pbVar21) {
      pbVar5 = (byte *)0xa;
    }
    local_14 = pbVar23;
    if (0x15 < (int)pbVar23) {
      local_14 = (byte *)0x16;
    }
    local_24 = local_28 + 10;
    pbVar8 = local_24;
    if ((int)pbVar21 <= (int)local_24) {
      pbVar8 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-0xb < (int)local_28) {
      pbVar21 = pbVar8;
    }
    if ((int)pbVar5 < (int)pbVar21) {
      do {
        pbVar8 = local_18;
        if (10 < (int)pbVar23) {
          do {
            if (-1 < (int)((uint)pbVar8 | (uint)pbVar5) && local_135c != (void *)0x0) {
              pbVar12 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar12 = local_1698;
              }
              if ((int)pbVar8 < (int)pbVar12) {
                pbVar12 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar12 = local_1694;
                }
                if ((int)pbVar5 < (int)pbVar12) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar5;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9) = 0xe4;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 1) = 0xe4;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 2) = 0xe4;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar8 = pbVar8 + 1;
          } while (local_14 != pbVar8);
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 != pbVar21);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    pbVar21 = pbVar23;
    if (9 < (int)pbVar23) {
      pbVar21 = (byte *)0xa;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    local_14 = pbVar23;
    if (0x15 < (int)pbVar23) {
      local_14 = (byte *)0x16;
    }
    if ((int)pbVar5 < 0xb) {
      pbVar8 = local_28 + 9;
      if ((int)pbVar5 <= (int)(local_28 + 9)) {
        pbVar8 = pbVar5;
      }
      local_18 = (byte *)0x0;
      pbVar12 = (byte *)0x0;
      if (-10 < (int)local_28) {
        pbVar12 = pbVar8;
      }
      if ((int)local_24 < (int)pbVar5) {
        pbVar5 = local_24;
        if ((int)local_28 < -10) goto LAB_10003ca0;
LAB_10003cb0:
        local_18 = pbVar5;
        if ((int)pbVar12 < (int)pbVar5) goto LAB_10003ce0;
      }
      else {
        if (-0xb < (int)local_28) goto LAB_10003cb0;
LAB_10003ca0:
        if (-1 < (int)pbVar12) goto LAB_10003f19;
LAB_10003ce0:
        do {
          pbVar5 = pbVar21;
          if (10 < (int)pbVar23) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar12) && local_135c != (void *)0x0) {
                pbVar8 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar8 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar8) {
                  pbVar8 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar8 = local_1694;
                  }
                  if ((int)pbVar12 < (int)pbVar8) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar12;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0xac;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0xac;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0xac;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (local_14 != pbVar5);
          }
          pbVar12 = pbVar12 + 1;
        } while (pbVar12 != local_18);
      }
    }
    else {
      if (10 < (int)pbVar23) {
        do {
          if (local_135c != (void *)0x0) {
            pbVar23 = (byte *)0x2f8;
            if (local_1698 != (byte *)0x0) {
              pbVar23 = local_1698;
            }
            if (((int)pbVar21 < (int)pbVar23) && (local_1694 == (byte *)0x0 || 10 < (int)local_1694)
               ) {
              uVar3 = 0xbe0;
              if (local_1698 != (byte *)0x0) {
                uVar3 = (int)local_1698 << 2;
              }
              if (local_1690 != 0) {
                uVar3 = local_1690;
              }
              iVar9 = uVar3 * 10;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0xac;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0xac;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0xac;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
            }
          }
          pbVar21 = pbVar21 + 1;
        } while (local_14 != pbVar21);
      }
      pbVar23 = (byte *)0x2f8;
      if (local_1698 != (byte *)0x0) {
        pbVar23 = local_1698;
      }
      local_1c = pbVar23;
      if (9 < (int)pbVar23) {
        local_1c = (byte *)0xa;
      }
      pbVar21 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar21 = local_1694;
      }
      pbVar5 = local_28 + 9;
      if ((int)pbVar21 <= (int)(local_28 + 9)) {
        pbVar5 = pbVar21;
      }
      local_18 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
      if (-10 < (int)local_28) {
        pbVar8 = pbVar5;
      }
      local_14 = pbVar23;
      if (0x15 < (int)pbVar23) {
        local_14 = (byte *)0x16;
      }
      if ((int)local_24 < (int)pbVar21) {
        pbVar21 = local_24;
        if ((int)local_28 < -10) goto LAB_10003e33;
LAB_10003e44:
        local_18 = pbVar21;
        if ((int)pbVar21 <= (int)pbVar8) goto LAB_10003f19;
      }
      else {
        if (-0xb < (int)local_28) goto LAB_10003e44;
LAB_10003e33:
        if (-1 < (int)pbVar8) goto LAB_10003f19;
      }
      do {
        pbVar21 = local_1c;
        if (10 < (int)pbVar23) {
          do {
            if (-1 < (int)((uint)pbVar21 | (uint)pbVar8) && local_135c != (void *)0x0) {
              pbVar5 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar5 = local_1698;
              }
              if ((int)pbVar21 < (int)pbVar5) {
                pbVar5 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar5 = local_1694;
                }
                if ((int)pbVar8 < (int)pbVar5) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar8;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0xac;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0xac;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0xac;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar21 = pbVar21 + 1;
          } while (local_14 != pbVar21);
        }
        pbVar8 = pbVar8 + 1;
      } while (pbVar8 != local_18);
    }
LAB_10003f19:
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_18 = pbVar23;
    if (9 < (int)pbVar23) {
      local_18 = (byte *)0xa;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = pbVar21;
    if (9 < (int)pbVar21) {
      pbVar5 = (byte *)0xa;
    }
    pbVar8 = local_24;
    if ((int)pbVar21 <= (int)local_24) {
      pbVar8 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-0xb < (int)local_28) {
      pbVar21 = pbVar8;
    }
    if ((int)pbVar5 < (int)pbVar21) {
      do {
        if (((10 < (int)pbVar23) &&
            (-1 < (int)((uint)local_18 | (uint)pbVar5) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_18 < (int)local_1698)))) {
          pbVar8 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar8 = local_1694;
          }
          if ((int)pbVar5 < (int)pbVar8) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)pbVar5 + (int)local_18 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0xac;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0xac;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0xac;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar21 != pbVar5);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_14 = pbVar23;
    if (0x14 < (int)pbVar23) {
      local_14 = (byte *)0x15;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = pbVar21;
    if (9 < (int)pbVar21) {
      pbVar5 = (byte *)0xa;
    }
    if ((int)pbVar21 <= (int)local_24) {
      local_24 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-0xb < (int)local_28) {
      pbVar21 = local_24;
    }
    if ((int)pbVar5 < (int)pbVar21) {
      do {
        if (((0x15 < (int)pbVar23) &&
            (-1 < (int)((uint)local_14 | (uint)pbVar5) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_14 < (int)local_1698)))) {
          pbVar8 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar8 = local_1694;
          }
          if ((int)pbVar5 < (int)pbVar8) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)pbVar5 + (int)local_14 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0xac;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0xac;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0xac;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar21 != pbVar5);
    }
    if (0 < local_1a90) {
      pbVar23 = (byte *)0x2f8;
      if (local_1698 != (byte *)0x0) {
        pbVar23 = local_1698;
      }
      pbVar21 = local_1a9c + 1;
      pbVar5 = pbVar21;
      if ((int)pbVar23 <= (int)pbVar21) {
        pbVar5 = pbVar23;
      }
      local_18 = (byte *)0x0;
      local_1c = (byte *)0x0;
      if (-2 < (int)local_1a9c) {
        local_1c = pbVar5;
      }
      pbVar5 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar5 = local_1694;
      }
      pbVar8 = local_1a98 + 1;
      pbVar12 = pbVar8;
      if ((int)pbVar5 <= (int)pbVar8) {
        pbVar12 = pbVar5;
      }
      pbVar22 = (byte *)0x0;
      if (-2 < (int)local_1a98) {
        pbVar22 = pbVar12;
      }
      pbVar12 = local_1a9c + local_1a94 + -1;
      pbVar24 = pbVar12;
      if ((int)pbVar23 <= (int)pbVar12) {
        pbVar24 = pbVar23;
      }
      local_14 = (byte *)0x0;
      if (-1 < (int)pbVar12) {
        local_14 = pbVar24;
      }
      pbVar23 = local_1a98 + local_1a90 + -1;
      pbVar12 = pbVar23;
      if ((int)pbVar5 <= (int)pbVar23) {
        pbVar12 = pbVar5;
      }
      if (-1 < (int)pbVar23) {
        local_18 = pbVar12;
      }
      if ((int)pbVar22 < (int)local_18) {
        do {
          pbVar23 = local_1c;
          if ((int)local_1c < (int)local_14) {
            do {
              if (-1 < (int)((uint)pbVar23 | (uint)pbVar22) && local_135c != (void *)0x0) {
                pbVar5 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar5 = local_1698;
                }
                if ((int)pbVar23 < (int)pbVar5) {
                  pbVar5 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar5 = local_1694;
                  }
                  if ((int)pbVar22 < (int)pbVar5) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar22;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0xbe;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0xbe;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0xbe;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar23 = pbVar23 + 1;
            } while (local_14 != pbVar23);
          }
          pbVar22 = pbVar22 + 1;
        } while (pbVar22 != local_18);
      }
      pbVar23 = (byte *)0x2f8;
      if (local_1698 != (byte *)0x0) {
        pbVar23 = local_1698;
      }
      pbVar5 = local_1a9c;
      if ((int)pbVar23 <= (int)local_1a9c) {
        pbVar5 = pbVar23;
      }
      local_18 = (byte *)0x0;
      local_1c = (byte *)0x0;
      if (-1 < (int)local_1a9c) {
        local_1c = pbVar5;
      }
      pbVar5 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar5 = local_1694;
      }
      pbVar12 = local_1a98;
      if ((int)pbVar5 <= (int)local_1a98) {
        pbVar12 = pbVar5;
      }
      pbVar22 = (byte *)0x0;
      if (-1 < (int)local_1a98) {
        pbVar22 = pbVar12;
      }
      pbVar24 = local_1a9c + local_1a94;
      pbVar12 = pbVar24;
      if ((int)pbVar23 <= (int)pbVar24) {
        pbVar12 = pbVar23;
      }
      local_14 = (byte *)0x0;
      if (-1 < (int)pbVar24) {
        local_14 = pbVar12;
      }
      if ((int)pbVar5 <= (int)pbVar8) {
        pbVar8 = pbVar5;
      }
      if (-2 < (int)local_1a98) {
        local_18 = pbVar8;
      }
      if ((int)pbVar22 < (int)local_18) {
        do {
          pbVar23 = local_1c;
          if ((int)local_1c < (int)local_14) {
            do {
              if (-1 < (int)((uint)pbVar23 | (uint)pbVar22) && local_135c != (void *)0x0) {
                pbVar5 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar5 = local_1698;
                }
                if ((int)pbVar23 < (int)pbVar5) {
                  pbVar5 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar5 = local_1694;
                  }
                  if ((int)pbVar22 < (int)pbVar5) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar22;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar23 = pbVar23 + 1;
            } while (local_14 != pbVar23);
          }
          pbVar22 = pbVar22 + 1;
        } while (pbVar22 != local_18);
      }
      pbVar23 = (byte *)0x2f8;
      if (local_1698 != (byte *)0x0) {
        pbVar23 = local_1698;
      }
      pbVar5 = local_1a9c;
      if ((int)pbVar23 <= (int)local_1a9c) {
        pbVar5 = pbVar23;
      }
      local_18 = (byte *)0x0;
      local_1c = (byte *)0x0;
      if (-1 < (int)local_1a9c) {
        local_1c = pbVar5;
      }
      pbVar5 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar5 = local_1694;
      }
      pbVar8 = local_1a98 + local_1a90 + -1;
      pbVar12 = pbVar8;
      if ((int)pbVar5 <= (int)pbVar8) {
        pbVar12 = pbVar5;
      }
      pbVar22 = (byte *)0x0;
      if (-1 < (int)pbVar8) {
        pbVar22 = pbVar12;
      }
      pbVar8 = pbVar24;
      if ((int)pbVar23 <= (int)pbVar24) {
        pbVar8 = pbVar23;
      }
      local_14 = (byte *)0x0;
      if (-1 < (int)pbVar24) {
        local_14 = pbVar8;
      }
      pbVar23 = local_1a98 + local_1a90;
      pbVar8 = pbVar23;
      if ((int)pbVar5 <= (int)pbVar23) {
        pbVar8 = pbVar5;
      }
      if (-1 < (int)pbVar23) {
        local_18 = pbVar8;
      }
      if ((int)pbVar22 < (int)local_18) {
        do {
          pbVar5 = local_1c;
          if ((int)local_1c < (int)local_14) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar22) && local_135c != (void *)0x0) {
                pbVar8 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar8 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar8) {
                  pbVar8 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar8 = local_1694;
                  }
                  if ((int)pbVar22 < (int)pbVar8) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar22;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (local_14 != pbVar5);
          }
          pbVar22 = pbVar22 + 1;
        } while (pbVar22 != local_18);
      }
      pbVar5 = (byte *)0x2f8;
      if (local_1698 != (byte *)0x0) {
        pbVar5 = local_1698;
      }
      pbVar8 = local_1a9c;
      if ((int)pbVar5 <= (int)local_1a9c) {
        pbVar8 = pbVar5;
      }
      local_18 = (byte *)0x0;
      local_1c = (byte *)0x0;
      if (-1 < (int)local_1a9c) {
        local_1c = pbVar8;
      }
      pbVar8 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar8 = local_1694;
      }
      pbVar12 = local_1a98;
      if ((int)pbVar8 <= (int)local_1a98) {
        pbVar12 = pbVar8;
      }
      pbVar22 = (byte *)0x0;
      if (-1 < (int)local_1a98) {
        pbVar22 = pbVar12;
      }
      if ((int)pbVar5 <= (int)pbVar21) {
        pbVar21 = pbVar5;
      }
      local_14 = (byte *)0x0;
      if (-2 < (int)local_1a9c) {
        local_14 = pbVar21;
      }
      pbVar21 = pbVar23;
      if ((int)pbVar8 <= (int)pbVar23) {
        pbVar21 = pbVar8;
      }
      if (-1 < (int)pbVar23) {
        local_18 = pbVar21;
      }
      if ((int)pbVar22 < (int)local_18) {
        do {
          pbVar21 = local_1c;
          if ((int)local_1c < (int)local_14) {
            do {
              if (-1 < (int)((uint)pbVar21 | (uint)pbVar22) && local_135c != (void *)0x0) {
                pbVar5 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar5 = local_1698;
                }
                if ((int)pbVar21 < (int)pbVar5) {
                  pbVar5 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar5 = local_1694;
                  }
                  if ((int)pbVar22 < (int)pbVar5) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar22;
                    *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0x74;
                    *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar21 = pbVar21 + 1;
            } while (local_14 != pbVar21);
          }
          pbVar22 = pbVar22 + 1;
        } while (pbVar22 != local_18);
      }
      pbVar21 = (byte *)0x2f8;
      if (local_1698 != (byte *)0x0) {
        pbVar21 = local_1698;
      }
      pbVar5 = pbVar24 + -1;
      pbVar8 = pbVar5;
      if ((int)pbVar21 <= (int)pbVar5) {
        pbVar8 = pbVar21;
      }
      local_18 = (byte *)0x0;
      local_1c = (byte *)0x0;
      if (-1 < (int)pbVar5) {
        local_1c = pbVar8;
      }
      pbVar5 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar5 = local_1694;
      }
      pbVar8 = local_1a98;
      if ((int)pbVar5 <= (int)local_1a98) {
        pbVar8 = pbVar5;
      }
      pbVar12 = (byte *)0x0;
      if (-1 < (int)local_1a98) {
        pbVar12 = pbVar8;
      }
      pbVar8 = pbVar24;
      if ((int)pbVar21 <= (int)pbVar24) {
        pbVar8 = pbVar21;
      }
      local_14 = (byte *)0x0;
      if (-1 < (int)pbVar24) {
        local_14 = pbVar8;
      }
      if ((int)pbVar23 < (int)pbVar5) {
        if ((int)pbVar23 < 0) goto LAB_1000477c;
LAB_1000478a:
        local_18 = pbVar23;
        if ((int)pbVar23 <= (int)pbVar12) goto LAB_1000485f;
      }
      else {
        bVar25 = -1 < (int)pbVar23;
        pbVar23 = pbVar5;
        if (bVar25) goto LAB_1000478a;
LAB_1000477c:
        if (-1 < (int)pbVar12) goto LAB_1000485f;
      }
      do {
        pbVar23 = local_1c;
        if ((int)local_1c < (int)local_14) {
          do {
            if (-1 < (int)((uint)pbVar23 | (uint)pbVar12) && local_135c != (void *)0x0) {
              pbVar21 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar21 = local_1698;
              }
              if ((int)pbVar23 < (int)pbVar21) {
                pbVar21 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar21 = local_1694;
                }
                if ((int)pbVar12 < (int)pbVar21) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar12;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0x74;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0x74;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0x74;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar23 = pbVar23 + 1;
          } while (local_14 != pbVar23);
        }
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != local_18);
    }
LAB_1000485f:
    pbVar23 = local_1330 + 2;
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar23 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar5 = (byte *)0x10;
      if ((int)pbVar23 < 0x10) goto LAB_10004897;
    }
    else {
      pbVar5 = local_1330 + 6;
      if ((int)pbVar23 < (int)pbVar5) {
LAB_10004897:
        pbVar23 = pbVar5;
      }
    }
    pbVar5 = pbVar23 + -0x14;
    if ((int)pbVar21 <= (int)(pbVar23 + -0x14)) {
      pbVar5 = pbVar21;
    }
    if (pbVar23 < (byte *)0x14) {
      pbVar5 = (byte *)0x0;
    }
    pbVar8 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar8 = local_1698;
    }
    local_14 = pbVar8;
    if (0x15 < (int)pbVar8) {
      local_14 = (byte *)0x16;
    }
    pbVar12 = pbVar23 + -6;
    if ((int)pbVar21 <= (int)(pbVar23 + -6)) {
      pbVar12 = pbVar21;
    }
    if ((int)pbVar5 < (int)pbVar12) {
      do {
        if (10 < (int)pbVar8) {
          pbVar23 = (byte *)0xa;
          do {
            if (local_135c != (void *)0x0 && -1 < (int)pbVar5) {
              pbVar21 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar21 = local_1698;
              }
              if ((int)pbVar23 < (int)pbVar21) {
                pbVar21 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar21 = local_1694;
                }
                if ((int)pbVar5 < (int)pbVar21) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar5;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0xee;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0xee;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0xee;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar23 = pbVar23 + 1;
          } while (local_14 != pbVar23);
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 != pbVar12);
    }
    pbVar23 = local_1330 + 2;
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar23 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar5 = (byte *)0x10;
      if ((int)pbVar23 < 0x10) goto LAB_100049e1;
    }
    else {
      pbVar5 = local_1330 + 6;
      if ((int)pbVar23 < (int)pbVar5) {
LAB_100049e1:
        pbVar23 = pbVar5;
      }
    }
    pbVar5 = pbVar23 + -0x13;
    if ((int)pbVar21 <= (int)(pbVar23 + -0x13)) {
      pbVar5 = pbVar21;
    }
    local_18 = (byte *)0x0;
    if ((byte *)0x12 < pbVar23) {
      local_18 = pbVar5;
    }
    pbVar5 = pbVar23 + -0x14;
    if ((int)pbVar21 <= (int)(pbVar23 + -0x14)) {
      pbVar5 = pbVar21;
    }
    local_24 = pbVar23 + -0x14;
    pbVar21 = (byte *)0x0;
    if ((byte *)0x13 < pbVar23) {
      pbVar21 = pbVar5;
    }
    pbVar5 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar5 = local_1698;
    }
    local_1c = pbVar5;
    if (9 < (int)pbVar5) {
      local_1c = (byte *)0xa;
    }
    local_14 = pbVar5;
    if (0x15 < (int)pbVar5) {
      local_14 = (byte *)0x16;
    }
    if ((int)pbVar21 < (int)local_18) {
      do {
        pbVar8 = local_1c;
        if (10 < (int)pbVar5) {
          do {
            if (-1 < (int)((uint)pbVar8 | (uint)pbVar21) && local_135c != (void *)0x0) {
              pbVar12 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar12 = local_1698;
              }
              if ((int)pbVar8 < (int)pbVar12) {
                pbVar12 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar12 = local_1694;
                }
                if ((int)pbVar21 < (int)pbVar12) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar21;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9) = 0x96;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 1) = 0x96;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 2) = 0x96;
                  *(undefined1 *)((int)local_135c + (int)pbVar8 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar8 = pbVar8 + 1;
          } while (local_14 != pbVar8);
        }
        pbVar21 = pbVar21 + 1;
      } while (pbVar21 != local_18);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_1c = pbVar21;
    if (9 < (int)pbVar21) {
      local_1c = (byte *)0xa;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar8 = pbVar23 + -7;
    if ((int)pbVar5 <= (int)(pbVar23 + -7)) {
      pbVar8 = pbVar5;
    }
    local_18 = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    if (6 < (int)pbVar23) {
      pbVar12 = pbVar8;
    }
    local_14 = pbVar21;
    if (0x15 < (int)pbVar21) {
      local_14 = (byte *)0x16;
    }
    pbVar8 = pbVar23 + -6;
    if ((int)pbVar8 < (int)pbVar5) {
      pbVar5 = pbVar8;
      if ((int)pbVar23 < 6) goto LAB_10004b8f;
LAB_10004b9f:
      local_18 = pbVar5;
      if ((int)pbVar12 < (int)pbVar5) {
LAB_10004bcd:
        do {
          pbVar5 = local_1c;
          if (10 < (int)pbVar21) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar12) && local_135c != (void *)0x0) {
                pbVar22 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar22 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar22) {
                  pbVar22 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar22 = local_1694;
                  }
                  if ((int)pbVar12 < (int)pbVar22) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar12;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0x96;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0x96;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0x96;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (local_14 != pbVar5);
          }
          pbVar12 = pbVar12 + 1;
        } while (pbVar12 != local_18);
      }
    }
    else {
      if (5 < (int)pbVar23) goto LAB_10004b9f;
LAB_10004b8f:
      if ((int)pbVar12 < 0) goto LAB_10004bcd;
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_14 = pbVar21;
    if (9 < (int)pbVar21) {
      local_14 = (byte *)0xa;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar12 = local_24;
    if ((int)pbVar5 <= (int)local_24) {
      pbVar12 = pbVar5;
    }
    pbVar22 = (byte *)0x0;
    if ((byte *)0x13 < pbVar23) {
      pbVar22 = pbVar12;
    }
    pbVar12 = pbVar8;
    if ((int)pbVar5 <= (int)pbVar8) {
      pbVar12 = pbVar5;
    }
    pbVar5 = (byte *)0x0;
    if (5 < (int)pbVar23) {
      pbVar5 = pbVar12;
    }
    if ((int)pbVar22 < (int)pbVar5) {
      do {
        if (((10 < (int)pbVar21) &&
            (-1 < (int)((uint)local_14 | (uint)pbVar22) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_14 < (int)local_1698)))) {
          pbVar12 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar12 = local_1694;
          }
          if ((int)pbVar22 < (int)pbVar12) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)pbVar22 + (int)local_14 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        pbVar22 = pbVar22 + 1;
      } while (pbVar5 != pbVar22);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_18 = pbVar21;
    if (0x14 < (int)pbVar21) {
      local_18 = (byte *)0x15;
    }
    local_34 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      local_34 = local_1694;
    }
    if ((int)local_34 <= (int)local_24) {
      local_24 = local_34;
    }
    local_14 = (byte *)0x0;
    pbVar5 = (byte *)0x0;
    if (pbVar23 < (byte *)0x14) {
      if ((int)pbVar8 < (int)local_34) goto LAB_10004df3;
LAB_10004e0f:
      if (5 < (int)pbVar23) goto LAB_10004df9;
LAB_10004e18:
      if ((int)pbVar5 < 0) goto LAB_10004e21;
    }
    else {
      pbVar5 = local_24;
      if ((int)local_34 <= (int)pbVar8) goto LAB_10004e0f;
LAB_10004df3:
      local_34 = pbVar8;
      if ((int)pbVar23 < 6) goto LAB_10004e18;
LAB_10004df9:
      local_14 = local_34;
      if ((int)pbVar5 < (int)local_34) {
LAB_10004e21:
        do {
          if (((0x15 < (int)pbVar21) &&
              (-1 < (int)((uint)local_18 | (uint)pbVar5) && local_135c != (void *)0x0)) &&
             ((local_1698 == (byte *)0x0 || ((int)local_18 < (int)local_1698)))) {
            pbVar23 = (byte *)0x190;
            if (local_1694 != (byte *)0x0) {
              pbVar23 = local_1694;
            }
            if ((int)pbVar5 < (int)pbVar23) {
              uVar3 = 0xbe0;
              if (local_1698 != (byte *)0x0) {
                uVar3 = (int)local_1698 << 2;
              }
              if (local_1690 != 0) {
                uVar3 = local_1690;
              }
              iVar9 = uVar3 * (int)pbVar5 + (int)local_18 * 4;
              *(undefined1 *)((int)local_135c + iVar9) = 0x96;
              *(undefined1 *)((int)local_135c + iVar9 + 1) = 0x96;
              *(undefined1 *)((int)local_135c + iVar9 + 2) = 0x96;
              *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
            }
          }
          pbVar5 = pbVar5 + 1;
        } while (local_14 != pbVar5);
      }
    }
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    else {
      pbVar23 = local_1330 + 2;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar23 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar5 = (byte *)0x10;
      if ((int)pbVar23 < 0x10) goto LAB_10004f09;
    }
    else {
      pbVar5 = local_1330 + 6;
      if ((int)pbVar23 < (int)pbVar5) {
LAB_10004f09:
        pbVar23 = pbVar5;
      }
    }
    pbVar5 = pbVar23 + -0x10;
    if ((int)pbVar21 <= (int)(pbVar23 + -0x10)) {
      pbVar5 = pbVar21;
    }
    local_14 = (byte *)0x0;
    if ((byte *)0xf < pbVar23) {
      local_14 = pbVar5;
    }
    pbVar5 = pbVar23 + -0x11;
    if ((int)pbVar21 <= (int)(pbVar23 + -0x11)) {
      pbVar5 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if ((byte *)0x10 < pbVar23) {
      pbVar21 = pbVar5;
    }
    pbVar5 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar5 = local_1698;
    }
    local_18 = pbVar5;
    if (0xf < (int)pbVar5) {
      local_18 = (byte *)0x10;
    }
    if ((int)pbVar21 < (int)local_14) {
      do {
        if (((0x10 < (int)pbVar5) &&
            (-1 < (int)((uint)local_18 | (uint)pbVar21) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_18 < (int)local_1698)))) {
          pbVar8 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar8 = local_1694;
          }
          if ((int)pbVar21 < (int)pbVar8) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)pbVar21 + (int)local_18 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0x46;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0x46;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0x46;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        pbVar21 = pbVar21 + 1;
      } while (local_14 != pbVar21);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_1c = pbVar21;
    if (0xe < (int)pbVar21) {
      local_1c = (byte *)0xf;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar8 = pbVar23 + -0x10;
    if ((int)pbVar5 <= (int)(pbVar23 + -0x10)) {
      pbVar8 = pbVar5;
    }
    local_18 = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    if ((byte *)0xf < pbVar23) {
      pbVar12 = pbVar8;
    }
    local_14 = pbVar21;
    if (0x11 < (int)pbVar21) {
      local_14 = (byte *)0x12;
    }
    pbVar8 = pbVar23 + -0xf;
    if ((int)pbVar8 < (int)pbVar5) {
      pbVar5 = pbVar8;
      if ((int)pbVar23 < 0xf) goto LAB_1000508b;
LAB_1000509b:
      local_18 = pbVar5;
      if ((int)pbVar12 < (int)pbVar5) {
LAB_100050bd:
        do {
          pbVar5 = local_1c;
          if (0xf < (int)pbVar21) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar12) && local_135c != (void *)0x0) {
                pbVar22 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar22 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar22) {
                  pbVar22 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar22 = local_1694;
                  }
                  if ((int)pbVar12 < (int)pbVar22) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar12;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (local_14 != pbVar5);
          }
          pbVar12 = pbVar12 + 1;
        } while (pbVar12 != local_18);
      }
    }
    else {
      if (0xe < (int)pbVar23) goto LAB_1000509b;
LAB_1000508b:
      if ((int)pbVar12 < 0) goto LAB_100050bd;
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_1c = pbVar21;
    if (0xd < (int)pbVar21) {
      local_1c = (byte *)0xe;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    if ((int)pbVar5 <= (int)pbVar8) {
      pbVar8 = pbVar5;
    }
    local_18 = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    if (0xe < (int)pbVar23) {
      pbVar12 = pbVar8;
    }
    pbVar8 = pbVar21;
    if (0x12 < (int)pbVar21) {
      pbVar8 = (byte *)0x13;
    }
    pbVar22 = pbVar23 + -0xe;
    if ((int)pbVar22 < (int)pbVar5) {
      pbVar5 = pbVar22;
      if ((int)pbVar23 < 0xe) goto LAB_100051dd;
LAB_100051ed:
      local_18 = pbVar5;
      if ((int)pbVar12 < (int)pbVar5) {
LAB_1000520a:
        do {
          pbVar5 = local_1c;
          if (0xe < (int)pbVar21) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar12) && local_135c != (void *)0x0) {
                pbVar24 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar24 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar24) {
                  pbVar24 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar24 = local_1694;
                  }
                  if ((int)pbVar12 < (int)pbVar24) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar12;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (pbVar8 != pbVar5);
          }
          pbVar12 = pbVar12 + 1;
        } while (pbVar12 != local_18);
      }
    }
    else {
      if (0xd < (int)pbVar23) goto LAB_100051ed;
LAB_100051dd:
      if ((int)pbVar12 < 0) goto LAB_1000520a;
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_1c = pbVar21;
    if (0xc < (int)pbVar21) {
      local_1c = (byte *)0xd;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    if ((int)pbVar5 <= (int)pbVar22) {
      pbVar22 = pbVar5;
    }
    local_18 = (byte *)0x0;
    pbVar8 = (byte *)0x0;
    if (0xd < (int)pbVar23) {
      pbVar8 = pbVar22;
    }
    local_14 = pbVar21;
    if (0x13 < (int)pbVar21) {
      local_14 = (byte *)0x14;
    }
    pbVar12 = pbVar23 + -0xd;
    if ((int)pbVar12 < (int)pbVar5) {
      if ((int)pbVar23 < 0xd) goto LAB_1000532a;
LAB_10005339:
      local_18 = pbVar12;
      if ((int)pbVar8 < (int)pbVar12) {
LAB_1000535d:
        do {
          pbVar23 = local_1c;
          if (0xd < (int)pbVar21) {
            do {
              if (-1 < (int)((uint)pbVar23 | (uint)pbVar8) && local_135c != (void *)0x0) {
                pbVar5 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar5 = local_1698;
                }
                if ((int)pbVar23 < (int)pbVar5) {
                  pbVar5 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar5 = local_1694;
                  }
                  if ((int)pbVar8 < (int)pbVar5) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar8;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar23 = pbVar23 + 1;
            } while (local_14 != pbVar23);
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar8 != local_18);
      }
    }
    else {
      pbVar12 = pbVar5;
      if (0xc < (int)pbVar23) goto LAB_10005339;
LAB_1000532a:
      if ((int)pbVar8 < 0) goto LAB_1000535d;
    }
    pbVar23 = local_1330 + 2;
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar23 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar5 = (byte *)0x10;
      if ((int)pbVar23 < 0x10) goto LAB_10005448;
    }
    else {
      pbVar5 = local_1330 + 6;
      if ((int)pbVar23 < (int)(local_1330 + 6)) {
LAB_10005448:
        pbVar23 = pbVar5;
      }
    }
    pbVar5 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar5 = local_1698;
    }
    local_14 = pbVar5;
    if (0x15 < (int)pbVar5) {
      local_14 = (byte *)0x16;
    }
    local_18 = pbVar23 + 10;
    if ((int)pbVar21 <= (int)(pbVar23 + 10)) {
      local_18 = pbVar21;
    }
    pbVar23 = pbVar23 + -4;
    if ((int)pbVar23 < (int)pbVar21) {
      do {
        if (10 < (int)pbVar5) {
          pbVar21 = (byte *)0xa;
          do {
            if (local_135c != (void *)0x0 && -1 < (int)pbVar23) {
              pbVar8 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar8 = local_1698;
              }
              if ((int)pbVar21 < (int)pbVar8) {
                pbVar8 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar8 = local_1694;
                }
                if ((int)pbVar23 < (int)pbVar8) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar23;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0xee;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0xee;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0xee;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar21 = pbVar21 + 1;
          } while (local_14 != pbVar21);
        }
        pbVar23 = pbVar23 + 1;
      } while (pbVar23 != local_18);
    }
    pbVar23 = local_1330 + 2;
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    local_24 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0x10;
      if ((int)local_24 < 0x10) goto LAB_10005582;
    }
    else {
      pbVar23 = local_1330 + 6;
      if ((int)local_24 < (int)pbVar23) {
LAB_10005582:
        local_24 = pbVar23;
      }
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    pbVar5 = pbVar23;
    if (0x15 < (int)pbVar23) {
      pbVar5 = (byte *)0x16;
    }
    local_18 = local_24 + -4;
    if (((int)local_18 < (int)pbVar21) && (10 < (int)pbVar23)) {
      pbVar23 = (byte *)0xa;
      do {
        if (local_135c != (void *)0x0 && 3 < (int)local_24) {
          pbVar21 = (byte *)0x2f8;
          if (local_1698 != (byte *)0x0) {
            pbVar21 = local_1698;
          }
          if ((int)pbVar23 < (int)pbVar21) {
            pbVar21 = (byte *)0x190;
            if (local_1694 != (byte *)0x0) {
              pbVar21 = local_1694;
            }
            if ((int)local_18 < (int)pbVar21) {
              uVar3 = 0xbe0;
              if (local_1698 != (byte *)0x0) {
                uVar3 = (int)local_1698 << 2;
              }
              if (local_1690 != 0) {
                uVar3 = local_1690;
              }
              iVar9 = uVar3 * (int)local_18;
              *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0x96;
              *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0x96;
              *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0x96;
              *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
            }
          }
        }
        pbVar23 = pbVar23 + 1;
      } while (pbVar5 != pbVar23);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_28 = pbVar23;
    if (9 < (int)pbVar23) {
      local_28 = (byte *)0xa;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = local_24 + 9;
    pbVar8 = pbVar5;
    if ((int)pbVar21 <= (int)pbVar5) {
      pbVar8 = pbVar21;
    }
    local_1c = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    if (-1 < (int)pbVar5) {
      pbVar12 = pbVar8;
    }
    local_14 = pbVar23;
    if (0x15 < (int)pbVar23) {
      local_14 = (byte *)0x16;
    }
    pbVar5 = local_24 + 10;
    pbVar8 = pbVar5;
    if ((int)pbVar21 <= (int)pbVar5) {
      pbVar8 = pbVar21;
    }
    if (-1 < (int)pbVar5) {
      local_1c = pbVar8;
    }
    if ((int)pbVar12 < (int)local_1c) {
      do {
        pbVar21 = local_28;
        if (10 < (int)pbVar23) {
          do {
            if (-1 < (int)((uint)pbVar21 | (uint)pbVar12) && local_135c != (void *)0x0) {
              pbVar8 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar8 = local_1698;
              }
              if ((int)pbVar21 < (int)pbVar8) {
                pbVar8 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar8 = local_1694;
                }
                if ((int)pbVar12 < (int)pbVar8) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar12;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0x96;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0x96;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0x96;
                  *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar21 = pbVar21 + 1;
          } while (local_14 != pbVar21);
        }
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != local_1c);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_14 = pbVar23;
    if (9 < (int)pbVar23) {
      local_14 = (byte *)0xa;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar8 = local_18;
    if ((int)pbVar21 <= (int)local_18) {
      pbVar8 = pbVar21;
    }
    pbVar12 = pbVar5;
    if ((int)pbVar21 <= (int)pbVar5) {
      pbVar12 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-0xb < (int)local_24) {
      pbVar21 = pbVar12;
    }
    if ((int)pbVar8 < (int)pbVar21) {
      do {
        if (((10 < (int)pbVar23) &&
            (-1 < (int)((uint)local_14 | (uint)pbVar8) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_14 < (int)local_1698)))) {
          pbVar12 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar12 = local_1694;
          }
          if ((int)pbVar8 < (int)pbVar12) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)pbVar8 + (int)local_14 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        pbVar8 = pbVar8 + 1;
      } while (pbVar21 != pbVar8);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_14 = pbVar23;
    if (0x14 < (int)pbVar23) {
      local_14 = (byte *)0x15;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 == (byte *)0x0) {
      if (399 < (int)local_18) goto LAB_10005a49;
    }
    else {
      pbVar21 = local_1694;
      if ((int)local_1694 <= (int)local_18) {
LAB_10005a49:
        local_18 = pbVar21;
      }
    }
    if ((int)pbVar21 <= (int)pbVar5) {
      pbVar5 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-0xb < (int)local_24) {
      pbVar21 = pbVar5;
    }
    if ((int)local_18 < (int)pbVar21) {
      do {
        if (((0x15 < (int)pbVar23) &&
            (-1 < (int)((uint)local_14 | (uint)local_18) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_14 < (int)local_1698)))) {
          pbVar5 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar5 = local_1694;
          }
          if ((int)local_18 < (int)pbVar5) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)local_18 + (int)local_14 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0x96;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        local_18 = local_18 + 1;
      } while (pbVar21 != local_18);
    }
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    else {
      pbVar23 = local_1330 + 2;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar23 = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar5 = (byte *)0x10;
      if ((int)pbVar23 < 0x10) goto LAB_10005a93;
    }
    else {
      pbVar5 = local_1330 + 6;
      if ((int)pbVar23 < (int)pbVar5) {
LAB_10005a93:
        pbVar23 = pbVar5;
      }
    }
    pbVar5 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar5 = local_1698;
    }
    pbVar8 = pbVar5;
    if (0x13 < (int)pbVar5) {
      pbVar8 = (byte *)0x14;
    }
    pbVar12 = pbVar23 + 1;
    if (((int)pbVar12 < (int)pbVar21) && (0xd < (int)pbVar5)) {
      pbVar21 = (byte *)0xd;
      do {
        if (local_135c != (void *)0x0 && -2 < (int)pbVar23) {
          pbVar5 = (byte *)0x2f8;
          if (local_1698 != (byte *)0x0) {
            pbVar5 = local_1698;
          }
          if ((int)pbVar21 < (int)pbVar5) {
            pbVar5 = (byte *)0x190;
            if (local_1694 != (byte *)0x0) {
              pbVar5 = local_1694;
            }
            if ((int)pbVar12 < (int)pbVar5) {
              uVar3 = 0xbe0;
              if (local_1698 != (byte *)0x0) {
                uVar3 = (int)local_1698 << 2;
              }
              if (local_1690 != 0) {
                uVar3 = local_1690;
              }
              iVar9 = uVar3 * (int)pbVar12;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9) = 0x46;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 1) = 0x46;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 2) = 0x46;
              *(undefined1 *)((int)local_135c + (int)pbVar21 * 4 + iVar9 + 3) = 0xff;
            }
          }
        }
        pbVar21 = pbVar21 + 1;
      } while (pbVar8 != pbVar21);
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_28 = pbVar21;
    if (0xd < (int)pbVar21) {
      local_28 = (byte *)0xe;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    pbVar8 = pbVar23 + 2;
    if ((int)pbVar5 <= (int)(pbVar23 + 2)) {
      pbVar8 = pbVar5;
    }
    local_1c = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    if (-3 < (int)pbVar23) {
      pbVar12 = pbVar8;
    }
    local_14 = pbVar21;
    if (0x12 < (int)pbVar21) {
      local_14 = (byte *)0x13;
    }
    local_24 = pbVar23 + 3;
    if ((int)local_24 < (int)pbVar5) {
      pbVar5 = local_24;
      if ((int)pbVar23 < -3) goto LAB_10005c08;
LAB_10005c17:
      local_1c = pbVar5;
      if ((int)pbVar12 < (int)pbVar5) {
LAB_10005c3a:
        do {
          pbVar5 = local_28;
          if (0xe < (int)pbVar21) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar12) && local_135c != (void *)0x0) {
                pbVar8 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar8 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar8) {
                  pbVar8 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar8 = local_1694;
                  }
                  if ((int)pbVar12 < (int)pbVar8) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar12;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (local_14 != pbVar5);
          }
          pbVar12 = pbVar12 + 1;
        } while (pbVar12 != local_1c);
      }
    }
    else {
      if (-4 < (int)pbVar23) goto LAB_10005c17;
LAB_10005c08:
      if ((int)pbVar12 < 0) goto LAB_10005c3a;
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_20 = pbVar21;
    if (0xe < (int)pbVar21) {
      local_20 = (byte *)0xf;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    if ((int)pbVar5 <= (int)local_24) {
      local_24 = pbVar5;
    }
    local_1c = (byte *)0x0;
    pbVar8 = (byte *)0x0;
    if (-4 < (int)pbVar23) {
      pbVar8 = local_24;
    }
    local_14 = pbVar21;
    if (0x11 < (int)pbVar21) {
      local_14 = (byte *)0x12;
    }
    pbVar12 = pbVar23 + 4;
    if ((int)pbVar12 < (int)pbVar5) {
      pbVar5 = pbVar12;
      if ((int)pbVar23 < -4) goto LAB_10005d5c;
LAB_10005d6b:
      local_1c = pbVar5;
      if ((int)pbVar8 < (int)pbVar5) {
LAB_10005d8a:
        do {
          pbVar5 = local_20;
          if (0xf < (int)pbVar21) {
            do {
              if (-1 < (int)((uint)pbVar5 | (uint)pbVar8) && local_135c != (void *)0x0) {
                pbVar22 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar22 = local_1698;
                }
                if ((int)pbVar5 < (int)pbVar22) {
                  pbVar22 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar22 = local_1694;
                  }
                  if ((int)pbVar8 < (int)pbVar22) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar8;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 1) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 2) = 0x46;
                    *(undefined1 *)((int)local_135c + (int)pbVar5 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar5 = pbVar5 + 1;
            } while (local_14 != pbVar5);
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar8 != local_1c);
      }
    }
    else {
      if (-5 < (int)pbVar23) goto LAB_10005d6b;
LAB_10005d5c:
      if ((int)pbVar8 < 0) goto LAB_10005d8a;
    }
    pbVar21 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar21 = local_1698;
    }
    local_14 = pbVar21;
    if (0xf < (int)pbVar21) {
      local_14 = (byte *)0x10;
    }
    pbVar5 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar5 = local_1694;
    }
    if ((int)pbVar5 <= (int)pbVar12) {
      pbVar12 = pbVar5;
    }
    pbVar8 = (byte *)0x0;
    if (-5 < (int)pbVar23) {
      pbVar8 = pbVar12;
    }
    pbVar12 = pbVar23 + 5;
    if ((int)pbVar12 < (int)pbVar5) {
      if ((int)pbVar23 < -5) goto LAB_10005e96;
LAB_10005ea5:
      if ((int)pbVar8 < (int)pbVar12) {
LAB_10005eaf:
        do {
          if (((0x10 < (int)pbVar21) &&
              (-1 < (int)((uint)local_14 | (uint)pbVar8) && local_135c != (void *)0x0)) &&
             ((local_1698 == (byte *)0x0 || ((int)local_14 < (int)local_1698)))) {
            pbVar23 = (byte *)0x190;
            if (local_1694 != (byte *)0x0) {
              pbVar23 = local_1694;
            }
            if ((int)pbVar8 < (int)pbVar23) {
              uVar3 = 0xbe0;
              if (local_1698 != (byte *)0x0) {
                uVar3 = (int)local_1698 << 2;
              }
              if (local_1690 != 0) {
                uVar3 = local_1690;
              }
              iVar9 = uVar3 * (int)pbVar8 + (int)local_14 * 4;
              *(undefined1 *)((int)local_135c + iVar9) = 0x46;
              *(undefined1 *)((int)local_135c + iVar9 + 1) = 0x46;
              *(undefined1 *)((int)local_135c + iVar9 + 2) = 0x46;
              *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
            }
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar12 != pbVar8);
      }
    }
    else {
      pbVar12 = pbVar5;
      if (-6 < (int)pbVar23) goto LAB_10005ea5;
LAB_10005e96:
      pbVar12 = (byte *)0x0;
      if ((int)pbVar8 < 0) goto LAB_10005eaf;
    }
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0xc;
    }
    else {
      pbVar23 = local_1330 + 2;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    local_3c = pbVar21 + (-0x26 - (int)pbVar23);
    if ((int)local_1330 < 1) {
      pbVar23 = (byte *)0x10;
      if ((int)local_3c < 0x10) goto LAB_10005f91;
    }
    else {
      pbVar23 = local_1330 + 6;
      if ((int)local_3c < (int)pbVar23) {
LAB_10005f91:
        local_3c = pbVar23;
      }
    }
    local_28 = (byte *)0x2e4;
    if (local_1698 != (byte *)0x0) {
      local_28 = local_1698 + -0x14;
    }
    if (local_1334 < 1) {
      pbVar23 = (byte *)0xe;
    }
    else {
      pbVar23 = (byte *)(local_1334 + 8);
    }
    if ((int)local_28 <= (int)pbVar23) {
      local_28 = pbVar23;
    }
    local_24 = local_3c + 0x12;
    pbVar23 = (byte *)(((int)pbVar21 - (int)local_24) + -10);
    if ((int)local_1330 < 1) {
      local_38 = (byte *)0x12;
      if (0x1b < (int)pbVar21 - (int)local_24) {
        local_38 = pbVar23;
      }
      local_40 = (byte *)0xa;
    }
    else {
      local_38 = pbVar23;
      if ((int)pbVar23 <= (int)(local_1330 + 8)) {
        local_38 = local_1330 + 8;
      }
      local_40 = local_1330;
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_1c = pbVar23;
    if (9 < (int)pbVar23) {
      local_1c = (byte *)0xa;
    }
    pbVar5 = local_24;
    if ((int)pbVar21 <= (int)local_24) {
      pbVar5 = pbVar21;
    }
    local_34 = local_28 + 10;
    pbVar8 = local_34;
    if ((int)pbVar23 <= (int)local_34) {
      pbVar8 = pbVar23;
    }
    local_18 = (byte *)0x0;
    local_14 = (byte *)0x0;
    if (-0xb < (int)local_28) {
      local_14 = pbVar8;
    }
    local_30 = local_38 + (int)local_24;
    pbVar23 = local_30;
    if ((int)pbVar21 <= (int)local_30) {
      pbVar23 = pbVar21;
    }
    if (-1 < (int)local_30) {
      local_18 = pbVar23;
    }
    if ((int)pbVar5 < (int)local_18) {
      do {
        pbVar23 = local_1c;
        if ((int)local_1c < (int)local_14) {
          do {
            if (-1 < (int)((uint)pbVar23 | (uint)pbVar5) && local_135c != (void *)0x0) {
              pbVar21 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar21 = local_1698;
              }
              if ((int)pbVar23 < (int)pbVar21) {
                pbVar21 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar21 = local_1694;
                }
                if ((int)pbVar5 < (int)pbVar21) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar5;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0x8e;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0xba;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0xdc;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xd9;
                }
              }
            }
            pbVar23 = pbVar23 + 1;
          } while (local_14 != pbVar23);
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 != local_18);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_1c = pbVar23;
    if (9 < (int)pbVar23) {
      local_1c = (byte *)0xa;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = local_24;
    if ((int)pbVar21 <= (int)local_24) {
      pbVar5 = pbVar21;
    }
    pbVar8 = local_34;
    if ((int)pbVar23 <= (int)local_34) {
      pbVar8 = pbVar23;
    }
    local_18 = (byte *)0x0;
    local_14 = (byte *)0x0;
    if (-0xb < (int)local_28) {
      local_14 = pbVar8;
    }
    pbVar23 = local_3c + 0x13;
    if ((int)pbVar21 <= (int)(local_3c + 0x13)) {
      pbVar23 = pbVar21;
    }
    if (-0x14 < (int)local_3c) {
      local_18 = pbVar23;
    }
    if ((int)pbVar5 < (int)local_18) {
      do {
        pbVar23 = local_1c;
        if ((int)local_1c < (int)local_14) {
          do {
            if (-1 < (int)((uint)pbVar23 | (uint)pbVar5) && local_135c != (void *)0x0) {
              pbVar21 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar21 = local_1698;
              }
              if ((int)pbVar23 < (int)pbVar21) {
                pbVar21 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar21 = local_1694;
                }
                if ((int)pbVar5 < (int)pbVar21) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar5;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar23 = pbVar23 + 1;
          } while (local_14 != pbVar23);
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 != local_18);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_1c = pbVar23;
    if (9 < (int)pbVar23) {
      local_1c = (byte *)0xa;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = local_3c + 0x11 + (int)local_38;
    pbVar8 = pbVar5;
    if ((int)pbVar21 <= (int)pbVar5) {
      pbVar8 = pbVar21;
    }
    local_18 = (byte *)0x0;
    pbVar12 = (byte *)0x0;
    if (-1 < (int)pbVar5) {
      pbVar12 = pbVar8;
    }
    pbVar5 = local_34;
    if ((int)pbVar23 <= (int)local_34) {
      pbVar5 = pbVar23;
    }
    local_14 = (byte *)0x0;
    if (-0xb < (int)local_28) {
      local_14 = pbVar5;
    }
    pbVar23 = local_30;
    if ((int)pbVar21 <= (int)local_30) {
      pbVar23 = pbVar21;
    }
    if (-1 < (int)local_30) {
      local_18 = pbVar23;
    }
    if ((int)pbVar12 < (int)local_18) {
      do {
        pbVar23 = local_1c;
        if ((int)local_1c < (int)local_14) {
          do {
            if (-1 < (int)((uint)pbVar23 | (uint)pbVar12) && local_135c != (void *)0x0) {
              pbVar21 = (byte *)0x2f8;
              if (local_1698 != (byte *)0x0) {
                pbVar21 = local_1698;
              }
              if ((int)pbVar23 < (int)pbVar21) {
                pbVar21 = (byte *)0x190;
                if (local_1694 != (byte *)0x0) {
                  pbVar21 = local_1694;
                }
                if ((int)pbVar12 < (int)pbVar21) {
                  uVar3 = 0xbe0;
                  if (local_1698 != (byte *)0x0) {
                    uVar3 = (int)local_1698 << 2;
                  }
                  if (local_1690 != 0) {
                    uVar3 = local_1690;
                  }
                  iVar9 = uVar3 * (int)pbVar12;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0;
                  *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                }
              }
            }
            pbVar23 = pbVar23 + 1;
          } while (local_14 != pbVar23);
        }
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != local_18);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    local_18 = pbVar23;
    if (9 < (int)pbVar23) {
      local_18 = (byte *)0xa;
    }
    local_20 = local_1698;
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = local_24;
    if ((int)pbVar21 <= (int)local_24) {
      pbVar5 = pbVar21;
    }
    pbVar8 = local_30;
    if ((int)pbVar21 <= (int)local_30) {
      pbVar8 = pbVar21;
    }
    pbVar21 = (byte *)0x0;
    if (-1 < (int)local_30) {
      pbVar21 = pbVar8;
    }
    if ((int)pbVar5 < (int)pbVar21) {
      do {
        if (((10 < (int)pbVar23) &&
            (-1 < (int)((uint)local_18 | (uint)pbVar5) && local_135c != (void *)0x0)) &&
           ((local_1698 == (byte *)0x0 || ((int)local_18 < (int)local_1698)))) {
          pbVar8 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar8 = local_1694;
          }
          if ((int)pbVar5 < (int)pbVar8) {
            uVar3 = 0xbe0;
            if (local_1698 != (byte *)0x0) {
              uVar3 = (int)local_1698 << 2;
            }
            if (local_1690 != 0) {
              uVar3 = local_1690;
            }
            iVar9 = uVar3 * (int)pbVar5 + (int)local_18 * 4;
            *(undefined1 *)((int)local_135c + iVar9) = 0;
            *(undefined1 *)((int)local_135c + iVar9 + 1) = 0;
            *(undefined1 *)((int)local_135c + iVar9 + 2) = 0;
            *(undefined1 *)((int)local_135c + iVar9 + 3) = 0xff;
          }
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar21 != pbVar5);
    }
    pbVar23 = (byte *)0x2f8;
    if (local_1698 != (byte *)0x0) {
      pbVar23 = local_1698;
    }
    pbVar21 = local_28 + 9;
    pbVar5 = pbVar21;
    if ((int)pbVar23 <= (int)pbVar21) {
      pbVar5 = pbVar23;
    }
    local_18 = (byte *)0x0;
    local_1c = (byte *)0x0;
    if (-1 < (int)pbVar21) {
      local_1c = pbVar5;
    }
    pbVar21 = (byte *)0x190;
    if (local_1694 != (byte *)0x0) {
      pbVar21 = local_1694;
    }
    pbVar5 = local_24;
    if ((int)pbVar21 <= (int)local_24) {
      pbVar5 = pbVar21;
    }
    pbVar8 = local_34;
    if ((int)pbVar23 <= (int)local_34) {
      pbVar8 = pbVar23;
    }
    local_14 = (byte *)0x0;
    if (-1 < (int)local_34) {
      local_14 = pbVar8;
    }
    if ((int)local_30 < (int)pbVar21) {
      pbVar21 = local_30;
      if ((int)local_30 < 0) goto LAB_10006574;
LAB_10006585:
      local_18 = pbVar21;
      if ((int)pbVar5 < (int)pbVar21) {
LAB_1000667a:
        do {
          pbVar23 = local_1c;
          if ((int)local_1c < (int)local_14) {
            do {
              if (-1 < (int)((uint)pbVar23 | (uint)pbVar5) && local_135c != (void *)0x0) {
                pbVar21 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar21 = local_1698;
                }
                if ((int)pbVar23 < (int)pbVar21) {
                  pbVar21 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar21 = local_1694;
                  }
                  if ((int)pbVar5 < (int)pbVar21) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar5;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9) = 0;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 1) = 0;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 2) = 0;
                    *(undefined1 *)((int)local_135c + (int)pbVar23 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar23 = pbVar23 + 1;
            } while (local_14 != pbVar23);
          }
          pbVar5 = pbVar5 + 1;
        } while (pbVar5 != local_18);
      }
    }
    else {
      if (-1 < (int)local_30) goto LAB_10006585;
LAB_10006574:
      if ((int)pbVar5 < 0) goto LAB_1000667a;
    }
    recovered_10007550((char *)&local_1a9c,0x120,local_132c);
    iVar9 = local_1334;
    if (local_1334 < 1) {
      iVar9 = 6;
    }
    pbVar23 = local_24 + ((int)local_38 - (int)local_40) / 2;
    local_60 = (void *)((uint)local_60 & 0xff000000);
    recovered_10007a10((int)&local_169c,0xe,(int)pbVar23,(char *)&local_1a9c,
                       (int)(local_28 + -10) / iVar9,(uint)pbVar26 & 0xff000000);
    if ((local_134c & 6) == 2) {
      if ((local_1280 & 0x1000) == 0) {
        uVar13 = strlen((char *)&local_1a9c);
        iVar9 = local_1334;
        if (local_1334 < 1) {
          iVar9 = 6;
        }
        local_20 = local_1330;
        if ((int)local_1330 < 1) {
          local_20 = (byte *)0xa;
        }
        if (local_1334 < 2) {
          local_28 = (byte *)0x5;
        }
        else {
          local_28 = (byte *)(local_1334 + -1);
        }
        local_14 = (byte *)0x2f8;
        if (local_1698 != (byte *)0x0) {
          local_14 = local_1698;
        }
        iVar9 = iVar9 * uVar13;
        pbVar26 = (byte *)(iVar9 + 0xe);
        if ((int)local_14 <= iVar9 + 0xe) {
          pbVar26 = local_14;
        }
        local_18 = (byte *)0x0;
        local_1c = (byte *)0x0;
        if (-0xf < iVar9) {
          local_1c = pbVar26;
        }
        local_24 = (byte *)0x190;
        if (local_1694 != (byte *)0x0) {
          local_24 = local_1694;
        }
        pbVar26 = pbVar23 + -1 + (int)local_20;
        pbVar21 = pbVar26;
        if ((int)local_24 <= (int)pbVar26) {
          pbVar21 = local_24;
        }
        pbVar5 = (byte *)0x0;
        if (-1 < (int)pbVar26) {
          pbVar5 = pbVar21;
        }
        pbVar21 = local_28 + iVar9 + 0xe;
        pbVar8 = pbVar21;
        if ((int)local_14 <= (int)pbVar21) {
          pbVar8 = local_14;
        }
        pbVar12 = (byte *)0x0;
        if (-1 < (int)pbVar21) {
          pbVar12 = pbVar8;
        }
        pbVar23 = pbVar23 + 1 + (int)local_20;
        if ((int)pbVar23 < (int)local_24) {
          if ((int)pbVar26 < -2) goto LAB_100067ca;
LAB_100067d9:
          local_18 = pbVar23;
          if ((int)pbVar23 <= (int)pbVar5) goto LAB_100068ab;
        }
        else {
          pbVar23 = local_24;
          if (-3 < (int)pbVar26) goto LAB_100067d9;
LAB_100067ca:
          if (-1 < (int)pbVar5) goto LAB_100068ab;
        }
        do {
          pbVar26 = local_1c;
          if ((int)local_1c < (int)pbVar12) {
            do {
              if (-1 < (int)((uint)pbVar26 | (uint)pbVar5) && local_135c != (void *)0x0) {
                pbVar23 = (byte *)0x2f8;
                if (local_1698 != (byte *)0x0) {
                  pbVar23 = local_1698;
                }
                if ((int)pbVar26 < (int)pbVar23) {
                  pbVar23 = (byte *)0x190;
                  if (local_1694 != (byte *)0x0) {
                    pbVar23 = local_1694;
                  }
                  if ((int)pbVar5 < (int)pbVar23) {
                    uVar3 = 0xbe0;
                    if (local_1698 != (byte *)0x0) {
                      uVar3 = (int)local_1698 << 2;
                    }
                    if (local_1690 != 0) {
                      uVar3 = local_1690;
                    }
                    iVar9 = uVar3 * (int)pbVar5;
                    *(undefined1 *)((int)local_135c + (int)pbVar26 * 4 + iVar9) = 0;
                    *(undefined1 *)((int)local_135c + (int)pbVar26 * 4 + iVar9 + 1) = 0;
                    *(undefined1 *)((int)local_135c + (int)pbVar26 * 4 + iVar9 + 2) = 0;
                    *(undefined1 *)((int)local_135c + (int)pbVar26 * 4 + iVar9 + 3) = 0xff;
                  }
                }
              }
              pbVar26 = pbVar26 + 1;
            } while (pbVar12 != pbVar26);
          }
          pbVar5 = pbVar5 + 1;
          local_14 = pbVar12;
        } while (pbVar5 != local_18);
      }
    }
LAB_100068ab:
    pbVar26 = local_1698;
    terror_ui_window_present(&local_169c,"Cancer",local_135c,(uint)local_1698,(uint)local_1694,local_1690,
                       0x4c91c4);
    local_1280 = local_1280 + 1;
    local_34 = (byte *)0x0;
    pbVar23 = local_64;
    if ((byte)local_2c != '\0') goto LAB_10006907;
  }
  iVar9 = 6;
  if (local_48 != 2) {
    iVar9 = 0x18;
  }
  do {
    iVar20 = Ram00006800;
    if ((((iVar20 == 0x50414d57) && (iVar20 = Ram00006804, iVar20 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       ((uVar3 = Ram00006808, 0x9f < uVar3 &&
        (pcVar2 = (code *)UINT_0000689c, pcVar2 != (code *)0x0)))) {
      (*pcVar2)();
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
LAB_10006907:
  iVar9 = Ram00006800;
  if (((iVar9 == 0x50414d57) && (iVar9 = Ram00006804, iVar9 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      ((uVar3 = Ram00006808, 0x9f < uVar3 && (pcVar2 = (code *)UINT_0000689c, pcVar2 != (code *)0x0)
       ))))) {
    (*pcVar2)();
  }
  if (local_1277 == '\0') {
LAB_10006b6f:
    if (local_169c != 0) {
      terror_ui_window_close(&local_169c);
    }
    if (local_1358 == (byte *)0x0) {
      return 1;
    }
    iVar9 = Ram00006800;
    if (iVar9 != 0x50414d57) {
      return 1;
    }
    iVar9 = Ram00006804;
    if (iVar9 == 0) {
      return 1;
    }
    uVar3 = Ram00006808;
    if (uVar3 < 0xc) {
      return 1;
    }
    uVar3 = Ram00006808;
    if (uVar3 < 0x54) {
      return 1;
    }
    pcVar2 = (code *)UINT_00006850;
    if (pcVar2 == (code *)0x0) {
      return 1;
    }
    (*pcVar2)(local_1358);
    return 1;
  }
  goto LAB_10000c27;
LAB_1000181f:
  *(undefined1 *)((int)&local_1a60 + iVar9 + 3) = 0;
  if ((byte)local_1a9c == 0) {
    iVar9 = 0;
    goto LAB_1000190d;
  }
  bVar17 = (byte)local_1a9c;
  if ((byte)((byte)local_1a9c + 0xbf) < 0x1a) {
    bVar17 = (byte)local_1a9c | 0x20;
  }
  local_1c = (byte *)0x0;
  if (7 < bVar17 - 0x6c) goto override_jmp_10001858_case_4;
                    /* WARNING: Switch is manually overridden */
  switch((uintptr_t)((bVar17 - 0x6c))) {
  case 0:
    if (PF_PART1(local_1a9c, 1) == 0) {
      pbVar21 = (byte *)0x1;
LAB_10001a6a:
      if (pbVar21[((uintptr_t)pf_module_state+0x29fU)] == 0) goto LAB_100017a1;
    }
    else {
      bVar17 = PF_PART1(local_1a9c, 1);
      if ((byte)(PF_PART1(local_1a9c, 1) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 1) | 0x20;
      }
      if (bVar17 != 0x6f) {
        if (bVar17 == 0x69) {
          if (PF_PART1(local_1a9c, 2) == 0) {
            iVar9 = 2;
          }
          else {
            bVar17 = PF_PART1(local_1a9c, 2);
            if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
              bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
            }
            if (bVar17 != 0x73) goto LAB_10001d7c;
            if (PF_PART1(local_1a9c, 3) == 0) {
              iVar9 = 3;
            }
            else {
              bVar17 = PF_PART1(local_1a9c, 3);
              if ((byte)(PF_PART1(local_1a9c, 3) + 0xbf) < 0x1a) {
                bVar17 = PF_PART1(local_1a9c, 3) | 0x20;
              }
              if ((bVar17 != 0x74) || (iVar9 = 4, (byte)local_1a98 != 0)) goto LAB_10001d7c;
            }
          }
          cVar1 = *(char *)(iVar9 + ((uintptr_t)pf_module_state+0x281U));
          goto joined_r0x10001b54;
        }
        goto LAB_10001d7c;
      }
      if (PF_PART1(local_1a9c, 2) == 0) {
        pbVar21 = (byte *)0x2;
LAB_10001ce1:
        if (pbVar21[((uintptr_t)pf_module_state+0x28fU)] == 0) goto LAB_100017a1;
      }
      else {
        bVar17 = PF_PART1(local_1a9c, 2);
        if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
          bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
        }
        if (bVar17 == 0x61) {
          if (PF_PART1(local_1a9c, 3) == 0) {
            pbVar21 = (byte *)0x3;
          }
          else {
            bVar17 = PF_PART1(local_1a9c, 3);
            if ((byte)(PF_PART1(local_1a9c, 3) + 0xbf) < 0x1a) {
              bVar17 = PF_PART1(local_1a9c, 3) | 0x20;
            }
            if ((bVar17 != 100) || (pbVar21 = (byte *)0x4, (byte)local_1a98 != 0))
            goto LAB_10001cee;
          }
          goto LAB_10001ce1;
        }
      }
LAB_10001cee:
      if (PF_PART1(local_1a9c, 2) == 0) {
        pbVar21 = (byte *)0x2;
        goto LAB_10001a6a;
      }
      bVar17 = PF_PART1(local_1a9c, 2);
      if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
      }
      if (bVar17 == 0x61) {
        if (PF_PART1(local_1a9c, 3) == 0) {
          pbVar21 = (byte *)0x3;
        }
        else {
          bVar17 = PF_PART1(local_1a9c, 3);
          if ((byte)(PF_PART1(local_1a9c, 3) + 0xbf) < 0x1a) {
            bVar17 = PF_PART1(local_1a9c, 3) | 0x20;
          }
          if (bVar17 != 100) goto LAB_10001d7c;
          if ((byte)local_1a98 == 0) {
            pbVar21 = (byte *)0x4;
          }
          else {
            bVar17 = (byte)local_1a98;
            if ((byte)((byte)local_1a98 + 0xbf) < 0x1a) {
              bVar17 = (byte)local_1a98 | 0x20;
            }
            if (bVar17 != 0x62) goto LAB_10001d7c;
            if (PF_PART1(local_1a98, 1) == 0) {
              pbVar21 = (byte *)0x5;
            }
            else {
              bVar17 = PF_PART1(local_1a98, 1);
              if ((byte)(PF_PART1(local_1a98, 1) + 0xbf) < 0x1a) {
                bVar17 = PF_PART1(local_1a98, 1) | 0x20;
              }
              if ((bVar17 != 99) || (pbVar21 = (byte *)0x6, PF_PART1(local_1a98, 2) != '\0'))
              goto LAB_10001d7c;
            }
          }
        }
        goto LAB_10001a6a;
      }
    }
LAB_10001d7c:
    local_1c = (byte *)0x0;
    break;
  case 6:
    if (PF_PART1(local_1a9c, 1) == 0) {
      iVar9 = 1;
      goto LAB_1000190d;
    }
    bVar17 = PF_PART1(local_1a9c, 1);
    if ((byte)(PF_PART1(local_1a9c, 1) + 0xbf) < 0x1a) {
      bVar17 = PF_PART1(local_1a9c, 1) | 0x20;
    }
    if (bVar17 != 0x75) {
      if (bVar17 != 0x65) goto LAB_10001d7c;
      if (PF_PART1(local_1a9c, 2) == 0) {
        iVar9 = 2;
      }
      else {
        bVar17 = PF_PART1(local_1a9c, 2);
        if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
          bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
        }
        if ((bVar17 != 0x6d) || (iVar9 = 3, PF_PART1(local_1a9c, 3) != 0)) goto LAB_10001d7c;
      }
      cVar1 = *(char *)(iVar9 + ((uintptr_t)pf_module_state+0x27dU));
      goto joined_r0x10001b54;
    }
    if (PF_PART1(local_1a9c, 2) == 0) {
      pbVar21 = (byte *)0x2;
LAB_10001b85:
      if (pbVar21[((uintptr_t)pf_module_state+0x294U)] == 0) goto LAB_100017a1;
    }
    else {
      bVar17 = PF_PART1(local_1a9c, 2);
      if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
      }
      if ((bVar17 == 0x6e) && (pbVar21 = (byte *)0x3, PF_PART1(local_1a9c, 3) == 0)) goto LAB_10001b85;
    }
    if (PF_PART1(local_1a9c, 2) == 0) {
      iVar9 = 2;
    }
    else {
      bVar17 = PF_PART1(local_1a9c, 2);
      if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
      }
      if (bVar17 != 0x6e) goto LAB_10001d7c;
      if (PF_PART1(local_1a9c, 3) == 0) {
        iVar9 = 3;
      }
      else {
        bVar17 = PF_PART1(local_1a9c, 3);
        if ((byte)(PF_PART1(local_1a9c, 3) + 0xbf) < 0x1a) {
          bVar17 = PF_PART1(local_1a9c, 3) | 0x20;
        }
        if (bVar17 != 0x62) goto LAB_10001d7c;
        if ((byte)local_1a98 == 0) {
          iVar9 = 4;
        }
        else {
          bVar17 = (byte)local_1a98;
          if ((byte)((byte)local_1a98 + 0xbf) < 0x1a) {
            bVar17 = (byte)local_1a98 | 0x20;
          }
          local_1c = (byte *)0x0;
          if ((bVar17 != 99) || (iVar9 = 5, PF_PART1(local_1a98, 1) != 0)) break;
        }
      }
    }
LAB_1000190d:
    local_1c = (byte *)(uint)((&(*(uint8_t *)((uintptr_t)pf_module_state+0x2a6U)))[iVar9] == '\0');
    break;
  case 2:
    if (PF_PART1(local_1a9c, 1) == 0) {
      iVar9 = 1;
    }
    else {
      bVar17 = PF_PART1(local_1a9c, 1);
      if ((byte)(PF_PART1(local_1a9c, 1) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 1) | 0x20;
      }
      if (bVar17 != 0x65) goto LAB_10001d7c;
      if (PF_PART1(local_1a9c, 2) == 0) {
        iVar9 = 2;
      }
      else {
        bVar17 = PF_PART1(local_1a9c, 2);
        if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
          bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
        }
        if ((bVar17 != 0x77) || (iVar9 = 3, PF_PART1(local_1a9c, 3) != 0)) goto LAB_10001d7c;
      }
    }
    cVar1 = *(char *)(iVar9 + ((uintptr_t)pf_module_state+0x286U));
joined_r0x10001b54:
    pbVar21 = (byte *)0x0;
    if (cVar1 != '\0') goto LAB_10001d7c;
    goto LAB_100017a1;
  case 7:
    if (PF_PART1(local_1a9c, 1) == 0) {
      iVar9 = 1;
      goto LAB_10001b4d;
    }
    bVar17 = PF_PART1(local_1a9c, 1);
    if ((byte)(PF_PART1(local_1a9c, 1) + 0xbf) < 0x1a) {
      bVar17 = PF_PART1(local_1a9c, 1) | 0x20;
    }
    if (bVar17 != 0x61) goto LAB_10001d7c;
    if (PF_PART1(local_1a9c, 2) == 0) {
      iVar9 = 2;
      goto LAB_10001b4d;
    }
    bVar17 = PF_PART1(local_1a9c, 2);
    if ((byte)(PF_PART1(local_1a9c, 2) + 0xbf) < 0x1a) {
      bVar17 = PF_PART1(local_1a9c, 2) | 0x20;
    }
    if (bVar17 != 0x76) goto LAB_10001d7c;
    if (PF_PART1(local_1a9c, 3) != 0) {
      bVar17 = PF_PART1(local_1a9c, 3);
      if ((byte)(PF_PART1(local_1a9c, 3) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 3) | 0x20;
      }
      if ((bVar17 == 0x65) && (pbVar21 = (byte *)0x4, (byte)local_1a98 == 0)) goto LAB_10001c32;
LAB_10001c3f:
      if (PF_PART1(local_1a9c, 3) == 0) {
        iVar9 = 3;
LAB_10001b4d:
        cVar1 = *(char *)(iVar9 + ((uintptr_t)pf_module_state+0x298U));
        goto joined_r0x10001b54;
      }
      bVar17 = PF_PART1(local_1a9c, 3);
      if ((byte)(PF_PART1(local_1a9c, 3) + 0xbf) < 0x1a) {
        bVar17 = PF_PART1(local_1a9c, 3) | 0x20;
      }
      if (bVar17 == 0x65) {
        if ((byte)local_1a98 == 0) {
          iVar9 = 4;
        }
        else {
          bVar17 = (byte)local_1a98;
          if ((byte)((byte)local_1a98 + 0xbf) < 0x1a) {
            bVar17 = (byte)local_1a98 | 0x20;
          }
          if (bVar17 != 0x62) goto LAB_10001d7c;
          if (PF_PART1(local_1a98, 1) == 0) {
            iVar9 = 5;
          }
          else {
            bVar17 = PF_PART1(local_1a98, 1);
            if ((byte)(PF_PART1(local_1a98, 1) + 0xbf) < 0x1a) {
              bVar17 = PF_PART1(local_1a98, 1) | 0x20;
            }
            if ((bVar17 != 99) || (iVar9 = 6, PF_PART1(local_1a98, 2) != '\0')) goto LAB_10001d7c;
          }
        }
        goto LAB_10001b4d;
      }
      goto LAB_10001d7c;
    }
    pbVar21 = (byte *)0x3;
LAB_10001c32:
    if (pbVar21[((uintptr_t)pf_module_state+0x28aU)] != 0) goto LAB_10001c3f;
LAB_100017a1:
    local_1c = (byte *)CONCAT31((int3)((uint)pbVar21 >> 8),1);
  }
override_jmp_10001858_case_4:
  recovered_10007550((char *)&local_1a9c,0x100,local_132c);
  if (local_1358 != (byte *)0x0) {
    if (local_1288 < 1000) {
      iVar9 = local_128c + local_1288;
      local_1288 = local_1288 + 1;
    }
    else {
      iVar9 = recovered_10006ca0((int)&local_169c,
                                 (char *)(local_1358 +
                                         (local_128c +
                                         ((uint)((ulonglong)((longlong)local_128c * 0x10624dd3) >>
                                                0x26) - (local_128c >> 0x1f)) * -1000) * 0x100));
      local_128c = local_128c + 1 + ((local_128c + 1) / 1000) * -1000;
      pbVar23 = local_1284 + -iVar9;
      if (pbVar23 == (byte *)0x0 || (int)local_1284 < iVar9) {
        pbVar23 = (byte *)0x0;
      }
      iVar9 = local_1288 + -1 + local_128c;
      local_1284 = pbVar23;
    }
    if ((byte)local_1a9c == 0) {
      uVar3 = 0;
    }
    else {
      uVar10 = 0;
      bVar17 = (byte)local_1a9c;
      do {
        if (bVar17 < 0x21) {
          bVar17 = 0x20;
        }
        uVar3 = uVar10 + 1;
        local_1358[uVar10 + (iVar9 % 1000) * 0x100] = bVar17;
        bVar17 = *(byte *)((int)&local_1a9c + uVar10 + 1);
      } while ((bVar17 != 0) && (uVar10 = uVar3, uVar3 < 0xff));
    }
    local_1358[uVar3 + (iVar9 % 1000) * 0x100] = 0;
  }
  uVar18 = PF_PART3(local_2c, 1);
  bVar17 = (byte)local_2c;
  if (local_132c[0] == 0) {
    pbVar23 = local_24;
    if ((int)local_20 < (int)local_24) goto LAB_10002810;
    if (0 < local_1288) {
      iVar9 = 0;
      iVar20 = 0;
      do {
        if (local_1358 == (byte *)0x0) {
          pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
        }
        else {
          iVar4 = local_128c + iVar9;
          pbVar23 = local_1358 +
                    (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                             (iVar4 >> 0x1f)) * -1000) * 0x100;
        }
        iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
        iVar20 = iVar20 + iVar4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_1288);
      goto LAB_100027ba;
    }
LAB_100027b8:
    iVar20 = 0;
  }
  else {
    if ((byte)local_1c == '\0') {
      pbVar23 = local_132c;
      bVar14 = local_132c[0];
      do {
        pbVar23 = pbVar23 + 1;
        if (bVar14 < 0x21) {
                    /* WARNING: Switch is manually overridden */
          switch((uintptr_t)((uint)bVar14)) {
          case 9: case 10: case 13: case 32:
            goto override_jmp_10001ec9_case_1;
          case 0:
            uVar13 = strlen((char *)local_132c);
            uVar7 = strlen(".png");
            if (uVar13 <= uVar7 - 1) goto LAB_10002370;
            uVar11 = 0;
            goto LAB_1000233b;
          }
        }
        bVar14 = *pbVar23;
      } while( true );
    }
override_jmp_10001ec9_case_1:
    if (local_1274 == 0) {
      pbVar26 = local_132c;
      pf_varargs_10007ce6__4_(local_1264,0x200,"%s",(uint)pbVar26);
      local_1064[0] = 0;
      local_1270 = 0;
      local_126c = 0;
      local_1274 = 1;
      iVar9 = Ram00006800;
      if (((iVar9 == 0x50414d57) && (iVar9 = Ram00006804, iVar9 != 0)) &&
         ((uVar3 = Ram00006808, 0xb < uVar3 &&
          ((uVar3 = Ram00006808, 0x97 < uVar3 &&
           (pcVar2 = (code *)UINT_00006894, pcVar2 != (code *)0x0)))))) {
        local_1268 = (*pcVar2)((void *)&recovered_10007640,&local_169c,"Cancer command");
        if (local_1268 == 0) goto LAB_10002040;
      }
      else {
        local_1268 = 0;
LAB_10002040:
        local_1274 = 0;
        local_1270 = 0;
        if (local_1358 != (byte *)0x0) {
          if (local_1288 < 1000) {
            iVar9 = local_128c + local_1288;
            local_1288 = local_1288 + 1;
          }
          else {
            iVar9 = recovered_10006ca0((int)&local_169c,
                                       (char *)(local_1358 +
                                               (local_128c +
                                               ((uint)((ulonglong)
                                                       ((longlong)local_128c * 0x10624dd3) >> 0x26)
                                               - (local_128c >> 0x1f)) * -1000) * 0x100));
            local_128c = local_128c + 1 + ((local_128c + 1) / 1000) * -1000;
            pbVar23 = local_1284 + -iVar9;
            if (pbVar23 == (byte *)0x0 || (int)local_1284 < iVar9) {
              pbVar23 = (byte *)0x0;
            }
            iVar9 = local_1288 + -1 + local_128c;
            local_1284 = pbVar23;
          }
          iVar20 = (iVar9 % 1000) * 0x100;
          bVar14 = 99;
          iVar9 = -0x26;
          do {
            if (bVar14 < 0x21) {
              bVar14 = 0x20;
            }
            local_1358[iVar9 + 0x26 + iVar20] = bVar14;
            bVar14 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x27dU)))[iVar9];
            iVar9 = iVar9 + 1;
          } while (iVar9 != 0);
          local_1358[iVar20 + 0x26] = 0;
        }
      }
      pbVar23 = local_24;
      if ((int)local_20 < (int)local_24) goto LAB_10002810;
      if (local_1288 < 1) goto LAB_100027b8;
      iVar9 = 0;
      iVar20 = 0;
      do {
        if (local_1358 == (byte *)0x0) {
          pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
        }
        else {
          iVar4 = local_128c + iVar9;
          pbVar23 = local_1358 +
                    (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                             (iVar4 >> 0x1f)) * -1000) * 0x100;
        }
        iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
        iVar20 = iVar20 + iVar4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_1288);
    }
    else {
      if (local_1358 == (byte *)0x0) {
        bVar25 = SBORROW4((int)local_20,(int)local_24);
        iVar9 = (int)local_20 - (int)local_24;
        pbVar23 = local_24;
      }
      else {
        if (local_1288 < 1000) {
          iVar9 = local_128c + local_1288;
          local_1288 = local_1288 + 1;
        }
        else {
          iVar9 = recovered_10006ca0((int)&local_169c,
                                     (char *)(local_1358 +
                                             (local_128c +
                                             ((uint)((ulonglong)((longlong)local_128c * 0x10624dd3)
                                                    >> 0x26) - (local_128c >> 0x1f)) * -1000) *
                                             0x100));
          local_128c = local_128c + 1 + ((local_128c + 1) / 1000) * -1000;
          pbVar23 = local_1284 + -iVar9;
          if (pbVar23 == (byte *)0x0 || (int)local_1284 < iVar9) {
            pbVar23 = (byte *)0x0;
          }
          iVar9 = local_1288 + -1 + local_128c;
          local_1284 = pbVar23;
        }
        iVar20 = (iVar9 % 1000) * 0x100;
        bVar14 = 99;
        iVar9 = -0x20;
        do {
          if (bVar14 < 0x21) {
            bVar14 = 0x20;
          }
          local_1358[iVar9 + 0x20 + iVar20] = bVar14;
          bVar14 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x244U)))[iVar9];
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0);
        bVar25 = SBORROW4((int)local_20,(int)local_24);
        iVar9 = (int)local_20 - (int)local_24;
        local_1358[iVar20 + 0x20] = 0;
        pbVar23 = local_1358;
      }
      if (bVar25 != iVar9 < 0) goto LAB_10002810;
      if (local_1288 < 1) goto LAB_100027b8;
      iVar9 = 0;
      iVar20 = 0;
      do {
        if (local_1358 == (byte *)0x0) {
          pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
        }
        else {
          iVar4 = local_128c + iVar9;
          pbVar23 = local_1358 +
                    (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                             (iVar4 >> 0x1f)) * -1000) * 0x100;
        }
        iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
        iVar20 = iVar20 + iVar4;
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_1288);
    }
  }
LAB_100027ba:
  pbVar21 = (byte *)0x190;
  if (local_1694 != (byte *)0x0) {
    pbVar21 = local_1694;
  }
  pbVar5 = local_1330 + 2;
  pbVar8 = local_1330 + 6;
  if ((int)local_1330 < 1) {
    pbVar5 = (byte *)0xc;
    pbVar8 = (byte *)0x10;
  }
  pbVar23 = pbVar21 + (-0x26 - (int)pbVar5);
  if ((int)(pbVar21 + (-0x26 - (int)pbVar5)) <= (int)pbVar8) {
    pbVar23 = pbVar8;
  }
  pbVar23 = (byte *)((uint)pbVar23 / (uint)pbVar5);
  local_1284 = (byte *)((iVar20 - (int)pbVar23) - (uint)(pbVar23 == (byte *)0x0));
  if ((int)local_1284 < 1) {
    local_1284 = (byte *)0x0;
  }
  bVar17 = (byte)local_2c;
  uVar18 = PF_PART3(local_2c, 1);
LAB_10002810:
  local_132c[0] = 0;
  local_1c = (byte *)CONCAT31((int3)((uint)pbVar23 >> 8),1);
LAB_1000156b:
  pbVar23 = local_18 + 1;
  if (pbVar23 == (byte *)0x18) goto LAB_10002876;
  goto LAB_10001500;
  while (uVar11 = uVar11 + 1, uVar7 != uVar11) {
LAB_1000233b:
    bVar14 = local_132c[uVar11 + (uVar13 - uVar7)];
    if ((byte)(bVar14 + 0xbf) < 0x1a) {
      bVar14 = bVar14 | 0x20;
    }
    bVar16 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2b4U)))[uVar11];
    if ((byte)(bVar16 + 0xbf) < 0x1a) {
      bVar16 = bVar16 | 0x20;
    }
    bVar17 = (byte)local_2c;
    uVar18 = PF_PART3(local_2c, 1);
    if (bVar14 != bVar16) goto LAB_10002370;
  }
LAB_100024c5:
  uVar13 = strlen((char *)local_132c);
  uVar7 = strlen(".ws");
  if (uVar7 - 1 < uVar13) {
    uVar11 = 0;
    do {
      bVar17 = local_132c[uVar11 + (uVar13 - uVar7)];
      if ((byte)(bVar17 + 0xbf) < 0x1a) {
        bVar17 = bVar17 | 0x20;
      }
      bVar14 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2c3U)))[uVar11];
      if ((byte)(bVar14 + 0xbf) < 0x1a) {
        bVar14 = bVar14 | 0x20;
      }
      if (bVar17 != bVar14) goto LAB_1000252b;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
    uVar3 = 0x80000002;
  }
  else {
LAB_1000252b:
    uVar13 = strlen((char *)local_132c);
    uVar7 = strlen(".lua");
    if (uVar7 - 1 < uVar13) {
      uVar11 = 0;
      do {
        bVar17 = local_132c[uVar11 + (uVar13 - uVar7)];
        if ((byte)(bVar17 + 0xbf) < 0x1a) {
          bVar17 = bVar17 | 0x20;
        }
        bVar14 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2c7U)))[uVar11];
        if ((byte)(bVar14 + 0xbf) < 0x1a) {
          bVar14 = bVar14 | 0x20;
        }
        if (bVar17 != bVar14) goto LAB_1000258e;
        uVar11 = uVar11 + 1;
      } while (uVar7 != uVar11);
      uVar3 = 0x80000003;
    }
    else {
LAB_1000258e:
      uVar13 = strlen((char *)local_132c);
      uVar7 = strlen(".rb");
      uVar3 = 0x80000001;
      if (uVar7 - 1 < uVar13) {
        uVar11 = 0;
        do {
          bVar17 = local_132c[uVar11 + (uVar13 - uVar7)];
          if ((byte)(bVar17 + 0xbf) < 0x1a) {
            bVar17 = bVar17 | 0x20;
          }
          bVar14 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2ccU)))[uVar11];
          if ((byte)(bVar14 + 0xbf) < 0x1a) {
            bVar14 = bVar14 | 0x20;
          }
          if (bVar17 != bVar14) goto LAB_100025f5;
          uVar11 = uVar11 + 1;
        } while (uVar7 != uVar11);
        uVar3 = 0x80000004;
      }
    }
  }
LAB_100025f5:
  iVar9 = Ram00006800;
  if ((((((iVar9 == 0x50414d57) && (iVar9 = Ram00006804, iVar9 != 0)) &&
        (uVar10 = Ram00006808, 0xb < uVar10)) &&
       ((uVar10 = Ram00006808, 0x93 < uVar10 &&
        (pcVar2 = (code *)UINT_00006890, pcVar2 != (code *)0x0)))) &&
      (uVar3 = (*pcVar2)((char *)local_132c,uVar3), uVar3 != 0)) || (local_1358 == (byte *)0x0)) {
    bVar25 = SBORROW4((int)local_20,(int)local_24);
    iVar9 = (int)local_20 - (int)local_24;
    pbVar23 = local_24;
  }
  else {
    if (local_1288 < 1000) {
      iVar9 = local_128c + local_1288;
      local_1288 = local_1288 + 1;
    }
    else {
      iVar9 = recovered_10006ca0((int)&local_169c,
                                 (char *)(local_1358 +
                                         (local_128c +
                                         ((uint)((ulonglong)((longlong)local_128c * 0x10624dd3) >>
                                                0x26) - (local_128c >> 0x1f)) * -1000) * 0x100));
      local_128c = local_128c + 1 + ((local_128c + 1) / 1000) * -1000;
      pbVar23 = local_1284 + -iVar9;
      if (pbVar23 == (byte *)0x0 || (int)local_1284 < iVar9) {
        pbVar23 = (byte *)0x0;
      }
      iVar9 = local_1288 + -1 + local_128c;
      local_1284 = pbVar23;
    }
    iVar20 = (iVar9 + ((uint)((ulonglong)((longlong)iVar9 * 0x10624dd3) >> 0x26) - (iVar9 >> 0x1f))
                      * -1000) * 0x100;
    bVar25 = SBORROW4((int)local_20,(int)local_24);
    iVar9 = (int)local_20 - (int)local_24;
    local_1358[iVar20] = 0x45;
    local_1358[iVar20 + 1] = 0x52;
    local_1358[iVar20 + 2] = 0x52;
    local_1358[iVar20 + 3] = 0x4f;
    local_1358[iVar20 + 4] = 0x52;
    local_1358[iVar20 + 5] = 0;
    pbVar23 = local_1358;
  }
  bVar17 = (byte)local_2c;
  uVar18 = PF_PART3(local_2c, 1);
  if (bVar25 != iVar9 < 0) goto LAB_10002810;
  if (local_1288 < 1) goto LAB_100027b8;
  iVar9 = 0;
  iVar20 = 0;
  do {
    if (local_1358 == (byte *)0x0) {
      pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
    }
    else {
      iVar4 = local_128c + iVar9;
      pbVar23 = local_1358 +
                (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                         (iVar4 >> 0x1f)) * -1000) * 0x100;
    }
    iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
    iVar20 = iVar20 + iVar4;
    iVar9 = iVar9 + 1;
  } while (iVar9 < local_1288);
  goto LAB_100027ba;
LAB_10002370:
  uVar13 = strlen((char *)local_132c);
  uVar7 = strlen(".app");
  if (uVar7 - 1 < uVar13) {
    uVar11 = 0;
    do {
      bVar14 = local_132c[uVar11 + (uVar13 - uVar7)];
      if ((byte)(bVar14 + 0xbf) < 0x1a) {
        bVar14 = bVar14 | 0x20;
      }
      bVar16 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2b9U)))[uVar11];
      if ((byte)(bVar16 + 0xbf) < 0x1a) {
        bVar16 = bVar16 | 0x20;
      }
      bVar17 = (byte)local_2c;
      uVar18 = PF_PART3(local_2c, 1);
      if (bVar14 != bVar16) goto LAB_100023d4;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
    goto LAB_100024c5;
  }
LAB_100023d4:
  uVar13 = strlen((char *)local_132c);
  uVar7 = strlen(".bin");
  if (uVar7 - 1 < uVar13) {
    uVar11 = 0;
    do {
      bVar14 = local_132c[uVar11 + (uVar13 - uVar7)];
      if ((byte)(bVar14 + 0xbf) < 0x1a) {
        bVar14 = bVar14 | 0x20;
      }
      bVar16 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2beU)))[uVar11];
      if ((byte)(bVar16 + 0xbf) < 0x1a) {
        bVar16 = bVar16 | 0x20;
      }
      bVar17 = (byte)local_2c;
      uVar18 = PF_PART3(local_2c, 1);
      if (bVar14 != bVar16) goto LAB_10002438;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
    goto LAB_100024c5;
  }
LAB_10002438:
  uVar13 = strlen((char *)local_132c);
  uVar7 = strlen(".ws");
  if (uVar7 - 1 < uVar13) {
    uVar11 = 0;
    do {
      bVar14 = local_132c[uVar11 + (uVar13 - uVar7)];
      if ((byte)(bVar14 + 0xbf) < 0x1a) {
        bVar14 = bVar14 | 0x20;
      }
      bVar16 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x2c3U)))[uVar11];
      if ((byte)(bVar16 + 0xbf) < 0x1a) {
        bVar16 = bVar16 | 0x20;
      }
      bVar17 = (byte)local_2c;
      uVar18 = PF_PART3(local_2c, 1);
      if (bVar14 != bVar16) goto LAB_10002499;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
    goto LAB_100024c5;
  }
LAB_10002499:
  uVar6 = recovered_100076e0((char *)local_132c,".lua");
  if (((char)uVar6 != '\0') ||
     (uVar6 = recovered_100076e0((char *)local_132c,".rb"), (char)uVar6 != '\0')) goto LAB_100024c5;
  goto override_jmp_10001ec9_case_1;
LAB_10002876:
  bVar17 = bVar17 | (byte)local_14 | (byte)local_1c;
LAB_1000287e:
  pbVar23 = local_1348;
  local_2c = CONCAT31(uVar18,bVar17) & 0xffffff01;
  pbVar21 = (byte *)((uint)local_1340 & 1);
  if (pbVar21 == (byte *)0x0) {
    local_133b = 0;
  }
  else {
    local_14 = local_1344;
    local_18 = pbVar21;
    if ((char)local_133b == '\0') {
      if ((int)local_1330 < 1) {
        pbVar21 = (byte *)0xc;
      }
      else {
        pbVar21 = local_1330 + 2;
      }
      pbVar5 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar5 = local_1694;
      }
      pbVar8 = pbVar5 + (-0x26 - (int)pbVar21);
      if ((int)local_1330 < 1) {
        pbVar12 = (byte *)0x10;
        bVar25 = SBORROW4((int)pbVar8,0x10);
        pbVar5 = pbVar5 + (-0x36 - (int)pbVar21);
      }
      else {
        pbVar12 = local_1330 + 6;
        bVar25 = SBORROW4((int)pbVar8,(int)pbVar12);
        pbVar5 = pbVar8 + -(int)pbVar12;
      }
      if (bVar25 != (int)pbVar5 < 0) {
        pbVar8 = pbVar12;
      }
      local_30 = (byte *)0x1c;
      if ((byte *)0x33 < pbVar8) {
        local_30 = pbVar8 + -0x18;
      }
      recovered_10007760(&local_60,(int)&local_169c);
      local_1c = local_1330 + 2;
      pbVar21 = local_1c;
      if ((int)local_1330 < 1) {
        pbVar21 = (byte *)0xc;
      }
      pbVar5 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar5 = local_1694;
      }
      pbVar8 = pbVar5 + (-0x26 - (int)pbVar21);
      local_20 = local_1284;
      if ((int)local_1330 < 1) {
        pbVar12 = (byte *)0x10;
        bVar25 = SBORROW4((int)pbVar8,0x10);
        pbVar22 = pbVar5 + (-0x36 - (int)pbVar21);
      }
      else {
        pbVar12 = local_1330 + 6;
        bVar25 = SBORROW4((int)pbVar8,(int)pbVar12);
        pbVar22 = pbVar8 + -(int)pbVar12;
      }
      pbVar24 = pbVar8;
      if (bVar25 != (int)pbVar22 < 0) {
        pbVar24 = pbVar12;
      }
      local_24 = pbVar23;
      pbVar12 = pbVar23 + -10;
      if (((pbVar12 < (byte *)0xc) && ((int)(pbVar24 + -0x14) <= (int)local_14)) &&
         ((int)local_14 < (int)(pbVar24 + -6))) {
        local_1284 = local_1284 + -1;
        local_24 = local_1284;
        if (local_1288 < 1) {
          iVar9 = 0;
        }
        else {
          iVar20 = 0;
          iVar9 = 0;
          do {
            if (local_1358 == (byte *)0x0) {
              pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
            }
            else {
              iVar4 = local_128c + iVar20;
              pbVar23 = local_1358 +
                        (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                                 (iVar4 >> 0x1f)) * -1000) * 0x100;
            }
            iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
            iVar9 = iVar9 + iVar4;
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_1288);
          local_1c = local_1330 + 2;
        }
        bVar17 = (byte)local_2c;
        pbVar23 = (byte *)0x190;
        if (local_1694 != (byte *)0x0) {
          pbVar23 = local_1694;
        }
        pbVar21 = local_1330 + 6;
        if ((int)local_1330 < 1) {
          local_1c = (byte *)0xc;
          pbVar21 = (byte *)0x10;
        }
        pbVar5 = pbVar23 + (-0x26 - (int)local_1c);
        if ((int)(pbVar23 + (-0x26 - (int)local_1c)) <= (int)pbVar21) {
          pbVar5 = pbVar21;
        }
        pbVar23 = (byte *)((iVar9 - (uint)pbVar5 / (uint)local_1c) -
                          (uint)((uint)pbVar5 / (uint)local_1c == 0));
        if ((int)pbVar23 < 1) {
          pbVar23 = (byte *)0x0;
        }
        local_1284 = local_24;
        if ((int)pbVar23 <= (int)local_24) {
          local_1284 = pbVar23;
        }
        if ((int)local_20 < 1) {
          local_1284 = (byte *)0x0;
        }
      }
      else {
        if ((int)local_1330 < 1) {
          pbVar22 = (byte *)0x10;
          bVar25 = SBORROW4((int)pbVar8,0x10);
          pbVar5 = pbVar5 + (-0x36 - (int)pbVar21);
        }
        else {
          pbVar22 = local_1330 + 6;
          bVar25 = SBORROW4((int)pbVar8,(int)pbVar22);
          pbVar5 = pbVar8 + -(int)pbVar22;
        }
        pbVar21 = pbVar8;
        if (bVar25 != (int)pbVar5 < 0) {
          pbVar21 = pbVar22;
        }
        if (((pbVar12 < (byte *)0xc) && ((int)(pbVar21 + -4) <= (int)local_14)) &&
           (local_14 < pbVar21 + 10)) {
          local_1284 = local_1284 + 1;
          local_24 = local_1284;
          if (local_1288 < 1) {
            iVar9 = 0;
          }
          else {
            iVar20 = 0;
            iVar9 = 0;
            do {
              if (local_1358 == (byte *)0x0) {
                pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
              }
              else {
                iVar4 = local_128c + iVar20;
                pbVar23 = local_1358 +
                          (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                                   (iVar4 >> 0x1f)) * -1000) * 0x100;
              }
              iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
              iVar9 = iVar9 + iVar4;
              iVar20 = iVar20 + 1;
            } while (iVar20 < local_1288);
            local_1c = local_1330 + 2;
          }
          bVar17 = (byte)local_2c;
          pbVar23 = (byte *)0x190;
          if (local_1694 != (byte *)0x0) {
            pbVar23 = local_1694;
          }
          pbVar21 = local_1330 + 6;
          if ((int)local_1330 < 1) {
            local_1c = (byte *)0xc;
            pbVar21 = (byte *)0x10;
          }
          pbVar5 = pbVar23 + (-0x26 - (int)local_1c);
          if ((int)(pbVar23 + (-0x26 - (int)local_1c)) <= (int)pbVar21) {
            pbVar5 = pbVar21;
          }
          pbVar23 = (byte *)((iVar9 - (uint)pbVar5 / (uint)local_1c) -
                            (uint)((uint)pbVar5 / (uint)local_1c == 0));
          if ((int)pbVar23 < 1) {
            pbVar23 = (byte *)0x0;
          }
          pbVar21 = local_24;
          if ((int)pbVar23 <= (int)local_24) {
            pbVar21 = pbVar23;
          }
          local_1284 = (byte *)0x0;
          if (-2 < (int)local_20) {
            local_1284 = pbVar21;
          }
        }
        else {
          if ((((byte *)0xb < pbVar12) || ((int)local_14 < 10)) || ((int)local_30 <= (int)local_14))
          goto LAB_10002c7c;
          if (((((int)pbVar23 < (int)local_60) || ((int)local_14 < local_5c)) ||
              ((int)local_60 + local_58 <= (int)pbVar23)) || (local_5c + local_54 <= (int)local_14))
          {
            if ((int)local_1330 < 1) {
              pbVar23 = (byte *)0x10;
              if ((int)pbVar8 < 0x10) goto LAB_10002b0f;
            }
            else {
              pbVar23 = local_1330 + 6;
              if ((int)pbVar8 < (int)pbVar23) {
LAB_10002b0f:
                pbVar8 = pbVar23;
              }
            }
            local_1c = (byte *)0x12;
            if ((byte *)0x33 < pbVar8) {
              local_1c = pbVar8 + -0x22;
            }
            recovered_10007760(&local_1a9c,(int)&local_169c);
            if (local_1288 < 1) {
              local_3c = (byte *)0x0;
              iVar9 = 0;
            }
            else {
              iVar20 = 0;
              iVar9 = 0;
              do {
                if (local_1358 == (byte *)0x0) {
                  pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                }
                else {
                  iVar4 = local_128c + iVar20;
                  pbVar23 = local_1358 +
                            (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                                     (iVar4 >> 0x1f)) * -1000) * 0x100;
                }
                iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                iVar9 = iVar9 + iVar4;
                iVar20 = iVar20 + 1;
              } while (iVar20 < local_1288);
              local_3c = (byte *)CONCAT31((int3)((uint)local_1288 >> 8),0 < local_1288);
            }
            pbVar23 = (byte *)0x190;
            if (local_1694 != (byte *)0x0) {
              pbVar23 = local_1694;
            }
            local_24 = local_1330 + 2;
            pbVar21 = local_1330 + 6;
            pbVar8 = pbVar21;
            pbVar5 = local_24;
            if ((int)local_1330 < 1) {
              pbVar5 = (byte *)0xc;
              pbVar8 = (byte *)0x10;
            }
            local_38 = local_1694;
            pbVar12 = pbVar23 + (-0x26 - (int)pbVar5);
            if ((int)(pbVar23 + (-0x26 - (int)pbVar5)) <= (int)pbVar8) {
              pbVar12 = pbVar8;
            }
            iVar20 = (uint)pbVar12 / (uint)pbVar5 + (uint)((uint)pbVar12 / (uint)pbVar5 == 0);
            iVar4 = iVar9 - iVar20;
            local_1284 = (byte *)0x0;
            local_30 = pbVar21;
            if ((iVar4 != 0 && iVar20 <= iVar9) && (0 < (int)local_1c - local_1a90)) {
              local_1284 = (byte *)(((int)(local_14 + (-10 - local_1a90 / 2)) * iVar4) /
                                   ((int)local_1c - local_1a90));
              iVar9 = 0;
              pbVar23 = local_1284;
              if ((char)local_3c != '\0') {
                iVar20 = 0;
                iVar9 = 0;
                local_1c = local_1284;
                do {
                  if (local_1358 == (byte *)0x0) {
                    pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
                  }
                  else {
                    iVar4 = local_128c + iVar20;
                    pbVar23 = local_1358 +
                              (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                                       (iVar4 >> 0x1f)) * -1000) * 0x100;
                  }
                  iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
                  iVar9 = iVar9 + iVar4;
                  iVar20 = iVar20 + 1;
                } while (iVar20 < local_1288);
                local_24 = local_1330 + 2;
                pbVar21 = local_1330 + 6;
                pbVar23 = local_1c;
              }
              pbVar5 = (byte *)0x16a;
              if (local_1694 != (byte *)0x0) {
                pbVar5 = local_1694 + -0x26;
              }
              pbVar8 = local_24;
              if ((int)local_1330 < 1) {
                pbVar8 = (byte *)0xc;
                pbVar21 = (byte *)0x10;
              }
              pbVar12 = pbVar5 + -(int)pbVar8;
              if ((int)(pbVar5 + -(int)pbVar8) <= (int)pbVar21) {
                pbVar12 = pbVar21;
              }
              pbVar21 = (byte *)((iVar9 - (uint)pbVar12 / (uint)pbVar8) -
                                (uint)((uint)pbVar12 / (uint)pbVar8 == 0));
              if ((int)pbVar21 < 1) {
                pbVar21 = (byte *)0x0;
              }
              pbVar5 = pbVar23;
              if ((int)pbVar21 <= (int)pbVar23) {
                pbVar5 = pbVar21;
              }
              local_1284 = (byte *)0x0;
              if (-1 < (int)pbVar23) {
                local_1284 = pbVar5;
              }
            }
          }
          recovered_10007760(&local_1a9c,(int)&local_169c);
          local_133b = CONCAT11(1,(char)local_133b);
          local_1338 = (int)local_14 - (int)local_1a98;
          bVar17 = (byte)local_2c;
        }
      }
      local_2c = CONCAT31((int3)((uint)local_1284 >> 8),local_1284 != local_20 | bVar17) &
                 0xffffff01;
    }
LAB_10002c7c:
    pbVar21 = local_18;
    if (PF_PART1(local_133b, 1) == '\x01') {
      if ((int)local_1330 < 1) {
        pbVar23 = (byte *)0xc;
      }
      else {
        pbVar23 = local_1330 + 2;
      }
      pbVar21 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar21 = local_1694;
      }
      pbVar5 = pbVar21 + (-0x26 - (int)pbVar23);
      if ((int)local_1330 < 1) {
        pbVar8 = (byte *)0x10;
        bVar25 = SBORROW4((int)pbVar5,0x10);
        pbVar21 = pbVar21 + (-0x36 - (int)pbVar23);
      }
      else {
        pbVar8 = local_1330 + 6;
        bVar25 = SBORROW4((int)pbVar5,(int)pbVar8);
        pbVar21 = pbVar5 + -(int)pbVar8;
      }
      if (bVar25 != (int)pbVar21 < 0) {
        pbVar5 = pbVar8;
      }
      local_1c = (byte *)0x12;
      if ((byte *)0x33 < pbVar5) {
        local_1c = pbVar5 + -0x22;
      }
      recovered_10007760(&local_1a9c,(int)&local_169c);
      if (local_1288 < 1) {
        local_24 = (byte *)0x0;
        iVar9 = 0;
      }
      else {
        iVar20 = 0;
        iVar9 = 0;
        do {
          if (local_1358 == (byte *)0x0) {
            pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
          }
          else {
            iVar4 = local_128c + iVar20;
            pbVar23 = local_1358 +
                      (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                               (iVar4 >> 0x1f)) * -1000) * 0x100;
          }
          iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
          iVar9 = iVar9 + iVar4;
          iVar20 = iVar20 + 1;
        } while (iVar20 < local_1288);
        local_24 = (byte *)CONCAT31((int3)((uint)local_1288 >> 8),0 < local_1288);
      }
      pbVar23 = (byte *)0x190;
      if (local_1694 != (byte *)0x0) {
        pbVar23 = local_1694;
      }
      pbVar21 = local_1330 + 2;
      pbVar5 = local_1330 + 6;
      pbVar8 = pbVar21;
      if ((int)local_1330 < 1) {
        pbVar8 = (byte *)0xc;
        pbVar5 = (byte *)0x10;
      }
      pbVar12 = pbVar23 + (-0x26 - (int)pbVar8);
      if ((int)(pbVar23 + (-0x26 - (int)pbVar8)) <= (int)pbVar5) {
        pbVar12 = pbVar5;
      }
      iVar9 = (iVar9 - (uint)pbVar12 / (uint)pbVar8) - (uint)((uint)pbVar12 / (uint)pbVar8 == 0);
      local_20 = pbVar21;
      if (((PF_PART1(local_133b, 1) == '\x01') && (0 < iVar9)) &&
         (iVar20 = (int)local_1c - local_1a90, 0 < iVar20)) {
        local_1c = local_1284;
        local_1284 = (byte *)(((int)(local_14 + (-10 - local_1338)) * iVar9) / iVar20);
        iVar9 = 0;
        local_14 = local_1284;
        if ((char)local_24 != '\0') {
          iVar20 = 0;
          iVar9 = 0;
          do {
            if (local_1358 == (byte *)0x0) {
              pbVar23 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
            }
            else {
              iVar4 = local_128c + iVar20;
              pbVar23 = local_1358 +
                        (iVar4 + ((uint)((ulonglong)((longlong)iVar4 * 0x10624dd3) >> 0x26) -
                                 (iVar4 >> 0x1f)) * -1000) * 0x100;
            }
            iVar4 = recovered_10006ca0((int)&local_169c,(char *)pbVar23);
            iVar9 = iVar9 + iVar4;
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_1288);
          pbVar21 = local_1330 + 2;
        }
        pbVar23 = pbVar21;
        if ((int)local_1330 < 1) {
          pbVar23 = (byte *)0xc;
        }
        pbVar5 = (byte *)0x190;
        if (local_1694 != (byte *)0x0) {
          pbVar5 = local_1694;
        }
        pbVar5 = pbVar5 + (-0x26 - (int)pbVar23);
        if ((int)local_1330 < 1) {
          if ((int)pbVar5 < 0x11) {
            pbVar5 = (byte *)0x10;
          }
          pbVar21 = (byte *)0xc;
        }
        else if ((int)pbVar5 <= (int)(local_1330 + 6)) {
          pbVar5 = local_1330 + 6;
        }
        pbVar23 = (byte *)((iVar9 - (uint)pbVar5 / (uint)pbVar21) -
                          (uint)((uint)pbVar5 / (uint)pbVar21 == 0));
        if ((int)pbVar23 < 1) {
          pbVar23 = (byte *)0x0;
        }
        pbVar21 = local_14;
        if ((int)pbVar23 <= (int)local_14) {
          pbVar21 = pbVar23;
        }
        local_1284 = (byte *)0x0;
        if (-1 < (int)local_14) {
          local_1284 = pbVar21;
        }
        uVar3 = CONCAT31((int3)((uint)pbVar21 >> 8),1);
        if (local_1284 == local_1c) {
          uVar3 = local_2c;
        }
        local_2c = uVar3;
      }
      pbVar21 = local_18;
    }
  }
  local_133b = CONCAT11(PF_PART1(local_133b, 1),(char)pbVar21);
  goto LAB_10002eea;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006950
#undef DAT_01807eef
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram00006950
#undef UINT_00006828
#undef UINT_0000682c
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006890
#undef UINT_00006894
#undef UINT_0000689c
#undef UINT_00006978
#undef UNK_01807da0
#undef UNK_01807e24
#undef UNK_01807e44
#undef UNK_01807ec8
#undef UNK_01807f23
#undef UNK_01807f5c
#undef UNK_01807f85
#undef UNK_01807f93
#undef UNK_01807f98
#undef UNK_01807f9d
#undef UNK_01807fa2
#undef UNK_01807fa6
#undef UNK_01807fab
#undef local_50
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
#undef local_1a9c
#undef local_1a98
#undef local_1a94
#undef local_1a90
#undef local_1a8c
#undef local_1a88
#undef local_1a84
#undef local_1a74
#undef local_1a70
#undef local_1a6c
#undef local_1a68
#undef local_1a64
#undef local_1a60
#undef local_169c
#undef local_1698
#undef local_1694
#undef local_1690
#undef local_1670
#undef local_135c
#undef local_1358
#undef local_1354
#undef local_1350
#undef local_134c
#undef local_1348
#undef local_1344
#undef local_1340
#undef local_133c
#undef local_133b
#undef local_1338
#undef local_1334
#undef local_1330
#undef local_132c
#undef local_128c
#undef local_1288
#undef local_1284
#undef local_1280
#undef local_127c
#undef local_1278
#undef local_1277
#undef auStackY_1b40
#undef local_1274
#undef local_1270
#undef local_126c
#undef local_1268
#undef local_1264
#undef local_1064
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ca0
 */

int recovered_10006ca0(int in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  char *text;
  int iVar8;

  if (in_ECX == 0) {
    uVar3 = 0x77;
  }
  else {
    iVar2 = 0x2d2;
    if (*(int *)(in_ECX + 4) != 0) {
      iVar2 = *(int *)(in_ECX + 4) + -0x26;
    }
    iVar7 = *(int *)(in_ECX + 0x368);
    iVar8 = iVar7 + 8;
    if (iVar7 < 1) {
      iVar8 = 0xe;
      iVar7 = 6;
    }
    if (iVar2 <= iVar8) {
      iVar2 = iVar8;
    }
    uVar3 = (iVar2 + -8) / iVar7;
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
  }
  if ((in_EDX == (char *)0x0) || (*in_EDX == '\0')) {
    return 1;
  }
  iVar2 = 0;
  iVar8 = 0;
  text = in_EDX;
  do {
    uVar4 = strlen(text);
    if ((int)uVar3 < (int)uVar4) {
      uVar4 = 0xffffffff;
      uVar6 = 0;
      do {
        cVar1 = text[uVar6];
        if (cVar1 == '\0') break;
        uVar5 = uVar6;
        if (cVar1 != '\t') {
          uVar5 = uVar4;
        }
        uVar4 = uVar6;
        if (cVar1 != ' ') {
          uVar4 = uVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
      if ((int)uVar4 < 1) {
        uVar4 = uVar3;
      }
    }
    if ((int)uVar4 < 1) {
LAB_10006d9f:
      if (iVar2 < 2) {
        return 1;
      }
      return iVar2;
    }
    for (iVar8 = iVar8 + uVar4; (cVar1 = in_EDX[iVar8], cVar1 == ' ' || (cVar1 == '\t'));
        iVar8 = iVar8 + 1) {
    }
    iVar2 = iVar2 + 1;
    if ((iVar8 < 0) || (text = in_EDX + iVar8, cVar1 == '\0')) goto LAB_10006d9f;
  } while( true );
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006df0
 */

undefined4 recovered_10006df0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  ulong textSize;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;

  if (in_ECX == 0) {
    return 0;
  }
  iVar2 = *(int *)(in_ECX + 0x36c);
  if (iVar2 < 1) {
    iVar6 = 0xc;
  }
  else {
    iVar6 = iVar2 + 2;
  }
  iVar5 = 0x2d2;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar5 = *(int *)(in_ECX + 4) + -0x26;
  }
  iVar7 = 400;
  if (*(int *)(in_ECX + 8) != 0) {
    iVar7 = *(int *)(in_ECX + 8);
  }
  if (*(int *)(in_ECX + 0x368) < 1) {
    iVar9 = 0xe;
  }
  else {
    iVar9 = *(int *)(in_ECX + 0x368) + 8;
  }
  if (iVar5 <= iVar9) {
    iVar5 = iVar9;
  }
  iVar7 = (iVar7 - iVar6) + -0x26;
  if (iVar2 < 1) {
    iVar2 = 0x10;
    if (0xf < iVar7) goto LAB_10006e72;
  }
  else {
    iVar2 = iVar2 + 6;
    if (iVar2 <= iVar7) goto LAB_10006e72;
  }
  iVar7 = iVar2;
LAB_10006e72:
  if ((((0x1b < *(int *)(in_ECX + 0x354)) && (uVar3 = *(uint *)(in_ECX + 0x358), 9 < (int)uVar3)) &&
      (*(int *)(in_ECX + 0x354) < iVar5 + 0x1c)) &&
     ((uVar3 < iVar7 + 10U && (0 < *(int *)(in_ECX + 0x414))))) {
    iVar5 = 0;
    iVar2 = (int)(uVar3 - 0xc) / iVar6 + *(int *)(in_ECX + 0x418);
    do {
      if (*(int *)(in_ECX + 0x344) == 0) {
        pcVar8 = "";
      }
      else {
        iVar6 = *(int *)(in_ECX + 0x410) + iVar5;
        pcVar8 = (char *)(*(int *)(in_ECX + 0x344) +
                         (iVar6 + ((uint)((ulonglong)((longlong)iVar6 * 0x10624dd3) >> 0x26) -
                                  (iVar6 >> 0x1f)) * -1000) * 0x100);
      }
      iVar6 = recovered_10006ca0(in_ECX,pcVar8);
      if (iVar2 < iVar6) {
        pcVar8 = "";
        if ((*(int *)(in_ECX + 0x344) != 0) && (iVar5 < *(int *)(in_ECX + 0x414))) {
          iVar5 = iVar5 + *(int *)(in_ECX + 0x410);
          pcVar8 = (char *)(*(int *)(in_ECX + 0x344) +
                           (iVar5 + ((uint)((ulonglong)((longlong)iVar5 * 0x10624dd3) >> 0x26) -
                                    (iVar5 >> 0x1f)) * -1000) * 0x100);
        }
        goto LAB_10006f28;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 - iVar6;
    } while (iVar5 < *(int *)(in_ECX + 0x414));
  }
  pcVar8 = (char *)(in_ECX + 0x370);
LAB_10006f28:
  if ((*pcVar8 == '\0') && (0 < *(int *)(in_ECX + 0x414))) {
    if (*(int *)(in_ECX + 0x344) == 0) {
      pcVar8 = "";
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x414) + -1 + *(int *)(in_ECX + 0x410);
      pcVar8 = (char *)(*(int *)(in_ECX + 0x344) +
                       (iVar2 + ((uint)((ulonglong)((longlong)iVar2 * 0x10624dd3) >> 0x26) -
                                (iVar2 >> 0x1f)) * -1000) * 0x100);
    }
  }
  textSize = strlen(pcVar8);
  iVar2 = Ram00006800;
  if (((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
       (uVar3 = Ram00006808, 0xb < uVar3)) &&
      ((uVar3 = Ram00006808, 0x183 < uVar3 &&
       (pcVar1 = (code *)UINT_00006980, pcVar1 != (code *)0x0)))) &&
     (uVar3 = (*pcVar1)(pcVar8,textSize), uVar3 != 0)) {
    *(undefined1 *)(in_ECX + 0x424) = 1;
    uVar4 = CONCAT31((int3)((uint)in_ECX >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006980

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006984
#define UINT_00006984 (*(uint *)(0x6984U))
#undef UINT_00006988
#define UINT_00006988 (*(uint *)(0x6988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007050
 */

undefined4 recovered_10007050(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  byte bVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  char *outText;
  uint uVar7;
  byte bVar8;
  bool bVar9;

  iVar2 = Ram00006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
      (uVar5 = Ram00006808, 0xb < uVar5)) &&
     (((uVar5 = Ram00006808, 0x18b < uVar5 &&
       (pcVar3 = (code *)UINT_00006988, pcVar3 != (code *)0x0)) &&
      (uVar5 = (*pcVar3)(), uVar5 != 0 && in_ECX != 0)))) {
    text = (char *)(in_ECX + 0x370);
    uVar6 = strlen(text);
    if (uVar6 < 0x9f) {
      if (0x9f - uVar6 <= uVar5) {
        uVar5 = 0x9f - uVar6;
      }
      iVar2 = Ram00006800;
      if (((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
         ((uVar7 = Ram00006808, 0xb < uVar7 &&
          ((uVar7 = Ram00006808, 0x4f < uVar7 &&
           (pcVar3 = (code *)UINT_0000684c, pcVar3 != (code *)0x0)))))) {
        outText = (*pcVar3)(uVar5 + 1);
        if (outText != (char *)0x0) {
          iVar2 = Ram00006800;
          if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
              (uVar7 = Ram00006808, 0xb < uVar7)) && (uVar7 = Ram00006808, 0x187 < uVar7)) {
            pcVar3 = (code *)UINT_00006984;
            if ((pcVar3 == (code *)0x0) || (uVar5 = (*pcVar3)(outText,uVar5 + 1), uVar5 == 0)) {
              bVar9 = false;
            }
            else {
              uVar7 = 1;
              bVar9 = false;
              do {
                bVar1 = outText[uVar7 - 1];
                bVar4 = 0x20;
                if ((bVar1 & 0xfb) != 9) {
                  bVar4 = bVar1;
                }
                bVar8 = 0x20;
                if (bVar1 != 10) {
                  bVar8 = bVar4;
                }
                if ((byte)(bVar8 - 0x20) < 0x5f) {
                  text[uVar6] = bVar8;
                  uVar6 = uVar6 + 1;
                  bVar9 = true;
                }
              } while ((uVar7 < uVar5) && (uVar7 = uVar7 + 1, uVar6 < 0x9f));
            }
          }
          else {
            *outText = '\0';
            bVar9 = false;
          }
          text[uVar6] = '\0';
          iVar2 = Ram00006800;
          if ((iVar2 == 0x50414d57) &&
             ((((iVar2 = Ram00006804, iVar2 != 0 && (uVar5 = Ram00006808, 0xb < uVar5)) &&
               (uVar5 = Ram00006808, 0x53 < uVar5)) &&
              (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
            (*pcVar3)(outText);
          }
          if (bVar9) {
            *(undefined1 *)(in_ECX + 0x424) = 1;
            return CONCAT31((int3)((uint)in_ECX >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006984
#undef UINT_00006988

#define local_118 (*(byte (*)[256])(frame + 24))
#define local_18 (*(byte * *)(frame + 280))
#define local_14 (*(int *)(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007270
 */

void recovered_10007270(int in_ECX,byte *in_EDX)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;

  if ((in_EDX == (byte *)0x0) || (bVar4 = *in_EDX, bVar4 == 0)) {
    return;
  }
  uVar6 = 0;
  local_14 = in_ECX;
  do {
    if (bVar4 == 10) {
      uVar1 = 0;
      local_118[uVar6] = 0;
      if ((in_ECX != 0) && (*(int *)(in_ECX + 0x344) != 0)) {
        iVar3 = *(int *)(in_ECX + 0x410);
        iVar2 = *(int *)(in_ECX + 0x414);
        local_18 = in_EDX;
        if (iVar2 < 1000) {
          iVar3 = iVar3 + iVar2;
          *(int *)(in_ECX + 0x414) = iVar2 + 1;
        }
        else {
          iVar2 = recovered_10006ca0(in_ECX,(char *)(*(int *)(in_ECX + 0x344) +
                                                    (iVar3 + ((uint)((ulonglong)
                                                                     ((longlong)iVar3 * 0x10624dd3)
                                                                    >> 0x26) - (iVar3 >> 0x1f)) *
                                                             -1000) * 0x100));
          iVar3 = *(int *)(in_ECX + 0x410) + 1 + ((*(int *)(in_ECX + 0x410) + 1) / 1000) * -1000;
          *(int *)(in_ECX + 0x410) = iVar3;
          iVar5 = *(int *)(in_ECX + 0x418) - iVar2;
          if (iVar5 == 0 || *(int *)(in_ECX + 0x418) < iVar2) {
            iVar5 = 0;
          }
          iVar3 = *(int *)(in_ECX + 0x414) + -1 + iVar3;
          *(int *)(local_14 + 0x418) = iVar5;
        }
        uVar1 = 0;
        uVar6 = 0;
        if (local_118[0] != 0) {
          uVar6 = 0;
          bVar4 = local_118[0];
          do {
            if (bVar4 < 0x21) {
              bVar4 = 0x20;
            }
            *(byte *)(uVar6 + *(int *)(local_14 + 0x344) + (iVar3 % 1000) * 0x100) = bVar4;
            bVar4 = local_118[uVar6 + 1];
            uVar6 = uVar6 + 1;
          } while ((bVar4 != 0) && (uVar6 < 0xff));
        }
        *(undefined1 *)(uVar6 + (iVar3 % 1000) * 0x100 + *(int *)(local_14 + 0x344)) = 0;
        in_EDX = local_18;
        in_ECX = local_14;
      }
    }
    else {
      if (bVar4 != 0xd) {
        if (bVar4 == 0) {
          if (uVar6 == 0) {
            return;
          }
          local_118[uVar6] = 0;
          if (in_ECX == 0) {
            return;
          }
          if (*(int *)(in_ECX + 0x344) == 0) {
            return;
          }
          iVar3 = *(int *)(in_ECX + 0x410);
          iVar2 = *(int *)(in_ECX + 0x414);
          if (iVar2 < 1000) {
            iVar3 = iVar3 + iVar2;
            *(int *)(in_ECX + 0x414) = iVar2 + 1;
          }
          else {
            iVar2 = recovered_10006ca0(in_ECX,(char *)(*(int *)(in_ECX + 0x344) +
                                                      (iVar3 + ((uint)((ulonglong)
                                                                       ((longlong)iVar3 * 0x10624dd3
                                                                       ) >> 0x26) - (iVar3 >> 0x1f))
                                                               * -1000) * 0x100));
            iVar3 = *(int *)(in_ECX + 0x410) + 1 + ((*(int *)(in_ECX + 0x410) + 1) / 1000) * -1000;
            *(int *)(in_ECX + 0x410) = iVar3;
            iVar5 = *(int *)(in_ECX + 0x418) - iVar2;
            if (iVar5 == 0 || *(int *)(in_ECX + 0x418) < iVar2) {
              iVar5 = 0;
            }
            iVar3 = *(int *)(in_ECX + 0x414) + -1 + iVar3;
            *(int *)(local_14 + 0x418) = iVar5;
          }
          if (local_118[0] == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              if (local_118[0] < 0x21) {
                local_118[0] = 0x20;
              }
              *(byte *)(uVar6 + *(int *)(local_14 + 0x344) + (iVar3 % 1000) * 0x100) = local_118[0];
              local_118[0] = local_118[uVar6 + 1];
              uVar6 = uVar6 + 1;
            } while ((local_118[0] != 0) && (uVar6 < 0xff));
          }
          *(undefined1 *)(uVar6 + (iVar3 % 1000) * 0x100 + *(int *)(local_14 + 0x344)) = 0;
          return;
        }
        if (uVar6 + 1 < 0x100) {
          local_118[uVar6] = bVar4;
          uVar1 = uVar6 + 1;
          goto LAB_100072a2;
        }
      }
      uVar1 = uVar6;
    }
LAB_100072a2:
    bVar4 = in_EDX[1];
    in_EDX = in_EDX + 1;
    uVar6 = uVar1;
  } while( true );
}

#undef local_118
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006930
#define DAT_00006930 (*(uint8_t *)(0x6930U))
#undef DAT_01807eef
#define DAT_01807eef (*(uint8_t *)(0x1807eefU))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef Ram00006930
#define Ram00006930 (*(uint32_t *)(0x6930U))
#define local_24c (*(undefined1 (*)[8])(frame + 20))
#define local_244 (*(byte *)(frame + 28))
#define local_f3 (*(char (*)[99])(frame + 365))
#define local_90 (*(char (*)[128])(frame + 464))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007550
 */

void recovered_10007550(char *in_ECX,ulong in_EDX,undefined1 *param_3)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined *vararg1;

  if (in_ECX != (char *)0x0) {
    pf_varargs_10007ce6__4_(local_90,0x80,"%s",((uintptr_t)pf_module_state+0x2b1U));
    memset(local_24c,0,0x1bc);
    iVar3 = Ram00006800;
    if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
        (uVar1 = Ram00006808, 0xb < uVar1)) &&
       ((uVar1 = Ram00006808, 0x133 < uVar1 && (pcVar2 = (code *)Ram00006930, pcVar2 != (code *)0x0)
        ))) {
      iVar3 = (*pcVar2)(local_24c);
      if ((iVar3 != 0) && (((local_244 & 4) != 0 && (local_f3[0] != '\0')))) {
        pf_varargs_10007ce6__4_(local_90,0x80,"%s",(uint)local_f3);
      }
    }
    vararg1 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x210U));
    if (param_3 != (undefined1 *)0x0) {
      vararg1 = param_3;
    }
    pf_varargs_10007ce6__4__4_(in_ECX,in_EDX,"%s%s",(uint)local_90,(uint)vararg1);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006930
#undef DAT_01807eef
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef Ram00006930
#undef local_24c
#undef local_244
#undef local_f3
#undef local_90

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006898
#define UINT_00006898 (*(uint *)(0x6898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007640
 */

bool recovered_10007640(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;

  if (param_1 == 0) {
    bVar5 = true;
  }
  else {
    *(undefined1 *)(param_1 + 0x638) = 0;
    iVar1 = Ram00006800;
    uVar4 = 0;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x9b < uVar2 &&
        (pcVar3 = (code *)UINT_00006898, pcVar3 != (code *)0x0)))) {
      uVar4 = (*pcVar3)((char *)(param_1 + 0x438),(char *)(param_1 + 0x638),0x1000);
    }
    *(uint *)(param_1 + 0x430) = uVar4;
    *(undefined4 *)(param_1 + 0x42c) = 1;
    bVar5 = *(int *)(param_1 + 0x430) == 0;
  }
  return bVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006898

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e0
 */

undefined4 recovered_100076e0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  if (in_EDX == (char *)0x0) {
    return 0;
  }
  uVar3 = strlen(in_ECX);
  uVar4 = strlen(in_EDX);
  uVar7 = 0;
  uVar5 = 0;
  if (uVar4 - 1 < uVar3) {
    do {
      bVar1 = in_ECX[uVar7 + (uVar3 - uVar4)];
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      uVar2 = CONCAT11(in_EDX[uVar7],bVar1);
      uVar6 = (uint)uVar2;
      if ((byte)(in_EDX[uVar7] + 0xbfU) < 0x1a) {
        uVar6 = uVar2 | 0x2000;
      }
      bVar8 = (char)uVar6 == (char)(uVar6 >> 8);
      uVar5 = CONCAT31((int3)(uVar6 >> 8),bVar8);
    } while ((bVar8) && (bVar8 = uVar4 - 1 != uVar7, uVar7 = uVar7 + 1, bVar8));
  }
  return uVar5;
}


#define local_20 (*(int *)(frame + 32))
#define local_1c (*(int *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
#define local_2c (*(int * *)(frame + 20))
#define local_28 (*(int * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007760
 */

undefined4 * recovered_10007760(undefined4 *in_ECX,int in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;

  if (in_EDX == 0) {
    *in_ECX = 10;
    in_ECX[1] = 10;
    in_ECX[2] = 0xc;
    in_ECX[3] = 0x13c;
    local_18 = 0xc;
    uVar8 = 0x15e;
    iVar1 = 0x1d;
    local_20 = 0x13c;
    local_1c = 0;
    iVar4 = 0;
    goto LAB_100079ab;
  }
  iVar1 = *(int *)(in_EDX + 0x36c);
  uVar8 = iVar1 + 2;
  uVar5 = uVar8;
  if (iVar1 < 1) {
    uVar5 = 0xc;
  }
  iVar4 = 400;
  if (*(int *)(in_EDX + 8) != 0) {
    iVar4 = *(int *)(in_EDX + 8);
  }
  uVar5 = (iVar4 - uVar5) - 0x26;
  uVar6 = uVar5;
  if (iVar1 < 1) {
    uVar9 = 0x10;
    if ((int)uVar5 < 0x10) goto LAB_100077b0;
  }
  else {
    uVar9 = iVar1 + 6;
    if ((int)uVar5 < (int)uVar9) {
LAB_100077b0:
      uVar6 = uVar9;
    }
  }
  local_20 = 0x12;
  if (0x33 < uVar6) {
    local_20 = uVar6 - 0x22;
  }
  *in_ECX = 10;
  in_ECX[1] = 10;
  in_ECX[2] = 0xc;
  in_ECX[3] = local_20;
  if (iVar1 < 1) {
    if ((int)uVar5 < 0x11) {
      uVar5 = 0x10;
    }
    uVar8 = 0xc;
  }
  else if ((int)uVar5 <= (int)(iVar1 + 6U)) {
    uVar5 = iVar1 + 6U;
  }
  local_1c = 0;
  iVar1 = uVar5 / uVar8 + (uint)(uVar5 / uVar8 == 0);
  iVar4 = 0;
  if (0 < *(int *)(in_EDX + 0x414)) {
    iVar4 = 0;
    local_1c = 0;
    do {
      if (*(int *)(in_EDX + 0x344) == 0) {
        pcVar7 = "";
      }
      else {
        iVar2 = *(int *)(in_EDX + 0x410) + iVar4;
        pcVar7 = (char *)(*(int *)(in_EDX + 0x344) +
                         (iVar2 + ((uint)((ulonglong)((longlong)iVar2 * 0x10624dd3) >> 0x26) -
                                  (iVar2 >> 0x1f)) * -1000) * 0x100);
      }
      iVar2 = recovered_10006ca0(in_EDX,pcVar7);
      local_1c = local_1c + iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_EDX + 0x414));
    if (*(int *)(in_EDX + 0x414) < 1) {
      iVar4 = 0;
    }
    else {
      iVar2 = 0;
      iVar4 = 0;
      do {
        if (*(int *)(in_EDX + 0x344) == 0) {
          pcVar7 = "";
        }
        else {
          iVar3 = *(int *)(in_EDX + 0x410) + iVar2;
          pcVar7 = (char *)(*(int *)(in_EDX + 0x344) +
                           (iVar3 + ((uint)((ulonglong)((longlong)iVar3 * 0x10624dd3) >> 0x26) -
                                    (iVar3 >> 0x1f)) * -1000) * 0x100);
        }
        iVar3 = recovered_10006ca0(in_EDX,pcVar7);
        iVar4 = iVar4 + iVar3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_EDX + 0x414));
    }
  }
  iVar2 = *(int *)(in_EDX + 0x36c);
  local_18 = iVar2 + 2;
  uVar8 = local_18;
  if (iVar2 < 1) {
    uVar8 = 0xc;
  }
  iVar3 = 400;
  if (*(int *)(in_EDX + 8) != 0) {
    iVar3 = *(int *)(in_EDX + 8);
  }
  uVar8 = (iVar3 - uVar8) - 0x26;
  if (iVar2 < 1) {
    if ((int)uVar8 < 0x11) {
      uVar8 = 0x10;
    }
    local_18 = 0xc;
  }
  else if ((int)uVar8 <= (int)(iVar2 + 6U)) {
    uVar8 = iVar2 + 6U;
  }
LAB_100079ab:
  local_28 = in_ECX + 3;
  local_2c = in_ECX + 1;
  iVar4 = (iVar4 - uVar8 / local_18) - (uint)(uVar8 / local_18 == 0);
  if ((iVar1 < local_1c) && (0 < iVar4)) {
    local_1c = (iVar1 * local_20) / local_1c;
    if (local_1c < 0x13) {
      local_1c = 0x12;
    }
    if (local_20 <= local_1c) {
      local_1c = local_20;
    }
    *local_28 = local_1c;
    *local_2c = ((local_20 - local_1c) * *(int *)(in_EDX + 0x418)) / iVar4 + 10;
  }
  return in_ECX;
}

#undef local_20
#undef local_1c
#undef local_18
#undef local_2c
#undef local_28

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_4c (*(void * *)(frame + 20))
#define local_48 (*(int *)(frame + 24))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(int *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_30 (*(int *)(frame + 48))
#define local_2c (*(int *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(int *)(frame + 60))
#define local_1c (*(int *)(frame + 68))
#define local_18 (*(void * *)(frame + 72))
#define local_14 (*(uint *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a10
 */

void recovered_10007a10(int in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,uint param_6)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  if (0 < (int)param_5 && param_4 != (char *)0x0) {
    local_2c = in_EDX;
    local_1c = in_ECX;
    memset(&local_4c,0,0x18);
    iVar7 = Ram00006800;
    if (((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
         (uVar5 = Ram00006808, 0xb < uVar5)) &&
        ((uVar5 = Ram00006808, 0x17b < uVar5 &&
         (pcVar4 = (code *)UINT_00006978, pcVar4 != (code *)0x0)))) &&
       (uVar5 = (*pcVar4)(param_4,param_5,0x80000001,
                          (param_6 >> 0x10 & 0xff) * 0x100 + 0xff +
                          ((param_6 >> 8 & 0xff) << 0x10 | param_6 << 0x18),&local_4c), uVar5 != 0))
    {
      if (!((local_4c == (void *)0x0 && local_48 == 0 || local_4c == (void *)0x0) || local_48 != 0))
      {
        local_18 = local_4c;
        if (local_3c == 0) {
          local_48 = 0;
        }
        else {
          local_30 = local_2c * 4;
          local_14 = 0;
          local_24 = param_3;
          uVar5 = local_40;
          do {
            if (uVar5 == 0) {
              uVar5 = 0;
            }
            else {
              local_28 = param_3 + local_14;
              uVar5 = 0;
              do {
                iVar7 = local_38 * local_14;
                if ((*(char *)((int)local_4c + uVar5 * 4 + iVar7 + 3) != '\0') && (local_1c != 0)) {
                  local_34 = *(int *)(local_1c + 0x340);
                  if (-1 < (int)(local_2c + uVar5 | local_28) && local_34 != 0) {
                    iVar3 = *(int *)(local_1c + 4);
                    iVar6 = 0x2f8;
                    if (iVar3 != 0) {
                      iVar6 = iVar3;
                    }
                    if ((int)(local_2c + uVar5) < iVar6) {
                      iVar6 = 400;
                      if (*(int *)(local_1c + 8) != 0) {
                        iVar6 = *(int *)(local_1c + 8);
                      }
                      if ((int)local_28 < iVar6) {
                        iVar6 = 0xbe0;
                        if (iVar3 != 0) {
                          iVar6 = iVar3 << 2;
                        }
                        if (*(int *)(local_1c + 0xc) != 0) {
                          iVar6 = *(int *)(local_1c + 0xc);
                        }
                        iVar6 = iVar6 * local_24;
                        uVar1 = *(undefined1 *)((int)local_4c + uVar5 * 4 + iVar7 + 1);
                        uVar2 = *(undefined1 *)((int)local_4c + uVar5 * 4 + iVar7 + 2);
                        *(undefined1 *)(local_34 + iVar6 + local_30 + uVar5 * 4) =
                             *(undefined1 *)((int)local_4c + uVar5 * 4 + iVar7);
                        *(undefined1 *)
                         (*(int *)(local_1c + 0x340) + iVar6 + local_30 + 1 + uVar5 * 4) = uVar1;
                        *(undefined1 *)
                         (*(int *)(local_1c + 0x340) + iVar6 + local_30 + 2 + uVar5 * 4) = uVar2;
                        *(undefined1 *)
                         (iVar6 + *(int *)(local_1c + 0x340) + local_30 + 3 + uVar5 * 4) = 0xff;
                      }
                    }
                  }
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < local_40);
              uVar5 = local_40;
            }
            local_14 = local_14 + 1;
            local_24 = local_24 + 1;
          } while (local_14 < local_3c);
        }
      }
      if ((((local_4c != (void *)0x0) && (local_48 == 0)) && (local_4c != (void *)0x0)) &&
         (((iVar7 = Ram00006800, iVar7 == 0x50414d57 && (iVar7 = Ram00006804, iVar7 != 0)) &&
          ((uVar5 = Ram00006808, 0xb < uVar5 &&
           ((uVar5 = Ram00006808, 0x53 < uVar5 &&
            (pcVar4 = (code *)UINT_00006850, pcVar4 != (code *)0x0)))))))) {
        (*pcVar4)(local_4c);
      }
      memset(&local_4c,0,0x18);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006978
#undef local_4c
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1c
#undef local_18
#undef local_14
