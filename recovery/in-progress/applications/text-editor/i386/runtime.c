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
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006828
#define UINT_00006828 (*(uint *)(0x6828U))
#undef UINT_0000682c
#define UINT_0000682c (*(uint *)(0x682cU))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#undef UNK_01806e1c
#define UNK_01806e1c (*(uint8_t *)(0x1806e1cU))
#undef UNK_01806f3e
#define UNK_01806f3e (*(uint8_t *)(0x1806f3eU))
#undef UNK_01806f4c
#define UNK_01806f4c (*(uint8_t *)(0x1806f4cU))
#undef UNK_01806f95
#define UNK_01806f95 (*(uint8_t *)(0x1806f95U))
#define local_44 (*(int *)(frame + 2252))
#define local_40 (*(int *)(frame + 2256))
#define local_3c (*(uint *)(frame + 2260))
#define local_38 (*(uint *)(frame + 2264))
#define local_34 (*(uint *)(frame + 2268))
#define local_30 (*(uint *)(frame + 2272))
#define local_2c (*(uint *)(frame + 2276))
#define local_28 (*(uint *)(frame + 2280))
#define local_24 (*(uint *)(frame + 2284))
#define local_20 (*(uint *)(frame + 2288))
#define local_1c (*(uint *)(frame + 2292))
#define local_18 (*(uint *)(frame + 2296))
#define local_11 (*(byte *)(frame + 2303))
#define auStack_8ec (*(undefined1 (*)[2])(frame + 36))
#define auStack_8ea (*(undefined1 (*)[10])(frame + 38))
#define local_8e0 (*(uint *)(frame + 48))
#define acStack_1b9 (*(char (*)[193])(frame + 1879))
#define local_8dc (*(uint (*)[3])(frame + 52))
#define local_8d0 (*(undefined4 *)(frame + 64))
#define local_8cc (*(uint *)(frame + 68))
#define local_8c8 (*(uint *)(frame + 72))
#define local_8b8 (*(uint *)(frame + 88))
#define local_8b0 (*(byte *)(frame + 96))
#define local_8ac (*(int *)(frame + 100))
#define local_8a8 (*(int *)(frame + 104))
#define local_8a4 (*(int *)(frame + 108))
#define local_668 (*(void * *)(frame + 680))
#define local_664 (*(int *)(frame + 684))
#define local_65c (*(int *)(frame + 692))
#define local_658 (*(int *)(frame + 696))
#define local_5e8 (*(undefined4 *)(frame + 808))
#define local_5e4 (*(int *)(frame + 812))
#define local_5d8 (*(int *)(frame + 824))
#define local_5d4 (*(uint *)(frame + 828))
#define local_5d0 (*(uint *)(frame + 832))
#define local_5cc (*(uint *)(frame + 836))
#define local_5ac (*(void * *)(frame + 868))
#define local_298 (*(void * *)(frame + 1656))
#define local_294 (*(int *)(frame + 1660))
#define local_290 (*(int *)(frame + 1664))
#define local_28c (*(char * *)(frame + 1668))
#define local_288 (*(uint *)(frame + 1672))
#define local_284 (*(uint *)(frame + 1676))
#define local_280 (*(uint *)(frame + 1680))
#define local_27c (*(uint *)(frame + 1684))
#define local_278 (*(char (*)[191])(frame + 1688))
#define local_f8 (*(ulong *)(frame + 2072))
#define local_f4 (*(ulong *)(frame + 2076))
#define local_f0 (*(char (*)[128])(frame + 2080))
#define local_70 (*(uint *)(frame + 2208))
#define local_6c (*(uint *)(frame + 2212))
#define local_68 (*(int *)(frame + 2216))
#define local_64 (*(uint *)(frame + 2220))
#define local_60 (*(uint *)(frame + 2224))
#define local_5c (*(undefined2 *)(frame + 2228))
#define local_5a (*(undefined1 *)(frame + 2230))
#define local_59 (*(undefined2 *)(frame + 2231))
#define local_57 (*(char *)(frame + 2233))
#define local_54 (*(int *)(frame + 2236))
#define local_50 (*(char *)(frame + 2240))
#define local_4c (*(uint *)(frame + 2244))
#define local_48 (*(uint *)(frame + 2248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d10
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_10000d10(void)

