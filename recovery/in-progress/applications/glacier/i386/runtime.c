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
#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
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
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef UINT_00006914
#define UINT_00006914 (*(uint *)(0x6914U))
#define format (*(char * *)(frame + 152))
#define local_9d4 (*(char (*)[4])(frame + 172))
#define local_9d0 (*(int *)(frame + 176))
#define local_9c8 (*(int *)(frame + 184))
#define local_5d4 (*(char (*)[16])(frame + 1196))
#define local_5c4 (*(undefined4 *)(frame + 1212))
#define local_5ac (*(int *)(frame + 1236))
#define local_5a4 (*(byte *)(frame + 1244))
#define local_5a0 (*(int *)(frame + 1248))
#define local_59c (*(int *)(frame + 1252))
#define local_598 (*(uint *)(frame + 1256))
#define local_35c (*(byte (*)[8])(frame + 1828))
#define local_354 (*(int * *)(frame + 1836))
#define local_34c (*(int *)(frame + 1844))
#define auStackY_a70 (*(undefined1 (*)[128])(frame + 16))
#define local_348 (*(int * *)(frame + 1848))
#define local_344 (*(uint *)(frame + 1852))
#define local_25c (*(undefined4 *)(frame + 2084))
#define local_258 (*(undefined4 *)(frame + 2088))
#define local_15c (*(void * *)(frame + 2340))
#define local_158 (*(uint *)(frame + 2344))
#define local_bc (*(int (*)[27])(frame + 2500))
#define local_50 (*(int * *)(frame + 2608))
#define local_4c (*(int *)(frame + 2612))
#define local_48 (*(int *)(frame + 2616))
#define local_40 (*(int *)(frame + 2624))
#define local_3c (*(uint *)(frame + 2628))
#define local_38 (*(char * *)(frame + 2632))
#define local_34 (*(int *)(frame + 2636))
#define local_30 (*(int *)(frame + 2640))
#define local_2c (*(int * *)(frame + 2644))
#define local_28 (*(int * *)(frame + 2648))
#define local_24 (*(int * *)(frame + 2652))
#define local_20 (*(uint *)(frame + 2656))
#define local_1c (*(int * *)(frame + 2660))
#define local_18 (*(uint *)(frame + 2664))
#define local_14 (*(int * *)(frame + 2668))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000fc0(void)

{
  unsigned char frame[2720] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  byte bVar2;
  int *dst;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  undefined4 *puVar16;
  int *piVar17;
  bool bVar18;

  iVar4 = Ram00006800;
  if (((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
       (uVar3 = Ram00006808, 0xb < uVar3)) &&
      ((uVar3 = Ram00006808, 0x4f < uVar3 &&
       (pcVar10 = (code *)UINT_0000684c, pcVar10 != (code *)0x0)))) &&
     (dst = (*pcVar10)(0x206158), dst != (int *)0x0)) {
    memset(dst,0,0x206158);
    pf_app_window_spec(local_5d4,(char *)((uintptr_t)pf_module_state+0x1485U),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),(uint)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)));
    local_5c4 = 0xffffff;
    local_5a4 = local_5a4 | 1;
    uVar3 = terror_ui_window_open(dst,local_5d4);
    if (uVar3 != 0) {
      dst[0xd0] = dst[0xb];
      if (dst[0xb] == 0) {
        terror_ui_window_close(dst);
      }
      else {
        (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) = dst[1];
        (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) = (int *)dst[2];
        terror_ui_window_set_menus(dst,(char *)((uintptr_t)pf_module_state+0x148dU),(char *)((uintptr_t)pf_module_state+0x14b7U),&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)));
        memset(dst + 0xd1,0,0x90);
        iVar4 = Ram00006800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
           ((uVar3 = Ram00006808, 0xb < uVar3 &&
            (((uVar3 = Ram00006808, 0x117 < uVar3 &&
              (pcVar10 = (code *)UINT_00006914, pcVar10 != (code *)0x0)) &&
             (uVar3 = (*pcVar10)(dst + 0xd1), uVar3 != 0)))))) {
          if ((*(byte *)(dst + 0xd2) & 1) == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = *(byte *)(dst + 0xd3) >> 1 & 1;
          }
          *(byte *)(dst + 0x15f6) = bVar2;
        }
        *(undefined1 *)(dst + 0x15f7) = 1;
        memset(&local_25c,0,0xc);
        iVar4 = Ram00006800;
        if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
           (((uVar3 = Ram00006808, 0xb < uVar3 &&
             ((uVar3 = Ram00006808, 0x37 < uVar3 &&
              (pcVar10 = (code *)UINT_00006834, pcVar10 != (code *)0x0)))) &&
            (uVar3 = (*pcVar10)((char *)((uintptr_t)pf_module_state+0x14c3U),&local_25c),
            (6 < local_258 && local_25c != (void *)0x0) && uVar3 != 0)))) {
          uVar3 = local_258;
          if (0x7e < local_258) {
            uVar3 = 0x7f;
          }
          memcpy(local_9d4,local_25c,uVar3);
          local_9d4[uVar3] = '\0';
          iVar4 = strncmp(local_9d4,(char *)((uintptr_t)pf_module_state+0x14d9U),7);
          if (iVar4 == 0) {
            *(undefined1 *)(dst + 0x15f7) = 0;
          }
        }
        *(undefined2 *)((int)dst + 0x57d9) = 0x101;
        dst[0x816f1] = 0;
        recovered_10002f30((int)dst,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)));
        if (dst[0x816eb] != 0) {
          *(undefined1 *)((int)dst + 0x57db) = 1;
          if (*(char *)((int)dst + 0x57d9) == '\x01') {
            local_24 = dst + 0x1639;
            local_38 = (char *)((int)dst + 0x57de);
            local_50 = dst + 0x16bac;
LAB_100012ee:
            uVar3 = dst[1];
            local_1c = (int *)dst[2];
            memset(local_5d4,0,0x278);
            uVar5 = terror_ui_window_query(dst,local_5d4);
            if (uVar5 != 0) {
              dst[0x816ef] = local_5ac;
              uVar1 = terror_ui_window_info_requests_close(local_5d4);
              if ((uVar1 == '\0') &&
                 (uVar5 = terror_ui_window_sync_buffer(dst,local_5d4), piVar17 = local_24, uVar5 != 0)) {
                (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) = dst[1];
                dst[0xd0] = dst[0xb];
                (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) = (int *)dst[2];
                if (((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) != uVar3) || ((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) != local_1c)) {
                  if ((dst[0x816eb] != 0) && (uVar3 = dst[0x816ec], uVar3 < (uint)dst[0x816eb])) {
                    recovered_100047d0((int)(local_24 + uVar3 * 0x15573));
                    iVar4 = (piVar17[uVar3 * 0x15573 + 0x1512f] - (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) + 0x5e;
                    if (iVar4 < -0x13) {
                      iVar4 = -0x14;
                    }
                    iVar11 = local_24[uVar3 * 0x15573 + 0x1512e];
                    iVar14 = iVar11;
                    if (iVar4 + 0x14 <= iVar11) {
                      iVar14 = iVar4 + 0x14;
                    }
                    iVar4 = 0;
                    if (-1 < iVar11) {
                      iVar4 = iVar14;
                    }
                    local_24[uVar3 * 0x15573 + 0x1512e] = iVar4;
                  }
                  *(undefined1 *)((int)dst + 0x57da) = 1;
                }
                if ((local_5a0 != 0) && (local_5a0 != dst[0x816ed])) {
                  dst[0x816ed] = local_5a0;
                  if (local_59c == 2) {
                    if (local_598 == 1) {
                      recovered_10019960((int)dst);
                    }
                    else if (local_598 == 0) {
                      recovered_10019830((int)dst);
                    }
                  }
                  else if ((local_59c == 1) && (local_598 < 4)) {
                    /* WARNING: Could not emulate address calculation at 0x10001434 */
                    /* WARNING: Treating indirect jump as call */
                    iVar4 = (**(code **)(local_598 * 4 + ((uintptr_t)pf_module_state+0x1c1U)))();
                    return iVar4;
                  }
                }
                recovered_10002c50((int)dst);
                if (((dst[0x816eb] != 0) && ((uint)dst[0x816ec] < (uint)dst[0x816eb])) &&
                   ((dst[0x816ef] & 6U) == 2)) {
                  local_1c = local_24 + dst[0x816ec] * 0x15573;
                  local_14 = local_1c + 0x10b;
                  iVar4 = 0x20;
                  do {
                    iVar11 = Ram00006800;
                    if ((((iVar11 != 0x50414d57) || (iVar11 = Ram00006804, iVar11 == 0)) ||
                        ((uVar3 = Ram00006808, uVar3 < 0xc ||
                         ((uVar3 = Ram00006808, uVar3 < 0x30 ||
                          (pcVar10 = (code *)UINT_0000682c, pcVar10 == (code *)0x0)))))) ||
                       (uVar3 = (*pcVar10)(), uVar3 == 0)) break;
                    uVar5 = uVar3 >> 8 & 0xff;
                    if ((uVar3 & 0x800000ff) != 0x80000000 || uVar5 != 0) {
                      uVar6 = uVar3 & 0xff;
                      if ((uVar3 & 0x40000) == 0) {
                        if ((uVar3 & 0x20000) == 0) {
                          cVar15 = (char)uVar3;
                          if (*(char *)((int)dst + 0x57db) == '\x01') {
                            if (uVar6 - 0x20 < 0x5f) {
                              iVar11 = dst[0x1638];
                              if (iVar11 < 0xff) {
                                dst[0x1638] = iVar11 + 1;
                                *(char *)((int)dst + iVar11 + 0x57de) = cVar15;
                                *(undefined1 *)((int)dst + dst[0x1638] + 0x57de) = 0;
LAB_10001a80:
                                *(undefined1 *)((int)dst + 0x57da) = 1;
                              }
                            }
                            else if (((uVar5 == 0xe) || (cVar15 == '\x7f')) || ((uVar3 & 0xff) == 8)
                                    ) {
                              iVar11 = dst[0x1638];
                              if (0 < iVar11) {
                                dst[0x1638] = iVar11 + -1;
                                *(undefined1 *)((int)dst + iVar11 + 0x57dd) = 0;
                                goto LAB_10001a80;
                              }
                            }
                            else if (((uVar5 == 0x1c) || (cVar15 == '\r')) || ((uVar3 & 0xff) == 10)
                                    ) {
                              local_20 = uVar5;
                              recovered_10019c50((int)dst);
                            }
                            else {
                              local_20 = uVar5;
                              if (uVar6 == 0x1b || uVar5 == 1) {
                                *(undefined2 *)((int)dst + 0x57da) = 1;
                              }
                            }
                          }
                          else {
                            iVar11 = local_1c[0x1512d];
                            if (((iVar11 < 0) || (local_20 = uVar5, local_1c[0x14b0b] <= iVar11)) ||
                               (local_28 = (int *)(iVar11 * 0x370), local_30 = iVar4,
                               local_14[iVar11 * 0xdc] != 4)) {
                              if ((uVar6 == 0x1b) || (uVar5 == 1)) {
                                *(undefined2 *)((int)dst + 0x57d9) = 0x100;
                                local_18 = uVar6;
                                break;
                              }
                              uVar5 = local_1c[0x1512e];
                              uVar3 = (uVar3 >> 8 & 0xff) - 0x47;
                              if (uVar3 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x100019cc */
                    /* WARNING: Treating indirect jump as call */
                                local_18 = uVar6;
                                iVar4 = (**(code **)(uVar3 * 4 + ((uintptr_t)pf_module_state+0x1d1U)))();
                                return iVar4;
                              }
                              iVar11 = (local_1c[0x1512f] - (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) + 0x5e;
                              if (iVar11 < -0x13) {
                                iVar11 = -0x14;
                              }
                              uVar3 = uVar5;
                              if (iVar11 + 0x14U <= uVar5) {
                                uVar3 = iVar11 + 0x14U;
                              }
                              uVar13 = 0;
                              if (-1 < (int)uVar5) {
                                uVar13 = uVar3;
                              }
                              local_1c[0x1512e] = uVar13;
                              local_18 = uVar6;
                              if (uVar13 != uVar5) goto LAB_10001a80;
                            }
                            else {
                              local_28 = (int *)((int)local_28 + (int)local_14);
                              local_2c = local_28 + 0x95;
                              local_18 = uVar6;
                              uVar7 = strlen((char *)local_2c);
                              if (local_18 - 0x20 < 0x5f) {
                                if (uVar7 + 1 < 0x80) {
                                  *(char *)((int)local_2c + uVar7) = cVar15;
                                  *(char *)((int)local_2c + uVar7 + 1) = '\0';
                                  goto LAB_10001a80;
                                }
                              }
                              else if (((local_20 == 0xe) || (cVar15 == '\x7f')) ||
                                      ((uVar3 & 0xff) == 8)) {
                                if (uVar7 != 0) {
                                  *(char *)((uVar7 - 1) + (int)local_2c) = '\0';
                                  goto LAB_10001a80;
                                }
                              }
                              else if (((local_20 == 0x1c) || (cVar15 == '\r')) ||
                                      ((uVar3 & 0xff) == 10)) {
                                recovered_10019cd0((int)dst,(int)local_1c,local_28[0xd5]);
                                iVar4 = local_30;
                              }
                              else {
                                iVar4 = local_30;
                                if (local_18 == 0x1b || local_20 == 1) {
                                  local_1c[0x1512d] = -1;
                                  goto LAB_10001a80;
                                }
                              }
                            }
                          }
                        }
                      }
                      else if (((uVar3 & 0xbf) == 3 || uVar6 == 99) || uVar5 == 0x2e) {
                        local_18 = uVar6;
                        recovered_10019830((int)dst);
                      }
                      else {
                        local_18 = uVar6;
                        if (((uVar3 & 0xbf) == 0x16 || uVar6 == 0x76) || uVar5 == 0x2f) {
                          recovered_10019960((int)dst);
                        }
                      }
                    }
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
                if ((dst[0x816ef] & 6U) == 2) {
                  memset(local_35c,0,0x1c);
                  uVar3 = terror_ui_window_pointer_state(dst,local_35c);
                  pcVar12 = local_38;
                  if ((((uVar3 == 0) || ((local_35c[0] & 2) == 0)) || (local_34c == dst[0x816ee]))
                     || (((uint)local_354 & 3) == 0)) goto LAB_100022cb;
                  dst[0x816ee] = local_34c;
                  piVar17 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
                  uVar3 = dst[0x816eb];
                  if ((uVar3 == 0) || (uVar5 = dst[0x816ec], uVar3 <= uVar5)) goto LAB_100022cb;
                  local_18 = local_344;
                  local_20 = uVar5 * 0x555cc;
                  local_14 = local_24 + uVar5 * 0x15573;
                  local_1c = local_348;
                  if (((uint)local_354 & 2) == 0) {
                    if ((int)local_348 - 10U < 0x1a && 8 < (int)local_344) {
                      if (local_344 < 0x23) {
                        recovered_1001a6a0((int)dst,-1);
                      }
                      else {
LAB_1000214d:
                        if (((local_344 < 0x23) && (0x49 < (int)local_348)) &&
                           ((8 < (int)local_344 && ((int)local_348 < (int)((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0xb0)))))
                        {
                          *(undefined1 *)((int)dst + 0x57db) = 1;
                          goto LAB_10002183;
                        }
                        if ((((local_344 < 0x23) && (8 < (int)local_344)) &&
                            ((int)((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0xa6) <= (int)local_348)) &&
                           ((int)local_348 < (int)((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0x78))) {
                          recovered_10019c50((int)dst);
                        }
                        else {
                          if (((0x22 < local_344) || ((int)local_344 < 9)) ||
                             (((int)local_348 < (int)((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0x70) ||
                              ((int)((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 8) <= (int)local_348)))) goto LAB_10001e59;
                          recovered_10019700((int)dst);
                        }
                      }
                    }
                    else {
                      if (0x19 < local_344 - 9 || (int *)0x19 < local_348 + -10) goto LAB_1000214d;
                      recovered_1001a6a0((int)dst,1);
                    }
                    goto LAB_100022cb;
                  }
LAB_10001e59:
                  local_28 = local_354;
                  uVar5 = 0;
                  iVar4 = 0x8c;
                  do {
                    if (((local_344 < 0x47) && (0x2e < (int)local_344)) &&
                       ((iVar4 + -0x84 <= (int)local_348 && ((int)local_348 < iVar4)))) {
                      dst[0x816ec] = uVar5;
                      *(undefined1 *)((int)dst + 0x57db) = 0;
                      snprintf(local_38,0x100,(char *)((uintptr_t)pf_module_state+0x154dU));
                      uVar7 = strlen(pcVar12);
                      dst[0x1638] = uVar7;
                      *(undefined1 *)((int)dst + 0x57da) = 1;
                      goto LAB_100022cb;
                    }
                    uVar5 = uVar5 + 1;
                    iVar4 = iVar4 + 0x88;
                  } while (uVar3 != uVar5);
                  if (((uint)local_354 & 2) != 0) {
LAB_10001f20:
                    if (0x47 < (int)local_344) {
LAB_10001f32:
                      if (((int)local_344 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x16) &&
                         (local_40 = local_14[0x14b0b], local_40 != 0)) {
                        local_18 = local_344 - 0x48;
                        local_48 = local_14[0x1512e];
                        iVar4 = local_40 * 0x370 + 0x59a0 + local_20;
                        iVar11 = local_40 * 0x370 + local_20;
                        local_30 = -0x5c74 - iVar11;
                        iVar11 = -0x5a74 - iVar11;
                        uVar3 = -local_40;
                        local_3c = local_40 - 1;
                        local_20 = local_3c;
LAB_10001fb3:
                        local_2c = *(int **)((int)dst + iVar4);
                        if (((char *)((int)local_2c + -7) < (char *)0x2) ||
                           (local_4c = *(int *)((int)dst + iVar4 + 4), (int)local_348 < local_4c))
                        goto LAB_10001f97;
                        local_34 = 0;
                        if (*(char *)((int)dst + iVar4 + 0x36c) == '\0') {
                          local_34 = local_48;
                        }
                        if (local_4c + *(int *)((int)dst + iVar4 + 0xc) <= (int)local_348)
                        goto LAB_10001f97;
                        local_34 = local_34 + local_18;
                        iVar14 = *(int *)((int)dst + iVar4 + 8);
                        if ((local_34 < iVar14) ||
                           (iVar14 + *(int *)((int)dst + iVar4 + 0x10) <= local_34))
                        goto LAB_10001f97;
                        *(undefined1 *)((int)dst + 0x57db) = 0;
                        if (local_2c == (int *)0x4) {
                          if (((uint)local_354 & 2) == 0) {
                            uVar5 = ~uVar3;
                            if (local_3c <= ~uVar3) {
                              uVar5 = local_3c;
                            }
                            goto LAB_10002564;
                          }
LAB_100025c6:
                          local_14[0x1512d] = -1;
                          goto LAB_1000228c;
                        }
                        if (local_2c != (int *)0x2) {
                          if ((((uint)local_354 & 2) != 0) || (local_2c != (int *)0x5))
                          goto LAB_100025c6;
                          local_14[0x1512d] = -1;
                          if (*(char *)((int)dst + iVar4 + 0x2d4) == '\0') {
                            recovered_10019cd0((int)dst,(int)local_14,
                                               *(int *)((int)dst + iVar4 + 0x354));
                          }
                          else {
                            recovered_1001a100((int)dst,(int)local_14,(char *)((int)dst - local_30))
                            ;
                          }
                          goto LAB_100022cb;
                        }
                        local_14[0x1512d] = -1;
                        if (*(char *)((int)dst + iVar4 + 0xd4) == '\0') goto LAB_100022cb;
                        cVar15 = *(char *)((int)dst + iVar4 + 0x36d);
                        recovered_10007f40((int)local_14,(byte *)((int)dst - iVar11),
                                           (char *)&local_25c);
                        if (cVar15 == '\0') {
                          if (((uint)local_28 & 2) == 0) {
                            recovered_10006920((int)dst,(int)local_14,(byte *)&local_25c);
                            pcVar12 = local_38;
                            snprintf(local_38,0x100,(char *)((uintptr_t)pf_module_state+0x154dU));
                            uVar7 = strlen(pcVar12);
                            dst[0x1638] = uVar7;
                            goto LAB_10002978;
                          }
                          recovered_10002f30((int)dst,(byte *)&local_25c);
                          pcVar12 = local_38;
                          if ((dst[0x816eb] != 0) && ((uint)dst[0x816ec] < (uint)dst[0x816eb])) {
                            snprintf(local_38,0x100,(char *)((uintptr_t)pf_module_state+0x154dU));
                            uVar7 = strlen(pcVar12);
                            dst[0x1638] = uVar7;
                          }
                          goto LAB_100022cb;
                        }
                        local_bc[0] = -1;
                        uVar8 = recovered_10009250((char *)&local_25c,local_bc,local_5d4);
                        if ((char)uVar8 != '\0') {
                          memset(&local_15c,0,0xc);
                          iVar4 = Ram00006800;
                          if ((((iVar4 != 0x50414d57) || (iVar4 = Ram00006804, iVar4 == 0)) ||
                              (uVar3 = Ram00006808, uVar3 < 0xc)) ||
                             (uVar3 = Ram00006808, uVar3 < 0xcc)) {
                            iVar4 = Ram00006800;
                            if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
                               ((uVar3 = Ram00006808, 0xb < uVar3 &&
                                ((uVar3 = Ram00006808, 0x37 < uVar3 &&
                                 (pcVar10 = (code *)UINT_00006834, pcVar10 != (code *)0x0)))))) {
                              uVar3 = (*pcVar10)(local_5d4,&local_15c);
                              goto LAB_100028d2;
                            }
LAB_10002958:
                            pcVar12 = (char *)((int)local_14 + 0x141);
                            goto LAB_10002965;
                          }
                          pcVar10 = (code *)UINT_000068c8;
                          if (pcVar10 == (code *)0x0) goto LAB_10002958;
                          uVar3 = (*pcVar10)(local_bc[0],local_5d4,&local_15c);
LAB_100028d2:
                          if ((uVar3 == 0) || (local_15c == (void *)0x0)) goto LAB_10002958;
                          iVar4 = Ram00006800;
                          if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
                              (uVar3 = Ram00006808, 0xb < uVar3)) &&
                             ((uVar3 = Ram00006808, 0x8f < uVar3 &&
                              (pcVar10 = (code *)UINT_0000688c, pcVar10 != (code *)0x0)))) {
                            (*pcVar10)((char *)((uintptr_t)pf_module_state+0x1fd3U));
                          }
                          pcVar12 = local_5d4;
                          do {
                            do {
                              pcVar12 = pcVar12 + 1;
                              cVar15 = pcVar12[-1];
                            } while (cVar15 == '/');
                          } while ((cVar15 == '\\') || (cVar15 != '\0'));
                          snprintf(local_9d4,0x140,(char *)((uintptr_t)pf_module_state+0x22e6U));
                          iVar4 = Ram00006800;
                          if (((iVar4 == 0x50414d57) &&
                              (((iVar4 = Ram00006804, iVar4 != 0 &&
                                (uVar3 = Ram00006808, 0xb < uVar3)) &&
                               (uVar3 = Ram00006808, 0x3b < uVar3)))) &&
                             ((pcVar10 = (code *)UINT_00006838, pcVar10 != (code *)0x0 &&
                              (uVar3 = (*pcVar10)(local_9d4,local_15c,local_158), uVar3 != 0)))) {
                            pcVar12 = (char *)((int)local_14 + 0x141);
                            format = (char *)((uintptr_t)pf_module_state+0x27d9U);
                          }
                          else {
                            pcVar12 = (char *)((int)local_14 + 0x141);
LAB_10002965:
                            format = (char *)((uintptr_t)pf_module_state+0x154dU);
                          }
                          snprintf(pcVar12,0xc0,format);
LAB_10002978:
                          *(undefined1 *)((int)dst + 0x57da) = 1;
                          goto LAB_100022cb;
                        }
                        if ((byte)local_25c != 0) {
                          bVar2 = (byte)local_25c;
                          if ((byte)((byte)local_25c + 0xbf) < 0x1a) {
                            bVar2 = (byte)local_25c | 0x20;
                          }
                          if ((bVar2 == 0x68) && (PF_PART1(local_25c, 1) != 0)) {
                            bVar2 = PF_PART1(local_25c, 1);
                            if ((byte)(PF_PART1(local_25c, 1) + 0xbf) < 0x1a) {
                              bVar2 = PF_PART1(local_25c, 1) | 0x20;
                            }
                            if ((bVar2 == 0x74) && (PF_PART1(local_25c, 2) != 0)) {
                              bVar2 = PF_PART1(local_25c, 2);
                              if ((byte)(PF_PART1(local_25c, 2) + 0xbf) < 0x1a) {
                                bVar2 = PF_PART1(local_25c, 2) | 0x20;
                              }
                              if ((bVar2 == 0x74) && (PF_PART1(local_25c, 3) != 0)) {
                                bVar2 = PF_PART1(local_25c, 3);
                                if ((byte)(PF_PART1(local_25c, 3) + 0xbf) < 0x1a) {
                                  bVar2 = PF_PART1(local_25c, 3) | 0x20;
                                }
                                if ((bVar2 == 0x70) && ((byte)local_258 != 0)) {
                                  bVar2 = (byte)local_258;
                                  if ((byte)((byte)local_258 + 0xbf) < 0x1a) {
                                    bVar2 = (byte)local_258 | 0x20;
                                  }
                                  if (bVar2 == 0x73) {
                                    if (PF_PART1(local_258, 1) != 0) {
                                      bVar2 = PF_PART1(local_258, 1);
                                      if ((byte)(PF_PART1(local_258, 1) + 0xbf) < 0x1a) {
                                        bVar2 = PF_PART1(local_258, 1) | 0x20;
                                      }
                                      if ((bVar2 == 0x3a) && (PF_PART1(local_258, 2) != 0)) {
                                        bVar2 = PF_PART1(local_258, 2);
                                        if ((byte)(PF_PART1(local_258, 2) + 0xbf) < 0x1a) {
                                          bVar2 = PF_PART1(local_258, 2) | 0x20;
                                        }
                                        if ((bVar2 == 0x2f) && (PF_PART1(local_258, 3) != 0)) {
                                          bVar2 = PF_PART1(local_258, 3);
                                          if ((byte)(PF_PART1(local_258, 3) + 0xbf) < 0x1a) {
                                            bVar2 = PF_PART1(local_258, 3) | 0x20;
                                          }
                                          goto joined_r0x10002794;
                                        }
                                      }
                                    }
                                  }
                                  else if ((bVar2 == 0x3a) && (PF_PART1(local_258, 1) != 0)) {
                                    bVar2 = PF_PART1(local_258, 1);
                                    if ((byte)(PF_PART1(local_258, 1) + 0xbf) < 0x1a) {
                                      bVar2 = PF_PART1(local_258, 1) | 0x20;
                                    }
                                    if ((bVar2 == 0x2f) && (PF_PART1(local_258, 2) != 0)) {
                                      bVar2 = PF_PART1(local_258, 2);
                                      if ((byte)(PF_PART1(local_258, 2) + 0xbf) < 0x1a) {
                                        bVar2 = PF_PART1(local_258, 2) | 0x20;
                                      }
joined_r0x10002794:
                                      if (bVar2 == 0x2f) {
                                        recovered_10013f20((int)dst,(int)local_14,(byte *)&local_25c
                                                           ,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)));
                                        goto LAB_100022cb;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        pcVar12 = (char *)((int)local_14 + 0x141);
                        goto LAB_10002965;
                      }
                    }
LAB_1000217c:
                    *(undefined1 *)((int)dst + 0x57db) = 0;
LAB_10002183:
                    local_14[0x1512d] = -1;
                    *(undefined1 *)((int)dst + 0x57da) = 1;
                    goto LAB_100022cb;
                  }
                  if ((((uVar3 < 6) && (local_344 < 0x47)) && (0x30 < (int)local_344)) &&
                     (((int)(uVar3 * 0x88 + 8) <= (int)local_348 &&
                      ((int)local_348 < (int)(uVar3 * 0x88 + 0x20))))) {
                    recovered_10002f30((int)dst,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)));
                    *(undefined1 *)((int)dst + 0x57db) = 1;
                    goto LAB_100022cb;
                  }
                  piVar9 = local_348 + -2;
                  if ((int)local_344 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x2e &&
                      (piVar9 < (int *)0xc && (int)((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0xf) <= (int)local_344)) {
                    iVar4 = (local_14[0x1512f] - (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) + 0x5e;
                    if (iVar4 < -0x13) {
                      iVar4 = -0x14;
                    }
                    iVar11 = local_14[0x1512e] + -0x1c;
                    if (iVar4 + 0x14 <= iVar11) {
                      iVar11 = iVar4 + 0x14;
                    }
                    iVar4 = 0;
                    if (0x1b < local_14[0x1512e]) {
LAB_10002281:
                      iVar4 = iVar11;
                    }
LAB_10002283:
                    local_14[0x1512e] = iVar4;
                  }
                  else {
                    if ((int)local_344 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x1e &&
                        ((int)((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0xb) <= (int)local_344 && piVar9 < (int *)0xc)) {
                      iVar4 = (local_14[0x1512f] - (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) + 0x5e;
                      if (iVar4 < -0x13) {
                        iVar4 = -0x14;
                      }
                      iVar11 = local_14[0x1512e] + 0x1c;
                      if (iVar4 + 0x14 <= iVar11) {
                        iVar11 = iVar4 + 0x14;
                      }
                      iVar4 = 0;
                      if (-0x1d < local_14[0x1512e]) goto LAB_10002281;
                      goto LAB_10002283;
                    }
                    if ((int)local_344 < 0x4e || (int *)0xb < piVar9) goto LAB_10001f20;
                    iVar4 = 0x60;
                    if (0x9d < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) {
                      iVar4 = (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x3e;
                    }
                    if (iVar4 <= (int)local_344) goto LAB_10001f32;
                    recovered_10017c40((undefined4 *)local_9d4,(int)local_14);
                    if ((int)local_18 < local_9d0) {
                      iVar4 = local_14[0x1512e] -
                              ((int)piVar17 + (-0x5e - ((int)piVar17 + -0x5e >> 0x1f)) >> 1);
                    }
                    else if (local_9d0 + local_9c8 < (int)local_18) {
                      iVar4 = ((int)piVar17 + (-0x5e - ((int)piVar17 + -0x5e >> 0x1f)) >> 1) +
                              local_14[0x1512e];
                    }
                    else {
                      iVar4 = local_14[0x1512e];
                    }
                    iVar11 = (local_14[0x1512f] - (int)piVar17) + 0x5e;
                    if (iVar11 < -0x13) {
                      iVar11 = -0x14;
                    }
                    iVar14 = iVar4;
                    if (iVar11 + 0x14 <= iVar4) {
                      iVar14 = iVar11 + 0x14;
                    }
                    iVar11 = 0;
                    if (-1 < iVar4) {
                      iVar11 = iVar14;
                    }
                    local_14[0x1512e] = iVar11;
                  }
                  goto LAB_1000228c;
                }
                goto LAB_100022cb;
              }
            }
          }
LAB_10002ae2:
          bVar2 = *(byte *)(dst + 0x81769);
          if (bVar2 == 1) {
            do {
              if (*(char *)((int)dst + 0x205da5) != '\0') break;
              iVar4 = Ram00006800;
              if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
                  (uVar3 = Ram00006808, 0xb < uVar3)) &&
                 ((uVar3 = Ram00006808, 0x9f < uVar3 &&
                  (pcVar10 = (code *)UINT_0000689c, pcVar10 != (code *)0x0)))) {
                (*pcVar10)();
                bVar2 = *(byte *)(dst + 0x81769);
              }
            } while ((bVar2 & 1) != 0);
          }
          recovered_10002c50((int)dst);
          if (*dst != 0) {
            terror_ui_window_close(dst);
          }
          if (dst[0x816eb] != 0) {
            piVar17 = dst + 0x1639;
            uVar3 = 0;
            do {
              recovered_100079f0((int)piVar17);
              uVar3 = uVar3 + 1;
              piVar17 = piVar17 + 0x15573;
            } while (uVar3 < (uint)dst[0x816eb]);
          }
          memset(dst,0,0x206158);
          iVar4 = Ram00006800;
          if (iVar4 != 0x50414d57) {
            return 1;
          }
          iVar4 = Ram00006804;
          if (iVar4 == 0) {
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
          pcVar10 = (code *)UINT_00006850;
          if (pcVar10 == (code *)0x0) {
            return 1;
          }
          (*pcVar10)(dst);
          return 1;
        }
        terror_ui_window_close(dst);
        memset(dst,0,0x206158);
      }
    }
    iVar4 = Ram00006800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 &&
        ((uVar3 = Ram00006808, 0x53 < uVar3 &&
         (pcVar10 = (code *)UINT_00006850, pcVar10 != (code *)0x0)))))) {
      (*pcVar10)(dst);
    }
    iVar4 = Ram00006800;
    if (iVar4 != 0x50414d57) {
      return 0;
    }
    iVar4 = Ram00006804;
    if (iVar4 == 0) {
      return 0;
    }
    uVar3 = Ram00006808;
    if (uVar3 < 0xc) {
      return 0;
    }
    uVar3 = Ram00006808;
    if (uVar3 < 0x2c) {
      return 0;
    }
    pcVar10 = (code *)UINT_00006828;
    if (pcVar10 == (code *)0x0) {
      return 0;
    }
    puVar16 = (undefined4 *)(auStackY_a70 + 0x80);
  }
  else {
    iVar4 = Ram00006800;
    if (iVar4 != 0x50414d57) {
      return 0;
    }
    iVar4 = Ram00006804;
    if (iVar4 == 0) {
      return 0;
    }
    uVar3 = Ram00006808;
    if (uVar3 < 0xc) {
      return 0;
    }
    uVar3 = Ram00006808;
    if (uVar3 < 0x2c) {
      return 0;
    }
    pcVar10 = (code *)UINT_00006828;
    if (pcVar10 == (code *)0x0) {
      return 0;
    }
    puVar16 = (undefined4 *)(auStackY_a70 + 0x84);
  }
  puVar16[-1] = 0x10001179;
  (*pcVar10)((char *)*puVar16);
  return 0;
LAB_10001f97:
  iVar4 = iVar4 + -0x370;
  local_30 = local_30 + 0x370;
  iVar11 = iVar11 + 0x370;
  local_20 = local_20 - 1;
  uVar3 = uVar3 + 1;
  if (uVar3 == 0) goto LAB_1000217c;
  goto LAB_10001fb3;
  while (local_40 = local_40 + -1, local_40 != 0) {
LAB_10002564:
    bVar18 = local_20 == 0;
    local_20 = local_20 - 1;
    if (bVar18) goto LAB_10002574;
  }
  uVar5 = 0xffffffff;
LAB_10002574:
  local_14[0x1512d] = uVar5;
LAB_1000228c:
  *(undefined1 *)((int)dst + 0x57da) = 1;
LAB_100022cb:
  if ((*(char *)((int)dst + 0x57da) != '\0') ||
     ((uVar3 = dst[0x816f0], *(char *)((int)dst + 0x57db) == '\x01' &&
      (uVar3 == (uVar3 / 3 & 0xfffffff8) * 3)))) {
    recovered_10002e20(dst);
    *(undefined1 *)((int)dst + 0x57da) = 0;
    uVar3 = dst[0x816f0];
  }
  dst[0x816f0] = uVar3 + 1;
  iVar4 = 6;
  if ((dst[0x816ef] & 6U) != 2) {
    iVar4 = 0x18;
  }
  do {
    iVar11 = Ram00006800;
    if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       ((uVar3 = Ram00006808, 0x9f < uVar3 &&
        (pcVar10 = (code *)UINT_0000689c, pcVar10 != (code *)0x0)))) {
      (*pcVar10)();
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = Ram00006800;
  if (((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      ((uVar3 = Ram00006808, 0x9f < uVar3 &&
       (pcVar10 = (code *)UINT_0000689c, pcVar10 != (code *)0x0)))))) {
    (*pcVar10)();
  }
  if (*(char *)((int)dst + 0x57d9) == '\0') goto LAB_10002ae2;
  goto LAB_100012ee;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181bc65
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006828
#undef UINT_0000682c
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_0000688c
#undef UINT_0000689c
#undef UINT_000068c8
#undef UINT_00006914
#undef format
#undef local_9d4
#undef local_9d0
#undef local_9c8
#undef local_5d4
#undef local_5c4
#undef local_5ac
#undef local_5a4
#undef local_5a0
#undef local_59c
#undef local_598
#undef local_35c
#undef local_354
#undef local_34c
#undef auStackY_a70
#undef local_348
#undef local_344
#undef local_25c
#undef local_258
#undef local_15c
#undef local_158
#undef local_bc
#undef local_50
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
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c00
 */

void recovered_10002c00(void *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x53 < uVar2 && (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(in_ECX);
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

#define local_d0 (*(char (*)[192])(frame + 64))
#define format (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c50
 */

void recovered_10002c50(int in_ECX)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  if (*(char *)(in_ECX + 0x205da4) == '\x01') {
    uVar1 = *(uint *)(in_ECX + 0x205bac);
    iVar4 = 0;
    if ((uVar1 != 0) &&
       ((uVar3 = *(uint *)(in_ECX + 0x205dac), uVar3 < uVar1 ||
        (uVar3 = *(uint *)(in_ECX + 0x205bb0), uVar3 < uVar1)))) {
      iVar4 = in_ECX + 0x58e4 + uVar3 * 0x555cc;
    }
    local_d0[0] = '\0';
    if (*(char *)(in_ECX + 0x205da5) == '\x01') {
      if (*(char *)(in_ECX + 0x205cb8) == '\x01') {
        memcpy((void *)(in_ECX + 0x205bc8),(void *)(in_ECX + 0x205cb8),0xec);
      }
      if (*(char *)(in_ECX + 0x205da6) == '\x01') {
        iVar2 = ((uintptr_t)pf_module_state+0x1d47U);
        if (*(char *)(in_ECX + 0x205eb8) != '\0') {
          iVar2 = in_ECX + 0x205eb8;
        }
        snprintf(local_d0,0xc0,(char *)((uintptr_t)pf_module_state+0x2701U),iVar2,in_ECX + 0x205f38);
        *(undefined1 *)(in_ECX + 0x205da4) = 0;
      }
      else {
        iVar2 = ((uintptr_t)pf_module_state+0x223bU);
        if (*(char *)(in_ECX + 0x2060d8) != '\0') {
          iVar2 = in_ECX + 0x2060d8;
        }
        snprintf(local_d0,0xc0,(char *)((uintptr_t)pf_module_state+0x2716U),iVar2);
        *(undefined1 *)(in_ECX + 0x205da4) = 0;
      }
    }
    else {
      iVar2 = ((uintptr_t)pf_module_state+0x1d47U);
      if (*(char *)(in_ECX + 0x205eb8) != '\0') {
        iVar2 = in_ECX + 0x205eb8;
      }
      if (*(int *)(in_ECX + 0x205db4) == 0) {
        format = (char *)((uintptr_t)pf_module_state+0x2349U);
      }
      else {
        format = (char *)((uintptr_t)pf_module_state+0x2331U);
      }
      snprintf(local_d0,0xc0,format,iVar2,*(int *)(in_ECX + 0x205db0) + 0x3ffU >> 10);
    }
    if ((iVar4 != 0) && (local_d0[0] != '\0')) {
      iVar2 = strcmp((char *)(iVar4 + 0x141),local_d0);
      if (iVar2 != 0) {
        snprintf((char *)(iVar4 + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),local_d0);
        *(undefined1 *)(in_ECX + 0x57da) = 1;
      }
    }
  }
  return;
}

#undef local_d0
#undef format

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10002e20(void *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  if (in_ECX == (void *)0x0) {
    return;
  }
  if (*(uint *)((int)in_ECX + 0x205bac) == 0) {
    return;
  }
  if (*(uint *)((int)in_ECX + 0x205bac) <= *(uint *)((int)in_ECX + 0x205bb0)) {
    return;
  }
  iVar1 = (int)in_ECX + *(uint *)((int)in_ECX + 0x205bb0) * 0x555cc + 0x58e4;
  recovered_10017ce0((int)in_ECX);
  recovered_10018fe0((int)in_ECX,iVar1,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x5e);
  recovered_100186a0((int)in_ECX,iVar1);
  recovered_10017890((int)in_ECX,iVar1);
  if (*(uint *)((int)in_ECX + 0x57d4) != 0) {
    iVar1 = Ram00006800;
    if ((((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
        (uVar3 = Ram00006808, uVar3 < 0xc)) ||
       (((uVar3 = Ram00006808, uVar3 < 0x11c ||
         (pcVar2 = (code *)UINT_00006918, pcVar2 == (code *)0x0)) ||
        (uVar3 = (*pcVar2)((void *)((int)in_ECX + 0x3d4),*(uint *)((int)in_ECX + 0x57d4)),
        uVar3 == 0)))) {
      *(undefined1 *)((int)in_ECX + 0x57d8) = 0;
    }
    *(undefined4 *)((int)in_ECX + 0x57d4) = 0;
  }
  terror_ui_window_present(in_ECX,(char *)((uintptr_t)pf_module_state+0x1485U),*(void **)((int)in_ECX + 0x340),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),
                     (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4,0xffffff);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006918

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f30
 */

void recovered_10002f30(int in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *dst;
  undefined1 *dst_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;

  uVar1 = *(uint *)(in_ECX + 0x205bac);
  if (uVar1 < 6) {
    *(uint *)(in_ECX + 0x205bac) = uVar1 + 1;
    dst_00 = (undefined1 *)(in_ECX + 0x58e4 + uVar1 * 0x555cc);
    memset(dst_00,0,0x555cc);
    uVar5 = recovered_10003100((int)dst_00);
    if ((char)uVar5 == '\0') {
      memset(dst_00,0,0x555cc);
      *(int *)(in_ECX + 0x205bac) = *(int *)(in_ECX + 0x205bac) + -1;
    }
    else {
      *dst_00 = 1;
      *(undefined4 *)(dst_00 + 0x544b4) = 0xffffffff;
      iVar2 = Ram00006800;
      iVar6 = -1;
      if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
          (uVar3 = Ram00006808, 0xb < uVar3)) &&
         ((uVar3 = Ram00006808, 0xbf < uVar3 &&
          (pcVar4 = (code *)UINT_000068bc, pcVar4 != (code *)0x0)))) {
        iVar6 = (*pcVar4)();
      }
      *(int *)(dst_00 + 0x304) = iVar6;
      snprintf(dst_00 + 0x101,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x14e1U));
      if (*(char **)(dst_00 + 0x30c) != (char *)0x0) {
        snprintf(*(char **)(dst_00 + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x14e9U));
      }
      snprintf(dst_00 + 1,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x1541U));
      recovered_10003320(in_ECX,(int)dst_00);
      recovered_100047d0((int)dst_00);
      *(uint *)(in_ECX + 0x205bb0) = uVar1;
      dst = (char *)(in_ECX + 0x57de);
      if (in_EDX == (byte *)0x0) {
        pbVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
      }
      else {
        pbVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
        if (*in_EDX != 0) {
          pbVar7 = in_EDX;
        }
      }
      snprintf(dst,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),pbVar7);
      uVar8 = strlen(dst);
      *(ulong *)(in_ECX + 0x58e0) = uVar8;
      if ((in_EDX != (byte *)0x0) && (*in_EDX != 0)) {
        recovered_10006920(in_ECX,(int)dst_00,in_EDX);
        snprintf(dst,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),dst_00 + 1);
        uVar8 = strlen(dst);
        *(ulong *)(in_ECX + 0x58e0) = uVar8;
      }
      *(undefined1 *)(in_ECX + 0x57da) = 1;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181bc65
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068bc

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003100
 */

undefined4 recovered_10003100(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 in_EAX = 0;
  void *pvVar5;
  undefined4 uVar6;
  void *pvVar7;

  if (in_ECX == 0) {
    return 0;
  }
  if ((((*(int *)(in_ECX + 0x30c) == 0) || (*(int *)(in_ECX + 0x310) == 0)) ||
      (*(int *)(in_ECX + 0x314) == 0)) ||
     (uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),1), *(int *)(in_ECX + 0x318) == 0)) {
    recovered_100079f0(in_ECX);
    iVar2 = Ram00006800;
    pvVar7 = (void *)0x0;
    pvVar5 = (void *)0x0;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) {
      uVar3 = Ram00006808;
      pvVar5 = (void *)0x0;
      if (0xb < uVar3) {
        uVar3 = Ram00006808;
        pvVar5 = (void *)0x0;
        if ((0x4f < uVar3) && (pcVar4 = (code *)UINT_0000684c, pcVar4 != (code *)0x0)) {
          pvVar5 = (*pcVar4)(0x50000);
        }
      }
    }
    *(void **)(in_ECX + 0x30c) = pvVar5;
    iVar2 = Ram00006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       ((uVar3 = Ram00006808, 0x4f < uVar3 &&
        (pcVar4 = (code *)UINT_0000684c, pcVar4 != (code *)0x0)))) {
      pvVar7 = (*pcVar4)(0x60000);
    }
    *(void **)(in_ECX + 0x310) = pvVar7;
    iVar2 = Ram00006800;
    pvVar7 = (void *)0x0;
    pvVar5 = (void *)0x0;
    if ((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) {
      uVar3 = Ram00006808;
      pvVar5 = (void *)0x0;
      if (0xb < uVar3) {
        uVar3 = Ram00006808;
        pvVar5 = (void *)0x0;
        if ((0x4f < uVar3) && (pcVar4 = (code *)UINT_0000684c, pcVar4 != (code *)0x0)) {
          pvVar5 = (*pcVar4)(0x8000);
        }
      }
    }
    *(void **)(in_ECX + 0x314) = pvVar5;
    iVar2 = Ram00006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       ((uVar3 = Ram00006808, 0x4f < uVar3 &&
        (pcVar4 = (code *)UINT_0000684c, pcVar4 != (code *)0x0)))) {
      pvVar7 = (*pcVar4)(0x8000);
    }
    *(void **)(in_ECX + 0x318) = pvVar7;
    if (((*(undefined1 **)(in_ECX + 0x30c) == (undefined1 *)0x0) || (*(int *)(in_ECX + 0x310) == 0))
       || (pvVar7 == (void *)0x0 || *(int *)(in_ECX + 0x314) == 0)) {
      recovered_100079f0(in_ECX);
      uVar6 = 0;
    }
    else {
      **(undefined1 **)(in_ECX + 0x30c) = 0;
      **(undefined1 **)(in_ECX + 0x310) = 0;
      **(undefined1 **)(in_ECX + 0x314) = 0;
      puVar1 = *(undefined1 **)(in_ECX + 0x318);
      *puVar1 = 0;
      uVar6 = CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  return uVar6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c

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
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d0
 */

int recovered_100032d0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;

  iVar2 = Ram00006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
      (uVar1 = Ram00006808, 0xb < uVar1)) &&
     ((uVar1 = Ram00006808, 0xbf < uVar1 &&
      (UNRECOVERED_JUMPTABLE = (code *)UINT_000068bc, UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x10003308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)();
    return iVar2;
  }
  return -1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_000068bc

#undef DAT_0181bcfc
#define DAT_0181bcfc (*(uint8_t *)(0x181bcfcU))
#undef DAT_0181bcfd
#define DAT_0181bcfd (*(uint8_t *)(0x181bcfdU))
#undef DAT_0181bcfe
#define DAT_0181bcfe (*(uint8_t *)(0x181bcfeU))
#undef DAT_0181bcff
#define DAT_0181bcff (*(uint8_t *)(0x181bcffU))
#undef DAT_0181bd00
#define DAT_0181bd00 (*(uint8_t *)(0x181bd00U))
#undef DAT_0181bd01
#define DAT_0181bd01 (*(uint8_t *)(0x181bd01U))
#undef DAT_0181bd02
#define DAT_0181bd02 (*(uint8_t *)(0x181bd02U))
#undef DAT_0181bd03
#define DAT_0181bd03 (*(uint8_t *)(0x181bd03U))
#undef DAT_0181bd04
#define DAT_0181bd04 (*(uint8_t *)(0x181bd04U))
#undef DAT_0181bd1c
#define DAT_0181bd1c (*(uint8_t *)(0x181bd1cU))
#undef DAT_0181bd1d
#define DAT_0181bd1d (*(uint8_t *)(0x181bd1dU))
#undef DAT_0181bd1e
#define DAT_0181bd1e (*(uint8_t *)(0x181bd1eU))
#undef DAT_0181bd1f
#define DAT_0181bd1f (*(uint8_t *)(0x181bd1fU))
#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181bd30
#define DAT_0181bd30 (*(uint8_t *)(0x181bd30U))
#undef DAT_0181bd31
#define DAT_0181bd31 (*(uint8_t *)(0x181bd31U))
#undef DAT_0181bd32
#define DAT_0181bd32 (*(uint8_t *)(0x181bd32U))
#undef DAT_0181bd33
#define DAT_0181bd33 (*(uint8_t *)(0x181bd33U))
#undef DAT_0181bd34
#define DAT_0181bd34 (*(uint8_t *)(0x181bd34U))
#undef DAT_0181bd35
#define DAT_0181bd35 (*(uint8_t *)(0x181bd35U))
#undef DAT_0181bd3e
#define DAT_0181bd3e (*(uint8_t *)(0x181bd3eU))
#undef DAT_0181bd3f
#define DAT_0181bd3f (*(uint8_t *)(0x181bd3fU))
#undef DAT_0181bd40
#define DAT_0181bd40 (*(uint8_t *)(0x181bd40U))
#undef DAT_0181bd41
#define DAT_0181bd41 (*(uint8_t *)(0x181bd41U))
#undef DAT_0181bd42
#define DAT_0181bd42 (*(uint8_t *)(0x181bd42U))
#undef DAT_0181bd43
#define DAT_0181bd43 (*(uint8_t *)(0x181bd43U))
#undef DAT_0181bd44
#define DAT_0181bd44 (*(uint8_t *)(0x181bd44U))
#undef DAT_0181c3af
#define DAT_0181c3af (*(uint8_t *)(0x181c3afU))
#define local_8478 (*(byte (*)[4])(frame + 24))
#define local_8474 (*(byte *)(frame + 28))
#define local_8473 (*(byte *)(frame + 29))
#define local_8472 (*(byte *)(frame + 30))
#define local_8471 (*(byte *)(frame + 31))
#define local_478 (*(char (*)[192])(frame + 32792))
#define local_3b8 (*(char *)(frame + 32984))
#define local_3b7 (*(char (*)[94])(frame + 32985))
#define local_258 (*(byte (*)[256])(frame + 33336))
#define local_158 (*(byte *)(frame + 33592))
#define local_157 (*(byte *)(frame + 33593))
#define local_156 (*(byte *)(frame + 33594))
#define local_155 (*(byte *)(frame + 33595))
#define local_154 (*(byte *)(frame + 33596))
#define local_153 (*(byte *)(frame + 33597))
#define local_152 (*(byte *)(frame + 33598))
#define local_151 (*(byte *)(frame + 33599))
#define local_58 (*(int *)(frame + 33848))
#define local_54 (*(char * *)(frame + 33852))
#define local_50 (*(char * *)(frame + 33856))
#define local_4c (*(uint *)(frame + 33860))
#define local_48 (*(byte *)(frame + 33864))
#define local_47 (*(byte *)(frame + 33865))
#define local_46 (*(byte *)(frame + 33866))
#define local_45 (*(byte *)(frame + 33867))
#define local_44 (*(byte *)(frame + 33868))
#define local_43 (*(byte *)(frame + 33869))
#define local_42 (*(char *)(frame + 33870))
#define local_28 (*(int *)(frame + 33896))
#define local_21 (*(char *)(frame + 33903))
#define local_20 (*(undefined4 *)(frame + 33904))
#define local_1c (*(char * *)(frame + 33908))
#define local_18 (*(char * *)(frame + 33912))
#define local_14 (*(int *)(frame + 33916))
#define abStack_359 (*(byte (*)[257])(frame + 33079))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

/* WARNING: Removing unreachable block (ram,0x10003e58) */

void recovered_10003320(int in_ECX,int in_EDX)

{
  unsigned char frame[33968] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined4 extraout_ECX = 0;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  byte bVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  char *n;

  if ((in_EDX != 0) && (uVar2 = recovered_10003100(in_EDX), (char)uVar2 != '\0')) {
    pcVar11 = *(char **)(in_EDX + 0x30c);
    **(undefined1 **)(in_EDX + 0x310) = 0;
    **(undefined1 **)(in_EDX + 0x314) = 0;
    **(undefined1 **)(in_EDX + 0x318) = 0;
    *(undefined1 *)(in_EDX + 0x554c8) = 0;
    local_28 = in_ECX;
    local_14 = in_EDX;
    if (pcVar11 != (char *)0x0) {
      local_50 = (char *)(in_EDX + 0x554c8);
      local_54 = (char *)(in_EDX + 0x141);
      local_4c = 0;
LAB_100033a5:
      while( true ) {
        if ((*pcVar11 == '\0') ||
           (uVar3 = strlen(*(char **)(in_EDX + 0x310)), 0x5fffe < uVar3))
        goto LAB_100044d8;
        pcVar4 = strchr(pcVar11,0x3c);
        iVar16 = local_14;
        if (pcVar4 == (char *)0x0) {
          pcVar4 = *(char **)(in_EDX + 0x310);
          if ((pcVar4 != (char *)0x0) && (uVar3 = strlen(pcVar4), uVar3 < 0x5ffff)) {
            snprintf(pcVar4 + uVar3,0x60000 - uVar3,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar11);
          }
          goto LAB_100044d8;
        }
        uVar15 = (int)pcVar4 - (int)pcVar11;
        local_1c = pcVar4;
        local_18 = pcVar11;
        if (pcVar11 <= pcVar4 && uVar15 != 0) {
          uVar3 = strlen(*(char **)(local_14 + 0x310));
          if ((int)(0x5ffff - uVar3) <= (int)uVar15) {
            uVar15 = 0x5ffff - uVar3;
          }
          pcVar11 = *(char **)(iVar16 + 0x310);
          if ((pcVar11 != (char *)0x0) && (uVar3 = strlen(pcVar11), uVar3 < 0x5ffff)) {
            uVar10 = 0x5ffff - uVar3;
            if (uVar15 <= 0x5ffff - uVar3) {
              uVar10 = uVar15;
            }
            if (uVar10 != 0) {
              memcpy(pcVar11 + uVar3,local_18,uVar10);
            }
            pcVar11[uVar10 + uVar3] = '\0';
          }
        }
        pcVar11 = local_1c;
        pcVar4 = strchr(local_1c,0x3e);
        in_EDX = local_14;
        if (pcVar4 == (char *)0x0) goto LAB_100044d8;
        local_58 = (int)pcVar4 - (int)pcVar11;
        iVar16 = local_58;
        if (0xff < local_58) {
          iVar16 = 0x100;
        }
        pbVar6 = abStack_359 + 1;
        local_18 = pcVar4;
        memcpy(pbVar6,pcVar11 + 1,iVar16 - 1);
        abStack_359[iVar16] = 0;
        local_21 = '\0';
        recovered_10007bb0(pbVar6,&local_48,0x20,&local_21);
        iVar16 = strncmp((char *)pbVar6,(char *)((uintptr_t)pf_module_state+0x1550U),3);
        in_EDX = local_14;
        if (iVar16 != 0) break;
        pcVar11 = strstr(pcVar11 + 4,(char *)((uintptr_t)pf_module_state+0x1554U));
        in_EDX = local_14;
        if (pcVar11 == (char *)0x0) goto LAB_100033a1;
        pcVar11 = pcVar11 + 3;
      }
      if (local_21 != '\0') goto LAB_10003e80;
      pcVar11 = &DAT_0181bd00;
      local_20 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
      if (local_48 == 0) {
LAB_10003692:
        if (*pcVar11 == '\0') {
          recovered_10007ce0((char *)(abStack_359 + 1),(char *)((uintptr_t)pf_module_state+0x1562U),local_8478);
          pcVar11 = local_18;
          if (local_8478[0] != 0) {
            if ((byte)(local_8478[0] + 0xbf) < 0x1a) {
              bVar8 = local_8478[0] | 0x20;
            }
            else {
              bVar8 = local_8478[0];
            }
            if (bVar8 != 0x68) goto LAB_10003af2;
            if (local_8478[1] == 0) {
LAB_100039d0:
              if (local_8478[1] == 0) {
LAB_10003af2:
                if (local_8478[0] == 0x5b) goto LAB_10003af6;
              }
              else {
                bVar8 = local_8478[1];
                if ((byte)(local_8478[1] + 0xbf) < 0x1a) {
                  bVar8 = local_8478[1] | 0x20;
                }
                if ((bVar8 != 0x74) || (local_8478[2] == 0)) goto LAB_10003af2;
                bVar8 = local_8478[2];
                if ((byte)(local_8478[2] + 0xbf) < 0x1a) {
                  bVar8 = local_8478[2] | 0x20;
                }
                if ((bVar8 != 0x74) || (local_8478[3] == 0)) goto LAB_10003af2;
                bVar8 = local_8478[3];
                if ((byte)(local_8478[3] + 0xbf) < 0x1a) {
                  bVar8 = local_8478[3] | 0x20;
                }
                if ((bVar8 != 0x70) || (local_8474 == 0)) goto LAB_10003af2;
                bVar8 = local_8474;
                if ((byte)(local_8474 + 0xbf) < 0x1a) {
                  bVar8 = local_8474 | 0x20;
                }
                in_EDX = local_14;
                if ((bVar8 != 0x73) || (local_8473 == 0)) goto LAB_10003af2;
                bVar8 = local_8473;
                if ((byte)(local_8473 + 0xbf) < 0x1a) {
                  bVar8 = local_8473 | 0x20;
                }
                if ((bVar8 != 0x3a) || (local_8472 == 0)) goto LAB_10003af2;
                bVar8 = local_8472;
                if ((byte)(local_8472 + 0xbf) < 0x1a) {
                  bVar8 = local_8472 | 0x20;
                }
                if ((bVar8 != 0x2f) || (local_8471 == 0)) goto LAB_10003af2;
                bVar8 = local_8471;
                if ((byte)(local_8471 + 0xbf) < 0x1a) {
                  bVar8 = local_8471 | 0x20;
                }
                if (local_8478[0] == 0x5b || bVar8 == 0x2f) goto LAB_10003af6;
              }
              recovered_10007f40(in_EDX,local_8478,local_50);
            }
            else {
              bVar8 = local_8478[1];
              if ((byte)(local_8478[1] + 0xbf) < 0x1a) {
                bVar8 = local_8478[1] | 0x20;
              }
              if ((bVar8 != 0x74) || (local_8478[2] == 0)) goto LAB_100039d0;
              bVar8 = local_8478[2];
              if ((byte)(local_8478[2] + 0xbf) < 0x1a) {
                bVar8 = local_8478[2] | 0x20;
              }
              if ((bVar8 != 0x74) || (local_8478[3] == 0)) goto LAB_100039d0;
              bVar8 = local_8478[3];
              if ((byte)(local_8478[3] + 0xbf) < 0x1a) {
                bVar8 = local_8478[3] | 0x20;
              }
              if ((bVar8 != 0x70) || (local_8474 == 0)) goto LAB_100039d0;
              bVar8 = local_8474;
              if ((byte)(local_8474 + 0xbf) < 0x1a) {
                bVar8 = local_8474 | 0x20;
              }
              in_EDX = local_14;
              if ((bVar8 != 0x3a) || (local_8473 == 0)) goto LAB_100039d0;
              bVar8 = local_8473;
              if ((byte)(local_8473 + 0xbf) < 0x1a) {
                bVar8 = local_8473 | 0x20;
              }
              if ((bVar8 != 0x2f) || (local_8472 == 0)) goto LAB_100039d0;
              bVar8 = local_8472;
              if ((byte)(local_8472 + 0xbf) < 0x1a) {
                bVar8 = local_8472 | 0x20;
              }
              if (bVar8 != 0x2f) goto LAB_100039d0;
LAB_10003af6:
              snprintf(local_50,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_8478);
            }
          }
          pcVar11 = pcVar11 + 1;
          goto LAB_100033a5;
        }
      }
      else {
        if (local_48 == 0x21) goto LAB_100033a1;
        if ((byte)(local_48 + 0xbf) < 0x1a) {
          bVar8 = local_48 | 0x20;
          if (bVar8 != 0x62) goto LAB_10003577;
LAB_1000360d:
          if (local_47 == 0) {
            pcVar11 = &DAT_0181bd01;
LAB_1000368b:
            local_20 = 0;
            goto LAB_10003692;
          }
          bVar8 = local_47;
          if ((byte)(local_47 + 0xbf) < 0x1a) {
            bVar8 = local_47 | 0x20;
          }
          if (bVar8 == 0x61) {
            if (local_46 == 0) {
              pcVar11 = &DAT_0181bd02;
              goto LAB_1000368b;
            }
            bVar8 = local_46;
            if ((byte)(local_46 + 0xbf) < 0x1a) {
              bVar8 = local_46 | 0x20;
            }
            if (bVar8 != 0x73) goto LAB_1000366f;
            if (local_45 == 0) {
              pcVar11 = &DAT_0181bd03;
              goto LAB_1000368b;
            }
            bVar8 = local_45;
            if ((byte)(local_45 + 0xbf) < 0x1a) {
              bVar8 = local_45 | 0x20;
            }
            local_20 = 0;
            if ((bVar8 == 0x65) && (pcVar11 = &DAT_0181bd04, local_44 == 0)) goto LAB_10003692;
            goto LAB_1000369b;
          }
        }
        else {
          bVar8 = local_48;
          if (local_48 == 0x62) goto LAB_1000360d;
LAB_10003577:
          if (bVar8 == 0x6d) {
            uVar15 = (uint)CONCAT11(local_47,0x6d);
            if (local_47 == 0) {
              pcVar4 = &DAT_0181bcfc;
LAB_100035f7:
              if (*pcVar4 == '\0') goto LAB_100033a1;
              if (local_48 == 0) goto LAB_10003692;
            }
            else {
              if ((byte)(local_47 + 0xbf) < 0x1a) {
                uVar15 = (uint)(ushort)(CONCAT11(local_47,0x6d) | 0x2000);
              }
              if ((char)(uVar15 >> 8) == 'e') {
                uVar7 = (undefined1)uVar15;
                uVar15 = (uint)CONCAT11(local_46,uVar7);
                if (local_46 == 0) {
                  pcVar4 = &DAT_0181bcfd;
                }
                else {
                  if ((byte)(local_46 + 0xbf) < 0x1a) {
                    uVar15 = (uint)(ushort)(CONCAT11(local_46,uVar7) | 0x2000);
                  }
                  if ((char)(uVar15 >> 8) != 't') goto LAB_10003608;
                  uVar7 = (undefined1)uVar15;
                  uVar15 = (uint)CONCAT11(local_45,uVar7);
                  if (local_45 == 0) {
                    pcVar4 = &DAT_0181bcfe;
                  }
                  else {
                    if ((byte)(local_45 + 0xbf) < 0x1a) {
                      uVar15 = (uint)(ushort)(CONCAT11(local_45,uVar7) | 0x2000);
                    }
                    if (((char)(uVar15 >> 8) != 'a') || (pcVar4 = &DAT_0181bcff, local_44 != 0))
                    goto LAB_10003608;
                  }
                }
                goto LAB_100035f7;
              }
            }
LAB_10003608:
            if ((char)uVar15 == 'b') goto LAB_1000360d;
          }
        }
LAB_1000366f:
        local_20 = 0;
      }
LAB_1000369b:
      pcVar11 = &DAT_0181bd2f;
      if ((char)local_20 != '\0') goto LAB_100036a6;
      if ((byte)(local_48 + 0xbf) < 0x1a) {
        bVar8 = local_48 | 0x20;
        if (bVar8 == 0x73) goto LAB_10003b39;
LAB_100036e7:
        if (bVar8 != 0x6c) goto LAB_10003bc0;
        uVar15 = (uint)CONCAT11(local_47,0x6c);
        if (local_47 != 0) {
          if ((byte)(local_47 + 0xbf) < 0x1a) {
            uVar15 = (uint)(ushort)(CONCAT11(local_47,0x6c) | 0x2000);
          }
          if ((char)(uVar15 >> 8) == 'i') {
            uVar7 = (undefined1)uVar15;
            uVar15 = (uint)CONCAT11(local_46,uVar7);
            if (local_46 == 0) {
              pcVar11 = &DAT_0181bd1d;
            }
            else {
              if ((byte)(local_46 + 0xbf) < 0x1a) {
                uVar15 = (uint)(ushort)(CONCAT11(local_46,uVar7) | 0x2000);
              }
              if ((char)(uVar15 >> 8) != 'n') goto LAB_10003b30;
              uVar7 = (undefined1)uVar15;
              uVar15 = (uint)CONCAT11(local_45,uVar7);
              if (local_45 == 0) {
                pcVar11 = &DAT_0181bd1e;
              }
              else {
                if ((byte)(local_45 + 0xbf) < 0x1a) {
                  uVar15 = (uint)(ushort)(CONCAT11(local_45,uVar7) | 0x2000);
                }
                if (((char)(uVar15 >> 8) != 'k') || (pcVar11 = &DAT_0181bd1f, local_44 != 0))
                goto LAB_10003b30;
              }
            }
            goto LAB_10003b1d;
          }
LAB_10003b30:
          if ((char)uVar15 == 's') goto LAB_10003b39;
          goto LAB_10003bc0;
        }
        pcVar11 = &DAT_0181bd1c;
LAB_10003b1d:
        if (*pcVar11 != '\0') goto LAB_10003b30;
        recovered_10007ce0((char *)(abStack_359 + 1),(char *)((uintptr_t)pf_module_state+0x157dU),&local_3b8);
        recovered_10007ce0((char *)(abStack_359 + 1),(char *)((uintptr_t)pf_module_state+0x1562U),local_258);
        local_158 = 0;
        local_478[0] = '\0';
        if (local_258[0] == 0) goto LAB_100033a1;
        recovered_10007f40(in_EDX,local_258,(char *)&local_158);
        if (local_158 == 0) {
glacier_url_null:
          pcVar11 = (char *)0x0;
        }
        else {
          bVar8 = local_158;
          if ((byte)(local_158 + 0xbf) < 0x1a) {
            bVar8 = local_158 | 0x20;
          }
          if (bVar8 != 0x68) goto glacier_url_null;
          if (local_157 == 0) {
LAB_10004290:
            if (local_157 == 0) goto glacier_url_null;
            bVar8 = local_157;
            if ((byte)(local_157 + 0xbf) < 0x1a) {
              bVar8 = local_157 | 0x20;
            }
            if ((bVar8 == 0x74) && (local_156 != 0)) {
              bVar8 = local_156;
              if ((byte)(local_156 + 0xbf) < 0x1a) {
                bVar8 = local_156 | 0x20;
              }
              if ((bVar8 == 0x74) && (local_155 != 0)) {
                bVar8 = local_155;
                if ((byte)(local_155 + 0xbf) < 0x1a) {
                  bVar8 = local_155 | 0x20;
                }
                if ((bVar8 == 0x70) && (local_154 != 0)) {
                  bVar8 = local_154;
                  if ((byte)(local_154 + 0xbf) < 0x1a) {
                    bVar8 = local_154 | 0x20;
                  }
                  if ((bVar8 == 0x73) && (local_153 != 0)) {
                    bVar8 = local_153;
                    if ((byte)(local_153 + 0xbf) < 0x1a) {
                      bVar8 = local_153 | 0x20;
                    }
                    if ((bVar8 == 0x3a) && (local_152 != 0)) {
                      bVar8 = local_152;
                      if ((byte)(local_152 + 0xbf) < 0x1a) {
                        bVar8 = local_152 | 0x20;
                      }
                      if ((bVar8 == 0x2f) && (local_151 != 0)) {
                        bVar8 = local_151;
                        if ((byte)(local_151 + 0xbf) < 0x1a) {
                          bVar8 = local_151 | 0x20;
                        }
                        pcVar11 = (char *)(uint)(bVar8 == 0x2f);
                        in_EDX = local_14;
                        goto glacier_url_null;
                      }
                    }
                  }
                }
              }
            }
            pcVar11 = (char *)0x0;
            in_EDX = local_14;
          }
          else {
            bVar8 = local_157;
            if ((byte)(local_157 + 0xbf) < 0x1a) {
              bVar8 = local_157 | 0x20;
            }
            if ((bVar8 != 0x74) || (local_156 == 0)) goto LAB_10004290;
            bVar8 = local_156;
            if ((byte)(local_156 + 0xbf) < 0x1a) {
              bVar8 = local_156 | 0x20;
            }
            in_EDX = local_14;
            if ((bVar8 != 0x74) || (local_155 == 0)) goto LAB_10004290;
            bVar8 = local_155;
            if ((byte)(local_155 + 0xbf) < 0x1a) {
              bVar8 = local_155 | 0x20;
            }
            if ((bVar8 != 0x70) || (local_154 == 0)) goto LAB_10004290;
            bVar8 = local_154;
            if ((byte)(local_154 + 0xbf) < 0x1a) {
              bVar8 = local_154 | 0x20;
            }
            if ((bVar8 != 0x3a) || (local_153 == 0)) goto LAB_10004290;
            bVar8 = local_153;
            if ((byte)(local_153 + 0xbf) < 0x1a) {
              bVar8 = local_153 | 0x20;
            }
            if ((bVar8 != 0x2f) || (local_152 == 0)) goto LAB_10004290;
            bVar8 = local_152;
            if ((byte)(local_152 + 0xbf) < 0x1a) {
              bVar8 = local_152 | 0x20;
            }
            pcVar11 = (char *)(uint)(bVar8 == 0x2f);
            if (bVar8 != 0x2f) {
              goto LAB_10004290;
            }
          }
        }
joined_r0x10004285:
        if (local_258[0] != 0) {
          local_1c = pcVar11;
          uVar3 = strlen((char *)((uintptr_t)pf_module_state+0x1581U));
          iVar16 = local_14;
          if ((uVar3 == 0) || (local_3b8 == '\0')) goto LAB_100033a1;
          pcVar11 = &local_3b8;
          do {
            uVar9 = 0;
            while (bVar8 = pcVar11[uVar9], bVar8 != 0) {
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                bVar8 = bVar8 | 0x20;
              }
              bVar13 = *(byte *)(uVar9 + ((uintptr_t)pf_module_state+0x1581U));
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                bVar13 = bVar13 | 0x20;
              }
              if (bVar8 != bVar13) break;
              uVar9 = uVar9 + 1;
              if (uVar3 == uVar9) goto LAB_100043f8;
            }
            if (uVar3 == uVar9) {
LAB_100043f8:
              if (((byte)local_1c & 3 < local_4c) == 0) {
                local_4c = local_4c + ((uint)local_1c & 0xff);
                uVar2 = recovered_10008360(local_14,(char *)local_258,local_8478,0x8000,local_478);
                in_EDX = iVar16;
                if ((char)uVar2 == '\0') goto LAB_100033a1;
                recovered_10007b60(*(char **)(iVar16 + 0x314),0x8000,(int)local_8478);
                pcVar11 = *(char **)(iVar16 + 0x314);
                if ((pcVar11 != (char *)0x0) &&
                   (uVar3 = strlen(pcVar11), uVar3 < 0x7fff)) {
                  (pcVar11 + uVar3)[0] = '\n';
                  (pcVar11 + uVar3)[1] = '\0';
                }
              }
              break;
            }
            pcVar4 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
          } while (*pcVar4 != '\0');
          goto LAB_1000339e;
        }
LAB_100033a1:
        pcVar11 = local_18 + 1;
      }
      else {
        bVar8 = local_48;
        if (local_48 != 0x73) goto LAB_100036e7;
LAB_10003b39:
        if (local_47 != 0) {
          bVar8 = local_47;
          if ((byte)(local_47 + 0xbf) < 0x1a) {
            bVar8 = local_47 | 0x20;
          }
          if (bVar8 == 0x74) {
            if (local_46 == 0) {
              pcVar11 = &DAT_0181bd31;
            }
            else {
              bVar8 = local_46;
              if ((byte)(local_46 + 0xbf) < 0x1a) {
                bVar8 = local_46 | 0x20;
              }
              if (bVar8 != 0x79) goto LAB_10003bc0;
              if (local_45 == 0) {
                pcVar11 = &DAT_0181bd32;
              }
              else {
                bVar8 = local_45;
                if ((byte)(local_45 + 0xbf) < 0x1a) {
                  bVar8 = local_45 | 0x20;
                }
                if (bVar8 != 0x6c) goto LAB_10003bc0;
                if (local_44 == 0) {
                  pcVar11 = &DAT_0181bd33;
                }
                else {
                  bVar8 = local_44;
                  if ((byte)(local_44 + 0xbf) < 0x1a) {
                    bVar8 = local_44 | 0x20;
                  }
                  if ((bVar8 != 0x65) || (pcVar11 = &DAT_0181bd34, local_43 != 0))
                  goto LAB_10003bc0;
                }
              }
            }
            goto LAB_100036a6;
          }
LAB_10003bc0:
          bVar8 = local_48;
          if ((byte)(local_48 + 0xbf) < 0x1a) {
            bVar8 = local_48 | 0x20;
          }
          if (bVar8 == 0x73) {
            if (local_47 == 0) {
              pcVar11 = &DAT_0181bd3f;
            }
            else {
              bVar8 = local_47;
              if ((byte)(local_47 + 0xbf) < 0x1a) {
                bVar8 = local_47 | 0x20;
              }
              if (bVar8 != 99) goto LAB_10003e80;
              if (local_46 == 0) {
                pcVar11 = &DAT_0181bd40;
              }
              else {
                bVar8 = local_46;
                if ((byte)(local_46 + 0xbf) < 0x1a) {
                  bVar8 = local_46 | 0x20;
                }
                if (bVar8 != 0x72) goto LAB_10003e80;
                if (local_45 == 0) {
                  pcVar11 = &DAT_0181bd41;
                }
                else {
                  bVar8 = local_45;
                  if ((byte)(local_45 + 0xbf) < 0x1a) {
                    bVar8 = local_45 | 0x20;
                  }
                  if (bVar8 != 0x69) goto LAB_10003e80;
                  if (local_44 == 0) {
                    pcVar11 = &DAT_0181bd42;
                  }
                  else {
                    bVar8 = local_44;
                    if ((byte)(local_44 + 0xbf) < 0x1a) {
                      bVar8 = local_44 | 0x20;
                    }
                    if (bVar8 != 0x70) goto LAB_10003e80;
                    if (local_43 == 0) {
                      pcVar11 = &DAT_0181bd43;
                    }
                    else {
                      bVar8 = local_43;
                      if ((byte)(local_43 + 0xbf) < 0x1a) {
                        bVar8 = local_43 | 0x20;
                      }
                      if ((bVar8 != 0x74) || (pcVar11 = &DAT_0181bd44, local_42 != '\0'))
                      goto LAB_10003e80;
                    }
                  }
                }
              }
            }
            goto LAB_10003e6c;
          }
LAB_10003e80:
          pcVar11 = *(char **)(local_14 + 0x310);
          uVar15 = local_58 + 1;
          uVar3 = strlen(pcVar11);
          if ((int)(0x5ffff - uVar3) <= (int)uVar15) {
            uVar15 = 0x5ffff - uVar3;
          }
          if (pcVar11 != (char *)0x0) {
            uVar3 = strlen(pcVar11);
            if (uVar3 < 0x5ffff) {
              uVar10 = 0x5ffff - uVar3;
              if (uVar15 <= 0x5ffff - uVar3) {
                uVar10 = uVar15;
              }
              if (uVar10 != 0) {
                memcpy(pcVar11 + uVar3,local_1c,uVar10);
              }
              pcVar11[uVar10 + uVar3] = '\0';
LAB_1000339e:
              in_EDX = local_14;
            }
          }
          goto LAB_100033a1;
        }
        pcVar11 = &DAT_0181bd30;
LAB_100036a6:
        if (*pcVar11 == '\0') {
          uVar3 = strlen(&DAT_0181bd35);
          if ((uVar3 != 0) && (local_1c = local_18 + 1, *local_1c != '\0')) {
            pcVar11 = local_1c;
            do {
              uVar9 = 0;
              while( true ) {
                bVar8 = pcVar11[uVar9];
                if (bVar8 == 0) break;
                if ((byte)(bVar8 + 0xbf) < 0x1a) {
                  bVar8 = bVar8 | 0x20;
                }
                bVar13 = (&DAT_0181bd35)[uVar9];
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  bVar13 = bVar13 | 0x20;
                }
                in_EDX = local_14;
                if (bVar8 != bVar13) break;
                uVar9 = uVar9 + 1;
                if (uVar3 == uVar9) goto LAB_10003852;
              }
              if (uVar3 == uVar9) goto LAB_10003852;
              pcVar4 = pcVar11 + 1;
              pcVar11 = pcVar11 + 1;
              if (*pcVar4 == '\0') break;
            } while( true );
          }
          goto LAB_100044d8;
        }
        pcVar11 = &DAT_0181bd3e;
        if ((char)local_20 == '\0') goto LAB_10003bc0;
LAB_10003e6c:
        if (*pcVar11 != '\0') goto LAB_10003e80;
        pcVar11 = local_18 + 1;
        uVar3 = strlen((char *)((uintptr_t)pf_module_state+0x15a2U));
        pcVar4 = (char *)0x0;
        if ((uVar3 != 0) && (*pcVar11 != '\0')) {
          pcVar4 = pcVar11;
          do {
            uVar9 = 0;
            while (bVar8 = pcVar4[uVar9], bVar8 != 0) {
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                bVar8 = bVar8 | 0x20;
              }
              bVar13 = *(byte *)(uVar9 + ((uintptr_t)pf_module_state+0x15a2U));
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                bVar13 = bVar13 | 0x20;
              }
              if (bVar8 != bVar13) break;
              uVar9 = uVar9 + 1;
              if (uVar3 == uVar9) goto LAB_10003f63;
            }
            if (uVar3 == uVar9) goto LAB_10003f63;
            pcVar14 = pcVar4 + 1;
            pcVar4 = pcVar4 + 1;
          } while (*pcVar14 != '\0');
          pcVar4 = (char *)0x0;
        }
LAB_10003f63:
        local_8478[0] = 0;
        local_258[0] = 0;
        local_158 = 0;
        local_3b8 = '\0';
        recovered_10007ce0((char *)(abStack_359 + 1),(char *)((uintptr_t)pf_module_state+0x15acU),local_258);
        if (local_258[0] == 0) {
          if (pcVar4 != (char *)0x0) {
            pcVar14 = pcVar4 + ~(uint)local_18;
            if (0xffe < (int)pcVar14) {
              pcVar14 = (char *)0xfff;
            }
            memcpy(local_8478,pcVar11,(ulong)pcVar14);
            local_8478[(int)pcVar14] = 0;
          }
        }
        else {
          recovered_10007f40(local_14,local_258,(char *)&local_158);
          if (local_158 != 0) {
            bVar8 = local_158;
            if ((byte)(local_158 + 0xbf) < 0x1a) {
              bVar8 = local_158 | 0x20;
            }
            if ((bVar8 == 0x68) && (local_157 != 0)) {
              bVar8 = local_157;
              if ((byte)(local_157 + 0xbf) < 0x1a) {
                bVar8 = local_157 | 0x20;
              }
              if ((bVar8 == 0x74) && (local_156 != 0)) {
                bVar8 = local_156;
                if ((byte)(local_156 + 0xbf) < 0x1a) {
                  bVar8 = local_156 | 0x20;
                }
                if ((bVar8 == 0x74) && (local_155 != 0)) {
                  bVar8 = local_155;
                  if ((byte)(local_155 + 0xbf) < 0x1a) {
                    bVar8 = local_155 | 0x20;
                  }
                  if ((bVar8 == 0x70) && (local_154 != 0)) {
                    bVar8 = local_154;
                    if ((byte)(local_154 + 0xbf) < 0x1a) {
                      bVar8 = local_154 | 0x20;
                    }
                    if ((bVar8 == 0x3a) && (local_153 != 0)) {
                      bVar8 = local_153;
                      if ((byte)(local_153 + 0xbf) < 0x1a) {
                        bVar8 = local_153 | 0x20;
                      }
                      if ((bVar8 == 0x2f) && (local_152 != 0)) {
                        bVar8 = local_152;
                        if ((byte)(local_152 + 0xbf) < 0x1a) {
                          bVar8 = local_152 | 0x20;
                        }
                        if (bVar8 == 0x2f) goto LAB_10004104;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar16 = recovered_10007ed0((int)&local_158,(byte *)((uintptr_t)pf_module_state+0x156fU));
          if ((char)iVar16 == '\0') {
            recovered_10008360(local_14,(char *)local_258,local_8478,0x1000,&local_3b8);
          }
        }
LAB_10004104:
        uVar3 = strlen((char *)((uintptr_t)pf_module_state+0x15b0U));
        in_EDX = local_14;
        if ((uVar3 != 0) && (abStack_359[1] != 0)) {
          pbVar6 = abStack_359;
          do {
            pbVar6 = pbVar6 + 1;
            uVar9 = 0;
            while (bVar8 = pbVar6[uVar9], bVar8 != 0) {
              if ((byte)(bVar8 + 0xbf) < 0x1a) {
                bVar8 = bVar8 | 0x20;
              }
              bVar13 = *(byte *)(uVar9 + ((uintptr_t)pf_module_state+0x15b0U));
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                bVar13 = bVar13 | 0x20;
              }
              if (bVar8 != bVar13) break;
              uVar9 = uVar9 + 1;
              if (uVar3 == uVar9) goto LAB_1000423e;
            }
            if (uVar3 == uVar9) {
LAB_1000423e:
              if (*(char *)(local_28 + 0x57dd) == '\x01') {
                recovered_10007b60(*(char **)(local_14 + 0x310),0x60000,((uintptr_t)pf_module_state+0x15bdU));
              }
              goto LAB_10004268;
            }
          } while (pbVar6[1] != 0);
        }
        if (local_8478[0] != 0) {
          recovered_10007b60(*(char **)(local_14 + 0x318),0x8000,(int)local_8478);
          pcVar11 = *(char **)(in_EDX + 0x318);
          if ((pcVar11 != (char *)0x0) && (uVar3 = strlen(pcVar11), uVar3 < 0x7fff)) {
            (pcVar11 + uVar3)[0] = '\n';
            (pcVar11 + uVar3)[1] = '\0';
          }
          bVar1 = recovered_100086e0((char *)local_8478);
          if (bVar1) {
            local_478[0] = '\0';
            winter_js_execute_basic((char *)local_8478,*(char **)(in_EDX + 0x310),0x60000,local_478,0xc0,
                         (uint)*(byte *)(local_28 + 0x57dc) * 2 + 1);
            if (local_478[0] != '\0') {
              snprintf(local_54,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),local_478);
            }
          }
        }
LAB_10004268:
        pcVar11 = pcVar4 + 9;
        if (pcVar4 == (char *)0x0) goto LAB_100044d8;
      }
      goto LAB_100033a5;
    }
LAB_100044d8:
    memset((undefined1 *)(in_EDX + 0x31c),0,0x110);
    *(undefined4 *)(in_EDX + 800) = 0xfffffcff;
    *(undefined4 *)(in_EDX + 0x324) = 0x161c22ff;
    *(undefined4 *)(in_EDX + 0x328) = 0x1252b4ff;
    *(undefined1 *)(in_EDX + 0x32c) = 0;
    uVar2 = recovered_1000d120(*(char **)(in_EDX + 0x314),(char *)((uintptr_t)pf_module_state+0x1bdfU),local_8478);
    if ((char)uVar2 != '\0') {
      uVar2 = recovered_1000d2c0((char *)local_8478,(char *)((uintptr_t)pf_module_state+0x1be4U),abStack_359 + 1);
      if (((char)uVar2 != '\0') &&
         (uVar2 = recovered_1000d4d0(abStack_359 + 1,(undefined4 *)(local_14 + 800)),
         (char)uVar2 != '\0')) {
        *(undefined1 *)(in_EDX + 0x31c) = 1;
      }
      uVar2 = recovered_1000d2c0((char *)local_8478,(char *)((uintptr_t)pf_module_state+0x1bf5U),abStack_359 + 1);
      in_EDX = local_14;
      if ((char)uVar2 != '\0') {
        *(undefined1 *)(local_14 + 0x32c) = 0;
        pbVar6 = abStack_359 + 6;
        if (abStack_359[1] < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x100045c9 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)abStack_359[1] * 4 + ((uintptr_t)pf_module_state+0x1fdU)))();
          return;
        }
        if ((byte)(abStack_359[1] + 0xbf) < 0x1a) {
          abStack_359[1] = abStack_359[1] | 0x20;
        }
        if ((abStack_359[1] == 0x75) && (abStack_359[2] != 0)) {
          if ((byte)(abStack_359[2] + 0xbf) < 0x1a) {
            abStack_359[2] = abStack_359[2] | 0x20;
          }
          if ((abStack_359[2] == 0x72) && (abStack_359[3] != 0)) {
            if ((byte)(abStack_359[3] + 0xbf) < 0x1a) {
              abStack_359[3] = abStack_359[3] | 0x20;
            }
            if ((abStack_359[3] == 0x6c) && (abStack_359[4] != 0)) {
              if ((byte)(abStack_359[4] + 0xbf) < 0x1a) {
                abStack_359[4] = abStack_359[4] | 0x20;
              }
              if (abStack_359[4] == 0x28) {
                while( true ) {
                  uVar10 = (uint)pbVar6[-1];
                  uVar15 = uVar10 - 9;
                  if (0x1e < uVar15) break;
                  if ((0x80001bU >> (uVar15 & 0x1f) & 1) == 0) {
                    if ((0x42000000U >> (uVar15 & 0x1f) & 1) != 0) {
                      uVar15 = (uint)*pbVar6;
                      uVar12 = uVar10;
                      goto LAB_1000467d;
                    }
                    break;
                  }
                  pbVar6 = pbVar6 + 1;
                }
                pbVar6 = pbVar6 + -1;
                uVar12 = 0;
                uVar15 = uVar10;
LAB_1000467d:
                pcVar11 = (char *)0x0;
                if (uVar12 != (int)(char)uVar15 && (char)uVar15 != '\0') {
                  pcVar4 = (char *)0x0;
                  do {
                    if ((uVar12 == 0) && (uVar10 = (uVar15 & 0xff) - 9, uVar10 < 0x21)) {
                    /* WARNING: Could not emulate address calculation at 0x100046a1 */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(uVar10 * 4 + ((uintptr_t)pf_module_state+0x281U)))();
                      return;
                    }
                    local_18 = pcVar4;
                    pcVar11 = pcVar4 + 1;
                    local_1c = pcVar11;
                    pcVar4[local_14 + 0x32c] = (char)uVar15;
                    uVar15 = (uint)(char)(pbVar6 + 1)[(int)pcVar4];
                  } while (((uVar15 != 0) && (pcVar11 < (char *)0xff)) &&
                          (pcVar4 = pcVar11, uVar12 != uVar15));
                }
                pcVar11[local_14 + 0x32c] = '\0';
                if (*(char *)(local_14 + 0x32c) != '\0') {
                  *(undefined1 *)(local_14 + 0x31d) = 1;
                }
              }
            }
          }
        }
      }
      uVar2 = recovered_1000d2c0((char *)local_8478,(char *)((uintptr_t)pf_module_state+0x1c06U),abStack_359 + 1);
      if (((char)uVar2 != '\0') &&
         (uVar2 = recovered_1000d4d0(abStack_359 + 1,(undefined4 *)(in_EDX + 0x324)),
         (char)uVar2 != '\0')) {
        *(undefined1 *)(in_EDX + 0x31e) = 1;
      }
    }
    uVar2 = recovered_1000d120(*(char **)(in_EDX + 0x314),&DAT_0181c3af,local_8478);
    if ((((char)uVar2 != '\0') ||
        (uVar2 = recovered_1000d120(*(char **)(in_EDX + 0x314),(char *)((uintptr_t)pf_module_state+0x1c0eU),local_8478),
        (char)uVar2 != '\0')) &&
       ((uVar2 = recovered_1000d2c0((char *)local_8478,(char *)((uintptr_t)pf_module_state+0x1c06U),abStack_359 + 1),
        (char)uVar2 != '\0' &&
        (uVar2 = recovered_1000d4d0(abStack_359 + 1,(undefined4 *)(in_EDX + 0x328)),
        (char)uVar2 != '\0')))) {
      *(undefined1 *)(in_EDX + 799) = 1;
    }
  }
  return;
LAB_10003852:
  pcVar4 = *(char **)(in_EDX + 0x314);
  uVar15 = ~(uint)local_18;
  uVar3 = strlen(pcVar4);
  pcVar14 = pcVar11 + uVar15;
  if ((int)(0x7fff - uVar3) <= (int)(pcVar11 + uVar15)) {
    pcVar14 = (char *)(0x7fff - uVar3);
  }
  if ((pcVar4 != (char *)0x0) &&
     (pcVar5 = (char *)strlen(pcVar4), pcVar5 < (char *)0x7fff)) {
    n = (char *)(0x7fff - (int)pcVar5);
    if (pcVar14 <= (char *)(0x7fff - (int)pcVar5)) {
      n = pcVar14;
    }
    if (n != (char *)0x0) {
      local_18 = pcVar5;
      memcpy(pcVar4 + (int)pcVar5,local_1c,(ulong)n);
      pcVar5 = local_18;
    }
    n[(int)(pcVar4 + (int)pcVar5)] = '\0';
  }
  in_EDX = local_14;
  pcVar4 = *(char **)(local_14 + 0x314);
  if ((pcVar4 != (char *)0x0) && (uVar3 = strlen(pcVar4), uVar3 < 0x7fff)) {
    (pcVar4 + uVar3)[0] = '\n';
    (pcVar4 + uVar3)[1] = '\0';
  }
  pcVar11 = pcVar11 + 8;
  goto LAB_100033a5;
}

#undef DAT_0181bcfc
#undef DAT_0181bcfd
#undef DAT_0181bcfe
#undef DAT_0181bcff
#undef DAT_0181bd00
#undef DAT_0181bd01
#undef DAT_0181bd02
#undef DAT_0181bd03
#undef DAT_0181bd04
#undef DAT_0181bd1c
#undef DAT_0181bd1d
#undef DAT_0181bd1e
#undef DAT_0181bd1f
#undef DAT_0181bd2f
#undef DAT_0181bd30
#undef DAT_0181bd31
#undef DAT_0181bd32
#undef DAT_0181bd33
#undef DAT_0181bd34
#undef DAT_0181bd35
#undef DAT_0181bd3e
#undef DAT_0181bd3f
#undef DAT_0181bd40
#undef DAT_0181bd41
#undef DAT_0181bd42
#undef DAT_0181bd43
#undef DAT_0181bd44
#undef DAT_0181c3af
#undef local_8478
#undef local_8474
#undef local_8473
#undef local_8472
#undef local_8471
#undef local_478
#undef local_3b8
#undef local_3b7
#undef local_258
#undef local_158
#undef local_157
#undef local_156
#undef local_155
#undef local_154
#undef local_153
#undef local_152
#undef local_151
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_28
#undef local_21
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef abStack_359

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef DAT_0181c3af
#define DAT_0181c3af (*(uint8_t *)(0x181c3afU))
#undef DAT_0181c3b9
#define DAT_0181c3b9 (*(uint8_t *)(0x181c3b9U))
#undef DAT_0181c3ba
#define DAT_0181c3ba (*(uint8_t *)(0x181c3baU))
#undef DAT_0181c3bc
#define DAT_0181c3bc (*(uint8_t *)(0x181c3bcU))
#undef DAT_0181c3bd
#define DAT_0181c3bd (*(uint8_t *)(0x181c3bdU))
#undef DAT_0181c3be
#define DAT_0181c3be (*(uint8_t *)(0x181c3beU))
#undef DAT_0181c3bf
#define DAT_0181c3bf (*(uint8_t *)(0x181c3bfU))
#undef DAT_0181c3c0
#define DAT_0181c3c0 (*(uint8_t *)(0x181c3c0U))
#undef DAT_0181c3d2
#define DAT_0181c3d2 (*(uint8_t *)(0x181c3d2U))
#undef DAT_0181c3e8
#define DAT_0181c3e8 (*(uint8_t *)(0x181c3e8U))
#undef DAT_0181c3e9
#define DAT_0181c3e9 (*(uint8_t *)(0x181c3e9U))
#undef DAT_0181c3ea
#define DAT_0181c3ea (*(uint8_t *)(0x181c3eaU))
#undef DAT_0181c3eb
#define DAT_0181c3eb (*(uint8_t *)(0x181c3ebU))
#undef DAT_0181c3ec
#define DAT_0181c3ec (*(uint8_t *)(0x181c3ecU))
#undef DAT_0181c3ed
#define DAT_0181c3ed (*(uint8_t *)(0x181c3edU))
#undef DAT_0181c3ee
#define DAT_0181c3ee (*(uint8_t *)(0x181c3eeU))
#undef DAT_0181c3ef
#define DAT_0181c3ef (*(uint8_t *)(0x181c3efU))
#undef DAT_0181c3f0
#define DAT_0181c3f0 (*(uint8_t *)(0x181c3f0U))
#undef DAT_0181c3f1
#define DAT_0181c3f1 (*(uint8_t *)(0x181c3f1U))
#undef DAT_0181c3f2
#define DAT_0181c3f2 (*(uint8_t *)(0x181c3f2U))
#undef DAT_0181c3f3
#define DAT_0181c3f3 (*(uint8_t *)(0x181c3f3U))
#undef DAT_0181c3f4
#define DAT_0181c3f4 (*(uint8_t *)(0x181c3f4U))
#undef DAT_0181c3f5
#define DAT_0181c3f5 (*(uint8_t *)(0x181c3f5U))
#undef DAT_0181c3f6
#define DAT_0181c3f6 (*(uint8_t *)(0x181c3f6U))
#undef DAT_0181c3f8
#define DAT_0181c3f8 (*(uint8_t *)(0x181c3f8U))
#undef DAT_0181c3f9
#define DAT_0181c3f9 (*(uint8_t *)(0x181c3f9U))
#undef DAT_0181c3fa
#define DAT_0181c3fa (*(uint8_t *)(0x181c3faU))
#undef DAT_0181c3fb
#define DAT_0181c3fb (*(uint8_t *)(0x181c3fbU))
#undef DAT_0181c3fc
#define DAT_0181c3fc (*(uint8_t *)(0x181c3fcU))
#undef DAT_0181c3fd
#define DAT_0181c3fd (*(uint8_t *)(0x181c3fdU))
#undef DAT_0181c3fe
#define DAT_0181c3fe (*(uint8_t *)(0x181c3feU))
#undef DAT_0181c3ff
#define DAT_0181c3ff (*(uint8_t *)(0x181c3ffU))
#undef DAT_0181c400
#define DAT_0181c400 (*(uint8_t *)(0x181c400U))
#undef DAT_0181c401
#define DAT_0181c401 (*(uint8_t *)(0x181c401U))
#undef DAT_0181c402
#define DAT_0181c402 (*(uint8_t *)(0x181c402U))
#undef DAT_0181c403
#define DAT_0181c403 (*(uint8_t *)(0x181c403U))
#undef DAT_0181c404
#define DAT_0181c404 (*(uint8_t *)(0x181c404U))
#undef DAT_0181c405
#define DAT_0181c405 (*(uint8_t *)(0x181c405U))
#undef DAT_0181c406
#define DAT_0181c406 (*(uint8_t *)(0x181c406U))
#undef DAT_0181c408
#define DAT_0181c408 (*(uint8_t *)(0x181c408U))
#undef DAT_0181c409
#define DAT_0181c409 (*(uint8_t *)(0x181c409U))
#undef DAT_0181c40a
#define DAT_0181c40a (*(uint8_t *)(0x181c40aU))
#undef DAT_0181c40b
#define DAT_0181c40b (*(uint8_t *)(0x181c40bU))
#undef DAT_0181c40c
#define DAT_0181c40c (*(uint8_t *)(0x181c40cU))
#undef DAT_0181c415
#define DAT_0181c415 (*(uint8_t *)(0x181c415U))
#undef DAT_0181c416
#define DAT_0181c416 (*(uint8_t *)(0x181c416U))
#undef DAT_0181c417
#define DAT_0181c417 (*(uint8_t *)(0x181c417U))
#undef DAT_0181c44d
#define DAT_0181c44d (*(uint8_t *)(0x181c44dU))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#define local_d6c (*(char (*)[244])(frame + 20))
#define local_c6c (*(byte (*)[4])(frame + 276))
#define local_bac (*(uint (*)[288])(frame + 468))
#define local_72c (*(byte (*)[512])(frame + 1620))
#define local_52c (*(byte (*)[32])(frame + 2132))
#define local_50c (*(uint (*)[64])(frame + 2164))
#define local_40c (*(byte (*)[128])(frame + 2420))
#define local_38c (*(undefined4 *)(frame + 2548))
#define local_2dc (*(uint *)(frame + 2724))
#define local_2d8 (*(uint *)(frame + 2728))
#define local_2d4 (*(uint *)(frame + 2732))
#define local_2d0 (*(uint *)(frame + 2736))
#define local_1d8 (*(char (*)[256])(frame + 2984))
#define local_d8 (*(byte (*)[68])(frame + 3240))
#define local_94 (*(int *)(frame + 3308))
#define local_90 (*(char * *)(frame + 3312))
#define local_8c (*(int *)(frame + 3316))
#define local_88 (*(uint *)(frame + 3320))
#define local_84 (*(uint *)(frame + 3324))
#define local_80 (*(int *)(frame + 3328))
#define local_7c (*(uint *)(frame + 3332))
#define local_78 (*(uint *)(frame + 3336))
#define local_74 (*(byte *)(frame + 3340))
#define local_73 (*(byte *)(frame + 3341))
#define local_72 (*(byte *)(frame + 3342))
#define local_71 (*(byte *)(frame + 3343))
#define local_70 (*(byte *)(frame + 3344))
#define local_6f (*(byte *)(frame + 3345))
#define local_6e (*(byte *)(frame + 3346))
#define local_6d (*(byte *)(frame + 3347))
#define local_6c (*(char *)(frame + 3348))
#define local_4c (*(byte * *)(frame + 3380))
#define local_48 (*(int *)(frame + 3384))
#define local_41 (*(char *)(frame + 3391))
#define local_40 (*(int *)(frame + 3392))
#define local_3c (*(byte * *)(frame + 3396))
#define local_38 (*(byte * *)(frame + 3400))
#define local_34 (*(int *)(frame + 3404))
#define local_30 (*(uint *)(frame + 3408))
#define local_2c (*(uint *)(frame + 3412))
#define local_28 (*(uint *)(frame + 3416))
#define local_24 (*(uint *)(frame + 3420))
#define local_20 (*(uint *)(frame + 3424))
#define local_1c (*(char * *)(frame + 3428))
#define local_18 (*(uint *)(frame + 3432))
#define local_14 (*(int *)(frame + 3436))
#define acStack_c78 (*(char (*)[4])(frame + 264))
#define abStack_c74 (*(byte (*)[4])(frame + 268))
#define abStack_c70 (*(byte (*)[4])(frame + 272))
#define auStack_c68 (*(uint (*)[47])(frame + 280))
#define aiStack_310 (*(int (*)[13])(frame + 2672))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100047d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100047d0(int in_EDX)

{
  unsigned char frame[3488] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined1 *dst;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 extraout_EAX = 0;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
  int iVar14;
  byte bVar15;
  ulong uVar16;
  int *piVar17;
  byte *pbVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;

  local_2c = 0x1e;
  local_28 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0x3c;
  local_24 = 0x12;
  local_20 = local_20 & 0xffffff00;
  if ((in_EDX != 0) && (uVar5 = recovered_10003100(in_EDX), (char)uVar5 != '\0')) {
    pbVar18 = *(byte **)(in_EDX + 0x310);
    *(undefined4 *)(in_EDX + 0x52c2c) = 0;
    *(undefined4 *)(in_EDX + 0x544b0) = 0;
    *(undefined4 *)(in_EDX + 0x544b4) = 0xffffffff;
    local_1d8[0] = '\0';
    local_14 = in_EDX;
    memset(auStack_c68 + 0x2f,0,0x480);
    memset(local_c6c,0,0xc0);
    local_d6c[0] = '\0';
    if (pbVar18 != (byte *)0x0) {
      local_90 = (char *)(local_14 + 0x101);
      local_8c = local_14 + 0x52c30;
      local_94 = local_14 + 0x430;
      local_40 = -1;
      local_80 = 0;
      local_48 = 1;
      local_34 = 0;
      local_30 = 0;
      local_3c = (byte *)0x0;
      local_7c = 0;
      local_78 = 0;
      uVar21 = 0;
LAB_100048eb:
      local_4c = (byte *)local_1d8;
      local_1c = (char *)0x2;
      if ((uVar21 & 1) == 0) {
        local_4c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
        local_1c = (char *)local_80;
      }
      local_18 = uVar21;
      while( true ) {
        if (*pbVar18 == 0) goto LAB_100068ba;
        if (*pbVar18 == 0x3c) break;
        pbVar6 = (byte *)strchr((char *)pbVar18,0x3c);
        if (pbVar6 == (byte *)0x0) {
          uVar16 = strlen((char *)pbVar18);
        }
        else {
          uVar16 = (int)pbVar6 - (int)pbVar18;
        }
        uVar22 = uVar16;
        if (0x1fe < (int)uVar16) {
          uVar22 = 0x1ff;
        }
        local_38 = pbVar18;
        memcpy(local_72c,pbVar18,uVar22);
        local_72c[uVar22] = 0;
        if (local_72c[0] != 0) {
          recovered_1000f090(local_14,(char *)local_72c,(int)local_1c,local_4c,local_48,local_34,
                             (int *)&local_2c);
        }
        pbVar18 = pbVar6;
        if (pbVar6 == (byte *)0x0) {
          pbVar18 = local_38 + uVar16;
        }
      }
      local_1c = strchr((char *)pbVar18,0x3e);
      if (local_1c == (char *)0x0) goto LAB_100068ba;
      local_41 = '\0';
      pcVar19 = local_1c + ~(uint)pbVar18;
      if (0x1fe < (int)pcVar19) {
        pcVar19 = (char *)0x1ff;
      }
      memcpy(local_72c,pbVar18 + 1,(ulong)pcVar19);
      local_72c[(int)pcVar19] = 0;
      recovered_10007bb0(local_72c,&local_74,0x28,&local_41);
      iVar7 = strncmp((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1550U),3);
      if (iVar7 == 0) {
        pcVar19 = strstr((char *)(pbVar18 + 4),(char *)((uintptr_t)pf_module_state+0x1554U));
        if (pcVar19 == (char *)0x0) goto LAB_10005c7b;
        pbVar18 = (byte *)(pcVar19 + 3);
        goto LAB_10005c7f;
      }
      if (local_74 == 0x21 && local_41 == '\0') {
LAB_10005c7b:
        pbVar18 = (byte *)(local_1c + 1);
        goto LAB_10005c7f;
      }
      if (local_41 != '\0') {
        if (local_74 == 0) {
          pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c1bU));
          goto LAB_10004ace;
        }
        bVar15 = local_74;
        if ((byte)(local_74 + 0xbf) < 0x1a) {
          bVar15 = local_74 | 0x20;
        }
        if (bVar15 == 0x61 && local_73 == 0) {
          local_1d8[0] = '\0';
          uVar21 = 0;
          goto LAB_10004cff;
        }
        if (bVar15 != 0x68) {
LAB_10004cb1:
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c1eU));
          if (((bVar4) || (bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c21U)), bVar4)) ||
             (bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c24U)), bVar4)) goto LAB_10004ce4;
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c27U));
          if (bVar4) {
            if (local_30 == 0) {
              local_30 = 0;
            }
            else {
              local_34 = aiStack_310[local_30];
              local_30 = local_30 - 1;
            }
            local_24 = local_24 + 8;
            local_40 = -1;
            uVar21 = local_18;
            goto LAB_10004cff;
          }
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c2cU));
          if ((bVar4) || (bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c2fU))), bVar4)) {
            uVar21 = local_18;
            if (local_7c == 0) {
              local_24 = local_24 + 8;
              local_7c = 0;
            }
            else {
              local_7c = local_7c - 1;
              if ((local_c6c[local_7c * 0xc] & 1) == 0) {
                local_24 = local_24 + 8;
              }
              else {
                iVar7 = local_48;
                if (local_48 < 2) {
                  iVar7 = 1;
                }
                uVar20 = auStack_c68[local_7c * 3 + 1] + 8 + iVar7 * 8;
                if ((int)local_24 <= (int)uVar20) {
                  local_24 = uVar20;
                }
              }
            }
            goto LAB_10004cff;
          }
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c32U));
          if (bVar4) {
            if (local_78 < 2) {
              local_d6c[0] = '\0';
              local_78 = 0;
            }
            else {
              local_78 = local_78 - 1;
            }
            goto LAB_10004cf6;
          }
          uVar5 = recovered_1000d8d0(&local_74);
          if ((char)uVar5 == '\0') goto LAB_10004cf6;
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c3aU));
          uVar21 = local_24;
          if (bVar4) {
            if (local_3c == (byte *)0x0) {
              local_3c = (byte *)0x0;
            }
            else {
              local_38 = local_3c + -1;
              local_2d8 = auStack_c68[(int)local_38 * 0x12 + 0x31];
              local_2d4 = auStack_c68[(int)local_38 * 0x12 + 0x32];
              local_2d0 = auStack_c68[(int)local_38 * 0x12 + 0x33];
              local_2dc = auStack_c68[(int)local_38 * 0x12 + 0x30];
              uVar20 = auStack_c68[(int)local_38 * 0x12 + 0x2f];
              if (uVar20 == 1) {
                local_24 = auStack_c68[(int)local_38 * 0x12 + 0x32];
                local_20 = auStack_c68[(int)local_38 * 0x12 + 0x33];
                local_2c = auStack_c68[(int)local_38 * 0x12 + 0x30];
                local_28 = auStack_c68[(int)local_38 * 0x12 + 0x31];
                local_24 = auStack_c68[(int)local_38 * 0x12 + 0x40] + 10 +
                           auStack_c68[(int)local_38 * 0x12 + 0x3f];
              }
              else {
                uVar23 = auStack_c68[(int)local_38 * 0x12 + 0x36];
                local_4c = (byte *)auStack_c68[(int)local_38 * 0x12 + 0x39];
                local_88 = auStack_c68[(int)local_38 * 0x12 + 0x3a];
                local_84 = auStack_c68[(int)local_38 * 0x12 + 0x3b];
                if (uVar20 == 3) {
                  if ((int)local_24 < 0x1b) {
                    uVar21 = 0x1a;
                  }
                  iVar7 = ((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - uVar21) + -0x68;
                  if (iVar7 < 0x13) {
                    iVar7 = 0x12;
                  }
                  uVar20 = auStack_c68[(int)local_38 * 0x12 + 0x38];
                  iVar14 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - uVar23;
                  iVar12 = *(uint *)(local_14 + 0x52c2c) - uVar20;
                  if (uVar20 <= *(uint *)(local_14 + 0x52c2c) && iVar12 != 0) {
                    piVar17 = (int *)(uVar20 * 0x370 + local_94);
                    do {
                      *piVar17 = *piVar17 + iVar14 + -0x1c;
                      piVar17[1] = piVar17[1] + iVar7 + -10;
                      *(undefined1 *)(piVar17 + 0xda) = 1;
                      piVar17 = piVar17 + 0xdc;
                      iVar12 = iVar12 + -1;
                    } while (iVar12 != 0);
                  }
                  recovered_1000dd60(local_14,iVar7 + -10,uVar23,uVar21 + 10,local_4c,local_88,
                                     local_84,1);
                }
                else {
                  if (uVar20 != 2) {
                    local_24 = auStack_c68[(int)local_38 * 0x12 + 0x32];
                    local_2c = auStack_c68[(int)local_38 * 0x12 + 0x30];
                    local_28 = auStack_c68[(int)local_38 * 0x12 + 0x31];
                    local_20 = auStack_c68[(int)local_38 * 0x12 + 0x33];
                    if ((int)local_24 <= (int)uVar21) {
                      local_24 = uVar21;
                    }
                    if (local_30 == 0) {
                      local_30 = 0;
                    }
                    else {
                      local_34 = aiStack_310[local_30];
                      local_30 = local_30 - 1;
                    }
                    if (uVar20 != 4) {
                      local_24 = local_24 + 8;
                    }
                    goto LAB_1000532e;
                  }
                  iVar7 = local_24 - auStack_c68[(int)local_38 * 0x12 + 0x35];
                  if (iVar7 < 0x13) {
                    iVar7 = 0x12;
                  }
                  uVar21 = auStack_c68[(int)local_38 * 0x12 + 0x34];
                  uVar20 = iVar7 + 10;
                  recovered_1000dd60(local_14,auStack_c68[(int)local_38 * 0x12 + 0x35],uVar23,uVar20
                                     ,local_4c,local_88,local_84,0);
                  if ((local_38 != (byte *)0x0) && (auStack_c68[(int)local_3c * 0x12 + 0xb] == 1)) {
                    uVar11 = auStack_c68[(int)local_3c * 0x12 + 0x1c];
                    if ((int)auStack_c68[(int)local_3c * 0x12 + 0x1c] <= (int)uVar20) {
                      uVar11 = uVar20;
                    }
                    auStack_c68[(int)local_3c * 0x12 + 0x1c] = uVar11;
                    auStack_c68[(int)local_3c * 0x12 + 0x1a] = uVar23 + uVar21;
                  }
                }
                local_20 = local_2d0;
                local_24 = local_2d4;
                local_28 = local_2d8;
                local_2c = local_2dc;
              }
LAB_1000532e:
              local_3c = local_38;
            }
            goto LAB_10004cf6;
          }
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c3eU));
          if ((bVar4) && (local_30 != 0)) {
            local_34 = aiStack_310[local_30];
            local_30 = local_30 - 1;
          }
          goto LAB_100058ec;
        }
        if (local_73 == 0) {
          pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c16U));
LAB_10004c3a:
          if (*pcVar19 != '\0') goto code_r0x10004c48;
        }
        else {
          bVar15 = local_73;
          if ((byte)(local_73 + 0xbf) < 0x1a) {
            bVar15 = local_73 | 0x20;
          }
          if ((bVar15 == 0x31) && (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c17U)), local_72 == 0)) goto LAB_10004c3a;
code_r0x10004c48:
          if (local_73 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c19U));
LAB_10004c7c:
            if (*pcVar19 == '\0') goto LAB_10004ce4;
          }
          else {
            bVar15 = local_73;
            if ((byte)(local_73 + 0xbf) < 0x1a) {
              bVar15 = local_73 | 0x20;
            }
            if ((bVar15 == 0x32) && (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c1aU)), local_72 == 0)) goto LAB_10004c7c;
          }
          if (local_73 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c1cU));
          }
          else {
            bVar15 = local_73;
            if ((byte)(local_73 + 0xbf) < 0x1a) {
              bVar15 = local_73 | 0x20;
            }
            if ((bVar15 != 0x33) || (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c1dU)), local_72 != 0)) goto LAB_10004cb1;
          }
LAB_10004ace:
          if (*pcVar19 != '\0') goto LAB_10004cb1;
        }
LAB_10004ce4:
        local_24 = local_24 + 6;
        local_48 = 1;
        local_80 = 0;
        goto LAB_10004cf6;
      }
      if (**(char **)(local_14 + 0x318) != '\0') {
        if (local_74 != 0) {
          if ((byte)(local_74 + 0xbf) < 0x1a) {
            bVar15 = local_74 | 0x20;
          }
          else {
            bVar15 = local_74;
          }
          if (bVar15 == 0x6e) {
            if (local_73 == 0) {
              pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c46U));
            }
            else {
              bVar15 = local_73;
              if ((byte)(local_73 + 0xbf) < 0x1a) {
                bVar15 = local_73 | 0x20;
              }
              if (bVar15 != 0x6f) goto LAB_10005103;
              if (local_72 == 0) {
                pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c47U));
              }
              else {
                bVar15 = local_72;
                if ((byte)(local_72 + 0xbf) < 0x1a) {
                  bVar15 = local_72 | 0x20;
                }
                if (bVar15 != 0x73) goto LAB_10005103;
                if (local_71 == 0) {
                  pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c48U));
                }
                else {
                  bVar15 = local_71;
                  if ((byte)(local_71 + 0xbf) < 0x1a) {
                    bVar15 = local_71 | 0x20;
                  }
                  if (bVar15 != 99) goto LAB_10005103;
                  if (local_70 == 0) {
                    pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c49U));
                  }
                  else {
                    bVar15 = local_70;
                    if ((byte)(local_70 + 0xbf) < 0x1a) {
                      bVar15 = local_70 | 0x20;
                    }
                    if (bVar15 != 0x72) goto LAB_10005103;
                    if (local_6f == 0) {
                      pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4aU));
                    }
                    else {
                      bVar15 = local_6f;
                      if ((byte)(local_6f + 0xbf) < 0x1a) {
                        bVar15 = local_6f | 0x20;
                      }
                      if (bVar15 != 0x69) goto LAB_10005103;
                      if (local_6e == 0) {
                        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4bU));
                      }
                      else {
                        bVar15 = local_6e;
                        if ((byte)(local_6e + 0xbf) < 0x1a) {
                          bVar15 = local_6e | 0x20;
                        }
                        if (bVar15 != 0x70) goto LAB_10005103;
                        if (local_6d == 0) {
                          pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4cU));
                        }
                        else {
                          bVar15 = local_6d;
                          if ((byte)(local_6d + 0xbf) < 0x1a) {
                            bVar15 = local_6d | 0x20;
                          }
                          if ((bVar15 != 0x74) || (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4dU)), local_6c != '\0'))
                          goto LAB_10005103;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_100050f2;
          }
          goto LAB_10005103;
        }
        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c45U));
LAB_100050f2:
        if (*pcVar19 != '\0') goto LAB_100050fb;
LAB_100054d5:
        pbVar18 = (byte *)recovered_1000de30((int)local_1c,&local_74);
        goto LAB_10005c7f;
      }
LAB_100050fb:
      if (local_74 == 0) {
        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4eU));
        bVar3 = true;
LAB_100051ba:
        bVar4 = bVar3;
        if (*pcVar19 != '\0') goto LAB_100051c3;
      }
      else {
LAB_10005103:
        if ((byte)(local_74 + 0xbf) < 0x1a) {
          bVar15 = local_74 | 0x20;
        }
        else {
          bVar15 = local_74;
        }
        if (bVar15 == 0x69) {
          if (local_73 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4fU));
LAB_100051b8:
            bVar3 = false;
            goto LAB_100051ba;
          }
          bVar15 = local_73;
          if ((byte)(local_73 + 0xbf) < 0x1a) {
            bVar15 = local_73 | 0x20;
          }
          if (bVar15 != 0x6e) goto LAB_10005186;
          if (local_72 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c50U));
            goto LAB_100051b8;
          }
          bVar15 = local_72;
          if ((byte)(local_72 + 0xbf) < 0x1a) {
            bVar15 = local_72 | 0x20;
          }
          if (bVar15 != 0x70) goto LAB_10005186;
          if (local_71 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c51U));
            goto LAB_100051b8;
          }
          bVar15 = local_71;
          if ((byte)(local_71 + 0xbf) < 0x1a) {
            bVar15 = local_71 | 0x20;
          }
          if (bVar15 != 0x75) goto LAB_10005186;
          if (local_70 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c52U));
            goto LAB_100051b8;
          }
          bVar15 = local_70;
          if ((byte)(local_70 + 0xbf) < 0x1a) {
            bVar15 = local_70 | 0x20;
          }
          bVar4 = false;
          if (bVar15 == 0x74) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c53U));
            bVar3 = false;
            if (local_6f == 0) goto LAB_100051ba;
          }
        }
        else {
LAB_10005186:
          bVar4 = false;
        }
LAB_100051c3:
        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5dU));
        if (bVar4) {
LAB_100051cc:
          if (*pcVar19 == '\0') goto LAB_10005423;
        }
        else {
          if ((byte)(local_74 + 0xbf) < 0x1a) {
            bVar15 = local_74 | 0x20;
          }
          else {
            bVar15 = local_74;
          }
          if (bVar15 == 0x73) {
LAB_1000535b:
            if (local_73 == 0) {
              pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5eU));
            }
            else {
              bVar15 = local_73;
              if ((byte)(local_73 + 0xbf) < 0x1a) {
                bVar15 = local_73 | 0x20;
              }
              if (bVar15 != 0x65) goto LAB_10005400;
              if (local_72 == 0) {
                pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5fU));
              }
              else {
                bVar15 = local_72;
                if ((byte)(local_72 + 0xbf) < 0x1a) {
                  bVar15 = local_72 | 0x20;
                }
                if (bVar15 != 0x6c) goto LAB_10005400;
                if (local_71 == 0) {
                  pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c60U));
                }
                else {
                  bVar15 = local_71;
                  if ((byte)(local_71 + 0xbf) < 0x1a) {
                    bVar15 = local_71 | 0x20;
                  }
                  if (bVar15 != 0x65) goto LAB_10005400;
                  if (local_70 == 0) {
                    pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c61U));
                  }
                  else {
                    bVar15 = local_70;
                    if ((byte)(local_70 + 0xbf) < 0x1a) {
                      bVar15 = local_70 | 0x20;
                    }
                    if (bVar15 != 99) goto LAB_10005400;
                    if (local_6f == 0) {
                      pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c62U));
                    }
                    else {
                      bVar15 = local_6f;
                      if ((byte)(local_6f + 0xbf) < 0x1a) {
                        bVar15 = local_6f | 0x20;
                      }
                      if ((bVar15 != 0x74) || (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c63U)), local_6e != 0))
                      goto LAB_10005400;
                    }
                  }
                }
              }
            }
            goto LAB_100051cc;
          }
          if (bVar15 == 0x74) {
            uVar21 = (uint)CONCAT11(local_73,0x74);
            if (local_73 == 0) {
              pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c55U));
LAB_10005341:
              if (*pcVar19 == '\0') goto LAB_10005423;
            }
            else {
              if ((byte)(local_73 + 0xbf) < 0x1a) {
                uVar21 = (uint)(ushort)(CONCAT11(local_73,0x74) | 0x2000);
              }
              if ((char)(uVar21 >> 8) == 'e') {
                uVar13 = (undefined1)uVar21;
                uVar21 = (uint)CONCAT11(local_72,uVar13);
                if (local_72 == 0) {
                  pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c56U));
                }
                else {
                  if ((byte)(local_72 + 0xbf) < 0x1a) {
                    uVar21 = (uint)(ushort)(CONCAT11(local_72,uVar13) | 0x2000);
                  }
                  if ((char)(uVar21 >> 8) != 'x') goto LAB_10005352;
                  uVar13 = (undefined1)uVar21;
                  uVar21 = (uint)CONCAT11(local_71,uVar13);
                  if (local_71 == 0) {
                    pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c57U));
                  }
                  else {
                    if ((byte)(local_71 + 0xbf) < 0x1a) {
                      uVar21 = (uint)(ushort)(CONCAT11(local_71,uVar13) | 0x2000);
                    }
                    if ((char)(uVar21 >> 8) != 't') goto LAB_10005352;
                    uVar13 = (undefined1)uVar21;
                    uVar21 = (uint)CONCAT11(local_70,uVar13);
                    if (local_70 == 0) {
                      pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c58U));
                    }
                    else {
                      if ((byte)(local_70 + 0xbf) < 0x1a) {
                        uVar21 = (uint)(ushort)(CONCAT11(local_70,uVar13) | 0x2000);
                      }
                      if ((char)(uVar21 >> 8) != 'a') goto LAB_10005352;
                      uVar13 = (undefined1)uVar21;
                      uVar21 = (uint)CONCAT11(local_6f,uVar13);
                      if (local_6f == 0) {
                        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c59U));
                      }
                      else {
                        if ((byte)(local_6f + 0xbf) < 0x1a) {
                          uVar21 = (uint)(ushort)(CONCAT11(local_6f,uVar13) | 0x2000);
                        }
                        if ((char)(uVar21 >> 8) != 'r') goto LAB_10005352;
                        uVar13 = (undefined1)uVar21;
                        uVar21 = (uint)CONCAT11(local_6e,uVar13);
                        if (local_6e == 0) {
                          pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5aU));
                        }
                        else {
                          if ((byte)(local_6e + 0xbf) < 0x1a) {
                            uVar21 = (uint)(ushort)(CONCAT11(local_6e,uVar13) | 0x2000);
                          }
                          if ((char)(uVar21 >> 8) != 'e') goto LAB_10005352;
                          uVar13 = (undefined1)uVar21;
                          uVar21 = (uint)CONCAT11(local_6d,uVar13);
                          if (local_6d == 0) {
                            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5bU));
                          }
                          else {
                            if ((byte)(local_6d + 0xbf) < 0x1a) {
                              uVar21 = (uint)(ushort)(CONCAT11(local_6d,uVar13) | 0x2000);
                            }
                            if (((char)(uVar21 >> 8) != 'a') ||
                               (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5cU)), local_6c != '\0')) goto LAB_10005352;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_10005341;
              }
            }
LAB_10005352:
            if ((char)uVar21 == 's') goto LAB_1000535b;
          }
        }
LAB_10005400:
        uVar5 = recovered_1000e430(local_14,(char *)local_72c,(char *)&local_74);
        if ((char)uVar5 != '\0') goto LAB_100054d5;
      }
LAB_10005423:
      bVar15 = local_74;
      if (local_74 == 0) {
        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c67U));
LAB_100054c0:
        if (*pcVar19 != '\0') goto LAB_100054c5;
        uVar16 = strlen((char *)((uintptr_t)pf_module_state+0x1c6aU));
        uVar21 = local_18;
        if ((uVar16 != 0) && (pbVar6 = (byte *)(local_1c + 1), *pbVar6 != 0)) {
          pbVar18 = pbVar6;
          do {
            uVar22 = 0;
            while (bVar15 = pbVar18[uVar22], bVar15 != 0) {
              if ((byte)(bVar15 + 0xbf) < 0x1a) {
                bVar15 = bVar15 | 0x20;
              }
              bVar10 = *(byte *)(uVar22 + ((uintptr_t)pf_module_state+0x1c6aU));
              if ((byte)(bVar10 + 0xbf) < 0x1a) {
                bVar10 = bVar10 | 0x20;
              }
              if (bVar15 != bVar10) break;
              uVar22 = uVar22 + 1;
              if (uVar16 == uVar22) goto LAB_100055e6;
            }
            if (uVar16 == uVar22) {
LAB_100055e6:
              if ((local_7c == 0) || (acStack_c78[local_7c * 0xc] != '\x01')) {
                local_24 = local_24 + 2;
                recovered_1000eba0(local_14,(int *)&local_2c,pbVar6,(int)(pbVar18 + ~(uint)local_1c)
                                   ,local_48);
              }
              else {
                local_38 = abStack_c74 + local_7c * 0xc;
                local_4c = abStack_c74 + local_7c * 0xc + 4;
                recovered_1000e730(local_14,(int *)&local_2c,(int *)local_38,(int *)local_4c,pbVar6,
                                   (int)(pbVar18 + ~(uint)local_1c),local_48);
              }
              pbVar18 = pbVar18 + 5;
              goto LAB_100048eb;
            }
            pbVar1 = pbVar18 + 1;
            pbVar18 = pbVar18 + 1;
          } while (*pbVar1 != 0);
        }
        local_24 = local_24 + 2;
        recovered_1000f090(local_14,(char *)((uintptr_t)pf_module_state+0x1c70U),0,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)),local_48,local_34,
                           (int *)&local_2c);
      }
      else {
        if ((byte)(local_74 + 0xbf) < 0x1a) {
          bVar10 = local_74 | 0x20;
        }
        else {
          bVar10 = local_74;
        }
        if (bVar10 == 0x6c) {
          if (local_73 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c68U));
          }
          else {
            bVar10 = local_73;
            if ((byte)(local_73 + 0xbf) < 0x1a) {
              bVar10 = local_73 | 0x20;
            }
            if ((bVar10 != 0x69) || (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c69U)), local_72 != 0)) goto LAB_100054c5;
          }
          goto LAB_100054c0;
        }
        if (bVar10 == 0x62) {
          if (local_73 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c65U));
          }
          else {
            bVar10 = local_73;
            if ((byte)(local_73 + 0xbf) < 0x1a) {
              bVar10 = local_73 | 0x20;
            }
            if ((bVar10 != 0x72) || (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c66U)), local_72 != 0)) goto LAB_100054c5;
          }
          if (*pcVar19 == '\0') {
            local_24 = local_24 + 0xe;
            goto LAB_10004cf6;
          }
        }
LAB_100054c5:
        uVar5 = recovered_1000f380(&local_74);
        iVar7 = local_14;
        uVar21 = local_18;
        if ((char)uVar5 != '\0') goto LAB_100054d5;
        if (bVar15 == 0) {
          pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c72U));
LAB_1000566f:
          if (*pcVar19 != '\0') goto LAB_10005678;
          recovered_1000f8d0(local_14,&local_2c);
          goto LAB_10004cff;
        }
        if ((byte)(bVar15 + 0xbf) < 0x1a) {
          bVar15 = bVar15 | 0x20;
        }
        if (bVar15 == 0x68) {
          if (local_73 == 0) {
            pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c73U));
          }
          else {
            bVar15 = local_73;
            if ((byte)(local_73 + 0xbf) < 0x1a) {
              bVar15 = local_73 | 0x20;
            }
            if ((bVar15 != 0x72) || (pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c74U)), local_72 != 0)) goto LAB_10005678;
          }
          goto LAB_1000566f;
        }
LAB_10005678:
        bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c2cU));
        if ((bVar4) || (bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c2fU))), bVar4)) {
          bVar4 = recovered_1000f990(iVar7,(char *)local_72c,&local_74);
          uVar21 = local_7c;
          local_24 = local_24 + 4 + (uint)!bVar4 * 2;
          if (local_7c < 0x10) {
            iVar7 = local_7c * 0xc;
            local_7c = local_7c + 1;
            memset(local_c6c + iVar7,0,0xc);
            local_c6c[uVar21 * 0xc] = bVar4;
            auStack_c68[uVar21 * 3] = local_2c;
            auStack_c68[uVar21 * 3 + 1] = local_24;
          }
          goto LAB_10004cf6;
        }
        bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c32U));
        if (bVar4) {
          local_78 = local_78 + (local_78 < 8);
          local_d6c[0] = '\0';
        }
        else {
          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c75U));
          if (!bVar4) {
            uVar5 = recovered_1000d8d0(&local_74);
            if ((char)uVar5 != '\0') {
              bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c3aU));
              if (bVar4) {
                recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1c7cU),(undefined1 *)&local_2dc);
                uVar5 = recovered_10010450((byte *)&local_2dc,(char *)((uintptr_t)pf_module_state+0x1c82U));
                pbVar18 = local_3c;
                if (((char)uVar5 == '\0') || ((byte *)0xf < local_3c)) {
                  uVar5 = recovered_10010450((byte *)&local_2dc,(char *)((uintptr_t)pf_module_state+0x1c88U));
                  if (((char)uVar5 == '\0') ||
                     ((pbVar18 == (byte *)0x0 ||
                      (auStack_c68[(int)pbVar18 * 0x12 + 0x1d] != 1 || (byte *)0xf < pbVar18)))) {
                    uVar5 = recovered_10010450((byte *)&local_2dc,(char *)((uintptr_t)pf_module_state+0x1c8fU));
                    pbVar18 = local_3c;
                    if (((char)uVar5 == '\0') || ((byte *)0xf < local_3c)) {
                      uVar5 = recovered_10010450((byte *)&local_2dc,(char *)((uintptr_t)pf_module_state+0x1c93U));
                      pbVar18 = local_3c;
                      if (((char)uVar5 == '\0') || ((byte *)0xf < local_3c)) {
                        if (local_30 < 0xc) {
                          aiStack_310[local_30 + 1] = local_34;
                          local_30 = local_30 + 1;
                          local_34 = recovered_100105d0((char *)local_72c,local_34);
                        }
                        pbVar18 = local_3c;
                        if (local_3c < (byte *)0x10) {
                          iVar7 = (int)local_3c * 0x12;
                          local_3c = local_3c + 1;
                          memset(auStack_c68 + iVar7 + 0x2f,0,0x48);
                          auStack_c68[(int)pbVar18 * 0x12 + 0x2f] = 0;
                          auStack_c68[(int)pbVar18 * 0x12 + 0x30] = local_2c;
                          auStack_c68[(int)pbVar18 * 0x12 + 0x31] = local_28;
                          auStack_c68[(int)pbVar18 * 0x12 + 0x32] = local_24;
                          auStack_c68[(int)pbVar18 * 0x12 + 0x33] = local_20;
                          local_24 = local_24 + 8;
                          goto LAB_10004cf6;
                        }
                        goto LAB_100058ec;
                      }
                      memset(auStack_c68 + (int)local_3c * 0x12 + 0x2f,0,0x48);
                      auStack_c68[(int)pbVar18 * 0x12 + 0x2f] = 4;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x30] = local_2c;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x31] = local_28;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x32] = local_24;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x33] = local_20;
                    }
                    else {
                      memset(auStack_c68 + (int)local_3c * 0x12 + 0x2f,0,0x48);
                      auStack_c68[(int)pbVar18 * 0x12 + 0x2f] = 3;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x30] = local_2c;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x31] = local_28;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x32] = local_24;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x33] = local_20;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x36] = 0xfc;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x38] = *(uint *)(local_14 + 0x52c2c);
                      auStack_c68[(int)pbVar18 * 0x12 + 0x39] = 0xffffff4a;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x3a] = 0xff;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x3b] = 3;
                      recovered_10010540(local_14,((uintptr_t)pf_module_state+0x1c8fU),auStack_c68 + (int)pbVar18 * 0x12 + 0x39
                                        );
                      local_2c = 10;
                      local_28 = auStack_c68[(int)pbVar18 * 0x12 + 0x36] - 0x14;
                      local_24 = 10;
                      local_20 = CONCAT31(PF_PART3(local_20, 1),1);
                    }
                  }
                  else {
                    uVar21 = auStack_c68[(int)pbVar18 * 0x12 + 0x2b];
                    iVar7 = (int)(((uint)((int)uVar21 >> 0x1f) >> 0x1e) + uVar21) >> 2;
                    if (iVar7 < 0x97) {
                      iVar7 = 0x96;
                    }
                    uVar20 = auStack_c68[(int)pbVar18 * 0x12 + 0x2a];
                    uVar23 = iVar7 + 10;
                    if ((auStack_c68[(int)pbVar18 * 0x12 + 0x2c] != uVar20) &&
                       ((int)(uVar21 + uVar20) <
                        (int)(auStack_c68[(int)pbVar18 * 0x12 + 0x2c] + uVar23))) {
                      auStack_c68[(int)pbVar18 * 0x12 + 0x2c] = uVar20;
                      auStack_c68[(int)pbVar18 * 0x12 + 0x2d] =
                           auStack_c68[(int)pbVar18 * 0x12 + 0x2e] + 10 +
                           auStack_c68[(int)pbVar18 * 0x12 + 0x2d];
                      auStack_c68[(int)pbVar18 * 0x12 + 0x2e] = 0;
                    }
                    memset(auStack_c68 + (int)pbVar18 * 0x12 + 0x2f,0,0x48);
                    auStack_c68[(int)pbVar18 * 0x12 + 0x2f] = 2;
                    uVar21 = local_28;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x30] = local_2c;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x31] = uVar21;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x32] = local_24;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x33] = local_20;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x34] =
                         auStack_c68[(int)pbVar18 * 0x12 + 0x2c];
                    auStack_c68[(int)pbVar18 * 0x12 + 0x35] =
                         auStack_c68[(int)pbVar18 * 0x12 + 0x2d];
                    uVar21 = (auStack_c68[(int)pbVar18 * 0x12 + 0x2a] -
                             auStack_c68[(int)pbVar18 * 0x12 + 0x2c]) +
                             auStack_c68[(int)pbVar18 * 0x12 + 0x2b];
                    if ((int)uVar21 <= (int)uVar23) {
                      uVar23 = uVar21;
                    }
                    auStack_c68[(int)pbVar18 * 0x12 + 0x36] = uVar23;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x39] = 0xffffff4a;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x3a] = 0;
                    auStack_c68[(int)pbVar18 * 0x12 + 0x3b] = 0;
                    recovered_10010540(local_14,((uintptr_t)pf_module_state+0x1c88U),auStack_c68 + (int)pbVar18 * 0x12 + 0x39);
                    local_2c = auStack_c68[(int)pbVar18 * 0x12 + 0x34] + 10;
                    uVar21 = auStack_c68[(int)pbVar18 * 0x12 + 0x36];
                    if ((int)uVar21 < 0x45) {
                      uVar21 = 0x44;
                    }
                    local_28 = uVar21 - 0x14;
                    local_24 = auStack_c68[(int)pbVar18 * 0x12 + 0x35] + 10;
                    local_20 = local_20 & 0xffffff00;
                    pbVar18 = local_3c;
                  }
                }
                else {
                  memset(auStack_c68 + (int)local_3c * 0x12 + 0x2f,0,0x48);
                  auStack_c68[(int)pbVar18 * 0x12 + 0x2f] = 1;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x30] = local_2c;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x31] = local_28;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x32] = local_24;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x33] = local_20;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x3c] = local_2c;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x3d] = local_28;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x3e] = local_2c;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x3f] = local_24;
                  auStack_c68[(int)pbVar18 * 0x12 + 0x40] = 0;
                }
                local_3c = pbVar18 + 1;
                goto LAB_10005c7b;
              }
              bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c3eU));
              if ((bVar4) && (local_30 < 0xc)) {
                aiStack_310[local_30 + 1] = local_34;
                local_30 = local_30 + 1;
                local_34 = 1;
              }
LAB_100058ec:
              local_24 = local_24 + 8;
              goto LAB_10004cf6;
            }
            bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c15U));
            if (bVar4) {
              recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1c7cU),(undefined1 *)&local_2dc);
              uVar5 = 2;
            }
            else {
              bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c18U));
              if ((((!bVar4) && (bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c1bU))), !bVar4)) &&
                  (bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c1eU)), !bVar4)) &&
                 ((bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c21U)), !bVar4 &&
                  (bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c24U)), !bVar4)))) {
                bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c0cU)));
                if (bVar4) {
                  local_4c = (byte *)(local_1c + 1);
                  pbVar18 = (byte *)recovered_100082e0((char *)local_4c,(char *)((uintptr_t)pf_module_state+0x1c9aU));
                  recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1562U),local_1d8);
                  recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1c9fU),(undefined1 *)local_50c);
                  cVar2 = local_1d8[0];
                  local_18 = CONCAT31((int3)((uint)extraout_EAX >> 8),local_1d8[0] != '\0');
                  local_38 = pbVar18;
                  if ((pbVar18 != (byte *)0x0) && ((char)local_50c[0] != '\0')) {
                    recovered_10010a50(local_14,local_4c,(int)(pbVar18 + ~(uint)local_1c),
                                       (char *)&local_2dc,0x100);
                    if ((char)local_2dc == '\0') {
                      pcVar19 = local_1d8;
                      if (cVar2 == '\0') {
                        pcVar19 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
                      }
                      recovered_1000f090(local_14,(char *)local_50c,(uint)(cVar2 != '\0') * 2,
                                         pcVar19,local_48,local_34,(int *)&local_2c);
                      pbVar18 = local_38 + 4;
                      local_1d8[0] = '\0';
                      uVar21 = 0;
                      goto LAB_100048eb;
                    }
                  }
                }
                else {
                  bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1caaU)));
                  if (bVar4) {
                    recovered_10010290((char *)local_72c,(char *)&local_2dc);
                    if (((char)local_2dc == '\0') && (local_d6c[0] != '\0')) {
                      snprintf((char *)&local_2dc,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_d6c);
                    }
                    recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1caeU),(undefined1 *)local_50c);
                    pbVar18 = (byte *)&local_38c;
                    recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cb2U),pbVar18);
                    recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cb8U),local_40c);
                    pbVar6 = (byte *)((int)&local_38c + 1);
                    while( true ) {
                      uVar21 = (uint)*pbVar18;
                      if ((0x17 < uVar21 - 9) || ((0x80001bU >> (uVar21 - 9 & 0x1f) & 1) == 0))
                      break;
                      pbVar18 = pbVar18 + 1;
                      pbVar6 = pbVar6 + 1;
                    }
                    iVar7 = 0;
                    if ((byte)(*pbVar18 - 0x30U) < 10) {
                      iVar7 = 0;
                      do {
                        iVar7 = (uint)(byte)((char)uVar21 - 0x30) + iVar7 * 10;
                        bVar15 = *pbVar6;
                        uVar21 = (uint)bVar15;
                        pbVar6 = pbVar6 + 1;
                      } while ((byte)(bVar15 - 0x30U) < 10);
                    }
                    pbVar6 = local_40c;
                    pbVar18 = local_40c;
                    while( true ) {
                      pbVar6 = pbVar6 + 1;
                      uVar21 = (uint)*pbVar18;
                      if ((0x17 < uVar21 - 9) || ((0x80001bU >> (uVar21 - 9 & 0x1f) & 1) == 0))
                      break;
                      pbVar18 = pbVar18 + 1;
                    }
                    iVar12 = 0;
                    if ((byte)(*pbVar18 - 0x30U) < 10) {
                      iVar12 = 0;
                      do {
                        iVar12 = (uint)(byte)((char)uVar21 - 0x30) + iVar12 * 10;
                        bVar15 = *pbVar6;
                        uVar21 = (uint)bVar15;
                        pbVar6 = pbVar6 + 1;
                      } while ((byte)(bVar15 - 0x30U) < 10);
                    }
                    recovered_100114c0(local_14,(char *)&local_2dc,(char *)local_50c,iVar7,iVar12,
                                       local_34,(int *)&local_2c);
                  }
                  else {
                    bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1cbfU));
                    if (bVar4) {
                      recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x15acU),
                                         (undefined1 *)&local_2dc);
                      recovered_10011790(local_14,&local_2c,(char *)&local_2dc,local_48);
                    }
                    else {
                      bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c27U));
                      if (bVar4) {
                        if (local_30 < 0xc) {
                          aiStack_310[local_30 + 1] = local_34;
                          local_30 = local_30 + 1;
                          local_34 = recovered_100105d0((char *)local_72c,local_34);
                        }
                        iVar7 = local_8c;
                        if (*(uint *)(local_14 + 0x544b0) < 0x10) {
                          iVar12 = *(uint *)(local_14 + 0x544b0) * 0x188;
                          dst = (undefined1 *)(local_8c + iVar12);
                          memset(dst,0,0x188);
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cc6U),dst);
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ccdU),
                                             (undefined1 *)(iVar7 + 0x108 + iVar12));
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cd6U),
                                             (undefined1 *)&local_2dc);
                          puVar8 = (uint *)((uintptr_t)pf_module_state+0x1cddU);
                          if ((char)local_2dc != '\0') {
                            puVar8 = &local_2dc;
                          }
                          snprintf((char *)(local_8c + 0x100 + iVar12),8,(char *)((uintptr_t)pf_module_state+0x154dU)
                                             ,puVar8);
                          local_40 = *(int *)(local_14 + 0x544b0);
                          *(int *)(local_14 + 0x544b0) = local_40 + 1;
                        }
                        local_24 = local_24 + 6;
                      }
                      else {
                        bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4eU)));
                        if (bVar4) {
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ce1U),local_d8);
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ce6U),
                                             (undefined1 *)&local_38c);
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cebU),local_40c);
                          recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ceeU),
                                             (undefined1 *)&local_2dc);
                          bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1cf4U));
                          if (bVar4) {
LAB_100061b3:
                            puVar8 = &local_2dc;
                          }
                          else {
                            uVar5 = recovered_1000e430(local_14,(char *)local_72c,(char *)&local_74)
                            ;
                            bVar15 = local_d8[0];
                            if ((char)uVar5 != '\0') goto LAB_100061b3;
                            if ((local_d8[0] != 0) &&
                               (((bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1cfbU)), bVar4 ||
                                 (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d02U)), bVar4)) ||
                                (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d09U)), bVar4)))) {
                              recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1d0fU),
                                                 (undefined1 *)local_50c);
                              puVar8 = (uint *)((uintptr_t)pf_module_state+0x1d17U);
                              if ((char)local_2dc != '\0') {
                                puVar8 = &local_2dc;
                              }
                              uVar5 = recovered_100122e0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1d1eU));
                              recovered_10012030(local_14,(char *)puVar8,(undefined1 *)&local_38c,
                                                 (undefined1 *)&local_2dc,(undefined1 *)local_50c,
                                                 local_40,(char)uVar5,local_34,(int *)&local_2c);
                              goto LAB_10004cf6;
                            }
                            bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d27U));
                            if ((!bVar4) &&
                               (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d30U)), !bVar4)) {
                              bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d41U));
                              if (((!bVar4) &&
                                  (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d47U)), !bVar4))
                                 && (((((bVar15 == 0 ||
                                        (((bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d4cU)),
                                          bVar4 || (bVar4 = recovered_10007c80(local_d8,(byte *)
                                                  ((uintptr_t)pf_module_state+0x1d51U)), bVar4)) ||
                                         (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d58U)),
                                         bVar4)))) ||
                                       (((bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d5cU)),
                                         bVar4 || (bVar4 = recovered_10007c80(local_d8,(byte *)
                                                  ((uintptr_t)pf_module_state+0x1d62U)), bVar4)) ||
                                        (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d6bU)),
                                        bVar4)))) ||
                                      ((bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d6fU)),
                                       bVar4 || (bVar4 = recovered_10007c80(local_d8,(byte *)
                                                  ((uintptr_t)pf_module_state+0x1d76U)), bVar4)))) ||
                                     ((bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d7bU)), bVar4
                                      || (bVar4 = recovered_10007c80(local_d8,(byte *)((uintptr_t)pf_module_state+0x1d8aU)),
                                         bVar4)))))) {
                                recovered_100123d0(local_14,(char *)&local_38c,(char *)local_40c,
                                                   (undefined1 *)&local_2dc,local_40,local_34,
                                                   (int *)&local_2c);
                              }
                              goto LAB_10004cf6;
                            }
                            uVar5 = recovered_100122e0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1d36U));
                            if ((char)uVar5 == '\0') goto LAB_10004cf6;
                            puVar8 = (uint *)((uintptr_t)pf_module_state+0x1d3eU);
                            if ((char)local_2dc != '\0') {
                              puVar8 = &local_2dc;
                            }
                          }
                          recovered_10011f30(local_14,(undefined1 *)&local_38c,local_40c,
                                             (undefined1 *)puVar8,local_40);
                        }
                        else {
                          bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1c54U));
                          if (bVar4) {
                            pcVar19 = local_1c + 1;
                            pbVar18 = (byte *)recovered_100082e0(pcVar19,(char *)((uintptr_t)pf_module_state+0x1d8fU));
                            recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ce6U),
                                               (undefined1 *)&local_38c);
                            recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cebU),local_40c);
                            local_2dc = local_2dc & 0xffffff00;
                            local_38 = pbVar18;
                            if (pbVar18 != (byte *)0x0) {
                              pbVar18 = pbVar18 + ~(uint)local_1c;
                              if (0xfe < (int)pbVar18) {
                                pbVar18 = (byte *)0xff;
                              }
                              memcpy(&local_2dc,pcVar19,(ulong)pbVar18);
                              *(byte *)((int)&local_2dc + (int)pbVar18) = 0;
                            }
                            recovered_10008930((char *)&local_2dc,(char *)local_50c,0x100);
                            uVar5 = recovered_1000e430(local_14,(char *)local_72c,(char *)&local_74)
                            ;
                            if ((char)uVar5 == '\0') {
                              recovered_100123d0(local_14,(char *)&local_38c,(char *)local_40c,
                                                 (undefined1 *)local_50c,local_40,local_34,
                                                 (int *)&local_2c);
                            }
                            else {
                              recovered_10011f30(local_14,(undefined1 *)&local_38c,local_40c,
                                                 (undefined1 *)local_50c,local_40);
                            }
                            if (local_38 != (byte *)0x0) {
                              pbVar18 = local_38 + 0xb;
LAB_10005c7f:
                              uVar21 = local_18;
                              goto LAB_100048eb;
                            }
                          }
                          else {
                            bVar4 = recovered_10007c80(&local_74,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c5dU)));
                            if (bVar4) {
                              pcVar19 = local_1c + 1;
                              pcVar9 = recovered_100082e0(pcVar19,(char *)((uintptr_t)pf_module_state+0x1d9bU));
                              recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ce6U),
                                                 (undefined1 *)local_50c);
                              recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1cebU),
                                                 (undefined1 *)&local_38c);
                              local_2dc = local_2dc & 0xffffff00;
                              if (pcVar9 != (char *)0x0) {
                                recovered_100125a0(pcVar19,pcVar9,(char *)&local_2dc);
                              }
                              uVar5 = recovered_1000e430(local_14,(char *)local_72c,
                                                         (char *)&local_74);
                              if ((char)uVar5 == '\0') {
                                recovered_100123d0(local_14,(char *)local_50c,(char *)&local_38c,
                                                   (undefined1 *)&local_2dc,local_40,local_34,
                                                   (int *)&local_2c);
                              }
                              else {
                                recovered_10011f30(local_14,(undefined1 *)local_50c,
                                                   (undefined1 *)&local_38c,(undefined1 *)&local_2dc
                                                   ,local_40);
                              }
                              if (pcVar9 != (char *)0x0) {
                                pbVar18 = (byte *)(pcVar9 + 9);
                                goto LAB_10005c7f;
                              }
                            }
                            else {
                              bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1d02U));
                              if (bVar4) {
                                local_38 = (byte *)(local_1c + 1);
                                pcVar19 = recovered_100082e0((char *)local_38,(char *)((uintptr_t)pf_module_state+0x1da5U));
                                recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ce1U),local_52c);
                                recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ce6U),local_d8);
                                recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1ceeU),
                                                   (undefined1 *)&local_2dc);
                                recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1c9fU),
                                                   (undefined1 *)&local_38c);
                                PF_PART1(local_50c[0], 0) = '\0';
                                recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1d0fU),local_40c);
                                if (pcVar19 != (char *)0x0) {
                                  recovered_10010a50(local_14,local_38,
                                                     (int)(pcVar19 + ~(uint)local_1c),
                                                     (char *)local_50c,0x80);
                                }
                                bVar4 = recovered_10007c80(local_52c,(byte *)((uintptr_t)pf_module_state+0x1d41U));
                                if (!bVar4) {
                                  puVar8 = local_50c;
                                  if (((char)local_50c[0] == '\0') &&
                                     (puVar8 = &local_38c, (byte)local_38c == 0)) {
                                    puVar8 = (uint *)((uintptr_t)pf_module_state+0x1d17U);
                                    if ((char)local_2dc != '\0') {
                                      puVar8 = &local_2dc;
                                    }
                                  }
                                  uVar5 = recovered_100122e0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1d1eU));
                                  recovered_10012030(local_14,(char *)puVar8,local_d8,
                                                     (undefined1 *)&local_2dc,local_40c,local_40,
                                                     (char)uVar5,local_34,(int *)&local_2c);
                                }
                                if (pcVar19 != (char *)0x0) {
                                  pbVar18 = (byte *)(pcVar19 + 9);
                                  goto LAB_10005c7f;
                                }
                              }
                              else {
                                bVar4 = recovered_10007c80(&local_74,(byte *)((uintptr_t)pf_module_state+0x1dafU));
                                if (bVar4) {
                                  pcVar19 = local_1c + 1;
                                  local_38 = (byte *)recovered_100082e0(pcVar19,(char *)((uintptr_t)pf_module_state+0x1db5U));
                                  pcVar9 = local_90;
                                  if (local_38 != (byte *)0x0) {
                                    pbVar18 = local_38 + ~(uint)local_1c;
                                    if (0x3e < (int)pbVar18) {
                                      pbVar18 = (byte *)0x3f;
                                    }
                                    memcpy(local_90,pcVar19,(ulong)pbVar18);
                                    pcVar9[(int)pbVar18] = '\0';
                                    recovered_10008930(pcVar9,(char *)&local_2dc,0x40);
                                    snprintf(pcVar9,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),&local_2dc);
                                    pbVar18 = local_38 + 8;
                                    goto LAB_10005c7f;
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
LAB_10004cf6:
                uVar21 = local_18;
                goto LAB_10004cff;
              }
              recovered_10007ce0((char *)local_72c,(char *)((uintptr_t)pf_module_state+0x1c7cU),(undefined1 *)&local_2dc);
              uVar5 = 1;
            }
            local_48 = recovered_10010940(iVar7,(char *)&local_2dc,uVar5);
            local_24 = local_24 + 8;
            local_80 = 1;
            goto LAB_10004cff;
          }
          if ((local_78 != 0) && (local_d6c[0] == '\0')) {
            recovered_10010290((char *)local_72c,local_d6c);
          }
        }
      }
LAB_10004cff:
      pbVar18 = (byte *)(local_1c + 1);
      goto LAB_100048eb;
    }
LAB_100068ba:
    iVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
    iVar12 = local_24 + 0x20;
    if ((int)(local_24 + 0x20) <= (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x5e) {
      iVar12 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x5e;
    }
    *(int *)(local_14 + 0x544bc) = iVar12;
    iVar7 = (iVar12 - iVar7) + 0x5e;
    if (iVar7 < -0x13) {
      iVar7 = -0x14;
    }
    iVar12 = *(int *)(local_14 + 0x544b8);
    iVar14 = iVar12;
    if (iVar7 + 0x14 <= iVar12) {
      iVar14 = iVar7 + 0x14;
    }
    iVar7 = 0;
    if (-1 < iVar12) {
      iVar7 = iVar14;
    }
    *(int *)(local_14 + 0x544b8) = iVar7;
  }
  return;
}

#undef DAT_0181bc65
#undef DAT_0181c3af
#undef DAT_0181c3b9
#undef DAT_0181c3ba
#undef DAT_0181c3bc
#undef DAT_0181c3bd
#undef DAT_0181c3be
#undef DAT_0181c3bf
#undef DAT_0181c3c0
#undef DAT_0181c3d2
#undef DAT_0181c3e8
#undef DAT_0181c3e9
#undef DAT_0181c3ea
#undef DAT_0181c3eb
#undef DAT_0181c3ec
#undef DAT_0181c3ed
#undef DAT_0181c3ee
#undef DAT_0181c3ef
#undef DAT_0181c3f0
#undef DAT_0181c3f1
#undef DAT_0181c3f2
#undef DAT_0181c3f3
#undef DAT_0181c3f4
#undef DAT_0181c3f5
#undef DAT_0181c3f6
#undef DAT_0181c3f8
#undef DAT_0181c3f9
#undef DAT_0181c3fa
#undef DAT_0181c3fb
#undef DAT_0181c3fc
#undef DAT_0181c3fd
#undef DAT_0181c3fe
#undef DAT_0181c3ff
#undef DAT_0181c400
#undef DAT_0181c401
#undef DAT_0181c402
#undef DAT_0181c403
#undef DAT_0181c404
#undef DAT_0181c405
#undef DAT_0181c406
#undef DAT_0181c408
#undef DAT_0181c409
#undef DAT_0181c40a
#undef DAT_0181c40b
#undef DAT_0181c40c
#undef DAT_0181c415
#undef DAT_0181c416
#undef DAT_0181c417
#undef DAT_0181c44d
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef local_d6c
#undef local_c6c
#undef local_bac
#undef local_72c
#undef local_52c
#undef local_50c
#undef local_40c
#undef local_38c
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_1d8
#undef local_d8
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_73
#undef local_72
#undef local_71
#undef local_70
#undef local_6f
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_4c
#undef local_48
#undef local_41
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
#undef acStack_c78
#undef abStack_c74
#undef abStack_c70
#undef auStack_c68
#undef aiStack_310

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
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#define local_560 (*(char (*)[256])(frame + 48))
#define local_460 (*(char (*)[256])(frame + 304))
#define local_360 (*(char (*)[256])(frame + 560))
#define local_260 (*(byte (*)[256])(frame + 816))
#define local_160 (*(char (*)[64])(frame + 1072))
#define local_120 (*(byte (*)[128])(frame + 1136))
#define local_a0 (*(char *)(frame + 1264))
#define local_9f (*(char (*)[95])(frame + 1265))
#define local_40 (*(char * *)(frame + 1360))
#define local_3c (*(undefined4 *)(frame + 1364))
#define local_38 (*(undefined4 *)(frame + 1368))
#define local_34 (*(ulong *)(frame + 1372))
#define local_30 (*(int *)(frame + 1376))
#define local_2c (*(void ** *)(frame + 1380))
#define local_28 (*(undefined1 * *)(frame + 1384))
#define local_22 (*(undefined1 *)(frame + 1390))
#define local_21 (*(char *)(frame + 1391))
#define local_20 (*(char * *)(frame + 1392))
#define local_1c (*(ulong *)(frame + 1396))
#define local_18 (*(void * *)(frame + 1400))
#define local_14 (*(byte * *)(frame + 1404))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006920
 */

void recovered_10006920(int in_ECX,int in_EDX,byte *param_3)

{
  unsigned char frame[1456] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  void *pvVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  void **ppvVar15;
  char *pcVar16;

  if (param_3 == (byte *)0x0 || in_EDX == 0) {
    return;
  }
  uVar5 = recovered_10003100(in_EDX);
  if ((char)uVar5 == '\0') {
    snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x1661U));
    *(undefined1 *)(in_ECX + 0x57da) = 1;
    return;
  }
  local_20 = (char *)(in_EDX + 1);
  snprintf(local_560,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_20);
  local_40 = (char *)(in_EDX + 0x101);
  snprintf(local_160,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),local_40);
  local_2c = (void **)(in_EDX + 0x201);
  snprintf(local_460,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_2c);
  local_22 = *(undefined1 *)(in_EDX + 0x308);
  local_3c = *(undefined4 *)(in_EDX + 0x304);
  local_38 = *(undefined4 *)(in_EDX + 0x544b8);
  recovered_10002c50(in_ECX);
  bVar3 = *param_3;
  local_18 = (void *)in_ECX;
  if (*(char *)(in_ECX + 0x205da4) == '\x01') {
    if (bVar3 != 0) {
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar11 = bVar3 | 0x20;
        if (bVar11 == 0x68) goto LAB_10006c42;
      }
      else if (bVar3 == 0x68) {
        bVar11 = 0x68;
LAB_10006c42:
        bVar13 = param_3[1];
        if (bVar13 != 0) {
          if ((byte)(bVar13 + 0xbf) < 0x1a) {
            bVar13 = bVar13 | 0x20;
          }
          if ((bVar13 == 0x74) && (bVar13 = param_3[2], bVar13 != 0)) {
            if ((byte)(bVar13 + 0xbf) < 0x1a) {
              bVar13 = bVar13 | 0x20;
            }
            if ((bVar13 == 0x74) && (bVar13 = param_3[3], bVar13 != 0)) {
              if ((byte)(bVar13 + 0xbf) < 0x1a) {
                bVar13 = bVar13 | 0x20;
              }
              if ((bVar13 == 0x70) && (bVar13 = param_3[4], bVar13 != 0)) {
                if ((byte)(bVar13 + 0xbf) < 0x1a) {
                  bVar13 = bVar13 | 0x20;
                }
                if ((bVar13 == 0x3a) && (bVar13 = param_3[5], bVar13 != 0)) {
                  if ((byte)(bVar13 + 0xbf) < 0x1a) {
                    bVar13 = bVar13 | 0x20;
                  }
                  if ((bVar13 == 0x2f) && (bVar13 = param_3[6], bVar13 != 0)) {
                    if ((byte)(bVar13 + 0xbf) < 0x1a) {
                      bVar13 = bVar13 | 0x20;
                    }
                    if (bVar13 == 0x2f) goto LAB_10006cf2;
                  }
                }
              }
            }
          }
        }
        if ((bVar11 == 0x68) && (bVar11 = param_3[1], bVar11 != 0)) {
          if ((byte)(bVar11 + 0xbf) < 0x1a) {
            bVar11 = bVar11 | 0x20;
          }
          if ((bVar11 == 0x74) && (bVar11 = param_3[2], bVar11 != 0)) {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            if ((bVar11 == 0x74) && (bVar11 = param_3[3], bVar11 != 0)) {
              if ((byte)(bVar11 + 0xbf) < 0x1a) {
                bVar11 = bVar11 | 0x20;
              }
              if ((bVar11 == 0x70) && (bVar11 = param_3[4], bVar11 != 0)) {
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                if ((bVar11 == 0x73) && (bVar11 = param_3[5], bVar11 != 0)) {
                  if ((byte)(bVar11 + 0xbf) < 0x1a) {
                    bVar11 = bVar11 | 0x20;
                  }
                  if ((bVar11 == 0x3a) && (bVar11 = param_3[6], bVar11 != 0)) {
                    if ((byte)(bVar11 + 0xbf) < 0x1a) {
                      bVar11 = bVar11 | 0x20;
                    }
                    if ((bVar11 == 0x2f) && (bVar11 = param_3[7], bVar11 != 0)) {
                      if ((byte)(bVar11 + 0xbf) < 0x1a) {
                        bVar11 = bVar11 | 0x20;
                      }
                      if (bVar11 == 0x2f) {
LAB_10006cf2:
                        snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x1f44U)
                                          );
                        *(undefined1 *)((int)local_18 + 0x57da) = 1;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_10006a3d:
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if (bVar3 == 0x68) {
        bVar3 = param_3[1];
        if (bVar3 == 0) {
code_r0x10006b4f:
          bVar3 = param_3[1];
          if (bVar3 != 0) {
            if ((byte)(bVar3 + 0xbf) < 0x1a) {
              bVar3 = bVar3 | 0x20;
            }
            if ((bVar3 == 0x74) && (bVar3 = param_3[2], bVar3 != 0)) {
              if ((byte)(bVar3 + 0xbf) < 0x1a) {
                bVar3 = bVar3 | 0x20;
              }
              if ((bVar3 == 0x74) && (bVar3 = param_3[3], bVar3 != 0)) {
                if ((byte)(bVar3 + 0xbf) < 0x1a) {
                  bVar3 = bVar3 | 0x20;
                }
                if ((bVar3 == 0x70) && (bVar3 = param_3[4], bVar3 != 0)) {
                  if ((byte)(bVar3 + 0xbf) < 0x1a) {
                    bVar3 = bVar3 | 0x20;
                  }
                  if ((bVar3 == 0x73) && (bVar3 = param_3[5], bVar3 != 0)) {
                    if ((byte)(bVar3 + 0xbf) < 0x1a) {
                      bVar3 = bVar3 | 0x20;
                    }
                    if ((bVar3 == 0x3a) && (bVar3 = param_3[6], bVar3 != 0)) {
                      if ((byte)(bVar3 + 0xbf) < 0x1a) {
                        bVar3 = bVar3 | 0x20;
                      }
                      if ((bVar3 == 0x2f) && (bVar3 = param_3[7], bVar3 != 0)) {
                        if ((byte)(bVar3 + 0xbf) < 0x1a) {
                          bVar3 = bVar3 | 0x20;
                        }
                        if (bVar3 == 0x2f) goto LAB_10006b09;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if ((bVar3 != 0x74) || (bVar3 = param_3[2], bVar3 == 0)) goto code_r0x10006b4f;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if ((bVar3 != 0x74) || (bVar3 = param_3[3], bVar3 == 0)) goto code_r0x10006b4f;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if ((bVar3 != 0x70) || (bVar3 = param_3[4], bVar3 == 0)) goto code_r0x10006b4f;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if ((bVar3 != 0x3a) || (bVar3 = param_3[5], bVar3 == 0)) goto code_r0x10006b4f;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if ((bVar3 != 0x2f) || (bVar3 = param_3[6], bVar3 == 0)) goto code_r0x10006b4f;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if (bVar3 != 0x2f) goto code_r0x10006b4f;
LAB_10006b09:
          local_14 = (byte *)strlen((char *)((uintptr_t)pf_module_state+0x20d1U));
          if (local_14 != (byte *)0x0) {
            for (pbVar12 = (byte *)0x0;
                ((bVar3 = param_3[(int)pbVar12], bVar3 != 0 && (bVar3 != 0x23)) && (bVar3 != 0x3f));
                pbVar12 = pbVar12 + 1) {
            }
            if (local_14 <= pbVar12) {
              local_1c = (int)param_3 - (int)local_14;
              pbVar14 = (byte *)0x0;
              do {
                bVar3 = pbVar12[(int)(pbVar14 + local_1c)];
                if ((byte)(bVar3 + 0xbf) < 0x1a) {
                  bVar3 = bVar3 | 0x20;
                }
                bVar11 = pbVar14[((uintptr_t)pf_module_state+0x20d1U)];
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                if (bVar3 != bVar11) goto LAB_10006e24;
                pbVar14 = pbVar14 + 1;
              } while (local_14 != pbVar14);
              goto LAB_10007072;
            }
          }
LAB_10006e24:
          local_14 = (byte *)strlen((char *)((uintptr_t)pf_module_state+0x20d7U));
          if (local_14 != (byte *)0x0) {
            for (pbVar12 = (byte *)0x0;
                ((bVar3 = param_3[(int)pbVar12], bVar3 != 0 && (bVar3 != 0x23)) && (bVar3 != 0x3f));
                pbVar12 = pbVar12 + 1) {
            }
            if (local_14 <= pbVar12) {
              local_1c = (int)param_3 - (int)local_14;
              pbVar14 = (byte *)0x0;
              do {
                bVar3 = pbVar12[(int)(pbVar14 + local_1c)];
                if ((byte)(bVar3 + 0xbf) < 0x1a) {
                  bVar3 = bVar3 | 0x20;
                }
                bVar11 = pbVar14[((uintptr_t)pf_module_state+0x20d7U)];
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                if (bVar3 != bVar11) goto LAB_10006e5b;
                pbVar14 = pbVar14 + 1;
              } while (local_14 != pbVar14);
              goto LAB_10007072;
            }
          }
LAB_10006e5b:
          local_14 = (byte *)strlen((char *)((uintptr_t)pf_module_state+0x20dcU));
          if (local_14 != (byte *)0x0) {
            for (pbVar12 = (byte *)0x0;
                ((bVar3 = param_3[(int)pbVar12], bVar3 != 0 && (bVar3 != 0x23)) && (bVar3 != 0x3f));
                pbVar12 = pbVar12 + 1) {
            }
            if (local_14 <= pbVar12) {
              local_1c = (int)param_3 - (int)local_14;
              pbVar14 = (byte *)0x0;
              do {
                bVar3 = pbVar12[(int)(pbVar14 + local_1c)];
                if ((byte)(bVar3 + 0xbf) < 0x1a) {
                  bVar3 = bVar3 | 0x20;
                }
                bVar11 = pbVar14[((uintptr_t)pf_module_state+0x20dcU)];
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                if (bVar3 != bVar11) goto LAB_10006e92;
                pbVar14 = pbVar14 + 1;
              } while (local_14 != pbVar14);
              goto LAB_10007072;
            }
          }
LAB_10006e92:
          for (uVar6 = 0;
              ((bVar3 = param_3[uVar6], bVar3 != 0 && (bVar3 != 0x23)) && (bVar3 != 0x3f));
              uVar6 = uVar6 + 1) {
          }
          if (3 < uVar6) {
            bVar3 = param_3[uVar6 - 4];
            if ((byte)(bVar3 + 0xbf) < 0x1a) {
              bVar3 = bVar3 | 0x20;
            }
            if (bVar3 == 0x2e) {
              bVar3 = param_3[uVar6 - 3];
              if ((byte)(bVar3 + 0xbf) < 0x1a) {
                bVar3 = bVar3 | 0x20;
              }
              if (bVar3 == 0x70) {
                bVar3 = param_3[uVar6 - 2];
                if ((byte)(bVar3 + 0xbf) < 0x1a) {
                  bVar3 = bVar3 | 0x20;
                }
                if (bVar3 == 0x6e) {
                  bVar3 = param_3[uVar6 - 1];
                  if ((byte)(bVar3 + 0xbf) < 0x1a) {
                    bVar3 = bVar3 | 0x20;
                  }
                  if (bVar3 == 0x67) goto LAB_10007072;
                }
              }
            }
          }
          local_1c = 0;
          do {
            pbVar12 = *(byte **)(local_1c * 4 + ((uintptr_t)pf_module_state+0x28cdU));
            uVar7 = strlen((char *)pbVar12);
            if (uVar7 != 0) {
              for (uVar6 = 0;
                  ((bVar3 = param_3[uVar6], bVar3 != 0 && (bVar3 != 0x23)) && (bVar3 != 0x3f));
                  uVar6 = uVar6 + 1) {
              }
              if (uVar7 <= uVar6) {
                iVar8 = -uVar7;
                local_14 = param_3 + uVar6;
                while( true ) {
                  bVar3 = local_14[iVar8];
                  if ((byte)(bVar3 + 0xbf) < 0x1a) {
                    bVar3 = bVar3 | 0x20;
                  }
                  bVar11 = *pbVar12;
                  if ((byte)(bVar11 + 0xbf) < 0x1a) {
                    bVar11 = bVar11 | 0x20;
                  }
                  if (bVar3 != bVar11) break;
                  pbVar12 = pbVar12 + 1;
                  iVar8 = iVar8 + 1;
                  if (iVar8 == 0) {
                    recovered_10013f20((int)local_18,in_EDX,param_3,(char *)0x0);
                    return;
                  }
                }
              }
            }
            local_1c = local_1c + 1;
          } while (local_1c != 0x22);
        }
      }
    }
  }
  else if (bVar3 != 0) goto LAB_10006a3d;
LAB_10007072:
  *(undefined1 *)(in_EDX + 0x141) = 0;
  *(undefined1 *)(in_EDX + 0x101) = 0;
  *(undefined4 *)(in_EDX + 0x544b8) = 0;
  *(undefined1 *)(in_EDX + 0x308) = 0;
  *(undefined1 *)(in_EDX + 0x201) = 0;
  iVar8 = Ram00006800;
  iVar9 = -1;
  if (((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
     ((uVar6 = Ram00006808, 0xb < uVar6 &&
      ((uVar6 = Ram00006808, 0xbf < uVar6 && (pcVar1 = (code *)UINT_000068bc, pcVar1 != (code *)0x0)
       ))))) {
    iVar9 = (*pcVar1)();
  }
  local_14 = (byte *)(in_EDX + 0x141);
  *(int *)(in_EDX + 0x304) = iVar9;
  snprintf(local_20,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),param_3);
  ppvVar15 = local_2c;
  bVar3 = *param_3;
  if (bVar3 == 0) {
LAB_10007409:
    uVar5 = recovered_10009250((char *)param_3,(int *)(in_EDX + 0x304),(char *)local_2c);
    if ((char)uVar5 == '\0') {
      if (((((*param_3 != 0x2f) &&
            (pcVar10 = strchr((char *)param_3,0x2f), pcVar10 == (char *)0x0)) &&
           (bVar4 = recovered_10014a40((char *)param_3,(byte *)((uintptr_t)pf_module_state+0x20d1U)), !bVar4)) &&
          ((bVar4 = recovered_10014a40((char *)param_3,(byte *)((uintptr_t)pf_module_state+0x20d7U)), !bVar4 &&
           (bVar4 = recovered_10014a40((char *)param_3,(byte *)((uintptr_t)pf_module_state+0x20dcU)), !bVar4)))) &&
         (bVar4 = recovered_10014870((int)param_3), !bVar4)) {
        recovered_10014710((int)local_18,in_EDX,((uintptr_t)pf_module_state+0x20e1U),((uintptr_t)pf_module_state+0x20f5U));
        pcVar10 = (char *)((uintptr_t)pf_module_state+0x2123U);
LAB_100075a8:
        pcVar16 = (char *)((uintptr_t)pf_module_state+0x154dU);
        goto LAB_100075ad;
      }
      snprintf((char *)local_260,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),param_3 + (*param_3 == 0x2f));
      recovered_10009350(local_260);
      iVar8 = recovered_100032d0();
      ppvVar15 = local_2c;
      *(int *)(in_EDX + 0x304) = iVar8;
      *(undefined1 *)(in_EDX + 0x308) = 1;
      snprintf((char *)local_2c,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_260);
    }
    else {
      *(undefined1 *)(in_EDX + 0x308) = 1;
    }
    bVar4 = recovered_10014870((int)ppvVar15);
    if (bVar4) {
      snprintf(local_20,0x100,(char *)((uintptr_t)pf_module_state+0x1629U),*(void ***)(in_EDX + 0x304),ppvVar15);
      recovered_10014340((int)local_18,in_EDX,(char *)ppvVar15);
    }
    else {
      uVar5 = recovered_10014900(in_EDX,*(void ***)(in_EDX + 0x304),ppvVar15);
      pvVar2 = local_18;
      if ((char)uVar5 == '\0') {
        recovered_10014710((int)local_18,in_EDX,((uintptr_t)pf_module_state+0x209eU),((uintptr_t)pf_module_state+0x20adU));
      }
      else {
        snprintf(local_20,0x100,(char *)((uintptr_t)pf_module_state+0x1629U),*(undefined4 *)(in_EDX + 0x304),ppvVar15
                          );
        recovered_10003320((int)pvVar2,in_EDX);
        recovered_100047d0(in_EDX);
        recovered_10014790(pvVar2,in_EDX);
      }
    }
  }
  else {
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar11 = bVar3 | 0x20;
      if (bVar11 == 0x68) goto LAB_1000712f;
      goto LAB_10007409;
    }
    bVar11 = bVar3;
    if (bVar3 != 0x68) goto LAB_10007409;
LAB_1000712f:
    bVar13 = param_3[1];
    if (bVar13 == 0) {
LAB_10007336:
      if ((bVar11 == 0x68) && (bVar11 = param_3[1], bVar11 != 0)) {
        if ((byte)(bVar11 + 0xbf) < 0x1a) {
          bVar11 = bVar11 | 0x20;
        }
        if ((bVar11 == 0x74) && (bVar11 = param_3[2], bVar11 != 0)) {
          if ((byte)(bVar11 + 0xbf) < 0x1a) {
            bVar11 = bVar11 | 0x20;
          }
          if ((bVar11 == 0x74) && (bVar11 = param_3[3], bVar11 != 0)) {
            if ((byte)(bVar11 + 0xbf) < 0x1a) {
              bVar11 = bVar11 | 0x20;
            }
            if ((bVar11 == 0x70) && (bVar11 = param_3[4], bVar11 != 0)) {
              if ((byte)(bVar11 + 0xbf) < 0x1a) {
                bVar11 = bVar11 | 0x20;
              }
              if ((bVar11 == 0x73) && (bVar11 = param_3[5], bVar11 != 0)) {
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                if ((bVar11 == 0x3a) && (bVar11 = param_3[6], bVar11 != 0)) {
                  if ((byte)(bVar11 + 0xbf) < 0x1a) {
                    bVar11 = bVar11 | 0x20;
                  }
                  if ((bVar11 == 0x2f) && (bVar11 = param_3[7], bVar11 != 0)) {
                    if ((byte)(bVar11 + 0xbf) < 0x1a) {
                      bVar11 = bVar11 | 0x20;
                    }
                    if (bVar11 == 0x2f) goto LAB_100071fb;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_10007409;
    }
    if ((byte)(bVar13 + 0xbf) < 0x1a) {
      bVar13 = bVar13 | 0x20;
    }
    if ((bVar13 != 0x74) || (bVar13 = param_3[2], bVar13 == 0)) goto LAB_10007336;
    if ((byte)(bVar13 + 0xbf) < 0x1a) {
      bVar13 = bVar13 | 0x20;
    }
    if ((bVar13 != 0x74) || (bVar13 = param_3[3], bVar13 == 0)) goto LAB_10007336;
    if ((byte)(bVar13 + 0xbf) < 0x1a) {
      bVar13 = bVar13 | 0x20;
    }
    if ((bVar13 != 0x70) || (bVar13 = param_3[4], bVar13 == 0)) goto LAB_10007336;
    if ((byte)(bVar13 + 0xbf) < 0x1a) {
      bVar13 = bVar13 | 0x20;
    }
    if ((bVar13 != 0x3a) || (bVar13 = param_3[5], bVar13 == 0)) goto LAB_10007336;
    if ((byte)(bVar13 + 0xbf) < 0x1a) {
      bVar13 = bVar13 | 0x20;
    }
    if ((bVar13 != 0x2f) || (bVar13 = param_3[6], bVar13 == 0)) goto LAB_10007336;
    if ((byte)(bVar13 + 0xbf) < 0x1a) {
      bVar13 = bVar13 | 0x20;
    }
    if (bVar13 != 0x2f) goto LAB_10007336;
LAB_100071fb:
    local_34 = 0;
    uVar6 = 0;
    while (((bVar3 != 0 && (bVar3 != 0x23)) && (bVar3 != 0x3f))) {
      iVar8 = uVar6 + 1;
      uVar6 = uVar6 + 1;
      bVar3 = param_3[iVar8];
    }
    if (uVar6 < 4) {
LAB_100075bc:
      local_120[0] = 0;
      local_a0 = '\0';
      iVar8 = Ram00006800;
      if (((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
           (uVar6 = Ram00006808, 0xb < uVar6)) &&
          ((uVar6 = Ram00006808, 0x4f < uVar6 &&
           (pcVar1 = (code *)UINT_0000684c, pcVar1 != (code *)0x0)))) &&
         (local_28 = (*pcVar1)(0x50000), local_28 != (undefined1 *)0x0)) {
        pcVar10 = &local_a0;
        uVar5 = recovered_10009430((int)local_18,(int)param_3,local_28,0x50000,&local_34,pcVar10,
                                   (char *)local_120,0x80);
        bVar3 = local_120[0];
        if ((char)uVar5 == '\0') {
          uVar5 = recovered_10003100(in_EDX);
          if ((char)uVar5 != '\0') {
            pbVar12 = (byte *)((uintptr_t)pf_module_state+0x2071U);
            if (bVar3 != 0) {
              pbVar12 = local_120;
            }
            snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x246cU),((uintptr_t)pf_module_state+0x1f87U),
                               ((uintptr_t)pf_module_state+0x1f87U),pbVar12);
            recovered_10003320((int)local_18,in_EDX);
            recovered_100047d0(in_EDX);
          }
          pbVar12 = (byte *)((uintptr_t)pf_module_state+0x208aU);
          if (local_120[0] != 0) {
            pbVar12 = local_120;
          }
          pcVar10 = (char *)((uintptr_t)pf_module_state+0x154dU);
LAB_10007842:
          snprintf((char *)local_14,0xc0,pcVar10,pbVar12);
        }
        else {
          local_1c = strlen((char *)((uintptr_t)pf_module_state+0x1fc9U));
          local_21 = local_a0;
          if (local_a0 != '\0' && local_1c != 0) {
            do {
              uVar7 = 0;
              while (bVar3 = pcVar10[uVar7], bVar3 != 0) {
                if ((byte)(bVar3 + 0xbf) < 0x1a) {
                  bVar3 = bVar3 | 0x20;
                }
                bVar11 = *(byte *)(uVar7 + ((uintptr_t)pf_module_state+0x1fc9U));
                if ((byte)(bVar11 + 0xbf) < 0x1a) {
                  bVar11 = bVar11 | 0x20;
                }
                if (bVar3 != bVar11) break;
                uVar7 = uVar7 + 1;
                if (local_1c == uVar7) goto LAB_1000769d;
              }
              if (local_1c == uVar7) goto LAB_1000769d;
              pcVar16 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
            } while (*pcVar16 != '\0');
          }
          bVar4 = recovered_10013e90((int)param_3);
          if (bVar4) {
LAB_1000769d:
            recovered_1000d080((char *)((uintptr_t)pf_module_state+0x1fd3U));
            iVar8 = *(int *)((int)local_18 + 0x205bc4) + 1;
            *(int *)((int)local_18 + 0x205bc4) = iVar8;
            pbVar12 = local_260;
            snprintf((char *)pbVar12,0x60,(char *)((uintptr_t)pf_module_state+0x1fdcU),iVar8);
            uVar6 = recovered_1000d0d0((char *)pbVar12,local_28,local_34);
            if (uVar6 != 0) {
              iVar8 = recovered_100032d0();
              ppvVar15 = local_2c;
              *(int *)(in_EDX + 0x304) = iVar8;
              *(undefined1 *)(in_EDX + 0x308) = 1;
              snprintf((char *)local_2c,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),pbVar12);
              recovered_10014340((int)local_18,in_EDX,(char *)ppvVar15);
              pcVar10 = (char *)((uintptr_t)pf_module_state+0x1f62U);
              goto LAB_10007842;
            }
            recovered_10014710((int)local_18,in_EDX,((uintptr_t)pf_module_state+0x1ffaU),((uintptr_t)pf_module_state+0x2006U));
          }
          else {
            if ((local_21 != '\0') &&
               (pcVar10 = recovered_100082e0(&local_a0,(char *)((uintptr_t)pf_module_state+0x2043U)), pcVar10 == (char *)0x0))
            {
              pcVar10 = recovered_100082e0(&local_a0,(char *)((uintptr_t)pf_module_state+0x204dU));
              if (pcVar10 == (char *)0x0) {
                snprintf(local_20,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_560);
                snprintf(local_40,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),local_160);
                snprintf((char *)local_2c,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_460);
                *(undefined1 *)(in_EDX + 0x308) = local_22;
                *(undefined4 *)(in_EDX + 0x304) = local_3c;
                *(undefined4 *)(in_EDX + 0x544b8) = local_38;
                recovered_10013f20((int)local_18,in_EDX,param_3,&local_a0);
                recovered_10002c00(local_28);
                return;
              }
            }
            if (*(char **)(in_EDX + 0x30c) != (char *)0x0) {
              snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x154dU),local_28);
            }
            pcVar10 = (char *)((uintptr_t)pf_module_state+0x2068U);
            if (local_a0 != '\0') {
              pcVar10 = &local_a0;
            }
            snprintf((char *)local_14,0xc0,(char *)((uintptr_t)pf_module_state+0x2058U),pcVar10);
            pvVar2 = local_18;
            recovered_10003320((int)local_18,in_EDX);
            recovered_100047d0(in_EDX);
            recovered_10014790(pvVar2,in_EDX);
          }
        }
        iVar8 = Ram00006800;
        if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
            (uVar6 = Ram00006808, 0xb < uVar6)) &&
           ((uVar6 = Ram00006808, 0x53 < uVar6 &&
            (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))) {
          (*pcVar1)(local_28);
        }
        goto LAB_10007577;
      }
      uVar5 = recovered_10003100(in_EDX);
      if ((char)uVar5 != '\0') {
        snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x246cU),((uintptr_t)pf_module_state+0x1f87U),((uintptr_t)pf_module_state+0x1f87U),
                           ((uintptr_t)pf_module_state+0x1f95U));
        recovered_10003320((int)local_18,in_EDX);
        recovered_100047d0(in_EDX);
      }
      pcVar10 = (char *)((uintptr_t)pf_module_state+0x1661U);
      goto LAB_100075a8;
    }
    bVar3 = param_3[uVar6 - 4];
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 != 0x2e) goto LAB_100075bc;
    bVar3 = param_3[uVar6 - 3];
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 != 0x70) goto LAB_100075bc;
    bVar3 = param_3[uVar6 - 2];
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 != 0x6e) goto LAB_100075bc;
    bVar3 = param_3[uVar6 - 1];
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 != 0x67) goto LAB_100075bc;
    local_30 = 0;
    uVar5 = recovered_100153a0((int)local_18,param_3,(char *)local_260,(undefined *)0x0,
                               (undefined *)0x0,0);
    if ((char)uVar5 == '\0') goto LAB_100075bc;
    uVar5 = recovered_10009250((char *)local_260,&local_30,local_360);
    ppvVar15 = local_2c;
    if ((char)uVar5 == '\0') goto LAB_100075bc;
    *(int *)(in_EDX + 0x304) = local_30;
    *(undefined1 *)(in_EDX + 0x308) = 1;
    snprintf((char *)local_2c,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_360);
    snprintf(local_20,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),param_3);
    recovered_10014340((int)local_18,in_EDX,(char *)ppvVar15);
    pcVar10 = local_360;
    pcVar16 = (char *)((uintptr_t)pf_module_state+0x1f62U);
LAB_100075ad:
    snprintf((char *)local_14,0xc0,pcVar16,pcVar10);
  }
LAB_10007577:
  recovered_10014410(in_EDX);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_000068bc
#undef local_560
#undef local_460
#undef local_360
#undef local_260
#undef local_160
#undef local_120
#undef local_a0
#undef local_9f
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_22
#undef local_21
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100079f0
 */

void recovered_100079f0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  if (in_ECX != 0) {
    if ((((*(void **)(in_ECX + 0x30c) != (void *)0x0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57))
        && (iVar1 = Ram00006804, iVar1 != 0)) &&
       (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
        (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(*(void **)(in_ECX + 0x30c));
    }
    if (((*(void **)(in_ECX + 0x310) != (void *)0x0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57))
       && ((iVar1 = Ram00006804, iVar1 != 0 &&
           (((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)) &&
            (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))))) {
      (*pcVar3)(*(void **)(in_ECX + 0x310));
    }
    if (((*(void **)(in_ECX + 0x314) != (void *)0x0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57))
       && (((iVar1 = Ram00006804, iVar1 != 0 &&
            ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))) &&
           (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)))) {
      (*pcVar3)(*(void **)(in_ECX + 0x314));
    }
    if (((((*(void **)(in_ECX + 0x318) != (void *)0x0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57)
          ) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))) &&
       (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(void **)(in_ECX + 0x318));
    }
    *(undefined4 *)(in_ECX + 0x30c) = 0;
    *(undefined4 *)(in_ECX + 0x310) = 0;
    *(undefined4 *)(in_ECX + 0x314) = 0;
    *(undefined4 *)(in_ECX + 0x318) = 0;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b60
 */

void recovered_10007b60(char *in_ECX,int in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((in_ECX != (char *)0x0) &&
     (uVar1 = strlen(in_ECX), param_3 != 0 && uVar1 < in_EDX - 1U)) {
    snprintf(in_ECX + uVar1,in_EDX - uVar1,(char *)((uintptr_t)pf_module_state+0x154dU),param_3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bb0
 */

void recovered_10007bb0(byte *in_ECX,undefined1 *in_EDX,int param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;

  if (in_EDX != (undefined1 *)0x0) {
    *in_EDX = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    if (in_ECX != (byte *)0x0) {
      if (*in_ECX - 9 < 0x27) {
                    /* WARNING: Could not emulate address calculation at 0x10007beb */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((*in_ECX - 9) * 4 + ((uintptr_t)pf_module_state+0x305U)))();
        return;
      }
      do {
        pbVar2 = in_ECX + 1;
        uVar4 = (uint)*in_ECX;
        if (0x17 < uVar4 - 9) break;
        in_ECX = pbVar2;
      } while ((0x80001bU >> (uVar4 - 9 & 0x1f) & 1) != 0);
      iVar1 = param_3 + -1 + (uint)(param_3 == 0);
      iVar5 = 0;
      while( true ) {
        bVar3 = (byte)uVar4;
        if (bVar3 < 0x30) {
                    /* WARNING: Could not emulate address calculation at 0x10007c50 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(uVar4 * 4 + ((uintptr_t)pf_module_state+0x3a1U)))();
          return;
        }
        if (iVar1 == iVar5) break;
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        in_EDX[iVar5] = bVar3;
        uVar4 = (uint)pbVar2[iVar5];
        iVar5 = iVar5 + 1;
      }
      in_EDX[iVar1] = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c80
 */

bool recovered_10007c80(byte *in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;

  if (in_EDX == (byte *)0x0 || in_ECX == (byte *)0x0) {
    return false;
  }
  bVar1 = *in_ECX;
  while( true ) {
    if (bVar1 == 0) {
      return *in_EDX == 0;
    }
    in_ECX = in_ECX + 1;
    bVar2 = *in_EDX;
    if (bVar2 == 0) break;
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar1 != bVar2) {
      return false;
    }
    in_EDX = in_EDX + 1;
    bVar1 = *in_ECX;
  }
  return false;
}


#define local_18 (*(char * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ce0
 */

void recovered_10007ce0(char *in_ECX,char *in_EDX,undefined1 *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;

  if (in_EDX == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = strlen(in_EDX);
  }
  if (((param_3 != (undefined1 *)0x0) &&
      (*param_3 = 0, uVar2 != 0 && (in_ECX != (char *)0x0 && in_EDX != (char *)0x0))) &&
     (*in_ECX != '\0')) {
    local_18 = in_ECX + uVar2 + 2;
    pcVar6 = in_ECX;
    do {
      uVar3 = 0;
      do {
        bVar4 = pcVar6[uVar3];
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        bVar5 = in_EDX[uVar3];
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        if (bVar4 != bVar5) goto LAB_10007d60;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
      if (pcVar6 == in_ECX) {
        if ((byte)local_18[-2] - 9 < 0x35) {
                    /* WARNING: Could not emulate address calculation at 0x10007ddc */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(((byte)local_18[-2] - 9) * 4 + ((uintptr_t)pf_module_state+0x531U)))();
          return;
        }
      }
      else if ((byte)pcVar6[-1] - 9 < 0x34) {
                    /* WARNING: Could not emulate address calculation at 0x10007dbc */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(((byte)pcVar6[-1] - 9) * 4 + ((uintptr_t)pf_module_state+0x461U)))();
        return;
      }
LAB_10007d60:
      local_18 = local_18 + 1;
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  return;
}

#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ed0
 */

int recovered_10007ed0(int in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint3 uVar1;
  bool bVar3;
  undefined4 in_EAX = 0;
  int iVar2;
  byte bVar4;
  byte bVar5;
  int iVar6;

  bVar3 = in_EDX == (byte *)0x0 || in_ECX == 0;
  if (bVar3) {
    return 0;
  }
  bVar4 = *in_EDX;
  iVar2 = CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar3,in_ECX == 0)) >> 8),
                   1);
  if (bVar4 != 0) {
    iVar6 = 0;
    do {
      bVar5 = *(byte *)(in_ECX + iVar6);
      if (bVar5 == 0) {
        return 0;
      }
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      uVar1 = CONCAT21((short)((uint)iVar2 >> 0x10),bVar4 + 0xbf);
      iVar2 = (uint)uVar1 << 8;
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if (bVar5 != bVar4) {
        return 0;
      }
      bVar4 = in_EDX[iVar6 + 1];
      iVar6 = iVar6 + 1;
    } while (bVar4 != 0);
    iVar2 = CONCAT31(uVar1,1);
  }
  return iVar2;
}


#define local_318 (*(byte (*)[256])(frame + 24))
#define local_218 (*(char (*)[256])(frame + 280))
#define local_118 (*(undefined4 (*)[64])(frame + 536))
#define local_18 (*(undefined4 *)(frame + 792))
#define local_14 (*(byte * *)(frame + 796))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f40
 */

void recovered_10007f40(int in_ECX,byte *in_EDX,char *param_3)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (in_EDX == (byte *)0x0) {
    return;
  }
  bVar1 = *in_EDX;
  if (bVar1 == 0) {
    return;
  }
  bVar6 = bVar1;
  if ((byte)(bVar1 + 0xbf) < 0x1a) {
    bVar6 = bVar1 | 0x20;
  }
  if (bVar6 == 0x68) {
    bVar6 = in_EDX[1];
    if (bVar6 != 0) {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if ((bVar6 == 0x74) && (bVar6 = in_EDX[2], bVar6 != 0)) {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if ((bVar6 == 0x74) && (bVar6 = in_EDX[3], bVar6 != 0)) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if ((bVar6 == 0x70) && (bVar6 = in_EDX[4], bVar6 != 0)) {
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if ((bVar6 == 0x3a) && (bVar6 = in_EDX[5], bVar6 != 0)) {
              if ((byte)(bVar6 + 0xbf) < 0x1a) {
                bVar6 = bVar6 | 0x20;
              }
              if ((bVar6 == 0x2f) && (bVar6 = in_EDX[6], bVar6 != 0)) {
                if ((byte)(bVar6 + 0xbf) < 0x1a) {
                  bVar6 = bVar6 | 0x20;
                }
                if (bVar6 == 0x2f) goto LAB_10008109;
              }
            }
          }
        }
      }
    }
    bVar6 = in_EDX[1];
    if (bVar6 != 0) {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if ((bVar6 == 0x74) && (bVar6 = in_EDX[2], bVar6 != 0)) {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if ((bVar6 == 0x74) && (bVar6 = in_EDX[3], bVar6 != 0)) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if ((bVar6 == 0x70) && (bVar6 = in_EDX[4], bVar6 != 0)) {
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if ((bVar6 == 0x73) && (bVar6 = in_EDX[5], bVar6 != 0)) {
              if ((byte)(bVar6 + 0xbf) < 0x1a) {
                bVar6 = bVar6 | 0x20;
              }
              if ((bVar6 == 0x3a) && (bVar6 = in_EDX[6], bVar6 != 0)) {
                if ((byte)(bVar6 + 0xbf) < 0x1a) {
                  bVar6 = bVar6 | 0x20;
                }
                if ((bVar6 == 0x2f) && (bVar6 = in_EDX[7], bVar6 != 0)) {
                  if ((byte)(bVar6 + 0xbf) < 0x1a) {
                    bVar6 = bVar6 | 0x20;
                  }
                  if (bVar6 == 0x2f) goto LAB_10008109;
                }
              }
            }
          }
        }
      }
    }
  }
  if (bVar1 == 0x23) {
    if (*(char *)(in_ECX + 1) != '\0') {
      snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_ECX + 1);
      pcVar2 = strchr(param_3,0x23);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      recovered_10007b60(param_3,0x100,(int)in_EDX);
      return;
    }
  }
  else if (bVar1 == 0x5b) {
LAB_10008109:
    snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX);
    return;
  }
  if (*(char *)(in_ECX + 0x554c8) != '\0') {
    uVar3 = recovered_10008b30((byte *)(in_ECX + 0x554c8),(char *)in_EDX,param_3);
    if ((char)uVar3 != '\0') {
      return;
    }
    bVar1 = *in_EDX;
  }
  local_14 = in_EDX;
  if (bVar1 == 0x2f) {
    local_118[0] = 0;
    uVar3 = recovered_10009080(in_ECX,local_118,local_218);
    if ((char)uVar3 != '\0') {
      pbVar4 = local_14 + 1;
      uVar3 = local_118[0];
      goto LAB_10008221;
    }
  }
  local_18 = 0;
  uVar3 = recovered_10009080(in_ECX,&local_18,local_218);
  if ((char)uVar3 == '\0') {
    if (*local_14 == 0x2f) {
      pbVar4 = (byte *)(in_ECX + 1);
      iVar5 = recovered_10007ed0((int)pbVar4,(byte *)((uintptr_t)pf_module_state+0x1567U));
      if ((((char)iVar5 != '\0') ||
          (iVar5 = recovered_10007ed0((int)pbVar4,(byte *)((uintptr_t)pf_module_state+0x156fU)), (char)iVar5 != '\0')) &&
         (uVar3 = recovered_10008b30(pbVar4,(char *)local_14,param_3), (char)uVar3 != '\0')) {
        return;
      }
    }
    pbVar4 = (byte *)(in_ECX + 1);
    iVar5 = recovered_10007ed0((int)pbVar4,(byte *)((uintptr_t)pf_module_state+0x1567U));
    if ((((char)iVar5 == '\0') &&
        (iVar5 = recovered_10007ed0((int)pbVar4,(byte *)((uintptr_t)pf_module_state+0x156fU)), (char)iVar5 == '\0')) ||
       (uVar3 = recovered_10008b30(pbVar4,(char *)local_14,param_3), (char)uVar3 == '\0')) {
      snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_14);
      return;
    }
    return;
  }
  recovered_10009110(local_218,(undefined1 *)local_118);
  pbVar4 = local_318;
  recovered_100091b0((char *)local_118,(char *)local_14,(char *)pbVar4);
  uVar3 = local_18;
LAB_10008221:
  snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x1629U),uVar3,pbVar4);
  return;
}

#undef local_318
#undef local_218
#undef local_118
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082e0
 */

char * recovered_100082e0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;

  if ((in_EDX != (char *)0x0) &&
     (uVar3 = strlen(in_EDX), uVar3 != 0 && in_ECX != (char *)0x0)) {
    cVar2 = *in_ECX;
    while (cVar2 != '\0') {
      uVar4 = 0;
      while (bVar5 = in_ECX[uVar4], bVar5 != 0) {
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        bVar6 = in_EDX[uVar4];
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar5 != bVar6) break;
        uVar4 = uVar4 + 1;
        if (uVar3 == uVar4) {
          return in_ECX;
        }
      }
      if (uVar3 == uVar4) {
        return in_ECX;
      }
      pcVar1 = in_ECX + 1;
      in_ECX = in_ECX + 1;
      cVar2 = *pcVar1;
    }
  }
  return (char *)0x0;
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
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#define local_220 (*(char (*)[256])(frame + 16))
#define local_120 (*(byte *)(frame + 272))
#define local_11f (*(byte *)(frame + 273))
#define local_11e (*(byte *)(frame + 274))
#define local_11d (*(byte *)(frame + 275))
#define local_11c (*(byte *)(frame + 276))
#define local_11b (*(byte *)(frame + 277))
#define local_11a (*(byte *)(frame + 278))
#define local_119 (*(byte *)(frame + 279))
#define local_20 (*(void * *)(frame + 528))
#define local_1c (*(uint *)(frame + 532))
#define local_14 (*(int *)(frame + 540))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008360
 */

undefined4
recovered_10008360(int in_EDX,char *param_2,undefined1 *param_3,uint param_4,char *param_5)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int in_ECX;

  local_14 = -1;
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == '\0') {
    return 0;
  }
  recovered_10007f40(in_EDX,(byte *)param_2,(char *)&local_120);
  if (local_120 != 0) {
    if ((byte)(local_120 + 0xbf) < 0x1a) {
      local_120 = local_120 | 0x20;
    }
    if (local_120 == 0x68) {
      if (local_11f != 0) {
        bVar5 = local_11f;
        if ((byte)(local_11f + 0xbf) < 0x1a) {
          bVar5 = local_11f | 0x20;
        }
        if ((bVar5 == 0x74) && (local_11e != 0)) {
          bVar5 = local_11e;
          if ((byte)(local_11e + 0xbf) < 0x1a) {
            bVar5 = local_11e | 0x20;
          }
          if ((bVar5 == 0x74) && (local_11d != 0)) {
            bVar5 = local_11d;
            if ((byte)(local_11d + 0xbf) < 0x1a) {
              bVar5 = local_11d | 0x20;
            }
            if ((bVar5 == 0x70) && (local_11c != 0)) {
              bVar5 = local_11c;
              if ((byte)(local_11c + 0xbf) < 0x1a) {
                bVar5 = local_11c | 0x20;
              }
              if ((bVar5 == 0x3a) && (local_11b != 0)) {
                bVar5 = local_11b;
                if ((byte)(local_11b + 0xbf) < 0x1a) {
                  bVar5 = local_11b | 0x20;
                }
                if ((bVar5 == 0x2f) && (local_11a != 0)) {
                  bVar5 = local_11a;
                  if ((byte)(local_11a + 0xbf) < 0x1a) {
                    bVar5 = local_11a | 0x20;
                  }
                  if (bVar5 == 0x2f) goto LAB_10008496;
                }
              }
            }
          }
        }
      }
      if (local_11f != 0) {
        if ((byte)(local_11f + 0xbf) < 0x1a) {
          local_11f = local_11f | 0x20;
        }
        if ((local_11f == 0x74) && (local_11e != 0)) {
          if ((byte)(local_11e + 0xbf) < 0x1a) {
            local_11e = local_11e | 0x20;
          }
          if ((local_11e == 0x74) && (local_11d != 0)) {
            if ((byte)(local_11d + 0xbf) < 0x1a) {
              local_11d = local_11d | 0x20;
            }
            if ((local_11d == 0x70) && (local_11c != 0)) {
              if ((byte)(local_11c + 0xbf) < 0x1a) {
                local_11c = local_11c | 0x20;
              }
              if ((local_11c == 0x73) && (local_11b != 0)) {
                if ((byte)(local_11b + 0xbf) < 0x1a) {
                  local_11b = local_11b | 0x20;
                }
                if ((local_11b == 0x3a) && (local_11a != 0)) {
                  if ((byte)(local_11a + 0xbf) < 0x1a) {
                    local_11a = local_11a | 0x20;
                  }
                  if ((local_11a == 0x2f) && (local_119 != 0)) {
                    if ((byte)(local_119 + 0xbf) < 0x1a) {
                      local_119 = local_119 | 0x20;
                    }
                    if (local_119 == 0x2f) {
LAB_10008496:
                      uVar3 = recovered_10009430(in_ECX,(int)&local_120,param_3,param_4,
                                                 (ulong *)&local_20,local_220,param_5,0x60);
                      return uVar3;
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
  uVar3 = recovered_10009250((char *)&local_120,&local_14,local_220);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  memset(&local_20,0,0xc);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) && (uVar4 = Ram00006808, 0xcb < uVar4)) {
    pcVar2 = (code *)UINT_000068c8;
    if (pcVar2 == (code *)0x0) goto LAB_1000866e;
    uVar4 = (*pcVar2)(local_14,local_220,&local_20);
  }
  else {
    iVar1 = Ram00006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
       ((uVar4 = Ram00006808, uVar4 < 0xc ||
        ((uVar4 = Ram00006808, uVar4 < 0x38 ||
         (pcVar2 = (code *)UINT_00006834, pcVar2 == (code *)0x0)))))) goto LAB_1000866e;
    uVar4 = (*pcVar2)(local_220,&local_20);
  }
  if (local_20 != (void *)0x0 && uVar4 != 0) {
    uVar4 = local_1c;
    if (param_4 - 1 <= local_1c) {
      uVar4 = param_4 - 1;
    }
    memcpy(param_3,local_20,uVar4);
    param_3[uVar4] = 0;
    uVar3 = CONCAT31((int3)((uint)&local_20 >> 8),1);
    if (param_5 == (char *)0x0) {
      return uVar3;
    }
    if (uVar4 == local_1c) {
      return uVar3;
    }
    snprintf(param_5,0x60,(char *)((uintptr_t)pf_module_state+0x164eU));
    return uVar3;
  }
LAB_1000866e:
  snprintf(param_5,0x60,(char *)((uintptr_t)pf_module_state+0x163bU));
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_000068c8
#undef local_220
#undef local_120
#undef local_11f
#undef local_11e
#undef local_11d
#undef local_11c
#undef local_11b
#undef local_11a
#undef local_119
#undef local_20
#undef local_1c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100086e0
 */

bool recovered_100086e0(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  ulong uVar5;
  byte bVar6;
  bool bVar7;

  if (in_ECX == (char *)0x0) {
    bVar7 = false;
  }
  else {
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x1b52U));
    if ((uVar2 != 0) && (*in_ECX != '\0')) {
      pcVar3 = in_ECX;
      do {
        uVar5 = 0;
        while (bVar6 = pcVar3[uVar5], bVar6 != 0) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          bVar4 = *(byte *)(uVar5 + ((uintptr_t)pf_module_state+0x1b52U));
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar6 != bVar4) break;
          uVar5 = uVar5 + 1;
          if (uVar2 == uVar5) {
            return true;
          }
        }
        if (uVar2 == uVar5) {
          return true;
        }
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x1b61U));
    if ((uVar2 != 0) && (*in_ECX != '\0')) {
      pcVar3 = in_ECX;
      do {
        uVar5 = 0;
        while (bVar6 = pcVar3[uVar5], bVar6 != 0) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          bVar4 = *(byte *)(uVar5 + ((uintptr_t)pf_module_state+0x1b61U));
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar6 != bVar4) break;
          uVar5 = uVar5 + 1;
          if (uVar2 == uVar5) {
            return true;
          }
        }
        if (uVar2 == uVar5) {
          return true;
        }
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x1b72U));
    if ((uVar2 != 0) && (*in_ECX != '\0')) {
      pcVar3 = in_ECX;
      do {
        uVar5 = 0;
        while (bVar6 = pcVar3[uVar5], bVar6 != 0) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          bVar4 = *(byte *)(uVar5 + ((uintptr_t)pf_module_state+0x1b72U));
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar6 != bVar4) break;
          uVar5 = uVar5 + 1;
          if (uVar2 == uVar5) {
            return true;
          }
        }
        if (uVar2 == uVar5) {
          return true;
        }
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x1b7cU));
    if ((uVar2 != 0) && (*in_ECX != '\0')) {
      pcVar3 = in_ECX;
      do {
        uVar5 = 0;
        while (bVar6 = pcVar3[uVar5], bVar6 != 0) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          bVar4 = *(byte *)(uVar5 + ((uintptr_t)pf_module_state+0x1b7cU));
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar6 != bVar4) break;
          uVar5 = uVar5 + 1;
          if (uVar2 == uVar5) {
            return true;
          }
        }
        if (uVar2 == uVar5) {
          return true;
        }
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1b86U));
    bVar7 = true;
    if ((((pcVar3 == (char *)0x0) &&
         (pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1b92U)), pcVar3 == (char *)0x0)) &&
        (pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1b9cU)), pcVar3 == (char *)0x0)) &&
       (((pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1bafU)), pcVar3 == (char *)0x0 &&
         (pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1bbbU)), pcVar3 == (char *)0x0)) &&
        (pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1bc8U)), pcVar3 == (char *)0x0)))) {
      pcVar3 = recovered_100082e0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1bcfU));
      bVar7 = pcVar3 != (char *)0x0;
    }
  }
  return bVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008930
 */

void recovered_10008930(char *in_ECX,char *in_EDX,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *a;

  if (((in_EDX != (char *)0x0) && (*in_EDX = '\0', in_ECX != (char *)0x0)) && (*in_ECX != '\0')) {
    uVar1 = param_3 - 1;
    iVar5 = 0;
    a = in_ECX;
    do {
      uVar2 = strlen(in_EDX);
      if (uVar1 <= uVar2) {
        return;
      }
      cVar4 = *a;
      if (cVar4 == '&') {
        iVar3 = strncmp(a,(char *)((uintptr_t)pf_module_state+0x15faU),5);
        if (iVar3 == 0) {
          uVar2 = strlen(in_EDX);
          if (uVar2 < uVar1) {
            (in_EDX + uVar2)[0] = '&';
            (in_EDX + uVar2)[1] = '\0';
          }
LAB_10008aa7:
          iVar5 = iVar5 + 4;
        }
        else {
          iVar3 = strncmp(a,(char *)((uintptr_t)pf_module_state+0x1600U),4);
          if (iVar3 == 0) {
            uVar2 = strlen(in_EDX);
            if (uVar2 < uVar1) {
              (in_EDX + uVar2)[0] = '<';
              (in_EDX + uVar2)[1] = '\0';
            }
          }
          else {
            iVar3 = strncmp(a,(char *)((uintptr_t)pf_module_state+0x1605U),4);
            if (iVar3 != 0) {
              iVar3 = strncmp(a,(char *)((uintptr_t)pf_module_state+0x160aU),6);
              if (iVar3 == 0) {
                uVar2 = strlen(in_EDX);
                if (uVar2 < uVar1) {
                  (in_EDX + uVar2)[0] = '\"';
                  (in_EDX + uVar2)[1] = '\0';
                }
              }
              else {
                iVar3 = strncmp(a,(char *)((uintptr_t)pf_module_state+0x1611U),5);
                if (iVar3 == 0) {
                  uVar2 = strlen(in_EDX);
                  if (uVar2 < uVar1) {
                    (in_EDX + uVar2)[0] = '\'';
                    (in_EDX + uVar2)[1] = '\0';
                  }
                  goto LAB_10008aa7;
                }
                iVar3 = strncmp(a,(char *)((uintptr_t)pf_module_state+0x1617U),6);
                if (iVar3 != 0) {
                  cVar4 = *a;
                  goto LAB_10008a70;
                }
                uVar2 = strlen(in_EDX);
                if (uVar2 < uVar1) {
                  (in_EDX + uVar2)[0] = ' ';
                  (in_EDX + uVar2)[1] = '\0';
                }
              }
              iVar5 = iVar5 + 5;
              goto LAB_10008972;
            }
            uVar2 = strlen(in_EDX);
            if (uVar2 < uVar1) {
              (in_EDX + uVar2)[0] = '>';
              (in_EDX + uVar2)[1] = '\0';
            }
          }
          iVar5 = iVar5 + 3;
        }
      }
      else {
LAB_10008a70:
        uVar2 = strlen(in_EDX);
        if (uVar2 < uVar1) {
          in_EDX[uVar2] = cVar4;
          in_EDX[uVar2 + 1] = '\0';
        }
      }
LAB_10008972:
      a = in_ECX + iVar5 + 1;
      iVar3 = iVar5 + 1;
      iVar5 = iVar5 + 1;
    } while (in_ECX[iVar3] != '\0');
  }
  return;
}


#define local_114 (*(char (*)[256])(frame + 28))
#define local_14 (*(char * *)(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008b30
 */

undefined4 recovered_10008b30(byte *in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_EBX = 0;
  undefined3 uVar9;
  undefined4 uVar8;
  ulong n;

  if (in_ECX == (byte *)0x0) {
    return 0;
  }
  bVar2 = *in_ECX;
  if (bVar2 == 0) {
    return 0;
  }
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x68) {
    return 0;
  }
  bVar2 = in_ECX[1];
  uVar5 = (uint)CONCAT11(bVar2,0x68);
  if (bVar2 == 0) {
LAB_10008c29:
    if ((char)uVar5 != 'h') {
      return 0;
    }
    bVar2 = in_ECX[1];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x74) {
      return 0;
    }
    bVar2 = in_ECX[2];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x74) {
      return 0;
    }
    bVar2 = in_ECX[3];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x70) {
      return 0;
    }
    bVar2 = in_ECX[4];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x73) {
      return 0;
    }
    bVar2 = in_ECX[5];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x3a) {
      return 0;
    }
    bVar2 = in_ECX[6];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x2f) {
      return 0;
    }
    bVar2 = in_ECX[7];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x2f) {
      return 0;
    }
  }
  else {
    uVar9 = (undefined3)((uint)unaff_EBX >> 8);
    unaff_EBX = (char *)CONCAT31(uVar9,bVar2 + 0xbf);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar5 = (uint)(ushort)(CONCAT11(bVar2,0x68) | 0x2000);
    }
    if ((char)(uVar5 >> 8) != 't') goto LAB_10008c29;
    bVar2 = in_ECX[2];
    uVar3 = (undefined1)uVar5;
    uVar5 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10008c29;
    unaff_EBX = (char *)CONCAT31(uVar9,bVar2 + 0xbf);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar5 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar5 >> 8) != 't') goto LAB_10008c29;
    bVar2 = in_ECX[3];
    uVar3 = (undefined1)uVar5;
    uVar5 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10008c29;
    unaff_EBX = (char *)CONCAT31(uVar9,bVar2 + 0xbf);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar5 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar5 >> 8) != 'p') goto LAB_10008c29;
    bVar2 = in_ECX[4];
    uVar3 = (undefined1)uVar5;
    uVar5 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10008c29;
    unaff_EBX = (char *)CONCAT31(uVar9,bVar2 + 0xbf);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar5 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar5 >> 8) != ':') goto LAB_10008c29;
    bVar2 = in_ECX[5];
    uVar3 = (undefined1)uVar5;
    uVar5 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10008c29;
    unaff_EBX = (char *)CONCAT31(uVar9,bVar2 + 0xbf);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar5 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar5 >> 8) != '/') goto LAB_10008c29;
    bVar2 = in_ECX[6];
    uVar3 = (undefined1)uVar5;
    uVar5 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10008c29;
    unaff_EBX = (char *)CONCAT31(uVar9,bVar2 + 0xbf);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar5 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar5 >> 8) != '/') goto LAB_10008c29;
  }
  cVar1 = *in_EDX;
  if (cVar1 != '\0') {
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      uVar4 = CONCAT11(cVar1,cVar1) | 0x2000;
    }
    else {
      uVar4 = CONCAT11(cVar1,cVar1);
    }
    uVar5 = (uint)uVar4;
    if ((char)(uVar4 >> 8) == 'h') {
      bVar2 = in_EDX[1];
      if (bVar2 != 0) {
        if ((byte)(bVar2 + 0xbf) < 0x1a) {
          bVar2 = bVar2 | 0x20;
        }
        if ((bVar2 == 0x74) && (bVar2 = in_EDX[2], bVar2 != 0)) {
          if ((byte)(bVar2 + 0xbf) < 0x1a) {
            bVar2 = bVar2 | 0x20;
          }
          if ((bVar2 == 0x74) && (bVar2 = in_EDX[3], bVar2 != 0)) {
            if ((byte)(bVar2 + 0xbf) < 0x1a) {
              bVar2 = bVar2 | 0x20;
            }
            if ((bVar2 == 0x70) && (bVar2 = in_EDX[4], bVar2 != 0)) {
              if ((byte)(bVar2 + 0xbf) < 0x1a) {
                bVar2 = bVar2 | 0x20;
              }
              if ((bVar2 == 0x3a) && (bVar2 = in_EDX[5], bVar2 != 0)) {
                if ((byte)(bVar2 + 0xbf) < 0x1a) {
                  bVar2 = bVar2 | 0x20;
                }
                if ((bVar2 == 0x2f) && (bVar2 = in_EDX[6], bVar2 != 0)) {
                  if ((byte)(bVar2 + 0xbf) < 0x1a) {
                    bVar2 = bVar2 | 0x20;
                  }
                  unaff_EBX = (char *)0x0;
                  if (bVar2 == 0x2f) goto LAB_10008f57;
                }
              }
            }
          }
        }
      }
      cVar1 = in_EDX[1];
      uVar5 = (uint)CONCAT11(cVar1,(char)uVar4);
      unaff_EBX = (char *)0x0;
      if (cVar1 != '\0') {
        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
          uVar5 = (uint)(ushort)(CONCAT11(cVar1,(char)uVar4) | 0x2000);
        }
        unaff_EBX = in_EDX;
        if ((char)(uVar5 >> 8) == 't') {
          cVar1 = in_EDX[2];
          uVar3 = (undefined1)uVar5;
          uVar5 = (uint)CONCAT11(cVar1,uVar3);
          if (cVar1 != '\0') {
            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
              uVar5 = (uint)(ushort)(CONCAT11(cVar1,uVar3) | 0x2000);
            }
            if ((char)(uVar5 >> 8) == 't') {
              cVar1 = in_EDX[3];
              uVar3 = (undefined1)uVar5;
              uVar5 = (uint)CONCAT11(cVar1,uVar3);
              if (cVar1 != '\0') {
                if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                  uVar5 = (uint)(ushort)(CONCAT11(cVar1,uVar3) | 0x2000);
                }
                if ((char)(uVar5 >> 8) == 'p') {
                  cVar1 = in_EDX[4];
                  uVar3 = (undefined1)uVar5;
                  uVar5 = (uint)CONCAT11(cVar1,uVar3);
                  if (cVar1 != '\0') {
                    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                      uVar5 = (uint)(ushort)(CONCAT11(cVar1,uVar3) | 0x2000);
                    }
                    if ((char)(uVar5 >> 8) == 's') {
                      cVar1 = in_EDX[5];
                      uVar3 = (undefined1)uVar5;
                      uVar5 = (uint)CONCAT11(cVar1,uVar3);
                      if (cVar1 != '\0') {
                        if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                          uVar5 = (uint)(ushort)(CONCAT11(cVar1,uVar3) | 0x2000);
                        }
                        if ((char)(uVar5 >> 8) == ':') {
                          cVar1 = in_EDX[6];
                          uVar3 = (undefined1)uVar5;
                          uVar5 = (uint)CONCAT11(cVar1,uVar3);
                          if (cVar1 != '\0') {
                            if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                              uVar5 = (uint)(ushort)(CONCAT11(cVar1,uVar3) | 0x2000);
                            }
                            if ((char)(uVar5 >> 8) == '/') {
                              cVar1 = in_EDX[7];
                              uVar3 = (undefined1)uVar5;
                              uVar4 = CONCAT11(cVar1,uVar3);
                              uVar5 = (uint)uVar4;
                              if (cVar1 != '\0') {
                                if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                                  uVar4 = CONCAT11(cVar1,uVar3) | 0x2000;
                                }
                                if ((char)uVar4 == '[' || (char)(uVar4 >> 8) == '/')
                                goto LAB_10008f57;
                                goto LAB_10008f00;
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
    if ((char)uVar5 == '[') {
LAB_10008f57:
      uVar8 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
      if (param_3 == (char *)0x0) {
        return uVar8;
      }
      snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX);
      return uVar8;
    }
  }
LAB_10008f00:
  local_14 = in_EDX;
  pcVar6 = strstr((char *)in_ECX,(char *)((uintptr_t)pf_module_state+0x161eU));
  if (pcVar6 == (char *)0x0) {
    return 0;
  }
  if (*local_14 != '/') {
    pcVar6 = local_114;
    snprintf(pcVar6,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_ECX);
    pcVar7 = strchr(pcVar6,0x23);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = strchr(pcVar6,0x3f);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = (char *)0x0;
    do {
      if (*pcVar6 == '/') {
        pcVar7 = pcVar6;
      }
      else if (*pcVar6 == '\0') goto code_r0x10008fcb;
      pcVar6 = pcVar6 + 1;
    } while( true );
  }
  pcVar6 = strchr(pcVar6 + 3,0x2f);
  if (pcVar6 == (char *)0x0) {
    n = strlen((char *)in_ECX);
  }
  else {
    n = (int)pcVar6 - (int)in_ECX;
  }
  if (0xfe < (int)n) {
    n = 0xff;
  }
  unaff_EBX = local_114;
  memcpy(unaff_EBX,in_ECX,n);
  local_114[n] = '\0';
LAB_1000905b:
  snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x1622U),local_114,local_14);
  return CONCAT31((int3)((uint)unaff_EBX >> 8),1);
code_r0x10008fcb:
  if ((pcVar7 == (char *)0x0) ||
     (pcVar6 = strstr(local_114,(char *)((uintptr_t)pf_module_state+0x161eU)), pcVar7 <= pcVar6 + 2)) {
    recovered_10007b60(local_114,0x100,((uintptr_t)pf_module_state+0x1627U));
  }
  else {
    pcVar7[1] = '\0';
  }
  goto LAB_1000905b;
}

#undef local_114
#undef local_14

#define local_14 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009080
 */

undefined4 recovered_10009080(int in_ECX,undefined4 *in_EDX,char *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_14 = 0;
  if (param_3 == (char *)0x0 || in_EDX == (undefined4 *)0x0) {
LAB_100090a3:
    uVar1 = 0;
  }
  else {
    *param_3 = '\0';
    uVar1 = recovered_10009250((char *)(in_ECX + 1),&local_14,param_3);
    if ((char)uVar1 == '\0') {
      if ((*(char *)(in_ECX + 0x308) != '\x01') || (*(char *)(in_ECX + 0x201) == '\0'))
      goto LAB_100090a3;
      *in_EDX = *(undefined4 *)(in_ECX + 0x304);
      local_14 = snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_ECX + 0x201);
    }
    else {
      *in_EDX = local_14;
    }
    uVar1 = CONCAT31((int3)((uint)local_14 >> 8),1);
  }
  return uVar1;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009110
 */

void recovered_10009110(char *in_ECX,undefined1 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong n;

  if (in_ECX == (char *)0x0) {
    n = 0;
  }
  else {
    n = strlen(in_ECX);
  }
  if (in_EDX == (undefined1 *)0x0) {
    return;
  }
  *in_EDX = 0;
  if (n == 0 || in_ECX == (char *)0x0) {
    return;
  }
  while ((in_ECX[n - 1] == '/' || (in_ECX[n - 1] == '\\'))) {
    n = n - 1;
    if (n == 0) {
      return;
    }
  }
  while ((in_ECX[n - 1] != '/' && (in_ECX[n - 1] != '\\'))) {
    n = n - 1;
    if (n == 0) {
      return;
    }
  }
  if (0xfe < n) {
    n = 0xff;
  }
  memcpy(in_EDX,in_ECX,n);
  in_EDX[n] = 0;
  return;
}


#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091b0
 */

void recovered_100091b0(char *in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (*in_EDX == '/') {
    in_EDX = in_EDX + 1;
  }
  else if (*in_EDX == '\0') {
    in_EDX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (in_ECX != (char *)0x0) {
      in_EDX = in_ECX;
    }
  }
  else if ((in_ECX != (char *)0x0) && (*in_ECX != '\0')) {
    uVar1 = strlen(in_ECX);
    puVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (in_ECX[uVar1 - 1] != '/') {
      puVar2 = (undefined1 *)((uintptr_t)pf_module_state+0x1627U);
    }
    snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x1634U),in_ECX,puVar2,in_EDX);
    return;
  }
  snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX);
  return;
}

#undef DAT_0181bc65

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009250
 */

undefined4 recovered_10009250(char *in_ECX,int *in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  ulong n;

  if ((param_3 != (char *)0x0 && (in_EDX != (int *)0x0 && in_ECX != (char *)0x0)) &&
     (*param_3 = '\0', *in_ECX == '[')) {
    cVar1 = in_ECX[1];
    if (cVar1 == '-') {
      pcVar3 = in_ECX + 2;
    }
    else {
      pcVar3 = in_ECX + 1;
    }
    cVar4 = in_ECX[(cVar1 == '-') + 1];
    iVar5 = 0;
    if ((byte)(cVar4 - 0x3aU) < 0xf6) {
      return 0;
    }
    pcVar3 = pcVar3 + 3;
    do {
      pcVar2 = pcVar3;
      iVar5 = (uint)(byte)(cVar4 - 0x30) + iVar5 * 10;
      cVar4 = pcVar2[-2];
      pcVar3 = pcVar2 + 1;
    } while ((byte)(cVar4 - 0x30U) < 10);
    if (((cVar4 == ']') && (pcVar2[-1] == ':')) && (*pcVar2 == ';')) {
      if (*pcVar3 == '/') {
        pcVar3 = pcVar2 + 2;
      }
      for (n = 0; (pcVar3[n] != '\0' && (pcVar3[n] != '>')); n = n + 1) {
      }
      if (0xfe < n) {
        n = 0xff;
      }
      memcpy(param_3,pcVar3,n);
      param_3[n] = '\0';
      recovered_10009350((byte *)param_3);
      if (cVar1 == '-') {
        iVar5 = -iVar5;
      }
      *in_EDX = iVar5;
      return CONCAT31((int3)((uint)iVar5 >> 8),*param_3 != '\0');
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009350
 */

void recovered_10009350(byte *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;

  if (in_ECX == (byte *)0x0) {
    return;
  }
  pbVar6 = in_ECX;
  do {
    for (; bVar1 = *in_ECX, bVar1 != 0x25; in_ECX = in_ECX + 1) {
      if (bVar1 == 0) {
        *pbVar6 = 0;
        return;
      }
LAB_10009378:
      *pbVar6 = bVar1;
      pbVar6 = pbVar6 + 1;
    }
    bVar2 = in_ECX[1];
    iVar4 = (int)(char)bVar2;
    if (iVar4 == 0) goto LAB_10009378;
    bVar3 = in_ECX[2];
    iVar5 = (int)(char)bVar3;
    if (iVar5 == 0) goto LAB_10009378;
    if ((byte)(bVar2 - 0x30U) < 10) {
      iVar4 = iVar4 + -0x30;
    }
    else if ((byte)(bVar2 + 0x9f) < 6) {
      iVar4 = iVar4 + -0x57;
    }
    else if ((byte)(bVar2 + 0xbf) < 6) {
      iVar4 = iVar4 + -0x37;
    }
    else {
      iVar4 = -1;
    }
    if ((byte)(bVar3 - 0x30U) < 10) {
      iVar5 = iVar5 + -0x30;
    }
    else if ((byte)(bVar3 + 0x9f) < 6) {
      iVar5 = iVar5 + -0x57;
    }
    else if ((byte)(bVar3 + 0xbf) < 6) {
      iVar5 = iVar5 + -0x37;
    }
    else {
      iVar5 = -1;
    }
    if ((iVar4 < 0) || (iVar5 < 0)) goto LAB_10009378;
    *pbVar6 = (byte)iVar5 | (byte)(iVar4 << 4);
    in_ECX = in_ECX + 3;
    pbVar6 = pbVar6 + 1;
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
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#define local_96a (*(char (*)[1536])(frame + 22))
#define local_36a (*(char (*)[512])(frame + 1558))
#define local_16a (*(char *)(frame + 2070))
#define local_169 (*(byte (*)[128])(frame + 2071))
#define local_e9 (*(char (*)[193])(frame + 2199))
#define local_28 (*(ushort *)(frame + 2392))
#define local_26 (*(char (*)[6])(frame + 2394))
#define local_20 (*(ulong *)(frame + 2400))
#define local_1c (*(uint *)(frame + 2404))
#define local_18 (*(uint *)(frame + 2408))
#define local_14 (*(byte * *)(frame + 2412))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009430
 */

undefined4
recovered_10009430(int in_ECX,int in_EDX,undefined1 *param_3,uint param_4,ulong *param_5,
                  undefined1 *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[2464] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined *puVar6;
  char *pcVar7;
  byte *ptr;
  ulong n;

  local_18 = 0;
  local_1c = 0;
  if (in_EDX != 0) {
    *param_3 = 0;
    if (param_5 != (ulong *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
    uVar5 = recovered_100097b0((byte *)in_EDX,&local_16a,param_7,param_8);
    if ((char)uVar5 != '\0') {
      pcVar7 = (char *)(in_ECX + 0x205bc8);
      uVar5 = recovered_10009ae0(pcVar7,param_7,param_8);
      if ((char)uVar5 != '\0') {
        uVar5 = recovered_10009e80((char *)local_169,&local_18);
        if (((char)uVar5 != '\0') ||
           (uVar5 = recovered_1000a010((int)pcVar7,local_169,&local_18,param_7,param_8),
           (char)uVar5 != '\0')) {
          uVar5 = recovered_1000a460((int)pcVar7,local_18,local_26,param_7,param_8);
          if ((char)uVar5 != '\0') {
            iVar1 = Ram00006800;
            if (((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
                 (uVar2 = Ram00006808, 0xb < uVar2)) &&
                ((uVar2 = Ram00006808, 0x4f < uVar2 &&
                 (pcVar3 = (code *)UINT_0000684c, pcVar3 != (code *)0x0)))) &&
               (local_14 = (*pcVar3)(0x50000), local_14 != (byte *)0x0)) {
              puVar6 = winter_js_version();
              snprintf(local_36a,0x200,(char *)((uintptr_t)pf_module_state+0x18e5U),1000000,((uintptr_t)pf_module_state+0x196fU),((uintptr_t)pf_module_state+0x1967U),
                                 ((uintptr_t)pf_module_state+0x196bU),((uintptr_t)pf_module_state+0x196bU),puVar6);
              ptr = local_14;
              if (local_16a == '\x01') {
                uVar5 = recovered_1000a7f0(in_ECX,(int)pcVar7,local_18,local_28,local_26,
                                           (int)local_169,local_e9,(int)local_36a,local_14,0x50000,
                                           &local_1c,param_7,param_8,(undefined *)0x0,0);
                cVar4 = (char)uVar5;
              }
              else {
                snprintf(local_96a,0x600,(char *)((uintptr_t)pf_module_state+0x166fU),local_e9,local_169,local_36a);
                ptr = local_14;
                uVar5 = recovered_1000ac00((int)pcVar7,local_18,local_28,local_26,local_96a,local_14
                                           ,0x50000,&local_1c,param_7,param_8,(undefined *)0x0,0);
                cVar4 = (char)uVar5;
              }
              if (cVar4 == '\0') {
                uVar5 = 0;
              }
              else {
                pcVar7 = (char *)recovered_1000ae70((int)ptr);
                if (pcVar7 == (char *)0x0) {
                  snprintf(param_7,param_8,(char *)((uintptr_t)pf_module_state+0x16f7U));
                  uVar5 = 0;
                }
                else {
                  n = local_1c - ((int)pcVar7 - (int)ptr);
                  if (local_1c < (uint)((int)pcVar7 - (int)ptr) || n == 0) {
                    n = strlen(pcVar7);
                  }
                  uVar5 = recovered_1000aec0(local_14);
                  if ((char)uVar5 == '\0') {
                    if (param_4 <= n) {
                      n = param_4 - 1;
                    }
                    memcpy(param_3,pcVar7,n);
                    param_3[n] = 0;
                    uVar5 = CONCAT31((int3)((uint)pcVar7 >> 8),1);
                    if (param_5 != (ulong *)0x0) {
                      *param_5 = n;
                    }
                  }
                  else {
                    local_20 = 0;
                    uVar5 = recovered_1000b0e0((int)pcVar7,n,(int)param_3,param_4 - 1,
                                               (int *)&local_20,param_7,param_8);
                    if (((char)uVar5 != '\0') && (param_3[local_20] = 0, param_5 != (ulong *)0x0)) {
                      *param_5 = local_20;
                    }
                  }
                  ptr = local_14;
                  if (param_6 != (undefined1 *)0x0) {
                    recovered_1000b320((char *)local_14,param_6);
                  }
                }
              }
              iVar1 = Ram00006800;
              if (iVar1 != 0x50414d57) {
                return uVar5;
              }
              iVar1 = Ram00006804;
              if (iVar1 == 0) {
                return uVar5;
              }
              uVar2 = Ram00006808;
              if (uVar2 < 0xc) {
                return uVar5;
              }
              uVar2 = Ram00006808;
              if (uVar2 < 0x54) {
                return uVar5;
              }
              pcVar3 = (code *)UINT_00006850;
              if (pcVar3 == (code *)0x0) {
                return uVar5;
              }
              (*pcVar3)(ptr);
              return uVar5;
            }
            snprintf(param_7,param_8,(char *)((uintptr_t)pf_module_state+0x1661U));
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
#undef local_96a
#undef local_36a
#undef local_16a
#undef local_169
#undef local_e9
#undef local_28
#undef local_26
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097b0
 */

undefined4 recovered_100097b0(byte *in_ECX,undefined1 *in_EDX,char *param_3,ulong param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined2 uVar2;
  ulong n;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;

  if (in_EDX == (undefined1 *)0x0 || in_ECX == (byte *)0x0) {
    return 0;
  }
  memset(in_EDX,0,0x144);
  bVar1 = *in_ECX;
  if (bVar1 != 0) {
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if (bVar1 == 0x68) {
      bVar1 = in_ECX[1];
      if (bVar1 != 0) {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 != 0x74) || (bVar1 = in_ECX[2], bVar1 == 0)) goto code_r0x100098e5;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 != 0x74) || (bVar1 = in_ECX[3], bVar1 == 0)) goto code_r0x100098e5;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 != 0x70) || (bVar1 = in_ECX[4], bVar1 == 0)) goto code_r0x100098e5;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 != 0x73) || (bVar1 = in_ECX[5], bVar1 == 0)) goto code_r0x100098e5;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 != 0x3a) || (bVar1 = in_ECX[6], bVar1 == 0)) goto code_r0x100098e5;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 != 0x2f) || (bVar1 = in_ECX[7], bVar1 == 0)) goto code_r0x100098e5;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if (bVar1 != 0x2f) goto code_r0x100098e5;
        pbVar5 = in_ECX + 8;
        *in_EDX = 1;
        uVar2 = 0x1bb;
LAB_10009998:
        *(undefined2 *)(in_EDX + 0x142) = uVar2;
        n = 0;
        while( true ) {
          bVar1 = pbVar5[n];
          uVar3 = bVar1 - 0x23;
          if (((uVar3 < 0x1d) && ((0x10801001U >> (uVar3 & 0x1f) & 1) != 0)) || (bVar1 == 0)) break;
          if (bVar1 < 0x21) goto LAB_10009a02;
          n = n + 1;
        }
        if (0xffffff80 < n - 0x80) {
          memcpy(in_EDX + 1,pbVar5,n);
          in_EDX[n + 1] = 0;
          bVar1 = pbVar5[n];
          if (bVar1 != 0x3a) {
            pbVar5 = pbVar5 + n;
            goto LAB_10009a6c;
          }
          pbVar5 = pbVar5 + n + 1;
          uVar3 = 0;
          goto LAB_10009a3b;
        }
LAB_10009a02:
        pcVar6 = (char *)((uintptr_t)pf_module_state+0x172eU);
        goto LAB_100099e1;
      }
code_r0x100098e5:
      bVar1 = in_ECX[1];
      if (bVar1 != 0) {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 == 0x74) && (bVar1 = in_ECX[2], bVar1 != 0)) {
          if ((byte)(bVar1 + 0xbf) < 0x1a) {
            bVar1 = bVar1 | 0x20;
          }
          if ((bVar1 == 0x74) && (bVar1 = in_ECX[3], bVar1 != 0)) {
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar1 = bVar1 | 0x20;
            }
            if ((bVar1 == 0x70) && (bVar1 = in_ECX[4], bVar1 != 0)) {
              if ((byte)(bVar1 + 0xbf) < 0x1a) {
                bVar1 = bVar1 | 0x20;
              }
              if ((bVar1 == 0x3a) && (bVar1 = in_ECX[5], bVar1 != 0)) {
                if ((byte)(bVar1 + 0xbf) < 0x1a) {
                  bVar1 = bVar1 | 0x20;
                }
                if ((bVar1 == 0x2f) && (bVar1 = in_ECX[6], bVar1 != 0)) {
                  if ((byte)(bVar1 + 0xbf) < 0x1a) {
                    bVar1 = bVar1 | 0x20;
                  }
                  if (bVar1 == 0x2f) {
                    pbVar5 = in_ECX + 7;
                    uVar2 = 0x50;
                    goto LAB_10009998;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar6 = (char *)((uintptr_t)pf_module_state+0x1715U);
LAB_100099e1:
  snprintf(param_3,param_4,pcVar6);
  return 0;
  while( true ) {
    uVar3 = (*pbVar5 - 0x30U) + uVar3 * 10;
    pbVar5 = pbVar5 + 1;
    if (0xffff < uVar3) break;
LAB_10009a3b:
    if (9 < (byte)(*pbVar5 - 0x30U)) {
      if (uVar3 != 0) {
        *(short *)(in_EDX + 0x142) = (short)uVar3;
        bVar1 = *pbVar5;
LAB_10009a6c:
        if (bVar1 < 0x2f) {
          if (bVar1 == 0) {
            pbVar5 = (byte *)((uintptr_t)pf_module_state+0x1627U);
            goto LAB_10009ac3;
          }
          if (bVar1 == 0x23) goto LAB_10009aa1;
        }
        else {
          if (bVar1 == 0x2f) {
LAB_10009ac3:
            pcVar6 = (char *)((uintptr_t)pf_module_state+0x154dU);
LAB_10009ac8:
            iVar4 = snprintf(in_EDX + 0x81,0xc0,pcVar6,pbVar5);
            return CONCAT31((int3)((uint)iVar4 >> 8),1);
          }
          if (bVar1 == 0x3f) {
LAB_10009aa1:
            pcVar6 = (char *)((uintptr_t)pf_module_state+0x1750U);
            goto LAB_10009ac8;
          }
        }
        pcVar6 = (char *)((uintptr_t)pf_module_state+0x1754U);
        goto LAB_100099e1;
      }
      break;
    }
  }
  pcVar6 = (char *)((uintptr_t)pf_module_state+0x173fU);
  goto LAB_100099e1;
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
#undef UINT_00006924
#define UINT_00006924 (*(uint *)(0x6924U))
#define local_e8 (*(uint *)(frame + 24))
#define local_e4 (*(uint *)(frame + 28))
#define local_e0 (*(int *)(frame + 32))
#define local_dc (*(int *)(frame + 36))
#define local_d8 (*(undefined4 *)(frame + 40))
#define local_d4 (*(char *)(frame + 44))
#define local_d3 (*(char *)(frame + 45))
#define local_28 (*(uint *)(frame + 216))
#define local_24 (*(uint *)(frame + 220))
#define local_20 (*(int *)(frame + 224))
#define local_1c (*(int *)(frame + 228))
#define local_18 (*(uint *)(frame + 232))
#define local_14 (*(char * *)(frame + 236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ae0
 */

undefined4 recovered_10009ae0(char *in_ECX,char *in_EDX,ulong param_3)

{
  unsigned char frame[288] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  char *format;

  if (in_ECX == (char *)0x0) {
    return 0;
  }
  local_14 = in_ECX;
  memset(&local_e8,0,0xc0);
  iVar4 = Ram00006800;
  format = (char *)((uintptr_t)pf_module_state+0x1765U);
  if (((((((iVar4 != 0x50414d57) || (iVar4 = Ram00006804, iVar4 == 0)) ||
         (uVar3 = Ram00006808, uVar3 < 0xc)) ||
        ((uVar3 = Ram00006808, uVar3 < 0x128 ||
         (pcVar1 = (code *)UINT_00006924, pcVar1 == (code *)0x0)))) ||
       ((uVar3 = (*pcVar1)(&local_e8), uVar3 == 0 ||
        (((local_e4 & 1) == 0 || (format = (char *)((uintptr_t)pf_module_state+0x177aU), (local_e4 & 4) == 0)))))) ||
      (format = (char *)((uintptr_t)pf_module_state+0x179bU), (local_e4 & 2) == 0)) ||
     (((((char)local_d8 == '\0' && (PF_PART1(local_d8, 1) == '\0')) && (PF_PART1(local_d8, 2) == '\0')) &&
      (((PF_PART1(local_d8, 3) == '\0' && (local_d4 == '\0')) &&
       (format = (char *)((uintptr_t)pf_module_state+0x17b1U), local_d3 == '\0')))))) goto LAB_10009bbb;
  if ((*local_14 == '\x01') && (iVar4 = memcmp(local_14 + 2,&local_d8,6), iVar4 != 0)) {
    memset(local_14,0,0xec);
  }
  memcpy(local_14 + 0x2c,&local_e8,0xc0);
  pvVar5 = memcpy(local_14 + 2,&local_d8,6);
  if (*local_14 != '\0') {
    return CONCAT31((int3)((uint)pvVar5 >> 8),1);
  }
  memset(&local_e8,0,0x14);
  memset(&local_28,0,0x14);
  local_14[1] = '\x01';
  iVar4 = *(int *)(local_14 + 0x28);
  uVar3 = 0x474c6142;
  if (iVar4 != 0) {
    uVar3 = iVar4 + 0x1fff + (uint)(iVar4 == -0x1fff);
  }
  *(uint *)(local_14 + 0x28) = uVar3;
  *(uint *)(local_14 + 0x1c) =
       ((uint)(byte)local_14[7] |
       (uint)(byte)local_14[6] << 8 |
       (uint)(byte)local_14[5] << 0x10 | (uint)(byte)local_14[2] << 0x18) ^ uVar3;
  bVar2 = recovered_1000b470((int)local_14,1,0,0);
  if (!bVar2) {
LAB_10009e45:
    format = (char *)((uintptr_t)pf_module_state+0x17caU);
    goto LAB_10009bbb;
  }
  uVar6 = recovered_1000b610((int)local_14,2,&local_e8);
  if ((char)uVar6 == '\0') {
    bVar2 = recovered_1000b470((int)local_14,1,0,0);
    if (!bVar2) goto LAB_10009e45;
    uVar6 = recovered_1000b610((int)local_14,2,&local_e8);
    if ((char)uVar6 == '\0') {
      bVar2 = recovered_1000b470((int)local_14,1,0,0);
      if (!bVar2) goto LAB_10009e45;
      recovered_1000b610((int)local_14,2,&local_e8);
    }
  }
  if (local_e8 == 0) {
    format = (char *)((uintptr_t)pf_module_state+0x17e4U);
    goto LAB_10009bbb;
  }
  bVar2 = recovered_1000b470((int)local_14,3,local_e8,local_d8);
  if (bVar2) {
    uVar6 = recovered_1000b610((int)local_14,5,&local_28);
    if ((char)uVar6 == '\0') {
      bVar2 = recovered_1000b470((int)local_14,3,local_e8,local_d8);
      if (!bVar2) goto LAB_10009e52;
      recovered_1000b610((int)local_14,5,&local_28);
    }
    if (local_28 != 0) {
      *(uint *)(local_14 + 8) = local_28;
      if (local_24 == 0) {
        local_24 = local_e4;
      }
      *(uint *)(local_14 + 0xc) = local_24;
      if (local_20 == 0) {
        local_20 = local_e0;
      }
      *(int *)(local_14 + 0x10) = local_20;
      if (local_1c == 0) {
        local_1c = local_dc;
      }
      *(int *)(local_14 + 0x14) = local_1c;
      if (local_18 == 0) {
        local_18 = local_d8;
      }
      *(uint *)(local_14 + 0x18) = local_18;
      *local_14 = '\x01';
      return CONCAT31((int3)(local_18 >> 8),1);
    }
    format = (char *)((uintptr_t)pf_module_state+0x1810U);
  }
  else {
LAB_10009e52:
    format = (char *)((uintptr_t)pf_module_state+0x17f7U);
  }
LAB_10009bbb:
  snprintf(in_EDX,param_3,format);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006924
#undef local_e8
#undef local_e4
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_d3
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e80
 */

undefined4 recovered_10009e80(char *in_ECX,uint *in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  if (in_EDX == (uint *)0x0 || in_ECX == (char *)0x0) {
    return 0;
  }
  bVar5 = *in_ECX - 0x30;
  uVar6 = CONCAT11(*in_ECX,bVar5);
  uVar8 = 0;
  if (9 < bVar5) {
    return 0;
  }
  pcVar4 = in_ECX + 4;
  do {
    pcVar3 = pcVar4;
    uVar8 = ((uVar6 >> 8) - 0x30) + uVar8 * 10;
    if (0xff < uVar8) {
      return 0;
    }
    cVar1 = pcVar3[-3];
    bVar5 = (byte)uVar6;
    uVar6 = CONCAT11(cVar1,bVar5);
    pcVar4 = pcVar3 + 1;
  } while ((byte)(cVar1 - 0x30U) < 10);
  if (cVar1 == '.' && bVar5 < 10) {
    bVar5 = pcVar3[-2] - 0x30;
    uVar6 = CONCAT11(pcVar3[-2],bVar5);
    uVar9 = 0;
    if (9 < bVar5) {
      return 0;
    }
    do {
      pcVar3 = pcVar4;
      uVar9 = ((uVar6 >> 8) - 0x30) + uVar9 * 10;
      if (0xff < uVar9) {
        return 0;
      }
      cVar1 = pcVar3[-2];
      bVar5 = (byte)uVar6;
      uVar6 = CONCAT11(cVar1,bVar5);
      pcVar4 = pcVar3 + 1;
    } while ((byte)(cVar1 - 0x30U) < 10);
    if (cVar1 == '.' && bVar5 < 10) {
      bVar5 = pcVar3[-1] - 0x30;
      uVar7 = (uint)CONCAT11(bVar5,pcVar3[-1]);
      local_18 = 0;
      if (9 < bVar5) {
        return 0;
      }
      do {
        pcVar3 = pcVar4;
        local_18 = ((uVar7 & 0xff) - 0x30) + local_18 * 10;
        if (0xff < local_18) {
          return 0;
        }
        bVar2 = pcVar3[-1];
        uVar7 = (uint)bVar2;
        pcVar4 = pcVar3 + 1;
      } while ((byte)(bVar2 - 0x30U) < 10);
      if (bVar2 == 0x2e && bVar5 < 10) {
        bVar5 = *pcVar3 - 0x30;
        uVar6 = CONCAT11(bVar5,*pcVar3);
        uVar7 = 0;
        if (9 < bVar5) {
          return 0;
        }
        do {
          uVar7 = ((uVar6 & 0xff) - 0x30) + uVar7 * 10;
          if (0xff < uVar7) {
            return 0;
          }
          cVar1 = *pcVar4;
          uVar6 = CONCAT11(cVar1 - 0x30U,cVar1);
          pcVar4 = pcVar4 + 1;
        } while ((byte)(cVar1 - 0x30U) < 10);
        if (cVar1 == '\0' && bVar5 < 10) {
          *in_EDX = uVar9 * 0x10000 | uVar8 * 0x1000000 | local_18 * 0x100 | uVar7;
          return CONCAT31((int3)(uVar7 >> 8),1);
        }
      }
    }
  }
  return 0;
}

#undef local_18

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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#define auStack_a6c (*(ushort (*)[1007])(frame + 84))
#define local_a8e (*(undefined1 (*)[12])(frame + 50))
#define local_a82 (*(ushort *)(frame + 62))
#define local_a80 (*(byte (*)[2])(frame + 64))
#define local_a7e (*(ushort (*)[3])(frame + 66))
#define local_a77 (*(char *)(frame + 73))
#define local_a74 (*(uint *)(frame + 76))
#define local_a70 (*(uint *)(frame + 80))
#define local_28e (*(char (*)[512])(frame + 2098))
#define local_8e (*(char (*)[96])(frame + 2610))
#define local_2e (*(char (*)[6])(frame + 2706))
#define local_28 (*(int *)(frame + 2712))
#define local_24 (*(uint *)(frame + 2716))
#define local_20 (*(uint *)(frame + 2720))
#define local_1c (*(uint *)(frame + 2724))
#define local_18 (*(int *)(frame + 2728))
#define local_14 (*(byte * *)(frame + 2732))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a010
 */

undefined4 recovered_1000a010(int in_ECX,byte *in_EDX,uint *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2784] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;

  if (param_3 == (uint *)0x0 || (in_EDX == (byte *)0x0 || in_ECX == 0)) {
    return 0;
  }
  if (*(uint *)(in_ECX + 0x14) == 0) {
    pcVar13 = (char *)((uintptr_t)pf_module_state+0x1821U);
  }
  else {
    local_14 = in_EDX;
    uVar6 = recovered_1000a460(in_ECX,*(uint *)(in_ECX + 0x14),local_2e,param_4,param_5);
    if ((char)uVar6 == '\0') {
      return 0;
    }
    memset(local_28e,0,0x200);
    uVar7 = 0x474c;
    if (*(ushort *)(in_ECX + 0x22) != 0) {
      uVar7 = (uint)*(ushort *)(in_ECX + 0x22);
    }
    uVar9 = (short)uVar7 + 1;
    local_20 = (uint)uVar9;
    if (uVar9 == 0) {
      local_20 = uVar7 + 2;
    }
    *(short *)(in_ECX + 0x22) = (short)local_20;
    local_28e[0] = (char)(local_20 >> 8);
    local_28e[1] = (char)local_20;
    local_28e[2] = '\x01';
    local_28e[3] = '\0';
    local_28e[4] = '\0';
    local_28e[5] = '\x01';
    bVar8 = *local_14;
    local_18 = in_ECX;
    if (bVar8 == 0) {
      local_28e[0xc] = 0;
      iVar11 = 0xd;
    }
    else {
      uVar7 = 0xc;
      do {
        iVar11 = 0;
        pbVar12 = local_14;
        while ((bVar8 != 0 && (uVar10 = (uint)bVar8, uVar10 != 0x2e))) {
          if ((bVar8 < 0x21) ||
             (((uVar10 - 0x23 < 0x1d && ((0x10801001U >> (uVar10 - 0x23 & 0x1f) & 1) != 0)) ||
              (uVar10 == 0x5c)))) goto LAB_1000a424;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 1;
          iVar11 = iVar11 + -1;
          bVar8 = *pbVar1;
        }
        if (iVar11 == 0) {
          if (bVar8 != 0) goto LAB_1000a424;
          goto LAB_1000a40e;
        }
        if (0x3e < (uint)-iVar11 && iVar11 != -0x3f) goto LAB_1000a424;
        uVar10 = (uVar7 + 1) - iVar11;
        if (0x1ff < uVar10) goto LAB_1000a424;
        local_28e[uVar7] = -(char)iVar11;
        local_28 = uVar7 + 1;
        local_1c = uVar7;
        memcpy(local_28e + uVar7 + 1,local_14,-iVar11);
        local_14 = pbVar12 + (*pbVar12 == 0x2e);
        bVar8 = pbVar12[*pbVar12 == 0x2e];
        uVar7 = uVar10;
      } while (bVar8 != 0);
      uVar7 = (local_1c - iVar11) + 1;
LAB_1000a40e:
      local_28e[uVar7] = '\0';
      if (uVar7 - 0x1fc < 0xfffffdff) {
LAB_1000a424:
        pcVar13 = (char *)((uintptr_t)pf_module_state+0x1838U);
        goto LAB_1000a432;
      }
      iVar11 = uVar7 + 1;
    }
    pcVar13 = local_28e + iVar11;
    pcVar13[0] = '\0';
    pcVar13[1] = '\x01';
    pcVar13[2] = '\0';
    pcVar13[3] = '\x01';
    uVar9 = (ushort)local_20;
    bVar4 = recovered_1000ba20(local_18,local_2e,*(uint *)(local_18 + 8),*(uint *)(local_18 + 0x14),
                               uVar9 | 0xc000,0x35,local_28e,iVar11 + 4U & 0xffff);
    if (bVar4) {
      iVar11 = 0x1450;
      do {
        local_8e[0] = '\0';
        local_24 = 0;
        iVar2 = Ram00006800;
        if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
            ((uVar7 = Ram00006808, 0xb < uVar7 &&
             ((uVar7 = Ram00006808, 299 < uVar7 &&
              (pcVar3 = (code *)UINT_00006928, pcVar3 != (code *)0x0)))))) &&
           (uVar7 = (*pcVar3)(local_a8e,0x800,&local_24), 0xd < local_24 && uVar7 != 0)) {
          if (((((0x29 < local_24) && ((ushort)(local_a82 << 8 | local_a82 >> 8) == 0x800)) &&
               ((local_a80[0] & 0xf0) == 0x40)) &&
              ((local_a77 == '\x11' &&
               ((local_a74 >> 0x18 | (local_a74 & 0xff0000) >> 8 | (local_a74 & 0xff00) << 8 |
                local_a74 << 0x18) == *(uint *)(local_18 + 0x14))))) &&
             (((local_a70 >> 0x18 | (local_a70 & 0xff0000) >> 8 | (local_a70 & 0xff00) << 8 |
               local_a70 << 0x18) == *(uint *)(local_18 + 8) && (0x13 < (byte)(local_a80[0] << 2))))
             ) {
            uVar10 = (uint)(byte)(local_a80[0] << 2);
            uVar7 = (uint)(ushort)(local_a7e[0] << 8 | local_a7e[0] >> 8);
            if ((((uVar10 + 8 <= uVar7) && (uVar7 + 0xe <= local_24)) &&
                (((ushort)(*(ushort *)(local_a80 + uVar10) << 8 |
                          *(ushort *)(local_a80 + uVar10) >> 8) == 0x35 &&
                 ((((ushort)(*(ushort *)((int)local_a7e + uVar10) << 8 |
                            *(ushort *)((int)local_a7e + uVar10) >> 8) == (uVar9 | 0xc000) &&
                   (uVar5 = *(ushort *)((int)local_a7e + uVar10 + 2),
                   uVar5 = uVar5 << 8 | uVar5 >> 8, 7 < uVar5)) && (uVar10 + uVar5 <= uVar7)))))) &&
               (uVar6 = recovered_1000bcb0((ushort *)((int)local_a7e + uVar10 + 6),uVar5 - 8,
                                           (ushort)local_20,param_3,local_8e), (char)uVar6 != '\0'))
            {
              return CONCAT31((int3)((uint)uVar6 >> 8),1);
            }
          }
        }
        else {
          iVar2 = Ram00006800;
          if (((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
             ((uVar7 = Ram00006808, 0xb < uVar7 &&
              ((uVar7 = Ram00006808, 0x9f < uVar7 &&
               (pcVar3 = (code *)UINT_0000689c, pcVar3 != (code *)0x0)))))) {
            (*pcVar3)();
          }
        }
        if (local_8e[0] != '\0') {
          pcVar13 = (char *)((uintptr_t)pf_module_state+0x154dU);
          goto LAB_1000a432;
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      pcVar13 = (char *)((uintptr_t)pf_module_state+0x1859U);
    }
    else {
      pcVar13 = (char *)((uintptr_t)pf_module_state+0x1849U);
    }
  }
LAB_1000a432:
  snprintf(param_4,param_5,pcVar13);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef UINT_00006928
#undef auStack_a6c
#undef local_a8e
#undef local_a82
#undef local_a80
#undef local_a7e
#undef local_a77
#undef local_a74
#undef local_a70
#undef local_28e
#undef local_8e
#undef local_2e
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#undef UINT_0000692c
#define UINT_0000692c (*(uint *)(0x692cU))
#define local_60 (*(uint *)(frame + 2096))
#define local_5a (*(undefined1 (*)[6])(frame + 2102))
#define local_54 (*(undefined4 *)(frame + 2108))
#define local_50 (*(undefined4 *)(frame + 2112))
#define local_4c (*(undefined2 *)(frame + 2116))
#define format (*(char * *)(frame + 28))
#define local_4a (*(undefined1 (*)[6])(frame + 2118))
#define local_44 (*(uint *)(frame + 2124))
#define local_40 (*(undefined1 (*)[6])(frame + 2128))
#define local_3a (*(undefined1 *)(frame + 2134))
#define local_39 (*(undefined1 *)(frame + 2135))
#define local_38 (*(undefined1 *)(frame + 2136))
#define local_37 (*(undefined1 *)(frame + 2137))
#define local_24 (*(void * *)(frame + 2156))
#define local_20 (*(uint *)(frame + 2160))
#define local_1c (*(uint *)(frame + 2164))
#define local_18 (*(uint *)(frame + 2168))
#define local_14 (*(int *)(frame + 2172))
#define local_860 (*(undefined1 (*)[12])(frame + 48))
#define local_854 (*(ushort *)(frame + 60))
#define local_852 (*(ushort *)(frame + 62))
#define local_850 (*(ushort *)(frame + 64))
#define local_84e (*(char *)(frame + 66))
#define local_84d (*(char *)(frame + 67))
#define local_84c (*(ushort *)(frame + 68))
#define local_84a (*(undefined1 (*)[6])(frame + 70))
#define local_844 (*(uint *)(frame + 76))
#define local_83a (*(uint *)(frame + 86))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a460
 */

undefined4 recovered_1000a460(int in_ECX,uint in_EDX,char *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2224] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  void *src;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  if (in_ECX == 0 || in_EDX == 0) {
    format = (char *)((uintptr_t)pf_module_state+0x18bbU);
  }
  else {
    if (in_EDX == 0xffffffff) {
      in_EDX = 0xffffffff;
    }
    else if (((*(uint *)(in_ECX + 0xc) == 0) ||
             (((*(uint *)(in_ECX + 8) ^ in_EDX) & *(uint *)(in_ECX + 0xc)) != 0)) &&
            (in_EDX = *(uint *)(in_ECX + 0x10), in_EDX == 0)) {
      format = (char *)((uintptr_t)pf_module_state+0x18d4U);
      goto LAB_1000a7ce;
    }
    local_14 = in_ECX;
    if (in_EDX == *(uint *)(in_ECX + 8)) {
      uVar4 = CONCAT31((int3)((uint)in_ECX >> 8),1);
      if (param_3 == (char *)0x0) {
        return uVar4;
      }
      memcpy(param_3,(void *)(in_ECX + 2),6);
      return uVar4;
    }
    local_24 = (void *)(in_ECX + 2);
    local_20 = in_EDX >> 0x18;
    local_1c = in_EDX >> 0x10;
    iVar6 = 0;
    local_18 = in_EDX;
    do {
      iVar5 = local_14;
      memset(&local_60,0,0x3c);
      memcpy(&local_60,(void *)((uintptr_t)pf_module_state+0x143fU),6);
      src = local_24;
      memcpy(local_5a,local_24,6);
      local_54 = 0x1000608;
      local_50 = 0x4060008;
      local_4c = 0x100;
      memcpy(local_4a,src,6);
      uVar3 = *(uint *)(iVar5 + 8);
      local_44 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      memcpy(local_40,(void *)((uintptr_t)pf_module_state+0x1445U),6);
      local_3a = (undefined1)local_20;
      local_39 = (undefined1)local_1c;
      local_38 = (undefined1)(local_18 >> 8);
      local_37 = (undefined1)local_18;
      iVar5 = Ram00006800;
      if ((((iVar5 != 0x50414d57) || (iVar5 = Ram00006804, iVar5 == 0)) ||
          ((uVar3 = Ram00006808, uVar3 < 0xc ||
           ((uVar3 = Ram00006808, uVar3 < 0x130 ||
            (pcVar2 = (code *)UINT_0000692c, pcVar2 == (code *)0x0)))))) ||
         (uVar3 = (*pcVar2)(&local_60,0x3c), uVar3 == 0)) {
        format = (char *)((uintptr_t)pf_module_state+0x189fU);
        goto LAB_1000a7ce;
      }
      iVar5 = 900;
      do {
        local_60 = 0;
        iVar1 = Ram00006800;
        if (((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
             (uVar3 = Ram00006808, 0xb < uVar3)) &&
            ((uVar3 = Ram00006808, 299 < uVar3 &&
             (pcVar2 = (code *)UINT_00006928, pcVar2 != (code *)0x0)))) &&
           (uVar3 = (*pcVar2)(local_860,0x800,&local_60), 0xd < local_60 && uVar3 != 0)) {
          if (((((0x29 < local_60 && param_3 != (char *)0x0) &&
                ((ushort)(local_854 << 8 | local_854 >> 8) == 0x806)) &&
               ((ushort)(local_852 << 8 | local_852 >> 8) == 1)) &&
              ((((ushort)(local_850 << 8 | local_850 >> 8) == 0x800 && (local_84e == '\x06')) &&
               ((local_84d == '\x04' &&
                (((ushort)(local_84c << 8 | local_84c >> 8) == 2 &&
                 ((local_844 >> 0x18 | (local_844 & 0xff0000) >> 8 | (local_844 & 0xff00) << 8 |
                  local_844 << 0x18) == local_18)))))))) &&
             ((local_83a >> 0x18 | (local_83a & 0xff0000) >> 8 | (local_83a & 0xff00) << 8 |
              local_83a << 0x18) == *(uint *)(local_14 + 8))) {
            memcpy(param_3,local_84a,6);
            uVar4 = CONCAT31((int3)((uint)param_3 >> 8),1);
            if (*param_3 != '\0') {
              return uVar4;
            }
            if (param_3[1] != '\0') {
              return uVar4;
            }
            if (param_3[2] != '\0') {
              return uVar4;
            }
            if (param_3[3] != '\0') {
              return uVar4;
            }
            if (param_3[4] != '\0') {
              return uVar4;
            }
            if (param_3[5] != '\0') {
              return uVar4;
            }
          }
        }
        else {
          iVar1 = Ram00006800;
          if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
             ((uVar3 = Ram00006808, 0xb < uVar3 &&
              ((uVar3 = Ram00006808, 0x9f < uVar3 &&
               (pcVar2 = (code *)UINT_0000689c, pcVar2 != (code *)0x0)))))) {
            (*pcVar2)();
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    format = (char *)((uintptr_t)pf_module_state+0x18afU);
  }
LAB_1000a7ce:
  snprintf(param_4,param_5,format);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef UINT_00006928
#undef UINT_0000692c
#undef local_60
#undef local_5a
#undef local_54
#undef local_50
#undef local_4c
#undef format
#undef local_4a
#undef local_44
#undef local_40
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_860
#undef local_854
#undef local_852
#undef local_850
#undef local_84e
#undef local_84d
#undef local_84c
#undef local_84a
#undef local_844
#undef local_83a

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
#define local_48b0 (*(char (*)[1536])(frame + 16))
#define local_42b0 (*(undefined1 (*)[504])(frame + 1552))
#define local_40b8 (*(int *)(frame + 2056))
#define local_40b4 (*(uint *)(frame + 2060))
#define local_40b0 (*(undefined2 *)(frame + 2064))
#define local_40ae (*(undefined2 *)(frame + 2066))
#define local_40ac (*(int *)(frame + 2068))
#define local_40a8 (*(undefined4 *)(frame + 2072))
#define local_40a4 (*(undefined1 (*)[16394])(frame + 2076))
#define local_9a (*(char *)(frame + 18470))
#define local_98 (*(char (*)[96])(frame + 18472))
#define local_38 (*(undefined4 * *)(frame + 18568))
#define local_34 (*(undefined4 *)(frame + 18572))
#define local_30 (*(undefined4 *)(frame + 18576))
#define local_2c (*(undefined4 *)(frame + 18580))
#define local_28 (*(undefined4 *)(frame + 18584))
#define local_24 (*(undefined4 *)(frame + 18588))
#define local_20 (*(int * *)(frame + 18592))
#define local_1c (*(undefined1 *)(frame + 18596))
#define local_18 (*(ulong *)(frame + 18600))
#define local_14 (*(void * *)(frame + 18604))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7f0
 */

undefined4
recovered_1000a7f0(undefined4 in_ECX,int in_EDX,uint param_3,ushort param_4,void *param_5,
                  int param_6,char *param_7,int param_8,undefined1 *param_9,uint param_10,
                  uint *param_11,char *param_12,ulong param_13,undefined *param_14,
                  undefined4 param_15)

{
  unsigned char frame[18656] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  void *data;
  uint uVar5;
  uint3 extraout_var;
  char *pcVar6;
  uint uVar7;

  if (param_11 != (uint *)0x0) {
    *param_11 = 0;
  }
  if (param_6 != 0 && (param_5 != (void *)0x0 && in_EDX != 0)) {
    *param_9 = 0;
    local_14 = (void *)in_ECX;
    memset(&local_40b8,0,0x4020);
    uVar2 = recovered_1000bec0(&local_40b8,in_EDX,param_3,param_4,param_5,param_12,param_13);
    if ((char)uVar2 != '\0') {
      memset(&local_24,0,0xc);
      local_24 = local_14;
      local_1c = 0;
      local_20 = &local_40b8;
      memset(&local_38,0,0x14);
      local_34 = 0x180c1a0;
      local_30 = 0x180c270;
      local_2c = 0x180c2b0;
      local_28 = 0x180c410;
      local_38 = &local_24;
      winter_tls_client_init(local_42b0,&local_38,(char *)param_6);
      iVar3 = winter_tls_client_handshake(local_42b0,param_12,param_13);
      if ((char)iVar3 != '\0') {
        if (param_7 == (char *)0x0) {
          pcVar6 = (char *)((uintptr_t)pf_module_state+0x1627U);
        }
        else {
          pcVar6 = (char *)((uintptr_t)pf_module_state+0x1627U);
          if (*param_7 != '\0') {
            pcVar6 = param_7;
          }
        }
        iVar3 = ((uintptr_t)pf_module_state+0x1485U);
        if (param_8 != 0) {
          iVar3 = param_8;
        }
        snprintf(local_48b0,0x600,(char *)((uintptr_t)pf_module_state+0x166fU),pcVar6,param_6,iVar3);
        uVar4 = strlen(local_48b0);
        iVar3 = winter_tls_write(local_42b0,local_48b0,uVar4,param_12,param_13);
        if ((char)iVar3 != '\0') {
          iVar3 = Ram00006800;
          if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
              (uVar7 = Ram00006808, 0xb < uVar7)) &&
             (((uVar7 = Ram00006808, 0x4f < uVar7 &&
               (pcVar1 = (code *)UINT_0000684c, pcVar1 != (code *)0x0)) &&
              (data = (*pcVar1)(0x4100), data != (void *)0x0)))) {
            local_18 = 0;
            local_98[0] = '\0';
            uVar7 = 0;
            local_14 = data;
            iVar3 = winter_tls_read(local_42b0,data,0x4100,&local_18,local_98,0x60);
            if ((char)iVar3 != '\0') {
              uVar7 = 0;
              do {
                uVar4 = local_18;
                if (~uVar7 + param_10 <= local_18) {
                  uVar4 = ~uVar7 + param_10;
                }
                if (uVar4 != 0) {
                  memcpy(param_9 + uVar7,local_14,uVar4);
                  uVar7 = uVar7 + uVar4;
                  param_9[uVar7] = 0;
                  if (param_14 != (undefined *)0x0) {
                    (*(code *)param_14)(param_15,param_9,uVar7);
                  }
                }
                if (param_10 <= uVar7 + 1) goto LAB_1000ab25;
                local_18 = 0;
                local_98[0] = '\0';
                iVar3 = winter_tls_read(local_42b0,local_14,0x4100,&local_18,local_98,0x60);
              } while ((char)iVar3 != '\0');
            }
            if ((uVar7 == 0) && (local_98[0] != '\0')) {
              snprintf(param_12,param_13,(char *)((uintptr_t)pf_module_state+0x154dU),local_98);
              uVar7 = 0;
            }
LAB_1000ab25:
            uVar5 = Ram00006800;
            if ((((uVar5 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
                (uVar5 = Ram00006808, 0xb < uVar5)) && (uVar5 = Ram00006808, 0x53 < uVar5)) {
              pcVar1 = (code *)UINT_00006850;
              uVar5 = 0;
              if (pcVar1 != (code *)0x0) {
                uVar5 = (*pcVar1)(local_14);
              }
            }
            if (local_9a == '\x01') {
              recovered_1000c760(local_40b8,local_40a4,local_40b4,local_40ae,local_40b0,local_40ac,
                                 local_40a8,0x11,(void *)0x0,0);
              uVar5 = (uint)extraout_var << 8;
              local_40ac = local_40ac + 1;
              local_9a = '\0';
            }
            if (uVar7 != 0) {
              uVar2 = CONCAT31((int3)(uVar5 >> 8),1);
              if (param_11 == (uint *)0x0) {
                return uVar2;
              }
              *param_11 = uVar7;
              return uVar2;
            }
            if (param_12 == (char *)0x0) {
              return 0;
            }
            if (*param_12 == '\0') {
              snprintf(param_12,param_13,(char *)((uintptr_t)pf_module_state+0x1974U));
              return 0;
            }
            return 0;
          }
          snprintf(param_12,param_13,(char *)((uintptr_t)pf_module_state+0x1661U));
        }
      }
      if (local_9a == '\x01') {
        recovered_1000c760(local_40b8,local_40a4,local_40b4,local_40ae,local_40b0,local_40ac,
                           local_40a8,0x11,(void *)0x0,0);
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
#undef local_48b0
#undef local_42b0
#undef local_40b8
#undef local_40b4
#undef local_40b0
#undef local_40ae
#undef local_40ac
#undef local_40a8
#undef local_40a4
#undef local_9a
#undef local_98
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

#define format (*(char * *)(frame + 28))
#define local_5098 (*(undefined1 (*)[4096])(frame + 40))
#define local_4098 (*(int *)(frame + 4136))
#define local_4094 (*(uint *)(frame + 4140))
#define local_4090 (*(undefined2 *)(frame + 4144))
#define local_408e (*(undefined2 *)(frame + 4146))
#define local_408c (*(undefined4 *)(frame + 4148))
#define local_4088 (*(undefined4 *)(frame + 4152))
#define local_4084 (*(undefined1 (*)[6])(frame + 4156))
#define local_407e (*(undefined1 (*)[16384])(frame + 4162))
#define local_7e (*(ushort *)(frame + 20546))
#define local_7c (*(ushort *)(frame + 20548))
#define local_7a (*(char *)(frame + 20550))
#define local_79 (*(char *)(frame + 20551))
#define local_78 (*(char (*)[96])(frame + 20552))
#define local_18 (*(uint *)(frame + 20648))
#define local_14 (*(uint *)(frame + 20652))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac00
 */

undefined4
recovered_1000ac00(int in_ECX,uint in_EDX,ushort param_3,void *param_4,char *param_5,
                  undefined1 *param_6,uint param_7,uint *param_8,char *param_9,ulong param_10,
                  undefined *param_11,undefined4 param_12)

{
  unsigned char frame[20704] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ulong uVar4;
  void *pvVar5;
  uint uVar6;
  uint n;

  if (param_8 != (uint *)0x0) {
    *param_8 = 0;
  }
  if (param_5 == (char *)0x0 || (param_4 == (void *)0x0 || in_ECX == 0)) {
    return 0;
  }
  *param_6 = 0;
  memset(&local_4098,0,0x4020);
  uVar3 = recovered_1000bec0(&local_4098,in_ECX,in_EDX,param_3,param_4,param_9,param_10);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  uVar4 = strlen(param_5);
  if (uVar4 < 0x2001) {
    uVar3 = recovered_1000cf80(&local_4098,param_5,uVar4,param_9,param_10);
    if ((char)uVar3 != '\0') {
      local_14 = 0;
      uVar6 = 0;
      while ((local_78[0] = '\0', local_7e < local_7c ||
             (uVar3 = recovered_1000cb60(&local_4098,local_78,0x60), (char)uVar3 != '\0'))) {
        uVar2 = local_7c;
        uVar1 = local_7e;
        n = (uint)local_7c - (uint)local_7e;
        if (0xfff < n) {
          n = 0x1000;
        }
        local_18 = uVar6;
        memcpy(local_5098,local_407e + local_7e,n);
        uVar6 = local_18;
        local_7e = local_7e + (short)n;
        if (uVar2 == uVar1) break;
        if (~local_18 + param_7 <= n) {
          n = ~local_18 + param_7;
        }
        if (n != 0) {
          pvVar5 = memcpy(param_6 + local_18,local_5098,n);
          uVar6 = uVar6 + n;
          param_6[uVar6] = 0;
          local_14 = CONCAT31((int3)((uint)pvVar5 >> 8),1);
          if (param_11 != (undefined *)0x0) {
            (*(code *)param_11)(param_12,param_6,uVar6);
          }
        }
        if ((param_7 <= uVar6 + 1) || ((local_79 == '\x01' && (local_7c <= local_7e))))
        goto LAB_1000ae3b;
      }
      if (((local_14 & 1) == 0) && (local_78[0] != '\0')) {
        snprintf(param_9,param_10,(char *)((uintptr_t)pf_module_state+0x154dU),local_78);
      }
LAB_1000ae3b:
      if (param_8 != (uint *)0x0) {
        *param_8 = uVar6;
      }
      if ((local_14 & 1) != 0) {
        uVar3 = CONCAT31((int3)(uVar6 >> 8),1);
        if (local_7a != '\x01') {
          return uVar3;
        }
        goto LAB_1000add7;
      }
      format = (char *)((uintptr_t)pf_module_state+0x1aaeU);
      goto LAB_1000ac92;
    }
  }
  else {
    format = (char *)((uintptr_t)pf_module_state+0x1a97U);
LAB_1000ac92:
    snprintf(param_9,param_10,format);
  }
  uVar3 = 0;
  if (local_7a == '\0') {
    return 0;
  }
LAB_1000add7:
  recovered_1000c760(local_4098,local_4084,local_4094,local_408e,local_4090,local_408c,local_4088,
                     0x11,(void *)0x0,0);
  return uVar3;
}

#undef format
#undef local_5098
#undef local_4098
#undef local_4094
#undef local_4090
#undef local_408e
#undef local_408c
#undef local_4088
#undef local_4084
#undef local_407e
#undef local_7e
#undef local_7c
#undef local_7a
#undef local_79
#undef local_78
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ae70
 */

int recovered_1000ae70(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (in_ECX == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strstr((char *)in_ECX,(char *)((uintptr_t)pf_module_state+0x1ac4U));
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr((char *)in_ECX,(char *)((uintptr_t)pf_module_state+0x1ac9U));
      if (pcVar1 == (char *)0x0) {
        pcVar1 = (char *)0x0;
      }
      else {
        pcVar1 = pcVar1 + 2;
      }
    }
    else {
      pcVar1 = pcVar1 + 4;
    }
  }
  return (int)pcVar1;
}


#define local_dc (*(char (*)[192])(frame + 20))
#define local_1c (*(ulong *)(frame + 212))
#define local_18 (*(byte * *)(frame + 216))
#define local_12 (*(byte *)(frame + 222))
#define local_11 (*(byte *)(frame + 223))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aec0
 */

undefined4 recovered_1000aec0(byte *in_ECX)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar9;
  uint uVar8;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;

  if (in_ECX == (byte *)0x0) {
    pbVar12 = (byte *)0x0;
  }
  else {
    pcVar3 = strstr((char *)in_ECX,(char *)((uintptr_t)pf_module_state+0x1ac4U));
    if (pcVar3 == (char *)0x0) {
      pcVar3 = strstr((char *)in_ECX,(char *)((uintptr_t)pf_module_state+0x1ac9U));
      if (pcVar3 == (char *)0x0) {
        pbVar12 = (byte *)0x0;
      }
      else {
        pbVar12 = (byte *)(pcVar3 + 2);
      }
    }
    else {
      pbVar12 = (byte *)(pcVar3 + 4);
    }
  }
  local_1c = strlen((char *)((uintptr_t)pf_module_state+0x1accU));
  if (((local_1c != 0) && (uVar8 = (uint)*in_ECX, *in_ECX != 0)) &&
     (pbVar12 == (byte *)0x0 || in_ECX < pbVar12)) {
    do {
      uVar10 = 0;
      pbVar11 = in_ECX;
      while ((0xd < (byte)uVar8 || ((0x2401U >> (uVar8 & 0x1f) & 1) == 0))) {
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        uVar10 = uVar10 - 1;
        uVar8 = (uint)*pbVar1;
      }
      if (in_ECX < pbVar11) {
        uVar4 = local_1c;
        pbVar1 = in_ECX;
        do {
          if (*pbVar1 == 0x3a) {
            if (uVar4 == 0) {
              uVar4 = 0;
              goto LAB_1000afe0;
            }
            break;
          }
          uVar4 = uVar4 - 1;
          uVar10 = uVar10 + 1;
          pbVar1 = pbVar1 + 1;
        } while (uVar10 != 0);
      }
LAB_1000afa5:
      while (((char)uVar8 == '\n' || ((uVar8 & 0xff) == 0xd))) {
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
        uVar8 = (uint)*pbVar1;
      }
    } while (((uVar8 & 0xff) != 0) &&
            (in_ECX = pbVar11, pbVar12 == (byte *)0x0 || pbVar11 < pbVar12));
  }
  return 0;
LAB_1000afe0:
  local_11 = in_ECX[uVar4];
  if ((byte)(local_11 + 0xbf) < 0x1a) {
    local_11 = local_11 | 0x20;
  }
  local_12 = *(byte *)(uVar4 + ((uintptr_t)pf_module_state+0x1accU));
  if ((byte)(local_12 + 0xbf) < 0x1a) {
    local_12 = local_12 | 0x20;
  }
  uVar8 = (uint)CONCAT11(local_11,(char)uVar8);
  if (local_11 != local_12) goto LAB_1000afa5;
  uVar4 = uVar4 + 1;
  if (local_1c == uVar4) {
    uVar4 = ~uVar10;
    if (0xbe < (int)uVar4) {
      uVar4 = 0xbf;
    }
    pcVar3 = local_dc;
    local_18 = pbVar12;
    memcpy(pcVar3,pbVar1 + 1,uVar4);
    local_dc[uVar4] = '\0';
    uVar4 = strlen((char *)((uintptr_t)pf_module_state+0x1adeU));
    if (uVar4 == 0) {
      return 0;
    }
    if (local_dc[0] == '\0') {
      return 0;
    }
    goto LAB_1000b05b;
  }
  goto LAB_1000afe0;
LAB_1000b05b:
  uVar5 = 0;
  while (bVar7 = pcVar3[uVar5], bVar7 != 0) {
    if ((byte)(bVar7 + 0xbf) < 0x1a) {
      bVar7 = bVar7 | 0x20;
    }
    bVar9 = *(byte *)(uVar5 + ((uintptr_t)pf_module_state+0x1adeU));
    if ((byte)(bVar9 + 0xbf) < 0x1a) {
      bVar9 = bVar9 | 0x20;
    }
    if (bVar7 != bVar9) break;
    uVar5 = uVar5 + 1;
    if (uVar4 == uVar5) {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
  uVar6 = CONCAT31((int3)(uVar5 >> 8),uVar4 == uVar5);
  if (uVar4 == uVar5) {
    return uVar6;
  }
  pcVar2 = pcVar3 + 1;
  pcVar3 = pcVar3 + 1;
  if (*pcVar2 == '\0') {
    return uVar6;
  }
  goto LAB_1000b05b;
}

#undef local_dc
#undef local_1c
#undef local_18
#undef local_12
#undef local_11

#define format (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0e0
 */

undefined4
recovered_1000b0e0(int in_ECX,uint in_EDX,int param_3,int param_4,int *param_5,char *param_6,
                  ulong param_7)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;

  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  if (in_EDX == 0) {
LAB_1000b2c5:
    format = (char *)((uintptr_t)pf_module_state+0x1affU);
LAB_1000b2ea:
    snprintf(param_6,param_7,format);
    return 0;
  }
  iVar7 = 0;
  uVar2 = 0;
LAB_1000b120:
  iVar8 = 0;
  uVar6 = uVar2;
  while( true ) {
    uVar3 = uVar6 + 1;
    cVar1 = *(char *)(in_ECX + -1 + uVar3);
    if ((cVar1 != '\r') && (cVar1 != '\n')) break;
    iVar8 = iVar8 + 1;
    uVar6 = uVar3;
    if (in_EDX <= uVar3) goto LAB_1000b2d1;
  }
  if (uVar6 < in_EDX) {
    iVar5 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar6 = iVar5 - 0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000b2d1;
      uVar6 = iVar5 - 0x37;
    }
    if ((int)uVar6 < 0) goto LAB_1000b2d1;
    if (in_EDX != uVar3) {
      do {
        cVar1 = *(char *)(in_ECX + uVar3);
        iVar5 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar5 = iVar5 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar5 = iVar5 + -0x57;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000b203;
          iVar5 = iVar5 + -0x37;
        }
        if (iVar5 < 0) goto LAB_1000b203;
        uVar6 = uVar6 * 0x10 + iVar5;
        uVar3 = uVar3 + 1;
        iVar8 = iVar8 + 1;
        if (in_EDX == uVar3) break;
      } while( true );
    }
    goto LAB_1000b2dc;
  }
LAB_1000b2d1:
  format = (char *)((uintptr_t)pf_module_state+0x1ae6U);
  goto LAB_1000b2ea;
LAB_1000b203:
  if (uVar3 < in_EDX) {
    iVar5 = uVar2 + in_ECX;
    while (*(char *)(iVar5 + 1 + iVar8) != '\n') {
      iVar8 = iVar8 + 1;
      if ((in_EDX - 1) - uVar2 == iVar8) goto LAB_1000b2dc;
    }
    if (uVar6 == 0) {
      uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1);
      if (param_5 == (int *)0x0) {
        return uVar4;
      }
      *param_5 = iVar7;
      return uVar4;
    }
    if (uVar6 <= ((in_EDX - 2) - uVar2) - iVar8) {
      if ((uint)(param_4 - iVar7) < uVar6) {
        format = (char *)((uintptr_t)pf_module_state+0x1b1bU);
        goto LAB_1000b2ea;
      }
      memmove((void *)(param_3 + iVar7),(void *)(iVar8 + 2 + iVar5),uVar6);
      iVar5 = uVar2 + uVar6;
      uVar2 = iVar8 + 2 + iVar5;
      if (uVar2 < in_EDX) {
        uVar2 = iVar8 + 2 + (uint)(*(char *)(iVar8 + in_ECX + 2 + iVar5) == '\r') + iVar5;
      }
      if (uVar2 < in_EDX) {
        uVar2 = uVar2 + (*(char *)(in_ECX + uVar2) == '\n');
      }
      iVar7 = iVar7 + uVar6;
      if (in_EDX <= uVar2) goto LAB_1000b2c5;
      goto LAB_1000b120;
    }
  }
LAB_1000b2dc:
  format = (char *)((uintptr_t)pf_module_state+0x1affU);
  goto LAB_1000b2ea;
}

#undef format

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b320
 */

void recovered_1000b320(char *in_ECX,undefined1 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;

  *in_EDX = 0;
  uVar1 = strlen((char *)((uintptr_t)pf_module_state+0x1b35U));
  if (uVar1 != 0 && in_ECX != (char *)0x0) {
    if (*in_ECX == '\0') goto LAB_1000b3b2;
    pcVar3 = in_ECX;
    do {
      uVar8 = 0;
      while (bVar6 = pcVar3[uVar8], bVar6 != 0) {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        bVar7 = *(byte *)(uVar8 + ((uintptr_t)pf_module_state+0x1b35U));
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        if (bVar6 != bVar7) break;
        uVar8 = uVar8 + 1;
        if (uVar1 == uVar8) goto LAB_1000b3f7;
      }
      if (uVar1 == uVar8) {
LAB_1000b3f7:
        in_ECX = pcVar3 + 1;
        goto LAB_1000b3fd;
      }
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
  }
  if (in_ECX == (char *)0x0) {
    return;
  }
LAB_1000b3b2:
  bVar6 = 99;
  iVar2 = -0xd;
  do {
    bVar7 = in_ECX[iVar2 + 0xd];
    if (bVar7 == 0) {
      return;
    }
    if ((byte)(bVar7 + 0xbf) < 0x1a) {
      bVar7 = bVar7 | 0x20;
    }
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    if (bVar7 != bVar6) {
      return;
    }
    bVar6 = *(byte *)(iVar2 + ((uintptr_t)pf_module_state+0x1b52U));
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
LAB_1000b3fd:
  pcVar3 = strchr(in_ECX,0x3a);
  if (pcVar3 != (char *)0x0) {
    do {
      do {
        pcVar4 = pcVar3;
        bVar6 = pcVar4[1];
        uVar9 = (uint)bVar6;
        pcVar3 = pcVar4 + 1;
      } while (uVar9 == 9);
    } while (uVar9 == 0x20);
    for (iVar2 = -0x5f;
        ((0xd < bVar6 || (iVar5 = iVar2, (0x2401U >> (uVar9 & 0x1f) & 1) == 0)) &&
        (iVar5 = 0, iVar2 != 0)); iVar2 = iVar2 + 1) {
      in_EDX[iVar2 + 0x5f] = (char)uVar9;
      bVar6 = pcVar4[iVar2 + 0x61];
      uVar9 = (uint)bVar6;
    }
    in_EDX[iVar5 + 0x5f] = 0;
  }
  return;
}


#define auStack_55 (*(undefined1 (*)[6])(frame + 267))
#define local_14b (*(undefined2 *)(frame + 21))
#define local_149 (*(undefined1 *)(frame + 23))
#define local_147 (*(undefined1 *)(frame + 25))
#define local_146 (*(undefined1 *)(frame + 26))
#define local_145 (*(undefined1 *)(frame + 27))
#define local_144 (*(undefined1 *)(frame + 28))
#define local_141 (*(undefined2 *)(frame + 31))
#define local_12f (*(undefined1 (*)[208])(frame + 49))
#define local_5f (*(undefined4 *)(frame + 257))
#define local_5b (*(undefined2 *)(frame + 261))
#define local_59 (*(undefined1 *)(frame + 263))
#define local_58 (*(undefined2 *)(frame + 264))
#define local_56 (*(undefined1 *)(frame + 266))
#define local_4f (*(undefined2 *)(frame + 273))
#define local_4d (*(undefined1 (*)[4])(frame + 275))
#define local_49 (*(undefined2 *)(frame + 279))
#define local_47 (*(undefined1 (*)[40])(frame + 281))
#define local_1f (*(undefined1 *)(frame + 321))
#define local_1e (*(undefined1 (*)[6])(frame + 322))
#define local_18 (*(undefined4 *)(frame + 328))
#define local_14 (*(uint *)(frame + 332))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b470
 */

bool recovered_1000b470(int in_ECX,int in_EDX,uint param_3,uint param_4)

{
  unsigned char frame[384] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  int iVar3;

  local_18 = 0x33060301;
  memset(&local_14b,0,300);
  local_14b = 0x101;
  local_149 = 6;
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  local_147 = (undefined1)((uint)uVar1 >> 0x18);
  local_146 = (undefined1)((uint)uVar1 >> 0x10);
  local_145 = (undefined1)((uint)uVar1 >> 8);
  local_144 = (undefined1)uVar1;
  local_141 = 0x80;
  memcpy(local_12f,(void *)(in_ECX + 2),6);
  local_5f = 0x63538263;
  local_1f = 1;
  memcpy(local_1e,(void *)(in_ECX + 2),6);
  local_14 = CONCAT31(PF_PART3(local_14, 1),(char)in_EDX);
  local_5b = 0x135;
  memcpy(&local_59,&local_14,1);
  local_58 = 0x73d;
  memcpy(&local_56,&local_1f,7);
  iVar3 = 0xc;
  if (in_EDX == 3) {
    if (param_3 == 0) {
      return false;
    }
    local_14 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
               param_3 << 0x18;
    local_4f = 0x432;
    memcpy(local_4d,&local_14,4);
    if (param_4 == 0) {
      iVar3 = 0x12;
    }
    else {
      local_14 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                 param_4 << 0x18;
      local_49 = 0x436;
      memcpy(local_47,&local_14,4);
      iVar3 = 0x18;
    }
  }
  *(undefined2 *)(local_12f + iVar3 + 0xd4) = 0x437;
  memcpy(auStack_55 + iVar3 + -4,&local_18,4);
  auStack_55[iVar3] = 0xff;
  bVar2 = recovered_1000ba20(in_ECX,(void *)((uintptr_t)pf_module_state+0x1439U),0,0xffffffff,0x44,0x43,&local_14b,300);
  return bVar2;
}

#undef auStack_55
#undef local_14b
#undef local_149
#undef local_147
#undef local_146
#undef local_145
#undef local_144
#undef local_141
#undef local_12f
#undef local_5f
#undef local_5b
#undef local_59
#undef local_58
#undef local_56
#undef local_4f
#undef local_4d
#undef local_49
#undef local_47
#undef local_1f
#undef local_1e
#undef local_18
#undef local_14

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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#define local_44 (*(undefined4 *)(frame + 2076))
#define local_40 (*(uint *)(frame + 2080))
#define local_3c (*(ushort * *)(frame + 2084))
#define local_38 (*(uint *)(frame + 2088))
#define local_34 (*(uint *)(frame + 2092))
#define local_30 (*(uint *)(frame + 2096))
#define local_2c (*(uint *)(frame + 2100))
#define local_28 (*(int *)(frame + 2104))
#define local_24 (*(uint *)(frame + 2108))
#define local_20 (*(uint *)(frame + 2112))
#define local_1c (*(byte * *)(frame + 2116))
#define local_18 (*(byte * *)(frame + 2120))
#define local_14 (*(char * *)(frame + 2124))
#define acStack_832 (*(char (*)[4])(frame + 46))
#define auStack_816 (*(undefined1 (*)[1998])(frame + 74))
#define local_848 (*(undefined1 (*)[12])(frame + 24))
#define local_83c (*(ushort *)(frame + 36))
#define local_83a (*(ushort (*)[4])(frame + 38))
#define local_82e (*(uint (*)[6])(frame + 50))
#define local_48 (*(void * *)(frame + 2072))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b610
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_1000b610(int in_ECX,undefined4 in_EDX,uint *param_3)

{
  unsigned char frame[2176] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  byte *pbVar9;
  undefined4 unaff_EBX = 0;
  undefined3 uVar10;
  uint uVar11;
  bool bVar12;

  local_48 = (void *)(in_ECX + 2);
  uVar11 = 0;
  uVar10 = (undefined3)((uint)unaff_EBX >> 8);
  bVar12 = true;
  local_44 = in_EDX;
  do {
    local_3c = (ushort *)0x0;
    iVar7 = Ram00006800;
    if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
        (uVar5 = Ram00006808, 0xb < uVar5)) &&
       ((uVar5 = Ram00006808, 299 < uVar5 && (pcVar4 = (code *)UINT_00006928, pcVar4 != (code *)0x0)
        ))) {
      uVar5 = (*pcVar4)(local_848,0x800,(uint *)&local_3c);
      if (local_3c < (ushort *)0xe || uVar5 == 0) goto LAB_1000b6b0;
      pbVar1 = local_1c;
      if ((((ushort *)0x119 < local_3c && param_3 != (uint *)0x0) &&
          ((ushort)(local_83c << 8 | local_83c >> 8) == 0x800)) &&
         ((((byte)local_83a[0] & 0xfffffff0) == 0x40 &&
          ((acStack_832[1] == '\x11' &&
           (uVar5 = (byte)local_83a[0] & 0xf, uVar6 = uVar5 * 4, 0x13 < uVar6)))))) {
        local_28 = in_ECX;
        local_18 = (byte *)(uint)(ushort)(local_83a[1] << 8 | local_83a[1] >> 8);
        if (((byte *)(uVar6 + 8) <= local_18) &&
           ((((local_18 + 0xe <= local_3c &&
              ((ushort)(*(ushort *)((int)local_83a + uVar5 * 4) << 8 |
                       *(ushort *)((int)local_83a + uVar5 * 4) >> 8) == 0x43)) &&
             (pbVar9 = (byte *)((int)local_83a + uVar5 * 4),
             (ushort)(*(ushort *)((int)local_83a + (uVar5 * 2 + 1) * 2) << 8 |
                     *(ushort *)((int)local_83a + (uVar5 * 2 + 1) * 2) >> 8) == 0x44)) &&
            (uVar8 = *(ushort *)((int)local_83a + (uVar5 * 2 + 2) * 2) << 8 |
                     *(ushort *)((int)local_83a + (uVar5 * 2 + 2) * 2) >> 8, 7 < uVar8)))) {
          pbVar1 = pbVar9;
          if ((((byte *)(uVar6 + uVar8) <= local_18) &&
              (local_18 = (byte *)(uVar8 - 8), (byte *)0xef < local_18)) &&
             (((local_14 = acStack_832 + uVar6, *local_14 == '\x02' &&
               ((*(char *)((int)local_82e + (uVar6 - 3)) == '\x01' &&
                (5 < *(byte *)((int)local_82e + (uVar6 - 2)))))) &&
              (uVar5 = local_82e[uVar5],
              (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ==
              *(uint *)(in_ECX + 0x1c))))) {
            local_1c = pbVar9;
            iVar7 = memcmp(auStack_816 + uVar6,local_48,6);
            pbVar1 = local_1c;
            if ((((iVar7 == 0) && (local_1c[0xf4] == 99)) && (local_1c[0xf5] == 0x82)) &&
               ((local_1c[0xf6] == 0x53 && (local_1c[0xf7] == 99)))) {
              memset(&local_3c,0,0x14);
              uVar5 = *(uint *)(pbVar1 + 0x18);
              local_40 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18;
              local_2c = local_82e[0] >> 0x18 | (local_82e[0] & 0xff0000) >> 8 |
                         (local_82e[0] & 0xff00) << 8 | local_82e[0] << 0x18;
              in_ECX = local_28;
              if (local_18 == (byte *)0xf0) {
                local_24 = 0;
                pbVar1 = local_1c;
              }
              else {
                local_1c = (byte *)0xf0;
                local_24 = 0;
                do {
                  pbVar1 = local_1c + 1;
                  bVar2 = local_14[(int)local_1c];
                  if (bVar2 != 0) {
                    if (bVar2 == 0xff) break;
                    if (local_18 <= pbVar1) goto LAB_1000b630;
                    bVar3 = (local_14 + 1)[(int)local_1c];
                    local_20 = (uint)bVar3;
                    pbVar1 = local_1c + local_20 + 2;
                    if (local_18 < pbVar1) goto LAB_1000b630;
                    pbVar9 = local_1c + 2;
                    if (bVar2 < 6) {
                      if (bVar2 == 1) {
                        if (3 < bVar3) {
                          uVar5 = *(uint *)(local_14 + (int)pbVar9);
                          local_38 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8
                                     | uVar5 << 0x18;
                        }
                      }
                      else if ((bVar2 == 3) && (3 < bVar3)) {
                        uVar5 = *(uint *)(local_14 + (int)pbVar9);
                        local_34 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                   uVar5 << 0x18;
                      }
                    }
                    else if (bVar2 == 6) {
                      if (3 < bVar3) {
                        uVar5 = *(uint *)(local_14 + (int)pbVar9);
                        local_30 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                   uVar5 << 0x18;
                      }
                    }
                    else if (bVar2 == 0x36) {
                      if (3 < bVar3) {
                        uVar5 = *(uint *)(local_14 + (int)pbVar9);
                        local_2c = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                                   uVar5 << 0x18;
                      }
                    }
                    else if ((bVar2 == 0x35) && (bVar3 != 0)) {
                      local_24 = (uint)(byte)local_14[(int)pbVar9];
                    }
                  }
                  local_1c = pbVar1;
                  pbVar1 = local_1c;
                } while (local_1c < local_18);
              }
              local_1c = pbVar1;
              pbVar1 = local_1c;
              if (((char)local_24 == (char)local_44) && (local_40 != 0)) {
                if (local_38 == 0) {
                  local_38 = 0xffffff00;
                }
                param_3[4] = local_2c;
                param_3[3] = local_30;
                param_3[2] = local_34;
                param_3[1] = local_38;
                *param_3 = local_40;
                goto LAB_1000b9d2;
              }
            }
          }
        }
      }
    }
    else {
LAB_1000b6b0:
      iVar7 = Ram00006800;
      pbVar1 = local_1c;
      if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
          (uVar5 = Ram00006808, 0xb < uVar5)) &&
         ((uVar5 = Ram00006808, 0x9f < uVar5 &&
          (pcVar4 = (code *)UINT_0000689c, pcVar4 != (code *)0x0)))) {
        (*pcVar4)();
        pbVar1 = local_1c;
      }
    }
LAB_1000b630:
    local_1c = pbVar1;
    bVar12 = uVar11 < 0x144f;
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x1450) {
      bVar12 = false;
      uVar10 = 0;
LAB_1000b9d2:
      return CONCAT31(uVar10,bVar12);
    }
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef UINT_00006928
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
#undef acStack_832
#undef auStack_816
#undef local_848
#undef local_83c
#undef local_83a
#undef local_82e
#undef local_48

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
#undef UINT_0000692c
#define UINT_0000692c (*(uint *)(0x692cU))
#define local_814 (*(undefined1 (*)[6])(frame + 28))
#define local_80e (*(undefined1 (*)[6])(frame + 34))
#define local_808 (*(undefined2 *)(frame + 40))
#define local_806 (*(undefined1 (*)[20])(frame + 42))
#define local_7f2 (*(undefined1 *)(frame + 62))
#define local_7f1 (*(undefined1 *)(frame + 63))
#define local_7f0 (*(undefined1 *)(frame + 64))
#define local_7ef (*(undefined1 *)(frame + 65))
#define local_7ee (*(undefined1 *)(frame + 66))
#define local_7ed (*(undefined1 *)(frame + 67))
#define local_7ec (*(undefined2 *)(frame + 68))
#define local_7ea (*(undefined1 (*)[2006])(frame + 70))
#define local_14 (*(uint *)(frame + 2076))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba20
 */

bool recovered_1000ba20(int in_ECX,void *in_EDX,uint param_3,uint param_4,undefined2 param_5,
                       undefined2 param_6,void *param_7,uint param_8)

{
  unsigned char frame[2128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  bool bVar7;

  if (in_EDX == (void *)0x0) {
    return false;
  }
  local_14 = param_8 & 0xffff;
  bVar7 = false;
  if ((local_14 < 0x7d7) && (param_7 != (void *)0x0 || (short)param_8 == 0)) {
    memcpy(local_814,in_EDX,6);
    memcpy(local_80e,(void *)(in_ECX + 2),6);
    uVar4 = local_14;
    local_808 = 8;
    sVar5 = 0x4700;
    if (*(short *)(in_ECX + 0x20) != 0) {
      sVar5 = *(short *)(in_ECX + 0x20);
    }
    uVar6 = sVar5 + 1;
    if (uVar6 == 0) {
      uVar6 = sVar5 + 2;
    }
    *(ushort *)(in_ECX + 0x20) = uVar6;
    recovered_1000bba0(local_806,param_8 + 0x1c & 0xffff,uVar6,0x11,param_3,param_4);
    local_7f2 = (undefined1)((ushort)param_5 >> 8);
    local_7f1 = (undefined1)param_5;
    local_7f0 = (undefined1)((ushort)param_6 >> 8);
    local_7ef = (undefined1)param_6;
    local_7ee = (undefined1)(param_8 + 8 >> 8);
    local_7ed = (undefined1)(param_8 + 8);
    local_7ec = 0;
    if ((short)param_8 != 0) {
      memcpy(local_7ea,param_7,uVar4);
    }
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar2 = Ram00006808, 0xb < uVar2)) &&
       ((uVar2 = Ram00006808, 0x12f < uVar2 &&
        (pcVar3 = (code *)UINT_0000692c, pcVar3 != (code *)0x0)))) {
      uVar4 = (*pcVar3)(local_814,uVar4 + 0x2a);
      bVar7 = uVar4 != 0;
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000692c
#undef local_814
#undef local_80e
#undef local_808
#undef local_806
#undef local_7f2
#undef local_7f1
#undef local_7f0
#undef local_7ef
#undef local_7ee
#undef local_7ed
#undef local_7ec
#undef local_7ea
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bba0
 */

void recovered_1000bba0(undefined1 *in_ECX,int in_EDX,ushort param_3,byte param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;

  memset(in_ECX,0,0x14);
  *in_ECX = 0x45;
  in_ECX[2] = (char)((uint)in_EDX >> 8);
  in_ECX[3] = (char)in_EDX;
  in_ECX[4] = (char)(param_3 >> 8);
  in_ECX[5] = (char)param_3;
  *(undefined2 *)(in_ECX + 6) = 0x40;
  in_ECX[8] = 0x40;
  in_ECX[9] = param_4;
  in_ECX[0xc] = (char)(param_5 >> 0x18);
  bVar2 = (byte)(param_5 >> 0x10);
  in_ECX[0xd] = bVar2;
  in_ECX[0xe] = (char)(param_5 >> 8);
  in_ECX[0xf] = (char)param_5;
  in_ECX[0x10] = (char)(param_6 >> 0x18);
  bVar3 = (byte)(param_6 >> 0x10);
  in_ECX[0x11] = bVar3;
  in_ECX[0x12] = (char)(param_6 >> 8);
  in_ECX[0x13] = (char)param_6;
  for (uVar1 = (param_6 & 0xffff) + 0xc500 +
               in_EDX + (uint)param_3 + (uint)bVar2 +
               (uint)(ushort)(*(ushort *)(in_ECX + 10) << 8 | *(ushort *)(in_ECX + 10) >> 8) +
               ((param_5 >> 0x18) << 8 | (uint)param_4) +
               (param_6 >> 0x18) * 0x100 + (uint)(byte)in_ECX[1] + (uint)bVar3 + (param_5 & 0xffff);
      0xffff < uVar1; uVar1 = (uVar1 & 0xffff) + (uVar1 >> 0x10)) {
  }
  *(ushort *)(in_ECX + 10) = ~(ushort)uVar1 << 8 | (ushort)~(ushort)uVar1 >> 8;
  return;
}


#define format (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bcb0
 */

undefined4 recovered_1000bcb0(ushort *in_ECX,uint in_EDX,ushort param_3,uint *param_4,char *param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;

  if (in_EDX < 0xc || in_ECX == (ushort *)0x0) {
    return 0;
  }
  if ((ushort)(*in_ECX << 8 | *in_ECX >> 8) != param_3) {
    return 0;
  }
  if (-1 < (char)in_ECX[1]) {
    return 0;
  }
  if ((*(byte *)((int)in_ECX + 3) & 0xf) == 0) {
    uVar8 = in_ECX[2] << 8 | in_ECX[2] >> 8;
    uVar4 = 0xc;
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        uVar3 = 0;
        while( true ) {
          if (in_EDX <= uVar4) goto LAB_1000be83;
          uVar5 = uVar4 + 1;
          uVar7 = (uint)*(byte *)((int)in_ECX + uVar4);
          if ((*(byte *)((int)in_ECX + uVar4) & 0xc0) != 0) break;
          if (uVar7 == 0) goto LAB_1000bd95;
          uVar4 = uVar5 + uVar7;
          if ((in_EDX < uVar4) || (bVar1 = 0x7f < uVar3, uVar3 = uVar3 + 1, bVar1))
          goto LAB_1000be83;
        }
        if (((uVar7 & 0xc0) != 0xc0) || (in_EDX <= uVar5)) goto LAB_1000be83;
        uVar5 = uVar4 + 2;
LAB_1000bd95:
        uVar4 = uVar5 + 4;
        if (in_EDX < uVar4) goto LAB_1000be83;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    uVar8 = in_ECX[3] << 8 | in_ECX[3] >> 8;
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        uVar3 = 0;
        while( true ) {
          if (in_EDX <= uVar4) goto LAB_1000be83;
          uVar5 = uVar4 + 1;
          uVar7 = (uint)*(byte *)((int)in_ECX + uVar4);
          if ((*(byte *)((int)in_ECX + uVar4) & 0xc0) != 0) break;
          if (uVar7 == 0) goto LAB_1000be27;
          uVar4 = uVar5 + uVar7;
          if ((in_EDX < uVar4) || (bVar1 = 0x7f < uVar3, uVar3 = uVar3 + 1, bVar1))
          goto LAB_1000be83;
        }
        if (((uVar7 & 0xc0) != 0xc0) || (in_EDX <= uVar5)) goto LAB_1000be83;
        uVar5 = uVar4 + 2;
LAB_1000be27:
        uVar3 = uVar5 + 10;
        if (in_EDX < uVar3) goto LAB_1000be83;
        uVar2 = *(ushort *)((int)in_ECX + uVar5 + 8);
        uVar2 = uVar2 << 8 | uVar2 >> 8;
        uVar4 = uVar2 + uVar3;
        if (in_EDX < uVar4) goto LAB_1000be83;
        if (((uVar2 == 4) &&
            ((ushort)(*(ushort *)((int)in_ECX + uVar5) << 8 | *(ushort *)((int)in_ECX + uVar5) >> 8)
             == 1)) &&
           (uVar2 = *(ushort *)((int)in_ECX + uVar5 + 2), (ushort)(uVar2 << 8 | uVar2 >> 8) == 1)) {
          uVar4 = *(uint *)((int)in_ECX + uVar3);
          uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          *param_4 = uVar4;
          return CONCAT31((int3)(uVar4 >> 8),uVar4 != 0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
    format = (char *)((uintptr_t)pf_module_state+0x1886U);
  }
  else {
    format = (char *)((uintptr_t)pf_module_state+0x1865U);
  }
LAB_1000be8b:
  snprintf(param_5,0x60,format);
  return 0;
LAB_1000be83:
  format = (char *)((uintptr_t)pf_module_state+0x186fU);
  goto LAB_1000be8b;
}

#undef format

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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#define format (*(char * *)(frame + 28))
#define local_82c (*(undefined1 (*)[2048])(frame + 36))
#define local_2c (*(uint *)(frame + 2084))
#define local_28 (*(uint *)(frame + 2088))
#define local_24 (*(uint *)(frame + 2092))
#define local_20 (*(uint *)(frame + 2096))
#define local_1c (*(uint *)(frame + 2100))
#define local_18 (*(int * *)(frame + 2104))
#define local_11 (*(byte *)(frame + 2111))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bec0
 */

undefined4
recovered_1000bec0(int *in_ECX,int in_EDX,uint param_3,ushort param_4,void *param_5,char *param_6,
                  ulong param_7)

{
  unsigned char frame[2160] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;

  if (param_5 != (void *)0x0 && (in_EDX != 0 && in_ECX != (int *)0x0)) {
    memset(in_ECX,0,0x4020);
    *in_ECX = in_EDX;
    in_ECX[1] = param_3;
    *(ushort *)(in_ECX + 2) = param_4;
    memcpy(in_ECX + 5,param_5,6);
    sVar3 = 0x474c;
    if (*(short *)(in_EDX + 0x24) != 0) {
      sVar3 = *(short *)(in_EDX + 0x24);
    }
    uVar6 = sVar3 + 1;
    if (uVar6 == 0) {
      uVar6 = sVar3 + 2;
    }
    *(ushort *)(in_EDX + 0x24) = uVar6;
    *(ushort *)((int)in_ECX + 10) = uVar6 | 0xc000;
    iVar8 = *(int *)(in_EDX + 0x28);
    iVar7 = 0x474c6142;
    if (iVar8 != 0) {
      iVar7 = iVar8 + 0x1fff + (uint)(iVar8 == -0x1fff);
    }
    *(int *)(in_EDX + 0x28) = iVar7;
    in_ECX[3] = iVar7;
    local_1c = (uint)param_4;
    local_18 = in_ECX;
    bVar2 = recovered_1000c760(in_EDX,param_5,param_3,uVar6 | 0xc000,param_4,iVar7,0,2,(void *)0x0,0
                              );
    if (bVar2) {
      iVar8 = 0x1450;
      do {
        local_24 = 0;
        local_20 = 0;
        local_11 = 0;
        local_28 = 0;
        iVar7 = Ram00006800;
        if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
            (uVar4 = Ram00006808, 0xb < uVar4)) &&
           (((uVar4 = Ram00006808, 299 < uVar4 &&
             (pcVar1 = (code *)UINT_00006928, pcVar1 != (code *)0x0)) &&
            (uVar4 = (*pcVar1)(local_82c,0x800,&local_28), 0xd < local_28 && uVar4 != 0)))) {
          uVar6 = *(ushort *)((int)local_18 + 10);
          local_2c = (uint)uVar6;
          uVar5 = recovered_1000ca00(in_EDX,(int)local_82c,local_28,param_3,uVar6,(ushort)local_1c,
                                     &local_24,&local_20,&local_11,(int *)0x0,(short *)0x0);
          if ((char)uVar5 != '\0') {
            if ((local_11 & 4) != 0) {
              format = (char *)((uintptr_t)pf_module_state+0x199fU);
              goto LAB_1000c172;
            }
            if (((~local_11 & 0x12) == 0) && (local_20 == local_18[3] + 1U)) {
              local_18[4] = local_24 + 1;
              local_18[3] = local_20;
              bVar2 = recovered_1000c760(in_EDX,param_5,param_3,uVar6,(short)local_1c,local_20,
                                         local_24 + 1,0x10,(void *)0x0,0);
              if (bVar2) {
                *(undefined1 *)((int)local_18 + 0x401e) = 1;
                return CONCAT31((int3)((uint)local_18 >> 8),1);
              }
              format = (char *)((uintptr_t)pf_module_state+0x19bdU);
              goto LAB_1000c172;
            }
          }
        }
        else {
          iVar7 = Ram00006800;
          if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
              (uVar4 = Ram00006808, 0xb < uVar4)) &&
             ((uVar4 = Ram00006808, 0x9f < uVar4 &&
              (pcVar1 = (code *)UINT_0000689c, pcVar1 != (code *)0x0)))) {
            (*pcVar1)();
          }
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      format = (char *)((uintptr_t)pf_module_state+0x19a9U);
    }
    else {
      format = (char *)((uintptr_t)pf_module_state+0x198bU);
    }
LAB_1000c172:
    snprintf(param_6,param_7,format);
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef UINT_00006928
#undef format
#undef local_82c
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c1a0
 */

undefined4 recovered_1000c1a0(int param_1,int param_2,uint param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *in_ECX;
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint n;
  uint uVar5;

  if (((param_1 == 0) || (in_ECX = *(int **)(param_1 + 4), in_ECX == (int *)0x0)) ||
     (param_2 == 0 && param_3 != 0)) {
    return 0;
  }
  if (param_3 == 0) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  uVar1 = *(ushort *)((int)in_ECX + 0x401a);
  uVar5 = 0;
  do {
    uVar3 = *(ushort *)(in_ECX + 0x1007);
    if (uVar3 <= uVar1) {
      uVar2 = recovered_1000cb60(in_ECX,param_4,param_5);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar1 = *(ushort *)((int)in_ECX + 0x401a);
      uVar3 = *(ushort *)(in_ECX + 0x1007);
    }
    uVar4 = (uint)uVar3 - (uint)uVar1;
    n = param_3 - uVar5;
    if (uVar4 <= param_3 - uVar5) {
      n = uVar4;
    }
    memcpy((void *)(param_2 + uVar5),(void *)((int)in_ECX + uVar1 + 0x1a),n);
    uVar1 = *(short *)((int)in_ECX + 0x401a) + (short)n;
    *(ushort *)((int)in_ECX + 0x401a) = uVar1;
    uVar5 = uVar5 + n;
  } while (uVar5 < param_3);
  return CONCAT31((uint3)(byte)(uVar1 >> 8),1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c270
 */

undefined4 recovered_1000c270(int param_1,void *param_2,uint param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((param_1 == 0) || (*(int **)(param_1 + 4) == (int *)0x0)) {
    return 0;
  }
  uVar1 = recovered_1000cf80(*(int **)(param_1 + 4),param_2,param_3,param_4,param_5);
  return uVar1;
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
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#define local_30 (*(undefined1 (*)[8])(frame + 16))
#define local_28 (*(uint *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
#define local_20 (*(int *)(frame + 32))
#define local_15 (*(undefined1 *)(frame + 43))
#define local_14 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c2b0
 */

undefined1 recovered_1000c2b0(int *param_1,undefined1 *param_2,int param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;

  if (param_1 == (int *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_1;
  }
  local_15 = param_3 == 0 || param_2 != (undefined1 *)0x0;
  if (param_3 == 0 || param_2 != (undefined1 *)0x0) {
    memset(local_30,0,0x18);
    iVar1 = Ram00006800;
    uVar5 = 0x474c5343;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar4 = Ram00006808, 0xb < uVar4)) &&
       (((uVar4 = Ram00006808, 0x16b < uVar4 &&
         (pcVar2 = (code *)UINT_00006968, pcVar2 != (code *)0x0)) &&
        (uVar4 = (*pcVar2)(local_30), uVar4 != 0)))) {
      uVar5 = local_24 * 0x3c6ef35f ^ local_28 ^ local_20 * 0x19660d ^ 0x474c5343;
    }
    if (local_14 != 0) {
      uVar5 = ((uint)*(byte *)(local_14 + 0x205bcf) |
              (uint)*(byte *)(local_14 + 0x205bce) << 8 |
              (uint)*(byte *)(local_14 + 0x205bcb) << 0x10 |
              (uint)*(byte *)(local_14 + 0x205bca) << 0x18) ^ uVar5 ^
              *(int *)(local_14 + 0x205bc4) * 0x3c6ef35f ^ *(int *)(local_14 + 0x205bc0) * 0x19660d
              ^ *(uint *)(local_14 + 0x205bf0) ^ *(uint *)(local_14 + 0x205bd0);
    }
    if (param_3 != 0) {
      bVar3 = 0;
      do {
        uVar5 = uVar5 << 0xd ^ uVar5;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *param_2 = (char)(uVar5 >> (bVar3 & 0x18));
        param_2 = param_2 + 1;
        bVar3 = bVar3 + 8;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (local_14 != 0) {
      *(uint *)(local_14 + 0x205bf0) = *(uint *)(local_14 + 0x205bf0) ^ uVar5;
    }
  }
  return local_15;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006968
#undef local_30
#undef local_28
#undef local_24
#undef local_20
#undef local_15
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#define local_21d (*(char (*)[256])(frame + 51))
#define local_11d (*(byte (*)[192])(frame + 307))
#define local_5d (*(byte (*)[65])(frame + 499))
#define local_1c (*(int *)(frame + 564))
#define local_18 (*(uint *)(frame + 568))
#define format (*(char * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c410
 */

bool recovered_1000c410(int param_1,byte *param_2,int param_3,char param_4,char *param_5,
                       ulong param_6)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;

  if ((param_1 != 0) && (*(char *)(param_1 + 8) != '\0')) {
    return true;
  }
  if (param_4 != '\x01' || param_3 == 0) {
    format = (char *)((uintptr_t)pf_module_state+0x1a0bU);
    goto LAB_1000c55f;
  }
  iVar5 = -0x20;
  do {
    bVar2 = *(byte *)(param_3 + 0x20 + iVar5);
    local_5d[iVar5 * 2 + 0x40] = *(byte *)((bVar2 >> 4) + ((uintptr_t)pf_module_state+0x1a66U));
    local_5d[iVar5 * 2 + 0x41] = *(byte *)((bVar2 & 0xf) + ((uintptr_t)pf_module_state+0x1a66U));
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0);
  local_5d[0x40] = 0;
  local_11d[0] = 0;
  uVar3 = strlen((char *)local_11d);
  if (uVar3 < 0xbf) {
    snprintf((char *)(local_11d + uVar3),0xc0 - uVar3,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x1a77U));
  }
  if ((param_2 == (byte *)0x0) || (bVar2 = *param_2, bVar2 == 0)) {
    uVar3 = strlen((char *)local_11d);
    if (uVar3 < 0xbf) {
      uVar6 = ((uintptr_t)pf_module_state+0x1a8aU);
      goto LAB_1000c5a4;
    }
  }
  else {
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + 1;
      if (((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) ||
         ((byte)(bVar2 - 0x30U) < 10 || (byte)(bVar2 - 0x2d) < 2)) {
        uVar3 = strlen((char *)local_11d);
        if (uVar3 < 0xbf) goto LAB_1000c4e0;
      }
      else {
        uVar3 = strlen((char *)local_11d);
        if (uVar3 < 0xbf) {
          bVar2 = 0x5f;
LAB_1000c4e0:
          local_11d[uVar3] = bVar2;
          local_11d[uVar3 + 1] = 0;
        }
      }
      bVar2 = *pbVar7;
    } while (bVar2 != 0);
    uVar3 = strlen((char *)local_11d);
    if (uVar3 < 0xbf) {
      uVar6 = ((uintptr_t)pf_module_state+0x1a92U);
LAB_1000c5a4:
      snprintf((char *)(local_11d + uVar3),0xc0 - uVar3,(char *)((uintptr_t)pf_module_state+0x154dU),uVar6);
    }
  }
  memset(&local_1c,0,0xc);
  iVar5 = Ram00006800;
  if (((((iVar5 != 0x50414d57) || (iVar5 = Ram00006804, iVar5 == 0)) ||
       (uVar4 = Ram00006808, uVar4 < 0xc)) ||
      ((uVar4 = Ram00006808, uVar4 < 0x38 || (pcVar1 = (code *)UINT_00006834, pcVar1 == (code *)0x0)
       ))) || (uVar4 = (*pcVar1)((char *)local_11d,&local_1c),
              (local_18 == 0 || local_1c == 0) || uVar4 == 0)) {
    iVar5 = Ram00006800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
       ((uVar4 = Ram00006808, 0xb < uVar4 &&
        ((uVar4 = Ram00006808, 0x8f < uVar4 &&
         (pcVar1 = (code *)UINT_0000688c, pcVar1 != (code *)0x0)))))) {
      (*pcVar1)((char *)((uintptr_t)pf_module_state+0x1a4cU));
    }
    pbVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (param_2 != (byte *)0x0) {
      pbVar7 = param_2;
    }
    snprintf(local_21d,0x100,(char *)((uintptr_t)pf_module_state+0x1a53U),pbVar7,local_5d);
    uVar3 = strlen(local_21d);
    iVar5 = Ram00006800;
    if (iVar5 != 0x50414d57) {
      return false;
    }
    iVar5 = Ram00006804;
    if (iVar5 == 0) {
      return false;
    }
    uVar4 = Ram00006808;
    if (uVar4 < 0xc) {
      return false;
    }
    uVar4 = Ram00006808;
    if (uVar4 < 0x3c) {
      return false;
    }
    pcVar1 = (code *)UINT_00006838;
    if (pcVar1 == (code *)0x0) {
      return false;
    }
    uVar4 = (*pcVar1)((char *)local_11d,local_21d,uVar3);
    return uVar4 != 0;
  }
  if (0x3f < local_18) {
    iVar5 = 0;
    do {
      iVar8 = -0x40;
      while( true ) {
        bVar2 = *(byte *)(local_1c + 0x40 + iVar8);
        if ((byte)(bVar2 + 0xbf) < 0x1a) {
          bVar2 = bVar2 | 0x20;
        }
        if (bVar2 != local_5d[iVar8 + 0x40]) break;
        iVar8 = iVar8 + 1;
        if (iVar8 == 0) {
          return true;
        }
      }
      uVar4 = iVar5 + 0x41;
      local_1c = local_1c + 1;
      iVar5 = iVar5 + 1;
    } while (uVar4 <= local_18);
  }
  format = (char *)((uintptr_t)pf_module_state+0x1a23U);
LAB_1000c55f:
  snprintf(param_5,param_6,format);
  return false;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181bc65
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_0000688c
#undef local_21d
#undef local_11d
#undef local_5d
#undef local_1c
#undef local_18
#undef format

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
#undef UINT_0000692c
#define UINT_0000692c (*(uint *)(0x692cU))
#define local_824 (*(undefined1 (*)[6])(frame + 28))
#define local_81e (*(undefined1 (*)[6])(frame + 34))
#define local_818 (*(undefined2 *)(frame + 40))
#define local_816 (*(undefined1 (*)[20])(frame + 42))
#define local_802 (*(undefined2 *)(frame + 62))
#define local_800 (*(undefined1 *)(frame + 64))
#define local_7ff (*(undefined1 *)(frame + 65))
#define local_7fe (*(undefined1 *)(frame + 66))
#define local_7fd (*(undefined1 *)(frame + 67))
#define local_7fc (*(undefined1 *)(frame + 68))
#define local_7fb (*(undefined1 *)(frame + 69))
#define local_7fa (*(undefined1 *)(frame + 70))
#define local_7f9 (*(undefined1 *)(frame + 71))
#define local_7f8 (*(undefined1 *)(frame + 72))
#define local_7f7 (*(undefined1 *)(frame + 73))
#define local_7f6 (*(char *)(frame + 74))
#define local_7f5 (*(byte *)(frame + 75))
#define local_7f4 (*(undefined2 *)(frame + 76))
#define local_7f2 (*(ushort *)(frame + 78))
#define local_7ee (*(undefined4 (*)[498])(frame + 82))
#define local_24 (*(uint *)(frame + 2076))
#define local_20 (*(int *)(frame + 2080))
#define local_1c (*(uint *)(frame + 2084))
#define local_18 (*(uint *)(frame + 2088))
#define local_14 (*(int *)(frame + 2092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c760
 */

bool recovered_1000c760(int in_ECX,void *in_EDX,uint param_3,undefined2 param_4,undefined2 param_5,
                       undefined4 param_6,undefined4 param_7,byte param_8,void *param_9,
                       ushort param_10)

{
  unsigned char frame[2144] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint n;
  ushort *dst;

  if (in_EDX != (void *)0x0 && in_ECX != 0) {
    local_24 = (uint)param_10;
    if (param_9 == (void *)0x0 && param_10 != 0) {
      return false;
    }
    local_1c = (uint)((param_8 & 2) >> 1);
    local_18 = local_24 + 0x28 + local_1c * 4 & 0xffff;
    if (0x7f2 < local_18) {
      return false;
    }
    uVar5 = local_24 + 0x14 + local_1c * 4;
    memcpy(local_824,in_EDX,6);
    memcpy(local_81e,(void *)(in_ECX + 2),6);
    local_818 = 8;
    sVar3 = 0x4700;
    if (*(short *)(in_ECX + 0x20) != 0) {
      sVar3 = *(short *)(in_ECX + 0x20);
    }
    n = uVar5 & 0xffff;
    uVar6 = sVar3 + 1;
    dst = &local_802;
    local_20 = local_1c * 4 + 0x14;
    if (uVar6 == 0) {
      uVar6 = sVar3 + 2;
    }
    *(ushort *)(in_ECX + 0x20) = uVar6;
    local_14 = in_ECX;
    recovered_1000bba0(local_816,local_18,uVar6,6,*(uint *)(in_ECX + 8),param_3);
    memset(dst,0,n);
    PF_PART1(local_802, 0) = (char)((ushort)param_4 >> 8);
    PF_PART1(local_802, 1) = (char)param_4;
    local_800 = (char)((ushort)param_5 >> 8);
    local_7ff = (char)param_5;
    local_7fe = (char)((uint)param_6 >> 0x18);
    local_7fd = (char)((uint)param_6 >> 0x10);
    local_7fc = (char)((uint)param_6 >> 8);
    local_7fb = (char)param_6;
    local_7fa = (char)((uint)param_7 >> 0x18);
    local_7f9 = (char)((uint)param_7 >> 0x10);
    local_7f8 = (char)((uint)param_7 >> 8);
    local_7f7 = (char)param_7;
    local_7f6 = (char)local_20 << 2;
    local_7f5 = param_8;
    local_7f4 = 0x40;
    if ((param_8 & 2) != 0) {
      local_7ee[0] = 0xb4050402;
    }
    if ((short)local_24 != 0) {
      memcpy(local_7ee + local_1c,param_9,local_24);
    }
    uVar4 = (*(uint *)(in_ECX + 8) & 0xffff) + 6 +
            (param_3 & 0xffff) + (param_3 >> 0x10) + (*(uint *)(in_ECX + 8) >> 0x10) + n;
    if (1 < (ushort)uVar5) {
      do {
        uVar4 = uVar4 + (ushort)(*dst << 8 | *dst >> 8);
        dst = dst + 1;
        n = n - 2;
      } while (1 < n);
    }
    if (n != 0) {
      uVar4 = uVar4 + (uint)(byte)*dst * 0x100;
    }
    for (; 0xffff < uVar4; uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
    }
    local_7f2 = ~(ushort)uVar4 << 8 | (ushort)~(ushort)uVar4 >> 8;
    iVar1 = Ram00006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
        (uVar5 = Ram00006808, 0xb < uVar5)) &&
       ((uVar5 = Ram00006808, 0x12f < uVar5 &&
        (pcVar2 = (code *)UINT_0000692c, pcVar2 != (code *)0x0)))) {
      uVar5 = (*pcVar2)(local_824,local_18 + 0xe);
      return uVar5 != 0;
    }
  }
  return false;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000692c
#undef local_824
#undef local_81e
#undef local_818
#undef local_816
#undef local_802
#undef local_800
#undef local_7ff
#undef local_7fe
#undef local_7fd
#undef local_7fc
#undef local_7fb
#undef local_7fa
#undef local_7f9
#undef local_7f8
#undef local_7f7
#undef local_7f6
#undef local_7f5
#undef local_7f4
#undef local_7f2
#undef local_7ee
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ca00
 */

undefined4
recovered_1000ca00(int in_ECX,int in_EDX,uint param_3,uint param_4,ushort param_5,ushort param_6,
                  uint *param_7,uint *param_8,undefined1 *param_9,int *param_10,short *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;

  if (param_10 != (int *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (short *)0x0) {
    *param_11 = 0;
  }
  if (((((0x35 < param_3 && (in_EDX != 0 && in_ECX != 0)) &&
        ((ushort)(*(ushort *)(in_EDX + 0xc) << 8 | *(ushort *)(in_EDX + 0xc) >> 8) == 0x800)) &&
       (uVar8 = CONCAT11(*(undefined1 *)(in_EDX + 0xe),*(undefined1 *)(in_EDX + 0xe)) & 0xf0ff,
       (char)(uVar8 >> 8) == '@')) &&
      ((*(char *)(in_EDX + 0x17) == '\x06' &&
       (uVar3 = *(uint *)(in_EDX + 0x1a),
       (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) == param_4)
       ))) && (uVar3 = *(uint *)(in_EDX + 0x1e),
              (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) ==
              *(uint *)(in_ECX + 8))) {
    bVar7 = (char)uVar8 << 2;
    uVar3 = (uint)bVar7;
    uVar4 = (uint)(ushort)(*(ushort *)(in_EDX + 0x10) << 8 | *(ushort *)(in_EDX + 0x10) >> 8);
    if ((((uVar4 + 0xe <= param_3 && uVar3 + 0x14 <= uVar4) && 0x13 < bVar7) &&
        (uVar8 = *(ushort *)(in_EDX + 0xe + uVar3), (ushort)(uVar8 << 8 | uVar8 >> 8) == param_6))
       && (iVar6 = in_EDX + 0xe + uVar3,
          (ushort)(*(ushort *)(iVar6 + 2) << 8 | *(ushort *)(iVar6 + 2) >> 8) == param_5)) {
      if (*(byte *)(iVar6 + 0xc) < 0x50) {
        return 0;
      }
      uVar5 = *(byte *)(iVar6 + 0xc) >> 2 & 0x3c;
      if (uVar4 - uVar3 < uVar5) {
        return 0;
      }
      if (param_7 != (uint *)0x0) {
        uVar1 = *(uint *)(iVar6 + 4);
        *param_7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      }
      if (param_8 != (uint *)0x0) {
        uVar1 = *(uint *)(iVar6 + 8);
        *param_8 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      }
      if (param_9 != (undefined1 *)0x0) {
        param_8 = (uint *)0x0;
        *param_9 = *(undefined1 *)(iVar6 + 0xd);
      }
      if (param_10 != (int *)0x0) {
        *param_10 = iVar6 + uVar5;
      }
      uVar2 = CONCAT31((int3)((uint)param_8 >> 8),1);
      if (param_11 == (short *)0x0) {
        return uVar2;
      }
      *param_11 = (short)(uVar4 - uVar3) - (short)uVar5;
      return uVar2;
    }
  }
  return 0;
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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#define local_84c (*(undefined1 (*)[2048])(frame + 52))
#define local_4c (*(uint *)(frame + 2100))
#define local_48 (*(int *)(frame + 2104))
#define format (*(char * *)(frame + 44))
#define local_44 (*(int *)(frame + 2108))
#define local_40 (*(uint *)(frame + 2112))
#define local_3c (*(uint *)(frame + 2116))
#define local_38 (*(void * *)(frame + 2120))
#define local_34 (*(uint *)(frame + 2124))
#define local_30 (*(uint *)(frame + 2128))
#define local_2c (*(uint *)(frame + 2132))
#define local_28 (*(int * *)(frame + 2136))
#define local_24 (*(uint *)(frame + 2140))
#define local_1e (*(ushort *)(frame + 2146))
#define local_1c (*(int * *)(frame + 2148))
#define local_18 (*(char * *)(frame + 2152))
#define local_11 (*(byte *)(frame + 2159))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb60
 */

undefined4 recovered_1000cb60(int *in_ECX,char *in_EDX,ulong param_3)

{
  unsigned char frame[2208] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  ushort *puVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort uVar10;
  char cVar11;
  undefined4 unaff_EBX = 0;
  uint3 uVar12;
  int iVar13;
  undefined2 uVar14;

  if ((in_ECX != (int *)0x0) && (*(char *)((int)in_ECX + 0x401e) == '\x01')) {
    uVar12 = (uint3)((uint)unaff_EBX >> 8);
    cVar11 = '\x01';
    if (*(ushort *)((int)in_ECX + 0x401a) < *(ushort *)(in_ECX + 0x1007)) goto LAB_1000ceaa;
    *(undefined4 *)((int)in_ECX + 0x401a) = 0;
    local_28 = in_ECX + 5;
    local_48 = (int)in_ECX + 0x1a;
    iVar13 = 0x1450;
    cVar11 = '\0';
    uVar12 = 0;
    local_1c = in_ECX;
    local_18 = in_EDX;
    do {
      local_2c = 0;
      local_4c = 0;
      local_11 = 0;
      local_38 = (void *)0x0;
      local_1e = 0;
      local_3c = 0;
      iVar6 = Ram00006800;
      if (((((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
           (uVar8 = Ram00006808, 0xb < uVar8)) &&
          ((uVar8 = Ram00006808, 299 < uVar8 &&
           (pcVar7 = (code *)UINT_00006928, pcVar7 != (code *)0x0)))) &&
         (uVar8 = (*pcVar7)(local_84c,0x800,&local_3c), in_ECX = local_1c, in_EDX = local_18,
         0xd < local_3c && uVar8 != 0)) {
        local_44 = *local_1c;
        local_34 = local_1c[1];
        local_24 = (uint)*(ushort *)((int)local_1c + 10);
        local_30 = (uint)*(ushort *)(local_1c + 2);
        uVar9 = recovered_1000ca00(local_44,(int)local_84c,local_3c,local_34,
                                   *(ushort *)((int)local_1c + 10),*(ushort *)(local_1c + 2),
                                   &local_2c,&local_4c,&local_11,(int *)&local_38,(short *)&local_1e
                                  );
        in_EDX = local_18;
        if ((char)uVar9 == '\0') {
          in_ECX = local_1c;
        }
        else {
          if ((local_11 & 4) != 0) {
            snprintf(local_18,param_3,(char *)((uintptr_t)pf_module_state+0x199fU));
            *(undefined1 *)((int)local_1c + 0x401e) = 0;
            goto LAB_1000cea8;
          }
          uVar8 = (uint)local_1e;
          if (uVar8 != 0) {
            uVar5 = local_1c[4];
            local_40 = uVar8;
            if (local_2c == uVar5) {
              if (uVar8 <= 0x4000 - *(ushort *)(local_1c + 0x1007)) {
                memcpy((void *)((uint)*(ushort *)(local_1c + 0x1007) + local_48),
                                   local_38,uVar8);
                uVar10 = (short)local_1c[0x1007] + local_1e;
                *(ushort *)(local_1c + 0x1007) = uVar10;
                iVar6 = local_1c[4];
                local_1c[4] = (uint)local_1e + iVar6;
                if ((local_11 & 1) == 0) {
                  cVar11 = '\x01';
                  in_ECX = local_1c;
                  in_EDX = local_18;
                  if (0x5b3 < uVar10 - 0x3a4d) goto LAB_1000cc99;
                  goto LAB_1000ce8b;
                }
                iVar13 = (uint)local_1e + iVar6 + 1;
                local_1c[4] = iVar13;
                *(undefined1 *)((int)local_1c + 0x401f) = 1;
                cVar11 = '\x01';
                if (*(char *)((int)local_1c + 0x401e) == '\x01') {
                  local_18 = (char *)(uint)*(ushort *)((int)local_1c + 10);
                  recovered_1000c760(*local_1c,local_28,local_1c[1],*(ushort *)((int)local_1c + 10),
                                     (short)local_1c[2],local_1c[3],iVar13,0x10,(void *)0x0,0);
                }
                goto LAB_1000ceaa;
              }
              format = (char *)((uintptr_t)pf_module_state+0x19d1U);
              goto LAB_1000ce9c;
            }
            if ((local_2c < uVar5) && (*(char *)((int)local_1c + 0x401e) == '\x01')) {
              uVar14 = (undefined2)local_24;
              local_24 = local_24 & 0xffff;
              recovered_1000c760(local_44,local_28,local_34,uVar14,(short)local_30,local_1c[3],uVar5
                                 ,0x10,(void *)0x0,0);
            }
          }
          in_ECX = local_1c;
          in_EDX = local_18;
          if ((local_11 & 1) != 0) {
            uVar8 = local_1c[4];
            if (local_2c == uVar8) {
              uVar8 = local_2c + 1;
              local_1c[4] = uVar8;
            }
            *(undefined1 *)((int)local_1c + 0x401f) = 1;
            if (*(char *)((int)local_1c + 0x401e) == '\x01') {
              iVar13 = *local_1c;
              puVar1 = (ushort *)((int)local_1c + 10);
              puVar2 = (ushort *)(local_1c + 2);
              local_18 = (char *)(uint)*puVar2;
              piVar3 = local_1c + 3;
              puVar4 = (uint *)(local_1c + 1);
              local_1c = (int *)(uint)*puVar1;
              recovered_1000c760(iVar13,local_28,*puVar4,*puVar1,*puVar2,*piVar3,uVar8,0x10,
                                 (void *)0x0,0);
            }
            goto LAB_1000ceaa;
          }
        }
      }
      else {
        iVar6 = Ram00006800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
           ((uVar8 = Ram00006808, 0xb < uVar8 &&
            ((uVar8 = Ram00006808, 0x9f < uVar8 &&
             (pcVar7 = (code *)UINT_0000689c, pcVar7 != (code *)0x0)))))) {
          (*pcVar7)();
          in_ECX = local_1c;
          in_EDX = local_18;
        }
        if (cVar11 != '\0') {
          if ((cVar11 == '\0') || (*(char *)((int)in_ECX + 0x401e) != '\x01')) goto LAB_1000ce90;
          uVar14 = *(undefined2 *)((int)in_ECX + 10);
          recovered_1000c760(*in_ECX,local_28,in_ECX[1],uVar14,(short)in_ECX[2],in_ECX[3],in_ECX[4],
                             0x10,(void *)0x0,0);
          uVar12 = (uint3)(byte)((ushort)uVar14 >> 8);
          cVar11 = '\x01';
          goto LAB_1000ceaa;
        }
      }
LAB_1000cc99:
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    if (cVar11 != '\0') {
      if (cVar11 != '\0') {
LAB_1000ce8b:
        recovered_1000cf30(in_ECX);
      }
LAB_1000ce90:
      cVar11 = '\x01';
      goto LAB_1000ceaa;
    }
    format = (char *)((uintptr_t)pf_module_state+0x19e7U);
LAB_1000ce9c:
    snprintf(in_EDX,param_3,format);
  }
LAB_1000cea8:
  cVar11 = '\0';
  uVar12 = 0;
LAB_1000ceaa:
  return CONCAT31(uVar12,cVar11);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef UINT_00006928
#undef local_84c
#undef local_4c
#undef local_48
#undef format
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1e
#undef local_1c
#undef local_18
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf30
 */

void recovered_1000cf30(int *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(char *)((int)in_ECX + 0x401e) == '\x01') {
    recovered_1000c760(*in_ECX,in_ECX + 5,in_ECX[1],*(undefined2 *)((int)in_ECX + 10),
                       (short)in_ECX[2],in_ECX[3],in_ECX[4],0x10,(void *)0x0,0);
  }
  return;
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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#define local_14 (*(void * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf80
 */

undefined4 recovered_1000cf80(int *in_ECX,void *in_EDX,uint param_3,char *param_4,ulong param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  uint uVar5;

  if (((in_ECX != (int *)0x0) && (*(char *)((int)in_ECX + 0x401e) == '\x01')) &&
     (in_EDX != (void *)0x0 || param_3 == 0)) {
    if (param_3 == 0) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    local_14 = in_EDX;
    while( true ) {
      uVar5 = param_3;
      if (0x5b3 < param_3) {
        uVar5 = 0x5b4;
      }
      bVar3 = recovered_1000c760(*in_ECX,in_ECX + 5,in_ECX[1],*(undefined2 *)((int)in_ECX + 10),
                                 (short)in_ECX[2],in_ECX[3],in_ECX[4],0x18,local_14,(ushort)uVar5);
      if (!bVar3) break;
      in_ECX[3] = in_ECX[3] + uVar5;
      uVar4 = Ram00006800;
      if (((uVar4 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
         ((uVar4 = Ram00006808, 0xb < uVar4 && (uVar4 = Ram00006808, 0x9f < uVar4)))) {
        pcVar2 = (code *)UINT_0000689c;
        uVar4 = 0;
        if (pcVar2 != (code *)0x0) {
          uVar4 = (*pcVar2)();
        }
      }
      local_14 = (void *)((int)local_14 + uVar5);
      param_3 = param_3 - uVar5;
      if (param_3 == 0) {
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
    snprintf(param_4,param_5,(char *)((uintptr_t)pf_module_state+0x19fbU));
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef local_14

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
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d080
 */

void recovered_1000d080(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x8f < uVar2 && (pcVar3 = (code *)UINT_0000688c, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(in_ECX);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000688c

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
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d0d0
 */

uint recovered_1000d0d0(char *in_ECX,void *in_EDX,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0x3b < uVar3 && (pcVar2 = (code *)UINT_00006838, pcVar2 != (code *)0x0))
     )) {
    uVar3 = (*pcVar2)(in_ECX,in_EDX,param_3);
    return uVar3;
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d120
 */

undefined4 recovered_1000d120(char *in_ECX,char *in_EDX,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  char *s;

  if ((param_3 == (undefined1 *)0x0) ||
     (*param_3 = 0, in_EDX == (char *)0x0 || in_ECX == (char *)0x0)) {
    return 0;
  }
  uVar1 = strlen(in_EDX);
  s = in_ECX;
joined_r0x1000d157:
  if (uVar1 == 0) {
    return 0;
  }
  if (*s == '\0') {
    return 0;
  }
  do {
    uVar7 = 0;
    while (bVar8 = s[uVar7], bVar8 != 0) {
      if ((byte)(bVar8 + 0xbf) < 0x1a) {
        bVar8 = bVar8 | 0x20;
      }
      bVar9 = in_EDX[uVar7];
      if ((byte)(bVar9 + 0xbf) < 0x1a) {
        bVar9 = bVar9 | 0x20;
      }
      if (bVar8 != bVar9) break;
      uVar7 = uVar7 + 1;
      if (uVar1 == uVar7) goto LAB_1000d1e0;
    }
    if (uVar1 == uVar7) break;
    pcVar4 = s + 1;
    s = s + 1;
    if (*pcVar4 == '\0') {
      return 0;
    }
  } while( true );
LAB_1000d1e0:
  if (s == in_ECX) {
    uVar1 = strlen(in_EDX);
    pbVar2 = (byte *)(in_ECX + uVar1);
  }
  else {
    uVar10 = (uint)(byte)s[-1];
    uVar1 = strlen(in_EDX);
    pbVar2 = (byte *)(s + uVar1);
    if (uVar10 < 0x2d) {
                    /* WARNING: Could not emulate address calculation at 0x1000d1fa */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(uVar10 * 4 + ((uintptr_t)pf_module_state+0x6ddU)))();
      return uVar3;
    }
    if (uVar10 != 0x7d) goto LAB_1000d170;
  }
  uVar10 = *pbVar2 - 9;
  if (uVar10 < 0x24) {
                    /* WARNING: Could not emulate address calculation at 0x1000d225 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(uVar10 * 4 + ((uintptr_t)pf_module_state+0x791U)))();
    return uVar3;
  }
  if ((*pbVar2 == 0x7b) && (pcVar4 = strchr(s,0x7b), pcVar4 != (char *)0x0)) {
    pcVar5 = strchr(pcVar4 + 1,0x7d);
    if (pcVar5 != (char *)0x0) {
      pcVar5 = pcVar5 + ~(uint)pcVar4;
      if (0x3fe < (int)pcVar5) {
        pcVar5 = (char *)0x3ff;
      }
      pvVar6 = memcpy(param_3,pcVar4 + 1,(ulong)pcVar5);
      param_3[(int)pcVar5] = 0;
      return CONCAT31((int3)((uint)pvVar6 >> 8),1);
    }
  }
LAB_1000d170:
  s = s + 1;
  uVar1 = strlen(in_EDX);
  goto joined_r0x1000d157;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2c0
 */

undefined4 recovered_1000d2c0(char *in_ECX,char *in_EDX,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  char *pcVar9;

  if (in_EDX == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = strlen(in_EDX);
  }
  if (((param_3 == (undefined1 *)0x0) ||
      (*param_3 = 0, uVar2 == 0 || (in_ECX == (char *)0x0 || in_EDX == (char *)0x0))) ||
     (uVar3 = strlen(in_EDX), uVar3 == 0)) {
    return 0;
  }
  pcVar9 = in_ECX;
LAB_1000d356:
  if (*pcVar9 == '\0') {
    return 0;
  }
  do {
    uVar7 = 0;
    while (bVar8 = pcVar9[uVar7], bVar8 != 0) {
      if ((byte)(bVar8 + 0xbf) < 0x1a) {
        bVar8 = bVar8 | 0x20;
      }
      bVar6 = in_EDX[uVar7];
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar8 != bVar6) break;
      uVar7 = uVar7 + 1;
      if (uVar3 == uVar7) goto LAB_1000d3c0;
    }
    if (uVar3 == uVar7) break;
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    if (*pcVar1 == '\0') {
      return 0;
    }
  } while( true );
LAB_1000d3c0:
  if ((((pcVar9 == in_ECX) || ((pcVar9[-1] & 0xbfU) == 0x3b)) ||
      ((uVar4 = (byte)pcVar9[-1] - 9, uVar4 < 0x18 && ((0x80001bU >> (uVar4 & 0x1f) & 1) != 0)))) &&
     ((byte)pcVar9[uVar2] - 9 < 0x32)) {
                    /* WARNING: Could not emulate address calculation at 0x1000d403 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(((byte)pcVar9[uVar2] - 9) * 4 + ((uintptr_t)pf_module_state+0x821U)))();
    return uVar5;
  }
  pcVar9 = pcVar9 + 1;
  uVar3 = strlen(in_EDX);
  if (uVar3 == 0) {
    return 0;
  }
  goto LAB_1000d356;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4d0
 */

undefined4 recovered_1000d4d0(byte *in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  undefined4 uVar3;

  if (in_EDX == (undefined4 *)0x0 || in_ECX == (byte *)0x0) {
    return 0;
  }
  bVar1 = *in_ECX;
  uVar2 = (uint)bVar1;
  if (uVar2 < 0x24) {
                    /* WARNING: Could not emulate address calculation at 0x1000d4f8 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(uVar2 * 4 + ((uintptr_t)pf_module_state+0x9b1U)))();
    return uVar3;
  }
  if ((byte)(bVar1 + 0xbf) < 0x1a) {
    uVar2 = (uint)(bVar1 | 0x20);
  }
  if ((char)uVar2 == 'b') {
    bVar1 = in_ECX[1];
    if (bVar1 != 0) {
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      if ((bVar1 == 0x6c) && (bVar1 = in_ECX[2], bVar1 != 0)) {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 == 0x61) && (bVar1 = in_ECX[3], bVar1 != 0)) {
          if ((byte)(bVar1 + 0xbf) < 0x1a) {
            bVar1 = bVar1 | 0x20;
          }
          if ((bVar1 == 99) && (bVar1 = in_ECX[4], bVar1 != 0)) {
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar1 = bVar1 | 0x20;
            }
            uVar3 = 0xff;
            if (bVar1 == 0x6b) goto LAB_1000d7b8;
          }
        }
      }
    }
  }
  else if ((uVar2 == 0x77) && (bVar1 = in_ECX[1], bVar1 != 0)) {
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((bVar1 == 0x68) && (bVar1 = in_ECX[2], bVar1 != 0)) {
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      if ((bVar1 == 0x69) && (bVar1 = in_ECX[3], bVar1 != 0)) {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 == 0x74) && (bVar1 = in_ECX[4], bVar1 != 0)) {
          if ((byte)(bVar1 + 0xbf) < 0x1a) {
            bVar1 = bVar1 | 0x20;
          }
          uVar3 = 0xffffffff;
          if (bVar1 == 0x65) {
LAB_1000d7b8:
            *in_EDX = uVar3;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


#undef DAT_0181c569
#define DAT_0181c569 (*(char *)(0x181c569U))
#undef DAT_0181c56f
#define DAT_0181c56f (*(uint8_t *)(0x181c56fU))
#undef DAT_0181c570
#define DAT_0181c570 (*(uint8_t *)(0x181c570U))
#undef DAT_0181c571
#define DAT_0181c571 (*(uint8_t *)(0x181c571U))
#undef DAT_0181c572
#define DAT_0181c572 (*(uint8_t *)(0x181c572U))
#undef DAT_0181c573
#define DAT_0181c573 (*(uint8_t *)(0x181c573U))
#undef DAT_0181c574
#define DAT_0181c574 (*(uint8_t *)(0x181c574U))
#undef DAT_0181c575
#define DAT_0181c575 (*(uint8_t *)(0x181c575U))
#undef DAT_0181c576
#define DAT_0181c576 (*(uint8_t *)(0x181c576U))
#undef DAT_0181c577
#define DAT_0181c577 (*(uint8_t *)(0x181c577U))
#undef DAT_0181c578
#define DAT_0181c578 (*(uint8_t *)(0x181c578U))
#undef DAT_0181c579
#define DAT_0181c579 (*(uint8_t *)(0x181c579U))
#undef DAT_0181c57a
#define DAT_0181c57a (*(uint8_t *)(0x181c57aU))
#undef DAT_0181c57b
#define DAT_0181c57b (*(uint8_t *)(0x181c57bU))
#undef DAT_0181c57c
#define DAT_0181c57c (*(uint8_t *)(0x181c57cU))
#undef DAT_0181c583
#define DAT_0181c583 (*(uint8_t *)(0x181c583U))
#undef DAT_0181c58a
#define DAT_0181c58a (*(uint8_t *)(0x181c58aU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d8d0
 */

undefined4 recovered_1000d8d0(byte *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  byte bVar5;
  char *pcVar6;

  if (in_ECX == (byte *)0x0) goto LAB_1000dccd;
  bVar1 = *in_ECX;
  pcVar3 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1dc6U)) == '\0') goto LAB_1000dd1d;
LAB_1000dcc3:
    pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd3U));
LAB_1000dcc8:
    if (*pcVar3 == '\0') goto LAB_1000dd1d;
  }
  else {
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      pcVar6 = (char *)(uint)(bVar1 | 0x20);
    }
    else {
      pcVar6 = pcVar3;
    }
    if (pcVar6 + -100 < (char *)0x10) {
                    /* WARNING: Could not emulate address calculation at 0x1000d912 */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((int)(pcVar6 + -100) * 4 + ((uintptr_t)pf_module_state+0xa41U)))();
      return uVar4;
    }
    bVar5 = bVar1;
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar5 = bVar1 | 0x20;
    }
    if (bVar5 != 0x61) goto LAB_1000dccd;
    bVar5 = in_ECX[1];
    if (bVar5 == 0) {
      pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dccU));
LAB_1000dc2c:
      if (*pcVar6 == '\0') goto LAB_1000dd1d;
      if ((char)pcVar3 == '\0') goto LAB_1000dcc3;
    }
    else {
      pcVar3 = (char *)(uint)CONCAT11(bVar5 + 0xbf,bVar1);
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      if (bVar5 == 0x72) {
        bVar5 = in_ECX[2];
        if (bVar5 == 0) {
          pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dcdU));
        }
        else {
          pcVar3 = (char *)(uint)CONCAT11(bVar5 + 0xbf,bVar1);
          if ((byte)(bVar5 + 0xbf) < 0x1a) {
            bVar5 = bVar5 | 0x20;
          }
          if (bVar5 != 0x74) goto code_r0x1000dc46;
          bVar5 = in_ECX[3];
          if (bVar5 == 0) {
            pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dceU));
          }
          else {
            pcVar3 = (char *)(uint)CONCAT11(bVar5 + 0xbf,bVar1);
            if ((byte)(bVar5 + 0xbf) < 0x1a) {
              bVar5 = bVar5 | 0x20;
            }
            if (bVar5 != 0x69) goto code_r0x1000dc46;
            bVar5 = in_ECX[4];
            if (bVar5 == 0) {
              pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dcfU));
            }
            else {
              pcVar3 = (char *)(uint)CONCAT11(bVar5 + 0xbf,bVar1);
              if ((byte)(bVar5 + 0xbf) < 0x1a) {
                bVar5 = bVar5 | 0x20;
              }
              if (bVar5 != 99) goto code_r0x1000dc46;
              bVar5 = in_ECX[5];
              if (bVar5 == 0) {
                pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd0U));
              }
              else {
                pcVar3 = (char *)(uint)CONCAT11(bVar5 + 0xbf,bVar1);
                if ((byte)(bVar5 + 0xbf) < 0x1a) {
                  bVar5 = bVar5 | 0x20;
                }
                if (bVar5 != 0x6c) goto code_r0x1000dc46;
                bVar5 = in_ECX[6];
                if (bVar5 == 0) {
                  pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd1U));
                }
                else {
                  pcVar3 = (char *)(uint)CONCAT11(bVar5 + 0xbf,bVar1);
                  if ((byte)(bVar5 + 0xbf) < 0x1a) {
                    bVar5 = bVar5 | 0x20;
                  }
                  if ((bVar5 != 0x65) || (in_ECX[7] != 0)) goto code_r0x1000dc46;
                  pcVar6 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd2U));
                }
              }
            }
          }
        }
        goto LAB_1000dc2c;
      }
    }
code_r0x1000dc46:
    bVar1 = in_ECX[1];
    if (bVar1 == 0) {
      pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd4U));
      goto LAB_1000dcc8;
    }
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if (bVar1 == 0x73) {
      bVar1 = in_ECX[2];
      if (bVar1 == 0) {
        pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd5U));
      }
      else {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if (bVar1 != 0x69) goto LAB_1000dccd;
        bVar1 = in_ECX[3];
        if (bVar1 == 0) {
          pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd6U));
        }
        else {
          if ((byte)(bVar1 + 0xbf) < 0x1a) {
            bVar1 = bVar1 | 0x20;
          }
          if (bVar1 != 100) goto LAB_1000dccd;
          bVar1 = in_ECX[4];
          if (bVar1 == 0) {
            pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd7U));
          }
          else {
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar1 = bVar1 | 0x20;
            }
            if ((bVar1 != 0x65) || (in_ECX[5] != 0)) goto LAB_1000dccd;
            pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd8U));
          }
        }
      }
      goto LAB_1000dcc8;
    }
  }
LAB_1000dccd:
  bVar2 = recovered_10007c80(in_ECX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd9U)));
  pcVar3 = (char *)CONCAT31(extraout_var,bVar2);
  if (!bVar2) {
    bVar2 = recovered_10007c80(in_ECX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de0U)));
    pcVar3 = (char *)CONCAT31(extraout_var_00,bVar2);
    if (!bVar2) {
      bVar2 = recovered_10007c80(in_ECX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U)));
      pcVar3 = (char *)CONCAT31(extraout_var_01,bVar2);
      if (!bVar2) {
        bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1debU));
        pcVar3 = (char *)CONCAT31(extraout_var_02,bVar2);
        if (!bVar2) {
          bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1df2U));
          pcVar3 = (char *)CONCAT31(extraout_var_03,bVar2);
          if (!bVar2) {
            bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1c3eU));
            return CONCAT31(extraout_var_04,bVar2);
          }
        }
      }
    }
  }
LAB_1000dd1d:
  return CONCAT31((int3)((uint)pcVar3 >> 8),1);
}

#undef DAT_0181c569
#undef DAT_0181c56f
#undef DAT_0181c570
#undef DAT_0181c571
#undef DAT_0181c572
#undef DAT_0181c573
#undef DAT_0181c574
#undef DAT_0181c575
#undef DAT_0181c576
#undef DAT_0181c577
#undef DAT_0181c578
#undef DAT_0181c579
#undef DAT_0181c57a
#undef DAT_0181c57b
#undef DAT_0181c57c
#undef DAT_0181c583
#undef DAT_0181c58a

#define local_374 (*(int *)(frame + 28))
#define local_370 (*(int *)(frame + 32))
#define local_2c (*(undefined4 *)(frame + 868))
#define local_20 (*(undefined4 *)(frame + 880))
#define local_1c (*(undefined4 *)(frame + 884))
#define local_18 (*(undefined4 *)(frame + 888))
#define local_14 (*(undefined1 *)(frame + 892))
#define local_380 (*(undefined4 (*)[2])(frame + 16))
#define local_378 (*(undefined4 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd60
 */

void recovered_1000dd60(int in_ECX,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  unsigned char frame[944] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (0 < param_4 && 0 < param_3) {
    memset(local_380,0,0x370);
    local_380[0] = 7;
    local_378 = param_2;
    local_374 = param_3;
    local_370 = param_4;
    local_20 = param_5;
    local_1c = param_6;
    local_18 = param_7;
    local_14 = param_8;
    local_2c = 0xffffffff;
    uVar1 = *(uint *)(in_ECX + 0x52c2c);
    if (uVar1 < 0x180) {
      *(uint *)(in_ECX + 0x52c2c) = uVar1 + 1;
      memcpy((void *)(in_ECX + 0x42c + uVar1 * 0x370),local_380,0x370);
    }
  }
  return;
}

#undef local_374
#undef local_370
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_380
#undef local_378

#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181bd30
#define DAT_0181bd30 (*(uint8_t *)(0x181bd30U))
#undef DAT_0181bd31
#define DAT_0181bd31 (*(uint8_t *)(0x181bd31U))
#undef DAT_0181bd32
#define DAT_0181bd32 (*(uint8_t *)(0x181bd32U))
#undef DAT_0181bd33
#define DAT_0181bd33 (*(uint8_t *)(0x181bd33U))
#undef DAT_0181bd34
#define DAT_0181bd34 (*(uint8_t *)(0x181bd34U))
#undef DAT_0181bd3f
#define DAT_0181bd3f (*(uint8_t *)(0x181bd3fU))
#undef DAT_0181bd40
#define DAT_0181bd40 (*(uint8_t *)(0x181bd40U))
#undef DAT_0181bd41
#define DAT_0181bd41 (*(uint8_t *)(0x181bd41U))
#undef DAT_0181bd42
#define DAT_0181bd42 (*(uint8_t *)(0x181bd42U))
#undef DAT_0181bd43
#define DAT_0181bd43 (*(uint8_t *)(0x181bd43U))
#undef DAT_0181bd44
#define DAT_0181bd44 (*(uint8_t *)(0x181bd44U))
#undef DAT_0181c5a1
#define DAT_0181c5a1 (*(uint8_t *)(0x181c5a1U))
#undef DAT_0181c5a2
#define DAT_0181c5a2 (*(uint8_t *)(0x181c5a2U))
#undef DAT_0181c5a3
#define DAT_0181c5a3 (*(uint8_t *)(0x181c5a3U))
#undef DAT_0181c5a4
#define DAT_0181c5a4 (*(uint8_t *)(0x181c5a4U))
#undef DAT_0181c5a5
#define DAT_0181c5a5 (*(uint8_t *)(0x181c5a5U))
#undef DAT_0181c5a6
#define DAT_0181c5a6 (*(uint8_t *)(0x181c5a6U))
#undef DAT_0181c5a7
#define DAT_0181c5a7 (*(uint8_t *)(0x181c5a7U))
#undef DAT_0181c5a8
#define DAT_0181c5a8 (*(uint8_t *)(0x181c5a8U))
#define local_47 (*(byte *)(frame + 153))
#define local_46 (*(byte *)(frame + 154))
#define local_45 (*(byte *)(frame + 155))
#define local_44 (*(byte *)(frame + 156))
#define local_43 (*(byte *)(frame + 157))
#define local_42 (*(char *)(frame + 158))
#define local_20 (*(int *)(frame + 192))
#define local_1c (*(char * *)(frame + 196))
#define local_18 (*(byte * *)(frame + 200))
#define local_11 (*(byte *)(frame + 207))
#define local_c8 (*(byte (*)[128])(frame + 24))
#define local_48 (*(byte *)(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de30
 */

char * recovered_1000de30(int in_ECX,byte *in_EDX)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *s;
  byte bVar4;
  char *pcVar5;
  byte *pbVar6;

  local_1c = (char *)(in_ECX + 1);
  if (in_EDX == (byte *)0x0) {
    return local_1c;
  }
  bVar4 = *in_EDX;
  if (bVar4 == 0) {
    return local_1c;
  }
  local_18 = in_EDX;
  uVar2 = recovered_10012880(in_EDX);
  if ((char)uVar2 != '\0') {
    return local_1c;
  }
  if ((byte)(bVar4 + 0xbf) < 0x1a) {
    bVar4 = bVar4 | 0x20;
  }
  if (bVar4 == 0x74) {
    bVar4 = local_18[1];
    if (bVar4 == 0) {
      pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dfeU));
    }
    else {
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if (bVar4 != 0x65) goto LAB_1000e143;
      bVar4 = local_18[2];
      if (bVar4 == 0) {
        pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dffU));
      }
      else {
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if (bVar4 != 0x6d) goto LAB_1000e143;
        bVar4 = local_18[3];
        if (bVar4 == 0) {
          pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e00U));
        }
        else {
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar4 != 0x70) goto LAB_1000e143;
          bVar4 = local_18[4];
          if (bVar4 == 0) {
            pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e01U));
          }
          else {
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar4 != 0x6c) goto LAB_1000e143;
            bVar4 = local_18[5];
            if (bVar4 == 0) {
              pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e02U));
            }
            else {
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                bVar4 = bVar4 | 0x20;
              }
              if (bVar4 != 0x61) goto LAB_1000e143;
              bVar4 = local_18[6];
              if (bVar4 == 0) {
                pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e03U));
              }
              else {
                if ((byte)(bVar4 + 0xbf) < 0x1a) {
                  bVar4 = bVar4 | 0x20;
                }
                if (bVar4 != 0x74) goto LAB_1000e143;
                bVar4 = local_18[7];
                if (bVar4 == 0) {
                  pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e04U));
                }
                else {
                  if ((byte)(bVar4 + 0xbf) < 0x1a) {
                    bVar4 = bVar4 | 0x20;
                  }
                  if ((bVar4 != 0x65) || (local_18[8] != 0)) goto LAB_1000e143;
                  pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e05U));
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (bVar4 != 0x73) goto LAB_1000e143;
    bVar4 = local_18[1];
    if (bVar4 == 0) {
      pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
LAB_1000e08c:
      if (*pcVar3 == '\0') goto LAB_1000e412;
    }
    else {
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if (bVar4 == 99) {
        bVar4 = local_18[2];
        if (bVar4 == 0) {
          pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
        }
        else {
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar4 != 0x72) goto LAB_1000e095;
          bVar4 = local_18[3];
          if (bVar4 == 0) {
            pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
          }
          else {
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar4 != 0x69) goto LAB_1000e095;
            bVar4 = local_18[4];
            if (bVar4 == 0) {
              pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
            }
            else {
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                bVar4 = bVar4 | 0x20;
              }
              if (bVar4 != 0x70) goto LAB_1000e095;
              bVar4 = local_18[5];
              if (bVar4 == 0) {
                pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
              }
              else {
                if ((byte)(bVar4 + 0xbf) < 0x1a) {
                  bVar4 = bVar4 | 0x20;
                }
                if ((bVar4 != 0x74) || (local_18[6] != 0)) goto LAB_1000e095;
                pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U));
              }
            }
          }
        }
        goto LAB_1000e08c;
      }
    }
LAB_1000e095:
    bVar4 = local_18[1];
    if (bVar4 == 0) {
      pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158dU));
    }
    else {
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if (bVar4 != 0x74) goto LAB_1000e143;
      bVar4 = local_18[2];
      if (bVar4 == 0) {
        pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158eU));
      }
      else {
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if (bVar4 != 0x79) goto LAB_1000e143;
        bVar4 = local_18[3];
        if (bVar4 == 0) {
          pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158fU));
        }
        else {
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar4 != 0x6c) goto LAB_1000e143;
          bVar4 = local_18[4];
          if (bVar4 == 0) {
            pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1590U));
          }
          else {
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if ((bVar4 != 0x65) || (local_18[5] != 0)) goto LAB_1000e143;
            pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1591U));
          }
        }
      }
    }
  }
  if (*pcVar3 == '\0') {
LAB_1000e412:
    pcVar3 = recovered_10012c50(in_ECX,local_18);
    return pcVar3;
  }
LAB_1000e143:
  if (*local_1c == '\0') {
    return local_1c;
  }
  local_20 = 1;
  pbVar6 = local_18;
  pcVar3 = local_1c;
  do {
    while( true ) {
      s = strchr(pcVar3,0x3c);
      if (s == (char *)0x0) {
        return local_1c;
      }
      pcVar3 = strchr(s,0x3e);
      if (pcVar3 == (char *)0x0) {
        return local_1c;
      }
      local_11 = 0;
      local_48 = 0;
      if ((pcVar3 <= s) || (*s != '<')) break;
      pcVar5 = pcVar3 + ~(uint)s;
      if (0x7e < (int)pcVar5) {
        pcVar5 = (char *)0x7f;
      }
      memcpy(local_c8,s + 1,(ulong)pcVar5);
      local_c8[(int)pcVar5] = 0;
      recovered_10007bb0(local_c8,&local_48,0x28,&local_11);
      pbVar6 = local_18;
      if ((local_11 & 1) == 0) break;
LAB_1000e3a5:
      bVar1 = recovered_10012d10(s,pcVar3,pbVar6,&local_11);
      if (bVar1) {
        if (local_11 == 1) {
          local_20 = local_20 + -1;
          if (local_20 == 0) {
            return pcVar3 + 1;
          }
        }
        else {
          uVar2 = recovered_10012e00((uint)s,(uint)pcVar3);
          local_20 = local_20 + (uint)(byte)((byte)uVar2 ^ 1);
        }
      }
      pcVar3 = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        return local_1c;
      }
    }
    if (local_48 == 0) {
      pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158cU));
      goto LAB_1000e2d5;
    }
    bVar4 = local_48;
    if ((byte)(local_48 + 0xbf) < 0x1a) {
      bVar4 = local_48 | 0x20;
    }
    if (bVar4 != 0x73) goto LAB_1000e390;
    if (local_47 == 0) {
      pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
LAB_1000e304:
      if (*pcVar5 != '\0') goto code_r0x1000e311;
    }
    else {
      bVar4 = local_47;
      if ((byte)(local_47 + 0xbf) < 0x1a) {
        bVar4 = local_47 | 0x20;
      }
      if (bVar4 == 99) {
        if (local_46 == 0) {
          pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
        }
        else {
          bVar4 = local_46;
          if ((byte)(local_46 + 0xbf) < 0x1a) {
            bVar4 = local_46 | 0x20;
          }
          if (bVar4 != 0x72) goto code_r0x1000e311;
          if (local_45 == 0) {
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
          }
          else {
            bVar4 = local_45;
            if ((byte)(local_45 + 0xbf) < 0x1a) {
              bVar4 = local_45 | 0x20;
            }
            if (bVar4 != 0x69) goto code_r0x1000e311;
            if (local_44 == 0) {
              pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
            }
            else {
              bVar4 = local_44;
              if ((byte)(local_44 + 0xbf) < 0x1a) {
                bVar4 = local_44 | 0x20;
              }
              if (bVar4 != 0x70) goto code_r0x1000e311;
              if (local_43 == 0) {
                pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
              }
              else {
                bVar4 = local_43;
                if ((byte)(local_43 + 0xbf) < 0x1a) {
                  bVar4 = local_43 | 0x20;
                }
                if ((bVar4 != 0x74) || (pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U)), local_42 != '\0'))
                goto code_r0x1000e311;
              }
            }
          }
        }
        goto LAB_1000e304;
      }
code_r0x1000e311:
      if (local_47 == 0) {
        pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158dU));
LAB_1000e2d5:
        if (*pcVar5 == '\0') goto LAB_1000e160;
      }
      else {
        bVar4 = local_47;
        if ((byte)(local_47 + 0xbf) < 0x1a) {
          bVar4 = local_47 | 0x20;
        }
        if (bVar4 == 0x74) {
          if (local_46 == 0) {
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158eU));
          }
          else {
            bVar4 = local_46;
            if ((byte)(local_46 + 0xbf) < 0x1a) {
              bVar4 = local_46 | 0x20;
            }
            if (bVar4 != 0x79) goto LAB_1000e390;
            if (local_45 == 0) {
              pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158fU));
            }
            else {
              bVar4 = local_45;
              if ((byte)(local_45 + 0xbf) < 0x1a) {
                bVar4 = local_45 | 0x20;
              }
              if (bVar4 != 0x6c) goto LAB_1000e390;
              if (local_44 == 0) {
                pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1590U));
              }
              else {
                bVar4 = local_44;
                if ((byte)(local_44 + 0xbf) < 0x1a) {
                  bVar4 = local_44 | 0x20;
                }
                if ((bVar4 != 0x65) || (pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1591U)), local_43 != 0)) goto LAB_1000e390;
              }
            }
          }
          goto LAB_1000e2d5;
        }
      }
LAB_1000e390:
      bVar1 = recovered_10007c80(&local_48,(byte *)((uintptr_t)pf_module_state+0x1dfdU));
      if (!bVar1) goto LAB_1000e3a5;
    }
LAB_1000e160:
    pcVar3 = recovered_10012c50((int)pcVar3,&local_48);
    if (*pcVar3 == '\0') {
      return local_1c;
    }
  } while( true );
}

#undef DAT_0181bd2f
#undef DAT_0181bd30
#undef DAT_0181bd31
#undef DAT_0181bd32
#undef DAT_0181bd33
#undef DAT_0181bd34
#undef DAT_0181bd3f
#undef DAT_0181bd40
#undef DAT_0181bd41
#undef DAT_0181bd42
#undef DAT_0181bd43
#undef DAT_0181bd44
#undef DAT_0181c5a1
#undef DAT_0181c5a2
#undef DAT_0181c5a3
#undef DAT_0181c5a4
#undef DAT_0181c5a5
#undef DAT_0181c5a6
#undef DAT_0181c5a7
#undef DAT_0181c5a8
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
#undef local_c8
#undef local_48

#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181c5da
#define DAT_0181c5da (*(uint8_t *)(0x181c5daU))
#undef DAT_0181c5db
#define DAT_0181c5db (*(uint8_t *)(0x181c5dbU))
#undef DAT_0181c5dc
#define DAT_0181c5dc (*(uint8_t *)(0x181c5dcU))
#undef DAT_0181c5dd
#define DAT_0181c5dd (*(uint8_t *)(0x181c5ddU))
#undef DAT_0181c5de
#define DAT_0181c5de (*(uint8_t *)(0x181c5deU))
#define local_724 (*(char (*)[1024])(frame + 28))
#define local_324 (*(char (*)[512])(frame + 1052))
#define local_124 (*(byte (*)[160])(frame + 1564))
#define local_84 (*(byte (*)[97])(frame + 1724))
#define local_23 (*(byte *)(frame + 1821))
#define local_22 (*(byte *)(frame + 1822))
#define local_21 (*(byte *)(frame + 1823))
#define local_20 (*(char *)(frame + 1824))
#define local_14 (*(int *)(frame + 1836))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e430
 */

undefined4 recovered_1000e430(int in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[1888] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_EBX = 0;
  undefined4 uVar5;
  byte *pbVar6;

  if (param_3 == (char *)0x0 || in_EDX == (char *)0x0) {
    return 0;
  }
  uVar2 = recovered_100122e0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1cf4U));
  uVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if ((char)uVar2 != '\0') {
    return uVar5;
  }
  recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1e2bU),local_84 + 0x60);
  if (local_84[0x60] == 0) {
    pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e37U));
  }
  else {
    if ((byte)(local_84[0x60] + 0xbf) < 0x1a) {
      local_84[0x60] = local_84[0x60] | 0x20;
    }
    if (local_84[0x60] != 0x74) goto LAB_1000e514;
    if (local_23 == 0) {
      pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e38U));
    }
    else {
      if ((byte)(local_23 + 0xbf) < 0x1a) {
        local_23 = local_23 | 0x20;
      }
      if (local_23 != 0x72) goto LAB_1000e514;
      if (local_22 == 0) {
        pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e39U));
      }
      else {
        if ((byte)(local_22 + 0xbf) < 0x1a) {
          local_22 = local_22 | 0x20;
        }
        if (local_22 != 0x75) goto LAB_1000e514;
        if (local_21 == 0) {
          pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e3aU));
        }
        else {
          if ((byte)(local_21 + 0xbf) < 0x1a) {
            local_21 = local_21 | 0x20;
          }
          if ((local_21 != 0x65) || (pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e3bU)), local_20 != '\0')) goto LAB_1000e514;
        }
      }
    }
  }
  if (*pcVar3 == '\0') {
    return uVar5;
  }
LAB_1000e514:
  recovered_10007ce0(in_EDX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x158cU)),local_324);
  if (local_324[0] != '\0') {
    uVar2 = recovered_10012e40(local_324,(char *)((uintptr_t)pf_module_state+0x1e3cU),(byte *)((uintptr_t)pf_module_state+0x1e44U));
    if ((char)uVar2 != '\0') {
      return uVar5;
    }
    uVar2 = recovered_10012e40(local_324,(char *)((uintptr_t)pf_module_state+0x1e49U),(byte *)((uintptr_t)pf_module_state+0x1cf4U));
    if ((char)uVar2 != '\0') {
      return uVar5;
    }
  }
  if (in_ECX != 0) {
    pbVar6 = local_124;
    uVar2 = 0xa0;
    local_14 = in_ECX;
    recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1c7cU),pbVar6);
    if (local_124[0] != 0) {
      if (local_124[0] < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x1000e5c7 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)((uint)local_124[0] * 4 + ((uintptr_t)pf_module_state+0xa81U)))();
        return uVar2;
      }
      local_84[0] = 0x2e;
      iVar4 = 1;
      while( true ) {
        bVar1 = *pbVar6;
        if (bVar1 < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x1000e5e8 */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)((uint)bVar1 * 4 + ((uintptr_t)pf_module_state+0xb05U)))(uVar2);
          return uVar2;
        }
        if (iVar4 == 0x5f) break;
        pbVar6 = pbVar6 + 1;
        local_84[iVar4] = bVar1;
        iVar4 = iVar4 + 1;
      }
      local_84[0x5f] = 0;
      uVar2 = recovered_1000d120(*(char **)(local_14 + 0x314),(char *)local_84,local_724);
      if (((char)uVar2 != '\0') &&
         (uVar2 = recovered_10012e40(local_724,(char *)((uintptr_t)pf_module_state+0x1e3cU),(byte *)((uintptr_t)pf_module_state+0x1e44U)),
         (char)uVar2 != '\0')) {
        return uVar5;
      }
      uVar2 = recovered_1000d120(*(char **)(local_14 + 0x314),(char *)local_84,local_724);
      if (((char)uVar2 != '\0') &&
         (uVar2 = recovered_10012e40(local_724,(char *)((uintptr_t)pf_module_state+0x1e49U),(byte *)((uintptr_t)pf_module_state+0x1cf4U)),
         (char)uVar2 != '\0')) {
        return uVar5;
      }
      for (; 0x20 < *pbVar6; pbVar6 = pbVar6 + 1) {
      }
                    /* WARNING: Could not emulate address calculation at 0x1000e6a3 */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((uint)*pbVar6 * 4 + ((uintptr_t)pf_module_state+0xb89U)))();
      return uVar2;
    }
    recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1cebU),local_84);
    if (local_84[0] != 0) {
      snprintf(local_724,0x70,(char *)((uintptr_t)pf_module_state+0x1e54U),local_84);
      uVar2 = recovered_10012f60(local_14,local_724);
      if ((char)uVar2 != '\0') {
        return uVar5;
      }
    }
    if ((*param_3 != '\0') && (uVar2 = recovered_10012f60(local_14,param_3), (char)uVar2 != '\0')) {
      return uVar5;
    }
  }
  return 0;
}

#undef DAT_0181bd2f
#undef DAT_0181c5da
#undef DAT_0181c5db
#undef DAT_0181c5dc
#undef DAT_0181c5dd
#undef DAT_0181c5de
#undef local_724
#undef local_324
#undef local_124
#undef local_84
#undef local_23
#undef local_22
#undef local_21
#undef local_20
#undef local_14

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef DAT_0181c3af
#define DAT_0181c3af (*(uint8_t *)(0x181c3afU))
#undef DAT_0181c3b0
#define DAT_0181c3b0 (*(uint8_t *)(0x181c3b0U))
#undef DAT_0181c407
#define DAT_0181c407 (*(uint8_t *)(0x181c407U))
#undef DAT_0181c408
#define DAT_0181c408 (*(uint8_t *)(0x181c408U))
#undef DAT_0181c409
#define DAT_0181c409 (*(uint8_t *)(0x181c409U))
#define local_4dc (*(char (*)[256])(frame + 20))
#define local_3dc (*(byte (*)[512])(frame + 276))
#define local_1dc (*(char (*)[128])(frame + 788))
#define local_15c (*(char (*)[256])(frame + 916))
#define local_5c (*(byte *)(frame + 1172))
#define local_5b (*(byte *)(frame + 1173))
#define local_5a (*(char *)(frame + 1174))
#define local_34 (*(int *)(frame + 1212))
#define local_30 (*(int * *)(frame + 1216))
#define local_2c (*(int *)(frame + 1220))
#define local_28 (*(byte * *)(frame + 1224))
#define local_24 (*(uint *)(frame + 1228))
#define local_1d (*(char *)(frame + 1235))
#define local_1c (*(byte * *)(frame + 1236))
#define local_18 (*(byte * *)(frame + 1240))
#define local_11 (*(char *)(frame + 1247))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e730
 */

void recovered_1000e730(int in_ECX,int *in_EDX,int *param_3,int *param_4,byte *param_5,int param_6,
                       int param_7)

{
  unsigned char frame[1296] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined4 extraout_EAX = 0;
  undefined4 uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong n;
  char *pcVar9;
  byte *pbVar10;

  if (((param_5 != (byte *)0x0 && param_4 != (int *)0x0) &&
       (param_3 != (int *)0x0 && in_EDX != (int *)0x0)) && (local_15c[0] = '\0', 0 < param_6)) {
    iVar3 = param_7;
    if (param_7 < 2) {
      iVar3 = 1;
    }
    pbVar8 = param_5 + param_6;
    local_34 = iVar3 * 8 + 4;
    local_24 = 0;
    local_30 = in_EDX;
    local_2c = in_ECX;
    local_18 = pbVar8;
    do {
      local_1c = (byte *)local_15c;
      if ((local_24 & 1) == 0) {
        local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
      }
      local_28 = (byte *)((local_24 & 1) * 2);
      while( true ) {
        if (*param_5 == 0) {
          return;
        }
        if (*param_5 == 0x3c) break;
        n = (int)pbVar8 - (int)param_5;
        pbVar4 = param_5;
        uVar7 = n;
        do {
          if (*pbVar4 == 0x3c) goto LAB_1000e84b;
          pbVar4 = pbVar4 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        pbVar4 = (byte *)0x0;
LAB_1000e84b:
        pbVar10 = pbVar8;
        if (pbVar4 != (byte *)0x0) {
          n = (int)pbVar4 - (int)param_5;
          pbVar10 = pbVar4;
        }
        if (0x1fe < (int)n) {
          n = 0x1ff;
        }
        memcpy(local_3dc,param_5,n);
        local_3dc[n] = 0;
        recovered_10012ff0(local_2c,local_30,param_3,param_4,(char *)local_3dc,local_28,local_1c,
                           param_7);
        pbVar8 = local_18;
        param_5 = pbVar10;
        if (local_18 <= pbVar10) {
          return;
        }
      }
      iVar3 = 0;
      while (param_5[iVar3] != 0x3e) {
        iVar3 = iVar3 + 1;
        if ((int)pbVar8 - (int)param_5 == iVar3) {
          return;
        }
      }
      local_11 = '\0';
      uVar7 = iVar3 - 1;
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      memcpy(local_3dc,param_5 + 1,uVar7);
      local_3dc[uVar7] = 0;
      recovered_10007bb0(local_3dc,&local_5c,0x28,&local_11);
      if (local_11 == '\x01') {
        if (local_5c == 0) {
          pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c0cU));
        }
        else {
          bVar1 = local_5c;
          if ((byte)(local_5c + 0xbf) < 0x1a) {
            bVar1 = local_5c | 0x20;
          }
          if ((bVar1 != 0x61) || (pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c0dU)), local_5b != 0)) goto LAB_1000eb6e;
        }
        if (*pcVar5 == '\0') {
          local_15c[0] = '\0';
          local_24 = 0;
        }
        goto LAB_1000eb6e;
      }
      if (local_5c == 0) {
        pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c64U));
        goto LAB_1000eaf0;
      }
      bVar1 = local_5c;
      if ((byte)(local_5c + 0xbf) < 0x1a) {
        bVar1 = local_5c | 0x20;
      }
      if (bVar1 == 0x61 && local_5b == 0) {
        pbVar8 = param_5 + iVar3 + 1;
        local_1c = (byte *)strlen((char *)((uintptr_t)pf_module_state+0x1c9aU));
        if (local_1c == (byte *)0x0) {
LAB_1000e9b4:
          pbVar4 = (byte *)0x0;
        }
        else {
          pbVar4 = (byte *)0x0;
          if (*pbVar8 != 0) {
            pbVar4 = pbVar8;
            do {
              uVar7 = 0;
              while (bVar1 = pbVar4[uVar7], bVar1 != 0) {
                if ((byte)(bVar1 + 0xbf) < 0x1a) {
                  bVar1 = bVar1 | 0x20;
                }
                bVar2 = *(byte *)(uVar7 + ((uintptr_t)pf_module_state+0x1c9aU));
                if ((byte)(bVar2 + 0xbf) < 0x1a) {
                  bVar2 = bVar2 | 0x20;
                }
                if (bVar1 != bVar2) break;
                uVar7 = uVar7 + 1;
                if (local_1c == (byte *)uVar7) goto LAB_1000e9b6;
              }
              if (local_1c == (byte *)uVar7) goto LAB_1000e9b6;
              pbVar10 = pbVar4 + 1;
              pbVar4 = pbVar4 + 1;
            } while (*pbVar10 != 0);
            goto LAB_1000e9b4;
          }
        }
LAB_1000e9b6:
        local_28 = pbVar8;
        recovered_10007ce0((char *)local_3dc,(char *)((uintptr_t)pf_module_state+0x1562U),local_15c);
        recovered_10007ce0((char *)local_3dc,(char *)((uintptr_t)pf_module_state+0x1c9fU),local_1dc);
        local_24 = CONCAT31((int3)((uint)extraout_EAX >> 8),local_15c[0] != '\0');
        if (pbVar4 < local_18 && pbVar4 != (byte *)0x0) {
          local_1d = local_15c[0];
          local_1c = pbVar4;
          recovered_10010a50(local_2c,local_28,(int)(pbVar4 + (~(uint)param_5 - iVar3)),local_4dc,
                             0x100);
          pbVar8 = local_1c;
          if (local_1dc[0] != '\0' || local_4dc[0] != '\0') {
            pcVar5 = local_4dc;
            if (local_4dc[0] == '\0') {
              pcVar5 = local_1dc;
            }
            pcVar9 = local_15c;
            if (local_1d == '\0') {
              pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
            }
            recovered_10012ff0(local_2c,local_30,param_3,param_4,pcVar5,(uint)(local_1d != '\0') * 2
                               ,pcVar9,param_7);
            param_5 = pbVar8 + 4;
            local_15c[0] = '\0';
            local_24 = 0;
            pbVar8 = local_18;
            goto LAB_1000eb72;
          }
        }
LAB_1000eb6e:
        param_5 = param_5 + iVar3 + 1;
        pbVar8 = local_18;
      }
      else {
        if (bVar1 == 0x62) {
          if (local_5b == 0) {
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c65U));
          }
          else {
            bVar1 = local_5b;
            if ((byte)(local_5b + 0xbf) < 0x1a) {
              bVar1 = local_5b | 0x20;
            }
            if ((bVar1 != 0x72) || (pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c66U)), local_5a != '\0')) goto LAB_1000eb2c;
          }
LAB_1000eaf0:
          if (*pcVar5 == '\0') {
            *param_3 = *local_30;
            *param_4 = *param_4 + local_34;
            goto LAB_1000eb6e;
          }
        }
LAB_1000eb2c:
        uVar6 = recovered_1000e430(local_2c,(char *)local_3dc,(char *)&local_5c);
        if (((char)uVar6 == '\0') && (uVar6 = recovered_1000f380(&local_5c), (char)uVar6 == '\0'))
        goto LAB_1000eb6e;
        pbVar8 = local_18;
        param_5 = recovered_10013110(param_5 + iVar3,local_18,&local_5c);
      }
LAB_1000eb72:
    } while (param_5 < pbVar8);
  }
  return;
}

#undef DAT_0181bc65
#undef DAT_0181c3af
#undef DAT_0181c3b0
#undef DAT_0181c407
#undef DAT_0181c408
#undef DAT_0181c409
#undef local_4dc
#undef local_3dc
#undef local_1dc
#undef local_15c
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_1d
#undef local_1c
#undef local_18
#undef local_11

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef DAT_0181c3af
#define DAT_0181c3af (*(uint8_t *)(0x181c3afU))
#undef DAT_0181c3b0
#define DAT_0181c3b0 (*(uint8_t *)(0x181c3b0U))
#undef DAT_0181c407
#define DAT_0181c407 (*(uint8_t *)(0x181c407U))
#undef DAT_0181c408
#define DAT_0181c408 (*(uint8_t *)(0x181c408U))
#undef DAT_0181c409
#define DAT_0181c409 (*(uint8_t *)(0x181c409U))
#define local_28 (*(int * *)(frame + 1240))
#define local_24 (*(int *)(frame + 1244))
#define local_1d (*(char *)(frame + 1251))
#define local_1c (*(byte * *)(frame + 1252))
#define local_18 (*(byte * *)(frame + 1256))
#define local_11 (*(char *)(frame + 1263))
#define local_4e8 (*(char (*)[256])(frame + 24))
#define local_3e8 (*(byte (*)[512])(frame + 280))
#define local_1e8 (*(char (*)[128])(frame + 792))
#define local_168 (*(char (*)[256])(frame + 920))
#define local_68 (*(byte *)(frame + 1176))
#define local_67 (*(byte *)(frame + 1177))
#define local_66 (*(char *)(frame + 1178))
#define local_40 (*(int *)(frame + 1216))
#define local_3c (*(int *)(frame + 1220))
#define local_38 (*(int *)(frame + 1224))
#define local_34 (*(byte * *)(frame + 1228))
#define local_30 (*(uint *)(frame + 1232))
#define local_2c (*(int *)(frame + 1236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eba0
 */

void recovered_1000eba0(int in_ECX,int *in_EDX,byte *param_3,int param_4,int param_5)

{
  unsigned char frame[1312] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 extraout_EAX = 0;
  ulong uVar6;
  byte *pbVar7;
  ulong n;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;

  if (param_3 != (byte *)0x0 && in_EDX != (int *)0x0) {
    local_3c = *in_EDX;
    local_2c = in_EDX[2];
    local_168[0] = '\0';
    local_38 = in_ECX;
    recovered_10013710(in_ECX,in_EDX,&local_3c,&local_2c,(char *)((uintptr_t)pf_module_state+0x1c70U),0,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)),param_5);
    local_28 = in_EDX;
    if (param_4 < 1) {
      if (param_5 < 2) {
        param_5 = 1;
      }
      local_24 = param_5 << 3;
    }
    else {
      local_24 = param_5;
      if (param_5 < 2) {
        local_24 = 1;
      }
      pbVar7 = param_3 + param_4;
      local_40 = local_24 * 8 + 4;
      local_24 = local_24 << 3;
      local_30 = 0;
      local_18 = pbVar7;
      do {
        local_1c = (byte *)local_168;
        if ((local_30 & 1) == 0) {
          local_1c = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
        }
        local_34 = (byte *)((local_30 & 1) * 2);
        piVar10 = local_28;
        while( true ) {
          if (*param_3 == 0) goto LAB_1000f066;
          if (*param_3 == 0x3c) break;
          n = (int)pbVar7 - (int)param_3;
          pbVar3 = param_3;
          uVar6 = n;
          do {
            if (*pbVar3 == 0x3c) goto LAB_1000ecdb;
            pbVar3 = pbVar3 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          pbVar3 = (byte *)0x0;
LAB_1000ecdb:
          pbVar11 = pbVar7;
          if (pbVar3 != (byte *)0x0) {
            n = (int)pbVar3 - (int)param_3;
            pbVar11 = pbVar3;
          }
          if (0x1fe < (int)n) {
            n = 0x1ff;
          }
          memcpy(local_3e8,param_3,n);
          local_3e8[n] = 0;
          piVar10 = local_28;
          recovered_10012ff0(local_38,local_28,&local_3c,&local_2c,(char *)local_3e8,local_34,
                             local_1c,param_5);
          pbVar7 = local_18;
          param_3 = pbVar11;
          if (local_18 <= pbVar11) goto LAB_1000f066;
        }
        iVar8 = 0;
        while (param_3[iVar8] != 0x3e) {
          iVar8 = iVar8 + 1;
          if ((int)pbVar7 - (int)param_3 == iVar8) {
            piVar10 = local_28;
LAB_1000f066:
            local_28 = piVar10;
            goto LAB_1000f069;
          }
        }
        local_11 = '\0';
        uVar6 = iVar8 - 1;
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        memcpy(local_3e8,param_3 + 1,uVar6);
        local_3e8[uVar6] = 0;
        recovered_10007bb0(local_3e8,&local_68,0x28,&local_11);
        if (local_11 == '\x01') {
          if (local_68 == 0) {
            pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c0cU));
          }
          else {
            bVar1 = local_68;
            if ((byte)(local_68 + 0xbf) < 0x1a) {
              bVar1 = local_68 | 0x20;
            }
            if ((bVar1 != 0x61) || (pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c0dU)), local_67 != 0)) goto LAB_1000f023;
          }
          if (*pcVar4 == '\0') {
            local_168[0] = '\0';
            local_30 = 0;
          }
          goto LAB_1000f023;
        }
        if (local_68 == 0) {
          pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c64U));
          goto LAB_1000ee94;
        }
        bVar1 = local_68;
        if ((byte)(local_68 + 0xbf) < 0x1a) {
          bVar1 = local_68 | 0x20;
        }
        if (bVar1 == 0x61 && local_67 == 0) {
          pbVar3 = param_3 + iVar8 + 1;
          local_1c = (byte *)strlen((char *)((uintptr_t)pf_module_state+0x1c9aU));
          pbVar7 = (byte *)0x0;
          if ((local_1c != (byte *)0x0) && (*pbVar3 != 0)) {
            pbVar7 = pbVar3;
            do {
              uVar6 = 0;
              while (bVar1 = pbVar7[uVar6], bVar1 != 0) {
                if ((byte)(bVar1 + 0xbf) < 0x1a) {
                  bVar1 = bVar1 | 0x20;
                }
                bVar2 = *(byte *)(uVar6 + ((uintptr_t)pf_module_state+0x1c9aU));
                if ((byte)(bVar2 + 0xbf) < 0x1a) {
                  bVar2 = bVar2 | 0x20;
                }
                if (bVar1 != bVar2) break;
                uVar6 = uVar6 + 1;
                if (local_1c == (byte *)uVar6) goto LAB_1000ef1d;
              }
              if (local_1c == (byte *)uVar6) goto LAB_1000ef1d;
              pbVar11 = pbVar7 + 1;
              pbVar7 = pbVar7 + 1;
            } while (*pbVar11 != 0);
            pbVar7 = (byte *)0x0;
          }
LAB_1000ef1d:
          local_34 = pbVar3;
          recovered_10007ce0((char *)local_3e8,(char *)((uintptr_t)pf_module_state+0x1562U),local_168);
          recovered_10007ce0((char *)local_3e8,(char *)((uintptr_t)pf_module_state+0x1c9fU),local_1e8);
          local_30 = CONCAT31((int3)((uint)extraout_EAX >> 8),local_168[0] != '\0');
          if (!(local_18 <= pbVar7 || pbVar7 == (byte *)0x0)) {
            local_1d = local_168[0];
            local_1c = pbVar7;
            recovered_10010a50(local_38,local_34,(int)(pbVar7 + (~(uint)param_3 - iVar8)),local_4e8,
                               0x100);
            pbVar7 = local_1c;
            if (!(local_1e8[0] == '\0' && local_4e8[0] == '\0')) {
              pcVar4 = local_4e8;
              if (local_4e8[0] == '\0') {
                pcVar4 = local_1e8;
              }
              pcVar9 = local_168;
              if (local_1d == '\0') {
                pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
              }
              recovered_10012ff0(local_38,local_28,&local_3c,&local_2c,pcVar4,
                                 (uint)(local_1d != '\0') * 2,pcVar9,param_5);
              param_3 = pbVar7 + 4;
              local_168[0] = '\0';
              local_30 = 0;
              pbVar7 = local_18;
              goto LAB_1000f027;
            }
          }
LAB_1000f023:
          param_3 = param_3 + iVar8 + 1;
          pbVar7 = local_18;
        }
        else {
          if (bVar1 == 0x62) {
            if (local_67 == 0) {
              pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c65U));
            }
            else {
              bVar1 = local_67;
              if ((byte)(local_67 + 0xbf) < 0x1a) {
                bVar1 = local_67 | 0x20;
              }
              if ((bVar1 != 0x72) || (pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c66U)), local_66 != '\0')) goto LAB_1000eed0;
            }
LAB_1000ee94:
            if (*pcVar4 == '\0') {
              local_3c = *local_28;
              local_2c = local_2c + local_40;
              goto LAB_1000f023;
            }
          }
LAB_1000eed0:
          uVar5 = recovered_1000e430(local_38,(char *)local_3e8,(char *)&local_68);
          if (((char)uVar5 == '\0') && (uVar5 = recovered_1000f380(&local_68), (char)uVar5 == '\0'))
          goto LAB_1000f023;
          pbVar7 = local_18;
          param_3 = recovered_10013110(param_3 + iVar8,local_18,&local_68);
        }
LAB_1000f027:
      } while (param_3 < pbVar7);
    }
LAB_1000f069:
    local_28[2] = local_2c + 5 + local_24;
  }
  return;
}

#undef DAT_0181bc65
#undef DAT_0181c3af
#undef DAT_0181c3b0
#undef DAT_0181c407
#undef DAT_0181c408
#undef DAT_0181c409
#undef local_28
#undef local_24
#undef local_1d
#undef local_1c
#undef local_18
#undef local_11
#undef local_4e8
#undef local_3e8
#undef local_1e8
#undef local_168
#undef local_68
#undef local_67
#undef local_66
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c

#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#define local_3a4 (*(byte (*)[512])(frame + 28))
#define local_1a4 (*(undefined1 (*)[96])(frame + 540))
#define local_144 (*(byte (*)[96])(frame + 636))
#define local_e4 (*(undefined2 (*)[96])(frame + 732))
#define local_24 (*(ulong *)(frame + 924))
#define local_20 (*(uint *)(frame + 928))
#define local_1c (*(int *)(frame + 932))
#define local_18 (*(uint *)(frame + 936))
#define local_14 (*(int *)(frame + 940))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000f090(int in_ECX,char *in_EDX,int param_3,undefined1 *param_4,int param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint n;
  int iVar3;
  byte *pbVar4;
  uint uVar5;

  if (param_7 == (int *)0x0) {
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) + -0x48;
  }
  else {
    iVar1 = param_7[1];
  }
  iVar3 = param_5;
  if (param_5 < 2) {
    iVar3 = 1;
  }
  local_18 = iVar1 / (iVar3 * 6);
  if ((int)local_18 < 9) {
    local_18 = 8;
  }
  if (in_EDX != (char *)0x0 && param_7 != (int *)0x0) {
    local_14 = in_ECX;
    uVar2 = strlen(in_EDX);
    pbVar4 = local_3a4;
    recovered_10010a50(local_14,(byte *)in_EDX,uVar2,(char *)pbVar4,0x200);
    PF_PART1(local_e4[0], 0) = '\0';
    iVar1 = local_1c;
    while (local_3a4[0] != 0) {
      while ((local_3a4[0] - 9 < 0x18 && ((0x80001bU >> (local_3a4[0] - 9 & 0x1f) & 1) != 0))) {
        local_3a4[0] = pbVar4[1];
        pbVar4 = pbVar4 + 1;
      }
      local_1c = 0;
      while( true ) {
        if (local_3a4[0] < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x1000f173 */
                    /* WARNING: Treating indirect jump as call */
          local_1c = iVar1;
          (**(code **)((uint)local_3a4[0] * 4 + ((uintptr_t)pf_module_state+0xc0dU)))();
          return;
        }
        if (local_1c == 0x5f) break;
        local_144[local_1c] = local_3a4[0];
        local_3a4[0] = pbVar4[local_1c + 1];
        local_1c = local_1c + 1;
      }
      local_144[0x5f] = 0;
      uVar2 = strlen((char *)local_e4);
      if ((int)local_18 < (int)((uVar2 + 0x60) - (uint)((char)local_e4[0] == '\0'))) {
        recovered_10013ae0(local_14,param_3,param_4,(char *)local_e4,param_5,param_6,param_7);
      }
      if (local_18 < 0x5f) {
        uVar5 = 0;
        local_20 = 0x5f;
        do {
          n = local_18;
          if (local_20 - uVar5 <= local_18) {
            n = local_20 - uVar5;
          }
          local_24 = n;
          memcpy(local_1a4,local_144 + uVar5,n);
          local_1a4[n] = 0;
          iVar1 = local_14;
          recovered_10013ae0(local_14,param_3,param_4,(char *)local_e4,param_5,param_6,param_7);
          snprintf((char *)local_e4,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),local_1a4);
          recovered_10013ae0(iVar1,param_3,param_4,(char *)local_e4,param_5,param_6,param_7);
          uVar5 = uVar5 + local_24;
        } while (uVar5 < local_20);
      }
      else {
        if (((char)local_e4[0] != '\0') &&
           (uVar2 = strlen((char *)local_e4), uVar2 < 0xbf)) {
          *(undefined2 *)((int)local_e4 + uVar2) = 0x20;
        }
        uVar2 = strlen((char *)local_e4);
        if (uVar2 < 0xbf) {
          snprintf((char *)((int)local_e4 + uVar2),0xc0 - uVar2,(char *)((uintptr_t)pf_module_state+0x154dU),
                             local_144);
        }
      }
      pbVar4 = pbVar4 + local_1c;
      iVar1 = local_1c;
      local_3a4[0] = *pbVar4;
    }
    local_1c = iVar1;
    recovered_10013ae0(local_14,param_3,param_4,(char *)local_e4,param_5,param_6,param_7);
  }
  return;
}

#undef DAT_0181d0fc
#undef local_3a4
#undef local_1a4
#undef local_144
#undef local_e4
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181bd30
#define DAT_0181bd30 (*(uint8_t *)(0x181bd30U))
#undef DAT_0181bd31
#define DAT_0181bd31 (*(uint8_t *)(0x181bd31U))
#undef DAT_0181bd32
#define DAT_0181bd32 (*(uint8_t *)(0x181bd32U))
#undef DAT_0181bd33
#define DAT_0181bd33 (*(uint8_t *)(0x181bd33U))
#undef DAT_0181bd34
#define DAT_0181bd34 (*(uint8_t *)(0x181bd34U))
#undef DAT_0181bd3f
#define DAT_0181bd3f (*(uint8_t *)(0x181bd3fU))
#undef DAT_0181bd40
#define DAT_0181bd40 (*(uint8_t *)(0x181bd40U))
#undef DAT_0181bd41
#define DAT_0181bd41 (*(uint8_t *)(0x181bd41U))
#undef DAT_0181bd42
#define DAT_0181bd42 (*(uint8_t *)(0x181bd42U))
#undef DAT_0181bd43
#define DAT_0181bd43 (*(uint8_t *)(0x181bd43U))
#undef DAT_0181bd44
#define DAT_0181bd44 (*(uint8_t *)(0x181bd44U))
#undef DAT_0181c5a1
#define DAT_0181c5a1 (*(uint8_t *)(0x181c5a1U))
#undef DAT_0181c5a2
#define DAT_0181c5a2 (*(uint8_t *)(0x181c5a2U))
#undef DAT_0181c5a3
#define DAT_0181c5a3 (*(uint8_t *)(0x181c5a3U))
#undef DAT_0181c5a4
#define DAT_0181c5a4 (*(uint8_t *)(0x181c5a4U))
#undef DAT_0181c5a5
#define DAT_0181c5a5 (*(uint8_t *)(0x181c5a5U))
#undef DAT_0181c5a6
#define DAT_0181c5a6 (*(uint8_t *)(0x181c5a6U))
#undef DAT_0181c5a7
#define DAT_0181c5a7 (*(uint8_t *)(0x181c5a7U))
#undef DAT_0181c5a8
#define DAT_0181c5a8 (*(uint8_t *)(0x181c5a8U))
#undef DAT_0181c5fb
#define DAT_0181c5fb (*(char *)(0x181c5fbU))
#undef DAT_0181c5fc
#define DAT_0181c5fc (*(char *)(0x181c5fcU))
#undef DAT_0181c5fd
#define DAT_0181c5fd (*(char *)(0x181c5fdU))
#undef DAT_0181c5fe
#define DAT_0181c5fe (*(char *)(0x181c5feU))
#undef DAT_0181c600
#define DAT_0181c600 (*(uint8_t *)(0x181c600U))
#undef DAT_0181c601
#define DAT_0181c601 (*(uint8_t *)(0x181c601U))
#undef DAT_0181c602
#define DAT_0181c602 (*(uint8_t *)(0x181c602U))
#undef DAT_0181c603
#define DAT_0181c603 (*(uint8_t *)(0x181c603U))
#undef DAT_0181c604
#define DAT_0181c604 (*(uint8_t *)(0x181c604U))
#undef DAT_0181c605
#define DAT_0181c605 (*(uint8_t *)(0x181c605U))
#undef DAT_0181c606
#define DAT_0181c606 (*(uint8_t *)(0x181c606U))
#undef DAT_0181c607
#define DAT_0181c607 (*(uint8_t *)(0x181c607U))
#undef DAT_0181c608
#define DAT_0181c608 (*(uint8_t *)(0x181c608U))
#undef DAT_0181c609
#define DAT_0181c609 (*(uint8_t *)(0x181c609U))
#undef DAT_0181c60a
#define DAT_0181c60a (*(uint8_t *)(0x181c60aU))
#undef DAT_0181c60b
#define DAT_0181c60b (*(uint8_t *)(0x181c60bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f380
 */

undefined4 recovered_1000f380(byte *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  ushort uVar4;
  char *pcVar5;
  undefined3 extraout_var = 0;
  byte bVar6;
  byte bVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;

  if (in_ECX == (byte *)0x0) goto LAB_1000f8b9;
  bVar7 = *in_ECX;
  pcVar5 = (char *)(uint)bVar7;
  cVar8 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e58U));
  if (bVar7 == 0) {
    pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158cU));
    goto LAB_1000f3ae;
  }
  if ((byte)(bVar7 + 0xbf) < 0x1a) {
    bVar6 = bVar7 | 0x20;
    if (bVar6 == 0x73) goto LAB_1000f3d2;
LAB_1000f51d:
    bVar7 = (byte)pcVar5;
    if ((byte)(bVar7 + 0xbf) < 0x1a) {
      pcVar10 = (char *)(uint)(bVar7 | 0x20);
      if ((bVar7 | 0x20) != 0x73) goto LAB_1000f541;
LAB_1000f6ac:
      bVar7 = in_ECX[1];
      cVar8 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e59U));
      if (bVar7 != 0) {
        uVar2 = SUB41(pcVar5,0);
        pcVar5 = (char *)(uint)CONCAT11(bVar7 + 0xbf,uVar2);
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        if (bVar7 != 0x76) goto LAB_1000f729;
        bVar7 = in_ECX[2];
        cVar8 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e5aU));
        if (bVar7 != 0) {
          pcVar5 = (char *)(uint)CONCAT11(bVar7 + 0xbf,uVar2);
          if ((byte)(bVar7 + 0xbf) < 0x1a) {
            bVar7 = bVar7 | 0x20;
          }
          if ((bVar7 != 0x67) || (cVar8 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e5bU)), in_ECX[3] != 0)) goto LAB_1000f729;
        }
      }
      goto joined_r0x1000f70c;
    }
    pcVar10 = pcVar5;
    if (bVar7 == 0x73) goto LAB_1000f6ac;
LAB_1000f541:
    if (((uint)pcVar10 & 0xff) == 0x74) {
      bVar6 = in_ECX[1];
      pcVar5 = (char *)(uint)CONCAT11(bVar6,bVar7);
      if (bVar6 == 0) {
        pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dfeU));
LAB_1000f69a:
        if (*pcVar9 == '\0') goto LAB_1000f8c5;
        if ((char)pcVar5 == '\0') goto joined_r0x1000f70c;
      }
      else {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          pcVar5 = (char *)(CONCAT11(bVar6,bVar7) | 0x2000);
        }
        if ((char)((uint)pcVar5 >> 8) == 'e') {
          bVar7 = in_ECX[2];
          uVar4 = CONCAT11(bVar7,(char)pcVar5);
          pcVar5 = (char *)(uint)uVar4;
          if (bVar7 == 0) {
            pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dffU));
          }
          else {
            if ((byte)(bVar7 + 0xbf) < 0x1a) {
              pcVar5 = (char *)(uVar4 | 0x2000);
            }
            if ((char)((uint)pcVar5 >> 8) != 'm') goto LAB_1000f6a7;
            bVar7 = in_ECX[3];
            uVar4 = CONCAT11(bVar7,(char)pcVar5);
            pcVar5 = (char *)(uint)uVar4;
            if (bVar7 == 0) {
              pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e00U));
            }
            else {
              if ((byte)(bVar7 + 0xbf) < 0x1a) {
                pcVar5 = (char *)(uVar4 | 0x2000);
              }
              if ((char)((uint)pcVar5 >> 8) != 'p') goto LAB_1000f6a7;
              bVar7 = in_ECX[4];
              uVar4 = CONCAT11(bVar7,(char)pcVar5);
              pcVar5 = (char *)(uint)uVar4;
              if (bVar7 == 0) {
                pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e01U));
              }
              else {
                if ((byte)(bVar7 + 0xbf) < 0x1a) {
                  pcVar5 = (char *)(uVar4 | 0x2000);
                }
                if ((char)((uint)pcVar5 >> 8) != 'l') goto LAB_1000f6a7;
                bVar7 = in_ECX[5];
                uVar4 = CONCAT11(bVar7,(char)pcVar5);
                pcVar5 = (char *)(uint)uVar4;
                if (bVar7 == 0) {
                  pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e02U));
                }
                else {
                  if ((byte)(bVar7 + 0xbf) < 0x1a) {
                    pcVar5 = (char *)(uVar4 | 0x2000);
                  }
                  if ((char)((uint)pcVar5 >> 8) != 'a') goto LAB_1000f6a7;
                  bVar7 = in_ECX[6];
                  uVar4 = CONCAT11(bVar7,(char)pcVar5);
                  pcVar5 = (char *)(uint)uVar4;
                  if (bVar7 == 0) {
                    pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e03U));
                  }
                  else {
                    if ((byte)(bVar7 + 0xbf) < 0x1a) {
                      pcVar5 = (char *)(uVar4 | 0x2000);
                    }
                    if ((char)((uint)pcVar5 >> 8) != 't') goto LAB_1000f6a7;
                    bVar7 = in_ECX[7];
                    uVar4 = CONCAT11(bVar7,(char)pcVar5);
                    pcVar5 = (char *)(uint)uVar4;
                    if (bVar7 == 0) {
                      pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e04U));
                    }
                    else {
                      if ((byte)(bVar7 + 0xbf) < 0x1a) {
                        pcVar5 = (char *)(uVar4 | 0x2000);
                      }
                      if (((char)((uint)pcVar5 >> 8) != 'e') || (in_ECX[8] != 0)) goto LAB_1000f6a7;
                      pcVar9 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e05U));
                    }
                  }
                }
              }
            }
          }
          goto LAB_1000f69a;
        }
      }
LAB_1000f6a7:
      if ((char)pcVar10 == 's') goto LAB_1000f6ac;
    }
LAB_1000f729:
    bVar6 = (byte)pcVar5;
    bVar7 = bVar6;
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      pcVar5 = (char *)(uint)(bVar6 | 0x20);
      bVar7 = bVar6 | 0x20;
    }
    if (bVar7 != 0x61) {
      cVar8 = (char)pcVar5;
      if (((uint)pcVar5 & 0xff) != 99) goto LAB_1000f8b9;
      bVar7 = in_ECX[1];
      uVar4 = CONCAT11(bVar7,bVar6);
      pcVar5 = (char *)(uint)uVar4;
      if (bVar7 == 0) {
        pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e5dU));
LAB_1000f810:
        if (*pcVar10 == '\0') goto LAB_1000f8c5;
        if ((char)pcVar5 == '\0') goto LAB_1000f89a;
      }
      else {
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          uVar4 = uVar4 | 0x2000;
        }
        if ((char)(uVar4 >> 8) == 'a') {
          bVar7 = in_ECX[2];
          uVar4 = CONCAT11(bVar7,(char)uVar4);
          pcVar5 = (char *)(uint)uVar4;
          if (bVar7 == 0) {
            pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e5eU));
          }
          else {
            if ((byte)(bVar7 + 0xbf) < 0x1a) {
              uVar4 = uVar4 | 0x2000;
            }
            if ((char)(uVar4 >> 8) != 'n') goto LAB_1000f81d;
            bVar7 = in_ECX[3];
            uVar4 = CONCAT11(bVar7,(char)uVar4);
            pcVar5 = (char *)(uint)uVar4;
            if (bVar7 == 0) {
              pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e5fU));
            }
            else {
              if ((byte)(bVar7 + 0xbf) < 0x1a) {
                uVar4 = uVar4 | 0x2000;
              }
              if ((char)(uVar4 >> 8) != 'v') goto LAB_1000f81d;
              bVar7 = in_ECX[4];
              uVar4 = CONCAT11(bVar7,(char)uVar4);
              pcVar5 = (char *)(uint)uVar4;
              if (bVar7 == 0) {
                pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e60U));
              }
              else {
                if ((byte)(bVar7 + 0xbf) < 0x1a) {
                  uVar4 = uVar4 | 0x2000;
                }
                if ((char)(uVar4 >> 8) != 'a') goto LAB_1000f81d;
                bVar7 = in_ECX[5];
                uVar4 = CONCAT11(bVar7,(char)uVar4);
                pcVar5 = (char *)(uint)uVar4;
                if (bVar7 == 0) {
                  pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e61U));
                }
                else {
                  if ((byte)(bVar7 + 0xbf) < 0x1a) {
                    pcVar5 = (char *)(uVar4 | 0x2000);
                  }
                  if (((char)((uint)pcVar5 >> 8) != 's') || (in_ECX[6] != 0)) goto LAB_1000f81d;
                  pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e62U));
                }
              }
            }
          }
          goto LAB_1000f810;
        }
      }
LAB_1000f81d:
      if (cVar8 != 'a') goto LAB_1000f8b9;
    }
    bVar7 = in_ECX[1];
    if (bVar7 == 0) {
      pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e64U));
    }
    else {
      if ((byte)(bVar7 + 0xbf) < 0x1a) {
        bVar7 = bVar7 | 0x20;
      }
      if (bVar7 != 0x75) goto LAB_1000f8b9;
      bVar7 = in_ECX[2];
      if (bVar7 == 0) {
        pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e65U));
      }
      else {
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        if (bVar7 != 100) goto LAB_1000f8b9;
        bVar7 = in_ECX[3];
        if (bVar7 == 0) {
          pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e66U));
        }
        else {
          if ((byte)(bVar7 + 0xbf) < 0x1a) {
            bVar7 = bVar7 | 0x20;
          }
          if (bVar7 != 0x69) goto LAB_1000f8b9;
          bVar7 = in_ECX[4];
          if (bVar7 == 0) {
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e67U));
          }
          else {
            if ((byte)(bVar7 + 0xbf) < 0x1a) {
              bVar7 = bVar7 | 0x20;
            }
            if ((bVar7 != 0x6f) || (in_ECX[5] != 0)) goto LAB_1000f8b9;
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e68U));
          }
        }
      }
    }
  }
  else {
    bVar6 = bVar7;
    if (bVar7 != 0x73) goto LAB_1000f51d;
LAB_1000f3d2:
    bVar1 = in_ECX[1];
    pcVar5 = (char *)(uint)CONCAT11(bVar1,bVar7);
    if (bVar1 == 0) {
      pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
LAB_1000f489:
      if (*pcVar10 == '\0') goto LAB_1000f8c5;
    }
    else {
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        pcVar5 = (char *)(uint)(ushort)(CONCAT11(bVar1,bVar7) | 0x2000);
      }
      if ((char)((uint)pcVar5 >> 8) == 'c') {
        bVar7 = in_ECX[2];
        uVar4 = CONCAT11(bVar7,(char)pcVar5);
        pcVar5 = (char *)(uint)uVar4;
        if (bVar7 == 0) {
          pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
        }
        else {
          if ((byte)(bVar7 + 0xbf) < 0x1a) {
            pcVar5 = (char *)(uVar4 | 0x2000);
          }
          if ((char)((uint)pcVar5 >> 8) != 'r') goto LAB_1000f492;
          bVar7 = in_ECX[3];
          uVar4 = CONCAT11(bVar7,(char)pcVar5);
          pcVar5 = (char *)(uint)uVar4;
          if (bVar7 == 0) {
            pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
          }
          else {
            if ((byte)(bVar7 + 0xbf) < 0x1a) {
              pcVar5 = (char *)(uVar4 | 0x2000);
            }
            if ((char)((uint)pcVar5 >> 8) != 'i') goto LAB_1000f492;
            bVar7 = in_ECX[4];
            uVar4 = CONCAT11(bVar7,(char)pcVar5);
            pcVar5 = (char *)(uint)uVar4;
            if (bVar7 == 0) {
              pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
            }
            else {
              if ((byte)(bVar7 + 0xbf) < 0x1a) {
                pcVar5 = (char *)(uVar4 | 0x2000);
              }
              if ((char)((uint)pcVar5 >> 8) != 'p') goto LAB_1000f492;
              bVar7 = in_ECX[5];
              uVar4 = CONCAT11(bVar7,(char)pcVar5);
              pcVar5 = (char *)(uint)uVar4;
              if (bVar7 == 0) {
                pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
              }
              else {
                if ((byte)(bVar7 + 0xbf) < 0x1a) {
                  pcVar5 = (char *)(uVar4 | 0x2000);
                }
                if (((char)((uint)pcVar5 >> 8) != 't') || (in_ECX[6] != 0)) goto LAB_1000f492;
                pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U));
              }
            }
          }
        }
        goto LAB_1000f489;
      }
    }
LAB_1000f492:
    if (bVar6 != 0x73) goto LAB_1000f51d;
    bVar7 = in_ECX[1];
    if (bVar7 == 0) {
      pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158dU));
    }
    else {
      uVar2 = SUB41(pcVar5,0);
      pcVar5 = (char *)(uint)CONCAT11(bVar7 + 0xbf,uVar2);
      if ((byte)(bVar7 + 0xbf) < 0x1a) {
        bVar7 = bVar7 | 0x20;
      }
      if (bVar7 != 0x74) goto LAB_1000f51d;
      bVar7 = in_ECX[2];
      if (bVar7 == 0) {
        pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158eU));
      }
      else {
        pcVar5 = (char *)(uint)CONCAT11(bVar7 + 0xbf,uVar2);
        if ((byte)(bVar7 + 0xbf) < 0x1a) {
          bVar7 = bVar7 | 0x20;
        }
        if (bVar7 != 0x79) goto LAB_1000f51d;
        bVar7 = in_ECX[3];
        if (bVar7 == 0) {
          pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158fU));
        }
        else {
          pcVar5 = (char *)(uint)CONCAT11(bVar7 + 0xbf,uVar2);
          if ((byte)(bVar7 + 0xbf) < 0x1a) {
            bVar7 = bVar7 | 0x20;
          }
          if (bVar7 != 0x6c) goto LAB_1000f51d;
          bVar7 = in_ECX[4];
          if (bVar7 == 0) {
            pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1590U));
          }
          else {
            pcVar5 = (char *)(uint)CONCAT11(bVar7 + 0xbf,uVar2);
            if ((byte)(bVar7 + 0xbf) < 0x1a) {
              bVar7 = bVar7 | 0x20;
            }
            if ((bVar7 != 0x65) || (in_ECX[5] != 0)) goto LAB_1000f51d;
            pcVar10 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1591U));
          }
        }
      }
    }
LAB_1000f3ae:
    if (*pcVar10 == '\0') goto LAB_1000f8c5;
    if ((char)pcVar5 != '\0') goto LAB_1000f51d;
joined_r0x1000f70c:
    if (cVar8 == '\0') goto LAB_1000f8c5;
    if ((char)pcVar5 != '\0') goto LAB_1000f729;
LAB_1000f89a:
    pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e63U));
  }
  if (*pcVar5 == '\0') {
LAB_1000f8c5:
    return CONCAT31((int3)((uint)pcVar5 >> 8),1);
  }
LAB_1000f8b9:
  bVar3 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1e69U));
  return CONCAT31(extraout_var,bVar3);
}

#undef DAT_0181bd2f
#undef DAT_0181bd30
#undef DAT_0181bd31
#undef DAT_0181bd32
#undef DAT_0181bd33
#undef DAT_0181bd34
#undef DAT_0181bd3f
#undef DAT_0181bd40
#undef DAT_0181bd41
#undef DAT_0181bd42
#undef DAT_0181bd43
#undef DAT_0181bd44
#undef DAT_0181c5a1
#undef DAT_0181c5a2
#undef DAT_0181c5a3
#undef DAT_0181c5a4
#undef DAT_0181c5a5
#undef DAT_0181c5a6
#undef DAT_0181c5a7
#undef DAT_0181c5a8
#undef DAT_0181c5fb
#undef DAT_0181c5fc
#undef DAT_0181c5fd
#undef DAT_0181c5fe
#undef DAT_0181c600
#undef DAT_0181c601
#undef DAT_0181c602
#undef DAT_0181c603
#undef DAT_0181c604
#undef DAT_0181c605
#undef DAT_0181c606
#undef DAT_0181c607
#undef DAT_0181c608
#undef DAT_0181c609
#undef DAT_0181c60a
#undef DAT_0181c60b

#define local_380 (*(undefined4 *)(frame + 16))
#define local_37c (*(undefined4 *)(frame + 20))
#define local_378 (*(int *)(frame + 24))
#define local_374 (*(undefined4 *)(frame + 28))
#define local_370 (*(undefined4 *)(frame + 32))
#define local_14 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f8d0
 */

void recovered_1000f8d0(int in_ECX,undefined4 *in_EDX)

{
  unsigned char frame[944] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (in_EDX != (undefined4 *)0x0) {
    memset(&local_380,0,0x370);
    local_380 = 6;
    iVar2 = in_EDX[2];
    local_37c = *in_EDX;
    local_374 = in_EDX[1];
    local_378 = iVar2 + 9;
    local_370 = 1;
    local_14 = *(undefined1 *)(in_EDX + 3);
    uVar1 = *(uint *)(in_ECX + 0x52c2c);
    if (uVar1 < 0x180) {
      *(uint *)(in_ECX + 0x52c2c) = uVar1 + 1;
      memcpy((void *)(in_ECX + 0x42c + uVar1 * 0x370),&local_380,0x370);
      iVar2 = in_EDX[2];
    }
    in_EDX[2] = iVar2 + 0x16;
  }
  return;
}

#undef local_380
#undef local_37c
#undef local_378
#undef local_374
#undef local_370
#undef local_14

#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181c3d0
#define DAT_0181c3d0 (*(uint8_t *)(0x181c3d0U))
#undef DAT_0181c3d1
#define DAT_0181c3d1 (*(uint8_t *)(0x181c3d1U))
#undef DAT_0181c3d2
#define DAT_0181c3d2 (*(uint8_t *)(0x181c3d2U))
#undef DAT_0181c3d3
#define DAT_0181c3d3 (*(uint8_t *)(0x181c3d3U))
#undef DAT_0181c3d4
#define DAT_0181c3d4 (*(uint8_t *)(0x181c3d4U))
#undef DAT_0181c58a
#define DAT_0181c58a (*(uint8_t *)(0x181c58aU))
#undef DAT_0181c58b
#define DAT_0181c58b (*(char *)(0x181c58bU))
#undef DAT_0181c58c
#define DAT_0181c58c (*(char *)(0x181c58cU))
#undef DAT_0181c58d
#define DAT_0181c58d (*(char *)(0x181c58dU))
#undef DAT_0181c617
#define DAT_0181c617 (*(uint8_t *)(0x181c617U))
#undef DAT_0181c62c
#define DAT_0181c62c (*(uint8_t *)(0x181c62cU))
#undef DAT_0181c62d
#define DAT_0181c62d (*(uint8_t *)(0x181c62dU))
#undef DAT_0181c62e
#define DAT_0181c62e (*(uint8_t *)(0x181c62eU))
#undef DAT_0181c62f
#define DAT_0181c62f (*(uint8_t *)(0x181c62fU))
#undef DAT_0181c630
#define DAT_0181c630 (*(uint8_t *)(0x181c630U))
#undef DAT_0181c63d
#define DAT_0181c63d (*(uint8_t *)(0x181c63dU))
#undef DAT_0181c63e
#define DAT_0181c63e (*(uint8_t *)(0x181c63eU))
#undef DAT_0181c63f
#define DAT_0181c63f (*(uint8_t *)(0x181c63fU))
#undef DAT_0181c640
#define DAT_0181c640 (*(uint8_t *)(0x181c640U))
#undef DAT_0181c641
#define DAT_0181c641 (*(uint8_t *)(0x181c641U))
#undef DAT_0181c642
#define DAT_0181c642 (*(uint8_t *)(0x181c642U))
#undef DAT_0181c643
#define DAT_0181c643 (*(uint8_t *)(0x181c643U))
#undef DAT_0181c644
#define DAT_0181c644 (*(uint8_t *)(0x181c644U))
#undef DAT_0181c645
#define DAT_0181c645 (*(uint8_t *)(0x181c645U))
#undef DAT_0181c646
#define DAT_0181c646 (*(uint8_t *)(0x181c646U))
#undef DAT_0181c647
#define DAT_0181c647 (*(uint8_t *)(0x181c647U))
#undef DAT_0181c648
#define DAT_0181c648 (*(uint8_t *)(0x181c648U))
#undef DAT_0181c649
#define DAT_0181c649 (*(uint8_t *)(0x181c649U))
#undef DAT_0181c64a
#define DAT_0181c64a (*(uint8_t *)(0x181c64aU))
#undef DAT_0181c64b
#define DAT_0181c64b (*(uint8_t *)(0x181c64bU))
#define local_c9c (*(char *)(frame + 20))
#define local_c9b (*(char (*)[1023])(frame + 21))
#define local_89c (*(char *)(frame + 1044))
#define local_89b (*(char (*)[1023])(frame + 1045))
#define local_49c (*(char (*)[112])(frame + 2068))
#define local_42c (*(char (*)[96])(frame + 2180))
#define local_3cc (*(byte *)(frame + 2276))
#define local_3cb (*(byte (*)[179])(frame + 2277))
#define local_318 (*(byte *)(frame + 2456))
#define local_118 (*(char (*)[96])(frame + 2968))
#define local_b8 (*(byte (*)[160])(frame + 3064))
#define local_18 (*(char * *)(frame + 3224))
#define local_14 (*(int *)(frame + 3228))
#define abStack_317 (*(byte (*)[511])(frame + 2457))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f990
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_1000f990(int in_ECX,char *in_EDX,byte *param_3)

{
  unsigned char frame[3280] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  byte bVar10;
  char *pcVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;

  if (param_3 == (byte *)0x0 || in_EDX == (char *)0x0) {
    return false;
  }
  bVar3 = *param_3;
  if (bVar3 == 0) {
    pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c2fU));
    goto LAB_1000fa4f;
  }
  if ((byte)(bVar3 + 0xbf) < 0x1a) {
    bVar10 = bVar3 | 0x20;
    if (bVar10 == 0x6f) goto LAB_1000fa23;
LAB_1000f9e1:
    if (bVar10 != 0x75) {
LAB_1000fa5c:
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if (bVar3 != 0x6e) {
        return false;
      }
      bVar3 = param_3[1];
      cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1de8U));
      if (bVar3 != 0) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar3 != 0x61) {
          return false;
        }
        bVar3 = param_3[2];
        cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1de9U));
        if (bVar3 != 0) {
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if (bVar3 != 0x76) {
            return false;
          }
          cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1deaU));
          if (param_3[3] != 0) {
            return false;
          }
        }
      }
      goto joined_r0x1000fac2;
    }
    bVar10 = param_3[1];
    if (bVar10 == 0) {
      pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c2dU));
    }
    else {
      if ((byte)(bVar10 + 0xbf) < 0x1a) {
        bVar10 = bVar10 | 0x20;
      }
      if ((bVar10 != 0x6c) || (param_3[2] != 0)) goto LAB_1000fa5c;
      pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c2eU));
    }
    if (*pcVar11 != '\0') goto LAB_1000fa5c;
  }
  else {
    bVar10 = bVar3;
    if (bVar3 != 0x6f) goto LAB_1000f9e1;
LAB_1000fa23:
    bVar10 = param_3[1];
    if (bVar10 != 0) {
      if ((byte)(bVar10 + 0xbf) < 0x1a) {
        bVar10 = bVar10 | 0x20;
      }
      if ((bVar10 == 0x6c) && (param_3[2] == 0)) {
        pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c31U));
        goto LAB_1000fa4f;
      }
      goto LAB_1000fa5c;
    }
    pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c30U));
LAB_1000fa4f:
    if (*pcVar11 == '\0') goto LAB_1000fadd;
    cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U));
    if (bVar3 != 0) goto LAB_1000fa5c;
joined_r0x1000fac2:
    if (cVar2 != '\0') {
      return false;
    }
  }
LAB_1000fadd:
  local_b8[0x60] = 0;
  local_14 = in_ECX;
  recovered_10007ce0(in_EDX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x158cU)),&local_318);
  if ((local_318 == 0) ||
     (uVar5 = recovered_1000d2c0((char *)&local_318,(char *)((uintptr_t)pf_module_state+0x1e3cU),local_b8 + 0x60),
     (char)uVar5 == '\0')) {
    recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1cebU),local_118);
    if (local_118[0] != '\0') {
      snprintf(local_49c,0x70,(char *)((uintptr_t)pf_module_state+0x1e54U),local_118);
      uVar5 = recovered_1000d120(*(char **)(local_14 + 0x314),local_49c,&local_89c);
      if (((char)uVar5 != '\0') &&
         (uVar5 = recovered_1000d2c0(&local_89c,(char *)((uintptr_t)pf_module_state+0x1e3cU),local_b8 + 0x60),
         (char)uVar5 != '\0')) goto LAB_1000fd32;
    }
    pbVar14 = &local_3cc;
    local_18 = in_EDX;
    recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1c7cU),pbVar14);
    in_EDX = local_18;
    if (local_3cc == 0) {
      if (((*param_3 == 0) ||
          (uVar5 = recovered_1000d120(*(char **)(local_14 + 0x314),(char *)param_3,&local_89c),
          (char)uVar5 == '\0')) ||
         (uVar5 = recovered_1000d2c0(&local_89c,(char *)((uintptr_t)pf_module_state+0x1e3cU),local_b8 + 0x60),
         (char)uVar5 == '\0')) goto LAB_1000feff;
    }
    else {
      local_b8[0x60] = 0;
      while ((local_3cc - 9 < 0x18 && ((0x80001bU >> (local_3cc - 9 & 0x1f) & 1) != 0))) {
        local_3cc = pbVar14[1];
        pbVar14 = pbVar14 + 1;
      }
      iVar12 = 0;
      while( true ) {
        if (local_3cc < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x1000fc13 */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)((uint)local_3cc * 4 + ((uintptr_t)pf_module_state+0xc91U)))();
          return (bool)uVar4;
        }
        if (iVar12 == 0x5f) break;
        local_b8[iVar12] = local_3cc;
        local_3cc = pbVar14[iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      local_b8[0x5f] = 0;
      pbVar14 = pbVar14 + 0x5f;
      if (local_b8[0] == 0) {
LAB_1000fcb1:
        for (; 0x20 < *pbVar14; pbVar14 = pbVar14 + 1) {
        }
                    /* WARNING: Could not emulate address calculation at 0x1000fcb9 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)((uint)*pbVar14 * 4 + ((uintptr_t)pf_module_state+0xd15U)))();
        return (bool)uVar4;
      }
      snprintf(local_42c,0x60,(char *)((uintptr_t)pf_module_state+0x1e84U),local_b8);
      uVar5 = recovered_1000d120(*(char **)(local_14 + 0x314),local_42c,&local_c9c);
      if (((char)uVar5 == '\0') ||
         (uVar5 = recovered_1000d2c0(&local_c9c,(char *)((uintptr_t)pf_module_state+0x1e3cU),local_b8 + 0x60),
         (char)uVar5 == '\0')) goto LAB_1000fcb1;
      in_EDX = local_18;
    }
  }
LAB_1000fd32:
  if (local_b8[0x60] == 0) {
    pbVar14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e8dU));
    uVar6 = 0;
  }
  else {
    bVar3 = local_b8[0x60];
    if ((byte)(local_b8[0x60] + 0xbf) < 0x1a) {
      bVar3 = local_b8[0x60] | 0x20;
    }
    if (bVar3 == 0x66) {
      if (local_b8[0x61] == 0) {
        pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e89U));
      }
      else {
        bVar3 = local_b8[0x61];
        if ((byte)(local_b8[0x61] + 0xbf) < 0x1a) {
          bVar3 = local_b8[0x61] | 0x20;
        }
        if (bVar3 != 0x6c) goto LAB_1000fddb;
        if (local_b8[0x62] == 0) {
          pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e8aU));
        }
        else {
          bVar3 = local_b8[0x62];
          if ((byte)(local_b8[0x62] + 0xbf) < 0x1a) {
            bVar3 = local_b8[0x62] | 0x20;
          }
          if (bVar3 != 0x65) goto LAB_1000fddb;
          if (local_b8[99] == 0) {
            pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e8bU));
          }
          else {
            bVar3 = local_b8[99];
            if ((byte)(local_b8[99] + 0xbf) < 0x1a) {
              bVar3 = local_b8[99] | 0x20;
            }
            if ((bVar3 != 0x78) || (pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e8cU)), local_b8[100] != 0)) goto LAB_1000fddb;
          }
        }
      }
      if (*pcVar11 == '\0') {
        return true;
      }
    }
LAB_1000fddb:
    pbVar14 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e8dU));
    iVar12 = -0xb;
    uVar6 = (uint)CONCAT11(local_b8[0x60],local_b8[0x60]);
    do {
      if (iVar12 == 0) goto LAB_1000fe28;
      if ((byte)((char)(uVar6 >> 8) + 0xbfU) < 0x1a) {
        uVar6 = (uint)(ushort)((ushort)uVar6 | 0x2000);
      }
      bVar3 = *pbVar14;
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if ((byte)(uVar6 >> 8) != bVar3) goto LAB_1000fe28;
      iVar7 = iVar12 + 0x6c;
      uVar6 = (uint)CONCAT11(local_b8[iVar7],(char)uVar6);
      pbVar14 = pbVar14 + 1;
      iVar12 = iVar12 + 1;
    } while (local_b8[iVar7] != 0);
  }
  if (*pbVar14 == 0) {
    return true;
  }
LAB_1000fe28:
  bVar3 = (byte)uVar6;
  if (bVar3 == 0) {
    pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea0U));
LAB_1000fef6:
    cVar2 = *pcVar11;
  }
  else {
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 == 99) {
      if (local_b8[0x61] == 0) {
        pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea1U));
      }
      else {
        if ((byte)(local_b8[0x61] + 0xbf) < 0x1a) {
          local_b8[0x61] = local_b8[0x61] | 0x20;
        }
        if (local_b8[0x61] != 0x6f) goto LAB_1000feff;
        if (local_b8[0x62] == 0) {
          pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea2U));
        }
        else {
          if ((byte)(local_b8[0x62] + 0xbf) < 0x1a) {
            local_b8[0x62] = local_b8[0x62] | 0x20;
          }
          if (local_b8[0x62] != 0x6e) goto LAB_1000feff;
          if (local_b8[99] == 0) {
            pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea3U));
          }
          else {
            if ((byte)(local_b8[99] + 0xbf) < 0x1a) {
              local_b8[99] = local_b8[99] | 0x20;
            }
            if (local_b8[99] != 0x74) goto LAB_1000feff;
            if (local_b8[100] == 0) {
              pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea4U));
            }
            else {
              if ((byte)(local_b8[100] + 0xbf) < 0x1a) {
                local_b8[100] = local_b8[100] | 0x20;
              }
              if (local_b8[100] != 0x65) goto LAB_1000feff;
              if (local_b8[0x65] == 0) {
                pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea5U));
              }
              else {
                if ((byte)(local_b8[0x65] + 0xbf) < 0x1a) {
                  local_b8[0x65] = local_b8[0x65] | 0x20;
                }
                if (local_b8[0x65] != 0x6e) goto LAB_1000feff;
                if (local_b8[0x66] == 0) {
                  pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea6U));
                }
                else {
                  if ((byte)(local_b8[0x66] + 0xbf) < 0x1a) {
                    local_b8[0x66] = local_b8[0x66] | 0x20;
                  }
                  if (local_b8[0x66] != 0x74) goto LAB_1000feff;
                  if (local_b8[0x67] == 0) {
                    pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea7U));
                  }
                  else {
                    if ((byte)(local_b8[0x67] + 0xbf) < 0x1a) {
                      local_b8[0x67] = local_b8[0x67] | 0x20;
                    }
                    if ((local_b8[0x67] != 0x73) ||
                       (pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ea8U)), local_b8[0x68] != '\0')) goto LAB_1000feff;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_1000fef6;
    }
    if (bVar3 != 0x69) goto LAB_1000feff;
    if (local_b8[0x61] == 0) {
      pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9aU));
    }
    else {
      if ((byte)(local_b8[0x61] + 0xbf) < 0x1a) {
        local_b8[0x61] = local_b8[0x61] | 0x20;
      }
      if (local_b8[0x61] != 0x6e) goto LAB_1000feff;
      if (local_b8[0x62] == 0) {
        pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9bU));
      }
      else {
        if ((byte)(local_b8[0x62] + 0xbf) < 0x1a) {
          local_b8[0x62] = local_b8[0x62] | 0x20;
        }
        if (local_b8[0x62] != 0x6c) goto LAB_1000feff;
        if (local_b8[99] == 0) {
          pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9cU));
        }
        else {
          if ((byte)(local_b8[99] + 0xbf) < 0x1a) {
            local_b8[99] = local_b8[99] | 0x20;
          }
          if (local_b8[99] != 0x69) goto LAB_1000feff;
          if (local_b8[100] == 0) {
            pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9dU));
          }
          else {
            if ((byte)(local_b8[100] + 0xbf) < 0x1a) {
              local_b8[100] = local_b8[100] | 0x20;
            }
            if (local_b8[100] != 0x6e) goto LAB_1000feff;
            if (local_b8[0x65] == 0) {
              pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9eU));
            }
            else {
              if ((byte)(local_b8[0x65] + 0xbf) < 0x1a) {
                local_b8[0x65] = local_b8[0x65] | 0x20;
              }
              if ((local_b8[0x65] != 0x65) || (pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e9fU)), local_b8[0x66] != 0))
              goto LAB_1000feff;
            }
          }
        }
      }
    }
    cVar2 = *pcVar11;
  }
  if (cVar2 == '\0') {
    return true;
  }
LAB_1000feff:
  pcVar11 = &local_c9c;
  recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1c7cU),pcVar11);
  pcVar1 = &local_89c;
  recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1cebU),pcVar1);
  recovered_10007ce0(in_EDX,(char *)((uintptr_t)pf_module_state+0x1e6fU),&local_318);
  if (local_318 == 0) {
    pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e74U));
  }
  else {
    iVar12 = 0;
    do {
      iVar7 = iVar12;
      if (iVar7 == 10) goto LAB_1000ffad;
      if ((byte)(local_318 + 0xbf) < 0x1a) {
        local_318 = local_318 | 0x20;
      }
      bVar3 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1e74U)))[iVar7];
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if (local_318 != bVar3) goto LAB_1000ffad;
      local_318 = abStack_317[iVar7];
      iVar12 = iVar7 + 1;
    } while (local_318 != 0);
    pcVar8 = (char *)(iVar7 + ((uintptr_t)pf_module_state+0x1e75U));
  }
  if (*pcVar8 == '\0') {
    return true;
  }
LAB_1000ffad:
  uVar9 = strlen(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U)));
  cVar2 = local_c9c;
  if (uVar9 != 0) {
    while (cVar2 != '\0') {
      uVar13 = 0;
      while (bVar3 = pcVar11[uVar13], bVar3 != 0) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        bVar10 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U)))[uVar13];
        if ((byte)(bVar10 + 0xbf) < 0x1a) {
          bVar10 = bVar10 | 0x20;
        }
        if (bVar3 != bVar10) break;
        uVar13 = uVar13 + 1;
        if (uVar9 == uVar13) {
          return true;
        }
      }
      if (uVar9 == uVar13) {
        return true;
      }
      pcVar8 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar2 = *pcVar8;
    }
  }
  uVar9 = strlen((char *)((uintptr_t)pf_module_state+0x1e7fU));
  if ((uVar9 != 0) && (local_c9c != '\0')) {
    pcVar11 = &local_c9c;
    do {
      uVar13 = 0;
      while (bVar3 = pcVar11[uVar13], bVar3 != 0) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        bVar10 = *(byte *)(uVar13 + ((uintptr_t)pf_module_state+0x1e7fU));
        if ((byte)(bVar10 + 0xbf) < 0x1a) {
          bVar10 = bVar10 | 0x20;
        }
        if (bVar3 != bVar10) break;
        uVar13 = uVar13 + 1;
        if (uVar9 == uVar13) {
          return true;
        }
      }
      if (uVar9 == uVar13) {
        return true;
      }
      pcVar8 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar8 != '\0');
  }
  uVar9 = strlen(&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U)));
  if (uVar9 != 0) {
    while (local_89c != '\0') {
      uVar13 = 0;
      while (bVar3 = pcVar1[uVar13], bVar3 != 0) {
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        bVar10 = (&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U)))[uVar13];
        if ((byte)(bVar10 + 0xbf) < 0x1a) {
          bVar10 = bVar10 | 0x20;
        }
        if (bVar3 != bVar10) break;
        uVar13 = uVar13 + 1;
        if (uVar9 == uVar13) {
          return true;
        }
      }
      if (uVar9 == uVar13) {
        return true;
      }
      pcVar11 = pcVar1 + 1;
      pcVar1 = pcVar1 + 1;
      local_89c = *pcVar11;
    }
  }
  pcVar11 = recovered_100082e0(&local_89c,(char *)((uintptr_t)pf_module_state+0x1e7fU));
  return pcVar11 != (char *)0x0;
}

#undef DAT_0181bd2f
#undef DAT_0181c3d0
#undef DAT_0181c3d1
#undef DAT_0181c3d2
#undef DAT_0181c3d3
#undef DAT_0181c3d4
#undef DAT_0181c58a
#undef DAT_0181c58b
#undef DAT_0181c58c
#undef DAT_0181c58d
#undef DAT_0181c617
#undef DAT_0181c62c
#undef DAT_0181c62d
#undef DAT_0181c62e
#undef DAT_0181c62f
#undef DAT_0181c630
#undef DAT_0181c63d
#undef DAT_0181c63e
#undef DAT_0181c63f
#undef DAT_0181c640
#undef DAT_0181c641
#undef DAT_0181c642
#undef DAT_0181c643
#undef DAT_0181c644
#undef DAT_0181c645
#undef DAT_0181c646
#undef DAT_0181c647
#undef DAT_0181c648
#undef DAT_0181c649
#undef DAT_0181c64a
#undef DAT_0181c64b
#undef local_c9c
#undef local_c9b
#undef local_89c
#undef local_89b
#undef local_49c
#undef local_42c
#undef local_3cc
#undef local_3cb
#undef local_318
#undef local_118
#undef local_b8
#undef local_18
#undef local_14
#undef abStack_317

#define local_110 (*(byte (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010290
 */

void recovered_10010290(char *in_ECX,char *in_EDX)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((in_EDX != (char *)0x0) && (*in_EDX = '\0', in_ECX != (char *)0x0)) {
    recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x15acU),local_110);
    if (((local_110[0] == 0) || (uVar1 = recovered_10013c60(local_110), (char)uVar1 != '\0')) &&
       ((((recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1ea9U),local_110), local_110[0] == 0 ||
          (uVar1 = recovered_10013c60(local_110), (char)uVar1 != '\0')) &&
         ((recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1eb2U),local_110), local_110[0] == 0 ||
          (uVar1 = recovered_10013c60(local_110), (char)uVar1 != '\0')))) &&
        (((recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1ec0U),local_110), local_110[0] == 0 ||
          (uVar1 = recovered_10013c60(local_110), (char)uVar1 != '\0')) &&
         ((recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1eceU),local_110), local_110[0] == 0 ||
          (uVar1 = recovered_10013c60(local_110), (char)uVar1 != '\0')))))))) {
      recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1ed5U),local_110);
      uVar1 = recovered_10013dc0(local_110,in_EDX);
      if ((char)uVar1 == '\0') {
        recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1edcU),local_110);
        recovered_10013dc0(local_110,in_EDX);
      }
    }
    else {
      snprintf(in_EDX,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_110);
    }
  }
  return;
}

#undef local_110

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010450
 */

undefined4 recovered_10010450(byte *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;

  if (in_EDX == (char *)0x0) {
    return 0;
  }
  uVar2 = strlen(in_EDX);
  if ((uVar2 == 0 || in_ECX == (byte *)0x0) || (bVar4 = *in_ECX, bVar4 == 0)) {
    return 0;
  }
  while ((bVar4 - 9 < 0x18 && ((0x80001bU >> (bVar4 - 9 & 0x1f) & 1) != 0))) {
    pbVar1 = in_ECX + 1;
    in_ECX = in_ECX + 1;
    bVar4 = *pbVar1;
  }
  while (0x20 < bVar4) {
    pbVar1 = in_ECX + 1;
    in_ECX = in_ECX + 1;
    bVar4 = *pbVar1;
  }
                    /* WARNING: Could not emulate address calculation at 0x100104de */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((uint)bVar4 * 4 + ((uintptr_t)pf_module_state+0xd99U)))();
  return uVar3;
}


#define local_ec (*(char (*)[96])(frame + 1044))
#define local_8c (*(byte (*)[128])(frame + 1140))
#define local_4ec (*(char (*)[1024])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010540
 */

void recovered_10010540(int in_ECX,int in_EDX,undefined4 *in_stack_00000004)

{
  unsigned char frame[1312] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (in_EDX != 0) {
    snprintf(local_ec,0x60,(char *)((uintptr_t)pf_module_state+0x1e84U),in_EDX);
    uVar1 = recovered_1000d120(*(char **)(in_ECX + 0x314),local_ec,local_4ec);
    if ((char)uVar1 != '\0') {
      uVar1 = recovered_1000d2c0(local_4ec,(char *)((uintptr_t)pf_module_state+0x1be4U),local_8c);
      if ((char)uVar1 != '\0') {
        recovered_1000d4d0(local_8c,in_stack_00000004);
      }
    }
  }
  return;
}

#undef local_ec
#undef local_8c
#undef local_4ec

#undef DAT_0181c3e2
#define DAT_0181c3e2 (*(uint8_t *)(0x181c3e2U))
#undef DAT_0181c3e3
#define DAT_0181c3e3 (*(uint8_t *)(0x181c3e3U))
#undef DAT_0181c3e4
#define DAT_0181c3e4 (*(uint8_t *)(0x181c3e4U))
#undef DAT_0181c3e5
#define DAT_0181c3e5 (*(uint8_t *)(0x181c3e5U))
#undef DAT_0181c3e6
#define DAT_0181c3e6 (*(uint8_t *)(0x181c3e6U))
#undef DAT_0181c3e7
#define DAT_0181c3e7 (*(uint8_t *)(0x181c3e7U))
#undef DAT_0181c69d
#define DAT_0181c69d (*(uint8_t *)(0x181c69dU))
#undef DAT_0181c69e
#define DAT_0181c69e (*(uint8_t *)(0x181c69eU))
#undef DAT_0181c69f
#define DAT_0181c69f (*(uint8_t *)(0x181c69fU))
#undef DAT_0181c6a0
#define DAT_0181c6a0 (*(uint8_t *)(0x181c6a0U))
#undef DAT_0181c6a1
#define DAT_0181c6a1 (*(uint8_t *)(0x181c6a1U))
#undef DAT_0181c6a2
#define DAT_0181c6a2 (*(uint8_t *)(0x181c6a2U))
#undef DAT_0181c6a3
#define DAT_0181c6a3 (*(uint8_t *)(0x181c6a3U))
#undef DAT_0181c6a5
#define DAT_0181c6a5 (*(uint8_t *)(0x181c6a5U))
#undef DAT_0181c6a6
#define DAT_0181c6a6 (*(uint8_t *)(0x181c6a6U))
#undef DAT_0181c6a7
#define DAT_0181c6a7 (*(uint8_t *)(0x181c6a7U))
#undef DAT_0181c6a8
#define DAT_0181c6a8 (*(uint8_t *)(0x181c6a8U))
#undef DAT_0181c6a9
#define DAT_0181c6a9 (*(uint8_t *)(0x181c6a9U))
#undef DAT_0181c6aa
#define DAT_0181c6aa (*(uint8_t *)(0x181c6aaU))
#undef DAT_0181c6ab
#define DAT_0181c6ab (*(uint8_t *)(0x181c6abU))
#undef DAT_0181c6ac
#define DAT_0181c6ac (*(uint8_t *)(0x181c6acU))
#undef DAT_0181c6ad
#define DAT_0181c6ad (*(uint8_t *)(0x181c6adU))
#undef DAT_0181c6ae
#define DAT_0181c6ae (*(uint8_t *)(0x181c6aeU))
#define local_23 (*(byte *)(frame + 29))
#define local_22 (*(char *)(frame + 30))
#define local_28 (*(byte *)(frame + 24))
#define local_27 (*(byte *)(frame + 25))
#define local_26 (*(byte *)(frame + 26))
#define local_25 (*(byte *)(frame + 27))
#define local_24 (*(byte *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100105d0
 */

undefined4 recovered_100105d0(char *in_ECX,undefined4 in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;

  recovered_10007ce0(in_ECX,(char *)((uintptr_t)pf_module_state+0x1ef4U),&local_28);
  if (local_28 == 0) {
    pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1efaU));
    goto LAB_100107bb;
  }
  if ((byte)(local_28 + 0xbf) < 0x1a) {
    bVar1 = local_28 | 0x20;
    if (bVar1 == 0x6d) goto LAB_100106ff;
LAB_10010625:
    if (bVar1 == 99) {
      if (local_27 == 0) {
        pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c3fU));
      }
      else {
        bVar1 = local_27;
        if ((byte)(local_27 + 0xbf) < 0x1a) {
          bVar1 = local_27 | 0x20;
        }
        if (bVar1 != 0x65) goto LAB_100107cc;
        if (local_26 == 0) {
          pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c40U));
        }
        else {
          bVar1 = local_26;
          if ((byte)(local_26 + 0xbf) < 0x1a) {
            bVar1 = local_26 | 0x20;
          }
          if (bVar1 != 0x6e) goto LAB_100107cc;
          if (local_25 == 0) {
            pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c41U));
          }
          else {
            bVar1 = local_25;
            if ((byte)(local_25 + 0xbf) < 0x1a) {
              bVar1 = local_25 | 0x20;
            }
            if (bVar1 != 0x74) goto LAB_100107cc;
            if (local_24 == 0) {
              pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c42U));
            }
            else {
              bVar1 = local_24;
              if ((byte)(local_24 + 0xbf) < 0x1a) {
                bVar1 = local_24 | 0x20;
              }
              if (bVar1 != 0x65) goto LAB_100107cc;
              if (local_23 == 0) {
                pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c43U));
              }
              else {
                bVar1 = local_23;
                if ((byte)(local_23 + 0xbf) < 0x1a) {
                  bVar1 = local_23 | 0x20;
                }
                if ((bVar1 != 0x72) || (pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c44U)), local_22 != '\0'))
                goto LAB_100107cc;
              }
            }
          }
        }
      }
      if (*pcVar2 == '\0') {
        return 1;
      }
    }
LAB_100107cc:
    bVar1 = local_28;
    if ((byte)(local_28 + 0xbf) < 0x1a) {
      bVar1 = local_28 | 0x20;
    }
    if (bVar1 == 0x6c) {
      if (local_27 == 0) {
        pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f08U));
      }
      else {
        if ((byte)(local_27 + 0xbf) < 0x1a) {
          local_27 = local_27 | 0x20;
        }
        if (local_27 != 0x65) {
          return in_EDX;
        }
        if (local_26 == 0) {
          pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f09U));
        }
        else {
          if ((byte)(local_26 + 0xbf) < 0x1a) {
            local_26 = local_26 | 0x20;
          }
          if (local_26 != 0x66) {
            return in_EDX;
          }
          if (local_25 == 0) {
            pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f0aU));
          }
          else {
            if ((byte)(local_25 + 0xbf) < 0x1a) {
              local_25 = local_25 | 0x20;
            }
            if (local_25 != 0x74) {
              return in_EDX;
            }
            pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f0bU));
            if (local_24 != 0) {
              return in_EDX;
            }
          }
        }
      }
      goto LAB_10010921;
    }
    if (bVar1 != 0x72) {
      return in_EDX;
    }
    if (local_27 == 0) {
      pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f02U));
    }
    else {
      if ((byte)(local_27 + 0xbf) < 0x1a) {
        local_27 = local_27 | 0x20;
      }
      if (local_27 != 0x69) {
        return in_EDX;
      }
      if (local_26 == 0) {
        pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f03U));
      }
      else {
        if ((byte)(local_26 + 0xbf) < 0x1a) {
          local_26 = local_26 | 0x20;
        }
        if (local_26 != 0x67) {
          return in_EDX;
        }
        if (local_25 == 0) {
          pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f04U));
        }
        else {
          if ((byte)(local_25 + 0xbf) < 0x1a) {
            local_25 = local_25 | 0x20;
          }
          if (local_25 != 0x68) {
            return in_EDX;
          }
          if (local_24 == 0) {
            pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f05U));
          }
          else {
            if ((byte)(local_24 + 0xbf) < 0x1a) {
              local_24 = local_24 | 0x20;
            }
            if (local_24 != 0x74) {
              return in_EDX;
            }
            pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f06U));
            if (local_23 != 0) {
              return in_EDX;
            }
          }
        }
      }
    }
    if (*pcVar2 == '\0') {
      return 2;
    }
    if (local_28 != 0) {
      return in_EDX;
    }
  }
  else {
    bVar1 = local_28;
    if (local_28 != 0x6d) goto LAB_10010625;
LAB_100106ff:
    if (local_27 != 0) {
      bVar1 = local_27;
      if ((byte)(local_27 + 0xbf) < 0x1a) {
        bVar1 = local_27 | 0x20;
      }
      if (bVar1 == 0x69) {
        if (local_26 == 0) {
          pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1efcU));
        }
        else {
          bVar1 = local_26;
          if ((byte)(local_26 + 0xbf) < 0x1a) {
            bVar1 = local_26 | 0x20;
          }
          if (bVar1 != 100) goto LAB_100107cc;
          if (local_25 == 0) {
            pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1efdU));
          }
          else {
            bVar1 = local_25;
            if ((byte)(local_25 + 0xbf) < 0x1a) {
              bVar1 = local_25 | 0x20;
            }
            if (bVar1 != 100) goto LAB_100107cc;
            if (local_24 == 0) {
              pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1efeU));
            }
            else {
              bVar1 = local_24;
              if ((byte)(local_24 + 0xbf) < 0x1a) {
                bVar1 = local_24 | 0x20;
              }
              if (bVar1 != 0x6c) goto LAB_100107cc;
              if (local_23 == 0) {
                pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1effU));
              }
              else {
                bVar1 = local_23;
                if ((byte)(local_23 + 0xbf) < 0x1a) {
                  bVar1 = local_23 | 0x20;
                }
                if ((bVar1 != 0x65) || (pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f00U)), local_22 != '\0'))
                goto LAB_100107cc;
              }
            }
          }
        }
        goto LAB_100107bb;
      }
      goto LAB_100107cc;
    }
    pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1efbU));
LAB_100107bb:
    if (*pcVar2 == '\0') {
      return 1;
    }
    if (local_28 != 0) goto LAB_100107cc;
  }
  pcVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1f07U));
LAB_10010921:
  uVar3 = 0;
  if (*pcVar2 != '\0') {
    uVar3 = in_EDX;
  }
  return uVar3;
}

#undef DAT_0181c3e2
#undef DAT_0181c3e3
#undef DAT_0181c3e4
#undef DAT_0181c3e5
#undef DAT_0181c3e6
#undef DAT_0181c3e7
#undef DAT_0181c69d
#undef DAT_0181c69e
#undef DAT_0181c69f
#undef DAT_0181c6a0
#undef DAT_0181c6a1
#undef DAT_0181c6a2
#undef DAT_0181c6a3
#undef DAT_0181c6a5
#undef DAT_0181c6a6
#undef DAT_0181c6a7
#undef DAT_0181c6a8
#undef DAT_0181c6a9
#undef DAT_0181c6aa
#undef DAT_0181c6ab
#undef DAT_0181c6ac
#undef DAT_0181c6ad
#undef DAT_0181c6ae
#undef local_23
#undef local_22
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24

#define local_4f0 (*(char (*)[1024])(frame + 16))
#define local_f0 (*(char (*)[96])(frame + 1040))
#define local_90 (*(byte (*)[128])(frame + 1136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010940
 */

undefined4 recovered_10010940(int in_ECX,char *in_EDX,undefined4 param_3)

{
  unsigned char frame[1312] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;

  if ((in_EDX != (char *)0x0) && (*in_EDX != '\0')) {
    snprintf(local_f0,0x60,(char *)((uintptr_t)pf_module_state+0x1e84U),in_EDX);
    uVar2 = recovered_1000d120(*(char **)(in_ECX + 0x314),local_f0,local_4f0);
    if (((char)uVar2 != '\0') &&
       (uVar2 = recovered_1000d2c0(local_4f0,(char *)((uintptr_t)pf_module_state+0x1f0cU),local_90), (char)uVar2 != '\0')) {
      pbVar3 = local_90;
      do {
        pbVar3 = pbVar3 + 1;
        uVar4 = (uint)pbVar3[-1];
        if (0x17 < uVar4 - 9) break;
      } while ((0x80001bU >> (uVar4 - 9 & 0x1f) & 1) != 0);
      if ((byte)(pbVar3[-1] - 0x30U) < 10) {
        iVar5 = 0;
        do {
          iVar5 = (uint)(byte)((char)uVar4 - 0x30) + iVar5 * 10;
          bVar1 = *pbVar3;
          uVar4 = (uint)bVar1;
          pbVar3 = pbVar3 + 1;
        } while ((byte)(bVar1 - 0x30U) < 10);
        if (0x47 < iVar5) {
          return 4;
        }
        if (0x29 < iVar5) {
          return 3;
        }
        if (iVar5 < 0x16) {
          return param_3;
        }
        return 2;
      }
    }
  }
  return param_3;
}

#undef local_4f0
#undef local_f0
#undef local_90

#undef DAT_0181c3be
#define DAT_0181c3be (*(uint8_t *)(0x181c3beU))
#undef DAT_0181c40a
#define DAT_0181c40a (*(uint8_t *)(0x181c40aU))
#undef DAT_0181c44d
#define DAT_0181c44d (*(uint8_t *)(0x181c44dU))
#undef DAT_0181c44e
#define DAT_0181c44e (*(uint8_t *)(0x181c44eU))
#undef DAT_0181c44f
#define DAT_0181c44f (*(uint8_t *)(0x181c44fU))
#undef DAT_0181c450
#define DAT_0181c450 (*(uint8_t *)(0x181c450U))
#undef DAT_0181c576
#define DAT_0181c576 (*(char *)(0x181c576U))
#undef DAT_0181c57c
#define DAT_0181c57c (*(uint8_t *)(0x181c57cU))
#undef DAT_0181c57d
#define DAT_0181c57d (*(uint8_t *)(0x181c57dU))
#undef DAT_0181c57e
#define DAT_0181c57e (*(uint8_t *)(0x181c57eU))
#undef DAT_0181c57f
#define DAT_0181c57f (*(uint8_t *)(0x181c57fU))
#undef DAT_0181c580
#define DAT_0181c580 (*(uint8_t *)(0x181c580U))
#undef DAT_0181c581
#define DAT_0181c581 (*(uint8_t *)(0x181c581U))
#undef DAT_0181c582
#define DAT_0181c582 (*(uint8_t *)(0x181c582U))
#undef DAT_0181c583
#define DAT_0181c583 (*(uint8_t *)(0x181c583U))
#undef DAT_0181c584
#define DAT_0181c584 (*(uint8_t *)(0x181c584U))
#undef DAT_0181c585
#define DAT_0181c585 (*(uint8_t *)(0x181c585U))
#undef DAT_0181c586
#define DAT_0181c586 (*(uint8_t *)(0x181c586U))
#undef DAT_0181c587
#define DAT_0181c587 (*(uint8_t *)(0x181c587U))
#undef DAT_0181c588
#define DAT_0181c588 (*(uint8_t *)(0x181c588U))
#undef DAT_0181c589
#define DAT_0181c589 (*(uint8_t *)(0x181c589U))
#undef DAT_0181c58a
#define DAT_0181c58a (*(uint8_t *)(0x181c58aU))
#define local_8d4 (*(byte (*)[1024])(frame + 28))
#define local_4d4 (*(byte (*)[1024])(frame + 1052))
#define local_d4 (*(char (*)[128])(frame + 2076))
#define local_54 (*(int *)(frame + 2204))
#define local_50 (*(int *)(frame + 2208))
#define local_4c (*(byte * *)(frame + 2212))
#define local_48 (*(byte * *)(frame + 2216))
#define local_44 (*(byte * *)(frame + 2220))
#define local_40 (*(byte *)(frame + 2224))
#define local_3f (*(byte *)(frame + 2225))
#define local_3e (*(byte *)(frame + 2226))
#define local_3d (*(byte *)(frame + 2227))
#define local_3c (*(byte *)(frame + 2228))
#define local_3b (*(byte *)(frame + 2229))
#define local_3a (*(char *)(frame + 2230))
#define local_18 (*(byte * *)(frame + 2264))
#define local_11 (*(char *)(frame + 2271))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010a50
 */

void recovered_10010a50(int in_ECX,byte *in_EDX_00,int param_3,char *param_4,int param_5)

{
  unsigned char frame[2320] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  ulong uVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *in_EDX;

  local_44 = in_EDX_00;
  if (in_EDX_00 != (byte *)0x0) {
    local_44 = in_EDX_00 + param_3;
  }
  if ((param_4 == (char *)0x0) || (*param_4 = '\0', param_3 == 0 || in_EDX_00 == (byte *)0x0)) {
    return;
  }
  local_4d4[0] = 0;
  in_EDX = local_8d4;
  local_50 = in_ECX;
  if (0 < param_3) {
    local_54 = -(int)(in_EDX_00 + param_3);
    do {
      if ((*in_EDX_00 == 0) || (uVar4 = strlen((char *)local_4d4), 0x3fe < uVar4))
      break;
      bVar9 = *in_EDX_00;
      if (bVar9 == 0x3c) {
        pbVar12 = (byte *)0x0;
        iVar7 = 1;
        while (in_EDX_00[iVar7 + -1] != 0x3e) {
          pbVar12 = pbVar12 + -1;
          iVar7 = iVar7 + 1;
          if (in_EDX_00 + local_54 == pbVar12) goto LAB_10011444;
        }
        local_11 = '\0';
        uVar4 = ~(uint)pbVar12;
        if (0x1fe < (int)uVar4) {
          uVar4 = 0x1ff;
        }
        local_4c = in_EDX_00 + 1;
        local_18 = pbVar12;
        memcpy(local_8d4,local_4c,uVar4);
        local_8d4[uVar4] = 0;
        iVar7 = strncmp((char *)local_8d4,(char *)((uintptr_t)pf_module_state+0x1550U),3);
        if (iVar7 == 0) {
          local_48 = in_EDX_00 + 4;
          uVar4 = strlen((char *)((uintptr_t)pf_module_state+0x1554U));
          pbVar12 = (byte *)0x0;
          if (local_44 < in_EDX_00 + uVar4 + 4 || (local_44 <= local_48 || uVar4 == 0)) {
LAB_10010caf:
            if (pbVar12 != (byte *)0x0) {
              in_EDX_00 = pbVar12 + 3;
              goto LAB_10010b35;
            }
          }
          else {
            pbVar12 = local_48;
            do {
              if (*pbVar12 == 0) break;
              uVar10 = 0;
              while ((pbVar12 + uVar10 < local_44 && (bVar9 = pbVar12[uVar10], bVar9 != 0))) {
                if ((byte)(bVar9 + 0xbf) < 0x1a) {
                  bVar9 = bVar9 | 0x20;
                }
                bVar6 = *(byte *)(uVar10 + ((uintptr_t)pf_module_state+0x1554U));
                if ((byte)(bVar6 + 0xbf) < 0x1a) {
                  bVar6 = bVar6 | 0x20;
                }
                if (bVar9 != bVar6) break;
                uVar10 = uVar10 + 1;
                if (uVar4 == uVar10) goto LAB_10010caf;
              }
              if (uVar4 == uVar10) goto LAB_10010caf;
              pbVar1 = pbVar12 + uVar4 + 1;
              pbVar12 = pbVar12 + 1;
            } while (pbVar1 <= local_44);
          }
          in_EDX_00 = local_4c + -(int)local_18;
        }
        else {
          pcVar8 = &local_11;
          recovered_10007bb0(local_8d4,&local_40,0x28,pcVar8);
          if ((local_11 == '\0') && (local_40 != 0)) {
            uVar5 = recovered_1000e430(local_50,(char *)local_8d4,(char *)&local_40);
            if (((char)uVar5 != '\0') ||
               (uVar5 = recovered_1000f380(&local_40), (char)uVar5 != '\0')) {
              in_EDX_00 = recovered_10013110(in_EDX_00 + -(int)local_18,local_44,&local_40);
              goto LAB_10010b35;
            }
            if (local_40 == 0) {
              pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1caaU));
LAB_10010d4d:
              if (*pcVar11 == '\0') {
                pcVar8 = (char *)0x80;
                recovered_10007ce0((char *)local_8d4,(char *)((uintptr_t)pf_module_state+0x1caeU),local_d4);
                if (local_d4[0] != '\0') {
                  if ((local_4d4[0] != 0) &&
                     (uVar4 = strlen((char *)local_4d4), uVar4 < 0x3ff)) {
                    (local_4d4 + uVar4)[0] = 0x20;
                    (local_4d4 + uVar4)[1] = 0;
                  }
                  uVar4 = strlen((char *)local_4d4);
                  if (uVar4 < 0x3ff) {
                    pcVar8 = (char *)(0x400 - uVar4);
                    snprintf((char *)(local_4d4 + uVar4),(ulong)pcVar8,(char *)((uintptr_t)pf_module_state+0x154dU),
                                       local_d4);
                  }
                }
              }
              if (local_40 != 0) goto LAB_10010def;
              bVar3 = true;
              bVar9 = 0;
              if ((*(uint8_t *)((uintptr_t)pf_module_state+0x1dd3U)) != '\0') goto LAB_1001118b;
LAB_1001140b:
              bVar3 = true;
            }
            else {
              bVar9 = local_40;
              if ((byte)(local_40 + 0xbf) < 0x1a) {
                bVar9 = local_40 | 0x20;
              }
              if (bVar9 == 0x69) {
                if (local_3f == 0) {
                  pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1cabU));
                }
                else {
                  bVar9 = local_3f;
                  if ((byte)(local_3f + 0xbf) < 0x1a) {
                    bVar9 = local_3f | 0x20;
                  }
                  if (bVar9 != 0x6d) goto LAB_10010def;
                  if (local_3e == 0) {
                    pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1cacU));
                  }
                  else {
                    bVar9 = local_3e;
                    if ((byte)(local_3e + 0xbf) < 0x1a) {
                      bVar9 = local_3e | 0x20;
                    }
                    if ((bVar9 != 0x67) || (pcVar11 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1cadU)), local_3d != 0))
                    goto LAB_10010def;
                  }
                }
                goto LAB_10010d4d;
              }
LAB_10010def:
              if ((byte)(local_40 + 0xbf) < 0x1a) {
                bVar6 = local_40 | 0x20;
              }
              else {
                bVar6 = local_40;
              }
              bVar3 = false;
              bVar9 = local_40;
              if (bVar6 - 0x61U < 0x13) {
                    /* WARNING: Could not emulate address calculation at 0x10010e13 */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((bVar6 - 0x61U) * 4 + ((uintptr_t)pf_module_state+0xe1dU)))(pcVar8);
                return;
              }
LAB_1001118b:
              if (bVar3) {
                pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dd9U));
                bVar3 = true;
LAB_100112a7:
                if (*pcVar8 != '\0') {
                  pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de0U));
                  if (!bVar3) goto LAB_100112bd;
                  goto LAB_1001137f;
                }
                goto LAB_1001140b;
              }
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar6 = bVar9 | 0x20;
              }
              else {
                bVar6 = bVar9;
              }
              if (bVar6 == 0x68) {
                if (local_3f == 0) {
                  pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ddaU));
LAB_100112a5:
                  bVar3 = false;
                  goto LAB_100112a7;
                }
                bVar6 = local_3f;
                if ((byte)(local_3f + 0xbf) < 0x1a) {
                  bVar6 = local_3f | 0x20;
                }
                if (bVar6 == 0x65) {
                  if (local_3e == 0) {
                    pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ddbU));
                    goto LAB_100112a5;
                  }
                  bVar6 = local_3e;
                  if ((byte)(local_3e + 0xbf) < 0x1a) {
                    bVar6 = local_3e | 0x20;
                  }
                  if (bVar6 == 0x61) {
                    if (local_3d == 0) {
                      pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ddcU));
                      goto LAB_100112a5;
                    }
                    bVar6 = local_3d;
                    if ((byte)(local_3d + 0xbf) < 0x1a) {
                      bVar6 = local_3d | 0x20;
                    }
                    if (bVar6 == 100) {
                      if (local_3c == 0) {
                        pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dddU));
                        goto LAB_100112a5;
                      }
                      bVar6 = local_3c;
                      if ((byte)(local_3c + 0xbf) < 0x1a) {
                        bVar6 = local_3c | 0x20;
                      }
                      if (bVar6 == 0x65) {
                        if (local_3b == 0) {
                          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ddeU));
                          goto LAB_100112a5;
                        }
                        bVar6 = local_3b;
                        if ((byte)(local_3b + 0xbf) < 0x1a) {
                          bVar6 = local_3b | 0x20;
                        }
                        if ((bVar6 == 0x72) && (local_3a == '\0')) {
                          bVar3 = false;
                          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1ddfU));
                          goto LAB_100112a7;
                        }
                      }
                    }
                  }
                }
              }
LAB_100112bd:
              if ((byte)(bVar9 + 0xbf) < 0x1a) {
                bVar9 = bVar9 | 0x20;
              }
              if (bVar9 == 0x66) {
                if (local_3f == 0) {
                  pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de1U));
                }
                else {
                  bVar9 = local_3f;
                  if ((byte)(local_3f + 0xbf) < 0x1a) {
                    bVar9 = local_3f | 0x20;
                  }
                  if (bVar9 != 0x6f) goto LAB_10011388;
                  if (local_3e == 0) {
                    pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de2U));
                  }
                  else {
                    bVar9 = local_3e;
                    if ((byte)(local_3e + 0xbf) < 0x1a) {
                      bVar9 = local_3e | 0x20;
                    }
                    if (bVar9 != 0x6f) goto LAB_10011388;
                    if (local_3d == 0) {
                      pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de3U));
                    }
                    else {
                      bVar9 = local_3d;
                      if ((byte)(local_3d + 0xbf) < 0x1a) {
                        bVar9 = local_3d | 0x20;
                      }
                      if (bVar9 != 0x74) goto LAB_10011388;
                      if (local_3c == 0) {
                        pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de4U));
                      }
                      else {
                        bVar9 = local_3c;
                        if ((byte)(local_3c + 0xbf) < 0x1a) {
                          bVar9 = local_3c | 0x20;
                        }
                        if (bVar9 != 0x65) goto LAB_10011388;
                        if (local_3b == 0) {
                          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de5U));
                        }
                        else {
                          bVar9 = local_3b;
                          if ((byte)(local_3b + 0xbf) < 0x1a) {
                            bVar9 = local_3b | 0x20;
                          }
                          if ((bVar9 != 0x72) || (pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1de6U)), local_3a != '\0'))
                          goto LAB_10011388;
                        }
                      }
                    }
                  }
                }
LAB_1001137f:
                if (*pcVar8 == '\0') goto LAB_1001140b;
              }
LAB_10011388:
              bVar2 = recovered_10007c80(&local_40,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1de7U)));
              bVar3 = true;
              if (((((!bVar2) && (bVar2 = recovered_10007c80(&local_40,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c67U))), !bVar2)) &&
                   (bVar2 = recovered_10007c80(&local_40,(byte *)((uintptr_t)pf_module_state+0x1c15U)), !bVar2)) &&
                  ((bVar2 = recovered_10007c80(&local_40,(byte *)((uintptr_t)pf_module_state+0x1c18U)), !bVar2 &&
                   (bVar2 = recovered_10007c80(&local_40,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c1bU))), !bVar2)))) &&
                 ((bVar2 = recovered_10007c80(&local_40,(byte *)((uintptr_t)pf_module_state+0x1c1eU)), !bVar2 &&
                  (bVar2 = recovered_10007c80(&local_40,(byte *)((uintptr_t)pf_module_state+0x1c21U)), !bVar2)))) {
                bVar3 = recovered_10007c80(&local_40,(byte *)((uintptr_t)pf_module_state+0x1c24U));
              }
            }
            if (((bVar3 != false) && (local_4d4[0] != 0)) &&
               (uVar4 = strlen((char *)local_4d4), uVar4 < 0x3ff)) {
              (local_4d4 + uVar4)[0] = 0x20;
              (local_4d4 + uVar4)[1] = 0;
            }
          }
          in_EDX_00 = local_4c + -(int)local_18;
        }
      }
      else {
        uVar4 = strlen((char *)local_4d4);
        if (uVar4 < 0x3ff) {
          local_4d4[uVar4] = bVar9;
          local_4d4[uVar4 + 1] = 0;
        }
        in_EDX_00 = in_EDX_00 + 1;
      }
LAB_10010b35:
    } while (in_EDX_00 < local_44);
  }
LAB_10011444:
  recovered_10008930((char *)local_4d4,(char *)in_EDX,0x400);
  *param_4 = '\0';
  while( true ) {
    bVar9 = *in_EDX;
    if (bVar9 < 0x21) break;
    uVar4 = strlen(param_4);
    if (uVar4 < param_5 - 1U) {
      param_4[uVar4] = bVar9;
      param_4[uVar4 + 1] = '\0';
    }
    in_EDX = in_EDX + 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x1001147e */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)bVar9 * 4 + ((uintptr_t)pf_module_state+0xe69U)))();
  return;
}

#undef DAT_0181c3be
#undef DAT_0181c40a
#undef DAT_0181c44d
#undef DAT_0181c44e
#undef DAT_0181c44f
#undef DAT_0181c450
#undef DAT_0181c576
#undef DAT_0181c57c
#undef DAT_0181c57d
#undef DAT_0181c57e
#undef DAT_0181c57f
#undef DAT_0181c580
#undef DAT_0181c581
#undef DAT_0181c582
#undef DAT_0181c583
#undef DAT_0181c584
#undef DAT_0181c585
#undef DAT_0181c586
#undef DAT_0181c587
#undef DAT_0181c588
#undef DAT_0181c589
#undef DAT_0181c58a
#undef local_8d4
#undef local_4d4
#undef local_d4
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3f
#undef local_3e
#undef local_3d
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_18
#undef local_11

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#define local_384 (*(undefined4 *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(int *)(frame + 36))
#define local_378 (*(int *)(frame + 40))
#define local_374 (*(int *)(frame + 44))
#define local_370 (*(char (*)[192])(frame + 48))
#define local_2b0 (*(char (*)[640])(frame + 240))
#define local_30 (*(undefined4 *)(frame + 880))
#define local_2c (*(undefined4 *)(frame + 884))
#define local_28 (*(int *)(frame + 888))
#define local_18 (*(undefined1 *)(frame + 904))
#define local_14 (*(int *)(frame + 908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100114c0
 */

void recovered_100114c0(int in_ECX,char *in_EDX,char *param_3,int param_4,int param_5,int param_6,
                       int *param_7)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;

  if (param_7 == (int *)0x0) {
    return;
  }
  local_14 = in_ECX;
  memset(&local_384,0,0x370);
  local_384 = 3;
  if (param_4 < 1) {
    if (in_EDX != (char *)0x0) {
      for (uVar2 = 0; ((cVar1 = in_EDX[uVar2], cVar1 != '\0' && (cVar1 != '#')) && (cVar1 != '?'));
          uVar2 = uVar2 + 1) {
      }
      param_4 = 0xa0;
      if (3 < uVar2) {
        bVar3 = in_EDX[uVar2 - 4];
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar3 == 0x2e) {
          bVar3 = in_EDX[uVar2 - 3];
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if (bVar3 == 0x70) {
            bVar3 = in_EDX[uVar2 - 2];
            if ((byte)(bVar3 + 0xbf) < 0x1a) {
              bVar3 = bVar3 | 0x20;
            }
            if (bVar3 == 0x6e) {
              bVar3 = in_EDX[uVar2 - 1];
              if ((byte)(bVar3 + 0xbf) < 0x1a) {
                bVar3 = bVar3 | 0x20;
              }
              if (bVar3 == 0x67) {
                param_4 = param_7[1];
              }
            }
          }
        }
      }
      goto LAB_10011508;
    }
    local_374 = 0x5a;
    if (0 < param_5) {
      local_374 = param_5;
    }
    param_4 = 0xa0;
  }
  else {
LAB_10011508:
    local_374 = param_5;
    if ((param_5 < 1) && (local_374 = 0x5a, in_EDX != (char *)0x0)) {
      for (uVar2 = 0; ((cVar1 = in_EDX[uVar2], cVar1 != '\0' && (cVar1 != '#')) && (cVar1 != '?'));
          uVar2 = uVar2 + 1) {
      }
      if (3 < uVar2) {
        bVar3 = in_EDX[uVar2 - 4];
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar3 == 0x2e) {
          bVar3 = in_EDX[uVar2 - 3];
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          if (bVar3 == 0x70) {
            bVar3 = in_EDX[uVar2 - 2];
            if ((byte)(bVar3 + 0xbf) < 0x1a) {
              bVar3 = bVar3 | 0x20;
            }
            if (bVar3 == 0x6e) {
              bVar3 = in_EDX[uVar2 - 1];
              if ((byte)(bVar3 + 0xbf) < 0x1a) {
                bVar3 = bVar3 | 0x20;
              }
              if ((bVar3 == 0x67) && (local_374 = param_4, 0x40 < param_4)) {
                local_374 = 0xb4;
              }
            }
          }
        }
      }
    }
  }
  iVar5 = param_7[1];
  local_378 = param_4;
  if (iVar5 <= param_4) {
    local_378 = iVar5;
  }
  local_380 = *param_7;
  if (param_6 == 2) {
    iVar5 = iVar5 - local_378;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    local_380 = local_380 + iVar5;
  }
  else if (param_6 == 1) {
    iVar5 = (iVar5 - local_378) / 2;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    local_380 = local_380 + iVar5;
  }
  local_37c = param_7[2];
  local_2c = 1;
  local_30 = 0xffffffff;
  local_28 = param_6;
  local_18 = (undefined1)param_7[3];
  pcVar4 = in_EDX;
  if (in_EDX == (char *)0x0) {
    pcVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  }
  snprintf(local_2b0,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar4);
  if (param_3 == (char *)0x0) {
    param_3 = in_EDX;
    if (in_EDX == (char *)0x0) goto LAB_10011710;
  }
  else {
    cVar1 = *param_3;
    if (cVar1 == '\0') {
      param_3 = in_EDX;
    }
    if (cVar1 == '\0' && in_EDX == (char *)0x0) {
LAB_10011710:
      local_370[0] = '\0';
      goto LAB_10011737;
    }
  }
  snprintf(local_370,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),param_3);
LAB_10011737:
  uVar2 = *(uint *)(local_14 + 0x52c2c);
  if (uVar2 < 0x180) {
    *(uint *)(local_14 + 0x52c2c) = uVar2 + 1;
    memcpy((void *)(local_14 + 0x42c + uVar2 * 0x370),&local_384,0x370);
  }
  param_7[2] = local_374 + 0xe + param_7[2];
  return;
}

#undef DAT_0181bc65
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_374
#undef local_370
#undef local_2b0
#undef local_30
#undef local_2c
#undef local_28
#undef local_18
#undef local_14

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181bd30
#define DAT_0181bd30 (*(uint8_t *)(0x181bd30U))
#undef DAT_0181bd31
#define DAT_0181bd31 (*(uint8_t *)(0x181bd31U))
#undef DAT_0181bd32
#define DAT_0181bd32 (*(uint8_t *)(0x181bd32U))
#undef DAT_0181bd33
#define DAT_0181bd33 (*(uint8_t *)(0x181bd33U))
#undef DAT_0181bd34
#define DAT_0181bd34 (*(uint8_t *)(0x181bd34U))
#undef DAT_0181bd35
#define DAT_0181bd35 (*(uint8_t *)(0x181bd35U))
#undef DAT_0181bd3e
#define DAT_0181bd3e (*(uint8_t *)(0x181bd3eU))
#undef DAT_0181bd3f
#define DAT_0181bd3f (*(uint8_t *)(0x181bd3fU))
#undef DAT_0181bd40
#define DAT_0181bd40 (*(uint8_t *)(0x181bd40U))
#undef DAT_0181bd41
#define DAT_0181bd41 (*(uint8_t *)(0x181bd41U))
#undef DAT_0181bd42
#define DAT_0181bd42 (*(uint8_t *)(0x181bd42U))
#undef DAT_0181bd43
#define DAT_0181bd43 (*(uint8_t *)(0x181bd43U))
#undef DAT_0181bd44
#define DAT_0181bd44 (*(uint8_t *)(0x181bd44U))
#undef DAT_0181c407
#define DAT_0181c407 (*(char *)(0x181c407U))
#undef DAT_0181c408
#define DAT_0181c408 (*(char *)(0x181c408U))
#undef DAT_0181c409
#define DAT_0181c409 (*(char *)(0x181c409U))
#undef DAT_0181c416
#define DAT_0181c416 (*(char *)(0x181c416U))
#undef DAT_0181c417
#define DAT_0181c417 (*(char *)(0x181c417U))
#define local_11 (*(char *)(frame + 3231))
#define local_c98 (*(char (*)[2048])(frame + 24))
#define local_498 (*(char (*)[4])(frame + 2072))
#define local_494 (*(undefined4 *)(frame + 2076))
#define local_490 (*(int *)(frame + 2080))
#define local_48c (*(undefined4 *)(frame + 2084))
#define local_488 (*(undefined4 *)(frame + 2088))
#define local_12c (*(undefined1 *)(frame + 2948))
#define local_128 (*(byte (*)[128])(frame + 2952))
#define local_a8 (*(char (*)[96])(frame + 3080))
#define local_48 (*(int *)(frame + 3176))
#define local_44 (*(byte *)(frame + 3180))
#define local_43 (*(byte *)(frame + 3181))
#define local_42 (*(byte *)(frame + 3182))
#define local_41 (*(byte *)(frame + 3183))
#define local_40 (*(byte *)(frame + 3184))
#define local_3f (*(byte *)(frame + 3185))
#define local_3e (*(char *)(frame + 3186))
#define local_1c (*(int *)(frame + 3220))
#define local_18 (*(char * *)(frame + 3224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011790
 */

void recovered_10011790(int in_EDX,undefined4 *param_2,char *param_3,int param_4)

{
  unsigned char frame[3280] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;

  if ((param_3 != (char *)0x0 && param_2 != (undefined4 *)0x0) && (*param_3 != '\0')) {
    local_a8[0] = '\0';
    local_1c = in_EDX;
    uVar3 = recovered_10008360(in_EDX,param_3,local_c98,0x800,local_a8);
    if ((char)uVar3 != '\0') {
      local_48 = in_EDX + 0x42c;
      pcVar12 = local_c98;
LAB_10011823:
      do {
        while (*pcVar12 != '<') {
          if (*pcVar12 == '\0') {
            return;
          }
          local_18 = strchr(pcVar12,0x3c);
          if (local_18 == (char *)0x0) {
            uVar9 = strlen(pcVar12);
          }
          else {
            uVar9 = (int)local_18 - (int)pcVar12;
          }
          uVar11 = uVar9;
          if (0x17e < (int)uVar9) {
            uVar11 = 0x17f;
          }
          memcpy(local_498,pcVar12,uVar11);
          local_498[uVar11] = '\0';
          recovered_1000f090(local_1c,local_498,0,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)),param_4,0,param_2);
          if (local_18 == (char *)0x0) {
            pcVar12 = pcVar12 + uVar9;
          }
          else {
            pcVar12 = local_18;
          }
        }
        pcVar5 = strchr(pcVar12,0x3e);
        if (pcVar5 == (char *)0x0) {
          return;
        }
        local_11 = '\0';
        pcVar10 = pcVar5 + ~(uint)pcVar12;
        if (0x7e < (int)pcVar10) {
          pcVar10 = (char *)0x7f;
        }
        memcpy(local_128,pcVar12 + 1,(ulong)pcVar10);
        local_128[(int)pcVar10] = 0;
        recovered_10007bb0(local_128,&local_44,0x28,&local_11);
        iVar6 = local_1c;
        if (local_11 != '\0') goto LAB_10011820;
        cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c64U));
        if (local_44 == 0) {
joined_r0x10011aff:
          if (cVar2 != '\0') {
            if (local_44 != 0) goto LAB_10011a0a;
LAB_10011c7f:
            pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158cU));
            goto LAB_10011c84;
          }
          param_2[2] = param_2[2] + 0xc;
          pcVar12 = pcVar5 + 1;
          goto LAB_10011823;
        }
        if ((byte)(local_44 + 0xbf) < 0x1a) {
          bVar7 = local_44 | 0x20;
        }
        else {
          bVar7 = local_44;
        }
        if (bVar7 == 0x62) {
          cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c65U));
          if (local_43 != 0) {
            bVar7 = local_43;
            if ((byte)(local_43 + 0xbf) < 0x1a) {
              bVar7 = local_43 | 0x20;
            }
            if ((bVar7 != 0x72) || (cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c66U)), local_42 != 0)) goto LAB_10011a0a;
          }
          goto joined_r0x10011aff;
        }
        if (bVar7 == 0x68) {
          cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c73U));
          if (local_43 != 0) {
            bVar7 = local_43;
            if ((byte)(local_43 + 0xbf) < 0x1a) {
              bVar7 = local_43 | 0x20;
            }
            if ((bVar7 != 0x72) || (cVar2 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c74U)), local_42 != 0)) goto LAB_10011a0a;
          }
          if (cVar2 == '\0') {
            memset(local_498,0,0x370);
            local_498[0] = '\x06';
            local_498[1] = '\0';
            local_498[2] = '\0';
            local_498[3] = '\0';
            iVar4 = param_2[2];
            local_494 = *param_2;
            local_490 = iVar4 + 9;
            local_48c = param_2[1];
            local_488 = 1;
            local_12c = *(undefined1 *)(param_2 + 3);
            uVar1 = *(uint *)(iVar6 + 0x52c2c);
            if (uVar1 < 0x180) {
              *(uint *)(iVar6 + 0x52c2c) = uVar1 + 1;
              memcpy((void *)(uVar1 * 0x370 + local_48),local_498,0x370);
              iVar4 = param_2[2];
            }
            param_2[2] = iVar4 + 0x16;
            goto LAB_10011820;
          }
        }
LAB_10011a0a:
        if ((byte)(local_44 + 0xbf) < 0x1a) {
          bVar7 = local_44 | 0x20;
          if (bVar7 == 0x73) goto LAB_10011a2f;
LAB_10011820:
          pcVar12 = pcVar5 + 1;
        }
        else {
          if (local_44 != 0x73) goto LAB_10011820;
          bVar7 = 0x73;
LAB_10011a2f:
          if (local_43 != 0) {
            bVar8 = local_43;
            if ((byte)(local_43 + 0xbf) < 0x1a) {
              bVar8 = local_43 | 0x20;
            }
            if (bVar8 == 99) {
              if (local_42 == 0) {
                pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
              }
              else {
                bVar8 = local_42;
                if ((byte)(local_42 + 0xbf) < 0x1a) {
                  bVar8 = local_42 | 0x20;
                }
                if (bVar8 != 0x72) goto LAB_10011bde;
                if (local_41 == 0) {
                  pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
                }
                else {
                  bVar8 = local_41;
                  if ((byte)(local_41 + 0xbf) < 0x1a) {
                    bVar8 = local_41 | 0x20;
                  }
                  if (bVar8 != 0x69) goto LAB_10011bde;
                  if (local_40 == 0) {
                    pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
                  }
                  else {
                    bVar8 = local_40;
                    if ((byte)(local_40 + 0xbf) < 0x1a) {
                      bVar8 = local_40 | 0x20;
                    }
                    if (bVar8 != 0x70) goto LAB_10011bde;
                    if (local_3f == 0) {
                      pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
                    }
                    else {
                      bVar8 = local_3f;
                      if ((byte)(local_3f + 0xbf) < 0x1a) {
                        bVar8 = local_3f | 0x20;
                      }
                      if ((bVar8 != 0x74) || (pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U)), local_3e != '\0'))
                      goto LAB_10011bde;
                    }
                  }
                }
              }
              goto LAB_10011bcd;
            }
LAB_10011bde:
            if (bVar7 == 0x73) {
              if (local_43 == 0) {
                pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158dU));
              }
              else {
                bVar7 = local_43;
                if ((byte)(local_43 + 0xbf) < 0x1a) {
                  bVar7 = local_43 | 0x20;
                }
                if (bVar7 != 0x74) goto LAB_10011820;
                if (local_42 == 0) {
                  pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158eU));
                }
                else {
                  bVar7 = local_42;
                  if ((byte)(local_42 + 0xbf) < 0x1a) {
                    bVar7 = local_42 | 0x20;
                  }
                  if (bVar7 != 0x79) goto LAB_10011820;
                  if (local_41 == 0) {
                    pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158fU));
                  }
                  else {
                    bVar7 = local_41;
                    if ((byte)(local_41 + 0xbf) < 0x1a) {
                      bVar7 = local_41 | 0x20;
                    }
                    if (bVar7 != 0x6c) goto LAB_10011820;
                    if (local_40 == 0) {
                      pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1590U));
                    }
                    else {
                      bVar7 = local_40;
                      if ((byte)(local_40 + 0xbf) < 0x1a) {
                        bVar7 = local_40 | 0x20;
                      }
                      if ((bVar7 != 0x65) || (pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1591U)), local_3f != 0))
                      goto LAB_10011820;
                    }
                  }
                }
              }
LAB_10011c84:
              if (*pcVar12 == '\0') goto LAB_10011c8d;
            }
            goto LAB_10011820;
          }
          pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
LAB_10011bcd:
          if (*pcVar12 != '\0') {
            if (local_44 == 0) goto LAB_10011c7f;
            goto LAB_10011bde;
          }
LAB_10011c8d:
          if (local_44 == 0) {
            pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159bU));
LAB_10011da1:
            local_18 = (char *)((uintptr_t)pf_module_state+0x15a2U);
            if (*pcVar12 != '\0') {
              local_18 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1592U));
            }
          }
          else {
            bVar7 = local_44;
            if ((byte)(local_44 + 0xbf) < 0x1a) {
              bVar7 = local_44 | 0x20;
            }
            local_18 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1592U));
            if (bVar7 == 0x73) {
              if (local_43 == 0) {
                pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
              }
              else {
                bVar7 = local_43;
                if ((byte)(local_43 + 0xbf) < 0x1a) {
                  bVar7 = local_43 | 0x20;
                }
                if (bVar7 != 99) goto LAB_10011db4;
                if (local_42 == 0) {
                  pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
                }
                else {
                  bVar7 = local_42;
                  if ((byte)(local_42 + 0xbf) < 0x1a) {
                    bVar7 = local_42 | 0x20;
                  }
                  if (bVar7 != 0x72) goto LAB_10011db4;
                  if (local_41 == 0) {
                    pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
                  }
                  else {
                    bVar7 = local_41;
                    if ((byte)(local_41 + 0xbf) < 0x1a) {
                      bVar7 = local_41 | 0x20;
                    }
                    if (bVar7 != 0x69) goto LAB_10011db4;
                    if (local_40 == 0) {
                      pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
                    }
                    else {
                      bVar7 = local_40;
                      if ((byte)(local_40 + 0xbf) < 0x1a) {
                        bVar7 = local_40 | 0x20;
                      }
                      if (bVar7 != 0x70) goto LAB_10011db4;
                      if (local_3f == 0) {
                        pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
                      }
                      else {
                        bVar7 = local_3f;
                        if ((byte)(local_3f + 0xbf) < 0x1a) {
                          bVar7 = local_3f | 0x20;
                        }
                        if ((bVar7 != 0x74) || (pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U)), local_3e != '\0'))
                        goto LAB_10011db4;
                      }
                    }
                  }
                }
              }
              goto LAB_10011da1;
            }
          }
LAB_10011db4:
          pcVar12 = pcVar5 + 1;
          uVar9 = strlen(local_18);
          if ((uVar9 != 0) && (*pcVar12 != '\0')) {
            pcVar5 = pcVar12;
            do {
              uVar11 = 0;
              while (bVar7 = pcVar5[uVar11], bVar7 != 0) {
                if ((byte)(bVar7 + 0xbf) < 0x1a) {
                  bVar7 = bVar7 | 0x20;
                }
                bVar8 = local_18[uVar11];
                if ((byte)(bVar8 + 0xbf) < 0x1a) {
                  bVar8 = bVar8 | 0x20;
                }
                if (bVar7 != bVar8) break;
                uVar11 = uVar11 + 1;
                if (uVar9 == uVar11) goto LAB_10011e26;
              }
              if (uVar9 == uVar11) {
LAB_10011e26:
                if (local_44 == 0) {
                  pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159bU));
LAB_10011f0e:
                  iVar6 = (*pcVar12 == '\0') + 8;
                }
                else {
                  bVar7 = local_44;
                  if ((byte)(local_44 + 0xbf) < 0x1a) {
                    bVar7 = local_44 | 0x20;
                  }
                  iVar6 = 8;
                  if (bVar7 == 0x73) {
                    if (local_43 == 0) {
                      pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
                    }
                    else {
                      bVar7 = local_43;
                      if ((byte)(local_43 + 0xbf) < 0x1a) {
                        bVar7 = local_43 | 0x20;
                      }
                      if (bVar7 != 99) goto LAB_10011f19;
                      if (local_42 == 0) {
                        pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
                      }
                      else {
                        bVar7 = local_42;
                        if ((byte)(local_42 + 0xbf) < 0x1a) {
                          bVar7 = local_42 | 0x20;
                        }
                        if (bVar7 != 0x72) goto LAB_10011f19;
                        if (local_41 == 0) {
                          pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
                        }
                        else {
                          bVar7 = local_41;
                          if ((byte)(local_41 + 0xbf) < 0x1a) {
                            bVar7 = local_41 | 0x20;
                          }
                          if (bVar7 != 0x69) goto LAB_10011f19;
                          if (local_40 == 0) {
                            pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
                          }
                          else {
                            bVar7 = local_40;
                            if ((byte)(local_40 + 0xbf) < 0x1a) {
                              bVar7 = local_40 | 0x20;
                            }
                            if (bVar7 != 0x70) goto LAB_10011f19;
                            if (local_3f == 0) {
                              pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
                            }
                            else {
                              bVar7 = local_3f;
                              if ((byte)(local_3f + 0xbf) < 0x1a) {
                                bVar7 = local_3f | 0x20;
                              }
                              if ((bVar7 != 0x74) || (pcVar12 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U)), local_3e != '\0'))
                              goto LAB_10011f19;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_10011f0e;
                  }
                }
LAB_10011f19:
                pcVar12 = pcVar5 + iVar6;
                break;
              }
              pcVar10 = pcVar5 + 1;
              pcVar5 = pcVar5 + 1;
            } while (*pcVar10 != '\0');
          }
        }
      } while( true );
    }
    recovered_1000f090(in_EDX,(char *)((uintptr_t)pf_module_state+0x1f16U),0,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)),param_4,0,param_2);
  }
  return;
}

#undef DAT_0181bc65
#undef DAT_0181bd2f
#undef DAT_0181bd30
#undef DAT_0181bd31
#undef DAT_0181bd32
#undef DAT_0181bd33
#undef DAT_0181bd34
#undef DAT_0181bd35
#undef DAT_0181bd3e
#undef DAT_0181bd3f
#undef DAT_0181bd40
#undef DAT_0181bd41
#undef DAT_0181bd42
#undef DAT_0181bd43
#undef DAT_0181bd44
#undef DAT_0181c407
#undef DAT_0181c408
#undef DAT_0181c409
#undef DAT_0181c416
#undef DAT_0181c417
#undef local_11
#undef local_c98
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_12c
#undef local_128
#undef local_a8
#undef local_48
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f
#undef local_3e
#undef local_1c
#undef local_18

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#define local_28 (*(undefined4 *)(frame + 872))
#define local_380 (*(undefined4 (*)[117])(frame + 16))
#define local_1ac (*(char (*)[64])(frame + 484))
#define local_16c (*(char (*)[64])(frame + 548))
#define local_12c (*(char (*)[256])(frame + 612))
#define local_2c (*(undefined4 *)(frame + 868))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011f30
 */

void recovered_10011f30(int in_ECX,undefined1 *in_EDX,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5)

{
  unsigned char frame[944] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 *puVar2;

  memset(local_380,0,0x370);
  local_380[0] = 8;
  local_2c = param_5;
  local_28 = 1;
  puVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  if (in_EDX != (undefined1 *)0x0) {
    puVar2 = in_EDX;
  }
  snprintf(local_1ac,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),puVar2);
  puVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  if (param_3 != (undefined1 *)0x0) {
    puVar2 = param_3;
  }
  snprintf(local_16c,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),puVar2);
  puVar2 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  if (param_4 != (undefined1 *)0x0) {
    puVar2 = param_4;
  }
  snprintf(local_12c,0x80,(char *)((uintptr_t)pf_module_state+0x154dU),puVar2);
  uVar1 = *(uint *)(in_ECX + 0x52c2c);
  if (uVar1 < 0x180) {
    *(uint *)(in_ECX + 0x52c2c) = uVar1 + 1;
    memcpy((void *)(in_ECX + 0x42c + uVar1 * 0x370),local_380,0x370);
  }
  return;
}

#undef DAT_0181bc65
#undef local_28
#undef local_380
#undef local_1ac
#undef local_16c
#undef local_12c
#undef local_2c

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#define local_18 (*(char * *)(frame + 904))
#define local_14 (*(undefined4 *)(frame + 908))
#define local_38c (*(undefined4 *)(frame + 20))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(int *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(undefined4 *)(frame + 36))
#define local_378 (*(char (*)[448])(frame + 40))
#define local_1b8 (*(char (*)[128])(frame + 488))
#define local_138 (*(char (*)[128])(frame + 616))
#define local_b8 (*(char (*)[128])(frame + 744))
#define local_38 (*(int *)(frame + 872))
#define local_34 (*(undefined4 *)(frame + 876))
#define local_30 (*(int *)(frame + 880))
#define local_20 (*(undefined1 *)(frame + 896))
#define local_1f (*(char *)(frame + 897))
#define local_1c (*(int *)(frame + 900))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012030
 */

void recovered_10012030(int in_ECX,char *in_EDX,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,char param_7,int param_8,int *param_9)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  char *in_ECX_00;

  if (param_9 != (int *)0x0) {
    local_1c = in_ECX;
    memset(&local_38c,0,0x370);
    if (in_EDX == (char *)0x0) {
      in_ECX_00 = (char *)((uintptr_t)pf_module_state+0x1d17U);
    }
    else {
      in_ECX_00 = (char *)((uintptr_t)pf_module_state+0x1d17U);
      if (*in_EDX != '\0') {
        in_ECX_00 = in_EDX;
      }
    }
    local_38c = 5;
    uVar1 = recovered_100138b0(in_ECX_00,1);
    iVar2 = param_9[1];
    iVar3 = iVar2;
    if ((int)(uVar1 + 0x16) <= iVar2) {
      iVar3 = uVar1 + 0x16;
    }
    if (0x9f < iVar3) {
      iVar3 = 0xa0;
    }
    local_380 = 0x36;
    if (0x1f < (int)uVar1) {
      local_380 = iVar3;
    }
    local_37c = 0x1a;
    iVar3 = *param_9;
    if (param_8 == 2) {
      local_388 = iVar2 - local_380;
      if (local_388 < 1) {
        local_388 = 0;
      }
      local_388 = local_388 + iVar3;
    }
    else {
      local_388 = iVar3;
      if (param_8 == 1) {
        local_388 = (iVar2 - local_380) / 2;
        if (local_388 < 1) {
          local_388 = 0;
        }
        local_388 = local_388 + iVar3;
      }
    }
    local_384 = param_9[2];
    if (param_6 < 0) {
      local_14 = 0;
    }
    else if (((*(int *)(local_1c + 0x52c2c) == 0 || param_7 != '\0') ||
             (iVar5 = *(int *)(local_1c + 0x52c2c) * 0x370, *(int *)(iVar5 + 0xbc + local_1c) != 4))
            || (iVar5 = iVar5 + 0xbc + local_1c, *(int *)(iVar5 + 0x354) != param_6)) {
      local_14 = 0;
    }
    else if (iVar3 + iVar2 < local_380 + 8 + *(int *)(iVar5 + 4) + *(int *)(iVar5 + 0xc)) {
      local_14 = 0;
    }
    else {
      local_388 = *(int *)(iVar5 + 4) + 8 + *(int *)(iVar5 + 0xc);
      local_384 = *(int *)(iVar5 + 8);
      local_14 = CONCAT31((int3)((uint)local_384 >> 8),1);
    }
    local_38 = param_6;
    local_34 = 1;
    local_30 = param_8;
    local_20 = (undefined1)param_9[3];
    local_1f = param_7;
    local_18 = in_ECX_00;
    snprintf(local_378,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),in_ECX_00);
    puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = param_3;
    }
    snprintf(local_1b8,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),puVar4);
    puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (param_4 != (undefined1 *)0x0) {
      puVar4 = param_4;
    }
    snprintf(local_138,0x80,(char *)((uintptr_t)pf_module_state+0x154dU),puVar4);
    puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (param_5 != (undefined1 *)0x0) {
      puVar4 = param_5;
    }
    snprintf(local_b8,0x80,(char *)((uintptr_t)pf_module_state+0x154dU),puVar4);
    uVar1 = *(uint *)(local_1c + 0x52c2c);
    if (uVar1 < 0x180) {
      *(uint *)(local_1c + 0x52c2c) = uVar1 + 1;
      memcpy((void *)(local_1c + 0x42c + uVar1 * 0x370),&local_38c,0x370);
    }
    iVar2 = param_9[2];
    if ((char)local_14 == '\0') {
      iVar2 = iVar2 + 0x22;
    }
    else if (iVar2 <= local_384 + 0x22) {
      iVar2 = local_384 + 0x22;
    }
    param_9[2] = iVar2;
  }
  return;
}

#undef DAT_0181bc65
#undef local_18
#undef local_14
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_1b8
#undef local_138
#undef local_b8
#undef local_38
#undef local_34
#undef local_30
#undef local_20
#undef local_1f
#undef local_1c

#define local_24 (*(char (*)[16])(frame + 28))
#define local_14 (*(char * *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100122e0
 */

undefined4 recovered_100122e0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  undefined4 extraout_ECX = 0;
  undefined4 uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  undefined4 uVar8;

  uVar8 = 0x10;
  recovered_10007ce0(in_ECX,in_EDX,local_24);
  if (local_24[0] == '\0') {
    if ((in_EDX == (char *)0x0 || in_ECX == (char *)0x0) ||
       (uVar2 = strlen(in_EDX), pcVar7 = in_ECX, *in_ECX == '\0')) {
      uVar3 = 0;
    }
    else {
      do {
        uVar4 = 0;
        if (uVar2 == 0) {
LAB_10012390:
          if (uVar4 == uVar2) goto LAB_10012394;
        }
        else {
          do {
            bVar6 = pcVar7[uVar4];
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            bVar5 = in_EDX[uVar4];
            if ((byte)(bVar5 + 0xbf) < 0x1a) {
              bVar5 = bVar5 | 0x20;
            }
            if (bVar6 != bVar5) goto LAB_10012390;
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
LAB_10012394:
          local_14 = in_ECX;
          if (pcVar7 == in_ECX) {
            if ((byte)pcVar7[uVar2] < 0x3f) {
                    /* WARNING: Could not emulate address calculation at 0x100123b5 */
                    /* WARNING: Treating indirect jump as call */
              uVar8 = (**(code **)((uint)(byte)pcVar7[uVar2] * 4 + ((uintptr_t)pf_module_state+0xfbdU)))(uVar8);
              return uVar8;
            }
          }
          else if ((byte)pcVar7[-1] - 9 < 0x34) {
                    /* WARNING: Could not emulate address calculation at 0x100123a5 */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(((byte)pcVar7[-1] - 9) * 4 + ((uintptr_t)pf_module_state+0xeedU)))();
            return uVar8;
          }
        }
        uVar3 = 0;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
  }
  else {
    uVar3 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
  }
  return uVar3;
}

#undef local_24
#undef local_14

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef DAT_0181c3f1
#define DAT_0181c3f1 (*(uint8_t *)(0x181c3f1U))
#define local_384 (*(undefined4 *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(int *)(frame + 36))
#define local_378 (*(int *)(frame + 40))
#define local_374 (*(undefined4 *)(frame + 44))
#define local_370 (*(char (*)[448])(frame + 48))
#define local_1b0 (*(char (*)[64])(frame + 496))
#define local_170 (*(char (*)[64])(frame + 560))
#define local_130 (*(char (*)[256])(frame + 624))
#define local_30 (*(undefined4 *)(frame + 880))
#define local_2c (*(undefined4 *)(frame + 884))
#define local_28 (*(int *)(frame + 888))
#define local_18 (*(undefined1 *)(frame + 904))
#define local_14 (*(int *)(frame + 908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100123d0
 */

void recovered_100123d0(int in_ECX,char *in_EDX,char *param_3,undefined1 *param_4,undefined4 param_5
                       ,int param_6,int *param_7)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;

  if (param_7 == (int *)0x0) {
    return;
  }
  local_14 = in_ECX;
  memset(&local_384,0,0x370);
  local_384 = 4;
  iVar5 = param_7[1];
  local_378 = iVar5;
  if (0xdb < iVar5) {
    local_378 = 0xdc;
  }
  local_374 = 0x18;
  local_380 = *param_7;
  if (param_6 == 2) {
    iVar5 = iVar5 - local_378;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    local_380 = local_380 + iVar5;
  }
  else if (param_6 == 1) {
    iVar5 = (iVar5 - local_378) / 2;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    local_380 = local_380 + iVar5;
  }
  local_37c = param_7[2];
  local_30 = param_5;
  local_2c = 1;
  local_28 = param_6;
  local_18 = (undefined1)param_7[3];
  pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  if (in_EDX != (char *)0x0) {
    pcVar3 = in_EDX;
  }
  snprintf(local_1b0,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar3);
  pcVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  snprintf(local_170,0x40,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar3);
  puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  if (param_4 != (undefined1 *)0x0) {
    puVar4 = param_4;
  }
  snprintf(local_130,0x80,(char *)((uintptr_t)pf_module_state+0x154dU),puVar4);
  if (in_EDX == (char *)0x0) {
    if (param_3 == (char *)0x0) {
      in_EDX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4eU));
      goto LAB_1001253f;
    }
  }
  else {
    cVar1 = *in_EDX;
    if (cVar1 == '\0') {
      in_EDX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4eU));
    }
    if (param_3 == (char *)0x0 || cVar1 != '\0') goto LAB_1001253f;
  }
  in_EDX = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4eU));
  if (*param_3 != '\0') {
    in_EDX = param_3;
  }
LAB_1001253f:
  snprintf(local_370,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX);
  uVar2 = *(uint *)(local_14 + 0x52c2c);
  if (uVar2 < 0x180) {
    *(uint *)(local_14 + 0x52c2c) = uVar2 + 1;
    memcpy((void *)(local_14 + 0x42c + uVar2 * 0x370),&local_384,0x370);
  }
  param_7[2] = param_7[2] + 0x1e;
  return;
}

#undef DAT_0181bc65
#undef DAT_0181c3f1
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_374
#undef local_370
#undef local_1b0
#undef local_170
#undef local_130
#undef local_30
#undef local_2c
#undef local_28
#undef local_18
#undef local_14

#define local_298 (*(char (*)[256])(frame + 24))
#define local_198 (*(char (*)[128])(frame + 280))
#define local_118 (*(byte (*)[128])(frame + 408))
#define local_98 (*(char (*)[128])(frame + 536))
#define local_18 (*(char * *)(frame + 664))
#define local_14 (*(char * *)(frame + 668))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100125a0
 */

void recovered_100125a0(char *in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;

  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    local_198[0] = '\0';
    if (in_ECX < in_EDX && in_ECX != (char *)0x0) {
      local_14 = in_EDX;
LAB_100125eb:
      pcVar7 = local_14;
      uVar1 = strlen((char *)((uintptr_t)pf_module_state+0x1f29U));
      if ((uVar1 != 0) && (*in_ECX != '\0')) {
        do {
          uVar4 = 0;
          while (bVar5 = in_ECX[uVar4], bVar5 != 0) {
            if ((byte)(bVar5 + 0xbf) < 0x1a) {
              bVar5 = bVar5 | 0x20;
            }
            bVar6 = *(byte *)(uVar4 + ((uintptr_t)pf_module_state+0x1f29U));
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if (bVar5 != bVar6) break;
            uVar4 = uVar4 + 1;
            if (uVar1 == uVar4) goto LAB_10012670;
          }
          if (uVar1 == uVar4) goto LAB_10012670;
          pcVar2 = in_ECX + 1;
          in_ECX = in_ECX + 1;
          if (*pcVar2 == '\0') break;
        } while( true );
      }
    }
LAB_10012843:
    pcVar7 = local_198;
LAB_10012849:
    snprintf(param_3,0x80,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar7);
  }
  return;
LAB_10012670:
  if (((pcVar7 <= in_ECX) || (pcVar2 = strchr(in_ECX,0x3e), pcVar2 == (char *)0x0)) ||
     (pcVar7 <= pcVar2)) goto LAB_10012843;
  pcVar7 = pcVar2 + ~(uint)in_ECX;
  if (0xfe < (int)pcVar7) {
    pcVar7 = (char *)0xff;
  }
  local_18 = pcVar2;
  memcpy(local_298,in_ECX + 1,(ulong)pcVar7);
  local_298[(int)pcVar7] = '\0';
  recovered_10007ce0(local_298,(char *)((uintptr_t)pf_module_state+0x1ceeU),local_98);
  in_ECX = local_18 + 1;
  uVar1 = strlen((char *)((uintptr_t)pf_module_state+0x1f31U));
  pcVar7 = (char *)0x0;
  if ((uVar1 != 0) && (*in_ECX != '\0')) {
    pcVar7 = in_ECX;
    do {
      uVar4 = 0;
      while (bVar5 = pcVar7[uVar4], bVar5 != 0) {
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        bVar6 = *(byte *)(uVar4 + ((uintptr_t)pf_module_state+0x1f31U));
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar5 != bVar6) break;
        uVar4 = uVar4 + 1;
        if (uVar1 == uVar4) goto LAB_10012760;
      }
      if (uVar1 == uVar4) goto LAB_10012760;
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar2 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_10012760:
  if (local_98[0] == '\0') {
    pcVar2 = pcVar7;
    if (local_14 <= pcVar7) {
      pcVar2 = local_14;
    }
    if (pcVar7 == (char *)0x0) {
      pcVar2 = local_14;
    }
    pcVar2 = pcVar2 + ~(uint)local_18;
    if (0x7e < (int)pcVar2) {
      pcVar2 = (char *)0x7f;
    }
    memcpy(local_118,in_ECX,(ulong)pcVar2);
    local_118[(int)pcVar2] = 0;
    uVar1 = strlen((char *)local_118);
    recovered_10010a50(0,local_118,uVar1,local_98,0x80);
  }
  if (local_198[0] == '\0') {
    snprintf(local_198,0x80,(char *)((uintptr_t)pf_module_state+0x154dU),local_98);
  }
  uVar3 = recovered_100122e0(local_298,(char *)((uintptr_t)pf_module_state+0x1f3bU));
  if ((char)uVar3 != '\0') {
    pcVar7 = local_98;
    goto LAB_10012849;
  }
  if (pcVar7 != (char *)0x0) {
    in_ECX = pcVar7 + 9;
  }
  if (local_14 <= in_ECX) goto LAB_10012843;
  goto LAB_100125eb;
}

#undef local_298
#undef local_198
#undef local_118
#undef local_98
#undef local_18
#undef local_14

#undef DAT_0181bd00
#define DAT_0181bd00 (*(uint8_t *)(0x181bd00U))
#undef DAT_0181bd01
#define DAT_0181bd01 (*(uint8_t *)(0x181bd01U))
#undef DAT_0181bd02
#define DAT_0181bd02 (*(uint8_t *)(0x181bd02U))
#undef DAT_0181bd03
#define DAT_0181bd03 (*(uint8_t *)(0x181bd03U))
#undef DAT_0181bd04
#define DAT_0181bd04 (*(uint8_t *)(0x181bd04U))
#undef DAT_0181c3f1
#define DAT_0181c3f1 (*(uint8_t *)(0x181c3f1U))
#undef DAT_0181c408
#define DAT_0181c408 (*(uint8_t *)(0x181c408U))
#undef DAT_0181c409
#define DAT_0181c409 (*(uint8_t *)(0x181c409U))
#undef DAT_0181c415
#define DAT_0181c415 (*(uint8_t *)(0x181c415U))
#undef DAT_0181c416
#define DAT_0181c416 (*(uint8_t *)(0x181c416U))
#undef DAT_0181c417
#define DAT_0181c417 (*(uint8_t *)(0x181c417U))
#undef DAT_0181c44d
#define DAT_0181c44d (*(uint8_t *)(0x181c44dU))
#undef DAT_0181c5aa
#define DAT_0181c5aa (*(uint8_t *)(0x181c5aaU))
#undef DAT_0181c5ab
#define DAT_0181c5ab (*(uint8_t *)(0x181c5abU))
#undef DAT_0181c5ac
#define DAT_0181c5ac (*(uint8_t *)(0x181c5acU))
#undef DAT_0181c5ad
#define DAT_0181c5ad (*(uint8_t *)(0x181c5adU))
#undef DAT_0181c5ae
#define DAT_0181c5ae (*(char *)(0x181c5aeU))
#undef DAT_0181c5af
#define DAT_0181c5af (*(char *)(0x181c5afU))
#undef DAT_0181c5b0
#define DAT_0181c5b0 (*(char *)(0x181c5b0U))
#undef DAT_0181c5b1
#define DAT_0181c5b1 (*(char *)(0x181c5b1U))
#undef DAT_0181c5b3
#define DAT_0181c5b3 (*(uint8_t *)(0x181c5b3U))
#undef DAT_0181c5b4
#define DAT_0181c5b4 (*(uint8_t *)(0x181c5b4U))
#undef DAT_0181c5b5
#define DAT_0181c5b5 (*(uint8_t *)(0x181c5b5U))
#undef DAT_0181c5b6
#define DAT_0181c5b6 (*(uint8_t *)(0x181c5b6U))
#undef DAT_0181c5b7
#define DAT_0181c5b7 (*(uint8_t *)(0x181c5b7U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012880
 */

undefined4 recovered_10012880(byte *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  char *pcVar7;

  if (in_ECX != (byte *)0x0) {
    bVar5 = *in_ECX;
    puVar3 = (undefined1 *)(uint)bVar5;
    cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e0bU));
    if (bVar5 == 0) {
      pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x155dU));
      goto LAB_100129ba;
    }
    if ((byte)(bVar5 + 0xbf) < 0x1a) {
      puVar6 = (undefined1 *)(uint)(bVar5 | 0x20);
      if ((bVar5 | 0x20) == 0x62) goto LAB_1001294c;
LAB_100128c4:
      if (puVar6 == (undefined1 *)0x61) {
        bVar4 = in_ECX[1];
        if (bVar4 == 0) {
          pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e07U));
        }
        else {
          puVar3 = (undefined1 *)(uint)CONCAT11(bVar4 + 0xbf,bVar5);
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (bVar4 != 0x72) goto LAB_100129cb;
          bVar4 = in_ECX[2];
          if (bVar4 == 0) {
            pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e08U));
          }
          else {
            puVar3 = (undefined1 *)(uint)CONCAT11(bVar4 + 0xbf,bVar5);
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar4 != 0x65) goto LAB_100129cb;
            bVar4 = in_ECX[3];
            if (bVar4 == 0) {
              pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e09U));
            }
            else {
              puVar3 = (undefined1 *)(uint)CONCAT11(bVar4 + 0xbf,bVar5);
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                bVar4 = bVar4 | 0x20;
              }
              if ((bVar4 != 0x61) || (in_ECX[4] != 0)) goto LAB_100129cb;
              pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e0aU));
            }
          }
        }
        if (*pcVar7 == '\0') goto LAB_10012c37;
      }
LAB_100129cb:
      bVar5 = (byte)puVar3;
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        puVar6 = (undefined1 *)(uint)(bVar5 | 0x20);
        if ((bVar5 | 0x20) != 99) goto LAB_100129e8;
LAB_10012a32:
        bVar5 = in_ECX[1];
        cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e0cU));
        if (bVar5 != 0) {
          if ((byte)(bVar5 + 0xbf) < 0x1a) {
            bVar5 = bVar5 | 0x20;
          }
          if (bVar5 != 0x6f) goto LAB_10012aaf;
          bVar5 = in_ECX[2];
          cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e0dU));
          if (bVar5 != 0) {
            if ((byte)(bVar5 + 0xbf) < 0x1a) {
              bVar5 = bVar5 | 0x20;
            }
            if ((bVar5 != 0x6c) || (cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1e0eU)), in_ECX[3] != 0)) goto LAB_10012aaf;
          }
        }
        goto joined_r0x10012aa1;
      }
      puVar6 = puVar3;
      if (bVar5 == 99) goto LAB_10012a32;
LAB_100129e8:
      if (((uint)puVar6 & 0xff) == 0x62) {
        bVar4 = in_ECX[1];
        if (bVar4 == 0) {
          pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c65U));
LAB_10012a20:
          if (*pcVar7 == '\0') goto LAB_10012c37;
          if ((char)puVar3 == '\0') goto joined_r0x10012aa1;
        }
        else {
          puVar3 = (undefined1 *)(uint)CONCAT11(bVar4 + 0xbf,bVar5);
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if ((bVar4 == 0x72) && (in_ECX[2] == 0)) {
            pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c66U));
            goto LAB_10012a20;
          }
        }
        if ((char)puVar6 == 'c') goto LAB_10012a32;
      }
LAB_10012aaf:
      bVar4 = (byte)puVar3;
      puVar6 = puVar3;
      bVar5 = bVar4;
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        puVar6 = (undefined1 *)(uint)(bVar4 | 0x20);
        bVar5 = bVar4 | 0x20;
      }
      if (bVar5 != 0x68) {
        if (((uint)puVar6 & 0xff) != 0x65) goto LAB_10012bc7;
        bVar5 = in_ECX[1];
        if (bVar5 == 0) {
          pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e10U));
LAB_10012b72:
          if (*pcVar7 == '\0') goto LAB_10012c37;
          if ((char)puVar3 == '\0') goto LAB_10012bb1;
        }
        else {
          puVar3 = (undefined1 *)(uint)CONCAT11(bVar5 + 0xbf,bVar4);
          if ((byte)(bVar5 + 0xbf) < 0x1a) {
            bVar5 = bVar5 | 0x20;
          }
          if (bVar5 == 0x6d) {
            bVar5 = in_ECX[2];
            if (bVar5 == 0) {
              pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e11U));
            }
            else {
              puVar3 = (undefined1 *)(uint)CONCAT11(bVar5 + 0xbf,bVar4);
              if ((byte)(bVar5 + 0xbf) < 0x1a) {
                bVar5 = bVar5 | 0x20;
              }
              if (bVar5 != 0x62) goto LAB_10012b7f;
              bVar5 = in_ECX[3];
              if (bVar5 == 0) {
                pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e12U));
              }
              else {
                puVar3 = (undefined1 *)(uint)CONCAT11(bVar5 + 0xbf,bVar4);
                if ((byte)(bVar5 + 0xbf) < 0x1a) {
                  bVar5 = bVar5 | 0x20;
                }
                if (bVar5 != 0x65) goto LAB_10012b7f;
                bVar5 = in_ECX[4];
                if (bVar5 == 0) {
                  pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e13U));
                }
                else {
                  puVar3 = (undefined1 *)(uint)CONCAT11(bVar5 + 0xbf,bVar4);
                  if ((byte)(bVar5 + 0xbf) < 0x1a) {
                    bVar5 = bVar5 | 0x20;
                  }
                  if ((bVar5 != 100) || (in_ECX[5] != 0)) goto LAB_10012b7f;
                  pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e14U));
                }
              }
            }
            goto LAB_10012b72;
          }
        }
LAB_10012b7f:
        if ((char)puVar6 != 'h') goto LAB_10012bc7;
      }
      bVar5 = in_ECX[1];
      if (bVar5 == 0) {
        puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c73U));
        cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c73U));
      }
      else {
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        if ((bVar5 != 0x72) || (in_ECX[2] != 0)) goto LAB_10012bc7;
        puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c74U));
        cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c74U));
      }
    }
    else {
      puVar6 = puVar3;
      if (bVar5 != 0x62) goto LAB_100128c4;
LAB_1001294c:
      bVar4 = in_ECX[1];
      if (bVar4 != 0) {
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if (bVar4 == 0x61) {
          bVar4 = in_ECX[2];
          if (bVar4 == 0) {
            pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x155fU));
          }
          else {
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar4 != 0x73) goto LAB_100129cb;
            bVar4 = in_ECX[3];
            if (bVar4 == 0) {
              pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1560U));
            }
            else {
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                bVar4 = bVar4 | 0x20;
              }
              if ((bVar4 != 0x65) || (in_ECX[4] != 0)) goto LAB_100129cb;
              pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1561U));
            }
          }
          goto LAB_100129ba;
        }
        goto LAB_100129cb;
      }
      pcVar7 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x155eU));
LAB_100129ba:
      if (*pcVar7 == '\0') goto LAB_10012c37;
      if (bVar5 != 0) goto LAB_100129cb;
joined_r0x10012aa1:
      if (cVar1 == '\0') goto LAB_10012c37;
      if ((char)puVar3 != '\0') goto LAB_10012aaf;
LAB_10012bb1:
      puVar3 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1c72U));
      cVar1 = (*(uint8_t *)((uintptr_t)pf_module_state+0x1c72U));
    }
    if (cVar1 == '\0') goto LAB_10012c37;
  }
LAB_10012bc7:
  bVar2 = recovered_10007c80(in_ECX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1caaU)));
  puVar3 = (undefined1 *)CONCAT31(extraout_var,bVar2);
  if (!bVar2) {
    bVar2 = recovered_10007c80(in_ECX,&(*(uint8_t *)((uintptr_t)pf_module_state+0x1c4eU)));
    puVar3 = (undefined1 *)CONCAT31(extraout_var_00,bVar2);
    if (!bVar2) {
      bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1578U));
      puVar3 = (undefined1 *)CONCAT31(extraout_var_01,bVar2);
      if (!bVar2) {
        bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1558U));
        puVar3 = (undefined1 *)CONCAT31(extraout_var_02,bVar2);
        if (!bVar2) {
          bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1e15U));
          puVar3 = (undefined1 *)CONCAT31(extraout_var_03,bVar2);
          if (!bVar2) {
            bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1c75U));
            puVar3 = (undefined1 *)CONCAT31(extraout_var_04,bVar2);
            if (!bVar2) {
              bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1e1bU));
              puVar3 = (undefined1 *)CONCAT31(extraout_var_05,bVar2);
              if (!bVar2) {
                bVar2 = recovered_10007c80(in_ECX,(byte *)((uintptr_t)pf_module_state+0x1e21U));
                return CONCAT31(extraout_var_06,bVar2);
              }
            }
          }
        }
      }
    }
  }
LAB_10012c37:
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}

#undef DAT_0181bd00
#undef DAT_0181bd01
#undef DAT_0181bd02
#undef DAT_0181bd03
#undef DAT_0181bd04
#undef DAT_0181c3f1
#undef DAT_0181c408
#undef DAT_0181c409
#undef DAT_0181c415
#undef DAT_0181c416
#undef DAT_0181c417
#undef DAT_0181c44d
#undef DAT_0181c5aa
#undef DAT_0181c5ab
#undef DAT_0181c5ac
#undef DAT_0181c5ad
#undef DAT_0181c5ae
#undef DAT_0181c5af
#undef DAT_0181c5b0
#undef DAT_0181c5b1
#undef DAT_0181c5b3
#undef DAT_0181c5b4
#undef DAT_0181c5b5
#undef DAT_0181c5b6
#undef DAT_0181c5b7

#define local_50 (*(byte (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012c50
 */

char * recovered_10012c50(int in_ECX,byte *in_EDX)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;

  if (((in_EDX != (byte *)0x0) && (*in_EDX != 0)) &&
     (uVar2 = recovered_10012880(in_EDX), (char)uVar2 == '\0')) {
    snprintf((char *)local_50,0x40,(char *)((uintptr_t)pf_module_state+0x1e25U),in_EDX);
    pcVar7 = (char *)(in_ECX + 1);
    uVar3 = strlen((char *)local_50);
    if ((uVar3 != 0) && (*pcVar7 != '\0')) {
      do {
        uVar4 = 0;
        while (bVar5 = pcVar7[uVar4], bVar5 != 0) {
          if ((byte)(bVar5 + 0xbf) < 0x1a) {
            bVar5 = bVar5 | 0x20;
          }
          bVar6 = local_50[uVar4];
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar5 != bVar6) break;
          uVar4 = uVar4 + 1;
          if (uVar3 == uVar4) goto LAB_10012cf1;
        }
        if (uVar3 == uVar4) {
LAB_10012cf1:
          uVar3 = strlen((char *)local_50);
          return pcVar7 + uVar3;
        }
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
  }
  return (char *)(in_ECX + 1);
}

#undef local_50

#define local_b9 (*(byte (*)[128])(frame + 23))
#define local_39 (*(byte *)(frame + 151))
#define local_38 (*(byte (*)[39])(frame + 152))
#define local_11 (*(undefined1 *)(frame + 191))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012d10
 */

bool recovered_10012d10(char *in_ECX,char *in_EDX,byte *param_3,undefined1 *param_4)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  char *n;
  bool bVar3;

  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (((in_ECX < in_EDX) && (*param_3 != 0)) && (*in_ECX == '<')) {
    local_11 = 0;
    local_39 = 0;
    n = in_EDX + ~(uint)in_ECX;
    if (0x7e < (int)n) {
      n = (char *)0x7f;
    }
    memcpy(local_b9,in_ECX + 1,(ulong)n);
    local_b9[(int)n] = 0;
    recovered_10007bb0(local_b9,&local_39,0x28,&local_11);
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = local_11;
    }
    if (local_39 != 0) {
      pbVar1 = local_38;
      do {
        bVar2 = *param_3;
        if (bVar2 == 0) goto LAB_10012de6;
        if ((byte)(local_39 + 0xbf) < 0x1a) {
          local_39 = local_39 | 0x20;
        }
        if ((byte)(bVar2 + 0xbf) < 0x1a) {
          bVar2 = bVar2 | 0x20;
        }
        if (local_39 != bVar2) goto LAB_10012de6;
        param_3 = param_3 + 1;
        local_39 = *pbVar1;
        pbVar1 = pbVar1 + 1;
      } while (local_39 != 0);
    }
    bVar3 = *param_3 == 0;
  }
  else {
LAB_10012de6:
    bVar3 = false;
  }
  return bVar3;
}

#undef local_b9
#undef local_39
#undef local_38
#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e00
 */

undefined4 recovered_10012e00(uint in_ECX,uint in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  if (in_EDX <= in_ECX) {
    return 0;
  }
  uVar1 = *(byte *)(in_EDX - 1) - 9;
  if (uVar1 < 0x27) {
                    /* WARNING: Could not emulate address calculation at 0x10012e1c */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(uVar1 * 4 + ((uintptr_t)pf_module_state+0x10b9U)))();
    return uVar2;
  }
  return 0;
}


#define local_94 (*(byte (*)[128])(frame + 28))
#define local_14 (*(ulong *)(frame + 156))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012e40
 */

undefined4 recovered_10012e40(char *in_ECX,char *in_EDX,byte *param_3)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 uVar7;

  if ((param_3 != (byte *)0x0) &&
     (local_14 = strlen((char *)param_3), in_EDX != (char *)0x0 && in_ECX != (char *)0x0
     )) {
    uVar7 = 0x80;
    uVar1 = recovered_1000d2c0(in_ECX,in_EDX,local_94);
    if ((char)uVar1 != '\0') {
      pbVar2 = param_3;
      if (local_94[0] != 0) {
        pbVar6 = local_94;
        do {
          pbVar6 = pbVar6 + 1;
          bVar4 = *pbVar2;
          if (bVar4 == 0) goto LAB_10012ef2;
          if ((byte)(local_94[0] + 0xbf) < 0x1a) {
            local_94[0] = local_94[0] | 0x20;
          }
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if (local_94[0] != bVar4) goto LAB_10012ef2;
          pbVar2 = pbVar2 + 1;
          local_94[0] = *pbVar6;
        } while (local_94[0] != 0);
      }
      if (*pbVar2 == 0) {
        return CONCAT31((int3)((uint)pbVar2 >> 8),1);
      }
LAB_10012ef2:
      uVar3 = 0;
      if (local_14 == 0) {
        return 0;
      }
      do {
        bVar4 = local_94[uVar3];
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        bVar5 = param_3[uVar3];
        if ((byte)(bVar5 + 0xbf) < 0x1a) {
          bVar5 = bVar5 | 0x20;
        }
        if (bVar4 != bVar5) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (local_14 != uVar3);
      if (local_94[local_14] < 0x22) {
                    /* WARNING: Could not emulate address calculation at 0x10012f3e */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)((uint)local_94[local_14] * 4 + ((uintptr_t)pf_module_state+0x1155U)))(uVar7);
        return uVar1;
      }
    }
  }
  return 0;
}

#undef local_94
#undef local_14

#define local_410 (*(char (*)[1024])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012f60
 */

undefined4 recovered_10012f60(int in_ECX,char *in_EDX)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (in_EDX != (char *)0x0) {
    uVar1 = recovered_1000d120(*(char **)(in_ECX + 0x314),in_EDX,local_410);
    if ((char)uVar1 != '\0') {
      uVar1 = recovered_10012e40(local_410,(char *)((uintptr_t)pf_module_state+0x1e3cU),(byte *)((uintptr_t)pf_module_state+0x1e44U));
      if ((char)uVar1 != '\0') {
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
    uVar1 = recovered_1000d120(*(char **)(in_ECX + 0x314),in_EDX,local_410);
    if ((char)uVar1 != '\0') {
      uVar1 = recovered_10012e40(local_410,(char *)((uintptr_t)pf_module_state+0x1e49U),(byte *)((uintptr_t)pf_module_state+0x1cf4U));
      return uVar1;
    }
  }
  return 0;
}

#undef local_410

#define local_298 (*(byte *)(frame + 24))
#define local_297 (*(byte (*)[126])(frame + 25))
#define local_98 (*(byte (*)[128])(frame + 536))
#define local_18 (*(int * *)(frame + 664))
#define local_14 (*(int *)(frame + 668))
#define abStack_219 (*(byte (*)[385])(frame + 151))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012ff0
 */

void recovered_10012ff0(int in_ECX,int *in_EDX,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,int param_8)

{
  unsigned char frame[720] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;

  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    local_18 = in_EDX;
    local_14 = in_ECX;
    uVar1 = strlen(param_5);
    pbVar2 = &local_298;
    recovered_10010a50(local_14,(byte *)param_5,uVar1,(char *)pbVar2,0x200);
    if (local_298 != 0) {
      do {
        pbVar3 = pbVar2;
        while ((local_298 - 9 < 0x18 && ((0x80001bU >> (local_298 - 9 & 0x1f) & 1) != 0))) {
          local_298 = pbVar3[1];
          pbVar3 = pbVar3 + 1;
        }
        iVar4 = 0;
        while( true ) {
          if (local_298 < 0x21) {
                    /* WARNING: Could not emulate address calculation at 0x100130d3 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((uint)local_298 * 4 + ((uintptr_t)pf_module_state+0x11ddU)))();
            return;
          }
          if (iVar4 == 0x7f) break;
          local_98[iVar4] = local_298;
          local_298 = pbVar3[iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        local_98[0x7f] = 0;
        recovered_10013710(local_14,local_18,param_3,param_4,(char *)local_98,param_6,param_7,
                           param_8);
        pbVar2 = pbVar3 + 0x7f;
        local_298 = pbVar3[0x7f];
      } while (local_298 != 0);
    }
  }
  return;
}

#undef local_298
#undef local_297
#undef local_98
#undef local_18
#undef local_14
#undef abStack_219

#undef DAT_0181bd2f
#define DAT_0181bd2f (*(uint8_t *)(0x181bd2fU))
#undef DAT_0181bd30
#define DAT_0181bd30 (*(uint8_t *)(0x181bd30U))
#undef DAT_0181bd31
#define DAT_0181bd31 (*(uint8_t *)(0x181bd31U))
#undef DAT_0181bd32
#define DAT_0181bd32 (*(uint8_t *)(0x181bd32U))
#undef DAT_0181bd33
#define DAT_0181bd33 (*(uint8_t *)(0x181bd33U))
#undef DAT_0181bd34
#define DAT_0181bd34 (*(uint8_t *)(0x181bd34U))
#undef DAT_0181bd3e
#define DAT_0181bd3e (*(uint8_t *)(0x181bd3eU))
#undef DAT_0181bd3f
#define DAT_0181bd3f (*(uint8_t *)(0x181bd3fU))
#undef DAT_0181bd40
#define DAT_0181bd40 (*(uint8_t *)(0x181bd40U))
#undef DAT_0181bd41
#define DAT_0181bd41 (*(uint8_t *)(0x181bd41U))
#undef DAT_0181bd42
#define DAT_0181bd42 (*(uint8_t *)(0x181bd42U))
#undef DAT_0181bd43
#define DAT_0181bd43 (*(uint8_t *)(0x181bd43U))
#undef DAT_0181bd44
#define DAT_0181bd44 (*(uint8_t *)(0x181bd44U))
#undef DAT_0181c5a1
#define DAT_0181c5a1 (*(uint8_t *)(0x181c5a1U))
#undef DAT_0181c5a2
#define DAT_0181c5a2 (*(uint8_t *)(0x181c5a2U))
#undef DAT_0181c5a3
#define DAT_0181c5a3 (*(uint8_t *)(0x181c5a3U))
#undef DAT_0181c5a4
#define DAT_0181c5a4 (*(uint8_t *)(0x181c5a4U))
#undef DAT_0181c5a5
#define DAT_0181c5a5 (*(uint8_t *)(0x181c5a5U))
#undef DAT_0181c5a6
#define DAT_0181c5a6 (*(uint8_t *)(0x181c5a6U))
#undef DAT_0181c5a7
#define DAT_0181c5a7 (*(uint8_t *)(0x181c5a7U))
#undef DAT_0181c5a8
#define DAT_0181c5a8 (*(uint8_t *)(0x181c5a8U))
#define local_58 (*(byte *)(frame + 152))
#define local_57 (*(byte *)(frame + 153))
#define local_56 (*(char *)(frame + 154))
#define local_34 (*(int *)(frame + 188))
#define local_30 (*(byte * *)(frame + 192))
#define local_2c (*(int *)(frame + 196))
#define local_28 (*(byte * *)(frame + 200))
#define local_24 (*(byte * *)(frame + 204))
#define local_20 (*(byte * *)(frame + 208))
#define local_1c (*(byte * *)(frame + 212))
#define local_18 (*(byte * *)(frame + 216))
#define local_11 (*(byte *)(frame + 223))
#define local_dc (*(byte (*)[128])(frame + 20))
#define local_5c (*(byte *)(frame + 148))
#define local_5b (*(byte *)(frame + 149))
#define local_5a (*(byte *)(frame + 150))
#define local_59 (*(byte *)(frame + 151))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013110
 */

byte * recovered_10013110(byte *in_ECX,byte *in_EDX,byte *param_3)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulong n;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;

  local_1c = in_ECX + 1;
  if (in_EDX == (byte *)0x0) {
    return local_1c;
  }
  if (param_3 == (byte *)0x0 || in_EDX <= in_ECX) {
    return local_1c;
  }
  bVar6 = *param_3;
  if (bVar6 == 0) {
    return local_1c;
  }
  local_18 = in_EDX;
  uVar4 = recovered_10012880(param_3);
  if ((char)uVar4 != '\0') {
    return local_1c;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  local_20 = param_3;
  if (bVar6 == 0x74) {
    bVar6 = param_3[1];
    if (bVar6 == 0) {
      pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dfeU));
    }
    else {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar6 != 0x65) goto LAB_1001347d;
      bVar6 = param_3[2];
      if (bVar6 == 0) {
        pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1dffU));
      }
      else {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar6 != 0x6d) goto LAB_1001347d;
        bVar6 = param_3[3];
        if (bVar6 == 0) {
          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e00U));
        }
        else {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar6 != 0x70) goto LAB_1001347d;
          bVar6 = param_3[4];
          if (bVar6 == 0) {
            pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e01U));
          }
          else {
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if (bVar6 != 0x6c) goto LAB_1001347d;
            bVar6 = param_3[5];
            if (bVar6 == 0) {
              pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e02U));
            }
            else {
              if ((byte)(bVar6 + 0xbf) < 0x1a) {
                bVar6 = bVar6 | 0x20;
              }
              if (bVar6 != 0x61) goto LAB_1001347d;
              bVar6 = param_3[6];
              if (bVar6 == 0) {
                pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e03U));
              }
              else {
                if ((byte)(bVar6 + 0xbf) < 0x1a) {
                  bVar6 = bVar6 | 0x20;
                }
                if (bVar6 != 0x74) goto LAB_1001347d;
                bVar6 = param_3[7];
                if (bVar6 == 0) {
                  pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e04U));
                }
                else {
                  if ((byte)(bVar6 + 0xbf) < 0x1a) {
                    bVar6 = bVar6 | 0x20;
                  }
                  if ((bVar6 != 0x65) || (param_3[8] != 0)) goto LAB_1001347d;
                  pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1e05U));
                }
              }
            }
          }
        }
      }
    }
    cVar1 = *pcVar8;
  }
  else {
    if (bVar6 != 0x73) goto LAB_1001347d;
    bVar6 = param_3[1];
    if (bVar6 == 0) {
      pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
LAB_100133a6:
      if (*pcVar8 == '\0') goto LAB_1001344b;
    }
    else {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar6 == 99) {
        bVar6 = param_3[2];
        if (bVar6 == 0) {
          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
        }
        else {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar6 != 0x72) goto LAB_100133af;
          bVar6 = param_3[3];
          if (bVar6 == 0) {
            pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
          }
          else {
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if (bVar6 != 0x69) goto LAB_100133af;
            bVar6 = param_3[4];
            if (bVar6 == 0) {
              pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
            }
            else {
              if ((byte)(bVar6 + 0xbf) < 0x1a) {
                bVar6 = bVar6 | 0x20;
              }
              if (bVar6 != 0x70) goto LAB_100133af;
              bVar6 = param_3[5];
              if (bVar6 == 0) {
                pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
              }
              else {
                if ((byte)(bVar6 + 0xbf) < 0x1a) {
                  bVar6 = bVar6 | 0x20;
                }
                if ((bVar6 != 0x74) || (param_3[6] != 0)) goto LAB_100133af;
                pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U));
              }
            }
          }
        }
        goto LAB_100133a6;
      }
    }
LAB_100133af:
    bVar6 = param_3[1];
    if (bVar6 == 0) {
      pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158dU));
    }
    else {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar6 != 0x74) goto LAB_1001347d;
      bVar6 = param_3[2];
      if (bVar6 == 0) {
        pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158eU));
      }
      else {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar6 != 0x79) goto LAB_1001347d;
        bVar6 = param_3[3];
        if (bVar6 == 0) {
          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x158fU));
        }
        else {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar6 != 0x6c) goto LAB_1001347d;
          bVar6 = param_3[4];
          if (bVar6 == 0) {
            pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1590U));
          }
          else {
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if ((bVar6 != 0x65) || (param_3[5] != 0)) goto LAB_1001347d;
            pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x1591U));
          }
        }
      }
    }
    cVar1 = *pcVar8;
  }
  if (cVar1 == '\0') {
LAB_1001344b:
    pbVar5 = recovered_100139f0(in_ECX,local_18,(char *)param_3);
    return pbVar5;
  }
LAB_1001347d:
  if (local_1c < local_18) {
    local_34 = -(int)local_18;
    local_2c = 1;
    local_30 = local_1c;
    do {
      if (*local_30 == 0) {
        return local_1c;
      }
      iVar7 = 0;
      while (local_30[iVar7] != 0x3c) {
        iVar7 = iVar7 + 1;
        if ((int)local_18 - (int)local_30 == iVar7) {
          return local_1c;
        }
      }
      local_24 = local_30 + iVar7;
      if (local_24 == local_18) {
        return local_1c;
      }
      uVar9 = 0xffffffff;
      while (local_24[uVar9 + 1] != 0x3e) {
        iVar2 = uVar9 + local_34 + 1;
        uVar9 = uVar9 + 1;
        param_3 = local_20;
        if (local_24 + iVar2 == (byte *)0xffffffff) {
          return local_1c;
        }
      }
      local_28 = local_24 + uVar9 + 1;
      local_11 = 0;
      local_5c = 0;
      if (((int)(uVar9 + 1) < 1) || (*local_24 != 0x3c)) {
LAB_10013579:
        if (local_5c == 0) {
          pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159bU));
LAB_1001365b:
          if (*pcVar8 != '\0') goto LAB_10013660;
        }
        else {
          bVar6 = local_5c;
          if ((byte)(local_5c + 0xbf) < 0x1a) {
            bVar6 = local_5c | 0x20;
          }
          if (bVar6 == 0x73) {
            if (local_5b == 0) {
              pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159cU));
            }
            else {
              bVar6 = local_5b;
              if ((byte)(local_5b + 0xbf) < 0x1a) {
                bVar6 = local_5b | 0x20;
              }
              if (bVar6 != 99) goto LAB_10013660;
              if (local_5a == 0) {
                pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159dU));
              }
              else {
                bVar6 = local_5a;
                if ((byte)(local_5a + 0xbf) < 0x1a) {
                  bVar6 = local_5a | 0x20;
                }
                if (bVar6 != 0x72) goto LAB_10013660;
                if (local_59 == 0) {
                  pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159eU));
                }
                else {
                  bVar6 = local_59;
                  if ((byte)(local_59 + 0xbf) < 0x1a) {
                    bVar6 = local_59 | 0x20;
                  }
                  if (bVar6 != 0x69) goto LAB_10013660;
                  if (local_58 == 0) {
                    pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x159fU));
                  }
                  else {
                    bVar6 = local_58;
                    if ((byte)(local_58 + 0xbf) < 0x1a) {
                      bVar6 = local_58 | 0x20;
                    }
                    param_3 = local_20;
                    if (bVar6 != 0x70) goto LAB_10013660;
                    if (local_57 == 0) {
                      pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a0U));
                    }
                    else {
                      bVar6 = local_57;
                      if ((byte)(local_57 + 0xbf) < 0x1a) {
                        bVar6 = local_57 | 0x20;
                      }
                      if ((bVar6 != 0x74) || (pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x15a1U)), local_56 != '\0'))
                      goto LAB_10013660;
                    }
                  }
                }
              }
            }
            goto LAB_1001365b;
          }
LAB_10013660:
          bVar3 = recovered_10007c80(&local_5c,&(*(uint8_t *)((uintptr_t)pf_module_state+0x158cU)));
          if ((!bVar3) && (bVar3 = recovered_10007c80(&local_5c,(byte *)((uintptr_t)pf_module_state+0x1dfdU)), !bVar3))
          goto LAB_1001369c;
        }
        local_30 = recovered_100139f0(local_28,local_18,(char *)&local_5c);
      }
      else {
        n = uVar9;
        if (0x7e < (int)uVar9) {
          n = 0x7f;
        }
        memcpy(local_dc,local_30 + iVar7 + 1,n);
        local_dc[n] = 0;
        recovered_10007bb0(local_dc,&local_5c,0x28,&local_11);
        if ((local_11 & 1) == 0) goto LAB_10013579;
LAB_1001369c:
        pbVar5 = local_28;
        bVar3 = recovered_10012d10((char *)local_24,(char *)local_28,param_3,&local_11);
        if (bVar3) {
          if (local_11 == 1) {
            local_2c = local_2c + -1;
            if (local_2c == 0) {
              return local_24 + uVar9 + 2;
            }
          }
          else {
            uVar4 = recovered_10012e00((uint)local_24,(uint)pbVar5);
            local_2c = local_2c + (uint)(byte)((byte)uVar4 ^ 1);
          }
        }
        local_30 = local_24 + uVar9 + 2;
      }
    } while (local_30 < local_18);
  }
  return local_1c;
}

#undef DAT_0181bd2f
#undef DAT_0181bd30
#undef DAT_0181bd31
#undef DAT_0181bd32
#undef DAT_0181bd33
#undef DAT_0181bd34
#undef DAT_0181bd3e
#undef DAT_0181bd3f
#undef DAT_0181bd40
#undef DAT_0181bd41
#undef DAT_0181bd42
#undef DAT_0181bd43
#undef DAT_0181bd44
#undef DAT_0181c5a1
#undef DAT_0181c5a2
#undef DAT_0181c5a3
#undef DAT_0181c5a4
#undef DAT_0181c5a5
#undef DAT_0181c5a6
#undef DAT_0181c5a7
#undef DAT_0181c5a8
#undef local_58
#undef local_57
#undef local_56
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_11
#undef local_dc
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#define local_390 (*(undefined4 *)(frame + 16))
#define local_38c (*(int *)(frame + 20))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(uint *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(char (*)[192])(frame + 36))
#define local_2bc (*(char (*)[640])(frame + 228))
#define local_3c (*(undefined4 *)(frame + 868))
#define local_38 (*(int *)(frame + 872))
#define local_24 (*(undefined1 *)(frame + 892))
#define local_20 (*(int *)(frame + 896))
#define local_1c (*(int *)(frame + 900))
#define local_18 (*(uint *)(frame + 904))
#define local_14 (*(int *)(frame + 908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013710
 */

void recovered_10013710(int in_ECX,int *in_EDX,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,int param_8)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;

  if ((param_5 != (char *)0x0 && (param_4 != (int *)0x0 && param_3 != (int *)0x0)) &&
     (*param_5 != '\0')) {
    local_14 = param_8;
    if (param_8 < 2) {
      local_14 = 1;
    }
    local_1c = *in_EDX;
    local_18 = in_EDX[1];
    local_20 = in_ECX;
    uVar2 = recovered_100138b0(param_5,param_8);
    iVar3 = *param_3;
    iVar4 = *in_EDX;
    if (iVar3 != iVar4) {
      if ((int)(local_18 + local_1c) < (int)(uVar2 + iVar3)) {
        *param_3 = iVar4;
        *param_4 = *param_4 + 4 + local_14 * 8;
        iVar3 = *param_3;
        iVar4 = *in_EDX;
      }
      local_18 = uVar2;
      if (iVar3 != iVar4) {
        *param_3 = iVar3 + local_14 * 6;
      }
    }
    memset(&local_390,0,0x370);
    local_390 = param_6;
    local_38 = param_8;
    local_3c = 0xffffffff;
    local_24 = (undefined1)in_EDX[3];
    local_38c = *param_3;
    local_388 = *param_4;
    local_380 = local_14 * 8 + 3;
    local_384 = uVar2;
    snprintf(local_37c,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),param_5);
    puVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (param_7 != (undefined1 *)0x0) {
      puVar5 = param_7;
    }
    snprintf(local_2bc,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),puVar5);
    uVar1 = *(uint *)(local_20 + 0x52c2c);
    if (uVar1 < 0x180) {
      *(uint *)(local_20 + 0x52c2c) = uVar1 + 1;
      memcpy((void *)(local_20 + 0x42c + uVar1 * 0x370),&local_390,0x370);
    }
    *param_3 = *param_3 + uVar2;
  }
  return;
}

#undef DAT_0181bc65
#undef local_390
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_2bc
#undef local_3c
#undef local_38
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

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
#define local_1c (*(uint *)(frame + 36))
#define local_28 (*(void * *)(frame + 24))
#define local_24 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100138b0
 */

uint recovered_100138b0(char *in_ECX,uint in_EDX)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;

  if (in_ECX == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    if (*in_ECX != '\0') {
      memset(&local_28,0,0x18);
      uVar4 = in_EDX;
      if ((int)in_EDX < 2) {
        uVar4 = 1;
      }
      iVar1 = Ram00006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
          (uVar2 = Ram00006808, 0xb < uVar2)) &&
         (((uVar2 = Ram00006808, 0x17b < uVar2 &&
           (pcVar3 = (code *)UINT_00006978, pcVar3 != (code *)0x0)) &&
          (uVar4 = (*pcVar3)(in_ECX,0xffffffff,uVar4,0,&local_28), uVar4 != 0)))) {
        uVar4 = local_1c;
        if (0x7ffffffe < local_1c) {
          uVar4 = 0x7fffffff;
        }
        if (local_28 == (void *)0x0 || local_24 != 0) {
          return uVar4;
        }
        iVar1 = Ram00006800;
        if (iVar1 != 0x50414d57) {
          return uVar4;
        }
        iVar1 = Ram00006804;
        if (iVar1 == 0) {
          return uVar4;
        }
        uVar2 = Ram00006808;
        if (uVar2 < 0xc) {
          return uVar4;
        }
        uVar2 = Ram00006808;
        if (uVar2 < 0x54) {
          return uVar4;
        }
        pcVar3 = (code *)UINT_00006850;
        if (pcVar3 == (code *)0x0) {
          return uVar4;
        }
        (*pcVar3)(local_28);
        return uVar4;
      }
    }
    uVar5 = strlen(in_ECX);
  }
  if ((int)in_EDX < 2) {
    in_EDX = 1;
  }
  return in_EDX * uVar5 * 6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006978
#undef local_1c
#undef local_28
#undef local_24

#define local_54 (*(byte (*)[64])(frame + 28))
#define local_14 (*(byte * *)(frame + 92))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100139f0
 */

byte * recovered_100139f0(byte *in_ECX,byte *in_EDX,char *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  byte *pbVar8;

  if (((param_3 == (char *)0x0 || in_EDX <= in_ECX) || (*param_3 == '\0')) ||
     (uVar3 = recovered_10012880((byte *)param_3), (char)uVar3 != '\0')) {
    local_14 = in_ECX + 1;
  }
  else {
    snprintf((char *)local_54,0x40,(char *)((uintptr_t)pf_module_state+0x1e25U),param_3);
    pbVar1 = in_ECX + 1;
    uVar4 = strlen((char *)local_54);
    local_14 = pbVar1;
    if (in_ECX + uVar4 + 1 <= in_EDX && (pbVar1 < in_EDX && uVar4 != 0)) {
      pbVar8 = pbVar1;
      do {
        if (*pbVar8 == 0) {
          return pbVar1;
        }
        uVar6 = 0;
        while ((pbVar8 + uVar6 < in_EDX && (bVar7 = pbVar8[uVar6], bVar7 != 0))) {
          if ((byte)(bVar7 + 0xbf) < 0x1a) {
            bVar7 = bVar7 | 0x20;
          }
          bVar5 = local_54[uVar6];
          if ((byte)(bVar5 + 0xbf) < 0x1a) {
            bVar5 = bVar5 | 0x20;
          }
          if (bVar7 != bVar5) break;
          uVar6 = uVar6 + 1;
          if (uVar4 == uVar6) goto LAB_10013aca;
        }
        if (uVar4 == uVar6) {
LAB_10013aca:
          uVar4 = strlen((char *)local_54);
          local_14 = pbVar8 + uVar4;
          break;
        }
        pbVar2 = pbVar8 + uVar4 + 1;
        pbVar8 = pbVar8 + 1;
      } while (pbVar2 <= in_EDX);
    }
  }
  return local_14;
}

#undef local_54
#undef local_14

#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#define local_388 (*(int *)(frame + 24))
#define local_384 (*(int *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(uint *)(frame + 36))
#define local_378 (*(int *)(frame + 40))
#define local_374 (*(char (*)[192])(frame + 44))
#define local_2b4 (*(char (*)[640])(frame + 236))
#define local_34 (*(undefined4 *)(frame + 876))
#define local_30 (*(int *)(frame + 880))
#define local_2c (*(int *)(frame + 884))
#define local_1c (*(undefined1 *)(frame + 900))
#define local_18 (*(int *)(frame + 904))
#define local_14 (*(int *)(frame + 908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ae0
 */

void recovered_10013ae0(int in_ECX,int in_EDX,undefined1 *param_3,char *param_4,int param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;

  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    local_14 = in_ECX;
    memset(&local_388,0,0x370);
    local_30 = param_5;
    local_2c = param_6;
    local_34 = 0xffffffff;
    local_388 = in_EDX;
    local_18 = in_EDX;
    local_37c = recovered_100138b0(param_4,param_5);
    iVar2 = local_14;
    if (param_5 < 2) {
      param_5 = 1;
    }
    local_378 = param_5 * 8 + 3;
    local_384 = *param_7;
    if (param_6 == 2) {
      iVar3 = param_7[1] - local_37c;
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      local_384 = local_384 + iVar3;
    }
    else if (param_6 == 1) {
      iVar3 = (int)(param_7[1] - local_37c) / 2;
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      local_384 = local_384 + iVar3;
    }
    local_380 = param_7[2];
    local_1c = (undefined1)param_7[3];
    snprintf(local_374,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),param_4);
    puVar4 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (param_3 != (undefined1 *)0x0) {
      puVar4 = param_3;
    }
    snprintf(local_2b4,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),puVar4);
    uVar1 = *(uint *)(iVar2 + 0x52c2c);
    if (uVar1 < 0x180) {
      *(uint *)(iVar2 + 0x52c2c) = uVar1 + 1;
      memcpy((void *)(iVar2 + 0x42c + uVar1 * 0x370),&local_388,0x370);
    }
    param_7[2] = param_7[2] + 4 + (uint)(local_18 == 1) * 4 + local_378;
    *param_4 = '\0';
  }
  return;
}

#undef DAT_0181bc65
#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_374
#undef local_2b4
#undef local_34
#undef local_30
#undef local_2c
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013c60
 */

undefined4 recovered_10013c60(byte *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar3;
  uint uVar1;
  int iVar2;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;

  if (in_ECX == (byte *)0x0) {
    return 0;
  }
  bVar4 = *in_ECX;
  if (bVar4 == 0) goto LAB_10013d73;
  if ((byte)(bVar4 + 0xbf) < 0x1a) {
    bVar4 = bVar4 | 0x20;
  }
  if (bVar4 != 0x61) {
    if (bVar4 != 100) goto LAB_10013d73;
    bVar4 = in_ECX[1];
    uVar7 = 100;
    if (bVar4 != 0) {
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((bVar4 == 0x61) && (bVar4 = in_ECX[2], bVar4 != 0)) {
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if ((bVar4 == 0x74) && (bVar4 = in_ECX[3], bVar4 != 0)) {
          bVar3 = bVar4 + 0xbf;
          uVar1 = (uint)CONCAT11(bVar3,bVar4);
          if (bVar3 < 0x1a) {
            uVar1 = CONCAT11(bVar3,bVar4) | 0x20;
          }
          if ((char)uVar1 == 'a') {
            bVar4 = in_ECX[4];
            uVar7 = (uint)CONCAT11(bVar4,100);
            if (bVar4 != 0) {
              if ((byte)(bVar4 + 0xbf) < 0x1a) {
                uVar7 = (uint)(ushort)(CONCAT11(bVar4,100) | 0x2000);
              }
              if ((char)(uVar7 >> 8) == ':') {
                return CONCAT31((int3)(uVar1 >> 8),1);
              }
            }
          }
        }
      }
    }
    if ((char)uVar7 != 'a') goto LAB_10013d73;
  }
  bVar4 = in_ECX[1];
  if (bVar4 != 0) {
    if ((byte)(bVar4 + 0xbf) < 0x1a) {
      bVar4 = bVar4 | 0x20;
    }
    if ((bVar4 == 0x62) && (bVar4 = in_ECX[2], bVar4 != 0)) {
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((bVar4 == 0x6f) && (bVar4 = in_ECX[3], bVar4 != 0)) {
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if ((bVar4 == 0x75) && (bVar4 = in_ECX[4], bVar4 != 0)) {
          if ((byte)(bVar4 + 0xbf) < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          if ((bVar4 == 0x74) && (bVar4 = in_ECX[5], bVar4 != 0)) {
            if ((byte)(bVar4 + 0xbf) < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            if (bVar4 == 0x3a) {
              return 1;
            }
          }
        }
      }
    }
  }
LAB_10013d73:
  uVar5 = 0x6a;
  iVar2 = -0xb;
  while( true ) {
    bVar4 = in_ECX[iVar2 + 0xb];
    uVar6 = CONCAT11(bVar4,uVar5);
    if (bVar4 == 0) {
      return 0;
    }
    if ((byte)(bVar4 + 0xbf) < 0x1a) {
      uVar6 = CONCAT11(bVar4,uVar5) | 0x2000;
    }
    if ((byte)((char)uVar6 + 0xbfU) < 0x1a) {
      uVar6 = uVar6 | 0x20;
    }
    if ((char)(uVar6 >> 8) != (char)uVar6) break;
    uVar5 = *(undefined1 *)(iVar2 + ((uintptr_t)pf_module_state+0x1ef4U));
    iVar2 = iVar2 + 1;
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013dc0
 */

undefined4 recovered_10013dc0(byte *in_ECX,undefined1 *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;

  *in_EDX = 0;
  if (in_ECX == (byte *)0x0) {
    return 0;
  }
  uVar2 = (uint)*in_ECX;
  if (*in_ECX == 0) {
    *in_EDX = 0;
    return 0;
  }
  if (uVar2 - 9 < 0x24) {
                    /* WARNING: Could not emulate address calculation at 0x10013dfb */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)((uVar2 - 9) * 4 + ((uintptr_t)pf_module_state+0x1261U)))();
    return uVar3;
  }
  iVar4 = 0;
  while (0x2c < (byte)uVar2) {
    iVar1 = iVar4 + 1;
    iVar4 = iVar4 + 1;
    uVar2 = (uint)in_ECX[iVar1];
  }
                    /* WARNING: Could not emulate address calculation at 0x10013e1d */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(uVar2 * 4 + ((uintptr_t)pf_module_state+0x12f1U)))();
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013e90
 */

bool recovered_10013e90(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar3;

  uVar2 = 0;
  if (in_ECX == 0) {
LAB_10013f15:
    return SUB41(uVar2,0);
  }
  for (; ((cVar1 = *(char *)(in_ECX + uVar2), cVar1 != '\0' && (cVar1 != '#')) && (cVar1 != '?'));
      uVar2 = uVar2 + 1) {
  }
  if (3 < uVar2) {
    bVar3 = *(byte *)(in_ECX + -4 + uVar2);
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 == 0x2e) {
      bVar3 = *(byte *)(in_ECX + -3 + uVar2);
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if (bVar3 == 0x70) {
        bVar3 = *(byte *)(in_ECX + -2 + uVar2);
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar3 == 0x6e) {
          bVar3 = *(byte *)(in_ECX + -1 + uVar2);
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          uVar2 = (uint)(bVar3 == 0x67);
          goto LAB_10013f15;
        }
      }
    }
  }
  return false;
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
#undef UINT_00006894
#define UINT_00006894 (*(uint *)(0x6894U))
#define local_18 (*(char * *)(frame + 488))
#define local_14 (*(int *)(frame + 492))
#define format (*(char * *)(frame + 28))
#define local_1c0 (*(undefined1 (*)[129])(frame + 64))
#define local_13f (*(byte (*)[195])(frame + 193))
#define local_7c (*(char (*)[96])(frame + 388))
#define local_1c (*(void * *)(frame + 484))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013f20
 */

void recovered_10013f20(int in_ECX,int in_EDX,byte *param_3,char *param_4)

{
  unsigned char frame[544] __attribute__((aligned(16))) = {0};

  byte *in_EDX_00;
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;

  if (param_3 == (byte *)0x0) {
    return;
  }
  bVar2 = *param_3;
  if (bVar2 == 0) {
    return;
  }
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x68) {
    return;
  }
  bVar2 = param_3[1];
  uVar4 = (uint)CONCAT11(bVar2,0x68);
  if (bVar2 == 0) {
LAB_10014030:
    if ((char)uVar4 != 'h') {
      return;
    }
    bVar2 = param_3[1];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x74) {
      return;
    }
    bVar2 = param_3[2];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x74) {
      return;
    }
    bVar2 = param_3[3];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x70) {
      return;
    }
    bVar2 = param_3[4];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x73) {
      return;
    }
    bVar2 = param_3[5];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x3a) {
      return;
    }
    bVar2 = param_3[6];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x2f) {
      return;
    }
    bVar2 = param_3[7];
    if (bVar2 == 0) {
      return;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x2f) {
      return;
    }
  }
  else {
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar4 = (uint)(ushort)(CONCAT11(bVar2,0x68) | 0x2000);
    }
    if ((char)(uVar4 >> 8) != 't') goto LAB_10014030;
    bVar2 = param_3[2];
    uVar3 = (undefined1)uVar4;
    uVar4 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10014030;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar4 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar4 >> 8) != 't') goto LAB_10014030;
    bVar2 = param_3[3];
    uVar3 = (undefined1)uVar4;
    uVar4 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10014030;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar4 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar4 >> 8) != 'p') goto LAB_10014030;
    bVar2 = param_3[4];
    uVar3 = (undefined1)uVar4;
    uVar4 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10014030;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar4 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar4 >> 8) != ':') goto LAB_10014030;
    bVar2 = param_3[5];
    uVar3 = (undefined1)uVar4;
    uVar4 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10014030;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar4 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar4 >> 8) != '/') goto LAB_10014030;
    bVar2 = param_3[6];
    uVar3 = (undefined1)uVar4;
    uVar4 = (uint)CONCAT11(bVar2,uVar3);
    if (bVar2 == 0) goto LAB_10014030;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar4 = (uint)(ushort)(CONCAT11(bVar2,uVar3) | 0x2000);
    }
    if ((char)(uVar4 >> 8) != '/') goto LAB_10014030;
  }
  local_18 = (char *)in_EDX;
  local_14 = in_ECX;
  recovered_10002c50(in_ECX);
  if (*(char *)(local_14 + 0x205da4) == '\x01') {
    uVar9 = ((uintptr_t)pf_module_state+0x1f44U);
  }
  else {
    local_1c = (void *)(local_14 + 0x205cb4);
    memset(local_1c,0,0x4a4);
    *(int *)(local_14 + 0x205cb4) = local_14;
    memcpy((void *)(local_14 + 0x205cb8),(void *)(local_14 + 0x205bc8),0xec);
    *(undefined1 *)(local_14 + 0x205da4) = 1;
    if (*(int *)(local_14 + 0x205bac) != 0) {
      iVar8 = local_14 + -0x4fce8;
      iVar5 = 0;
      do {
        iVar8 = iVar8 + 0x555cc;
        if ((char *)iVar8 == local_18) goto LAB_10014198;
        iVar5 = iVar5 + 1;
      } while (*(int *)(local_14 + 0x205bac) != iVar5);
    }
    iVar5 = *(int *)(local_14 + 0x205bb0);
LAB_10014198:
    *(int *)(local_14 + 0x205dac) = iVar5;
    snprintf((char *)(local_14 + 0x205db8),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),param_3);
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      snprintf((char *)(local_14 + 0x206078),0x60,(char *)((uintptr_t)pf_module_state+0x154dU),param_4);
    }
    memset(local_1c0,0,0x144);
    local_7c[0] = '\0';
    uVar9 = recovered_100097b0(param_3,local_1c0,local_7c,0x60);
    if ((char)uVar9 != '\0') {
      param_3 = local_13f;
    }
    in_EDX_00 = (byte *)(local_14 + 0x205eb8);
    recovered_10014ad0((char *)param_3,in_EDX_00,0x80);
    iVar8 = Ram00006800;
    if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
        (uVar4 = Ram00006808, 0xb < uVar4)) &&
       ((uVar4 = Ram00006808, 0x97 < uVar4 &&
        (pcVar1 = (code *)UINT_00006894, pcVar1 != (code *)0x0)))) {
      pvVar7 = local_1c;
      uVar4 = (*pcVar1)((void *)0x1814ca0,local_1c,(char *)((uintptr_t)pf_module_state+0x21f9U));
      *(uint *)(local_14 + 0x205da8) = uVar4;
      if (uVar4 != 0) {
        pbVar6 = (byte *)((uintptr_t)pf_module_state+0x1d47U);
        if (*(char *)(local_14 + 0x205eb8) != '\0') {
          pbVar6 = in_EDX_00;
        }
        local_18 = (char *)((int)local_18 + 0x141);
        if (*(int *)(local_14 + 0x205db4) == 0) {
          format = (char *)((uintptr_t)pf_module_state+0x2349U);
        }
        else {
          pvVar7 = (void *)(*(int *)(local_14 + 0x205db4) + 0x3ffU >> 10);
          format = (char *)((uintptr_t)pf_module_state+0x2331U);
        }
        snprintf(local_18,0xc0,format,pbVar6,*(int *)(local_14 + 0x205db0) + 0x3ffU >> 10,
                           pvVar7);
        goto LAB_1001430c;
      }
    }
    else {
      *(undefined4 *)(local_14 + 0x205da8) = 0;
    }
    *(undefined1 *)(local_14 + 0x205da4) = 0;
    uVar9 = ((uintptr_t)pf_module_state+0x220aU);
  }
  snprintf((char *)((int)local_18 + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),uVar9);
LAB_1001430c:
  *(undefined1 *)(local_14 + 0x57da) = 1;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006894
#undef local_18
#undef local_14
#undef format
#undef local_1c0
#undef local_13f
#undef local_7c
#undef local_1c

#define local_114 (*(char (*)[256])(frame + 28))
#define local_14 (*(int *)(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014340
 */

void recovered_10014340(int in_ECX,int in_EDX,char *param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;

  if (param_3 != (char *)0x0) {
    pcVar5 = param_3;
    pcVar2 = param_3;
    do {
      while( true ) {
        pcVar3 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar3;
        if ((cVar1 != '/') && (cVar1 != '\\')) break;
        pcVar5 = pcVar3;
      }
    } while (cVar1 != '\0');
    local_14 = in_ECX;
    uVar4 = recovered_10003100(in_EDX);
    if ((char)uVar4 != '\0') {
      snprintf(local_114,0x100,(char *)((uintptr_t)pf_module_state+0x1750U),param_3);
      snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x23f6U),pcVar5,pcVar5,
                         local_114,pcVar5);
      snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x2451U));
      recovered_10003320(local_14,in_EDX);
      recovered_100047d0(in_EDX);
    }
  }
  return;
}

#undef local_114
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014410
 */

void recovered_10014410(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if (*(char *)(in_ECX + 0x555c8) != '\0') {
    return;
  }
  bVar1 = *(byte *)(in_ECX + 1);
  if (bVar1 == 0) {
    return;
  }
  if ((byte)(bVar1 + 0xbf) < 0x1a) {
    bVar1 = bVar1 | 0x20;
  }
  if ((bVar1 == 0x61) && (bVar1 = *(byte *)(in_ECX + 2), bVar1 != 0)) {
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      bVar1 = bVar1 | 0x20;
    }
    if ((bVar1 == 0x62) && (bVar1 = *(byte *)(in_ECX + 3), bVar1 != 0)) {
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        bVar1 = bVar1 | 0x20;
      }
      if ((bVar1 == 0x6f) && (bVar1 = *(byte *)(in_ECX + 4), bVar1 != 0)) {
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if ((bVar1 == 0x75) && (bVar1 = *(byte *)(in_ECX + 5), bVar1 != 0)) {
          if ((byte)(bVar1 + 0xbf) < 0x1a) {
            bVar1 = bVar1 | 0x20;
          }
          if ((bVar1 == 0x74) && (bVar1 = *(byte *)(in_ECX + 6), bVar1 != 0)) {
            if ((byte)(bVar1 + 0xbf) < 0x1a) {
              bVar1 = bVar1 | 0x20;
            }
            if (bVar1 == 0x3a) {
              return;
            }
          }
        }
      }
    }
  }
  uVar3 = *(uint *)(in_ECX + 0x554c0);
  uVar5 = 0;
  if (uVar3 != 0) {
    if (*(uint *)(in_ECX + 0x554c4) < uVar3) {
      iVar2 = strcmp((char *)(in_ECX + 0x544c0 + *(uint *)(in_ECX + 0x554c4) * 0x100),
                                 (char *)(in_ECX + 1));
      if (iVar2 == 0) {
        return;
      }
      uVar3 = *(uint *)(in_ECX + 0x554c0);
      if (uVar3 == 0) goto LAB_100146cf;
    }
    uVar4 = *(int *)(in_ECX + 0x554c4) + 1;
    uVar5 = uVar3;
    if (uVar4 < uVar3) {
      *(uint *)(in_ECX + 0x554c0) = uVar4;
      uVar5 = uVar4;
    }
    if (0xf < uVar5) {
      snprintf((char *)(in_ECX + 0x544c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x545c0));
      snprintf((char *)(in_ECX + 0x545c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x546c0));
      snprintf((char *)(in_ECX + 0x546c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x547c0));
      snprintf((char *)(in_ECX + 0x547c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x548c0));
      snprintf((char *)(in_ECX + 0x548c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x549c0));
      snprintf((char *)(in_ECX + 0x549c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x54ac0));
      snprintf((char *)(in_ECX + 0x54ac0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x54bc0));
      snprintf((char *)(in_ECX + 0x54bc0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x54cc0));
      snprintf((char *)(in_ECX + 0x54cc0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x54dc0));
      snprintf((char *)(in_ECX + 0x54dc0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x54ec0));
      snprintf((char *)(in_ECX + 0x54ec0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x54fc0));
      snprintf((char *)(in_ECX + 0x54fc0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x550c0));
      snprintf((char *)(in_ECX + 0x550c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x551c0));
      snprintf((char *)(in_ECX + 0x551c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                         (char *)(in_ECX + 0x552c0));
      snprintf((char *)(in_ECX + 0x552c0),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_ECX + 0x553c0);
      *(undefined4 *)(in_ECX + 0x554c0) = 0xf;
      uVar5 = 0xf;
    }
  }
LAB_100146cf:
  *(uint *)(in_ECX + 0x554c4) = uVar5;
  snprintf((char *)(in_ECX + 0x544c0 + uVar5 * 0x100),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),
                     (char *)(in_ECX + 1));
  *(int *)(in_ECX + 0x554c0) = *(int *)(in_ECX + 0x554c0) + 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014710
 */

void recovered_10014710(int in_ECX,int in_EDX,int param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = recovered_10003100(in_EDX);
  if ((char)uVar1 == '\0') {
    return;
  }
  iVar2 = ((uintptr_t)pf_module_state+0x24b9U);
  if (param_3 != 0) {
    iVar2 = param_3;
  }
  iVar3 = ((uintptr_t)pf_module_state+0x24bfU);
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x246cU),iVar2,iVar2,iVar3);
  recovered_10003320(in_ECX,in_EDX);
  recovered_100047d0(in_EDX);
  return;
}


#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014790
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10014790(void *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;

  if ((*(char *)(in_EDX + 0x31d) == '\x01') && (*(char *)(in_EDX + 0x32c) != '\0')) {
    recovered_10016330(in_ECX,in_EDX,(char *)(in_EDX + 0x32c),0,0x48,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),
                       (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x5e,1,1,(byte *)((uintptr_t)pf_module_state+0x24ddU));
  }
  uVar1 = *(uint *)(in_EDX + 0x52c2c);
  if (uVar1 != 0) {
    piVar3 = (int *)(in_EDX + 0x42c);
    uVar4 = 0;
    do {
      if (*piVar3 == 3) {
        pbVar2 = (byte *)((uintptr_t)pf_module_state+0x1d09U);
        if ((char)piVar3[5] != '\0') {
          pbVar2 = (byte *)(piVar3 + 5);
        }
        recovered_10016330(in_ECX,in_EDX,(char *)(piVar3 + 0x35),piVar3[1],piVar3[2],piVar3[3],
                           piVar3[4],0,(char)piVar3[0xdb],pbVar2);
        uVar1 = *(uint *)(in_EDX + 0x52c2c);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 0xdc;
    } while (uVar4 < uVar1);
  }
  return;
}

#undef DAT_0181d0fc
#undef DAT_0181d100

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014870
 */

bool recovered_10014870(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  byte bVar3;

  uVar2 = 0;
  if (in_ECX == 0) {
LAB_100148f5:
    return SUB41(uVar2,0);
  }
  for (; ((cVar1 = *(char *)(in_ECX + uVar2), cVar1 != '\0' && (cVar1 != '#')) && (cVar1 != '?'));
      uVar2 = uVar2 + 1) {
  }
  if (3 < uVar2) {
    bVar3 = *(byte *)(in_ECX + -4 + uVar2);
    if ((byte)(bVar3 + 0xbf) < 0x1a) {
      bVar3 = bVar3 | 0x20;
    }
    if (bVar3 == 0x2e) {
      bVar3 = *(byte *)(in_ECX + -3 + uVar2);
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if (bVar3 == 0x70) {
        bVar3 = *(byte *)(in_ECX + -2 + uVar2);
        if ((byte)(bVar3 + 0xbf) < 0x1a) {
          bVar3 = bVar3 | 0x20;
        }
        if (bVar3 == 0x6e) {
          bVar3 = *(byte *)(in_ECX + -1 + uVar2);
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 | 0x20;
          }
          uVar2 = (uint)(bVar3 == 0x67);
          goto LAB_100148f5;
        }
      }
    }
  }
  return false;
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
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#define deviceId (*(void ** *)(frame + 20))
#define path (*(void ** *)(frame + 24))
#define outInfo (*(void ** *)(frame + 28))
#define local_1c (*(void * *)(frame + 36))
#define local_18 (*(uint *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014900
 */

undefined4 recovered_10014900(int in_ECX,void **in_EDX,void **param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  code *pcVar4;
  uint uVar3;

  if (((param_3 != (void **)0x0) && (*(char *)param_3 != '\0')) &&
     (uVar2 = recovered_10003100(in_ECX), (char)uVar2 != '\0')) {
    outInfo = (void **)0xc;
    memset(&local_1c,0,0xc);
    iVar1 = Ram00006800;
    if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
       ((uVar3 = Ram00006808, 0xb < uVar3 && (uVar3 = Ram00006808, 0xcb < uVar3)))) {
      pcVar4 = (code *)UINT_000068c8;
      if (pcVar4 == (code *)0x0) {
        return 0;
      }
      outInfo = &local_1c;
      deviceId = in_EDX;
      path = param_3;
    }
    else {
      iVar1 = Ram00006800;
      if (iVar1 != 0x50414d57) {
        return 0;
      }
      iVar1 = Ram00006804;
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = Ram00006808;
      if (uVar3 < 0xc) {
        return 0;
      }
      uVar3 = Ram00006808;
      if (uVar3 < 0x38) {
        return 0;
      }
      pcVar4 = (code *)UINT_00006834;
      if (pcVar4 == (code *)0x0) {
        return 0;
      }
      path = &local_1c;
      deviceId = param_3;
    }
    uVar3 = (*pcVar4)((int)deviceId,(char *)path,outInfo);
    if (local_1c != (void *)0x0 && uVar3 != 0) {
      uVar3 = local_18;
      if (0x4fffe < local_18) {
        uVar3 = 0x4ffff;
      }
      memcpy(*(void **)(in_ECX + 0x30c),local_1c,uVar3);
      *(undefined1 *)(*(int *)(in_ECX + 0x30c) + uVar3) = 0;
      uVar2 = CONCAT31((int3)((uint)in_EDX >> 8),1);
      if (uVar3 == local_18) {
        return uVar2;
      }
      snprintf((char *)(in_ECX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x2609U));
      return uVar2;
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
#undef UINT_00006834
#undef UINT_000068c8
#undef deviceId
#undef path
#undef outInfo
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014a40
 */

bool recovered_10014a40(char *in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;

  uVar1 = strlen(in_ECX);
  if ((in_EDX == (byte *)0x0) ||
     (uVar2 = strlen((char *)in_EDX), in_ECX == (char *)0x0 || uVar1 < uVar2)) {
    return false;
  }
  bVar4 = in_ECX[uVar1 - uVar2];
  if (bVar4 != 0) {
    pbVar3 = (byte *)(in_ECX + (uVar1 - uVar2) + 1);
    do {
      bVar5 = *in_EDX;
      if (bVar5 == 0) {
        return false;
      }
      if ((byte)(bVar4 + 0xbf) < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      if (bVar4 != bVar5) {
        return false;
      }
      in_EDX = in_EDX + 1;
      bVar4 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar4 != 0);
  }
  return *in_EDX == 0;
}


#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014ad0
 */

void recovered_10014ad0(char *in_ECX,byte *in_EDX,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;

  pcVar6 = in_ECX;
  if (in_ECX == (char *)0x0) {
    if (in_EDX == (byte *)0x0) {
      return;
    }
    *in_EDX = 0;
    pcVar8 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
  }
  else {
    do {
      do {
        pcVar8 = in_ECX;
        pcVar5 = pcVar6 + 1;
        cVar1 = *pcVar6;
        in_ECX = pcVar5;
        pcVar6 = pcVar5;
      } while (cVar1 == '/');
    } while ((cVar1 == '\\') || (in_ECX = pcVar8, cVar1 != '\0'));
    if (in_EDX == (byte *)0x0) {
      return;
    }
    *in_EDX = 0;
    if (pcVar8 == (char *)0x0) {
      pcVar6 = (char *)((uintptr_t)pf_module_state+0x222eU);
      goto LAB_10014b37;
    }
  }
  pcVar6 = (char *)((uintptr_t)pf_module_state+0x222eU);
  if (*pcVar8 != '\0') {
    pcVar6 = pcVar8;
  }
LAB_10014b37:
  snprintf((char *)in_EDX,param_3,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar6);
  pbVar10 = in_EDX;
  do {
    uVar9 = (uint)*pbVar10;
    if (uVar9 - 0x23 < 0x1d) {
                    /* WARNING: Could not emulate address calculation at 0x10014b5f */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar9 - 0x23) * 4 + ((uintptr_t)pf_module_state+0x13a5U)))();
      return;
    }
    if (uVar9 == 0x5c) {
      *pbVar10 = 0x5f;
    }
    else if (uVar9 == 0) {
      pbVar10 = in_EDX;
      pbVar11 = in_EDX;
      break;
    }
    pbVar10 = pbVar10 + 1;
  } while( true );
LAB_10014b9c:
  bVar2 = *pbVar10;
  if (bVar2 == 0x25) {
    bVar3 = pbVar10[1];
    iVar7 = (int)(char)bVar3;
    if (iVar7 == 0) goto LAB_10014b98;
    bVar4 = pbVar10[2];
    iVar12 = (int)(char)bVar4;
    if (iVar12 == 0) goto LAB_10014b98;
    if ((byte)(bVar3 - 0x30U) < 10) {
      iVar7 = iVar7 + -0x30;
    }
    else if ((byte)(bVar3 + 0x9f) < 6) {
      iVar7 = iVar7 + -0x57;
    }
    else if ((byte)(bVar3 + 0xbf) < 6) {
      iVar7 = iVar7 + -0x37;
    }
    else {
      iVar7 = -1;
    }
    if ((byte)(bVar4 - 0x30U) < 10) {
      iVar12 = iVar12 + -0x30;
    }
    else if ((byte)(bVar4 + 0x9f) < 6) {
      iVar12 = iVar12 + -0x57;
    }
    else if ((byte)(bVar4 + 0xbf) < 6) {
      iVar12 = iVar12 + -0x37;
    }
    else {
      iVar12 = -1;
    }
    if ((iVar7 < 0) || (iVar12 < 0)) goto LAB_10014b98;
    *pbVar11 = (byte)iVar12 | (byte)(iVar7 << 4);
    pbVar10 = pbVar10 + 3;
    pbVar11 = pbVar11 + 1;
    goto LAB_10014b9c;
  }
  if (bVar2 != 0) {
LAB_10014b98:
    pbVar10 = pbVar10 + 1;
    *pbVar11 = bVar2;
    pbVar11 = pbVar11 + 1;
    goto LAB_10014b9c;
  }
  *pbVar11 = 0;
  pbVar10 = in_EDX;
  do {
    bVar2 = *pbVar10;
    if (bVar2 < 0x3a) {
      if (bVar2 == 0x2f) goto LAB_10014c55;
      if (bVar2 == 0) {
        if (*in_EDX == 0) {
          snprintf((char *)in_EDX,param_3,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x222eU));
        }
        return;
      }
    }
    else if ((bVar2 == 0x3a) || (bVar2 == 0x5c)) {
LAB_10014c55:
      *pbVar10 = 0x5f;
    }
    pbVar10 = pbVar10 + 1;
  } while( true );
}

#undef DAT_0181bc65

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
#define local_aa4 (*(char (*)[1536])(frame + 28))
#define local_4a4 (*(char (*)[512])(frame + 1564))
#define local_2a4 (*(char *)(frame + 2076))
#define local_2a3 (*(byte (*)[128])(frame + 2077))
#define local_223 (*(char (*)[193])(frame + 2205))
#define local_162 (*(ushort *)(frame + 2398))
#define local_160 (*(uint (*)[40])(frame + 2400))
#define local_c0 (*(char (*)[128])(frame + 2560))
#define local_40 (*(undefined4 (*)[2])(frame + 2688))
#define local_38 (*(int * *)(frame + 2696))
#define local_34 (*(uint *)(frame + 2700))
#define local_2e (*(char (*)[6])(frame + 2706))
#define local_28 (*(int * *)(frame + 2712))
#define local_24 (*(void * *)(frame + 2716))
#define local_20 (*(uint *)(frame + 2720))
#define local_1c (*(uint *)(frame + 2724))
#define local_18 (*(byte * *)(frame + 2728))
#define local_14 (*(uint *)(frame + 2732))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014ca0
 */

undefined1 recovered_10014ca0(int *param_1)

{
  unsigned char frame[2784] __attribute__((aligned(16))) = {0};

  int *in_ECX;
  code *pcVar1;
  byte *in_ECX_00;
  char cVar2;
  undefined4 uVar3;
  undefined *puVar4;
  void *pvVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;

  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  local_c0[0] = '\0';
  local_1c = 0;
  local_20 = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  uVar3 = recovered_100097b0((byte *)(param_1 + 0x41),&local_2a4,local_c0,0x80);
  if ((char)uVar3 == '\0') {
    cVar2 = '\0';
    goto LAB_10014ede;
  }
  in_ECX = param_1 + 1;
  uVar3 = recovered_10009ae0((char *)in_ECX,local_c0,0x80);
  if ((char)uVar3 != '\0') {
    uVar3 = recovered_10009e80((char *)local_2a3,&local_1c);
    if (((char)uVar3 != '\0') ||
       (uVar3 = recovered_1000a010((int)in_ECX,local_2a3,&local_1c,local_c0,0x80),
       (char)uVar3 != '\0')) {
      uVar3 = recovered_1000a460((int)in_ECX,local_1c,local_2e,local_c0,0x80);
      if ((char)uVar3 != '\0') {
        memset(local_40,0,0x10);
        local_40[0] = 0x1815180;
        local_38 = param_1;
        iVar7 = Ram00006800;
        if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
            (uVar8 = Ram00006808, 0xb < uVar8)) &&
           (((uVar8 = Ram00006808, 0x4f < uVar8 &&
             (pcVar1 = (code *)UINT_0000684c, pcVar1 != (code *)0x0)) &&
            (local_18 = (*pcVar1)(0x2001001), local_18 != (byte *)0x0)))) {
          puVar4 = winter_js_version();
          snprintf(local_4a4,0x200,(char *)((uintptr_t)pf_module_state+0x18e5U),1000000,((uintptr_t)pf_module_state+0x196fU),((uintptr_t)pf_module_state+0x1967U),((uintptr_t)pf_module_state+0x196bU)
                             ,((uintptr_t)pf_module_state+0x196bU),puVar4);
          if (local_2a4 == '\x01') {
            cVar2 = '\0';
            uVar3 = recovered_1000a7f0(0,(int)in_ECX,local_1c,local_162,local_2e,(int)local_2a3,
                                       local_223,(int)local_4a4,local_18,0x2001001,&local_20,
                                       local_c0,0x80,(undefined *)0x18151a0,local_40);
            if ((char)uVar3 != '\0') goto LAB_10014fa3;
          }
          else {
            snprintf(local_aa4,0x600,(char *)((uintptr_t)pf_module_state+0x226aU),local_223,local_2a3,local_4a4);
            uVar3 = recovered_1000ac00((int)in_ECX,local_1c,local_162,local_2e,local_aa4,local_18,
                                       0x2001001,&local_20,local_c0,0x80,(undefined *)0x18151a0,
                                       local_40);
            if ((char)uVar3 != '\0') {
LAB_10014fa3:
              in_ECX_00 = local_18;
              pvVar5 = (void *)recovered_1000ae70((int)local_18);
              if (pvVar5 == (void *)0x0) {
                pcVar6 = (char *)((uintptr_t)pf_module_state+0x16f7U);
              }
              else {
                uVar8 = (int)pvVar5 - (int)in_ECX_00;
                local_14 = 0;
                if (uVar8 <= local_20) {
                  local_14 = local_20 - uVar8;
                }
                pcVar6 = (char *)((uintptr_t)pf_module_state+0x22d3U);
                local_24 = pvVar5;
                if (0xfdffefff < local_20 + 0xfdfff001 && local_14 < 0x2000001) {
                  uVar3 = recovered_1000aec0(in_ECX_00);
                  cVar2 = '\x01';
                  if ((char)uVar3 != '\0') {
                    local_160[0] = 0;
                    uVar3 = recovered_1000b0e0((int)local_24,local_14,(int)local_24,local_14,
                                               (int *)local_160,local_c0,0x80);
                    cVar2 = (char)uVar3;
                    if (cVar2 != '\0') {
                      local_14 = local_160[0];
                    }
                  }
                  local_28 = param_1 + 0xf1;
                  if ((cVar2 != '\0') && (local_14 != local_34)) {
                    iVar7 = recovered_10015250((char *)local_18);
                    param_1[0x3f] = local_14;
                    param_1[0x40] = iVar7;
                  }
                  recovered_10014ad0(local_223,(byte *)local_160,0xa0);
                  recovered_1000d080((char *)((uintptr_t)pf_module_state+0x1fd3U));
                  snprintf((char *)(param_1 + 0xa1),0x140,(char *)((uintptr_t)pf_module_state+0x22e6U),local_160);
                  recovered_1000b320((char *)local_18,(undefined1 *)local_28);
                  if ((cVar2 == '\0') ||
                     (uVar8 = recovered_1000d0d0((char *)(param_1 + 0xa1),local_24,local_14),
                     uVar8 != 0)) goto LAB_1001501b;
                  pcVar6 = (char *)((uintptr_t)pf_module_state+0x22f2U);
                }
              }
              snprintf(local_c0,0x80,pcVar6);
            }
            cVar2 = '\0';
          }
LAB_1001501b:
          iVar7 = Ram00006800;
          if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
              (uVar8 = Ram00006808, 0xb < uVar8)) &&
             ((uVar8 = Ram00006808, 0x53 < uVar8 &&
              (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))) {
            (*pcVar1)(local_18);
          }
          goto LAB_10014ede;
        }
        snprintf(local_c0,0x80,(char *)((uintptr_t)pf_module_state+0x224bU));
      }
    }
  }
  cVar2 = '\0';
LAB_10014ede:
  *(char *)((int)param_1 + 0xf2) = cVar2;
  if (*(char *)((int)param_1 + 0xf2) == '\0') {
    pcVar6 = (char *)((uintptr_t)pf_module_state+0x223bU);
    if (local_c0[0] != '\0') {
      pcVar6 = local_c0;
    }
    snprintf((char *)(param_1 + 0x109),0x80,(char *)((uintptr_t)pf_module_state+0x154dU),pcVar6);
  }
  *(undefined1 *)((int)param_1 + 0xf1) = 1;
  return *(undefined1 *)((int)param_1 + 0xf2);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006850
#undef local_aa4
#undef local_4a4
#undef local_2a4
#undef local_2a3
#undef local_223
#undef local_162
#undef local_160
#undef local_c0
#undef local_40
#undef local_38
#undef local_34
#undef local_2e
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015180
 */

void recovered_10015180(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xfc) = param_2;
    *(undefined4 *)(param_1 + 0x100) = param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100151a0
 */

void recovered_100151a0(undefined4 *param_1,int param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;

  if (param_2 == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strstr((char *)param_2,(char *)((uintptr_t)pf_module_state+0x1ac4U));
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr((char *)param_2,(char *)((uintptr_t)pf_module_state+0x1ac9U));
      if (pcVar1 == (char *)0x0) {
        pcVar1 = (char *)0x0;
      }
      else {
        pcVar1 = pcVar1 + 2;
      }
    }
    else {
      pcVar1 = pcVar1 + 4;
    }
  }
  if ((param_1 != (undefined4 *)0x0) && (pcVar1 != (char *)0x0)) {
    iVar3 = 0;
    if ((uint)((int)pcVar1 - param_2) <= param_3) {
      iVar3 = param_3 - ((int)pcVar1 - param_2);
    }
    if (iVar3 != param_1[3]) {
      param_1[3] = iVar3;
      iVar2 = recovered_10015250((char *)param_2);
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(param_1[2],iVar3,iVar2);
      }
      if ((code *)param_1[1] != (code *)0x0) {
        (*(code *)param_1[1])(param_1[2],pcVar1,iVar3,iVar2);
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015250
 */

int recovered_10015250(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;

  iVar9 = 0;
  if (in_ECX != (char *)0x0) {
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x2310U));
    if ((uVar2 != 0) && (*in_ECX != '\0')) {
      pcVar4 = in_ECX;
      do {
        uVar7 = 0;
        while (bVar8 = pcVar4[uVar7], bVar8 != 0) {
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          bVar5 = *(byte *)(uVar7 + ((uintptr_t)pf_module_state+0x2310U));
          if ((byte)(bVar5 + 0xbf) < 0x1a) {
            bVar5 = bVar5 | 0x20;
          }
          if (bVar8 != bVar5) break;
          uVar7 = uVar7 + 1;
          if (uVar2 == uVar7) goto LAB_10015327;
        }
        if (uVar2 == uVar7) {
LAB_10015327:
          in_ECX = pcVar4 + 1;
          goto LAB_1001532a;
        }
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    bVar8 = 99;
    iVar3 = -0xf;
    do {
      bVar5 = in_ECX[iVar3 + 0xf];
      if (bVar5 == 0) {
        return 0;
      }
      if ((byte)(bVar5 + 0xbf) < 0x1a) {
        bVar5 = bVar5 | 0x20;
      }
      if ((byte)(bVar8 + 0xbf) < 0x1a) {
        bVar8 = bVar8 | 0x20;
      }
      if (bVar5 != bVar8) {
        return 0;
      }
      bVar8 = *(byte *)(iVar3 + ((uintptr_t)pf_module_state+0x2331U));
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
LAB_1001532a:
    pcVar4 = strchr(in_ECX,0x3a);
    if (pcVar4 != (char *)0x0) {
      for (pcVar4 = pcVar4 + 2; (cVar6 = pcVar4[-1], cVar6 == ' ' || (cVar6 == '\t'));
          pcVar4 = pcVar4 + 1) {
      }
      if ((byte)(cVar6 - 0x30U) < 10) {
        iVar9 = 0;
        do {
          iVar9 = (uint)(byte)(cVar6 - 0x30) + iVar9 * 10;
          cVar6 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while ((byte)(cVar6 - 0x30U) < 10);
      }
    }
  }
  return iVar9;
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
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#define local_b54 (*(void * (*)[384])(frame + 28))
#define local_554 (*(void ** (*)[128])(frame + 1564))
#define local_354 (*(void * (*)[64])(frame + 2076))
#define local_254 (*(char *)(frame + 2332))
#define local_253 (*(byte (*)[128])(frame + 2333))
#define local_1d3 (*(char (*)[193])(frame + 2461))
#define local_112 (*(ushort *)(frame + 2654))
#define local_110 (*(char *)(frame + 2656))
#define local_10f (*(char (*)[95])(frame + 2657))
#define local_b0 (*(char (*)[96])(frame + 2752))
#define local_50 (*(undefined * *)(frame + 2848))
#define local_4c (*(undefined * *)(frame + 2852))
#define local_48 (*(undefined4 *)(frame + 2856))
#define local_44 (*(uint *)(frame + 2860))
#define local_3e (*(char (*)[6])(frame + 2866))
#define local_38 (*(uint *)(frame + 2872))
#define local_34 (*(uint *)(frame + 2876))
#define local_30 (*(uint *)(frame + 2880))
#define local_2c (*(uint *)(frame + 2884))
#define local_28 (*(uint *)(frame + 2888))
#define local_24 (*(undefined ** *)(frame + 2892))
#define local_20 (*(void * *)(frame + 2896))
#define local_1c (*(char * *)(frame + 2900))
#define local_18 (*(byte * *)(frame + 2904))
#define local_14 (*(uint *)(frame + 2908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100153a0
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
recovered_100153a0(int in_ECX,byte *in_EDX,char *param_3,undefined *param_4,undefined *param_5,
                  undefined4 param_6)

{
  unsigned char frame[2960] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  int iVar11;
  undefined4 extraout_EAX = 0;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;
  void **in_ECX_00;

  if (param_3 == (char *)0x0) {
    return 0;
  }
  *param_3 = '\0';
  if (in_EDX == (byte *)0x0) {
    return 0;
  }
  bVar2 = *in_EDX;
  if (bVar2 == 0) {
    return 0;
  }
  bVar12 = bVar2;
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar12 = bVar2 | 0x20;
  }
  if (bVar12 != 0x68) {
    return 0;
  }
  bVar12 = in_EDX[1];
  uVar6 = (uint)CONCAT11(bVar12,bVar2);
  if (bVar12 == 0) {
LAB_100155a9:
    bVar2 = in_EDX[1];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x74) {
      return 0;
    }
    bVar2 = in_EDX[2];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x74) {
      return 0;
    }
    bVar2 = in_EDX[3];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x70) {
      return 0;
    }
    bVar2 = in_EDX[4];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x73) {
      return 0;
    }
    bVar2 = in_EDX[5];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x3a) {
      return 0;
    }
    bVar2 = in_EDX[6];
    if (bVar2 == 0) {
      return 0;
    }
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x2f) {
      return 0;
    }
    bVar2 = in_EDX[7];
    if (bVar2 == 0) {
      return 0;
    }
    uVar6 = (uint)CONCAT11(bVar2 + 0xbf,(char)uVar6);
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      bVar2 = bVar2 | 0x20;
    }
    if (bVar2 != 0x2f) {
      return 0;
    }
  }
  else {
    if ((byte)(bVar12 + 0xbf) < 0x1a) {
      uVar6 = (uint)(ushort)(CONCAT11(bVar12,bVar2) | 0x2000);
    }
    if ((char)(uVar6 >> 8) != 't') goto LAB_100155a9;
    bVar2 = in_EDX[2];
    uVar5 = CONCAT11(bVar2,(char)uVar6);
    uVar6 = (uint)uVar5;
    if (bVar2 == 0) goto LAB_100155a9;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar6 = uVar5 | 0x2000;
    }
    if ((char)(uVar6 >> 8) != 't') goto LAB_100155a9;
    bVar2 = in_EDX[3];
    uVar5 = CONCAT11(bVar2,(char)uVar6);
    uVar6 = (uint)uVar5;
    if (bVar2 == 0) goto LAB_100155a9;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar6 = uVar5 | 0x2000;
    }
    if ((char)(uVar6 >> 8) != 'p') goto LAB_100155a9;
    bVar2 = in_EDX[4];
    uVar5 = CONCAT11(bVar2,(char)uVar6);
    uVar6 = (uint)uVar5;
    if (bVar2 == 0) goto LAB_100155a9;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar6 = uVar5 | 0x2000;
    }
    if ((char)(uVar6 >> 8) != ':') goto LAB_100155a9;
    bVar2 = in_EDX[5];
    uVar5 = CONCAT11(bVar2,(char)uVar6);
    uVar6 = (uint)uVar5;
    if (bVar2 == 0) goto LAB_100155a9;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar6 = uVar5 | 0x2000;
    }
    if ((char)(uVar6 >> 8) != '/') goto LAB_100155a9;
    bVar2 = in_EDX[6];
    uVar5 = CONCAT11(bVar2,(char)uVar6);
    uVar6 = (uint)uVar5;
    if (bVar2 == 0) goto LAB_100155a9;
    if ((byte)(bVar2 + 0xbf) < 0x1a) {
      uVar6 = uVar5 | 0x2000;
    }
    if ((char)(uVar6 >> 8) != '/') goto LAB_100155a9;
  }
  uVar13 = 0;
  bVar2 = (byte)uVar6;
  while (((bVar2 != 0 && ((uVar6 & 0xff) != 0x23)) && ((uVar6 & 0xff) != 0x3f))) {
    bVar2 = in_EDX[uVar13 + 1];
    uVar13 = uVar13 + 1;
    uVar6 = (uint)bVar2;
  }
  if (uVar13 < 4) {
    return 0;
  }
  bVar2 = in_EDX[uVar13 - 4];
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x2e) {
    return 0;
  }
  bVar2 = in_EDX[uVar13 - 3];
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x70) {
    return 0;
  }
  bVar2 = in_EDX[uVar13 - 2];
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x6e) {
    return 0;
  }
  bVar2 = in_EDX[uVar13 - 1];
  if ((byte)(bVar2 + 0xbf) < 0x1a) {
    bVar2 = bVar2 | 0x20;
  }
  if (bVar2 != 0x67) {
    return 0;
  }
  uVar7 = recovered_10015e10(in_EDX,param_3);
  if ((char)uVar7 != '\0') {
    local_554[0] = (void **)0x0;
    PF_PART1(local_b54[0], 0) = '\0';
    uVar7 = recovered_10009250(param_3,(int *)local_554,(char *)local_b54);
    if (((char)uVar7 != '\0') &&
       (uVar7 = recovered_100161b0(local_554[0],local_b54), (char)uVar7 != '\0')) {
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    if ((((char)local_b54[0] != '\0') && (iVar11 = Ram00006800, iVar11 == 0x50414d57)) &&
       ((iVar11 = Ram00006804, iVar11 != 0 &&
        (((uVar6 = Ram00006808, 0xb < uVar6 && (uVar6 = Ram00006808, 0x3f < uVar6)) &&
         (pcVar1 = (code *)UINT_0000683c, pcVar1 != (code *)0x0)))))) {
      (*pcVar1)((char *)local_b54);
    }
    *param_3 = '\0';
  }
  bVar2 = *in_EDX;
  if (bVar2 == 0) {
    uVar6 = 0x811c9dc5;
  }
  else {
    uVar6 = 0x811c9dc5;
    pbVar14 = in_EDX;
    do {
      pbVar14 = pbVar14 + 1;
      uVar6 = (bVar2 ^ uVar6) * 0x1000193;
      bVar2 = *pbVar14;
    } while (bVar2 != 0);
  }
  snprintf((char *)local_354,0x100,(char *)((uintptr_t)pf_module_state+0x2362U),uVar6,((uintptr_t)pf_module_state+0x235eU));
  iVar11 = Ram00006800;
  if (iVar11 != 0x50414d57) {
    return 0;
  }
  iVar11 = Ram00006804;
  if (iVar11 == 0) {
    return 0;
  }
  uVar6 = Ram00006808;
  if (uVar6 < 0xc) {
    return 0;
  }
  uVar6 = Ram00006808;
  if (uVar6 < 0x50) {
    return 0;
  }
  pcVar1 = (code *)UINT_0000684c;
  if (pcVar1 == (code *)0x0) {
    return 0;
  }
  local_20 = (*pcVar1)(0x200000);
  if (local_20 == (void *)0x0) {
    return 0;
  }
  local_b0[0] = '\0';
  local_28 = 0;
  local_30 = 0;
  local_110 = '\0';
  uVar7 = recovered_100097b0(in_EDX,&local_254,local_b0,0x60);
  if ((char)uVar7 == '\0') goto LAB_10015965;
  local_1c = (char *)(in_ECX + 0x205bc8);
  uVar7 = recovered_10009ae0(local_1c,local_b0,0x60);
  if ((((char)uVar7 == '\0') ||
      ((uVar7 = recovered_10009e80((char *)local_253,&local_28), (char)uVar7 == '\0' &&
       (uVar7 = recovered_1000a010((int)local_1c,local_253,&local_28,local_b0,0x60),
       (char)uVar7 == '\0')))) ||
     (uVar7 = recovered_1000a460((int)local_1c,local_28,local_3e,local_b0,0x60), (char)uVar7 == '\0'
     )) goto LAB_10015965;
  local_24 = &local_50;
  memset(local_24,0,0x10);
  local_50 = param_4;
  local_4c = param_5;
  local_48 = param_6;
  iVar11 = Ram00006800;
  if (((iVar11 != 0x50414d57) || (iVar11 = Ram00006804, iVar11 == 0)) ||
     ((uVar6 = Ram00006808, uVar6 < 0xc ||
      (((uVar6 = Ram00006808, uVar6 < 0x50 ||
        (pcVar1 = (code *)UINT_0000684c, pcVar1 == (code *)0x0)) ||
       (local_18 = (*pcVar1)(0x201001), local_18 == (byte *)0x0)))))) {
    snprintf(local_b0,0x60,(char *)((uintptr_t)pf_module_state+0x1661U));
    goto LAB_10015965;
  }
  puVar8 = winter_js_version();
  snprintf((char *)local_554,0x200,(char *)((uintptr_t)pf_module_state+0x18e5U),1000000,((uintptr_t)pf_module_state+0x196fU),((uintptr_t)pf_module_state+0x1967U),((uintptr_t)pf_module_state+0x196bU)
                     ,((uintptr_t)pf_module_state+0x196bU),puVar8);
  if (local_254 == '\x01') {
    local_14 = 0;
    local_24 = (undefined **)0x18151a0;
    if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
      local_24 = (undefined **)0x0;
    }
    local_38 = local_28;
    local_34 = (uint)local_112;
    if (param_4 != (undefined *)0x0 || param_5 != (undefined *)0x0) {
      ppuVar9 = &local_50;
    }
    else {
      ppuVar9 = (undefined **)0x0;
    }
    uVar7 = recovered_1000a7f0(in_ECX,(int)local_1c,local_28,local_112,local_3e,(int)local_253,
                               local_1d3,(int)local_554,local_18,0x201001,&local_30,local_b0,0x60,
                               (undefined *)local_24,ppuVar9);
    cVar3 = (char)uVar7;
  }
  else {
    snprintf((char *)local_b54,0x600,(char *)((uintptr_t)pf_module_state+0x237bU),local_1d3,local_253,local_554);
    local_14 = 0;
    puVar8 = (undefined *)0x18151a0;
    if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      local_24 = (undefined **)0x0;
    }
    uVar7 = recovered_1000ac00((int)local_1c,local_28,local_112,local_3e,(char *)local_b54,local_18,
                               0x201001,&local_30,local_b0,0x60,puVar8,local_24);
    cVar3 = (char)uVar7;
  }
  bVar2 = 0;
  if (cVar3 != '\0') {
    pcVar10 = strstr((char *)local_18,(char *)((uintptr_t)pf_module_state+0x1ac4U));
    if (pcVar10 == (char *)0x0) {
      pcVar10 = strstr((char *)local_18,(char *)((uintptr_t)pf_module_state+0x1ac9U));
      if (pcVar10 != (char *)0x0) {
        pcVar10 = pcVar10 + 2;
        goto LAB_10015ae3;
      }
      pcVar10 = (char *)((uintptr_t)pf_module_state+0x16f7U);
LAB_10015c02:
      snprintf(local_b0,0x60,pcVar10);
LAB_10015c13:
      local_14 = 0;
      bVar2 = 0;
    }
    else {
      pcVar10 = pcVar10 + 4;
LAB_10015ae3:
      local_14 = local_30 - ((int)pcVar10 - (int)local_18);
      if (local_30 < (uint)((int)pcVar10 - (int)local_18) || local_14 == 0) {
        local_14 = strlen(pcVar10);
      }
      uVar7 = recovered_1000aec0(local_18);
      if ((char)uVar7 == '\0') {
        if (0x200000 < local_14) {
          pcVar10 = (char *)((uintptr_t)pf_module_state+0x1b1bU);
          goto LAB_10015c02;
        }
        if ((param_4 != (undefined *)0x0) && (local_14 != local_44)) {
          iVar11 = recovered_10015250((char *)local_18);
          (*(code *)param_4)(param_6,local_14,iVar11);
        }
        memcpy(local_20,pcVar10,local_14);
      }
      else {
        local_2c = 0;
        uVar7 = recovered_1000b0e0((int)pcVar10,local_14,(int)local_20,0x200000,(int *)&local_2c,
                                   local_b0,0x60);
        if ((char)uVar7 == '\0') goto LAB_10015c13;
        local_14 = local_2c;
        if ((param_4 != (undefined *)0x0) && (local_2c != local_44)) {
          iVar11 = recovered_10015250((char *)local_18);
          (*(code *)param_4)(param_6,local_14,iVar11);
          local_14 = local_2c;
        }
        local_2c = local_14;
        if (param_5 != (undefined *)0x0) {
          iVar11 = recovered_10015250((char *)local_18);
          (*(code *)param_5)(param_6,local_20,local_14,iVar11);
          local_14 = local_2c;
        }
      }
      recovered_1000b320((char *)local_18,&local_110);
      bVar2 = 1;
    }
  }
  iVar11 = Ram00006800;
  if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
      (uVar6 = Ram00006808, 0xb < uVar6)) &&
     ((uVar6 = Ram00006808, 0x53 < uVar6 && (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(local_18);
  }
  if ((bool)(bVar2 & local_14 != 0)) {
    if (local_110 != '\0') {
      local_1c = (char *)strlen((char *)((uintptr_t)pf_module_state+0x1fc9U));
      if (local_1c != (char *)0x0) {
        pcVar10 = &local_110;
        do {
          pcVar15 = (char *)0x0;
          while (bVar2 = pcVar10[(int)pcVar15], bVar2 != 0) {
            if ((byte)(bVar2 + 0xbf) < 0x1a) {
              bVar2 = bVar2 | 0x20;
            }
            bVar12 = pcVar15[((uintptr_t)pf_module_state+0x1fc9U)];
            if ((byte)(bVar12 + 0xbf) < 0x1a) {
              bVar12 = bVar12 | 0x20;
            }
            if (bVar2 != bVar12) break;
            pcVar15 = pcVar15 + 1;
            if (local_1c == pcVar15) goto LAB_10015ce5;
          }
          if (local_1c == pcVar15) goto LAB_10015ce5;
          pcVar15 = pcVar10 + 1;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar15 != '\0');
      }
      bVar4 = recovered_10013e90((int)in_EDX);
      if (!bVar4) goto LAB_10015965;
    }
LAB_10015ce5:
    iVar11 = Ram00006800;
    if (((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
       ((uVar6 = Ram00006808, 0xb < uVar6 &&
        ((uVar6 = Ram00006808, 0x8f < uVar6 &&
         (pcVar1 = (code *)UINT_0000688c, pcVar1 != (code *)0x0)))))) {
      (*pcVar1)((char *)((uintptr_t)pf_module_state+0x1fd3U));
    }
    iVar11 = Ram00006800;
    if (((((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
         (uVar6 = Ram00006808, 0xb < uVar6)) &&
        ((uVar6 = Ram00006808, 0x3b < uVar6 &&
         (pcVar1 = (code *)UINT_00006838, pcVar1 != (code *)0x0)))) &&
       (uVar6 = (*pcVar1)((char *)local_354,local_20,local_14), uVar6 != 0)) {
      iVar11 = Ram00006800;
      in_ECX_00 = (void **)0xffffffff;
      if (((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
         ((uVar6 = Ram00006808, 0xb < uVar6 &&
          ((uVar6 = Ram00006808, 0xbf < uVar6 &&
           (pcVar1 = (code *)UINT_000068bc, pcVar1 != (code *)0x0)))))) {
        in_ECX_00 = (void **)(*pcVar1)();
      }
      uVar7 = recovered_100161b0(in_ECX_00,local_354);
      if ((char)uVar7 != '\0') {
        snprintf(param_3,0x100,(char *)((uintptr_t)pf_module_state+0x1629U),in_ECX_00,local_354);
        recovered_10002c00(local_20);
        return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      }
      recovered_100162e0((char *)local_354);
    }
  }
LAB_10015965:
  iVar11 = Ram00006800;
  if ((((iVar11 == 0x50414d57) && (iVar11 = Ram00006804, iVar11 != 0)) &&
      (uVar6 = Ram00006808, 0xb < uVar6)) &&
     ((uVar6 = Ram00006808, 0x53 < uVar6 && (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0))
     )) {
    (*pcVar1)(local_20);
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef UINT_0000683c
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_0000688c
#undef UINT_000068bc
#undef local_b54
#undef local_554
#undef local_354
#undef local_254
#undef local_253
#undef local_1d3
#undef local_112
#undef local_110
#undef local_10f
#undef local_b0
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_3e
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
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#define local_11c (*(char (*)[256])(frame + 20))
#define local_1c (*(int *)(frame + 276))
#define local_18 (*(int *)(frame + 280))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015e10
 */

undefined4 recovered_10015e10(byte *in_ECX,char *in_EDX)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;

  if (((in_EDX == (char *)0x0) || (*in_EDX = '\0', in_ECX == (byte *)0x0)) ||
     (bVar6 = *in_ECX, bVar6 == 0)) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    uVar2 = CONCAT11(bVar6,bVar6) | 0x2000;
    bVar6 = (byte)(uVar2 >> 8);
  }
  else {
    uVar2 = CONCAT11(bVar6,bVar6);
  }
  if (bVar6 != 0x68) {
    return 0;
  }
  uVar3 = (uint)uVar2;
  bVar6 = in_ECX[1];
  if (bVar6 != 0) {
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    if ((bVar6 == 0x74) && (bVar6 = in_ECX[2], bVar6 != 0)) {
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if ((bVar6 == 0x74) && (bVar6 = in_ECX[3], bVar6 != 0)) {
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if ((bVar6 == 0x70) && (bVar6 = in_ECX[4], bVar6 != 0)) {
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if ((bVar6 == 0x3a) && (bVar6 = in_ECX[5], bVar6 != 0)) {
            if ((byte)(bVar6 + 0xbf) < 0x1a) {
              bVar6 = bVar6 | 0x20;
            }
            if ((bVar6 == 0x2f) && (bVar6 = in_ECX[6], bVar6 != 0)) {
              if ((byte)(bVar6 + 0xbf) < 0x1a) {
                bVar6 = bVar6 | 0x20;
              }
              if (bVar6 == 0x2f) goto LAB_10015f18;
            }
          }
        }
      }
    }
  }
  if ((char)(uVar2 >> 8) != 'h') {
    return 0;
  }
  bVar6 = in_ECX[1];
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  if (bVar6 != 0x74) {
    return 0;
  }
  bVar6 = in_ECX[2];
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  if (bVar6 != 0x74) {
    return 0;
  }
  bVar6 = in_ECX[3];
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  if (bVar6 != 0x70) {
    return 0;
  }
  bVar6 = in_ECX[4];
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  if (bVar6 != 0x73) {
    return 0;
  }
  bVar6 = in_ECX[5];
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  if (bVar6 != 0x3a) {
    return 0;
  }
  bVar6 = in_ECX[6];
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar6 = bVar6 | 0x20;
  }
  if (bVar6 != 0x2f) {
    return 0;
  }
  bVar6 = in_ECX[7];
  uVar2 = CONCAT11(bVar6,(char)uVar2);
  uVar3 = (uint)uVar2;
  if (bVar6 == 0) {
    return 0;
  }
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    uVar3 = uVar2 | 0x2000;
  }
  if ((char)(uVar3 >> 8) != '/') {
    return 0;
  }
LAB_10015f18:
  uVar7 = 0;
  bVar6 = (byte)uVar3;
  for (uVar2 = CONCAT11(bVar6,bVar6); ((bVar6 != 0 && (uVar2 >> 8 != 0x23)) && (uVar2 >> 8 != 0x3f))
      ; uVar2 = CONCAT11(bVar6,(char)uVar2)) {
    bVar6 = in_ECX[uVar7 + 1];
    uVar7 = uVar7 + 1;
  }
  if (3 < uVar7) {
    bVar6 = in_ECX[uVar7 - 4];
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      bVar6 = bVar6 | 0x20;
    }
    if (bVar6 == 0x2e) {
      bVar6 = in_ECX[uVar7 - 3];
      if ((byte)(bVar6 + 0xbf) < 0x1a) {
        bVar6 = bVar6 | 0x20;
      }
      if (bVar6 == 0x70) {
        bVar6 = in_ECX[uVar7 - 2];
        if ((byte)(bVar6 + 0xbf) < 0x1a) {
          bVar6 = bVar6 | 0x20;
        }
        if (bVar6 == 0x6e) {
          bVar6 = in_ECX[uVar7 - 1];
          uVar3 = (uint)CONCAT11(bVar6 + 0xbf,(char)uVar2);
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar6 == 0x67) {
            uVar7 = 0x811c9dc5;
            do {
              in_ECX = in_ECX + 1;
              uVar7 = (uVar3 & 0xff ^ uVar7) * 0x1000193;
              uVar3 = (uint)*in_ECX;
            } while (*in_ECX != 0);
            snprintf(local_11c,0x100,(char *)((uintptr_t)pf_module_state+0x2362U),uVar7,((uintptr_t)pf_module_state+0x235eU));
            memset(&local_1c,0,0xc);
            iVar5 = Ram00006800;
            if (((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
               ((uVar3 = Ram00006808, 0xb < uVar3 &&
                ((uVar3 = Ram00006808, 0x37 < uVar3 &&
                 (pcVar1 = (code *)UINT_00006834, pcVar1 != (code *)0x0)))))) {
              uVar3 = (*pcVar1)(local_11c,&local_1c);
              if (uVar3 == 0) {
                return 0;
              }
              if (local_1c == 0) {
                return 0;
              }
              if (local_18 == 0) {
                return 0;
              }
              iVar5 = Ram00006800;
              iVar4 = -1;
              if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
                  (uVar3 = Ram00006808, 0xb < uVar3)) &&
                 ((uVar3 = Ram00006808, 0xbf < uVar3 &&
                  (pcVar1 = (code *)UINT_000068bc, pcVar1 != (code *)0x0)))) {
                iVar4 = (*pcVar1)();
              }
              iVar5 = snprintf(in_EDX,0x100,(char *)((uintptr_t)pf_module_state+0x1629U),iVar4,local_11c);
              return CONCAT31((int3)((uint)iVar5 >> 8),1);
            }
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
#undef UINT_00006834
#undef UINT_000068bc
#undef local_11c
#undef local_1c
#undef local_18

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
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#define local_28 (*(void * *)(frame + 40))
#define local_24 (*(int *)(frame + 44))
#define outImage (*(void ** *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100161b0
 */

undefined4 recovered_100161b0(void **in_ECX,void **in_EDX)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar3;
  uint uVar2;
  void *pvVar4;

  outImage = (void **)0x18;
  memset(&local_28,0,0x18);
  if ((in_EDX != (void **)0x0) && (*(char *)in_EDX != '\0')) {
    iVar1 = Ram00006800;
    if ((iVar1 == 0x50414d57) &&
       (((iVar1 = Ram00006804, iVar1 != 0 && (uVar2 = Ram00006808, 0xb < uVar2)) &&
        (uVar2 = Ram00006808, 0xe3 < uVar2)))) {
      pcVar3 = (code *)UINT_000068e0;
      if (pcVar3 == (code *)0x0) {
        return 0;
      }
      outImage = &local_28;
    }
    else {
      iVar1 = Ram00006800;
      if (iVar1 != 0x50414d57) {
        return 0;
      }
      iVar1 = Ram00006804;
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = Ram00006808;
      if (uVar2 < 0xc) {
        return 0;
      }
      uVar2 = Ram00006808;
      if (uVar2 < 0x5c) {
        return 0;
      }
      pcVar3 = (code *)UINT_00006858;
      if (pcVar3 == (code *)0x0) {
        return 0;
      }
      in_ECX = in_EDX;
      in_EDX = &local_28;
    }
    uVar2 = (*pcVar3)((int)in_ECX,(char *)in_EDX,outImage);
    if (uVar2 != 0) {
      if ((((local_28 != (void *)0x0 && local_24 == 0) && (iVar1 = Ram00006800, iVar1 == 0x50414d57)
           ) && ((iVar1 = Ram00006804, iVar1 != 0 &&
                 ((uVar2 = Ram00006808, 0xb < uVar2 && (uVar2 = Ram00006808, 0x53 < uVar2)))))) &&
         (pcVar3 = (code *)UINT_00006850, pcVar3 != (code *)0x0)) {
        (*pcVar3)(local_28);
      }
      pvVar4 = memset(&local_28,0,0x18);
      return CONCAT31((int3)((uint)pvVar4 >> 8),1);
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
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef local_28
#undef local_24
#undef outImage

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
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100162e0
 */

void recovered_100162e0(char *in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  code *pcVar3;

  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar2 = Ram00006808, 0xb < uVar2)) &&
     ((uVar2 = Ram00006808, 0x3f < uVar2 && (pcVar3 = (code *)UINT_0000683c, pcVar3 != (code *)0x0))
     )) {
    (*pcVar3)(in_ECX);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000683c

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
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#define abStack_11c (*(byte (*)[9])(frame + 532))
#define local_318 (*(char (*)[256])(frame + 24))
#define local_218 (*(void * *)(frame + 280))
#define local_214 (*(int *)(frame + 284))
#define local_210 (*(undefined4 *)(frame + 288))
#define local_20c (*(undefined4 *)(frame + 292))
#define local_208 (*(undefined4 *)(frame + 296))
#define local_204 (*(undefined4 *)(frame + 300))
#define local_200 (*(undefined1 *)(frame + 304))
#define local_1ff (*(undefined1 *)(frame + 305))
#define local_1fe (*(undefined1 *)(frame + 306))
#define local_1f3 (*(char (*)[215])(frame + 317))
#define local_113 (*(byte *)(frame + 541))
#define local_112 (*(byte *)(frame + 542))
#define local_111 (*(byte *)(frame + 543))
#define local_18 (*(void ** *)(frame + 792))
#define local_14 (*(byte * *)(frame + 796))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016330
 */

void recovered_10016330(void *in_ECX_00,int in_EDX,char *param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                       undefined1 param_9,byte *param_10)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  byte *in_ECX;

  if (param_3 == (char *)0x0) {
    return;
  }
  if (*param_3 == '\0') {
    return;
  }
  recovered_10007f40(in_EDX,(byte *)param_3,(char *)(abStack_11c + 4));
  if (abStack_11c[4] == 0) {
    return;
  }
  bVar8 = abStack_11c[4];
  if ((byte)(abStack_11c[4] + 0xbf) < 0x1a) {
    bVar8 = abStack_11c[4] | 0x20;
  }
  if (bVar8 != 0x68) {
    return;
  }
  if (abStack_11c[5] == 0) {
code_r0x10016650:
    if (abStack_11c[5] == 0) {
      return;
    }
    if ((byte)(abStack_11c[5] + 0xbf) < 0x1a) {
      abStack_11c[5] = abStack_11c[5] | 0x20;
    }
    if (abStack_11c[5] != 0x74) {
      return;
    }
    if (abStack_11c[6] == 0) {
      return;
    }
    if ((byte)(abStack_11c[6] + 0xbf) < 0x1a) {
      abStack_11c[6] = abStack_11c[6] | 0x20;
    }
    if (abStack_11c[6] != 0x74) {
      return;
    }
    if (abStack_11c[7] == 0) {
      return;
    }
    if ((byte)(abStack_11c[7] + 0xbf) < 0x1a) {
      abStack_11c[7] = abStack_11c[7] | 0x20;
    }
    if (abStack_11c[7] != 0x70) {
      return;
    }
    if (abStack_11c[8] == 0) {
      return;
    }
    if ((byte)(abStack_11c[8] + 0xbf) < 0x1a) {
      abStack_11c[8] = abStack_11c[8] | 0x20;
    }
    if (abStack_11c[8] != 0x73) {
      return;
    }
    if (local_113 == 0) {
      return;
    }
    if ((byte)(local_113 + 0xbf) < 0x1a) {
      local_113 = local_113 | 0x20;
    }
    if (local_113 != 0x3a) {
      return;
    }
    if (local_112 == 0) {
      return;
    }
    if ((byte)(local_112 + 0xbf) < 0x1a) {
      local_112 = local_112 | 0x20;
    }
    if (local_112 != 0x2f) {
      return;
    }
    if (local_111 == 0) {
      return;
    }
    if ((byte)(local_111 + 0xbf) < 0x1a) {
      local_111 = local_111 | 0x20;
    }
    if (local_111 != 0x2f) {
      return;
    }
  }
  else {
    bVar8 = abStack_11c[5];
    if ((byte)(abStack_11c[5] + 0xbf) < 0x1a) {
      bVar8 = abStack_11c[5] | 0x20;
    }
    if ((bVar8 != 0x74) || (abStack_11c[6] == 0)) goto code_r0x10016650;
    bVar8 = abStack_11c[6];
    if ((byte)(abStack_11c[6] + 0xbf) < 0x1a) {
      bVar8 = abStack_11c[6] | 0x20;
    }
    if ((bVar8 != 0x74) || (abStack_11c[7] == 0)) goto code_r0x10016650;
    bVar8 = abStack_11c[7];
    if ((byte)(abStack_11c[7] + 0xbf) < 0x1a) {
      bVar8 = abStack_11c[7] | 0x20;
    }
    if ((bVar8 != 0x70) || (abStack_11c[8] == 0)) goto code_r0x10016650;
    bVar8 = abStack_11c[8];
    if ((byte)(abStack_11c[8] + 0xbf) < 0x1a) {
      bVar8 = abStack_11c[8] | 0x20;
    }
    if ((bVar8 != 0x3a) || (local_113 == 0)) goto code_r0x10016650;
    bVar8 = local_113;
    if ((byte)(local_113 + 0xbf) < 0x1a) {
      bVar8 = local_113 | 0x20;
    }
    if ((bVar8 != 0x2f) || (local_112 == 0)) goto code_r0x10016650;
    bVar8 = local_112;
    if ((byte)(local_112 + 0xbf) < 0x1a) {
      bVar8 = local_112 | 0x20;
    }
    if (bVar8 != 0x2f) goto code_r0x10016650;
  }
  local_14 = param_10;
  uVar7 = 0;
  while (((abStack_11c[4] != 0 && (abStack_11c[4] != 0x23)) && (abStack_11c[4] != 0x3f))) {
    iVar1 = uVar7 + 5;
    uVar7 = uVar7 + 1;
    abStack_11c[4] = abStack_11c[iVar1];
  }
  if (uVar7 < 4) {
    return;
  }
  bVar8 = abStack_11c[uVar7];
  if ((byte)(bVar8 + 0xbf) < 0x1a) {
    bVar8 = bVar8 | 0x20;
  }
  if (bVar8 != 0x2e) {
    return;
  }
  bVar8 = abStack_11c[uVar7 + 1];
  if ((byte)(bVar8 + 0xbf) < 0x1a) {
    bVar8 = bVar8 | 0x20;
  }
  if (bVar8 != 0x70) {
    return;
  }
  bVar8 = abStack_11c[uVar7 + 2];
  if ((byte)(bVar8 + 0xbf) < 0x1a) {
    bVar8 = bVar8 | 0x20;
  }
  if (bVar8 != 0x6e) {
    return;
  }
  bVar8 = abStack_11c[uVar7 + 3];
  if ((byte)(bVar8 + 0xbf) < 0x1a) {
    bVar8 = bVar8 | 0x20;
  }
  if (bVar8 != 0x67) {
    return;
  }
  in_ECX = abStack_11c + 4;
  uVar3 = recovered_10015e10(in_ECX,local_318);
  if ((char)uVar3 != '\0') {
    local_18 = (void **)0x0;
    local_218 = (void *)((uint)local_218 & 0xffffff00);
    uVar3 = recovered_10009250(local_318,(int *)&local_18,(char *)&local_218);
    if (((char)uVar3 != '\0') &&
       (uVar3 = recovered_100161b0(local_18,&local_218), (char)uVar3 != '\0')) {
      return;
    }
    if ((((char)local_218 != '\0') && (iVar1 = Ram00006800, iVar1 == 0x50414d57)) &&
       ((iVar1 = Ram00006804, iVar1 != 0 &&
        (((uVar7 = Ram00006808, 0xb < uVar7 && (uVar7 = Ram00006808, 0x3f < uVar7)) &&
         (pcVar2 = (code *)UINT_0000683c, pcVar2 != (code *)0x0)))))) {
      (*pcVar2)((char *)&local_218);
    }
    local_318[0] = '\0';
  }
  memset(&local_218,0,0x88);
  local_210 = param_4;
  local_20c = param_5;
  local_208 = param_6;
  local_204 = param_7;
  local_200 = param_8;
  local_1ff = param_9;
  local_1fe = param_8;
  local_218 = in_ECX_00;
  local_214 = in_EDX;
  if ((param_10 == (byte *)0x0) || (*param_10 == 0)) {
    pbVar4 = abStack_11c + 5;
    do {
      bVar8 = pbVar4[-1];
      if ((bVar8 == 0x2f) || (bVar8 == 0x5c)) {
        in_ECX = pbVar4;
      }
      else if (bVar8 == 0) goto code_r0x10016753;
      pbVar4 = pbVar4 + 1;
    } while( true );
  }
LAB_1001675a:
  snprintf(local_1f3,0x60,(char *)((uintptr_t)pf_module_state+0x154dU),local_14);
  pcVar5 = (char *)((uintptr_t)pf_module_state+0x1d09U);
  if (local_1f3[0] != '\0') {
    pcVar5 = local_1f3;
  }
LAB_10016795:
  snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x24e8U),pcVar5);
  recovered_10002e20(in_ECX_00);
  uVar3 = recovered_100153a0((int)in_ECX_00,abStack_11c + 4,local_318,(undefined *)0x1816820,
                             (undefined *)0x1816bb0,&local_218);
  pcVar5 = (char *)((uintptr_t)pf_module_state+0x24f3U);
  if ((char)uVar3 == '\0') {
    pcVar5 = (char *)((uintptr_t)pf_module_state+0x24fdU);
  }
  pcVar6 = (char *)((uintptr_t)pf_module_state+0x1d09U);
  if (local_1f3[0] != '\0') {
    pcVar6 = local_1f3;
  }
  snprintf((char *)(in_EDX + 0x141),0xc0,pcVar5,pcVar6);
  recovered_10002e20(in_ECX_00);
  return;
code_r0x10016753:
  local_14 = in_ECX;
  if (in_ECX == (byte *)0x0) {
    local_1f3[0] = '\0';
    pcVar5 = (char *)((uintptr_t)pf_module_state+0x1d09U);
    goto LAB_10016795;
  }
  goto LAB_1001675a;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000683c
#undef abStack_11c
#undef local_318
#undef local_218
#undef local_214
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1ff
#undef local_1fe
#undef local_1f3
#undef local_113
#undef local_112
#undef local_111
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_24 (*(uint *)(frame + 28))
#define local_18 (*(int *)(frame + 40))
#define local_14 (*(int *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10016820(int *param_1,uint param_2,uint param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  void *window;

  if (param_1 == (int *)0x0) {
    return;
  }
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    if ((char)param_1[6] == '\0') {
      iVar4 = 0;
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        iVar4 = *(int *)(iVar7 + 0x544b8);
      }
      uVar2 = (uVar2 + 0x48) - iVar4;
    }
    local_24 = 0;
    uVar5 = uVar3;
    if ((int)uVar3 < 1) {
      uVar5 = 0;
    }
    uVar8 = uVar2;
    if ((int)uVar2 < 0x49) {
      uVar8 = 0x48;
    }
    uVar6 = param_1[4] + uVar3;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) <= (int)(param_1[4] + uVar3)) {
      uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
    }
    iVar4 = uVar2 + param_1[5];
    if ((int)((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16) <= (int)(uVar2 + param_1[5])) {
      iVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16;
    }
    if (uVar6 - uVar5 != 0 && (int)uVar5 <= (int)uVar6) {
      local_14 = 0;
      local_18 = 0;
      uVar3 = 0;
      if (iVar4 - uVar8 != 0 && (int)uVar8 <= iVar4) {
        uVar3 = uVar8;
        local_24 = uVar5;
        local_18 = iVar4 - uVar8;
        local_14 = uVar6 - uVar5;
      }
      goto LAB_100168ec;
    }
  }
  local_24 = 0;
  uVar3 = 0;
  local_14 = 0;
  local_18 = 0;
LAB_100168ec:
  iVar4 = *param_1;
  if ((((iVar4 != 0) && (param_2 != 0)) && (iVar7 != 0)) && ((0x14 < local_14 && (0x18 < local_18)))
     ) {
    uVar2 = 0x200000;
    if (param_2 <= param_3) {
      uVar2 = param_3;
    }
    uVar5 = local_14 - 0x12;
    uVar8 = 1;
    if (uVar2 <= uVar5 * param_2) {
      uVar8 = (uVar5 * param_2) / uVar2;
    }
    if (uVar5 <= uVar8) {
      uVar8 = uVar5;
    }
    if ((param_1[7] == 0) || (uVar8 != param_1[7])) {
      recovered_10016f20(iVar4,local_24,uVar3,local_14,local_18,0xe8ecefff);
      iVar7 = *param_1;
      recovered_10016f20(iVar7,local_24,uVar3,local_14,1,0x7a848eff);
      recovered_10016f20(iVar7,local_24,local_18 + -1 + uVar3,local_14,1,0x7a848eff);
      recovered_10016f20(iVar7,local_24,uVar3,1,local_18,0x7a848eff);
      recovered_10016f20(iVar7,(local_24 - 1) + local_14,uVar3,1,local_18,0x7a848eff);
      pcVar9 = (char *)((uintptr_t)pf_module_state+0x1d09U);
      if (*(char *)((int)param_1 + 0x25) != '\0') {
        pcVar9 = (char *)((int)param_1 + 0x25);
      }
      recovered_10017450(*param_1,local_24 + 10,uVar3 + 0xc,pcVar9,1,0x444a52ff);
      uVar5 = local_24 + 8;
      uVar2 = local_18 + -0x11 + uVar3;
      iVar7 = *param_1;
      recovered_10016f20(iVar7,uVar5,uVar2,local_14 + -0x10,1,0x7a848eff);
      recovered_10016f20(iVar7,uVar5,local_18 + -10 + uVar3,local_14 + -0x10,1,0x7a848eff);
      recovered_10016f20(iVar7,uVar5,uVar2,1,8,0x7a848eff);
      recovered_10016f20(iVar7,(local_24 - 9) + local_14,uVar2,1,8,0x7a848eff);
      recovered_10016f20(*param_1,local_24 + 9,local_18 + -0x10 + uVar3,uVar8,6,0x2a6cb8ff);
      param_1[7] = uVar8;
      iVar4 = *param_1;
      iVar7 = param_1[1];
    }
    recovered_10017750(iVar4,iVar7,(char *)((int)param_1 + 0x25),param_2,param_3);
    recovered_10017890(*param_1,param_1[1]);
    window = (void *)*param_1;
    if (window == (void *)0x0) {
      window = (void *)0x0;
    }
    else if (*(uint *)((int)window + 0x57d4) != 0) {
      iVar7 = Ram00006800;
      if (((((iVar7 != 0x50414d57) || (iVar7 = Ram00006804, iVar7 == 0)) ||
           (uVar3 = Ram00006808, uVar3 < 0xc)) ||
          ((uVar3 = Ram00006808, uVar3 < 0x11c ||
           (pcVar1 = (code *)UINT_00006918, pcVar1 == (code *)0x0)))) ||
         (uVar3 = (*pcVar1)((void *)((int)window + 0x3d4),*(uint *)((int)window + 0x57d4)),
         uVar3 == 0)) {
        *(undefined1 *)((int)window + 0x57d8) = 0;
      }
      *(undefined4 *)((int)window + 0x57d4) = 0;
      window = (void *)*param_1;
    }
    terror_ui_window_present(window,(char *)((uintptr_t)pf_module_state+0x1485U),*(void **)((int)window + 0x340),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),
                       (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4,0xffffff);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006918
#undef local_24
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_0000685c
#define UINT_0000685c (*(uint *)(0x685cU))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_38 (*(void * *)(frame + 24))
#define local_34 (*(int *)(frame + 28))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(uint *)(frame + 52))
#define local_18 (*(uint *)(frame + 56))
#define local_14 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016bb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10016bb0(int *param_1,void *param_2,uint param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *window;

  if (param_1 == (int *)0x0) {
    return;
  }
  local_20 = param_1[1];
  if (local_20 != 0) {
    uVar4 = param_1[2];
    iVar5 = param_1[3];
    if ((char)param_1[6] == '\0') {
      iVar2 = 0;
      if (*(char *)((int)param_1 + 0x19) == '\0') {
        iVar2 = *(int *)(local_20 + 0x544b8);
      }
      iVar5 = (iVar5 + 0x48) - iVar2;
    }
    local_1c = 0;
    local_18 = uVar4;
    if ((int)uVar4 < 1) {
      local_18 = 0;
    }
    iVar2 = iVar5;
    if (iVar5 < 0x49) {
      iVar2 = 0x48;
    }
    uVar3 = param_1[4] + uVar4;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) <= (int)(param_1[4] + uVar4)) {
      uVar3 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
    }
    iVar6 = iVar5 + param_1[5];
    if ((int)((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16) <= iVar5 + param_1[5]) {
      iVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16;
    }
    if (uVar3 - local_18 != 0 && (int)local_18 <= (int)uVar3) {
      local_14 = 0;
      iVar5 = 0;
      uVar4 = 0;
      if (iVar6 - iVar2 != 0 && iVar2 <= iVar6) {
        local_1c = local_18;
        iVar5 = iVar2;
        uVar4 = uVar3 - local_18;
        local_14 = iVar6 - iVar2;
      }
      goto LAB_10016c74;
    }
  }
  local_1c = 0;
  iVar5 = 0;
  uVar4 = 0;
  local_14 = 0;
LAB_10016c74:
  if ((((((*param_1 != 0) && (param_2 != (void *)0x0)) && (param_3 != 0)) &&
       ((local_20 != 0 && (0 < (int)uVar4)))) && (0 < (int)local_14)) &&
     (((param_4 - 1 < param_3 || ((char)param_1[9] == '\0')) &&
      (((param_4 <= param_3 && (param_4 != 0)) ||
       (param_1[8] == 0 || 0x1ffff < param_3 - param_1[8])))))) {
    param_1[8] = param_3;
    local_18 = iVar5;
    memset(&local_38,0,0x18);
    iVar5 = Ram00006800;
    if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       (((uVar3 = Ram00006808, 0x5f < uVar3 &&
         (pcVar1 = (code *)UINT_0000685c, pcVar1 != (code *)0x0)) &&
        (uVar3 = (*pcVar1)(param_2,param_3,&local_38), uVar3 != 0)))) {
      recovered_10017ce0(*param_1);
      if (*(char *)((int)param_1 + 0x1a) == '\x01') {
        recovered_10018390(*param_1,(int *)&local_38,local_1c,local_18,uVar4,local_14);
        recovered_100186a0(*param_1,param_1[1]);
      }
      else {
        recovered_10018fe0(*param_1,param_1[1],(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x5e);
        recovered_100186a0(*param_1,param_1[1]);
        recovered_10019400(*param_1,(int *)&local_38,local_1c,local_18,uVar4,local_14);
      }
      if (((local_38 != (void *)0x0 && local_34 == 0) && (iVar5 = Ram00006800, iVar5 == 0x50414d57))
         && ((iVar5 = Ram00006804, iVar5 != 0 &&
             (((uVar4 = Ram00006808, 0xb < uVar4 && (uVar4 = Ram00006808, 0x53 < uVar4)) &&
              (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))))) {
        (*pcVar1)(local_38);
      }
      memset(&local_38,0,0x18);
      *(undefined1 *)(param_1 + 9) = 1;
      recovered_10017750(*param_1,param_1[1],(char *)((int)param_1 + 0x25),param_3,param_4);
      recovered_10017890(*param_1,param_1[1]);
      window = (void *)*param_1;
      if (window == (void *)0x0) {
        window = (void *)0x0;
      }
      else if (*(uint *)((int)window + 0x57d4) != 0) {
        iVar5 = Ram00006800;
        if ((((iVar5 != 0x50414d57) || (iVar5 = Ram00006804, iVar5 == 0)) ||
            ((uVar4 = Ram00006808, uVar4 < 0xc ||
             ((uVar4 = Ram00006808, uVar4 < 0x11c ||
              (pcVar1 = (code *)UINT_00006918, pcVar1 == (code *)0x0)))))) ||
           (uVar4 = (*pcVar1)((void *)((int)window + 0x3d4),*(uint *)((int)window + 0x57d4)),
           uVar4 == 0)) {
          *(undefined1 *)((int)window + 0x57d8) = 0;
        }
        *(undefined4 *)((int)window + 0x57d4) = 0;
        window = (void *)*param_1;
      }
      terror_ui_window_present(window,(char *)((uintptr_t)pf_module_state+0x1485U),*(void **)((int)window + 0x340),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),
                         (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)),(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4,0xffffff);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_0000685c
#undef UINT_00006918
#undef local_38
#undef local_34
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_38 (*(uint *)(frame + 24))
#define local_2c (*(uint *)(frame + 36))
#define local_20 (*(int *)(frame + 48))
#define local_1c (*(uint *)(frame + 52))
#define local_18 (*(uint *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10016f20(int in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,uint param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  void *commands;
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;

  if ((param_5 < 1 || param_4 < 1) || in_ECX == 0) {
    return;
  }
  if ((char)param_6 != -1) {
    if ((*(char *)(in_ECX + 0x57d8) != '\0') && (*(uint *)(in_ECX + 0x57d4) != 0)) {
      iVar9 = Ram00006800;
      if (((iVar9 != 0x50414d57) ||
          (((iVar9 = Ram00006804, iVar9 == 0 || (uVar4 = Ram00006808, uVar4 < 0xc)) ||
           (uVar4 = Ram00006808, uVar4 < 0x11c)))) ||
         ((pcVar3 = (code *)UINT_00006918, pcVar3 == (code *)0x0 ||
          (uVar4 = (*pcVar3)((void *)(in_ECX + 0x3d4),*(uint *)(in_ECX + 0x57d4)), uVar4 == 0)))) {
        *(undefined1 *)(in_ECX + 0x57d8) = 0;
      }
      *(undefined4 *)(in_ECX + 0x57d4) = 0;
    }
    uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
    uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
    if ((char)param_6 == '\0') {
      return;
    }
    if (*(int *)(in_ECX + 0x340) == 0) {
      return;
    }
    uVar8 = in_EDX;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) <= (int)in_EDX) {
      uVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
    }
    local_2c = 0;
    local_38 = 0;
    if (-1 < (int)in_EDX) {
      local_38 = uVar8;
    }
    uVar8 = param_3;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) <= (int)param_3) {
      uVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
    }
    uVar6 = 0;
    if (-1 < (int)param_3) {
      uVar6 = uVar8;
    }
    uVar5 = param_4 + in_EDX;
    uVar8 = uVar5;
    if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) <= (int)uVar5) {
      uVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
    }
    local_1c = 0;
    if (-1 < (int)uVar5) {
      local_1c = uVar8;
    }
    uVar5 = param_5 + param_3;
    uVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
    if ((int)uVar5 < (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) {
      uVar8 = uVar5;
    }
    if ((int)uVar5 < 0) {
      if (-1 < (int)uVar6) {
        return;
      }
    }
    else {
      local_2c = uVar8;
      if ((int)uVar8 <= (int)uVar6) {
        return;
      }
    }
    uVar8 = param_6 & 0xff;
    uVar5 = uVar8 ^ 0xff;
    local_20 = uVar6 * (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4 + 3;
    iVar9 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4;
    do {
      uVar10 = local_38;
      if ((int)local_38 < (int)local_1c) {
        do {
          if ((((int)uVar10 < (int)uVar4 && -1 < (int)(uVar10 | uVar6)) && (int)uVar6 < (int)uVar1)
              && *(int *)(in_ECX + 0x340) != 0) {
            iVar12 = *(int *)(in_ECX + 0x340) + local_20;
            *(char *)(iVar12 + -3 + uVar10 * 4) =
                 (char)((ulonglong)
                        (*(byte *)(iVar12 + -3 + uVar10 * 4) * uVar5 +
                        (param_6 >> 0x18) * uVar8 + 0x7f) * 0x1010102 >> 0x20);
            *(char *)(iVar12 + -2 + uVar10 * 4) =
                 (char)((ulonglong)
                        (*(byte *)(iVar12 + -2 + uVar10 * 4) * uVar5 +
                        (param_6 >> 0x10 & 0xff) * uVar8 + 0x7f) * 0x1010102 >> 0x20);
            *(char *)(iVar12 + -1 + uVar10 * 4) =
                 (char)((ulonglong)
                        (*(byte *)(iVar12 + -1 + uVar10 * 4) * uVar5 +
                        (param_6 >> 8 & 0xff) * uVar8 + 0x7f) * 0x1010102 >> 0x20);
            *(undefined1 *)(iVar12 + uVar10 * 4) = 0xff;
          }
          uVar10 = uVar10 + 1;
        } while (local_1c != uVar10);
      }
      uVar6 = uVar6 + 1;
      local_20 = local_20 + iVar9;
    } while (uVar6 != local_2c);
    return;
  }
  if (*(char *)(in_ECX + 0x57d8) != '\0') {
    uVar4 = *(uint *)(in_ECX + 0x57d4);
    commands = (void *)(in_ECX + 0x3d4);
    if (uVar4 < 0xc0) {
      *(uint *)(in_ECX + 0x57d4) = uVar4 + 1;
      iVar9 = uVar4 * 0x70;
      memset((void *)((int)commands + iVar9),0,0x70);
      *(undefined4 *)((int)commands + iVar9) = 2;
      uVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
      uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
      uVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4;
      lVar2 = (ulonglong)uVar4 * (ulonglong)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
      *(undefined4 *)(in_ECX + 0x3dc + iVar9) = *(undefined4 *)(in_ECX + 0x340);
      *(undefined4 *)(in_ECX + 0x3e0 + iVar9) = 0;
      uVar7 = 0xffffffff;
      if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
        uVar7 = (int)lVar2;
      }
      *(undefined4 *)(in_ECX + 0x3e4 + iVar9) = uVar7;
      *(uint *)(in_ECX + 1000 + iVar9) = uVar1;
      *(uint *)(in_ECX + 0x3ec + iVar9) = uVar8;
      *(uint *)(in_ECX + 0x3f0 + iVar9) = uVar4;
      *(undefined4 *)(in_ECX + 0x3f4 + iVar9) = 1;
      *(undefined4 *)(in_ECX + 0x3f8 + iVar9) = 0;
      *(uint *)(in_ECX + 0x3fc + iVar9) = in_EDX;
      *(uint *)(in_ECX + 0x400 + iVar9) = param_3;
      *(int *)(in_ECX + 0x404 + iVar9) = param_4;
      *(int *)(in_ECX + 0x408 + iVar9) = param_5;
      *(uint *)(in_ECX + 0x40c + iVar9) = param_6;
      return;
    }
    iVar9 = Ram00006800;
    if (((iVar9 != 0x50414d57) || (iVar9 = Ram00006804, iVar9 == 0)) ||
       ((uVar1 = Ram00006808, uVar1 < 0xc ||
        (((uVar1 = Ram00006808, uVar1 < 0x11c ||
          (pcVar3 = (code *)UINT_00006918, pcVar3 == (code *)0x0)) ||
         (uVar4 = (*pcVar3)(commands,uVar4), uVar4 == 0)))))) {
      *(undefined1 *)(in_ECX + 0x57d8) = 0;
    }
    *(undefined4 *)(in_ECX + 0x57d4) = 0;
  }
  uVar4 = *(uint *)(in_ECX + 0x340);
  if (uVar4 == 0) {
    return;
  }
  if ((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) == 0) {
    return;
  }
  if ((*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) == 0) {
    return;
  }
  uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4;
  if ((*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) >> 0x1e != 0) {
    return;
  }
  uVar8 = 0xffffffff;
  if ((int)((ulonglong)uVar1 * (ulonglong)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) >> 0x20) == 0) {
    uVar8 = (uint)((ulonglong)uVar1 * (ulonglong)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)));
  }
  iVar9 = (int)((ulonglong)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) * (ulonglong)uVar1 >> 0x20);
  if ((uVar8 != 0) &&
     (iVar9 != 0 ||
      (uint)-iVar9 < (uint)(uVar8 < (uint)((ulonglong)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) * (ulonglong)uVar1)))) {
    return;
  }
  uVar8 = param_4 + in_EDX;
  uVar6 = param_5 + param_3;
  if (((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) <= (int)param_3 || (int)(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) <= (int)in_EDX) ||
      ((int)uVar6 < 1 || (int)uVar8 < 1)) {
    return;
  }
  local_18 = in_EDX;
  if ((int)in_EDX < 1) {
    local_18 = 0;
  }
  if ((int)param_3 < 1) {
    param_3 = 0;
  }
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) <= (int)uVar8) {
    uVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  }
  if ((int)(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) <= (int)uVar6) {
    uVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
  }
  if ((int)uVar6 <= (int)param_3) {
    return;
  }
  local_1c = param_3;
  do {
    puVar11 = (uint *)(local_1c * uVar1 + uVar4 + local_18 * 4);
    if ((uVar4 & 3) == 0) {
      if ((int)local_18 < (int)uVar8) {
        iVar9 = uVar8 - local_18;
        do {
          *puVar11 = param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 |
                     param_6 << 0x18;
          puVar11 = puVar11 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      iVar9 = uVar8 - local_18;
      if ((int)local_18 < (int)uVar8) {
        do {
          if (puVar11 != (uint *)0x0) {
            *(char *)puVar11 = (char)(param_6 >> 0x18);
            *(char *)((int)puVar11 + 1) = (char)(param_6 >> 0x10);
            *(char *)((int)puVar11 + 2) = (char)(param_6 >> 8);
            *(undefined1 *)((int)puVar11 + 3) = 0xff;
          }
          puVar11 = puVar11 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    local_1c = local_1c + 1;
  } while (local_1c != uVar6);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006918
#undef local_38
#undef local_2c
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_54 (*(void * *)(frame + 28))
#define local_50 (*(int *)(frame + 32))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_40 (*(int *)(frame + 48))
#define local_3c (*(int *)(frame + 52))
#define local_38 (*(int *)(frame + 56))
#define local_34 (*(int *)(frame + 60))
#define local_30 (*(int *)(frame + 64))
#define local_2c (*(uint *)(frame + 68))
#define local_28 (*(void * *)(frame + 72))
#define local_24 (*(int *)(frame + 76))
#define local_20 (*(uint *)(frame + 80))
#define local_1c (*(uint *)(frame + 84))
#define local_18 (*(int *)(frame + 88))
#define local_11 (*(byte *)(frame + 95))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017450(int in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,uint param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;

  if (param_4 == (char *)0x0 || in_ECX == 0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  local_30 = in_EDX;
  local_18 = in_ECX;
  memset(&local_54,0,0x18);
  if ((int)param_5 < 2) {
    param_5 = 1;
  }
  iVar4 = Ram00006800;
  if (iVar4 != 0x50414d57) {
    return;
  }
  iVar4 = Ram00006804;
  if (iVar4 == 0) {
    return;
  }
  uVar7 = Ram00006808;
  if (uVar7 < 0xc) {
    return;
  }
  uVar7 = Ram00006808;
  if (uVar7 < 0x17c) {
    return;
  }
  pcVar5 = (code *)UINT_00006978;
  if (pcVar5 == (code *)0x0) {
    return;
  }
  uVar7 = (*pcVar5)(param_4,0xffffffff,param_5,param_6,&local_54);
  if (uVar7 == 0) {
    return;
  }
  local_28 = local_54;
  if (local_54 == (void *)0x0 || local_50 != 0) {
    return;
  }
  if (*(uint *)(local_18 + 0x57d4) != 0) {
    iVar4 = Ram00006800;
    if ((((iVar4 != 0x50414d57) || (iVar4 = Ram00006804, iVar4 == 0)) ||
        (uVar7 = Ram00006808, uVar7 < 0xc)) ||
       (((uVar7 = Ram00006808, uVar7 < 0x11c ||
         (pcVar5 = (code *)UINT_00006918, pcVar5 == (code *)0x0)) ||
        (uVar7 = (*pcVar5)((void *)(local_18 + 0x3d4),*(uint *)(local_18 + 0x57d4)), uVar7 == 0))))
    {
      *(undefined1 *)(local_18 + 0x57d8) = 0;
    }
    *(undefined4 *)(local_18 + 0x57d4) = 0;
  }
  iVar6 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
  iVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  if (local_44 != 0) {
    local_38 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
    local_24 = local_30 * 4 + 3 + (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * param_3 * 4;
    local_3c = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
    local_34 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4;
    local_1c = 0;
    uVar7 = local_48;
    do {
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        local_2c = param_3 + local_1c;
        uVar7 = 0;
        do {
          if (((int)(local_30 + uVar7) < iVar4 && -1 < (int)(local_30 + uVar7 | local_2c)) &&
              *(int *)(local_18 + 0x340) != 0) {
            iVar9 = local_40 * local_1c;
            uVar10 = (uint)*(byte *)((int)local_28 + uVar7 * 4 + iVar9 + 3);
            if ((uVar10 != 0) && ((int)local_2c < iVar6)) {
              bVar1 = *(byte *)((int)local_28 + uVar7 * 4 + iVar9);
              bVar2 = *(byte *)((int)local_28 + uVar7 * 4 + iVar9 + 1);
              bVar3 = *(byte *)((int)local_28 + uVar7 * 4 + iVar9 + 2);
              iVar9 = *(int *)(local_18 + 0x340) + local_24;
              if (uVar10 == 0xff) {
                *(byte *)(iVar9 + -3 + uVar7 * 4) = bVar1;
                *(byte *)(iVar9 + -2 + uVar7 * 4) = bVar2;
                *(byte *)(iVar9 + -1 + uVar7 * 4) = bVar3;
              }
              else {
                uVar8 = uVar10 ^ 0xff;
                local_20 = (uint)bVar2;
                *(char *)(iVar9 + -3 + uVar7 * 4) =
                     (char)((bVar1 * uVar10 + 0x7f + *(byte *)(iVar9 + -3 + uVar7 * 4) * uVar8) /
                           0xff);
                *(char *)(iVar9 + -2 + uVar7 * 4) =
                     (char)((ulonglong)
                            (local_20 * uVar10 + 0x7f + *(byte *)(iVar9 + -2 + uVar7 * 4) * uVar8) *
                            0x1010102 >> 0x20);
                *(char *)(iVar9 + -1 + uVar7 * 4) =
                     (char)((bVar3 * uVar10 + 0x7f + *(byte *)(iVar9 + -1 + uVar7 * 4) * uVar8) /
                           0xff);
                local_11 = bVar3;
              }
              *(undefined1 *)(iVar9 + uVar7 * 4) = 0xff;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_48);
        uVar7 = local_48;
      }
      local_1c = local_1c + 1;
      local_24 = local_24 + local_34;
    } while (local_1c < local_44);
  }
  iVar4 = Ram00006800;
  if ((((iVar4 == 0x50414d57) && (iVar4 = Ram00006804, iVar4 != 0)) &&
      (uVar7 = Ram00006808, 0xb < uVar7)) &&
     ((uVar7 = Ram00006808, 0x53 < uVar7 && (pcVar5 = (code *)UINT_00006850, pcVar5 != (code *)0x0))
     )) {
    (*pcVar5)(local_28);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006850
#undef UINT_00006918
#undef UINT_00006978
#undef local_54
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
#undef local_11

#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#define format (*(char * *)(frame + 28))
#define local_d0 (*(char (*)[192])(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017750
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017750(int in_ECX,int in_EDX,char *param_3,int param_4,int param_5)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (in_EDX != 0 && in_ECX != 0) {
    if (param_5 == 0) {
      if (param_3 == (char *)0x0) {
        pcVar1 = (char *)((uintptr_t)pf_module_state+0x1d09U);
      }
      else {
        pcVar1 = (char *)((uintptr_t)pf_module_state+0x1d09U);
        if (*param_3 != '\0') {
          pcVar1 = param_3;
        }
      }
      format = (char *)((uintptr_t)pf_module_state+0x252bU);
    }
    else {
      if (param_3 == (char *)0x0) {
        pcVar1 = (char *)((uintptr_t)pf_module_state+0x1d09U);
      }
      else {
        pcVar1 = (char *)((uintptr_t)pf_module_state+0x1d09U);
        if (*param_3 != '\0') {
          pcVar1 = param_3;
        }
      }
      format = (char *)((uintptr_t)pf_module_state+0x2517U);
    }
    snprintf(local_d0,0xc0,format,pcVar1,param_4 + 0x3ffU >> 10);
    snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),local_d0);
    recovered_10016f20(in_ECX,0,(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),0x16,0xeceff1ff);
    recovered_10016f20(in_ECX,0,(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),1,0x7a848eff);
    recovered_10017450(in_ECX,10,(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0xf,(char *)(in_EDX + 0x141),1,0x12181cff);
  }
  return;
}

#undef DAT_0181d0fc
#undef DAT_0181d100
#undef format
#undef local_d0

#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017890
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017890(int in_ECX,int in_EDX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
  iVar8 = 0x12;
  if (0x9d < (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) {
    iVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x8c;
  }
  local_14 = 0x4e;
  iVar6 = iVar8;
  if (in_EDX != 0) {
    iVar3 = *(int *)(in_EDX + 0x544bc);
    iVar5 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x5e;
    iVar7 = iVar3 - iVar5;
    if (iVar7 != 0 && iVar5 <= iVar3) {
      iVar6 = (iVar5 * iVar8) / iVar3;
      if (iVar6 < 0x13) {
        iVar6 = 0x12;
      }
      if (iVar8 <= iVar6) {
        iVar6 = iVar8;
      }
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      local_14 = ((iVar8 - iVar6) * *(int *)(in_EDX + 0x544b8)) / iVar7 + 0x4e;
    }
  }
  if (in_ECX != 0) {
    uVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x2c;
    uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x3c;
    recovered_10016f20(in_ECX,8,0x4e,0xc,iVar8,0xe4e4e4ff);
    recovered_10016f20(in_ECX,8,0x4e,0xc,1,0xacacacff);
    recovered_10016f20(in_ECX,8,iVar8 + 0x4d,0xc,1,0xacacacff);
    recovered_10016f20(in_ECX,8,0x4e,1,iVar8,0xacacacff);
    recovered_10016f20(in_ECX,0x13,0x4e,1,iVar8,0xacacacff);
    recovered_10016f20(in_ECX,9,local_14 + 1,10,iVar6 + -2,0xbebebeff);
    recovered_10016f20(in_ECX,8,local_14,0xc,1,0x747474ff);
    recovered_10016f20(in_ECX,8,(local_14 - 1) + iVar6,0xc,1,0x747474ff);
    recovered_10016f20(in_ECX,8,local_14,1,iVar6,0x747474ff);
    recovered_10016f20(in_ECX,0x13,local_14,1,iVar6,0x747474ff);
    recovered_10016f20(in_ECX,8,uVar2,0xc,0xe,0xeeeeeeff);
    recovered_10016f20(in_ECX,8,uVar2,0xc,1,0x969696ff);
    recovered_10016f20(in_ECX,8,iVar4 - 0x2f,0xc,1,0x969696ff);
    recovered_10016f20(in_ECX,8,uVar2,1,0xe,0x969696ff);
    recovered_10016f20(in_ECX,0x13,uVar2,1,0xe,0x969696ff);
    recovered_10016f20(in_ECX,0xe,iVar4 - 0x39,1,1,0x464646ff);
    recovered_10016f20(in_ECX,0xd,iVar4 - 0x38,3,1,0x464646ff);
    recovered_10016f20(in_ECX,0xc,iVar4 - 0x37,5,1,0x464646ff);
    recovered_10016f20(in_ECX,0xb,iVar4 - 0x36,7,1,0x464646ff);
    recovered_10016f20(in_ECX,8,uVar1,0xc,0xe,0xeeeeeeff);
    recovered_10016f20(in_ECX,8,uVar1,0xc,1,0x969696ff);
    recovered_10016f20(in_ECX,8,iVar4 - 0x1f,0xc,1,0x969696ff);
    recovered_10016f20(in_ECX,8,uVar1,1,0xe,0x969696ff);
    recovered_10016f20(in_ECX,0x13,uVar1,1,0xe,0x969696ff);
    recovered_10016f20(in_ECX,0xb,iVar4 - 0x27,7,1,0x464646ff);
    recovered_10016f20(in_ECX,0xc,iVar4 - 0x26,5,1,0x464646ff);
    recovered_10016f20(in_ECX,0xd,iVar4 - 0x25,3,1,0x464646ff);
    recovered_10016f20(in_ECX,0xe,iVar4 - 0x24,1,1,0x464646ff);
  }
  return;
}

#undef DAT_0181d100
#undef local_14

#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017c40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017c40(undefined4 *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0x12;
  if (0x9d < (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU))) {
    iVar4 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x8c;
  }
  iVar1 = 0x4e;
  if (in_EDX != 0) {
    iVar2 = *(int *)(in_EDX + 0x544bc);
    iVar5 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x5e;
    iVar3 = iVar2 - iVar5;
    if (iVar3 != 0 && iVar5 <= iVar2) {
      iVar2 = (iVar5 * iVar4) / iVar2;
      if (iVar2 < 0x13) {
        iVar2 = 0x12;
      }
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      iVar1 = ((iVar4 - iVar2) * *(int *)(in_EDX + 0x544b8)) / iVar3 + 0x4e;
      iVar4 = iVar2;
    }
  }
  *in_ECX = 8;
  in_ECX[1] = iVar1;
  in_ECX[2] = 0xc;
  in_ECX[3] = iVar4;
  return;
}

#undef DAT_0181d100

#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017ce0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10017ce0(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EDX;
  int in_EDX_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;

  if (in_ECX == 0) {
    return;
  }
  if (*(uint *)(in_ECX + 0x205bac) == 0) {
    return;
  }
  if (*(uint *)(in_ECX + 0x205bac) <= *(uint *)(in_ECX + 0x205bb0)) {
    return;
  }
  iVar7 = *(uint *)(in_ECX + 0x205bb0) * 0x555cc;
  in_EDX_00 = in_ECX + 0x58e4 + iVar7;
  *(undefined4 *)(in_ECX + 0x57d4) = 0;
  recovered_10016f20(in_ECX,0,0,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)),0xfffffcff);
  recovered_10016f20(in_ECX,0,0,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),0x48,0xe1e5e8ff);
  recovered_10016f20(in_ECX,0,0x47,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),1,0x7a848eff);
  if ((*(int *)(in_ECX + 0x5ada4 + iVar7) == 0) ||
     (uVar2 = 0xecf0f2ff, *(int *)(in_EDX_00 + 0x554c4) == 0)) {
    uVar2 = 0xd2d6daff;
  }
  recovered_10016f20(in_ECX,10,9,0x1a,0x1a,uVar2);
  recovered_10016f20(in_ECX,10,9,0x1a,1,0x7a848eff);
  recovered_10016f20(in_ECX,10,0x22,0x1a,1,0x7a848eff);
  recovered_10016f20(in_ECX,10,9,1,0x1a,0x7a848eff);
  recovered_10016f20(in_ECX,0x23,9,1,0x1a,0x7a848eff);
  if ((*(int *)(in_EDX_00 + 0x554c0) == 0) ||
     (uVar2 = 0x12181cff, *(int *)(in_EDX_00 + 0x554c4) == 0)) {
    uVar2 = 0x808890ff;
  }
  recovered_10017450(in_ECX,0x12,0x12,(char *)((uintptr_t)pf_module_state+0x253cU),1,uVar2);
  if ((*(uint *)(in_EDX_00 + 0x554c0) == 0) ||
     (uVar2 = 0xecf0f2ff, *(uint *)(in_EDX_00 + 0x554c0) <= *(int *)(in_EDX_00 + 0x554c4) + 1U)) {
    uVar2 = 0xd2d6daff;
  }
  recovered_10016f20(in_ECX,0x28,9,0x1a,0x1a,uVar2);
  recovered_10016f20(in_ECX,0x28,9,0x1a,1,0x7a848eff);
  recovered_10016f20(in_ECX,0x28,0x22,0x1a,1,0x7a848eff);
  recovered_10016f20(in_ECX,0x28,9,1,0x1a,0x7a848eff);
  recovered_10016f20(in_ECX,0x41,9,1,0x1a,0x7a848eff);
  if ((*(uint *)(in_EDX_00 + 0x554c0) == 0) ||
     (uVar2 = 0x12181cff, *(uint *)(in_EDX_00 + 0x554c0) <= *(int *)(in_EDX_00 + 0x554c4) + 1U)) {
    uVar2 = 0x808890ff;
  }
  recovered_10017450(in_ECX,0x30,0x12,(char *)((uintptr_t)pf_module_state+0x253eU),1,uVar2);
  iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  iVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) + -0xfa;
  recovered_10016f20(in_ECX,0x4a,9,iVar7,0x1a,0xfafcfcff);
  uVar2 = 0x165cb0ff;
  if (*(char *)(in_ECX + 0x57db) == '\0') {
    uVar2 = 0x7a848eff;
  }
  recovered_10016f20(in_ECX,0x4a,9,iVar7,1,uVar2);
  recovered_10016f20(in_ECX,0x4a,0x22,iVar7,1,uVar2);
  recovered_10016f20(in_ECX,0x4a,9,1,0x1a,uVar2);
  recovered_10016f20(in_ECX,iVar1 - 0xb1,9,1,0x1a,uVar2);
  recovered_10017450(in_ECX,0x50,0x11,(char *)(in_ECX + 0x57de),1,0x12181cff);
  if ((*(char *)(in_ECX + 0x57db) == '\x01') && ((*(uint *)(in_ECX + 0x205bc0) / 0x18 & 1) == 0)) {
    uVar3 = recovered_100138b0((char *)(in_ECX + 0x57de),1);
    uVar6 = iVar1 - 0xb8;
    uVar2 = uVar3 + 0x50;
    if ((int)uVar6 <= (int)(uVar3 + 0x50)) {
      uVar2 = uVar6;
    }
    uVar6 = 0x50;
    if (-1 < (int)uVar3) {
      uVar6 = uVar2;
    }
    recovered_10016f20(in_ECX,uVar6,0xf,1,0xe,0x12181cff);
  }
  iVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  recovered_10016f20(in_ECX,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0xa6,9,0x2e,0x1a,0x165cb0ff);
  recovered_10017450(in_ECX,iVar7 + -0x9a,0x12,(char *)((uintptr_t)pf_module_state+0x2540U),1,0xffffffff);
  iVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  uVar2 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) - 0x70;
  uVar3 = 0xced6dbff;
  if (*(char *)(in_ECX + 0x57dc) == '\0') {
    uVar3 = 0xbfe2c8ff;
  }
  recovered_10016f20(in_ECX,uVar2,9,0x68,0x1a,uVar3);
  recovered_10016f20(in_ECX,uVar2,9,0x68,1,0x7a848eff);
  recovered_10016f20(in_ECX,uVar2,0x22,0x68,1,0x7a848eff);
  recovered_10016f20(in_ECX,uVar2,9,1,0x1a,0x7a848eff);
  recovered_10016f20(in_ECX,iVar7 - 9,9,1,0x1a,0x7a848eff);
  pcVar4 = (char *)((uintptr_t)pf_module_state+0x2543U);
  if (*(char *)(in_ECX + 0x57dc) == '\0') {
    pcVar4 = (char *)((uintptr_t)pf_module_state+0x254fU);
  }
  recovered_10017450(in_ECX,iVar7 + -0x68,0x12,pcVar4,1,0x12181cff);
  if (*(int *)(in_ECX + 0x205bac) == 0) {
    uVar2 = 0;
  }
  else {
    pcVar4 = (char *)(in_ECX + 0x59e5);
    uVar3 = 0;
    uVar6 = 0x8b;
    do {
      uVar2 = 0xfffffcff;
      if (uVar3 != *(uint *)(in_ECX + 0x205bb0)) {
        uVar2 = 0xccd3d8ff;
      }
      in_EDX = uVar6 - 0x83;
      recovered_10016f20(in_ECX,in_EDX,0x2f,0x84,0x18,uVar2);
      recovered_10016f20(in_ECX,in_EDX,0x2f,0x84,1,0x7a848eff);
      recovered_10016f20(in_ECX,in_EDX,0x46,0x84,1,0x7a848eff);
      recovered_10016f20(in_ECX,in_EDX,0x2f,1,0x18,0x7a848eff);
      recovered_10016f20(in_ECX,uVar6,0x2f,1,0x18,0x7a848eff);
      pcVar5 = (char *)((uintptr_t)pf_module_state+0x255aU);
      if (*pcVar4 != '\0') {
        pcVar5 = pcVar4;
      }
      recovered_10017450(in_ECX,uVar6 - 0x7b,0x37,pcVar5,1,0x12181cff);
      uVar3 = uVar3 + 1;
      uVar2 = *(uint *)(in_ECX + 0x205bac);
      pcVar4 = pcVar4 + 0x555cc;
      uVar6 = uVar6 + 0x88;
    } while (uVar3 < uVar2);
    if (5 < uVar2) goto LAB_100182f6;
  }
  uVar3 = uVar2 * 0x88 + 8;
  recovered_10016f20(in_ECX,uVar3,0x31,0x18,0x16,0xecf0f2ff);
  recovered_10016f20(in_ECX,uVar3,0x31,0x18,1,0x7a848eff);
  recovered_10016f20(in_ECX,uVar3,0x46,0x18,1,0x7a848eff);
  recovered_10016f20(in_ECX,uVar3,0x31,1,0x16,0x7a848eff);
  recovered_10016f20(in_ECX,uVar2 * 0x88 + 0x1f,0x31,1,0x16,0x7a848eff);
  recovered_10017450(in_ECX,uVar2 * 0x88 + 0xf,0x38,(char *)((uintptr_t)pf_module_state+0x255eU),1,0x12181cff);
LAB_100182f6:
  recovered_10017890(in_ECX,in_EDX_00);
  recovered_10016f20(in_ECX,0,(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),0x16,0xeceff1ff);
  recovered_10016f20(in_ECX,0,(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) - 0x16,(*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)),1,0x7a848eff);
  if (*(char *)(in_EDX_00 + 0x141) == '\0') {
    pcVar4 = (char *)((uintptr_t)pf_module_state+0x2560U);
    if (*(char *)(in_ECX + 0x57d8) == '\0') {
      pcVar4 = (char *)((uintptr_t)pf_module_state+0x257aU);
    }
  }
  else {
    pcVar4 = (char *)(in_EDX_00 + 0x141);
  }
  recovered_10017450(in_ECX,10,(*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0xf,pcVar4,1,0x12181cff);
  return;
}

#undef DAT_0181d0fc
#undef DAT_0181d100

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10018390(int in_ECX,int *in_EDX,uint param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;

  if (in_EDX == (int *)0x0) {
    return;
  }
  if (in_EDX[1] == 0) {
    iVar14 = *in_EDX;
  }
  else {
    iVar14 = 0;
  }
  if (iVar14 == 0 || in_ECX == 0) {
    return;
  }
  uVar9 = in_EDX[3];
  if (uVar9 == 0) {
    return;
  }
  uVar15 = in_EDX[4];
  if (((int)param_6 < 1 || (int)param_5 < 1) || uVar15 == 0) {
    return;
  }
  if (*(uint *)(in_ECX + 0x57d4) != 0) {
    iVar1 = Ram00006800;
    if (((((iVar1 != 0x50414d57) || (iVar1 = Ram00006804, iVar1 == 0)) ||
         (uVar9 = Ram00006808, uVar9 < 0xc)) ||
        ((uVar9 = Ram00006808, uVar9 < 0x11c ||
         (pcVar6 = (code *)UINT_00006918, pcVar6 == (code *)0x0)))) ||
       (uVar9 = (*pcVar6)((void *)(in_ECX + 0x3d4),*(uint *)(in_ECX + 0x57d4)), uVar9 == 0)) {
      *(undefined1 *)(in_ECX + 0x57d8) = 0;
    }
    *(undefined4 *)(in_ECX + 0x57d4) = 0;
    uVar9 = in_EDX[3];
    uVar15 = in_EDX[4];
  }
  uVar10 = pf_app_udivdi3((ulonglong)uVar15 * (ulonglong)param_5,uVar9,0);
  if ((int)uVar10 < (int)param_6) {
    uVar9 = pf_app_udivdi3((ulonglong)uVar9 * (ulonglong)param_6,uVar15,0);
    if ((int)uVar9 < 1) {
      return;
    }
    uVar10 = param_6;
  }
  else {
    uVar9 = param_5;
  }
  iVar8 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU));
  iVar7 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  local_28 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * param_4 * 4 + 3;
  iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4;
  uVar15 = 0;
  do {
    uVar12 = uVar15 + (int)(uVar10 - param_6) / 2;
    lVar5 = (ulonglong)(uint)in_EDX[4] * (ulonglong)uVar12;
    iVar11 = pf_app_udivdi3((uint64_t)(uint32_t)((int)lVar5)|((uint64_t)(uint32_t)(((int)uVar12 >> 0x1f) * in_EDX[4] + (int)((ulonglong)lVar5 >> 0x20))<<32),uVar10,0);
    uVar12 = param_5;
    uVar16 = (int)(uVar9 - param_5) / 2;
    uVar19 = param_3;
    do {
      uVar17 = in_EDX[3];
      iVar13 = pf_app_udivdi3((uint64_t)(uint32_t)((int)((ulonglong)uVar17 * (ulonglong)uVar16))|((uint64_t)(uint32_t)((int)((ulonglong)uVar17 * (ulonglong)uVar16 >> 0x20) +
                            ((int)uVar16 >> 0x1f) * uVar17)<<32),uVar9,0);
      if (((int)uVar19 < iVar7 && -1 < (int)(uVar19 | param_4 + uVar15)) &&
          *(int *)(in_ECX + 0x340) != 0) {
        iVar13 = uVar17 * iVar11 + iVar13;
        uVar17 = (uint)*(byte *)(iVar14 + 3 + iVar13 * 4);
        if ((uVar17 != 0) && ((int)(param_4 + uVar15) < iVar8)) {
          uVar2 = *(undefined1 *)(iVar14 + iVar13 * 4);
          bVar3 = *(byte *)(iVar14 + 1 + iVar13 * 4);
          bVar4 = *(byte *)(iVar14 + 2 + iVar13 * 4);
          iVar13 = *(int *)(in_ECX + 0x340) + local_28;
          if (uVar17 == 0xff) {
            *(undefined1 *)(iVar13 + -3 + uVar19 * 4) = uVar2;
            *(byte *)(iVar13 + -2 + uVar19 * 4) = bVar3;
            *(byte *)(iVar13 + -1 + uVar19 * 4) = bVar4;
          }
          else {
            uVar18 = uVar17 ^ 0xff;
            *(char *)(iVar13 + -3 + uVar19 * 4) =
                 (char)(((CONCAT11(bVar4,uVar2) & 0xff) * uVar17 + 0x7f +
                        *(byte *)(iVar13 + -3 + uVar19 * 4) * uVar18) / 0xff);
            *(char *)(iVar13 + -2 + uVar19 * 4) =
                 (char)((ulonglong)
                        (bVar3 * uVar17 + 0x7f + *(byte *)(iVar13 + -2 + uVar19 * 4) * uVar18) *
                        0x1010102 >> 0x20);
            *(char *)(iVar13 + -1 + uVar19 * 4) =
                 (char)((ulonglong)
                        (bVar4 * uVar17 + 0x7f + *(byte *)(iVar13 + -1 + uVar19 * 4) * uVar18) *
                        0x1010102 >> 0x20);
          }
          *(undefined1 *)(iVar13 + uVar19 * 4) = 0xff;
        }
      }
      uVar19 = uVar19 + 1;
      uVar16 = uVar16 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar15 = uVar15 + 1;
    local_28 = local_28 + iVar1;
  } while (uVar15 != param_6);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006918
#undef local_28

#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100186a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100186a0(int in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  if ((in_EDX != 0) && (in_ECX != 0)) {
    uVar4 = *(uint *)(in_EDX + 0x52c2c);
    bVar3 = false;
    bVar8 = true;
    do {
      bVar2 = bVar8;
      bVar8 = uVar4 != 0;
      uVar4 = 0;
      if (bVar8) {
        uVar5 = 0;
        do {
          iVar6 = uVar5 * 0x370;
          uVar4 = *(uint *)(in_EDX + 0x42c + iVar6);
          if (bVar3 != (uVar4 == 7)) {
            iVar1 = in_EDX + 0x42c + iVar6;
            iVar7 = 0;
            if (*(char *)(iVar1 + 0x36c) == '\0') {
              iVar7 = *(int *)(in_EDX + 0x544b8);
            }
            iVar7 = (*(int *)(iVar1 + 8) + 0x48) - iVar7;
            if (((0x47 < iVar7 + *(int *)(in_EDX + 0x43c + iVar6)) &&
                (iVar7 < (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x16)) && (uVar4 < 8)) {
                    /* WARNING: Could not emulate address calculation at 0x100187fd */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(uVar4 * 4 + ((uintptr_t)pf_module_state+0x1419U)))();
              return;
            }
          }
          uVar5 = uVar5 + 1;
          uVar4 = *(uint *)(in_EDX + 0x52c2c);
        } while (uVar5 < uVar4);
      }
      bVar3 = true;
      bVar8 = false;
    } while (bVar2);
  }
  return;
}

#undef DAT_0181d100

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
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#define local_130 (*(byte *)(frame + 544))
#define local_12f (*(byte *)(frame + 545))
#define local_12e (*(byte *)(frame + 546))
#define local_12d (*(byte *)(frame + 547))
#define local_34 (*(void * *)(frame + 796))
#define local_30 (*(int *)(frame + 800))
#define local_1c (*(int *)(frame + 820))
#define local_18 (*(int *)(frame + 824))
#define local_14 (*(undefined4 *)(frame + 828))
#define local_334 (*(char (*)[256])(frame + 28))
#define local_234 (*(char (*)[256])(frame + 284))
#define local_134 (*(byte *)(frame + 540))
#define local_133 (*(byte *)(frame + 541))
#define local_132 (*(byte *)(frame + 542))
#define local_131 (*(byte *)(frame + 543))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018fe0
 */

void recovered_10018fe0(int in_ECX,int in_EDX,uint param_3,uint param_4)

{
  unsigned char frame[880] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;

  if (in_EDX == 0 || in_ECX == 0) {
    return;
  }
  if (*(char *)(in_EDX + 0x31c) == '\x01') {
    recovered_10016f20(in_ECX,0,0x48,param_3,param_4,*(uint *)(in_EDX + 800));
  }
  if (*(char *)(in_EDX + 0x31d) != '\x01') {
    return;
  }
  if (*(char *)(in_EDX + 0x32c) == '\0') {
    return;
  }
  local_18 = -1;
  local_1c = in_ECX;
  recovered_10007f40(in_EDX,(byte *)(in_EDX + 0x32c),(char *)&local_134);
  if (local_134 == 0) {
LAB_10019268:
    local_14 = 0;
  }
  else {
    if ((byte)(local_134 + 0xbf) < 0x1a) {
      local_134 = local_134 | 0x20;
    }
    if (local_134 != 0x68) goto LAB_10019268;
    if (local_133 == 0) {
code_r0x10019193:
      if (local_133 != 0) {
        if ((byte)(local_133 + 0xbf) < 0x1a) {
          local_133 = local_133 | 0x20;
        }
        if ((local_133 == 0x74) && (local_132 != 0)) {
          if ((byte)(local_132 + 0xbf) < 0x1a) {
            local_132 = local_132 | 0x20;
          }
          if ((local_132 == 0x74) && (local_131 != 0)) {
            if ((byte)(local_131 + 0xbf) < 0x1a) {
              local_131 = local_131 | 0x20;
            }
            if ((local_131 == 0x70) && (local_130 != 0)) {
              if ((byte)(local_130 + 0xbf) < 0x1a) {
                local_130 = local_130 | 0x20;
              }
              if ((local_130 == 0x73) && (local_12f != 0)) {
                if ((byte)(local_12f + 0xbf) < 0x1a) {
                  local_12f = local_12f | 0x20;
                }
                if ((local_12f == 0x3a) && (local_12e != 0)) {
                  if ((byte)(local_12e + 0xbf) < 0x1a) {
                    local_12e = local_12e | 0x20;
                  }
                  if ((local_12e == 0x2f) && (local_12d != 0)) {
                    if ((byte)(local_12d + 0xbf) < 0x1a) {
                      local_12d = local_12d | 0x20;
                    }
                    if (local_12d == 0x2f) goto LAB_10019150;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_10019268;
    }
    bVar5 = local_133;
    if ((byte)(local_133 + 0xbf) < 0x1a) {
      bVar5 = local_133 | 0x20;
    }
    if ((bVar5 != 0x74) || (local_132 == 0)) goto code_r0x10019193;
    bVar5 = local_132;
    if ((byte)(local_132 + 0xbf) < 0x1a) {
      bVar5 = local_132 | 0x20;
    }
    if ((bVar5 != 0x74) || (local_131 == 0)) goto code_r0x10019193;
    bVar5 = local_131;
    if ((byte)(local_131 + 0xbf) < 0x1a) {
      bVar5 = local_131 | 0x20;
    }
    if ((bVar5 != 0x70) || (local_130 == 0)) goto code_r0x10019193;
    bVar5 = local_130;
    if ((byte)(local_130 + 0xbf) < 0x1a) {
      bVar5 = local_130 | 0x20;
    }
    if ((bVar5 != 0x3a) || (local_12f == 0)) goto code_r0x10019193;
    bVar5 = local_12f;
    if ((byte)(local_12f + 0xbf) < 0x1a) {
      bVar5 = local_12f | 0x20;
    }
    if ((bVar5 != 0x2f) || (local_12e == 0)) goto code_r0x10019193;
    bVar5 = local_12e;
    if ((byte)(local_12e + 0xbf) < 0x1a) {
      bVar5 = local_12e | 0x20;
    }
    if (bVar5 != 0x2f) goto code_r0x10019193;
LAB_10019150:
    uVar2 = recovered_10015e10(&local_134,local_334);
    if ((char)uVar2 == '\0') {
      return;
    }
    iVar3 = snprintf((char *)&local_134,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_334);
    local_14 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  memset(&local_34,0,0x18);
  uVar2 = recovered_10009250((char *)&local_134,&local_18,local_234);
  if ((char)uVar2 == '\0') {
    return;
  }
  iVar3 = Ram00006800;
  if ((((iVar3 == 0x50414d57) && (iVar3 = Ram00006804, iVar3 != 0)) &&
      (uVar4 = Ram00006808, 0xb < uVar4)) && (uVar4 = Ram00006808, 0xe3 < uVar4)) {
    pcVar1 = (code *)UINT_000068e0;
    if (pcVar1 == (code *)0x0) goto LAB_100193bd;
    uVar4 = (*pcVar1)(local_18,local_234,&local_34);
  }
  else {
    iVar3 = Ram00006800;
    if (((iVar3 != 0x50414d57) || (iVar3 = Ram00006804, iVar3 == 0)) ||
       ((uVar4 = Ram00006808, uVar4 < 0xc ||
        ((uVar4 = Ram00006808, uVar4 < 0x5c ||
         (pcVar1 = (code *)UINT_00006858, pcVar1 == (code *)0x0)))))) goto LAB_100193bd;
    uVar4 = (*pcVar1)(local_234,&local_34);
  }
  if (uVar4 != 0) {
    recovered_10018390(local_1c,(int *)&local_34,0,0x48,param_3,param_4);
    if (((((local_34 != (void *)0x0 && local_30 == 0) && (iVar3 = Ram00006800, iVar3 == 0x50414d57))
         && (iVar3 = Ram00006804, iVar3 != 0)) &&
        ((uVar4 = Ram00006808, 0xb < uVar4 && (uVar4 = Ram00006808, 0x53 < uVar4)))) &&
       (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)) {
      (*pcVar1)(local_34);
    }
    memset(&local_34,0,0x18);
    return;
  }
LAB_100193bd:
  if ((char)local_14 != '\0') {
    recovered_100162e0(local_234);
    snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x25ccU));
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
#undef UINT_00006858
#undef UINT_000068e0
#undef local_130
#undef local_12f
#undef local_12e
#undef local_12d
#undef local_34
#undef local_30
#undef local_1c
#undef local_18
#undef local_14
#undef local_334
#undef local_234
#undef local_134
#undef local_133
#undef local_132
#undef local_131

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181d0fc
#define DAT_0181d0fc (*(uint8_t *)(0x181d0fcU))
#undef DAT_0181d100
#define DAT_0181d100 (*(uint8_t *)(0x181d100U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_28 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10019400(int in_ECX,int *in_EDX,int param_3,int param_4,uint param_5,uint param_6)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;

  if (in_EDX == (int *)0x0) {
    return;
  }
  if (in_EDX[1] == 0) {
    iVar15 = *in_EDX;
  }
  else {
    iVar15 = 0;
  }
  if (iVar15 == 0 || in_ECX == 0) {
    return;
  }
  uVar7 = in_EDX[3];
  if (uVar7 == 0) {
    return;
  }
  uVar13 = in_EDX[4];
  if (((int)param_6 < 1 || (int)param_5 < 1) || uVar13 == 0) {
    return;
  }
  if (*(uint *)(in_ECX + 0x57d4) != 0) {
    iVar5 = Ram00006800;
    if (((((iVar5 != 0x50414d57) || (iVar5 = Ram00006804, iVar5 == 0)) ||
         (uVar7 = Ram00006808, uVar7 < 0xc)) ||
        ((uVar7 = Ram00006808, uVar7 < 0x11c ||
         (pcVar6 = (code *)UINT_00006918, pcVar6 == (code *)0x0)))) ||
       (uVar7 = (*pcVar6)((void *)(in_ECX + 0x3d4),*(uint *)(in_ECX + 0x57d4)), uVar7 == 0)) {
      *(undefined1 *)(in_ECX + 0x57d8) = 0;
    }
    *(undefined4 *)(in_ECX + 0x57d4) = 0;
    uVar7 = in_EDX[3];
    uVar13 = in_EDX[4];
  }
  uVar8 = pf_app_udivdi3((ulonglong)uVar13 * (ulonglong)param_5,uVar7,0);
  uVar9 = param_5;
  if ((int)param_6 < (int)uVar8) {
    uVar9 = pf_app_udivdi3((ulonglong)uVar7 * (ulonglong)param_6,uVar13,0);
    uVar8 = param_6;
  }
  iVar5 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U));
  if ((0 < (int)uVar9) && (0 < (int)uVar8)) {
    iVar16 = (int)(param_5 - uVar9) / 2;
    iVar10 = (int)(param_6 - uVar8) / 2 + param_4;
    local_28 = iVar16 * 4 + (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * iVar10 * 4 + 3 + param_3 * 4;
    iVar11 = (*(uint32_t *)((uintptr_t)pf_module_state+0x295dU)) + -0x16;
    iVar1 = (*(uint32_t *)((uintptr_t)pf_module_state+0x2959U)) * 4;
    uVar7 = 0;
    do {
      iVar12 = pf_app_udivdi3((ulonglong)uVar7 * (ulonglong)(uint)in_EDX[4],uVar8,0);
      uVar13 = iVar10 + uVar7;
      if ((0x47 < (int)uVar13) && ((int)uVar13 < iVar11)) {
        uVar19 = 0;
        do {
          uVar18 = in_EDX[3];
          iVar14 = pf_app_udivdi3((ulonglong)uVar18 * (ulonglong)uVar19,uVar9,0);
          uVar17 = iVar16 + param_3 + uVar19;
          if (((int)uVar17 < iVar5 && -1 < (int)(uVar17 | uVar13)) && *(int *)(in_ECX + 0x340) != 0)
          {
            iVar14 = uVar18 * iVar12 + iVar14;
            uVar18 = (uint)*(byte *)(iVar15 + 3 + iVar14 * 4);
            if (uVar18 != 0) {
              bVar2 = *(byte *)(iVar15 + iVar14 * 4);
              bVar3 = *(byte *)(iVar15 + 1 + iVar14 * 4);
              bVar4 = *(byte *)(iVar15 + 2 + iVar14 * 4);
              iVar14 = *(int *)(in_ECX + 0x340) + local_28;
              if (uVar18 == 0xff) {
                *(byte *)(iVar14 + -3 + uVar19 * 4) = bVar2;
                *(byte *)(iVar14 + -2 + uVar19 * 4) = bVar3;
                *(byte *)(iVar14 + -1 + uVar19 * 4) = bVar4;
              }
              else {
                uVar17 = uVar18 ^ 0xff;
                *(char *)(iVar14 + -3 + uVar19 * 4) =
                     (char)((bVar2 * uVar18 + 0x7f + *(byte *)(iVar14 + -3 + uVar19 * 4) * uVar17) /
                           0xff);
                *(char *)(iVar14 + -2 + uVar19 * 4) =
                     (char)((ulonglong)
                            (bVar3 * uVar18 + 0x7f + *(byte *)(iVar14 + -2 + uVar19 * 4) * uVar17) *
                            0x1010102 >> 0x20);
                *(char *)(iVar14 + -1 + uVar19 * 4) =
                     (char)((ulonglong)
                            (bVar4 * uVar18 + 0x7f + *(byte *)(iVar14 + -1 + uVar19 * 4) * uVar17) *
                            0x1010102 >> 0x20);
              }
              *(undefined1 *)(iVar14 + uVar19 * 4) = 0xff;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar9 != uVar19);
      }
      uVar7 = uVar7 + 1;
      local_28 = local_28 + iVar1;
    } while ((int)uVar7 < (int)uVar8);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181d0fc
#undef DAT_0181d100
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006918
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
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#define local_50 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019700
 */

void recovered_10019700(int in_ECX)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  code *pcVar2;
  uint uVar3;
  ulong size;
  undefined4 uVar4;
  int iVar5;

  iVar5 = 0;
  if (((in_ECX != 0) && (*(uint *)(in_ECX + 0x205bac) != 0)) &&
     (*(uint *)(in_ECX + 0x205bb0) < *(uint *)(in_ECX + 0x205bac))) {
    iVar5 = in_ECX + 0x58e4 + *(uint *)(in_ECX + 0x205bb0) * 0x555cc;
  }
  uVar3 = *(byte *)(in_ECX + 0x57dc) ^ 1;
  *(char *)(in_ECX + 0x57dc) = (char)uVar3;
  snprintf(local_50,0x40,(char *)((uintptr_t)pf_module_state+0x26f0U),uVar3);
  iVar1 = Ram00006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
     ((uVar3 = Ram00006808, 0xb < uVar3 &&
      ((uVar3 = Ram00006808, 0x8f < uVar3 && (pcVar2 = (code *)UINT_0000688c, pcVar2 != (code *)0x0)
       ))))) {
    (*pcVar2)((char *)((uintptr_t)pf_module_state+0x1a4cU));
  }
  size = strlen(local_50);
  iVar1 = Ram00006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram00006804, iVar1 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0x3b < uVar3 && (pcVar2 = (code *)UINT_00006838, pcVar2 != (code *)0x0))
     )) {
    (*pcVar2)((char *)((uintptr_t)pf_module_state+0x14c3U),local_50,size);
  }
  if (iVar5 != 0) {
    uVar4 = ((uintptr_t)pf_module_state+0x26c4U);
    if (*(char *)(in_ECX + 0x57dc) == '\0') {
      uVar4 = ((uintptr_t)pf_module_state+0x26daU);
    }
    snprintf((char *)(iVar5 + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),uVar4);
  }
  *(undefined1 *)(in_ECX + 0x57da) = 1;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006838
#undef UINT_0000688c
#undef local_50

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
#undef Ram00006800
#define Ram00006800 (*(uint32_t *)(0x6800U))
#undef Ram00006804
#define Ram00006804 (*(uint32_t *)(0x6804U))
#undef Ram00006808
#define Ram00006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019830
 */

void recovered_10019830(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  bool bVar2;
  ulong textSize;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *text;

  iVar4 = 0;
  bVar2 = true;
  if ((in_ECX != 0) && (*(uint *)(in_ECX + 0x205bac) != 0)) {
    iVar5 = 0;
    if (*(uint *)(in_ECX + 0x205bac) <= *(uint *)(in_ECX + 0x205bb0)) goto LAB_10019896;
    iVar5 = *(uint *)(in_ECX + 0x205bb0) * 0x555cc;
    iVar4 = in_ECX + 0x58e4 + iVar5;
    iVar5 = *(int *)(in_ECX + 0x59d98 + iVar5);
    bVar2 = false;
    if ((-1 < iVar5) && (iVar5 < *(int *)(iVar4 + 0x52c2c))) {
      bVar2 = false;
      if (*(int *)(iVar4 + 0x42c + iVar5 * 0x370) == 4) {
        iVar5 = iVar4 + 0x42c + iVar5 * 0x370;
        goto LAB_10019896;
      }
    }
  }
  iVar5 = 0;
LAB_10019896:
  if (*(char *)(in_ECX + 0x57db) == '\x01') {
    text = (char *)(in_ECX + 0x57de);
  }
  else if (iVar5 == 0) {
    text = &(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U));
    if (!bVar2) {
      text = (char *)(iVar4 + 1);
    }
  }
  else {
    text = (char *)(iVar5 + 0x254);
  }
  textSize = strlen(text);
  iVar5 = Ram00006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram00006804, iVar5 != 0)) &&
      (uVar3 = Ram00006808, 0xb < uVar3)) &&
     ((uVar3 = Ram00006808, 0x183 < uVar3 && (pcVar1 = (code *)UINT_00006980, pcVar1 != (code *)0x0)
      ))) {
    uVar3 = (*pcVar1)(text,textSize);
    if (uVar3 != 0) {
      if (!bVar2) {
        snprintf((char *)(iVar4 + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x26faU));
      }
      *(undefined1 *)(in_ECX + 0x57da) = 1;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181bc65
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_00006980

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019960
 */

void recovered_10019960(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;

  iVar3 = 0;
  bVar1 = true;
  if (((in_ECX == 0) || (*(uint *)(in_ECX + 0x205bac) == 0)) ||
     (*(uint *)(in_ECX + 0x205bac) <= *(uint *)(in_ECX + 0x205bb0))) {
LAB_100199c2:
    iVar6 = 0;
    cVar2 = *(char *)(in_ECX + 0x57db);
  }
  else {
    iVar6 = *(uint *)(in_ECX + 0x205bb0) * 0x555cc;
    iVar3 = in_ECX + 0x58e4 + iVar6;
    iVar6 = *(int *)(in_ECX + 0x59d98 + iVar6);
    bVar1 = false;
    if ((iVar6 < 0) || (*(int *)(iVar3 + 0x52c2c) <= iVar6)) goto LAB_100199c2;
    bVar1 = false;
    if (*(int *)(iVar3 + 0x42c + iVar6 * 0x370) != 4) goto LAB_100199c2;
    iVar6 = iVar3 + 0x42c + iVar6 * 0x370;
    cVar2 = *(char *)(in_ECX + 0x57db);
  }
  if (cVar2 != '\x01') {
    if (iVar6 != 0) {
      uVar4 = recovered_10019a60((char *)(iVar6 + 0x254),0x80);
      cVar2 = (char)uVar4;
      goto joined_r0x100199f9;
    }
    *(undefined1 *)(in_ECX + 0x57db) = 1;
    if (!bVar1) {
      *(undefined4 *)(iVar3 + 0x544b4) = 0xffffffff;
    }
    *(undefined1 *)(in_ECX + 0x57de) = 0;
    *(undefined4 *)(in_ECX + 0x58e0) = 0;
  }
  uVar4 = recovered_10019a60((char *)(in_ECX + 0x57de),0x100);
  uVar5 = strlen((char *)(in_ECX + 0x57de));
  *(ulong *)(in_ECX + 0x58e0) = uVar5;
  cVar2 = (char)uVar4;
joined_r0x100199f9:
  if (cVar2 != '\0') {
    *(undefined1 *)(in_ECX + 0x57da) = 1;
  }
  return;
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
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006984
#define UINT_00006984 (*(uint *)(0x6984U))
#undef UINT_00006988
#define UINT_00006988 (*(uint *)(0x6988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019a60
 */

undefined4 recovered_10019a60(char *in_ECX,int in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  char *outText;
  uint uVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong size;

  iVar2 = Ram00006800;
  uVar9 = 0;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
      (uVar6 = Ram00006808, 0xb < uVar6)) &&
     ((uVar6 = Ram00006808, 0x18b < uVar6 && (pcVar3 = (code *)UINT_00006988, pcVar3 != (code *)0x0)
      ))) {
    uVar9 = (*pcVar3)();
  }
  if (((in_ECX != (char *)0x0) && (uVar5 = strlen(in_ECX), uVar9 != 0)) &&
     (uVar5 < in_EDX - 1U)) {
    if (~uVar5 + in_EDX <= uVar9) {
      uVar9 = ~uVar5 + in_EDX;
    }
    iVar2 = Ram00006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
        (uVar6 = Ram00006808, 0xb < uVar6)) &&
       ((uVar6 = Ram00006808, 0x4f < uVar6 &&
        (pcVar3 = (code *)UINT_0000684c, pcVar3 != (code *)0x0)))) {
      size = uVar9 + 1;
      outText = (*pcVar3)(size);
      if (outText != (char *)0x0) {
        iVar2 = Ram00006800;
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
           ((uVar9 = Ram00006808, 0xb < uVar9 && (uVar9 = Ram00006808, 0x187 < uVar9)))) {
          pcVar3 = (code *)UINT_00006984;
          if ((pcVar3 == (code *)0x0) || (uVar9 = (*pcVar3)(outText,size), uVar9 == 0)) {
            uVar8 = 0;
          }
          else {
            uVar6 = 1;
            uVar8 = 0;
            do {
              bVar1 = outText[uVar6 - 1];
              bVar4 = 0x20;
              if ((bVar1 & 0xfb) != 9) {
                bVar4 = bVar1;
              }
              bVar7 = 0x20;
              if (bVar1 != 10) {
                bVar7 = bVar4;
              }
              if ((byte)(bVar7 - 0x20) < 0x5f) {
                in_ECX[uVar5] = bVar7;
                uVar5 = uVar5 + 1;
                uVar8 = 1;
              }
            } while ((uVar6 < uVar9) && (uVar6 = uVar6 + 1, uVar5 < in_EDX - 1U));
          }
        }
        else {
          if (size != 0) {
            *outText = '\0';
          }
          uVar8 = 0;
        }
        in_ECX[uVar5] = '\0';
        iVar2 = Ram00006800;
        if (iVar2 != 0x50414d57) {
          return uVar8;
        }
        iVar2 = Ram00006804;
        if (iVar2 == 0) {
          return uVar8;
        }
        uVar9 = Ram00006808;
        if (uVar9 < 0xc) {
          return uVar8;
        }
        uVar9 = Ram00006808;
        if (uVar9 < 0x54) {
          return uVar8;
        }
        pcVar3 = (code *)UINT_00006850;
        if (pcVar3 == (code *)0x0) {
          return uVar8;
        }
        (*pcVar3)(outText);
        return uVar8;
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019c50
 */

void recovered_10019c50(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *dst;
  ulong uVar1;
  int iVar2;

  if (((in_ECX != 0) && (*(uint *)(in_ECX + 0x205bac) != 0)) &&
     (*(uint *)(in_ECX + 0x205bb0) < *(uint *)(in_ECX + 0x205bac))) {
    iVar2 = *(uint *)(in_ECX + 0x205bb0) * 0x555cc;
    dst = (byte *)(in_ECX + 0x57de);
    recovered_10006920(in_ECX,in_ECX + 0x58e4 + iVar2,dst);
    snprintf((char *)dst,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_ECX + 0x58e5 + iVar2);
    uVar1 = strlen((char *)dst);
    *(ulong *)(in_ECX + 0x58e0) = uVar1;
    *(undefined2 *)(in_ECX + 0x57da) = 1;
  }
  return;
}


#undef DAT_0181cee9
#define DAT_0181cee9 (*(uint8_t *)(0x181cee9U))
#undef DAT_0181ceea
#define DAT_0181ceea (*(uint8_t *)(0x181ceeaU))
#undef DAT_0181ceeb
#define DAT_0181ceeb (*(uint8_t *)(0x181ceebU))
#undef DAT_0181ceec
#define DAT_0181ceec (*(uint8_t *)(0x181ceecU))
#undef DAT_0181ceed
#define DAT_0181ceed (*(uint8_t *)(0x181ceedU))
#define local_14 (*(int *)(frame + 924))
#define local_39c (*(char (*)[256])(frame + 20))
#define local_29c (*(byte (*)[256])(frame + 276))
#define local_19c (*(char (*)[384])(frame + 532))
#define local_1c (*(byte * *)(frame + 916))
#define local_18 (*(int *)(frame + 920))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019cd0
 */

void recovered_10019cd0(int in_ECX,int in_EDX_00,int param_3)

{
  unsigned char frame[976] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int in_ECX_00;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  int in_EDX;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;

  if (param_3 < 0) {
    return;
  }
  if (*(int *)(in_EDX_00 + 0x544b0) <= param_3) {
    return;
  }
  pbVar9 = (byte *)(in_EDX_00 + 0x52c30 + param_3 * 0x188);
  if (*(char *)(in_EDX_00 + 0x52c30 + param_3 * 0x188) == '\0') {
    snprintf(local_39c,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX_00 + 1);
  }
  else {
    recovered_10007f40(in_EDX_00,pbVar9,local_39c);
  }
  local_1c = pbVar9;
  local_18 = in_ECX;
  local_14 = in_EDX_00;
  if (pbVar9[0x108] != 0) {
    pbVar9 = pbVar9 + 0x108;
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x272aU));
    if ((uVar2 != 0) && (*pbVar9 != 0)) {
      pbVar11 = pbVar9;
      do {
        uVar7 = 0;
        while (bVar8 = pbVar11[uVar7], bVar8 != 0) {
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          bVar6 = *(byte *)(uVar7 + ((uintptr_t)pf_module_state+0x272aU));
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar8 != bVar6) break;
          uVar7 = uVar7 + 1;
          if (uVar2 == uVar7) goto LAB_10019fab;
        }
        if (uVar2 == uVar7) goto LAB_10019fab;
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
      } while (*pbVar1 != 0);
    }
    uVar2 = strlen((char *)((uintptr_t)pf_module_state+0x2737U));
    in_EDX_00 = local_14;
    if ((uVar2 != 0) && (*pbVar9 != 0)) {
      pbVar11 = pbVar9;
      do {
        uVar7 = 0;
        while (bVar8 = pbVar11[uVar7], bVar8 != 0) {
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          bVar6 = *(byte *)(uVar7 + ((uintptr_t)pf_module_state+0x2737U));
          if ((byte)(bVar6 + 0xbf) < 0x1a) {
            bVar6 = bVar6 | 0x20;
          }
          if (bVar8 != bVar6) break;
          uVar7 = uVar7 + 1;
          if (uVar2 == uVar7) goto LAB_10019fab;
        }
        if (uVar2 == uVar7) {
LAB_10019fab:
          recovered_1001a100(local_18,local_14,(char *)pbVar9);
          return;
        }
        pbVar1 = pbVar11 + 1;
        pbVar11 = pbVar11 + 1;
      } while (*pbVar1 != 0);
    }
    uVar3 = recovered_1001a100(local_18,local_14,(char *)pbVar9);
    if ((char)uVar3 != '\0') {
      return;
    }
  }
  local_19c[0] = '\0';
  uVar4 = *(uint *)(in_EDX_00 + 0x52c2c);
  if (uVar4 != 0) {
    piVar12 = (int *)(local_14 + 0x780);
    uVar10 = 0;
    do {
      if ((*piVar12 == param_3) &&
         (((piVar12[-0xd5] == 8 || (piVar12[-0xd5] == 4)) && ((char)piVar12[-0x60] != '\0')))) {
        if ((local_19c[0] != '\0') && (uVar2 = strlen(local_19c), uVar2 < 0x17f)) {
          (local_19c + uVar2)[0] = '&';
          (local_19c + uVar2)[1] = '\0';
        }
        recovered_1001a590(local_19c,(byte *)(piVar12 + -0x60));
        uVar2 = strlen(local_19c);
        if (uVar2 < 0x17f) {
          (local_19c + uVar2)[0] = '=';
          (local_19c + uVar2)[1] = '\0';
        }
        recovered_1001a590(local_19c,(byte *)(piVar12 + -0x40));
        uVar4 = *(uint *)(local_14 + 0x52c2c);
      }
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 0xdc;
    } while (uVar10 < uVar4);
  }
  in_EDX = local_14;
  in_ECX_00 = local_18;
  bVar8 = local_1c[0x100];
  if (bVar8 == 0) {
    pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x2746U));
LAB_10019fe2:
    if (*pcVar5 == '\0') {
      snprintf((char *)(local_14 + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x274bU));
      goto LAB_1001a0e2;
    }
  }
  else {
    if ((byte)(bVar8 + 0xbf) < 0x1a) {
      bVar8 = bVar8 | 0x20;
    }
    if (bVar8 == 0x70) {
      bVar8 = local_1c[0x101];
      if (bVar8 == 0) {
        pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x2747U));
      }
      else {
        if ((byte)(bVar8 + 0xbf) < 0x1a) {
          bVar8 = bVar8 | 0x20;
        }
        if (bVar8 != 0x6f) goto LAB_10019feb;
        bVar8 = local_1c[0x102];
        if (bVar8 == 0) {
          pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x2748U));
        }
        else {
          if ((byte)(bVar8 + 0xbf) < 0x1a) {
            bVar8 = bVar8 | 0x20;
          }
          if (bVar8 != 0x73) goto LAB_10019feb;
          bVar8 = local_1c[0x103];
          if (bVar8 == 0) {
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x2749U));
          }
          else {
            if ((byte)(bVar8 + 0xbf) < 0x1a) {
              bVar8 = bVar8 | 0x20;
            }
            if ((bVar8 != 0x74) || (local_1c[0x104] != 0)) goto LAB_10019feb;
            pcVar5 = &(*(uint8_t *)((uintptr_t)pf_module_state+0x274aU));
          }
        }
      }
      goto LAB_10019fe2;
    }
  }
LAB_10019feb:
  snprintf((char *)local_29c,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),local_39c);
  if (local_19c[0] != '\0') {
    pcVar5 = strchr((char *)local_29c,0x3f);
    uVar2 = strlen((char *)local_29c);
    if (uVar2 < 0xff) {
      bVar8 = 0x3f;
      if (pcVar5 != (char *)0x0) {
        bVar8 = 0x26;
      }
      local_29c[uVar2] = bVar8;
      local_29c[uVar2 + 1] = 0;
    }
    uVar2 = strlen((char *)local_29c);
    in_EDX = local_14;
    if (uVar2 < 0xff) {
      snprintf((char *)(local_29c + uVar2),0x100 - uVar2,(char *)((uintptr_t)pf_module_state+0x154dU),local_19c);
    }
  }
  recovered_10006920(in_ECX_00,in_EDX,local_29c);
  snprintf((char *)(in_ECX_00 + 0x57de),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX + 1);
  uVar2 = strlen((char *)(in_ECX_00 + 0x57de));
  *(ulong *)(in_ECX_00 + 0x58e0) = uVar2;
LAB_1001a0e2:
  *(undefined1 *)(in_ECX_00 + 0x57da) = 1;
  return;
}

#undef DAT_0181cee9
#undef DAT_0181ceea
#undef DAT_0181ceeb
#undef DAT_0181ceec
#undef DAT_0181ceed
#undef local_14
#undef local_39c
#undef local_29c
#undef local_19c
#undef local_1c
#undef local_18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_0181bc65
#define DAT_0181bc65 (*(uint8_t *)(0x181bc65U))
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
#define local_2e8 (*(byte (*)[256])(frame + 24))
#define local_1e8 (*(byte (*)[256])(frame + 280))
#define local_e8 (*(char (*)[192])(frame + 536))
#define local_28 (*(byte * *)(frame + 728))
#define local_24 (*(uint *)(frame + 732))
#define local_20 (*(char * *)(frame + 736))
#define local_1c (*(uint *)(frame + 740))
#define local_18 (*(int *)(frame + 744))
#define local_14 (*(char * *)(frame + 748))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a100
 */

undefined4 recovered_1001a100(int in_ECX,int in_EDX,char *param_3)

{
  unsigned char frame[800] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ulong uVar4;
  bool bVar5;
  undefined4 extraout_ECX = 0;
  byte *pbVar6;
  uint uVar7;
  int iVar8;

  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    uVar2 = recovered_10003100(in_EDX);
    if (((char)uVar2 == '\0') ||
       (((((iVar8 = Ram00006800, iVar8 != 0x50414d57 || (iVar8 = Ram00006804, iVar8 == 0)) ||
          (uVar7 = Ram00006808, uVar7 < 0xc)) ||
         ((uVar7 = Ram00006808, uVar7 < 0x50 ||
          (pcVar1 = (code *)UINT_0000684c, pcVar1 == (code *)0x0)))) ||
        (local_14 = (*pcVar1)(0x60000), local_14 == (char *)0x0)))) {
      snprintf((char *)(in_EDX + 0x141),0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),((uintptr_t)pf_module_state+0x1661U));
      *(undefined1 *)(in_ECX + 0x57da) = 1;
    }
    else {
      local_24 = (uint)*(byte *)(in_ECX + 0x57dc) * 2 + 1;
      local_e8[0] = '\0';
      local_20 = (char *)(in_EDX + 0x141);
      local_28 = (byte *)(in_EDX + 0x680);
      local_1c = 0;
      local_18 = in_ECX;
      while( true ) {
        uVar7 = 0;
        if (*(int *)(in_EDX + 0x52c2c) == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = false;
          pbVar6 = local_28;
          do {
            if (*(int *)(pbVar6 + -0x254) == 4) {
              local_1e8[0] = 0;
              *local_14 = '\0';
              local_e8[0] = '\0';
              if (pbVar6[-0x40] == 0) {
                pbVar3 = pbVar6 + -0x80;
              }
              else {
                pbVar3 = pbVar6 + -0x40;
              }
              pbVar3 = winter_js_execute_browser_event(*(byte **)(in_EDX + 0x318),(byte *)param_3,(char *)pbVar3,pbVar6
                                    ,(char *)local_1e8,0x100,local_14,0x60000,local_e8,0xc0,local_24
                                   );
              if ((((uint)pbVar3 & 0x10) != 0) && (local_1e8[0] != 0)) {
                recovered_10007f40(in_EDX,local_1e8,(char *)local_2e8);
                iVar8 = local_18;
                goto LAB_1001a3c9;
              }
              if ((((uint)pbVar3 & 1) != 0) && (*local_14 != '\0')) {
                if (*(char **)(in_EDX + 0x30c) != (char *)0x0) {
                  snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x154dU),local_14);
                }
                iVar8 = local_18;
                recovered_10003320(local_18,in_EDX);
                recovered_100047d0(in_EDX);
                *(undefined1 *)(iVar8 + 0x57da) = 1;
                goto LAB_1001a487;
              }
              bVar5 = true;
              if (local_e8[0] != '\0') {
                snprintf(local_20,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),local_e8);
                bVar5 = true;
              }
            }
            uVar7 = uVar7 + 1;
            pbVar6 = pbVar6 + 0x370;
          } while (uVar7 < *(uint *)(in_EDX + 0x52c2c));
        }
        iVar8 = local_18;
        if ((local_1c & 1) != 0 || bVar5) break;
        local_1e8[0] = 0;
        *local_14 = '\0';
        local_e8[0] = '\0';
        pbVar6 = winter_js_execute_browser_event(*(byte **)(in_EDX + 0x318),(byte *)param_3,&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U)),&(*(uint8_t *)((uintptr_t)pf_module_state+0x14c2U))
                              ,(char *)local_1e8,0x100,local_14,0x60000,local_e8,0xc0,local_24);
        iVar8 = local_18;
        if ((((uint)pbVar6 & 0x10) != 0) && (local_1e8[0] != 0)) {
          recovered_10007f40(in_EDX,local_1e8,(char *)local_2e8);
LAB_1001a3c9:
          recovered_10006920(iVar8,in_EDX,local_2e8);
          snprintf((char *)(iVar8 + 0x57de),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX + 1);
          uVar4 = strlen((char *)(iVar8 + 0x57de));
          *(ulong *)(iVar8 + 0x58e0) = uVar4;
          *(undefined1 *)(iVar8 + 0x57da) = 1;
          iVar8 = Ram00006800;
          if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
              (uVar7 = Ram00006808, 0xb < uVar7)) &&
             ((uVar7 = Ram00006808, 0x53 < uVar7 &&
              (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))) {
            (*pcVar1)(local_14);
          }
          return CONCAT31((int3)((uint)(in_EDX + 1) >> 8),1);
        }
        local_1c = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
        if ((((uint)pbVar6 & 1) != 0) && (*local_14 != '\0')) {
          if (*(char **)(in_EDX + 0x30c) != (char *)0x0) {
            snprintf(*(char **)(in_EDX + 0x30c),0x50000,(char *)((uintptr_t)pf_module_state+0x154dU),local_14);
          }
          recovered_10003320(iVar8,in_EDX);
          recovered_100047d0(in_EDX);
          *(undefined1 *)(iVar8 + 0x57da) = 1;
LAB_1001a487:
          iVar8 = Ram00006800;
          uVar2 = CONCAT31((int3)((uint)in_EDX >> 8),1);
          if (iVar8 != 0x50414d57) {
            return uVar2;
          }
          iVar8 = Ram00006804;
          if (iVar8 == 0) {
            return uVar2;
          }
          uVar7 = Ram00006808;
          if (uVar7 < 0xc) {
            return uVar2;
          }
          uVar7 = Ram00006808;
          if (uVar7 < 0x54) {
            return uVar2;
          }
          pcVar1 = (code *)UINT_00006850;
          if (pcVar1 == (code *)0x0) {
            return uVar2;
          }
          (*pcVar1)(local_14);
          return uVar2;
        }
      }
      if (local_e8[0] != '\0') {
        snprintf(local_20,0xc0,(char *)((uintptr_t)pf_module_state+0x154dU),local_e8);
      }
      *(undefined1 *)(iVar8 + 0x57da) = 1;
      iVar8 = Ram00006800;
      if ((((iVar8 == 0x50414d57) && (iVar8 = Ram00006804, iVar8 != 0)) &&
          (uVar7 = Ram00006808, 0xb < uVar7)) &&
         ((uVar7 = Ram00006808, 0x53 < uVar7 &&
          (pcVar1 = (code *)UINT_00006850, pcVar1 != (code *)0x0)))) {
        (*pcVar1)(local_14);
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_0181bc65
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000684c
#undef UINT_00006850
#undef local_2e8
#undef local_1e8
#undef local_e8
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a590
 */

void recovered_1001a590(char *in_ECX,byte *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;

  if (in_EDX != (byte *)0x0 && in_ECX != (char *)0x0) {
    bVar5 = *in_EDX;
    while (bVar5 != 0) {
      if (((byte)(bVar5 - 0x30U) < 10) || ((byte)((bVar5 & 0xdf) + 0xbf) < 0x1a)) {
LAB_1001a620:
        uVar4 = strlen(in_ECX);
        if (uVar4 < 0x17f) {
LAB_1001a5c0:
          in_ECX[uVar4] = bVar5;
          in_ECX[uVar4 + 1] = '\0';
        }
      }
      else {
        uVar3 = (uint)bVar5;
        if (0x5e < uVar3) {
          if ((uVar3 == 0x7e) || (uVar3 == 0x5f)) goto LAB_1001a620;
LAB_1001a631:
          uVar4 = strlen(in_ECX);
          if (uVar4 < 0x17f) {
            (in_ECX + uVar4)[0] = '%';
            (in_ECX + uVar4)[1] = '\0';
          }
          cVar2 = *(char *)((*in_EDX >> 4) + ((uintptr_t)pf_module_state+0x2779U));
          uVar4 = strlen(in_ECX);
          if (uVar4 < 0x17f) {
            in_ECX[uVar4] = cVar2;
            in_ECX[uVar4 + 1] = '\0';
          }
          bVar5 = *(byte *)((*in_EDX & 0xf) + ((uintptr_t)pf_module_state+0x2779U));
          uVar4 = strlen(in_ECX);
          if (0x17e < uVar4) goto LAB_1001a5c8;
          goto LAB_1001a5c0;
        }
        if (uVar3 - 0x2d < 2) goto LAB_1001a620;
        if (uVar3 != 0x20) goto LAB_1001a631;
        uVar4 = strlen(in_ECX);
        if (uVar4 < 0x17f) {
          bVar5 = 0x2b;
          goto LAB_1001a5c0;
        }
      }
LAB_1001a5c8:
      pbVar1 = in_EDX + 1;
      in_EDX = in_EDX + 1;
      bVar5 = *pbVar1;
    }
  }
  return;
}


#define local_110 (*(byte (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a6a0
 */

void recovered_1001a6a0(int in_ECX,int in_EDX_00)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  int in_EDX;
  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (((in_ECX != 0) && (*(uint *)(in_ECX + 0x205bac) != 0)) &&
     (*(uint *)(in_ECX + 0x205bb0) < *(uint *)(in_ECX + 0x205bac))) {
    if (in_EDX_00 != 0) {
      in_EDX = in_ECX + 0x58e4 + *(uint *)(in_ECX + 0x205bb0) * 0x555cc;
      uVar1 = *(uint *)(in_EDX + 0x554c0);
      if (in_EDX_00 < 0) {
        if (uVar1 == 0) {
          return;
        }
        if (*(int *)(in_EDX + 0x554c4) == 0) {
          return;
        }
        uVar2 = *(int *)(in_EDX + 0x554c4) - 1;
      }
      else {
        if (uVar1 == 0) {
          return;
        }
        uVar2 = *(int *)(in_EDX + 0x554c4) + 1;
        if (uVar1 <= uVar2) {
          return;
        }
      }
      *(uint *)(in_EDX + 0x554c4) = uVar2;
      snprintf((char *)local_110,0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX + 0x544c0 + uVar2 * 0x100)
      ;
      *(undefined1 *)(in_EDX + 0x555c8) = 1;
      recovered_10006920(in_ECX,in_EDX,local_110);
      *(undefined1 *)(in_EDX + 0x555c8) = 0;
      snprintf((char *)(in_ECX + 0x57de),0x100,(char *)((uintptr_t)pf_module_state+0x154dU),in_EDX + 1);
      uVar3 = strlen((char *)(in_ECX + 0x57de));
      *(ulong *)(in_ECX + 0x58e0) = uVar3;
      *(undefined2 *)(in_ECX + 0x57da) = 1;
    }
  }
  return;
}

#undef local_110