{
  unsigned char frame[2352] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 extraout_EAX = 0;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_ECX = 0;
  uint extraout_ECX_00 = 0;
  char *pcVar15;
  ulong uVar16;
  uint *puVar17;
  byte bVar18;
  char cVar20;
  ulong uVar19;
  undefined1 *puVar21;
  char cVar22;
  void **ppvVar23;

  bVar10 = 0;
  memset(&local_5d8,0,0x58c);
  local_288 = 0x10000;
  iVar11 = Ram00006800;
  puVar21 = auStack_8ec;
  if (iVar11 == 0x50414d57) {
    iVar11 = Ram00006804;
    puVar21 = auStack_8ec;
    if (iVar11 != 0) {
      uVar4 = Ram00006808;
      puVar21 = auStack_8ec;
      if (0xb < uVar4) {
        uVar4 = Ram00006808;
        puVar21 = auStack_8ec;
        if (0x4f < uVar4) {
          pcVar1 = (code *)UINT_0000684c;
          puVar21 = auStack_8ec;
          if (pcVar1 != (code *)0x0) {
            local_28c = (*pcVar1)(0x10000);
            puVar21 = auStack_8ec;
            if (local_28c == (char *)0x0) goto LAB_10002720;
            *local_28c = '\0';
            pf_varargs_10006cce__4_(local_278,0xc0,"%s",((uintptr_t)pf_module_state+0x191U));
            pf_varargs_10006cce__4_(local_f0,0x80,"%s",((uintptr_t)pf_module_state+0x1a0U));
            pf_app_window_spec(&local_668,"Text Editor",800,0x208);
            ppvVar23 = &local_668;
            puVar17 = &local_8e0;
            for (iVar11 = 0xd; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar17 = (uint)*ppvVar23;
              ppvVar23 = ppvVar23 + (uint)bVar10 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar10 * -2 + 1;
            }
            local_8d0 = 0xf6f7f6;
            local_8b0 = local_8b0 | 1;
            uVar4 = terror_ui_window_open(&local_5d8,&local_8e0);
            if (uVar4 != 0) {
              terror_ui_window_set_menus(&local_5d8,"New|Open Path|Save|Save As","Cut|Copy|Paste","");
              local_298 = local_5ac;
              if (local_5ac != (void *)0x0) {
                local_294 = 6;
                local_290 = 10;
                memset(&local_668,0,0x18);
                iVar11 = Ram00006800;
                if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
                    (uVar4 = Ram00006808, 0xb < uVar4)) &&
                   ((uVar4 = Ram00006808, 0x17b < uVar4 &&
                    (pcVar1 = (code *)UINT_00006978, pcVar1 != (code *)0x0)))) {
                  uVar4 = (*pcVar1)("W",0xffffffff,1,0,&local_668);
                  if (uVar4 != 0) {
                    if (local_65c - 1U < 0x40) {
                      local_294 = local_65c + 1;
                    }
                    if (local_658 - 1U < 0x40) {
                      local_290 = local_658;
                    }
                    if ((((local_668 != (void *)0x0) && (local_664 == 0)) &&
                        ((local_668 != (void *)0x0 &&
                         (((iVar11 = Ram00006800, iVar11 == 0x50414d57 &&
                           (iVar11 = Ram00006804, iVar11 != 0)) &&
                          (uVar4 = Ram00006808, 0xb < uVar4)))))) &&
                       ((uVar4 = Ram00006808, 0x53 < uVar4 &&
                        (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))) {
                      (*pcVar1)(local_668);
                    }
                    memset(&local_668,0,0x18);
                  }
                }
                local_50 = '\x01';
                recovered_10002960((uint)&local_5d8);
                if (local_50 == '\x01') {
                  uVar4 = local_6c >> 0xc & 1;
                  local_34 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                  do {
                    uVar13 = local_5d0;
                    uVar5 = local_5d4;
                    local_3c = uVar4;
                    memset(&local_8e0,0,0x278);
                    pf_app_refresh_window_info(&local_5d8);                    uVar4 = terror_ui_window_query(&local_5d8,&local_8e0);
                    if (((uVar4 == 0) || (uVar2 = terror_ui_window_info_requests_close(&local_8e0), uVar2 != '\0')) ||
                       (uVar4 = terror_ui_window_sync_buffer(&local_5d8,&local_8e0), uVar4 == 0)) break;
                    local_298 = local_5ac;
                    local_70 = local_8b8;
                    if ((local_5d4 == uVar5) && (local_5d0 == uVar13)) {
                      bVar10 = 0;
                    }
                    else {
                      recovered_10002780((int)&local_5d8);
                      bVar10 = 1;
                    }
                    if ((local_8ac == 0) || (local_8ac == local_68)) {
LAB_1000114c:
                      local_11 = bVar10;
                      goto LAB_1000114f;
                    }
                    local_68 = local_8ac;
                    if (local_8a8 == 2) {
                      if (local_8a4 == 2) {
                        uVar6 = recovered_10005d40((int)&local_5d8);
                        cVar22 = (char)uVar6;
                      }
                      else if (local_8a4 == 1) {
                        uVar6 = recovered_10005b60((int)&local_5d8);
                        cVar22 = (char)uVar6;
                      }
                      else {
                        if (local_8a4 != 0) goto LAB_1000114c;
                        uVar6 = recovered_100058c0((int)&local_5d8);
                        cVar22 = (char)uVar6;
                      }
                      local_11 = 1;
                      if (cVar22 == '\0') goto LAB_1000114c;
                      goto LAB_1000114f;
                    }
                    local_11 = bVar10;
                    if (local_8a8 != 1) goto LAB_1000114f;
                    local_11 = 1;
                    switch((uintptr_t)(local_8a4)) {
                    case 0:
                      if (local_28c != (char *)0x0) {
                        *local_28c = '\0';
                        local_284 = 0;
                        local_280 = 0;
                        local_27c = 0;
                        local_64 = 0;
                        local_60 = 0;
                        local_5a = 0;
                        pf_varargs_10006cce__4_(local_f0,0x80,"%s",((uintptr_t)pf_module_state+0x1a0U));
                      }
                      break;
                    case 1:
                      iVar11 = 0;
                      goto LAB_10002195;
                    case 2:
                      recovered_10005740((int)&local_5d8);
                      break;
                    case 3:
                      iVar11 = 1;
LAB_10002195:
                      recovered_10005650((int)&local_5d8,iVar11);
                    }
LAB_1000114f:
                    local_38 = local_70;
                    if ((((local_70 & 2) != 0) || ((char)local_59 != '\0')) ||
                       (bVar10 = local_11, local_57 == '\x01')) {
                      memset(&local_8e0,0,0x1c);
                      uVar5 = terror_ui_window_pointer_state(&local_5d8,&local_8e0);
                      uVar4 = local_5d0;
                      if ((uVar5 == 0) || ((local_8e0 & 4) == 0)) {
                        local_57 = '\0';
                        local_59 = 0;
                      }
                      else {
                        uVar5 = 799;
                        if (local_5d4 != 0) {
                          uVar5 = local_5d4 - 1;
                        }
                        uVar13 = local_8cc;
                        if ((int)uVar5 <= (int)local_8cc) {
                          uVar13 = uVar5;
                        }
                        local_20 = 0;
                        local_18 = 0;
                        if (-1 < (int)local_8cc) {
                          local_18 = uVar13;
                        }
                        uVar5 = 0x207;
                        if (local_5d0 != 0) {
                          uVar5 = local_5d0 - 1;
                        }
                        uVar13 = local_8c8;
                        if ((int)uVar5 <= (int)local_8c8) {
                          uVar13 = uVar5;
                        }
                        if (-1 < (int)local_8c8) {
                          local_20 = uVar13;
                        }
                        uVar5 = local_8dc[0] & 1;
                        if (uVar5 == 0) {
                          local_59 = 0;
                          local_57 = '\0';
                        }
                        else {
                          if (local_57 == '\0') {
                            uVar13 = local_5d4;
                            if ((int)local_5d4 < 0xa3) {
                              uVar13 = 0xa2;
                            }
                            iVar11 = 0x316;
                            if (local_5d4 != 0) {
                              iVar11 = uVar13 - 10;
                            }
                            if ((((int)local_18 < 0x48) || ((int)local_20 < 0xf)) ||
                               ((iVar11 <= (int)local_18 || (0x26 < local_20)))) {
                              uVar13 = local_5d0;
                              if ((int)local_5d0 < 0xad) {
                                uVar13 = 0xac;
                              }
                              recovered_10006350(&local_4c,(int)&local_5d8);
                              local_1c = local_64;
                              uVar8 = local_18 - 0xf;
                              if ((uVar8 < 0xc) && (local_20 - 0x3f < 0xe)) {
                                uVar8 = local_64 - 1;
                                iVar11 = 1;
                                uVar14 = local_20;
                                pcVar15 = local_28c;
                                uVar9 = local_284;
                                if (local_28c != (char *)0x0) {
                                  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                                    cVar22 = *pcVar15;
                                    iVar11 = iVar11 + (uint)(cVar22 == '\n');
                                    pcVar15 = pcVar15 + 1;
                                    uVar14 = (uint)(cVar22 == '\n');
                                  }
                                }
                                uVar9 = 0x1a0;
                                if (uVar4 != 0) {
                                  uVar9 = uVar13 - 0x68;
                                }
                                if (local_290 < 1) {
                                  uVar4 = 0xd;
                                }
                                else {
                                  uVar4 = local_290 + 3;
                                }
                                uVar4 = (iVar11 - uVar9 / uVar4) - (uint)(uVar9 / uVar4 == 0);
                                if ((int)uVar4 < 1) {
                                  uVar4 = 0;
                                  if (-1 < (int)uVar8) goto LAB_10002322;
                                }
                                else if ((int)uVar4 <= (int)uVar8) {
LAB_10002322:
                                  uVar8 = uVar4;
                                }
                                if ((int)local_64 < 1) {
                                  uVar8 = 0;
                                }
                                if ((int)local_60 < 0) {
                                  local_60 = 0;
                                }
                                bVar3 = uVar8 == local_64;
                                uVar4 = CONCAT31((int3)(uVar14 >> 8),1);
                                local_64 = uVar8;
                                local_2c = uVar13;
                                local_24 = uVar5;
                                if (bVar3) goto LAB_1000236e;
                              }
                              else {
                                iVar11 = 0x1d0;
                                if (uVar4 != 0) {
                                  iVar11 = uVar13 - 0x38;
                                }
                                if (((uVar8 < 0xc) && (iVar11 <= (int)local_20)) &&
                                   (local_20 < iVar11 + 0xeU)) {
                                  local_24 = local_64 + 1;
                                  iVar11 = 1;
                                  pcVar15 = local_28c;
                                  uVar8 = local_284;
                                  if (local_28c != (char *)0x0) {
                                    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                                      iVar11 = iVar11 + (uint)(*pcVar15 == '\n');
                                      pcVar15 = pcVar15 + 1;
                                    }
                                  }
                                  uVar8 = 0x1a0;
                                  if (uVar4 != 0) {
                                    uVar8 = uVar13 - 0x68;
                                  }
                                  if (local_290 < 1) {
                                    uVar4 = 0xd;
                                  }
                                  else {
                                    uVar4 = local_290 + 3;
                                  }
                                  uVar4 = (iVar11 - uVar8 / uVar4) - (uint)(uVar8 / uVar4 == 0);
                                  if ((int)uVar4 < 1) {
                                    uVar4 = 0;
                                  }
                                  uVar8 = local_24;
                                  if ((int)uVar4 <= (int)local_24) {
                                    uVar8 = uVar4;
                                  }
                                  uVar9 = 0;
                                  if (-2 < (int)local_64) {
                                    uVar9 = uVar8;
                                  }
                                  if ((int)local_60 < 0) {
                                    local_60 = 0;
                                  }
                                  bVar3 = uVar9 != local_64;
                                  uVar4 = 1;
                                  local_64 = uVar9;
                                  local_2c = uVar13;
                                  if (bVar3) goto LAB_100024a5;
LAB_1000236e:
                                  bVar3 = recovered_10006180((int)&local_5d8,local_18,local_20,'\0',
                                                             '\0');
                                  uVar4 = extraout_ECX;
                                  if (!bVar3) {
                                    uVar4 = local_5d0;
                                    if ((int)local_5d0 < 0xad) {
                                      uVar4 = 0xac;
                                    }
                                    iVar11 = 0x30c;
                                    if (local_5d4 != 0) {
                                      iVar11 = local_5d4 - 0x14;
                                    }
                                    uVar13 = 0x1e0;
                                    if (local_5d0 != 0) {
                                      uVar13 = uVar4 - 0x28;
                                    }
                                    uVar4 = 0;
                                    if (0x4a < (int)local_18) {
                                      if (0x3f < (int)local_20) {
                                        if ((int)local_18 < iVar11) {
                                          if (local_20 < uVar13) goto LAB_100023ec;
                                        }
                                      }
                                    }
                                    goto LAB_100024a5;
                                  }
LAB_100023ec:
                                  local_59 = CONCAT11(1,(char)local_59);
                                }
                                else {
                                  uVar9 = 0x1c9;
                                  if (uVar4 != 0) {
                                    uVar9 = uVar13 - 0x3f;
                                  }
                                  if (((0xb < uVar8) || ((int)local_20 < 0x4f)) ||
                                     (uVar9 <= local_20)) goto LAB_1000236e;
                                  if ((((int)local_18 < (int)local_4c) ||
                                      ((int)local_20 < (int)local_48)) ||
                                     (((int)(local_4c + local_44) <= (int)local_18 ||
                                      ((int)(local_48 + local_40) <= (int)local_20)))) {
                                    local_1c = 0x17a;
                                    if (uVar4 != 0) {
                                      local_1c = uVar13 - 0x8e;
                                    }
                                    local_2c = uVar13;
                                    local_24 = uVar5;
                                    recovered_10006350(&local_668,(int)&local_5d8);
                                    iVar11 = 1;
                                    if ((local_28c != (char *)0x0) && (local_284 != 0)) {
                                      uVar5 = local_284;
                                      pcVar15 = local_28c;
                                      do {
                                        iVar11 = iVar11 + (uint)(*pcVar15 == '\n');
                                        pcVar15 = pcVar15 + 1;
                                        uVar5 = uVar5 - 1;
                                      } while (uVar5 != 0);
                                    }
                                    uVar5 = 0x1a0;
                                    if (uVar4 != 0) {
                                      uVar5 = local_2c - 0x68;
                                    }
                                    if (local_290 < 1) {
                                      uVar4 = 0xd;
                                    }
                                    else {
                                      uVar4 = local_290 + 3;
                                    }
                                    iVar12 = uVar5 / uVar4 + (uint)(uVar5 / uVar4 == 0);
                                    puVar17 = &local_64;
                                    if ((iVar11 - iVar12 == 0 || iVar11 < iVar12) ||
                                       ((int)(local_1c - local_65c) < 1)) {
LAB_10002479:
                                      *puVar17 = 0;
                                    }
                                    else {
                                      uVar5 = (int)(((local_20 - local_65c / 2) + -0x4f) *
                                                   (iVar11 - iVar12)) / (int)(local_1c - local_65c);
                                      iVar11 = 1;
                                      pcVar15 = local_28c;
                                      uVar4 = local_284;
                                      if (local_28c != (char *)0x0) {
                                        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                                          iVar11 = iVar11 + (uint)(*pcVar15 == '\n');
                                          pcVar15 = pcVar15 + 1;
                                        }
                                      }
                                      uVar4 = iVar11 - iVar12;
                                      if ((int)uVar4 < 1) {
                                        uVar4 = 0;
                                      }
                                      uVar13 = uVar5;
                                      if ((int)uVar4 <= (int)uVar5) {
                                        uVar13 = uVar4;
                                      }
                                      local_64 = 0;
                                      if (-1 < (int)uVar5) {
                                        local_64 = uVar13;
                                      }
                                      puVar17 = &local_60;
                                      if ((int)local_60 < 0) goto LAB_10002479;
                                    }
                                    uVar5 = local_24;
                                  }
                                  local_59 = CONCAT11(PF_PART1(local_59, 1),1);
                                  recovered_10006350(&local_5e8,(int)&local_5d8);
                                  local_54 = local_20 - local_5e4;
                                  uVar4 = extraout_ECX_00;
                                }
                                uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
                              }
                            }
                            else {
                              iVar11 = local_294;
                              if (local_294 < 1) {
                                iVar11 = 6;
                              }
                              iVar12 = local_18 - 0x4c;
                              local_5c = 1;
                              local_27c = local_280;
                              pf_varargs_10006cce__4_(acStack_1b9 + 1,0xc0,"%s",(uint)local_278);
                              uVar19 = iVar12 / iVar11 + local_f4;
                              uVar16 = strlen(acStack_1b9 + 1);
                              uVar7 = uVar19;
                              if ((int)uVar16 <= (int)uVar19) {
                                uVar7 = uVar16;
                              }
                              local_f8 = 0;
                              if (-1 < (int)uVar19) {
                                local_f8 = uVar7;
                              }
                              uVar4 = CONCAT31((int3)(uVar7 >> 8),1);
                            }
                          }
                          else {
                            uVar4 = 0;
                          }
LAB_100024a5:
                          uVar13 = local_5d0;
                          if ((char)local_59 == '\x01') {
                            local_2c = local_5d0;
                            if ((int)local_5d0 < 0xad) {
                              local_2c = 0xac;
                            }
                            local_18 = 0x17a;
                            if (local_5d0 != 0) {
                              local_18 = local_2c - 0x8e;
                            }
                            local_24 = uVar5;
                            local_1c = uVar4;
                            recovered_10006350(&local_668,(int)&local_5d8);
                            iVar11 = 1;
                            if ((local_28c != (char *)0x0) && (local_284 != 0)) {
                              uVar4 = local_284;
                              pcVar15 = local_28c;
                              do {
                                iVar11 = iVar11 + (uint)(*pcVar15 == '\n');
                                pcVar15 = pcVar15 + 1;
                                uVar4 = uVar4 - 1;
                              } while (uVar4 != 0);
                            }
                            uVar4 = 0x1a0;
                            if (uVar13 != 0) {
                              uVar4 = local_2c - 0x68;
                            }
                            if (local_290 < 1) {
                              uVar5 = 0xd;
                            }
                            else {
                              uVar5 = local_290 + 3;
                            }
                            iVar12 = uVar4 / uVar5 + (uint)(uVar4 / uVar5 == 0);
                            local_57 = (char)local_24;
                            if ((iVar11 - iVar12 == 0 || iVar11 < iVar12) ||
                               ((int)(local_18 - local_65c) < 1)) {
                              bVar3 = (char)local_1c == '\0';
                              goto LAB_1000262c;
                            }
                            uVar5 = (int)(((local_20 - local_54) + -0x4f) * (iVar11 - iVar12)) /
                                    (int)(local_18 - local_65c);
                            local_20 = local_64;
                            iVar11 = 1;
                            pcVar15 = local_28c;
                            uVar4 = local_284;
                            if (local_28c != (char *)0x0) {
                              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                                iVar11 = iVar11 + (uint)(*pcVar15 == '\n');
                                pcVar15 = pcVar15 + 1;
                              }
                            }
                            uVar4 = iVar11 - iVar12;
                            if ((int)uVar4 < 1) {
                              uVar4 = 0;
                            }
                            uVar13 = uVar5;
                            if ((int)uVar4 <= (int)uVar5) {
                              uVar13 = uVar4;
                            }
                            uVar4 = 0;
                            if (-1 < (int)uVar5) {
                              uVar4 = uVar13;
                            }
                            if ((int)local_60 < 0) {
                              local_60 = 0;
                            }
                            bVar3 = uVar4 == local_64;
                            local_64 = uVar4;
                            if ((char)local_1c == '\0' && bVar3) goto LAB_100011aa;
                          }
                          else {
                            if (PF_PART1(local_59, 1) == '\x01') {
                              bVar3 = recovered_10006180((int)&local_5d8,local_18,local_20,'\x01',
                                                         '\x01');
                              bVar3 = (uVar4 & 1) == 0 && !bVar3;
                              local_57 = (char)uVar5;
                            }
                            else {
                              bVar3 = (char)uVar4 == '\0';
                              local_57 = (char)uVar5;
                            }
LAB_1000262c:
                            if (bVar3) goto LAB_100011aa;
                          }
                          local_11 = 1;
                        }
                      }
LAB_100011aa:
                      bVar10 = local_11;
                      if ((local_38 & 2) != 0) {
                        uVar4 = 0;
                        local_20 = 0;
                        do {
                          iVar11 = Ram00006800;
                          if ((((iVar11 != 0x50414d57) || (iVar11 = Ram00006804, iVar11 == 0)) ||
                              (uVar5 = Ram00006808, uVar5 < 0xc)) ||
                             ((uVar5 = Ram00006808, uVar5 < 0x30 ||
                              (pcVar1 = (code *)UINT_0000682c, pcVar1 == (code *)0x0)))) break;
                          uVar5 = (*pcVar1)();
                          uVar7 = local_f8;
                          if (uVar5 == 0) break;
                          if (SBORROW4(0,uVar5 & 0x8000ffff)) goto LAB_100011cb;
                          cVar22 = (char)uVar5;
                          cVar20 = (char)(uVar5 >> 8);
                          if ((char)local_5c != '\x01') {
                            uVar13 = local_27c;
                            if (local_284 <= local_27c) {
                              uVar13 = local_284;
                            }
                            local_28 = local_280;
                            uVar8 = local_280;
                            if (local_284 <= local_280) {
                              uVar8 = local_284;
                            }
                            uVar9 = uVar13;
                            local_18 = uVar8;
                            if (uVar8 <= local_27c) {
                              uVar9 = uVar8;
                              local_18 = uVar13;
                            }
                            uVar14 = local_18;
                            local_1c = 0;
                            local_2c = 0;
                            if (uVar13 != uVar8) {
                              local_2c = local_18;
                              local_1c = uVar9;
                            }
                            local_24 = uVar9;
                            if ((uVar5 & 0x40000) != 0) {
                              if (((cVar20 != '\x1e') && (cVar22 != '\x01')) &&
                                 ((uVar5 = uVar5 & 0xff, uVar5 != 0x61 && (uVar5 != 0x41)))) {
                                if ((((cVar20 == '.') || (cVar22 == '\x03')) || (uVar5 == 99)) ||
                                   (uVar5 == 0x43)) {
                                  uVar6 = recovered_10005b60((int)&local_5d8);
                                  cVar22 = (char)uVar6;
                                }
                                else if (((cVar20 == '/') || (cVar22 == '\x16')) ||
                                        ((uVar5 == 0x76 || (uVar5 == 0x56)))) {
                                  uVar6 = recovered_10005d40((int)&local_5d8);
                                  cVar22 = (char)uVar6;
                                }
                                else {
                                  if (((cVar20 != '-') && (cVar22 != '\x18')) &&
                                     ((uVar5 != 0x78 && (uVar5 != 0x58)))) goto LAB_100011cb;
                                  uVar6 = recovered_100058c0((int)&local_5d8);
                                  cVar22 = (char)uVar6;
                                }
                                goto LAB_100013d7;
                              }
                              local_27c = 0;
                              local_280 = local_284;
                              pf_varargs_10006cce__4_(local_f0,0x80,"%s",((uintptr_t)pf_module_state+0x2ccU));
                              goto LAB_10001324;
                            }
                            if ((uVar5 & 0x20000) != 0) goto LAB_100011cb;
                            local_30 = local_284;
                            if ((byte)(cVar22 - 0x20U) < 0x5f) {
                              local_8e0 = CONCAT31(PF_PART3(local_8e0, 1),cVar22);
                              if (local_28c != (char *)0x0) {
                                if (uVar13 == uVar8) {
                                  uVar5 = local_284 + 1;
                                  if (uVar5 < local_288) goto LAB_100015ff;
                                }
                                else {
                                  iVar11 = local_18 - uVar9;
                                  if ((local_284 + 1) - iVar11 < local_288) {
                                    memmove(local_28c + uVar9,local_28c + local_18,
                                                       (local_284 + 1) - local_18);
                                    local_284 = local_284 - iVar11;
                                    local_280 = local_24;
                                    local_27c = local_24;
                                    uVar5 = local_284 + 1;
LAB_100015ff:
                                    memmove(local_28c + local_280 + 1,
                                                       local_28c + local_280,uVar5 - local_280);
                                    memcpy(local_28c + local_280,&local_8e0,1);
                                    local_280 = local_280 + 1;
                                    local_284 = local_284 + 1;
LAB_1000178e:
                                    local_5a = 1;
                                    local_27c = local_280;
                                    goto LAB_10001324;
                                  }
                                }
                              }
                              goto LAB_100011cb;
                            }
                            if (cVar22 == '\t') {
                              if (local_28c != (char *)0x0) {
                                if (uVar13 == uVar8) {
                                  if (local_284 + 4 < local_288) goto LAB_10001742;
                                }
                                else {
                                  local_1c = local_18 - uVar9;
                                  if ((local_284 - local_1c) + 4 < local_288) {
                                    memmove(local_28c + uVar9,local_28c + local_18,
                                                       (local_284 - local_18) + 1);
                                    local_284 = local_284 - local_1c;
                                    local_280 = local_24;
                                    local_27c = local_24;
LAB_10001742:
                                    memmove(local_28c + local_280 + 4,
                                                       local_28c + local_280,
                                                       (local_284 - local_280) + 1);
                                    memcpy(local_28c + local_280,&(*(uint8_t *)((uintptr_t)pf_module_state+0x2d9U)),4);
                                    local_280 = local_280 + 4;
                                    local_284 = local_284 + 4;
                                    goto LAB_1000178e;
                                  }
                                }
                              }
                              goto LAB_100011cb;
                            }
                            if (((cVar20 == '\x0e') || (cVar22 == '\x7f')) || ((uVar5 & 0xff) == 8))
                            {
                              if ((uVar13 == uVar8) ||
                                 (local_18 <= uVar9 || local_28c == (char *)0x0)) {
                                if (local_280 == 0 || local_28c == (char *)0x0) goto LAB_100011cb;
                                memmove(local_28c + (local_280 - 1),local_28c + local_280
                                                   ,(local_284 - local_280) + 1);
                                local_280 = local_280 - 1;
                                local_284 = local_284 - 1;
                              }
                              else {
                                memmove(local_28c + uVar9,local_28c + local_18,
                                                   (local_284 - local_18) + 1);
                                local_284 = local_284 + (uVar9 - uVar14);
                                local_280 = uVar9;
                              }
                              local_5a = 1;
                              local_27c = local_280;
                              goto LAB_10001324;
                            }
                            if (cVar20 == '\x1c') {
LAB_100018f2:
                              local_8e0 = CONCAT31(PF_PART3(local_8e0, 1),10);
                              uVar6 = recovered_10006040((int)&local_5d8,&local_8e0,1);
                              cVar22 = (char)uVar6;
                              goto LAB_100013d7;
                            }
                            if (cVar20 == 'S') {
                              uVar6 = recovered_100065a0((int)&local_5d8);
                              cVar22 = (char)uVar6;
                              goto LAB_100013d7;
                            }
                            if ((cVar22 == '\r') || ((uVar5 & 0xff) == 10)) goto LAB_100018f2;
                            switch((uintptr_t)(cVar20)) {
                            case 'G':
                              local_1c = 0;
                              uVar13 = local_1c;
                              if (local_28c != (char *)0x0) {
                                for (; (uVar13 = local_1c, uVar8 != 0 &&
                                       (uVar13 = uVar8, local_28c[uVar8 - 1] != '\n'));
                                    uVar8 = uVar8 - 1) {
                                }
                              }
                              goto LAB_10001d95;
                            case 'H':
                              break;
                            case 'I':
                              uVar5 = local_5d0;
                              if ((int)local_5d0 < 0xad) {
                                uVar5 = 0xac;
                              }
                              uVar13 = 0x1a0;
                              if (local_5d0 != 0) {
                                uVar13 = uVar5 - 0x68;
                              }
                              if (local_290 < 1) {
                                uVar5 = 0xd;
                              }
                              else {
                                uVar5 = local_290 + 3;
                              }
                              local_64 = (local_64 - uVar13 / uVar5) - (uint)(uVar13 / uVar5 == 0);
                              goto LAB_10001c6f;
                            default:
                              goto LAB_100011cb;
                            case 'K':
                              if (((uVar5 & 0x10000) != 0) || (uVar13 == uVar8)) {
                                if (local_280 != 0) {
                                  local_280 = local_280 - 1;
                                  goto code_r0x10001c9f;
                                }
                                goto LAB_100011cb;
                              }
                              cVar22 = true;
                              goto LAB_10001d9b;
                            case 'M':
                              if (((uVar5 & 0x10000) == 0) && (uVar13 != uVar8)) {
                                local_280 = local_2c;
                              }
                              else {
                                if (local_284 <= local_280) goto LAB_100011cb;
                                local_280 = local_280 + 1;
                              }
code_r0x10001c9f:
                              cVar22 = true;
                              goto code_r0x10001d84;
                            case 'O':
                              if (local_28c == (char *)0x0) {
LAB_10001d76:
                                uVar8 = 0;
                              }
                              else {
                                for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                                  if (local_28c[uVar8 - 1] == '\n') {
                                    if (local_284 < uVar8) goto LAB_10001d76;
                                    goto LAB_10001ad3;
                                  }
                                }
                                uVar8 = 0;
LAB_10001ad3:
                                if (uVar8 < local_284) {
                                  do {
                                    if (local_28c[uVar8] == '\n') goto LAB_10001d78;
                                    uVar8 = uVar8 + 1;
                                  } while (local_284 != uVar8);
                                  uVar8 = local_284;
                                }
                              }
LAB_10001d78:
                              cVar22 = uVar8 != local_280;
                              local_280 = uVar8;
code_r0x10001d84:
                              local_1c = local_280;
                              goto LAB_10001d9b;
                            case 'P':
                              break;
                            case 'Q':
                              uVar5 = local_5d0;
                              if ((int)local_5d0 < 0xad) {
                                uVar5 = 0xac;
                              }
                              uVar13 = 0x1a0;
                              if (local_5d0 != 0) {
                                uVar13 = uVar5 - 0x68;
                              }
                              if (local_290 < 1) {
                                uVar5 = 0xd;
                              }
                              else {
                                uVar5 = local_290 + 3;
                              }
                              local_64 = local_64 + uVar13 / uVar5 + (uint)(uVar13 / uVar5 == 0);
LAB_10001c6f:
                              recovered_100064e0((int)&local_5d8);
                              goto LAB_10001324;
                            }
                            recovered_10006680((int)&local_5d8);
                            local_1c = local_280;
                            uVar13 = local_1c;
LAB_10001d95:
                            local_1c = uVar13;
                            cVar22 = local_1c != local_28;
LAB_10001d9b:
                            local_280 = local_1c;
                            if (((uVar5 & 0x10000) == 0) && ((bool)cVar22 != false)) {
                              local_27c = local_1c;
                            }
                            else {
LAB_100013d7:
                              if (cVar22 == '\0') goto LAB_100011cb;
                            }
LAB_10001324:
                            uVar6 = recovered_10002780((int)&local_5d8);
                            local_20 = CONCAT31((int3)((uint)uVar6 >> 8),1);
                            goto LAB_100011cb;
                          }
                          if ((uVar5 & 0x60000) != 0) goto LAB_100011cb;
                          if ((byte)(cVar22 - 0x20U) < 0x5f) {
                            uVar7 = strlen(acStack_1b9 + 1);
                            if (0xffffff3f < uVar7 - 0xbf) {
                              memmove(acStack_1b9 + local_f8 + 2,
                                                 acStack_1b9 + local_f8 + 1,(uVar7 - local_f8) + 1);
                              acStack_1b9[local_f8 + 1] = cVar22;
                              local_f8 = local_f8 + 1;
                              goto LAB_10001448;
                            }
                            goto LAB_100011cb;
                          }
                          if (((cVar20 == '\x0e') || (cVar22 == '\x7f')) || ((uVar5 & 0xff) == 8)) {
                            uVar7 = strlen(acStack_1b9 + 1);
                            if (uVar7 != 0 && local_f8 != 0) {
                              memmove(acStack_1b9 + local_f8,acStack_1b9 + local_f8 + 1,
                                                 (uVar7 - local_f8) + 1);
                              local_f8 = local_f8 - 1;
                              goto LAB_10001448;
                            }
                            goto LAB_100011cb;
                          }
                          bVar10 = PF_PART1(local_5c, 1);
                          if (((cVar20 == '\x1c') || (cVar22 == '\r')) || ((uVar5 & 0xff) == 10)) {
                            if (acStack_1b9[1] == '\0') {
                              ppvVar23 = (void **)&(*(uint8_t *)((uintptr_t)pf_module_state+0x282U));
                            }
                            else {
                              local_5c = (ushort)PF_PART1(local_5c, 1) << 8;
                              if (bVar10 == 1) {
                                pf_varargs_10006cce__4_(local_278,0xc0,"%s",(uint)(acStack_1b9 + 1))
                                ;
                                uVar6 = recovered_10005740((int)&local_5d8);
                                if ((char)uVar6 == '\0') goto LAB_100011cb;
                                goto LAB_10001448;
                              }
                              if (local_28c == (char *)0x0) {
                                ppvVar23 = (void **)&(*(uint8_t *)((uintptr_t)pf_module_state+0x290U));
                              }
                              else {
                                memset(&local_4c,0,0xc);
                                bVar3 = recovered_10005f70(acStack_1b9 + 1,&local_8e0);
                                if (bVar3) {
                                  iVar11 = Ram00006800;
                                  local_18 = uVar4;
                                  if (((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)
                                      ) && ((uVar5 = Ram00006808, 0xb < uVar5 &&
                                            (uVar5 = Ram00006808, 0xcb < uVar5)))) {
                                    pcVar1 = (code *)UINT_000068c8;
                                    if (pcVar1 != (code *)0x0) {
                                      uVar5 = (*pcVar1)(local_8e0,(char *)local_8dc,&local_4c);
                                      goto LAB_1000198c;
                                    }
                                  }
                                  else {
                                    iVar11 = Ram00006800;
                                    if ((((iVar11 == 0x50414d57) &&
                                         (iVar11 = Ram00006804, iVar11 != 0)) &&
                                        (uVar5 = Ram00006808, 0xb < uVar5)) &&
                                       ((uVar5 = Ram00006808, 0x37 < uVar5 &&
                                        (pcVar1 = (code *)UINT_00006834, pcVar1 != (code *)0x0)))) {
                                      uVar5 = (*pcVar1)((char *)local_8dc,&local_4c);
LAB_1000198c:
                                      local_24 = local_4c;
                                      uVar4 = local_18;
                                      if (local_4c != 0 && uVar5 != 0) {
                                        if (local_48 == 0) {
                                          local_284 = 0;
                                        }
                                        else {
                                          local_284 = 0;
                                          uVar4 = 1;
                                          do {
                                            if (local_288 <= local_284 + 1) break;
                                            cVar22 = *(char *)((local_4c - 1) + uVar4);
                                            if (cVar22 == '\r') {
                                              cVar22 = '\n';
                                              if ((uVar4 < local_48) &&
                                                 (*(char *)(local_4c + uVar4) == '\n'))
                                              goto LAB_10001c4c;
LAB_10001be8:
                                              local_28c[local_284] = cVar22;
                                              local_284 = local_284 + 1;
                                            }
                                            else {
                                              if ((!(0x5e < (byte)(cVar22 - 0x20U) &&
                                                    1 < (byte)(cVar22 - 9U))) ||
                                                 (bVar3 = cVar22 != '\0', cVar22 = '?', bVar3))
                                              goto LAB_10001be8;
LAB_10001c4c:
                                            }
                                            bVar3 = uVar4 < local_48;
                                            uVar4 = uVar4 + 1;
                                          } while (bVar3);
                                        }
                                        local_28c[local_284] = '\0';
                                        local_280 = 0;
                                        local_27c = 0;
                                        local_64 = 0;
                                        local_60 = 0;
                                        local_5a = 0;
                                        pf_varargs_10006cce__4_
                                                  (local_278,0xc0,"%s",(uint)(acStack_1b9 + 1));
                                        pf_varargs_10006cce__4_
                                                  ((char *)&local_668,0x80,"Opened %s",
                                                   (uint)local_278);
                                        pf_varargs_10006cce__4_(local_f0,0x80,"%s",(uint)&local_668)
                                        ;
                                        if (local_288 <= local_48) {
                                          pf_varargs_10006cce__4_(local_f0,0x80,"%s",((uintptr_t)pf_module_state+0x2b6U));
                                        }
                                        uVar4 = local_18;
                                        goto LAB_10001448;
                                      }
                                    }
                                  }
                                }
                                ppvVar23 = &local_668;
                                pf_varargs_10006cce__4_
                                          ((char *)ppvVar23,0x80,"Open failed: %s",
                                           (uint)(acStack_1b9 + 1));
                              }
                            }
                            pf_varargs_10006cce__4_(local_f0,0x80,"%s",(uint)ppvVar23);
                            goto LAB_100011cb;
                          }
                          if (cVar22 == '\x1b' || cVar20 == '\x01') {
                            local_5c = (ushort)PF_PART1(local_5c, 1) << 8;
                            pf_varargs_10006cce__4_(local_f0,0x80,"%s",((uintptr_t)pf_module_state+0x26fU));
                            goto LAB_10001448;
                          }
                          switch((uintptr_t)(cVar20)) {
                          case 'G':
                            local_f8 = 0;
                            goto LAB_10001448;
                          case 'K':
                            if (local_f8 != 0) {
                              local_f8 = local_f8 - 1;
                              goto LAB_10001448;
                            }
                            break;
                          case 'M':
                            uVar16 = strlen(acStack_1b9 + 1);
                            if (uVar7 < uVar16) {
                              local_f8 = local_f8 + 1;
                              goto LAB_10001448;
                            }
                            break;
                          case 'O':
                            local_f8 = strlen(acStack_1b9 + 1);
LAB_10001448:
                            uVar5 = local_5d4;
                            if ((int)local_5d4 < 0xa3) {
                              uVar5 = 0xa2;
                            }
                            iVar11 = 0x2c6;
                            if (local_5d4 != 0) {
                              iVar11 = uVar5 - 0x5a;
                            }
                            iVar12 = local_294;
                            if (local_294 < 1) {
                              iVar12 = 6;
                            }
                            iVar11 = iVar11 / iVar12;
                            if (iVar11 < 2) {
                              iVar11 = 1;
                            }
                            uVar7 = local_f8;
                            if ((int)local_f8 < (int)local_f4) {
LAB_100014a0:
                              local_f4 = uVar7;
                            }
                            else if ((int)(local_f4 + iVar11) <= (int)local_f8) {
                              uVar7 = (local_f8 - iVar11) + 1;
                              goto LAB_100014a0;
                            }
                            local_20 = CONCAT31((int3)((uint)iVar11 >> 8),1);
                            if ((int)local_f4 < 0) {
                              local_f4 = 0;
                            }
                          }
LAB_100011cb:
                          uVar4 = uVar4 + 1;
                        } while (uVar4 != 0x20);
                        bVar10 = 1;
                        if ((local_20 & 1) == 0) {
                          bVar10 = local_11;
                        }
                      }
                    }
                    local_11 = bVar10;
                    uVar7 = local_f4;
                    if ((char)local_5c == '\x01') {
                      uVar4 = local_5d4;
                      if ((int)local_5d4 < 0xa3) {
                        uVar4 = 0xa2;
                      }
                      iVar11 = 0x2c6;
                      if (local_5d4 != 0) {
                        iVar11 = uVar4 - 0x5a;
                      }
                      iVar12 = local_294;
                      if (local_294 < 1) {
                        iVar12 = 6;
                      }
                      iVar11 = iVar11 / iVar12;
                      if (iVar11 < 2) {
                        iVar11 = 1;
                      }
                      uVar16 = local_f8;
                      if ((int)local_f8 < (int)local_f4) {
LAB_10001efc:
                        local_f4 = uVar16;
                        if (-1 < (int)uVar16) goto LAB_10001e3f;
LAB_10001f0c:
                        local_f4 = 0;
                        if (uVar7 == 0) goto LAB_10001f20;
                      }
                      else {
                        if ((int)(local_f4 + iVar11) <= (int)local_f8) {
                          uVar16 = (local_f8 - iVar11) + 1;
                          goto LAB_10001efc;
                        }
                        if ((int)local_f4 < 0) goto LAB_10001f0c;
LAB_10001e3f:
                        if (uVar7 == local_f4) goto LAB_10001f20;
                      }
                      local_11 = 1;
                    }
                    else {
                      uVar6 = recovered_10002780((int)&local_5d8);
                      bVar10 = 1;
                      if ((char)uVar6 == '\0') {
                        bVar10 = local_11;
                      }
                      local_11 = bVar10;
                    }
LAB_10001f20:
                    uVar4 = 1;
                    if ((local_38 & 2) != 0) {
                      uVar4 = local_6c >> 0xc & 1;
                    }
                    bVar10 = uVar4 != local_3c | local_11;
                    if (((local_34 & 1) != 0) || (uVar4 != local_3c || (local_11 & 1) != 0)) {
                      bVar18 = ~(byte)local_34;
                      recovered_10002960((uint)&local_5d8);
                      terror_ui_window_present(&local_5d8,"Text Editor",local_298,local_5d4,local_5d0,
                                         local_5cc,0xf6f7f6);
                      local_6c = local_6c + 1;
                      local_34 = 0;
                      if (((bVar18 | bVar10) & 1) == 0) goto LAB_10001fa9;
                    }
                    else {
                      local_6c = local_6c + 1;
LAB_10001fa9:
                      uVar5 = 0x14;
                      if ((local_38 & 2) != 0) {
                        uVar5 = 5;
                      }
                      terror_ui_yield_frames(uVar5);
                    }
                    iVar11 = Ram00006800;
                    if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
                        (uVar5 = Ram00006808, 0xb < uVar5)) &&
                       ((uVar5 = Ram00006808, 0x9f < uVar5 &&
                        (pcVar1 = (code *)UINT_0000689c, pcVar1 != (code *)0x0)))) {
                      (*pcVar1)();
                    }
                  } while (local_50 != '\0');
                }
                if (local_5d8 != 0) {
                  terror_ui_window_close(&local_5d8);
                }
                if (local_28c == (char *)0x0) {
                  return 0;
                }
                iVar11 = Ram00006800;
                if (iVar11 != 0x50414d57) {
                  return 0;
                }
                iVar11 = Ram00006804;
                if (iVar11 == 0) {
                  return 0;
                }
                uVar4 = Ram00006808;
                if (uVar4 < 0xc) {
                  return 0;
                }
                uVar4 = Ram00006808;
                if (uVar4 < 0x54) {
                  return 0;
                }
                pcVar1 = (code *)UINT_00006850;
                if (pcVar1 == (code *)0x0) {
                  return 0;
                }
                (*pcVar1)(local_28c);
                return 0;
              }
              terror_ui_window_close(&local_5d8);
            }
            iVar11 = Ram00006800;
            puVar21 = auStack_8ec + -4;
            if (iVar11 == 0x50414d57) {
              iVar11 = Ram00006804;
              puVar21 = auStack_8ec + -4;
              if (iVar11 != 0) {
                uVar4 = Ram00006808;
                puVar21 = auStack_8ec + -4;
                if (0xb < uVar4) {
                  uVar4 = Ram00006808;
                  puVar21 = auStack_8ec + -4;
                  if (0x53 < uVar4) {
                    pcVar1 = (code *)UINT_00006850;
                    puVar21 = auStack_8ec + -4;
                    if (pcVar1 != (code *)0x0) {
                      (*pcVar1)(local_28c);
                      puVar21 = auStack_8ec + -4;
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
  local_28c = (char *)0x0;
LAB_10002720:
  iVar11 = Ram00006800;
  if (((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
     ((uVar4 = Ram00006808, 0xb < uVar4 &&
      ((uVar4 = Ram00006808, 0x2b < uVar4 && (pcVar1 = (code *)UINT_00006828, pcVar1 != (code *)0x0)
       ))))) {
    *(undefined **)(puVar21 + -0x10) = &(*(uint8_t *)((uintptr_t)pf_module_state+0x160U));
    *(undefined4 *)(puVar21 + -0x14) = 0x10002766;
    (*pcVar1)(*(char **)(puVar21 + -0x10));
  }
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006828
#undef UINT_0000682c
#undef UINT_00006834
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_0000689c
#undef UINT_000068c8
#undef UINT_00006978
#undef UNK_01806e1c
#undef UNK_01806f3e
#undef UNK_01806f4c
#undef UNK_01806f95
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
#undef local_11
#undef auStack_8ec
#undef auStack_8ea
#undef local_8e0
#undef acStack_1b9
#undef local_8dc
#undef local_8d0
#undef local_8cc
#undef local_8c8
#undef local_8b8
#undef local_8b0
#undef local_8ac
#undef local_8a8
#undef local_8a4
#undef local_668
#undef local_664
#undef local_65c
#undef local_658
#undef local_5e8
#undef local_5e4
#undef local_5d8
#undef local_5d4
#undef local_5d0
#undef local_5cc
#undef local_5ac
#undef local_298
#undef local_294
#undef local_290
#undef local_28c
#undef local_288
#undef local_284
#undef local_280
#undef local_27c
#undef local_278
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_5a
#undef local_59
#undef local_57
#undef local_54
#undef local_50
#undef local_4c
#undef local_48

#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002780
 */

undefined4 recovered_10002780(int in_ECX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined3 uVar10;
  undefined4 uVar9;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;

  iVar7 = 0;
  if (in_ECX == 0) {
    return 0;
  }
  pcVar14 = *(char **)(in_ECX + 0x34c);
  uVar2 = *(uint *)(in_ECX + 0x358);
  uVar5 = 0;
  if (pcVar14 != (char *)0x0) {
    uVar5 = *(uint *)(in_ECX + 0x354);
    if (uVar2 <= *(uint *)(in_ECX + 0x354)) {
      uVar5 = uVar2;
    }
    iVar7 = 0;
    if (uVar5 != 0) {
      pcVar11 = pcVar14;
      do {
        iVar7 = iVar7 + (uint)(*pcVar11 == '\n');
        pcVar11 = pcVar11 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    uVar12 = uVar2;
    if (*(uint *)(in_ECX + 0x354) <= uVar2) {
      uVar12 = *(uint *)(in_ECX + 0x354);
    }
    for (; (uVar5 = 0, uVar12 != 0 && (uVar5 = uVar12, pcVar14[uVar12 - 1] != '\n'));
        uVar12 = uVar12 - 1) {
    }
  }
  iVar13 = 0;
  if (uVar5 <= uVar2) {
    iVar13 = uVar2 - uVar5;
  }
  iVar3 = *(int *)(in_ECX + 8);
  iVar6 = iVar3;
  if (iVar3 < 0xad) {
    iVar6 = 0xac;
  }
  uVar2 = 0x1a0;
  if (iVar3 != 0) {
    uVar2 = iVar6 - 0x68;
  }
  if (*(int *)(in_ECX + 0x348) < 1) {
    uVar5 = 0xd;
  }
  else {
    uVar5 = *(int *)(in_ECX + 0x348) + 3;
  }
  iVar3 = uVar2 / uVar5 + (uint)(uVar2 / uVar5 == 0);
  iVar6 = 0x2c1;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar6 = *(int *)(in_ECX + 4) + -0x5f;
  }
  iVar4 = *(int *)(in_ECX + 0x344);
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  iVar1 = *(int *)(in_ECX + 0x574);
  iVar6 = iVar6 / iVar4;
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  iVar4 = *(int *)(in_ECX + 0x578);
  iVar8 = iVar7;
  if (iVar7 < iVar1) {
LAB_100028ae:
    *(int *)(in_ECX + 0x574) = iVar8;
    iVar7 = iVar8;
  }
  else {
    iVar8 = iVar1;
    if (iVar3 + iVar1 <= iVar7) {
      iVar8 = (iVar7 - iVar3) + 1;
      goto LAB_100028ae;
    }
  }
  if (iVar4 <= iVar13) {
    local_24 = iVar4;
    if (iVar13 < iVar4 + iVar6) goto LAB_100028e0;
    iVar13 = (iVar13 - iVar6) + 1;
  }
  *(int *)(in_ECX + 0x578) = iVar13;
  local_24 = iVar13;
LAB_100028e0:
  iVar13 = 1;
  if (pcVar14 != (char *)0x0) {
    for (iVar6 = *(int *)(in_ECX + 0x354); iVar7 = 0, iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar13 = iVar13 + (uint)(*pcVar14 == '\n');
      pcVar14 = pcVar14 + 1;
    }
  }
  iVar13 = iVar13 - iVar3;
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  iVar3 = iVar8;
  if (iVar13 <= iVar8) {
    iVar3 = iVar13;
  }
  iVar13 = 0;
  if (-1 < iVar8) {
    iVar13 = iVar3;
  }
  *(int *)(in_ECX + 0x574) = iVar13;
  if (local_24 < 0) {
    *(undefined4 *)(in_ECX + 0x578) = 0;
    local_24 = 0;
  }
  uVar10 = (undefined3)((uint)iVar7 >> 8);
  uVar9 = CONCAT31(uVar10,1);
  if (iVar13 == iVar1) {
    uVar9 = CONCAT31(uVar10,local_24 != iVar4);
  }
  return uVar9;
}

#undef local_24

#undef DAT_00000004
#define DAT_00000004 (*(uint8_t *)(0x4U))
#undef DAT_0000034c
#define DAT_0000034c (*(uint8_t *)(0x34cU))
#undef DAT_00000354
#define DAT_00000354 (*(uint8_t *)(0x354U))
#undef DAT_00000358
#define DAT_00000358 (*(uint8_t *)(0x358U))
#undef UNK_01806e93
#define UNK_01806e93 (*(uint8_t *)(0x1806e93U))
#undef UNK_01806fa7
#define UNK_01806fa7 (*(uint8_t *)(0x1806fa7U))
#undef _DAT_00000004
#define _DAT_00000004 (*(int *)(0x4U))
#undef _DAT_0000034c
#define _DAT_0000034c (*(char * *)(0x34cU))
#undef _DAT_00000354
#define _DAT_00000354 (*(uint *)(0x354U))
#undef _DAT_00000358
#define _DAT_00000358 (*(uint *)(0x358U))
#define local_ec (*(undefined4 *)(frame + 36))
#define local_e8 (*(uint *)(frame + 40))
#define local_e4 (*(int *)(frame + 44))
#define local_e0 (*(char * *)(frame + 48))
#define local_5c (*(int *)(frame + 180))
#define local_58 (*(uint *)(frame + 184))
#define local_54 (*(int *)(frame + 188))
#define local_50 (*(uint *)(frame + 192))
#define local_4c (*(uint *)(frame + 196))
#define local_48 (*(uint *)(frame + 200))
#define local_44 (*(int *)(frame + 204))
#define local_40 (*(uint *)(frame + 208))
#define local_3c (*(char * *)(frame + 212))
#define local_38 (*(uint *)(frame + 216))
#define local_34 (*(int *)(frame + 220))
#define in_stack_ffffff00 (*(undefined4 *)(frame + 16))
#define local_30 (*(uint *)(frame + 224))
#define local_2c (*(char * *)(frame + 228))
#define local_28 (*(char * *)(frame + 232))
#define local_24 (*(int * *)(frame + 236))
#define local_20 (*(char * *)(frame + 240))
#define local_1c (*(undefined2 *)(frame + 244))
#define local_1a (*(undefined1 *)(frame + 246))
#define local_18 (*(uint *)(frame + 248))
#define local_14 (*(char * *)(frame + 252))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002960
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002960(uint in_ECX)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  undefined *vararg0;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  byte bVar14;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  char *pcVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 uVar27;
  undefined4 uVar26;

  uVar27 = (undefined1)((uint)in_stack_ffffff00 >> 0x18);
  if (in_ECX == 0) {
    local_ec = (char *)CONCAT13(PF_PART1(local_ec, 3),0xf6f7f6);
    uVar26 = CONCAT13(uVar27,0xf6f7f6);
    recovered_10006800(0,0,0,800,0x208,uVar26);
    uVar27 = (undefined1)((uint)uVar26 >> 0x18);
    local_44 = 800;
    iVar5 = _DAT_00000004;
  }
  else {
    iVar5 = 800;
    if (*(int *)(in_ECX + 4) != 0) {
      iVar5 = *(int *)(in_ECX + 4);
    }
    iVar17 = 0x208;
    if (*(int *)(in_ECX + 8) != 0) {
      iVar17 = *(int *)(in_ECX + 8);
    }
    local_ec = (char *)CONCAT13(PF_PART1(local_ec, 3),0xf6f7f6);
    uVar26 = CONCAT13(uVar27,0xf6f7f6);
    recovered_10006800(in_ECX,0,0,iVar5,iVar17,uVar26);
    uVar27 = (undefined1)((uint)uVar26 >> 0x18);
    iVar5 = *(int *)(in_ECX + 4);
    local_44 = 800;
    if (iVar5 != 0) {
      local_44 = iVar5;
    }
    if (local_44 < 0xa3) {
      local_44 = 0xa2;
    }
  }
  iVar17 = *(int *)(in_ECX + 0x344);
  if (iVar17 < 1) {
    iVar17 = 6;
  }
  uVar3 = (local_44 + -0x5a) / iVar17;
  iVar17 = 800;
  if (iVar5 != 0) {
    iVar17 = iVar5;
  }
  PF_PART3(local_ec, 0) = 0xf0ede8;
  if (*(char *)(in_ECX + 0x57c) == '\0') {
    local_3c = (char *)(in_ECX + 0x360);
  }
  else {
    local_3c = (char *)(in_ECX + 0x420);
  }
  uVar26 = CONCAT13(uVar27,0xf0ede8);
  local_18 = in_ECX;
  recovered_10006800(in_ECX,0,0,iVar17,0x3a,uVar26);
  PF_PART3(local_ec, 0) = 0xa49d94;
  iVar5 = 800;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar5 = *(int *)(in_ECX + 4);
  }
  uVar26 = CONCAT13((char)((uint)uVar26 >> 0x18),0xa49d94);
  recovered_10006800(in_ECX,0,0x39,iVar5,1,uVar26);
  PF_PART3(local_ec, 0) = 0x464038;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar7 = CONCAT13((char)((uint)uVar26 >> 0x18),0x464038);
  local_38 = uVar3;
  recovered_100069f0(in_ECX,0xc,0x12,"PATH",4,uVar7);
  pcVar8 = local_3c;
  uVar27 = (undefined1)(uVar7 >> 0x18);
  uVar3 = *(uint *)(in_ECX + 4);
  uVar7 = 800;
  if (uVar3 != 0) {
    uVar7 = uVar3;
  }
  bVar14 = *(byte *)(in_ECX + 0x57c);
  uVar20 = *(uint *)(in_ECX + 8);
  local_30 = uVar7;
  if (0x47 < (int)uVar7) {
    local_30 = 0x48;
  }
  uVar18 = 0x208;
  if (uVar20 != 0) {
    uVar18 = uVar20;
  }
  local_40 = local_44 - 10;
  uVar11 = local_40;
  if ((int)uVar7 <= (int)local_40) {
    uVar11 = uVar7;
  }
  local_28 = (char *)uVar18;
  if (0x26 < (int)uVar18) {
    local_28 = (char *)0x27;
  }
  if ((int)uVar18 < 0x10) {
    local_20 = (char *)uVar20;
  }
  else {
    cVar13 = -bVar14;
    local_24 = (int *)(CONCAT31(PF_PART3(local_24, 1),cVar13) | 0xf6);
    local_2c = (char *)(CONCAT31(PF_PART3(local_2c, 1),cVar13) | 0xf8);
    PF_PART3(local_20, 1) = (undefined3)(uVar20 >> 8);
    local_20 = (char *)(CONCAT31(PF_PART3(local_20, 1),cVar13) | 0xf9);
    local_14 = (char *)0xf;
    do {
      if (0x48 < (int)uVar11) {
        uVar3 = local_30;
        do {
          if ((in_ECX != 0) && (piVar21 = (int *)(in_ECX + 0x340), -1 < (int)uVar3 && *piVar21 != 0)
             ) {
            iVar5 = *(int *)(in_ECX + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            in_ECX = local_18;
            if ((int)uVar3 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + uVar3 * 4) = PF_PART1(local_24, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar3 * 4) =
                     PF_PART1(local_2c, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar3 * 4) =
                     PF_PART1(local_20, 0);
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar3 * 4) = 0xff;
              }
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar11 != uVar3);
      }
      local_14 = (char *)((int)local_14 + 1);
    } while (local_14 != local_28);
    bVar14 = *(byte *)(in_ECX + 0x57c);
    uVar3 = *(uint *)(in_ECX + 4);
    uVar20 = *(uint *)(in_ECX + 8);
  }
  bVar23 = (bVar14 & 1) == 0;
  local_20 = (char *)CONCAT31(PF_PART3(local_20, 1),0x27);
  if (bVar23) {
    local_20 = (char *)CONCAT31(PF_PART3(local_20, 1),0x8e);
    if (!bVar23) goto LAB_10002c7d;
LAB_10002cc9:
    PF_PART1(local_24, 0) = 0x96;
  }
  else {
    if (bVar23) goto LAB_10002cc9;
LAB_10002c7d:
    PF_PART1(local_24, 0) = 0x6d;
  }
  local_2c = (char *)CONCAT31(PF_PART3(local_2c, 1),0xc4);
  if (bVar23) {
    local_2c = (char *)CONCAT31(PF_PART3(local_2c, 1),0x9c);
  }
  uVar7 = 800;
  if (uVar3 != 0) {
    uVar7 = uVar3;
  }
  uVar18 = local_40;
  if ((int)uVar7 <= (int)local_40) {
    uVar18 = uVar7;
  }
  if (uVar20 == 0 || 0xf < (int)uVar20) {
    if ((int)uVar18 < 0x49) {
LAB_10002dd7:
      uVar3 = *(uint *)(in_ECX + 4);
      uVar20 = *(uint *)(in_ECX + 8);
      goto LAB_10002ddd;
    }
    if (0x47 < (int)uVar7) {
      uVar7 = 0x48;
    }
    do {
      while (in_ECX != 0) {
        piVar21 = (int *)(in_ECX + 0x340);
        if (-1 < (int)uVar7 && *piVar21 != 0) {
          iVar5 = *(int *)(in_ECX + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          in_ECX = local_18;
          if (((int)uVar7 < iVar17) && (*(int *)(local_18 + 8) == 0 || 0xf < *(int *)(local_18 + 8))
             ) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0xf + uVar7 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = PF_PART1(local_20, 0);
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = PF_PART1(local_24, 0);
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = PF_PART1(local_2c, 0);
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        uVar7 = uVar7 + 1;
        if (uVar7 == uVar18) goto LAB_10002dd7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar18);
    iVar5 = local_44;
    if (0x329 < local_44) {
      iVar5 = 0x32a;
    }
    if (iVar5 < 0xb) {
      iVar5 = 10;
    }
    uVar7 = iVar5 - 10;
    local_28 = (char *)0x48;
    local_14 = (char *)0x26;
    uVar3 = 0x27;
LAB_10002e52:
    do {
      if ((int)local_28 < (int)uVar7) {
        pcVar15 = local_28;
        do {
          if ((in_ECX != 0) &&
             (piVar21 = (int *)(in_ECX + 0x340),
             -1 < (int)((uint)pcVar15 | (uint)local_14) && *piVar21 != 0)) {
            iVar5 = *(int *)(in_ECX + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            if ((int)pcVar15 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(in_ECX + 8) != 0) {
                iVar17 = *(int *)(in_ECX + 8);
              }
              in_ECX = local_18;
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar15 * 4) = PF_PART1(local_20, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar15 * 4) =
                     PF_PART1(local_24, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar15 * 4) =
                     PF_PART1(local_2c, 0);
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar15 * 4) = 0xff;
              }
            }
          }
          pcVar15 = (char *)((int)pcVar15 + 1);
        } while ((char *)uVar7 != pcVar15);
      }
      local_14 = (char *)((int)local_14 + 1);
    } while (local_14 != (char *)uVar3);
    if (in_ECX != 0) goto LAB_10002f10;
    uVar7 = 0x49;
    local_28 = (char *)0x48;
    uVar3 = 0xf;
    local_30 = 0x27;
LAB_10002ffa:
    do {
      if ((int)local_28 < (int)uVar7) {
        pcVar15 = local_28;
        do {
          if ((in_ECX != 0) &&
             (piVar21 = (int *)(in_ECX + 0x340), in_ECX = local_18,
             -1 < (int)((uint)pcVar15 | uVar3) && *piVar21 != 0)) {
            iVar5 = *(int *)(local_18 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            if ((int)pcVar15 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)uVar3 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * uVar3;
                *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar15 * 4) = PF_PART1(local_20, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar15 * 4) =
                     PF_PART1(local_24, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar15 * 4) =
                     PF_PART1(local_2c, 0);
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar15 * 4) = 0xff;
              }
            }
          }
          pcVar15 = (char *)((int)pcVar15 + 1);
        } while ((char *)uVar7 != pcVar15);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != local_30);
    uVar3 = local_44 - 0xb;
    if (in_ECX != 0) goto LAB_100030bd;
    if ((int)uVar3 < 800) {
      if (0 < (int)uVar3) goto LAB_10003329;
      uVar3 = 0;
      if (local_44 < 0x32a) goto LAB_1000334b;
LAB_10003331:
      iVar5 = 0x32a;
    }
    else {
      uVar3 = 800;
LAB_10003329:
      if (0x329 < local_44) goto LAB_10003331;
LAB_1000334b:
      iVar5 = local_44;
      if (local_44 < 0xb) {
        iVar5 = 10;
      }
    }
    uVar7 = iVar5 - 10;
    local_14 = (char *)0xf;
    local_30 = 0x27;
LAB_10003383:
    do {
      local_28 = (char *)uVar3;
      if ((int)local_28 < (int)uVar7) {
        uVar3 = (uint)local_28;
        do {
          if ((in_ECX != 0) &&
             (piVar21 = (int *)(in_ECX + 0x340), -1 < (int)(uVar3 | (uint)local_14) && *piVar21 != 0
             )) {
            iVar5 = *(int *)(in_ECX + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            if ((int)uVar3 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(in_ECX + 8) != 0) {
                iVar17 = *(int *)(in_ECX + 8);
              }
              in_ECX = local_18;
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + uVar3 * 4) = PF_PART1(local_20, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar3 * 4) =
                     PF_PART1(local_24, 0);
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar3 * 4) =
                     PF_PART1(local_2c, 0);
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar3 * 4) = 0xff;
              }
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar7 != uVar3);
      }
      local_14 = (char *)((int)local_14 + 1);
      uVar3 = (uint)local_28;
    } while (local_14 != (char *)local_30);
  }
  else {
LAB_10002ddd:
    uVar7 = 800;
    if (uVar3 != 0) {
      uVar7 = uVar3;
    }
    local_28 = (char *)uVar7;
    if (0x47 < (int)uVar7) {
      local_28 = (char *)0x48;
    }
    uVar3 = 0x208;
    if (uVar20 != 0) {
      uVar3 = uVar20;
    }
    local_14 = (char *)uVar3;
    if (0x25 < (int)uVar3) {
      local_14 = (char *)0x26;
    }
    if ((int)local_40 < (int)uVar7) {
      bVar23 = (int)(uVar3 - 0x27) < 0;
      uVar7 = local_40;
      if (0x26 < (int)uVar3) goto LAB_10002e2b;
LAB_10002e1f:
      if (SBORROW4(uVar3,0x27) == bVar23) goto LAB_10002e52;
    }
    else {
      bVar23 = (int)(uVar3 - 0x27) < 0;
      if ((int)uVar3 < 0x27) goto LAB_10002e1f;
LAB_10002e2b:
      bVar24 = SBORROW4(uVar3,0x27);
      uVar3 = 0x27;
      if (bVar24 == bVar23) goto LAB_10002e52;
    }
LAB_10002f10:
    uVar7 = 800;
    if (*(uint *)(in_ECX + 4) != 0) {
      uVar7 = *(uint *)(in_ECX + 4);
    }
    local_28 = (char *)uVar7;
    if (0x47 < (int)uVar7) {
      local_28 = (char *)0x48;
    }
    uVar3 = 0x208;
    if (*(uint *)(in_ECX + 8) != 0) {
      uVar3 = *(uint *)(in_ECX + 8);
    }
    if (0x48 < (int)uVar7) {
      uVar7 = 0x49;
    }
    if ((int)uVar3 < 0x27) {
      bVar23 = (int)(uVar3 - 0xf) < 0;
      local_30 = uVar3;
      if (0xe < (int)uVar3) goto LAB_10002f65;
LAB_10002f59:
      if (uVar3 != 0xf && SBORROW4(uVar3,0xf) == bVar23) goto LAB_10002ffa;
    }
    else {
      local_30 = 0x27;
      bVar23 = (int)(uVar3 - 0xf) < 0;
      if ((int)uVar3 < 0xf) goto LAB_10002f59;
LAB_10002f65:
      bVar25 = SBORROW4(uVar3,0xf);
      bVar24 = uVar3 != 0xf;
      uVar3 = 0xf;
      if (bVar24 && bVar25 == bVar23) goto LAB_10002ffa;
    }
LAB_100030bd:
    uVar7 = 800;
    if (*(uint *)(in_ECX + 4) != 0) {
      uVar7 = *(uint *)(in_ECX + 4);
    }
    uVar3 = local_44 - 0xbU;
    if ((int)uVar7 <= (int)(local_44 - 0xbU)) {
      uVar3 = uVar7;
    }
    uVar20 = 0x208;
    if (*(uint *)(in_ECX + 8) != 0) {
      uVar20 = *(uint *)(in_ECX + 8);
    }
    local_14 = (char *)uVar20;
    if (0xe < (int)uVar20) {
      local_14 = (char *)0xf;
    }
    if ((int)uVar7 <= (int)local_40) {
      local_40 = uVar7;
    }
    local_30 = uVar20;
    if (0x26 < (int)uVar20) {
      local_30 = 0x27;
    }
    uVar7 = local_40;
    if (0xf < (int)uVar20) goto LAB_10003383;
  }
  uVar4 = strlen(local_3c);
  if (*(int *)(in_ECX + 0x4e4) < (int)uVar4) {
    if (*(int *)(in_ECX + 0x348) < 1) {
      iVar5 = 0x16;
    }
    else {
      iVar5 = (0x18 - *(int *)(in_ECX + 0x348)) / 2 + 0xf;
    }
    PF_PART3(local_ec, 0) = 0x26221c;
    uVar3 = 0;
    do {
      if ((pcVar8 + *(int *)(in_ECX + 0x4e4))[uVar3] == '\0') goto LAB_1000317d;
      uVar3 = uVar3 + 1;
    } while (local_38 != uVar3);
    uVar3 = local_38;
LAB_1000317d:
    uVar7 = CONCAT22(CONCAT11(uVar27,0x26),0x221c);
    recovered_100069f0(in_ECX,0x4c,iVar5,pcVar8 + *(int *)(in_ECX + 0x4e4),uVar3,uVar7);
    uVar27 = (undefined1)(uVar7 >> 0x18);
  }
  uVar3 = local_18;
  if ((*(char *)(in_ECX + 0x57c) == '\x01') && ((*(byte *)(in_ECX + 0x56d) & 0x10) == 0)) {
    iVar5 = *(int *)(in_ECX + 0x344);
    if (iVar5 < 1) {
      iVar5 = 6;
    }
    iVar5 = iVar5 * (*(int *)(in_ECX + 0x4e0) - *(int *)(in_ECX + 0x4e4));
    if ((iVar5 < 0) || (local_20 = (char *)(iVar5 + 0x4c), local_44 + -0xd <= (int)local_20))
    goto LAB_10003442;
    uVar7 = 800;
    if (*(uint *)(in_ECX + 4) != 0) {
      uVar7 = *(uint *)(in_ECX + 4);
    }
    local_28 = local_20;
    if ((int)uVar7 <= (int)local_20) {
      local_28 = (char *)uVar7;
    }
    uVar20 = 0x208;
    if (*(uint *)(in_ECX + 8) != 0) {
      uVar20 = *(uint *)(in_ECX + 8);
    }
    uVar18 = iVar5 + 0x4eU;
    if ((int)uVar7 <= (int)(iVar5 + 0x4eU)) {
      uVar18 = uVar7;
    }
    local_24 = (int *)uVar20;
    if (0x22 < (int)uVar20) {
      local_24 = (int *)0x23;
    }
    if ((int)uVar20 < 0x14) goto LAB_10003442;
    local_14 = (char *)0x13;
    do {
      if ((int)local_20 < (int)uVar7) {
        pcVar8 = local_28;
        do {
          if ((in_ECX != 0) &&
             (piVar21 = (int *)(in_ECX + 0x340), -1 < (int)pcVar8 && *piVar21 != 0)) {
            iVar5 = *(int *)(in_ECX + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            in_ECX = local_18;
            if ((int)pcVar8 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar8 * 4) = 0x22;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar8 * 4) = 0x5b;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar8 * 4) = 0xaa;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar8 * 4) = 0xff;
              }
            }
          }
          pcVar8 = (char *)((int)pcVar8 + 1);
        } while ((char *)uVar18 != pcVar8);
      }
      local_14 = (char *)((int)local_14 + 1);
    } while ((int *)local_14 != local_24);
    local_2c = (char *)uVar7;
    if (in_ECX != 0) goto LAB_10003442;
    local_4c = _DAT_00000358;
    if (_DAT_0000034c == (char *)0x0) {
      local_24 = (int *)&DAT_0000034c;
      local_40 = 0x20;
      local_34 = 0x1ac;
      local_48 = 0x30c;
      local_54 = 0x2c1;
      local_50 = 0x75;
      uVar3 = 0;
      goto LAB_100035b5;
    }
    local_50 = 0x75;
    local_54 = 0x2c1;
    local_48 = 0x30c;
    local_34 = 0x1ac;
    local_40 = 0x20;
    uVar20 = 1;
    local_24 = (int *)&DAT_0000034c;
    uVar3 = 0;
    uVar7 = _DAT_00000354;
    pcVar8 = _DAT_0000034c;
LAB_10003537:
    uVar18 = uVar7;
    if (local_4c <= uVar7) {
      uVar18 = local_4c;
    }
    if (uVar18 == 0) {
      local_30 = 0;
      uVar18 = 0;
      goto LAB_100035dd;
    }
    local_30 = 0;
    pcVar15 = pcVar8;
    uVar3 = uVar18;
    do {
      local_30 = local_30 + (*pcVar15 == '\n');
      pcVar15 = pcVar15 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    local_28 = (char *)uVar20;
    if (local_18 != 0) {
      uVar3 = uVar18;
      do {
        if (pcVar8[uVar3 - 1] == '\n') goto LAB_1000359c;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = 0;
LAB_1000359c:
      bVar23 = uVar3 <= local_4c;
      uVar3 = local_4c - uVar3;
      local_4c = 0;
      if (bVar23) {
        local_4c = uVar3;
      }
      uVar3 = local_18;
      goto LAB_100035dd;
    }
    local_4c = 0;
    local_58 = 0;
    local_38 = 0;
    local_44 = 0;
    uVar3 = local_18;
  }
  else {
LAB_10003442:
    iVar5 = *(int *)(in_ECX + 4);
    iVar17 = *(int *)(in_ECX + 8);
    iVar9 = iVar17;
    if (iVar17 < 0xad) {
      iVar9 = 0xac;
    }
    local_48 = 0x30c;
    if (iVar5 != 0) {
      local_48 = iVar5 - 0x14;
    }
    local_54 = 0x2c1;
    if (iVar5 != 0) {
      local_54 = iVar5 + -0x5f;
    }
    local_34 = 0x1ac;
    if (iVar17 != 0) {
      local_34 = iVar9 + -0x5c;
    }
    local_40 = 0x1a0;
    if (iVar17 != 0) {
      local_40 = iVar9 - 0x68;
    }
    if (*(int *)(local_18 + 0x348) < 1) {
      local_40 = local_40 / 0xd;
    }
    else {
      local_40 = local_40 / (*(int *)(local_18 + 0x348) + 3U);
      local_40 = local_40 + (local_40 == 0);
    }
    iVar5 = *(int *)(local_18 + 0x344);
    if (iVar5 < 1) {
      iVar5 = 6;
    }
    pcVar8 = *(char **)(local_18 + 0x34c);
    local_50 = local_54 / iVar5;
    if ((int)local_50 < 2) {
      local_50 = 1;
    }
    local_24 = (int *)(local_18 + 0x34c);
    if (pcVar8 != (char *)0x0) {
      uVar7 = *(uint *)(local_18 + 0x354);
      uVar20 = 1;
      if (uVar7 != 0) {
        pcVar15 = pcVar8;
        uVar18 = uVar7;
        do {
          uVar20 = uVar20 + (*pcVar15 == '\n');
          pcVar15 = pcVar15 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      local_4c = *(uint *)(local_18 + 0x358);
      goto LAB_10003537;
    }
    local_4c = *(uint *)(local_18 + 0x358);
LAB_100035b5:
    uVar7 = *(uint *)(uVar3 + 0x354);
    uVar18 = local_4c;
    if (uVar7 <= local_4c) {
      uVar18 = uVar7;
    }
    uVar20 = 1;
    local_30 = 0;
LAB_100035dd:
    uVar11 = *(uint *)(uVar3 + 0x35c);
    uVar16 = uVar11;
    if (uVar7 <= uVar11) {
      uVar16 = uVar7;
    }
    local_58 = 0;
    if (uVar16 == uVar18) {
      local_38 = 0;
      local_44 = 0;
    }
    else {
      if (uVar11 < uVar18) {
        local_38 = uVar16;
        local_58 = uVar18;
      }
      else {
        local_38 = uVar18;
        local_58 = uVar16;
      }
      local_44 = CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
  uVar7 = local_48;
  PF_PART3(local_ec, 0) = 0xffffff;
  uVar26 = CONCAT13(uVar27,0xffffff);
  recovered_10006800(uVar3,10,0x3a,local_48,local_34,uVar26);
  local_ec = (char *)CONCAT13(PF_PART1(local_ec, 3),0x837c72);
  uVar26 = CONCAT13((char)((uint)uVar26 >> 0x18),0x837c72);
  recovered_10006800(uVar3,10,0x3a,uVar7,1,uVar26);
  local_2c = (char *)(local_34 + 0x39);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),PF_PART1(local_ec, 2)),(undefined2)local_ec);
  recovered_10006800(uVar3,10,(uint)local_2c,uVar7,1,uVar26);
  if (uVar3 == 0) {
    pcVar15 = (char *)0x208;
    pcVar8 = (char *)0x3a;
    local_14 = (char *)0xb;
    uVar7 = 10;
  }
  else {
    local_14 = (char *)800;
    if (*(uint *)(uVar3 + 4) != 0) {
      local_14 = (char *)*(uint *)(uVar3 + 4);
    }
    uVar7 = (uint)local_14;
    if (9 < (int)local_14) {
      uVar7 = 10;
    }
    pcVar15 = (char *)0x208;
    if (*(char **)(uVar3 + 8) != (char *)0x0) {
      pcVar15 = *(char **)(uVar3 + 8);
    }
    pcVar8 = pcVar15;
    if (0x39 < (int)pcVar15) {
      pcVar8 = (char *)0x3a;
    }
    if (10 < (int)local_14) {
      local_14 = (char *)0xb;
    }
  }
  pcVar6 = (char *)(local_34 + 0x3aU);
  if ((int)pcVar15 <= (int)(local_34 + 0x3aU)) {
    pcVar6 = pcVar15;
  }
  if ((int)pcVar8 < (int)pcVar6) {
    do {
      if ((int)uVar7 < (int)local_14) {
        uVar18 = uVar7;
        do {
          if ((uVar3 != 0) &&
             (piVar21 = (int *)(uVar3 + 0x340), -1 < (int)(uVar18 | (uint)pcVar8) && *piVar21 != 0))
          {
            iVar5 = *(int *)(uVar3 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            if ((int)uVar18 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(uVar3 + 8) != 0) {
                iVar17 = *(int *)(uVar3 + 8);
              }
              uVar3 = local_18;
              if ((int)pcVar8 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)pcVar8;
                *(undefined1 *)(*piVar21 + iVar17 + uVar18 * 4) = 0x72;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar18 * 4) = 0x7c;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar18 * 4) = 0x83;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar18 * 4) = 0xff;
              }
            }
          }
          uVar18 = uVar18 + 1;
        } while (local_14 != (char *)uVar18);
      }
      pcVar8 = pcVar8 + 1;
      local_3c = pcVar6;
      local_20 = (char *)uVar7;
    } while (pcVar8 != pcVar6);
  }
  uVar7 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),PF_PART1(local_ec, 2)),(undefined2)local_ec);
  local_28 = (char *)uVar20;
  recovered_10006800(uVar3,local_48 + 9,0x3a,1,local_34,uVar7);
  if (uVar3 == 0) {
    pcVar8 = (char *)0x208;
    local_14 = (char *)0x3b;
    local_20 = (char *)0x21;
    uVar20 = 0x4a;
    if ((int)local_2c < 0x208) goto LAB_10003904;
LAB_100038d8:
    if ((int)local_14 < (int)pcVar8) {
LAB_10003932:
      do {
        local_3c = pcVar8;
        if ((int)local_20 < (int)uVar20) {
          pcVar8 = local_20;
          do {
            if ((uVar3 != 0) &&
               (piVar21 = (int *)(uVar3 + 0x340),
               -1 < (int)((uint)pcVar8 | (uint)local_14) && *piVar21 != 0)) {
              iVar5 = *(int *)(uVar3 + 4);
              iVar17 = 800;
              if (iVar5 != 0) {
                iVar17 = iVar5;
              }
              if ((int)pcVar8 < iVar17) {
                iVar17 = 0x208;
                if (*(int *)(uVar3 + 8) != 0) {
                  iVar17 = *(int *)(uVar3 + 8);
                }
                uVar3 = local_18;
                if ((int)local_14 < iVar17) {
                  iVar17 = 0xc80;
                  if (iVar5 != 0) {
                    iVar17 = iVar5 << 2;
                  }
                  if (*(int *)(local_18 + 0xc) != 0) {
                    iVar17 = *(int *)(local_18 + 0xc);
                  }
                  iVar17 = iVar17 * (int)local_14;
                  *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar8 * 4) = 0xee;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar8 * 4) = 0xf1;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar8 * 4) = 0xef;
                  *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar8 * 4) = 0xff;
                }
              }
            }
            pcVar8 = (char *)((int)pcVar8 + 1);
          } while ((char *)uVar20 != pcVar8);
        }
        local_14 = local_14 + 1;
        pcVar8 = local_3c;
      } while (local_14 != local_3c);
    }
  }
  else {
    uVar20 = 800;
    if (*(uint *)(uVar3 + 4) != 0) {
      uVar20 = *(uint *)(uVar3 + 4);
    }
    local_20 = (char *)uVar20;
    if (0x20 < (int)uVar20) {
      local_20 = (char *)0x21;
    }
    pcVar8 = (char *)0x208;
    if (*(char **)(uVar3 + 8) != (char *)0x0) {
      pcVar8 = *(char **)(uVar3 + 8);
    }
    local_14 = pcVar8;
    if (0x3a < (int)pcVar8) {
      local_14 = (char *)0x3b;
    }
    if ((int)uVar20 < 0x4a) {
      if ((int)local_2c < (int)pcVar8) goto LAB_10003904;
      goto LAB_100038d8;
    }
    uVar20 = 0x4a;
    if ((int)pcVar8 <= (int)local_2c) goto LAB_100038d8;
LAB_10003904:
    pcVar8 = local_2c;
    if ((int)local_14 < (int)local_2c) goto LAB_10003932;
  }
  if (uVar3 == 0) {
    pcVar8 = (char *)0x208;
    local_14 = (char *)0x3b;
    local_20 = (char *)0x4a;
    uVar20 = 0x4b;
    if ((int)local_2c < 0x208) goto LAB_10003a5d;
LAB_10003a31:
    if ((int)local_14 < (int)pcVar8) {
LAB_10003a82:
      do {
        local_2c = pcVar8;
        if ((int)local_20 < (int)uVar20) {
          pcVar8 = local_20;
          do {
            if ((uVar3 != 0) &&
               (piVar21 = (int *)(uVar3 + 0x340),
               -1 < (int)((uint)pcVar8 | (uint)local_14) && *piVar21 != 0)) {
              iVar5 = *(int *)(uVar3 + 4);
              iVar17 = 800;
              if (iVar5 != 0) {
                iVar17 = iVar5;
              }
              if ((int)pcVar8 < iVar17) {
                iVar17 = 0x208;
                if (*(int *)(uVar3 + 8) != 0) {
                  iVar17 = *(int *)(uVar3 + 8);
                }
                uVar3 = local_18;
                if ((int)local_14 < iVar17) {
                  iVar17 = 0xc80;
                  if (iVar5 != 0) {
                    iVar17 = iVar5 << 2;
                  }
                  if (*(int *)(local_18 + 0xc) != 0) {
                    iVar17 = *(int *)(local_18 + 0xc);
                  }
                  iVar17 = iVar17 * (int)local_14;
                  *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar8 * 4) = 0xc6;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar8 * 4) = 0xcc;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar8 * 4) = 0xc9;
                  *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar8 * 4) = 0xff;
                }
              }
            }
            pcVar8 = (char *)((int)pcVar8 + 1);
          } while ((char *)uVar20 != pcVar8);
        }
        local_14 = local_14 + 1;
        pcVar8 = local_2c;
      } while (local_14 != local_2c);
    }
  }
  else {
    uVar20 = 800;
    if (*(uint *)(uVar3 + 4) != 0) {
      uVar20 = *(uint *)(uVar3 + 4);
    }
    local_20 = (char *)uVar20;
    if (0x49 < (int)uVar20) {
      local_20 = (char *)0x4a;
    }
    pcVar8 = (char *)0x208;
    if (*(char **)(uVar3 + 8) != (char *)0x0) {
      pcVar8 = *(char **)(uVar3 + 8);
    }
    local_14 = pcVar8;
    if (0x3a < (int)pcVar8) {
      local_14 = (char *)0x3b;
    }
    if ((int)uVar20 < 0x4b) {
      if ((int)local_2c < (int)pcVar8) goto LAB_10003a5d;
      goto LAB_10003a31;
    }
    uVar20 = 0x4b;
    if ((int)pcVar8 <= (int)local_2c) goto LAB_10003a31;
LAB_10003a5d:
    pcVar8 = local_2c;
    if ((int)local_14 < (int)local_2c) goto LAB_10003a82;
  }
  uVar20 = 0;
  do {
    uVar27 = (undefined1)(uVar7 >> 0x18);
    if (*(int *)(uVar3 + 0x348) < 1) {
      iVar5 = 0xd;
    }
    else {
      iVar5 = *(int *)(uVar3 + 0x348) + 3;
    }
    iVar17 = *(int *)(uVar3 + 0x574) + uVar20;
    if ((int)local_28 <= iVar17) break;
    local_14 = (char *)(iVar5 * uVar20);
    if ((iVar17 == local_30) && (*(char *)(uVar3 + 0x57c) == '\0')) {
      local_1c = 0xfbf7;
      local_1a = 0xff;
      recovered_10006800(uVar3,0x4b,(uint)(local_14 + 0x3f),local_54,iVar5,CONCAT13(uVar27,0xfffbf7)
                        );
    }
    uVar7 = iVar17 + 1;
    pf_varargs_10006cce__4_((char *)&local_ec,0x10,"%d",uVar7);
    local_1c = 0x7169;
    local_1a = 0x76;
    if ((char)local_ec == '\0') {
      uVar18 = 0;
    }
    else if (PF_PART1(local_ec, 1) == '\0') {
      uVar18 = 1;
    }
    else if (PF_PART1(local_ec, 2) == '\0') {
      uVar18 = 2;
    }
    else if (PF_PART1(local_ec, 3) == '\0') {
      uVar18 = 3;
    }
    else {
      uVar18 = 5 - ((char)local_e8 == '\0');
    }
    local_2c = local_14 + 0x40;
    uVar7 = CONCAT22((short)(CONCAT13((char)(uVar7 >> 0x18),0x760000) >> 0x10),0x7169);
    recovered_100069f0(uVar3,0x26,(int)local_2c,(char *)&local_ec,uVar18,uVar7);
    iVar5 = *local_24;
    if ((iVar17 < 1) || (iVar5 == 0)) {
      if (iVar5 == 0) goto LAB_10003d70;
      uVar11 = *(uint *)(uVar3 + 0x354);
      uVar18 = 0;
      uVar16 = uVar18;
      if (uVar11 != 0) {
LAB_10003d24:
        uVar10 = uVar18;
        do {
          uVar16 = uVar10;
          if (*(char *)(iVar5 + uVar10) == '\n') break;
          uVar10 = uVar10 + 1;
          uVar16 = uVar11;
        } while (uVar11 != uVar10);
      }
    }
    else {
      uVar11 = *(uint *)(uVar3 + 0x354);
      if (uVar11 == 0) {
LAB_10003d70:
        uVar18 = 0;
LAB_10003d72:
        uVar16 = 0;
      }
      else {
        iVar9 = 0;
        uVar10 = 0;
        do {
          if ((*(char *)(iVar5 + uVar10) == '\n') && (iVar9 = iVar9 + 1, iVar9 == iVar17)) {
            uVar18 = uVar10 + 1;
            if (uVar11 <= uVar10) goto LAB_10003d72;
            uVar16 = uVar18;
            if (uVar18 < uVar11) goto LAB_10003d24;
            break;
          }
          uVar10 = uVar10 + 1;
          uVar16 = uVar11;
          uVar18 = uVar11;
        } while (uVar11 != uVar10);
      }
    }
    local_20 = (char *)uVar20;
    if ((char)local_44 != '\0') {
      uVar20 = local_38;
      if (local_38 <= uVar18) {
        uVar20 = uVar18;
      }
      uVar11 = local_58;
      if (uVar16 <= local_58) {
        uVar11 = uVar16;
      }
      if (uVar16 < *(uint *)(uVar3 + 0x354)) {
        bVar23 = *(char *)(iVar5 + uVar16) == '\n';
        local_3c = (char *)CONCAT31(PF_PART3(local_3c, 1),bVar23);
        local_34 = CONCAT31(PF_PART3(local_34, 1),local_38 <= uVar16);
        bVar23 = (uVar16 < local_58 && local_38 <= uVar16) && bVar23;
      }
      else {
        bVar23 = false;
      }
      if ((uVar20 < uVar11) || (bVar23 != false)) {
        iVar17 = uVar20 - uVar18;
        iVar9 = (uint)bVar23 + (uVar11 - uVar18);
        iVar5 = iVar9;
        if (bVar23 != false) {
          iVar5 = iVar17 + 1;
        }
        if (iVar17 < (int)(uVar11 - uVar18)) {
          iVar5 = iVar9;
        }
        iVar9 = *(int *)(local_18 + 0x578);
        if (iVar17 <= iVar9) {
          iVar17 = iVar9;
        }
        if ((int)(local_50 + iVar9) <= iVar5) {
          iVar5 = local_50 + iVar9;
        }
        uVar3 = local_18;
        if (iVar5 - iVar17 != 0 && iVar17 <= iVar5) {
          local_3c = *(char **)(local_18 + 0x344);
          if ((int)local_3c < 1) {
            local_3c = (char *)0x6;
          }
          if (*(int *)(local_18 + 0x348) < 1) {
            local_34 = 0xd;
          }
          else {
            local_34 = *(int *)(local_18 + 0x348) + 3;
          }
          local_1c = 0xdcc1;
          local_1a = 0xfb;
          uVar7 = CONCAT13((char)(uVar7 >> 0x18),0xfbdcc1);
          local_5c = iVar9;
          local_48 = uVar18;
          recovered_10006800(local_18,(iVar17 - iVar9) * (int)local_3c + 0x4b,
                             (uint)(local_14 + 0x3f),(iVar5 - iVar17) * (int)local_3c,local_34,uVar7
                            );
          uVar18 = local_48;
        }
      }
    }
    if (*(uint *)(uVar3 + 0x578) < uVar16 - uVar18) {
      iVar5 = *(uint *)(uVar3 + 0x578) + uVar18;
      uVar16 = uVar16 - iVar5;
      uVar20 = local_50;
      if ((int)uVar16 <= (int)local_50) {
        uVar20 = uVar16;
      }
      local_1c = 0x1c18;
      local_1a = 0x1f;
      uVar7 = CONCAT13((char)(uVar7 >> 0x18),0x1f1c18);
      recovered_100069f0(uVar3,0x4b,(int)local_2c,(char *)(iVar5 + *local_24),uVar20,uVar7);
    }
    uVar27 = (undefined1)(uVar7 >> 0x18);
    uVar20 = (int)local_20 + 1;
  } while (uVar20 != local_40);
  uVar7 = local_18;
  if (((*(char *)(uVar3 + 0x57c) == '\0') && ((*(byte *)(uVar3 + 0x568) & 2) != 0)) &&
     ((*(byte *)(uVar3 + 0x56d) & 0x10) == 0)) {
    iVar5 = *(int *)(uVar3 + 0x574);
    if ((iVar5 <= (int)local_30) && ((int)local_30 < (int)(iVar5 + local_40))) {
      iVar17 = *(int *)(uVar3 + 0x578);
      if ((iVar17 <= (int)local_4c) && ((int)local_4c <= (int)(iVar17 + local_50))) {
        iVar9 = *(int *)(uVar3 + 0x344);
        iVar2 = *(int *)(uVar3 + 0x348);
        if (iVar9 < 1) {
          iVar9 = 6;
        }
        iVar12 = iVar2 + 3;
        iVar19 = iVar2 + 2;
        if (iVar2 < 1) {
          iVar12 = 0xd;
          iVar19 = 0xc;
        }
        local_ec = (char *)CONCAT13(PF_PART1(local_ec, 3),0xaa5b22);
        uVar26 = CONCAT13(uVar27,0xaa5b22);
        recovered_10006800(local_18,iVar9 * (local_4c - iVar17) + 0x4b,
                           iVar12 * (local_30 - iVar5) + 0x3f,2,iVar19,uVar26);
        uVar27 = (undefined1)((uint)uVar26 >> 0x18);
        uVar3 = uVar7;
      }
    }
  }
  uVar7 = local_18;
  pcVar8 = *(char **)(uVar3 + 8);
  pcVar15 = pcVar8;
  if ((int)pcVar8 < 0xad) {
    pcVar15 = (char *)0xac;
  }
  recovered_10006350(&local_ec,local_18);
  uVar20 = local_18;
  uVar3 = *(uint *)(uVar7 + 4);
  local_20 = (char *)0x320;
  if (uVar3 != 0) {
    local_20 = (char *)uVar3;
  }
  local_28 = (char *)0x208;
  pcVar6 = (char *)0x208;
  if (pcVar8 != (char *)0x0) {
    pcVar6 = pcVar8;
    local_28 = pcVar15;
  }
  pcVar15 = local_20;
  if (0x1a < (int)local_20) {
    pcVar15 = (char *)0x1b;
  }
  local_24 = (int *)(local_28 + -0x3f);
  pcVar22 = (char *)local_24;
  if ((int)pcVar6 <= (int)local_24) {
    pcVar22 = pcVar6;
  }
  if ((int)pcVar22 < 0x50) {
LAB_10004102:
    local_1a = 0xac;
    local_1c = 0xacac;
    uVar7 = 800;
    if (uVar3 != 0) {
      uVar7 = uVar3;
    }
    uVar3 = uVar7;
    if (0xe < (int)uVar7) {
      uVar3 = 0xf;
    }
    uVar18 = uVar7;
    if (0x1a < (int)uVar7) {
      uVar18 = 0x1b;
    }
    if (pcVar8 == (char *)0x0 || 0x4f < (int)pcVar8) {
      if (0xf < (int)uVar7) goto LAB_10004295;
      uVar26 = CONCAT22((short)(CONCAT13(uVar27,0xac0000) >> 0x10),0xacac);
      recovered_10006800(local_18,0xf,(uint)(local_28 + -0x40),0xc,1,uVar26);
      uVar27 = (undefined1)((uint)uVar26 >> 0x18);
    }
    else {
      local_28 = local_28 + -0x40;
      if (((int)local_28 < (int)pcVar8) && (0xf < (int)uVar7)) {
        do {
          if ((local_18 != 0) &&
             (-1 < (int)(uVar3 | (uint)local_28) && *(int *)(local_18 + 0x340) != 0)) {
            iVar5 = *(int *)(local_18 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            if ((int)uVar3 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_28 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_28;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + uVar3 * 4) = 0xac;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar3 * 4) = 0xac;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar3 * 4) = 0xac;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar3 * 4) = 0xff;
              }
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar18 != uVar3);
      }
    }
LAB_10004340:
    uVar7 = 800;
    if (*(uint *)(uVar20 + 4) != 0) {
      uVar7 = *(uint *)(uVar20 + 4);
    }
    uVar3 = uVar7;
    if (0xe < (int)uVar7) {
      uVar3 = 0xf;
    }
    piVar21 = (int *)(char *)0x208;
    if (*(char **)(uVar20 + 8) != (char *)0x0) {
      piVar21 = (int *)*(char **)(uVar20 + 8);
    }
    local_14 = (char *)piVar21;
    if (0x4e < (int)piVar21) {
      local_14 = (char *)0x4f;
    }
    if ((int)uVar7 < 0x10) {
      if ((int)piVar21 <= (int)local_24) goto LAB_10004396;
      goto LAB_10004388;
    }
    uVar7 = 0x10;
    if ((int)local_24 < (int)piVar21) goto LAB_10004388;
LAB_10004396:
    if ((int)local_14 < (int)piVar21) goto LAB_100043c5;
  }
  else {
    local_14 = (char *)0x4f;
    do {
      if (0xf < (int)local_20) {
        uVar3 = 0xf;
        do {
          if ((local_18 != 0) && (*(int *)(local_18 + 0x340) != 0)) {
            iVar5 = *(int *)(local_18 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            if ((int)uVar3 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + uVar3 * 4) = 0xe4;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar3 * 4) = 0xe4;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar3 * 4) = 0xe4;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar3 * 4) = 0xff;
              }
            }
          }
          uVar3 = uVar3 + 1;
        } while (pcVar15 != (char *)uVar3);
      }
      local_14 = local_14 + 1;
    } while (local_14 != pcVar22);
    local_2c = pcVar22;
    if (local_18 != 0) {
      uVar3 = *(uint *)(local_18 + 4);
      pcVar8 = *(char **)(local_18 + 8);
      goto LAB_10004102;
    }
    uVar3 = 0xf;
    uVar18 = 0x1b;
LAB_10004295:
    do {
      local_1a = 0xac;
      local_1c = 0xacac;
      if ((local_18 != 0) && (-1 < (int)uVar3 && *(int *)(local_18 + 0x340) != 0)) {
        iVar5 = *(int *)(local_18 + 4);
        iVar17 = 800;
        if (iVar5 != 0) {
          iVar17 = iVar5;
        }
        if (((int)uVar3 < iVar17) && (*(int *)(local_18 + 8) == 0 || 0x4f < *(int *)(local_18 + 8)))
        {
          iVar17 = 0xc80;
          if (iVar5 != 0) {
            iVar17 = iVar5 << 2;
          }
          if (*(int *)(local_18 + 0xc) != 0) {
            iVar17 = *(int *)(local_18 + 0xc);
          }
          iVar17 = iVar17 * 0x4f;
          *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + uVar3 * 4) = 0xac;
          *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar3 * 4) = 0xac;
          *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar3 * 4) = 0xac;
          *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar3 * 4) = 0xff;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar18 != uVar3);
    uVar26 = CONCAT22((short)(CONCAT13(uVar27,0xac0000) >> 0x10),0xacac);
    uVar3 = 0xf;
    recovered_10006800(local_18,0xf,(uint)(local_28 + -0x40),0xc,1,uVar26);
    uVar27 = (undefined1)((uint)uVar26 >> 0x18);
    if (uVar20 != 0) goto LAB_10004340;
    piVar21 = (int *)0x208;
    local_14 = (char *)0x4f;
    uVar7 = 0x10;
    if (0x207 < (int)local_24) goto LAB_10004396;
LAB_10004388:
    piVar21 = local_24;
    if ((int)local_14 < (int)local_24) {
LAB_100043c5:
      do {
        local_2c = (char *)piVar21;
        if ((int)uVar3 < (int)uVar7) {
          uVar18 = uVar3;
          do {
            if ((uVar20 != 0) &&
               (piVar21 = (int *)(uVar20 + 0x340),
               -1 < (int)(uVar18 | (uint)local_14) && *piVar21 != 0)) {
              iVar5 = *(int *)(uVar20 + 4);
              iVar17 = 800;
              if (iVar5 != 0) {
                iVar17 = iVar5;
              }
              if ((int)uVar18 < iVar17) {
                iVar17 = 0x208;
                if (*(int *)(uVar20 + 8) != 0) {
                  iVar17 = *(int *)(uVar20 + 8);
                }
                uVar20 = local_18;
                if ((int)local_14 < iVar17) {
                  iVar17 = 0xc80;
                  if (iVar5 != 0) {
                    iVar17 = iVar5 << 2;
                  }
                  if (*(int *)(local_18 + 0xc) != 0) {
                    iVar17 = *(int *)(local_18 + 0xc);
                  }
                  iVar17 = iVar17 * (int)local_14;
                  *(undefined1 *)(*piVar21 + iVar17 + uVar18 * 4) = 0xac;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + uVar18 * 4) = 0xac;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + uVar18 * 4) = 0xac;
                  *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + uVar18 * 4) = 0xff;
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar7 != uVar18);
        }
        local_14 = local_14 + 1;
        piVar21 = (int *)local_2c;
      } while (local_14 != local_2c);
    }
  }
  uVar3 = local_18;
  if (uVar20 == 0) {
    piVar21 = (int *)0x208;
    local_14 = (char *)0x4f;
    local_20 = (char *)0x1a;
    uVar7 = 0x1b;
    if ((int)local_24 < 0x208) goto LAB_100044ed;
LAB_100044c1:
    if ((int)local_14 < (int)piVar21) {
LAB_10004512:
      do {
        if ((int)local_20 < (int)uVar7) {
          pcVar8 = local_20;
          do {
            if ((uVar20 != 0) &&
               (piVar1 = (int *)(uVar20 + 0x340),
               -1 < (int)((uint)pcVar8 | (uint)local_14) && *piVar1 != 0)) {
              iVar5 = *(int *)(uVar20 + 4);
              iVar17 = 800;
              if (iVar5 != 0) {
                iVar17 = iVar5;
              }
              if ((int)pcVar8 < iVar17) {
                iVar17 = 0x208;
                if (*(int *)(uVar20 + 8) != 0) {
                  iVar17 = *(int *)(uVar20 + 8);
                }
                uVar20 = local_18;
                if ((int)local_14 < iVar17) {
                  iVar17 = 0xc80;
                  if (iVar5 != 0) {
                    iVar17 = iVar5 << 2;
                  }
                  if (*(int *)(local_18 + 0xc) != 0) {
                    iVar17 = *(int *)(local_18 + 0xc);
                  }
                  iVar17 = iVar17 * (int)local_14;
                  *(undefined1 *)(*piVar1 + iVar17 + (int)pcVar8 * 4) = 0xac;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar8 * 4) = 0xac;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar8 * 4) = 0xac;
                  *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar8 * 4) = 0xff;
                }
              }
            }
            pcVar8 = (char *)((int)pcVar8 + 1);
          } while ((char *)uVar7 != pcVar8);
        }
        local_14 = local_14 + 1;
      } while ((int *)local_14 != piVar21);
    }
  }
  else {
    uVar7 = 800;
    if (*(uint *)(uVar20 + 4) != 0) {
      uVar7 = *(uint *)(uVar20 + 4);
    }
    local_20 = (char *)uVar7;
    if (0x19 < (int)uVar7) {
      local_20 = (char *)0x1a;
    }
    piVar21 = (int *)(char *)0x208;
    if (*(char **)(uVar20 + 8) != (char *)0x0) {
      piVar21 = (int *)*(char **)(uVar20 + 8);
    }
    local_14 = (char *)piVar21;
    if (0x4e < (int)piVar21) {
      local_14 = (char *)0x4f;
    }
    if ((int)uVar7 < 0x1b) {
      if ((int)local_24 < (int)piVar21) goto LAB_100044ed;
      goto LAB_100044c1;
    }
    uVar7 = 0x1b;
    if ((int)piVar21 <= (int)local_24) goto LAB_100044c1;
LAB_100044ed:
    piVar21 = local_24;
    if ((int)local_14 < (int)local_24) goto LAB_10004512;
  }
  if (0 < (int)local_e0) {
    local_14 = local_ec;
    local_24 = (int *)local_e8;
    local_2c = local_ec + 1;
    local_1c = 0xbebe;
    local_1a = 0xbe;
    local_20 = (char *)local_e4;
    uVar26 = CONCAT13(uVar27,0xbebebe);
    recovered_10006800(local_18,(uint)local_2c,local_e8 + 1,local_e4 + -2,(int)(local_e0 + -2),
                       uVar26);
    piVar21 = local_24;
    local_1c = 0x7474;
    local_1a = 0x74;
    uVar26 = CONCAT13((char)((uint)uVar26 >> 0x18),0x747474);
    recovered_10006800(uVar3,(uint)local_14,(uint)local_24,local_e4,1,uVar26);
    pcVar8 = local_14;
    local_28 = local_e0;
    uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
    recovered_10006800(uVar3,(uint)local_14,(uint)(local_e0 + ((int)piVar21 - 1)),(int)local_20,1,
                       uVar26);
    piVar21 = local_24;
    uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
    recovered_10006800(uVar3,(uint)pcVar8,(uint)local_24,1,(int)local_e0,uVar26);
    uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
    recovered_10006800(uVar3,(uint)(pcVar8 + (int)local_20 + -1),(uint)piVar21,1,(int)local_28,
                       uVar26);
    uVar27 = (undefined1)((uint)uVar26 >> 0x18);
    uVar20 = uVar3;
  }
  uVar7 = local_18;
  uVar3 = local_18;
  if (uVar20 == 0) {
    pcVar8 = (char *)0x1b;
    local_20 = (char *)0xf;
    local_24 = (int *)0x4d;
    uVar3 = 0;
LAB_10004753:
    local_14 = (char *)0x3f;
    do {
      if ((int)local_20 < (int)pcVar8) {
        pcVar15 = local_20;
        do {
          if ((uVar3 != 0) && (piVar21 = (int *)(uVar3 + 0x340), -1 < (int)pcVar15 && *piVar21 != 0)
             ) {
            iVar5 = *(int *)(uVar3 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            uVar3 = local_18;
            if ((int)pcVar15 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar15 * 4) = 0xee;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar15 * 4) = 0xee;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar15 * 4) = 0xee;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar15 * 4) = 0xff;
              }
            }
          }
          pcVar15 = pcVar15 + 1;
        } while (pcVar8 != pcVar15);
      }
      local_14 = local_14 + 1;
    } while ((int *)local_14 != local_24);
    if (uVar3 != 0) {
      pcVar15 = *(char **)(uVar3 + 4);
      pcVar6 = *(char **)(uVar3 + 8);
      goto LAB_10004829;
    }
    pcVar15 = (char *)0xf;
    pcVar8 = (char *)0x1b;
LAB_10004949:
    do {
      while (uVar3 != 0) {
        piVar21 = (int *)(uVar3 + 0x340);
        if (-1 < (int)pcVar15 && *piVar21 != 0) {
          iVar5 = *(int *)(uVar3 + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar3 = local_18;
          if (((int)pcVar15 < iVar17) &&
             (*(int *)(local_18 + 8) == 0 || 0x3f < *(int *)(local_18 + 8))) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0x3f + (int)pcVar15 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = 0x96;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = 0x96;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = 0x96;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        pcVar15 = pcVar15 + 1;
        if (pcVar15 == pcVar8) goto LAB_10004864;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar8);
    pcVar15 = (char *)0xf;
    pcVar8 = (char *)0x1b;
LAB_10004a19:
    do {
      while (uVar3 != 0) {
        piVar21 = (int *)(uVar3 + 0x340);
        if (-1 < (int)pcVar15 && *piVar21 != 0) {
          iVar5 = *(int *)(uVar3 + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar3 = local_18;
          if (((int)pcVar15 < iVar17) &&
             (*(int *)(local_18 + 8) == 0 || 0x4c < *(int *)(local_18 + 8))) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0x4c + (int)pcVar15 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = 0x96;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = 0x96;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = 0x96;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        pcVar15 = pcVar15 + 1;
        if (pcVar15 == pcVar8) goto LAB_100048a5;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar8);
    pcVar8 = (char *)0x10;
    local_20 = (char *)0xf;
    local_24 = (int *)0x4d;
    uVar3 = 0;
LAB_10004aa8:
    local_14 = (char *)0x3f;
    do {
      if ((int)local_20 < (int)pcVar8) {
        pcVar15 = local_20;
        do {
          if ((uVar3 != 0) && (piVar21 = (int *)(uVar3 + 0x340), -1 < (int)pcVar15 && *piVar21 != 0)
             ) {
            iVar5 = *(int *)(uVar3 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            uVar3 = local_18;
            if ((int)pcVar15 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar15 * 4) = 0x96;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar15 * 4) = 0x96;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar15 * 4) = 0x96;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar15 * 4) = 0xff;
              }
            }
          }
          pcVar15 = pcVar15 + 1;
        } while (pcVar8 != pcVar15);
      }
      local_14 = local_14 + 1;
    } while ((int *)local_14 != local_24);
    if (uVar3 != 0) {
      pcVar15 = *(char **)(uVar3 + 4);
      pcVar6 = *(char **)(uVar3 + 8);
      goto LAB_10004b85;
    }
    pcVar8 = (char *)0x1b;
    local_20 = (char *)0x1a;
    local_24 = (int *)0x4d;
    uVar7 = 0;
LAB_10004be3:
    local_14 = (char *)0x3f;
    do {
      if ((int)local_20 < (int)pcVar8) {
        pcVar15 = local_20;
        do {
          if ((uVar7 != 0) && (piVar21 = (int *)(uVar7 + 0x340), -1 < (int)pcVar15 && *piVar21 != 0)
             ) {
            iVar5 = *(int *)(uVar7 + 4);
            iVar17 = 800;
            if (iVar5 != 0) {
              iVar17 = iVar5;
            }
            uVar7 = local_18;
            if ((int)pcVar15 < iVar17) {
              iVar17 = 0x208;
              if (*(int *)(local_18 + 8) != 0) {
                iVar17 = *(int *)(local_18 + 8);
              }
              if ((int)local_14 < iVar17) {
                iVar17 = 0xc80;
                if (iVar5 != 0) {
                  iVar17 = iVar5 << 2;
                }
                if (*(int *)(local_18 + 0xc) != 0) {
                  iVar17 = *(int *)(local_18 + 0xc);
                }
                iVar17 = iVar17 * (int)local_14;
                *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar15 * 4) = 0x96;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar15 * 4) = 0x96;
                *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar15 * 4) = 0x96;
                *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar15 * 4) = 0xff;
              }
            }
          }
          pcVar15 = pcVar15 + 1;
        } while (pcVar8 != pcVar15);
      }
      local_14 = local_14 + 1;
    } while ((int *)local_14 != local_24);
    if (uVar7 != 0) {
      pcVar15 = *(char **)(uVar7 + 4);
      pcVar6 = *(char **)(uVar7 + 8);
      goto LAB_10004cb9;
    }
    pcVar15 = (char *)0x15;
    pcVar8 = (char *)0x16;
LAB_10004f69:
    do {
      while (uVar7 != 0) {
        piVar21 = (int *)(uVar7 + 0x340);
        if (-1 < (int)pcVar15 && *piVar21 != 0) {
          iVar5 = *(int *)(uVar7 + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar7 = local_18;
          if (((int)pcVar15 < iVar17) &&
             (*(int *)(local_18 + 8) == 0 || 0x42 < *(int *)(local_18 + 8))) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0x42 + (int)pcVar15 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        pcVar15 = pcVar15 + 1;
        if (pcVar15 == pcVar8) goto LAB_10004cfc;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar8);
    pcVar15 = (char *)0x14;
    pcVar8 = (char *)0x17;
LAB_10005039:
    do {
      while (uVar7 != 0) {
        piVar21 = (int *)(uVar7 + 0x340);
        if (-1 < (int)pcVar15 && *piVar21 != 0) {
          iVar5 = *(int *)(uVar7 + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar7 = local_18;
          if (((int)pcVar15 < iVar17) &&
             (*(int *)(local_18 + 8) == 0 || 0x43 < *(int *)(local_18 + 8))) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0x43 + (int)pcVar15 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        pcVar15 = pcVar15 + 1;
        if (pcVar15 == pcVar8) goto LAB_10004d3d;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar8);
    pcVar15 = (char *)0x13;
    pcVar8 = (char *)0x18;
LAB_10005109:
    do {
      while (uVar7 != 0) {
        piVar21 = (int *)(uVar7 + 0x340);
        if (-1 < (int)pcVar15 && *piVar21 != 0) {
          iVar5 = *(int *)(uVar7 + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar7 = local_18;
          if (((int)pcVar15 < iVar17) &&
             (*(int *)(local_18 + 8) == 0 || 0x44 < *(int *)(local_18 + 8))) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0x44 + (int)pcVar15 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        pcVar15 = pcVar15 + 1;
        if (pcVar15 == pcVar8) goto LAB_10004d7e;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar8);
    pcVar15 = (char *)0x12;
    pcVar8 = (char *)0x19;
LAB_100051d9:
    do {
      while (uVar7 != 0) {
        piVar21 = (int *)(uVar7 + 0x340);
        if (-1 < (int)pcVar15 && *piVar21 != 0) {
          iVar5 = *(int *)(uVar7 + 4);
          iVar17 = 800;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar7 = local_18;
          if (((int)pcVar15 < iVar17) &&
             (*(int *)(local_18 + 8) == 0 || 0x45 < *(int *)(local_18 + 8))) {
            iVar17 = 0xc80;
            if (iVar5 != 0) {
              iVar17 = iVar5 << 2;
            }
            if (*(int *)(local_18 + 0xc) != 0) {
              iVar17 = *(int *)(local_18 + 0xc);
            }
            iVar5 = iVar17 * 0x45 + (int)pcVar15 * 4;
            *(undefined1 *)(*piVar21 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 1 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 2 + iVar5) = 0x46;
            *(undefined1 *)(*(int *)(local_18 + 0x340) + 3 + iVar5) = 0xff;
          }
        }
        pcVar15 = pcVar15 + 1;
        if (pcVar15 == pcVar8) goto LAB_10004dbf;
      }
      pcVar15 = pcVar15 + 1;
    } while (pcVar15 != pcVar8);
    pcVar8 = (char *)0x1d0;
  }
  else {
    pcVar15 = *(char **)(uVar20 + 4);
    pcVar8 = (char *)0x320;
    if (pcVar15 != (char *)0x0) {
      pcVar8 = pcVar15;
    }
    pcVar6 = *(char **)(uVar20 + 8);
    local_20 = pcVar8;
    if (0xe < (int)pcVar8) {
      local_20 = (char *)0xf;
    }
    pcVar22 = (char *)0x208;
    if (pcVar6 != (char *)0x0) {
      pcVar22 = pcVar6;
    }
    if (0x1a < (int)pcVar8) {
      pcVar8 = (char *)0x1b;
    }
    local_24 = (int *)pcVar22;
    if ((char *)0x4c < pcVar22) {
      local_24 = (int *)0x4d;
    }
    if (0x3f < (int)pcVar22) goto LAB_10004753;
LAB_10004829:
    if (pcVar6 == (char *)0x0 || 0x3f < (int)pcVar6) {
      pcVar6 = (char *)0x320;
      if (pcVar15 != (char *)0x0) {
        pcVar6 = pcVar15;
      }
      pcVar8 = pcVar6;
      if (0x1a < (int)pcVar6) {
        pcVar8 = (char *)0x1b;
      }
      pcVar15 = pcVar6;
      if (0xe < (int)pcVar6) {
        pcVar15 = (char *)0xf;
      }
      if (0xf < (int)pcVar6) goto LAB_10004949;
LAB_10004864:
      pcVar15 = *(char **)(uVar3 + 4);
      pcVar6 = *(char **)(uVar3 + 8);
    }
    if (pcVar6 == (char *)0x0 || 0x4c < (int)pcVar6) {
      pcVar6 = (char *)0x320;
      if (pcVar15 != (char *)0x0) {
        pcVar6 = pcVar15;
      }
      pcVar8 = pcVar6;
      if (0x1a < (int)pcVar6) {
        pcVar8 = (char *)0x1b;
      }
      pcVar15 = pcVar6;
      if (0xe < (int)pcVar6) {
        pcVar15 = (char *)0xf;
      }
      if (0xf < (int)pcVar6) goto LAB_10004a19;
LAB_100048a5:
      pcVar15 = *(char **)(uVar3 + 4);
      pcVar6 = *(char **)(uVar3 + 8);
    }
    pcVar8 = (char *)0x320;
    if (pcVar15 != (char *)0x0) {
      pcVar8 = pcVar15;
    }
    local_20 = pcVar8;
    if (0xe < (int)pcVar8) {
      local_20 = (char *)0xf;
    }
    pcVar22 = (char *)0x208;
    if (pcVar6 != (char *)0x0) {
      pcVar22 = pcVar6;
    }
    if (0xf < (int)pcVar8) {
      pcVar8 = (char *)0x10;
    }
    local_24 = (int *)pcVar22;
    if ((char *)0x4c < pcVar22) {
      local_24 = (int *)0x4d;
    }
    uVar3 = local_18;
    if (0x3f < (int)pcVar22) goto LAB_10004aa8;
LAB_10004b85:
    pcVar8 = (char *)0x320;
    if (pcVar15 != (char *)0x0) {
      pcVar8 = pcVar15;
    }
    local_20 = pcVar8;
    if (0x19 < (int)pcVar8) {
      local_20 = (char *)0x1a;
    }
    pcVar22 = (char *)0x208;
    if (pcVar6 != (char *)0x0) {
      pcVar22 = pcVar6;
    }
    if (0x1a < (int)pcVar8) {
      pcVar8 = (char *)0x1b;
    }
    local_24 = (int *)pcVar22;
    if ((char *)0x4c < pcVar22) {
      local_24 = (int *)0x4d;
    }
    if (0x3f < (int)pcVar22) goto LAB_10004be3;
LAB_10004cb9:
    if (pcVar6 == (char *)0x0 || 0x42 < (int)pcVar6) {
      pcVar8 = (char *)0x320;
      if (pcVar15 != (char *)0x0) {
        pcVar8 = pcVar15;
      }
      if ((int)pcVar8 < 0x15) {
        bVar23 = (int)(pcVar8 + -0x16) < 0;
        pcVar15 = pcVar8;
        if (0x15 < (int)pcVar8) goto LAB_10004cf1;
LAB_10004ce4:
        if (SBORROW4((int)pcVar8,0x16) == bVar23) goto LAB_10004f69;
      }
      else {
        bVar23 = (int)(pcVar8 + -0x16) < 0;
        pcVar15 = (char *)0x15;
        if ((int)pcVar8 < 0x16) goto LAB_10004ce4;
LAB_10004cf1:
        bVar24 = SBORROW4((int)pcVar8,0x16);
        pcVar8 = (char *)0x16;
        if (bVar24 == bVar23) goto LAB_10004f69;
      }
LAB_10004cfc:
      pcVar15 = *(char **)(uVar7 + 4);
      pcVar6 = *(char **)(uVar7 + 8);
    }
    if (pcVar6 == (char *)0x0 || 0x43 < (int)pcVar6) {
      pcVar6 = (char *)0x320;
      if (pcVar15 != (char *)0x0) {
        pcVar6 = pcVar15;
      }
      pcVar8 = pcVar6;
      if (0x16 < (int)pcVar6) {
        pcVar8 = (char *)0x17;
      }
      pcVar15 = pcVar6;
      if (0x13 < (int)pcVar6) {
        pcVar15 = (char *)0x14;
      }
      if (0x14 < (int)pcVar6) goto LAB_10005039;
LAB_10004d3d:
      pcVar15 = *(char **)(uVar7 + 4);
      pcVar6 = *(char **)(uVar7 + 8);
    }
    if (pcVar6 == (char *)0x0 || 0x44 < (int)pcVar6) {
      pcVar6 = (char *)0x320;
      if (pcVar15 != (char *)0x0) {
        pcVar6 = pcVar15;
      }
      pcVar8 = pcVar6;
      if (0x17 < (int)pcVar6) {
        pcVar8 = (char *)0x18;
      }
      pcVar15 = pcVar6;
      if (0x12 < (int)pcVar6) {
        pcVar15 = (char *)0x13;
      }
      if (0x13 < (int)pcVar6) goto LAB_10005109;
LAB_10004d7e:
      pcVar15 = *(char **)(uVar7 + 4);
      pcVar6 = *(char **)(uVar7 + 8);
    }
    if (pcVar6 == (char *)0x0 || 0x45 < (int)pcVar6) {
      pcVar6 = (char *)0x320;
      if (pcVar15 != (char *)0x0) {
        pcVar6 = pcVar15;
      }
      pcVar8 = pcVar6;
      if (0x18 < (int)pcVar6) {
        pcVar8 = (char *)0x19;
      }
      pcVar15 = pcVar6;
      if (0x11 < (int)pcVar6) {
        pcVar15 = (char *)0x12;
      }
      if (0x12 < (int)pcVar6) goto LAB_100051d9;
LAB_10004dbf:
      pcVar15 = *(char **)(uVar7 + 4);
      pcVar6 = *(char **)(uVar7 + 8);
    }
    local_2c = pcVar6;
    if ((int)pcVar6 < 0xad) {
      local_2c = (char *)0xac;
    }
    local_20 = (char *)0x320;
    if (pcVar15 != (char *)0x0) {
      local_20 = pcVar15;
    }
    local_2c = local_2c + -0x38;
    pcVar8 = (char *)0x1d0;
    if (pcVar6 != (char *)0x0) {
      pcVar8 = local_2c;
    }
    pcVar15 = (char *)0x208;
    if (pcVar6 != (char *)0x0) {
      pcVar15 = pcVar6;
    }
    pcVar22 = local_20;
    if (0x1a < (int)local_20) {
      pcVar22 = (char *)0x1b;
    }
    local_24 = (int *)(pcVar8 + 0xe);
    if ((int)pcVar15 <= (int)(pcVar8 + 0xe)) {
      local_24 = (int *)pcVar15;
    }
    if ((int)pcVar8 < (int)pcVar15) {
      do {
        if (0xf < (int)local_20) {
          pcVar15 = (char *)0xf;
          do {
            piVar21 = (int *)(uVar7 + 0x340);
            if (*piVar21 != 0 && -1 < (int)pcVar8) {
              iVar5 = *(int *)(uVar7 + 4);
              iVar17 = 800;
              if (iVar5 != 0) {
                iVar17 = iVar5;
              }
              uVar7 = local_18;
              if ((int)pcVar15 < iVar17) {
                iVar17 = 0x208;
                if (*(int *)(local_18 + 8) != 0) {
                  iVar17 = *(int *)(local_18 + 8);
                }
                if ((int)pcVar8 < iVar17) {
                  iVar17 = 0xc80;
                  if (iVar5 != 0) {
                    iVar17 = iVar5 << 2;
                  }
                  if (*(int *)(local_18 + 0xc) != 0) {
                    iVar17 = *(int *)(local_18 + 0xc);
                  }
                  iVar17 = iVar17 * (int)pcVar8;
                  *(undefined1 *)(*piVar21 + iVar17 + (int)pcVar15 * 4) = 0xee;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 1 + (int)pcVar15 * 4) = 0xee
                  ;
                  *(undefined1 *)(*(int *)(local_18 + 0x340) + iVar17 + 2 + (int)pcVar15 * 4) = 0xee
                  ;
                  *(undefined1 *)(iVar17 + *(int *)(local_18 + 0x340) + 3 + (int)pcVar15 * 4) = 0xff
                  ;
                }
              }
            }
            pcVar15 = pcVar15 + 1;
          } while (pcVar22 != pcVar15);
        }
        pcVar8 = pcVar8 + 1;
      } while ((int *)pcVar8 != local_24);
      pcVar6 = *(char **)(uVar7 + 8);
      local_2c = pcVar6;
      if ((int)pcVar6 < 0xad) {
        local_2c = (char *)0xac;
      }
      local_2c = local_2c + -0x38;
      local_14 = pcVar22;
    }
    pcVar8 = (char *)0x1d0;
    if (pcVar6 != (char *)0x0) {
      pcVar8 = local_2c;
    }
  }
  local_1c = 0x9696;
  local_1a = 0x96;
  uVar26 = CONCAT13(uVar27,0x969696);
  recovered_10006800(uVar7,0xf,(uint)pcVar8,0xc,1,uVar26);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
  recovered_10006800(uVar7,0xf,(uint)(pcVar8 + 0xd),0xc,1,uVar26);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
  recovered_10006800(uVar7,0xf,(uint)pcVar8,1,0xe,uVar26);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
  recovered_10006800(uVar7,0x1a,(uint)pcVar8,1,0xe,uVar26);
  if (uVar7 == 0) {
    uVar3 = 0x1d7;
  }
  else {
    iVar5 = *(int *)(uVar7 + 8);
    iVar17 = iVar5;
    if (iVar5 < 0xad) {
      iVar17 = 0xac;
    }
    uVar3 = 0x1d7;
    if (iVar5 != 0) {
      uVar3 = iVar17 - 0x31;
    }
  }
  local_1c = 0x4646;
  local_1a = 0x46;
  uVar26 = CONCAT13((char)((uint)uVar26 >> 0x18),0x464646);
  recovered_10006800(uVar7,0x12,uVar3 - 2,7,1,uVar26);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
  recovered_10006800(uVar7,0x13,uVar3 - 1,5,1,uVar26);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
  recovered_10006800(uVar7,0x14,uVar3,3,1,uVar26);
  uVar26 = CONCAT22(CONCAT11((char)((uint)uVar26 >> 0x18),local_1a),local_1c);
  recovered_10006800(uVar7,0x15,uVar3 + 1,1,1,uVar26);
  if (uVar7 == 0) {
    iVar5 = 800;
    local_18 = 0x1f0;
  }
  else {
    local_18 = 0x1f0;
    if (*(int *)(uVar7 + 8) != 0) {
      local_18 = *(int *)(uVar7 + 8) - 0x18;
    }
    iVar5 = 800;
    if (*(int *)(uVar7 + 4) != 0) {
      iVar5 = *(int *)(uVar7 + 4);
    }
  }
  PF_PART3(local_ec, 0) = 0xe2e5e0;
  uVar26 = CONCAT13((char)((uint)uVar26 >> 0x18),0xe2e5e0);
  uVar3 = 0;
  recovered_10006800(uVar7,0,local_18,iVar5,0x18,uVar26);
  local_ec = (char *)CONCAT13(PF_PART1(local_ec, 3),0x959991);
  local_14 = (char *)iVar5;
  recovered_10006800(uVar7,0,local_18,iVar5,1,CONCAT13((char)((uint)uVar26 >> 0x18),0x959991));
  vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x2ebU));
  if (*(char *)(uVar7 + 0x57e) == '\0') {
    vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1d7U));
  }
  pf_varargs_10006cce__4__4_((char *)&local_ec,0x90,"%s%s",(uint)vararg0,uVar7 + 0x4e8);
  iVar5 = *(int *)(uVar7 + 0x344);
  if (iVar5 < 1) {
    iVar5 = 6;
  }
  uVar20 = ((int)local_14 + -0x14) / iVar5;
  if ((int)uVar20 < 2) {
    uVar20 = 1;
  }
  local_1c = 0x332b;
  local_1a = 0x30;
  do {
    if (*(char *)((int)&local_ec + uVar3) == '\0') goto LAB_10005551;
    uVar3 = uVar3 + 1;
  } while (uVar20 != uVar3);
  uVar3 = uVar20;
LAB_10005551:
  if (*(int *)(uVar7 + 0x348) < 1) {
    iVar5 = 7;
  }
  else {
    iVar5 = (0x18 - *(int *)(uVar7 + 0x348)) / 2;
  }
  recovered_100069f0(uVar7,10,iVar5 + local_18,(char *)&local_ec,uVar3,
                     CONCAT22((short)(CONCAT13((char)((uint)vararg0 >> 0x18),0x300000) >> 0x10),
                              0x332b));
  return;
}

#undef DAT_00000004
#undef DAT_0000034c
#undef DAT_00000354
#undef DAT_00000358
#undef UNK_01806e93
#undef UNK_01806fa7
#undef _DAT_00000004
#undef _DAT_0000034c
#undef _DAT_00000354
#undef _DAT_00000358
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_5c
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
#undef in_stack_ffffff00
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_1a
#undef local_18
#undef local_14

#undef UNK_01806e99
#define UNK_01806e99 (*(uint8_t *)(0x1806e99U))
#undef UNK_01806ea6
#define UNK_01806ea6 (*(uint8_t *)(0x1806ea6U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005650
 */

void recovered_10005650(int in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined *vararg0;
  int iVar2;
  int iVar3;
  int iVar4;

  pf_varargs_10006cce__4_((char *)(in_ECX + 0x420),0xc0,"%s",in_ECX + 0x360);
  uVar1 = strlen((char *)(in_ECX + 0x420));
  *(ulong *)(in_ECX + 0x4e0) = uVar1;
  *(undefined4 *)(in_ECX + 0x4e4) = 0;
  *(undefined1 *)(in_ECX + 0x57c) = 1;
  *(char *)(in_ECX + 0x57d) = (char)in_EDX;
  vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ddU));
  if (in_EDX == 0) {
    vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1eaU));
  }
  pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",(uint)vararg0);
  iVar4 = *(int *)(in_ECX + 4);
  iVar3 = iVar4;
  if (iVar4 < 0xa3) {
    iVar3 = 0xa2;
  }
  iVar2 = 0x2c6;
  if (iVar4 != 0) {
    iVar2 = iVar3 + -0x5a;
  }
  iVar4 = *(int *)(in_ECX + 0x344);
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  iVar2 = iVar2 / iVar4;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar4 = *(int *)(in_ECX + 0x4e4);
  iVar3 = *(int *)(in_ECX + 0x4e0);
  if (iVar4 <= iVar3) {
    if (iVar3 < iVar4 + iVar2) goto LAB_10005728;
    iVar3 = (iVar3 - iVar2) + 1;
  }
  *(int *)(in_ECX + 0x4e4) = iVar3;
  iVar4 = iVar3;
LAB_10005728:
  if (iVar4 < 0) {
    *(undefined4 *)(in_ECX + 0x4e4) = 0;
  }
  return;
}

#undef UNK_01806e99
#undef UNK_01806ea6

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
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_000068d0
#define UINT_000068d0 (*(uint *)(0x68d0U))
#define dst (*(char * *)(frame + 16))
#define local_154 (*(char (*)[128])(frame + 28))
#define local_d4 (*(uint *)(frame + 156))
#define local_d0 (*(char (*)[192])(frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005740
 */

undefined4 recovered_10005740(int in_ECX)

{
  unsigned char frame[400] __attribute__((aligned(16))) = {0};

  char *in_ECX_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;

  if ((*(int *)(in_ECX + 0x34c) == 0) || (*(char *)(in_ECX + 0x360) == '\0')) {
    dst = "Save failed";
    goto LAB_10005899;
  }
  in_ECX_00 = (char *)(in_ECX + 0x360);
  bVar2 = recovered_10005f70(in_ECX_00,&local_d4);
  if (bVar2) {
    iVar4 = Ram00006800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) && (uVar3 = Ram00006808, 0xd3 < uVar3)) {
      pcVar1 = (code *)UINT_000068d0;
      if (pcVar1 != (code *)0x0) {
        uVar3 = (*pcVar1)(local_d4,local_d0,*(void **)(in_ECX + 0x34c),*(uint *)(in_ECX + 0x354));
LAB_10005832:
        if (uVar3 != 0) {
          *(undefined1 *)(in_ECX + 0x57e) = 0;
          pf_varargs_10006cce__4_(local_154,0x80,"Saved %s",(uint)in_ECX_00);
          iVar4 = pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",(uint)local_154);
          return CONCAT31((int3)((uint)iVar4 >> 8),1);
        }
      }
    }
    else {
      iVar4 = Ram00006800;
      if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
         ((uVar3 = Ram00006808, 0xb < uVar3 &&
          ((uVar3 = Ram00006808, 0x3b < uVar3 &&
           (pcVar1 = (code *)UINT_00006838, pcVar1 != (code *)0x0)))))) {
        uVar3 = (*pcVar1)(local_d0,*(void **)(in_ECX + 0x34c),*(uint *)(in_ECX + 0x354));
        goto LAB_10005832;
      }
    }
  }
  dst = local_154;
  pf_varargs_10006cce__4_(dst,0x80,"Save failed: %s",(uint)in_ECX_00);
LAB_10005899:
  pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",(uint)dst);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef UINT_000068d0
#undef dst
#undef local_154
#undef local_d4
#undef local_d0

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
 * Address: 0x100058c0
 */

undefined4 recovered_100058c0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  if ((in_ECX == 0) || (*(int *)(in_ECX + 0x34c) == 0)) {
    return 0;
  }
  uVar3 = *(uint *)(in_ECX + 0x35c);
  uVar7 = *(uint *)(in_ECX + 0x354);
  uVar5 = *(uint *)(in_ECX + 0x358);
  if (uVar3 < uVar7) {
    uVar6 = uVar3;
    if (uVar7 <= uVar5) goto LAB_1000596f;
LAB_100058fd:
    uVar7 = uVar5;
    if (uVar6 != uVar5) {
LAB_10005975:
      uVar5 = uVar6;
      uVar8 = uVar7;
      if (uVar7 <= uVar3) {
        uVar5 = uVar7;
        uVar8 = uVar6;
      }
      if (uVar7 <= uVar6) {
        uVar7 = uVar6;
      }
      uVar3 = 0;
      if (uVar5 <= uVar7) {
        uVar3 = uVar7 - uVar5;
      }
      iVar1 = Ram00006800;
      if (((((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
           (uVar7 = Ram00006808, uVar7 < 0xc)) ||
          ((uVar7 = Ram00006808, uVar7 < 0x184 ||
           (pcVar2 = (code *)UINT_00006980, pcVar2 == (code *)0x0)))) ||
         (uVar3 = (*pcVar2)((char *)(*(int *)(in_ECX + 0x34c) + uVar5),uVar3), uVar3 == 0)) {
        pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",((uintptr_t)pf_module_state+0x232U));
        return 0;
      }
      pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",((uintptr_t)pf_module_state+0x21bU));
      iVar1 = *(int *)(in_ECX + 0x34c);
      if (uVar8 <= uVar5 || iVar1 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(in_ECX + 0x354);
      if (uVar3 < uVar5) {
        return 0;
      }
      uVar7 = uVar3;
      if (uVar8 <= uVar3) {
        uVar7 = uVar8;
      }
      iVar4 = uVar5 - uVar7;
      if (uVar7 <= uVar5) {
        return 0;
      }
      memmove((void *)(iVar1 + uVar5),(void *)(iVar1 + uVar7),(uVar3 - uVar7) + 1);
      *(int *)(in_ECX + 0x354) = *(int *)(in_ECX + 0x354) + iVar4;
      *(uint *)(in_ECX + 0x358) = uVar5;
      *(uint *)(in_ECX + 0x35c) = uVar5;
      *(undefined1 *)(in_ECX + 0x57e) = 1;
      goto LAB_10005b51;
    }
  }
  else {
    uVar6 = uVar7;
    if (uVar5 < uVar7) goto LAB_100058fd;
LAB_1000596f:
    if (uVar6 != uVar7) goto LAB_10005975;
  }
  recovered_10005b60(in_ECX);
  iVar1 = *(int *)(in_ECX + 0x34c);
  uVar3 = *(uint *)(in_ECX + 0x354);
  if (iVar1 == 0) {
    uVar7 = 0;
LAB_10005abb:
    uVar5 = 0;
    if (uVar3 == 0) goto LAB_10005ae8;
LAB_10005ac1:
    uVar5 = uVar5 + (*(char *)(iVar1 + uVar5) == '\n');
  }
  else {
    uVar7 = *(uint *)(in_ECX + 0x358);
    if (uVar3 <= *(uint *)(in_ECX + 0x358)) {
      uVar7 = uVar3;
    }
    uVar5 = 0;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (*(char *)(iVar1 + -1 + uVar7) == '\n') {
        if (uVar3 < uVar7) goto LAB_10005abb;
        uVar5 = uVar7;
        if (uVar3 <= uVar7) goto joined_r0x10005ae6;
        goto LAB_10005946;
      }
    }
    uVar7 = uVar5;
    if (uVar3 == 0) {
joined_r0x10005ae6:
      if (uVar5 < uVar3) goto LAB_10005ac1;
    }
    else {
LAB_10005946:
      uVar5 = uVar7;
      do {
        if (*(char *)(iVar1 + uVar5) == '\n') goto joined_r0x10005ae6;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      uVar5 = uVar3;
    }
LAB_10005ae8:
    if ((uVar3 == 0) && (uVar5 == uVar7)) {
      return 0;
    }
  }
  memmove((void *)(iVar1 + uVar7),(void *)(iVar1 + uVar5),(uVar3 - uVar5) + 1);
  uVar3 = (uVar7 - uVar5) + *(int *)(in_ECX + 0x354);
  *(uint *)(in_ECX + 0x354) = uVar3;
  if (uVar3 <= uVar7) {
    uVar7 = uVar3;
  }
  *(uint *)(in_ECX + 0x358) = uVar7;
  *(uint *)(in_ECX + 0x35c) = uVar7;
  *(undefined1 *)(in_ECX + 0x57e) = 1;
  iVar4 = pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",((uintptr_t)pf_module_state+0x229U));
LAB_10005b51:
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
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
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
#undef UNK_01806eee
#define UNK_01806eee (*(uint8_t *)(0x1806eeeU))
#undef UNK_01806efa
#define UNK_01806efa (*(uint8_t *)(0x1806efaU))
#undef UNK_01806f0b
#define UNK_01806f0b (*(uint8_t *)(0x1806f0bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b60
 */

undefined4 recovered_10005b60(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *vararg0;

  if ((in_ECX == 0) || (iVar1 = *(int *)(in_ECX + 0x34c), iVar1 == 0)) {
LAB_10005c91:
    uVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(in_ECX + 0x35c);
    uVar8 = *(uint *)(in_ECX + 0x354);
    uVar7 = *(uint *)(in_ECX + 0x358);
    if (uVar6 < uVar8) {
      uVar4 = uVar6;
      if (uVar7 < uVar8) goto LAB_10005b9d;
LAB_10005bea:
      uVar7 = uVar8;
      if (uVar4 == uVar8) goto joined_r0x10005ba3;
LAB_10005bf0:
      uVar8 = uVar4;
      if (uVar7 <= uVar6) {
        uVar8 = uVar7;
      }
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      uVar5 = 0;
      uVar6 = 0;
      if (uVar8 <= uVar7) {
        uVar6 = uVar7 - uVar8;
      }
      iVar2 = Ram00006800;
      if (iVar2 == 0x50414d57) {
        iVar2 = Ram00006804;
        if ((((iVar2 == 0) || (uVar7 = Ram00006808, uVar7 < 0xc)) ||
            (uVar7 = Ram00006808, uVar7 < 0x184)) ||
           (pcVar3 = (code *)UINT_00006980, pcVar3 == (code *)0x0)) {
          uVar5 = 0;
          vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x232U));
        }
        else {
          uVar6 = (*pcVar3)((char *)(iVar1 + uVar8),uVar6);
          uVar5 = CONCAT31((int3)((uint)pcVar3 >> 8),uVar6 != 0);
          vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x23eU));
          if (uVar6 == 0) {
            vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x232U));
          }
        }
      }
      else {
        vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x232U));
      }
    }
    else {
      uVar4 = uVar8;
      if (uVar8 <= uVar7) goto LAB_10005bea;
LAB_10005b9d:
      if (uVar4 != uVar7) goto LAB_10005bf0;
joined_r0x10005ba3:
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (*(char *)(iVar1 + -1 + uVar4) == '\n') {
          uVar6 = 0;
          if (uVar4 <= uVar8) goto LAB_10005bc0;
          goto LAB_10005c8d;
        }
      }
      uVar4 = 0;
LAB_10005bc0:
      uVar6 = uVar4;
      if (uVar4 < uVar8) {
        do {
          if (*(char *)(iVar1 + uVar6) == '\n') goto LAB_10005c8d;
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar6);
        uVar6 = uVar8;
      }
LAB_10005c8d:
      if (uVar8 < uVar4) goto LAB_10005c91;
      if (uVar6 <= uVar8) {
        uVar8 = uVar6;
      }
      if (uVar8 <= uVar4) {
        uVar8 = uVar4;
      }
      uVar5 = 0;
      uVar6 = 0;
      if (uVar4 <= uVar8) {
        uVar6 = uVar8 - uVar4;
      }
      iVar2 = Ram00006800;
      vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x232U));
      if (iVar2 == 0x50414d57) {
        iVar2 = Ram00006804;
        if (((iVar2 == 0) || (uVar8 = Ram00006808, uVar8 < 0xc)) ||
           ((uVar8 = Ram00006808, uVar8 < 0x184 ||
            (pcVar3 = (code *)UINT_00006980, pcVar3 == (code *)0x0)))) {
          uVar5 = 0;
        }
        else {
          uVar6 = (*pcVar3)((char *)(iVar1 + uVar4),uVar6);
          uVar5 = CONCAT31((int3)((uint)pcVar3 >> 8),uVar6 != 0);
          vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x24fU));
          if (uVar6 == 0) {
            vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x232U));
          }
        }
      }
    }
    pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",(uint)vararg0);
  }
  return uVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006980
#undef UNK_01806eee
#undef UNK_01806efa
#undef UNK_01806f0b

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
#undef UNK_01806f17
#define UNK_01806f17 (*(uint8_t *)(0x1806f17U))
#undef UNK_01806f24
#define UNK_01806f24 (*(uint8_t *)(0x1806f24U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d40
 */

undefined4 recovered_10005d40(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  char *outText;
  undefined4 uVar4;
  code *pcVar5;
  undefined3 uVar6;
  undefined *vararg0;

  iVar2 = Ram00006800;
  uVar3 = 0;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
      (uVar1 = Ram00006808, 0xb < uVar1)) &&
     ((uVar1 = Ram00006808, 0x18b < uVar1 && (pcVar5 = (code *)UINT_00006988, pcVar5 != (code *)0x0)
      ))) {
    uVar3 = (*pcVar5)();
  }
  if (((in_ECX == 0) || (uVar3 == 0 || *(int *)(in_ECX + 0x34c) == 0)) ||
     (uVar1 = *(uint *)(in_ECX + 0x350), uVar1 == 0)) {
    return 0;
  }
  if (uVar1 <= uVar3) {
    uVar3 = uVar1 - 1;
  }
  iVar2 = Ram00006800;
  vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x25bU));
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
      (uVar1 = Ram00006808, 0xb < uVar1)) &&
     ((uVar1 = Ram00006808, 0x4f < uVar1 && (pcVar5 = (code *)UINT_0000684c, pcVar5 != (code *)0x0))
     )) {
    outText = (*pcVar5)(uVar3 + 1);
    if (outText == (char *)0x0) {
      uVar4 = 0;
      goto LAB_10005f4a;
    }
    iVar2 = Ram00006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
       ((uVar1 = Ram00006808, 0xb < uVar1 && (uVar1 = Ram00006808, 0x187 < uVar1)))) {
      pcVar5 = (code *)UINT_00006984;
      if (((pcVar5 == (code *)0x0) || (uVar3 = (*pcVar5)(outText,uVar3 + 1), uVar3 == 0)) ||
         (uVar4 = recovered_10006040(in_ECX,outText,uVar3), (char)uVar4 == '\0')) goto LAB_10005f02;
      iVar2 = Ram00006800;
      uVar6 = (undefined3)(uVar3 >> 8);
      uVar4 = CONCAT31(uVar6,1);
      vararg0 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x268U));
      if (((iVar2 != 0x50414d57) || (iVar2 = Ram00006804, iVar2 == 0)) ||
         ((uVar3 = Ram00006808, uVar3 < 0xc || (uVar3 = Ram00006808, uVar3 < 0x54))))
      goto LAB_10005f4a;
      pcVar5 = (code *)UINT_00006850;
      uVar4 = CONCAT31(uVar6,1);
    }
    else {
      *outText = '\0';
LAB_10005f02:
      iVar2 = Ram00006800;
      if (((iVar2 != 0x50414d57) || (iVar2 = Ram00006804, iVar2 == 0)) ||
         ((uVar3 = Ram00006808, uVar3 < 0xc || (uVar3 = Ram00006808, uVar3 < 0x54))))
      goto LAB_10005f48;
      pcVar5 = (code *)UINT_00006850;
      uVar4 = 0;
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(outText);
    }
  }
  else {
LAB_10005f48:
    uVar4 = 0;
  }
LAB_10005f4a:
  pf_varargs_10006cce__4_((char *)(in_ECX + 0x4e8),0x80,"%s",(uint)vararg0);
  return uVar4;
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
#undef UNK_01806f17
#undef UNK_01806f24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f70
 */

bool recovered_10005f70(char *in_ECX,uint *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  char *pcVar5;

  bVar4 = in_EDX != (uint *)0x0 && in_ECX != (char *)0x0;
  if (in_EDX != (uint *)0x0 && in_ECX != (char *)0x0) {
    *in_EDX = 0xffffffff;
    pf_varargs_10006cce__4_((char *)(in_EDX + 1),0xc0,"%s",(uint)in_ECX);
    if ((*in_ECX == '[') && (cVar1 = in_ECX[1], 0xf5 < (byte)(cVar1 - 0x3aU))) {
      uVar2 = 0;
      pcVar5 = in_ECX + 4;
      do {
        pcVar3 = pcVar5;
        if (0xccccccc < uVar2) {
          return bVar4;
        }
        if (uVar2 == 0xccccccc && 7 < (byte)(cVar1 - 0x30U)) {
          return bVar4;
        }
        uVar2 = (uint)(byte)(cVar1 - 0x30U) + uVar2 * 10;
        cVar1 = pcVar3[-2];
        pcVar5 = pcVar3 + 1;
      } while ((byte)(cVar1 - 0x30U) < 10);
      if ((cVar1 == ']') && (pcVar3[-1] == ':')) {
        if (*pcVar3 != ';') {
          pcVar5 = pcVar3;
        }
        *in_EDX = uVar2;
        pcVar3 = "/";
        if (*pcVar5 != '\0') {
          pcVar3 = pcVar5;
        }
        pf_varargs_10006cce__4_((char *)(in_EDX + 1),0xc0,"%s",(uint)pcVar3);
      }
    }
  }
  return bVar4;
}


#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006040
 */

undefined4 recovered_10006040(int in_ECX,void *in_EDX,ulong param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (in_ECX == 0) {
    return 0;
  }
  iVar2 = *(int *)(in_ECX + 0x34c);
  if (in_EDX != (void *)0x0 && iVar2 != 0) {
    uVar1 = *(uint *)(in_ECX + 0x35c);
    uVar4 = *(uint *)(in_ECX + 0x354);
    local_18 = *(uint *)(in_ECX + 0x358);
    local_14 = uVar1;
    if (uVar4 <= uVar1) {
      local_14 = uVar4;
    }
    uVar3 = local_18;
    if (uVar4 <= local_18) {
      uVar3 = uVar4;
    }
    if (local_14 == uVar3) {
      if (uVar4 + param_3 < *(uint *)(in_ECX + 0x350)) {
LAB_1000611c:
        memmove((void *)((int)(iVar2 + local_18) + param_3),(void *)(iVar2 + local_18),
                           (uVar4 - local_18) + 1);
        memcpy((void *)(*(int *)(in_ECX + 0x34c) + *(int *)(in_ECX + 0x358)),in_EDX,
                           param_3);
        iVar2 = *(int *)(in_ECX + 0x358) + param_3;
        *(int *)(in_ECX + 0x358) = iVar2;
        *(int *)(in_ECX + 0x354) = *(int *)(in_ECX + 0x354) + param_3;
        *(int *)(in_ECX + 0x35c) = iVar2;
        *(undefined1 *)(in_ECX + 0x57e) = 1;
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
    }
    else {
      if (uVar1 < uVar3) {
        local_18 = local_14;
        local_14 = uVar3;
      }
      else {
        local_18 = uVar3;
      }
      if ((param_3 - (local_14 - local_18)) + uVar4 < *(uint *)(in_ECX + 0x350)) {
        memmove((void *)(iVar2 + local_18),(void *)(iVar2 + local_14),
                           (uVar4 - local_14) + 1);
        iVar2 = *(int *)(in_ECX + 0x34c);
        uVar4 = *(int *)(in_ECX + 0x354) - (local_14 - local_18);
        *(uint *)(in_ECX + 0x354) = uVar4;
        *(uint *)(in_ECX + 0x358) = local_18;
        *(uint *)(in_ECX + 0x35c) = local_18;
        goto LAB_1000611c;
      }
    }
  }
  return 0;
}

#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006180
 */

bool recovered_10006180(int in_ECX,int in_EDX,uint param_3,char param_4,char param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = iVar1;
  if (iVar1 < 0xad) {
    iVar2 = 0xac;
  }
  iVar7 = 0x30c;
  if (*(int *)(in_ECX + 4) != 0) {
    iVar7 = *(int *)(in_ECX + 4) + -0x14;
  }
  iVar4 = 0x208;
  if (iVar1 != 0) {
    iVar4 = iVar2;
  }
  iVar1 = *(int *)(in_ECX + 0x358);
  iVar2 = *(int *)(in_ECX + 0x35c);
  if (param_5 == '\0') {
    if (in_EDX < 0x4b) {
      return false;
    }
    if ((int)param_3 < 0x40) {
      return false;
    }
    if (iVar7 <= in_EDX) {
      return false;
    }
    if (iVar4 - 0x28U <= param_3) {
      return false;
    }
  }
  else {
    iVar3 = in_EDX;
    if (iVar7 + -1 <= in_EDX) {
      iVar3 = iVar7 + -1;
    }
    bVar10 = 0x4a < in_EDX;
    in_EDX = 0x4b;
    if (bVar10) {
      in_EDX = iVar3;
    }
    uVar9 = param_3;
    if (iVar4 - 0x29U <= param_3) {
      uVar9 = iVar4 - 0x29U;
    }
    bVar10 = 0x3f < (int)param_3;
    param_3 = 0x40;
    if (bVar10) {
      param_3 = uVar9;
    }
  }
  iVar7 = *(int *)(in_ECX + 0x344);
  if (*(int *)(in_ECX + 0x348) < 1) {
    iVar4 = 0xd;
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x348) + 3;
  }
  iVar4 = (int)(param_3 - 0x40) / iVar4;
  if (iVar7 < 1) {
    iVar7 = 6;
  }
  iVar7 = (in_EDX + -0x4b) / iVar7;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  iVar7 = iVar7 + *(int *)(in_ECX + 0x578);
  iVar3 = *(int *)(in_ECX + 0x34c);
  iVar5 = iVar4 + *(int *)(in_ECX + 0x574);
  if ((iVar5 == 0 || SCARRY4(iVar4,*(int *)(in_ECX + 0x574)) != iVar5 < 0) || iVar3 == 0) {
    if (iVar3 != 0) {
      uVar6 = 0;
      uVar8 = *(uint *)(in_ECX + 0x354);
      if (*(uint *)(in_ECX + 0x354) == 0) {
LAB_100062de:
        uVar9 = uVar6;
      }
      else {
LAB_10006292:
        uVar9 = uVar6;
        do {
          if (*(char *)(iVar3 + uVar9) == '\n') {
            uVar8 = uVar9;
            break;
          }
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
        uVar9 = uVar6;
        uVar6 = uVar8;
      }
      goto LAB_100062f7;
    }
  }
  else {
    uVar9 = *(uint *)(in_ECX + 0x354);
    if (uVar9 != 0) {
      iVar4 = 0;
      uVar8 = 0;
      do {
        if ((*(char *)(iVar3 + uVar8) == '\n') && (iVar4 = iVar4 + 1, iVar4 == iVar5)) {
          uVar6 = uVar8 + 1;
          if (uVar9 <= uVar8) {
            uVar9 = uVar6;
            uVar6 = 0;
            goto LAB_100062f7;
          }
          uVar8 = uVar9;
          if (uVar6 < uVar9) goto LAB_10006292;
          goto LAB_100062de;
        }
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
      uVar6 = uVar9;
      goto LAB_100062f7;
    }
  }
  uVar9 = 0;
  uVar6 = 0;
LAB_100062f7:
  if ((int)(uVar6 - uVar9) <= iVar7) {
    iVar7 = uVar6 - uVar9;
  }
  *(uint *)(in_ECX + 0x358) = iVar7 + uVar9;
  *(undefined1 *)(in_ECX + 0x57c) = 0;
  if (param_4 == '\0') {
    *(uint *)(in_ECX + 0x35c) = iVar7 + uVar9;
  }
  recovered_10002780(in_ECX);
  bVar10 = true;
  if (*(int *)(in_ECX + 0x358) == iVar1) {
    bVar10 = *(int *)(in_ECX + 0x35c) != iVar2;
  }
  return bVar10;
}


#define local_24 (*(int *)(frame + 28))
#define local_18 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006350
 */

void recovered_10006350(undefined4 *in_ECX,int in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;

  if (in_EDX == 0) {
    uVar3 = 0x1a0;
    iVar8 = 1;
    local_24 = 0x17a;
    local_18 = 0x20;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(in_EDX + 8);
    iVar7 = iVar1;
    if (iVar1 < 0xad) {
      iVar7 = 0xac;
    }
    local_24 = 0x17a;
    if (iVar1 != 0) {
      local_24 = iVar7 + -0x8e;
    }
    pcVar9 = *(char **)(in_EDX + 0x34c);
    iVar8 = 1;
    if ((pcVar9 != (char *)0x0) && (iVar2 = *(int *)(in_EDX + 0x354), iVar2 != 0)) {
      pcVar5 = pcVar9;
      do {
        iVar8 = iVar8 + (uint)(*pcVar5 == '\n');
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = 0x1a0;
    if (iVar1 != 0) {
      uVar3 = iVar7 - 0x68;
    }
    iVar7 = *(int *)(in_EDX + 0x348);
    if (iVar7 < 1) {
      local_18 = uVar3 / 0xd;
    }
    else {
      local_18 = uVar3 / (iVar7 + 3U);
      local_18 = local_18 + (local_18 == 0);
    }
    iVar1 = 1;
    if (pcVar9 != (char *)0x0) {
      for (iVar2 = *(int *)(in_EDX + 0x354); iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar1 = iVar1 + (uint)(*pcVar9 == '\n');
        pcVar9 = pcVar9 + 1;
      }
    }
    if (0 < iVar7) goto LAB_1000645a;
  }
  iVar7 = 10;
LAB_1000645a:
  iVar2 = 0;
  uVar3 = uVar3 / (iVar7 + 3U);
  iVar7 = (iVar1 - uVar3) - (uint)(uVar3 == 0);
  iVar1 = iVar7;
  if (iVar7 < 1) {
    iVar1 = 0;
  }
  iVar6 = 0x4f;
  if ((int)local_18 < iVar8) {
    iVar8 = (int)(local_18 * local_24) / iVar8;
    iVar4 = iVar8;
    if (local_24 <= iVar8) {
      iVar4 = local_24;
    }
    iVar2 = 0x12;
    if (0x11 < iVar8) {
      iVar2 = iVar4;
    }
    if ((0 < iVar7) && (local_24 - iVar2 != 0 && iVar2 <= local_24)) {
      iVar6 = ((local_24 - iVar2) * *(int *)(in_EDX + 0x574)) / iVar1 + 0x4f;
    }
  }
  *in_ECX = 0xf;
  in_ECX[1] = iVar6;
  in_ECX[2] = 0xc;
  in_ECX[3] = iVar2;
  return;
}

#undef local_24
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064e0
 */

void recovered_100064e0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  if (in_ECX != 0) {
    pcVar1 = *(char **)(in_ECX + 0x34c);
    iVar6 = 1;
    if (pcVar1 != (char *)0x0) {
      for (iVar3 = *(int *)(in_ECX + 0x354); iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar6 = iVar6 + (uint)(*pcVar1 == '\n');
        pcVar1 = pcVar1 + 1;
      }
    }
    iVar3 = *(int *)(in_ECX + 8);
    iVar4 = iVar3;
    if (iVar3 < 0xad) {
      iVar4 = 0xac;
    }
    uVar2 = 0x1a0;
    if (iVar3 != 0) {
      uVar2 = iVar4 - 0x68;
    }
    if (*(int *)(in_ECX + 0x348) < 1) {
      uVar5 = 0xd;
    }
    else {
      uVar5 = *(int *)(in_ECX + 0x348) + 3;
    }
    iVar6 = (iVar6 - uVar2 / uVar5) - (uint)(uVar2 / uVar5 == 0);
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    iVar3 = *(int *)(in_ECX + 0x574);
    iVar4 = iVar3;
    if (iVar6 <= iVar3) {
      iVar4 = iVar6;
    }
    iVar6 = 0;
    if (-1 < iVar3) {
      iVar6 = iVar4;
    }
    *(int *)(in_ECX + 0x574) = iVar6;
    if (*(int *)(in_ECX + 0x578) < 0) {
      *(undefined4 *)(in_ECX + 0x578) = 0;
      return;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065a0
 */

undefined4 recovered_100065a0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  if (in_ECX == 0) {
    return 0;
  }
  uVar5 = *(uint *)(in_ECX + 0x35c);
  uVar1 = *(uint *)(in_ECX + 0x354);
  uVar2 = *(uint *)(in_ECX + 0x358);
  uVar4 = uVar5;
  if (uVar1 <= uVar5) {
    uVar4 = uVar1;
  }
  uVar6 = uVar2;
  if (uVar1 <= uVar2) {
    uVar6 = uVar1;
  }
  if (uVar4 == uVar6) {
    iVar7 = *(int *)(in_ECX + 0x34c);
  }
  else {
    if (uVar5 < uVar6) {
      uVar5 = uVar6;
    }
    else {
      uVar5 = uVar4;
      uVar4 = uVar6;
    }
    iVar7 = *(int *)(in_ECX + 0x34c);
    pvVar3 = (void *)(uVar4 - uVar5);
    if (uVar4 < uVar5 && iVar7 != 0) {
      memmove((void *)(iVar7 + uVar4),(void *)(iVar7 + uVar5),(uVar1 - uVar5) + 1);
      *(int *)(in_ECX + 0x354) = *(int *)(in_ECX + 0x354) + (int)pvVar3;
      *(uint *)(in_ECX + 0x358) = uVar4;
      goto LAB_10006661;
    }
  }
  if ((uVar1 < uVar2 || uVar1 - uVar2 == 0) || iVar7 == 0) {
    return 0;
  }
  pvVar3 = memmove((void *)(iVar7 + uVar2),(void *)(iVar7 + 1 + uVar2),uVar1 - uVar2);
  *(int *)(in_ECX + 0x354) = *(int *)(in_ECX + 0x354) + -1;
  uVar4 = *(uint *)(in_ECX + 0x358);
LAB_10006661:
  *(uint *)(in_ECX + 0x35c) = uVar4;
  *(undefined1 *)(in_ECX + 0x57e) = 1;
  return CONCAT31((int3)((uint)pvVar3 >> 8),1);
}


#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006680
 */

void recovered_10006680(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char in_DL;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  if (in_ECX == 0) {
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x34c);
  uVar5 = *(uint *)(in_ECX + 0x358);
  if (iVar1 == 0) {
    if (in_DL == '\0') {
      uVar2 = 1;
      uVar3 = 0;
      uVar4 = 0;
      if (*(int *)(in_ECX + 0x354) == 0) goto LAB_100067e3;
      goto LAB_100067d7;
    }
LAB_1000677d:
    uVar4 = 0;
  }
  else {
    uVar4 = uVar5;
    if (*(uint *)(in_ECX + 0x354) <= uVar5) {
      uVar4 = *(uint *)(in_ECX + 0x354);
    }
    for (; uVar2 = 0, uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*(char *)(iVar1 + -1 + uVar4) == '\n') {
        uVar2 = uVar4;
        break;
      }
    }
    uVar4 = uVar5;
    if (*(uint *)(in_ECX + 0x354) <= uVar5) {
      uVar4 = *(uint *)(in_ECX + 0x354);
    }
    local_14 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*(char *)(iVar1 + -1 + uVar4) == '\n') {
        bVar6 = uVar5 < uVar4;
        uVar5 = uVar5 - uVar4;
        if (bVar6) goto LAB_10006733;
        break;
      }
    }
    local_14 = uVar5;
LAB_10006733:
    uVar5 = local_14;
    if (in_DL == '\0') {
      uVar4 = *(uint *)(in_ECX + 0x354);
      uVar3 = 0;
      if ((uVar2 <= uVar4) && (uVar3 = uVar2, uVar2 < uVar4)) {
        do {
          uVar3 = uVar2;
          if (*(char *)(iVar1 + uVar2) == '\n') goto LAB_1000678b;
          uVar2 = uVar2 + 1;
        } while (uVar4 != uVar2);
        goto LAB_100067e3;
      }
LAB_1000678b:
      if (uVar4 <= uVar3) goto LAB_100067e3;
      uVar2 = uVar3 + 1;
      if (uVar4 <= uVar2) goto LAB_100067d2;
      uVar3 = uVar2;
      do {
        if (*(char *)(iVar1 + uVar3) == '\n') goto LAB_1000675a;
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
LAB_100067cb:
      uVar3 = uVar4;
    }
    else {
      if (uVar2 == 0) goto LAB_1000677d;
      do {
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) break;
      } while (*(char *)(iVar1 + -1 + uVar2) != '\n');
      uVar4 = *(uint *)(in_ECX + 0x354);
      uVar3 = 0;
      if (uVar4 < uVar2) {
LAB_1000675a:
      }
      else {
        if (uVar2 < uVar4) {
          uVar3 = uVar2;
          do {
            if (*(char *)(iVar1 + uVar3) == '\n') goto LAB_1000675a;
            uVar3 = uVar3 + 1;
          } while (uVar4 != uVar3);
          goto LAB_100067cb;
        }
LAB_100067d2:
        uVar3 = uVar2;
      }
    }
LAB_100067d7:
    if ((int)(uVar3 - uVar2) <= (int)uVar5) {
      uVar5 = uVar3 - uVar2;
    }
    uVar4 = uVar5 + uVar2;
  }
LAB_100067e3:
  *(uint *)(in_ECX + 0x358) = uVar4;
  return;
}

#undef local_14

#define local_14 (*(uint *)(frame + 28))
#define local_20 (*(uint *)(frame + 16))
#define local_1c (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006800
 */

void recovered_10006800(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                       undefined4 param_6)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (in_ECX == 0) {
    local_20 = in_EDX;
    if (799 < (int)in_EDX) {
      local_20 = 800;
    }
    if ((int)local_20 < 1) {
      local_20 = 0;
    }
    local_1c = 0x208;
    local_14 = param_3;
    if (0x207 < (int)param_3) {
      local_14 = 0x208;
    }
    if ((int)local_14 < 1) {
      local_14 = 0;
    }
    uVar6 = param_4 + in_EDX;
    if (799 < (int)uVar6) {
      uVar6 = 800;
    }
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 800;
    if (*(uint *)(in_ECX + 4) != 0) {
      uVar6 = *(uint *)(in_ECX + 4);
    }
    uVar4 = in_EDX;
    if ((int)uVar6 <= (int)in_EDX) {
      uVar4 = uVar6;
    }
    local_20 = 0;
    if (-1 < (int)in_EDX) {
      local_20 = uVar4;
    }
    local_1c = 0x208;
    if (*(uint *)(in_ECX + 8) != 0) {
      local_1c = *(uint *)(in_ECX + 8);
    }
    uVar4 = param_3;
    if ((int)local_1c <= (int)param_3) {
      uVar4 = local_1c;
    }
    local_14 = 0;
    if (-1 < (int)param_3) {
      local_14 = uVar4;
    }
    uVar5 = param_4 + in_EDX;
    uVar4 = uVar5;
    if ((int)uVar6 <= (int)uVar5) {
      uVar4 = uVar6;
    }
    uVar6 = 0;
    if (-1 < (int)uVar5) {
      uVar6 = uVar4;
    }
  }
  uVar5 = param_5 + param_3;
  uVar4 = uVar5;
  if ((int)local_1c <= (int)uVar5) {
    uVar4 = local_1c;
  }
  uVar3 = 0;
  if (-1 < (int)uVar5) {
    uVar3 = uVar4;
  }
  if ((int)local_14 < (int)uVar3) {
    do {
      if ((int)local_20 < (int)uVar6) {
        uVar4 = local_20;
        do {
          if ((in_ECX != 0) && (-1 < (int)(uVar4 | local_14) && *(int *)(in_ECX + 0x340) != 0)) {
            iVar1 = *(int *)(in_ECX + 4);
            iVar2 = 800;
            if (iVar1 != 0) {
              iVar2 = iVar1;
            }
            if ((int)uVar4 < iVar2) {
              iVar2 = 0x208;
              if (*(int *)(in_ECX + 8) != 0) {
                iVar2 = *(int *)(in_ECX + 8);
              }
              if ((int)local_14 < iVar2) {
                iVar2 = 0xc80;
                if (iVar1 != 0) {
                  iVar2 = iVar1 << 2;
                }
                if (*(int *)(in_ECX + 0xc) != 0) {
                  iVar2 = *(int *)(in_ECX + 0xc);
                }
                iVar2 = iVar2 * local_14;
                *(char *)(*(int *)(in_ECX + 0x340) + iVar2 + uVar4 * 4) = (char)param_6;
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar2 + 1 + uVar4 * 4) = PF_PART1(param_6, 1);
                *(undefined1 *)(*(int *)(in_ECX + 0x340) + iVar2 + 2 + uVar4 * 4) = PF_PART1(param_6, 2);
                *(undefined1 *)(iVar2 + *(int *)(in_ECX + 0x340) + 3 + uVar4 * 4) = 0xff;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      local_14 = local_14 + 1;
    } while (local_14 != uVar3);
  }
  return;
}

#undef local_14
#undef local_20
#undef local_1c

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
 * Address: 0x100069f0
 */

void recovered_100069f0(int in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,uint param_6)

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
       (uVar5 = (*pcVar4)(param_4,param_5,1,
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
                    iVar6 = 800;
                    if (iVar3 != 0) {
                      iVar6 = iVar3;
                    }
                    if ((int)(local_2c + uVar5) < iVar6) {
                      iVar6 = 0x208;
                      if (*(int *)(local_1c + 8) != 0) {
                        iVar6 = *(int *)(local_1c + 8);
                      }
                      if ((int)local_28 < iVar6) {
                        iVar6 = 0xc80;
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
