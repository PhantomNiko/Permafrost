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
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(uint *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
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
#undef str_1001e130
#define str_1001e130 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x223U)))
#undef str_1001e149
#define str_1001e149 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#undef str_1001e16a
#define str_1001e16a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_1001e172
#define str_1001e172 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x265U)))
#undef str_1001e19c
#define str_1001e19c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_1001e1a8
#define str_1001e1a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#undef str_1001e1be
#define str_1001e1be (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2b1U)))
#undef str_1001ecbd
#define str_1001ecbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_1001ef18
#define str_1001ef18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100bU)))
#undef str_1001efd0
#define str_1001efd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10c3U)))
#undef str_1001f31e
#define str_1001f31e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1411U)))
#undef str_1001f328
#define str_1001f328 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141bU)))
#undef str_1001f342
#define str_1001f342 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1435U)))
#undef str_1001f350
#define str_1001f350 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1443U)))
#undef str_1001f364
#define str_1001f364 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1457U)))
#undef str_1001f386
#define str_1001f386 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1479U)))
#undef str_1001f38c
#define str_1001f38c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x147fU)))
#undef str_1001f39c
#define str_1001f39c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148fU)))
#undef str_1001f481
#define str_1001f481 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1574U)))
#undef str_1001f4ac
#define str_1001f4ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159fU)))
#undef str_1001f4d0
#define str_1001f4d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15c3U)))
#undef str_1001f4e2
#define str_1001f4e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15d5U)))
#define local_9f8 (*(char (*)[1024])(frame + 24))
#define local_5f8 (*(byte (*)[20])(frame + 1048))
#define local_5e4 (*(undefined4 *)(frame + 1068))
#define local_5d0 (*(int *)(frame + 1088))
#define local_5c4 (*(int *)(frame + 1100))
#define local_5c0 (*(int *)(frame + 1104))
#define local_5bc (*(int *)(frame + 1108))
#define local_5b8 (*(byte *)(frame + 1112))
#define local_378 (*(byte (*)[8])(frame + 1688))
#define local_370 (*(uint *)(frame + 1696))
#define local_368 (*(int *)(frame + 1704))
#define local_364 (*(int *)(frame + 1708))
#define local_360 (*(uint *)(frame + 1712))
#define local_278 (*(int (*)[24])(frame + 1944))
#define local_218 (*(undefined4 *)(frame + 2040))
#define local_214 (*(undefined4 *)(frame + 2044))
#define local_118 (*(uint *)(frame + 2296))
#define local_114 (*(uint *)(frame + 2300))
#define local_78 (*(int * *)(frame + 2456))
#define local_70 (*(int * *)(frame + 2464))
#define local_64 (*(uint *)(frame + 2476))
#define local_60 (*(uint *)(frame + 2480))
#define local_58 (*(int * *)(frame + 2488))
#define local_50 (*(int * *)(frame + 2496))
#define local_48 (*(char * *)(frame + 2504))
#define local_3c (*(int *)(frame + 2516))
#define local_38 (*(int * *)(frame + 2520))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000600
 */

int recovered_10000600(void)

{
  unsigned char frame[2608] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uchar uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *dst;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  code *pcVar11;
  long lVar12;
  ulonglong vararg0;
  byte *pbVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  uint uVar17;
  char *dst_00;
  byte *vararg1;
  long lVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  ulong uVar23;
  int *src;
  bool bVar24;
  uint128 auVar25;

  iVar5 = Ram0000000000006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x4f < uVar4)) {
    uVar4 = UINT_0000684c;
    if (((code *)(ulong)uVar4 != (code *)0x0) &&
       (dst = (*(code *)(ulong)uVar4)(0x2061f0), dst != (int *)0x0)) {
      memset(dst,0,0x2061f0);
      pf_app_window_spec(local_5f8,str_1001e16a,DAT_100201f0,DAT_100201f4);
      local_5e4 = 0xffffff;
      local_5b8 = local_5b8 | 1;
      uVar4 = terror_ui_window_open(dst,local_5f8);
      if (uVar4 != 0) {
        *(long *)(dst + 0xd4) = *(long *)(dst + 0xc);
        if (*(long *)(dst + 0xc) == 0) {
          terror_ui_window_close(dst);
        }
        else {
          DAT_100201f0 = dst[1];
          DAT_100201f4 = dst[2];
          terror_ui_window_set_menus(dst,str_1001e172,str_1001e19c,&DAT_1001f468);
          memset(dst + 0xd6,0,0x90);
          iVar5 = Ram0000000000006800;
          if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
             ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
              (uVar4 = Ram0000000000006808, 0x117 < uVar4)))) {
            uVar4 = UINT_00006914;
            if (((code *)(ulong)uVar4 != (code *)0x0) &&
               (uVar4 = (*(code *)(ulong)uVar4)(dst + 0xd6), uVar4 != 0)) {
              if ((*(byte *)(dst + 0xd7) & 1) == 0) {
                bVar3 = 0;
              }
              else {
                bVar3 = *(byte *)(dst + 0xd8) >> 1 & 1;
              }
              *(byte *)(dst + 0x15fb) = bVar3;
            }
          }
          *(undefined1 *)(dst + 0x15fc) = 1;
          memset(&local_218,0,0xc);
          iVar5 = Ram0000000000006800;
          if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
              (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
             (uVar4 = Ram0000000000006808, 0x37 < uVar4)) {
            uVar4 = UINT_00006834;
            if (((code *)(ulong)uVar4 != (code *)0x0) &&
               (uVar4 = (*(code *)(ulong)uVar4)(str_1001e1a8,&local_218),
               (6 < local_214 && local_218 != 0) && uVar4 != 0)) {
              uVar23 = 0x7f;
              if (local_214 < 0x7f) {
                uVar23 = (ulong)local_214;
              }
              memcpy(local_9f8,(void *)(ulong)local_218,uVar23);
              local_9f8[uVar23] = '\0';
              iVar5 = strncmp(local_9f8,str_1001e1be,7);
              if (iVar5 == 0) {
                *(undefined1 *)(dst + 0x15fc) = 0;
              }
            }
          }
          *(undefined2 *)((long)dst + 0x57ed) = 0x101;
          dst[0x81714] = 0;
          recovered_100026e0((ulong)dst,&DAT_1001f468);
          if (dst[0x8170e] != 0) {
            *(undefined1 *)((long)dst + 0x57ef) = 1;
            if (*(char *)((long)dst + 0x57ed) == '\x01') {
              local_58 = dst + 0x163e;
              local_48 = (char *)((long)dst + 0x57f2);
LAB_10000960:
              uVar4 = dst[1];
              uVar20 = dst[2];
              memset(local_5f8,0,0x278);
              uVar6 = terror_ui_window_query(dst,local_5f8);
              if (uVar6 != 0) {
                dst[0x81712] = local_5d0;
                uVar2 = terror_ui_window_info_requests_close(local_5f8);
                if ((uVar2 == '\0') &&
                   (uVar6 = terror_ui_window_sync_buffer(dst,local_5f8), piVar22 = local_58, uVar6 != 0)) {
                  *(undefined8 *)(dst + 0xd4) = *(undefined8 *)(dst + 0xc);
                  DAT_100201f0 = dst[1];
                  DAT_100201f4 = dst[2];
                  if ((DAT_100201f0 != uVar4) || (DAT_100201f4 != uVar20)) {
                    if ((dst[0x8170e] != 0) &&
                       (uVar23 = (ulong)(uint)dst[0x8170f], (uint)dst[0x8170f] < (uint)dst[0x8170e])
                       ) {
                      recovered_100042b0((long)dst,(long)(local_58 + uVar23 * 0x15578));
                      iVar5 = piVar22[uVar23 * 0x15578 + 0x15133];
                      iVar10 = (piVar22[uVar23 * 0x15578 + 0x15134] - DAT_100201f4) + 0x5e;
                      if (iVar10 < -0x13) {
                        iVar10 = -0x14;
                      }
                      iVar21 = iVar10 + 0x14;
                      if (iVar5 < iVar10 + 0x14) {
                        iVar21 = iVar5;
                      }
                      if (iVar5 < 0) {
                        iVar21 = 0;
                      }
                      piVar22[uVar23 * 0x15578 + 0x15133] = iVar21;
                    }
                    *(undefined1 *)((long)dst + 0x57ee) = 1;
                  }
                  if ((local_5c4 == 0) || (local_5c4 == dst[0x81710]))
                  goto switchD_10000aa6_default;
                  dst[0x81710] = local_5c4;
                  if (local_5c0 == 2) {
                    if (local_5bc == 1) {
                      recovered_1001cfa0((long)dst);
                    }
                    else if (local_5bc == 0) {
                      recovered_1001ce40((long)dst);
                    }
                    goto switchD_10000aa6_default;
                  }
                  if (local_5c0 != 1) goto switchD_10000aa6_default;
                  switch((uintptr_t)(local_5bc)) {
                  case 0:
                    if ((dst[0x8170e] != 0) && (uVar4 = dst[0x8170f], uVar4 < (uint)dst[0x8170e])) {
                      iVar5 = Ram0000000000006800;
                      if ((iVar5 == 0x50414d57) &&
                         (((iVar5 = Ram0000000000006804, iVar5 != 0 &&
                           (uVar20 = Ram0000000000006808, 0xb < uVar20)) &&
                          (uVar20 = Ram0000000000006808, 0x8f < uVar20)))) {
                        uVar20 = UINT_0000688c;
                        if ((code *)(ulong)uVar20 != (code *)0x0) {
                          (*(code *)(ulong)uVar20)(str_1001f31e);
                        }
                      }
                      iVar5 = Ram0000000000006800;
                      if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                         ((uVar20 = Ram0000000000006808, 0xb < uVar20 &&
                          (uVar20 = Ram0000000000006808, 0x8f < uVar20)))) {
                        uVar20 = UINT_0000688c;
                        if ((code *)(ulong)uVar20 != (code *)0x0) {
                          (*(code *)(ulong)uVar20)(str_1001ecbd);
                        }
                      }
                      piVar22 = piVar22 + (ulong)uVar4 * 0x15578;
                      uVar4 = 0;
                      do {
                        iVar5 = dst[0x81714];
                        dst[0x81714] = iVar5 + 1U;
                        pf_varargs_1001df25__4_((char *)local_278,0x60,str_1001f328,iVar5 + 1U);
                        iVar5 = Ram0000000000006800;
                        if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                           ((uVar20 = Ram0000000000006808, 0xb < uVar20 &&
                            (uVar20 = Ram0000000000006808, 0x8f < uVar20)))) {
                          uVar20 = UINT_0000688c;
                          if (((code *)(ulong)uVar20 != (code *)0x0) &&
                             (uVar20 = (*(code *)(ulong)uVar20)((char *)local_278), uVar20 != 0))
                          goto LAB_10000bed;
                        }
                        if (0x3e6 < uVar4) goto LAB_10000bed;
                        uVar4 = uVar4 + 1;
                      } while( true );
                    }
                    break;
                  case 1:
                    recovered_100026e0((ulong)dst,&DAT_1001f468);
                    *(undefined1 *)((long)dst + 0x57ef) = 1;
                    break;
                  case 2:
                    if (((uint)dst[0x8170e] < 2) || ((uint)dst[0x8170e] <= (uint)dst[0x8170f]))
                    break;
                    recovered_10007bf0((long)(piVar22 + (ulong)(uint)dst[0x8170f] * 0x15578));
                    uVar4 = dst[0x8170e];
                    uVar20 = dst[0x8170f];
                    if (uVar20 + 1 < uVar4) {
                      uVar23 = (ulong)(uVar20 + 1);
                      src = piVar22 + uVar23 * 0x15578;
                      do {
                        memcpy(piVar22 + (ulong)uVar20 * 0x15578,src,0x555e0);
                        uVar23 = uVar23 + 1;
                        uVar4 = dst[0x8170e];
                        uVar20 = uVar20 + 1;
                        src = src + 0x15578;
                      } while (uVar23 < uVar4);
                    }
                    memset(piVar22 + (ulong)(uVar4 - 1) * 0x15578,0,0x555e0);
                    pcVar9 = local_48;
                    iVar5 = dst[0x8170e];
                    uVar20 = dst[0x8170f];
                    uVar4 = iVar5 - 1;
                    dst[0x8170e] = uVar4;
                    if (uVar20 < uVar4) {
LAB_10000db4:
                      if (uVar20 < uVar4) {
                        pf_varargs_1001df25__8_
                                  (local_48,0x100,&DAT_1001e232,
                                   (long)piVar22 + (ulong)uVar20 * 0x555e0 + 1);
                        uVar23 = strlen(pcVar9);
                        dst[0x163d] = (int)uVar23;
                      }
                    }
                    else {
                      uVar20 = iVar5 - 2;
                      dst[0x8170f] = uVar20;
                      if (uVar4 != 0) goto LAB_10000db4;
                    }
                    goto LAB_10000e3c;
                  case 3:
                    recovered_1001ccf0((long)dst);
                  }
                  goto switchD_10000aa6_default;
                }
              }
            }
LAB_1000214e:
            bVar3 = *(byte *)(dst + 0x8178d);
            if (bVar3 == 1) {
              do {
                if (*(char *)((long)dst + 0x205e35) != '\0') break;
                iVar5 = Ram0000000000006800;
                if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                   ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                    (uVar4 = Ram0000000000006808, 0x9f < uVar4)))) {
                  uVar4 = UINT_0000689c;
                  if ((code *)(ulong)uVar4 != (code *)0x0) {
                    (*(code *)(ulong)uVar4)();
                    bVar3 = *(byte *)(dst + 0x8178d);
                  }
                }
              } while ((bVar3 & 1) != 0);
            }
            recovered_100023c0((long)dst);
            if (*dst != 0) {
              terror_ui_window_close(dst);
            }
            if (dst[0x8170e] != 0) {
              piVar22 = dst + 0x163e;
              uVar23 = 0;
              do {
                recovered_10007bf0((long)piVar22);
                uVar23 = uVar23 + 1;
                piVar22 = piVar22 + 0x15578;
              } while (uVar23 < (uint)dst[0x8170e]);
            }
            memset(dst,0,0x2061f0);
            iVar5 = Ram0000000000006800;
            if (iVar5 != 0x50414d57) {
              return 1;
            }
            iVar5 = Ram0000000000006804;
            if (iVar5 == 0) {
              return 1;
            }
            uVar4 = Ram0000000000006808;
            if (uVar4 < 0xc) {
              return 1;
            }
            uVar4 = Ram0000000000006808;
            if (uVar4 < 0x54) {
              return 1;
            }
            uVar4 = UINT_00006850;
            if ((code *)(ulong)uVar4 == (code *)0x0) {
              return 1;
            }
            (*(code *)(ulong)uVar4)(dst);
            return 1;
          }
          terror_ui_window_close(dst);
          memset(dst,0,0x2061f0);
        }
      }
      iVar5 = Ram0000000000006800;
      if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
          (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x53 < uVar4)
         ) {
        uVar4 = UINT_00006850;
        if ((code *)(ulong)uVar4 != (code *)0x0) {
          (*(code *)(ulong)uVar4)(dst);
        }
      }
      iVar5 = Ram0000000000006800;
      if (iVar5 != 0x50414d57) {
        return 0;
      }
      iVar5 = Ram0000000000006804;
      if (iVar5 == 0) {
        return 0;
      }
      uVar4 = Ram0000000000006808;
      if (uVar4 < 0xc) {
        return 0;
      }
      uVar4 = Ram0000000000006808;
      if (uVar4 < 0x2c) {
        return 0;
      }
      uVar4 = UINT_00006828;
      pcVar11 = (code *)(ulong)uVar4;
      if (pcVar11 == (code *)0x0) {
        return 0;
      }
      pcVar9 = str_1001e149;
      goto override_prt_100007d7_f3c0dc0;
    }
  }
  iVar5 = Ram0000000000006800;
  if (iVar5 != 0x50414d57) {
    return 0;
  }
  iVar5 = Ram0000000000006804;
  if (iVar5 == 0) {
    return 0;
  }
  uVar4 = Ram0000000000006808;
  if (uVar4 < 0xc) {
    return 0;
  }
  uVar4 = Ram0000000000006808;
  if (uVar4 < 0x2c) {
    return 0;
  }
  uVar4 = UINT_00006828;
  pcVar11 = (code *)(ulong)uVar4;
  if (pcVar11 == (code *)0x0) {
    return 0;
  }
  pcVar9 = str_1001e130;
override_prt_100007d7_f3c0dc0:
  (*pcVar11)(pcVar9);
  return 0;
LAB_10000bed:
  pf_varargs_1001df25__8_((char *)&local_118,0xa0,str_1001f342,(ulonglong)local_278);
  pcVar9 = *(char **)(piVar22 + 0xc4);
  uVar23 = strlen(pcVar9);
  iVar5 = Ram0000000000006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x3b < uVar4)) {
    uVar4 = UINT_00006838;
    if (((code *)(ulong)uVar4 == (code *)0x0) ||
       (uVar4 = (*(code *)(ulong)uVar4)((char *)&local_118,pcVar9,(uint)uVar23), uVar4 == 0))
    goto LAB_10000e18;
    pf_varargs_1001df25__8__8_(local_9f8,0x400,str_1001f364,(long)piVar22 + 1,(long)piVar22 + 0x101)
    ;
    uVar4 = piVar22[0x14b10];
    if (uVar4 != 0) {
      uVar23 = 0;
      do {
        if ((piVar22[uVar23 * 0xdc + 0x110] == 3) && ((char)piVar22[uVar23 * 0xdc + 0x145] != '\0'))
        {
          local_3c = -1;
          recovered_10008100((long)piVar22,(byte *)(piVar22 + uVar23 * 0xdc + 0x145),
                             (char *)&local_218);
          memset(&local_64,0,0xc);
          uVar7 = recovered_100097d0((char *)&local_218,&local_3c,local_378);
          if ((char)uVar7 != '\0') {
            iVar5 = Ram0000000000006800;
            if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
               (uVar4 = Ram0000000000006808, 0xcb < uVar4)) {
              uVar4 = UINT_000068c8;
              if ((code *)(ulong)uVar4 != (code *)0x0) {
                uVar4 = (*(code *)(ulong)uVar4)(local_3c,(char *)local_378,&local_64);
LAB_10001331:
                if ((uVar4 != 0) && (local_64 != 0)) {
                  pbVar13 = local_378;
                  vararg1 = local_378;
                  do {
                    while( true ) {
                      pbVar13 = pbVar13 + 1;
                      bVar3 = pbVar13[-1];
                      if ((bVar3 != 0x2f) && (bVar3 != 0x5c)) break;
                      vararg1 = pbVar13;
                    }
                  } while (bVar3 != 0);
                  pf_varargs_1001df25__8__8_
                            ((char *)&local_118,0xa0,str_1001f386,(ulonglong)local_278,
                             (ulonglong)vararg1);
                  iVar5 = Ram0000000000006800;
                  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                      (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
                     (uVar4 = Ram0000000000006808, 0x3b < uVar4)) {
                    uVar4 = UINT_00006838;
                    if (((code *)(ulong)uVar4 != (code *)0x0) &&
                       (uVar4 = (*(code *)(ulong)uVar4)
                                          ((char *)&local_118,(void *)(ulong)local_64,local_60),
                       uVar4 != 0)) {
                      uVar8 = strlen(local_9f8);
                      if (uVar8 < 0x3ff) {
                        pf_varargs_1001df25__8_
                                  (local_9f8 + uVar8,0x400 - uVar8,&DAT_1001e232,
                                   (ulonglong)&local_118);
                      }
                      uVar8 = strlen(local_9f8);
                      if (uVar8 < 0x3ff) {
                        (local_9f8 + uVar8)[0] = '\n';
                        (local_9f8 + uVar8)[1] = '\0';
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar5 = Ram0000000000006800;
              if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                 ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                  (uVar4 = Ram0000000000006808, 0x37 < uVar4)))) {
                uVar4 = UINT_00006834;
                if ((code *)(ulong)uVar4 != (code *)0x0) {
                  uVar4 = (*(code *)(ulong)uVar4)((char *)local_378,&local_64);
                  goto LAB_10001331;
                }
              }
            }
          }
          uVar4 = piVar22[0x14b10];
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < uVar4);
    }
    pf_varargs_1001df25__8_((char *)&local_118,0xa0,str_1001f38c,(ulonglong)local_278);
    uVar23 = strlen(local_9f8);
    iVar5 = Ram0000000000006800;
    if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
       ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0x3b < uVar4))))
    {
      uVar4 = UINT_00006838;
      if ((code *)(ulong)uVar4 != (code *)0x0) {
        (*(code *)(ulong)uVar4)((char *)&local_118,local_9f8,(uint)uVar23);
      }
    }
    pcVar15 = str_1001f39c;
    pcVar9 = (char *)local_278;
  }
  else {
LAB_10000e18:
    pcVar15 = &DAT_1001e232;
    pcVar9 = str_1001f350;
  }
  pf_varargs_1001df25__8_((char *)((long)piVar22 + 0x141),0xc0,pcVar15,(ulonglong)pcVar9);
LAB_10000e3c:
  *(undefined1 *)((long)dst + 0x57ee) = 1;
switchD_10000aa6_default:
  recovered_100023c0((long)dst);
  if (((dst[0x8170e] != 0) && ((uint)dst[0x8170f] < (uint)dst[0x8170e])) &&
     ((dst[0x81712] & 6U) == 2)) {
    local_38 = local_58 + (ulong)(uint)dst[0x8170f] * 0x15578;
    local_50 = local_38 + 0x110;
    iVar5 = 0x20;
    do {
      iVar10 = Ram0000000000006800;
      if (((iVar10 != 0x50414d57) || (iVar10 = Ram0000000000006804, iVar10 == 0)) ||
         ((uVar4 = Ram0000000000006808, uVar4 < 0xc || (uVar4 = Ram0000000000006808, uVar4 < 0x30)))
         ) break;
      uVar4 = UINT_0000682c;
      if (((code *)(ulong)uVar4 == (code *)0x0) || (uVar4 = (*(code *)(ulong)uVar4)(), uVar4 == 0))
      break;
      uVar20 = uVar4 >> 8 & 0xff;
      if ((uVar4 & 0x800000ff) != 0x80000000 || uVar20 != 0) {
        uVar6 = uVar4 & 0xff;
        if ((uVar4 & 0x40000) == 0) {
          if ((uVar4 & 0x20000) == 0) {
            cVar19 = (char)uVar4;
            if (*(char *)((long)dst + 0x57ef) == '\x01') {
              if (uVar6 - 0x20 < 0x5f) {
                iVar10 = dst[0x163d];
                if ((long)iVar10 < 0xff) {
                  dst[0x163d] = iVar10 + 1;
                  *(char *)((long)dst + (long)iVar10 + 0x57f2) = cVar19;
                  *(undefined1 *)((long)dst + (long)dst[0x163d] + 0x57f2) = 0;
LAB_1000113f:
                  *(undefined1 *)((long)dst + 0x57ee) = 1;
                }
              }
              else if (((uVar20 == 0xe) || (cVar19 == '\x7f')) || (uVar6 == 8)) {
                if (0 < dst[0x163d]) {
                  uVar4 = dst[0x163d] - 1;
                  dst[0x163d] = uVar4;
                  *(undefined1 *)((long)dst + (ulong)uVar4 + 0x57f2) = 0;
                  goto LAB_1000113f;
                }
              }
              else if (((uVar20 == 0x1c) || (cVar19 == '\r')) || (uVar6 == 10)) {
                recovered_1001d300((long)dst);
              }
              else if (uVar6 == 0x1b || uVar20 == 1) {
                *(undefined2 *)((long)dst + 0x57ee) = 1;
              }
            }
            else {
              lVar12 = (long)local_38[0x15132];
              if (((lVar12 < 0) || (local_38[0x14b10] <= local_38[0x15132])) ||
                 (local_50[lVar12 * 0xdc] != 4)) {
                if ((uVar6 == 0x1b) || (uVar20 == 1)) {
                  *(undefined2 *)((long)dst + 0x57ed) = 0x100;
                  break;
                }
                uVar6 = local_38[0x15133];
                uVar20 = uVar6;
                switch((uintptr_t)(uVar4 >> 8 & 0xff)) {
                case 0x47:
                  uVar20 = 0;
                  break;
                case 0x48:
                  uVar20 = uVar6 - 0x1c;
                  break;
                case 0x49:
                  uVar20 = (uVar6 - DAT_100201f4) + 0x86;
                  break;
                case 0x4f:
                  uVar20 = local_38[0x15134];
                  break;
                case 0x50:
                  uVar20 = uVar6 + 0x1c;
                  break;
                case 0x51:
                  uVar20 = (DAT_100201f4 + uVar6) - 0x86;
                }
                iVar10 = (local_38[0x15134] - DAT_100201f4) + 0x5e;
                if (iVar10 < -0x13) {
                  iVar10 = -0x14;
                }
                uVar4 = iVar10 + 0x14U;
                if (uVar20 < iVar10 + 0x14U) {
                  uVar4 = uVar20;
                }
                if ((int)uVar20 < 0) {
                  uVar4 = 0;
                }
                local_38[0x15133] = uVar4;
                if (uVar4 != uVar6) goto LAB_1000113f;
              }
              else {
                local_78 = local_50 + lVar12 * 0xdc;
                local_70 = local_78 + 0x95;
                uVar23 = strlen((char *)local_70);
                if (uVar6 - 0x20 < 0x5f) {
                  if (uVar23 + 1 < 0x80) {
                    *(char *)((long)local_70 + uVar23) = cVar19;
                    *(char *)((long)local_70 + uVar23 + 1) = '\0';
                    goto LAB_1000113f;
                  }
                }
                else if (((uVar20 == 0xe) || (cVar19 == '\x7f')) || (uVar6 == 8)) {
                  if (uVar23 != 0) {
                    *(char *)((uVar23 - 1) + (long)local_70) = '\0';
                    goto LAB_1000113f;
                  }
                }
                else if (((uVar20 == 0x1c) || (cVar19 == '\r')) || (uVar6 == 10)) {
                  recovered_1001d390((long)dst,(long)local_38,local_78[0xd5]);
                }
                else if (uVar6 == 0x1b || uVar20 == 1) {
                  local_38[0x15132] = -1;
                  goto LAB_1000113f;
                }
              }
            }
          }
        }
        else if (((uVar4 & 0xbf) == 3 || uVar6 == 99) || uVar20 == 0x2e) {
          recovered_1001ce40((long)dst);
        }
        else if (((uVar4 & 0xbf) == 0x16 || uVar6 == 0x76) || uVar20 == 0x2f) {
          recovered_1001cfa0((long)dst);
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((dst[0x81712] & 6U) != 2) goto LAB_100019b0;
  memset(local_378,0,0x1c);
  uVar6 = terror_ui_window_pointer_state(dst,local_378);
  uVar20 = local_360;
  uVar4 = local_370;
  if ((((uVar6 == 0) || ((local_378[0] & 2) == 0)) || (local_368 == dst[0x81711])) ||
     ((local_370 & 3) == 0)) goto LAB_100019b0;
  dst[0x81711] = local_368;
  uVar1 = DAT_100201f4;
  uVar6 = dst[0x8170e];
  if ((uVar6 == 0) || (uVar17 = dst[0x8170f], uVar6 <= uVar17)) goto LAB_100019b0;
  lVar12 = (ulong)uVar17 * 0x555e0;
  piVar22 = local_58 + (ulong)uVar17 * 0x15578;
  if ((local_370 & 2) == 0) {
    if (local_360 - 9 < 0x1a && local_364 - 10U < 0x1a) {
      recovered_1001dde0((long)dst,-1);
      goto LAB_100019b0;
    }
    if (local_364 - 0x28U < 0x1a && local_360 - 9 < 0x1a) {
      recovered_1001dde0((long)dst,1);
      goto LAB_100019b0;
    }
    if (((0x22 < local_360) || (local_364 < 0x4a)) ||
       (((int)local_360 < 9 || ((int)(DAT_100201f0 - 0xb0) <= local_364)))) {
      if ((((local_360 < 0x23) && (8 < (int)local_360)) && ((int)(DAT_100201f0 - 0xa6) <= local_364)
          ) && (local_364 < (int)(DAT_100201f0 - 0x78))) {
        recovered_1001d300((long)dst);
        goto LAB_100019b0;
      }
      if (((local_360 < 0x23) && (8 < (int)local_360)) &&
         (((int)(DAT_100201f0 - 0x70) <= local_364 && (local_364 < (int)(DAT_100201f0 - 8))))) {
        recovered_1001ccf0((long)dst);
        goto LAB_100019b0;
      }
      goto LAB_10001512;
    }
    *(undefined1 *)((long)dst + 0x57ef) = 1;
    piVar22[0x15132] = -1;
  }
  else {
LAB_10001512:
    uVar17 = 0;
    lVar16 = -0x58f9;
    iVar5 = 0x8c;
    do {
      if (((local_360 < 0x47) && (0x2e < (int)local_360)) &&
         ((iVar5 + -0x84 <= local_364 && (local_364 < iVar5)))) {
        dst[0x8170f] = uVar17;
        *(undefined1 *)((long)dst + 0x57ef) = 0;
        vararg0 = (long)dst - lVar16;
        goto LAB_1000157e;
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + -0x555e0;
      iVar5 = iVar5 + 0x88;
    } while (uVar6 != uVar17);
    local_38 = piVar22;
    if ((local_370 & 2) == 0) {
      if ((((uVar6 < 6) && (local_360 < 0x47)) && (0x30 < (int)local_360)) &&
         (((int)(uVar6 * 0x88 + 8) <= local_364 && (local_364 < (int)(uVar6 * 0x88 + 0x20))))) {
        recovered_100026e0((ulong)dst,&DAT_1001f468);
        *(undefined1 *)((long)dst + 0x57ef) = 1;
        goto LAB_100019b0;
      }
      uVar6 = local_364 - 8;
      if ((int)local_360 < (int)(DAT_100201f4 - 0x2e) &&
          (uVar6 < 0xc && (int)(DAT_100201f4 - 0x3c) <= (int)local_360)) {
        iVar5 = piVar22[0x15133];
        iVar10 = (piVar22[0x15134] - DAT_100201f4) + 0x5e;
        if (iVar10 < -0x13) {
          iVar10 = -0x14;
        }
        iVar21 = iVar10 + 0x14;
        if (iVar5 + -0x1c < iVar10 + 0x14) {
          iVar21 = iVar5 + -0x1c;
        }
        bVar24 = SBORROW4(iVar5,0x1c);
        iVar5 = iVar5 + -0x1c;
      }
      else {
        if ((int)(DAT_100201f4 - 0x1e) <= (int)local_360 ||
            ((int)local_360 < (int)(DAT_100201f4 - 0x2c) || 0xb < uVar6)) {
          if ((int)local_360 < 0x4e || 0xb < uVar6) goto LAB_100015d7;
          iVar5 = DAT_100201f4 - 0x3e;
          if ((int)DAT_100201f4 < 0x9e) {
            iVar5 = 0x60;
          }
          if ((int)local_360 < iVar5) {
            auVar25 = recovered_1001abb0((long)piVar22);
            if ((int)uVar20 < PF_PART4(auVar25, 4)) {
              iVar5 = local_38[0x15133] -
                      ((int)((uVar1 - ((int)(uVar1 - 0x5e) >> 0x1f)) + -0x5e) >> 1);
            }
            else if (PF_PART4(auVar25, 4) + PF_PART4(auVar25, 12) < (int)uVar20) {
              iVar5 = ((int)((uVar1 - ((int)(uVar1 - 0x5e) >> 0x1f)) + -0x5e) >> 1) +
                      local_38[0x15133];
            }
            else {
              iVar5 = local_38[0x15133];
            }
            iVar10 = (local_38[0x15134] - uVar1) + 0x5e;
            if (iVar10 < -0x13) {
              iVar10 = -0x14;
            }
            iVar21 = iVar10 + 0x14;
            if (iVar5 < iVar10 + 0x14) {
              iVar21 = iVar5;
            }
            if (iVar5 < 0) {
              iVar21 = 0;
            }
            local_38[0x15133] = iVar21;
            goto LAB_100019a9;
          }
          goto LAB_100015e8;
        }
        iVar5 = piVar22[0x15133];
        iVar10 = (piVar22[0x15134] - DAT_100201f4) + 0x5e;
        if (iVar10 < -0x13) {
          iVar10 = -0x14;
        }
        iVar21 = iVar10 + 0x14;
        if (iVar5 + 0x1c < iVar10 + 0x14) {
          iVar21 = iVar5 + 0x1c;
        }
        bVar24 = SBORROW4(iVar5,-0x1c);
        iVar5 = iVar5 + 0x1c;
      }
      if (bVar24 != iVar5 < 0) {
        iVar21 = 0;
      }
      piVar22[0x15133] = iVar21;
    }
    else {
LAB_100015d7:
      if (0x47 < (int)local_360) {
LAB_100015e8:
        if ((int)local_360 < (int)(DAT_100201f4 - 0x16)) {
          uVar20 = piVar22[0x14b10];
          uVar23 = (ulong)uVar20;
          if (uVar23 != 0) {
            local_50 = (int *)(uVar23 - 1);
            lVar18 = 1 - uVar23;
            lVar14 = uVar23 * 0x370 + lVar12 + 0x59c8;
            lVar12 = uVar23 * 0x370 + lVar12;
            lVar16 = -0x5c9c - lVar12;
            lVar12 = -0x5a9c - lVar12;
LAB_1000167a:
            uVar20 = uVar20 - 1;
            iVar5 = *(int *)((long)dst + lVar14);
            if ((iVar5 - 7U < 2) || (iVar10 = *(int *)((long)dst + lVar14 + 4), local_364 < iVar10))
            goto LAB_10001656;
            iVar21 = piVar22[0x15133];
            if (*(char *)((long)dst + lVar14 + 0x36c) != '\0') {
              iVar21 = 0;
            }
            if (iVar10 + *(int *)((long)dst + lVar14 + 0xc) <= local_364) goto LAB_10001656;
            iVar21 = iVar21 + (local_360 - 0x48);
            iVar10 = *(int *)((long)dst + lVar14 + 8);
            if ((iVar21 < iVar10) || (iVar10 + *(int *)((long)dst + lVar14 + 0x10) <= iVar21))
            goto LAB_10001656;
            *(undefined1 *)((long)dst + 0x57ef) = 0;
            if (iVar5 == 4) {
              if ((local_370 & 2) != 0) goto LAB_10001801;
              if (local_50 <= (int *)-lVar18 && -(long)local_50 != lVar18) {
                uVar20 = 0xffffffff;
              }
              piVar22[0x15132] = uVar20;
              goto LAB_100019a9;
            }
            if (iVar5 != 2) {
              if (((local_370 & 2) != 0) || (iVar5 != 5)) goto LAB_10001801;
              piVar22[0x15132] = -1;
              if (*(char *)((long)dst + lVar14 + 0x2d4) == '\0') {
                recovered_1001d390((long)dst,(long)piVar22,*(uint *)((long)dst + lVar14 + 0x354));
              }
              else {
                recovered_1001d840((long)dst,(long)piVar22,(char *)((long)dst - lVar16));
              }
              goto LAB_100019b0;
            }
            piVar22[0x15132] = -1;
            if (*(char *)((long)dst + lVar14 + 0xd4) == '\0') goto LAB_100019b0;
            cVar19 = *(char *)((long)dst + lVar14 + 0x36d);
            recovered_10008100((long)piVar22,(byte *)((long)dst - lVar12),(char *)&local_218);
            piVar22 = local_38;
            if (cVar19 == '\0') {
              if ((uVar4 & 2) == 0) {
                recovered_100068b0((ulong)dst,(long)local_38,(byte *)&local_218);
                vararg0 = (long)piVar22 + 1;
LAB_1000157e:
                pcVar9 = local_48;
                pf_varargs_1001df25__8_(local_48,0x100,&DAT_1001e232,vararg0);
                uVar23 = strlen(pcVar9);
                dst[0x163d] = (int)uVar23;
                goto LAB_100019a9;
              }
              recovered_100026e0((ulong)dst,(byte *)&local_218);
              pcVar9 = local_48;
              if ((dst[0x8170e] != 0) && ((uint)dst[0x8170f] < (uint)dst[0x8170e])) {
                pf_varargs_1001df25__8_
                          (local_48,0x100,&DAT_1001e232,
                           (long)local_58 + (ulong)(uint)dst[0x8170f] * 0x555e0 + 1);
                uVar23 = strlen(pcVar9);
                dst[0x163d] = (int)uVar23;
              }
              goto LAB_100019b0;
            }
            local_278[0] = -1;
            uVar7 = recovered_100097d0((char *)&local_218,local_278,local_5f8);
            if ((char)uVar7 != '\0') {
              memset(&local_118,0,0xc);
              iVar5 = Ram0000000000006800;
              if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                  (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
                 (uVar4 = Ram0000000000006808, 0xcb < uVar4)) {
                uVar4 = UINT_000068c8;
                if ((code *)(ulong)uVar4 != (code *)0x0) {
                  uVar4 = (*(code *)(ulong)uVar4)(local_278[0],(char *)local_5f8,&local_118);
LAB_10001fd0:
                  if ((uVar4 != 0) && (local_118 != 0)) {
                    iVar5 = Ram0000000000006800;
                    if ((iVar5 == 0x50414d57) &&
                       (((iVar5 = Ram0000000000006804, iVar5 != 0 &&
                         (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
                        (uVar4 = Ram0000000000006808, 0x8f < uVar4)))) {
                      uVar4 = UINT_0000688c;
                      if ((code *)(ulong)uVar4 != (code *)0x0) {
                        (*(code *)(ulong)uVar4)(str_1001ecbd);
                      }
                    }
                    pbVar13 = local_5f8;
                    pcVar9 = (char *)local_5f8;
                    do {
                      while( true ) {
                        pbVar13 = pbVar13 + 1;
                        bVar3 = pbVar13[-1];
                        if ((bVar3 != 0x2f) && (bVar3 != 0x5c)) break;
                        pcVar9 = (char *)pbVar13;
                      }
                    } while (bVar3 != 0);
                    pbVar13 = (byte *)str_1001ef18;
                    if ((byte *)pcVar9 != (byte *)0x0) {
                      if (*pcVar9 == 0) {
                        pcVar9 = str_1001ef18;
                      }
                      pbVar13 = (byte *)pcVar9;
                    }
                    pf_varargs_1001df25__8_(local_9f8,0x140,str_1001efd0,(ulonglong)pbVar13);
                    iVar5 = Ram0000000000006800;
                    if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                       ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                        (uVar4 = Ram0000000000006808, 0x3b < uVar4)))) {
                      uVar4 = UINT_00006838;
                      if (((code *)(ulong)uVar4 == (code *)0x0) ||
                         (uVar4 = (*(code *)(ulong)uVar4)
                                            (local_9f8,(void *)(ulong)local_118,local_114),
                         uVar4 == 0)) goto LAB_1000212e;
                      dst_00 = (char *)((long)local_38 + 0x141);
                      pcVar15 = str_1001f4d0;
                      pcVar9 = local_9f8;
                    }
                    else {
LAB_1000212e:
                      dst_00 = (char *)((long)local_38 + 0x141);
                      pcVar15 = &DAT_1001e232;
                      pcVar9 = str_1001f4e2;
                    }
LAB_10002122:
                    pf_varargs_1001df25__8_(dst_00,0xc0,pcVar15,(ulonglong)pcVar9);
                    goto LAB_100019a9;
                  }
                }
              }
              else {
                iVar5 = Ram0000000000006800;
                if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
                   ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                    (uVar4 = Ram0000000000006808, 0x37 < uVar4)))) {
                  uVar4 = UINT_00006834;
                  if ((code *)(ulong)uVar4 != (code *)0x0) {
                    uVar4 = (*(code *)(ulong)uVar4)((char *)local_5f8,&local_118);
                    goto LAB_10001fd0;
                  }
                }
              }
              dst_00 = (char *)((long)local_38 + 0x141);
              pcVar15 = &DAT_1001e232;
              pcVar9 = str_1001f4ac;
              goto LAB_10002122;
            }
            if ((byte)local_218 != 0) {
              bVar3 = (byte)local_218 | 0x20;
              if (0x19 < (byte)((byte)local_218 + 0xbf)) {
                bVar3 = (byte)local_218;
              }
              if ((bVar3 == 0x68) && (PF_PART1(local_218, 1) != 0)) {
                bVar3 = PF_PART1(local_218, 1) | 0x20;
                if (0x19 < (byte)(PF_PART1(local_218, 1) + 0xbf)) {
                  bVar3 = PF_PART1(local_218, 1);
                }
                if ((bVar3 == 0x74) && (PF_PART1(local_218, 2) != 0)) {
                  bVar3 = PF_PART1(local_218, 2) | 0x20;
                  if (0x19 < (byte)(PF_PART1(local_218, 2) + 0xbf)) {
                    bVar3 = PF_PART1(local_218, 2);
                  }
                  if ((bVar3 == 0x74) && (PF_PART1(local_218, 3) != 0)) {
                    bVar3 = PF_PART1(local_218, 3) | 0x20;
                    if (0x19 < (byte)(PF_PART1(local_218, 3) + 0xbf)) {
                      bVar3 = PF_PART1(local_218, 3);
                    }
                    if ((bVar3 == 0x70) && ((byte)local_214 != 0)) {
                      bVar3 = (byte)local_214 | 0x20;
                      if (0x19 < (byte)((byte)local_214 + 0xbf)) {
                        bVar3 = (byte)local_214;
                      }
                      if (bVar3 == 0x73) {
                        if (PF_PART1(local_214, 1) != 0) {
                          bVar3 = PF_PART1(local_214, 1) | 0x20;
                          if (0x19 < (byte)(PF_PART1(local_214, 1) + 0xbf)) {
                            bVar3 = PF_PART1(local_214, 1);
                          }
                          if ((bVar3 == 0x3a) && (PF_PART1(local_214, 2) != 0)) {
                            bVar3 = PF_PART1(local_214, 2) | 0x20;
                            if (0x19 < (byte)(PF_PART1(local_214, 2) + 0xbf)) {
                              bVar3 = PF_PART1(local_214, 2);
                            }
                            if ((bVar3 == 0x2f) && (PF_PART1(local_214, 3) != 0)) {
                              bVar3 = PF_PART1(local_214, 3) | 0x20;
                              if (0x19 < (byte)(PF_PART1(local_214, 3) + 0xbf)) {
                                bVar3 = PF_PART1(local_214, 3);
                              }
                              goto joined_r0x10001e87;
                            }
                          }
                        }
                      }
                      else if ((bVar3 == 0x3a) && (PF_PART1(local_214, 1) != 0)) {
                        bVar3 = PF_PART1(local_214, 1) | 0x20;
                        if (0x19 < (byte)(PF_PART1(local_214, 1) + 0xbf)) {
                          bVar3 = PF_PART1(local_214, 1);
                        }
                        if ((bVar3 == 0x2f) && (PF_PART1(local_214, 2) != 0)) {
                          bVar3 = PF_PART1(local_214, 2) | 0x20;
                          if (0x19 < (byte)(PF_PART1(local_214, 2) + 0xbf)) {
                            bVar3 = PF_PART1(local_214, 2);
                          }
joined_r0x10001e87:
                          if (bVar3 == 0x2f) {
                            recovered_100164a0((long)dst,(long)local_38,(byte *)&local_218,
                                               &DAT_1001f468);
                            goto LAB_100019b0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            dst_00 = (char *)((long)local_38 + 0x141);
            pcVar15 = &DAT_1001e232;
            pcVar9 = str_1001f481;
            goto LAB_10002122;
          }
        }
      }
LAB_100017fa:
      *(undefined1 *)((long)dst + 0x57ef) = 0;
LAB_10001801:
      piVar22[0x15132] = -1;
    }
  }
LAB_100019a9:
  *(undefined1 *)((long)dst + 0x57ee) = 1;
LAB_100019b0:
  if ((*(char *)((long)dst + 0x57ee) != '\0') ||
     ((uVar4 = dst[0x81713], *(char *)((long)dst + 0x57ef) == '\x01' && (uVar4 % 0x18 == 0)))) {
    recovered_100025b0(dst);
    *(undefined1 *)((long)dst + 0x57ee) = 0;
    uVar4 = dst[0x81713];
  }
  dst[0x81713] = uVar4 + 1;
  iVar5 = 0x18;
  if ((dst[0x81712] & 6U) == 2) {
    iVar5 = 6;
  }
  do {
    iVar10 = Ram0000000000006800;
    if ((((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000006804, iVar10 != 0)) &&
        (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x9f < uVar4))
    {
      uVar4 = UINT_0000689c;
      if ((code *)(ulong)uVar4 != (code *)0x0) {
        (*(code *)(ulong)uVar4)();
      }
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = Ram0000000000006800;
  if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
     ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0x9f < uVar4)))) {
    uVar4 = UINT_0000689c;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      (*(code *)(ulong)uVar4)();
    }
  }
  if (*(char *)((long)dst + 0x57ed) == '\0') goto LAB_1000214e;
  goto LAB_10000960;
LAB_10001656:
  lVar18 = lVar18 + 1;
  lVar14 = lVar14 + -0x370;
  lVar16 = lVar16 + 0x370;
  lVar12 = lVar12 + 0x370;
  if (lVar18 == 1) goto LAB_100017fa;
  goto LAB_1000167a;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001f468
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
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
#undef str_1001e130
#undef str_1001e149
#undef str_1001e16a
#undef str_1001e172
#undef str_1001e19c
#undef str_1001e1a8
#undef str_1001e1be
#undef str_1001ecbd
#undef str_1001ef18
#undef str_1001efd0
#undef str_1001f31e
#undef str_1001f328
#undef str_1001f342
#undef str_1001f350
#undef str_1001f364
#undef str_1001f386
#undef str_1001f38c
#undef str_1001f39c
#undef str_1001f481
#undef str_1001f4ac
#undef str_1001f4d0
#undef str_1001f4e2
#undef local_9f8
#undef local_5f8
#undef local_5e4
#undef local_5d0
#undef local_5c4
#undef local_5c0
#undef local_5bc
#undef local_5b8
#undef local_378
#undef local_370
#undef local_368
#undef local_364
#undef local_360
#undef local_278
#undef local_218
#undef local_214
#undef local_118
#undef local_114
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002370
 */

void recovered_10002370(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x53 < uVar2)) {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100023b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(param_1);
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001ea31
#define DAT_1001ea31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb24U)))
#undef str_1001ef25
#define str_1001ef25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1018U)))
#undef str_1001f01b
#define str_1001f01b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110eU)))
#undef str_1001f033
#define str_1001f033 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1126U)))
#undef str_1001f3eb
#define str_1001f3eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14deU)))
#undef str_1001f400
#define str_1001f400 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14f3U)))
#define local_d8 (*(char (*)[192])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c0
 */

void recovered_100023c0(long param_1)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char *vararg0;
  uint uVar4;
  long lVar5;

  if (*(char *)(param_1 + 0x205e34) == '\x01') {
    uVar4 = *(uint *)(param_1 + 0x205c38);
    if ((uVar4 == 0) ||
       ((uVar1 = *(uint *)(param_1 + 0x205e3c), uVar4 <= uVar1 &&
        (uVar1 = *(uint *)(param_1 + 0x205c3c), uVar4 <= uVar1)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1 + (ulong)uVar1 * 0x555e0 + 0x58f8;
    }
    local_d8[0] = '\0';
    if (*(char *)(param_1 + 0x205e35) == '\x01') {
      if (*(char *)(param_1 + 0x205d48) == '\x01') {
        memcpy((void *)(param_1 + 0x205c54),(void *)(param_1 + 0x205d48),0xec);
      }
      if (*(char *)(param_1 + 0x205e36) == '\x01') {
        puVar3 = &DAT_1001ea31;
        if (*(char *)(param_1 + 0x205f50) != '\0') {
          puVar3 = (undefined *)(param_1 + 0x205f50);
        }
        pf_varargs_1001df25__8__8_(local_d8,0xc0,str_1001f3eb,(ulonglong)puVar3,param_1 + 0x205fd0);
      }
      else {
        vararg0 = str_1001ef25;
        if (*(char *)(param_1 + 0x206170) != '\0') {
          vararg0 = (char *)(param_1 + 0x206170);
        }
        pf_varargs_1001df25__8_(local_d8,0xc0,str_1001f400,(ulonglong)vararg0);
      }
      *(undefined1 *)(param_1 + 0x205e34) = 0;
    }
    else {
      puVar3 = &DAT_1001ea31;
      if (*(char *)(param_1 + 0x205f50) != '\0') {
        puVar3 = (undefined *)(param_1 + 0x205f50);
      }
      uVar4 = (uint)(*(long *)(param_1 + 0x205e40) + 0x3ffU >> 10);
      if (*(long *)(param_1 + 0x205e48) == 0) {
        pf_varargs_1001df25__8__4_(local_d8,0xc0,str_1001f033,(ulonglong)puVar3,uVar4);
      }
      else {
        pf_varargs_1001df25__8__4__4_
                  (local_d8,0xc0,str_1001f01b,(ulonglong)puVar3,uVar4,
                   (uint)(*(long *)(param_1 + 0x205e48) + 0x3ffU >> 10));
      }
    }
    if ((lVar5 != 0) && (local_d8[0] != '\0')) {
      iVar2 = strcmp((char *)(lVar5 + 0x141),local_d8);
      if (iVar2 != 0) {
        pf_varargs_1001df25__8_((char *)(lVar5 + 0x141),0xc0,&DAT_1001e232,(ulonglong)local_d8);
        *(undefined1 *)(param_1 + 0x57ee) = 1;
      }
    }
  }
  return;
}

#undef DAT_1001e232
#undef DAT_1001ea31
#undef str_1001ef25
#undef str_1001f01b
#undef str_1001f033
#undef str_1001f3eb
#undef str_1001f400
#undef local_d8

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(uint *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#undef str_1001e16a
#define str_1001e16a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025b0
 */

void recovered_100025b0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 extraout_RDX = 0;
  long lVar4;

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(uint *)((long)param_1 + 0x205c38) == 0) {
    return;
  }
  uVar3 = (ulong)*(uint *)((long)param_1 + 0x205c3c);
  if (*(uint *)((long)param_1 + 0x205c38) <= *(uint *)((long)param_1 + 0x205c3c)) {
    return;
  }
  lVar4 = (long)param_1 + uVar3 * 0x555e0 + 0x58f8;
  recovered_1001ac60((long)param_1);
  recovered_1001c4a0((long)param_1,lVar4,CONCAT44(DAT_100201f4 - 0x5e,DAT_100201f0));
  recovered_1001b8d0((long)param_1,lVar4,extraout_RDX,uVar3);
  recovered_1001a750((long)param_1,lVar4);
  if (*(uint *)((long)param_1 + 0x57e8) == 0) goto LAB_1000269d;
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x11b < uVar2)) {
    uVar2 = UINT_00006918;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (uVar2 = (*(code *)(ulong)uVar2)
                          ((void *)((long)param_1 + 1000),*(uint *)((long)param_1 + 0x57e8)),
       uVar2 == 0)) goto LAB_1000268c;
  }
  else {
LAB_1000268c:
    *(undefined1 *)((long)param_1 + 0x57ec) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x57e8) = 0;
LAB_1000269d:
  terror_ui_window_present(param_1,str_1001e16a,*(void **)((long)param_1 + 0x350),DAT_100201f0,
                     DAT_100201f4,DAT_100201f0 * 4,0xffffff);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006918
#undef str_1001e16a

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e0
 */

void recovered_100026e0(ulong param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *dst;
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *vararg0;
  undefined1 *dst_00;

  uVar2 = *(uint *)(param_1 + 0x205c38);
  if ((ulong)uVar2 < 6) {
    *(uint *)(param_1 + 0x205c38) = uVar2 + 1;
    lVar1 = param_1 + (ulong)uVar2 * 0x555e0;
    dst_00 = (undefined1 *)(lVar1 + 0x58f8);
    memset(dst_00,0,0x555e0);
    uVar6 = recovered_100028e0((long)dst_00);
    if ((char)uVar6 == '\0') {
      memset(dst_00,0,0x555e0);
      *(int *)(param_1 + 0x205c38) = *(int *)(param_1 + 0x205c38) + -1;
    }
    else {
      *dst_00 = 1;
      *(undefined4 *)(lVar1 + 0x59dc0) = 0xffffffff;
      iVar3 = Ram0000000000006800;
      iVar5 = -1;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
          (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0xbf < uVar4)
         ) {
        uVar4 = UINT_000068bc;
        if ((code *)(ulong)uVar4 != (code *)0x0) {
          iVar5 = (*(code *)(ulong)uVar4)();
        }
      }
      *(int *)(lVar1 + 0x5bfc) = iVar5;
      pf_varargs_1001df25__8_((char *)(lVar1 + 0x59f9),0x40,&DAT_1001e232,((uintptr_t)pf_module_state + 0x2b9U));
      if (*(char **)(lVar1 + 0x5c08) != (char *)0x0) {
        pf_varargs_1001df25__8_(*(char **)(lVar1 + 0x5c08),0x50000,&DAT_1001e232,((uintptr_t)pf_module_state + 0x2c1U));
      }
      pf_varargs_1001df25__8_((char *)(lVar1 + 0x58f9),0x100,&DAT_1001e232,((uintptr_t)pf_module_state + 0x319U));
      recovered_10002b10(param_1,(long)dst_00);
      recovered_100042b0(param_1,(long)dst_00);
      *(uint *)(param_1 + 0x205c3c) = uVar2;
      dst = (char *)(param_1 + 0x57f2);
      if (param_2 == (byte *)0x0) {
        vararg0 = &DAT_1001f468;
      }
      else {
        vararg0 = &DAT_1001f468;
        if (*param_2 != 0) {
          vararg0 = param_2;
        }
      }
      pf_varargs_1001df25__8_(dst,0x100,&DAT_1001e232,(ulonglong)vararg0);
      uVar7 = strlen(dst);
      *(int *)(param_1 + 0x58f4) = (int)uVar7;
      if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
        recovered_100068b0(param_1,(long)dst_00,param_2);
        pf_varargs_1001df25__8_(dst,0x100,&DAT_1001e232,(ulonglong)(lVar1 + 0x58f9));
        uVar7 = strlen(dst);
        *(int *)(param_1 + 0x58f4) = (int)uVar7;
      }
      *(undefined1 *)(param_1 + 0x57ee) = 1;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001f468
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068bc

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028e0
 */

undefined8 recovered_100028e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_RAX;
  void *pvVar4;
  undefined8 uVar5;

  if (param_1 == 0) {
    return 0;
  }
  if ((((*(long *)(param_1 + 0x310) != 0) && (*(long *)(param_1 + 0x318) != 0)) &&
      (*(long *)(param_1 + 800) != 0)) && (*(long *)(param_1 + 0x328) != 0)) {
    return CONCAT71((int7)((ulong)in_RAX >> 8),1);
  }
  recovered_10007bf0(param_1);
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x4f < uVar3)))) {
    uVar3 = UINT_0000684c;
    if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_1000296d;
    pvVar4 = (*(code *)(ulong)uVar3)(0x50000);
  }
  else {
LAB_1000296d:
    pvVar4 = (void *)0x0;
  }
  *(void **)(param_1 + 0x310) = pvVar4;
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x4f < uVar3)))) {
    uVar3 = UINT_0000684c;
    if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_100029bb;
    pvVar4 = (*(code *)(ulong)uVar3)(0x60000);
  }
  else {
LAB_100029bb:
    pvVar4 = (void *)0x0;
  }
  *(void **)(param_1 + 0x318) = pvVar4;
  iVar2 = Ram0000000000006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x4f < uVar3)) {
    uVar3 = UINT_0000684c;
    if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_10002a09;
    pvVar4 = (*(code *)(ulong)uVar3)(0x8000);
  }
  else {
LAB_10002a09:
    pvVar4 = (void *)0x0;
  }
  *(void **)(param_1 + 800) = pvVar4;
  iVar2 = Ram0000000000006800;
  if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x4f < uVar3)))) {
    uVar3 = UINT_0000684c;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      pvVar4 = (*(code *)(ulong)uVar3)(0x8000);
      goto LAB_10002a59;
    }
  }
  pvVar4 = (void *)0x0;
LAB_10002a59:
  *(void **)(param_1 + 0x328) = pvVar4;
  if (((*(undefined1 **)(param_1 + 0x310) == (undefined1 *)0x0) || (*(long *)(param_1 + 0x318) == 0)
      ) || ((*(long *)(param_1 + 800) == 0 || (pvVar4 == (void *)0x0)))) {
    recovered_10007bf0(param_1);
    uVar5 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x310) = 0;
    **(undefined1 **)(param_1 + 0x318) = 0;
    **(undefined1 **)(param_1 + 800) = 0;
    puVar1 = *(undefined1 **)(param_1 + 0x328);
    *puVar1 = 0;
    uVar5 = CONCAT71((int7)((ulong)puVar1 >> 8),1);
  }
  return uVar5;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ac0
 */

int recovered_10002ac0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  iVar2 = Ram0000000000006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0xbf < uVar1)) {
    uVar1 = UINT_000068bc;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*(code *)(ulong)uVar1)();
      return iVar2;
    }
  }
  return -1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_000068bc

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e235
#define DAT_1001e235 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_1001e239
#define DAT_1001e239 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32cU)))
#undef DAT_1001e23e
#define DAT_1001e23e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x331U)))
#undef DAT_1001e23f
#define DAT_1001e23f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
#undef DAT_1001e240
#define DAT_1001e240 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x333U)))
#undef DAT_1001e241
#define DAT_1001e241 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef DAT_1001e242
#define DAT_1001e242 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x335U)))
#undef DAT_1001e243
#define DAT_1001e243 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x336U)))
#undef DAT_1001e244
#define DAT_1001e244 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x337U)))
#undef DAT_1001e245
#define DAT_1001e245 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x338U)))
#undef DAT_1001e246
#define DAT_1001e246 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x339U)))
#undef DAT_1001e247
#define DAT_1001e247 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_1001e25e
#define DAT_1001e25e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x351U)))
#undef DAT_1001e25f
#define DAT_1001e25f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x352U)))
#undef DAT_1001e260
#define DAT_1001e260 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x353U)))
#undef DAT_1001e261
#define DAT_1001e261 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x354U)))
#undef DAT_1001e262
#define DAT_1001e262 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x355U)))
#undef DAT_1001e291
#define DAT_1001e291 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_1001e8c9
#define DAT_1001e8c9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9bcU)))
#undef DAT_1001e8f6
#define DAT_1001e8f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e9U)))
#undef str_1001e254
#define str_1001e254 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
#undef str_1001e266
#define str_1001e266 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x359U)))
#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e277
#define str_1001e277 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36aU)))
#undef str_1001e280
#define str_1001e280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1001e287
#define str_1001e287 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_1001e295
#define str_1001e295 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x388U)))
#undef str_1001e8ce
#define str_1001e8ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c1U)))
#undef str_1001e8df
#define str_1001e8df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9d2U)))
#undef str_1001e8f0
#define str_1001e8f0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e3U)))
#undef str_1001e8f8
#define str_1001e8f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9ebU)))
#define local_84a8 (*(byte (*)[4])(frame + 24))
#define local_84a4 (*(byte *)(frame + 28))
#define local_84a3 (*(byte *)(frame + 29))
#define local_84a2 (*(byte *)(frame + 30))
#define local_84a1 (*(byte *)(frame + 31))
#define local_4a8 (*(char (*)[192])(frame + 32792))
#define local_3e8 (*(char *)(frame + 32984))
#define local_3e7 (*(char (*)[95])(frame + 32985))
#define local_388 (*(byte (*)[256])(frame + 33080))
#define local_288 (*(byte (*)[256])(frame + 33336))
#define local_188 (*(byte *)(frame + 33592))
#define local_187 (*(byte *)(frame + 33593))
#define local_186 (*(byte *)(frame + 33594))
#define local_185 (*(byte *)(frame + 33595))
#define local_184 (*(byte *)(frame + 33596))
#define local_183 (*(byte *)(frame + 33597))
#define local_182 (*(byte *)(frame + 33598))
#define local_181 (*(byte *)(frame + 33599))
#define local_88 (*(char * *)(frame + 33848))
#define local_80 (*(char * *)(frame + 33856))
#define local_78 (*(long *)(frame + 33864))
#define local_6c (*(uint *)(frame + 33876))
#define local_68 (*(byte (*)[32])(frame + 33880))
#define local_48 (*(char * *)(frame + 33912))
#define local_40 (*(long *)(frame + 33920))
#define local_38 (*(char * *)(frame + 33928))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b10
 */

/* WARNING: Removing unreachable block (ram,0x10003ce1) */

void recovered_10002b10(long param_1,long param_2)

{
  unsigned char frame[34016] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte *pbVar2;
  undefined1 *dst;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  char *pcVar17;
  ulong uVar18;
  byte *pbVar19;
  bool bVar20;

  if ((param_2 != 0) && (uVar5 = recovered_100028e0(param_2), (char)uVar5 != '\0')) {
    pcVar17 = *(char **)(param_2 + 0x310);
    **(undefined1 **)(param_2 + 0x318) = 0;
    **(undefined1 **)(param_2 + 800) = 0;
    **(undefined1 **)(param_2 + 0x328) = 0;
    *(undefined1 *)(param_2 + 0x554dc) = 0;
    local_78 = param_1;
    local_40 = param_2;
    if (pcVar17 != (char *)0x0) {
      local_80 = (char *)(param_2 + 0x554dc);
      local_88 = (char *)(param_2 + 0x141);
      local_6c = 0;
LAB_10002bb7:
      if ((*pcVar17 == '\0') ||
         (uVar6 = strlen(*(char **)(local_40 + 0x318)), 0x5fffe < uVar6))
      goto LAB_10003fa4;
      pcVar7 = strchr(pcVar17,0x3c);
      lVar9 = local_40;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = *(char **)(local_40 + 0x318);
        if ((pcVar7 != (char *)0x0) && (uVar6 = strlen(pcVar7), uVar6 < 0x5ffff)) {
          pf_varargs_1001df25__8_(pcVar7 + uVar6,0x60000 - uVar6,&DAT_1001e232,(ulonglong)pcVar17);
        }
        goto LAB_10003fa4;
      }
      local_48 = pcVar7;
      if (pcVar17 < pcVar7) {
        uVar6 = strlen(*(char **)(local_40 + 0x318));
        iVar8 = (int)local_48 - (int)pcVar17;
        iVar14 = 0x5ffff - (int)uVar6;
        if (iVar8 < iVar14) {
          iVar14 = iVar8;
        }
        pcVar7 = *(char **)(lVar9 + 0x318);
        if ((pcVar7 != (char *)0x0) && (uVar6 = strlen(pcVar7), uVar6 < 0x5ffff)) {
          uVar10 = 0x5ffff - uVar6;
          if ((ulong)(long)iVar14 <= 0x5ffff - uVar6) {
            uVar10 = (long)iVar14;
          }
          if (uVar10 != 0) {
            memcpy(pcVar7 + uVar6,pcVar17,uVar10);
          }
          pcVar7[uVar10 + uVar6] = '\0';
        }
      }
      pcVar17 = local_48;
      pcVar7 = strchr(local_48,0x3e);
      if (pcVar7 == (char *)0x0) goto LAB_10003fa4;
      iVar8 = (uint)pcVar7 - (int)pcVar17;
      iVar14 = iVar8 + -1;
      if (0xfe < iVar14) {
        iVar14 = 0xff;
      }
      pbVar19 = local_388;
      local_38 = pcVar7;
      memcpy(pbVar19,pcVar17 + 1,(long)iVar14);
      local_388[iVar14] = 0;
      local_68[0] = 0;
      for (; uVar6 = (ulong)*pbVar19, uVar6 < 0x30; pbVar19 = pbVar19 + 1) {
        if ((0x100003600U >> (uVar6 & 0x3f) & 1) == 0) {
          if (uVar6 == 0x2f) {
            pbVar19 = pbVar19 + 1;
            bVar20 = true;
            goto LAB_10002d30;
          }
          break;
        }
      }
      bVar20 = false;
LAB_10002d30:
      while ((uVar6 = (ulong)*pbVar19, uVar6 < 0x21 && ((0x100003600U >> (uVar6 & 0x3f) & 1) != 0)))
      {
        pbVar19 = pbVar19 + 1;
      }
      lVar9 = 0;
      while( true ) {
        bVar11 = (byte)uVar6;
        if ((bVar11 < 0x30) && ((0x800100003601U >> (uVar6 & 0x3f) & 1) != 0)) goto LAB_10002dc3;
        bVar15 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar15 = bVar11;
        }
        local_68[lVar9] = bVar15;
        bVar11 = pbVar19[lVar9 + 1];
        if (((ulong)bVar11 < 0x30) && ((0x800100003601U >> ((ulong)bVar11 & 0x3f) & 1) != 0)) {
          lVar9 = lVar9 + 1;
          goto LAB_10002dc3;
        }
        if (lVar9 == 0x1e) break;
        bVar15 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar15 = bVar11;
        }
        local_68[lVar9 + 1] = bVar15;
        uVar6 = (ulong)pbVar19[lVar9 + 2];
        lVar9 = lVar9 + 2;
      }
      lVar9 = 0x1f;
LAB_10002dc3:
      local_68[lVar9] = 0;
      iVar14 = strncmp((char *)local_388,&DAT_1001e235,3);
      if (iVar14 == 0) {
        pcVar7 = strstr(local_48 + 4,&DAT_1001e239);
        pcVar17 = local_38 + 1;
        if (pcVar7 != (char *)0x0) {
          pcVar17 = pcVar7 + 3;
        }
        goto LAB_10002bb7;
      }
      if (bVar20) {
LAB_10003530:
        pcVar17 = *(char **)(local_40 + 0x318);
        iVar8 = iVar8 + 1;
        uVar6 = strlen(pcVar17);
        pcVar7 = local_38;
        iVar14 = 0x5ffff - (int)uVar6;
        if (iVar8 < iVar14) {
          iVar14 = iVar8;
        }
        if ((pcVar17 != (char *)0x0) && (uVar6 = strlen(pcVar17), uVar6 < 0x5ffff)) {
          uVar10 = 0x5ffff - uVar6;
          if ((ulong)(long)iVar14 <= 0x5ffff - uVar6) {
            uVar10 = (long)iVar14;
          }
          if (uVar10 != 0) {
            memcpy(pcVar17 + uVar6,local_48,uVar10);
          }
          pcVar17[uVar10 + uVar6] = '\0';
        }
        pcVar17 = pcVar7 + 1;
        goto LAB_10002bb7;
      }
      bVar20 = true;
      if (local_68[0] == 0) {
        pcVar17 = &DAT_1001e242;
        goto LAB_10002fc2;
      }
      if (local_68[0] == 0x21) {
LAB_10003a5a:
        pcVar17 = local_38 + 1;
        goto LAB_10002bb7;
      }
      bVar11 = local_68[0] | 0x20;
      if (0x19 < (byte)(local_68[0] + 0xbf)) {
        bVar11 = local_68[0];
      }
      if (bVar11 == 0x62) {
        if (local_68[1] == 0) {
          pcVar17 = &DAT_1001e243;
          bVar20 = false;
          goto LAB_10002fc2;
        }
        bVar11 = local_68[1] | 0x20;
        if (0x19 < (byte)(local_68[1] + 0xbf)) {
          bVar11 = local_68[1];
        }
        if (bVar11 != 0x61) goto LAB_1000324a;
        if (local_68[2] == 0) {
          pcVar17 = &DAT_1001e244;
          bVar20 = false;
          goto LAB_10002fc2;
        }
        bVar11 = local_68[2] | 0x20;
        if (0x19 < (byte)(local_68[2] + 0xbf)) {
          bVar11 = local_68[2];
        }
        if (bVar11 != 0x73) goto LAB_1000324a;
        if (local_68[3] == 0) {
          pcVar17 = &DAT_1001e245;
          bVar20 = false;
        }
        else {
          bVar11 = local_68[3] | 0x20;
          if (0x19 < (byte)(local_68[3] + 0xbf)) {
            bVar11 = local_68[3];
          }
          bVar4 = false;
          if ((bVar11 != 0x65) || (pcVar17 = &DAT_1001e246, bVar20 = false, local_68[4] != 0))
          goto LAB_1000324c;
        }
LAB_10002fc2:
        bVar4 = bVar20;
        if (*pcVar17 == '\0') {
          recovered_10007e50((char *)local_388,&DAT_1001e247,(char *)local_84a8,0x100);
          pcVar17 = local_38;
          if (local_84a8[0] != 0) {
            bVar11 = local_84a8[0] | 0x20;
            if (0x19 < (byte)(local_84a8[0] + 0xbf)) {
              bVar11 = local_84a8[0];
            }
            if (bVar11 != 0x68) goto LAB_10003b06;
            if (local_84a8[1] == 0) {
LAB_100030fe:
              if (local_84a8[1] == 0) {
LAB_10003b06:
                if (local_84a8[0] == 0x5b) goto LAB_10003b0e;
              }
              else {
                bVar11 = local_84a8[1] | 0x20;
                if (0x19 < (byte)(local_84a8[1] + 0xbf)) {
                  bVar11 = local_84a8[1];
                }
                if ((bVar11 != 0x74) || (local_84a8[2] == 0)) goto LAB_10003b06;
                bVar11 = local_84a8[2] | 0x20;
                if (0x19 < (byte)(local_84a8[2] + 0xbf)) {
                  bVar11 = local_84a8[2];
                }
                if ((bVar11 != 0x74) || (local_84a8[3] == 0)) goto LAB_10003b06;
                bVar11 = local_84a8[3] | 0x20;
                if (0x19 < (byte)(local_84a8[3] + 0xbf)) {
                  bVar11 = local_84a8[3];
                }
                if ((bVar11 != 0x70) || (local_84a4 == 0)) goto LAB_10003b06;
                bVar11 = local_84a4 | 0x20;
                if (0x19 < (byte)(local_84a4 + 0xbf)) {
                  bVar11 = local_84a4;
                }
                if ((bVar11 != 0x73) || (local_84a3 == 0)) goto LAB_10003b06;
                bVar11 = local_84a3 | 0x20;
                if (0x19 < (byte)(local_84a3 + 0xbf)) {
                  bVar11 = local_84a3;
                }
                if ((bVar11 != 0x3a) || (local_84a2 == 0)) goto LAB_10003b06;
                bVar11 = local_84a2 | 0x20;
                if (0x19 < (byte)(local_84a2 + 0xbf)) {
                  bVar11 = local_84a2;
                }
                if ((bVar11 != 0x2f) || (local_84a1 == 0)) goto LAB_10003b06;
                bVar11 = local_84a1 | 0x20;
                if (0x19 < (byte)(local_84a1 + 0xbf)) {
                  bVar11 = local_84a1;
                }
                if (local_84a8[0] == 0x5b || bVar11 == 0x2f) goto LAB_10003b0e;
              }
              recovered_10008100(local_40,local_84a8,local_80);
              pcVar17 = pcVar17 + 1;
              goto LAB_10002bb7;
            }
            bVar11 = local_84a8[1] | 0x20;
            if (0x19 < (byte)(local_84a8[1] + 0xbf)) {
              bVar11 = local_84a8[1];
            }
            if ((bVar11 != 0x74) || (local_84a8[2] == 0)) goto LAB_100030fe;
            bVar11 = local_84a8[2] | 0x20;
            if (0x19 < (byte)(local_84a8[2] + 0xbf)) {
              bVar11 = local_84a8[2];
            }
            if ((bVar11 != 0x74) || (local_84a8[3] == 0)) goto LAB_100030fe;
            bVar11 = local_84a8[3] | 0x20;
            if (0x19 < (byte)(local_84a8[3] + 0xbf)) {
              bVar11 = local_84a8[3];
            }
            if ((bVar11 != 0x70) || (local_84a4 == 0)) goto LAB_100030fe;
            bVar11 = local_84a4 | 0x20;
            if (0x19 < (byte)(local_84a4 + 0xbf)) {
              bVar11 = local_84a4;
            }
            if ((bVar11 != 0x3a) || (local_84a3 == 0)) goto LAB_100030fe;
            bVar11 = local_84a3 | 0x20;
            if (0x19 < (byte)(local_84a3 + 0xbf)) {
              bVar11 = local_84a3;
            }
            if ((bVar11 != 0x2f) || (local_84a2 == 0)) goto LAB_100030fe;
            bVar11 = local_84a2 | 0x20;
            if (0x19 < (byte)(local_84a2 + 0xbf)) {
              bVar11 = local_84a2;
            }
            if (bVar11 != 0x2f) goto LAB_100030fe;
LAB_10003b0e:
            pf_varargs_1001df25__8_(local_80,0x100,&DAT_1001e232,(ulonglong)local_84a8);
          }
          pcVar17 = pcVar17 + 1;
          goto LAB_10002bb7;
        }
      }
      else {
        if (bVar11 == 0x6d) {
          pcVar17 = &DAT_1001e23e;
          if (local_68[1] != 0) {
            bVar11 = local_68[1] | 0x20;
            if (0x19 < (byte)(local_68[1] + 0xbf)) {
              bVar11 = local_68[1];
            }
            if (bVar11 != 0x65) goto LAB_1000324a;
            pcVar17 = &DAT_1001e23f;
            if (local_68[2] != 0) {
              bVar11 = local_68[2] | 0x20;
              if (0x19 < (byte)(local_68[2] + 0xbf)) {
                bVar11 = local_68[2];
              }
              if (bVar11 != 0x74) goto LAB_1000324a;
              pcVar17 = &DAT_1001e240;
              if (local_68[3] != 0) {
                bVar11 = local_68[3] | 0x20;
                if (0x19 < (byte)(local_68[3] + 0xbf)) {
                  bVar11 = local_68[3];
                }
                if ((bVar11 != 0x61) || (pcVar17 = &DAT_1001e241, local_68[4] != 0))
                goto LAB_1000324a;
              }
            }
          }
          if (*pcVar17 == '\0') goto LAB_10003a5a;
          pcVar17 = &DAT_1001e242;
          if (local_68[0] == 0) goto LAB_10002fc2;
        }
LAB_1000324a:
        bVar4 = false;
      }
LAB_1000324c:
      pcVar17 = str_1001e271;
      if (bVar4) {
LAB_10003257:
        if (*pcVar17 == '\0') {
          uVar6 = strlen(str_1001e277);
          if ((uVar6 != 0) && (local_38 = local_38 + 1, *local_38 != '\0')) {
            pcVar17 = local_38;
            do {
              uVar10 = 0;
              while (bVar11 = pcVar17[uVar10], bVar11 != 0) {
                bVar15 = bVar11 | 0x20;
                if (0x19 < (byte)(bVar11 + 0xbf)) {
                  bVar15 = bVar11;
                }
                bVar11 = str_1001e277[uVar10];
                bVar16 = bVar11 | 0x20;
                if (0x19 < (byte)(bVar11 + 0xbf)) {
                  bVar16 = bVar11;
                }
                if (bVar15 != bVar16) break;
                uVar10 = uVar10 + 1;
                if (uVar6 == uVar10) goto LAB_10003a66;
              }
              if (uVar6 == uVar10) goto LAB_10003a66;
              pcVar1 = pcVar17 + 1;
              pcVar17 = pcVar17 + 1;
              if (*pcVar1 == '\0') break;
            } while( true );
          }
          goto LAB_10003fa4;
        }
        pcVar17 = str_1001e280;
        if (!bVar4) goto LAB_1000343c;
      }
      else {
        bVar11 = local_68[0] | 0x20;
        if (0x19 < (byte)(local_68[0] + 0xbf)) {
          bVar11 = local_68[0];
        }
        if (bVar11 == 0x73) {
          pcVar17 = str_1001e271 + 1;
          if (local_68[1] != 0) {
            bVar11 = local_68[1] | 0x20;
            if (0x19 < (byte)(local_68[1] + 0xbf)) {
              bVar11 = local_68[1];
            }
            if (bVar11 != 0x74) goto LAB_1000343c;
            pcVar17 = str_1001e271 + 2;
            if (local_68[2] != 0) {
              bVar11 = local_68[2] | 0x20;
              if (0x19 < (byte)(local_68[2] + 0xbf)) {
                bVar11 = local_68[2];
              }
              if (bVar11 != 0x79) goto LAB_1000343c;
              pcVar17 = str_1001e271 + 3;
              if (local_68[3] != 0) {
                bVar11 = local_68[3] | 0x20;
                if (0x19 < (byte)(local_68[3] + 0xbf)) {
                  bVar11 = local_68[3];
                }
                if (bVar11 != 0x6c) goto LAB_1000343c;
                pcVar17 = str_1001e271 + 4;
                if (local_68[4] != 0) {
                  bVar11 = local_68[4] | 0x20;
                  if (0x19 < (byte)(local_68[4] + 0xbf)) {
                    bVar11 = local_68[4];
                  }
                  if ((bVar11 != 0x65) || (pcVar17 = str_1001e271 + 5, local_68[5] != 0))
                  goto LAB_1000343c;
                }
              }
            }
          }
          goto LAB_10003257;
        }
        if (bVar11 == 0x6c) {
          pcVar17 = &DAT_1001e25e;
          if (local_68[1] != 0) {
            bVar11 = local_68[1] | 0x20;
            if (0x19 < (byte)(local_68[1] + 0xbf)) {
              bVar11 = local_68[1];
            }
            if (bVar11 != 0x69) goto LAB_1000343c;
            pcVar17 = &DAT_1001e25f;
            if (local_68[2] != 0) {
              bVar11 = local_68[2] | 0x20;
              if (0x19 < (byte)(local_68[2] + 0xbf)) {
                bVar11 = local_68[2];
              }
              if (bVar11 != 0x6e) goto LAB_1000343c;
              pcVar17 = &DAT_1001e260;
              if (local_68[3] != 0) {
                bVar11 = local_68[3] | 0x20;
                if (0x19 < (byte)(local_68[3] + 0xbf)) {
                  bVar11 = local_68[3];
                }
                if ((bVar11 != 0x6b) || (pcVar17 = &DAT_1001e261, local_68[4] != 0))
                goto LAB_1000343c;
              }
            }
          }
          if (*pcVar17 == '\0') {
            recovered_10007e50((char *)local_388,&DAT_1001e262,&local_3e8,0x40);
            recovered_10007e50((char *)local_388,&DAT_1001e247,(char *)local_288,0x100);
            local_188 = 0;
            local_4a8[0] = '\0';
            if (local_288[0] == 0) {
LAB_10003f37:
              pcVar17 = local_38 + 1;
            }
            else {
              recovered_10008100(local_40,local_288,(char *)&local_188);
              pcVar17 = local_38;
              if (local_188 == 0) {
                bVar20 = false;
              }
              else {
                bVar11 = local_188 | 0x20;
                if (0x19 < (byte)(local_188 + 0xbf)) {
                  bVar11 = local_188;
                }
                if (bVar11 == 0x68) {
                  if (local_187 != 0) {
                    bVar11 = local_187 | 0x20;
                    if (0x19 < (byte)(local_187 + 0xbf)) {
                      bVar11 = local_187;
                    }
                    if ((bVar11 == 0x74) && (local_186 != 0)) {
                      bVar11 = local_186 | 0x20;
                      if (0x19 < (byte)(local_186 + 0xbf)) {
                        bVar11 = local_186;
                      }
                      if ((bVar11 == 0x74) && (local_185 != 0)) {
                        bVar11 = local_185 | 0x20;
                        if (0x19 < (byte)(local_185 + 0xbf)) {
                          bVar11 = local_185;
                        }
                        if ((bVar11 == 0x70) && (local_184 != 0)) {
                          bVar11 = local_184 | 0x20;
                          if (0x19 < (byte)(local_184 + 0xbf)) {
                            bVar11 = local_184;
                          }
                          if ((bVar11 == 0x3a) && (local_183 != 0)) {
                            bVar11 = local_183 | 0x20;
                            if (0x19 < (byte)(local_183 + 0xbf)) {
                              bVar11 = local_183;
                            }
                            if ((bVar11 == 0x2f) && (local_182 != 0)) {
                              bVar11 = local_182 | 0x20;
                              if (0x19 < (byte)(local_182 + 0xbf)) {
                                bVar11 = local_182;
                              }
                              bVar20 = true;
                              if (bVar11 == 0x2f) goto joined_r0x10003cf6;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (local_187 != 0) {
                    bVar11 = local_187 | 0x20;
                    if (0x19 < (byte)(local_187 + 0xbf)) {
                      bVar11 = local_187;
                    }
                    if ((bVar11 == 0x74) && (local_186 != 0)) {
                      bVar11 = local_186 | 0x20;
                      if (0x19 < (byte)(local_186 + 0xbf)) {
                        bVar11 = local_186;
                      }
                      if ((bVar11 == 0x74) && (local_185 != 0)) {
                        bVar11 = local_185 | 0x20;
                        if (0x19 < (byte)(local_185 + 0xbf)) {
                          bVar11 = local_185;
                        }
                        if ((bVar11 == 0x70) && (local_184 != 0)) {
                          bVar11 = local_184 | 0x20;
                          if (0x19 < (byte)(local_184 + 0xbf)) {
                            bVar11 = local_184;
                          }
                          if ((bVar11 == 0x73) && (local_183 != 0)) {
                            bVar11 = local_183 | 0x20;
                            if (0x19 < (byte)(local_183 + 0xbf)) {
                              bVar11 = local_183;
                            }
                            if ((bVar11 == 0x3a) && (local_182 != 0)) {
                              bVar11 = local_182 | 0x20;
                              if (0x19 < (byte)(local_182 + 0xbf)) {
                                bVar11 = local_182;
                              }
                              if ((bVar11 == 0x2f) && (local_181 != 0)) {
                                bVar11 = local_181 | 0x20;
                                if (0x19 < (byte)(local_181 + 0xbf)) {
                                  bVar11 = local_181;
                                }
                                bVar20 = bVar11 == 0x2f;
                                goto joined_r0x10003cf6;
                              }
                            }
                          }
                        }
                      }
                    }
                    bVar20 = false;
                    goto joined_r0x10003cf6;
                  }
                }
                bVar20 = false;
              }
joined_r0x10003cf6:
              if (((local_288[0] != 0) && (uVar6 = strlen(str_1001e266), uVar6 != 0)) &&
                 (local_3e8 != '\0')) {
                pcVar7 = &local_3e8;
                do {
                  uVar10 = 0;
                  while (bVar11 = pcVar7[uVar10], bVar11 != 0) {
                    bVar15 = bVar11 | 0x20;
                    if (0x19 < (byte)(bVar11 + 0xbf)) {
                      bVar15 = bVar11;
                    }
                    bVar11 = str_1001e266[uVar10];
                    bVar16 = bVar11 | 0x20;
                    if (0x19 < (byte)(bVar11 + 0xbf)) {
                      bVar16 = bVar11;
                    }
                    if (bVar15 != bVar16) break;
                    uVar10 = uVar10 + 1;
                    if (uVar6 == uVar10) goto LAB_10003ebc;
                  }
                  if (uVar6 == uVar10) {
LAB_10003ebc:
                    if ((bVar20 & 3 < local_6c) == 0) {
                      local_6c = local_6c + bVar20;
                      uVar6 = recovered_10008630(local_78,local_40,(char *)local_288,local_84a8,
                                                 0x8000,local_4a8);
                      lVar9 = local_40;
                      if ((char)uVar6 != '\0') {
                        recovered_10007d70(*(char **)(local_40 + 800),0x8000,(long)local_84a8);
                        pcVar17 = *(char **)(lVar9 + 800);
                        if ((pcVar17 != (char *)0x0) &&
                           (uVar6 = strlen(pcVar17), uVar6 < 0x7fff)) {
                          (pcVar17 + uVar6)[0] = '\n';
                          (pcVar17 + uVar6)[1] = '\0';
                        }
                        goto LAB_10003f37;
                      }
                    }
                    break;
                  }
                  pcVar1 = pcVar7 + 1;
                  pcVar7 = pcVar7 + 1;
                } while (*pcVar1 != '\0');
              }
              pcVar17 = pcVar17 + 1;
            }
            goto LAB_10002bb7;
          }
        }
LAB_1000343c:
        bVar11 = local_68[0];
        if ((byte)(local_68[0] + 0xbf) < 0x1a) {
          bVar11 = local_68[0] | 0x20;
        }
        if (bVar11 != 0x73) goto LAB_10003530;
        pcVar17 = str_1001e280 + 1;
        if (local_68[1] != 0) {
          bVar11 = local_68[1] | 0x20;
          if (0x19 < (byte)(local_68[1] + 0xbf)) {
            bVar11 = local_68[1];
          }
          if (bVar11 != 99) goto LAB_10003530;
          pcVar17 = str_1001e280 + 2;
          if (local_68[2] != 0) {
            bVar11 = local_68[2] | 0x20;
            if (0x19 < (byte)(local_68[2] + 0xbf)) {
              bVar11 = local_68[2];
            }
            if (bVar11 != 0x72) goto LAB_10003530;
            pcVar17 = str_1001e280 + 3;
            if (local_68[3] != 0) {
              bVar11 = local_68[3] | 0x20;
              if (0x19 < (byte)(local_68[3] + 0xbf)) {
                bVar11 = local_68[3];
              }
              if (bVar11 != 0x69) goto LAB_10003530;
              pcVar17 = str_1001e280 + 4;
              if (local_68[4] != 0) {
                bVar11 = local_68[4] | 0x20;
                if (0x19 < (byte)(local_68[4] + 0xbf)) {
                  bVar11 = local_68[4];
                }
                if (bVar11 != 0x70) goto LAB_10003530;
                pcVar17 = str_1001e280 + 5;
                if (local_68[5] != 0) {
                  bVar11 = local_68[5] | 0x20;
                  if (0x19 < (byte)(local_68[5] + 0xbf)) {
                    bVar11 = local_68[5];
                  }
                  if ((bVar11 != 0x74) || (pcVar17 = str_1001e280 + 6, local_68[6] != '\0'))
                  goto LAB_10003530;
                }
              }
            }
          }
        }
      }
      if (*pcVar17 != '\0') goto LAB_10003530;
      pcVar17 = local_38 + 1;
      local_48 = pcVar7;
      uVar6 = strlen(str_1001e287);
      if (uVar6 == 0) {
        pcVar7 = (char *)0x0;
      }
      else {
        cVar3 = *pcVar17;
        pcVar7 = pcVar17;
        while (cVar3 != '\0') {
          uVar10 = 0;
          while (bVar11 = pcVar7[uVar10], bVar11 != 0) {
            bVar15 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar15 = bVar11;
            }
            bVar11 = str_1001e287[uVar10];
            bVar16 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar16 = bVar11;
            }
            if (bVar15 != bVar16) break;
            uVar10 = uVar10 + 1;
            if (uVar6 == uVar10) goto LAB_10003668;
          }
          if (uVar6 == uVar10) goto LAB_10003668;
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar3 = *pcVar1;
        }
        pcVar7 = (char *)0x0;
      }
LAB_10003668:
      local_84a8[0] = 0;
      local_288[0] = 0;
      local_188 = 0;
      local_3e8 = '\0';
      local_38 = pcVar17;
      recovered_10007e50((char *)local_388,&DAT_1001e291,(char *)local_288,0x100);
      if (local_288[0] == 0) {
        if (pcVar7 != (char *)0x0) {
          iVar14 = ~(uint)local_48 + (int)pcVar7;
          if (0xffe < iVar14) {
            iVar14 = 0xfff;
          }
          memcpy(local_84a8,local_38,(long)iVar14);
          local_84a8[iVar14] = 0;
        }
      }
      else {
        recovered_10008100(local_40,local_288,(char *)&local_188);
        if (local_188 != 0) {
          bVar11 = local_188 | 0x20;
          if (0x19 < (byte)(local_188 + 0xbf)) {
            bVar11 = local_188;
          }
          if ((bVar11 == 0x68) && (local_187 != 0)) {
            bVar11 = local_187 | 0x20;
            if (0x19 < (byte)(local_187 + 0xbf)) {
              bVar11 = local_187;
            }
            if ((bVar11 == 0x74) && (local_186 != 0)) {
              bVar11 = local_186 | 0x20;
              if (0x19 < (byte)(local_186 + 0xbf)) {
                bVar11 = local_186;
              }
              if ((bVar11 == 0x74) && (local_185 != 0)) {
                bVar11 = local_185 | 0x20;
                if (0x19 < (byte)(local_185 + 0xbf)) {
                  bVar11 = local_185;
                }
                if ((bVar11 == 0x70) && (local_184 != 0)) {
                  bVar11 = local_184 | 0x20;
                  if (0x19 < (byte)(local_184 + 0xbf)) {
                    bVar11 = local_184;
                  }
                  if ((bVar11 == 0x3a) && (local_183 != 0)) {
                    bVar11 = local_183 | 0x20;
                    if (0x19 < (byte)(local_183 + 0xbf)) {
                      bVar11 = local_183;
                    }
                    if ((bVar11 == 0x2f) && (local_182 != 0)) {
                      bVar11 = local_182 | 0x20;
                      if (0x19 < (byte)(local_182 + 0xbf)) {
                        bVar11 = local_182;
                      }
                      if (bVar11 == 0x2f) goto LAB_1000382e;
                    }
                  }
                }
              }
            }
          }
        }
        uVar5 = recovered_10008090((long)&local_188,(byte *)str_1001e254);
        if ((char)uVar5 == '\0') {
          recovered_10008630(local_78,local_40,(char *)local_288,local_84a8,0x1000,&local_3e8);
        }
      }
LAB_1000382e:
      uVar6 = strlen(str_1001e295);
      lVar9 = local_40;
      if ((uVar6 != 0) && (local_388[0] != 0)) {
        pbVar19 = local_388;
        do {
          uVar10 = 0;
          while (bVar11 = pbVar19[uVar10], bVar11 != 0) {
            bVar15 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar15 = bVar11;
            }
            bVar11 = str_1001e295[uVar10];
            bVar16 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar16 = bVar11;
            }
            if (bVar15 != bVar16) break;
            uVar10 = uVar10 + 1;
            if (uVar6 == uVar10) goto LAB_1000397c;
          }
          if (uVar6 == uVar10) {
LAB_1000397c:
            if (*(char *)(local_78 + 0x57f1) == '\x01') {
              recovered_10007d70(*(char **)(local_40 + 0x318),0x60000,((uintptr_t)pf_module_state + 0x395U));
            }
            goto LAB_100039a5;
          }
          pbVar2 = pbVar19 + 1;
          pbVar19 = pbVar19 + 1;
        } while (*pbVar2 != 0);
      }
      if (local_84a8[0] != 0) {
        recovered_10007d70(*(char **)(local_40 + 0x328),0x8000,(long)local_84a8);
        pcVar17 = *(char **)(lVar9 + 0x328);
        if ((pcVar17 != (char *)0x0) && (uVar6 = strlen(pcVar17), uVar6 < 0x7fff)) {
          (pcVar17 + uVar6)[0] = '\n';
          (pcVar17 + uVar6)[1] = '\0';
        }
        pcVar17 = recovered_10008a30((char *)local_84a8);
        if ((char)pcVar17 != '\0') {
          local_4a8[0] = '\0';
          FUN_1001df7f(local_84a8,*(undefined8 *)(local_40 + 0x318),0x60000,local_4a8,0xc0,
                       (uint)*(byte *)(local_78 + 0x57f0) * 2 + 1);
          if (local_4a8[0] != '\0') {
            pf_varargs_1001df25__8_(local_88,0xc0,&DAT_1001e232,(ulonglong)local_4a8);
          }
        }
      }
LAB_100039a5:
      pcVar17 = pcVar7 + 9;
      if (pcVar7 != (char *)0x0) goto LAB_10002bb7;
    }
LAB_10003fa4:
    lVar9 = local_40;
    dst = (undefined1 *)(local_40 + 0x330);
    memset(dst,0,0x110);
    *(undefined8 *)(lVar9 + 0x334) = 0x161c22fffffffcff;
    *(undefined4 *)(lVar9 + 0x33c) = 0x1252b4ff;
    *(undefined1 *)(lVar9 + 0x340) = 0;
    uVar5 = recovered_1000de10(*(char **)(lVar9 + 800),&DAT_1001e8c9,local_84a8);
    if ((char)uVar5 != '\0') {
      uVar6 = recovered_1000dfe0((char *)local_84a8,str_1001e8ce,(char *)local_388,0x100);
      if (((char)uVar6 != '\0') &&
         (uVar5 = recovered_1000e250(local_388,(uint *)(lVar9 + 0x334)), (char)uVar5 != '\0')) {
        *dst = 1;
      }
      uVar6 = recovered_1000dfe0((char *)local_84a8,str_1001e8df,(char *)local_388,0x100);
      if ((char)uVar6 != '\0') {
        *(undefined1 *)(lVar9 + 0x340) = 0;
        pbVar19 = local_388 + 5;
        while( true ) {
          bVar11 = pbVar19[-5];
          uVar6 = (ulong)bVar11;
          if (0x20 < uVar6) break;
          if ((0x100003600U >> (uVar6 & 0x3f) & 1) == 0) {
            if (uVar6 == 0) goto LAB_100041de;
            break;
          }
          pbVar19 = pbVar19 + 1;
        }
        bVar15 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar15 = bVar11;
        }
        if ((bVar15 == 0x75) && (bVar11 = pbVar19[-4], bVar11 != 0)) {
          bVar15 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar15 = bVar11;
          }
          if ((bVar15 == 0x72) && (bVar11 = pbVar19[-3], bVar11 != 0)) {
            bVar15 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar15 = bVar11;
            }
            if ((bVar15 == 0x6c) && (bVar11 = pbVar19[-2], bVar11 != 0)) {
              bVar15 = bVar11 | 0x20;
              if (0x19 < (byte)(bVar11 + 0xbf)) {
                bVar15 = bVar11;
              }
              if (bVar15 == 0x28) {
                while( true ) {
                  uVar6 = (ulong)pbVar19[-1];
                  uVar12 = (uint)pbVar19[-1];
                  if (0x27 < uVar6) break;
                  if ((0x100003600U >> (uVar6 & 0x3f) & 1) == 0) {
                    if ((0x8400000000U >> (uVar6 & 0x3f) & 1) != 0) {
                      uVar6 = (ulong)*pbVar19;
                      goto LAB_10004163;
                    }
                    break;
                  }
                  pbVar19 = pbVar19 + 1;
                }
                pbVar19 = pbVar19 + -1;
                uVar12 = 0;
LAB_10004163:
                if (uVar12 == (int)(char)uVar6 || (char)uVar6 == '\0') {
                  uVar18 = 0;
                }
                else {
                  uVar10 = 0;
                  while (((uVar12 != 0 || (0x29 < (byte)uVar6)) ||
                         ((0x20100003600U >> (uVar6 & 0x3f) & 1) == 0))) {
                    uVar18 = uVar10 + 1;
                    *(byte *)(lVar9 + 0x340 + uVar10) = (byte)uVar6;
                    uVar13 = (uint)(char)pbVar19[uVar10 + 1];
                    uVar6 = (ulong)uVar13;
                    if (((uVar13 == 0) || (0xfe < uVar18)) || (uVar10 = uVar18, uVar12 == uVar13))
                    goto LAB_100041c6;
                  }
                  uVar18 = uVar10;
                }
LAB_100041c6:
                *(undefined1 *)(lVar9 + 0x340 + uVar18) = 0;
                if (*(char *)(lVar9 + 0x340) != '\0') {
                  *(undefined1 *)(lVar9 + 0x331) = 1;
                }
              }
            }
          }
        }
      }
LAB_100041de:
      uVar6 = recovered_1000dfe0((char *)local_84a8,str_1001e8f0,(char *)local_388,0x100);
      if (((char)uVar6 != '\0') &&
         (uVar5 = recovered_1000e250(local_388,(uint *)(lVar9 + 0x338)), (char)uVar5 != '\0')) {
        *(undefined1 *)(lVar9 + 0x332) = 1;
      }
    }
    uVar5 = recovered_1000de10(*(char **)(lVar9 + 800),&DAT_1001e8f6,local_84a8);
    if (((((char)uVar5 != '\0') ||
         (uVar5 = recovered_1000de10(*(char **)(lVar9 + 800),str_1001e8f8,local_84a8),
         (char)uVar5 != '\0')) &&
        (uVar6 = recovered_1000dfe0((char *)local_84a8,str_1001e8f0,(char *)local_388,0x100),
        (char)uVar6 != '\0')) &&
       (uVar5 = recovered_1000e250(local_388,(uint *)(lVar9 + 0x33c)), (char)uVar5 != '\0')) {
      *(undefined1 *)(lVar9 + 0x333) = 1;
    }
  }
  return;
LAB_10003a66:
  pcVar1 = *(char **)(local_40 + 800);
  iVar8 = ~(uint)pcVar7 + (int)pcVar17;
  uVar6 = strlen(pcVar1);
  iVar14 = 0x7fff - (int)uVar6;
  if (iVar8 < iVar14) {
    iVar14 = iVar8;
  }
  if ((pcVar1 != (char *)0x0) && (uVar6 = strlen(pcVar1), uVar6 < 0x7fff)) {
    uVar10 = 0x7fff - uVar6;
    if ((ulong)(long)iVar14 <= 0x7fff - uVar6) {
      uVar10 = (long)iVar14;
    }
    if (uVar10 != 0) {
      memcpy(pcVar1 + uVar6,local_38,uVar10);
    }
    pcVar1[uVar10 + uVar6] = '\0';
  }
  pcVar7 = *(char **)(local_40 + 800);
  if ((pcVar7 != (char *)0x0) && (uVar6 = strlen(pcVar7), uVar6 < 0x7fff)) {
    (pcVar7 + uVar6)[0] = '\n';
    (pcVar7 + uVar6)[1] = '\0';
  }
  pcVar17 = pcVar17 + 8;
  goto LAB_10002bb7;
}

#undef DAT_1001e232
#undef DAT_1001e235
#undef DAT_1001e239
#undef DAT_1001e23e
#undef DAT_1001e23f
#undef DAT_1001e240
#undef DAT_1001e241
#undef DAT_1001e242
#undef DAT_1001e243
#undef DAT_1001e244
#undef DAT_1001e245
#undef DAT_1001e246
#undef DAT_1001e247
#undef DAT_1001e25e
#undef DAT_1001e25f
#undef DAT_1001e260
#undef DAT_1001e261
#undef DAT_1001e262
#undef DAT_1001e291
#undef DAT_1001e8c9
#undef DAT_1001e8f6
#undef str_1001e254
#undef str_1001e266
#undef str_1001e271
#undef str_1001e277
#undef str_1001e280
#undef str_1001e287
#undef str_1001e295
#undef str_1001e8ce
#undef str_1001e8df
#undef str_1001e8f0
#undef str_1001e8f8
#undef local_84a8
#undef local_84a4
#undef local_84a3
#undef local_84a2
#undef local_84a1
#undef local_4a8
#undef local_3e8
#undef local_3e7
#undef local_388
#undef local_288
#undef local_188
#undef local_187
#undef local_186
#undef local_185
#undef local_184
#undef local_183
#undef local_182
#undef local_181
#undef local_88
#undef local_80
#undef local_78
#undef local_6c
#undef local_68
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e235
#define DAT_1001e235 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_1001e239
#define DAT_1001e239 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32cU)))
#undef DAT_1001e247
#define DAT_1001e247 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_1001e291
#define DAT_1001e291 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_1001e8f6
#define DAT_1001e8f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e9U)))
#undef DAT_1001e8ff
#define DAT_1001e8ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f2U)))
#undef DAT_1001e900
#define DAT_1001e900 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f3U)))
#undef DAT_1001e901
#define DAT_1001e901 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f4U)))
#undef DAT_1001e902
#define DAT_1001e902 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f5U)))
#undef DAT_1001e903
#define DAT_1001e903 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f6U)))
#undef DAT_1001e904
#define DAT_1001e904 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f7U)))
#undef DAT_1001e905
#define DAT_1001e905 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f8U)))
#undef DAT_1001e906
#define DAT_1001e906 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f9U)))
#undef DAT_1001e907
#define DAT_1001e907 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9faU)))
#undef DAT_1001e908
#define DAT_1001e908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fbU)))
#undef DAT_1001e90b
#define DAT_1001e90b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9feU)))
#undef DAT_1001e90e
#define DAT_1001e90e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa01U)))
#undef DAT_1001e911
#define DAT_1001e911 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa04U)))
#undef DAT_1001e916
#define DAT_1001e916 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa09U)))
#undef DAT_1001e919
#define DAT_1001e919 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0cU)))
#undef DAT_1001e924
#define DAT_1001e924 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa17U)))
#undef DAT_1001e94f
#define DAT_1001e94f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa42U)))
#undef DAT_1001e950
#define DAT_1001e950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa43U)))
#undef DAT_1001e951
#define DAT_1001e951 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa44U)))
#undef DAT_1001e952
#define DAT_1001e952 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa45U)))
#undef DAT_1001e953
#define DAT_1001e953 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa46U)))
#undef DAT_1001e954
#define DAT_1001e954 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa47U)))
#undef DAT_1001e95a
#define DAT_1001e95a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4dU)))
#undef DAT_1001e95c
#define DAT_1001e95c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4fU)))
#undef DAT_1001e95d
#define DAT_1001e95d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa50U)))
#undef DAT_1001e95e
#define DAT_1001e95e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa51U)))
#undef DAT_1001e979
#define DAT_1001e979 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa6cU)))
#undef DAT_1001e984
#define DAT_1001e984 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa77U)))
#undef DAT_1001e994
#define DAT_1001e994 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa87U)))
#undef DAT_1001e998
#define DAT_1001e998 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8bU)))
#undef DAT_1001e9c7
#define DAT_1001e9c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabaU)))
#undef DAT_1001e9cb
#define DAT_1001e9cb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabeU)))
#undef DAT_1001e9d0
#define DAT_1001e9d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac3U)))
#undef DAT_1001e9d5
#define DAT_1001e9d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac8U)))
#undef DAT_1001ea28
#define DAT_1001ea28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb1bU)))
#undef DAT_1001ea31
#define DAT_1001ea31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb24U)))
#undef DAT_1001ea36
#define DAT_1001ea36 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb29U)))
#undef DAT_1001ea42
#define DAT_1001ea42 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb35U)))
#undef DAT_1001ea55
#define DAT_1001ea55 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb48U)))
#undef DAT_1001ea60
#define DAT_1001ea60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb53U)))
#undef DAT_1001ea74
#define DAT_1001ea74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb67U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef DAT_100201f0
#define DAT_100201f0 (*(int *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef str_1001e91c
#define str_1001e91c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0fU)))
#undef str_1001e928
#define str_1001e928 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_1001e92f
#define str_1001e92f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa22U)))
#undef str_1001e938
#define str_1001e938 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2bU)))
#undef str_1001e93e
#define str_1001e93e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa31U)))
#undef str_1001e947
#define str_1001e947 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3aU)))
#undef str_1001e95f
#define str_1001e95f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa52U)))
#undef str_1001e966
#define str_1001e966 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa59U)))
#undef str_1001e96c
#define str_1001e96c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5fU)))
#undef str_1001e972
#define str_1001e972 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa65U)))
#undef str_1001e97d
#define str_1001e97d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa70U)))
#undef str_1001e989
#define str_1001e989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7cU)))
#undef str_1001e99c
#define str_1001e99c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa8fU)))
#undef str_1001e9a2
#define str_1001e9a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa95U)))
#undef str_1001e9a9
#define str_1001e9a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9cU)))
#undef str_1001e9b0
#define str_1001e9b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa3U)))
#undef str_1001e9b7
#define str_1001e9b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaaaU)))
#undef str_1001e9c0
#define str_1001e9c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab3U)))
#undef str_1001e9d8
#define str_1001e9d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacbU)))
#undef str_1001e9de
#define str_1001e9de (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad1U)))
#undef str_1001e9e5
#define str_1001e9e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad8U)))
#undef str_1001e9ec
#define str_1001e9ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0xadfU)))
#undef str_1001e9f3
#define str_1001e9f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
#undef str_1001e9f9
#define str_1001e9f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaecU)))
#undef str_1001ea01
#define str_1001ea01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf4U)))
#undef str_1001ea08
#define str_1001ea08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xafbU)))
#undef str_1001ea11
#define str_1001ea11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb04U)))
#undef str_1001ea1a
#define str_1001ea1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0dU)))
#undef str_1001ea20
#define str_1001ea20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb13U)))
#undef str_1001ea2b
#define str_1001ea2b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1eU)))
#undef str_1001ea3b
#define str_1001ea3b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2eU)))
#undef str_1001ea46
#define str_1001ea46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb39U)))
#undef str_1001ea4c
#define str_1001ea4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_1001ea59
#define str_1001ea59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4cU)))
#undef str_1001ea65
#define str_1001ea65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb58U)))
#undef str_1001ea79
#define str_1001ea79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6cU)))
#undef str_1001ea85
#define str_1001ea85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb78U)))
#undef str_1001ea8f
#define str_1001ea8f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb82U)))
#undef str_1001ea99
#define str_1001ea99 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb8cU)))
#undef str_1001ea9f
#define str_1001ea9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb92U)))
#define local_44 (*(int *)(frame + 3468))
#define local_40 (*(char * *)(frame + 3472))
#define local_38 (*(undefined4 *)(frame + 3480))
#define local_34 (*(uint *)(frame + 3484))
#define local_db8 (*(byte (*)[256])(frame + 24))
#define local_cb8 (*(byte (*)[4])(frame + 280))
#define local_838 (*(byte (*)[512])(frame + 1432))
#define local_638 (*(byte (*)[4])(frame + 1944))
#define local_578 (*(char (*)[256])(frame + 2136))
#define local_478 (*(byte (*)[32])(frame + 2392))
#define local_458 (*(byte (*)[128])(frame + 2424))
#define auStack_cb4 (*(ulong (*)[2])(frame + 284))
#define auStack_ca4 (*(ulong (*)[5])(frame + 300))
#define auStack_c7c (*(ulong (*)[136])(frame + 340))
#define local_3a8 (*(undefined8 *)(frame + 2600))
#define aiStack_634 (*(int (*)[47])(frame + 1948))
#define local_328 (*(ulong *)(frame + 2728))
#define local_228 (*(char (*)[256])(frame + 2984))
#define local_128 (*(char * *)(frame + 3240))
#define local_120 (*(long *)(frame + 3248))
#define aiStack_3d8 (*(int (*)[12])(frame + 2552))
#define local_118 (*(long *)(frame + 3256))
#define local_110 (*(long *)(frame + 3264))
#define local_108 (*(long *)(frame + 3272))
#define local_100 (*(char * *)(frame + 3280))
#define uStack_320 (*(ulong *)(frame + 2736))
#define local_f8 (*(byte (*)[64])(frame + 3288))
#define local_b8 (*(ulong *)(frame + 3352))
#define local_b0 (*(ulong *)(frame + 3360))
#define local_a8 (*(byte (*)[44])(frame + 3368))
#define local_7c (*(uint *)(frame + 3412))
#define local_78 (*(ulong *)(frame + 3416))
#define local_70 (*(ulong *)(frame + 3424))
#define local_64 (*(uint *)(frame + 3436))
#define local_60 (*(long *)(frame + 3440))
#define local_58 (*(undefined8 *)(frame + 3448))
#define uStack_50 (*(undefined8 *)(frame + 3456))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042b0
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_100042b0(long param_1,long param_2)

{
  unsigned char frame[3568] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 extraout_RAX = 0;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong *puVar14;
  byte bVar15;
  int iVar16;
  byte bVar17;
  ulong uVar18;
  int *piVar19;
  ulong uVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  byte *pbVar27;
  bool bVar28;

  local_58 = CONCAT44(DAT_100201f0 + -0x3c,0x1e);
  uStack_50 = CONCAT35(PF_PART3(uStack_50, 5),0x12);
  if ((param_2 == 0) || (uVar5 = recovered_100028e0(param_2), (char)uVar5 == '\0')) {
    return;
  }
  pbVar27 = *(byte **)(param_2 + 0x318);
  *(undefined4 *)(param_2 + 0x52c40) = 0;
  *(undefined8 *)(param_2 + 0x544c4) = 0xffffffff00000000;
  local_228[0] = '\0';
  local_120 = param_1;
  local_60 = param_2;
  memset(local_cb8,0,0x480);
  memset(local_638,0,0xc0);
  local_db8[0] = 0;
  if (pbVar27 == (byte *)0x0) {
LAB_1000684a:
    iVar4 = DAT_100201f4;
    iVar25 = (int)uStack_50 + 0x20;
    if ((int)uStack_50 + 0x20 <= DAT_100201f4 + -0x5e) {
      iVar25 = DAT_100201f4 + -0x5e;
    }
    *(int *)(local_60 + 0x544d0) = iVar25;
    iVar25 = (iVar25 - iVar4) + 0x5e;
    iVar4 = -0x14;
    if (-0x14 < iVar25) {
      iVar4 = iVar25;
    }
    iVar25 = *(int *)(local_60 + 0x544cc);
    iVar22 = iVar4 + 0x14;
    if (iVar25 < iVar4 + 0x14) {
      iVar22 = iVar25;
    }
    iVar4 = 0;
    if (-1 < iVar25) {
      iVar4 = iVar22;
    }
    *(int *)(local_60 + 0x544cc) = iVar4;
    return;
  }
  local_100 = (char *)(local_60 + 0x101);
  local_108 = local_60 + 0x52c44;
  local_118 = local_60 + 0x440;
  local_110 = local_60 + 0x444;
  local_b0 = 0xffffffff;
  local_64 = 1;
  local_44 = 0;
  local_70 = 0;
  local_78 = 0;
  local_b8 = 0;
  local_7c = 0;
  uVar23 = 0;
  local_38 = 0;
LAB_100043fa:
  bVar28 = (uVar23 & 1) != 0;
  uVar21 = local_38;
  if (bVar28) {
    uVar21 = 2;
  }
  local_40 = (char *)CONCAT44(PF_PART4(local_40, 4),uVar21);
  local_128 = &DAT_1001f468;
  if (bVar28) {
    local_128 = local_228;
  }
  local_34 = uVar23;
  while( true ) {
    if (*pbVar27 == 0) goto LAB_1000684a;
    if (*pbVar27 == 0x3c) break;
    pbVar6 = (byte *)strchr((char *)pbVar27,0x3c);
    if (pbVar6 == (byte *)0x0) {
      uVar26 = strlen((char *)pbVar27);
    }
    else {
      uVar26 = (long)pbVar6 - (long)pbVar27;
    }
    iVar4 = 0x1ff;
    if ((int)uVar26 < 0x1ff) {
      iVar4 = (int)uVar26;
    }
    memcpy(local_838,pbVar27,(long)iVar4);
    local_838[iVar4] = 0;
    if (local_838[0] != 0) {
      recovered_10010530(local_60,local_838,(int)local_40,local_128,local_64,local_44,
                         (int *)&local_58);
    }
    pbVar27 = pbVar27 + uVar26;
    if (pbVar6 != (byte *)0x0) {
      pbVar27 = pbVar6;
    }
  }
  pcVar7 = strchr((char *)pbVar27,0x3e);
  if (pcVar7 == (char *)0x0) goto LAB_1000684a;
  iVar4 = ~(uint)pbVar27 + (int)pcVar7;
  if (0x1fe < iVar4) {
    iVar4 = 0x1ff;
  }
  memcpy(local_838,pbVar27 + 1,(long)iVar4);
  local_838[iVar4] = 0;
  uVar23 = local_34;
  local_a8[0] = 0;
  local_40 = pcVar7;
  for (pbVar6 = local_838; uVar26 = (ulong)*pbVar6, uVar26 < 0x30; pbVar6 = pbVar6 + 1) {
    if ((0x100003600U >> (uVar26 & 0x3f) & 1) == 0) {
      if (uVar26 == 0x2f) {
        pbVar6 = pbVar6 + 1;
        bVar28 = true;
        goto LAB_10004570;
      }
      break;
    }
  }
  bVar28 = false;
LAB_10004570:
  while ((uVar26 = (ulong)*pbVar6, uVar26 < 0x21 && ((0x100003600U >> (uVar26 & 0x3f) & 1) != 0))) {
    pbVar6 = pbVar6 + 1;
  }
  lVar9 = 0;
  while( true ) {
    bVar12 = (byte)uVar26;
    if ((bVar12 < 0x30) && ((0x800100003601U >> (uVar26 & 0x3f) & 1) != 0)) goto LAB_10004607;
    bVar15 = bVar12 | 0x20;
    if (0x19 < (byte)(bVar12 + 0xbf)) {
      bVar15 = bVar12;
    }
    local_a8[lVar9] = bVar15;
    bVar12 = pbVar6[lVar9 + 1];
    if (((ulong)bVar12 < 0x30) && ((0x800100003601U >> ((ulong)bVar12 & 0x3f) & 1) != 0)) {
      lVar9 = lVar9 + 1;
      goto LAB_10004607;
    }
    if (lVar9 == 0x26) break;
    bVar15 = bVar12 | 0x20;
    if (0x19 < (byte)(bVar12 + 0xbf)) {
      bVar15 = bVar12;
    }
    local_a8[lVar9 + 1] = bVar15;
    uVar26 = (ulong)pbVar6[lVar9 + 2];
    lVar9 = lVar9 + 2;
  }
  lVar9 = 0x27;
LAB_10004607:
  local_a8[lVar9] = 0;
  iVar4 = strncmp((char *)local_838,&DAT_1001e235,3);
  uVar21 = local_38;
  pcVar7 = local_40;
  lVar9 = local_60;
  if (iVar4 == 0) {
    pcVar7 = strstr((char *)(pbVar27 + 4),&DAT_1001e239);
    pbVar27 = (byte *)(local_40 + 1);
    if (pcVar7 != (char *)0x0) {
      pbVar27 = (byte *)(pcVar7 + 3);
    }
    goto LAB_100043fa;
  }
  if (local_a8[0] == 0x21 && !bVar28) {
LAB_10005955:
    pbVar27 = (byte *)(local_40 + 1);
    goto LAB_1000595c;
  }
  if (bVar28) {
    pcVar10 = &DAT_1001e905;
    if (local_a8[0] == 0) {
LAB_10004a40:
      if (*pcVar10 == '\0') goto LAB_10004a8a;
LAB_10004a45:
      bVar28 = recovered_10007de0(local_a8,&DAT_1001e908);
      if (((bVar28) || (bVar28 = recovered_10007de0(local_a8,&DAT_1001e90b), bVar28)) ||
         (bVar28 = recovered_10007de0(local_a8,&DAT_1001e90e), bVar28)) goto LAB_10004a8a;
      bVar28 = recovered_10007de0(local_a8,&DAT_1001e911);
      if (bVar28) {
        if ((int)local_70 == 0) {
          local_70 = 0;
        }
        else {
          local_70 = (ulong)((int)local_70 - 1);
          local_44 = aiStack_3d8[local_70];
        }
        uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
        local_b0 = 0xffffffff;
        pbVar27 = (byte *)(pcVar7 + 1);
        uVar23 = local_34;
        local_38 = uVar21;
        goto LAB_100043fa;
      }
      bVar28 = recovered_10007de0(local_a8,&DAT_1001e916);
      if ((bVar28) || (bVar28 = recovered_10007de0(local_a8,&DAT_1001e919), bVar28)) {
        if ((int)local_b8 != 0) {
          local_b8 = (ulong)((int)local_b8 - 1);
          uVar23 = local_34;
          if ((local_638[local_b8 * 0xc] & 1) == 0) {
            uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
            pbVar27 = (byte *)(pcVar7 + 1);
            local_38 = uVar21;
          }
          else {
            uVar13 = 1;
            if (1 < (int)local_64) {
              uVar13 = local_64;
            }
            iVar4 = aiStack_634[local_b8 * 3 + 1] + uVar13 * 8 + 8;
            if (iVar4 < (int)uStack_50) {
              iVar4 = (int)uStack_50;
            }
            uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),iVar4);
            pbVar27 = (byte *)(pcVar7 + 1);
            local_38 = uVar21;
          }
          goto LAB_100043fa;
        }
        uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
        local_b8 = 0;
      }
      else {
        bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e91c);
        if (bVar28) {
          if (local_7c < 2) {
            local_db8[0] = 0;
            local_7c = 0;
          }
          else {
            local_7c = local_7c - 1;
          }
        }
        else {
          uVar5 = recovered_1000e660(local_a8);
          if ((char)uVar5 != '\0') {
            bVar28 = recovered_10007de0(local_a8,&DAT_1001e924);
            if (bVar28) {
              if ((uint)local_78 == 0) {
                local_78 = 0;
              }
              else {
                uVar23 = (uint)local_78 - 1;
                uVar26 = (ulong)uVar23;
                iVar4 = *(int *)(local_db8 + uVar26 * 0x48 + 0x100);
                local_328 = auStack_cb4[uVar26 * 9];
                uStack_320 = auStack_cb4[uVar26 * 9 + 1];
                if (iVar4 == 1) {
                  local_58 = auStack_cb4[uVar26 * 9];
                  PF_PART4(uStack_50, 4) = (undefined4)(auStack_cb4[uVar26 * 9 + 1] >> 0x20);
                  uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),
                                       *(int *)((long)auStack_c7c + (uVar26 * 0x12 + 1) * 4) +
                                       (int)auStack_c7c[uVar26 * 9 + 1] + 10);
                }
                else {
                  iVar25 = (int)auStack_ca4[uVar26 * 9 + 1];
                  uVar21 = *(undefined4 *)((long)auStack_ca4 + (uVar26 * 0x12 + 5) * 4);
                  uVar11 = auStack_ca4[uVar26 * 9 + 3];
                  uVar3 = *(undefined4 *)((long)auStack_c7c + (uVar26 * 0x12 + -3) * 4);
                  iVar22 = (int)uStack_50;
                  if (iVar4 == 3) {
                    iVar4 = (int)uStack_50;
                    if ((int)uStack_50 < 0x1b) {
                      iVar4 = 0x1a;
                    }
                    iVar16 = (DAT_100201f0 - iVar25) + -0x1c;
                    iVar22 = (DAT_100201f4 - iVar4) + -0x68;
                    if (iVar22 < 0x13) {
                      iVar22 = 0x12;
                    }
                    uVar23 = (uint)auStack_ca4[uVar26 * 9 + 2];
                    uVar18 = (ulong)uVar23;
                    iVar22 = iVar22 + -10;
                    uVar13 = *(uint *)(local_60 + 0x52c40);
                    if (uVar23 < uVar13) {
                      uVar20 = uVar18;
                      if ((uVar13 - uVar23 & 1) != 0) {
                        lVar9 = uVar18 * 0x370;
                        piVar19 = (int *)(local_118 + 4 + lVar9);
                        *piVar19 = *piVar19 + iVar16;
                        piVar19 = (int *)(local_118 + 8 + lVar9);
                        *piVar19 = *piVar19 + iVar22;
                        *(undefined1 *)(local_118 + 0x36c + lVar9) = 1;
                        uVar20 = uVar18 + 1;
                      }
                      if ((ulong)uVar13 - 1 != uVar18) {
                        lVar9 = uVar13 - uVar20;
                        piVar19 = (int *)(uVar20 * 0x370 + local_110);
                        do {
                          *piVar19 = *piVar19 + iVar16;
                          piVar19[1] = piVar19[1] + iVar22;
                          *(undefined1 *)(piVar19 + 0xda) = 1;
                          piVar19[0xdc] = piVar19[0xdc] + iVar16;
                          piVar19[0xdd] = piVar19[0xdd] + iVar22;
                          *(undefined1 *)(piVar19 + 0x1b6) = 1;
                          piVar19 = piVar19 + 0x1b8;
                          lVar9 = lVar9 + -2;
                        } while (lVar9 != 0);
                      }
                    }
                    recovered_1000ec60(local_60,CONCAT44(iVar22,iVar16),CONCAT44(iVar4 + 10,iVar25),
                                       uVar21,(int)uVar11,uVar3,1);
                  }
                  else {
                    if (iVar4 != 2) {
                      local_58 = auStack_cb4[uVar26 * 9];
                      PF_PART4(uStack_50, 0) = (int)auStack_cb4[uVar26 * 9 + 1];
                      if (iVar22 < (int)uStack_50) {
                        iVar22 = (int)uStack_50;
                      }
                      PF_PART4(uStack_50, 4) = (undefined4)(auStack_cb4[uVar26 * 9 + 1] >> 0x20);
                      uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),iVar22);
                      if ((uint)local_70 == 0) {
                        local_70 = 0;
                      }
                      else {
                        uVar23 = (uint)local_70 - 1;
                        local_70 = (ulong)uVar23;
                        local_44 = aiStack_3d8[uVar23];
                      }
                      if (iVar4 != 4) {
                        uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),iVar22 + 8);
                      }
                      goto LAB_10005c96;
                    }
                    uVar18 = auStack_ca4[uVar26 * 9];
                    iVar4 = *(int *)((long)auStack_ca4 + (uVar26 * 0x12 + 1) * 4);
                    iVar22 = (int)uStack_50 - iVar4;
                    if (iVar22 < 0x13) {
                      iVar22 = 0x12;
                    }
                    iVar22 = iVar22 + 10;
                    recovered_1000ec60(local_60,CONCAT44(iVar4,(int)uVar18),CONCAT44(iVar22,iVar25),
                                       uVar21,(int)uVar11,uVar3,0);
                    if ((uVar23 != 0) &&
                       (uVar11 = (ulong)((int)local_78 - 2),
                       *(int *)(local_db8 + uVar11 * 0x48 + 0x100) == 1)) {
                      if (iVar22 < (int)auStack_c7c[uVar11 * 9 + 1]) {
                        iVar22 = (int)auStack_c7c[uVar11 * 9 + 1];
                      }
                      *(int *)(auStack_c7c + uVar11 * 9 + 1) = iVar22;
                      *(int *)(auStack_c7c + uVar11 * 9) = (int)uVar18 + iVar25;
                    }
                  }
                  local_58 = local_328;
                  uStack_50 = uStack_320;
                }
LAB_10005c96:
                local_78 = uVar26;
              }
            }
            else {
              bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e928);
              if ((bVar28) && ((uint)local_70 != 0)) {
                uVar23 = (uint)local_70 - 1;
                local_70 = (ulong)uVar23;
                local_44 = aiStack_3d8[uVar23];
              }
              uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
            }
            uVar21 = local_38;
          }
        }
      }
    }
    else {
      bVar12 = local_a8[0] | 0x20;
      if (0x19 < (byte)(local_a8[0] + 0xbf)) {
        bVar12 = local_a8[0];
      }
      if (!(bVar12 != 0x61 || local_a8[1] != 0)) {
        local_228[0] = '\0';
        pbVar27 = (byte *)(local_40 + 1);
        uVar23 = 0;
        local_38 = uVar21;
        goto LAB_100043fa;
      }
      if (bVar12 != 0x68) goto LAB_10004a45;
      pcVar10 = &DAT_1001e900;
      if (local_a8[1] != 0) {
        bVar12 = local_a8[1] | 0x20;
        if (0x19 < (byte)(local_a8[1] + 0xbf)) {
          bVar12 = local_a8[1];
        }
        if ((bVar12 == 0x31) && (pcVar10 = &DAT_1001e901, local_a8[2] == 0)) goto LAB_100049b2;
code_r0x100049c3:
        pcVar10 = &DAT_1001e903;
        if (local_a8[1] == 0) {
LAB_100049fc:
          if (*pcVar10 == '\0') goto LAB_10004a8a;
        }
        else {
          bVar12 = local_a8[1] | 0x20;
          if (0x19 < (byte)(local_a8[1] + 0xbf)) {
            bVar12 = local_a8[1];
          }
          if ((bVar12 == 0x32) && (pcVar10 = &DAT_1001e904, local_a8[2] == 0)) goto LAB_100049fc;
        }
        pcVar10 = &DAT_1001e906;
        if (local_a8[1] != 0) {
          bVar12 = local_a8[1] | 0x20;
          if (0x19 < (byte)(local_a8[1] + 0xbf)) {
            bVar12 = local_a8[1];
          }
          if ((bVar12 != 0x33) || (pcVar10 = &DAT_1001e907, local_a8[2] != 0)) goto LAB_10004a45;
        }
        goto LAB_10004a40;
      }
LAB_100049b2:
      if (*pcVar10 != '\0') goto code_r0x100049c3;
LAB_10004a8a:
      uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 6);
      local_64 = 1;
      uVar21 = 0;
    }
    pbVar27 = (byte *)(pcVar7 + 1);
    uVar23 = local_34;
    local_38 = uVar21;
    goto LAB_100043fa;
  }
  if (**(char **)(local_60 + 0x328) != '\0') {
    pcVar7 = str_1001e92f;
    if (local_a8[0] != 0) {
      bVar12 = local_a8[0] | 0x20;
      if (0x19 < (byte)(local_a8[0] + 0xbf)) {
        bVar12 = local_a8[0];
      }
      if (bVar12 == 0x6e) {
        pcVar7 = str_1001e92f + 1;
        if (local_a8[1] != 0) {
          bVar12 = local_a8[1] | 0x20;
          if (0x19 < (byte)(local_a8[1] + 0xbf)) {
            bVar12 = local_a8[1];
          }
          if (bVar12 != 0x6f) goto LAB_10004892;
          pcVar7 = str_1001e92f + 2;
          if (local_a8[2] != 0) {
            bVar12 = local_a8[2] | 0x20;
            if (0x19 < (byte)(local_a8[2] + 0xbf)) {
              bVar12 = local_a8[2];
            }
            if (bVar12 != 0x73) goto LAB_10004892;
            pcVar7 = str_1001e92f + 3;
            if (local_a8[3] != 0) {
              bVar12 = local_a8[3] | 0x20;
              if (0x19 < (byte)(local_a8[3] + 0xbf)) {
                bVar12 = local_a8[3];
              }
              if (bVar12 != 99) goto LAB_10004892;
              pcVar7 = str_1001e92f + 4;
              if (local_a8[4] != 0) {
                bVar12 = local_a8[4] | 0x20;
                if (0x19 < (byte)(local_a8[4] + 0xbf)) {
                  bVar12 = local_a8[4];
                }
                if (bVar12 != 0x72) goto LAB_10004892;
                pcVar7 = str_1001e92f + 5;
                if (local_a8[5] != 0) {
                  bVar12 = local_a8[5] | 0x20;
                  if (0x19 < (byte)(local_a8[5] + 0xbf)) {
                    bVar12 = local_a8[5];
                  }
                  if (bVar12 != 0x69) goto LAB_10004892;
                  pcVar7 = str_1001e92f + 6;
                  if (local_a8[6] != 0) {
                    bVar12 = local_a8[6] | 0x20;
                    if (0x19 < (byte)(local_a8[6] + 0xbf)) {
                      bVar12 = local_a8[6];
                    }
                    if (bVar12 != 0x70) goto LAB_10004892;
                    pcVar7 = str_1001e92f + 7;
                    if (local_a8[7] != 0) {
                      bVar12 = local_a8[7] | 0x20;
                      if (0x19 < (byte)(local_a8[7] + 0xbf)) {
                        bVar12 = local_a8[7];
                      }
                      if ((bVar12 != 0x74) || (pcVar7 = str_1001e92f + 8, local_a8[8] != '\0'))
                      goto LAB_10004892;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_10004881;
      }
      goto LAB_10004892;
    }
LAB_10004881:
    if (*pcVar7 != '\0') goto LAB_1000488a;
LAB_10005116:
    pbVar27 = (byte *)recovered_1000ed40((long)local_40,local_a8);
    goto LAB_1000595c;
  }
LAB_1000488a:
  if (local_a8[0] == 0) {
    bVar28 = true;
    pcVar7 = str_1001e938;
LAB_10004d66:
    if (*pcVar7 != '\0') goto LAB_10004d6f;
  }
  else {
LAB_10004892:
    bVar12 = local_a8[0] | 0x20;
    if (0x19 < (byte)(local_a8[0] + 0xbf)) {
      bVar12 = local_a8[0];
    }
    if (bVar12 == 0x69) {
      if (local_a8[1] == 0) {
        bVar28 = false;
        pcVar7 = str_1001e938 + 1;
      }
      else {
        bVar12 = local_a8[1] | 0x20;
        if (0x19 < (byte)(local_a8[1] + 0xbf)) {
          bVar12 = local_a8[1];
        }
        if (bVar12 != 0x6e) goto LAB_10004967;
        if (local_a8[2] == 0) {
          bVar28 = false;
          pcVar7 = str_1001e938 + 2;
          goto LAB_10004d66;
        }
        bVar12 = local_a8[2] | 0x20;
        if (0x19 < (byte)(local_a8[2] + 0xbf)) {
          bVar12 = local_a8[2];
        }
        if (bVar12 != 0x70) goto LAB_10004967;
        if (local_a8[3] == 0) {
          bVar28 = false;
          pcVar7 = str_1001e938 + 3;
          goto LAB_10004d66;
        }
        bVar12 = local_a8[3] | 0x20;
        if (0x19 < (byte)(local_a8[3] + 0xbf)) {
          bVar12 = local_a8[3];
        }
        if (bVar12 != 0x75) goto LAB_10004967;
        if (local_a8[4] == 0) {
          bVar28 = false;
          pcVar7 = str_1001e938 + 4;
        }
        else {
          bVar12 = local_a8[4] | 0x20;
          if (0x19 < (byte)(local_a8[4] + 0xbf)) {
            bVar12 = local_a8[4];
          }
          bVar28 = false;
          if ((bVar12 != 0x74) || (pcVar7 = str_1001e938 + 5, local_a8[5] != 0)) goto LAB_10004d6f;
        }
      }
      goto LAB_10004d66;
    }
LAB_10004967:
    bVar28 = false;
LAB_10004d6f:
    pcVar7 = str_1001e947;
    if (bVar28) {
LAB_10004d7a:
      cVar2 = *pcVar7;
joined_r0x10004d7d:
      if (cVar2 == '\0') goto LAB_10005052;
    }
    else {
      bVar12 = local_a8[0];
      if ((byte)(local_a8[0] + 0xbf) < 0x1a) {
        bVar12 = local_a8[0] | 0x20;
      }
      if (bVar12 == 0x73) {
        pcVar7 = str_1001e947 + 1;
        if (local_a8[1] != 0) {
          bVar12 = local_a8[1] | 0x20;
          if (0x19 < (byte)(local_a8[1] + 0xbf)) {
            bVar12 = local_a8[1];
          }
          if (bVar12 != 0x65) goto LAB_10005035;
          pcVar7 = str_1001e947 + 2;
          if (local_a8[2] != 0) {
            bVar12 = local_a8[2] | 0x20;
            if (0x19 < (byte)(local_a8[2] + 0xbf)) {
              bVar12 = local_a8[2];
            }
            if (bVar12 != 0x6c) goto LAB_10005035;
            pcVar7 = str_1001e947 + 3;
            if (local_a8[3] != 0) {
              bVar12 = local_a8[3] | 0x20;
              if (0x19 < (byte)(local_a8[3] + 0xbf)) {
                bVar12 = local_a8[3];
              }
              if (bVar12 != 0x65) goto LAB_10005035;
              pcVar7 = str_1001e947 + 4;
              if (local_a8[4] != 0) {
                bVar12 = local_a8[4] | 0x20;
                if (0x19 < (byte)(local_a8[4] + 0xbf)) {
                  bVar12 = local_a8[4];
                }
                if (bVar12 != 99) goto LAB_10005035;
                pcVar7 = str_1001e947 + 5;
                if (local_a8[5] != 0) {
                  bVar12 = local_a8[5] | 0x20;
                  if (0x19 < (byte)(local_a8[5] + 0xbf)) {
                    bVar12 = local_a8[5];
                  }
                  if ((bVar12 != 0x74) || (pcVar7 = str_1001e947 + 6, local_a8[6] != 0))
                  goto LAB_10005035;
                }
              }
            }
          }
        }
        goto LAB_10004d7a;
      }
      if (bVar12 == 0x74) {
        pcVar7 = str_1001e93e + 1;
        if (local_a8[1] != 0) {
          bVar12 = local_a8[1] | 0x20;
          if (0x19 < (byte)(local_a8[1] + 0xbf)) {
            bVar12 = local_a8[1];
          }
          if (bVar12 != 0x65) goto LAB_10005035;
          pcVar7 = str_1001e93e + 2;
          if (local_a8[2] != 0) {
            bVar12 = local_a8[2] | 0x20;
            if (0x19 < (byte)(local_a8[2] + 0xbf)) {
              bVar12 = local_a8[2];
            }
            if (bVar12 != 0x78) goto LAB_10005035;
            pcVar7 = str_1001e93e + 3;
            if (local_a8[3] != 0) {
              bVar12 = local_a8[3] | 0x20;
              if (0x19 < (byte)(local_a8[3] + 0xbf)) {
                bVar12 = local_a8[3];
              }
              if (bVar12 != 0x74) goto LAB_10005035;
              pcVar7 = str_1001e93e + 4;
              if (local_a8[4] != 0) {
                bVar12 = local_a8[4] | 0x20;
                if (0x19 < (byte)(local_a8[4] + 0xbf)) {
                  bVar12 = local_a8[4];
                }
                if (bVar12 != 0x61) goto LAB_10005035;
                pcVar7 = str_1001e93e + 5;
                if (local_a8[5] != 0) {
                  bVar12 = local_a8[5] | 0x20;
                  if (0x19 < (byte)(local_a8[5] + 0xbf)) {
                    bVar12 = local_a8[5];
                  }
                  if (bVar12 != 0x72) goto LAB_10005035;
                  pcVar7 = str_1001e93e + 6;
                  if (local_a8[6] != 0) {
                    bVar12 = local_a8[6] | 0x20;
                    if (0x19 < (byte)(local_a8[6] + 0xbf)) {
                      bVar12 = local_a8[6];
                    }
                    if (bVar12 != 0x65) goto LAB_10005035;
                    pcVar7 = str_1001e93e + 7;
                    if (local_a8[7] != 0) {
                      bVar12 = local_a8[7] | 0x20;
                      if (0x19 < (byte)(local_a8[7] + 0xbf)) {
                        bVar12 = local_a8[7];
                      }
                      if ((bVar12 != 0x61) || (pcVar7 = str_1001e93e + 8, local_a8[8] != '\0'))
                      goto LAB_10005035;
                    }
                  }
                }
              }
            }
          }
        }
        cVar2 = *pcVar7;
        goto joined_r0x10004d7d;
      }
    }
LAB_10005035:
    uVar26 = recovered_1000f560(local_60,(char *)local_838,(char *)local_a8);
    if ((char)uVar26 != '\0') goto LAB_10005116;
  }
LAB_10005052:
  bVar12 = local_a8[0];
  pcVar7 = &DAT_1001e951;
  if (local_a8[0] != 0) {
    bVar15 = local_a8[0] | 0x20;
    if (0x19 < (byte)(local_a8[0] + 0xbf)) {
      bVar15 = local_a8[0];
    }
    if (bVar15 == 0x6c) {
      pcVar7 = &DAT_1001e952;
      if (local_a8[1] != 0) {
        bVar15 = local_a8[1] | 0x20;
        if (0x19 < (byte)(local_a8[1] + 0xbf)) {
          bVar15 = local_a8[1];
        }
        if ((bVar15 != 0x69) || (pcVar7 = &DAT_1001e953, local_a8[2] != 0)) goto LAB_1000510a;
      }
      goto LAB_10005101;
    }
    if (bVar15 != 0x62) goto LAB_1000510a;
    pcVar7 = &DAT_1001e94f;
    if (local_a8[1] != 0) {
      bVar15 = local_a8[1] | 0x20;
      if (0x19 < (byte)(local_a8[1] + 0xbf)) {
        bVar15 = local_a8[1];
      }
      if ((bVar15 != 0x72) || (pcVar7 = &DAT_1001e950, local_a8[2] != 0)) goto LAB_1000510a;
    }
    if (*pcVar7 != '\0') goto LAB_1000510a;
    uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 0xe);
    goto LAB_100053c0;
  }
LAB_10005101:
  if (*pcVar7 == '\0') {
    uVar26 = strlen(&DAT_1001e954);
    uVar21 = local_38;
    pcVar7 = local_40;
    if ((uVar26 != 0) && (pbVar6 = (byte *)(local_40 + 1), *pbVar6 != 0)) {
      pbVar27 = pbVar6;
      do {
        uVar11 = 0;
        while (bVar12 = pbVar27[uVar11], bVar12 != 0) {
          bVar15 = bVar12 | 0x20;
          if (0x19 < (byte)(bVar12 + 0xbf)) {
            bVar15 = bVar12;
          }
          bVar12 = (&DAT_1001e954)[uVar11];
          bVar17 = bVar12 | 0x20;
          if (0x19 < (byte)(bVar12 + 0xbf)) {
            bVar17 = bVar12;
          }
          if (bVar15 != bVar17) break;
          uVar11 = uVar11 + 1;
          if (uVar26 == uVar11) goto LAB_10005303;
        }
        if (uVar26 == uVar11) {
LAB_10005303:
          if (((int)local_b8 == 0) ||
             (uVar26 = (ulong)((int)local_b8 - 1), local_638[uVar26 * 0xc] != 1)) {
            uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 2);
            recovered_1000ff40(lVar9,(int *)&local_58,pbVar6,(long)(pbVar27 + ~(ulong)local_40),
                               local_64);
          }
          else {
            recovered_1000f9a0(lVar9,(int *)&local_58,aiStack_634 + uVar26 * 3,
                               aiStack_634 + uVar26 * 3 + 1,pbVar6,
                               (long)(pbVar27 + ~(ulong)local_40),local_64);
          }
          pbVar27 = pbVar27 + 5;
          uVar23 = local_34;
          local_38 = uVar21;
          goto LAB_100043fa;
        }
        pbVar1 = pbVar27 + 1;
        pbVar27 = pbVar27 + 1;
      } while (*pbVar1 != 0);
    }
    uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 2);
    recovered_10010530(lVar9,&DAT_1001e95a,0,&DAT_1001f468,local_64,local_44,(int *)&local_58);
  }
  else {
LAB_1000510a:
    uVar5 = recovered_100108c0(local_a8);
    if ((char)uVar5 != '\0') goto LAB_10005116;
    pcVar7 = &DAT_1001e95c;
    if (bVar12 == 0) {
LAB_10005181:
      if (*pcVar7 == '\0') {
        recovered_10010fa0(lVar9,(undefined4 *)&local_58);
        goto LAB_100053c0;
      }
    }
    else {
      bVar15 = bVar12 | 0x20;
      if (0x19 < (byte)(bVar12 + 0xbf)) {
        bVar15 = bVar12;
      }
      if (bVar15 == 0x68) {
        pcVar7 = &DAT_1001e95d;
        if (local_a8[1] != 0) {
          bVar12 = local_a8[1] | 0x20;
          if (0x19 < (byte)(local_a8[1] + 0xbf)) {
            bVar12 = local_a8[1];
          }
          if ((bVar12 != 0x72) || (pcVar7 = &DAT_1001e95e, local_a8[2] != 0)) goto LAB_1000518a;
        }
        goto LAB_10005181;
      }
    }
LAB_1000518a:
    bVar28 = recovered_10007de0(local_a8,&DAT_1001e916);
    if ((bVar28) || (bVar28 = recovered_10007de0(local_a8,&DAT_1001e919), bVar28)) {
      uVar26 = recovered_10011060(lVar9,(long)local_838,local_a8);
      uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + (uint)(byte)((byte)uVar26 ^ 1) * 2 + 4);
      if ((uint)local_b8 < 0x10) {
        uVar11 = local_b8 & 0xffffffff;
        local_b8 = (ulong)((uint)local_b8 + 1);
        memset(local_638 + uVar11 * 0xc,0,0xc);
        local_638[uVar11 * 0xc] = (byte)uVar26;
        aiStack_634[uVar11 * 3] = (int)local_58;
        aiStack_634[uVar11 * 3 + 1] = (int)uStack_50;
      }
    }
    else {
      bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e91c);
      if (bVar28) {
        local_7c = local_7c + (local_7c < 8);
        local_db8[0] = 0;
      }
      else {
        bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e95f);
        uVar23 = local_34;
        uVar21 = local_38;
        pcVar7 = local_40;
        if (bVar28) {
          if (local_7c == 0) {
            pbVar27 = (byte *)(local_40 + 1);
            local_38 = uVar21;
          }
          else {
            if (local_db8[0] == 0) {
              recovered_10011b60((long)local_838,local_db8);
            }
            pbVar27 = (byte *)(pcVar7 + 1);
            local_38 = uVar21;
          }
          goto LAB_100043fa;
        }
        uVar5 = recovered_1000e660(local_a8);
        if ((char)uVar5 != '\0') {
          bVar28 = recovered_10007de0(local_a8,&DAT_1001e924);
          if (bVar28) {
            recovered_10007e50((char *)local_838,str_1001e966,(char *)&local_328,0x60);
            uVar5 = recovered_10011ea0((byte *)&local_328,str_1001e96c);
            uVar26 = local_78 & 0xffffffff;
            if (((char)uVar5 == '\0') || (0xf < (uint)local_78)) {
              uVar5 = recovered_10011ea0((byte *)&local_328,str_1001e972);
              if (((char)uVar5 == '\0') ||
                 (((uint)local_78 == 0 ||
                  (uVar11 = (ulong)((uint)local_78 - 1),
                  *(int *)(local_db8 + uVar11 * 0x48 + 0x100) != 1 || 0xf < (uint)local_78)))) {
                uVar5 = recovered_10011ea0((byte *)&local_328,&DAT_1001e979);
                if (((char)uVar5 == '\0') || (0xf < (uint)local_78)) {
                  uVar5 = recovered_10011ea0((byte *)&local_328,str_1001e97d);
                  iVar4 = local_44;
                  if (((char)uVar5 == '\0') || (0xf < (uint)local_78)) {
                    if ((uint)local_70 < 0xc) {
                      uVar11 = local_70 & 0xffffffff;
                      local_70 = (ulong)((uint)local_70 + 1);
                      aiStack_3d8[uVar11] = local_44;
                      local_44 = recovered_10012050((char *)local_838,iVar4);
                    }
                    if ((uint)local_78 < 0x10) {
                      local_78 = (ulong)((uint)local_78 + 1);
                      memset(local_db8 + uVar26 * 0x48 + 0x100,0,0x48);
                      pbVar27 = local_db8 + uVar26 * 0x48 + 0x100;
                      pbVar27[0] = 0;
                      uVar11 = uStack_50;
                      pbVar27[1] = 0;
                      pbVar27[2] = 0;
                      pbVar27[3] = 0;
                      auStack_cb4[uVar26 * 9] = local_58;
                      auStack_cb4[uVar26 * 9 + 1] = uVar11;
                      uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
                      goto LAB_100053c0;
                    }
                    goto LAB_100055ba;
                  }
                  memset(local_db8 + uVar26 * 0x48 + 0x100,0,0x48);
                  pbVar27 = local_db8 + uVar26 * 0x48 + 0x100;
                  pbVar27[0] = 4;
                  uVar11 = uStack_50;
                  pbVar27[1] = 0;
                  pbVar27[2] = 0;
                  pbVar27[3] = 0;
                  auStack_cb4[uVar26 * 9] = local_58;
                  auStack_cb4[uVar26 * 9 + 1] = uVar11;
                }
                else {
                  memset(local_db8 + uVar26 * 0x48 + 0x100,0,0x48);
                  pbVar27 = local_db8 + uVar26 * 0x48 + 0x100;
                  pbVar27[0] = 3;
                  uVar11 = uStack_50;
                  pbVar27[1] = 0;
                  pbVar27[2] = 0;
                  pbVar27[3] = 0;
                  auStack_cb4[uVar26 * 9] = local_58;
                  auStack_cb4[uVar26 * 9 + 1] = uVar11;
                  *(undefined4 *)(auStack_ca4 + uVar26 * 9 + 1) = 0xfc;
                  lVar9 = local_60;
                  *(undefined4 *)(auStack_ca4 + uVar26 * 9 + 2) =
                       *(undefined4 *)(local_60 + 0x52c40);
                  *(undefined8 *)((long)auStack_ca4 + (uVar26 * 0x12 + 5) * 4) = 0xffffffff4a;
                  *(undefined4 *)((long)auStack_c7c + (uVar26 * 0x12 + -3) * 4) = 3;
                  recovered_10011fb0(lVar9,((uintptr_t)pf_module_state + 0xa6cU),
                                     (uint *)((long)auStack_ca4 + (uVar26 * 0x12 + 5) * 4));
                  local_58 = CONCAT44(PF_PART4(local_58, 4),10);
                  local_58 = CONCAT44((int)auStack_ca4[uVar26 * 9 + 1] + -0x14,10);
                  uStack_50 = CONCAT35(PF_PART3(uStack_50, 5),0x10000000a);
                }
              }
              else {
                iVar4 = *(int *)((long)auStack_c7c + (uVar11 * 0x12 + -1) * 4);
                iVar25 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar25 = iVar4;
                }
                iVar25 = iVar25 >> 2;
                if (iVar25 < 0x97) {
                  iVar25 = 0x96;
                }
                iVar22 = (int)auStack_c7c[uVar11 * 9 + -1];
                iVar25 = iVar25 + 10;
                if (((int)auStack_c7c[uVar11 * 9] != iVar22) &&
                   (iVar4 + iVar22 < (int)auStack_c7c[uVar11 * 9] + iVar25)) {
                  *(int *)(auStack_c7c + uVar11 * 9) = iVar22;
                  *(int *)((long)auStack_c7c + (uVar11 * 0x12 + 1) * 4) =
                       *(int *)((long)auStack_c7c + (uVar11 * 0x12 + 1) * 4) +
                       (int)auStack_c7c[uVar11 * 9 + 1] + 10;
                  *(undefined4 *)(auStack_c7c + uVar11 * 9 + 1) = 0;
                }
                memset(local_db8 + uVar26 * 0x48 + 0x100,0,0x48);
                pbVar27 = local_db8 + uVar26 * 0x48 + 0x100;
                pbVar27[0] = 2;
                uVar18 = uStack_50;
                pbVar27[1] = 0;
                pbVar27[2] = 0;
                pbVar27[3] = 0;
                auStack_cb4[uVar26 * 9] = local_58;
                auStack_cb4[uVar26 * 9 + 1] = uVar18;
                uVar18 = auStack_c7c[uVar11 * 9];
                auStack_ca4[uVar26 * 9] = uVar18;
                iVar4 = ((int)auStack_c7c[uVar11 * 9 + -1] - (int)uVar18) +
                        *(int *)((long)auStack_c7c + (uVar11 * 0x12 + -1) * 4);
                if (iVar25 < iVar4) {
                  iVar4 = iVar25;
                }
                *(int *)(auStack_ca4 + uVar26 * 9 + 1) = iVar4;
                *(undefined8 *)((long)auStack_ca4 + (uVar26 * 0x12 + 5) * 4) = 0xffffff4a;
                *(undefined4 *)((long)auStack_c7c + (uVar26 * 0x12 + -3) * 4) = 0;
                recovered_10011fb0(local_60,((uintptr_t)pf_module_state + 0xa65U),
                                   (uint *)((long)auStack_ca4 + (uVar26 * 0x12 + 5) * 4));
                iVar25 = (int)auStack_ca4[uVar26 * 9] + 10;
                local_58 = CONCAT44(PF_PART4(local_58, 4),iVar25);
                iVar4 = (int)auStack_ca4[uVar26 * 9 + 1];
                if (iVar4 < 0x45) {
                  iVar4 = 0x44;
                }
                local_58 = CONCAT44(iVar4 + -0x14,iVar25);
                PF_PART5(uStack_50, 0) =
                     (uint5)(*(int *)((long)auStack_ca4 + (uVar26 * 0x12 + 1) * 4) + 10);
              }
            }
            else {
              memset(local_db8 + uVar26 * 0x48 + 0x100,0,0x48);
              pbVar27 = local_db8 + uVar26 * 0x48 + 0x100;
              pbVar27[0] = 1;
              uVar11 = uStack_50;
              pbVar27[1] = 0;
              pbVar27[2] = 0;
              pbVar27[3] = 0;
              auStack_cb4[uVar26 * 9] = local_58;
              auStack_cb4[uVar26 * 9 + 1] = uVar11;
              uVar11 = local_58;
              auStack_c7c[uVar26 * 9 + -1] = local_58;
              *(int *)(auStack_c7c + uVar26 * 9) = (int)uVar11;
              *(int *)((long)auStack_c7c + (uVar26 * 0x12 + 1) * 4) = (int)uStack_50;
              *(undefined4 *)(auStack_c7c + uVar26 * 9 + 1) = 0;
            }
            local_78 = (ulong)((int)local_78 + 1);
            goto LAB_10005955;
          }
          bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e928);
          if ((bVar28) && ((uint)local_70 < 0xc)) {
            uVar26 = local_70 & 0xffffffff;
            local_70 = (ulong)((uint)local_70 + 1);
            aiStack_3d8[uVar26] = local_44;
            local_44 = 1;
          }
LAB_100055ba:
          uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
          goto LAB_100053c0;
        }
        bVar28 = recovered_10007de0(local_a8,&DAT_1001e8ff);
        if (bVar28) {
          recovered_10007e50((char *)local_838,str_1001e966,(char *)&local_328,0x40);
          local_64 = recovered_10012480(lVar9,(char *)&local_328,2);
          uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
LAB_10005661:
          uVar21 = 1;
          pcVar7 = local_40;
          goto LAB_100053db;
        }
        bVar28 = recovered_10007de0(local_a8,&DAT_1001e902);
        if ((((bVar28) || (bVar28 = recovered_10007de0(local_a8,&DAT_1001e905), bVar28)) ||
            (bVar28 = recovered_10007de0(local_a8,&DAT_1001e908), bVar28)) ||
           ((bVar28 = recovered_10007de0(local_a8,&DAT_1001e90b), bVar28 ||
            (bVar28 = recovered_10007de0(local_a8,&DAT_1001e90e), bVar28)))) {
          recovered_10007e50((char *)local_838,str_1001e966,(char *)&local_328,0x40);
          local_64 = recovered_10012480(lVar9,(char *)&local_328,1);
          uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 8);
          goto LAB_10005661;
        }
        bVar28 = recovered_10007de0(local_a8,&DAT_1001e8f6);
        if (bVar28) {
          pbVar27 = (byte *)(local_40 + 1);
          pcVar7 = recovered_10008580((char *)pbVar27,&DAT_1001e984);
          recovered_10007e50((char *)local_838,&DAT_1001e247,local_228,0x100);
          recovered_10007e50((char *)local_838,str_1001e989,local_578,0x80);
          cVar2 = local_228[0];
          local_34 = (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),local_228[0] != '\0');
          if ((pcVar7 != (char *)0x0) && (local_578[0] != '\0')) {
            recovered_10012590(local_60,pbVar27,(long)(pcVar7 + ~(ulong)local_40),(char *)&local_328
                               ,0x100);
            if ((char)local_328 == '\0') {
              pcVar10 = &DAT_1001f468;
              if (cVar2 != '\0') {
                pcVar10 = local_228;
              }
              recovered_10010530(local_60,(byte *)local_578,(uint)(cVar2 != '\0') * 2,pcVar10,
                                 local_64,local_44,(int *)&local_58);
              pbVar27 = (byte *)(pcVar7 + 4);
              local_228[0] = '\0';
              uVar23 = 0;
              goto LAB_100043fa;
            }
          }
        }
        else {
          bVar28 = recovered_10007de0(local_a8,&DAT_1001e994);
          if (bVar28) {
            recovered_10011b60((long)local_838,(byte *)&local_328);
            if (((char)local_328 == '\0') && (local_db8[0] != 0)) {
              pf_varargs_1001df25__8_((char *)&local_328,0x100,&DAT_1001e232,(ulonglong)local_db8);
            }
            recovered_10007e50((char *)local_838,&DAT_1001e998,local_578,0x80);
            pbVar27 = (byte *)&local_3a8;
            recovered_10007e50((char *)local_838,str_1001e99c,(char *)pbVar27,0x20);
            recovered_10007e50((char *)local_838,str_1001e9a2,(char *)local_458,0x20);
            pbVar6 = (byte *)((long)&local_3a8 + 1);
            while( true ) {
              uVar26 = (ulong)*pbVar27;
              if ((0x20 < uVar26) || ((0x100003600U >> (uVar26 & 0x3f) & 1) == 0)) break;
              pbVar27 = pbVar27 + 1;
              pbVar6 = pbVar6 + 1;
            }
            iVar4 = 0;
            if ((byte)(*pbVar27 - 0x30U) < 10) {
              iVar4 = 0;
              do {
                iVar4 = (uint)(byte)((char)uVar26 - 0x30) + iVar4 * 10;
                bVar12 = *pbVar6;
                uVar26 = (ulong)bVar12;
                pbVar6 = pbVar6 + 1;
              } while ((byte)(bVar12 - 0x30U) < 10);
            }
            pbVar6 = local_458;
            pbVar27 = local_458;
            while( true ) {
              pbVar6 = pbVar6 + 1;
              uVar26 = (ulong)*pbVar27;
              if ((0x20 < uVar26) || ((0x100003600U >> (uVar26 & 0x3f) & 1) == 0)) break;
              pbVar27 = pbVar27 + 1;
            }
            iVar25 = 0;
            if ((byte)(*pbVar27 - 0x30U) < 10) {
              iVar25 = 0;
              do {
                iVar25 = (uint)(byte)((char)uVar26 - 0x30) + iVar25 * 10;
                bVar12 = *pbVar6;
                uVar26 = (ulong)bVar12;
                pbVar6 = pbVar6 + 1;
              } while ((byte)(bVar12 - 0x30U) < 10);
            }
            recovered_10013250(local_60,(char *)&local_328,local_578,iVar4,iVar25,local_44,
                               (int *)&local_58);
          }
          else {
            bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e9a9);
            if (bVar28) {
              recovered_10007e50((char *)local_838,&DAT_1001e291,(char *)&local_328,0x100);
              recovered_100135b0(local_120,local_60,(undefined4 *)&local_58,(char *)&local_328,
                                 local_64);
            }
            else {
              bVar28 = recovered_10007de0(local_a8,&DAT_1001e911);
              iVar4 = local_44;
              if (bVar28) {
                if ((uint)local_70 < 0xc) {
                  uVar26 = local_70 & 0xffffffff;
                  local_70 = (ulong)((uint)local_70 + 1);
                  aiStack_3d8[uVar26] = local_44;
                  local_44 = recovered_10012050((char *)local_838,iVar4);
                }
                lVar9 = local_108;
                if ((ulong)*(uint *)(local_60 + 0x544c4) < 0x10) {
                  lVar24 = (ulong)*(uint *)(local_60 + 0x544c4) * 0x188;
                  pcVar7 = (char *)(local_108 + lVar24);
                  memset(pcVar7,0,0x188);
                  recovered_10007e50((char *)local_838,str_1001e9b0,pcVar7,0x100);
                  recovered_10007e50((char *)local_838,str_1001e9b7,(char *)(lVar9 + lVar24 + 0x108)
                                     ,0x80);
                  puVar14 = &local_328;
                  recovered_10007e50((char *)local_838,str_1001e9c0,(char *)puVar14,0x10);
                  if ((char)local_328 == '\0') {
                    puVar14 = (ulong *)&DAT_1001e9c7;
                  }
                  pf_varargs_1001df25__8_
                            ((char *)(lVar9 + 0x100 + lVar24),8,&DAT_1001e232,(ulonglong)puVar14);
                  local_b0 = (ulong)*(uint *)(local_60 + 0x544c4);
                  *(uint *)(local_60 + 0x544c4) = *(uint *)(local_60 + 0x544c4) + 1;
                }
                uStack_50 = CONCAT44(PF_PART4(uStack_50, 4),(int)uStack_50 + 6);
              }
              else {
                bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e938);
                if (bVar28) {
                  recovered_10007e50((char *)local_838,&DAT_1001e9cb,(char *)local_f8,0x20);
                  recovered_10007e50((char *)local_838,&DAT_1001e9d0,(char *)&local_3a8,0x40);
                  recovered_10007e50((char *)local_838,&DAT_1001e9d5,(char *)local_458,0x40);
                  recovered_10007e50((char *)local_838,str_1001e9d8,(char *)&local_328,0x80);
                  bVar28 = recovered_10007de0(local_f8,(byte *)str_1001e9de);
                  if (bVar28) {
LAB_10006091:
                    puVar14 = &local_328;
                  }
                  else {
                    uVar26 = recovered_1000f560(local_60,(char *)local_838,(char *)local_a8);
                    bVar12 = local_f8[0];
                    if ((char)uVar26 != '\0') goto LAB_10006091;
                    if ((local_f8[0] != 0) &&
                       (((bVar28 = recovered_10007de0(local_f8,(byte *)str_1001e9e5), bVar28 ||
                         (bVar28 = recovered_10007de0(local_f8,(byte *)str_1001e9ec), bVar28)) ||
                        (bVar28 = recovered_10007de0(local_f8,(byte *)str_1001e9f3), bVar28)))) {
                      recovered_10007e50((char *)local_838,str_1001e9f9,local_578,0x80);
                      pcVar7 = (char *)&local_328;
                      if ((char)local_328 == '\0') {
                        pcVar7 = str_1001ea01;
                      }
                      uVar26 = recovered_100142a0((char *)local_838,str_1001ea08);
                      recovered_10013ff0(local_60,pcVar7,(undefined1 *)&local_3a8,
                                         (undefined1 *)&local_328,local_578,(int)local_b0,
                                         (char)uVar26,local_44,(int *)&local_58);
                      goto LAB_100053c0;
                    }
                    bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea11);
                    if ((!bVar28) &&
                       (bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea1a), !bVar28)) {
                      bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea2b);
                      if (((!bVar28) &&
                          (bVar28 = recovered_10007de0(local_f8,&DAT_1001ea31), !bVar28)) &&
                         (((((bVar12 == 0 ||
                             (((bVar28 = recovered_10007de0(local_f8,&DAT_1001ea36), bVar28 ||
                               (bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea3b), bVar28))
                              || (bVar28 = recovered_10007de0(local_f8,&DAT_1001ea42), bVar28)))) ||
                            (((bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea46), bVar28 ||
                              (bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea4c), bVar28))
                             || (bVar28 = recovered_10007de0(local_f8,&DAT_1001ea55), bVar28)))) ||
                           ((bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea59), bVar28 ||
                            (bVar28 = recovered_10007de0(local_f8,&DAT_1001ea60), bVar28)))) ||
                          ((bVar28 = recovered_10007de0(local_f8,(byte *)str_1001ea65), bVar28 ||
                           (bVar28 = recovered_10007de0(local_f8,&DAT_1001ea74), bVar28)))))) {
                        recovered_100143d0(local_60,(char *)&local_3a8,(char *)local_458,
                                           (undefined1 *)&local_328,(int)local_b0,local_44,
                                           (int *)&local_58);
                      }
                      goto LAB_100053c0;
                    }
                    uVar26 = recovered_100142a0((char *)local_838,str_1001ea20);
                    if ((char)uVar26 == '\0') goto LAB_100053c0;
                    puVar14 = &local_328;
                    if ((char)local_328 == '\0') {
                      puVar14 = (ulong *)&DAT_1001ea28;
                    }
                  }
                  recovered_10013ee0(local_60,(undefined1 *)&local_3a8,local_458,
                                     (undefined1 *)puVar14,(int)local_b0);
                }
                else {
                  bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e93e);
                  if (!bVar28) {
                    bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e947);
                    if (bVar28) {
                      pcVar7 = local_40 + 1;
                      pcVar10 = recovered_10008580(pcVar7,str_1001ea85);
                      recovered_10007e50((char *)local_838,&DAT_1001e9d0,local_578,0x40);
                      recovered_10007e50((char *)local_838,&DAT_1001e9d5,(char *)&local_3a8,0x40);
                      local_328 = local_328 & 0xffffffffffffff00;
                      if (pcVar10 != (char *)0x0) {
                        recovered_100145c0(pcVar7,pcVar10,(char *)&local_328);
                      }
                      uVar26 = recovered_1000f560(local_60,(char *)local_838,(char *)local_a8);
                      if ((char)uVar26 == '\0') {
                        recovered_100143d0(local_60,local_578,(char *)&local_3a8,
                                           (undefined1 *)&local_328,(int)local_b0,local_44,
                                           (int *)&local_58);
                      }
                      else {
                        recovered_10013ee0(local_60,local_578,(undefined1 *)&local_3a8,
                                           (undefined1 *)&local_328,(int)local_b0);
                      }
                      if (pcVar10 != (char *)0x0) {
                        pbVar27 = (byte *)(pcVar10 + 9);
                        goto LAB_1000595c;
                      }
                    }
                    else {
                      bVar28 = recovered_10007de0(local_a8,(byte *)str_1001e9ec);
                      if (bVar28) {
                        pbVar27 = (byte *)(local_40 + 1);
                        pcVar7 = recovered_10008580((char *)pbVar27,str_1001ea8f);
                        recovered_10007e50((char *)local_838,&DAT_1001e9cb,(char *)local_478,0x20);
                        recovered_10007e50((char *)local_838,&DAT_1001e9d0,(char *)local_f8,0x40);
                        recovered_10007e50((char *)local_838,str_1001e9d8,(char *)&local_328,0x80);
                        recovered_10007e50((char *)local_838,str_1001e989,(char *)&local_3a8,0x80);
                        local_578[0] = '\0';
                        recovered_10007e50((char *)local_838,str_1001e9f9,(char *)local_458,0x80);
                        if (pcVar7 != (char *)0x0) {
                          recovered_10012590(local_60,pbVar27,(long)(pcVar7 + ~(ulong)local_40),
                                             local_578,0x80);
                        }
                        bVar28 = recovered_10007de0(local_478,(byte *)str_1001ea2b);
                        if (!bVar28) {
                          pcVar10 = local_578;
                          if ((local_578[0] == '\0') &&
                             (pcVar10 = (char *)&local_3a8, (byte)local_3a8 == 0)) {
                            pcVar10 = (char *)&local_328;
                            if ((char)local_328 == '\0') {
                              pcVar10 = str_1001ea01;
                            }
                          }
                          uVar26 = recovered_100142a0((char *)local_838,str_1001ea08);
                          recovered_10013ff0(local_60,pcVar10,local_f8,(undefined1 *)&local_328,
                                             local_458,(int)local_b0,(char)uVar26,local_44,
                                             (int *)&local_58);
                        }
                        if (pcVar7 != (char *)0x0) {
                          pbVar27 = (byte *)(pcVar7 + 9);
                          goto LAB_1000595c;
                        }
                      }
                      else {
                        bVar28 = recovered_10007de0(local_a8,(byte *)str_1001ea99);
                        if (bVar28) {
                          pcVar7 = local_40 + 1;
                          pcVar8 = recovered_10008580(pcVar7,str_1001ea9f);
                          pcVar10 = local_100;
                          if (pcVar8 != (char *)0x0) {
                            iVar4 = ~(uint)local_40 + (int)pcVar8;
                            if (0x3e < iVar4) {
                              iVar4 = 0x3f;
                            }
                            memcpy(local_100,pcVar7,(long)iVar4);
                            pcVar10[iVar4] = '\0';
                            recovered_10008d20(pcVar10,(char *)&local_328,0x40);
                            pf_varargs_1001df25__8_
                                      (pcVar10,0x40,&DAT_1001e232,(ulonglong)&local_328);
                            pbVar27 = (byte *)(pcVar8 + 8);
                            goto LAB_1000595c;
                          }
                        }
                      }
                    }
                    goto LAB_100053c0;
                  }
                  pcVar7 = local_40 + 1;
                  pcVar10 = recovered_10008580(pcVar7,str_1001ea79);
                  recovered_10007e50((char *)local_838,&DAT_1001e9d0,(char *)&local_3a8,0x40);
                  recovered_10007e50((char *)local_838,&DAT_1001e9d5,(char *)local_458,0x40);
                  local_328 = local_328 & 0xffffffffffffff00;
                  if (pcVar10 != (char *)0x0) {
                    iVar4 = ~(uint)local_40 + (int)pcVar10;
                    if (0xfe < iVar4) {
                      iVar4 = 0xff;
                    }
                    memcpy(&local_328,pcVar7,(long)iVar4);
                    *(undefined1 *)((long)&local_328 + (long)iVar4) = 0;
                  }
                  recovered_10008d20((char *)&local_328,local_578,0x100);
                  uVar26 = recovered_1000f560(local_60,(char *)local_838,(char *)local_a8);
                  if ((char)uVar26 == '\0') {
                    recovered_100143d0(local_60,(char *)&local_3a8,(char *)local_458,local_578,
                                       (int)local_b0,local_44,(int *)&local_58);
                  }
                  else {
                    recovered_10013ee0(local_60,(undefined1 *)&local_3a8,local_458,local_578,
                                       (int)local_b0);
                  }
                  if (pcVar10 != (char *)0x0) {
                    pbVar27 = (byte *)(pcVar10 + 0xb);
LAB_1000595c:
                    uVar23 = local_34;
                    goto LAB_100043fa;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_100053c0:
    pcVar7 = local_40;
    uVar21 = local_38;
  }
LAB_100053db:
  pbVar27 = (byte *)(pcVar7 + 1);
  uVar23 = local_34;
  local_38 = uVar21;
  goto LAB_100043fa;
}

#undef DAT_1001e232
#undef DAT_1001e235
#undef DAT_1001e239
#undef DAT_1001e247
#undef DAT_1001e291
#undef DAT_1001e8f6
#undef DAT_1001e8ff
#undef DAT_1001e900
#undef DAT_1001e901
#undef DAT_1001e902
#undef DAT_1001e903
#undef DAT_1001e904
#undef DAT_1001e905
#undef DAT_1001e906
#undef DAT_1001e907
#undef DAT_1001e908
#undef DAT_1001e90b
#undef DAT_1001e90e
#undef DAT_1001e911
#undef DAT_1001e916
#undef DAT_1001e919
#undef DAT_1001e924
#undef DAT_1001e94f
#undef DAT_1001e950
#undef DAT_1001e951
#undef DAT_1001e952
#undef DAT_1001e953
#undef DAT_1001e954
#undef DAT_1001e95a
#undef DAT_1001e95c
#undef DAT_1001e95d
#undef DAT_1001e95e
#undef DAT_1001e979
#undef DAT_1001e984
#undef DAT_1001e994
#undef DAT_1001e998
#undef DAT_1001e9c7
#undef DAT_1001e9cb
#undef DAT_1001e9d0
#undef DAT_1001e9d5
#undef DAT_1001ea28
#undef DAT_1001ea31
#undef DAT_1001ea36
#undef DAT_1001ea42
#undef DAT_1001ea55
#undef DAT_1001ea60
#undef DAT_1001ea74
#undef DAT_1001f468
#undef DAT_100201f0
#undef DAT_100201f4
#undef str_1001e91c
#undef str_1001e928
#undef str_1001e92f
#undef str_1001e938
#undef str_1001e93e
#undef str_1001e947
#undef str_1001e95f
#undef str_1001e966
#undef str_1001e96c
#undef str_1001e972
#undef str_1001e97d
#undef str_1001e989
#undef str_1001e99c
#undef str_1001e9a2
#undef str_1001e9a9
#undef str_1001e9b0
#undef str_1001e9b7
#undef str_1001e9c0
#undef str_1001e9d8
#undef str_1001e9de
#undef str_1001e9e5
#undef str_1001e9ec
#undef str_1001e9f3
#undef str_1001e9f9
#undef str_1001ea01
#undef str_1001ea08
#undef str_1001ea11
#undef str_1001ea1a
#undef str_1001ea20
#undef str_1001ea2b
#undef str_1001ea3b
#undef str_1001ea46
#undef str_1001ea4c
#undef str_1001ea59
#undef str_1001ea65
#undef str_1001ea79
#undef str_1001ea85
#undef str_1001ea8f
#undef str_1001ea99
#undef str_1001ea9f
#undef local_44
#undef local_40
#undef local_38
#undef local_34
#undef local_db8
#undef local_cb8
#undef local_838
#undef local_638
#undef local_578
#undef local_478
#undef local_458
#undef auStack_cb4
#undef auStack_ca4
#undef auStack_c7c
#undef local_3a8
#undef aiStack_634
#undef local_328
#undef local_228
#undef local_128
#undef local_120
#undef aiStack_3d8
#undef local_118
#undef local_110
#undef local_108
#undef local_100
#undef uStack_320
#undef local_f8
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_7c
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef uStack_50

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001edbb
#define DAT_1001edbb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaeU)))
#undef DAT_1001edc1
#define DAT_1001edc1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeb4U)))
#undef DAT_1001edc6
#define DAT_1001edc6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeb9U)))
#undef DAT_100200e0
#define DAT_100200e0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x21d3U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef str_1001e30e
#define str_1001e30e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_1001e346
#define str_1001e346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x439U)))
#undef str_1001ec2e
#define str_1001ec2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd21U)))
#undef str_1001ec4c
#define str_1001ec4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd3fU)))
#undef str_1001ecb3
#define str_1001ecb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xda6U)))
#undef str_1001ecbd
#define str_1001ecbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_1001ecc6
#define str_1001ecc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb9U)))
#undef str_1001ece4
#define str_1001ece4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd7U)))
#undef str_1001ecf0
#define str_1001ecf0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde3U)))
#undef str_1001ed2d
#define str_1001ed2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe20U)))
#undef str_1001ed37
#define str_1001ed37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe2aU)))
#undef str_1001ed42
#define str_1001ed42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe35U)))
#undef str_1001ed52
#define str_1001ed52 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe45U)))
#undef str_1001ed5b
#define str_1001ed5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe4eU)))
#undef str_1001ed74
#define str_1001ed74 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe67U)))
#undef str_1001ed88
#define str_1001ed88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe7bU)))
#undef str_1001ed97
#define str_1001ed97 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8aU)))
#undef str_1001edcb
#define str_1001edcb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xebeU)))
#undef str_1001eddf
#define str_1001eddf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xed2U)))
#undef str_1001ee0d
#define str_1001ee0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf00U)))
#undef str_1001f156
#define str_1001f156 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1249U)))
#define local_598 (*(char (*)[256])(frame + 24))
#define local_498 (*(char (*)[256])(frame + 280))
#define local_398 (*(byte (*)[256])(frame + 536))
#define local_298 (*(byte (*)[256])(frame + 792))
#define local_198 (*(char (*)[64])(frame + 1048))
#define local_158 (*(byte (*)[128])(frame + 1112))
#define local_d8 (*(char *)(frame + 1240))
#define local_d7 (*(char (*)[103])(frame + 1241))
#define local_70 (*(char * *)(frame + 1344))
#define local_68 (*(ulong *)(frame + 1352))
#define local_5c (*(undefined4 *)(frame + 1364))
#define local_58 (*(undefined4 *)(frame + 1368))
#define local_54 (*(int *)(frame + 1372))
#define local_50 (*(undefined1 * *)(frame + 1376))
#define local_48 (*(char * *)(frame + 1384))
#define local_40 (*(char * *)(frame + 1392))
#define local_32 (*(undefined1 *)(frame + 1406))
#define local_31 (*(char *)(frame + 1407))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068b0
 */

void recovered_100068b0(ulong param_1,long param_2,byte *param_3)

{
  unsigned char frame[1488] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  char *pcVar15;
  byte *pbVar16;

  if (param_3 == (byte *)0x0 || param_2 == 0) {
    return;
  }
  uVar6 = recovered_100028e0(param_2);
  if ((char)uVar6 == '\0') {
    pcVar11 = str_1001e346;
    goto LAB_10006ad5;
  }
  local_48 = (char *)(param_2 + 1);
  pf_varargs_1001df25__8_(local_598,0x100,&DAT_1001e232,(ulonglong)local_48);
  local_70 = (char *)(param_2 + 0x101);
  pf_varargs_1001df25__8_(local_198,0x40,&DAT_1001e232,(ulonglong)local_70);
  pbVar16 = (byte *)(param_2 + 0x201);
  pf_varargs_1001df25__8_(local_498,0x100,&DAT_1001e232,(ulonglong)pbVar16);
  local_32 = *(undefined1 *)(param_2 + 0x308);
  local_5c = *(undefined4 *)(param_2 + 0x304);
  local_58 = *(undefined4 *)(param_2 + 0x544cc);
  recovered_100023c0(param_1);
  bVar1 = *param_3;
  if (*(char *)(param_1 + 0x205e34) == '\x01') {
    if (bVar1 != 0) {
      bVar9 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar9 = bVar1;
      }
      if (bVar9 != 0x68) goto LAB_10006af9;
      bVar9 = param_3[1];
      if (bVar9 != 0) {
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 != 0x74) || (bVar9 = param_3[2], bVar9 == 0)) goto code_r0x10006d37;
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 != 0x74) || (bVar9 = param_3[3], bVar9 == 0)) goto code_r0x10006d37;
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 != 0x70) || (bVar9 = param_3[4], bVar9 == 0)) goto code_r0x10006d37;
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 != 0x3a) || (bVar9 = param_3[5], bVar9 == 0)) goto code_r0x10006d37;
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 != 0x2f) || (bVar9 = param_3[6], bVar9 == 0)) goto code_r0x10006d37;
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if (bVar13 != 0x2f) goto code_r0x10006d37;
LAB_10006aa9:
        pcVar11 = str_1001ec2e;
LAB_10006ad5:
        pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,(ulonglong)pcVar11);
        *(undefined1 *)(param_1 + 0x57ee) = 1;
        return;
      }
code_r0x10006d37:
      bVar9 = param_3[1];
      if (bVar9 != 0) {
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 == 0x74) && (bVar9 = param_3[2], bVar9 != 0)) {
          bVar13 = bVar9 | 0x20;
          if (0x19 < (byte)(bVar9 + 0xbf)) {
            bVar13 = bVar9;
          }
          if ((bVar13 == 0x74) && (bVar9 = param_3[3], bVar9 != 0)) {
            bVar13 = bVar9 | 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar13 = bVar9;
            }
            if ((bVar13 == 0x70) && (bVar9 = param_3[4], bVar9 != 0)) {
              bVar13 = bVar9 | 0x20;
              if (0x19 < (byte)(bVar9 + 0xbf)) {
                bVar13 = bVar9;
              }
              if ((bVar13 == 0x73) && (bVar9 = param_3[5], bVar9 != 0)) {
                bVar13 = bVar9 | 0x20;
                if (0x19 < (byte)(bVar9 + 0xbf)) {
                  bVar13 = bVar9;
                }
                if ((bVar13 == 0x3a) && (bVar9 = param_3[6], bVar9 != 0)) {
                  bVar13 = bVar9 | 0x20;
                  if (0x19 < (byte)(bVar9 + 0xbf)) {
                    bVar13 = bVar9;
                  }
                  if ((bVar13 == 0x2f) && (bVar9 = param_3[7], bVar9 != 0)) {
                    bVar13 = bVar9 | 0x20;
                    if (0x19 < (byte)(bVar9 + 0xbf)) {
                      bVar13 = bVar9;
                    }
                    if (bVar13 == 0x2f) goto LAB_10006aa9;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_10006af9;
    }
  }
  else {
    if (bVar1 == 0) goto LAB_10007157;
LAB_10006af9:
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    if (bVar9 == 0x68) {
      bVar1 = param_3[1];
      if (bVar1 == 0) {
code_r0x10006c1f:
        bVar1 = param_3[1];
        if (bVar1 != 0) {
          bVar9 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar9 = bVar1;
          }
          if ((bVar9 == 0x74) && (bVar1 = param_3[2], bVar1 != 0)) {
            bVar9 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar9 = bVar1;
            }
            if ((bVar9 == 0x74) && (bVar1 = param_3[3], bVar1 != 0)) {
              bVar9 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar9 = bVar1;
              }
              if ((bVar9 == 0x70) && (bVar1 = param_3[4], bVar1 != 0)) {
                bVar9 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar9 = bVar1;
                }
                if ((bVar9 == 0x73) && (bVar1 = param_3[5], bVar1 != 0)) {
                  bVar9 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar9 = bVar1;
                  }
                  if ((bVar9 == 0x3a) && (bVar1 = param_3[6], bVar1 != 0)) {
                    bVar9 = bVar1 | 0x20;
                    if (0x19 < (byte)(bVar1 + 0xbf)) {
                      bVar9 = bVar1;
                    }
                    if ((bVar9 == 0x2f) && (bVar1 = param_3[7], bVar1 != 0)) {
                      bVar9 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar9 = bVar1;
                      }
                      if (bVar9 == 0x2f) goto LAB_10006bee;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        bVar9 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if ((bVar9 != 0x74) || (bVar1 = param_3[2], bVar1 == 0)) goto code_r0x10006c1f;
        bVar9 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if ((bVar9 != 0x74) || (bVar1 = param_3[3], bVar1 == 0)) goto code_r0x10006c1f;
        bVar9 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if ((bVar9 != 0x70) || (bVar1 = param_3[4], bVar1 == 0)) goto code_r0x10006c1f;
        bVar9 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if ((bVar9 != 0x3a) || (bVar1 = param_3[5], bVar1 == 0)) goto code_r0x10006c1f;
        bVar9 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if ((bVar9 != 0x2f) || (bVar1 = param_3[6], bVar1 == 0)) goto code_r0x10006c1f;
        bVar9 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if (bVar9 != 0x2f) goto code_r0x10006c1f;
LAB_10006bee:
        uVar7 = strlen(&DAT_1001edbb);
        if (uVar7 != 0) {
          uVar12 = 0;
          while ((0x3f < (ulong)param_3[uVar12] ||
                 ((0x8000000800000001U >> ((ulong)param_3[uVar12] & 0x3f) & 1) == 0))) {
            uVar12 = uVar12 + 1;
          }
          if (uVar7 <= uVar12) {
            uVar14 = 0;
            do {
              bVar1 = param_3[uVar12 + (uVar14 - uVar7)];
              bVar9 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar9 = bVar1;
              }
              bVar1 = (&DAT_1001edbb)[uVar14];
              bVar13 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar13 = bVar1;
              }
              if (bVar9 != bVar13) goto LAB_10006e72;
              uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
            goto LAB_10007157;
          }
        }
LAB_10006e72:
        uVar7 = strlen(&DAT_1001edc1);
        if (uVar7 != 0) {
          uVar12 = 0;
          while ((0x3f < (ulong)param_3[uVar12] ||
                 ((0x8000000800000001U >> ((ulong)param_3[uVar12] & 0x3f) & 1) == 0))) {
            uVar12 = uVar12 + 1;
          }
          if (uVar7 <= uVar12) {
            uVar14 = 0;
            do {
              bVar1 = param_3[uVar12 + (uVar14 - uVar7)];
              bVar9 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar9 = bVar1;
              }
              bVar1 = (&DAT_1001edc1)[uVar14];
              bVar13 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar13 = bVar1;
              }
              if (bVar9 != bVar13) goto LAB_10006eb2;
              uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
            goto LAB_10007157;
          }
        }
LAB_10006eb2:
        uVar7 = strlen(&DAT_1001edc6);
        if (uVar7 != 0) {
          uVar12 = 0;
          while ((0x3f < (ulong)param_3[uVar12] ||
                 ((0x8000000800000001U >> ((ulong)param_3[uVar12] & 0x3f) & 1) == 0))) {
            uVar12 = uVar12 + 1;
          }
          if (uVar7 <= uVar12) {
            uVar14 = 0;
            do {
              bVar1 = param_3[uVar12 + (uVar14 - uVar7)];
              bVar9 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar9 = bVar1;
              }
              bVar1 = (&DAT_1001edc6)[uVar14];
              bVar13 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar13 = bVar1;
              }
              if (bVar9 != bVar13) goto LAB_10006ef2;
              uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
            goto LAB_10007157;
          }
        }
LAB_10006ef2:
        uVar7 = 0;
        while ((0x3f < (ulong)param_3[uVar7] ||
               ((0x8000000800000001U >> ((ulong)param_3[uVar7] & 0x3f) & 1) == 0))) {
          uVar7 = uVar7 + 1;
        }
        if (3 < uVar7) {
          bVar1 = param_3[uVar7 - 4];
          bVar9 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar9 = bVar1;
          }
          if (bVar9 == 0x2e) {
            bVar1 = param_3[uVar7 - 3];
            bVar9 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar9 = bVar1;
            }
            if (bVar9 == 0x70) {
              bVar1 = param_3[uVar7 - 2];
              bVar9 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar9 = bVar1;
              }
              if (bVar9 == 0x6e) {
                bVar1 = param_3[uVar7 - 1];
                bVar9 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar9 = bVar1;
                }
                if (bVar9 == 0x67) goto LAB_10007157;
              }
            }
          }
        }
        lVar8 = 0;
        do {
          pcVar11 = (char *)(&DAT_100200e0)[lVar8];
          local_40 = (char *)lVar8;
          uVar7 = strlen(pcVar11);
          if (uVar7 != 0) {
            uVar12 = 0;
            while ((0x3f < (ulong)param_3[uVar12] ||
                   ((0x8000000800000001U >> ((ulong)param_3[uVar12] & 0x3f) & 1) == 0))) {
              uVar12 = uVar12 + 1;
            }
            if (uVar7 <= uVar12) {
              uVar14 = 0;
              while( true ) {
                bVar1 = param_3[uVar14 + (uVar12 - uVar7)];
                bVar9 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar9 = bVar1;
                }
                bVar1 = pcVar11[uVar14];
                bVar13 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar13 = bVar1;
                }
                if (bVar9 != bVar13) break;
                uVar14 = uVar14 + 1;
                if (uVar7 == uVar14) {
                  recovered_100164a0(param_1,param_2,param_3,(char *)0x0);
                  return;
                }
              }
            }
          }
          lVar8 = (long)local_40 + 1;
        } while (lVar8 != 0x22);
      }
    }
  }
LAB_10007157:
  *(undefined1 *)(param_2 + 0x141) = 0;
  *(undefined1 *)(param_2 + 0x101) = 0;
  *(undefined4 *)(param_2 + 0x544cc) = 0;
  *(undefined1 *)(param_2 + 0x308) = 0;
  *(undefined1 *)(param_2 + 0x201) = 0;
  iVar5 = Ram0000000000006800;
  iVar3 = -1;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar10 = Ram0000000000006808, 0xb < uVar10)) && (uVar10 = Ram0000000000006808, 0xbf < uVar10)
     ) {
    uVar10 = UINT_000068bc;
    if ((code *)(ulong)uVar10 != (code *)0x0) {
      iVar3 = (*(code *)(ulong)uVar10)();
    }
  }
  local_40 = (char *)(param_2 + 0x141);
  *(int *)(param_2 + 0x304) = iVar3;
  pf_varargs_1001df25__8_(local_48,0x100,&DAT_1001e232,(ulonglong)param_3);
  bVar1 = *param_3;
  if (bVar1 == 0) {
LAB_10007416:
    uVar4 = recovered_100097d0((char *)param_3,(int *)(param_2 + 0x304),pbVar16);
    if ((char)uVar4 == '\0') {
      if ((((*param_3 != 0x2f) &&
           (pcVar11 = strchr((char *)param_3,0x2f), pcVar11 == (char *)0x0)) &&
          (bVar2 = recovered_100171b0((char *)param_3,&DAT_1001edbb), !bVar2)) &&
         (((bVar2 = recovered_100171b0((char *)param_3,&DAT_1001edc1), !bVar2 &&
           (bVar2 = recovered_100171b0((char *)param_3,&DAT_1001edc6), !bVar2)) &&
          (bVar2 = recovered_10016f90((long)param_3), !bVar2)))) {
        recovered_10016e00(param_1,param_2,str_1001edcb,str_1001eddf);
        pcVar11 = str_1001ee0d;
LAB_100075dc:
        pcVar15 = &DAT_1001e232;
        goto LAB_100075e5;
      }
      pf_varargs_1001df25__8_
                ((char *)local_298,0x100,&DAT_1001e232,(ulonglong)(param_3 + (*param_3 == 0x2f)));
      recovered_100098f0(local_298);
      iVar5 = recovered_10002ac0();
      *(int *)(param_2 + 0x304) = iVar5;
      *(undefined1 *)(param_2 + 0x308) = 1;
      pf_varargs_1001df25__8_((char *)pbVar16,0x100,&DAT_1001e232,(ulonglong)local_298);
    }
    else {
      *(undefined1 *)(param_2 + 0x308) = 1;
    }
    bVar2 = recovered_10016f90((long)pbVar16);
    if (bVar2) {
      pf_varargs_1001df25__4__8_
                (local_48,0x100,str_1001e30e,*(uint *)(param_2 + 0x304),(ulonglong)pbVar16);
      recovered_100169b0(param_1,param_2,(char *)pbVar16);
    }
    else {
      uVar6 = recovered_10017050(param_2,(ulong)*(uint *)(param_2 + 0x304),(char *)pbVar16);
      if ((char)uVar6 == '\0') {
        recovered_10016e00(param_1,param_2,str_1001ed88,str_1001ed97);
      }
      else {
        pf_varargs_1001df25__4__8_
                  (local_48,0x100,str_1001e30e,*(uint *)(param_2 + 0x304),(ulonglong)pbVar16);
        recovered_10002b10(param_1,param_2);
        recovered_100042b0(param_1,param_2);
        recovered_10016e90(param_1,param_2);
      }
    }
  }
  else {
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    if (bVar9 != 0x68) goto LAB_10007416;
    bVar9 = param_3[1];
    if (bVar9 == 0) {
code_r0x1000731a:
      bVar9 = param_3[1];
      if (bVar9 != 0) {
        bVar13 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar13 = bVar9;
        }
        if ((bVar13 == 0x74) && (bVar9 = param_3[2], bVar9 != 0)) {
          bVar13 = bVar9 | 0x20;
          if (0x19 < (byte)(bVar9 + 0xbf)) {
            bVar13 = bVar9;
          }
          if ((bVar13 == 0x74) && (bVar9 = param_3[3], bVar9 != 0)) {
            bVar13 = bVar9 | 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar13 = bVar9;
            }
            if ((bVar13 == 0x70) && (bVar9 = param_3[4], bVar9 != 0)) {
              bVar13 = bVar9 | 0x20;
              if (0x19 < (byte)(bVar9 + 0xbf)) {
                bVar13 = bVar9;
              }
              if ((bVar13 == 0x73) && (bVar9 = param_3[5], bVar9 != 0)) {
                bVar13 = bVar9 | 0x20;
                if (0x19 < (byte)(bVar9 + 0xbf)) {
                  bVar13 = bVar9;
                }
                if ((bVar13 == 0x3a) && (bVar9 = param_3[6], bVar9 != 0)) {
                  bVar13 = bVar9 | 0x20;
                  if (0x19 < (byte)(bVar9 + 0xbf)) {
                    bVar13 = bVar9;
                  }
                  if ((bVar13 == 0x2f) && (bVar9 = param_3[7], bVar9 != 0)) {
                    bVar13 = bVar9 | 0x20;
                    if (0x19 < (byte)(bVar9 + 0xbf)) {
                      bVar13 = bVar9;
                    }
                    if (bVar13 == 0x2f) goto LAB_100072f8;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_10007416;
    }
    bVar13 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar13 = bVar9;
    }
    if ((bVar13 != 0x74) || (bVar9 = param_3[2], bVar9 == 0)) goto code_r0x1000731a;
    bVar13 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar13 = bVar9;
    }
    if ((bVar13 != 0x74) || (bVar9 = param_3[3], bVar9 == 0)) goto code_r0x1000731a;
    bVar13 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar13 = bVar9;
    }
    if ((bVar13 != 0x70) || (bVar9 = param_3[4], bVar9 == 0)) goto code_r0x1000731a;
    bVar13 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar13 = bVar9;
    }
    if ((bVar13 != 0x3a) || (bVar9 = param_3[5], bVar9 == 0)) goto code_r0x1000731a;
    bVar13 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar13 = bVar9;
    }
    if ((bVar13 != 0x2f) || (bVar9 = param_3[6], bVar9 == 0)) goto code_r0x1000731a;
    bVar13 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar13 = bVar9;
    }
    if (bVar13 != 0x2f) goto code_r0x1000731a;
LAB_100072f8:
    local_68 = 0;
    uVar7 = 0;
    while ((0x3f < bVar1 || ((0x8000000800000001U >> ((ulong)bVar1 & 0x3f) & 1) == 0))) {
      bVar1 = param_3[uVar7 + 1];
      uVar7 = uVar7 + 1;
    }
    if (uVar7 < 4) {
LAB_10007748:
      local_158[0] = 0;
      local_d8 = '\0';
      iVar5 = Ram0000000000006800;
      if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
          (uVar10 = Ram0000000000006808, 0xb < uVar10)) &&
         (uVar10 = Ram0000000000006808, 0x4f < uVar10)) {
        uVar10 = UINT_0000684c;
        if (((code *)(ulong)uVar10 != (code *)0x0) &&
           (local_50 = (*(code *)(ulong)uVar10)(0x50000), local_50 != (undefined1 *)0x0)) {
          pcVar11 = &local_d8;
          uVar7 = recovered_100099d0(param_1,param_3,local_50,0x50000,&local_68,pcVar11,
                                     (char *)local_158,0x80);
          bVar1 = local_158[0];
          if ((char)uVar7 == '\0') {
            uVar6 = recovered_100028e0(param_2);
            if ((char)uVar6 != '\0') {
              pbVar16 = (byte *)str_1001ed5b;
              if (bVar1 != 0) {
                pbVar16 = local_158;
              }
              pf_varargs_1001df25__8__8__8_
                        (*(char **)(param_2 + 0x310),0x50000,str_1001f156,((uintptr_t)pf_module_state + 0xd64U),((uintptr_t)pf_module_state + 0xd64U),
                         (ulonglong)pbVar16);
              recovered_10002b10(param_1,param_2);
              recovered_100042b0(param_1,param_2);
            }
            pcVar11 = (char *)local_158;
            if (local_158[0] == 0) {
              pcVar11 = str_1001ed74;
            }
            pcVar15 = &DAT_1001e232;
LAB_10007a26:
            pf_varargs_1001df25__8_(local_40,0xc0,pcVar15,(ulonglong)pcVar11);
          }
          else {
            uVar7 = strlen(str_1001ecb3);
            local_31 = local_d8;
            if (local_d8 != '\0' && uVar7 != 0) {
              do {
                uVar12 = 0;
                while (bVar1 = pcVar11[uVar12], bVar1 != 0) {
                  bVar9 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar9 = bVar1;
                  }
                  bVar1 = str_1001ecb3[uVar12];
                  bVar13 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar13 = bVar1;
                  }
                  if (bVar9 != bVar13) break;
                  uVar12 = uVar12 + 1;
                  if (uVar7 == uVar12) goto LAB_1000782e;
                }
                if (uVar7 == uVar12) goto LAB_1000782e;
                pcVar15 = pcVar11 + 1;
                pcVar11 = pcVar11 + 1;
              } while (*pcVar15 != '\0');
            }
            bVar2 = recovered_100163e0((long)param_3);
            if (bVar2) {
LAB_1000782e:
              recovered_1000dd70(str_1001ecbd);
              uVar10 = *(int *)(param_1 + 0x205c50) + 1;
              *(uint *)(param_1 + 0x205c50) = uVar10;
              pcVar11 = (char *)local_298;
              pf_varargs_1001df25__4_(pcVar11,0x60,str_1001ecc6,uVar10);
              uVar10 = recovered_1000ddc0(pcVar11,local_50,(uint)local_68);
              if (uVar10 != 0) {
                iVar5 = recovered_10002ac0();
                *(int *)(param_2 + 0x304) = iVar5;
                *(undefined1 *)(param_2 + 0x308) = 1;
                pf_varargs_1001df25__8_((char *)pbVar16,0x100,&DAT_1001e232,(ulonglong)pcVar11);
                recovered_100169b0(param_1,param_2,(char *)pbVar16);
                pcVar15 = str_1001ec4c;
                goto LAB_10007a26;
              }
              recovered_10016e00(param_1,param_2,str_1001ece4,str_1001ecf0);
            }
            else {
              if (((local_31 != '\0') &&
                  (pcVar11 = recovered_10008580(&local_d8,str_1001ed2d), pcVar11 == (char *)0x0)) &&
                 (pcVar11 = recovered_10008580(&local_d8,str_1001ed37), pcVar11 == (char *)0x0)) {
                pf_varargs_1001df25__8_(local_48,0x100,&DAT_1001e232,(ulonglong)local_598);
                pf_varargs_1001df25__8_(local_70,0x40,&DAT_1001e232,(ulonglong)local_198);
                pf_varargs_1001df25__8_((char *)pbVar16,0x100,&DAT_1001e232,(ulonglong)local_498);
                *(undefined1 *)(param_2 + 0x308) = local_32;
                *(undefined4 *)(param_2 + 0x304) = local_5c;
                *(undefined4 *)(param_2 + 0x544cc) = local_58;
                recovered_100164a0(param_1,param_2,param_3,&local_d8);
                recovered_10002370(local_50);
                return;
              }
              if (*(char **)(param_2 + 0x310) != (char *)0x0) {
                pf_varargs_1001df25__8_
                          (*(char **)(param_2 + 0x310),0x50000,&DAT_1001e232,(ulonglong)local_50);
              }
              pcVar11 = &local_d8;
              if (local_d8 == '\0') {
                pcVar11 = str_1001ed52;
              }
              pf_varargs_1001df25__8_(local_40,0xc0,str_1001ed42,(ulonglong)pcVar11);
              recovered_10002b10(param_1,param_2);
              recovered_100042b0(param_1,param_2);
              recovered_10016e90(param_1,param_2);
            }
          }
          iVar5 = Ram0000000000006800;
          if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
              (uVar10 = Ram0000000000006808, 0xb < uVar10)) &&
             (uVar10 = Ram0000000000006808, 0x53 < uVar10)) {
            uVar10 = UINT_00006850;
            if ((code *)(ulong)uVar10 != (code *)0x0) {
              (*(code *)(ulong)uVar10)(local_50);
            }
          }
          goto LAB_1000759b;
        }
      }
      uVar6 = recovered_100028e0(param_2);
      if ((char)uVar6 != '\0') {
        pf_varargs_1001df25__8__8__8_
                  (*(char **)(param_2 + 0x310),0x50000,str_1001f156,((uintptr_t)pf_module_state + 0xd64U),((uintptr_t)pf_module_state + 0xd64U),((uintptr_t)pf_module_state + 0xd72U)
                  );
        recovered_10002b10(param_1,param_2);
        recovered_100042b0(param_1,param_2);
      }
      pcVar11 = str_1001e346;
      goto LAB_100075dc;
    }
    bVar1 = param_3[uVar7 - 4];
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    if (bVar9 != 0x2e) goto LAB_10007748;
    bVar1 = param_3[uVar7 - 3];
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    if (bVar9 != 0x70) goto LAB_10007748;
    bVar1 = param_3[uVar7 - 2];
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    if (bVar9 != 0x6e) goto LAB_10007748;
    bVar1 = param_3[uVar7 - 1];
    bVar9 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar9 = bVar1;
    }
    if (bVar9 != 0x67) goto LAB_10007748;
    local_54 = 0;
    uVar7 = recovered_10017c90(param_1,param_3,(char *)local_298,(undefined *)0x0,(undefined *)0x0,0
                              );
    if (((char)uVar7 == '\0') ||
       (uVar4 = recovered_100097d0((char *)local_298,&local_54,local_398), (char)uVar4 == '\0'))
    goto LAB_10007748;
    *(int *)(param_2 + 0x304) = local_54;
    *(undefined1 *)(param_2 + 0x308) = 1;
    pf_varargs_1001df25__8_((char *)pbVar16,0x100,&DAT_1001e232,(ulonglong)local_398);
    pf_varargs_1001df25__8_(local_48,0x100,&DAT_1001e232,(ulonglong)param_3);
    recovered_100169b0(param_1,param_2,(char *)pbVar16);
    pcVar15 = str_1001ec4c;
    pcVar11 = (char *)local_398;
LAB_100075e5:
    pf_varargs_1001df25__8_(local_40,0xc0,pcVar15,(ulonglong)pcVar11);
  }
LAB_1000759b:
  recovered_10016aa0(param_2);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001edbb
#undef DAT_1001edc1
#undef DAT_1001edc6
#undef DAT_100200e0
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_000068bc
#undef str_1001e30e
#undef str_1001e346
#undef str_1001ec2e
#undef str_1001ec4c
#undef str_1001ecb3
#undef str_1001ecbd
#undef str_1001ecc6
#undef str_1001ece4
#undef str_1001ecf0
#undef str_1001ed2d
#undef str_1001ed37
#undef str_1001ed42
#undef str_1001ed52
#undef str_1001ed5b
#undef str_1001ed74
#undef str_1001ed88
#undef str_1001ed97
#undef str_1001edcb
#undef str_1001eddf
#undef str_1001ee0d
#undef str_1001f156
#undef local_598
#undef local_498
#undef local_398
#undef local_298
#undef local_198
#undef local_158
#undef local_d8
#undef local_d7
#undef local_70
#undef local_68
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_40
#undef local_32
#undef local_31

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007bf0
 */

void recovered_10007bf0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  if (param_1 != 0) {
    if ((((*(void **)(param_1 + 0x310) != (void *)0x0) &&
         (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x310));
      }
    }
    if (((*(void **)(param_1 + 0x318) != (void *)0x0) &&
        (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
       ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
        ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
       )) {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x318));
      }
    }
    if ((((*(void **)(param_1 + 800) != (void *)0x0) &&
         (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
    {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 800));
      }
    }
    if (((*(void **)(param_1 + 0x328) != (void *)0x0) &&
        (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
       ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
        ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))
       )) {
      uVar2 = UINT_00006850;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)(*(void **)(param_1 + 0x328));
      }
    }
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d70
 */

void recovered_10007d70(char *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_1 != (char *)0x0) {
    uVar1 = strlen(param_1);
    if (param_3 != 0 && uVar1 < param_2 - 1U) {
      pf_varargs_1001df25__8_(param_1 + uVar1,param_2 - uVar1,&DAT_1001e232,param_3);
      return;
    }
  }
  return;
}

#undef DAT_1001e232

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007de0
 */

bool recovered_10007de0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;

  if (param_2 == (byte *)0x0 || param_1 == (byte *)0x0) {
    return false;
  }
  bVar3 = *param_1;
  while( true ) {
    if (bVar3 == 0) {
      return *param_2 == 0;
    }
    param_1 = param_1 + 1;
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar2 != bVar3) {
      return false;
    }
    param_2 = param_2 + 1;
    bVar3 = *param_1;
  }
  return false;
}


#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#define local_138 (*(char (*)[264])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e50
 */

void recovered_10007e50(char *param_1,char *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;

  if (param_2 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = strlen(param_2);
  }
  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (uVar5 == 0 || (param_1 == (char *)0x0 || param_2 == (char *)0x0)) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  pbVar8 = (byte *)(param_1 + uVar5 + 2);
  pcVar10 = param_1;
  do {
    uVar6 = 0;
    do {
      bVar2 = pcVar10[uVar6];
      bVar12 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar12 = bVar2;
      }
      bVar2 = param_2[uVar6];
      bVar13 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar13 = bVar2;
      }
      if (bVar12 != bVar13) goto LAB_10007ee0;
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
    if ((pcVar10 == param_1) ||
       (((ulong)(byte)pcVar10[-1] < 0x3d &&
        ((0x1000800100003600U >> ((ulong)(byte)pcVar10[-1] & 0x3f) & 1) != 0)))) {
      for (pbVar7 = pbVar8; uVar6 = (ulong)pbVar7[-2], uVar6 < 0x3e; pbVar7 = pbVar7 + 1) {
        if ((0x100003600U >> (uVar6 & 0x3f) & 1) == 0) {
          if (uVar6 == 0x3d) goto LAB_10007f90;
          break;
        }
      }
    }
LAB_10007ee0:
    pbVar8 = pbVar8 + 1;
    pcVar1 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
    if (*pcVar1 == '\0') {
      return;
    }
  } while( true );
LAB_10007f90:
  uVar5 = (ulong)pbVar7[-1];
  if (0x27 < uVar5) goto LAB_10007fbc;
  if ((0x100003600U >> (uVar5 & 0x3f) & 1) == 0) {
    if ((0x8400000000U >> (uVar5 & 0x3f) & 1) != 0) {
      uVar3 = (uint)pbVar7[-1];
      uVar5 = (ulong)*pbVar7;
      goto LAB_10007fc1;
    }
    goto LAB_10007fbc;
  }
  pbVar7 = pbVar7 + 1;
  goto LAB_10007f90;
LAB_10007fbc:
  pbVar7 = pbVar7 + -1;
  uVar3 = 0;
LAB_10007fc1:
  if (((char)uVar5 == '\0' || param_4 < 2) || uVar3 == (int)(char)uVar5) {
    lVar11 = 0;
  }
  else {
    lVar9 = 0;
    while (((uVar3 != 0 || (0x3e < (byte)uVar5)) ||
           ((0x4000000100003600U >> (uVar5 & 0x3f) & 1) == 0))) {
      param_3[lVar9] = (byte)uVar5;
      uVar4 = (uint)(char)pbVar7[lVar9 + 1];
      uVar5 = (ulong)uVar4;
      lVar11 = lVar9 + 1;
      if (((uVar4 == 0) || (param_4 <= lVar9 + 2U)) || (lVar9 = lVar11, uVar3 == uVar4))
      goto LAB_10008046;
    }
    lVar11 = lVar9;
  }
LAB_10008046:
  param_3[lVar11] = '\0';
  recovered_10008d20(param_3,local_138,0x100);
  pf_varargs_1001df25__8_(param_3,param_4,&DAT_1001e232,(ulonglong)local_138);
  return;
}

#undef DAT_1001e232
#undef local_138

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008090
 */

undefined8 recovered_10008090(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 in_RAX;
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;

  if (param_2 == (byte *)0x0 || param_1 == 0) {
    return 0;
  }
  bVar2 = *param_2;
  if (bVar2 != 0) {
    lVar1 = 0;
    do {
      bVar3 = *(byte *)(param_1 + lVar1);
      if (bVar3 == 0) {
        return 0;
      }
      bVar4 = bVar3 | 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar4 = bVar3;
      }
      bVar3 = bVar2 | 0x20;
      if (0x19 < (byte)(bVar2 + 0xbf)) {
        bVar3 = bVar2;
      }
      if (bVar4 != bVar3) {
        return 0;
      }
      bVar2 = param_2[lVar1 + 1];
      lVar1 = lVar1 + 1;
    } while (bVar2 != 0);
  }
  return CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef str_1001e24c
#define str_1001e24c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33fU)))
#undef str_1001e254
#define str_1001e254 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x347U)))
#undef str_1001e30e
#define str_1001e30e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#define local_338 (*(byte (*)[256])(frame + 24))
#define local_238 (*(byte (*)[256])(frame + 280))
#define local_138 (*(uint (*)[67])(frame + 536))
#define local_2c (*(uint *)(frame + 804))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008100
 */

void recovered_10008100(long param_1,byte *param_2,char *param_3)

{
  unsigned char frame[880] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint vararg0;
  byte *pbVar6;
  byte bVar7;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (param_2 == (byte *)0x0) {
    return;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    return;
  }
  bVar7 = bVar1 | 0x20;
  if (0x19 < (byte)(bVar1 + 0xbf)) {
    bVar7 = bVar1;
  }
  if (bVar7 == 0x68) {
    bVar7 = param_2[1];
    if (bVar7 != 0) {
      bVar5 = bVar7 | 0x20;
      if (0x19 < (byte)(bVar7 + 0xbf)) {
        bVar5 = bVar7;
      }
      if ((bVar5 == 0x74) && (bVar7 = param_2[2], bVar7 != 0)) {
        bVar5 = bVar7 | 0x20;
        if (0x19 < (byte)(bVar7 + 0xbf)) {
          bVar5 = bVar7;
        }
        if ((bVar5 == 0x74) && (bVar7 = param_2[3], bVar7 != 0)) {
          bVar5 = bVar7 | 0x20;
          if (0x19 < (byte)(bVar7 + 0xbf)) {
            bVar5 = bVar7;
          }
          if ((bVar5 == 0x70) && (bVar7 = param_2[4], bVar7 != 0)) {
            bVar5 = bVar7 | 0x20;
            if (0x19 < (byte)(bVar7 + 0xbf)) {
              bVar5 = bVar7;
            }
            if ((bVar5 == 0x3a) && (bVar7 = param_2[5], bVar7 != 0)) {
              bVar5 = bVar7 | 0x20;
              if (0x19 < (byte)(bVar7 + 0xbf)) {
                bVar5 = bVar7;
              }
              if ((bVar5 == 0x2f) && (bVar7 = param_2[6], bVar7 != 0)) {
                bVar5 = bVar7 | 0x20;
                if (0x19 < (byte)(bVar7 + 0xbf)) {
                  bVar5 = bVar7;
                }
                if (bVar5 == 0x2f) goto LAB_10008351;
              }
            }
          }
        }
      }
    }
    bVar7 = param_2[1];
    if (bVar7 != 0) {
      bVar5 = bVar7 | 0x20;
      if (0x19 < (byte)(bVar7 + 0xbf)) {
        bVar5 = bVar7;
      }
      if ((bVar5 == 0x74) && (bVar7 = param_2[2], bVar7 != 0)) {
        bVar5 = bVar7 | 0x20;
        if (0x19 < (byte)(bVar7 + 0xbf)) {
          bVar5 = bVar7;
        }
        if ((bVar5 == 0x74) && (bVar7 = param_2[3], bVar7 != 0)) {
          bVar5 = bVar7 | 0x20;
          if (0x19 < (byte)(bVar7 + 0xbf)) {
            bVar5 = bVar7;
          }
          if ((bVar5 == 0x70) && (bVar7 = param_2[4], bVar7 != 0)) {
            bVar5 = bVar7 | 0x20;
            if (0x19 < (byte)(bVar7 + 0xbf)) {
              bVar5 = bVar7;
            }
            if ((bVar5 == 0x73) && (bVar7 = param_2[5], bVar7 != 0)) {
              bVar5 = bVar7 | 0x20;
              if (0x19 < (byte)(bVar7 + 0xbf)) {
                bVar5 = bVar7;
              }
              if ((bVar5 == 0x3a) && (bVar7 = param_2[6], bVar7 != 0)) {
                bVar5 = bVar7 | 0x20;
                if (0x19 < (byte)(bVar7 + 0xbf)) {
                  bVar5 = bVar7;
                }
                if ((bVar5 == 0x2f) && (bVar7 = param_2[7], bVar7 != 0)) {
                  bVar5 = bVar7 | 0x20;
                  if (0x19 < (byte)(bVar7 + 0xbf)) {
                    bVar5 = bVar7;
                  }
                  if (bVar5 == 0x2f) goto LAB_10008351;
                }
              }
            }
          }
        }
      }
    }
  }
  if (bVar1 == 0x23) {
    if (*(char *)(param_1 + 1) != '\0') {
      pf_varargs_1001df25__8_(param_3,0x100,&DAT_1001e232,param_1 + 1);
      pcVar2 = strchr(param_3,0x23);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
      recovered_10007d70(param_3,0x100,(long)param_2);
      return;
    }
  }
  else if (bVar1 == 0x5b) {
LAB_10008351:
    pf_varargs_1001df25__8_(param_3,0x100,&DAT_1001e232,(ulonglong)param_2);
    return;
  }
  if (*(char *)(param_1 + 0x554dc) != '\0') {
    uVar3 = recovered_10008f40((byte *)(param_1 + 0x554dc),param_2,param_3);
    if ((char)uVar3 != '\0') {
      return;
    }
    bVar1 = *param_2;
  }
  if (bVar1 == 0x2f) {
    local_138[0] = 0;
    uVar4 = recovered_100095a0(param_1,local_138,local_238);
    if ((char)uVar4 != '\0') {
      pbVar6 = param_2 + 1;
      vararg0 = local_138[0];
      goto LAB_100084ad;
    }
  }
  local_2c = 0;
  uVar4 = recovered_100095a0(param_1,&local_2c,local_238);
  if ((char)uVar4 == '\0') {
    if (*param_2 == 0x2f) {
      pbVar6 = (byte *)(param_1 + 1);
      uVar4 = recovered_10008090((long)pbVar6,(byte *)str_1001e24c);
      if ((((char)uVar4 != '\0') ||
          (uVar4 = recovered_10008090((long)pbVar6,(byte *)str_1001e254), (char)uVar4 != '\0')) &&
         (uVar3 = recovered_10008f40(pbVar6,param_2,param_3), (char)uVar3 != '\0')) {
        return;
      }
    }
    pbVar6 = (byte *)(param_1 + 1);
    uVar4 = recovered_10008090((long)pbVar6,(byte *)str_1001e24c);
    if ((((char)uVar4 == '\0') &&
        (uVar4 = recovered_10008090((long)pbVar6,(byte *)str_1001e254), (char)uVar4 == '\0')) ||
       (uVar3 = recovered_10008f40(pbVar6,param_2,param_3), (char)uVar3 == '\0')) {
      pf_varargs_1001df25__8_(param_3,0x100,&DAT_1001e232,(ulonglong)param_2);
      return;
    }
    return;
  }
  recovered_10009640((char *)local_238,(undefined1 *)local_138);
  pbVar6 = local_338;
  recovered_100096f0((char *)local_138,(char *)param_2,(char *)pbVar6);
  vararg0 = local_2c;
LAB_100084ad:
  pf_varargs_1001df25__4__8_(param_3,0x100,str_1001e30e,vararg0,(ulonglong)pbVar6);
  return;
}

#undef DAT_1001e232
#undef str_1001e24c
#undef str_1001e254
#undef str_1001e30e
#undef local_338
#undef local_238
#undef local_138
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008580
 */

char * recovered_10008580(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;

  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  uVar4 = strlen(param_2);
  if (uVar4 != 0 && param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      uVar5 = 0;
      while (bVar3 = param_1[uVar5], bVar3 != 0) {
        bVar6 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar6 = bVar3;
        }
        bVar3 = param_2[uVar5];
        bVar7 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar7 = bVar3;
        }
        if (bVar6 != bVar7) break;
        uVar5 = uVar5 + 1;
        if (uVar4 == uVar5) {
          return param_1;
        }
      }
      if (uVar4 == uVar5) {
        return param_1;
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
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
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#undef str_1001e320
#define str_1001e320 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x413U)))
#undef str_1001e333
#define str_1001e333 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x426U)))
#define local_2c (*(int *)(frame + 548))
#define local_238 (*(byte (*)[256])(frame + 24))
#define local_138 (*(byte *)(frame + 280))
#define local_137 (*(byte *)(frame + 281))
#define local_136 (*(byte *)(frame + 282))
#define local_135 (*(byte *)(frame + 283))
#define local_134 (*(byte *)(frame + 284))
#define local_133 (*(byte *)(frame + 285))
#define local_132 (*(byte *)(frame + 286))
#define local_131 (*(byte *)(frame + 287))
#define local_38 (*(undefined8 *)(frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008630
 */

ulong recovered_10008630(long param_1,long param_2,char *param_3,undefined1 *param_4,ulong param_5,
                        char *param_6)

{
  unsigned char frame[624] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  char *format;

  local_2c = -1;
  if (((param_4 != (undefined1 *)0x0) && (*param_4 = 0, param_3 != (char *)0x0)) &&
     (*param_3 != '\0')) {
    recovered_10008100(param_2,(byte *)param_3,(char *)&local_138);
    if (local_138 != 0) {
      bVar2 = local_138 | 0x20;
      if (0x19 < (byte)(local_138 + 0xbf)) {
        bVar2 = local_138;
      }
      if (bVar2 == 0x68) {
        if (local_137 != 0) {
          bVar2 = local_137 | 0x20;
          if (0x19 < (byte)(local_137 + 0xbf)) {
            bVar2 = local_137;
          }
          if ((bVar2 != 0x74) || (local_136 == 0)) goto code_r0x100087cf;
          bVar2 = local_136 | 0x20;
          if (0x19 < (byte)(local_136 + 0xbf)) {
            bVar2 = local_136;
          }
          if ((bVar2 != 0x74) || (local_135 == 0)) goto code_r0x100087cf;
          bVar2 = local_135 | 0x20;
          if (0x19 < (byte)(local_135 + 0xbf)) {
            bVar2 = local_135;
          }
          if ((bVar2 != 0x70) || (local_134 == 0)) goto code_r0x100087cf;
          bVar2 = local_134 | 0x20;
          if (0x19 < (byte)(local_134 + 0xbf)) {
            bVar2 = local_134;
          }
          if ((bVar2 != 0x3a) || (local_133 == 0)) goto code_r0x100087cf;
          bVar2 = local_133 | 0x20;
          if (0x19 < (byte)(local_133 + 0xbf)) {
            bVar2 = local_133;
          }
          if ((bVar2 != 0x2f) || (local_132 == 0)) goto code_r0x100087cf;
          bVar2 = local_132 | 0x20;
          if (0x19 < (byte)(local_132 + 0xbf)) {
            bVar2 = local_132;
          }
          if (bVar2 != 0x2f) goto code_r0x100087cf;
LAB_10008798:
          uVar5 = recovered_100099d0(param_1,&local_138,param_4,param_5,&local_38,local_238,param_6,
                                     0x60);
          uVar5 = uVar5 & 0xffffffff;
          goto LAB_10008953;
        }
code_r0x100087cf:
        if (local_137 != 0) {
          bVar2 = local_137 | 0x20;
          if (0x19 < (byte)(local_137 + 0xbf)) {
            bVar2 = local_137;
          }
          if ((bVar2 == 0x74) && (local_136 != 0)) {
            bVar2 = local_136 | 0x20;
            if (0x19 < (byte)(local_136 + 0xbf)) {
              bVar2 = local_136;
            }
            if ((bVar2 == 0x74) && (local_135 != 0)) {
              bVar2 = local_135 | 0x20;
              if (0x19 < (byte)(local_135 + 0xbf)) {
                bVar2 = local_135;
              }
              if ((bVar2 == 0x70) && (local_134 != 0)) {
                bVar2 = local_134 | 0x20;
                if (0x19 < (byte)(local_134 + 0xbf)) {
                  bVar2 = local_134;
                }
                if ((bVar2 == 0x73) && (local_133 != 0)) {
                  bVar2 = local_133 | 0x20;
                  if (0x19 < (byte)(local_133 + 0xbf)) {
                    bVar2 = local_133;
                  }
                  if ((bVar2 == 0x3a) && (local_132 != 0)) {
                    bVar2 = local_132 | 0x20;
                    if (0x19 < (byte)(local_132 + 0xbf)) {
                      bVar2 = local_132;
                    }
                    if ((bVar2 == 0x2f) && (local_131 != 0)) {
                      bVar2 = local_131 | 0x20;
                      if (0x19 < (byte)(local_131 + 0xbf)) {
                        bVar2 = local_131;
                      }
                      if (bVar2 == 0x2f) goto LAB_10008798;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = recovered_100097d0((char *)&local_138,&local_2c,local_238);
    if ((char)uVar3 != '\0') {
      memset(&local_38,0,0xc);
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0xcb < uVar4)
         ) {
        uVar4 = UINT_000068c8;
        if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_100089c8;
        uVar4 = (*(code *)(ulong)uVar4)(local_2c,(char *)local_238,&local_38);
LAB_100089b1:
        if ((uint)local_38 == 0 || uVar4 == 0) goto LAB_100089c8;
        uVar4 = (int)param_5 - 1;
        if (PF_PART4(local_38, 4) < uVar4) {
          uVar4 = PF_PART4(local_38, 4);
        }
        memcpy(param_4,(void *)(ulong)(uint)local_38,(ulong)uVar4);
        param_4[uVar4] = 0;
        uVar5 = CONCAT71((int7)((ulong)param_4 >> 8),1);
        if ((param_6 == (char *)0x0) || (uVar4 == PF_PART4(local_38, 4))) goto LAB_10008953;
        format = str_1001e333;
      }
      else {
        iVar1 = Ram0000000000006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
           ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0x37 < uVar4)
            ))) {
          uVar4 = UINT_00006834;
          if ((code *)(ulong)uVar4 != (code *)0x0) {
            uVar4 = (*(code *)(ulong)uVar4)((char *)local_238,&local_38);
            goto LAB_100089b1;
          }
        }
LAB_100089c8:
        format = str_1001e320;
        uVar5 = 0;
      }
      pf_varargs_1001df25___(param_6,0x60,format);
      goto LAB_10008953;
    }
  }
  uVar5 = 0;
LAB_10008953:
  return uVar5 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8
#undef str_1001e320
#undef str_1001e333
#undef local_2c
#undef local_238
#undef local_138
#undef local_137
#undef local_136
#undef local_135
#undef local_134
#undef local_133
#undef local_132
#undef local_131
#undef local_38

#undef str_1001e7e9
#define str_1001e7e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_1001e83c
#define str_1001e83c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92fU)))
#undef str_1001e84b
#define str_1001e84b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93eU)))
#undef str_1001e85c
#define str_1001e85c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94fU)))
#undef str_1001e866
#define str_1001e866 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x959U)))
#undef str_1001e870
#define str_1001e870 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x963U)))
#undef str_1001e87c
#define str_1001e87c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x96fU)))
#undef str_1001e886
#define str_1001e886 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x979U)))
#undef str_1001e899
#define str_1001e899 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98cU)))
#undef str_1001e8a5
#define str_1001e8a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x998U)))
#undef str_1001e8b2
#define str_1001e8b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a5U)))
#undef str_1001e8b9
#define str_1001e8b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008a30
 */

char * recovered_10008a30(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  char *pcVar8;

  if (param_1 == (char *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = str_1001e83c;
    uVar3 = strlen(str_1001e83c);
    if ((uVar3 != 0) && (*param_1 != '\0')) {
      pcVar4 = param_1;
      do {
        uVar5 = 0;
        while (bVar2 = pcVar4[uVar5], bVar2 != 0) {
          bVar6 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar6 = bVar2;
          }
          bVar2 = str_1001e83c[uVar5];
          bVar7 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar7 = bVar2;
          }
          if (bVar6 != bVar7) break;
          uVar5 = uVar5 + 1;
          if (uVar3 == uVar5) goto LAB_10008d08;
        }
        if (uVar3 == uVar5) goto LAB_10008d08;
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar8 = str_1001e84b;
    uVar3 = strlen(str_1001e84b);
    if ((uVar3 != 0) && (*param_1 != '\0')) {
      pcVar4 = param_1;
      do {
        uVar5 = 0;
        while (bVar2 = pcVar4[uVar5], bVar2 != 0) {
          bVar6 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar6 = bVar2;
          }
          bVar2 = str_1001e84b[uVar5];
          bVar7 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar7 = bVar2;
          }
          if (bVar6 != bVar7) break;
          uVar5 = uVar5 + 1;
          if (uVar3 == uVar5) goto LAB_10008d08;
        }
        if (uVar3 == uVar5) goto LAB_10008d08;
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar8 = str_1001e85c;
    uVar3 = strlen(str_1001e85c);
    if ((uVar3 != 0) && (*param_1 != '\0')) {
      pcVar4 = param_1;
      do {
        uVar5 = 0;
        while (bVar2 = pcVar4[uVar5], bVar2 != 0) {
          bVar6 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar6 = bVar2;
          }
          bVar2 = str_1001e85c[uVar5];
          bVar7 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar7 = bVar2;
          }
          if (bVar6 != bVar7) break;
          uVar5 = uVar5 + 1;
          if (uVar3 == uVar5) goto LAB_10008d08;
        }
        if (uVar3 == uVar5) goto LAB_10008d08;
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar8 = str_1001e866;
    uVar3 = strlen(str_1001e866);
    if ((uVar3 != 0) && (*param_1 != '\0')) {
      pcVar4 = param_1;
      do {
        uVar5 = 0;
        while (bVar2 = pcVar4[uVar5], bVar2 != 0) {
          bVar6 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar6 = bVar2;
          }
          bVar2 = str_1001e866[uVar5];
          bVar7 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar7 = bVar2;
          }
          if (bVar6 != bVar7) break;
          uVar5 = uVar5 + 1;
          if (uVar3 == uVar5) goto LAB_10008d08;
        }
        if (uVar3 == uVar5) {
LAB_10008d08:
          return (char *)CONCAT71((int7)((ulong)pcVar8 >> 8),1);
        }
        pcVar1 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar1 != '\0');
    }
    pcVar4 = recovered_10008580(param_1,str_1001e870);
    pcVar8 = str_1001e7e9 + 0x18;
    if ((((pcVar4 == (char *)0x0) &&
         (pcVar4 = recovered_10008580(param_1,str_1001e87c), pcVar4 == (char *)0x0)) &&
        (pcVar4 = recovered_10008580(param_1,str_1001e886), pcVar4 == (char *)0x0)) &&
       (((pcVar4 = recovered_10008580(param_1,str_1001e899), pcVar4 == (char *)0x0 &&
         (pcVar4 = recovered_10008580(param_1,str_1001e8a5), pcVar4 == (char *)0x0)) &&
        (pcVar4 = recovered_10008580(param_1,str_1001e8b2), pcVar4 == (char *)0x0)))) {
      pcVar8 = recovered_10008580(param_1,str_1001e8b9);
      pcVar8 = (char *)CONCAT71(0x1001e8,pcVar8 != (char *)0x0);
    }
  }
  return pcVar8;
}

#undef str_1001e7e9
#undef str_1001e83c
#undef str_1001e84b
#undef str_1001e85c
#undef str_1001e866
#undef str_1001e870
#undef str_1001e87c
#undef str_1001e886
#undef str_1001e899
#undef str_1001e8a5
#undef str_1001e8b2
#undef str_1001e8b9

#undef DAT_1001e2e5
#define DAT_1001e2e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1001e2ea
#define DAT_1001e2ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ddU)))
#undef str_1001e2df
#define str_1001e2df (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d2U)))
#undef str_1001e2ef
#define str_1001e2ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e2U)))
#undef str_1001e2f6
#define str_1001e2f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e9U)))
#undef str_1001e2fc
#define str_1001e2fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008d20
 */

void recovered_10008d20(char *param_1,char *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  char *a;

  if (((param_2 != (char *)0x0) && (*param_2 = '\0', param_1 != (char *)0x0)) && (*param_1 != '\0'))
  {
    uVar1 = param_3 - 1;
    lVar6 = 0;
    a = param_1;
    do {
      uVar4 = strlen(param_2);
      if (uVar1 <= uVar4) {
        return;
      }
      cVar5 = *a;
      if (cVar5 == '&') {
        iVar3 = strncmp(a,str_1001e2df,5);
        if (iVar3 == 0) {
          uVar4 = strlen(param_2);
          if (uVar4 < uVar1) {
            (param_2 + uVar4)[0] = '&';
            (param_2 + uVar4)[1] = '\0';
          }
LAB_10008d70:
          lVar6 = lVar6 + 4;
        }
        else {
          iVar3 = strncmp(a,&DAT_1001e2e5,4);
          if (iVar3 == 0) {
            uVar4 = strlen(param_2);
            if (uVar4 < uVar1) {
              (param_2 + uVar4)[0] = '<';
              (param_2 + uVar4)[1] = '\0';
            }
          }
          else {
            iVar3 = strncmp(a,&DAT_1001e2ea,4);
            if (iVar3 != 0) {
              iVar3 = strncmp(a,str_1001e2ef,6);
              if (iVar3 == 0) {
                uVar4 = strlen(param_2);
                if (uVar4 < uVar1) {
                  (param_2 + uVar4)[0] = '\"';
                  (param_2 + uVar4)[1] = '\0';
                }
              }
              else {
                iVar3 = strncmp(a,str_1001e2f6,5);
                if (iVar3 == 0) {
                  uVar4 = strlen(param_2);
                  if (uVar4 < uVar1) {
                    (param_2 + uVar4)[0] = '\'';
                    (param_2 + uVar4)[1] = '\0';
                  }
                  goto LAB_10008d70;
                }
                iVar3 = strncmp(a,str_1001e2fc,6);
                if (iVar3 != 0) {
                  cVar5 = *a;
                  goto LAB_10008e60;
                }
                uVar4 = strlen(param_2);
                if (uVar4 < uVar1) {
                  (param_2 + uVar4)[0] = ' ';
                  (param_2 + uVar4)[1] = '\0';
                }
              }
              lVar6 = lVar6 + 5;
              goto LAB_10008d74;
            }
            uVar4 = strlen(param_2);
            if (uVar4 < uVar1) {
              (param_2 + uVar4)[0] = '>';
              (param_2 + uVar4)[1] = '\0';
            }
          }
          lVar6 = lVar6 + 3;
        }
      }
      else {
LAB_10008e60:
        uVar4 = strlen(param_2);
        if (uVar4 < uVar1) {
          param_2[uVar4] = cVar5;
          param_2[uVar4 + 1] = '\0';
        }
      }
LAB_10008d74:
      a = param_1 + lVar6 + 1;
      lVar2 = lVar6 + 1;
      lVar6 = lVar6 + 1;
    } while (param_1[lVar2] != '\0');
  }
  return;
}

#undef DAT_1001e2e5
#undef DAT_1001e2ea
#undef str_1001e2df
#undef str_1001e2ef
#undef str_1001e2f6
#undef str_1001e2fc

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e303
#define DAT_1001e303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3f6U)))
#undef DAT_1001e307
#define DAT_1001e307 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3faU)))
#define local_138 (*(char (*)[264])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f40
 */

ulong recovered_10008f40(byte *param_1,byte *param_2,char *param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  undefined8 unaff_RBX;
  byte bVar8;

  if ((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) {
    bVar2 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar2 = bVar1;
    }
    if (bVar2 == 0x68) {
      bVar1 = param_1[1];
      if (bVar1 == 0) {
code_r0x1000934b:
        bVar1 = param_1[1];
        if (bVar1 != 0) {
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if ((bVar2 == 0x74) && (bVar1 = param_1[2], bVar1 != 0)) {
            bVar2 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar2 = bVar1;
            }
            if ((bVar2 == 0x74) && (bVar1 = param_1[3], bVar1 != 0)) {
              bVar2 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar2 = bVar1;
              }
              if ((bVar2 == 0x70) && (bVar1 = param_1[4], bVar1 != 0)) {
                bVar2 = bVar1 | 0x20;
                if (0x19 < (byte)(bVar1 + 0xbf)) {
                  bVar2 = bVar1;
                }
                if ((bVar2 == 0x73) && (bVar1 = param_1[5], bVar1 != 0)) {
                  bVar2 = bVar1 | 0x20;
                  if (0x19 < (byte)(bVar1 + 0xbf)) {
                    bVar2 = bVar1;
                  }
                  if ((bVar2 == 0x3a) && (bVar1 = param_1[6], bVar1 != 0)) {
                    bVar2 = bVar1 | 0x20;
                    if (0x19 < (byte)(bVar1 + 0xbf)) {
                      bVar2 = bVar1;
                    }
                    if ((bVar2 == 0x2f) && (bVar1 = param_1[7], bVar1 != 0)) {
                      bVar2 = bVar1 | 0x20;
                      if (0x19 < (byte)(bVar1 + 0xbf)) {
                        bVar2 = bVar1;
                      }
                      if (bVar2 == 0x2f) goto LAB_10009085;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if ((bVar2 != 0x74) || (bVar1 = param_1[2], bVar1 == 0)) goto code_r0x1000934b;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if ((bVar2 != 0x74) || (bVar1 = param_1[3], bVar1 == 0)) goto code_r0x1000934b;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if ((bVar2 != 0x70) || (bVar1 = param_1[4], bVar1 == 0)) goto code_r0x1000934b;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if ((bVar2 != 0x3a) || (bVar1 = param_1[5], bVar1 == 0)) goto code_r0x1000934b;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if ((bVar2 != 0x2f) || (bVar1 = param_1[6], bVar1 == 0)) goto code_r0x1000934b;
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if (bVar2 != 0x2f) goto code_r0x1000934b;
LAB_10009085:
        bVar1 = *param_2;
        if (bVar1 != 0) {
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if (bVar2 == 0x68) {
            bVar2 = param_2[1];
            if (bVar2 == 0) {
code_r0x100091c3:
              bVar2 = param_2[1];
              if (bVar2 != 0) {
                bVar8 = bVar2 | 0x20;
                if (0x19 < (byte)(bVar2 + 0xbf)) {
                  bVar8 = bVar2;
                }
                if ((bVar8 == 0x74) && (bVar2 = param_2[2], bVar2 != 0)) {
                  bVar8 = bVar2 | 0x20;
                  if (0x19 < (byte)(bVar2 + 0xbf)) {
                    bVar8 = bVar2;
                  }
                  if ((bVar8 == 0x74) && (bVar2 = param_2[3], bVar2 != 0)) {
                    bVar8 = bVar2 | 0x20;
                    if (0x19 < (byte)(bVar2 + 0xbf)) {
                      bVar8 = bVar2;
                    }
                    if ((bVar8 == 0x70) && (bVar2 = param_2[4], bVar2 != 0)) {
                      bVar8 = bVar2 | 0x20;
                      if (0x19 < (byte)(bVar2 + 0xbf)) {
                        bVar8 = bVar2;
                      }
                      if ((bVar8 == 0x73) && (bVar2 = param_2[5], bVar2 != 0)) {
                        bVar8 = bVar2 | 0x20;
                        if (0x19 < (byte)(bVar2 + 0xbf)) {
                          bVar8 = bVar2;
                        }
                        if ((bVar8 == 0x3a) && (bVar2 = param_2[6], bVar2 != 0)) {
                          bVar8 = bVar2 | 0x20;
                          if (0x19 < (byte)(bVar2 + 0xbf)) {
                            bVar8 = bVar2;
                          }
                          if ((bVar8 == 0x2f) && (bVar2 = param_2[7], bVar2 != 0)) {
                            bVar8 = bVar2 | 0x20;
                            if (0x19 < (byte)(bVar2 + 0xbf)) {
                              bVar8 = bVar2;
                            }
                            if (bVar1 != 0x5b && bVar8 != 0x2f) goto LAB_100092fa;
                            goto LAB_1000945e;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_10009456;
            }
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if ((bVar8 != 0x74) || (bVar2 = param_2[2], bVar2 == 0)) goto code_r0x100091c3;
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if ((bVar8 != 0x74) || (bVar2 = param_2[3], bVar2 == 0)) goto code_r0x100091c3;
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if ((bVar8 != 0x70) || (bVar2 = param_2[4], bVar2 == 0)) goto code_r0x100091c3;
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if ((bVar8 != 0x3a) || (bVar2 = param_2[5], bVar2 == 0)) goto code_r0x100091c3;
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if ((bVar8 != 0x2f) || (bVar2 = param_2[6], bVar2 == 0)) goto code_r0x100091c3;
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if (bVar8 != 0x2f) goto code_r0x100091c3;
          }
          else {
LAB_10009456:
            if (bVar1 != 0x5b) goto LAB_100092fa;
          }
LAB_1000945e:
          uVar6 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
          if (param_3 != (char *)0x0) {
            pf_varargs_1001df25__8_(param_3,0x100,&DAT_1001e232,(ulonglong)param_2);
          }
          goto LAB_10009442;
        }
LAB_100092fa:
        pcVar4 = strstr((char *)param_1,&DAT_1001e303);
        if (pcVar4 != (char *)0x0) {
          if (*param_2 != 0x2f) {
            pf_varargs_1001df25__8_(local_138,0x100,&DAT_1001e232,(ulonglong)param_1);
            pcVar4 = strchr(local_138,0x23);
            if (pcVar4 != (char *)0x0) {
              *pcVar4 = '\0';
            }
            pcVar4 = local_138;
            pcVar5 = strchr(pcVar4,0x3f);
            if (pcVar5 != (char *)0x0) {
              *pcVar5 = '\0';
            }
            pcVar5 = (char *)0x0;
            do {
              if (*pcVar4 == '/') {
                pcVar5 = pcVar4;
              }
              else if (*pcVar4 == '\0') goto code_r0x100094e9;
              pcVar4 = pcVar4 + 1;
            } while( true );
          }
          pcVar4 = strchr(pcVar4 + 3,0x2f);
          if (pcVar4 == (char *)0x0) {
            uVar6 = strlen((char *)param_1);
            iVar3 = (int)uVar6;
          }
          else {
            iVar3 = (int)pcVar4 - (int)param_1;
          }
          iVar7 = 0xff;
          if (iVar3 < 0xff) {
            iVar7 = iVar3;
          }
          memcpy(local_138,param_1,(long)iVar7);
          local_138[iVar7] = '\0';
          goto LAB_1000958a;
        }
      }
    }
  }
  uVar6 = 0;
  goto LAB_10009442;
code_r0x100094e9:
  if ((pcVar5 == (char *)0x0) ||
     (pcVar4 = strstr(local_138,&DAT_1001e303), pcVar5 <= pcVar4 + 2)) {
    recovered_10007d70(local_138,0x100,((uintptr_t)pf_module_state + 0x3ffU));
  }
  else {
    pcVar5[1] = '\0';
  }
LAB_1000958a:
  pf_varargs_1001df25__8__8_(param_3,0x100,&DAT_1001e307,(ulonglong)local_138,(ulonglong)param_2);
  uVar6 = CONCAT71((int7)((ulong)param_2 >> 8),1);
LAB_10009442:
  return uVar6 & 0xffffffff;
}

#undef DAT_1001e232
#undef DAT_1001e303
#undef DAT_1001e307
#undef local_138

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#define uStack_28 (*(undefined8 *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095a0
 */

undefined8 recovered_100095a0(long param_1,uint *param_2,byte *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 extraout_var = 0;
  undefined8 uVar4;

  uStack_28 = (ulong)in_EAX;
  if (param_3 == (byte *)0x0 || param_2 == (uint *)0x0) {
LAB_100095c1:
    uVar4 = 0;
  }
  else {
    *param_3 = 0;
    uVar1 = recovered_100097d0((char *)(param_1 + 1),(int *)((long)&uStack_28 + 4),param_3);
    if ((char)uVar1 == '\0') {
      if ((*(char *)(param_1 + 0x308) != '\x01') || (*(char *)(param_1 + 0x201) == '\0'))
      goto LAB_100095c1;
      *param_2 = *(uint *)(param_1 + 0x304);
      iVar2 = pf_varargs_1001df25__8_((char *)param_3,0x100,&DAT_1001e232,param_1 + 0x201);
      uVar3 = CONCAT44(extraout_var,iVar2);
    }
    else {
      uVar3 = (ulong)PF_PART4(uStack_28, 4);
      *param_2 = PF_PART4(uStack_28, 4);
    }
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar4;
}

#undef DAT_1001e232
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(char *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong n;

  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = strlen(param_1);
  }
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  *param_2 = 0;
  if (uVar1 == 0 || param_1 == (char *)0x0) {
    return;
  }
  while ((param_1[uVar1 - 1] == '/' || (param_1[uVar1 - 1] == '\\'))) {
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      return;
    }
  }
  while ((param_1[uVar1 - 1] != '/' && (param_1[uVar1 - 1] != '\\'))) {
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      return;
    }
  }
  n = 0xff;
  if (uVar1 < 0xff) {
    n = uVar1;
  }
  memcpy(param_2,param_1,n);
  param_2[n] = 0;
  return;
}


#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e30c
#define DAT_1001e30c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ffU)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001e319
#define str_1001e319 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x40cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096f0
 */

void recovered_100096f0(char *param_1,char *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined *vararg1;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (*param_2 == '/') {
    param_2 = param_2 + 1;
  }
  else if (*param_2 == '\0') {
    param_2 = &DAT_1001f468;
    if (param_1 != (char *)0x0) {
      param_2 = param_1;
    }
  }
  else if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = strlen(param_1);
    vararg1 = &DAT_1001e30c;
    if (param_1[uVar1 - 1] == '/') {
      vararg1 = &DAT_1001f468;
    }
    pf_varargs_1001df25__8__8__8_
              (param_3,0x100,str_1001e319,(ulonglong)param_1,(ulonglong)vararg1,(ulonglong)param_2);
    return;
  }
  pf_varargs_1001df25__8_(param_3,0x100,&DAT_1001e232,(ulonglong)param_2);
  return;
}

#undef DAT_1001e232
#undef DAT_1001e30c
#undef DAT_1001f468
#undef str_1001e319

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097d0
 */

undefined4 recovered_100097d0(char *param_1,int *param_2,byte *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  ulong n;

  if ((param_3 != (byte *)0x0 && (param_2 != (int *)0x0 && param_1 != (char *)0x0)) &&
     (*param_3 = 0, *param_1 == '[')) {
    cVar1 = param_1[1];
    pcVar5 = param_1 + 1;
    if (cVar1 == '-') {
      pcVar5 = param_1 + 2;
    }
    cVar2 = param_1[(ulong)(cVar1 == '-') + 1];
    iVar7 = 0;
    if ((byte)(cVar2 - 0x3aU) < 0xf6) {
      return 0;
    }
    pcVar5 = pcVar5 + 3;
    do {
      pcVar4 = pcVar5;
      iVar7 = (uint)(byte)(cVar2 - 0x30) + iVar7 * 10;
      cVar2 = pcVar4[-2];
      pcVar5 = pcVar4 + 1;
    } while ((byte)(cVar2 - 0x30U) < 10);
    if (((cVar2 == ']') && (pcVar4[-1] == ':')) && (*pcVar4 == ';')) {
      pcVar4 = pcVar4 + 2;
      if (*pcVar5 != '/') {
        pcVar4 = pcVar5;
      }
      for (uVar6 = 0; (pcVar4[uVar6] != '\0' && (pcVar4[uVar6] != '>')); uVar6 = uVar6 + 1) {
      }
      n = 0xff;
      if (uVar6 < 0xff) {
        n = uVar6;
      }
      memcpy(param_3,pcVar4,n);
      param_3[n] = 0;
      recovered_100098f0(param_3);
      iVar3 = -iVar7;
      if (cVar1 != '-') {
        iVar3 = iVar7;
      }
      *param_2 = iVar3;
      return CONCAT31((int3)((uint)iVar7 >> 8),*param_3 != 0);
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098f0
 */

void recovered_100098f0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;

  if (param_1 != (byte *)0x0) {
    pbVar5 = param_1;
    while( true ) {
      for (; bVar1 = *param_1, bVar1 == 0x25; param_1 = param_1 + 3) {
        bVar2 = param_1[1];
        iVar4 = (int)(char)bVar2;
        if (iVar4 == 0) goto LAB_10009918;
        bVar3 = param_1[2];
        iVar6 = (int)(char)bVar3;
        if (iVar6 == 0) goto LAB_10009918;
        if ((byte)(bVar2 - 0x30U) < 10) {
          iVar4 = iVar4 + -0x30;
        }
        else if ((byte)(bVar2 + 0x9f) < 6) {
          iVar4 = iVar4 + -0x57;
        }
        else {
          iVar4 = iVar4 + -0x37;
          if (5 < (byte)(bVar2 + 0xbf)) {
            iVar4 = -1;
          }
        }
        if ((byte)(bVar3 - 0x30U) < 10) {
          iVar6 = iVar6 + -0x30;
        }
        else if ((byte)(bVar3 + 0x9f) < 6) {
          iVar6 = iVar6 + -0x57;
        }
        else {
          iVar6 = iVar6 + -0x37;
          if (5 < (byte)(bVar3 + 0xbf)) {
            iVar6 = -1;
          }
        }
        if ((iVar4 < 0) || (iVar6 < 0)) goto LAB_10009918;
        *pbVar5 = (byte)iVar6 | (byte)(iVar4 << 4);
        pbVar5 = pbVar5 + 1;
      }
      if (bVar1 == 0) break;
LAB_10009918:
      param_1 = param_1 + 1;
      *pbVar5 = bVar1;
      pbVar5 = pbVar5 + 1;
    }
    *pbVar5 = 0;
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef str_1001e346
#define str_1001e346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x439U)))
#undef str_1001e354
#define str_1001e354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_1001e3dc
#define str_1001e3dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_1001e5ca
#define str_1001e5ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bdU)))
#define local_9c8 (*(char (*)[1536])(frame + 24))
#define local_3c8 (*(char (*)[524])(frame + 1560))
#define local_1bc (*(char *)(frame + 2084))
#define local_1bb (*(byte (*)[128])(frame + 2085))
#define local_13b (*(char (*)[193])(frame + 2213))
#define local_7a (*(ushort *)(frame + 2406))
#define local_78 (*(ulong *)(frame + 2408))
#define local_70 (*(ulong *)(frame + 2416))
#define local_66 (*(char (*)[6])(frame + 2426))
#define local_60 (*(ulong *)(frame + 2432))
#define local_58 (*(undefined1 * *)(frame + 2440))
#define local_50 (*(undefined1 * *)(frame + 2448))
#define local_48 (*(ulong * *)(frame + 2456))
#define local_40 (*(byte * *)(frame + 2464))
#define local_34 (*(uint *)(frame + 2476))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100099d0
 */

ulong recovered_100099d0(long param_1,byte *param_2,undefined1 *param_3,ulong param_4,ulong *param_5
                        ,undefined1 *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[2560] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulonglong vararg5;
  char *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong n;

  local_34 = 0;
  local_60 = 0;
  if (param_2 != (byte *)0x0) {
    *param_3 = 0;
    if (param_5 != (ulong *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = 0;
    }
    local_70 = param_4;
    local_58 = param_3;
    local_50 = param_6;
    local_48 = param_5;
    uVar4 = recovered_10009dd0(param_2,&local_1bc,param_7,param_8);
    if ((char)uVar4 != '\0') {
      pcVar6 = (char *)(param_1 + 0x205c54);
      uVar4 = recovered_1000a1a0(pcVar6,param_7,param_8);
      if ((char)uVar4 != '\0') {
        uVar5 = recovered_1000a500(local_1bb,&local_34);
        if ((char)uVar5 == '\0') {
          uVar5 = recovered_1000a6b0((long)pcVar6,local_1bb,&local_34,param_7,param_8);
          if ((char)uVar5 == '\0') goto LAB_10009be2;
        }
        uVar4 = recovered_1000ab90((long)pcVar6,local_34,local_66,param_7,param_8);
        if ((char)uVar4 != '\0') {
          iVar1 = Ram0000000000006800;
          if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
              (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
             (uVar2 = Ram0000000000006808, 0x4f < uVar2)) {
            uVar2 = UINT_0000684c;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              local_40 = (*(code *)(ulong)uVar2)(0x50000);
              if (local_40 != (byte *)0x0) {
                vararg5 = FUN_1001df8b();
                pf_varargs_1001df25__4__8__8__8__8__8_
                          (local_3c8,0x200,str_1001e5ca,1000000,((uintptr_t)pf_module_state + 0x747U),((uintptr_t)pf_module_state + 0x73fU),((uintptr_t)pf_module_state + 0x743U),
                           ((uintptr_t)pf_module_state + 0x743U),vararg5);
                if (local_1bc == '\x01') {
                  uVar4 = recovered_1000afb0(param_1,(long)pcVar6,local_34,local_7a,local_66,
                                             local_1bb,local_13b,local_3c8,local_40,0x50000,
                                             &local_60,param_7,param_8,(undefined *)0x0,0);
                  if ((char)uVar4 == '\0') {
                    uVar4 = 0;
                  }
                  else {
LAB_10009c8d:
                    pbVar7 = local_40;
                    pcVar6 = (char *)recovered_1000b760((long)local_40);
                    if (pcVar6 == (char *)0x0) {
                      uVar4 = 0;
                      pf_varargs_1001df25___(param_7,param_8,str_1001e3dc);
                    }
                    else {
                      uVar4 = (long)pcVar6 - (long)pbVar7;
                      uVar8 = local_60 - uVar4;
                      if (local_60 < uVar4 || uVar8 == 0) {
                        uVar8 = strlen(pcVar6);
                        pbVar7 = local_40;
                      }
                      uVar4 = recovered_1000b7b0(pbVar7);
                      puVar3 = local_58;
                      if ((char)uVar4 == '\0') {
                        n = local_70 - 1;
                        if (uVar8 < local_70) {
                          n = uVar8;
                        }
                        memcpy(local_58,pcVar6,n);
                        puVar3[n] = 0;
                        uVar4 = CONCAT71((int7)(uVar8 >> 8),1);
                        if (local_48 != (ulong *)0x0) {
                          *local_48 = n;
                        }
                      }
                      else {
                        local_78 = 0;
                        uVar8 = recovered_1000ba10((long)pcVar6,uVar8,(long)local_58,local_70 - 1,
                                                   (long *)&local_78,param_7,param_8);
                        uVar4 = uVar8 & 0xffffffff;
                        if ((char)uVar8 != '\0') {
                          local_58[local_78] = 0;
                          if (local_48 != (ulong *)0x0) {
                            *local_48 = local_78;
                          }
                        }
                      }
                      if (local_50 != (undefined1 *)0x0) {
                        recovered_1000bc90((char *)local_40,local_50);
                      }
                    }
                  }
                }
                else {
                  uVar4 = 0;
                  pf_varargs_1001df25__8__8__8_
                            (local_9c8,0x600,str_1001e354,(ulonglong)local_13b,(ulonglong)local_1bb,
                             (ulonglong)local_3c8);
                  uVar8 = recovered_1000b450((long)pcVar6,local_34,local_7a,local_66,local_9c8,
                                             local_40,0x50000,&local_60,param_7,param_8,
                                             (undefined *)0x0,0);
                  if ((char)uVar8 != '\0') goto LAB_10009c8d;
                }
                iVar1 = Ram0000000000006800;
                if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
                   ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
                    (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
                  uVar2 = UINT_00006850;
                  if ((code *)(ulong)uVar2 != (code *)0x0) {
                    (*(code *)(ulong)uVar2)(local_40);
                  }
                }
                goto LAB_10009be5;
              }
            }
          }
          uVar4 = 0;
          pf_varargs_1001df25___(param_7,param_8,str_1001e346);
          goto LAB_10009be5;
        }
      }
    }
  }
LAB_10009be2:
  uVar4 = 0;
LAB_10009be5:
  return uVar4 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef str_1001e346
#undef str_1001e354
#undef str_1001e3dc
#undef str_1001e5ca
#undef local_9c8
#undef local_3c8
#undef local_1bc
#undef local_1bb
#undef local_13b
#undef local_7a
#undef local_78
#undef local_70
#undef local_66
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_34

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e30c
#define DAT_1001e30c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ffU)))
#undef DAT_1001e435
#define DAT_1001e435 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#undef str_1001e3fa
#define str_1001e3fa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4edU)))
#undef str_1001e413
#define str_1001e413 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x506U)))
#undef str_1001e424
#define str_1001e424 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x517U)))
#undef str_1001e439
#define str_1001e439 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009dd0
 */

ulong recovered_10009dd0(byte *param_1,undefined1 *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  byte *vararg0;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;

  if (param_2 == (undefined1 *)0x0 || param_1 == (byte *)0x0) {
    uVar6 = 0;
    goto LAB_1000a07a;
  }
  memset(param_2,0,0x144);
  bVar2 = *param_1;
  if (bVar2 != 0) {
    bVar1 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar1 = bVar2;
    }
    if (bVar1 == 0x68) {
      bVar2 = param_1[1];
      if (bVar2 != 0) {
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 != 0x74) || (bVar2 = param_1[2], bVar2 == 0)) goto code_r0x10009f53;
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 != 0x74) || (bVar2 = param_1[3], bVar2 == 0)) goto code_r0x10009f53;
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 != 0x70) || (bVar2 = param_1[4], bVar2 == 0)) goto code_r0x10009f53;
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 != 0x73) || (bVar2 = param_1[5], bVar2 == 0)) goto code_r0x10009f53;
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 != 0x3a) || (bVar2 = param_1[6], bVar2 == 0)) goto code_r0x10009f53;
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 != 0x2f) || (bVar2 = param_1[7], bVar2 == 0)) goto code_r0x10009f53;
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if (bVar1 != 0x2f) goto code_r0x10009f53;
        pbVar7 = param_1 + 8;
        *param_2 = 1;
        uVar3 = 0x1bb;
LAB_1000a02b:
        *(undefined2 *)(param_2 + 0x142) = uVar3;
        uVar6 = 0;
        while( true ) {
          bVar2 = pbVar7[uVar6];
          if (((ulong)bVar2 < 0x40) && ((0x8400800800000001U >> ((ulong)bVar2 & 0x3f) & 1) != 0))
          break;
          if (bVar2 < 0x21) goto LAB_1000a097;
          uVar6 = uVar6 + 1;
        }
        if (0xffffffffffffff80 < uVar6 - 0x80) {
          memcpy(param_2 + 1,pbVar7,uVar6);
          param_2[uVar6 + 1] = 0;
          bVar2 = pbVar7[uVar6];
          if (bVar2 == 0x3a) {
            pbVar7 = pbVar7 + uVar6 + 1;
            uVar4 = 0;
            goto LAB_1000a0cf;
          }
          pbVar7 = pbVar7 + uVar6;
          goto LAB_1000a105;
        }
LAB_1000a097:
        pcVar5 = str_1001e413;
        goto LAB_1000a06a;
      }
code_r0x10009f53:
      bVar2 = param_1[1];
      if (bVar2 != 0) {
        bVar1 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar1 = bVar2;
        }
        if ((bVar1 == 0x74) && (bVar2 = param_1[2], bVar2 != 0)) {
          bVar1 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar1 = bVar2;
          }
          if ((bVar1 == 0x74) && (bVar2 = param_1[3], bVar2 != 0)) {
            bVar1 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar1 = bVar2;
            }
            if ((bVar1 == 0x70) && (bVar2 = param_1[4], bVar2 != 0)) {
              bVar1 = bVar2 | 0x20;
              if (0x19 < (byte)(bVar2 + 0xbf)) {
                bVar1 = bVar2;
              }
              if ((bVar1 == 0x3a) && (bVar2 = param_1[5], bVar2 != 0)) {
                bVar1 = bVar2 | 0x20;
                if (0x19 < (byte)(bVar2 + 0xbf)) {
                  bVar1 = bVar2;
                }
                if ((bVar1 == 0x2f) && (bVar2 = param_1[6], bVar2 != 0)) {
                  bVar1 = bVar2 | 0x20;
                  if (0x19 < (byte)(bVar2 + 0xbf)) {
                    bVar1 = bVar2;
                  }
                  if (bVar1 == 0x2f) {
                    pbVar7 = param_1 + 7;
                    uVar3 = 0x50;
                    goto LAB_1000a02b;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar5 = str_1001e3fa;
  goto LAB_1000a06a;
LAB_1000a0cf:
  if ((byte)(*pbVar7 - 0x30U) < 10) goto code_r0x1000a0db;
  if (uVar4 != 0) {
    *(short *)(param_2 + 0x142) = (short)uVar4;
    bVar2 = *pbVar7;
LAB_1000a105:
    if (bVar2 < 0x2f) {
      if (bVar2 == 0) {
        pcVar5 = &DAT_1001e232;
        vararg0 = &DAT_1001e30c;
LAB_1000a183:
        pf_varargs_1001df25__8_(param_2 + 0x81,0xc0,pcVar5,(ulonglong)vararg0);
        uVar6 = CONCAT71((int7)((ulong)pbVar7 >> 8),1);
        goto LAB_1000a07a;
      }
      if (bVar2 == 0x23) {
LAB_1000a138:
        pcVar5 = &DAT_1001e435;
        goto LAB_1000a17b;
      }
    }
    else {
      if (bVar2 == 0x2f) {
        pcVar5 = &DAT_1001e232;
LAB_1000a17b:
        vararg0 = pbVar7;
        goto LAB_1000a183;
      }
      if (bVar2 == 0x3f) goto LAB_1000a138;
    }
    pcVar5 = str_1001e439;
    goto LAB_1000a06a;
  }
  goto LAB_1000a122;
code_r0x1000a0db:
  uVar4 = ((uint)*pbVar7 + uVar4 * 10) - 0x30;
  pbVar7 = pbVar7 + 1;
  if (0xffff < uVar4) goto LAB_1000a122;
  goto LAB_1000a0cf;
LAB_1000a122:
  pcVar5 = str_1001e424;
LAB_1000a06a:
  uVar6 = 0;
  pf_varargs_1001df25___(param_3,param_4,pcVar5);
LAB_1000a07a:
  return uVar6 & 0xffffffff;
}

#undef DAT_1001e232
#undef DAT_1001e30c
#undef DAT_1001e435
#undef str_1001e3fa
#undef str_1001e413
#undef str_1001e424
#undef str_1001e439

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006924
#define UINT_00006924 (*(uint *)(0x6924U))
#undef str_1001e44a
#define str_1001e44a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x53dU)))
#undef str_1001e45f
#define str_1001e45f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x552U)))
#undef str_1001e480
#define str_1001e480 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x573U)))
#undef str_1001e496
#define str_1001e496 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x589U)))
#undef str_1001e4af
#define str_1001e4af (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a2U)))
#undef str_1001e4c9
#define str_1001e4c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5bcU)))
#undef str_1001e4dc
#define str_1001e4dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cfU)))
#undef str_1001e4f5
#define str_1001e4f5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e8U)))
#define local_e8 (*(char *)(frame + 40))
#define local_e7 (*(char *)(frame + 41))
#define local_3c (*(uint *)(frame + 212))
#define local_38 (*(uint *)(frame + 216))
#define uStack_f4 (*(uint *)(frame + 28))
#define uStack_f0 (*(uint *)(frame + 32))
#define uStack_ec (*(uint *)(frame + 36))
#define uStack_34 (*(uint *)(frame + 220))
#define uStack_30 (*(uint *)(frame + 224))
#define uStack_2c (*(uint *)(frame + 228))
#define local_fc (*(uint *)(frame + 20))
#define local_f8 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1a0
 */

ulong recovered_1000a1a0(char *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined7 uVar6;

  if (param_1 != (char *)0x0) {
    memset(&local_fc,0,0xc0);
    iVar2 = Ram0000000000006800;
    pcVar5 = str_1001e44a;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x127 < uVar1))
    {
      uVar1 = UINT_00006924;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        uVar1 = (*(code *)(ulong)uVar1)(&local_fc);
        if (uVar1 == 0) {
          pcVar5 = str_1001e44a;
        }
        else {
          pcVar5 = str_1001e44a;
          if ((local_f8 & 1) != 0) {
            if ((local_f8 & 4) == 0) {
              pcVar5 = str_1001e45f;
            }
            else if ((local_f8 & 2) == 0) {
              pcVar5 = str_1001e480;
            }
            else {
              if (((uStack_ec != 0) || (local_e8 != '\0')) || (local_e7 != '\0')) {
                if (*param_1 == '\x01') {
                  iVar2 = memcmp(param_1 + 2,&uStack_ec,6);
                  if (iVar2 != 0) {
                    memset(param_1,0,0xec);
                  }
                }
                memcpy(param_1 + 0x2c,&local_fc,0xc0);
                memcpy(param_1 + 2,&uStack_ec,6);
                uVar6 = (undefined7)((ulong)&uStack_ec >> 8);
                uVar4 = CONCAT71(uVar6,1);
                if (*param_1 != '\0') goto LAB_1000a259;
                memset(&local_fc,0,0x14);
                memset(&local_3c,0,0x14);
                param_1[1] = '\x01';
                iVar2 = *(int *)(param_1 + 0x28);
                uVar1 = 0x474c6142;
                if (iVar2 != 0) {
                  uVar1 = iVar2 + 0x1fff + (uint)(iVar2 == -0x1fff);
                }
                *(uint *)(param_1 + 0x28) = uVar1;
                *(uint *)(param_1 + 0x1c) =
                     uVar1 ^ ((uint)(byte)param_1[7] |
                             (uint)(byte)param_1[6] << 8 |
                             (uint)(byte)param_1[5] << 0x10 | (uint)(byte)param_1[2] << 0x18);
                uVar3 = recovered_1000be80((long)param_1,1,0,0);
                if ((char)uVar3 == '\0') {
LAB_1000a4c4:
                  pcVar5 = str_1001e4af;
                }
                else {
                  uVar4 = recovered_1000c030((long)param_1,2,&local_fc);
                  if ((char)uVar4 == '\0') {
                    uVar3 = recovered_1000be80((long)param_1,1,0,0);
                    if ((char)uVar3 == '\0') goto LAB_1000a4c4;
                    uVar4 = recovered_1000c030((long)param_1,2,&local_fc);
                    if ((char)uVar4 == '\0') {
                      uVar3 = recovered_1000be80((long)param_1,1,0,0);
                      if ((char)uVar3 == '\0') goto LAB_1000a4c4;
                      recovered_1000c030((long)param_1,2,&local_fc);
                    }
                  }
                  if (local_fc == 0) {
                    pcVar5 = str_1001e4c9;
                  }
                  else {
                    uVar3 = recovered_1000be80((long)param_1,3,local_fc,uStack_ec);
                    if ((char)uVar3 == '\0') {
LAB_1000a4e0:
                      pcVar5 = str_1001e4dc;
                    }
                    else {
                      uVar4 = recovered_1000c030((long)param_1,5,&local_3c);
                      if ((char)uVar4 == '\0') {
                        uVar3 = recovered_1000be80((long)param_1,3,local_fc,uStack_ec);
                        if ((char)uVar3 == '\0') goto LAB_1000a4e0;
                        recovered_1000c030((long)param_1,5,&local_3c);
                      }
                      if (local_3c != 0) {
                        *(uint *)(param_1 + 8) = local_3c;
                        uVar1 = -(uint)(SUB164((uint128)0x0,0xc) == uStack_2c);
                        *(uint *)(param_1 + 0xc) =
                             ~-(uint)(local_38 == 0) & local_38 | local_f8 & -(uint)(local_38 == 0);
                        *(uint *)(param_1 + 0x10) =
                             ~-(uint)(uStack_34 == 0) & uStack_34 |
                             uStack_f4 & -(uint)(uStack_34 == 0);
                        *(uint *)(param_1 + 0x14) =
                             ~-(uint)(uStack_30 == 0) & uStack_30 |
                             uStack_f0 & -(uint)(uStack_30 == 0);
                        *(uint *)(param_1 + 0x18) = ~uVar1 & uStack_2c | uStack_ec & uVar1;
                        *param_1 = '\x01';
                        uVar4 = CONCAT71(uVar6,1);
                        goto LAB_1000a259;
                      }
                      pcVar5 = str_1001e4f5;
                    }
                  }
                }
                uVar4 = 0;
                pf_varargs_1001df25___(param_2,param_3,pcVar5);
                goto LAB_1000a259;
              }
              pcVar5 = str_1001e496;
            }
          }
        }
      }
    }
    pf_varargs_1001df25___(param_2,param_3,pcVar5);
  }
  uVar4 = 0;
LAB_1000a259:
  return uVar4 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006924
#undef str_1001e44a
#undef str_1001e45f
#undef str_1001e480
#undef str_1001e496
#undef str_1001e4af
#undef str_1001e4c9
#undef str_1001e4dc
#undef str_1001e4f5
#undef local_e8
#undef local_e7
#undef local_3c
#undef local_38
#undef uStack_f4
#undef uStack_f0
#undef uStack_ec
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef local_fc
#undef local_f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a500
 */

undefined8 recovered_1000a500(byte *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;

  if (param_2 != (uint *)0x0 && param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    bVar4 = bVar1 - 0x30U;
    uVar3 = 0;
    if (bVar4 < 10) {
      pbVar7 = param_1 + 4;
      do {
        pbVar6 = pbVar7;
        uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
        if (0xff < uVar3) {
          return 0;
        }
        bVar1 = pbVar6[-3];
        pbVar7 = pbVar6 + 1;
      } while ((byte)(bVar1 - 0x30U) < 10);
      if (bVar1 == 0x2e && bVar4 < 10) {
        bVar1 = pbVar6[-2];
        bVar4 = bVar1 - 0x30U;
        uVar5 = 0;
        if (bVar4 < 10) {
          do {
            pbVar6 = pbVar7;
            uVar5 = ((uint)bVar1 + uVar5 * 10) - 0x30;
            if (0xff < uVar5) {
              return 0;
            }
            bVar1 = pbVar6[-2];
            pbVar7 = pbVar6 + 1;
          } while ((byte)(bVar1 - 0x30U) < 10);
          if (bVar1 == 0x2e && bVar4 < 10) {
            bVar1 = pbVar6[-1];
            bVar4 = bVar1 - 0x30U;
            uVar8 = 0;
            if (bVar4 < 10) {
              do {
                pbVar6 = pbVar7;
                uVar8 = ((uint)bVar1 + uVar8 * 10) - 0x30;
                if (0xff < uVar8) {
                  return 0;
                }
                bVar1 = pbVar6[-1];
                pbVar7 = pbVar6 + 1;
              } while ((byte)(bVar1 - 0x30U) < 10);
              if (bVar1 == 0x2e && bVar4 < 10) {
                bVar4 = *pbVar6;
                bVar1 = bVar4 - 0x30U;
                uVar2 = 0;
                if (bVar1 < 10) {
                  do {
                    uVar2 = ((uint)bVar4 + uVar2 * 10) - 0x30;
                    if (0xff < uVar2) {
                      return 0;
                    }
                    bVar4 = *pbVar7;
                    pbVar7 = pbVar7 + 1;
                  } while ((byte)(bVar4 - 0x30U) < 10);
                  if (bVar4 == 0 && bVar1 < 10) {
                    *param_2 = uVar5 * 0x10000 | uVar3 * 0x1000000 | uVar8 * 0x100 | uVar2;
                    return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
                  }
                }
              }
            }
          }
        }
      }
      return 0;
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
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#undef str_1001e506
#define str_1001e506 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f9U)))
#undef str_1001e51d
#define str_1001e51d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x610U)))
#undef str_1001e52e
#define str_1001e52e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x621U)))
#undef str_1001e53e
#define str_1001e53e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x631U)))
#define auStack_aa6 (*(ushort (*)[1007])(frame + 58))
#define local_ac8 (*(undefined1 (*)[12])(frame + 24))
#define local_abc (*(ushort *)(frame + 36))
#define local_aba (*(byte (*)[2])(frame + 38))
#define local_ab8 (*(ushort (*)[3])(frame + 40))
#define local_ab1 (*(char *)(frame + 47))
#define local_aae (*(uint *)(frame + 50))
#define local_aaa (*(uint *)(frame + 54))
#define local_2c8 (*(char (*)[512])(frame + 2072))
#define local_c8 (*(char (*)[104])(frame + 2584))
#define local_60 (*(uint * *)(frame + 2688))
#define local_56 (*(char (*)[6])(frame + 2698))
#define local_50 (*(long *)(frame + 2704))
#define local_44 (*(uint *)(frame + 2716))
#define local_40 (*(char * *)(frame + 2720))
#define local_38 (*(ulong *)(frame + 2728))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6b0
 */

undefined8 recovered_1000a6b0(long param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2816] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  ushort uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;

  if (param_3 == (uint *)0x0 || (param_2 == (byte *)0x0 || param_1 == 0)) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x14) == 0) {
    pcVar10 = str_1001e506;
  }
  else {
    local_60 = param_3;
    local_50 = param_1;
    local_40 = param_4;
    local_38 = param_5;
    uVar4 = recovered_1000ab90(param_1,*(uint *)(param_1 + 0x14),local_56,param_4,param_5);
    if ((char)uVar4 == '\0') {
      return 0;
    }
    memset(local_2c8,0,0x200);
    uVar9 = 0x474c;
    if (*(ushort *)(local_50 + 0x22) != 0) {
      uVar9 = (uint)*(ushort *)(local_50 + 0x22);
    }
    uVar11 = (short)uVar9 + 1;
    uVar12 = (uint)uVar11;
    if (uVar11 == 0) {
      uVar12 = uVar9 + 2;
    }
    uVar11 = (ushort)uVar12;
    *(ushort *)(local_50 + 0x22) = uVar11;
    local_2c8[0] = (char)(uVar12 >> 8);
    local_2c8[1] = (char)uVar12;
    local_2c8[2] = '\x01';
    local_2c8[3] = '\0';
    local_2c8[4] = '\0';
    local_2c8[5] = '\x01';
    bVar8 = *param_2;
    if (bVar8 == 0) {
      local_2c8[0xc] = 0;
      lVar15 = 0xd;
      lVar16 = local_50;
    }
    else {
      uVar4 = 0xc;
      do {
        uVar14 = uVar4;
        lVar16 = 0;
        pbVar13 = param_2;
        while ((param_4 = local_40, param_5 = local_38, bVar8 != 0 && (bVar8 != 0x2e))) {
          if ((bVar8 < 0x21) ||
             ((uVar9 = bVar8 - 0x23, uVar9 < 0x3a &&
              ((0x200000010801001U >> ((ulong)uVar9 & 0x3f) & 1) != 0)))) goto LAB_1000ab49;
          pbVar1 = pbVar13 + 1;
          pbVar13 = pbVar13 + 1;
          lVar16 = lVar16 + -1;
          bVar8 = *pbVar1;
        }
        if (lVar16 == 0) {
          if (bVar8 == 0) goto LAB_1000ab30;
          goto LAB_1000ab49;
        }
        if ((0x3e < (ulong)-lVar16 && lVar16 != -0x3f) ||
           (uVar4 = (uVar14 + 1) - lVar16, 0x1ff < uVar4)) goto LAB_1000ab49;
        local_2c8[uVar14] = -(char)lVar16;
        memcpy(local_2c8 + uVar14 + 1,param_2,-lVar16);
        param_2 = pbVar13 + (*pbVar13 == 0x2e);
        bVar8 = pbVar13[*pbVar13 == 0x2e];
      } while (bVar8 != 0);
      uVar14 = (uVar14 - lVar16) + 1;
LAB_1000ab30:
      param_5 = local_38;
      param_4 = local_40;
      lVar16 = local_50;
      local_2c8[uVar14] = '\0';
      if (uVar14 - 0x1fc < 0xfffffffffffffdff) {
LAB_1000ab49:
        pcVar10 = str_1001e51d;
        goto LAB_1000ab56;
      }
      lVar15 = uVar14 + 1;
    }
    pcVar10 = local_2c8 + lVar15;
    pcVar10[0] = '\0';
    pcVar10[1] = '\x01';
    pcVar10[2] = '\0';
    pcVar10[3] = '\x01';
    uVar5 = recovered_1000c450(lVar16,local_56,*(uint *)(lVar16 + 8),*(uint *)(lVar16 + 0x14),
                               uVar12 & 0xffff | 0xc000,0x35,local_2c8,(short)lVar15 + 4);
    param_4 = local_40;
    param_5 = local_38;
    if ((char)uVar5 == '\0') {
      pcVar10 = str_1001e52e;
    }
    else {
      uVar4 = 0x1450;
      do {
        local_c8[0] = '\0';
        local_44 = 0;
        iVar2 = Ram0000000000006800;
        if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
            (uVar9 = Ram0000000000006808, 0xb < uVar9)) &&
           (uVar9 = Ram0000000000006808, 299 < uVar9)) {
          uVar9 = UINT_00006928;
          if (((code *)(ulong)uVar9 == (code *)0x0) ||
             (uVar9 = (*(code *)(ulong)uVar9)(local_ac8,0x800,&local_44), param_5 = local_38,
             param_4 = local_40, local_44 < 0xe || uVar9 == 0)) goto LAB_1000a970;
          if ((((0x29 < local_44) && ((ushort)(local_abc << 8 | local_abc >> 8) == 0x800)) &&
              ((local_aba[0] & 0xf0) == 0x40)) &&
             (((local_ab1 == '\x11' &&
               ((local_aae >> 0x18 | (local_aae & 0xff0000) >> 8 | (local_aae & 0xff00) << 8 |
                local_aae << 0x18) == *(uint *)(local_50 + 0x14))) &&
              (((local_aaa >> 0x18 | (local_aaa & 0xff0000) >> 8 | (local_aaa & 0xff00) << 8 |
                local_aaa << 0x18) == *(uint *)(local_50 + 8) &&
               (bVar8 = local_aba[0] << 2, 0x13 < bVar8)))))) {
            uVar6 = local_ab8[0] << 8 | local_ab8[0] >> 8;
            uVar14 = (ulong)bVar8;
            if ((((ushort)(bVar8 + 8) <= uVar6) && (uVar6 + 0xe <= local_44)) &&
               (((ushort)(*(ushort *)(local_aba + uVar14) << 8 |
                         *(ushort *)(local_aba + uVar14) >> 8) == 0x35 &&
                (((((ushort)(*(ushort *)((long)local_ab8 + uVar14) << 8 |
                            *(ushort *)((long)local_ab8 + uVar14) >> 8) == (uVar11 | 0xc000) &&
                   (uVar7 = *(ushort *)((long)local_ab8 + uVar14 + 2),
                   uVar7 = uVar7 << 8 | uVar7 >> 8, 7 < uVar7)) &&
                  ((uint)bVar8 + (uint)uVar7 <= (uint)uVar6)) &&
                 (bVar3 = recovered_1000c6f0((ushort *)((long)local_ab8 + uVar14 + 6),uVar7 - 8,
                                             uVar11,local_60,local_c8), param_5 = local_38,
                 param_4 = local_40, bVar3)))))) {
              return CONCAT71((int7)(uVar4 >> 8),1);
            }
          }
        }
        else {
LAB_1000a970:
          iVar2 = Ram0000000000006800;
          if (((iVar2 == 0x50414d57) &&
              ((iVar2 = Ram0000000000006804, iVar2 != 0 &&
               (uVar9 = Ram0000000000006808, 0xb < uVar9)))) &&
             (uVar9 = Ram0000000000006808, 0x9f < uVar9)) {
            uVar9 = UINT_0000689c;
            if ((code *)(ulong)uVar9 != (code *)0x0) {
              (*(code *)(ulong)uVar9)();
              param_5 = local_38;
              param_4 = local_40;
            }
          }
        }
        if (local_c8[0] != '\0') {
          pf_varargs_1001df25__8_(param_4,param_5,&DAT_1001e232,(ulonglong)local_c8);
          return 0;
        }
        uVar9 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar9;
      } while (uVar9 != 0);
      pcVar10 = str_1001e53e;
    }
  }
LAB_1000ab56:
  pf_varargs_1001df25___(param_4,param_5,pcVar10);
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef UINT_00006928
#undef str_1001e506
#undef str_1001e51d
#undef str_1001e52e
#undef str_1001e53e
#undef auStack_aa6
#undef local_ac8
#undef local_abc
#undef local_aba
#undef local_ab8
#undef local_ab1
#undef local_aae
#undef local_aaa
#undef local_2c8
#undef local_c8
#undef local_60
#undef local_56
#undef local_50
#undef local_44
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e116
#define DAT_1001e116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef DAT_1001e11c
#define DAT_1001e11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#undef UINT_0000692c
#define UINT_0000692c (*(uint *)(0x692cU))
#undef str_1001e584
#define str_1001e584 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x677U)))
#undef str_1001e594
#define str_1001e594 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x687U)))
#undef str_1001e5a0
#define str_1001e5a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x693U)))
#undef str_1001e5b9
#define str_1001e5b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6acU)))
#define local_8a8 (*(undefined1 (*)[12])(frame + 24))
#define local_89c (*(ushort *)(frame + 36))
#define local_89a (*(ushort *)(frame + 38))
#define local_898 (*(ushort *)(frame + 40))
#define local_896 (*(char *)(frame + 42))
#define local_895 (*(char *)(frame + 43))
#define local_894 (*(ushort *)(frame + 44))
#define local_892 (*(undefined1 (*)[6])(frame + 46))
#define local_88c (*(uint *)(frame + 52))
#define local_882 (*(uint *)(frame + 62))
#define local_a0 (*(void * *)(frame + 2080))
#define local_98 (*(uint *)(frame + 2088))
#define local_92 (*(undefined1 (*)[6])(frame + 2094))
#define local_8c (*(undefined8 *)(frame + 2100))
#define local_84 (*(undefined2 *)(frame + 2108))
#define local_82 (*(undefined1 (*)[6])(frame + 2110))
#define local_7c (*(uint *)(frame + 2116))
#define local_78 (*(undefined1 (*)[6])(frame + 2120))
#define local_72 (*(undefined1 *)(frame + 2126))
#define local_71 (*(undefined1 *)(frame + 2127))
#define local_70 (*(undefined1 *)(frame + 2128))
#define local_6f (*(undefined1 *)(frame + 2129))
#define local_58 (*(char * *)(frame + 2152))
#define local_50 (*(ulong *)(frame + 2160))
#define local_48 (*(char * *)(frame + 2168))
#define local_3c (*(uint *)(frame + 2180))
#define local_38 (*(uint *)(frame + 2184))
#define local_34 (*(uint *)(frame + 2188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ab90
 */

ulong recovered_1000ab90(long param_1,uint param_2,char *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2272] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *src;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_R15;
  ulong uVar6;

  if (param_1 == 0 || param_2 == 0) {
    pcVar3 = str_1001e5a0;
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = 0xffffffff;
      if (*(int *)(param_1 + 8) == -1) {
LAB_1000ac00:
        uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
        if (param_3 != (char *)0x0) {
          memcpy(param_3,(void *)(param_1 + 2),6);
        }
        goto LAB_1000af79;
      }
    }
    else {
      if (((*(uint *)(param_1 + 0xc) == 0) ||
          (((*(uint *)(param_1 + 8) ^ param_2) & *(uint *)(param_1 + 0xc)) != 0)) &&
         (param_2 = *(uint *)(param_1 + 0x10), param_2 == 0)) {
        pcVar3 = str_1001e5b9;
        goto LAB_1000af72;
      }
      if (param_2 == *(uint *)(param_1 + 8)) goto LAB_1000ac00;
    }
    local_a0 = (void *)(param_1 + 2);
    local_3c = param_2 >> 0x18;
    local_38 = param_2 >> 0x10;
    local_34 = param_2 >> 8;
    iVar4 = 0;
    local_58 = param_3;
    local_50 = param_5;
    local_48 = param_4;
    do {
      memset(&local_98,0,0x3c);
      memcpy(&local_98,&DAT_1001e116,6);
      src = local_a0;
      memcpy(local_92,local_a0,6);
      local_8c = 0x406000801000608;
      local_84 = 0x100;
      memcpy(local_82,src,6);
      uVar2 = *(uint *)(param_1 + 8);
      local_7c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      memcpy(local_78,&DAT_1001e11c,6);
      local_72 = (undefined1)local_3c;
      local_71 = (undefined1)local_38;
      local_70 = (undefined1)local_34;
      local_6f = (undefined1)param_2;
      iVar5 = Ram0000000000006800;
      if (((iVar5 != 0x50414d57) || (iVar5 = Ram0000000000006804, iVar5 == 0)) ||
         ((uVar2 = Ram0000000000006808, uVar2 < 0xc || (uVar2 = Ram0000000000006808, uVar2 < 0x130))
         )) {
LAB_1000af60:
        pcVar3 = str_1001e584;
        goto LAB_1000af67;
      }
      uVar2 = UINT_0000692c;
      if (((code *)(ulong)uVar2 == (code *)0x0) ||
         (uVar2 = (*(code *)(ulong)uVar2)(&local_98,0x3c), uVar2 == 0)) goto LAB_1000af60;
      iVar5 = 900;
      do {
        local_98 = 0;
        iVar1 = Ram0000000000006800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
            (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
           (uVar2 = Ram0000000000006808, 299 < uVar2)) {
          uVar2 = UINT_00006928;
          if ((code *)(ulong)uVar2 == (code *)0x0) goto LAB_1000ae10;
          uVar2 = (*(code *)(ulong)uVar2)(local_8a8,0x800,&local_98);
          pcVar3 = local_58;
          if (local_98 < 0xe || uVar2 == 0) goto LAB_1000ae10;
          if ((((0x29 < local_98 && local_58 != (char *)0x0) &&
               ((ushort)(local_89c << 8 | local_89c >> 8) == 0x806)) &&
              (((ushort)(local_89a << 8 | local_89a >> 8) == 1 &&
               (((ushort)(local_898 << 8 | local_898 >> 8) == 0x800 && (local_896 == '\x06')))))) &&
             ((local_895 == '\x04' &&
              ((((ushort)(local_894 << 8 | local_894 >> 8) == 2 &&
                ((local_88c >> 0x18 | (local_88c & 0xff0000) >> 8 | (local_88c & 0xff00) << 8 |
                 local_88c << 0x18) == param_2)) &&
               ((local_882 >> 0x18 | (local_882 & 0xff0000) >> 8 | (local_882 & 0xff00) << 8 |
                local_882 << 0x18) == *(uint *)(param_1 + 8))))))) {
            memcpy(local_58,local_892,6);
            uVar6 = CONCAT71((int7)((ulong)pcVar3 >> 8),1);
            if (((*pcVar3 != '\0') || (pcVar3[1] != '\0')) ||
               (((pcVar3[2] != '\0' || ((pcVar3[3] != '\0' || (pcVar3[4] != '\0')))) ||
                (pcVar3[5] != '\0')))) goto LAB_1000af79;
          }
        }
        else {
LAB_1000ae10:
          iVar1 = Ram0000000000006800;
          if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
              (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
             (uVar2 = Ram0000000000006808, 0x9f < uVar2)) {
            uVar2 = UINT_0000689c;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)();
            }
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 3);
    pcVar3 = str_1001e594;
LAB_1000af67:
    param_5 = local_50;
    param_4 = local_48;
  }
LAB_1000af72:
  uVar6 = 0;
  pf_varargs_1001df25___(param_4,param_5,pcVar3);
LAB_1000af79:
  return uVar6 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e116
#undef DAT_1001e11c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef UINT_00006928
#undef UINT_0000692c
#undef str_1001e584
#undef str_1001e594
#undef str_1001e5a0
#undef str_1001e5b9
#undef local_8a8
#undef local_89c
#undef local_89a
#undef local_898
#undef local_896
#undef local_895
#undef local_894
#undef local_892
#undef local_88c
#undef local_882
#undef local_a0
#undef local_98
#undef local_92
#undef local_8c
#undef local_84
#undef local_82
#undef local_7c
#undef local_78
#undef local_72
#undef local_71
#undef local_70
#undef local_6f
#undef local_58
#undef local_50
#undef local_48
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e30c
#define DAT_1001e30c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ffU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef str_1001e16a
#define str_1001e16a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_1001e346
#define str_1001e346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x439U)))
#undef str_1001e354
#define str_1001e354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x447U)))
#undef str_1001e65b
#define str_1001e65b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74eU)))
#define local_4328 (*(uint *)(frame + 1576))
#define local_4324 (*(ushort *)(frame + 1580))
#define local_4322 (*(ushort *)(frame + 1582))
#define local_4320 (*(int *)(frame + 1584))
#define local_431c (*(undefined4 *)(frame + 1588))
#define local_4318 (*(undefined1 (*)[16394])(frame + 1592))
#define local_30e (*(char *)(frame + 17986))
#define local_308 (*(undefined1 (*)[544])(frame + 17992))
#define local_e8 (*(char (*)[96])(frame + 18536))
#define local_88 (*(undefined8 * *)(frame + 18632))
#define local_80 (*(code * *)(frame + 18640))
#define local_78 (*(code * *)(frame + 18648))
#define local_70 (*(code * *)(frame + 18656))
#define local_68 (*(code * *)(frame + 18664))
#define local_60 (*(undefined8 *)(frame + 18672))
#define local_58 (*(long * *)(frame + 18680))
#define local_50 (*(undefined1 *)(frame + 18688))
#define local_48 (*(undefined * *)(frame + 18696))
#define local_40 (*(undefined8 *)(frame + 18704))
#define local_38 (*(ulong *)(frame + 18712))
#define local_4938 (*(char (*)[1544])(frame + 24))
#define local_4330 (*(long *)(frame + 1568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afb0
 */

ulong recovered_1000afb0(undefined8 param_1,long param_2,uint param_3,ushort param_4,void *param_5,
                        undefined *param_6,char *param_7,char *param_8,undefined1 *param_9,
                        ulong param_10,ulong *param_11,char *param_12,ulong param_13,
                        undefined *param_14,undefined8 param_15)

{
  unsigned char frame[18800] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined *vararg1;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *src;
  char *vararg0;
  char *vararg2;
  ulong uVar6;

  if (param_11 != (ulong *)0x0) {
    *param_11 = 0;
  }
  if (param_6 != (undefined *)0x0 && (param_5 != (void *)0x0 && param_2 != 0)) {
    *param_9 = 0;
    local_48 = param_6;
    local_40 = param_1;
    memset(&local_4330,0,0x4028);
    uVar5 = 0;
    uVar4 = recovered_1000c8e0(&local_4330,param_2,param_3,param_4,param_5,param_12,param_13);
    if ((char)uVar4 == '\0') goto LAB_1000b40b;
    memset(&local_60,0,0x18);
    local_60 = local_40;
    local_50 = 0;
    local_58 = &local_4330;
    memset(&local_88,0,0x28);
    vararg1 = local_48;
    local_80 = (code *)recovered_1000cbe0;
    local_78 = (code *)recovered_1000ccd0;
    local_70 = recovered_1000ccf0;
    local_68 = (code *)recovered_1000cef0;
    local_88 = &local_60;
    FUN_1001df97(local_308,&local_88,local_48);
    cVar3 = FUN_1001df91(local_308,param_12,param_13);
    if (cVar3 == '\0') {
LAB_1000b2af:
      if (local_30e != '\x01') goto LAB_1000aff8;
    }
    else {
      if (param_7 == (char *)0x0) {
        vararg0 = &DAT_1001e30c;
      }
      else {
        vararg0 = &DAT_1001e30c;
        if (*param_7 != '\0') {
          vararg0 = param_7;
        }
      }
      vararg2 = str_1001e16a;
      if (param_8 != (char *)0x0) {
        vararg2 = param_8;
      }
      pf_varargs_1001df25__8__8__8_
                (local_4938,0x600,str_1001e354,(ulonglong)vararg0,(ulonglong)vararg1,
                 (ulonglong)vararg2);
      uVar5 = strlen(local_4938);
      cVar3 = FUN_1001dfa3(local_308,local_4938,uVar5,param_12,param_13);
      if (cVar3 == '\0') goto LAB_1000b2af;
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x4f < uVar2)
         ) {
        uVar2 = UINT_0000684c;
        if (((code *)(ulong)uVar2 != (code *)0x0) &&
           (src = (*(code *)(ulong)uVar2)(0x4100), src != (void *)0x0)) {
          local_38 = 0;
          local_e8[0] = '\0';
          cVar3 = FUN_1001df9d(local_308,src,0x4100,&local_38,local_e8,0x60);
          if (cVar3 == '\0') {
            uVar6 = 0;
            param_14 = vararg1;
          }
          else {
            uVar6 = 0;
            do {
              uVar5 = ~uVar6 + param_10;
              if (local_38 < ~uVar6 + param_10) {
                uVar5 = local_38;
              }
              if (uVar5 != 0) {
                memcpy(param_9 + uVar6,src,uVar5);
                uVar6 = uVar6 + uVar5;
                param_9[uVar6] = 0;
                if (param_14 != (undefined *)0x0) {
                  (*(code *)param_14)(param_15,param_9,uVar6);
                }
              }
              if (param_10 <= uVar6 + 1) goto LAB_1000b360;
              local_38 = 0;
              local_e8[0] = '\0';
              cVar3 = FUN_1001df9d(local_308,src,0x4100,&local_38,local_e8,0x60);
            } while (cVar3 != '\0');
          }
          if ((uVar6 == 0) && (local_e8[0] != '\0')) {
            uVar6 = 0;
            pf_varargs_1001df25__8_(param_12,param_13,&DAT_1001e232,(ulonglong)local_e8);
          }
LAB_1000b360:
          iVar1 = Ram0000000000006800;
          if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
              (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
             (uVar2 = Ram0000000000006808, 0x53 < uVar2)) {
            uVar2 = UINT_00006850;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)(src);
            }
          }
          if (local_30e == '\x01') {
            recovered_1000d310(local_4330,local_4318,local_4328,(uint)local_4322,(uint)local_4324,
                               local_4320,local_431c,0x11,(void *)0x0,0);
            local_4320 = local_4320 + 1;
            local_30e = '\0';
          }
          if (uVar6 != 0) {
            uVar5 = CONCAT71((int7)((ulong)param_14 >> 8),1);
            if (param_11 != (ulong *)0x0) {
              *param_11 = uVar6;
            }
            goto LAB_1000b40b;
          }
          if ((param_12 != (char *)0x0) && (*param_12 == '\0')) {
            uVar5 = 0;
            pf_varargs_1001df25___(param_12,param_13,str_1001e65b);
            goto LAB_1000b40b;
          }
          goto LAB_1000aff8;
        }
      }
      uVar5 = 0;
      pf_varargs_1001df25___(param_12,param_13,str_1001e346);
      if (local_30e != '\x01') goto LAB_1000b40b;
    }
    recovered_1000d310(local_4330,local_4318,local_4328,(uint)local_4322,(uint)local_4324,local_4320
                       ,local_431c,0x11,(void *)0x0,0);
  }
LAB_1000aff8:
  uVar5 = 0;
LAB_1000b40b:
  return uVar5 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001e30c
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef str_1001e16a
#undef str_1001e346
#undef str_1001e354
#undef str_1001e65b
#undef local_4328
#undef local_4324
#undef local_4322
#undef local_4320
#undef local_431c
#undef local_4318
#undef local_30e
#undef local_308
#undef local_e8
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_4938
#undef local_4330

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef str_1001e781
#define str_1001e781 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x874U)))
#undef str_1001e798
#define str_1001e798 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88bU)))
#define local_50d8 (*(undefined1 (*)[4104])(frame + 24))
#define local_40d0 (*(long *)(frame + 4128))
#define local_40c8 (*(uint *)(frame + 4136))
#define local_40c4 (*(ushort *)(frame + 4140))
#define local_40c2 (*(ushort *)(frame + 4142))
#define local_40c0 (*(undefined4 *)(frame + 4144))
#define local_40bc (*(undefined4 *)(frame + 4148))
#define local_40b8 (*(undefined1 (*)[6])(frame + 4152))
#define local_40b2 (*(undefined1 (*)[16384])(frame + 4158))
#define local_b2 (*(ushort *)(frame + 20542))
#define local_b0 (*(ushort *)(frame + 20544))
#define local_ae (*(char *)(frame + 20546))
#define local_ad (*(char *)(frame + 20547))
#define local_a8 (*(char (*)[104])(frame + 20552))
#define local_40 (*(undefined1 * *)(frame + 20656))
#define local_38 (*(ulong *)(frame + 20664))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b450
 */

ulong recovered_1000b450(long param_1,uint param_2,ushort param_3,void *param_4,char *param_5,
                        undefined1 *param_6,ulong param_7,ulong *param_8,char *param_9,
                        ulong param_10,undefined *param_11,undefined8 param_12)

{
  unsigned char frame[20752] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  char *format;
  ulong n;

  if (param_8 != (ulong *)0x0) {
    *param_8 = 0;
  }
  if (param_5 == (char *)0x0 || (param_4 == (void *)0x0 || param_1 == 0)) {
    uVar5 = 0;
    goto LAB_1000b563;
  }
  *param_6 = 0;
  local_40 = param_6;
  memset(&local_40d0,0,0x4028);
  uVar5 = 0;
  uVar4 = recovered_1000c8e0(&local_40d0,param_1,param_2,param_3,param_4,param_9,param_10);
  if ((char)uVar4 == '\0') goto LAB_1000b563;
  uVar5 = strlen(param_5);
  if (uVar5 < 0x2001) {
    uVar5 = recovered_1000dc30(&local_40d0,(long)param_5,uVar5,param_9,param_10);
    if ((char)uVar5 == '\0') goto joined_r0x1000b6d3;
    local_38 = 0;
    uVar5 = 0;
    do {
      local_a8[0] = '\0';
      if ((local_b0 <= local_b2) &&
         (uVar6 = recovered_1000d7b0(&local_40d0,local_a8,0x60), (char)uVar6 == '\0')) {
LAB_1000b6de:
        uVar6 = local_38;
        if (((local_38 & 1) == 0) && (local_a8[0] != '\0')) {
          pf_varargs_1001df25__8_(param_9,param_10,&DAT_1001e232,(ulonglong)local_a8);
        }
        goto LAB_1000b71f;
      }
      uVar2 = local_b0;
      uVar1 = local_b2;
      uVar6 = (ulong)local_b0 - (ulong)local_b2;
      if (0xfff < uVar6) {
        uVar6 = 0x1000;
      }
      memcpy(local_50d8,local_40b2 + local_b2,uVar6);
      puVar3 = local_40;
      local_b2 = local_b2 + (short)uVar6;
      if (uVar2 == uVar1) goto LAB_1000b6de;
      n = ~uVar5 + param_7;
      if (uVar6 < ~uVar5 + param_7) {
        n = uVar6;
      }
      if (n != 0) {
        pvVar7 = memcpy(local_40 + uVar5,local_50d8,n);
        uVar5 = uVar5 + n;
        puVar3[uVar5] = 0;
        local_38 = CONCAT71((int7)((ulong)pvVar7 >> 8),1);
        if (param_11 != (undefined *)0x0) {
          (*(code *)param_11)(param_12,puVar3,uVar5);
        }
      }
    } while ((uVar5 + 1 < param_7) && ((local_ad != '\x01' || (local_b2 < local_b0))));
    uVar6 = local_38;
LAB_1000b71f:
    if (param_8 != (ulong *)0x0) {
      *param_8 = uVar5;
    }
    if ((uVar6 & 1) == 0) {
      format = str_1001e798;
      goto LAB_1000b513;
    }
    uVar5 = CONCAT71((int7)(uVar6 >> 8),1);
    if (local_ae != '\x01') goto LAB_1000b563;
  }
  else {
    format = str_1001e781;
LAB_1000b513:
    pf_varargs_1001df25___(param_9,param_10,format);
joined_r0x1000b6d3:
    uVar5 = 0;
    if (local_ae == '\0') goto LAB_1000b563;
  }
  recovered_1000d310(local_40d0,local_40b8,local_40c8,(uint)local_40c2,(uint)local_40c4,local_40c0,
                     local_40bc,0x11,(void *)0x0,0);
LAB_1000b563:
  return uVar5 & 0xffffffff;
}

#undef DAT_1001e232
#undef str_1001e781
#undef str_1001e798
#undef local_50d8
#undef local_40d0
#undef local_40c8
#undef local_40c4
#undef local_40c2
#undef local_40c0
#undef local_40bc
#undef local_40b8
#undef local_40b2
#undef local_b2
#undef local_b0
#undef local_ae
#undef local_ad
#undef local_a8
#undef local_40
#undef local_38

#undef DAT_1001e7ae
#define DAT_1001e7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a1U)))
#undef DAT_1001e7b3
#define DAT_1001e7b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b760
 */

long recovered_1000b760(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  if (param_1 == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = strstr((char *)param_1,&DAT_1001e7ae);
    if (pcVar1 != (char *)0x0) {
      return (long)(pcVar1 + 4);
    }
    pcVar1 = strstr((char *)param_1,&DAT_1001e7b3);
  }
  pcVar2 = pcVar1 + 2;
  if (pcVar1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  return (long)pcVar2;
}

#undef DAT_1001e7ae
#undef DAT_1001e7b3

#undef DAT_1001e7ae
#define DAT_1001e7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a1U)))
#undef DAT_1001e7b3
#define DAT_1001e7b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6U)))
#undef str_1001e7b6
#define str_1001e7b6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8a9U)))
#undef str_1001e7c8
#define str_1001e7c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bbU)))
#define local_f8 (*(char (*)[200])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7b0
 */

ulong recovered_1000b7b0(byte *param_1)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  ulong uVar11;
  byte bVar12;
  byte bVar13;
  byte *pbVar14;

  if (param_1 == (byte *)0x0) {
    pcVar4 = (char *)0x0;
LAB_1000b7fc:
    pbVar14 = (byte *)(pcVar4 + 2);
    if (pcVar4 == (char *)0x0) {
      pbVar14 = (byte *)0x0;
    }
  }
  else {
    pcVar4 = strstr((char *)param_1,&DAT_1001e7ae);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = strstr((char *)param_1,&DAT_1001e7b3);
      goto LAB_1000b7fc;
    }
    pbVar14 = (byte *)(pcVar4 + 4);
  }
  uVar5 = strlen(str_1001e7b6);
  if (((uVar5 == 0) || (bVar8 = *param_1, bVar8 == 0)) ||
     (pbVar14 != (byte *)0x0 && pbVar14 <= param_1)) {
LAB_1000b9e8:
    uVar7 = 0;
  }
  else {
    do {
      lVar6 = 0;
      pbVar10 = param_1;
      while ((0xd < bVar8 || ((0x2401U >> (bVar8 & 0x1f) & 1) == 0))) {
        bVar8 = pbVar10[1];
        pbVar10 = pbVar10 + 1;
        lVar6 = lVar6 + -1;
      }
      if (param_1 < pbVar10) {
        uVar11 = uVar5;
        pbVar1 = param_1;
        do {
          if (*pbVar1 == 0x3a) {
            if (uVar11 == 0) {
              uVar11 = 0;
              goto LAB_1000b8f0;
            }
            break;
          }
          uVar11 = uVar11 - 1;
          lVar6 = lVar6 + 1;
          pbVar1 = pbVar1 + 1;
        } while (lVar6 != 0);
      }
LAB_1000b8b7:
      while ((bVar8 == 10 || (bVar8 == 0xd))) {
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar8 = *pbVar1;
      }
      if (bVar8 == 0) goto LAB_1000b9e8;
      uVar7 = 0;
      param_1 = pbVar10;
    } while (pbVar14 == (byte *)0x0 || pbVar10 < pbVar14);
  }
LAB_1000b9ea:
  return uVar7 & 0xffffffff;
LAB_1000b8f0:
  bVar9 = param_1[uVar11];
  bVar12 = bVar9 | 0x20;
  if (0x19 < (byte)(bVar9 + 0xbf)) {
    bVar12 = bVar9;
  }
  bVar9 = str_1001e7b6[uVar11];
  bVar13 = bVar9 | 0x20;
  if (0x19 < (byte)(bVar9 + 0xbf)) {
    bVar13 = bVar9;
  }
  if (bVar12 != bVar13) goto LAB_1000b8b7;
  uVar11 = uVar11 + 1;
  if (uVar5 == uVar11) {
    uVar3 = 0xbf;
    if ((int)~(uint)lVar6 < 0xbf) {
      uVar3 = ~(uint)lVar6;
    }
    pcVar4 = local_f8;
    memcpy(pcVar4,pbVar1 + 1,(long)(int)uVar3);
    local_f8[(int)uVar3] = '\0';
    uVar5 = strlen(str_1001e7c8);
    if ((uVar5 == 0) || (local_f8[0] == '\0')) goto LAB_1000b9e8;
    goto LAB_1000b984;
  }
  goto LAB_1000b8f0;
LAB_1000b984:
  do {
    uVar11 = 0;
    while (bVar8 = pcVar4[uVar11], bVar8 != 0) {
      bVar9 = bVar8 | 0x20;
      if (0x19 < (byte)(bVar8 + 0xbf)) {
        bVar9 = bVar8;
      }
      bVar8 = str_1001e7c8[uVar11];
      bVar12 = bVar8 | 0x20;
      if (0x19 < (byte)(bVar8 + 0xbf)) {
        bVar12 = bVar8;
      }
      if (bVar9 != bVar12) break;
      uVar11 = uVar11 + 1;
      if (uVar5 == uVar11) {
        uVar7 = CONCAT71((int7)(uVar11 >> 8),1);
        goto LAB_1000b9ea;
      }
    }
    uVar7 = CONCAT71((int7)(uVar11 >> 8),uVar5 == uVar11);
  } while ((uVar5 != uVar11) && (pcVar2 = pcVar4 + 1, pcVar4 = pcVar4 + 1, *pcVar2 != '\0'));
  goto LAB_1000b9ea;
}

#undef DAT_1001e7ae
#undef DAT_1001e7b3
#undef str_1001e7b6
#undef str_1001e7c8
#undef local_f8

#undef str_1001e7d0
#define str_1001e7d0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c3U)))
#undef str_1001e7e9
#define str_1001e7e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8dcU)))
#undef str_1001e805
#define str_1001e805 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba10
 */

undefined8
recovered_1000ba10(long param_1,ulong param_2,long param_3,long param_4,long *param_5,char *param_6,
                  ulong param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *format;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;

  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
LAB_1000bc47:
    format = str_1001e7e9;
LAB_1000bc57:
    pf_varargs_1001df25___(param_6,param_7,format);
    return 0;
  }
  lVar9 = 0;
  uVar4 = 0;
LAB_1000ba48:
  lVar8 = 0;
  uVar2 = uVar4;
  while( true ) {
    uVar3 = uVar2 + 1;
    cVar1 = *(char *)(param_1 + -1 + uVar3);
    if ((cVar1 != '\r') && (cVar1 != '\n')) break;
    lVar8 = lVar8 + 1;
    uVar2 = uVar3;
    if (param_2 <= uVar3) goto LAB_1000bc50;
  }
  if (uVar2 < param_2) {
    iVar5 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar6 = iVar5 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar6 = iVar5 - 0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000bc50;
      uVar6 = iVar5 - 0x37;
    }
    if (-1 < (int)uVar6) {
      if (param_2 != uVar3) {
        uVar2 = (ulong)uVar6;
        do {
          cVar1 = *(char *)(param_1 + uVar3);
          iVar5 = (int)cVar1;
          if ((byte)(cVar1 - 0x30U) < 10) {
            uVar6 = iVar5 - 0x30;
          }
          else if ((byte)(cVar1 + 0x9fU) < 6) {
            uVar6 = iVar5 - 0x57;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1000bb4d;
            uVar6 = iVar5 - 0x37;
          }
          if ((int)uVar6 < 0) goto LAB_1000bb4d;
          uVar2 = uVar2 * 0x10 + (ulong)uVar6;
          uVar3 = uVar3 + 1;
          lVar8 = lVar8 + 1;
          if (param_2 == uVar3) break;
        } while( true );
      }
      goto LAB_1000bc47;
    }
  }
LAB_1000bc50:
  format = str_1001e7d0;
  goto LAB_1000bc57;
LAB_1000bb4d:
  if (param_2 <= uVar3) goto LAB_1000bc47;
  while (*(char *)(param_1 + uVar4 + 1 + lVar8) != '\n') {
    lVar8 = lVar8 + 1;
    if (~uVar4 + param_2 == lVar8) goto LAB_1000bc47;
  }
  if (uVar2 == 0) {
    if (param_5 == (long *)0x0) {
      return 1;
    }
    *param_5 = lVar9;
    return 1;
  }
  if (((param_2 - uVar4) - lVar8) - 2 < uVar2) goto LAB_1000bc47;
  if ((ulong)(param_4 - lVar9) < uVar2) {
    format = str_1001e805;
    goto LAB_1000bc57;
  }
  memmove((void *)(param_3 + lVar9),(void *)(lVar8 + 2 + param_1 + uVar4),uVar2);
  lVar7 = uVar4 + uVar2;
  uVar4 = lVar7 + lVar8 + 2;
  if (uVar4 < param_2) {
    uVar4 = (ulong)(*(char *)(lVar8 + param_1 + 2 + lVar7) == '\r') + lVar7 + lVar8 + 2;
  }
  if (uVar4 < param_2) {
    uVar4 = uVar4 + (*(char *)(param_1 + uVar4) == '\n');
  }
  lVar9 = lVar9 + uVar2;
  if (param_2 <= uVar4) goto LAB_1000bc47;
  goto LAB_1000ba48;
}

#undef str_1001e7d0
#undef str_1001e7e9
#undef str_1001e805

#undef str_1001e81f
#define str_1001e81f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x912U)))
#undef str_1001e82e
#define str_1001e82e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x921U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bc90
 */

void recovered_1000bc90(char *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;

  *param_2 = 0;
  uVar2 = strlen(str_1001e81f);
  if (uVar2 != 0 && param_1 != (char *)0x0) {
    if (*param_1 == '\0') goto LAB_1000bd41;
    pcVar4 = param_1;
    do {
      uVar6 = 0;
      while (bVar5 = pcVar4[uVar6], bVar5 != 0) {
        bVar7 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar7 = bVar5;
        }
        bVar5 = str_1001e81f[uVar6];
        bVar8 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar8 = bVar5;
        }
        if (bVar7 != bVar8) break;
        uVar6 = uVar6 + 1;
        if (uVar2 == uVar6) goto LAB_1000bda5;
      }
      if (uVar2 == uVar6) {
LAB_1000bda5:
        param_1 = pcVar4 + 1;
        goto LAB_1000bdab;
      }
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
  }
  if (param_1 == (char *)0x0) {
    return;
  }
LAB_1000bd41:
  bVar5 = 99;
  lVar3 = 0;
  do {
    bVar7 = param_1[lVar3];
    if (bVar7 == 0) {
      return;
    }
    bVar8 = bVar7 | 0x20;
    if (0x19 < (byte)(bVar7 + 0xbf)) {
      bVar8 = bVar7;
    }
    bVar7 = bVar5 | 0x20;
    if (0x19 < (byte)(bVar5 + 0xbf)) {
      bVar7 = bVar5;
    }
    if (bVar8 != bVar7) {
      return;
    }
    bVar5 = str_1001e82e[lVar3 + 1];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xd);
LAB_1000bdab:
  pcVar4 = strchr(param_1,0x3a);
  if (pcVar4 != (char *)0x0) {
    for (pcVar4 = pcVar4 + 2; (bVar5 = pcVar4[-1], bVar5 == 9 || (bVar5 == 0x20));
        pcVar4 = pcVar4 + 1) {
    }
    lVar3 = 0;
    while( true ) {
      if ((bVar5 < 0xe) && ((0x2401U >> (bVar5 & 0x1f) & 1) != 0)) goto LAB_1000be62;
      param_2[lVar3] = bVar5;
      bVar5 = pcVar4[lVar3];
      if ((bVar5 < 0xe) && ((0x2401U >> (bVar5 & 0x1f) & 1) != 0)) {
        lVar3 = lVar3 + 1;
        goto LAB_1000be62;
      }
      param_2[lVar3 + 1] = bVar5;
      bVar5 = pcVar4[lVar3 + 1];
      if ((bVar5 < 0xe) && ((0x2401U >> (bVar5 & 0x1f) & 1) != 0)) {
        lVar3 = lVar3 + 2;
        goto LAB_1000be62;
      }
      param_2[lVar3 + 2] = bVar5;
      bVar5 = pcVar4[lVar3 + 2];
      if ((bVar5 < 0xe) && ((0x2401U >> (bVar5 & 0x1f) & 1) != 0)) {
        lVar3 = lVar3 + 3;
        goto LAB_1000be62;
      }
      if (lVar3 == 0x5c) break;
      param_2[lVar3 + 3] = bVar5;
      bVar5 = pcVar4[lVar3 + 3];
      lVar3 = lVar3 + 4;
    }
    lVar3 = 0x5f;
LAB_1000be62:
    param_2[lVar3] = 0;
  }
  return;
}

#undef str_1001e81f
#undef str_1001e82e

#undef DAT_1001e110
#define DAT_1001e110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#define local_178 (*(undefined2 *)(frame + 24))
#define local_176 (*(undefined1 *)(frame + 26))
#define local_174 (*(undefined1 *)(frame + 28))
#define local_173 (*(undefined1 *)(frame + 29))
#define local_172 (*(undefined1 *)(frame + 30))
#define local_171 (*(undefined1 *)(frame + 31))
#define local_16e (*(undefined2 *)(frame + 34))
#define local_15c (*(undefined1 (*)[208])(frame + 52))
#define local_8c (*(undefined4 *)(frame + 260))
#define local_88 (*(undefined2 *)(frame + 264))
#define local_86 (*(undefined1 *)(frame + 266))
#define local_85 (*(undefined2 *)(frame + 267))
#define local_83 (*(undefined1 *)(frame + 269))
#define local_7c (*(undefined2 *)(frame + 276))
#define local_7a (*(undefined1 (*)[4])(frame + 278))
#define local_76 (*(undefined2 *)(frame + 282))
#define local_74 (*(undefined1 (*)[49])(frame + 284))
#define auStack_82 (*(undefined1 (*)[6])(frame + 270))
#define local_43 (*(undefined1 *)(frame + 333))
#define local_42 (*(undefined1 (*)[6])(frame + 334))
#define local_3c (*(undefined4 *)(frame + 340))
#define local_38 (*(uint *)(frame + 344))
#define local_34 (*(uint *)(frame + 348))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be80
 */

undefined8 recovered_1000be80(long param_1,int param_2,uint param_3,uint param_4)

{
  unsigned char frame[432] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_3c = 0x33060301;
  local_38 = param_4;
  memset(&local_178,0,300);
  local_178 = 0x101;
  local_176 = 6;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_174 = (undefined1)((uint)uVar1 >> 0x18);
  local_173 = (undefined1)((uint)uVar1 >> 0x10);
  local_172 = (undefined1)((uint)uVar1 >> 8);
  local_171 = (undefined1)uVar1;
  local_16e = 0x80;
  memcpy(local_15c,(void *)(param_1 + 2),6);
  local_8c = 0x63538263;
  local_43 = 1;
  memcpy(local_42,(void *)(param_1 + 2),6);
  local_34 = CONCAT31(PF_PART3(local_34, 1),(char)param_2);
  local_88 = 0x135;
  memcpy(&local_86,&local_34,1);
  local_85 = 0x73d;
  memcpy(&local_83,&local_43,7);
  lVar3 = 0xc;
  if (param_2 == 3) {
    if (param_3 == 0) {
      return 0;
    }
    local_34 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
               param_3 << 0x18;
    local_7c = 0x432;
    memcpy(local_7a,&local_34,4);
    if (local_38 == 0) {
      lVar3 = 0x12;
    }
    else {
      local_34 = local_38 >> 0x18 | (local_38 & 0xff0000) >> 8 | (local_38 & 0xff00) << 8 |
                 local_38 << 0x18;
      local_76 = 0x436;
      memcpy(local_74,&local_34,4);
      lVar3 = 0x18;
    }
  }
  *(undefined2 *)(local_15c + lVar3 + 0xd4) = 0x437;
  memcpy(auStack_82 + lVar3 + -4,&local_3c,4);
  auStack_82[lVar3] = 0xff;
  uVar2 = recovered_1000c450(param_1,&DAT_1001e110,0,0xffffffff,0x44,0x43,&local_178,300);
  return uVar2;
}

#undef DAT_1001e110
#undef local_178
#undef local_176
#undef local_174
#undef local_173
#undef local_172
#undef local_171
#undef local_16e
#undef local_15c
#undef local_8c
#undef local_88
#undef local_86
#undef local_85
#undef local_83
#undef local_7c
#undef local_7a
#undef local_76
#undef local_74
#undef auStack_82
#undef local_43
#undef local_42
#undef local_3c
#undef local_38
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#define local_868 (*(undefined1 (*)[12])(frame + 24))
#define local_85c (*(ushort *)(frame + 36))
#define local_85a (*(ushort (*)[4])(frame + 38))
#define local_84e (*(uint (*)[6])(frame + 50))
#define local_68 (*(void * *)(frame + 2072))
#define local_60 (*(long *)(frame + 2080))
#define local_58 (*(undefined4 *)(frame + 2088))
#define local_54 (*(uint *)(frame + 2092))
#define local_50 (*(uint *)(frame + 2096))
#define local_4c (*(uint *)(frame + 2100))
#define local_44 (*(uint *)(frame + 2108))
#define local_40 (*(uint *)(frame + 2112))
#define local_3c (*(uint *)(frame + 2116))
#define local_38 (*(char * *)(frame + 2120))
#define acStack_852 (*(char (*)[4])(frame + 46))
#define auStack_836 (*(undefined1 (*)[1998])(frame + 74))
#define uStack_48 (*(uint *)(frame + 2104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c030
 */

ulong recovered_1000c030(long param_1,undefined4 param_2,uint *param_3)

{
  unsigned char frame[2208] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_R12;
  ulong uVar11;
  uint uVar12;
  bool bVar13;

  local_68 = (void *)(param_1 + 2);
  uVar12 = 0;
  uVar11 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  local_58 = param_2;
  do {
    local_54 = 0;
    iVar4 = Ram0000000000006800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
        (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 299 < uVar3)) {
      uVar3 = UINT_00006928;
      if (((code *)(ulong)uVar3 == (code *)0x0) ||
         (uVar3 = (*(code *)(ulong)uVar3)(local_868,0x800,&local_54), local_54 < 0xe || uVar3 == 0))
      goto LAB_1000c100;
      if ((((0x119 < local_54 && param_3 != (uint *)0x0) &&
           ((ushort)(local_85c << 8 | local_85c >> 8) == 0x800)) &&
          (((byte)local_85a[0] & 0xf0) == 0x40)) && (acStack_852[1] == '\x11')) {
        uVar3 = ((byte)local_85a[0] & 0xf) * 4;
        uVar7 = (ulong)uVar3;
        if ((((((0x13 < uVar3) &&
               (uVar8 = local_85a[1] << 8 | local_85a[1] >> 8, uVar3 + 8 <= (uint)uVar8)) &&
              ((uVar8 + 0xe <= local_54 &&
               (((ushort)(*(ushort *)((long)local_85a + uVar7) << 8 |
                         *(ushort *)((long)local_85a + uVar7) >> 8) == 0x43 &&
                (uVar5 = *(ushort *)((long)local_85a + uVar7 + 2),
                (ushort)(uVar5 << 8 | uVar5 >> 8) == 0x44)))))) &&
             ((uVar5 = *(ushort *)((long)local_85a + uVar7 + 4), uVar5 = uVar5 << 8 | uVar5 >> 8,
              7 < uVar5 &&
              (((uVar3 + uVar5 <= (uint)uVar8 && (uVar3 = uVar5 - 8, 0xef < uVar3)) &&
               (acStack_852[uVar7] == '\x02')))))) &&
            ((((acStack_852[uVar7 + 1] == '\x01' && (5 < (byte)acStack_852[uVar7 + 2])) &&
              ((uVar6 = *(uint *)((long)local_84e + uVar7),
               (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ==
               *(uint *)(param_1 + 0x1c) &&
               ((local_60 = (long)local_85a + uVar7, local_40 = uVar3,
                local_38 = acStack_852 + uVar7,
                iVar4 = memcmp(auStack_836 + uVar7,local_68,6), iVar4 == 0 &&
                (*(char *)(local_60 + 0xf4) == 'c')))))) && (*(char *)(local_60 + 0xf5) == -0x7e))))
           && ((*(char *)(local_60 + 0xf6) == 'S' && (*(char *)(local_60 + 0xf7) == 'c')))) {
          local_3c = 0;
          memset(&local_54,0,0x14);
          uVar3 = *(uint *)(local_60 + 0x18);
          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          local_44 = local_84e[0] >> 0x18 | (local_84e[0] & 0xff0000) >> 8 |
                     (local_84e[0] & 0xff00) << 8 | local_84e[0] << 0x18;
          if (local_40 != 0xf0) {
            uVar7 = 0xf0;
            local_3c = 0;
            do {
              uVar9 = uVar7 & 0xffffffff;
              bVar1 = local_38[uVar9];
              uVar7 = uVar9 + 1;
              if (bVar1 != 0) {
                if (bVar1 == 0xff) break;
                if (local_40 <= (uint)uVar7) goto LAB_1000c070;
                lVar10 = uVar9 + 2;
                bVar2 = local_38[uVar7];
                uVar6 = (int)lVar10 + (uint)bVar2;
                uVar7 = (ulong)uVar6;
                if (local_40 < uVar6) goto LAB_1000c070;
                if (bVar1 < 6) {
                  if (bVar1 == 1) {
                    if (3 < bVar2) {
                      uVar6 = *(uint *)(local_38 + lVar10);
                      local_50 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                 uVar6 << 0x18;
                    }
                  }
                  else if ((bVar1 == 3) && (3 < bVar2)) {
                    uVar6 = *(uint *)(local_38 + lVar10);
                    local_4c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18;
                  }
                }
                else if (bVar1 == 6) {
                  if (3 < bVar2) {
                    uVar6 = *(uint *)(local_38 + lVar10);
                    uStack_48 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                uVar6 << 0x18;
                  }
                }
                else if (bVar1 == 0x36) {
                  if (3 < bVar2) {
                    uVar6 = *(uint *)(local_38 + lVar10);
                    local_44 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18;
                  }
                }
                else if ((bVar1 == 0x35) && (bVar2 != 0)) {
                  local_3c = (uint)(byte)local_38[lVar10];
                }
              }
            } while ((uint)uVar7 < local_40);
          }
          if (((char)local_3c == (char)local_58) && (uVar3 != 0)) {
            if (local_50 == 0) {
              local_50 = 0xffffff00;
            }
            param_3[4] = local_44;
            *param_3 = uVar3;
            param_3[1] = local_50;
            *(ulong *)(param_3 + 2) = CONCAT44(uStack_48,local_4c);
            goto LAB_1000c409;
          }
        }
      }
    }
    else {
LAB_1000c100:
      iVar4 = Ram0000000000006800;
      if (((iVar4 == 0x50414d57) &&
          ((iVar4 = Ram0000000000006804, iVar4 != 0 && (uVar3 = Ram0000000000006808, 0xb < uVar3))))
         && (uVar3 = Ram0000000000006808, 0x9f < uVar3)) {
        uVar3 = UINT_0000689c;
        if ((code *)(ulong)uVar3 != (code *)0x0) {
          (*(code *)(ulong)uVar3)();
        }
      }
    }
LAB_1000c070:
    bVar13 = uVar12 < 0x144f;
    uVar12 = uVar12 + 1;
    uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar13);
    if (uVar12 == 0x1450) {
      uVar11 = 0;
LAB_1000c409:
      return uVar11 & 0xffffffff;
    }
  } while( true );
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef UINT_00006928
#undef local_868
#undef local_85c
#undef local_85a
#undef local_84e
#undef local_68
#undef local_60
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef acStack_852
#undef auStack_836
#undef uStack_48

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000692c
#define UINT_0000692c (*(uint *)(0x692cU))
#define local_848 (*(undefined1 (*)[6])(frame + 24))
#define local_842 (*(undefined1 (*)[6])(frame + 30))
#define local_83c (*(undefined2 *)(frame + 36))
#define local_83a (*(undefined1 (*)[20])(frame + 38))
#define local_826 (*(undefined1 *)(frame + 58))
#define local_825 (*(undefined1 *)(frame + 59))
#define local_824 (*(undefined1 *)(frame + 60))
#define local_823 (*(undefined1 *)(frame + 61))
#define local_822 (*(undefined1 *)(frame + 62))
#define local_821 (*(undefined1 *)(frame + 63))
#define local_820 (*(undefined2 *)(frame + 64))
#define local_81e (*(undefined1 (*)[2014])(frame + 66))
#define local_40 (*(undefined4 *)(frame + 2080))
#define local_3c (*(undefined4 *)(frame + 2084))
#define local_38 (*(uint *)(frame + 2088))
#define local_34 (*(uint *)(frame + 2092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c450
 */

undefined8
recovered_1000c450(long param_1,void *param_2,uint param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6,void *param_7,ushort param_8)

{
  unsigned char frame[2176] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 extraout_var = 0;
  short sVar3;
  ushort uVar4;

  if (param_2 == (void *)0x0) {
    return 0;
  }
  if ((param_8 < 0x7d7) && (param_7 != (void *)0x0 || param_8 == 0)) {
    local_38 = param_8 + 0x1c;
    local_40 = param_6;
    local_3c = param_5;
    local_34 = param_3;
    memcpy(local_848,param_2,6);
    memcpy(local_842,(void *)(param_1 + 2),6);
    local_83c = 8;
    sVar3 = 0x4700;
    if (*(short *)(param_1 + 0x20) != 0) {
      sVar3 = *(short *)(param_1 + 0x20);
    }
    uVar4 = sVar3 + 1U;
    if ((ushort)(sVar3 + 1U) == 0) {
      uVar4 = sVar3 + 2;
    }
    *(ushort *)(param_1 + 0x20) = uVar4;
    recovered_1000c5e0(local_83a,local_38 & 0xffff,(uint)uVar4,0x11,local_34,param_4);
    local_826 = (undefined1)((uint)local_3c >> 8);
    local_825 = (undefined1)local_3c;
    local_824 = (undefined1)((uint)local_40 >> 8);
    local_823 = (undefined1)local_40;
    local_822 = (undefined1)(param_8 + 8 >> 8);
    local_821 = (undefined1)(param_8 + 8);
    local_820 = 0;
    if (param_8 != 0) {
      memcpy(local_81e,param_7,(ulong)param_8);
    }
    iVar1 = Ram0000000000006800;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x12f < uVar2))
    {
      uVar2 = UINT_0000692c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar2)(local_848,param_8 + 0x2a);
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),uVar2 != 0);
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000692c
#undef local_848
#undef local_842
#undef local_83c
#undef local_83a
#undef local_826
#undef local_825
#undef local_824
#undef local_823
#undef local_822
#undef local_821
#undef local_820
#undef local_81e
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5e0
 */

void recovered_1000c5e0(undefined1 *param_1,int param_2,int param_3,uint param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;

  memset(param_1,0,0x14);
  *param_1 = 0x45;
  param_1[2] = (char)((uint)param_2 >> 8);
  param_1[3] = (char)param_2;
  param_1[4] = (char)((uint)param_3 >> 8);
  param_1[5] = (char)param_3;
  *(undefined2 *)(param_1 + 6) = 0x40;
  param_1[8] = 0x40;
  param_1[9] = (char)param_4;
  param_1[0xc] = (char)(param_5 >> 0x18);
  bVar2 = (byte)(param_5 >> 0x10);
  param_1[0xd] = bVar2;
  param_1[0xe] = (char)(param_5 >> 8);
  param_1[0xf] = (char)param_5;
  param_1[0x10] = (char)(param_6 >> 0x18);
  bVar3 = (byte)(param_6 >> 0x10);
  param_1[0x11] = bVar3;
  param_1[0x12] = (char)(param_6 >> 8);
  param_1[0x13] = (char)param_6;
  for (uVar1 = (param_6 & 0xffff) +
               (uint)bVar2 + param_3 +
               ((param_5 >> 0x18) << 8 | param_4) + (param_6 >> 0x18) * 0x100 + param_2 +
               (uint)(byte)param_1[1] + (uint)bVar3 +
               (uint)(ushort)(*(ushort *)(param_1 + 10) << 8 | *(ushort *)(param_1 + 10) >> 8) +
               (param_5 & 0xffff) + 0xc500; 0xffff < uVar1;
      uVar1 = (uVar1 & 0xffff) + (uVar1 >> 0x10)) {
  }
  *(ushort *)(param_1 + 10) = ~(ushort)uVar1 << 8 | (ushort)~(ushort)uVar1 >> 8;
  return;
}


#undef str_1001e54a
#define str_1001e54a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63dU)))
#undef str_1001e554
#define str_1001e554 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x647U)))
#undef str_1001e56b
#define str_1001e56b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x65eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c6f0
 */

bool recovered_1000c6f0(ushort *param_1,uint param_2,ushort param_3,uint *param_4,char *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  char *format;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort uVar8;
  ushort uVar9;

  if (((param_2 < 0xc || param_1 == (ushort *)0x0) ||
      ((ushort)(*param_1 << 8 | *param_1 >> 8) != param_3)) || (-1 < (char)param_1[1])) {
    return false;
  }
  if ((*(byte *)((long)param_1 + 3) & 0xf) == 0) {
    uVar8 = param_1[2] << 8 | param_1[2] >> 8;
    if (uVar8 == 0) {
      uVar3 = 0xc;
    }
    else {
      uVar7 = (ulong)param_2;
      uVar3 = 0xc;
      uVar9 = 0;
      do {
        uVar2 = 0;
        while( true ) {
          if (uVar7 <= uVar3) goto LAB_1000c8a9;
          uVar4 = uVar3 + 1;
          uVar6 = (ulong)*(byte *)((long)param_1 + uVar3);
          if (0xbf < uVar6) break;
          if (0x3f < *(byte *)((long)param_1 + uVar3)) goto LAB_1000c8a9;
          if (uVar6 == 0) goto LAB_1000c7ca;
          uVar3 = uVar4 + uVar6;
          if ((uVar7 < uVar3) || (bVar1 = 0x7f < uVar2, uVar2 = uVar2 + 1, bVar1))
          goto LAB_1000c8a9;
        }
        if (uVar7 <= uVar4) goto LAB_1000c8a9;
        uVar4 = uVar3 + 2;
LAB_1000c7ca:
        uVar3 = uVar4 + 4;
        if (uVar7 < uVar3) goto LAB_1000c8a9;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar8);
    }
    uVar8 = param_1[3] << 8 | param_1[3] >> 8;
    if (uVar8 != 0) {
      uVar7 = (ulong)param_2;
      uVar9 = 0;
      do {
        uVar2 = 0;
        while( true ) {
          if (uVar7 <= uVar3) goto LAB_1000c8a9;
          uVar4 = uVar3 + 1;
          uVar6 = (ulong)*(byte *)((long)param_1 + uVar3);
          if (0xbf < uVar6) break;
          if (0x3f < *(byte *)((long)param_1 + uVar3)) goto LAB_1000c8a9;
          if (uVar6 == 0) goto LAB_1000c84e;
          uVar3 = uVar4 + uVar6;
          if ((uVar7 < uVar3) || (bVar1 = 0x7f < uVar2, uVar2 = uVar2 + 1, bVar1))
          goto LAB_1000c8a9;
        }
        if (uVar7 <= uVar4) goto LAB_1000c8a9;
        uVar4 = uVar3 + 2;
LAB_1000c84e:
        uVar6 = uVar4 + 10;
        if (uVar7 < uVar6) goto LAB_1000c8a9;
        uVar5 = *(ushort *)((long)param_1 + uVar4 + 8);
        uVar5 = uVar5 << 8 | uVar5 >> 8;
        uVar3 = uVar5 + uVar6;
        if (uVar7 < uVar3) goto LAB_1000c8a9;
        if (((uVar5 == 4) &&
            ((ushort)(*(ushort *)((long)param_1 + uVar4) << 8 |
                     *(ushort *)((long)param_1 + uVar4) >> 8) == 1)) &&
           (uVar5 = *(ushort *)((long)param_1 + uVar4 + 2), (ushort)(uVar5 << 8 | uVar5 >> 8) == 1))
        {
          uVar2 = *(uint *)((long)param_1 + uVar6);
          uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          *param_4 = uVar2;
          return uVar2 != 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar8);
    }
    format = str_1001e56b;
  }
  else {
    format = str_1001e54a;
  }
LAB_1000c8b0:
  pf_varargs_1001df25___(param_5,0x60,format);
  return false;
LAB_1000c8a9:
  format = str_1001e554;
  goto LAB_1000c8b0;
}

#undef str_1001e54a
#undef str_1001e554
#undef str_1001e56b

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#undef str_1001e672
#define str_1001e672 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x765U)))
#undef str_1001e686
#define str_1001e686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x779U)))
#undef str_1001e690
#define str_1001e690 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x783U)))
#undef str_1001e6a4
#define str_1001e6a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x797U)))
#define local_858 (*(undefined1 (*)[2052])(frame + 24))
#define local_54 (*(uint *)(frame + 2076))
#define local_50 (*(char * *)(frame + 2080))
#define local_44 (*(uint *)(frame + 2092))
#define local_40 (*(uint *)(frame + 2096))
#define local_3c (*(uint *)(frame + 2100))
#define local_38 (*(uint *)(frame + 2104))
#define local_31 (*(byte *)(frame + 2111))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c8e0
 */

undefined8
recovered_1000c8e0(long *param_1,long param_2,uint param_3,ushort param_4,void *param_5,
                  char *param_6,ulong param_7)

{
  unsigned char frame[2192] __attribute__((aligned(16))) = {0};

  int iVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *format;
  ulong uVar6;
  int iVar7;

  if (param_5 != (void *)0x0 && (param_2 != 0 && param_1 != (long *)0x0)) {
    local_50 = param_6;
    memset(param_1,0,0x4028);
    *param_1 = param_2;
    *(uint *)(param_1 + 1) = param_3;
    *(ushort *)((long)param_1 + 0xc) = param_4;
    memcpy(param_1 + 3,param_5,6);
    sVar2 = 0x474c;
    if (*(short *)(param_2 + 0x24) != 0) {
      sVar2 = *(short *)(param_2 + 0x24);
    }
    uVar3 = sVar2 + 1U;
    if ((ushort)(sVar2 + 1U) == 0) {
      uVar3 = sVar2 + 2;
    }
    *(ushort *)(param_2 + 0x24) = uVar3;
    *(ushort *)((long)param_1 + 0xe) = uVar3 | 0xc000;
    iVar1 = *(int *)(param_2 + 0x28);
    iVar7 = 0x474c6142;
    if (iVar1 != 0) {
      iVar7 = iVar1 + 0x1fff + (uint)(iVar1 == -0x1fff);
    }
    *(int *)(param_2 + 0x28) = iVar7;
    *(int *)(param_1 + 2) = iVar7;
    uVar5 = recovered_1000d310(param_2,param_5,param_3,(uint)(uVar3 | 0xc000),(uint)param_4,iVar7,0,
                               2,(void *)0x0,0);
    if ((char)uVar5 == '\0') {
      format = str_1001e672;
    }
    else {
      uVar6 = 0x1450;
      local_38 = (uint)param_4;
      do {
        local_40 = 0;
        local_3c = 0;
        local_31 = 0;
        local_44 = 0;
        iVar1 = Ram0000000000006800;
        if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
            (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
           (uVar4 = Ram0000000000006808, 299 < uVar4)) {
          uVar4 = UINT_00006928;
          if (((code *)(ulong)uVar4 == (code *)0x0) ||
             (uVar4 = (*(code *)(ulong)uVar4)(local_858,0x800,&local_44),
             local_44 < 0xe || uVar4 == 0)) goto LAB_1000ca70;
          local_54 = (uint)*(ushort *)((long)param_1 + 0xe);
          uVar5 = recovered_1000d650(param_2,(long)local_858,local_44,param_3,
                                     *(ushort *)((long)param_1 + 0xe),(ushort)local_38,&local_40,
                                     &local_3c,&local_31,(long *)0x0,(short *)0x0);
          if ((char)uVar5 != '\0') {
            if ((local_31 & 4) != 0) {
              format = str_1001e686;
              goto LAB_1000cbb0;
            }
            if (((~local_31 & 0x12) == 0) && (local_3c == (int)param_1[2] + 1U)) {
              *(uint *)((long)param_1 + 0x14) = local_40 + 1;
              *(uint *)(param_1 + 2) = local_3c;
              uVar5 = recovered_1000d310(param_2,param_5,param_3,local_54,local_38,local_3c,
                                         local_40 + 1,0x10,(void *)0x0,0);
              if ((char)uVar5 != '\0') {
                *(undefined1 *)((long)param_1 + 0x4022) = 1;
                return CONCAT71((int7)(uVar6 >> 8),1);
              }
              format = str_1001e6a4;
              goto LAB_1000cbb0;
            }
          }
        }
        else {
LAB_1000ca70:
          iVar1 = Ram0000000000006800;
          if (((iVar1 == 0x50414d57) &&
              ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
               (uVar4 = Ram0000000000006808, 0xb < uVar4)))) &&
             (uVar4 = Ram0000000000006808, 0x9f < uVar4)) {
            uVar4 = UINT_0000689c;
            if ((code *)(ulong)uVar4 != (code *)0x0) {
              (*(code *)(ulong)uVar4)();
            }
          }
        }
        uVar4 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar4;
      } while (uVar4 != 0);
      format = str_1001e690;
    }
LAB_1000cbb0:
    pf_varargs_1001df25___(local_50,param_7,format);
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef UINT_00006928
#undef str_1001e672
#undef str_1001e686
#undef str_1001e690
#undef str_1001e6a4
#undef local_858
#undef local_54
#undef local_50
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbe0
 */

undefined8 recovered_1000cbe0(long param_1,long param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ushort uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;

  if (((param_1 == 0) || (puVar1 = *(undefined8 **)(param_1 + 8), puVar1 == (undefined8 *)0x0)) ||
     (param_2 == 0 && param_3 != 0)) {
LAB_1000cc1d:
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulong)in_RAX >> 8),1);
    if (param_3 != 0) {
      uVar2 = *(ushort *)((long)puVar1 + 0x401e);
      uVar7 = 0;
      do {
        uVar5 = *(ushort *)(puVar1 + 0x804);
        if (uVar5 <= uVar2) {
          uVar4 = recovered_1000d7b0(puVar1,param_4,param_5);
          if ((char)uVar4 == '\0') goto LAB_1000cc1d;
          uVar2 = *(ushort *)((long)puVar1 + 0x401e);
          uVar5 = *(ushort *)(puVar1 + 0x804);
        }
        uVar6 = (ulong)uVar5 - (ulong)uVar2;
        uVar4 = param_3 - uVar7;
        if (uVar6 <= param_3 - uVar7) {
          uVar4 = uVar6;
        }
        memcpy((void *)(uVar7 + param_2),(void *)((long)puVar1 + (ulong)uVar2 + 0x1e),
                           uVar4);
        uVar2 = *(short *)((long)puVar1 + 0x401e) + (short)uVar4;
        *(ushort *)((long)puVar1 + 0x401e) = uVar2;
        uVar7 = uVar7 + uVar4;
      } while (uVar7 < param_3);
      uVar3 = CONCAT71((uint7)(byte)(uVar2 >> 8),1);
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ccd0
 */

ulong recovered_1000ccd0(long param_1,long param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((param_1 == 0) || (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0)) {
    return 0;
  }
  uVar1 = recovered_1000dc30(*(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return uVar1;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006968
#define UINT_00006968 (*(uint *)(0x6968U))
#define local_48 (*(undefined1 (*)[8])(frame + 24))
#define local_40 (*(uint *)(frame + 32))
#define local_3c (*(int *)(frame + 36))
#define local_38 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ccf0
 */

ulong recovered_1000ccf0(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  undefined8 unaff_R14;

  if (param_1 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *param_1;
  }
  if (param_3 == 0 || param_2 != 0) {
    memset(local_48,0,0x18);
    iVar1 = Ram0000000000006800;
    uVar6 = 0x474c5343;
    if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
        (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x16b < uVar2))
    {
      uVar2 = UINT_00006968;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        uVar2 = (*(code *)(ulong)uVar2)(local_48);
        if (uVar2 != 0) {
          uVar6 = local_3c * 0x3c6ef35f ^ local_40 ^ local_38 * 0x19660d ^ 0x474c5343;
        }
      }
    }
    if (lVar5 != 0) {
      uVar6 = ((uint)*(byte *)(lVar5 + 0x205c5b) |
              (uint)*(byte *)(lVar5 + 0x205c5a) << 8 |
              (uint)*(byte *)(lVar5 + 0x205c57) << 0x10 | (uint)*(byte *)(lVar5 + 0x205c56) << 0x18)
              ^ uVar6 ^ *(int *)(lVar5 + 0x205c50) * 0x3c6ef35f ^
                        *(int *)(lVar5 + 0x205c4c) * 0x19660d ^ *(uint *)(lVar5 + 0x205c7c) ^
                        *(uint *)(lVar5 + 0x205c5c);
    }
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar3 = 0;
      }
      else {
        bVar4 = 8;
        uVar3 = 0;
        do {
          uVar6 = uVar6 << 0xd ^ uVar6;
          uVar6 = uVar6 >> 0x11 ^ uVar6;
          uVar6 = uVar6 << 5 ^ uVar6;
          uVar2 = uVar6 << 0xd ^ uVar6;
          *(char *)(param_2 + uVar3) = (char)(uVar6 >> (bVar4 - 8 & 0x10));
          uVar2 = uVar2 >> 0x11 ^ uVar2;
          uVar6 = uVar2 << 5 ^ uVar2;
          *(char *)(param_2 + 1 + uVar3) = (char)(uVar6 >> (bVar4 & 0x18));
          uVar3 = uVar3 + 2;
          bVar4 = bVar4 + 0x10;
        } while ((param_3 & 0xfffffffffffffffe) != uVar3);
      }
      if ((param_3 & 1) != 0) {
        uVar6 = uVar6 << 0xd ^ uVar6;
        uVar6 = uVar6 >> 0x11 ^ uVar6;
        uVar6 = uVar6 << 5 ^ uVar6;
        *(char *)(param_2 + uVar3) = (char)(uVar6 >> ((char)uVar3 * '\b' & 0x1fU));
      }
    }
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x205c7c) = *(uint *)(lVar5 + 0x205c7c) ^ uVar6;
    }
  }
  return CONCAT71((int7)((ulong)unaff_R14 >> 8),param_3 == 0 || param_2 != 0) & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006968
#undef local_48
#undef local_40
#undef local_3c
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e72e
#define DAT_1001e72e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x821U)))
#undef DAT_1001e77c
#define DAT_1001e77c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x86fU)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef str_1001e6f2
#define str_1001e6f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e5U)))
#undef str_1001e70a
#define str_1001e70a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fdU)))
#undef str_1001e733
#define str_1001e733 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x826U)))
#undef str_1001e73a
#define str_1001e73a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x82dU)))
#undef str_1001e750
#define str_1001e750 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x843U)))
#undef str_1001e774
#define str_1001e774 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x867U)))
#define local_258 (*(char (*)[256])(frame + 24))
#define local_158 (*(byte (*)[192])(frame + 280))
#define local_98 (*(byte (*)[80])(frame + 472))
#define local_48 (*(char * *)(frame + 552))
#define local_3c (*(uint *)(frame + 564))
#define local_38 (*(uint *)(frame + 568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cef0
 */

ulong recovered_1000cef0(long param_1,byte *param_2,long param_3,char param_4,char *param_5,
                        ulong param_6)

{
  unsigned char frame[656] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *vararg0;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  undefined8 unaff_R14;
  byte bVar9;

  if ((param_1 != 0) &&
     (uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1), *(char *)(param_1 + 0x10) != '\0'))
  goto LAB_1000d260;
  if (param_4 != '\x01' || param_3 == 0) {
    uVar3 = 0;
    pf_varargs_1001df25___(param_5,param_6,str_1001e6f2);
    goto LAB_1000d260;
  }
  lVar2 = 0;
  do {
    bVar9 = *(byte *)(param_3 + lVar2);
    local_98[lVar2 * 2] = str_1001e750[bVar9 >> 4];
    local_98[lVar2 * 2 + 1] = str_1001e750[bVar9 & 0xf];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x20);
  local_98[0x40] = 0;
  local_158[0] = 0;
  local_48 = param_5;
  uVar3 = strlen((char *)local_158);
  if (uVar3 < 0xbf) {
    pf_varargs_1001df25__8_((char *)(local_158 + uVar3),0xc0 - uVar3,&DAT_1001e232,((uintptr_t)pf_module_state + 0x854U));
  }
  if ((param_2 == (byte *)0x0) || (bVar9 = *param_2, bVar9 == 0)) {
    uVar3 = strlen((char *)local_158);
    if (uVar3 < 0xbf) {
      vararg0 = str_1001e774;
      goto LAB_1000d0a9;
    }
  }
  else {
    pbVar7 = param_2;
    do {
      pbVar7 = pbVar7 + 1;
      if (((byte)((bVar9 & 0xdf) + 0xbf) < 0x1a) ||
         ((byte)(bVar9 - 0x30U) < 10 || (byte)(bVar9 - 0x2d) < 2)) {
        uVar3 = strlen((char *)local_158);
        if (uVar3 < 0xbf) goto LAB_1000cfe0;
      }
      else {
        uVar3 = strlen((char *)local_158);
        if (uVar3 < 0xbf) {
          bVar9 = 0x5f;
LAB_1000cfe0:
          local_158[uVar3] = bVar9;
          local_158[uVar3 + 1] = 0;
        }
      }
      bVar9 = *pbVar7;
    } while (bVar9 != 0);
    uVar3 = strlen((char *)local_158);
    if (uVar3 < 0xbf) {
      vararg0 = &DAT_1001e77c;
LAB_1000d0a9:
      pf_varargs_1001df25__8_
                ((char *)(local_158 + uVar3),0xc0 - uVar3,&DAT_1001e232,(ulonglong)vararg0);
    }
  }
  memset(&local_3c,0,0xc);
  iVar5 = Ram0000000000006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x37 < uVar1)) {
    uVar1 = UINT_00006834;
    if (((code *)(ulong)uVar1 != (code *)0x0) &&
       (uVar1 = (*(code *)(ulong)uVar1)((char *)local_158,&local_3c),
       (local_38 != 0 && local_3c != 0) && uVar1 != 0)) {
      if (0x3f < local_38) {
        uVar1 = 1;
        iVar5 = 0;
        do {
          lVar2 = 0;
          uVar6 = uVar1;
          while( true ) {
            bVar9 = *(byte *)((ulong)local_3c + (ulong)(uVar6 - 1));
            bVar8 = bVar9 | 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar8 = bVar9;
            }
            if (bVar8 != local_98[lVar2]) break;
            bVar9 = *(byte *)((ulong)local_3c + (ulong)uVar6);
            bVar8 = bVar9 | 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar8 = bVar9;
            }
            if (bVar8 != local_98[lVar2 + 1]) break;
            lVar2 = lVar2 + 2;
            uVar6 = uVar6 + 2;
            uVar3 = 1;
            if (lVar2 == 0x40) goto LAB_1000d260;
          }
          uVar6 = iVar5 + 0x41;
          uVar1 = uVar1 + 1;
          iVar5 = iVar5 + 1;
        } while (uVar6 <= local_38);
      }
      pbVar7 = &DAT_1001e72e;
      if (param_2 != (byte *)0x0) {
        pbVar7 = param_2;
      }
      uVar3 = 0;
      pf_varargs_1001df25__8_(local_48,param_6,str_1001e70a,(ulonglong)pbVar7);
      goto LAB_1000d260;
    }
  }
  iVar5 = Ram0000000000006800;
  if (((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
     ((uVar1 = Ram0000000000006808, 0xb < uVar1 && (uVar1 = Ram0000000000006808, 0x8f < uVar1)))) {
    uVar1 = UINT_0000688c;
    if ((code *)(ulong)uVar1 != (code *)0x0) {
      (*(code *)(ulong)uVar1)(str_1001e733);
    }
  }
  pbVar7 = &DAT_1001f468;
  if (param_2 != (byte *)0x0) {
    pbVar7 = param_2;
  }
  uVar3 = 0;
  pf_varargs_1001df25__8__8_(local_258,0x100,str_1001e73a,(ulonglong)pbVar7,(ulonglong)local_98);
  uVar4 = strlen(local_258);
  iVar5 = Ram0000000000006800;
  if (iVar5 == 0x50414d57) {
    iVar5 = Ram0000000000006804;
    if (((iVar5 != 0) && (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
       (uVar1 = Ram0000000000006808, 0x3b < uVar1)) {
      uVar1 = UINT_00006838;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        uVar1 = (*(code *)(ulong)uVar1)((char *)local_158,local_258,(uint)uVar4);
        uVar3 = (ulong)(uVar1 != 0);
        goto LAB_1000d260;
      }
    }
    uVar3 = 0;
  }
LAB_1000d260:
  return uVar3 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001e72e
#undef DAT_1001e77c
#undef DAT_1001f468
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_00006838
#undef UINT_0000688c
#undef str_1001e6f2
#undef str_1001e70a
#undef str_1001e733
#undef str_1001e73a
#undef str_1001e750
#undef str_1001e774
#undef local_258
#undef local_158
#undef local_98
#undef local_48
#undef local_3c
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000692c
#define UINT_0000692c (*(uint *)(0x692cU))
#define uStack_833 (*(undefined1 *)(frame + 61))
#define uStack_831 (*(undefined1 *)(frame + 63))
#define uStack_82f (*(undefined1 *)(frame + 65))
#define uStack_82d (*(undefined1 *)(frame + 67))
#define local_858 (*(undefined1 (*)[6])(frame + 24))
#define local_852 (*(undefined1 (*)[6])(frame + 30))
#define local_84c (*(undefined2 *)(frame + 36))
#define local_84a (*(undefined1 (*)[20])(frame + 38))
#define local_836 (*(undefined2 *)(frame + 58))
#define local_834 (*(undefined1 *)(frame + 60))
#define local_832 (*(undefined1 *)(frame + 62))
#define local_830 (*(undefined1 *)(frame + 64))
#define local_82e (*(undefined1 *)(frame + 66))
#define local_82c (*(undefined1 *)(frame + 68))
#define local_82b (*(undefined1 *)(frame + 69))
#define local_82a (*(char *)(frame + 70))
#define local_829 (*(byte *)(frame + 71))
#define local_828 (*(undefined2 *)(frame + 72))
#define local_826 (*(ushort *)(frame + 74))
#define local_822 (*(undefined4 *)(frame + 78))
#define local_50 (*(long *)(frame + 2080))
#define local_48 (*(ulong *)(frame + 2088))
#define local_40 (*(undefined4 *)(frame + 2096))
#define local_3c (*(undefined4 *)(frame + 2100))
#define local_38 (*(uint *)(frame + 2104))
#define local_34 (*(uint *)(frame + 2108))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d310
 */

undefined8
recovered_1000d310(long param_1,void *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,byte param_8,void *param_9,uint param_10)

{
  unsigned char frame[2192] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  undefined4 extraout_var = 0;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ushort *dst;
  ulong n;

  if (param_2 != (void *)0x0 && param_1 != 0) {
    if (param_9 == (void *)0x0 && (short)param_10 != 0) {
      return 0;
    }
    uVar5 = (uint)((param_8 & 2) >> 1);
    uVar8 = param_10 + uVar5 * 4 + 0x28 & 0xffff;
    if (0x7f2 < uVar8) {
      return 0;
    }
    dst = &local_836;
    local_48 = (ulong)(uVar5 * 4 + 0x14);
    local_34 = param_10 + uVar5 * 4 + 0x14;
    local_40 = param_5;
    local_3c = param_4;
    local_38 = param_3;
    memcpy(local_858,param_2,6);
    memcpy(local_852,(void *)(param_1 + 2),6);
    uVar5 = local_38;
    local_84c = 8;
    sVar3 = 0x4700;
    if (*(short *)(param_1 + 0x20) != 0) {
      sVar3 = *(short *)(param_1 + 0x20);
    }
    uVar4 = sVar3 + 1U;
    if ((ushort)(sVar3 + 1U) == 0) {
      uVar4 = sVar3 + 2;
    }
    *(ushort *)(param_1 + 0x20) = uVar4;
    local_50 = param_1;
    recovered_1000c5e0(local_84a,uVar8,(uint)uVar4,6,*(uint *)(param_1 + 8),local_38);
    uVar6 = local_34;
    uVar4 = (ushort)local_34;
    n = (ulong)(ushort)local_34;
    memset(dst,0,n);
    PF_PART1(local_836, 0) = (char)((uint)local_3c >> 8);
    PF_PART1(local_836, 1) = (char)local_3c;
    local_834 = (char)((uint)local_40 >> 8);
    uStack_833 = (char)local_40;
    local_832 = (char)((uint)param_6 >> 0x18);
    uStack_831 = (char)((uint)param_6 >> 0x10);
    local_830 = (char)((uint)param_6 >> 8);
    uStack_82f = (char)param_6;
    local_82e = (char)((uint)param_7 >> 0x18);
    uStack_82d = (char)((uint)param_7 >> 0x10);
    local_82c = (char)((uint)param_7 >> 8);
    local_82b = (char)param_7;
    local_82a = (char)local_48 * '\x04';
    local_829 = param_8;
    local_828 = 0x40;
    if ((param_8 & 2) != 0) {
      local_822 = 0xb4050402;
    }
    if ((short)param_10 != 0) {
      memcpy((byte *)((local_48 & 0xffffffff) + (long)dst),param_9,
                         (ulong)(param_10 & 0xffff));
    }
    uVar5 = (*(uint *)(local_50 + 8) & 0xffff) +
            (uVar5 & 0xffff) + (uVar5 >> 0x10) + (*(uint *)(local_50 + 8) >> 0x10) +
            (uVar6 & 0xffff) + 6;
    if (1 < uVar4) {
      uVar1 = n - 2;
      uVar6 = ((uint)(uVar1 >> 1) & 0x7fffffff) + 1 & 3;
      if (uVar6 != 0) {
        uVar7 = 0;
        do {
          uVar5 = uVar5 + (ushort)(*(ushort *)(local_84a + uVar7 + 0x14) << 8 |
                                  *(ushort *)(local_84a + uVar7 + 0x14) >> 8);
          uVar7 = uVar7 + 2;
        } while (uVar6 * 2 != uVar7);
        n = n - uVar7;
        dst = (ushort *)((long)dst + uVar7);
      }
      if (5 < uVar1) {
        do {
          uVar5 = (uint)(ushort)(dst[3] << 8 | dst[3] >> 8) +
                  (uint)(ushort)(dst[2] << 8 | dst[2] >> 8) +
                  (uint)(ushort)(dst[1] << 8 | dst[1] >> 8) +
                  (ushort)(*dst << 8 | *dst >> 8) + uVar5;
          dst = dst + 4;
          n = n - 8;
        } while (1 < n);
      }
    }
    if (n != 0) {
      uVar5 = uVar5 + (uint)(byte)*dst * 0x100;
    }
    for (; 0xffff < uVar5; uVar5 = (uVar5 & 0xffff) + (uVar5 >> 0x10)) {
    }
    local_826 = ~(ushort)uVar5 << 8 | (ushort)~(ushort)uVar5 >> 8;
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0x12f < uVar5))
    {
      uVar5 = UINT_0000692c;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        uVar5 = (*(code *)(ulong)uVar5)(local_858,uVar8 + 0xe);
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar5) >> 8),uVar5 != 0);
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000692c
#undef uStack_833
#undef uStack_831
#undef uStack_82f
#undef uStack_82d
#undef local_858
#undef local_852
#undef local_84c
#undef local_84a
#undef local_836
#undef local_834
#undef local_832
#undef local_830
#undef local_82e
#undef local_82c
#undef local_82b
#undef local_82a
#undef local_829
#undef local_828
#undef local_826
#undef local_822
#undef local_50
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d650
 */

undefined8
recovered_1000d650(long param_1,long param_2,uint param_3,uint param_4,ushort param_5,ushort param_6
                  ,uint *param_7,uint *param_8,undefined1 *param_9,long *param_10,short *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;

  if (param_10 != (long *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (short *)0x0) {
    *param_11 = 0;
  }
  if (((((0x35 < param_3 && (param_2 != 0 && param_1 != 0)) &&
        ((ushort)(*(ushort *)(param_2 + 0xc) << 8 | *(ushort *)(param_2 + 0xc) >> 8) == 0x800)) &&
       ((*(byte *)(param_2 + 0xe) & 0xf0) == 0x40)) &&
      ((*(char *)(param_2 + 0x17) == '\x06' &&
       (uVar6 = *(uint *)(param_2 + 0x1a),
       (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) == param_4)
       ))) && (uVar6 = *(uint *)(param_2 + 0x1e),
              (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ==
              *(uint *)(param_1 + 8))) {
    bVar3 = *(byte *)(param_2 + 0xe) << 2;
    uVar4 = *(ushort *)(param_2 + 0x10) << 8 | *(ushort *)(param_2 + 0x10) >> 8;
    if (((ushort)(bVar3 + 0x14) <= uVar4 && 0x13 < bVar3) && uVar4 + 0xe <= param_3) {
      uVar1 = *(ushort *)(param_2 + 0xe + (ulong)bVar3);
      if (((ushort)(uVar1 << 8 | uVar1 >> 8) == param_6) &&
         (lVar7 = param_2 + 0xe + (ulong)bVar3,
         (ushort)(*(ushort *)(lVar7 + 2) << 8 | *(ushort *)(lVar7 + 2) >> 8) == param_5)) {
        if (*(byte *)(lVar7 + 0xc) < 0x50) {
          return 0;
        }
        uVar6 = *(byte *)(lVar7 + 0xc) >> 2 & 0xfffffffc;
        if ((uint)uVar4 - (uint)bVar3 < uVar6) {
          return 0;
        }
        if (param_7 != (uint *)0x0) {
          uVar2 = *(uint *)(lVar7 + 4);
          *param_7 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
          ;
        }
        if (param_8 != (uint *)0x0) {
          uVar2 = *(uint *)(lVar7 + 8);
          *param_8 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
          ;
        }
        if (param_9 != (undefined1 *)0x0) {
          param_8 = (uint *)0x0;
          *param_9 = *(undefined1 *)(lVar7 + 0xd);
        }
        if (param_10 != (long *)0x0) {
          *param_10 = lVar7 + (ulong)uVar6;
        }
        uVar5 = CONCAT71((int7)((ulong)param_8 >> 8),1);
        if (param_11 == (short *)0x0) {
          return uVar5;
        }
        *param_11 = (short)((uint)uVar4 - (uint)bVar3) - (short)uVar6;
        return uVar5;
      }
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
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef UINT_00006928
#define UINT_00006928 (*(uint *)(0x6928U))
#undef str_1001e686
#define str_1001e686 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x779U)))
#undef str_1001e6b8
#define str_1001e6b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7abU)))
#undef str_1001e6ce
#define str_1001e6ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7c1U)))
#define local_31 (*(byte *)(frame + 2143))
#define local_878 (*(undefined1 (*)[2048])(frame + 24))
#define local_78 (*(long *)(frame + 2072))
#define local_70 (*(long *)(frame + 2080))
#define local_68 (*(void * *)(frame + 2088))
#define local_60 (*(uint *)(frame + 2096))
#define local_5c (*(uint *)(frame + 2100))
#define local_58 (*(uint *)(frame + 2104))
#define local_54 (*(uint *)(frame + 2108))
#define local_50 (*(undefined8 * *)(frame + 2112))
#define local_48 (*(uint *)(frame + 2120))
#define local_44 (*(uint *)(frame + 2124))
#define local_40 (*(long * *)(frame + 2128))
#define local_34 (*(ushort *)(frame + 2140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d7b0
 */

ulong recovered_1000d7b0(undefined8 *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[2224] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong n;
  long lVar5;
  char *format;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 unaff_R14;
  undefined7 uVar10;
  ulong uVar9;
  int iVar11;
  bool bVar12;

  if ((param_1 == (undefined8 *)0x0) || (*(char *)((long)param_1 + 0x4022) != '\x01')) {
    uVar6 = 0;
  }
  else {
    uVar10 = (undefined7)((ulong)unaff_R14 >> 8);
    uVar9 = CONCAT71(uVar10,1);
    uVar6 = uVar9;
    if (*(ushort *)(param_1 + 0x804) <= *(ushort *)((long)param_1 + 0x401e)) {
      *(undefined4 *)((long)param_1 + 0x401e) = 0;
      local_50 = param_1 + 3;
      local_78 = (long)param_1 + 0x1e;
      iVar11 = 0x1450;
      uVar6 = 0;
      local_40 = param_1;
      do {
        local_44 = 0;
        local_60 = 0;
        local_31 = 0;
        local_68 = (void *)0x0;
        local_34 = 0;
        local_48 = 0;
        iVar8 = Ram0000000000006800;
        if (iVar8 == 0x50414d57) {
          iVar8 = Ram0000000000006804;
          if (iVar8 == 0) goto LAB_1000d8c0;
          uVar3 = Ram0000000000006808;
          if (uVar3 < 0xc) goto LAB_1000d8c0;
          uVar3 = Ram0000000000006808;
          if (uVar3 < 300) goto LAB_1000d8c0;
          uVar3 = UINT_00006928;
          if ((code *)(ulong)uVar3 == (code *)0x0) goto LAB_1000d8c0;
          uVar3 = (*(code *)(ulong)uVar3)(local_878,0x800,&local_48);
          param_1 = local_40;
          if (local_48 < 0xe || uVar3 == 0) goto LAB_1000d8c0;
          local_70 = *local_40;
          local_5c = *(uint *)(local_40 + 1);
          local_58 = (uint)*(ushort *)((long)local_40 + 0xe);
          local_54 = (uint)*(ushort *)((long)local_40 + 0xc);
          uVar4 = recovered_1000d650(local_70,(long)local_878,local_48,local_5c,
                                     *(ushort *)((long)local_40 + 0xe),
                                     *(ushort *)((long)local_40 + 0xc),&local_44,&local_60,&local_31
                                     ,(long *)&local_68,(short *)&local_34);
          if ((char)uVar4 != '\0') {
            if ((local_31 & 4) == 0) {
              n = (ulong)local_34;
              if (n != 0) {
                uVar3 = *(uint *)((long)local_40 + 0x14);
                if (local_44 != uVar3) {
                  if ((local_44 < uVar3) && (*(char *)((long)local_40 + 0x4022) == '\x01')) {
                    recovered_1000d310(local_70,local_50,local_5c,local_58,local_54,(int)local_40[2]
                                       ,uVar3,0x10,(void *)0x0,0);
                  }
                  goto LAB_1000da84;
                }
                if (n <= 0x4000 - (ulong)*(ushort *)(local_40 + 0x804)) {
                  memcpy((void *)((ulong)*(ushort *)(local_40 + 0x804) + local_78),
                                     local_68,n);
                  uVar2 = (short)local_40[0x804] + local_34;
                  *(ushort *)(local_40 + 0x804) = uVar2;
                  iVar8 = (uint)local_34 + *(int *)((long)local_40 + 0x14);
                  *(int *)((long)local_40 + 0x14) = iVar8;
                  if ((local_31 & 1) == 0) {
                    uVar6 = 1;
                    param_1 = local_40;
                    if (0x5b3 < (ulong)uVar2 - 0x3a4d) goto LAB_1000d919;
                    recovered_1000dbf0(local_40);
                    uVar6 = CONCAT71(uVar10,1);
                  }
                  else {
                    iVar8 = iVar8 + 1;
                    *(int *)((long)local_40 + 0x14) = iVar8;
                    *(undefined1 *)((long)local_40 + 0x4023) = 1;
                    uVar6 = CONCAT71(uVar10,1);
                    if (*(char *)((long)local_40 + 0x4022) == '\x01') {
                      lVar5 = *local_40;
                      uVar3 = *(uint *)(local_40 + 1);
                      uVar2 = *(ushort *)((long)local_40 + 0xe);
                      uVar1 = *(ushort *)((long)local_40 + 0xc);
                      uVar7 = (undefined4)local_40[2];
                      goto LAB_1000db25;
                    }
                  }
                  goto LAB_1000dae4;
                }
                format = str_1001e6b8;
                goto LAB_1000db57;
              }
LAB_1000da84:
              param_1 = local_40;
              if ((local_31 & 1) == 0) goto LAB_1000d919;
              uVar3 = *(uint *)((long)local_40 + 0x14);
              if (local_44 == uVar3) {
                uVar3 = local_44 + 1;
                *(uint *)((long)local_40 + 0x14) = uVar3;
              }
              *(undefined1 *)((long)local_40 + 0x4023) = 1;
              if (*(char *)((long)local_40 + 0x4022) == '\x01') {
                recovered_1000d310(*local_40,local_50,*(uint *)(local_40 + 1),
                                   (uint)*(ushort *)((long)local_40 + 0xe),
                                   (uint)*(ushort *)((long)local_40 + 0xc),(int)local_40[2],uVar3,
                                   0x10,(void *)0x0,0);
              }
            }
            else {
              uVar6 = 0;
              pf_varargs_1001df25___(param_2,param_3,str_1001e686);
              *(undefined1 *)((long)local_40 + 0x4022) = 0;
            }
            goto LAB_1000dae4;
          }
          param_1 = local_40;
        }
        else {
LAB_1000d8c0:
          iVar8 = Ram0000000000006800;
          if (iVar8 == 0x50414d57) {
            iVar8 = Ram0000000000006804;
            if (iVar8 != 0) {
              uVar3 = Ram0000000000006808;
              if (0xb < uVar3) {
                uVar3 = Ram0000000000006808;
                if (0x9f < uVar3) {
                  uVar3 = UINT_0000689c;
                  if ((code *)(ulong)uVar3 != (code *)0x0) {
                    (*(code *)(ulong)uVar3)();
                    param_1 = local_40;
                  }
                }
              }
            }
          }
          if (uVar6 != 0) {
            bVar12 = uVar6 != 0;
            uVar6 = CONCAT71(uVar10,1);
            if ((bVar12) && (*(char *)((long)param_1 + 0x4022) == '\x01')) {
              lVar5 = *param_1;
              uVar3 = *(uint *)(param_1 + 1);
              uVar2 = *(ushort *)((long)param_1 + 0xe);
              uVar1 = *(ushort *)((long)param_1 + 0xc);
              uVar7 = (undefined4)param_1[2];
              iVar8 = *(int *)((long)param_1 + 0x14);
LAB_1000db25:
              uVar6 = CONCAT71(uVar10,1);
              recovered_1000d310(lVar5,local_50,uVar3,(uint)uVar2,(uint)uVar1,uVar7,iVar8,0x10,
                                 (void *)0x0,0);
            }
            goto LAB_1000dae4;
          }
        }
LAB_1000d919:
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (uVar6 == 0) {
        format = str_1001e6ce;
LAB_1000db57:
        pf_varargs_1001df25___(param_2,param_3,format);
        uVar6 = 0;
      }
      else {
        bVar12 = uVar6 != 0;
        uVar6 = uVar9;
        if (bVar12) {
          recovered_1000dbf0(param_1);
        }
      }
    }
  }
LAB_1000dae4:
  return uVar6 & 0xffffff01;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef UINT_00006928
#undef str_1001e686
#undef str_1001e6b8
#undef str_1001e6ce
#undef local_31
#undef local_878
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dbf0
 */

void recovered_1000dbf0(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(char *)((long)param_1 + 0x4022) == '\x01') {
    recovered_1000d310(*param_1,param_1 + 3,*(uint *)(param_1 + 1),
                       (uint)*(ushort *)((long)param_1 + 0xe),(uint)*(ushort *)((long)param_1 + 0xc)
                       ,*(undefined4 *)(param_1 + 2),*(undefined4 *)((long)param_1 + 0x14),0x10,
                       (void *)0x0,0);
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#undef str_1001e6e2
#define str_1001e6e2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7d5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dc30
 */

ulong recovered_1000dc30(undefined8 *param_1,long param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;

  if (((param_1 == (undefined8 *)0x0) || (*(char *)((long)param_1 + 0x4022) != '\x01')) ||
     (param_2 == 0 && param_3 != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (param_3 != 0) {
      do {
        uVar4 = 0x5b4;
        if (param_3 < 0x5b4) {
          uVar4 = param_3;
        }
        uVar3 = recovered_1000d310(*param_1,param_1 + 3,*(uint *)(param_1 + 1),
                                   (uint)*(ushort *)((long)param_1 + 0xe),
                                   (uint)*(ushort *)((long)param_1 + 0xc),
                                   *(undefined4 *)(param_1 + 2),
                                   *(undefined4 *)((long)param_1 + 0x14),0x18,(void *)param_2,
                                   (uint)uVar4);
        if ((char)uVar3 == '\0') {
          uVar4 = 0;
          pf_varargs_1001df25___(param_4,param_5,str_1001e6e2);
          goto LAB_1000dc6a;
        }
        *(uint *)(param_1 + 2) = *(int *)(param_1 + 2) + (uint)uVar4;
        iVar1 = Ram0000000000006800;
        if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
           ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x9f < uVar2)
            ))) {
          uVar2 = UINT_0000689c;
          if ((code *)(ulong)uVar2 != (code *)0x0) {
            (*(code *)(ulong)uVar2)();
          }
        }
        param_2 = param_2 + uVar4;
        param_3 = param_3 - uVar4;
      } while (param_3 != 0);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
LAB_1000dc6a:
  return uVar4 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000689c
#undef str_1001e6e2

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dd70
 */

void recovered_1000dd70(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x8f < uVar2)) {
    uVar2 = UINT_0000688c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000ddb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(param_1);
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000688c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ddc0
 */

uint recovered_1000ddc0(char *param_1,void *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x3b < uVar2)) {
    uVar2 = UINT_00006838;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000de01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000de10
 */

undefined8 recovered_1000de10(char *param_1,char *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  char *s;

  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if ((param_2 == (char *)0x0 || param_1 == (char *)0x0) ||
     (uVar3 = strlen(param_2), uVar3 == 0)) {
    return 0;
  }
  s = param_1;
LAB_1000de74:
  if (*s == '\0') {
    return 0;
  }
  do {
    uVar9 = 0;
    while (bVar1 = s[uVar9], bVar1 != 0) {
      bVar10 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar10 = bVar1;
      }
      bVar1 = param_2[uVar9];
      bVar11 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar11 = bVar1;
      }
      if (bVar10 != bVar11) break;
      uVar9 = uVar9 + 1;
      if (uVar3 == uVar9) goto LAB_1000def0;
    }
    if (uVar3 == uVar9) break;
    pcVar5 = s + 1;
    s = s + 1;
    if (*pcVar5 == '\0') {
      return 0;
    }
  } while( true );
LAB_1000def0:
  if (s == param_1) {
    uVar3 = strlen(param_2);
    pbVar4 = (byte *)(param_1 + uVar3);
  }
  else {
    bVar1 = s[-1];
    uVar3 = strlen(param_2);
    pbVar4 = (byte *)(s + uVar3);
    if (((0x2c < (ulong)bVar1) || ((0x100100003601U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) &&
       (bVar1 != 0x7d)) goto LAB_1000de60;
  }
  bVar1 = *pbVar4;
  if (((((ulong)bVar1 < 0x2d) && ((0x100100003600U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) ||
      (bVar1 == 0x7b)) && (pcVar5 = strchr(s,0x7b), pcVar5 != (char *)0x0)) {
    pcVar6 = strchr(pcVar5 + 1,0x7d);
    if (pcVar6 != (char *)0x0) {
      iVar2 = (int)pcVar6 + ~(uint)pcVar5;
      iVar8 = 0x3ff;
      if (iVar2 < 0x3ff) {
        iVar8 = iVar2;
      }
      pvVar7 = memcpy(param_3,pcVar5 + 1,(long)iVar8);
      param_3[iVar8] = 0;
      return CONCAT71((int7)((ulong)pvVar7 >> 8),1);
    }
  }
LAB_1000de60:
  s = s + 1;
  uVar3 = strlen(param_2);
  if (uVar3 == 0) {
    return 0;
  }
  goto LAB_1000de74;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dfe0
 */

ulong recovered_1000dfe0(char *param_1,char *param_2,char *param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  byte bVar11;
  char *pcVar12;

  if (param_2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = strlen(param_2);
  }
  if (((param_3 != (char *)0x0) &&
      (*param_3 = '\0', uVar3 != 0 && (param_1 != (char *)0x0 && param_2 != (char *)0x0))) &&
     (uVar4 = strlen(param_2), uVar4 != 0)) {
    pcVar12 = param_1;
LAB_1000e07b:
    if (*pcVar12 != '\0') {
      pcVar7 = pcVar12 + uVar3 + 2;
      do {
        uVar8 = 0;
        while (bVar2 = pcVar12[uVar8], bVar2 != 0) {
          bVar9 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar9 = bVar2;
          }
          bVar2 = param_2[uVar8];
          bVar11 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar11 = bVar2;
          }
          if (bVar9 != bVar11) break;
          uVar8 = uVar8 + 1;
          if (uVar4 == uVar8) goto LAB_1000e100;
        }
        if (uVar4 == uVar8) goto LAB_1000e100;
        pcVar7 = pcVar7 + 1;
        pcVar1 = pcVar12 + 1;
        pcVar12 = pcVar12 + 1;
        if (*pcVar1 == '\0') break;
      } while( true );
    }
  }
  uVar8 = 0;
  goto LAB_1000e18e;
LAB_1000e100:
  if (((pcVar12 == param_1) || (bVar2 = pcVar12[-1], (bVar2 & 0xbf) == 0x3b)) ||
     ((bVar2 < 0x21 && ((0x100003600U >> ((ulong)bVar2 & 0x3f) & 1) != 0)))) {
    bVar2 = pcVar12[uVar3];
    uVar4 = (ulong)bVar2;
    if ((uVar4 < 0x3b) && ((0x400000100003600U >> (uVar4 & 0x3f) & 1) != 0)) {
      while (bVar2 < 0x3b) {
        if ((0x100003600U >> (uVar4 & 0x3f) & 1) == 0) {
          if (uVar4 == 0x3a) goto LAB_1000e1b0;
          break;
        }
        bVar2 = pcVar7[-1];
        uVar4 = (ulong)bVar2;
        pcVar7 = pcVar7 + 1;
      }
    }
  }
  pcVar12 = pcVar12 + 1;
  uVar4 = strlen(param_2);
  uVar8 = 0;
  if (uVar4 == 0) goto LAB_1000e18e;
  goto LAB_1000e07b;
LAB_1000e1b0:
  while( true ) {
    bVar2 = pcVar7[-1];
    uVar3 = (ulong)bVar2;
    if ((0x20 < uVar3) || ((0x100003600U >> (uVar3 & 0x3f) & 1) == 0)) break;
    pcVar7 = pcVar7 + 1;
  }
  lVar10 = param_4 + -1 + (ulong)(param_4 == 0);
  lVar5 = 0;
  while (lVar6 = lVar5, bVar2 != 0) {
    if ((((int)uVar3 == 0x3b) || ((int)uVar3 == 0x7d)) || (lVar6 = lVar10, lVar10 == lVar5)) break;
    param_3[lVar5] = (char)uVar3;
    bVar2 = pcVar7[lVar5];
    uVar3 = (ulong)bVar2;
    lVar5 = lVar5 + 1;
  }
  do {
    if (lVar6 == 0) break;
    pcVar7 = (char *)(ulong)(byte)param_3[lVar6 + -1];
    if (((char *)0x20 < pcVar7) || ((0x100003600U >> ((ulong)pcVar7 & 0x3f) & 1) == 0))
    goto LAB_1000e228;
    lVar6 = lVar6 + -1;
  } while( true );
  lVar6 = 0;
LAB_1000e228:
  param_3[lVar6] = '\0';
  uVar8 = CONCAT71((int7)((ulong)pcVar7 >> 8),*param_3 != '\0');
LAB_1000e18e:
  return uVar8 & 0xffffffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e250
 */

undefined8 recovered_1000e250(byte *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;

  if (param_2 == (uint *)0x0 || param_1 == (byte *)0x0) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_1;
    uVar5 = (ulong)bVar1;
    if (0x23 < uVar5) break;
    if ((0x100003600U >> (uVar5 & 0x3f) & 1) == 0) {
      if (uVar5 == 0) {
        return 0;
      }
      if (uVar5 == 0x23) {
        bVar1 = param_1[1];
        iVar3 = (int)(char)bVar1;
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar3 = iVar3 + -0x30;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar3 = iVar3 + -0x57;
        }
        else {
          if (5 < (byte)(bVar1 + 0xbf)) {
            return 0;
          }
          iVar3 = iVar3 + -0x37;
        }
        if (iVar3 < 0) {
          return 0;
        }
        bVar1 = param_1[2];
        iVar7 = (int)(char)bVar1;
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar7 = iVar7 + -0x30;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar7 = iVar7 + -0x57;
        }
        else {
          if (5 < (byte)(bVar1 + 0xbf)) {
            return 0;
          }
          iVar7 = iVar7 + -0x37;
        }
        if (iVar7 < 0) {
          return 0;
        }
        bVar1 = param_1[3];
        iVar9 = (int)(char)bVar1;
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar9 = iVar9 + -0x30;
        }
        else if ((byte)(bVar1 + 0x9f) < 6) {
          iVar9 = iVar9 + -0x57;
        }
        else {
          if (5 < (byte)(bVar1 + 0xbf)) {
            return 0;
          }
          iVar9 = iVar9 + -0x37;
        }
        if (iVar9 < 0) {
          return 0;
        }
        bVar1 = param_1[4];
        iVar11 = (int)(char)bVar1;
        if ((byte)(bVar1 - 0x30U) < 10) {
          iVar11 = iVar11 + -0x30;
LAB_1000e4e5:
          if (iVar11 < 0) goto LAB_1000e4ff;
          bVar1 = param_1[5];
          iVar12 = (int)(char)bVar1;
          if (9 < (byte)(bVar1 - 0x30U)) {
            if ((byte)(bVar1 + 0x9f) < 6) {
              iVar12 = iVar12 + -0x57;
              goto LAB_1000e525;
            }
            bVar2 = true;
            if ((byte)(bVar1 + 0xbf) < 6) {
              iVar12 = iVar12 + -0x37;
              goto LAB_1000e525;
            }
            goto LAB_1000e542;
          }
          iVar12 = iVar12 + -0x30;
LAB_1000e525:
          if (iVar12 < 0) {
            bVar2 = true;
            goto LAB_1000e542;
          }
          bVar1 = param_1[6];
          iVar13 = (int)(char)bVar1;
          if ((byte)(bVar1 - 0x30U) < 10) {
            iVar13 = iVar13 + -0x30;
          }
          else if ((byte)(bVar1 + 0x9f) < 6) {
            iVar13 = iVar13 + -0x57;
          }
          else {
            if (5 < (byte)(bVar1 + 0xbf)) {
              return 0;
            }
            iVar13 = iVar13 + -0x37;
          }
          if (iVar13 < 0) {
            return 0;
          }
          bVar1 = param_1[7];
          iVar14 = (int)(char)bVar1;
          if ((byte)(bVar1 - 0x30U) < 10) {
            iVar14 = iVar14 + -0x30;
LAB_1000e5df:
            if (iVar14 < 0) goto LAB_1000e5f5;
            bVar1 = param_1[8];
            iVar10 = (int)(char)bVar1;
            if ((byte)(bVar1 - 0x30U) < 10) {
              param_1 = (byte *)(ulong)(iVar10 - 0x30);
            }
            else if ((byte)(bVar1 + 0x9f) < 6) {
              param_1 = (byte *)(ulong)(iVar10 - 0x57);
            }
            else {
              if (5 < (byte)(bVar1 + 0xbf)) {
                return 0;
              }
              param_1 = (byte *)(ulong)(iVar10 - 0x37);
            }
            bVar2 = true;
            if ((int)param_1 < 0) {
              return 0;
            }
          }
          else {
            if ((byte)(bVar1 + 0x9f) < 6) {
              iVar14 = iVar14 + -0x57;
              goto LAB_1000e5df;
            }
            if ((byte)(bVar1 + 0xbf) < 6) {
              iVar14 = iVar14 + -0x37;
              goto LAB_1000e5df;
            }
LAB_1000e5f5:
            bVar2 = false;
          }
          uVar15 = iVar14 << 4 | (uint)param_1;
          uVar4 = (iVar13 << 8 | iVar12 << 0xc) & 0xffffU |
                  (iVar11 << 0x10 | iVar9 << 0x14) & 0xff0000U | iVar7 << 0x18 | iVar3 << 0x1c;
        }
        else {
          if ((byte)(bVar1 + 0x9f) < 6) {
            iVar11 = iVar11 + -0x57;
            goto LAB_1000e4e5;
          }
          if ((byte)(bVar1 + 0xbf) < 6) {
            iVar11 = iVar11 + -0x37;
            goto LAB_1000e4e5;
          }
LAB_1000e4ff:
          bVar2 = false;
LAB_1000e542:
          uVar15 = iVar11 * 0x11;
          uVar4 = iVar9 * 0x1100 & 0xffffU | iVar7 * 0x110000 & 0xff0000U | iVar3 * 0x11000000;
        }
        uVar5 = (ulong)uVar4;
        uVar8 = 0xff;
        if (bVar2) {
          uVar8 = uVar15 & 0xff;
        }
        uVar8 = uVar8 | uVar4;
        goto LAB_1000e57b;
      }
      break;
    }
    param_1 = param_1 + 1;
  }
  bVar6 = bVar1 | 0x20;
  if (0x19 < (byte)(bVar1 + 0xbf)) {
    bVar6 = bVar1;
  }
  if (bVar6 == 0x62) {
    bVar1 = param_1[1];
    if (bVar1 != 0) {
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      if ((bVar6 == 0x6c) && (bVar1 = param_1[2], bVar1 != 0)) {
        bVar6 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar6 = bVar1;
        }
        if ((bVar6 == 0x61) && (bVar1 = param_1[3], bVar1 != 0)) {
          bVar6 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar6 = bVar1;
          }
          if ((bVar6 == 99) && (bVar1 = param_1[4], bVar1 != 0)) {
            bVar6 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar6 = bVar1;
            }
            uVar8 = 0xff;
            uVar5 = 0;
            if (bVar6 == 0x6b) goto LAB_1000e57b;
          }
        }
      }
    }
  }
  else if ((bVar6 == 0x77) && (bVar1 = param_1[1], bVar1 != 0)) {
    bVar6 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar6 = bVar1;
    }
    if ((bVar6 == 0x68) && (bVar1 = param_1[2], bVar1 != 0)) {
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      if ((bVar6 == 0x69) && (bVar1 = param_1[3], bVar1 != 0)) {
        bVar6 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar6 = bVar1;
        }
        if ((bVar6 == 0x74) && (bVar1 = param_1[4], bVar1 != 0)) {
          bVar6 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar6 = bVar1;
          }
          uVar5 = 0;
          uVar8 = 0xffffffff;
          if (bVar6 == 0x65) {
LAB_1000e57b:
            *param_2 = uVar8;
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}


#undef DAT_1001e925
#define DAT_1001e925 (*(char *)(((uintptr_t)pf_module_state + 0xa18U)))
#undef DAT_1001e926
#define DAT_1001e926 (*(char *)(((uintptr_t)pf_module_state + 0xa19U)))
#undef DAT_1001e927
#define DAT_1001e927 (*(char *)(((uintptr_t)pf_module_state + 0xa1aU)))
#undef DAT_1001eab0
#define DAT_1001eab0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba3U)))
#undef DAT_1001eab1
#define DAT_1001eab1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba4U)))
#undef DAT_1001eab2
#define DAT_1001eab2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba5U)))
#undef DAT_1001eab3
#define DAT_1001eab3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba6U)))
#undef DAT_1001eab4
#define DAT_1001eab4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba7U)))
#undef DAT_1001ead1
#define DAT_1001ead1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbc4U)))
#undef str_1001e928
#define str_1001e928 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_1001eaa8
#define str_1001eaa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9bU)))
#undef str_1001eab5
#define str_1001eab5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba8U)))
#undef str_1001eabd
#define str_1001eabd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb0U)))
#undef str_1001eac3
#define str_1001eac3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb6U)))
#undef str_1001eaca
#define str_1001eaca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbdU)))
#undef str_1001ead5
#define str_1001ead5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc8U)))
#undef str_1001eadc
#define str_1001eadc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbcfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e660
 */

undefined8 recovered_1000e660(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  undefined7 extraout_var_04 = 0;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  byte bVar8;

  if (param_1 == (byte *)0x0) goto LAB_1000eb6c;
  bVar1 = *param_1;
  pcVar4 = (char *)(ulong)bVar1;
  if (bVar1 == 0) {
    pcVar7 = &DAT_1001eab0;
LAB_1000e965:
    if (*pcVar7 == '\0') goto LAB_1000ebcb;
    if (bVar1 != 0) goto switchD_1000e6b0_caseD_65;
LAB_1000eb60:
    pcVar4 = str_1001eabd;
LAB_1000eb67:
    if (*pcVar4 == '\0') goto LAB_1000ebcb;
  }
  else {
    bVar5 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar5 = bVar1;
    }
    switch((uintptr_t)(bVar5)) {
    case 100:
switchD_1000e6b0_caseD_64:
      bVar6 = param_1[1];
      cVar2 = DAT_1001e925;
      if (bVar6 == 0) {
joined_r0x1000e76c:
        if (cVar2 == '\0') goto LAB_1000ebcb;
      }
      else {
        bVar8 = bVar6 | 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar8 = bVar6;
        }
        if (bVar8 == 0x69) {
          bVar6 = param_1[2];
          cVar2 = DAT_1001e926;
          if (bVar6 != 0) {
            bVar8 = bVar6 | 0x20;
            if (0x19 < (byte)(bVar6 + 0xbf)) {
              bVar8 = bVar6;
            }
            if ((bVar8 != 0x76) || (cVar2 = DAT_1001e927, param_1[3] != 0)) goto LAB_1000e772;
          }
          goto joined_r0x1000e76c;
        }
      }
LAB_1000e772:
      if (bVar5 == 0x6d) goto switchD_1000e6b0_caseD_6d;
      if (bVar5 == 0x73) goto switchD_1000e6b0_caseD_73;
      break;
    case 0x6d:
switchD_1000e6b0_caseD_6d:
      bVar5 = param_1[1];
      if (bVar5 == 0) {
        pcVar7 = &DAT_1001eab1;
      }
      else {
        bVar6 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar6 = bVar5;
        }
        if (bVar6 != 0x61) break;
        bVar5 = param_1[2];
        if (bVar5 == 0) {
          pcVar7 = &DAT_1001eab2;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x69) break;
          bVar5 = param_1[3];
          if (bVar5 == 0) {
            pcVar7 = &DAT_1001eab3;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if ((bVar6 != 0x6e) || (param_1[4] != 0)) break;
            pcVar7 = &DAT_1001eab4;
          }
        }
      }
      goto LAB_1000e965;
    case 0x70:
      if (param_1[1] == 0) goto LAB_1000ebcb;
      if (bVar5 == 0x73) goto switchD_1000e6b0_caseD_73;
      if (bVar5 == 0x6d) goto switchD_1000e6b0_caseD_6d;
      if (bVar5 == 100) goto switchD_1000e6b0_caseD_64;
      break;
    case 0x73:
switchD_1000e6b0_caseD_73:
      bVar6 = param_1[1];
      if (bVar6 == 0) {
        pcVar7 = str_1001eaa8 + 1;
LAB_1000e8cb:
        if (*pcVar7 == '\0') goto LAB_1000ebcb;
      }
      else {
        bVar8 = bVar6 | 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar8 = bVar6;
        }
        if (bVar8 == 0x65) {
          bVar6 = param_1[2];
          if (bVar6 == 0) {
            pcVar7 = str_1001eaa8 + 2;
          }
          else {
            bVar8 = bVar6 | 0x20;
            if (0x19 < (byte)(bVar6 + 0xbf)) {
              bVar8 = bVar6;
            }
            if (bVar8 != 99) goto LAB_1000e8d4;
            bVar6 = param_1[3];
            if (bVar6 == 0) {
              pcVar7 = str_1001eaa8 + 3;
            }
            else {
              bVar8 = bVar6 | 0x20;
              if (0x19 < (byte)(bVar6 + 0xbf)) {
                bVar8 = bVar6;
              }
              if (bVar8 != 0x74) goto LAB_1000e8d4;
              bVar6 = param_1[4];
              if (bVar6 == 0) {
                pcVar7 = str_1001eaa8 + 4;
              }
              else {
                bVar8 = bVar6 | 0x20;
                if (0x19 < (byte)(bVar6 + 0xbf)) {
                  bVar8 = bVar6;
                }
                if (bVar8 != 0x69) goto LAB_1000e8d4;
                bVar6 = param_1[5];
                if (bVar6 == 0) {
                  pcVar7 = str_1001eaa8 + 5;
                }
                else {
                  bVar8 = bVar6 | 0x20;
                  if (0x19 < (byte)(bVar6 + 0xbf)) {
                    bVar8 = bVar6;
                  }
                  if (bVar8 != 0x6f) goto LAB_1000e8d4;
                  bVar6 = param_1[6];
                  if (bVar6 == 0) {
                    pcVar7 = str_1001eaa8 + 6;
                  }
                  else {
                    bVar8 = bVar6 | 0x20;
                    if (0x19 < (byte)(bVar6 + 0xbf)) {
                      bVar8 = bVar6;
                    }
                    if ((bVar8 != 0x6e) || (param_1[7] != 0)) goto LAB_1000e8d4;
                    pcVar7 = str_1001eaa8 + 7;
                  }
                }
              }
            }
          }
          goto LAB_1000e8cb;
        }
      }
LAB_1000e8d4:
      if (bVar5 == 0x6d) goto switchD_1000e6b0_caseD_6d;
    }
switchD_1000e6b0_caseD_65:
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      pcVar4 = (char *)(ulong)(bVar1 | 0x20);
    }
    if ((char)pcVar4 != 'a') goto LAB_1000eb6c;
    bVar5 = param_1[1];
    if (bVar5 == 0) {
      pcVar7 = str_1001eab5 + 1;
LAB_1000eab4:
      if (*pcVar7 == '\0') goto LAB_1000ebcb;
      if (bVar1 == 0) goto LAB_1000eb60;
    }
    else {
      bVar6 = bVar5 | 0x20;
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        bVar6 = bVar5;
      }
      if (bVar6 == 0x72) {
        bVar5 = param_1[2];
        if (bVar5 == 0) {
          pcVar7 = str_1001eab5 + 2;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x74) goto code_r0x1000eacd;
          bVar5 = param_1[3];
          if (bVar5 == 0) {
            pcVar7 = str_1001eab5 + 3;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x69) goto code_r0x1000eacd;
            bVar5 = param_1[4];
            if (bVar5 == 0) {
              pcVar7 = str_1001eab5 + 4;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if (bVar6 != 99) goto code_r0x1000eacd;
              bVar5 = param_1[5];
              if (bVar5 == 0) {
                pcVar7 = str_1001eab5 + 5;
              }
              else {
                bVar6 = bVar5 | 0x20;
                if (0x19 < (byte)(bVar5 + 0xbf)) {
                  bVar6 = bVar5;
                }
                if (bVar6 != 0x6c) goto code_r0x1000eacd;
                bVar5 = param_1[6];
                if (bVar5 == 0) {
                  pcVar7 = str_1001eab5 + 6;
                }
                else {
                  bVar6 = bVar5 | 0x20;
                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                    bVar6 = bVar5;
                  }
                  if ((bVar6 != 0x65) || (param_1[7] != 0)) goto code_r0x1000eacd;
                  pcVar7 = str_1001eab5 + 7;
                }
              }
            }
          }
        }
        goto LAB_1000eab4;
      }
    }
code_r0x1000eacd:
    bVar1 = param_1[1];
    if (bVar1 == 0) {
      pcVar4 = str_1001eabd + 1;
      goto LAB_1000eb67;
    }
    bVar5 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar5 = bVar1;
    }
    if (bVar5 == 0x73) {
      bVar1 = param_1[2];
      if (bVar1 == 0) {
        pcVar4 = str_1001eabd + 2;
      }
      else {
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        if (bVar5 != 0x69) goto LAB_1000eb6c;
        bVar1 = param_1[3];
        if (bVar1 == 0) {
          pcVar4 = str_1001eabd + 3;
        }
        else {
          bVar5 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar5 = bVar1;
          }
          if (bVar5 != 100) goto LAB_1000eb6c;
          bVar1 = param_1[4];
          if (bVar1 == 0) {
            pcVar4 = str_1001eabd + 4;
          }
          else {
            bVar5 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar5 = bVar1;
            }
            if ((bVar5 != 0x65) || (param_1[5] != 0)) goto LAB_1000eb6c;
            pcVar4 = str_1001eabd + 5;
          }
        }
      }
      goto LAB_1000eb67;
    }
  }
LAB_1000eb6c:
  bVar3 = recovered_10007de0(param_1,(byte *)str_1001eac3);
  pcVar4 = (char *)CONCAT71(extraout_var,bVar3);
  if (!bVar3) {
    bVar3 = recovered_10007de0(param_1,(byte *)str_1001eaca);
    pcVar4 = (char *)CONCAT71(extraout_var_00,bVar3);
    if (!bVar3) {
      bVar3 = recovered_10007de0(param_1,&DAT_1001ead1);
      pcVar4 = (char *)CONCAT71(extraout_var_01,bVar3);
      if (!bVar3) {
        bVar3 = recovered_10007de0(param_1,(byte *)str_1001ead5);
        pcVar4 = (char *)CONCAT71(extraout_var_02,bVar3);
        if (!bVar3) {
          bVar3 = recovered_10007de0(param_1,(byte *)str_1001eadc);
          pcVar4 = (char *)CONCAT71(extraout_var_03,bVar3);
          if (!bVar3) {
            bVar3 = recovered_10007de0(param_1,(byte *)str_1001e928);
            return CONCAT71(extraout_var_04,bVar3);
          }
        }
      }
    }
  }
LAB_1000ebcb:
  return CONCAT71((int7)((ulong)pcVar4 >> 8),1);
}

#undef DAT_1001e925
#undef DAT_1001e926
#undef DAT_1001e927
#undef DAT_1001eab0
#undef DAT_1001eab1
#undef DAT_1001eab2
#undef DAT_1001eab3
#undef DAT_1001eab4
#undef DAT_1001ead1
#undef str_1001e928
#undef str_1001eaa8
#undef str_1001eab5
#undef str_1001eabd
#undef str_1001eac3
#undef str_1001eaca
#undef str_1001ead5
#undef str_1001eadc

#define local_3a8 (*(undefined4 *)(frame + 24))
#define local_3a4 (*(undefined8 *)(frame + 28))
#define local_39c (*(undefined8 *)(frame + 36))
#define local_54 (*(undefined4 *)(frame + 876))
#define local_48 (*(undefined4 *)(frame + 888))
#define local_44 (*(undefined4 *)(frame + 892))
#define local_40 (*(undefined4 *)(frame + 896))
#define local_3c (*(undefined1 *)(frame + 900))
#define local_38 (*(long *)(frame + 904))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec60
 */

void recovered_1000ec60(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (0 < (int)((ulong)param_3 >> 0x20) && 0 < (int)param_3) {
    local_38 = param_1;
    memset(&local_3a8,0,0x370);
    local_3a8 = 7;
    local_3c = param_7;
    local_54 = 0xffffffff;
    uVar1 = *(uint *)(local_38 + 0x52c40);
    if ((ulong)uVar1 < 0x180) {
      *(uint *)(local_38 + 0x52c40) = uVar1 + 1;
      local_3a4 = param_2;
      local_39c = param_3;
      local_48 = param_4;
      local_44 = param_5;
      local_40 = param_6;
      memcpy((void *)(local_38 + (ulong)uVar1 * 0x370 + 0x440),&local_3a8,0x370);
    }
  }
  return;
}

#undef local_3a8
#undef local_3a4
#undef local_39c
#undef local_54
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38

#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e280
#define str_1001e280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1001eae7
#define str_1001eae7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#define local_f8 (*(byte (*)[136])(frame + 24))
#define local_70 (*(char * *)(frame + 160))
#define local_68 (*(byte (*)[40])(frame + 168))
#define local_40 (*(byte * *)(frame + 208))
#define local_31 (*(char *)(frame + 223))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ed40
 */

char * recovered_1000ed40(long param_1,byte *param_2)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  int iVar12;

  pcVar6 = (char *)(param_1 + 1);
  if (param_2 == (byte *)0x0) {
    return pcVar6;
  }
  bVar11 = *param_2;
  if (bVar11 == 0) {
    return pcVar6;
  }
  uVar4 = recovered_100148f0(param_2);
  if ((char)uVar4 != '\0') {
    return pcVar6;
  }
  bVar1 = bVar11 | 0x20;
  if (0x19 < (byte)(bVar11 + 0xbf)) {
    bVar1 = bVar11;
  }
  local_40 = param_2;
  if (bVar1 == 0x74) {
    bVar11 = param_2[1];
    if (bVar11 == 0) {
      pcVar5 = str_1001eae7 + 1;
    }
    else {
      bVar1 = bVar11 | 0x20;
      if (0x19 < (byte)(bVar11 + 0xbf)) {
        bVar1 = bVar11;
      }
      if (bVar1 != 0x65) goto LAB_1000f0f9;
      bVar11 = param_2[2];
      if (bVar11 == 0) {
        pcVar5 = str_1001eae7 + 2;
      }
      else {
        bVar1 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar1 = bVar11;
        }
        if (bVar1 != 0x6d) goto LAB_1000f0f9;
        bVar11 = param_2[3];
        if (bVar11 == 0) {
          pcVar5 = str_1001eae7 + 3;
        }
        else {
          bVar1 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar1 = bVar11;
          }
          if (bVar1 != 0x70) goto LAB_1000f0f9;
          bVar11 = param_2[4];
          if (bVar11 == 0) {
            pcVar5 = str_1001eae7 + 4;
          }
          else {
            bVar1 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar1 = bVar11;
            }
            if (bVar1 != 0x6c) goto LAB_1000f0f9;
            bVar11 = param_2[5];
            if (bVar11 == 0) {
              pcVar5 = str_1001eae7 + 5;
            }
            else {
              bVar1 = bVar11 | 0x20;
              if (0x19 < (byte)(bVar11 + 0xbf)) {
                bVar1 = bVar11;
              }
              if (bVar1 != 0x61) goto LAB_1000f0f9;
              bVar11 = param_2[6];
              if (bVar11 == 0) {
                pcVar5 = str_1001eae7 + 6;
              }
              else {
                bVar1 = bVar11 | 0x20;
                if (0x19 < (byte)(bVar11 + 0xbf)) {
                  bVar1 = bVar11;
                }
                if (bVar1 != 0x74) goto LAB_1000f0f9;
                bVar11 = param_2[7];
                if (bVar11 == 0) {
                  pcVar5 = str_1001eae7 + 7;
                }
                else {
                  bVar1 = bVar11 | 0x20;
                  if (0x19 < (byte)(bVar11 + 0xbf)) {
                    bVar1 = bVar11;
                  }
                  if ((bVar1 != 0x65) || (param_2[8] != 0)) goto LAB_1000f0f9;
                  pcVar5 = str_1001eae7 + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (bVar1 != 0x73) goto LAB_1000f0f9;
    bVar11 = param_2[1];
    if (bVar11 == 0) {
      pcVar5 = str_1001e280 + 1;
LAB_1000f00f:
      if (*pcVar5 == '\0') goto LAB_1000f534;
    }
    else {
      bVar1 = bVar11 | 0x20;
      if (0x19 < (byte)(bVar11 + 0xbf)) {
        bVar1 = bVar11;
      }
      if (bVar1 == 99) {
        bVar11 = param_2[2];
        if (bVar11 == 0) {
          pcVar5 = str_1001e280 + 2;
        }
        else {
          bVar1 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar1 = bVar11;
          }
          if (bVar1 != 0x72) goto LAB_1000f018;
          bVar11 = param_2[3];
          if (bVar11 == 0) {
            pcVar5 = str_1001e280 + 3;
          }
          else {
            bVar1 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar1 = bVar11;
            }
            if (bVar1 != 0x69) goto LAB_1000f018;
            bVar11 = param_2[4];
            if (bVar11 == 0) {
              pcVar5 = str_1001e280 + 4;
            }
            else {
              bVar1 = bVar11 | 0x20;
              if (0x19 < (byte)(bVar11 + 0xbf)) {
                bVar1 = bVar11;
              }
              if (bVar1 != 0x70) goto LAB_1000f018;
              bVar11 = param_2[5];
              if (bVar11 == 0) {
                pcVar5 = str_1001e280 + 5;
              }
              else {
                bVar1 = bVar11 | 0x20;
                if (0x19 < (byte)(bVar11 + 0xbf)) {
                  bVar1 = bVar11;
                }
                if ((bVar1 != 0x74) || (param_2[6] != 0)) goto LAB_1000f018;
                pcVar5 = str_1001e280 + 6;
              }
            }
          }
        }
        goto LAB_1000f00f;
      }
    }
LAB_1000f018:
    bVar11 = param_2[1];
    if (bVar11 == 0) {
      pcVar5 = str_1001e271 + 1;
    }
    else {
      bVar1 = bVar11 | 0x20;
      if (0x19 < (byte)(bVar11 + 0xbf)) {
        bVar1 = bVar11;
      }
      if (bVar1 != 0x74) goto LAB_1000f0f9;
      bVar11 = param_2[2];
      if (bVar11 == 0) {
        pcVar5 = str_1001e271 + 2;
      }
      else {
        bVar1 = bVar11 | 0x20;
        if (0x19 < (byte)(bVar11 + 0xbf)) {
          bVar1 = bVar11;
        }
        if (bVar1 != 0x79) goto LAB_1000f0f9;
        bVar11 = param_2[3];
        if (bVar11 == 0) {
          pcVar5 = str_1001e271 + 3;
        }
        else {
          bVar1 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar1 = bVar11;
          }
          if (bVar1 != 0x6c) goto LAB_1000f0f9;
          bVar11 = param_2[4];
          if (bVar11 == 0) {
            pcVar5 = str_1001e271 + 4;
          }
          else {
            bVar1 = bVar11 | 0x20;
            if (0x19 < (byte)(bVar11 + 0xbf)) {
              bVar1 = bVar11;
            }
            if ((bVar1 != 0x65) || (param_2[5] != 0)) goto LAB_1000f0f9;
            pcVar5 = str_1001e271 + 5;
          }
        }
      }
    }
  }
  if (*pcVar5 == '\0') {
LAB_1000f534:
    pcVar6 = recovered_10014d90(param_1,(char *)param_2);
    return pcVar6;
  }
LAB_1000f0f9:
  local_70 = pcVar6;
  if (*pcVar6 != '\0') {
    iVar12 = 1;
    do {
      while( true ) {
        pcVar5 = strchr(pcVar6,0x3c);
        if ((pcVar5 == (char *)0x0) ||
           (pcVar6 = strchr(pcVar5,0x3e), pcVar6 == (char *)0x0)) goto LAB_1000f51f;
        local_31 = '\0';
        local_68[0] = 0;
        if ((pcVar6 <= pcVar5) || (*pcVar5 != '<')) break;
        iVar3 = ~(uint)pcVar5 + (int)pcVar6;
        if (0x7e < iVar3) {
          iVar3 = 0x7f;
        }
        memcpy(local_f8,pcVar5 + 1,(long)iVar3);
        local_f8[iVar3] = 0;
        param_2 = local_40;
        local_68[0] = 0;
        local_31 = '\0';
        for (pbVar7 = local_f8; uVar9 = (ulong)*pbVar7, uVar9 < 0x30; pbVar7 = pbVar7 + 1) {
          if ((0x100003600U >> (uVar9 & 0x3f) & 1) == 0) {
            if (uVar9 == 0x2f) {
              local_31 = '\x01';
              pbVar7 = pbVar7 + 1;
              bVar2 = true;
              goto LAB_1000f210;
            }
            break;
          }
        }
        bVar2 = false;
LAB_1000f210:
        while ((uVar9 = (ulong)*pbVar7, uVar9 < 0x21 && ((0x100003600U >> (uVar9 & 0x3f) & 1) != 0))
              ) {
          pbVar7 = pbVar7 + 1;
        }
        lVar10 = 0;
        while( true ) {
          bVar11 = (byte)uVar9;
          if ((bVar11 < 0x30) && ((0x800100003601U >> (uVar9 & 0x3f) & 1) != 0)) goto LAB_1000f2b5;
          bVar1 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar1 = bVar11;
          }
          local_68[lVar10] = bVar1;
          bVar11 = pbVar7[lVar10 + 1];
          if (((ulong)bVar11 < 0x30) && ((0x800100003601U >> ((ulong)bVar11 & 0x3f) & 1) != 0)) {
            lVar10 = lVar10 + 1;
            goto LAB_1000f2b5;
          }
          if (lVar10 == 0x26) break;
          bVar1 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar1 = bVar11;
          }
          local_68[lVar10 + 1] = bVar1;
          uVar9 = (ulong)pbVar7[lVar10 + 2];
          lVar10 = lVar10 + 2;
        }
        lVar10 = 0x27;
LAB_1000f2b5:
        local_68[lVar10] = 0;
        if (!bVar2) break;
LAB_1000f4b1:
        bVar2 = recovered_10014e80(pcVar5,pcVar6,param_2,&local_31);
        if (bVar2) {
          if (local_31 == '\x01') {
            iVar12 = iVar12 + -1;
            if (iVar12 == 0) {
              return pcVar6 + 1;
            }
          }
          else {
            if (pcVar5 < pcVar6) {
              pcVar8 = pcVar6;
              do {
                uVar9 = (ulong)(byte)pcVar8[-1];
                if (0x2f < uVar9) break;
                if ((0x100003600U >> (uVar9 & 0x3f) & 1) == 0) {
                  if (uVar9 == 0x2f) goto LAB_1000f4fb;
                  break;
                }
                pcVar8 = pcVar8 + -1;
              } while (pcVar5 < pcVar8);
            }
            iVar12 = iVar12 + 1;
          }
        }
LAB_1000f4fb:
        pcVar6 = pcVar6 + 1;
        if (*pcVar6 == '\0') goto LAB_1000f51f;
      }
      pcVar8 = str_1001e271;
      if (local_68[0] == 0) goto LAB_1000f490;
      bVar11 = local_68[0] | 0x20;
      if (0x19 < (byte)(local_68[0] + 0xbf)) {
        bVar11 = local_68[0];
      }
      if (bVar11 != 0x73) goto LAB_1000f499;
      pcVar8 = str_1001e280 + 1;
      if (local_68[1] == 0) {
LAB_1000f3d7:
        if (*pcVar8 != '\0') goto code_r0x1000f3e8;
      }
      else {
        bVar11 = local_68[1] | 0x20;
        if (0x19 < (byte)(local_68[1] + 0xbf)) {
          bVar11 = local_68[1];
        }
        if (bVar11 == 99) {
          pcVar8 = str_1001e280 + 2;
          if (local_68[2] != 0) {
            bVar11 = local_68[2] | 0x20;
            if (0x19 < (byte)(local_68[2] + 0xbf)) {
              bVar11 = local_68[2];
            }
            if (bVar11 != 0x72) goto code_r0x1000f3e8;
            pcVar8 = str_1001e280 + 3;
            if (local_68[3] != 0) {
              bVar11 = local_68[3] | 0x20;
              if (0x19 < (byte)(local_68[3] + 0xbf)) {
                bVar11 = local_68[3];
              }
              if (bVar11 != 0x69) goto code_r0x1000f3e8;
              pcVar8 = str_1001e280 + 4;
              if (local_68[4] != 0) {
                bVar11 = local_68[4] | 0x20;
                if (0x19 < (byte)(local_68[4] + 0xbf)) {
                  bVar11 = local_68[4];
                }
                if (bVar11 != 0x70) goto code_r0x1000f3e8;
                pcVar8 = str_1001e280 + 5;
                if (local_68[5] != 0) {
                  bVar11 = local_68[5] | 0x20;
                  if (0x19 < (byte)(local_68[5] + 0xbf)) {
                    bVar11 = local_68[5];
                  }
                  if ((bVar11 != 0x74) || (pcVar8 = str_1001e280 + 6, local_68[6] != '\0'))
                  goto code_r0x1000f3e8;
                }
              }
            }
          }
          goto LAB_1000f3d7;
        }
code_r0x1000f3e8:
        pcVar8 = str_1001e271 + 1;
        if (local_68[1] == 0) {
LAB_1000f490:
          if (*pcVar8 == '\0') goto LAB_1000f120;
        }
        else {
          bVar11 = local_68[1] | 0x20;
          if (0x19 < (byte)(local_68[1] + 0xbf)) {
            bVar11 = local_68[1];
          }
          if (bVar11 == 0x74) {
            pcVar8 = str_1001e271 + 2;
            if (local_68[2] != 0) {
              bVar11 = local_68[2] | 0x20;
              if (0x19 < (byte)(local_68[2] + 0xbf)) {
                bVar11 = local_68[2];
              }
              if (bVar11 != 0x79) goto LAB_1000f499;
              pcVar8 = str_1001e271 + 3;
              if (local_68[3] != 0) {
                bVar11 = local_68[3] | 0x20;
                if (0x19 < (byte)(local_68[3] + 0xbf)) {
                  bVar11 = local_68[3];
                }
                if (bVar11 != 0x6c) goto LAB_1000f499;
                pcVar8 = str_1001e271 + 4;
                if (local_68[4] != 0) {
                  bVar11 = local_68[4] | 0x20;
                  if (0x19 < (byte)(local_68[4] + 0xbf)) {
                    bVar11 = local_68[4];
                  }
                  if ((bVar11 != 0x65) || (pcVar8 = str_1001e271 + 5, local_68[5] != 0))
                  goto LAB_1000f499;
                }
              }
            }
            goto LAB_1000f490;
          }
        }
LAB_1000f499:
        bVar2 = recovered_10007de0(local_68,(byte *)str_1001eae7);
        if (!bVar2) goto LAB_1000f4b1;
      }
LAB_1000f120:
      pcVar6 = recovered_10014d90((long)pcVar6,(char *)local_68);
    } while (*pcVar6 != '\0');
  }
LAB_1000f51f:
  return local_70;
}

#undef str_1001e271
#undef str_1001e280
#undef str_1001eae7
#undef local_f8
#undef local_70
#undef local_68
#undef local_40
#undef local_31

#undef DAT_1001e9d5
#define DAT_1001e9d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac8U)))
#undef DAT_1001eb21
#define DAT_1001eb21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc14U)))
#undef DAT_1001eb22
#define DAT_1001eb22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc15U)))
#undef DAT_1001eb23
#define DAT_1001eb23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc16U)))
#undef DAT_1001eb24
#define DAT_1001eb24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc17U)))
#undef DAT_1001eb25
#define DAT_1001eb25 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc18U)))
#undef DAT_1001eb2e
#define DAT_1001eb2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc21U)))
#undef DAT_1001eb3e
#define DAT_1001eb3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc31U)))
#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e966
#define str_1001e966 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa59U)))
#undef str_1001e9de
#define str_1001e9de (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad1U)))
#undef str_1001eb15
#define str_1001eb15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc08U)))
#define local_158 (*(byte (*)[157])(frame + 1560))
#define local_50 (*(char * *)(frame + 1824))
#define abStack_bb (*(byte (*)[107])(frame + 1717))
#define local_48 (*(byte *)(frame + 1832))
#define local_47 (*(byte *)(frame + 1833))
#define local_46 (*(byte *)(frame + 1834))
#define local_45 (*(byte *)(frame + 1835))
#define local_44 (*(char *)(frame + 1836))
#define local_758 (*(char (*)[1024])(frame + 24))
#define local_358 (*(char (*)[512])(frame + 1048))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f560
 */

ulong recovered_1000f560(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[1936] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulong uVar5;
  byte *pbVar6;

  if (param_3 != (char *)0x0 && param_2 != (char *)0x0) {
    local_50 = param_3;
    uVar2 = recovered_100142a0(param_2,str_1001e9de);
    uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((char)uVar2 != '\0') goto LAB_1000f981;
    recovered_10007e50(param_2,str_1001eb15,(char *)&local_48,0x10);
    if (local_48 == 0) {
      pcVar3 = &DAT_1001eb21;
LAB_1000f66c:
      if (*pcVar3 == '\0') goto LAB_1000f981;
    }
    else {
      bVar1 = local_48 | 0x20;
      if (0x19 < (byte)(local_48 + 0xbf)) {
        bVar1 = local_48;
      }
      if (bVar1 == 0x74) {
        if (local_47 == 0) {
          pcVar3 = &DAT_1001eb22;
        }
        else {
          bVar1 = local_47 | 0x20;
          if (0x19 < (byte)(local_47 + 0xbf)) {
            bVar1 = local_47;
          }
          if (bVar1 != 0x72) goto LAB_1000f675;
          if (local_46 == 0) {
            pcVar3 = &DAT_1001eb23;
          }
          else {
            bVar1 = local_46 | 0x20;
            if (0x19 < (byte)(local_46 + 0xbf)) {
              bVar1 = local_46;
            }
            if (bVar1 != 0x75) goto LAB_1000f675;
            if (local_45 == 0) {
              pcVar3 = &DAT_1001eb24;
            }
            else {
              bVar1 = local_45 | 0x20;
              if (0x19 < (byte)(local_45 + 0xbf)) {
                bVar1 = local_45;
              }
              if ((bVar1 != 0x65) || (local_44 != '\0')) goto LAB_1000f675;
              pcVar3 = &DAT_1001eb25;
            }
          }
        }
        goto LAB_1000f66c;
      }
    }
LAB_1000f675:
    recovered_10007e50(param_2,str_1001e271,local_358,0x200);
    if ((local_358[0] != '\0') &&
       ((uVar2 = recovered_10015050((long)local_358,((uintptr_t)pf_module_state + 0xc19U),&DAT_1001eb2e), (char)uVar2 != '\0'
        || (uVar2 = recovered_10015050((long)local_358,((uintptr_t)pf_module_state + 0xc26U),(byte *)str_1001e9de),
           (char)uVar2 != '\0')))) goto LAB_1000f981;
    if (param_1 != 0) {
      pbVar6 = local_158;
      recovered_10007e50(param_2,str_1001e966,(char *)pbVar6,0xa0);
      if (local_158[0] != 0) {
LAB_1000f749:
        do {
          if (local_158[0] < 0x21) {
            if ((0x100003600U >> ((ulong)local_158[0] & 0x3f) & 1) != 0) {
              local_158[0] = pbVar6[1];
              pbVar6 = pbVar6 + 1;
              goto LAB_1000f749;
            }
            if ((ulong)local_158[0] == 0) break;
          }
          abStack_bb[3] = '.';
          uVar2 = 4;
          while( true ) {
            bVar1 = pbVar6[uVar2 - 4];
            if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
              pbVar6 = pbVar6 + (uVar2 - 4);
              uVar2 = uVar2 - 3;
              goto LAB_1000f80b;
            }
            abStack_bb[uVar2] = bVar1;
            bVar1 = pbVar6[uVar2 - 3];
            if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
              pbVar6 = pbVar6 + (uVar2 - 3);
              uVar2 = uVar2 - 2;
              goto LAB_1000f80b;
            }
            abStack_bb[uVar2 + 1] = bVar1;
            bVar1 = pbVar6[uVar2 - 2];
            if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
              pbVar6 = pbVar6 + (uVar2 - 2);
              uVar2 = uVar2 - 1;
              goto LAB_1000f80b;
            }
            if (uVar2 == 0x60) {
              pbVar6 = pbVar6 + 0x5e;
              abStack_bb[0x62] = 0;
              goto LAB_1000f81d;
            }
            abStack_bb[uVar2 + 2] = bVar1;
            bVar1 = pbVar6[uVar2 - 1];
            if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) break;
            abStack_bb[uVar2 + 3] = bVar1;
            uVar2 = uVar2 + 4;
          }
          pbVar6 = pbVar6 + (uVar2 - 1);
LAB_1000f80b:
          abStack_bb[uVar2 + 3] = 0;
          if (1 < uVar2) {
LAB_1000f81d:
            uVar4 = recovered_1000de10(*(char **)(param_1 + 800),(char *)(abStack_bb + 3),local_758)
            ;
            if ((((char)uVar4 != '\0') &&
                (uVar2 = recovered_10015050((long)local_758,((uintptr_t)pf_module_state + 0xc19U),&DAT_1001eb2e),
                (char)uVar2 != '\0')) ||
               ((uVar4 = recovered_1000de10(*(char **)(param_1 + 800),(char *)(abStack_bb + 3),
                                            local_758), (char)uVar4 != '\0' &&
                (uVar2 = recovered_10015050((long)local_758,((uintptr_t)pf_module_state + 0xc26U),(byte *)str_1001e9de),
                (char)uVar2 != '\0')))) goto LAB_1000f981;
          }
          while ((0x20 < (ulong)*pbVar6 || ((0x100003601U >> ((ulong)*pbVar6 & 0x3f) & 1) == 0))) {
            pbVar6 = pbVar6 + 1;
          }
          local_158[0] = *pbVar6;
        } while (local_158[0] != 0);
      }
      recovered_10007e50(param_2,&DAT_1001e9d5,(char *)(abStack_bb + 3),0x60);
      if (abStack_bb[3] != '\0') {
        pf_varargs_1001df25__8_(local_758,0x70,&DAT_1001eb3e,(ulonglong)(abStack_bb + 3));
        uVar4 = recovered_100151b0(param_1,(long)local_758);
        if ((char)uVar4 != '\0') goto LAB_1000f981;
      }
      if ((*local_50 != '\0') &&
         (uVar4 = recovered_100151b0(param_1,(long)local_50), (char)uVar4 != '\0'))
      goto LAB_1000f981;
    }
  }
  uVar5 = 0;
LAB_1000f981:
  return uVar5 & 0xffffffff;
}

#undef DAT_1001e9d5
#undef DAT_1001eb21
#undef DAT_1001eb22
#undef DAT_1001eb23
#undef DAT_1001eb24
#undef DAT_1001eb25
#undef DAT_1001eb2e
#undef DAT_1001eb3e
#undef str_1001e271
#undef str_1001e966
#undef str_1001e9de
#undef str_1001eb15
#undef local_158
#undef local_50
#undef abStack_bb
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_758
#undef local_358

#undef DAT_1001e247
#define DAT_1001e247 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_1001e8f6
#define DAT_1001e8f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e9U)))
#undef DAT_1001e8f7
#define DAT_1001e8f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eaU)))
#undef DAT_1001e94e
#define DAT_1001e94e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa41U)))
#undef DAT_1001e94f
#define DAT_1001e94f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa42U)))
#undef DAT_1001e950
#define DAT_1001e950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa43U)))
#undef DAT_1001e984
#define DAT_1001e984 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa77U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001e989
#define str_1001e989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7cU)))
#define local_518 (*(char (*)[256])(frame + 24))
#define local_418 (*(byte (*)[512])(frame + 280))
#define local_218 (*(char (*)[128])(frame + 792))
#define local_198 (*(char (*)[256])(frame + 920))
#define local_98 (*(byte (*)[40])(frame + 1176))
#define local_70 (*(long *)(frame + 1216))
#define local_64 (*(int *)(frame + 1228))
#define local_60 (*(int * *)(frame + 1232))
#define local_58 (*(int * *)(frame + 1240))
#define local_50 (*(int * *)(frame + 1248))
#define local_48 (*(byte * *)(frame + 1256))
#define local_40 (*(long *)(frame + 1264))
#define local_38 (*(ulong *)(frame + 1272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f9a0
 */

void recovered_1000f9a0(long param_1,int *param_2,int *param_3,int *param_4,byte *param_5,
                       long param_6,uint param_7)

{
  unsigned char frame[1360] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  undefined4 in_EAX = 0;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 extraout_RAX = 0;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  byte bVar14;
  byte bVar15;
  byte *pbVar16;
  long lVar17;
  uint128 auVar18;

  PF_PART4(auVar18, 0) = -(uint)(param_2 == (int *)0x0);
  PF_PART4(auVar18, 4) = -(uint)(param_3 == (int *)0x0);
  PF_PART4(auVar18, 8) = -(uint)(param_4 == (int *)0x0);
  PF_PART4(auVar18, 12) = -(uint)(param_5 == (byte *)0x0);
  iVar3 = movmskps(in_EAX,auVar18);
  if (iVar3 != 0) {
    return;
  }
  local_198[0] = '\0';
  if (0 < param_6) {
    pbVar11 = param_5 + param_6;
    uVar4 = 1;
    if (1 < (int)param_7) {
      uVar4 = param_7;
    }
    local_64 = uVar4 * 8 + 4;
    local_70 = -(long)pbVar11;
    local_38 = 0;
    local_60 = param_4;
    local_58 = param_3;
    local_50 = param_2;
    local_40 = param_1;
    do {
      uVar4 = (uint)(byte)local_38;
      local_48 = &DAT_1001f468;
      if ((local_38 & 1) != 0) {
        local_48 = (byte *)local_198;
      }
      pbVar13 = param_5;
      while( true ) {
        if (*pbVar13 == 0) {
          return;
        }
        if (*pbVar13 == 0x3c) break;
        lVar17 = 0;
        do {
          if (pbVar13[lVar17] == 0x3c) {
            pbVar16 = pbVar13 + lVar17;
            goto LAB_1000fa83;
          }
          lVar17 = lVar17 + 1;
        } while ((long)pbVar11 - (long)pbVar13 != lVar17);
        pbVar16 = (byte *)0x0;
LAB_1000fa83:
        iVar3 = (int)pbVar16 - (int)pbVar13;
        if (pbVar16 == (byte *)0x0) {
          iVar3 = (int)((long)pbVar11 - (long)pbVar13);
          pbVar16 = pbVar11;
        }
        if (0x1fe < iVar3) {
          iVar3 = 0x1ff;
        }
        memcpy(local_418,pbVar13,(long)iVar3);
        local_418[iVar3] = 0;
        recovered_10015250(local_40,local_50,local_58,local_60,(char *)local_418,(uVar4 & 1) * 2,
                           local_48,param_7);
        pbVar13 = pbVar16;
        if (pbVar11 <= pbVar16) {
          return;
        }
      }
      param_5 = pbVar13 + 1;
      pbVar5 = (byte *)0x0;
      pbVar16 = param_5;
      while (param_5[-1] != 0x3e) {
        param_5 = param_5 + 1;
        pbVar16 = pbVar16 + 1;
        pbVar5 = pbVar5 + -1;
        if (pbVar13 + local_70 == pbVar5) {
          return;
        }
      }
      local_48 = param_5 + -1;
      uVar4 = ~(uint)pbVar5;
      if (0xfe < (int)uVar4) {
        uVar4 = 0xff;
      }
      pbVar5 = local_418;
      memcpy(pbVar5,pbVar13 + 1,(long)(int)uVar4);
      local_418[(int)uVar4] = 0;
      local_98[0] = 0;
      for (; uVar6 = (ulong)*pbVar5, uVar6 < 0x30; pbVar5 = pbVar5 + 1) {
        if ((0x100003600U >> (uVar6 & 0x3f) & 1) == 0) {
          if (uVar6 == 0x2f) {
            pbVar5 = pbVar5 + 1;
            bVar1 = true;
            goto LAB_1000fbe0;
          }
          break;
        }
      }
      bVar1 = false;
LAB_1000fbe0:
      while ((uVar6 = (ulong)*pbVar5, uVar6 < 0x21 && ((0x100003600U >> (uVar6 & 0x3f) & 1) != 0)))
      {
        pbVar5 = pbVar5 + 1;
      }
      lVar17 = 0;
      while( true ) {
        bVar12 = (byte)uVar6;
        if ((bVar12 < 0x30) && ((0x800100003601U >> (uVar6 & 0x3f) & 1) != 0)) goto LAB_1000fc6e;
        bVar14 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar14 = bVar12;
        }
        local_98[lVar17] = bVar14;
        bVar12 = pbVar5[lVar17 + 1];
        if (((ulong)bVar12 < 0x30) && ((0x800100003601U >> ((ulong)bVar12 & 0x3f) & 1) != 0)) {
          lVar17 = lVar17 + 1;
          goto LAB_1000fc6e;
        }
        if (lVar17 == 0x26) break;
        bVar14 = bVar12 | 0x20;
        if (0x19 < (byte)(bVar12 + 0xbf)) {
          bVar14 = bVar12;
        }
        local_98[lVar17 + 1] = bVar14;
        uVar6 = (ulong)pbVar5[lVar17 + 2];
        lVar17 = lVar17 + 2;
      }
      lVar17 = 0x27;
LAB_1000fc6e:
      local_98[lVar17] = 0;
      if (bVar1) {
        pcVar9 = &DAT_1001e8f6;
        if (local_98[0] != 0) {
          bVar12 = local_98[0] | 0x20;
          if (0x19 < (byte)(local_98[0] + 0xbf)) {
            bVar12 = local_98[0];
          }
          if ((bVar12 != 0x61) || (pcVar9 = &DAT_1001e8f7, local_98[1] != 0)) goto LAB_1000ff18;
        }
        if (*pcVar9 == '\0') {
          local_198[0] = '\0';
          local_38 = 0;
        }
      }
      else {
        pcVar9 = &DAT_1001e94e;
        if (local_98[0] == 0) goto LAB_1000fec0;
        bVar12 = local_98[0] | 0x20;
        if (0x19 < (byte)(local_98[0] + 0xbf)) {
          bVar12 = local_98[0];
        }
        if (bVar12 == 0x61 && local_98[1] == 0) {
          uVar6 = strlen(&DAT_1001e984);
          if ((uVar6 != 0) && (*param_5 != 0)) {
            pbVar13 = param_5;
            do {
              uVar10 = 0;
              while (bVar12 = pbVar13[uVar10], bVar12 != 0) {
                bVar14 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar14 = bVar12;
                }
                bVar12 = (&DAT_1001e984)[uVar10];
                bVar15 = bVar12 | 0x20;
                if (0x19 < (byte)(bVar12 + 0xbf)) {
                  bVar15 = bVar12;
                }
                if (bVar14 != bVar15) break;
                uVar10 = uVar10 + 1;
                if (uVar6 == uVar10) goto LAB_1000fd85;
              }
              if (uVar6 == uVar10) goto LAB_1000fd85;
              pbVar5 = pbVar13 + 1;
              pbVar13 = pbVar13 + 1;
            } while (*pbVar5 != 0);
          }
          pbVar13 = (byte *)0x0;
LAB_1000fd85:
          recovered_10007e50((char *)local_418,&DAT_1001e247,local_198,0x100);
          recovered_10007e50((char *)local_418,str_1001e989,local_218,0x80);
          cVar2 = local_198[0];
          local_38 = CONCAT71((int7)((ulong)extraout_RAX >> 8),local_198[0] != '\0');
          if ((pbVar13 < pbVar11 && pbVar13 != (byte *)0x0) &&
             (recovered_10012590(local_40,param_5,(long)pbVar13 - (long)pbVar16,local_518,0x100),
             local_218[0] != '\0' || local_518[0] != '\0')) {
            pcVar9 = local_218;
            if (local_518[0] != '\0') {
              pcVar9 = local_518;
            }
            pcVar7 = &DAT_1001f468;
            if (cVar2 != '\0') {
              pcVar7 = local_198;
            }
            recovered_10015250(local_40,local_50,local_58,local_60,pcVar9,(uint)(cVar2 != '\0') * 2,
                               pcVar7,param_7);
            param_5 = pbVar13 + 4;
            local_198[0] = '\0';
            local_38 = 0;
          }
        }
        else {
          if (bVar12 == 0x62) {
            pcVar9 = &DAT_1001e94f;
            if (local_98[1] != 0) {
              bVar12 = local_98[1] | 0x20;
              if (0x19 < (byte)(local_98[1] + 0xbf)) {
                bVar12 = local_98[1];
              }
              if ((bVar12 != 0x72) || (pcVar9 = &DAT_1001e950, local_98[2] != '\0'))
              goto LAB_1000fec5;
            }
LAB_1000fec0:
            if (*pcVar9 == '\0') {
              *local_58 = *local_50;
              *local_60 = *local_60 + local_64;
              goto LAB_1000ff18;
            }
          }
LAB_1000fec5:
          uVar6 = recovered_1000f560(local_40,(char *)local_418,(char *)local_98);
          if (((char)uVar6 != '\0') || (uVar8 = recovered_100108c0(local_98), (char)uVar8 != '\0'))
          {
            param_5 = (byte *)recovered_10015400(local_48,pbVar11,local_98);
          }
        }
      }
LAB_1000ff18:
    } while (param_5 < pbVar11);
  }
  return;
}

#undef DAT_1001e247
#undef DAT_1001e8f6
#undef DAT_1001e8f7
#undef DAT_1001e94e
#undef DAT_1001e94f
#undef DAT_1001e950
#undef DAT_1001e984
#undef DAT_1001f468
#undef str_1001e989
#undef local_518
#undef local_418
#undef local_218
#undef local_198
#undef local_98
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38

#undef DAT_1001e247
#define DAT_1001e247 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef DAT_1001e8f6
#define DAT_1001e8f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e9U)))
#undef DAT_1001e8f7
#define DAT_1001e8f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9eaU)))
#undef DAT_1001e94e
#define DAT_1001e94e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa41U)))
#undef DAT_1001e94f
#define DAT_1001e94f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa42U)))
#undef DAT_1001e950
#define DAT_1001e950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa43U)))
#undef DAT_1001e95a
#define DAT_1001e95a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4dU)))
#undef DAT_1001e984
#define DAT_1001e984 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa77U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001e989
#define str_1001e989 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7cU)))
#define local_528 (*(char (*)[256])(frame + 24))
#define local_428 (*(byte (*)[512])(frame + 280))
#define local_228 (*(char (*)[128])(frame + 792))
#define local_1a8 (*(char (*)[256])(frame + 920))
#define local_a8 (*(byte (*)[48])(frame + 1176))
#define local_78 (*(long *)(frame + 1224))
#define local_70 (*(ulong *)(frame + 1232))
#define local_64 (*(int *)(frame + 1244))
#define local_60 (*(byte * *)(frame + 1248))
#define local_58 (*(long *)(frame + 1256))
#define local_50 (*(ulong *)(frame + 1264))
#define local_48 (*(int * *)(frame + 1272))
#define local_40 (*(ulong *)(frame + 1280))
#define local_38 (*(int *)(frame + 1288))
#define local_34 (*(int *)(frame + 1292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff40
 */

void recovered_1000ff40(long param_1,int *param_2,byte *param_3,long param_4,uint param_5)

{
  unsigned char frame[1376] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 extraout_RAX = 0;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte bVar13;
  byte *pbVar14;
  byte bVar15;
  byte bVar16;
  byte *pbVar17;

  if (param_3 != (byte *)0x0 && param_2 != (int *)0x0) {
    local_38 = *param_2;
    local_34 = param_2[2];
    local_1a8[0] = '\0';
    recovered_10015c50(param_1,param_2,&local_38,&local_34,&DAT_1001e95a,0,&DAT_1001f468,param_5);
    if (param_4 < 1) {
      uVar3 = 1;
      if (1 < (int)param_5) {
        uVar3 = param_5;
      }
      iVar8 = uVar3 << 3;
    }
    else {
      pbVar17 = param_3 + param_4;
      uVar3 = 1;
      if (1 < (int)param_5) {
        uVar3 = param_5;
      }
      local_64 = uVar3 * 8 + 4;
      local_50 = (ulong)(uVar3 << 3);
      local_78 = -(long)pbVar17;
      local_40 = 0;
      local_70 = (ulong)param_5;
      local_58 = param_1;
      local_48 = param_2;
      do {
        uVar3 = (uint)local_40;
        local_60 = &DAT_1001f468;
        if ((local_40 & 1) != 0) {
          local_60 = (byte *)local_1a8;
        }
        pbVar14 = param_3;
        while( true ) {
          if (*pbVar14 == 0) goto LAB_10010503;
          if (*pbVar14 == 0x3c) break;
          lVar12 = 0;
          do {
            if (pbVar14[lVar12] == 0x3c) {
              pbVar11 = pbVar14 + lVar12;
              goto LAB_10010023;
            }
            lVar12 = lVar12 + 1;
          } while ((long)pbVar17 - (long)pbVar14 != lVar12);
          pbVar11 = (byte *)0x0;
LAB_10010023:
          iVar8 = (int)pbVar11 - (int)pbVar14;
          if (pbVar11 == (byte *)0x0) {
            iVar8 = (int)((long)pbVar17 - (long)pbVar14);
            pbVar11 = pbVar17;
          }
          if (0x1fe < iVar8) {
            iVar8 = 0x1ff;
          }
          memcpy(local_428,pbVar14,(long)iVar8);
          local_428[iVar8] = 0;
          param_2 = local_48;
          recovered_10015250(local_58,local_48,&local_38,&local_34,(char *)local_428,(uVar3 & 1) * 2
                             ,local_60,(uint)local_70);
          pbVar14 = pbVar11;
          if (pbVar17 <= pbVar11) goto LAB_10010503;
        }
        param_3 = pbVar14 + 1;
        pbVar4 = (byte *)0x0;
        pbVar11 = param_3;
        while (param_3[-1] != 0x3e) {
          param_3 = param_3 + 1;
          pbVar11 = pbVar11 + 1;
          pbVar4 = pbVar4 + -1;
          if (pbVar14 + local_78 == pbVar4) {
            param_2 = local_48;
            goto LAB_10010503;
          }
        }
        local_60 = param_3 + -1;
        uVar3 = ~(uint)pbVar4;
        if (0xfe < (int)uVar3) {
          uVar3 = 0xff;
        }
        pbVar4 = local_428;
        memcpy(pbVar4,pbVar14 + 1,(long)(int)uVar3);
        local_428[(int)uVar3] = 0;
        local_a8[0] = 0;
        for (; uVar5 = (ulong)*pbVar4, uVar5 < 0x30; pbVar4 = pbVar4 + 1) {
          if ((0x100003600U >> (uVar5 & 0x3f) & 1) == 0) {
            if (uVar5 == 0x2f) {
              pbVar4 = pbVar4 + 1;
              bVar1 = true;
              goto LAB_10010180;
            }
            break;
          }
        }
        bVar1 = false;
LAB_10010180:
        while ((uVar5 = (ulong)*pbVar4, uVar5 < 0x21 && ((0x100003600U >> (uVar5 & 0x3f) & 1) != 0))
              ) {
          pbVar4 = pbVar4 + 1;
        }
        lVar12 = 0;
        while( true ) {
          bVar13 = (byte)uVar5;
          if ((bVar13 < 0x30) && ((0x800100003601U >> (uVar5 & 0x3f) & 1) != 0)) goto LAB_10010222;
          bVar15 = bVar13 | 0x20;
          if (0x19 < (byte)(bVar13 + 0xbf)) {
            bVar15 = bVar13;
          }
          local_a8[lVar12] = bVar15;
          bVar13 = pbVar4[lVar12 + 1];
          if (((ulong)bVar13 < 0x30) && ((0x800100003601U >> ((ulong)bVar13 & 0x3f) & 1) != 0)) {
            lVar12 = lVar12 + 1;
            goto LAB_10010222;
          }
          if (lVar12 == 0x26) break;
          bVar15 = bVar13 | 0x20;
          if (0x19 < (byte)(bVar13 + 0xbf)) {
            bVar15 = bVar13;
          }
          local_a8[lVar12 + 1] = bVar15;
          uVar5 = (ulong)pbVar4[lVar12 + 2];
          lVar12 = lVar12 + 2;
        }
        lVar12 = 0x27;
LAB_10010222:
        local_a8[lVar12] = 0;
        if (bVar1) {
          pcVar9 = &DAT_1001e8f6;
          if (local_a8[0] != 0) {
            bVar13 = local_a8[0] | 0x20;
            if (0x19 < (byte)(local_a8[0] + 0xbf)) {
              bVar13 = local_a8[0];
            }
            if ((bVar13 != 0x61) || (pcVar9 = &DAT_1001e8f7, local_a8[1] != 0)) goto LAB_100104c1;
          }
          if (*pcVar9 != '\0') goto LAB_100104c1;
          local_1a8[0] = '\0';
          local_40 = 0;
          param_2 = local_48;
        }
        else {
          pcVar9 = &DAT_1001e94e;
          if (local_a8[0] == 0) goto LAB_10010476;
          bVar13 = local_a8[0] | 0x20;
          if (0x19 < (byte)(local_a8[0] + 0xbf)) {
            bVar13 = local_a8[0];
          }
          if (!(bVar13 != 0x61 || local_a8[1] != 0)) {
            uVar5 = strlen(&DAT_1001e984);
            if ((uVar5 != 0) && (*param_3 != 0)) {
              pbVar14 = param_3;
              do {
                uVar10 = 0;
                while (bVar13 = pbVar14[uVar10], bVar13 != 0) {
                  bVar15 = bVar13 | 0x20;
                  if (0x19 < (byte)(bVar13 + 0xbf)) {
                    bVar15 = bVar13;
                  }
                  bVar13 = (&DAT_1001e984)[uVar10];
                  bVar16 = bVar13 | 0x20;
                  if (0x19 < (byte)(bVar13 + 0xbf)) {
                    bVar16 = bVar13;
                  }
                  if (bVar15 != bVar16) break;
                  uVar10 = uVar10 + 1;
                  if (uVar5 == uVar10) goto LAB_1001033b;
                }
                if (uVar5 == uVar10) goto LAB_1001033b;
                pbVar4 = pbVar14 + 1;
                pbVar14 = pbVar14 + 1;
              } while (*pbVar4 != 0);
            }
            pbVar14 = (byte *)0x0;
LAB_1001033b:
            recovered_10007e50((char *)local_428,&DAT_1001e247,local_1a8,0x100);
            recovered_10007e50((char *)local_428,str_1001e989,local_228,0x80);
            cVar2 = local_1a8[0];
            local_40 = CONCAT71((int7)((ulong)extraout_RAX >> 8),local_1a8[0] != '\0');
            if (!(pbVar17 <= pbVar14 || pbVar14 == (byte *)0x0)) {
              recovered_10012590(local_58,param_3,(long)pbVar14 - (long)pbVar11,local_528,0x100);
              param_2 = local_48;
              if (!(local_228[0] == '\0' && local_528[0] == '\0')) {
                pcVar9 = local_228;
                if (local_528[0] != '\0') {
                  pcVar9 = local_528;
                }
                pcVar6 = &DAT_1001f468;
                if (cVar2 != '\0') {
                  pcVar6 = local_1a8;
                }
                recovered_10015250(local_58,local_48,&local_38,&local_34,pcVar9,
                                   (uint)(cVar2 != '\0') * 2,pcVar6,(uint)local_70);
                param_3 = pbVar14 + 4;
                local_1a8[0] = '\0';
                local_40 = 0;
                goto LAB_100104c5;
              }
            }
            goto LAB_100104c1;
          }
          if (bVar13 == 0x62) {
            pcVar9 = &DAT_1001e94f;
            if (local_a8[1] != 0) {
              bVar13 = local_a8[1] | 0x20;
              if (0x19 < (byte)(local_a8[1] + 0xbf)) {
                bVar13 = local_a8[1];
              }
              if ((bVar13 != 0x72) || (pcVar9 = &DAT_1001e950, local_a8[2] != '\0'))
              goto LAB_1001047b;
            }
LAB_10010476:
            if (*pcVar9 == '\0') {
              local_38 = *local_48;
              local_34 = local_34 + local_64;
              goto LAB_100104c1;
            }
          }
LAB_1001047b:
          uVar5 = recovered_1000f560(local_58,(char *)local_428,(char *)local_a8);
          if (((char)uVar5 != '\0') || (uVar7 = recovered_100108c0(local_a8), (char)uVar7 != '\0'))
          {
            param_3 = (byte *)recovered_10015400(local_60,pbVar17,local_a8);
          }
LAB_100104c1:
          param_2 = local_48;
        }
LAB_100104c5:
      } while (param_3 < pbVar17);
LAB_10010503:
      iVar8 = (int)local_50;
    }
    param_2[2] = local_34 + iVar8 + 5;
  }
  return;
}

#undef DAT_1001e247
#undef DAT_1001e8f6
#undef DAT_1001e8f7
#undef DAT_1001e94e
#undef DAT_1001e94f
#undef DAT_1001e950
#undef DAT_1001e95a
#undef DAT_1001e984
#undef DAT_1001f468
#undef str_1001e989
#undef local_528
#undef local_428
#undef local_228
#undef local_1a8
#undef local_a8
#undef local_78
#undef local_70
#undef local_64
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_38
#undef local_34

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_100201f0
#define DAT_100201f0 (*(int *)(((uintptr_t)pf_module_state + 0x22e3U)))
#define local_c8 (*(byte (*)[95])(frame + 824))
#define local_69 (*(undefined1 *)(frame + 919))
#define local_60 (*(ulong *)(frame + 928))
#define local_58 (*(ulong *)(frame + 936))
#define local_50 (*(undefined1 * *)(frame + 944))
#define local_48 (*(long *)(frame + 952))
#define local_40 (*(uint *)(frame + 960))
#define local_3c (*(int *)(frame + 964))
#define local_38 (*(int *)(frame + 968))
#define local_34 (*(int *)(frame + 972))
#define local_3e8 (*(byte (*)[512])(frame + 24))
#define local_1e8 (*(undefined1 (*)[96])(frame + 536))
#define local_188 (*(char (*)[192])(frame + 632))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010530
 */

void recovered_10010530(long param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[1056] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;

  if (param_7 == (int *)0x0) {
    iVar2 = DAT_100201f0 + -0x48;
  }
  else {
    iVar2 = param_7[1];
  }
  iVar6 = 1;
  if (1 < param_5) {
    iVar6 = param_5;
  }
  uVar3 = iVar2 / (iVar6 * 6);
  local_40 = 8;
  if (8 < (int)uVar3) {
    local_40 = uVar3;
  }
  if (param_2 != (byte *)0x0 && param_7 != (int *)0x0) {
    local_50 = param_4;
    local_3c = param_6;
    local_38 = param_5;
    local_34 = param_3;
    uVar4 = strlen((char *)param_2);
    pbVar7 = local_3e8;
    local_48 = param_1;
    recovered_10012590(param_1,param_2,uVar4,(char *)pbVar7,0x200);
    local_188[0] = '\0';
    if (local_3e8[0] != 0) {
      uVar4 = (ulong)local_40;
      local_60 = uVar4;
LAB_10010627:
      while ((local_3e8[0] < 0x21 && ((0x100003600U >> ((ulong)local_3e8[0] & 0x3f) & 1) != 0))) {
        local_3e8[0] = pbVar7[1];
        pbVar7 = pbVar7 + 1;
      }
      uVar8 = 0;
      do {
        if ((local_3e8[0] < 0x21) && ((0x100003601U >> ((ulong)local_3e8[0] & 0x3f) & 1) != 0)) {
          pbVar7 = pbVar7 + uVar8;
LAB_100106dc:
          local_c8[uVar8] = 0;
          if (uVar8 != 0) goto LAB_100106ee;
          break;
        }
        local_c8[uVar8] = local_3e8[0];
        bVar1 = pbVar7[uVar8 + 1];
        if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
          pbVar7 = pbVar7 + uVar8 + 1;
          uVar8 = uVar8 + 1;
          goto LAB_100106dc;
        }
        local_c8[uVar8 + 1] = bVar1;
        bVar1 = pbVar7[uVar8 + 2];
        if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
          pbVar7 = pbVar7 + uVar8 + 2;
          uVar8 = uVar8 + 2;
          goto LAB_100106dc;
        }
        local_c8[uVar8 + 2] = bVar1;
        bVar1 = pbVar7[uVar8 + 3];
        if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
          pbVar7 = pbVar7 + uVar8 + 3;
          uVar8 = uVar8 + 3;
          goto LAB_100106dc;
        }
        if (uVar8 == 0x5c) goto LAB_10010871;
        local_c8[uVar8 + 3] = bVar1;
        local_3e8[0] = pbVar7[uVar8 + 4];
        uVar8 = uVar8 + 4;
      } while( true );
    }
LAB_10010887:
    recovered_10016060(local_48,local_34,local_50,local_188,local_38,local_3c,param_7);
  }
  return;
LAB_10010871:
  pbVar7 = pbVar7 + 0x5f;
  local_69 = 0;
  uVar8 = 0x5f;
LAB_100106ee:
  uVar5 = strlen(local_188);
  if ((int)local_40 < (int)(((int)uVar5 + (int)uVar8 + 1) - (uint)(local_188[0] == '\0'))) {
    recovered_10016060(local_48,local_34,local_50,local_188,local_38,local_3c,param_7);
  }
  if (uVar4 < uVar8) {
    uVar5 = 0;
    local_58 = uVar8;
    do {
      uVar8 = local_58 - uVar5;
      if (uVar4 <= local_58 - uVar5) {
        uVar8 = uVar4;
      }
      memcpy(local_1e8,local_c8 + uVar5,uVar8);
      local_1e8[uVar8] = 0;
      iVar2 = local_3c;
      recovered_10016060(local_48,local_34,local_50,local_188,local_38,local_3c,param_7);
      pf_varargs_1001df25__8_(local_188,0xc0,&DAT_1001e232,(ulonglong)local_1e8);
      recovered_10016060(local_48,local_34,local_50,local_188,local_38,iVar2,param_7);
      uVar5 = uVar5 + uVar8;
      uVar4 = local_60;
    } while (uVar5 < local_58);
  }
  else {
    if ((local_188[0] != '\0') && (uVar8 = strlen(local_188), uVar8 < 0xbf)) {
      (local_188 + uVar8)[0] = ' ';
      (local_188 + uVar8)[1] = '\0';
    }
    uVar8 = strlen(local_188);
    if (uVar8 < 0xbf) {
      pf_varargs_1001df25__8_(local_188 + uVar8,0xc0 - uVar8,&DAT_1001e232,(ulonglong)local_c8);
    }
  }
  local_3e8[0] = *pbVar7;
  if (local_3e8[0] == 0) goto LAB_10010887;
  goto LAB_10010627;
}

#undef DAT_1001e232
#undef DAT_100201f0
#undef local_c8
#undef local_69
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_3e8
#undef local_1e8
#undef local_188

#undef DAT_1001eb42
#define DAT_1001eb42 (*(char *)(((uintptr_t)pf_module_state + 0xc35U)))
#undef DAT_1001eb43
#define DAT_1001eb43 (*(char *)(((uintptr_t)pf_module_state + 0xc36U)))
#undef DAT_1001eb44
#define DAT_1001eb44 (*(char *)(((uintptr_t)pf_module_state + 0xc37U)))
#undef DAT_1001eb45
#define DAT_1001eb45 (*(char *)(((uintptr_t)pf_module_state + 0xc38U)))
#undef DAT_1001eb4d
#define DAT_1001eb4d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc40U)))
#undef DAT_1001eb4e
#define DAT_1001eb4e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc41U)))
#undef DAT_1001eb4f
#define DAT_1001eb4f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc42U)))
#undef DAT_1001eb50
#define DAT_1001eb50 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc43U)))
#undef DAT_1001eb51
#define DAT_1001eb51 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc44U)))
#undef DAT_1001eb52
#define DAT_1001eb52 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc45U)))
#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e280
#define str_1001e280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1001eae7
#define str_1001eae7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#undef str_1001eb46
#define str_1001eb46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc39U)))
#undef str_1001eb53
#define str_1001eb53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc46U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100108c0
 */

undefined8 recovered_100108c0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined7 extraout_var = 0;
  byte bVar5;
  byte bVar6;
  char *pcVar7;

  if (param_1 == (byte *)0x0) goto LAB_10010f80;
  bVar1 = *param_1;
  pcVar4 = (char *)(ulong)bVar1;
  cVar2 = DAT_1001eb42;
  if (bVar1 == 0) {
    pcVar7 = str_1001e271;
LAB_100109f0:
    if (*pcVar7 == '\0') goto LAB_10010f8d;
    if (bVar1 != 0) goto LAB_10010ae5;
joined_r0x10010d6e:
    if (cVar2 == '\0') goto LAB_10010f8d;
    if (bVar1 != 0) goto LAB_10010d8d;
LAB_10010f59:
    pcVar4 = &DAT_1001eb4d;
  }
  else {
    bVar5 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar5 = bVar1;
    }
    if (bVar5 == 0x73) {
      bVar5 = param_1[1];
      if (bVar5 == 0) {
        pcVar7 = str_1001e280 + 1;
LAB_10010a31:
        if (*pcVar7 == '\0') goto LAB_10010f8d;
      }
      else {
        bVar6 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar6 = bVar5;
        }
        if (bVar6 == 99) {
          bVar5 = param_1[2];
          if (bVar5 == 0) {
            pcVar7 = str_1001e280 + 2;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x72) goto code_r0x10010a43;
            bVar5 = param_1[3];
            if (bVar5 == 0) {
              pcVar7 = str_1001e280 + 3;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if (bVar6 != 0x69) goto code_r0x10010a43;
              bVar5 = param_1[4];
              if (bVar5 == 0) {
                pcVar7 = str_1001e280 + 4;
              }
              else {
                bVar6 = bVar5 | 0x20;
                if (0x19 < (byte)(bVar5 + 0xbf)) {
                  bVar6 = bVar5;
                }
                if (bVar6 != 0x70) goto code_r0x10010a43;
                bVar5 = param_1[5];
                if (bVar5 == 0) {
                  pcVar7 = str_1001e280 + 5;
                }
                else {
                  bVar6 = bVar5 | 0x20;
                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                    bVar6 = bVar5;
                  }
                  if ((bVar6 != 0x74) || (param_1[6] != 0)) goto code_r0x10010a43;
                  pcVar7 = str_1001e280 + 6;
                }
              }
            }
          }
          goto LAB_10010a31;
        }
      }
code_r0x10010a43:
      bVar5 = param_1[1];
      if (bVar5 == 0) {
        pcVar7 = str_1001e271 + 1;
      }
      else {
        bVar6 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar6 = bVar5;
        }
        if (bVar6 != 0x74) goto LAB_10010ae5;
        bVar5 = param_1[2];
        if (bVar5 == 0) {
          pcVar7 = str_1001e271 + 2;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x79) goto LAB_10010ae5;
          bVar5 = param_1[3];
          if (bVar5 == 0) {
            pcVar7 = str_1001e271 + 3;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x6c) goto LAB_10010ae5;
            bVar5 = param_1[4];
            if (bVar5 == 0) {
              pcVar7 = str_1001e271 + 4;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if ((bVar6 != 0x65) || (param_1[5] != 0)) goto LAB_10010ae5;
              pcVar7 = str_1001e271 + 5;
            }
          }
        }
      }
      goto LAB_100109f0;
    }
LAB_10010ae5:
    bVar5 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar5 = bVar1;
    }
    if (bVar5 == 0x73) {
      bVar5 = param_1[1];
      cVar2 = DAT_1001eb43;
      if (bVar5 != 0) {
        bVar6 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar6 = bVar5;
        }
        if (bVar6 != 0x76) goto LAB_10010d8d;
        bVar5 = param_1[2];
        cVar2 = DAT_1001eb44;
        if (bVar5 != 0) {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if ((bVar6 != 0x67) || (cVar2 = DAT_1001eb45, param_1[3] != 0)) goto LAB_10010d8d;
        }
      }
      goto joined_r0x10010d6e;
    }
    if (bVar5 == 0x74) {
      bVar5 = param_1[1];
      if (bVar5 == 0) {
        pcVar7 = str_1001eae7 + 1;
      }
      else {
        bVar6 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar6 = bVar5;
        }
        if (bVar6 != 0x65) goto LAB_10010d8d;
        bVar5 = param_1[2];
        if (bVar5 == 0) {
          pcVar7 = str_1001eae7 + 2;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x6d) goto LAB_10010d8d;
          bVar5 = param_1[3];
          if (bVar5 == 0) {
            pcVar7 = str_1001eae7 + 3;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x70) goto LAB_10010d8d;
            bVar5 = param_1[4];
            if (bVar5 == 0) {
              pcVar7 = str_1001eae7 + 4;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if (bVar6 != 0x6c) goto LAB_10010d8d;
              bVar5 = param_1[5];
              if (bVar5 == 0) {
                pcVar7 = str_1001eae7 + 5;
              }
              else {
                bVar6 = bVar5 | 0x20;
                if (0x19 < (byte)(bVar5 + 0xbf)) {
                  bVar6 = bVar5;
                }
                if (bVar6 != 0x61) goto LAB_10010d8d;
                bVar5 = param_1[6];
                if (bVar5 == 0) {
                  pcVar7 = str_1001eae7 + 6;
                }
                else {
                  bVar6 = bVar5 | 0x20;
                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                    bVar6 = bVar5;
                  }
                  if (bVar6 != 0x74) goto LAB_10010d8d;
                  bVar5 = param_1[7];
                  if (bVar5 == 0) {
                    pcVar7 = str_1001eae7 + 7;
                  }
                  else {
                    bVar6 = bVar5 | 0x20;
                    if (0x19 < (byte)(bVar5 + 0xbf)) {
                      bVar6 = bVar5;
                    }
                    if ((bVar6 != 0x65) || (param_1[8] != 0)) goto LAB_10010d8d;
                    pcVar7 = str_1001eae7 + 8;
                  }
                }
              }
            }
          }
        }
      }
      if (*pcVar7 == '\0') goto LAB_10010f8d;
      if (bVar1 == 0) goto joined_r0x10010d6e;
    }
LAB_10010d8d:
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      pcVar4 = (char *)(ulong)(bVar1 | 0x20);
    }
    if ((char)pcVar4 != 'a') {
      if ((int)pcVar4 != 99) goto LAB_10010f80;
      bVar5 = param_1[1];
      if (bVar5 == 0) {
        pcVar7 = str_1001eb46 + 1;
LAB_10010eb0:
        if (*pcVar7 == '\0') goto LAB_10010f8d;
        if (bVar1 == 0) goto LAB_10010f59;
      }
      else {
        bVar6 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar6 = bVar5;
        }
        if (bVar6 == 0x61) {
          bVar5 = param_1[2];
          if (bVar5 == 0) {
            pcVar7 = str_1001eb46 + 2;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x6e) goto LAB_10010ec1;
            bVar5 = param_1[3];
            if (bVar5 == 0) {
              pcVar7 = str_1001eb46 + 3;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if (bVar6 != 0x76) goto LAB_10010ec1;
              bVar5 = param_1[4];
              if (bVar5 == 0) {
                pcVar7 = str_1001eb46 + 4;
              }
              else {
                bVar6 = bVar5 | 0x20;
                if (0x19 < (byte)(bVar5 + 0xbf)) {
                  bVar6 = bVar5;
                }
                if (bVar6 != 0x61) goto LAB_10010ec1;
                bVar5 = param_1[5];
                if (bVar5 == 0) {
                  pcVar7 = str_1001eb46 + 5;
                }
                else {
                  bVar6 = bVar5 | 0x20;
                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                    bVar6 = bVar5;
                  }
                  if ((bVar6 != 0x73) || (param_1[6] != 0)) goto LAB_10010ec1;
                  pcVar7 = str_1001eb46 + 6;
                }
              }
            }
          }
          goto LAB_10010eb0;
        }
      }
LAB_10010ec1:
      if ((char)pcVar4 != 'a') goto LAB_10010f80;
    }
    bVar1 = param_1[1];
    if (bVar1 == 0) {
      pcVar4 = &DAT_1001eb4e;
    }
    else {
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      if (bVar5 != 0x75) goto LAB_10010f80;
      bVar1 = param_1[2];
      if (bVar1 == 0) {
        pcVar4 = &DAT_1001eb4f;
      }
      else {
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        if (bVar5 != 100) goto LAB_10010f80;
        bVar1 = param_1[3];
        if (bVar1 == 0) {
          pcVar4 = &DAT_1001eb50;
        }
        else {
          bVar5 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar5 = bVar1;
          }
          if (bVar5 != 0x69) goto LAB_10010f80;
          bVar1 = param_1[4];
          if (bVar1 == 0) {
            pcVar4 = &DAT_1001eb51;
          }
          else {
            bVar5 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar5 = bVar1;
            }
            if ((bVar5 != 0x6f) || (param_1[5] != 0)) goto LAB_10010f80;
            pcVar4 = &DAT_1001eb52;
          }
        }
      }
    }
  }
  if (*pcVar4 == '\0') {
LAB_10010f8d:
    return CONCAT71((int7)((ulong)pcVar4 >> 8),1);
  }
LAB_10010f80:
  bVar3 = recovered_10007de0(param_1,(byte *)str_1001eb53);
  return CONCAT71(extraout_var,bVar3);
}

#undef DAT_1001eb42
#undef DAT_1001eb43
#undef DAT_1001eb44
#undef DAT_1001eb45
#undef DAT_1001eb4d
#undef DAT_1001eb4e
#undef DAT_1001eb4f
#undef DAT_1001eb50
#undef DAT_1001eb51
#undef DAT_1001eb52
#undef str_1001e271
#undef str_1001e280
#undef str_1001eae7
#undef str_1001eb46
#undef str_1001eb53

#define local_388 (*(undefined4 *)(frame + 24))
#define local_384 (*(undefined4 *)(frame + 28))
#define local_380 (*(int *)(frame + 32))
#define local_37c (*(undefined4 *)(frame + 36))
#define local_378 (*(undefined4 *)(frame + 40))
#define local_1c (*(undefined1 *)(frame + 900))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010fa0
 */

void recovered_10010fa0(long param_1,undefined4 *param_2)

{
  unsigned char frame[960] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (param_2 != (undefined4 *)0x0) {
    memset(&local_388,0,0x370);
    local_388 = 6;
    iVar2 = param_2[2];
    local_380 = iVar2 + 9;
    local_384 = *param_2;
    local_37c = param_2[1];
    local_378 = 1;
    local_1c = *(undefined1 *)(param_2 + 3);
    uVar1 = *(uint *)(param_1 + 0x52c40);
    if ((ulong)uVar1 < 0x180) {
      *(uint *)(param_1 + 0x52c40) = uVar1 + 1;
      memcpy((void *)(param_1 + (ulong)uVar1 * 0x370 + 0x440),&local_388,0x370);
      iVar2 = param_2[2];
    }
    param_2[2] = iVar2 + 0x16;
  }
  return;
}

#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_1c

#undef DAT_1001e917
#define DAT_1001e917 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0aU)))
#undef DAT_1001e918
#define DAT_1001e918 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0bU)))
#undef DAT_1001e919
#define DAT_1001e919 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0cU)))
#undef DAT_1001e91a
#define DAT_1001e91a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0dU)))
#undef DAT_1001e91b
#define DAT_1001e91b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0eU)))
#undef DAT_1001e9d5
#define DAT_1001e9d5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xac8U)))
#undef DAT_1001ead1
#define DAT_1001ead1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbc4U)))
#undef DAT_1001ead2
#define DAT_1001ead2 (*(char *)(((uintptr_t)pf_module_state + 0xbc5U)))
#undef DAT_1001ead3
#define DAT_1001ead3 (*(char *)(((uintptr_t)pf_module_state + 0xbc6U)))
#undef DAT_1001ead4
#define DAT_1001ead4 (*(char *)(((uintptr_t)pf_module_state + 0xbc7U)))
#undef DAT_1001eb3e
#define DAT_1001eb3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc31U)))
#undef DAT_1001eb59
#define DAT_1001eb59 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4cU)))
#undef DAT_1001eb69
#define DAT_1001eb69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc5cU)))
#undef DAT_1001eb6e
#define DAT_1001eb6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc61U)))
#undef DAT_1001eb73
#define DAT_1001eb73 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc66U)))
#undef DAT_1001eb74
#define DAT_1001eb74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc67U)))
#undef DAT_1001eb75
#define DAT_1001eb75 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc68U)))
#undef DAT_1001eb76
#define DAT_1001eb76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc69U)))
#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e966
#define str_1001e966 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa59U)))
#undef str_1001eb26
#define str_1001eb26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc19U)))
#undef str_1001eb5e
#define str_1001eb5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc51U)))
#undef str_1001eb77
#define str_1001eb77 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6aU)))
#undef str_1001eb83
#define str_1001eb83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc76U)))
#undef str_1001eb8a
#define str_1001eb8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7dU)))
#define local_408 (*(byte (*)[192])(frame + 2280))
#define abStack_347 (*(byte (*)[511])(frame + 2473))
#define local_348 (*(byte *)(frame + 2472))
#define local_148 (*(char (*)[96])(frame + 2984))
#define local_e8 (*(byte (*)[96])(frame + 3080))
#define local_88 (*(byte * *)(frame + 3176))
#define local_80 (*(char * *)(frame + 3184))
#define local_78 (*(byte *)(frame + 3192))
#define local_77 (*(byte (*)[63])(frame + 3193))
#define local_38 (*(long *)(frame + 3256))
#define local_cd8 (*(char *)(frame + 24))
#define local_cd7 (*(char (*)[1023])(frame + 25))
#define local_8d8 (*(char *)(frame + 1048))
#define local_8d7 (*(char (*)[1023])(frame + 1049))
#define local_4d8 (*(char (*)[112])(frame + 2072))
#define local_468 (*(char (*)[96])(frame + 2184))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011060
 */

ulong recovered_10011060(long param_1,long param_2,byte *param_3)

{
  unsigned char frame[3344] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;

  if (param_3 == (byte *)0x0 || param_2 == 0) {
LAB_100111d8:
    uVar4 = 0;
    goto LAB_100111da;
  }
  bVar3 = *param_3;
  if (bVar3 == 0) {
    pcVar11 = &DAT_1001e919;
LAB_1001114d:
    if (*pcVar11 != '\0') {
      cVar2 = DAT_1001ead1;
      if (bVar3 != 0) goto LAB_1001115a;
joined_r0x100111c8:
      if (cVar2 != '\0') goto LAB_100111d8;
    }
  }
  else {
    bVar9 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar9 = bVar3;
    }
    if (bVar9 == 0x6f) {
      bVar9 = param_3[1];
      if (bVar9 == 0) {
        pcVar11 = &DAT_1001e91a;
      }
      else {
        bVar10 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar10 = bVar9;
        }
        if ((bVar10 != 0x6c) || (param_3[2] != 0)) goto LAB_1001115a;
        pcVar11 = &DAT_1001e91b;
      }
      goto LAB_1001114d;
    }
    if (bVar9 != 0x75) {
LAB_1001115a:
      if ((byte)(bVar3 + 0xbf) < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      if (bVar3 == 0x6e) {
        bVar3 = param_3[1];
        cVar2 = DAT_1001ead2;
        if (bVar3 == 0) {
joined_r0x100111d6:
          if (cVar2 == '\0') goto LAB_100111fa;
        }
        else {
          bVar9 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar9 = bVar3;
          }
          if (bVar9 == 0x61) {
            bVar3 = param_3[2];
            cVar2 = DAT_1001ead3;
            if (bVar3 == 0) goto joined_r0x100111c8;
            bVar9 = bVar3 | 0x20;
            if (0x19 < (byte)(bVar3 + 0xbf)) {
              bVar9 = bVar3;
            }
            if ((bVar9 == 0x76) && (cVar2 = DAT_1001ead4, param_3[3] == 0)) goto joined_r0x100111d6;
          }
        }
      }
      goto LAB_100111d8;
    }
    bVar9 = param_3[1];
    if (bVar9 == 0) {
      pcVar11 = &DAT_1001e917;
    }
    else {
      bVar10 = bVar9 | 0x20;
      if (0x19 < (byte)(bVar9 + 0xbf)) {
        bVar10 = bVar9;
      }
      if ((bVar10 != 0x6c) || (param_3[2] != 0)) goto LAB_1001115a;
      pcVar11 = &DAT_1001e918;
    }
    if (*pcVar11 != '\0') goto LAB_1001115a;
  }
LAB_100111fa:
  local_78 = 0;
  local_38 = param_1;
  recovered_10007e50((char *)param_2,str_1001e271,(char *)&local_348,0x200);
  if ((local_348 == 0) ||
     (uVar4 = recovered_1000dfe0((char *)&local_348,str_1001eb26,(char *)&local_78,0x40),
     (char)uVar4 == '\0')) {
    recovered_10007e50((char *)param_2,&DAT_1001e9d5,local_148,0x60);
    if (local_148[0] != '\0') {
      pf_varargs_1001df25__8_(local_4d8,0x70,&DAT_1001eb3e,(ulonglong)local_148);
      uVar5 = recovered_1000de10(*(char **)(local_38 + 800),local_4d8,&local_8d8);
      if (((char)uVar5 != '\0') &&
         (uVar4 = recovered_1000dfe0(&local_8d8,str_1001eb26,(char *)&local_78,0x40),
         (char)uVar4 != '\0')) goto LAB_100114ee;
    }
    pbVar14 = local_408;
    local_88 = param_3;
    local_80 = (char *)param_2;
    recovered_10007e50((char *)param_2,str_1001e966,(char *)pbVar14,0xb4);
    if (local_408[0] != 0) {
      local_78 = 0;
      do {
        while ((local_408[0] < 0x21 && ((0x100003600U >> ((ulong)local_408[0] & 0x3f) & 1) != 0))) {
          local_408[0] = pbVar14[1];
          pbVar14 = pbVar14 + 1;
        }
        lVar6 = 0;
        while( true ) {
          if ((local_408[0] < 0x21) && ((0x100003601U >> ((ulong)local_408[0] & 0x3f) & 1) != 0)) {
            pbVar14 = pbVar14 + lVar6;
            goto LAB_100113ec;
          }
          local_e8[lVar6] = local_408[0];
          bVar3 = pbVar14[lVar6 + 1];
          if (((ulong)bVar3 < 0x21) && ((0x100003601U >> ((ulong)bVar3 & 0x3f) & 1) != 0)) {
            pbVar14 = pbVar14 + lVar6 + 1;
            lVar6 = lVar6 + 1;
            goto LAB_100113ec;
          }
          local_e8[lVar6 + 1] = bVar3;
          bVar3 = pbVar14[lVar6 + 2];
          if (((ulong)bVar3 < 0x21) && ((0x100003601U >> ((ulong)bVar3 & 0x3f) & 1) != 0)) {
            pbVar14 = pbVar14 + lVar6 + 2;
            lVar6 = lVar6 + 2;
            goto LAB_100113ec;
          }
          local_e8[lVar6 + 2] = bVar3;
          bVar3 = pbVar14[lVar6 + 3];
          if (((ulong)bVar3 < 0x21) && ((0x100003601U >> ((ulong)bVar3 & 0x3f) & 1) != 0)) {
            pbVar14 = pbVar14 + lVar6 + 3;
            lVar6 = lVar6 + 3;
            goto LAB_100113ec;
          }
          if (lVar6 == 0x5c) break;
          local_e8[lVar6 + 3] = bVar3;
          local_408[0] = pbVar14[lVar6 + 4];
          lVar6 = lVar6 + 4;
        }
        pbVar14 = pbVar14 + 0x5f;
        lVar6 = 0x5f;
LAB_100113ec:
        local_e8[lVar6] = 0;
        if (local_e8[0] != 0) {
          pf_varargs_1001df25__8_(local_468,0x60,&DAT_1001eb6e,(ulonglong)local_e8);
          uVar5 = recovered_1000de10(*(char **)(local_38 + 800),local_468,&local_cd8);
          if (((char)uVar5 != '\0') &&
             (uVar4 = recovered_1000dfe0(&local_cd8,str_1001eb26,(char *)&local_78,0x40),
             (char)uVar4 != '\0')) {
            param_2 = (long)local_80;
            goto LAB_100114ee;
          }
        }
        while ((0x20 < (ulong)*pbVar14 || ((0x100003601U >> ((ulong)*pbVar14 & 0x3f) & 1) == 0))) {
          pbVar14 = pbVar14 + 1;
        }
        local_408[0] = *pbVar14;
      } while (local_408[0] != 0);
    }
    param_2 = (long)local_80;
    if (((*local_88 != 0) &&
        (uVar5 = recovered_1000de10(*(char **)(local_38 + 800),(char *)local_88,&local_8d8),
        (char)uVar5 != '\0')) &&
       (uVar4 = recovered_1000dfe0(&local_8d8,str_1001eb26,(char *)&local_78,0x40),
       (char)uVar4 != '\0')) goto LAB_100114ee;
    goto LAB_10011732;
  }
LAB_100114ee:
  uVar4 = 0;
  cVar2 = str_1001eb77[0];
  if (local_78 == 0) {
joined_r0x1001159a:
    if (cVar2 != '\0') {
LAB_10011638:
      if (local_78 == 0) {
        pcVar11 = str_1001eb8a;
LAB_10011729:
        cVar2 = *pcVar11;
joined_r0x1001172c:
        if (cVar2 == '\0') goto LAB_10011b21;
      }
      else {
        uVar4 = 0;
        bVar3 = local_78;
        if ((byte)(local_78 + 0xbf) < 0x1a) {
          bVar3 = local_78 | 0x20;
        }
        if (bVar3 == 99) {
          if (local_77[0] == 0) {
            pcVar11 = str_1001eb8a + 1;
          }
          else {
            uVar4 = (ulong)(local_77[0] - 0x41);
            bVar3 = local_77[0] | 0x20;
            if (0x19 < (byte)(local_77[0] - 0x41)) {
              bVar3 = local_77[0];
            }
            if (bVar3 != 0x6f) goto LAB_10011732;
            if (local_77[1] == 0) {
              pcVar11 = str_1001eb8a + 2;
            }
            else {
              uVar4 = (ulong)(local_77[1] - 0x41);
              bVar3 = local_77[1] | 0x20;
              if (0x19 < (byte)(local_77[1] - 0x41)) {
                bVar3 = local_77[1];
              }
              if (bVar3 != 0x6e) goto LAB_10011732;
              if (local_77[2] == 0) {
                pcVar11 = str_1001eb8a + 3;
              }
              else {
                uVar4 = (ulong)(local_77[2] - 0x41);
                bVar3 = local_77[2] | 0x20;
                if (0x19 < (byte)(local_77[2] - 0x41)) {
                  bVar3 = local_77[2];
                }
                if (bVar3 != 0x74) goto LAB_10011732;
                if (local_77[3] == 0) {
                  pcVar11 = str_1001eb8a + 4;
                }
                else {
                  uVar4 = (ulong)(local_77[3] - 0x41);
                  bVar3 = local_77[3] | 0x20;
                  if (0x19 < (byte)(local_77[3] - 0x41)) {
                    bVar3 = local_77[3];
                  }
                  if (bVar3 != 0x65) goto LAB_10011732;
                  if (local_77[4] == 0) {
                    pcVar11 = str_1001eb8a + 5;
                  }
                  else {
                    uVar4 = (ulong)(local_77[4] - 0x41);
                    bVar3 = local_77[4] | 0x20;
                    if (0x19 < (byte)(local_77[4] - 0x41)) {
                      bVar3 = local_77[4];
                    }
                    if (bVar3 != 0x6e) goto LAB_10011732;
                    if (local_77[5] == 0) {
                      pcVar11 = str_1001eb8a + 6;
                    }
                    else {
                      uVar4 = (ulong)(local_77[5] - 0x41);
                      bVar3 = local_77[5] | 0x20;
                      if (0x19 < (byte)(local_77[5] - 0x41)) {
                        bVar3 = local_77[5];
                      }
                      if (bVar3 != 0x74) goto LAB_10011732;
                      if (local_77[6] == 0) {
                        pcVar11 = str_1001eb8a + 7;
                      }
                      else {
                        uVar4 = (ulong)(local_77[6] - 0x41);
                        bVar3 = local_77[6] | 0x20;
                        if (0x19 < (byte)(local_77[6] - 0x41)) {
                          bVar3 = local_77[6];
                        }
                        if ((bVar3 != 0x73) || (local_77[7] != '\0')) goto LAB_10011732;
                        pcVar11 = str_1001eb8a + 8;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_10011729;
        }
        if (bVar3 == 0x69) {
          if (local_77[0] == 0) {
            pcVar11 = str_1001eb83 + 1;
          }
          else {
            uVar4 = (ulong)(local_77[0] - 0x41);
            bVar3 = local_77[0] | 0x20;
            if (0x19 < (byte)(local_77[0] - 0x41)) {
              bVar3 = local_77[0];
            }
            if (bVar3 != 0x6e) goto LAB_10011732;
            if (local_77[1] == 0) {
              pcVar11 = str_1001eb83 + 2;
            }
            else {
              uVar4 = (ulong)(local_77[1] - 0x41);
              bVar3 = local_77[1] | 0x20;
              if (0x19 < (byte)(local_77[1] - 0x41)) {
                bVar3 = local_77[1];
              }
              if (bVar3 != 0x6c) goto LAB_10011732;
              if (local_77[2] == 0) {
                pcVar11 = str_1001eb83 + 3;
              }
              else {
                uVar4 = (ulong)(local_77[2] - 0x41);
                bVar3 = local_77[2] | 0x20;
                if (0x19 < (byte)(local_77[2] - 0x41)) {
                  bVar3 = local_77[2];
                }
                if (bVar3 != 0x69) goto LAB_10011732;
                if (local_77[3] == 0) {
                  pcVar11 = str_1001eb83 + 4;
                }
                else {
                  uVar4 = (ulong)(local_77[3] - 0x41);
                  bVar3 = local_77[3] | 0x20;
                  if (0x19 < (byte)(local_77[3] - 0x41)) {
                    bVar3 = local_77[3];
                  }
                  if (bVar3 != 0x6e) goto LAB_10011732;
                  if (local_77[4] == 0) {
                    pcVar11 = str_1001eb83 + 5;
                  }
                  else {
                    uVar4 = (ulong)(local_77[4] - 0x41);
                    bVar3 = local_77[4] | 0x20;
                    if (0x19 < (byte)(local_77[4] - 0x41)) {
                      bVar3 = local_77[4];
                    }
                    if ((bVar3 != 0x65) || (local_77[5] != 0)) goto LAB_10011732;
                    pcVar11 = str_1001eb83 + 6;
                  }
                }
              }
            }
          }
          cVar2 = *pcVar11;
          goto joined_r0x1001172c;
        }
      }
LAB_10011732:
      pcVar11 = &local_cd8;
      recovered_10007e50((char *)param_2,str_1001e966,pcVar11,0xb4);
      pcVar1 = &local_8d8;
      recovered_10007e50((char *)param_2,&DAT_1001e9d5,pcVar1,0x60);
      uVar4 = 0;
      recovered_10007e50((char *)param_2,&DAT_1001eb59,(char *)&local_348,0x40);
      if (local_348 == 0) {
        pcVar7 = str_1001eb5e;
      }
      else {
        uVar4 = 0;
        do {
          uVar8 = uVar4;
          uVar4 = uVar8;
          if (uVar8 == 10) goto LAB_100117fd;
          bVar3 = str_1001eb5e[uVar8];
          bVar9 = local_348 | 0x20;
          if (0x19 < (byte)(local_348 + 0xbf)) {
            bVar9 = local_348;
          }
          bVar10 = bVar3 | 0x20;
          if (0x19 < (byte)(bVar3 + 0xbf)) {
            bVar10 = bVar3;
          }
          if (bVar9 != bVar10) goto LAB_100117fd;
          local_348 = abStack_347[uVar8];
          uVar4 = uVar8 + 1;
        } while (local_348 != 0);
        pcVar7 = str_1001eb5e + uVar8 + 1;
      }
      if (*pcVar7 != '\0') {
LAB_100117fd:
        uVar8 = strlen(&DAT_1001ead1);
        cVar2 = local_cd8;
        if (uVar8 != 0) {
          while (cVar2 != '\0') {
            uVar4 = 0;
            while (bVar3 = pcVar11[uVar4], bVar3 != 0) {
              bVar9 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar9 = bVar3;
              }
              bVar3 = (&DAT_1001ead1)[uVar4];
              bVar10 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar10 = bVar3;
              }
              if (bVar9 != bVar10) break;
              uVar4 = uVar4 + 1;
              if (uVar8 == uVar4) goto LAB_10011b21;
            }
            if (uVar8 == uVar4) goto LAB_10011b21;
            pcVar7 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
            cVar2 = *pcVar7;
          }
        }
        uVar8 = strlen(&DAT_1001eb69);
        if ((uVar8 != 0) && (local_cd8 != '\0')) {
          pcVar11 = &local_cd8;
          do {
            uVar13 = 0;
            while (bVar3 = pcVar11[uVar13], bVar3 != 0) {
              bVar9 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar9 = bVar3;
              }
              bVar3 = (&DAT_1001eb69)[uVar13];
              bVar10 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar10 = bVar3;
              }
              if (bVar9 != bVar10) break;
              uVar13 = uVar13 + 1;
              uVar4 = 1;
              if (uVar8 == uVar13) goto LAB_100111da;
            }
            uVar4 = 0;
            if (uVar8 == uVar13) goto LAB_10011b21;
            pcVar7 = pcVar11 + 1;
            pcVar11 = pcVar11 + 1;
          } while (*pcVar7 != '\0');
        }
        uVar8 = strlen(&DAT_1001ead1);
        if (uVar8 != 0) {
          while (local_8d8 != '\0') {
            uVar13 = 0;
            while (bVar3 = pcVar1[uVar13], bVar3 != 0) {
              bVar9 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar9 = bVar3;
              }
              bVar3 = (&DAT_1001ead1)[uVar13];
              bVar10 = bVar3 | 0x20;
              if (0x19 < (byte)(bVar3 + 0xbf)) {
                bVar10 = bVar3;
              }
              if (bVar9 != bVar10) break;
              uVar13 = uVar13 + 1;
              uVar4 = 1;
              if (uVar8 == uVar13) goto LAB_100111da;
            }
            uVar4 = 0;
            if (uVar8 == uVar13) goto LAB_10011b21;
            pcVar11 = pcVar1 + 1;
            pcVar1 = pcVar1 + 1;
            local_8d8 = *pcVar11;
          }
        }
        pcVar11 = recovered_10008580(&local_8d8,&DAT_1001eb69);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),pcVar11 != (char *)0x0);
        goto LAB_100111da;
      }
    }
  }
  else {
    bVar3 = local_78 | 0x20;
    if (0x19 < (byte)(local_78 + 0xbf)) {
      bVar3 = local_78;
    }
    if (bVar3 != 0x66) {
LAB_100115c7:
      lVar6 = 0;
      bVar3 = local_78;
      do {
        lVar12 = lVar6;
        if (lVar12 == 0xb) goto LAB_10011638;
        bVar9 = str_1001eb77[lVar12];
        bVar10 = bVar3 | 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar10 = bVar3;
        }
        bVar3 = bVar9 | 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar3 = bVar9;
        }
        if (bVar10 != bVar3) goto LAB_10011638;
        bVar3 = local_77[lVar12];
        lVar6 = lVar12 + 1;
      } while (bVar3 != 0);
      cVar2 = str_1001eb77[lVar12 + 1];
      goto joined_r0x1001159a;
    }
    if (local_77[0] == 0) {
      pcVar11 = &DAT_1001eb73;
    }
    else {
      bVar3 = local_77[0] | 0x20;
      if (0x19 < (byte)(local_77[0] + 0xbf)) {
        bVar3 = local_77[0];
      }
      if (bVar3 != 0x6c) goto LAB_100115c7;
      if (local_77[1] == 0) {
        pcVar11 = &DAT_1001eb74;
      }
      else {
        bVar3 = local_77[1] | 0x20;
        if (0x19 < (byte)(local_77[1] + 0xbf)) {
          bVar3 = local_77[1];
        }
        if (bVar3 != 0x65) goto LAB_100115c7;
        if (local_77[2] == 0) {
          pcVar11 = &DAT_1001eb75;
        }
        else {
          bVar3 = local_77[2] | 0x20;
          if (0x19 < (byte)(local_77[2] + 0xbf)) {
            bVar3 = local_77[2];
          }
          if ((bVar3 != 0x78) || (local_77[3] != 0)) goto LAB_100115c7;
          pcVar11 = &DAT_1001eb76;
        }
      }
    }
    if (*pcVar11 != '\0') goto LAB_100115c7;
  }
LAB_10011b21:
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_100111da:
  return uVar4 & 0xffffffff;
}

#undef DAT_1001e917
#undef DAT_1001e918
#undef DAT_1001e919
#undef DAT_1001e91a
#undef DAT_1001e91b
#undef DAT_1001e9d5
#undef DAT_1001ead1
#undef DAT_1001ead2
#undef DAT_1001ead3
#undef DAT_1001ead4
#undef DAT_1001eb3e
#undef DAT_1001eb59
#undef DAT_1001eb69
#undef DAT_1001eb6e
#undef DAT_1001eb73
#undef DAT_1001eb74
#undef DAT_1001eb75
#undef DAT_1001eb76
#undef str_1001e271
#undef str_1001e966
#undef str_1001eb26
#undef str_1001eb5e
#undef str_1001eb77
#undef str_1001eb83
#undef str_1001eb8a
#undef local_408
#undef abStack_347
#undef local_348
#undef local_148
#undef local_e8
#undef local_88
#undef local_80
#undef local_78
#undef local_77
#undef local_38
#undef local_cd8
#undef local_cd7
#undef local_8d8
#undef local_8d7
#undef local_4d8
#undef local_468

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e291
#define DAT_1001e291 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef str_1001eb93
#define str_1001eb93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc86U)))
#undef str_1001eb9c
#define str_1001eb9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc8fU)))
#undef str_1001ebaa
#define str_1001ebaa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9dU)))
#undef str_1001ebb8
#define str_1001ebb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcabU)))
#undef str_1001ebbf
#define str_1001ebbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb2U)))
#undef str_1001ebc6
#define str_1001ebc6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb9U)))
#define local_138 (*(byte (*)[264])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011b60
 */

void recovered_10011b60(long param_1,byte *param_2)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;

  if ((param_2 != (byte *)0x0) && (*param_2 = 0, param_1 != 0)) {
    recovered_10007e50((char *)param_1,&DAT_1001e291,(char *)local_138,0x100);
    if (((((local_138[0] == 0) || (uVar4 = recovered_10016210(local_138), (char)uVar4 != '\0')) &&
         ((recovered_10007e50((char *)param_1,str_1001eb93,(char *)local_138,0x100),
          local_138[0] == 0 || (uVar4 = recovered_10016210(local_138), (char)uVar4 != '\0')))) &&
        ((recovered_10007e50((char *)param_1,str_1001eb9c,(char *)local_138,0x100),
         local_138[0] == 0 || (uVar4 = recovered_10016210(local_138), (char)uVar4 != '\0')))) &&
       (((recovered_10007e50((char *)param_1,str_1001ebaa,(char *)local_138,0x100),
         local_138[0] == 0 || (uVar4 = recovered_10016210(local_138), (char)uVar4 != '\0')) &&
        ((recovered_10007e50((char *)param_1,str_1001ebb8,(char *)local_138,0x100),
         local_138[0] == 0 || (uVar4 = recovered_10016210(local_138), (char)uVar4 != '\0')))))) {
      pbVar7 = local_138;
      recovered_10007e50((char *)param_1,str_1001ebbf,(char *)pbVar7,0x100);
      *param_2 = 0;
      uVar5 = (ulong)local_138[0];
      if (local_138[0] != 0) {
        do {
          while (((byte)uVar5 < 0x2d && ((0x100100003600U >> (uVar5 & 0x3f) & 1) != 0))) {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            uVar5 = (ulong)*pbVar1;
          }
          uVar6 = 0;
          while ((0x2c < (byte)uVar5 || ((0x100100003601U >> (uVar5 & 0x3f) & 1) == 0))) {
            lVar3 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            uVar5 = (ulong)pbVar7[lVar3];
          }
          if (uVar6 < 0x100 && uVar6 != 0) {
            memcpy(param_2,pbVar7,uVar6);
            param_2[uVar6] = 0;
            uVar4 = recovered_10016210(param_2);
            if ((char)uVar4 == '\0') {
              return;
            }
          }
          pbVar7 = pbVar7 + uVar6;
          while( true ) {
            bVar2 = *pbVar7;
            uVar5 = (ulong)bVar2;
            if (bVar2 == 0) goto LAB_10011db5;
            if (bVar2 == 0x2c) break;
            pbVar7 = pbVar7 + 1;
          }
        } while( true );
      }
LAB_10011db5:
      *param_2 = 0;
      pbVar7 = local_138;
      recovered_10007e50((char *)param_1,str_1001ebc6,(char *)pbVar7,0x100);
      *param_2 = 0;
      uVar5 = (ulong)local_138[0];
      if (local_138[0] != 0) {
        do {
          while (((byte)uVar5 < 0x2d && ((0x100100003600U >> (uVar5 & 0x3f) & 1) != 0))) {
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            uVar5 = (ulong)*pbVar1;
          }
          uVar6 = 0;
          while ((0x2c < (byte)uVar5 || ((0x100100003601U >> (uVar5 & 0x3f) & 1) == 0))) {
            lVar3 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            uVar5 = (ulong)pbVar7[lVar3];
          }
          if (uVar6 < 0x100 && uVar6 != 0) {
            memcpy(param_2,pbVar7,uVar6);
            param_2[uVar6] = 0;
            uVar4 = recovered_10016210(param_2);
            if ((char)uVar4 == '\0') {
              return;
            }
          }
          pbVar7 = pbVar7 + uVar6;
          while( true ) {
            bVar2 = *pbVar7;
            uVar5 = (ulong)bVar2;
            if (bVar2 == 0) goto LAB_10011e96;
            if (bVar2 == 0x2c) break;
            pbVar7 = pbVar7 + 1;
          }
        } while( true );
      }
LAB_10011e96:
      *param_2 = 0;
    }
    else {
      pf_varargs_1001df25__8_((char *)param_2,0x100,&DAT_1001e232,(ulonglong)local_138);
    }
  }
  return;
}

#undef DAT_1001e232
#undef DAT_1001e291
#undef str_1001eb93
#undef str_1001eb9c
#undef str_1001ebaa
#undef str_1001ebb8
#undef str_1001ebbf
#undef str_1001ebc6
#undef local_138

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011ea0
 */

undefined8 recovered_10011ea0(byte *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;

  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar2 = strlen(param_2);
  if (uVar2 != 0 && param_1 != (byte *)0x0) {
    bVar3 = *param_1;
    while (bVar3 != 0) {
      while ((bVar3 < 0x21 && ((0x100003600U >> ((ulong)bVar3 & 0x3f) & 1) != 0))) {
        bVar3 = param_1[1];
        param_1 = param_1 + 1;
      }
      uVar4 = 0;
      while ((0x20 < bVar3 || ((0x100003601U >> ((ulong)bVar3 & 0x3f) & 1) == 0))) {
        bVar3 = param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
      }
      if (uVar2 == uVar4) {
        uVar5 = 0;
        while( true ) {
          bVar1 = param_1[uVar5];
          bVar6 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar6 = bVar1;
          }
          bVar1 = param_2[uVar5];
          bVar7 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          if (bVar6 != bVar7) break;
          uVar5 = uVar5 + 1;
          if (uVar2 == uVar5) {
            return CONCAT71((int7)(uVar2 >> 8),1);
          }
        }
      }
      param_1 = param_1 + uVar4;
    }
  }
  return 0;
}


#undef DAT_1001eb6e
#define DAT_1001eb6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc61U)))
#undef str_1001e8ce
#define str_1001e8ce (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9c1U)))
#define local_508 (*(char (*)[1024])(frame + 24))
#define local_108 (*(char (*)[96])(frame + 1048))
#define local_a8 (*(byte (*)[136])(frame + 1144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011fb0
 */

void recovered_10011fb0(long param_1,long param_2,uint *param_3)

{
  unsigned char frame[1344] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if (param_2 != 0) {
    pf_varargs_1001df25__8_(local_108,0x60,&DAT_1001eb6e,param_2);
    uVar1 = recovered_1000de10(*(char **)(param_1 + 800),local_108,local_508);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_1000dfe0(local_508,str_1001e8ce,(char *)local_a8,0x80);
      if ((char)uVar2 != '\0') {
        recovered_1000e250(local_a8,param_3);
      }
    }
  }
  return;
}

#undef DAT_1001eb6e
#undef str_1001e8ce
#undef local_508
#undef local_108
#undef local_a8

#undef DAT_1001ebf1
#define DAT_1001ebf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce4U)))
#undef DAT_1001ebf2
#define DAT_1001ebf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce5U)))
#undef DAT_1001ebf3
#define DAT_1001ebf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce6U)))
#undef DAT_1001ebf4
#define DAT_1001ebf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce7U)))
#undef DAT_1001ebf5
#define DAT_1001ebf5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce8U)))
#undef str_1001e928
#define str_1001e928 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1bU)))
#undef str_1001ebde
#define str_1001ebde (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd1U)))
#undef str_1001ebe4
#define str_1001ebe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd7U)))
#undef str_1001ebeb
#define str_1001ebeb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdeU)))
#define local_38 (*(byte *)(frame + 24))
#define local_37 (*(byte *)(frame + 25))
#define local_36 (*(byte *)(frame + 26))
#define local_35 (*(byte *)(frame + 27))
#define local_34 (*(byte *)(frame + 28))
#define local_33 (*(byte *)(frame + 29))
#define local_32 (*(char *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012050
 */

undefined4 recovered_10012050(char *param_1,undefined4 param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;

  recovered_10007e50(param_1,str_1001ebde,(char *)&local_38,0x20);
  if (local_38 == 0) {
    pcVar2 = str_1001ebe4;
LAB_100122c3:
    if (*pcVar2 == '\0') {
      return 1;
    }
    if (local_38 != 0) goto LAB_100122d4;
  }
  else {
    bVar1 = local_38 | 0x20;
    if (0x19 < (byte)(local_38 + 0xbf)) {
      bVar1 = local_38;
    }
    if (bVar1 == 0x6d) {
      if (local_37 == 0) {
        pcVar2 = str_1001ebe4 + 1;
      }
      else {
        bVar1 = local_37 | 0x20;
        if (0x19 < (byte)(local_37 + 0xbf)) {
          bVar1 = local_37;
        }
        if (bVar1 != 0x69) goto LAB_100122d4;
        if (local_36 == 0) {
          pcVar2 = str_1001ebe4 + 2;
        }
        else {
          bVar1 = local_36 | 0x20;
          if (0x19 < (byte)(local_36 + 0xbf)) {
            bVar1 = local_36;
          }
          if (bVar1 != 100) goto LAB_100122d4;
          if (local_35 == 0) {
            pcVar2 = str_1001ebe4 + 3;
          }
          else {
            bVar1 = local_35 | 0x20;
            if (0x19 < (byte)(local_35 + 0xbf)) {
              bVar1 = local_35;
            }
            if (bVar1 != 100) goto LAB_100122d4;
            if (local_34 == 0) {
              pcVar2 = str_1001ebe4 + 4;
            }
            else {
              bVar1 = local_34 | 0x20;
              if (0x19 < (byte)(local_34 + 0xbf)) {
                bVar1 = local_34;
              }
              if (bVar1 != 0x6c) goto LAB_100122d4;
              if (local_33 == 0) {
                pcVar2 = str_1001ebe4 + 5;
              }
              else {
                bVar1 = local_33 | 0x20;
                if (0x19 < (byte)(local_33 + 0xbf)) {
                  bVar1 = local_33;
                }
                if ((bVar1 != 0x65) || (local_32 != '\0')) goto LAB_100122d4;
                pcVar2 = str_1001ebe4 + 6;
              }
            }
          }
        }
      }
      goto LAB_100122c3;
    }
    if (bVar1 == 99) {
      if (local_37 == 0) {
        pcVar2 = str_1001e928 + 1;
      }
      else {
        bVar1 = local_37 | 0x20;
        if (0x19 < (byte)(local_37 + 0xbf)) {
          bVar1 = local_37;
        }
        if (bVar1 != 0x65) goto LAB_100122d4;
        if (local_36 == 0) {
          pcVar2 = str_1001e928 + 2;
        }
        else {
          bVar1 = local_36 | 0x20;
          if (0x19 < (byte)(local_36 + 0xbf)) {
            bVar1 = local_36;
          }
          if (bVar1 != 0x6e) goto LAB_100122d4;
          if (local_35 == 0) {
            pcVar2 = str_1001e928 + 3;
          }
          else {
            bVar1 = local_35 | 0x20;
            if (0x19 < (byte)(local_35 + 0xbf)) {
              bVar1 = local_35;
            }
            if (bVar1 != 0x74) goto LAB_100122d4;
            if (local_34 == 0) {
              pcVar2 = str_1001e928 + 4;
            }
            else {
              bVar1 = local_34 | 0x20;
              if (0x19 < (byte)(local_34 + 0xbf)) {
                bVar1 = local_34;
              }
              if (bVar1 != 0x65) goto LAB_100122d4;
              if (local_33 == 0) {
                pcVar2 = str_1001e928 + 5;
              }
              else {
                bVar1 = local_33 | 0x20;
                if (0x19 < (byte)(local_33 + 0xbf)) {
                  bVar1 = local_33;
                }
                if ((bVar1 != 0x72) || (local_32 != '\0')) goto LAB_100122d4;
                pcVar2 = str_1001e928 + 6;
              }
            }
          }
        }
      }
      if (*pcVar2 == '\0') {
        return 1;
      }
    }
LAB_100122d4:
    bVar1 = local_38;
    if ((byte)(local_38 + 0xbf) < 0x1a) {
      bVar1 = local_38 | 0x20;
    }
    if (bVar1 == 0x6c) {
      if (local_37 == 0) {
        pcVar2 = &DAT_1001ebf2;
      }
      else {
        bVar1 = local_37 | 0x20;
        if (0x19 < (byte)(local_37 + 0xbf)) {
          bVar1 = local_37;
        }
        if (bVar1 != 0x65) {
          return param_2;
        }
        if (local_36 == 0) {
          pcVar2 = &DAT_1001ebf3;
        }
        else {
          bVar1 = local_36 | 0x20;
          if (0x19 < (byte)(local_36 + 0xbf)) {
            bVar1 = local_36;
          }
          if (bVar1 != 0x66) {
            return param_2;
          }
          if (local_35 == 0) {
            pcVar2 = &DAT_1001ebf4;
          }
          else {
            bVar1 = local_35 | 0x20;
            if (0x19 < (byte)(local_35 + 0xbf)) {
              bVar1 = local_35;
            }
            if (bVar1 != 0x74) {
              return param_2;
            }
            if (local_34 != 0) {
              return param_2;
            }
            pcVar2 = &DAT_1001ebf5;
          }
        }
      }
      goto LAB_10012466;
    }
    if (bVar1 != 0x72) {
      return param_2;
    }
    if (local_37 == 0) {
      pcVar2 = str_1001ebeb + 1;
    }
    else {
      bVar1 = local_37 | 0x20;
      if (0x19 < (byte)(local_37 + 0xbf)) {
        bVar1 = local_37;
      }
      if (bVar1 != 0x69) {
        return param_2;
      }
      if (local_36 == 0) {
        pcVar2 = str_1001ebeb + 2;
      }
      else {
        bVar1 = local_36 | 0x20;
        if (0x19 < (byte)(local_36 + 0xbf)) {
          bVar1 = local_36;
        }
        if (bVar1 != 0x67) {
          return param_2;
        }
        if (local_35 == 0) {
          pcVar2 = str_1001ebeb + 3;
        }
        else {
          bVar1 = local_35 | 0x20;
          if (0x19 < (byte)(local_35 + 0xbf)) {
            bVar1 = local_35;
          }
          if (bVar1 != 0x68) {
            return param_2;
          }
          if (local_34 == 0) {
            pcVar2 = str_1001ebeb + 4;
          }
          else {
            bVar1 = local_34 | 0x20;
            if (0x19 < (byte)(local_34 + 0xbf)) {
              bVar1 = local_34;
            }
            if (bVar1 != 0x74) {
              return param_2;
            }
            if (local_33 != 0) {
              return param_2;
            }
            pcVar2 = str_1001ebeb + 5;
          }
        }
      }
    }
    if (*pcVar2 == '\0') {
      return 2;
    }
    if (local_38 != 0) {
      return param_2;
    }
  }
  pcVar2 = &DAT_1001ebf1;
LAB_10012466:
  if (*pcVar2 == '\0') {
    param_2 = 0;
  }
  return param_2;
}

#undef DAT_1001ebf1
#undef DAT_1001ebf2
#undef DAT_1001ebf3
#undef DAT_1001ebf4
#undef DAT_1001ebf5
#undef str_1001e928
#undef str_1001ebde
#undef str_1001ebe4
#undef str_1001ebeb
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32

#undef DAT_1001eb6e
#define DAT_1001eb6e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc61U)))
#undef str_1001ebf6
#define str_1001ebf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce9U)))
#define local_508 (*(char (*)[1024])(frame + 24))
#define local_108 (*(char (*)[96])(frame + 1048))
#define local_a8 (*(byte (*)[136])(frame + 1144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012480
 */

undefined4 recovered_10012480(long param_1,char *param_2,undefined4 param_3)

{
  unsigned char frame[1344] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;

  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pf_varargs_1001df25__8_(local_108,0x60,&DAT_1001eb6e,(ulonglong)param_2);
    uVar2 = recovered_1000de10(*(char **)(param_1 + 800),local_108,local_508);
    if (((char)uVar2 != '\0') &&
       (uVar3 = recovered_1000dfe0(local_508,str_1001ebf6,(char *)local_a8,0x80),
       (char)uVar3 != '\0')) {
      pbVar4 = local_a8;
      do {
        pbVar4 = pbVar4 + 1;
        uVar3 = (ulong)pbVar4[-1];
        if (0x20 < uVar3) break;
      } while ((0x100003600U >> (uVar3 & 0x3f) & 1) != 0);
      if ((byte)(pbVar4[-1] - 0x30U) < 10) {
        iVar5 = 0;
        do {
          iVar5 = (uint)(byte)((char)uVar3 - 0x30) + iVar5 * 10;
          bVar1 = *pbVar4;
          uVar3 = (ulong)bVar1;
          pbVar4 = pbVar4 + 1;
        } while ((byte)(bVar1 - 0x30U) < 10);
        if (0x47 < iVar5) {
          return 4;
        }
        if (0x29 < iVar5) {
          return 3;
        }
        if (0x15 < iVar5) {
          param_3 = 2;
        }
      }
    }
  }
  return param_3;
}

#undef DAT_1001eb6e
#undef str_1001ebf6
#undef local_508
#undef local_108
#undef local_a8

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e235
#define DAT_1001e235 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x328U)))
#undef DAT_1001e239
#define DAT_1001e239 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32cU)))
#undef DAT_1001e8ff
#define DAT_1001e8ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f2U)))
#undef DAT_1001e902
#define DAT_1001e902 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f5U)))
#undef DAT_1001e905
#define DAT_1001e905 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9f8U)))
#undef DAT_1001e908
#define DAT_1001e908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9fbU)))
#undef DAT_1001e90b
#define DAT_1001e90b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9feU)))
#undef DAT_1001e90e
#define DAT_1001e90e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa01U)))
#undef DAT_1001e925
#define DAT_1001e925 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa18U)))
#undef DAT_1001e926
#define DAT_1001e926 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa19U)))
#undef DAT_1001e927
#define DAT_1001e927 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa1aU)))
#undef DAT_1001e94f
#define DAT_1001e94f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa42U)))
#undef DAT_1001e950
#define DAT_1001e950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa43U)))
#undef DAT_1001e951
#define DAT_1001e951 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa44U)))
#undef DAT_1001e994
#define DAT_1001e994 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa87U)))
#undef DAT_1001e995
#define DAT_1001e995 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa88U)))
#undef DAT_1001e996
#define DAT_1001e996 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa89U)))
#undef DAT_1001e997
#define DAT_1001e997 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8aU)))
#undef DAT_1001e998
#define DAT_1001e998 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa8bU)))
#undef DAT_1001ead1
#define DAT_1001ead1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbc4U)))
#undef str_1001eaa8
#define str_1001eaa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb9bU)))
#undef str_1001eab5
#define str_1001eab5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xba8U)))
#undef str_1001eabd
#define str_1001eabd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb0U)))
#undef str_1001eac3
#define str_1001eac3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb6U)))
#undef str_1001eaca
#define str_1001eaca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbdU)))
#define local_908 (*(byte (*)[1024])(frame + 24))
#define local_508 (*(byte (*)[1024])(frame + 1048))
#define local_108 (*(char (*)[136])(frame + 2072))
#define local_80 (*(long *)(frame + 2208))
#define local_78 (*(byte * *)(frame + 2216))
#define local_70 (*(byte * *)(frame + 2224))
#define local_68 (*(byte * *)(frame + 2232))
#define local_60 (*(byte * *)(frame + 2240))
#define local_58 (*(byte (*)[40])(frame + 2248))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012590
 */

void recovered_10012590(long param_1,byte *param_2,long param_3,char *param_4,long param_5)

{
  unsigned char frame[2368] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte *pbVar15;

  local_78 = param_2 + param_3;
  local_68 = local_78;
  if (param_2 == (byte *)0x0) {
    local_68 = (byte *)0x0;
  }
  if ((param_4 == (char *)0x0) || (*param_4 = '\0', param_3 == 0 || param_2 == (byte *)0x0)) {
    return;
  }
  local_508[0] = 0;
  local_80 = param_1;
  if (0 < param_3) {
    local_78 = (byte *)-(long)local_78;
    do {
      if ((*param_2 == 0) || (uVar5 = strlen((char *)local_508), 0x3fe < uVar5)) break;
      bVar13 = *param_2;
      if (bVar13 != 0x3c) {
        uVar5 = strlen((char *)local_508);
        if (uVar5 < 0x3ff) {
          local_508[uVar5] = bVar13;
          local_508[uVar5 + 1] = 0;
        }
        param_2 = param_2 + 1;
        goto LAB_1001269a;
      }
      pbVar15 = (byte *)0x0;
      lVar8 = 0;
      while (param_2[lVar8] != 0x3e) {
        lVar8 = lVar8 + 1;
        pbVar15 = pbVar15 + -1;
        if (local_78 + (long)param_2 == pbVar15) goto LAB_10013176;
      }
      uVar3 = ~(uint)pbVar15;
      if (0x1fe < (int)uVar3) {
        uVar3 = 0x1ff;
      }
      local_60 = (byte *)(long)(int)uVar3;
      local_70 = param_2 + 1;
      memcpy(local_908,local_70,(ulong)local_60);
      local_908[(long)local_60] = 0;
      iVar4 = strncmp((char *)local_908,&DAT_1001e235,3);
      if (iVar4 == 0) {
        local_60 = param_2 + 4;
        uVar5 = strlen(&DAT_1001e239);
        pbVar6 = local_60;
        if (param_2 + uVar5 + 4 <= local_68 && (local_60 < local_68 && uVar5 != 0)) {
          while (*pbVar6 != 0) {
            uVar9 = 0;
            while ((pbVar6 + uVar9 < local_68 && (bVar13 = pbVar6[uVar9], bVar13 != 0))) {
              bVar12 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar12 = bVar13;
              }
              bVar13 = (&DAT_1001e239)[uVar9];
              bVar14 = bVar13 | 0x20;
              if (0x19 < (byte)(bVar13 + 0xbf)) {
                bVar14 = bVar13;
              }
              if (bVar12 != bVar14) break;
              uVar9 = uVar9 + 1;
              if (uVar5 == uVar9) goto LAB_100127f3;
            }
            if (uVar5 == uVar9) goto LAB_100127f3;
            pbVar10 = pbVar6 + uVar5 + 1;
            pbVar6 = pbVar6 + 1;
            if (local_68 < pbVar10) break;
          }
        }
        pbVar6 = (byte *)0x0;
LAB_100127f3:
        param_2 = local_70 + -(long)pbVar15;
        if (pbVar6 != (byte *)0x0) {
          param_2 = pbVar6 + 3;
        }
        goto LAB_1001269a;
      }
      local_58[0] = 0;
      for (pbVar6 = local_908; uVar5 = (ulong)*pbVar6, uVar5 < 0x30; pbVar6 = pbVar6 + 1) {
        if ((0x100003600U >> (uVar5 & 0x3f) & 1) == 0) {
          if (uVar5 == 0x2f) {
            pbVar6 = pbVar6 + 1;
            bVar1 = true;
            goto LAB_10012810;
          }
          break;
        }
      }
      bVar1 = false;
LAB_10012810:
      while ((uVar5 = (ulong)*pbVar6, uVar5 < 0x21 && ((0x100003600U >> (uVar5 & 0x3f) & 1) != 0)))
      {
        pbVar6 = pbVar6 + 1;
      }
      lVar8 = 0;
      while( true ) {
        bVar13 = (byte)uVar5;
        if ((bVar13 < 0x30) && ((0x800100003601U >> (uVar5 & 0x3f) & 1) != 0)) goto LAB_100128a9;
        bVar12 = bVar13 | 0x20;
        if (0x19 < (byte)(bVar13 + 0xbf)) {
          bVar12 = bVar13;
        }
        local_58[lVar8] = bVar12;
        bVar13 = pbVar6[lVar8 + 1];
        if (((ulong)bVar13 < 0x30) && ((0x800100003601U >> ((ulong)bVar13 & 0x3f) & 1) != 0)) {
          lVar8 = lVar8 + 1;
          goto LAB_100128a9;
        }
        if (lVar8 == 0x26) break;
        bVar12 = bVar13 | 0x20;
        if (0x19 < (byte)(bVar13 + 0xbf)) {
          bVar12 = bVar13;
        }
        local_58[lVar8 + 1] = bVar12;
        uVar5 = (ulong)pbVar6[lVar8 + 2];
        lVar8 = lVar8 + 2;
      }
      lVar8 = 0x27;
LAB_100128a9:
      local_58[lVar8] = 0;
      if (bVar1 || local_58[0] == 0) goto LAB_100128b9;
      uVar5 = recovered_1000f560(local_80,(char *)local_908,(char *)local_58);
      if (((char)uVar5 != '\0') || (uVar7 = recovered_100108c0(local_58), (char)uVar7 != '\0')) {
        param_2 = (byte *)recovered_10015400((long)param_2 - (long)pbVar15,local_68,local_58);
        goto LAB_1001269a;
      }
      pcVar11 = &DAT_1001e994;
      if (local_58[0] == 0) {
LAB_10012998:
        if ((*pcVar11 == '\0') &&
           (recovered_10007e50((char *)local_908,&DAT_1001e998,local_108,0x80), local_108[0] != '\0'
           )) {
          if ((local_508[0] != 0) && (uVar5 = strlen((char *)local_508), uVar5 < 0x3ff))
          {
            (local_508 + uVar5)[0] = 0x20;
            (local_508 + uVar5)[1] = 0;
          }
          uVar5 = strlen((char *)local_508);
          if (uVar5 < 0x3ff) {
            pf_varargs_1001df25__8_
                      ((char *)(local_508 + uVar5),0x400 - uVar5,&DAT_1001e232,(ulonglong)local_108)
            ;
          }
        }
        if (local_58[0] != 0) goto LAB_10012a38;
        bVar1 = true;
        pcVar11 = str_1001eabd;
        bVar13 = 0;
        goto LAB_10012c3f;
      }
      bVar13 = local_58[0] | 0x20;
      if (0x19 < (byte)(local_58[0] + 0xbf)) {
        bVar13 = local_58[0];
      }
      if (bVar13 == 0x69) {
        pcVar11 = &DAT_1001e995;
        if (local_58[1] != 0) {
          bVar13 = local_58[1] | 0x20;
          if (0x19 < (byte)(local_58[1] + 0xbf)) {
            bVar13 = local_58[1];
          }
          if (bVar13 != 0x6d) goto LAB_10012a38;
          pcVar11 = &DAT_1001e996;
          if (local_58[2] != 0) {
            bVar13 = local_58[2] | 0x20;
            if (0x19 < (byte)(local_58[2] + 0xbf)) {
              bVar13 = local_58[2];
            }
            if ((bVar13 != 0x67) || (pcVar11 = &DAT_1001e997, local_58[3] != 0)) goto LAB_10012a38;
          }
        }
        goto LAB_10012998;
      }
LAB_10012a38:
      bVar12 = local_58[0] | 0x20;
      if (0x19 < (byte)(local_58[0] + 0xbf)) {
        bVar12 = local_58[0];
      }
      bVar1 = false;
      bVar13 = local_58[0];
      switch((uintptr_t)(bVar12)) {
      case 0x61:
        if (local_58[1] == 0) {
          bVar1 = false;
          pcVar11 = str_1001eabd + 1;
LAB_10012c3f:
          if (*pcVar11 != '\0') goto switchD_10012a6b_caseD_63;
        }
        else {
          bVar12 = local_58[1] | 0x20;
          if (0x19 < (byte)(local_58[1] + 0xbf)) {
            bVar12 = local_58[1];
          }
          if (bVar12 == 0x73) {
            if (local_58[2] == 0) {
              bVar1 = false;
              pcVar11 = str_1001eabd + 2;
            }
            else {
              bVar12 = local_58[2] | 0x20;
              if (0x19 < (byte)(local_58[2] + 0xbf)) {
                bVar12 = local_58[2];
              }
              if (bVar12 != 0x69) goto LAB_10012e22;
              if (local_58[3] == 0) {
                bVar1 = false;
                pcVar11 = str_1001eabd + 3;
              }
              else {
                bVar12 = local_58[3] | 0x20;
                if (0x19 < (byte)(local_58[3] + 0xbf)) {
                  bVar12 = local_58[3];
                }
                if (bVar12 != 100) goto LAB_10012e22;
                if (local_58[4] == 0) {
                  bVar1 = false;
                  pcVar11 = str_1001eabd + 4;
                }
                else {
                  bVar12 = local_58[4] | 0x20;
                  if (0x19 < (byte)(local_58[4] + 0xbf)) {
                    bVar12 = local_58[4];
                  }
                  bVar1 = false;
                  if ((bVar12 != 0x65) || (pcVar11 = str_1001eabd + 5, local_58[5] != 0))
                  goto switchD_10012a6b_caseD_63;
                }
              }
            }
            goto LAB_10012c3f;
          }
          if (bVar12 != 0x72) {
LAB_10012e22:
            bVar1 = false;
            goto switchD_10012a6b_caseD_63;
          }
          pcVar11 = str_1001eab5 + 2;
          if (local_58[2] != 0) {
            bVar12 = local_58[2] | 0x20;
            if (0x19 < (byte)(local_58[2] + 0xbf)) {
              bVar12 = local_58[2];
            }
            if (bVar12 != 0x74) goto LAB_10012e22;
            pcVar11 = str_1001eab5 + 3;
            if (local_58[3] != 0) {
              bVar12 = local_58[3] | 0x20;
              if (0x19 < (byte)(local_58[3] + 0xbf)) {
                bVar12 = local_58[3];
              }
              if (bVar12 != 0x69) goto LAB_10012e22;
              pcVar11 = str_1001eab5 + 4;
              if (local_58[4] != 0) {
                bVar12 = local_58[4] | 0x20;
                if (0x19 < (byte)(local_58[4] + 0xbf)) {
                  bVar12 = local_58[4];
                }
                if (bVar12 != 99) goto LAB_10012e22;
                pcVar11 = str_1001eab5 + 5;
                if (local_58[5] != 0) {
                  bVar12 = local_58[5] | 0x20;
                  if (0x19 < (byte)(local_58[5] + 0xbf)) {
                    bVar12 = local_58[5];
                  }
                  if (bVar12 != 0x6c) goto LAB_10012e22;
                  pcVar11 = str_1001eab5 + 6;
                  if (local_58[6] != 0) {
                    bVar12 = local_58[6] | 0x20;
                    if (0x19 < (byte)(local_58[6] + 0xbf)) {
                      bVar12 = local_58[6];
                    }
                    if ((bVar12 != 0x65) || (pcVar11 = str_1001eab5 + 7, local_58[7] != '\0'))
                    goto LAB_10012e22;
                  }
                }
              }
            }
          }
          if (*pcVar11 != '\0') goto LAB_10012e22;
        }
        goto LAB_1001310e;
      case 0x62:
        pbVar6 = &DAT_1001e94f;
        if (local_58[1] != 0) {
          bVar12 = local_58[1] | 0x20;
          if (0x19 < (byte)(local_58[1] + 0xbf)) {
            bVar12 = local_58[1];
          }
          if (bVar12 == 0x72) {
            pbVar6 = &DAT_1001e950;
            bVar12 = local_58[2];
joined_r0x10012cb0:
            if (bVar12 == 0) goto LAB_10012cf2;
          }
          goto LAB_10012e35;
        }
        goto LAB_10012cf2;
      default:
switchD_10012a6b_caseD_63:
        bVar2 = true;
        pcVar11 = str_1001eac3;
        if (!bVar1) goto LAB_10012e35;
        goto LAB_10012f97;
      case 100:
        pbVar6 = &DAT_1001e925;
        if (local_58[1] != 0) {
          bVar12 = local_58[1] | 0x20;
          if (0x19 < (byte)(local_58[1] + 0xbf)) {
            bVar12 = local_58[1];
          }
          if (bVar12 == 0x69) {
            pbVar6 = &DAT_1001e926;
            if (local_58[2] == 0) goto LAB_10012cf2;
            bVar12 = local_58[2] | 0x20;
            if (0x19 < (byte)(local_58[2] + 0xbf)) {
              bVar12 = local_58[2];
            }
            if (bVar12 == 0x76) {
              pbVar6 = &DAT_1001e927;
              bVar12 = local_58[3];
              goto joined_r0x10012cb0;
            }
          }
          goto LAB_10012e35;
        }
LAB_10012cf2:
        bVar12 = *pbVar6;
        break;
      case 0x70:
        bVar12 = local_58[1];
        break;
      case 0x73:
        pbVar6 = (byte *)(str_1001eaa8 + 1);
        if (local_58[1] != 0) {
          bVar12 = local_58[1] | 0x20;
          if (0x19 < (byte)(local_58[1] + 0xbf)) {
            bVar12 = local_58[1];
          }
          if (bVar12 != 0x65) goto LAB_10012e35;
          pbVar6 = (byte *)(str_1001eaa8 + 2);
          if (local_58[2] != 0) {
            bVar12 = local_58[2] | 0x20;
            if (0x19 < (byte)(local_58[2] + 0xbf)) {
              bVar12 = local_58[2];
            }
            if (bVar12 != 99) goto LAB_10012e35;
            pbVar6 = (byte *)(str_1001eaa8 + 3);
            if (local_58[3] != 0) {
              bVar12 = local_58[3] | 0x20;
              if (0x19 < (byte)(local_58[3] + 0xbf)) {
                bVar12 = local_58[3];
              }
              if (bVar12 != 0x74) goto LAB_10012e35;
              pbVar6 = (byte *)(str_1001eaa8 + 4);
              if (local_58[4] != 0) {
                bVar12 = local_58[4] | 0x20;
                if (0x19 < (byte)(local_58[4] + 0xbf)) {
                  bVar12 = local_58[4];
                }
                if (bVar12 != 0x69) goto LAB_10012e35;
                pbVar6 = (byte *)(str_1001eaa8 + 5);
                if (local_58[5] != 0) {
                  bVar12 = local_58[5] | 0x20;
                  if (0x19 < (byte)(local_58[5] + 0xbf)) {
                    bVar12 = local_58[5];
                  }
                  if (bVar12 != 0x6f) goto LAB_10012e35;
                  pbVar6 = (byte *)(str_1001eaa8 + 6);
                  if (local_58[6] != 0) {
                    bVar12 = local_58[6] | 0x20;
                    if (0x19 < (byte)(local_58[6] + 0xbf)) {
                      bVar12 = local_58[6];
                    }
                    if ((bVar12 != 0x6e) ||
                       (pbVar6 = (byte *)(str_1001eaa8 + 7), local_58[7] != '\0'))
                    goto LAB_10012e35;
                  }
                }
              }
            }
          }
        }
        bVar12 = *pbVar6;
      }
      if (bVar12 == 0) {
LAB_1001310e:
        bVar2 = true;
      }
      else {
LAB_10012e35:
        bVar12 = bVar13 | 0x20;
        if (0x19 < (byte)(bVar13 + 0xbf)) {
          bVar12 = bVar13;
        }
        if (bVar12 == 0x68) {
          if (local_58[1] == 0) {
            bVar2 = false;
            pcVar11 = str_1001eac3 + 1;
          }
          else {
            bVar12 = local_58[1] | 0x20;
            if (0x19 < (byte)(local_58[1] + 0xbf)) {
              bVar12 = local_58[1];
            }
            if (bVar12 != 0x65) goto LAB_10012faf;
            if (local_58[2] == 0) {
              bVar2 = false;
              pcVar11 = str_1001eac3 + 2;
            }
            else {
              bVar12 = local_58[2] | 0x20;
              if (0x19 < (byte)(local_58[2] + 0xbf)) {
                bVar12 = local_58[2];
              }
              if (bVar12 != 0x61) goto LAB_10012faf;
              if (local_58[3] == 0) {
                bVar2 = false;
                pcVar11 = str_1001eac3 + 3;
              }
              else {
                bVar12 = local_58[3] | 0x20;
                if (0x19 < (byte)(local_58[3] + 0xbf)) {
                  bVar12 = local_58[3];
                }
                if (bVar12 != 100) goto LAB_10012faf;
                if (local_58[4] == 0) {
                  bVar2 = false;
                  pcVar11 = str_1001eac3 + 4;
                }
                else {
                  bVar12 = local_58[4] | 0x20;
                  if (0x19 < (byte)(local_58[4] + 0xbf)) {
                    bVar12 = local_58[4];
                  }
                  if (bVar12 != 0x65) goto LAB_10012faf;
                  if (local_58[5] == 0) {
                    bVar2 = false;
                    pcVar11 = str_1001eac3 + 5;
                  }
                  else {
                    bVar12 = local_58[5] | 0x20;
                    if (0x19 < (byte)(local_58[5] + 0xbf)) {
                      bVar12 = local_58[5];
                    }
                    if ((bVar12 != 0x72) || (local_58[6] != 0)) goto LAB_10012faf;
                    bVar2 = false;
                    pcVar11 = str_1001eac3 + 6;
                  }
                }
              }
            }
          }
LAB_10012f97:
          if (*pcVar11 != '\0') {
            pcVar11 = str_1001eaca;
            if (!bVar2) goto LAB_10012faf;
            goto LAB_10013095;
          }
          goto LAB_1001310e;
        }
LAB_10012faf:
        bVar12 = bVar13 | 0x20;
        if (0x19 < (byte)(bVar13 + 0xbf)) {
          bVar12 = bVar13;
        }
        if (bVar12 == 0x66) {
          pcVar11 = str_1001eaca + 1;
          if (local_58[1] != 0) {
            bVar13 = local_58[1] | 0x20;
            if (0x19 < (byte)(local_58[1] + 0xbf)) {
              bVar13 = local_58[1];
            }
            if (bVar13 != 0x6f) goto LAB_1001309a;
            pcVar11 = str_1001eaca + 2;
            if (local_58[2] != 0) {
              bVar13 = local_58[2] | 0x20;
              if (0x19 < (byte)(local_58[2] + 0xbf)) {
                bVar13 = local_58[2];
              }
              if (bVar13 != 0x6f) goto LAB_1001309a;
              pcVar11 = str_1001eaca + 3;
              if (local_58[3] != 0) {
                bVar13 = local_58[3] | 0x20;
                if (0x19 < (byte)(local_58[3] + 0xbf)) {
                  bVar13 = local_58[3];
                }
                if (bVar13 != 0x74) goto LAB_1001309a;
                pcVar11 = str_1001eaca + 4;
                if (local_58[4] != 0) {
                  bVar13 = local_58[4] | 0x20;
                  if (0x19 < (byte)(local_58[4] + 0xbf)) {
                    bVar13 = local_58[4];
                  }
                  if (bVar13 != 0x65) goto LAB_1001309a;
                  pcVar11 = str_1001eaca + 5;
                  if (local_58[5] != 0) {
                    bVar13 = local_58[5] | 0x20;
                    if (0x19 < (byte)(local_58[5] + 0xbf)) {
                      bVar13 = local_58[5];
                    }
                    if ((bVar13 != 0x72) || (pcVar11 = str_1001eaca + 6, local_58[6] != 0))
                    goto LAB_1001309a;
                  }
                }
              }
            }
          }
LAB_10013095:
          if (*pcVar11 == '\0') goto LAB_1001310e;
        }
LAB_1001309a:
        bVar1 = recovered_10007de0(local_58,&DAT_1001ead1);
        bVar2 = true;
        if (!bVar1) {
          bVar1 = recovered_10007de0(local_58,&DAT_1001e951);
          if ((((bVar1) || (bVar1 = recovered_10007de0(local_58,&DAT_1001e8ff), bVar1)) ||
              (bVar1 = recovered_10007de0(local_58,&DAT_1001e902), bVar1)) ||
             ((bVar1 = recovered_10007de0(local_58,&DAT_1001e905), bVar1 ||
              (bVar1 = recovered_10007de0(local_58,&DAT_1001e908), bVar1)))) goto LAB_1001310e;
          bVar1 = recovered_10007de0(local_58,&DAT_1001e90b);
          bVar2 = true;
          if (!bVar1) {
            bVar2 = recovered_10007de0(local_58,&DAT_1001e90e);
          }
        }
      }
      if (((bVar2 != false) && (local_508[0] != 0)) &&
         (uVar5 = strlen((char *)local_508), uVar5 < 0x3ff)) {
        (local_508 + uVar5)[0] = 0x20;
        (local_508 + uVar5)[1] = 0;
      }
LAB_100128b9:
      param_2 = local_70 + -(long)pbVar15;
LAB_1001269a:
    } while (param_2 < local_68);
  }
LAB_10013176:
  pbVar15 = local_908;
  recovered_10008d20((char *)local_508,(char *)pbVar15,0x400);
  *param_4 = '\0';
  bVar1 = false;
  do {
    bVar13 = *pbVar15;
    uVar5 = (ulong)bVar13;
    if (uVar5 < 0x21) {
      if ((0x100003600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 == 0) {
          return;
        }
        goto LAB_100131e8;
      }
      bVar2 = !bVar1;
      bVar1 = true;
      if ((bVar2) && (*param_4 != '\0')) {
        uVar5 = strlen(param_4);
        bVar1 = true;
        if (param_5 - 1U <= uVar5) goto LAB_100131aa;
        bVar13 = 0x20;
        goto LAB_100131a0;
      }
    }
    else {
LAB_100131e8:
      uVar5 = strlen(param_4);
      bVar1 = false;
      if (uVar5 < param_5 - 1U) {
LAB_100131a0:
        param_4[uVar5] = bVar13;
        param_4[uVar5 + 1] = '\0';
      }
    }
LAB_100131aa:
    pbVar15 = pbVar15 + 1;
  } while( true );
}

#undef DAT_1001e232
#undef DAT_1001e235
#undef DAT_1001e239
#undef DAT_1001e8ff
#undef DAT_1001e902
#undef DAT_1001e905
#undef DAT_1001e908
#undef DAT_1001e90b
#undef DAT_1001e90e
#undef DAT_1001e925
#undef DAT_1001e926
#undef DAT_1001e927
#undef DAT_1001e94f
#undef DAT_1001e950
#undef DAT_1001e951
#undef DAT_1001e994
#undef DAT_1001e995
#undef DAT_1001e996
#undef DAT_1001e997
#undef DAT_1001e998
#undef DAT_1001ead1
#undef str_1001eaa8
#undef str_1001eab5
#undef str_1001eabd
#undef str_1001eac3
#undef str_1001eaca
#undef local_908
#undef local_508
#undef local_108
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#define local_3b0 (*(undefined4 *)(frame + 16))
#define local_3ac (*(int *)(frame + 20))
#define local_3a8 (*(int *)(frame + 24))
#define local_3a4 (*(int *)(frame + 28))
#define local_3a0 (*(int *)(frame + 32))
#define local_39c (*(char (*)[192])(frame + 36))
#define local_2dc (*(char (*)[640])(frame + 228))
#define local_5c (*(undefined8 *)(frame + 868))
#define local_54 (*(int *)(frame + 876))
#define local_44 (*(undefined1 *)(frame + 892))
#define local_40 (*(long *)(frame + 896))
#define local_38 (*(char * *)(frame + 904))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013250
 */

void recovered_10013250(long param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6
                       ,int *param_7)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  char *vararg0;
  int iVar6;
  bool bVar7;

  if (param_7 == (int *)0x0) {
    return;
  }
  local_40 = param_1;
  local_38 = param_3;
  memset(&local_3b0,0,0x370);
  local_3b0 = 3;
  if (param_4 < 1) {
    if (param_2 != (char *)0x0) {
      uVar3 = 0;
      while ((0x3f < (ulong)(byte)param_2[uVar3] ||
             ((0x8000000800000001U >> ((ulong)(byte)param_2[uVar3] & 0x3f) & 1) == 0))) {
        uVar3 = uVar3 + 1;
      }
      param_4 = 0xa0;
      if (3 < uVar3) {
        bVar1 = param_2[uVar3 - 4];
        bVar4 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if (bVar4 == 0x2e) {
          bVar1 = param_2[uVar3 - 3];
          bVar4 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar4 = bVar1;
          }
          if (bVar4 == 0x70) {
            bVar1 = param_2[uVar3 - 2];
            bVar4 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar4 = bVar1;
            }
            if (bVar4 == 0x6e) {
              bVar1 = param_2[uVar3 - 1];
              bVar4 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar4 = bVar1;
              }
              if (bVar4 == 0x67) {
                param_4 = param_7[1];
              }
            }
          }
        }
      }
      goto LAB_100132a9;
    }
    if (param_5 < 1) {
      param_5 = 0x5a;
    }
    param_4 = 0xa0;
    local_3a0 = param_5;
  }
  else {
LAB_100132a9:
    local_3a0 = param_5;
    if ((param_5 < 1) && (local_3a0 = 0x5a, param_2 != (char *)0x0)) {
      uVar3 = 0;
      while ((0x3f < (ulong)(byte)param_2[uVar3] ||
             ((0x8000000800000001U >> ((ulong)(byte)param_2[uVar3] & 0x3f) & 1) == 0))) {
        uVar3 = uVar3 + 1;
      }
      if (3 < uVar3) {
        bVar1 = param_2[uVar3 - 4];
        bVar4 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if (bVar4 == 0x2e) {
          bVar1 = param_2[uVar3 - 3];
          bVar4 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar4 = bVar1;
          }
          if (bVar4 == 0x70) {
            bVar1 = param_2[uVar3 - 2];
            bVar4 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar4 = bVar1;
            }
            if (bVar4 == 0x6e) {
              bVar1 = param_2[uVar3 - 1];
              bVar4 = bVar1 | 0x20;
              if (0x19 < (byte)(bVar1 + 0xbf)) {
                bVar4 = bVar1;
              }
              if ((bVar4 == 0x67) && (local_3a0 = 0xb4, param_4 < 0x41)) {
                local_3a0 = param_4;
              }
            }
          }
        }
      }
    }
  }
  iVar5 = param_7[1];
  local_3a4 = param_4;
  if (iVar5 <= param_4) {
    local_3a4 = iVar5;
  }
  local_3ac = *param_7;
  if (param_6 == 2) {
    iVar6 = 0;
    if (0 < iVar5 - local_3a4) {
      iVar6 = iVar5 - local_3a4;
    }
    local_3ac = local_3ac + iVar6;
  }
  else if (param_6 == 1) {
    iVar6 = (iVar5 - local_3a4) / 2;
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    local_3ac = local_3ac + iVar5;
  }
  local_3a8 = param_7[2];
  local_5c = 0x1ffffffff;
  local_44 = (undefined1)param_7[3];
  vararg0 = &DAT_1001f468;
  if (param_2 != (char *)0x0) {
    vararg0 = param_2;
  }
  local_54 = param_6;
  pf_varargs_1001df25__8_(local_2dc,0x100,&DAT_1001e232,(ulonglong)vararg0);
  if (local_38 == (char *)0x0) {
    if (param_2 != (char *)0x0) goto LAB_10013526;
  }
  else {
    bVar7 = param_2 != (char *)0x0;
    if (*local_38 != '\0') {
      param_2 = local_38;
    }
    if (*local_38 != '\0' || bVar7) {
LAB_10013526:
      pf_varargs_1001df25__8_(local_39c,0xc0,&DAT_1001e232,(ulonglong)param_2);
      goto LAB_10013543;
    }
  }
  local_39c[0] = '\0';
LAB_10013543:
  uVar2 = *(uint *)(local_40 + 0x52c40);
  if ((ulong)uVar2 < 0x180) {
    *(uint *)(local_40 + 0x52c40) = uVar2 + 1;
    memcpy((void *)(local_40 + (ulong)uVar2 * 0x370 + 0x440),&local_3b0,0x370);
  }
  param_7[2] = local_3a0 + param_7[2] + 0xe;
  return;
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_2dc
#undef local_5c
#undef local_54
#undef local_44
#undef local_40
#undef local_38

#undef DAT_1001e94e
#define DAT_1001e94e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa41U)))
#undef DAT_1001e94f
#define DAT_1001e94f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa42U)))
#undef DAT_1001e950
#define DAT_1001e950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa43U)))
#undef DAT_1001e95d
#define DAT_1001e95d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa50U)))
#undef DAT_1001e95e
#define DAT_1001e95e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa51U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e277
#define str_1001e277 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x36aU)))
#undef str_1001e280
#define str_1001e280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1001e287
#define str_1001e287 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x37aU)))
#undef str_1001ec00
#define str_1001ec00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcf3U)))
#define local_cc8 (*(char (*)[2048])(frame + 24))
#define local_4c8 (*(byte (*)[4])(frame + 2072))
#define local_4c4 (*(int *)(frame + 2076))
#define local_4c0 (*(int *)(frame + 2080))
#define local_4bc (*(int *)(frame + 2084))
#define local_4b8 (*(undefined4 *)(frame + 2088))
#define local_15c (*(undefined1 *)(frame + 2948))
#define local_158 (*(byte (*)[128])(frame + 2952))
#define local_d8 (*(char (*)[96])(frame + 3080))
#define local_78 (*(long *)(frame + 3176))
#define local_70 (*(long *)(frame + 3184))
#define local_68 (*(int * *)(frame + 3192))
#define local_5c (*(int *)(frame + 3204))
#define local_58 (*(byte (*)[40])(frame + 3208))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100135b0
 */

void recovered_100135b0(long param_1,long param_2,undefined4 *param_3,char *param_4,int param_5)

{
  unsigned char frame[3328] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  char *text;
  byte *dst;

  if ((param_4 != (char *)0x0 && param_3 != (undefined4 *)0x0) && (*param_4 != '\0')) {
    local_d8[0] = '\0';
    local_70 = param_2;
    local_68 = param_3;
    local_5c = param_5;
    uVar6 = recovered_10008630(param_1,param_2,param_4,local_cc8,0x800,local_d8);
    if ((char)uVar6 != '\0') {
      local_78 = param_2 + 0x440;
      pcVar8 = local_cc8;
LAB_10013656:
      do {
        while (*pcVar8 != '<') {
          if (*pcVar8 == '\0') {
            return;
          }
          pcVar7 = strchr(pcVar8,0x3c);
          if (pcVar7 == (char *)0x0) {
            uVar6 = strlen(pcVar8);
          }
          else {
            uVar6 = (long)pcVar7 - (long)pcVar8;
          }
          iVar5 = 0x17f;
          if ((int)uVar6 < 0x17f) {
            iVar5 = (int)uVar6;
          }
          memcpy(local_4c8,pcVar8,(long)iVar5);
          local_4c8[iVar5] = 0;
          recovered_10010530(local_70,local_4c8,0,&DAT_1001f468,local_5c,0,local_68);
          pcVar8 = pcVar8 + uVar6;
          if (pcVar7 != (char *)0x0) {
            pcVar8 = pcVar7;
          }
        }
        pcVar7 = strchr(pcVar8,0x3e);
        if (pcVar7 == (char *)0x0) {
          return;
        }
        iVar5 = ~(uint)pcVar8 + (int)pcVar7;
        if (0x7e < iVar5) {
          iVar5 = 0x7f;
        }
        dst = local_158;
        memcpy(dst,pcVar8 + 1,(long)iVar5);
        local_158[iVar5] = 0;
        local_58[0] = 0;
        for (; uVar6 = (ulong)*dst, uVar6 < 0x30; dst = dst + 1) {
          if ((0x100003600U >> (uVar6 & 0x3f) & 1) == 0) {
            if (uVar6 == 0x2f) {
              dst = dst + 1;
              bVar3 = true;
              goto LAB_10013730;
            }
            break;
          }
        }
        bVar3 = false;
LAB_10013730:
        while ((uVar6 = (ulong)*dst, uVar6 < 0x21 && ((0x100003600U >> (uVar6 & 0x3f) & 1) != 0))) {
          dst = dst + 1;
        }
        lVar9 = 0;
        while( true ) {
          bVar11 = (byte)uVar6;
          if ((bVar11 < 0x30) && ((0x800100003601U >> (uVar6 & 0x3f) & 1) != 0)) goto LAB_100137c3;
          bVar13 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar13 = bVar11;
          }
          local_58[lVar9] = bVar13;
          bVar11 = dst[lVar9 + 1];
          if (((ulong)bVar11 < 0x30) && ((0x800100003601U >> ((ulong)bVar11 & 0x3f) & 1) != 0)) {
            lVar9 = lVar9 + 1;
            goto LAB_100137c3;
          }
          if (lVar9 == 0x26) break;
          bVar13 = bVar11 | 0x20;
          if (0x19 < (byte)(bVar11 + 0xbf)) {
            bVar13 = bVar11;
          }
          local_58[lVar9 + 1] = bVar13;
          uVar6 = (ulong)dst[lVar9 + 2];
          lVar9 = lVar9 + 2;
        }
        lVar9 = 0x27;
LAB_100137c3:
        local_58[lVar9] = 0;
        bVar11 = local_58[0];
        if (bVar3) goto LAB_10013650;
        pcVar8 = &DAT_1001e94e;
        if (local_58[0] != 0) {
          bVar13 = local_58[0] | 0x20;
          if (0x19 < (byte)(local_58[0] + 0xbf)) {
            bVar13 = local_58[0];
          }
          if (bVar13 == 0x62) {
            pcVar8 = &DAT_1001e94f;
            if (local_58[1] != 0) {
              bVar13 = local_58[1] | 0x20;
              if (0x19 < (byte)(local_58[1] + 0xbf)) {
                bVar13 = local_58[1];
              }
              if ((bVar13 != 0x72) || (pcVar8 = &DAT_1001e950, local_58[2] != 0)) goto LAB_10013893;
            }
            goto LAB_1001387a;
          }
          if (bVar13 == 0x68) {
            pcVar8 = &DAT_1001e95d;
            if (local_58[1] != 0) {
              bVar13 = local_58[1] | 0x20;
              if (0x19 < (byte)(local_58[1] + 0xbf)) {
                bVar13 = local_58[1];
              }
              if ((bVar13 != 0x72) || (pcVar8 = &DAT_1001e95e, local_58[2] != 0)) goto LAB_10013893;
            }
            if (*pcVar8 == '\0') {
              memset(local_4c8,0,0x370);
              piVar4 = local_68;
              local_4c8[0] = 6;
              local_4c8[1] = 0;
              local_4c8[2] = 0;
              local_4c8[3] = 0;
              iVar5 = local_68[2];
              local_4c4 = *local_68;
              local_4c0 = iVar5 + 9;
              local_4bc = local_68[1];
              local_4b8 = 1;
              local_15c = (char)local_68[3];
              uVar2 = *(uint *)(local_70 + 0x52c40);
              if ((ulong)uVar2 < 0x180) {
                *(uint *)(local_70 + 0x52c40) = uVar2 + 1;
                memcpy((void *)((ulong)uVar2 * 0x370 + local_78),local_4c8,0x370);
                iVar5 = piVar4[2];
              }
              piVar4[2] = iVar5 + 0x16;
              goto LAB_10013650;
            }
          }
LAB_10013893:
          bVar13 = local_58[0] | 0x20;
          if (0x19 < (byte)(local_58[0] + 0xbf)) {
            bVar13 = local_58[0];
          }
          if (bVar13 != 0x73) goto LAB_10013650;
          pcVar8 = str_1001e280 + 1;
          if (local_58[1] == 0) {
LAB_10013988:
            if (*pcVar8 != '\0') {
              pcVar8 = str_1001e271;
              if (local_58[0] == 0) goto LAB_10013639;
              goto code_r0x100139a9;
            }
LAB_10013af2:
            pcVar8 = str_1001e280;
            if (local_58[0] == 0) {
LAB_10013c22:
              text = str_1001e277;
              if (*pcVar8 == '\0') {
                text = str_1001e287;
              }
            }
            else {
              bVar13 = local_58[0] | 0x20;
              if (0x19 < (byte)(local_58[0] + 0xbf)) {
                bVar13 = local_58[0];
              }
              text = str_1001e277;
              if (bVar13 == 0x73) {
                pcVar8 = str_1001e280 + 1;
                if (local_58[1] == 0) goto LAB_10013c22;
                bVar13 = local_58[1] | 0x20;
                if (0x19 < (byte)(local_58[1] + 0xbf)) {
                  bVar13 = local_58[1];
                }
                text = str_1001e277;
                if (bVar13 == 99) {
                  pcVar8 = str_1001e280 + 2;
                  if (local_58[2] == 0) goto LAB_10013c22;
                  bVar13 = local_58[2] | 0x20;
                  if (0x19 < (byte)(local_58[2] + 0xbf)) {
                    bVar13 = local_58[2];
                  }
                  text = str_1001e277;
                  if (bVar13 == 0x72) {
                    pcVar8 = str_1001e280 + 3;
                    if (local_58[3] == 0) goto LAB_10013c22;
                    bVar13 = local_58[3] | 0x20;
                    if (0x19 < (byte)(local_58[3] + 0xbf)) {
                      bVar13 = local_58[3];
                    }
                    text = str_1001e277;
                    if (bVar13 == 0x69) {
                      pcVar8 = str_1001e280 + 4;
                      if (local_58[4] == 0) goto LAB_10013c22;
                      bVar13 = local_58[4] | 0x20;
                      if (0x19 < (byte)(local_58[4] + 0xbf)) {
                        bVar13 = local_58[4];
                      }
                      text = str_1001e277;
                      if (bVar13 == 0x70) {
                        pcVar8 = str_1001e280 + 5;
                        if (local_58[5] == 0) goto LAB_10013c22;
                        bVar13 = local_58[5] | 0x20;
                        if (0x19 < (byte)(local_58[5] + 0xbf)) {
                          bVar13 = local_58[5];
                        }
                        text = str_1001e277;
                        if (bVar13 == 0x74) {
                          pcVar8 = str_1001e280 + 6;
                          text = str_1001e277;
                          if (local_58[6] == '\0') goto LAB_10013c22;
                        }
                      }
                    }
                  }
                }
              }
            }
            pcVar8 = pcVar7 + 1;
            uVar6 = strlen(text);
            if ((uVar6 != 0) && (*pcVar8 != '\0')) {
              pcVar7 = pcVar8;
              do {
                uVar10 = 0;
                while (bVar13 = pcVar7[uVar10], bVar13 != 0) {
                  bVar12 = bVar13 | 0x20;
                  if (0x19 < (byte)(bVar13 + 0xbf)) {
                    bVar12 = bVar13;
                  }
                  bVar13 = text[uVar10];
                  bVar14 = bVar13 | 0x20;
                  if (0x19 < (byte)(bVar13 + 0xbf)) {
                    bVar14 = bVar13;
                  }
                  if (bVar12 != bVar14) break;
                  uVar10 = uVar10 + 1;
                  if (uVar6 == uVar10) goto LAB_10013ccc;
                }
                if (uVar6 == uVar10) {
LAB_10013ccc:
                  pcVar8 = str_1001e280;
                  if (bVar11 == 0) {
LAB_10013dea:
                    lVar9 = (ulong)(*pcVar8 == '\0') + 8;
                  }
                  else {
                    if ((byte)(bVar11 + 0xbf) < 0x1a) {
                      bVar11 = bVar11 | 0x20;
                    }
                    lVar9 = 8;
                    if (bVar11 == 0x73) {
                      pcVar8 = str_1001e280 + 1;
                      if (local_58[1] != 0) {
                        bVar11 = local_58[1] | 0x20;
                        if (0x19 < (byte)(local_58[1] + 0xbf)) {
                          bVar11 = local_58[1];
                        }
                        if (bVar11 != 99) goto LAB_10013df6;
                        pcVar8 = str_1001e280 + 2;
                        if (local_58[2] != 0) {
                          bVar11 = local_58[2] | 0x20;
                          if (0x19 < (byte)(local_58[2] + 0xbf)) {
                            bVar11 = local_58[2];
                          }
                          if (bVar11 != 0x72) goto LAB_10013df6;
                          pcVar8 = str_1001e280 + 3;
                          if (local_58[3] != 0) {
                            bVar11 = local_58[3] | 0x20;
                            if (0x19 < (byte)(local_58[3] + 0xbf)) {
                              bVar11 = local_58[3];
                            }
                            if (bVar11 != 0x69) goto LAB_10013df6;
                            pcVar8 = str_1001e280 + 4;
                            if (local_58[4] != 0) {
                              bVar11 = local_58[4] | 0x20;
                              if (0x19 < (byte)(local_58[4] + 0xbf)) {
                                bVar11 = local_58[4];
                              }
                              if (bVar11 != 0x70) goto LAB_10013df6;
                              pcVar8 = str_1001e280 + 5;
                              if (local_58[5] != 0) {
                                bVar11 = local_58[5] | 0x20;
                                if (0x19 < (byte)(local_58[5] + 0xbf)) {
                                  bVar11 = local_58[5];
                                }
                                if ((bVar11 != 0x74) ||
                                   (pcVar8 = str_1001e280 + 6, local_58[6] != '\0'))
                                goto LAB_10013df6;
                              }
                            }
                          }
                        }
                      }
                      goto LAB_10013dea;
                    }
                  }
LAB_10013df6:
                  pcVar8 = pcVar7 + lVar9;
                  goto LAB_10013656;
                }
                pcVar1 = pcVar7 + 1;
                pcVar7 = pcVar7 + 1;
              } while (*pcVar1 != '\0');
            }
          }
          else {
            bVar13 = local_58[1] | 0x20;
            if (0x19 < (byte)(local_58[1] + 0xbf)) {
              bVar13 = local_58[1];
            }
            if (bVar13 == 99) {
              pcVar8 = str_1001e280 + 2;
              if (local_58[2] != 0) {
                bVar13 = local_58[2] | 0x20;
                if (0x19 < (byte)(local_58[2] + 0xbf)) {
                  bVar13 = local_58[2];
                }
                if (bVar13 != 0x72) goto code_r0x100139a9;
                pcVar8 = str_1001e280 + 3;
                if (local_58[3] != 0) {
                  bVar13 = local_58[3] | 0x20;
                  if (0x19 < (byte)(local_58[3] + 0xbf)) {
                    bVar13 = local_58[3];
                  }
                  if (bVar13 != 0x69) goto code_r0x100139a9;
                  pcVar8 = str_1001e280 + 4;
                  if (local_58[4] != 0) {
                    bVar13 = local_58[4] | 0x20;
                    if (0x19 < (byte)(local_58[4] + 0xbf)) {
                      bVar13 = local_58[4];
                    }
                    if (bVar13 != 0x70) goto code_r0x100139a9;
                    pcVar8 = str_1001e280 + 5;
                    if (local_58[5] != 0) {
                      bVar13 = local_58[5] | 0x20;
                      if (0x19 < (byte)(local_58[5] + 0xbf)) {
                        bVar13 = local_58[5];
                      }
                      if ((bVar13 != 0x74) || (pcVar8 = str_1001e280 + 6, local_58[6] != '\0'))
                      goto code_r0x100139a9;
                    }
                  }
                }
              }
              goto LAB_10013988;
            }
code_r0x100139a9:
            pcVar8 = str_1001e271 + 1;
            if (local_58[1] == 0) {
LAB_10013639:
              if (*pcVar8 == '\0') goto LAB_10013af2;
            }
            else {
              bVar13 = local_58[1] | 0x20;
              if (0x19 < (byte)(local_58[1] + 0xbf)) {
                bVar13 = local_58[1];
              }
              if (bVar13 == 0x74) {
                pcVar8 = str_1001e271 + 2;
                if (local_58[2] != 0) {
                  bVar13 = local_58[2] | 0x20;
                  if (0x19 < (byte)(local_58[2] + 0xbf)) {
                    bVar13 = local_58[2];
                  }
                  if (bVar13 != 0x79) goto LAB_10013650;
                  pcVar8 = str_1001e271 + 3;
                  if (local_58[3] != 0) {
                    bVar13 = local_58[3] | 0x20;
                    if (0x19 < (byte)(local_58[3] + 0xbf)) {
                      bVar13 = local_58[3];
                    }
                    if (bVar13 != 0x6c) goto LAB_10013650;
                    pcVar8 = str_1001e271 + 4;
                    if (local_58[4] != 0) {
                      bVar13 = local_58[4] | 0x20;
                      if (0x19 < (byte)(local_58[4] + 0xbf)) {
                        bVar13 = local_58[4];
                      }
                      if ((bVar13 != 0x65) || (pcVar8 = str_1001e271 + 5, local_58[5] != 0))
                      goto LAB_10013650;
                    }
                  }
                }
                goto LAB_10013639;
              }
            }
LAB_10013650:
            pcVar8 = pcVar7 + 1;
          }
          goto LAB_10013656;
        }
LAB_1001387a:
        if (*pcVar8 != '\0') {
          pcVar8 = str_1001e271;
          if (local_58[0] != 0) goto LAB_10013893;
          goto LAB_10013639;
        }
        local_68[2] = local_68[2] + 0xc;
        pcVar8 = pcVar7 + 1;
      } while( true );
    }
    recovered_10010530(param_2,(byte *)str_1001ec00,0,&DAT_1001f468,local_5c,0,local_68);
  }
  return;
}

#undef DAT_1001e94e
#undef DAT_1001e94f
#undef DAT_1001e950
#undef DAT_1001e95d
#undef DAT_1001e95e
#undef DAT_1001f468
#undef str_1001e271
#undef str_1001e277
#undef str_1001e280
#undef str_1001e287
#undef str_1001ec00
#undef local_cc8
#undef local_4c8
#undef local_4c4
#undef local_4c0
#undef local_4bc
#undef local_4b8
#undef local_15c
#undef local_158
#undef local_d8
#undef local_78
#undef local_70
#undef local_68
#undef local_5c
#undef local_58

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#define local_3a8 (*(undefined4 (*)[117])(frame + 24))
#define local_1d4 (*(char (*)[64])(frame + 492))
#define local_194 (*(char (*)[64])(frame + 556))
#define local_154 (*(char (*)[256])(frame + 620))
#define local_54 (*(undefined4 *)(frame + 876))
#define local_50 (*(undefined4 *)(frame + 880))
#define local_38 (*(long *)(frame + 904))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ee0
 */

void recovered_10013ee0(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined4 param_5)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_38 = param_1;
  memset(local_3a8,0,0x370);
  local_3a8[0] = 8;
  local_50 = 1;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_1001f468;
  }
  local_54 = param_5;
  pf_varargs_1001df25__8_(local_1d4,0x40,&DAT_1001e232,(ulonglong)param_2);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_194,0x40,&DAT_1001e232,(ulonglong)param_3);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_154,0x80,&DAT_1001e232,(ulonglong)param_4);
  uVar1 = *(uint *)(local_38 + 0x52c40);
  if ((ulong)uVar1 < 0x180) {
    *(uint *)(local_38 + 0x52c40) = uVar1 + 1;
    memcpy((void *)(local_38 + (ulong)uVar1 * 0x370 + 0x440),local_3a8,0x370);
  }
  return;
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef local_3a8
#undef local_1d4
#undef local_194
#undef local_154
#undef local_54
#undef local_50
#undef local_38

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001ea01
#define str_1001ea01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf4U)))
#define local_3b0 (*(undefined4 *)(frame + 16))
#define local_3ac (*(int *)(frame + 20))
#define local_3a8 (*(int *)(frame + 24))
#define local_3a4 (*(int *)(frame + 28))
#define local_3a0 (*(undefined4 *)(frame + 32))
#define local_39c (*(char (*)[448])(frame + 36))
#define local_1dc (*(char (*)[128])(frame + 484))
#define local_15c (*(char (*)[128])(frame + 612))
#define local_dc (*(char (*)[128])(frame + 740))
#define local_5c (*(int *)(frame + 868))
#define local_58 (*(undefined4 *)(frame + 872))
#define local_54 (*(int *)(frame + 876))
#define local_44 (*(undefined1 *)(frame + 892))
#define local_43 (*(char *)(frame + 893))
#define local_40 (*(long *)(frame + 896))
#define local_34 (*(int *)(frame + 908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013ff0
 */

void recovered_10013ff0(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                       undefined1 *param_5,int param_6,char param_7,int param_8,int *param_9)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  char *vararg0;
  long lVar4;
  int iVar5;

  if (param_9 == (int *)0x0) {
    return;
  }
  local_40 = param_1;
  local_34 = param_6;
  memset(&local_3b0,0,0x370);
  if (param_2 == (char *)0x0) {
    vararg0 = str_1001ea01;
  }
  else {
    vararg0 = str_1001ea01;
    if (*param_2 != '\0') {
      vararg0 = param_2;
    }
  }
  local_3b0 = 5;
  uVar2 = recovered_10015e00(vararg0,1);
  local_5c = local_34;
  iVar1 = param_9[1];
  iVar3 = uVar2 + 0x16;
  if (iVar1 < (int)(uVar2 + 0x16)) {
    iVar3 = iVar1;
  }
  iVar5 = 0xa0;
  if (iVar3 < 0xa0) {
    iVar5 = iVar3;
  }
  local_3a4 = 0x36;
  if (0x1f < (int)uVar2) {
    local_3a4 = iVar5;
  }
  local_3a0 = 0x1a;
  iVar3 = *param_9;
  if (param_8 == 2) {
    local_3ac = 0;
    if (0 < iVar1 - local_3a4) {
      local_3ac = iVar1 - local_3a4;
    }
    local_3ac = local_3ac + iVar3;
  }
  else {
    local_3ac = iVar3;
    if (param_8 == 1) {
      iVar5 = (iVar1 - local_3a4) / 2;
      local_3ac = 0;
      if (0 < iVar5) {
        local_3ac = iVar5;
      }
      local_3ac = local_3ac + iVar3;
    }
  }
  local_3a8 = param_9[2];
  if ((((-1 < local_34) && (*(int *)(local_40 + 0x52c40) != 0 && param_7 == '\0')) &&
      (lVar4 = (ulong)(*(int *)(local_40 + 0x52c40) - 1) * 0x370,
      *(int *)(local_40 + 0x440 + lVar4) == 4)) &&
     (lVar4 = lVar4 + local_40, *(int *)(lVar4 + 0x794) == local_34)) {
    if (local_3a4 + *(int *)(lVar4 + 0x444) + *(int *)(lVar4 + 0x44c) + 8 <= iVar3 + iVar1) {
      local_3ac = *(int *)(lVar4 + 0x444) + *(int *)(lVar4 + 0x44c) + 8;
      local_3a8 = *(int *)(lVar4 + 0x448);
      local_34 = (int)CONCAT71((uint7)(uint3)((uint)local_3a8 >> 8),1);
      goto LAB_1001415e;
    }
  }
  local_34 = 0;
LAB_1001415e:
  local_58 = 1;
  local_54 = param_8;
  local_43 = param_7;
  local_44 = (undefined1)param_9[3];
  pf_varargs_1001df25__8_(local_39c,0xc0,&DAT_1001e232,(ulonglong)vararg0);
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_1dc,0x40,&DAT_1001e232,(ulonglong)param_3);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_15c,0x80,&DAT_1001e232,(ulonglong)param_4);
  if (param_5 == (undefined1 *)0x0) {
    param_5 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_dc,0x80,&DAT_1001e232,(ulonglong)param_5);
  uVar2 = *(uint *)(local_40 + 0x52c40);
  if ((ulong)uVar2 < 0x180) {
    *(uint *)(local_40 + 0x52c40) = uVar2 + 1;
    memcpy((void *)(local_40 + (ulong)uVar2 * 0x370 + 0x440),&local_3b0,0x370);
  }
  iVar1 = param_9[2];
  if ((char)local_34 == '\0') {
    iVar3 = iVar1 + 0x22;
  }
  else {
    iVar3 = local_3a8 + 0x22;
    if (local_3a8 + 0x22 < iVar1) {
      iVar3 = iVar1;
    }
  }
  param_9[2] = iVar3;
  return;
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef str_1001ea01
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_1dc
#undef local_15c
#undef local_dc
#undef local_5c
#undef local_58
#undef local_54
#undef local_44
#undef local_43
#undef local_40
#undef local_34

#define local_38 (*(char (*)[24])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100142a0
 */

ulong recovered_100142a0(char *param_1,char *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;

  recovered_10007e50(param_1,param_2,local_38,0x10);
  uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (local_38[0] == '\0') {
    if ((param_2 != (char *)0x0 && param_1 != (char *)0x0) &&
       (uVar3 = strlen(param_2), *param_1 != '\0')) {
      pcVar5 = param_1;
      do {
        uVar6 = 0;
        if (uVar3 == 0) {
LAB_10014380:
          if (uVar6 == uVar3) goto LAB_10014385;
        }
        else {
          do {
            bVar2 = pcVar5[uVar6];
            bVar7 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar7 = bVar2;
            }
            bVar2 = param_2[uVar6];
            bVar8 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar8 = bVar2;
            }
            if (bVar7 != bVar8) goto LAB_10014380;
            uVar6 = uVar6 + 1;
          } while (uVar3 != uVar6);
LAB_10014385:
          if ((((pcVar5 == param_1) ||
               (((ulong)(byte)pcVar5[-1] < 0x3d &&
                ((0x1000800100003600U >> ((ulong)(byte)pcVar5[-1] & 0x3f) & 1) != 0)))) &&
              ((ulong)(byte)pcVar5[uVar3] < 0x3f)) &&
             ((0x4000800100003601U >> ((ulong)(byte)pcVar5[uVar3] & 0x3f) & 1) != 0))
          goto LAB_100143be;
        }
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar1 != '\0');
    }
    uVar4 = 0;
  }
LAB_100143be:
  return uVar4 & 0xffffffff;
}

#undef local_38

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001e938
#define str_1001e938 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2bU)))
#define local_3b0 (*(undefined4 *)(frame + 16))
#define local_3ac (*(int *)(frame + 20))
#define local_3a8 (*(int *)(frame + 24))
#define local_3a4 (*(int *)(frame + 28))
#define local_3a0 (*(undefined4 *)(frame + 32))
#define local_39c (*(char (*)[448])(frame + 36))
#define local_1dc (*(char (*)[64])(frame + 484))
#define local_19c (*(char (*)[64])(frame + 548))
#define local_15c (*(char (*)[256])(frame + 612))
#define local_5c (*(undefined4 *)(frame + 868))
#define local_58 (*(undefined4 *)(frame + 872))
#define local_54 (*(int *)(frame + 876))
#define local_44 (*(undefined1 *)(frame + 892))
#define local_40 (*(long *)(frame + 896))
#define local_34 (*(undefined4 *)(frame + 908))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100143d0
 */

void recovered_100143d0(long param_1,char *param_2,char *param_3,undefined1 *param_4,
                       undefined4 param_5,int param_6,int *param_7)

{
  unsigned char frame[992] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;

  if (param_7 == (int *)0x0) {
    return;
  }
  local_40 = param_1;
  local_34 = param_5;
  memset(&local_3b0,0,0x370);
  local_3b0 = 4;
  iVar2 = param_7[1];
  local_3a4 = 0xdc;
  if (iVar2 < 0xdc) {
    local_3a4 = iVar2;
  }
  local_3a0 = 0x18;
  local_3ac = *param_7;
  if (param_6 == 2) {
    iVar4 = 0;
    if (0 < iVar2 - local_3a4) {
      iVar4 = iVar2 - local_3a4;
    }
    local_3ac = local_3ac + iVar4;
  }
  else if (param_6 == 1) {
    iVar4 = (iVar2 - local_3a4) / 2;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    local_3ac = local_3ac + iVar2;
  }
  local_3a8 = param_7[2];
  local_5c = local_34;
  local_58 = 1;
  local_44 = (undefined1)param_7[3];
  pcVar3 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar3 = &DAT_1001f468;
  }
  local_54 = param_6;
  pf_varargs_1001df25__8_(local_1dc,0x40,&DAT_1001e232,(ulonglong)pcVar3);
  pcVar3 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar3 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_19c,0x40,&DAT_1001e232,(ulonglong)pcVar3);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_1001f468;
  }
  pf_varargs_1001df25__8_(local_15c,0x80,&DAT_1001e232,(ulonglong)param_4);
  if (param_2 == (char *)0x0) {
    if (param_3 == (char *)0x0) {
      pcVar3 = str_1001e938;
      goto LAB_10014550;
    }
  }
  else {
    pcVar3 = str_1001e938;
    if (*param_2 != '\0') {
      pcVar3 = param_2;
    }
    if (*param_2 != '\0' || param_3 == (char *)0x0) goto LAB_10014550;
  }
  pcVar3 = str_1001e938;
  if (*param_3 != '\0') {
    pcVar3 = param_3;
  }
LAB_10014550:
  pf_varargs_1001df25__8_(local_39c,0xc0,&DAT_1001e232,(ulonglong)pcVar3);
  uVar1 = *(uint *)(local_40 + 0x52c40);
  if ((ulong)uVar1 < 0x180) {
    *(uint *)(local_40 + 0x52c40) = uVar1 + 1;
    memcpy((void *)(local_40 + (ulong)uVar1 * 0x370 + 0x440),&local_3b0,0x370);
  }
  param_7[2] = param_7[2] + 0x1e;
  return;
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef str_1001e938
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_1dc
#undef local_19c
#undef local_15c
#undef local_5c
#undef local_58
#undef local_54
#undef local_44
#undef local_40
#undef local_34

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef str_1001e9d8
#define str_1001e9d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacbU)))
#undef str_1001ec13
#define str_1001ec13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd06U)))
#undef str_1001ec1b
#define str_1001ec1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd0eU)))
#undef str_1001ec25
#define str_1001ec25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd18U)))
#define local_2c8 (*(char (*)[256])(frame + 24))
#define local_1c8 (*(byte (*)[128])(frame + 280))
#define local_148 (*(char (*)[128])(frame + 408))
#define local_c8 (*(char (*)[136])(frame + 536))
#define local_40 (*(char * *)(frame + 672))
#define local_38 (*(char * *)(frame + 680))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100145c0
 */

void recovered_100145c0(char *param_1,char *param_2,char *param_3)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;

  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    local_148[0] = '\0';
    local_38 = param_3;
    if (param_1 < param_2 && param_1 != (char *)0x0) {
      local_40 = param_2;
LAB_10014610:
      pcVar6 = local_40;
      uVar3 = strlen(str_1001ec13);
      if ((uVar3 != 0) && (*param_1 != '\0')) {
        do {
          uVar5 = 0;
          while (bVar2 = param_1[uVar5], bVar2 != 0) {
            bVar7 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar7 = bVar2;
            }
            bVar2 = str_1001ec13[uVar5];
            bVar9 = bVar2 | 0x20;
            if (0x19 < (byte)(bVar2 + 0xbf)) {
              bVar9 = bVar2;
            }
            if (bVar7 != bVar9) break;
            uVar5 = uVar5 + 1;
            if (uVar3 == uVar5) goto LAB_100146a0;
          }
          if (uVar3 == uVar5) goto LAB_100146a0;
          pcVar4 = param_1 + 1;
          param_1 = param_1 + 1;
          if (*pcVar4 == '\0') break;
        } while( true );
      }
    }
LAB_100148a9:
    pcVar6 = local_148;
LAB_100148b7:
    pf_varargs_1001df25__8_(local_38,0x80,&DAT_1001e232,(ulonglong)pcVar6);
  }
  return;
LAB_100146a0:
  if (((pcVar6 <= param_1) || (pcVar4 = strchr(param_1,0x3e), pcVar4 == (char *)0x0)) ||
     (pcVar6 <= pcVar4)) goto LAB_100148a9;
  iVar8 = ~(uint)param_1 + (uint)pcVar4;
  if (0xfe < iVar8) {
    iVar8 = 0xff;
  }
  memcpy(local_2c8,param_1 + 1,(long)iVar8);
  local_2c8[iVar8] = '\0';
  recovered_10007e50(local_2c8,str_1001e9d8,local_c8,0x80);
  param_1 = pcVar4 + 1;
  uVar3 = strlen(str_1001ec1b);
  if ((uVar3 != 0) && (*param_1 != '\0')) {
    pcVar6 = param_1;
    do {
      uVar5 = 0;
      while (bVar2 = pcVar6[uVar5], bVar2 != 0) {
        bVar7 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar7 = bVar2;
        }
        bVar2 = str_1001ec1b[uVar5];
        bVar9 = bVar2 | 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar9 = bVar2;
        }
        if (bVar7 != bVar9) break;
        uVar5 = uVar5 + 1;
        if (uVar3 == uVar5) goto LAB_100147b3;
      }
      if (uVar3 == uVar5) goto LAB_100147b3;
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  pcVar6 = (char *)0x0;
LAB_100147b3:
  if (local_c8[0] == '\0') {
    pcVar1 = local_40;
    if (pcVar6 < local_40) {
      pcVar1 = pcVar6;
    }
    iVar8 = (int)pcVar1;
    if (pcVar6 == (char *)0x0) {
      iVar8 = (int)local_40;
    }
    iVar8 = iVar8 + ~(uint)pcVar4;
    if (0x7e < iVar8) {
      iVar8 = 0x7f;
    }
    memcpy(local_1c8,param_1,(long)iVar8);
    local_1c8[iVar8] = 0;
    uVar3 = strlen((char *)local_1c8);
    recovered_10012590(0,local_1c8,uVar3,local_c8,0x80);
  }
  if (local_148[0] == '\0') {
    pf_varargs_1001df25__8_(local_148,0x80,&DAT_1001e232,(ulonglong)local_c8);
  }
  uVar3 = recovered_100142a0(local_2c8,str_1001ec25);
  if ((char)uVar3 != '\0') {
    pcVar6 = local_c8;
    goto LAB_100148b7;
  }
  if (pcVar6 != (char *)0x0) {
    param_1 = pcVar6 + 9;
  }
  if (local_40 <= param_1) goto LAB_100148a9;
  goto LAB_10014610;
}

#undef DAT_1001e232
#undef str_1001e9d8
#undef str_1001ec13
#undef str_1001ec1b
#undef str_1001ec25
#undef local_2c8
#undef local_1c8
#undef local_148
#undef local_c8
#undef local_40
#undef local_38

#undef DAT_1001e23d
#define DAT_1001e23d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x330U)))
#undef DAT_1001e242
#define DAT_1001e242 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x335U)))
#undef DAT_1001e243
#define DAT_1001e243 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x336U)))
#undef DAT_1001e244
#define DAT_1001e244 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x337U)))
#undef DAT_1001e245
#define DAT_1001e245 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x338U)))
#undef DAT_1001e246
#define DAT_1001e246 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x339U)))
#undef DAT_1001e25d
#define DAT_1001e25d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x350U)))
#undef DAT_1001e94f
#define DAT_1001e94f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa42U)))
#undef DAT_1001e950
#define DAT_1001e950 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa43U)))
#undef DAT_1001e95c
#define DAT_1001e95c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa4fU)))
#undef DAT_1001e95d
#define DAT_1001e95d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa50U)))
#undef DAT_1001e95e
#define DAT_1001e95e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa51U)))
#undef DAT_1001e994
#define DAT_1001e994 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa87U)))
#undef DAT_1001eaf1
#define DAT_1001eaf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbe4U)))
#undef DAT_1001eaf2
#define DAT_1001eaf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbe5U)))
#undef DAT_1001eaf3
#define DAT_1001eaf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbe6U)))
#undef DAT_1001eaf4
#define DAT_1001eaf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbe7U)))
#undef DAT_1001eaf5
#define DAT_1001eaf5 (*(char *)(((uintptr_t)pf_module_state + 0xbe8U)))
#undef DAT_1001eaf6
#define DAT_1001eaf6 (*(char *)(((uintptr_t)pf_module_state + 0xbe9U)))
#undef DAT_1001eaf7
#define DAT_1001eaf7 (*(char *)(((uintptr_t)pf_module_state + 0xbeaU)))
#undef DAT_1001eaf8
#define DAT_1001eaf8 (*(char *)(((uintptr_t)pf_module_state + 0xbebU)))
#undef DAT_1001eb0b
#define DAT_1001eb0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbfeU)))
#undef str_1001e938
#define str_1001e938 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2bU)))
#undef str_1001e95f
#define str_1001e95f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa52U)))
#undef str_1001eaf9
#define str_1001eaf9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbecU)))
#undef str_1001eaff
#define str_1001eaff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf2U)))
#undef str_1001eb05
#define str_1001eb05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100148f0
 */

undefined8 recovered_100148f0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  undefined7 extraout_var_04 = 0;
  undefined7 extraout_var_05 = 0;
  undefined7 extraout_var_06 = 0;
  byte bVar5;
  byte bVar6;
  char *pcVar7;

  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    puVar4 = (undefined1 *)(ulong)bVar1;
    cVar2 = DAT_1001eaf5;
    if (bVar1 == 0) {
      pcVar7 = &DAT_1001e242;
LAB_10014a80:
      if (*pcVar7 == '\0') goto LAB_10014d63;
      if (bVar1 != 0) goto LAB_10014a91;
joined_r0x10014b79:
      if (cVar2 == '\0') goto LAB_10014d63;
      if (bVar1 != 0) goto LAB_10014b98;
LAB_10014cbd:
      puVar4 = &DAT_1001e95c;
      cVar2 = DAT_1001e95c;
    }
    else {
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      if (bVar5 == 0x62) {
        bVar5 = param_1[1];
        if (bVar5 == 0) {
          pcVar7 = &DAT_1001e243;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x61) goto LAB_10014a91;
          bVar5 = param_1[2];
          if (bVar5 == 0) {
            pcVar7 = &DAT_1001e244;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x73) goto LAB_10014a91;
            bVar5 = param_1[3];
            if (bVar5 == 0) {
              pcVar7 = &DAT_1001e245;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if ((bVar6 != 0x65) || (param_1[4] != 0)) goto LAB_10014a91;
              pcVar7 = &DAT_1001e246;
            }
          }
        }
        goto LAB_10014a80;
      }
      if (bVar5 == 0x61) {
        bVar5 = param_1[1];
        if (bVar5 == 0) {
          pcVar7 = &DAT_1001eaf1;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x72) goto LAB_10014a91;
          bVar5 = param_1[2];
          if (bVar5 == 0) {
            pcVar7 = &DAT_1001eaf2;
          }
          else {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if (bVar6 != 0x65) goto LAB_10014a91;
            bVar5 = param_1[3];
            if (bVar5 == 0) {
              pcVar7 = &DAT_1001eaf3;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if ((bVar6 != 0x61) || (param_1[4] != 0)) goto LAB_10014a91;
              pcVar7 = &DAT_1001eaf4;
            }
          }
        }
        if (*pcVar7 == '\0') goto LAB_10014d63;
      }
LAB_10014a91:
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      if (bVar5 == 99) {
        bVar5 = param_1[1];
        cVar2 = DAT_1001eaf6;
        if (bVar5 != 0) {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 != 0x6f) goto LAB_10014b98;
          bVar5 = param_1[2];
          cVar2 = DAT_1001eaf7;
          if (bVar5 != 0) {
            bVar6 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar6 = bVar5;
            }
            if ((bVar6 != 0x6c) || (cVar2 = DAT_1001eaf8, param_1[3] != 0)) goto LAB_10014b98;
          }
        }
        goto joined_r0x10014b79;
      }
      if (bVar5 == 0x62) {
        bVar5 = param_1[1];
        if (bVar5 == 0) {
          pcVar7 = &DAT_1001e94f;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if ((bVar6 != 0x72) || (param_1[2] != 0)) goto LAB_10014b98;
          pcVar7 = &DAT_1001e950;
        }
        if (*pcVar7 == '\0') goto LAB_10014d63;
        if (bVar1 == 0) goto joined_r0x10014b79;
      }
LAB_10014b98:
      if ((byte)(bVar1 + 0xbf) < 0x1a) {
        puVar4 = (undefined1 *)(ulong)(bVar1 | 0x20);
      }
      if ((char)puVar4 != 'h') {
        if ((int)puVar4 != 0x65) goto LAB_10014cde;
        bVar5 = param_1[1];
        if (bVar5 == 0) {
          pcVar7 = str_1001eaf9 + 1;
LAB_10014c78:
          if (*pcVar7 == '\0') goto LAB_10014d63;
          if (bVar1 == 0) goto LAB_10014cbd;
        }
        else {
          bVar6 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar6 = bVar5;
          }
          if (bVar6 == 0x6d) {
            bVar5 = param_1[2];
            if (bVar5 == 0) {
              pcVar7 = str_1001eaf9 + 2;
            }
            else {
              bVar6 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar6 = bVar5;
              }
              if (bVar6 != 0x62) goto LAB_10014c85;
              bVar5 = param_1[3];
              if (bVar5 == 0) {
                pcVar7 = str_1001eaf9 + 3;
              }
              else {
                bVar6 = bVar5 | 0x20;
                if (0x19 < (byte)(bVar5 + 0xbf)) {
                  bVar6 = bVar5;
                }
                if (bVar6 != 0x65) goto LAB_10014c85;
                bVar5 = param_1[4];
                if (bVar5 == 0) {
                  pcVar7 = str_1001eaf9 + 4;
                }
                else {
                  bVar6 = bVar5 | 0x20;
                  if (0x19 < (byte)(bVar5 + 0xbf)) {
                    bVar6 = bVar5;
                  }
                  if ((bVar6 != 100) || (param_1[5] != 0)) goto LAB_10014c85;
                  pcVar7 = str_1001eaf9 + 5;
                }
              }
            }
            goto LAB_10014c78;
          }
        }
LAB_10014c85:
        if ((char)puVar4 != 'h') goto LAB_10014cde;
      }
      bVar1 = param_1[1];
      if (bVar1 == 0) {
        puVar4 = &DAT_1001e95d;
        cVar2 = DAT_1001e95d;
      }
      else {
        bVar5 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar5 = bVar1;
        }
        if ((bVar5 != 0x72) || (param_1[2] != 0)) goto LAB_10014cde;
        puVar4 = &DAT_1001e95e;
        cVar2 = DAT_1001e95e;
      }
    }
    if (cVar2 == '\0') goto LAB_10014d63;
  }
LAB_10014cde:
  bVar3 = recovered_10007de0(param_1,&DAT_1001e994);
  puVar4 = (undefined1 *)CONCAT71(extraout_var,bVar3);
  if (!bVar3) {
    bVar3 = recovered_10007de0(param_1,(byte *)str_1001e938);
    puVar4 = (undefined1 *)CONCAT71(extraout_var_00,bVar3);
    if (!bVar3) {
      bVar3 = recovered_10007de0(param_1,&DAT_1001e25d);
      puVar4 = (undefined1 *)CONCAT71(extraout_var_01,bVar3);
      if (!bVar3) {
        bVar3 = recovered_10007de0(param_1,&DAT_1001e23d);
        puVar4 = (undefined1 *)CONCAT71(extraout_var_02,bVar3);
        if (!bVar3) {
          bVar3 = recovered_10007de0(param_1,(byte *)str_1001eaff);
          puVar4 = (undefined1 *)CONCAT71(extraout_var_03,bVar3);
          if (!bVar3) {
            bVar3 = recovered_10007de0(param_1,(byte *)str_1001e95f);
            puVar4 = (undefined1 *)CONCAT71(extraout_var_04,bVar3);
            if (!bVar3) {
              bVar3 = recovered_10007de0(param_1,(byte *)str_1001eb05);
              puVar4 = (undefined1 *)CONCAT71(extraout_var_05,bVar3);
              if (!bVar3) {
                bVar3 = recovered_10007de0(param_1,&DAT_1001eb0b);
                return CONCAT71(extraout_var_06,bVar3);
              }
            }
          }
        }
      }
    }
  }
LAB_10014d63:
  return CONCAT71((int7)((ulong)puVar4 >> 8),1);
}

#undef DAT_1001e23d
#undef DAT_1001e242
#undef DAT_1001e243
#undef DAT_1001e244
#undef DAT_1001e245
#undef DAT_1001e246
#undef DAT_1001e25d
#undef DAT_1001e94f
#undef DAT_1001e950
#undef DAT_1001e95c
#undef DAT_1001e95d
#undef DAT_1001e95e
#undef DAT_1001e994
#undef DAT_1001eaf1
#undef DAT_1001eaf2
#undef DAT_1001eaf3
#undef DAT_1001eaf4
#undef DAT_1001eaf5
#undef DAT_1001eaf6
#undef DAT_1001eaf7
#undef DAT_1001eaf8
#undef DAT_1001eb0b
#undef str_1001e938
#undef str_1001e95f
#undef str_1001eaf9
#undef str_1001eaff
#undef str_1001eb05

#undef str_1001eb0f
#define str_1001eb0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc02U)))
#define local_68 (*(byte (*)[72])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014d90
 */

char * recovered_10014d90(long param_1,char *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  char *pcVar7;
  byte bVar8;

  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (uVar3 = recovered_100148f0((byte *)param_2), (char)uVar3 == '\0')) {
    pf_varargs_1001df25__8_((char *)local_68,0x40,str_1001eb0f,(ulonglong)param_2);
    pcVar7 = (char *)(param_1 + 1);
    uVar4 = strlen((char *)local_68);
    if ((uVar4 != 0) && (*pcVar7 != '\0')) {
      do {
        uVar5 = 0;
        while (bVar2 = pcVar7[uVar5], bVar2 != 0) {
          bVar6 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar6 = bVar2;
          }
          bVar2 = local_68[uVar5];
          bVar8 = bVar2 | 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar8 = bVar2;
          }
          if (bVar6 != bVar8) break;
          uVar5 = uVar5 + 1;
          if (uVar4 == uVar5) goto LAB_10014e6a;
        }
        if (uVar4 == uVar5) {
LAB_10014e6a:
          uVar4 = strlen((char *)local_68);
          return pcVar7 + uVar4;
        }
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
  }
  return (char *)(param_1 + 1);
}

#undef str_1001eb0f
#undef local_68

#define local_d8 (*(byte (*)[128])(frame + 24))
#define local_58 (*(byte (*)[48])(frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014e80
 */

bool recovered_10014e80(char *param_1,char *param_2,byte *param_3,undefined1 *param_4)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;

  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (((param_2 <= param_1) || (*param_3 == 0)) || (*param_1 != '<')) {
    return false;
  }
  iVar7 = (int)param_2 + ~(uint)param_1;
  iVar1 = 0x7f;
  if (iVar7 < 0x7f) {
    iVar1 = iVar7;
  }
  pbVar4 = local_d8;
  memcpy(pbVar4,param_1 + 1,(long)iVar1);
  local_d8[iVar1] = 0;
  local_58[0] = 0;
  for (; uVar3 = (ulong)*pbVar4, uVar3 < 0x30; pbVar4 = pbVar4 + 1) {
    if ((0x100003600U >> (uVar3 & 0x3f) & 1) == 0) {
      if (uVar3 == 0x2f) {
        uVar2 = 1;
        pbVar4 = pbVar4 + 1;
        goto LAB_10014f30;
      }
      break;
    }
  }
  uVar2 = 0;
LAB_10014f30:
  do {
    pbVar5 = pbVar4;
    uVar3 = (ulong)*pbVar5;
    if (0x20 < uVar3) break;
    pbVar4 = pbVar5 + 1;
  } while ((0x100003600U >> (uVar3 & 0x3f) & 1) != 0);
  lVar8 = 0;
  while( true ) {
    bVar9 = (byte)uVar3;
    if ((bVar9 < 0x30) && ((0x800100003601U >> (uVar3 & 0x3f) & 1) != 0)) goto LAB_10014fc3;
    bVar10 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar10 = bVar9;
    }
    local_58[lVar8] = bVar10;
    bVar9 = (pbVar5 + 1)[lVar8];
    if (((ulong)bVar9 < 0x30) && ((0x800100003601U >> ((ulong)bVar9 & 0x3f) & 1) != 0)) break;
    if (lVar8 == 0x26) {
      lVar8 = 0x27;
LAB_10014fc3:
      local_58[lVar8] = 0;
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = uVar2;
      }
      if (local_58[0] != 0) {
        pbVar4 = local_58;
        do {
          pbVar4 = pbVar4 + 1;
          bVar9 = *param_3;
          if (bVar9 == 0) {
            return false;
          }
          bVar10 = local_58[0] | 0x20;
          if (0x19 < (byte)(local_58[0] + 0xbf)) {
            bVar10 = local_58[0];
          }
          bVar6 = bVar9 | 0x20;
          if (0x19 < (byte)(bVar9 + 0xbf)) {
            bVar6 = bVar9;
          }
          if (bVar10 != bVar6) {
            return false;
          }
          param_3 = param_3 + 1;
          local_58[0] = *pbVar4;
        } while (local_58[0] != 0);
      }
      return *param_3 == 0;
    }
    bVar10 = bVar9 | 0x20;
    if (0x19 < (byte)(bVar9 + 0xbf)) {
      bVar10 = bVar9;
    }
    local_58[lVar8 + 1] = bVar10;
    uVar3 = (ulong)pbVar5[lVar8 + 2];
    lVar8 = lVar8 + 2;
  }
  lVar8 = lVar8 + 1;
  goto LAB_10014fc3;
}

#undef local_d8
#undef local_58

#define local_a8 (*(byte (*)[128])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015050
 */

ulong recovered_10015050(long param_1,long param_2,byte *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;

  if (param_3 == (byte *)0x0) {
    return 0;
  }
  uVar2 = strlen((char *)param_3);
  if (param_2 != 0 && param_1 != 0) {
    uVar3 = recovered_1000dfe0((char *)param_1,(char *)param_2,(char *)local_a8,0x80);
    if ((char)uVar3 != '\0') {
      pbVar4 = param_3;
      if (local_a8[0] != 0) {
        pbVar5 = local_a8;
        do {
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar4;
          if (bVar1 == 0) goto LAB_10015124;
          bVar6 = local_a8[0] | 0x20;
          if (0x19 < (byte)(local_a8[0] + 0xbf)) {
            bVar6 = local_a8[0];
          }
          bVar7 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          if (bVar6 != bVar7) goto LAB_10015124;
          pbVar4 = pbVar4 + 1;
          local_a8[0] = *pbVar5;
        } while (local_a8[0] != 0);
      }
      if (*pbVar4 == 0) {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
        goto LAB_10015190;
      }
LAB_10015124:
      if (uVar2 != 0) {
        uVar3 = 0;
        do {
          bVar1 = local_a8[uVar3];
          bVar6 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar6 = bVar1;
          }
          bVar1 = param_3[uVar3];
          bVar7 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          if (bVar6 != bVar7) goto LAB_1001518e;
          uVar3 = uVar3 + 1;
        } while (uVar2 != uVar3);
        if (local_a8[uVar2] < 0x22) {
          uVar2 = 0x300003601 >> (local_a8[uVar2] & 0x3f);
          goto LAB_10015190;
        }
      }
    }
  }
LAB_1001518e:
  uVar2 = 0;
LAB_10015190:
  return uVar2 & 0xffffffffffffff01;
}

#undef local_a8

#undef DAT_1001eb2e
#define DAT_1001eb2e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc21U)))
#undef str_1001e9de
#define str_1001e9de (*(char (*)[1])(((uintptr_t)pf_module_state + 0xad1U)))
#define local_418 (*(undefined1 (*)[1024])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100151b0
 */

undefined8 recovered_100151b0(long param_1,long param_2)

{
  unsigned char frame[1104] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if (param_2 != 0) {
    uVar1 = recovered_1000de10(*(char **)(param_1 + 800),(char *)param_2,local_418);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_10015050((long)local_418,((uintptr_t)pf_module_state + 0xc19U),&DAT_1001eb2e);
      if ((char)uVar2 != '\0') {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
    uVar1 = recovered_1000de10(*(char **)(param_1 + 800),(char *)param_2,local_418);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_10015050((long)local_418,((uintptr_t)pf_module_state + 0xc26U),(byte *)str_1001e9de);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_1001eb2e
#undef str_1001e9de
#undef local_418

#define local_c8 (*(byte (*)[127])(frame + 536))
#define local_49 (*(undefined1 *)(frame + 663))
#define local_48 (*(int * *)(frame + 664))
#define local_40 (*(int * *)(frame + 672))
#define local_34 (*(undefined4 *)(frame + 684))
#define local_2c8 (*(byte (*)[512])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015250
 */

void recovered_10015250(long param_1,int *param_2,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8)

{
  unsigned char frame[768] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;

  if ((param_5 == (char *)0x0) || (*param_5 == '\0')) {
    return;
  }
  local_48 = param_4;
  local_40 = param_3;
  local_34 = param_6;
  uVar2 = strlen(param_5);
  pbVar4 = local_2c8;
  recovered_10012590(param_1,(byte *)param_5,uVar2,(char *)pbVar4,0x200);
joined_r0x100152bb:
  if (local_2c8[0] == 0) {
    return;
  }
  while ((local_2c8[0] < 0x21 && ((0x100003600U >> ((ulong)local_2c8[0] & 0x3f) & 1) != 0))) {
    local_2c8[0] = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = 0;
  do {
    if ((local_2c8[0] < 0x21) && ((0x100003601U >> ((ulong)local_2c8[0] & 0x3f) & 1) != 0)) {
      pbVar4 = pbVar4 + lVar3;
LAB_10015396:
      local_c8[lVar3] = 0;
      if (lVar3 != 0) goto LAB_100153a3;
      goto LAB_100153cc;
    }
    local_c8[lVar3] = local_2c8[0];
    bVar1 = pbVar4[lVar3 + 1];
    if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
      pbVar4 = pbVar4 + lVar3 + 1;
      lVar3 = lVar3 + 1;
      goto LAB_10015396;
    }
    local_c8[lVar3 + 1] = bVar1;
    bVar1 = pbVar4[lVar3 + 2];
    if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
      pbVar4 = pbVar4 + lVar3 + 2;
      lVar3 = lVar3 + 2;
      goto LAB_10015396;
    }
    local_c8[lVar3 + 2] = bVar1;
    bVar1 = pbVar4[lVar3 + 3];
    if (((ulong)bVar1 < 0x21) && ((0x100003601U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
      pbVar4 = pbVar4 + lVar3 + 3;
      lVar3 = lVar3 + 3;
      goto LAB_10015396;
    }
    if (lVar3 == 0x7c) break;
    local_c8[lVar3 + 3] = bVar1;
    local_2c8[0] = pbVar4[lVar3 + 4];
    lVar3 = lVar3 + 4;
  } while( true );
  pbVar4 = pbVar4 + 0x7f;
  local_49 = 0;
LAB_100153a3:
  recovered_10015c50(param_1,param_2,local_40,local_48,(char *)local_c8,local_34,param_7,param_8);
LAB_100153cc:
  local_2c8[0] = *pbVar4;
  goto joined_r0x100152bb;
}

#undef local_c8
#undef local_49
#undef local_48
#undef local_40
#undef local_34
#undef local_2c8

#undef str_1001e271
#define str_1001e271 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1001e280
#define str_1001e280 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1001eae7
#define str_1001eae7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#define local_50 (*(byte * *)(frame + 208))
#define local_44 (*(int *)(frame + 220))
#define local_40 (*(byte * *)(frame + 224))
#define local_31 (*(char *)(frame + 239))
#define local_108 (*(byte (*)[128])(frame + 24))
#define local_88 (*(long *)(frame + 152))
#define local_80 (*(long *)(frame + 160))
#define local_78 (*(byte (*)[40])(frame + 168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015400
 */

byte * recovered_10015400(byte *param_1,byte *param_2,byte *param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;

  pbVar5 = param_1 + 1;
  if (param_2 == (byte *)0x0) {
    return pbVar5;
  }
  if (param_3 == (byte *)0x0 || param_2 <= param_1) {
    return pbVar5;
  }
  bVar10 = *param_3;
  if (bVar10 == 0) {
    return pbVar5;
  }
  local_50 = param_3;
  local_40 = param_2;
  uVar3 = recovered_100148f0(param_3);
  if ((char)uVar3 != '\0') {
    return pbVar5;
  }
  bVar6 = bVar10 | 0x20;
  if (0x19 < (byte)(bVar10 + 0xbf)) {
    bVar6 = bVar10;
  }
  if (bVar6 == 0x74) {
    bVar10 = local_50[1];
    if (bVar10 == 0) {
      pcVar7 = str_1001eae7 + 1;
    }
    else {
      bVar6 = bVar10 | 0x20;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar6 = bVar10;
      }
      if (bVar6 != 0x65) goto LAB_10015847;
      bVar10 = local_50[2];
      if (bVar10 == 0) {
        pcVar7 = str_1001eae7 + 2;
      }
      else {
        bVar6 = bVar10 | 0x20;
        if (0x19 < (byte)(bVar10 + 0xbf)) {
          bVar6 = bVar10;
        }
        if (bVar6 != 0x6d) goto LAB_10015847;
        bVar10 = local_50[3];
        if (bVar10 == 0) {
          pcVar7 = str_1001eae7 + 3;
        }
        else {
          bVar6 = bVar10 | 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar6 = bVar10;
          }
          if (bVar6 != 0x70) goto LAB_10015847;
          bVar10 = local_50[4];
          if (bVar10 == 0) {
            pcVar7 = str_1001eae7 + 4;
          }
          else {
            bVar6 = bVar10 | 0x20;
            if (0x19 < (byte)(bVar10 + 0xbf)) {
              bVar6 = bVar10;
            }
            if (bVar6 != 0x6c) goto LAB_10015847;
            bVar10 = local_50[5];
            if (bVar10 == 0) {
              pcVar7 = str_1001eae7 + 5;
            }
            else {
              bVar6 = bVar10 | 0x20;
              if (0x19 < (byte)(bVar10 + 0xbf)) {
                bVar6 = bVar10;
              }
              if (bVar6 != 0x61) goto LAB_10015847;
              bVar10 = local_50[6];
              if (bVar10 == 0) {
                pcVar7 = str_1001eae7 + 6;
              }
              else {
                bVar6 = bVar10 | 0x20;
                if (0x19 < (byte)(bVar10 + 0xbf)) {
                  bVar6 = bVar10;
                }
                if (bVar6 != 0x74) goto LAB_10015847;
                bVar10 = local_50[7];
                if (bVar10 == 0) {
                  pcVar7 = str_1001eae7 + 7;
                }
                else {
                  bVar6 = bVar10 | 0x20;
                  if (0x19 < (byte)(bVar10 + 0xbf)) {
                    bVar6 = bVar10;
                  }
                  if ((bVar6 != 0x65) || (local_50[8] != 0)) goto LAB_10015847;
                  pcVar7 = str_1001eae7 + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (bVar6 != 0x73) goto LAB_10015847;
    bVar10 = local_50[1];
    if (bVar10 == 0) {
      pcVar7 = str_1001e280 + 1;
LAB_1001573b:
      if (*pcVar7 == '\0') goto LAB_10015c1c;
    }
    else {
      bVar6 = bVar10 | 0x20;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar6 = bVar10;
      }
      if (bVar6 == 99) {
        bVar10 = local_50[2];
        if (bVar10 == 0) {
          pcVar7 = str_1001e280 + 2;
        }
        else {
          bVar6 = bVar10 | 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar6 = bVar10;
          }
          if (bVar6 != 0x72) goto LAB_10015744;
          bVar10 = local_50[3];
          if (bVar10 == 0) {
            pcVar7 = str_1001e280 + 3;
          }
          else {
            bVar6 = bVar10 | 0x20;
            if (0x19 < (byte)(bVar10 + 0xbf)) {
              bVar6 = bVar10;
            }
            if (bVar6 != 0x69) goto LAB_10015744;
            bVar10 = local_50[4];
            if (bVar10 == 0) {
              pcVar7 = str_1001e280 + 4;
            }
            else {
              bVar6 = bVar10 | 0x20;
              if (0x19 < (byte)(bVar10 + 0xbf)) {
                bVar6 = bVar10;
              }
              if (bVar6 != 0x70) goto LAB_10015744;
              bVar10 = local_50[5];
              if (bVar10 == 0) {
                pcVar7 = str_1001e280 + 5;
              }
              else {
                bVar6 = bVar10 | 0x20;
                if (0x19 < (byte)(bVar10 + 0xbf)) {
                  bVar6 = bVar10;
                }
                if ((bVar6 != 0x74) || (local_50[6] != 0)) goto LAB_10015744;
                pcVar7 = str_1001e280 + 6;
              }
            }
          }
        }
        goto LAB_1001573b;
      }
    }
LAB_10015744:
    bVar10 = local_50[1];
    if (bVar10 == 0) {
      pcVar7 = str_1001e271 + 1;
    }
    else {
      bVar6 = bVar10 | 0x20;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar6 = bVar10;
      }
      if (bVar6 != 0x74) goto LAB_10015847;
      bVar10 = local_50[2];
      if (bVar10 == 0) {
        pcVar7 = str_1001e271 + 2;
      }
      else {
        bVar6 = bVar10 | 0x20;
        if (0x19 < (byte)(bVar10 + 0xbf)) {
          bVar6 = bVar10;
        }
        if (bVar6 != 0x79) goto LAB_10015847;
        bVar10 = local_50[3];
        if (bVar10 == 0) {
          pcVar7 = str_1001e271 + 3;
        }
        else {
          bVar6 = bVar10 | 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar6 = bVar10;
          }
          if (bVar6 != 0x6c) goto LAB_10015847;
          bVar10 = local_50[4];
          if (bVar10 == 0) {
            pcVar7 = str_1001e271 + 4;
          }
          else {
            bVar6 = bVar10 | 0x20;
            if (0x19 < (byte)(bVar10 + 0xbf)) {
              bVar6 = bVar10;
            }
            if ((bVar6 != 0x65) || (local_50[5] != 0)) goto LAB_10015847;
            pcVar7 = str_1001e271 + 5;
          }
        }
      }
    }
  }
  if (*pcVar7 == '\0') {
LAB_10015c1c:
    pbVar5 = recovered_10015f30(param_1,local_40,(char *)local_50);
    return pbVar5;
  }
LAB_10015847:
  if (pbVar5 < local_40) {
    local_88 = -(long)local_40;
    local_44 = 1;
    pbVar4 = pbVar5;
    pbVar12 = local_40;
    do {
      if (*pbVar4 == 0) {
        return pbVar5;
      }
      lVar9 = 0;
      pbVar13 = pbVar4;
      while (pbVar4[lVar9] != 0x3c) {
        lVar9 = lVar9 + 1;
        pbVar13 = pbVar13 + 1;
        if ((long)pbVar12 - (long)pbVar4 == lVar9) {
          return pbVar5;
        }
      }
      pbVar1 = pbVar4 + lVar9;
      if (pbVar1 == pbVar12) {
        return pbVar5;
      }
      pbVar12 = (byte *)0x0;
      while (*pbVar13 != 0x3e) {
        pbVar13 = pbVar13 + 1;
        pbVar12 = pbVar12 + -1;
        if (pbVar4 + lVar9 + local_88 == pbVar12) {
          return pbVar5;
        }
      }
      local_31 = '\0';
      local_78[0] = 0;
      local_80 = -(long)pbVar12;
      if ((local_80 < 1) || (*pbVar1 != 0x3c)) {
LAB_10015a12:
        pcVar7 = str_1001e280;
        if (local_78[0] == 0) {
LAB_10015b0b:
          if (*pcVar7 != '\0') goto LAB_10015b10;
        }
        else {
          bVar10 = local_78[0] | 0x20;
          if (0x19 < (byte)(local_78[0] + 0xbf)) {
            bVar10 = local_78[0];
          }
          if (bVar10 == 0x73) {
            pcVar7 = str_1001e280 + 1;
            if (local_78[1] != 0) {
              bVar10 = local_78[1] | 0x20;
              if (0x19 < (byte)(local_78[1] + 0xbf)) {
                bVar10 = local_78[1];
              }
              if (bVar10 != 99) goto LAB_10015b10;
              pcVar7 = str_1001e280 + 2;
              if (local_78[2] != 0) {
                bVar10 = local_78[2] | 0x20;
                if (0x19 < (byte)(local_78[2] + 0xbf)) {
                  bVar10 = local_78[2];
                }
                if (bVar10 != 0x72) goto LAB_10015b10;
                pcVar7 = str_1001e280 + 3;
                if (local_78[3] != 0) {
                  bVar10 = local_78[3] | 0x20;
                  if (0x19 < (byte)(local_78[3] + 0xbf)) {
                    bVar10 = local_78[3];
                  }
                  if (bVar10 != 0x69) goto LAB_10015b10;
                  pcVar7 = str_1001e280 + 4;
                  if (local_78[4] != 0) {
                    bVar10 = local_78[4] | 0x20;
                    if (0x19 < (byte)(local_78[4] + 0xbf)) {
                      bVar10 = local_78[4];
                    }
                    if (bVar10 != 0x70) goto LAB_10015b10;
                    pcVar7 = str_1001e280 + 5;
                    if (local_78[5] != 0) {
                      bVar10 = local_78[5] | 0x20;
                      if (0x19 < (byte)(local_78[5] + 0xbf)) {
                        bVar10 = local_78[5];
                      }
                      if ((bVar10 != 0x74) || (pcVar7 = str_1001e280 + 6, local_78[6] != '\0'))
                      goto LAB_10015b10;
                    }
                  }
                }
              }
            }
            goto LAB_10015b0b;
          }
LAB_10015b10:
          bVar2 = recovered_10007de0(local_78,(byte *)str_1001e271);
          if ((!bVar2) && (bVar2 = recovered_10007de0(local_78,(byte *)str_1001eae7), !bVar2))
          goto LAB_10015b76;
        }
        pbVar12 = local_40;
        pbVar4 = recovered_10015f30(pbVar13,local_40,(char *)local_78);
      }
      else {
        uVar11 = ~(uint)pbVar12;
        if (0x7e < (int)uVar11) {
          uVar11 = 0x7f;
        }
        memcpy(local_108,pbVar4 + lVar9 + 1,(long)(int)uVar11);
        local_108[(int)uVar11] = 0;
        local_78[0] = 0;
        local_31 = '\0';
        for (pbVar12 = local_108; uVar8 = (ulong)*pbVar12, uVar8 < 0x30; pbVar12 = pbVar12 + 1) {
          if ((0x100003600U >> (uVar8 & 0x3f) & 1) == 0) {
            if (uVar8 == 0x2f) {
              local_31 = '\x01';
              pbVar12 = pbVar12 + 1;
              bVar2 = true;
              goto LAB_10015980;
            }
            break;
          }
        }
        bVar2 = false;
LAB_10015980:
        while ((uVar8 = (ulong)*pbVar12, uVar8 < 0x21 && ((0x100003600U >> (uVar8 & 0x3f) & 1) != 0)
               )) {
          pbVar12 = pbVar12 + 1;
        }
        lVar9 = 0;
        while( true ) {
          bVar10 = (byte)uVar8;
          if ((bVar10 < 0x30) && ((0x800100003601U >> (uVar8 & 0x3f) & 1) != 0)) goto LAB_10015a05;
          bVar6 = bVar10 | 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar6 = bVar10;
          }
          local_78[lVar9] = bVar6;
          bVar10 = pbVar12[lVar9 + 1];
          if (((ulong)bVar10 < 0x30) && ((0x800100003601U >> ((ulong)bVar10 & 0x3f) & 1) != 0)) {
            lVar9 = lVar9 + 1;
            goto LAB_10015a05;
          }
          if (lVar9 == 0x26) break;
          bVar6 = bVar10 | 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar6 = bVar10;
          }
          local_78[lVar9 + 1] = bVar6;
          uVar8 = (ulong)pbVar12[lVar9 + 2];
          lVar9 = lVar9 + 2;
        }
        lVar9 = 0x27;
LAB_10015a05:
        local_78[lVar9] = 0;
        if (!bVar2) goto LAB_10015a12;
LAB_10015b76:
        bVar2 = recovered_10014e80((char *)pbVar1,(char *)pbVar13,local_50,&local_31);
        if (bVar2) {
          if (local_31 == '\x01') {
            local_44 = local_44 + -1;
            if (local_44 == 0) {
              return pbVar13 + 1;
            }
          }
          else {
            if (0 < local_80) {
              pbVar12 = pbVar13;
              do {
                uVar8 = (ulong)pbVar12[-1];
                if (0x2f < uVar8) break;
                if ((0x100003600U >> (uVar8 & 0x3f) & 1) == 0) {
                  if (uVar8 == 0x2f) goto LAB_10015bf9;
                  break;
                }
                pbVar12 = pbVar12 + -1;
              } while (pbVar1 < pbVar12);
            }
            local_44 = local_44 + 1;
          }
        }
LAB_10015bf9:
        pbVar4 = pbVar13 + 1;
        pbVar12 = local_40;
      }
    } while (pbVar4 < pbVar12);
  }
  return pbVar5;
}

#undef str_1001e271
#undef str_1001e280
#undef str_1001eae7
#undef local_50
#undef local_44
#undef local_40
#undef local_31
#undef local_108
#undef local_88
#undef local_80
#undef local_78

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#define local_3b8 (*(undefined4 *)(frame + 24))
#define local_3b4 (*(int *)(frame + 28))
#define local_3b0 (*(int *)(frame + 32))
#define local_3ac (*(uint *)(frame + 36))
#define local_3a8 (*(int *)(frame + 40))
#define local_3a4 (*(char (*)[192])(frame + 44))
#define local_2e4 (*(char (*)[640])(frame + 236))
#define local_64 (*(undefined4 *)(frame + 876))
#define local_60 (*(uint *)(frame + 880))
#define local_4c (*(undefined1 *)(frame + 900))
#define local_48 (*(char * *)(frame + 904))
#define local_40 (*(long *)(frame + 912))
#define local_38 (*(undefined4 *)(frame + 920))
#define local_34 (*(int *)(frame + 924))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015c50
 */

void recovered_10015c50(long param_1,int *param_2,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined1 *param_7,uint param_8)

{
  unsigned char frame[1008] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *vararg0;
  uint uVar5;

  if ((param_5 != (char *)0x0 && (param_4 != (int *)0x0 && param_3 != (int *)0x0)) &&
     (*param_5 != '\0')) {
    uVar5 = 1;
    if (1 < (int)param_8) {
      uVar5 = param_8;
    }
    local_34 = *param_2;
    iVar1 = param_2[1];
    local_48 = param_5;
    local_40 = param_1;
    local_38 = param_6;
    uVar2 = recovered_10015e00(param_5,param_8);
    iVar3 = *param_3;
    iVar4 = *param_2;
    if (iVar3 != iVar4) {
      if (iVar1 + local_34 < (int)(uVar2 + iVar3)) {
        *param_3 = iVar4;
        *param_4 = *param_4 + uVar5 * 8 + 4;
        iVar3 = *param_3;
        iVar4 = *param_2;
      }
      if (iVar3 != iVar4) {
        *param_3 = iVar3 + uVar5 * 6;
      }
    }
    memset(&local_3b8,0,0x370);
    local_3b8 = local_38;
    local_60 = param_8;
    local_64 = 0xffffffff;
    local_4c = (undefined1)param_2[3];
    local_3b4 = *param_3;
    local_3b0 = *param_4;
    local_3a8 = uVar5 * 8 + 3;
    local_3ac = uVar2;
    pf_varargs_1001df25__8_(local_3a4,0xc0,&DAT_1001e232,(ulonglong)local_48);
    vararg0 = &DAT_1001f468;
    if (param_7 != (undefined1 *)0x0) {
      vararg0 = param_7;
    }
    pf_varargs_1001df25__8_(local_2e4,0x100,&DAT_1001e232,(ulonglong)vararg0);
    uVar5 = *(uint *)(local_40 + 0x52c40);
    if ((ulong)uVar5 < 0x180) {
      *(uint *)(local_40 + 0x52c40) = uVar5 + 1;
      memcpy((void *)(local_40 + (ulong)uVar5 * 0x370 + 0x440),&local_3b8,0x370);
    }
    *param_3 = *param_3 + uVar2;
  }
  return;
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef local_3b8
#undef local_3b4
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_2e4
#undef local_64
#undef local_60
#undef local_4c
#undef local_48
#undef local_40
#undef local_38
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_30 (*(void * *)(frame + 16))
#define local_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015e00
 */

uint recovered_10015e00(char *param_1,uint param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;

  if (param_1 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    if (*param_1 != '\0') {
      memset(&local_30,0,0x18);
      uVar2 = 1;
      if (1 < (int)param_2) {
        uVar2 = param_2;
      }
      iVar3 = Ram0000000000006800;
      if ((((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
          (uVar1 = Ram0000000000006808, 0xb < uVar1)) &&
         (uVar1 = Ram0000000000006808, 0x17b < uVar1)) {
        uVar1 = UINT_00006978;
        if (((code *)(ulong)uVar1 != (code *)0x0) &&
           (uVar2 = (*(code *)(ulong)uVar1)(param_1,0xffffffff,uVar2,0,&local_30), uVar2 != 0)) {
          uVar2 = 0x7fffffff;
          if (local_24 < 0x7fffffff) {
            uVar2 = local_24;
          }
          if (local_30 == (void *)0x0) {
            return uVar2;
          }
          iVar3 = Ram0000000000006800;
          if (iVar3 != 0x50414d57) {
            return uVar2;
          }
          iVar3 = Ram0000000000006804;
          if (iVar3 == 0) {
            return uVar2;
          }
          uVar1 = Ram0000000000006808;
          if (uVar1 < 0xc) {
            return uVar2;
          }
          uVar1 = Ram0000000000006808;
          if (uVar1 < 0x54) {
            return uVar2;
          }
          uVar1 = UINT_00006850;
          if ((code *)(ulong)uVar1 == (code *)0x0) {
            return uVar2;
          }
          (*(code *)(ulong)uVar1)(local_30);
          return uVar2;
        }
      }
    }
    uVar4 = strlen(param_1);
    iVar3 = (int)uVar4;
  }
  uVar2 = 1;
  if (1 < (int)param_2) {
    uVar2 = param_2;
  }
  return uVar2 * iVar3 * 6;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006978
#undef local_30
#undef local_24

#undef str_1001eb0f
#define str_1001eb0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc02U)))
#define local_68 (*(byte (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10015f30
 */

byte * recovered_10015f30(byte *param_1,byte *param_2,char *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;

  if (((param_3 == (char *)0x0 || param_2 <= param_1) || (*param_3 == '\0')) ||
     (uVar2 = recovered_100148f0((byte *)param_3), (char)uVar2 != '\0')) {
    pbVar8 = param_1 + 1;
  }
  else {
    pf_varargs_1001df25__8_((char *)local_68,0x40,str_1001eb0f,(ulonglong)param_3);
    pbVar8 = param_1 + 1;
    uVar3 = strlen((char *)local_68);
    if (param_1 + uVar3 + 1 <= param_2 && (pbVar8 < param_2 && uVar3 != 0)) {
      pbVar9 = pbVar8;
      do {
        if (*pbVar9 == 0) {
          return pbVar8;
        }
        uVar4 = 0;
        while ((pbVar9 + uVar4 < param_2 && (bVar1 = pbVar9[uVar4], bVar1 != 0))) {
          bVar6 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar6 = bVar1;
          }
          bVar1 = local_68[uVar4];
          bVar7 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar7 = bVar1;
          }
          if (bVar6 != bVar7) break;
          uVar4 = uVar4 + 1;
          if (uVar3 == uVar4) goto LAB_1001604c;
        }
        if (uVar3 == uVar4) {
LAB_1001604c:
          uVar3 = strlen((char *)local_68);
          pbVar8 = pbVar9 + uVar3;
          break;
        }
        pbVar5 = pbVar9 + uVar3 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar5 <= param_2);
    }
  }
  return pbVar8;
}

#undef str_1001eb0f
#undef local_68

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#define local_3b8 (*(int *)(frame + 24))
#define local_3b4 (*(int *)(frame + 28))
#define local_3b0 (*(int *)(frame + 32))
#define local_3ac (*(uint *)(frame + 36))
#define local_3a8 (*(int *)(frame + 40))
#define local_3a4 (*(char (*)[192])(frame + 44))
#define local_2e4 (*(char (*)[640])(frame + 236))
#define local_64 (*(undefined4 *)(frame + 876))
#define local_60 (*(int *)(frame + 880))
#define local_5c (*(int *)(frame + 884))
#define local_4c (*(undefined1 *)(frame + 900))
#define local_48 (*(undefined1 * *)(frame + 904))
#define local_40 (*(long *)(frame + 912))
#define local_34 (*(int *)(frame + 924))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016060
 */

void recovered_10016060(long param_1,int param_2,undefined1 *param_3,char *param_4,int param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[1008] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *vararg0;

  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    local_48 = param_3;
    local_40 = param_1;
    memset(&local_3b8,0,0x370);
    local_64 = 0xffffffff;
    local_3b8 = param_2;
    local_60 = param_5;
    local_5c = param_6;
    local_34 = param_2;
    local_3ac = recovered_10015e00(param_4,param_5);
    iVar3 = local_34;
    lVar2 = local_40;
    iVar5 = 1;
    if (1 < param_5) {
      iVar5 = param_5;
    }
    local_3a8 = iVar5 * 8 + 3;
    local_3b4 = *param_7;
    if (param_6 == 2) {
      iVar4 = param_7[1] - local_3ac;
      iVar5 = 0;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      local_3b4 = local_3b4 + iVar5;
    }
    else if (param_6 == 1) {
      iVar4 = (int)(param_7[1] - local_3ac) / 2;
      iVar5 = 0;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      local_3b4 = local_3b4 + iVar5;
    }
    local_3b0 = param_7[2];
    local_4c = (undefined1)param_7[3];
    pf_varargs_1001df25__8_(local_3a4,0xc0,&DAT_1001e232,(ulonglong)param_4);
    vararg0 = &DAT_1001f468;
    if (local_48 != (undefined1 *)0x0) {
      vararg0 = local_48;
    }
    pf_varargs_1001df25__8_(local_2e4,0x100,&DAT_1001e232,(ulonglong)vararg0);
    uVar1 = *(uint *)(lVar2 + 0x52c40);
    if ((ulong)uVar1 < 0x180) {
      *(uint *)(lVar2 + 0x52c40) = uVar1 + 1;
      memcpy((void *)(lVar2 + (ulong)uVar1 * 0x370 + 0x440),&local_3b8,0x370);
    }
    param_7[2] = (uint)(iVar3 == 1) * 4 + local_3a8 + param_7[2] + 4;
    *param_4 = '\0';
  }
  return;
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef local_3b8
#undef local_3b4
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_2e4
#undef local_64
#undef local_60
#undef local_5c
#undef local_4c
#undef local_48
#undef local_40
#undef local_34

#undef str_1001ebd2
#define str_1001ebd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016210
 */

undefined8 recovered_10016210(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  bVar3 = *param_1;
  if (bVar3 == 0) goto LAB_1001636a;
  bVar2 = bVar3 | 0x20;
  if (0x19 < (byte)(bVar3 + 0xbf)) {
    bVar2 = bVar3;
  }
  if (bVar2 == 0x61) {
    bVar3 = param_1[1];
    if (bVar3 == 0) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x62) || (bVar3 = param_1[2], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x6f) || (bVar3 = param_1[3], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x75) || (bVar3 = param_1[4], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x74) || (bVar3 = param_1[5], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
  }
  else {
    if ((bVar2 != 100) || (bVar3 = param_1[1], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x61) || (bVar3 = param_1[2], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x74) || (bVar3 = param_1[3], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if ((bVar2 != 0x61) || (bVar3 = param_1[4], bVar3 == 0)) goto LAB_1001636a;
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
  }
  if (bVar2 == 0x3a) {
    return 1;
  }
LAB_1001636a:
  bVar3 = 0x6a;
  lVar1 = 0;
  while( true ) {
    bVar2 = param_1[lVar1];
    if (bVar2 == 0) {
      return 0;
    }
    bVar4 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar4 = bVar2;
    }
    bVar2 = bVar3 | 0x20;
    if (0x19 < (byte)(bVar3 + 0xbf)) {
      bVar2 = bVar3;
    }
    if (bVar4 != bVar2) break;
    bVar3 = str_1001ebd2[lVar1 + 1];
    lVar1 = lVar1 + 1;
    if (lVar1 == 0xb) {
      return 1;
    }
  }
  return 0;
}

#undef str_1001ebd2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100163e0
 */

bool recovered_100163e0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;

  if (param_1 != 0) {
    uVar2 = 0;
    while ((0x3f < (ulong)*(byte *)(param_1 + uVar2) ||
           ((0x8000000800000001U >> ((ulong)*(byte *)(param_1 + uVar2) & 0x3f) & 1) == 0))) {
      uVar2 = uVar2 + 1;
    }
    if (3 < uVar2) {
      bVar1 = *(byte *)(param_1 + -4 + uVar2);
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      if (bVar3 == 0x2e) {
        bVar1 = *(byte *)(param_1 + -3 + uVar2);
        bVar3 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar3 = bVar1;
        }
        if (bVar3 == 0x70) {
          bVar1 = *(byte *)(param_1 + -2 + uVar2);
          bVar3 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar3 = bVar1;
          }
          if (bVar3 == 0x6e) {
            bVar1 = *(byte *)(param_1 + -1 + uVar2);
            bVar3 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar3 = bVar1;
            }
            return bVar3 == 0x67;
          }
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
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001ea31
#define DAT_1001ea31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb24U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006894
#define UINT_00006894 (*(uint *)(0x6894U))
#undef str_1001ec2e
#define str_1001ec2e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd21U)))
#undef str_1001eee3
#define str_1001eee3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfd6U)))
#undef str_1001eef4
#define str_1001eef4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfe7U)))
#undef str_1001f01b
#define str_1001f01b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110eU)))
#undef str_1001f033
#define str_1001f033 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1126U)))
#define local_1dc (*(undefined1 (*)[129])(frame + 20))
#define local_15b (*(byte (*)[195])(frame + 149))
#define local_98 (*(char (*)[104])(frame + 344))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100164a0
 */

void recovered_100164a0(long param_1,long param_2,byte *param_3,char *param_4)

{
  unsigned char frame[528] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char *vararg0;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte *vararg0_00;

  if (param_3 == (byte *)0x0) {
    return;
  }
  bVar1 = *param_3;
  if (bVar1 == 0) {
    return;
  }
  bVar3 = bVar1 | 0x20;
  if (0x19 < (byte)(bVar1 + 0xbf)) {
    bVar3 = bVar1;
  }
  if (bVar3 != 0x68) {
    return;
  }
  bVar1 = param_3[1];
  if (bVar1 == 0) {
code_r0x10016639:
    bVar1 = param_3[1];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x74) {
      return;
    }
    bVar1 = param_3[2];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x74) {
      return;
    }
    bVar1 = param_3[3];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x70) {
      return;
    }
    bVar1 = param_3[4];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x73) {
      return;
    }
    bVar1 = param_3[5];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x3a) {
      return;
    }
    bVar1 = param_3[6];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x2f) {
      return;
    }
    bVar1 = param_3[7];
    if (bVar1 == 0) {
      return;
    }
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x2f) {
      return;
    }
  }
  else {
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if ((bVar3 != 0x74) || (bVar1 = param_3[2], bVar1 == 0)) goto code_r0x10016639;
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if ((bVar3 != 0x74) || (bVar1 = param_3[3], bVar1 == 0)) goto code_r0x10016639;
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if ((bVar3 != 0x70) || (bVar1 = param_3[4], bVar1 == 0)) goto code_r0x10016639;
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if ((bVar3 != 0x3a) || (bVar1 = param_3[5], bVar1 == 0)) goto code_r0x10016639;
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if ((bVar3 != 0x2f) || (bVar1 = param_3[6], bVar1 == 0)) goto code_r0x10016639;
    bVar3 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar3 = bVar1;
    }
    if (bVar3 != 0x2f) goto code_r0x10016639;
  }
  recovered_100023c0(param_1);
  if (*(char *)(param_1 + 0x205e34) == '\x01') {
    vararg0 = str_1001ec2e;
  }
  else {
    memset((void *)(param_1 + 0x205d40),0,0x4b0);
    *(long *)(param_1 + 0x205d40) = param_1;
    memcpy((void *)(param_1 + 0x205d48),(void *)(param_1 + 0x205c54),0xec);
    *(undefined1 *)(param_1 + 0x205e34) = 1;
    if ((ulong)*(uint *)(param_1 + 0x205c38) != 0) {
      lVar6 = param_1 + -0x4fce8;
      uVar5 = 0;
      do {
        lVar6 = lVar6 + 0x555e0;
        if (lVar6 == param_2) goto LAB_100167cd;
        uVar5 = uVar5 + 1;
      } while (*(uint *)(param_1 + 0x205c38) != uVar5);
    }
    uVar5 = (ulong)*(uint *)(param_1 + 0x205c3c);
LAB_100167cd:
    *(int *)(param_1 + 0x205e3c) = (int)uVar5;
    pf_varargs_1001df25__8_((char *)(param_1 + 0x205e50),0x100,&DAT_1001e232,(ulonglong)param_3);
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      pf_varargs_1001df25__8_((char *)(param_1 + 0x206110),0x60,&DAT_1001e232,(ulonglong)param_4);
    }
    memset(local_1dc,0,0x144);
    local_98[0] = '\0';
    uVar5 = recovered_10009dd0(param_3,local_1dc,local_98,0x60);
    pbVar7 = local_15b;
    if ((char)uVar5 == '\0') {
      pbVar7 = param_3;
    }
    vararg0_00 = (byte *)(param_1 + 0x205f50);
    recovered_10017260((char *)pbVar7,vararg0_00,0x80);
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x97 < uVar4))
    {
      uVar4 = UINT_00006894;
      if ((code *)(ulong)uVar4 == (code *)0x0) goto LAB_10016938;
      uVar4 = (*(code *)(ulong)uVar4)(recovered_100174e0,(void *)(param_1 + 0x205d40),str_1001eee3);
      *(uint *)(param_1 + 0x205e38) = uVar4;
      if (uVar4 != 0) {
        if (*(char *)(param_1 + 0x205f50) == '\0') {
          vararg0_00 = &DAT_1001ea31;
        }
        uVar4 = (uint)(*(long *)(param_1 + 0x205e40) + 0x3ffU >> 10);
        if (*(long *)(param_1 + 0x205e48) == 0) {
          pf_varargs_1001df25__8__4_
                    ((char *)(param_2 + 0x141),0xc0,str_1001f033,(ulonglong)vararg0_00,uVar4);
        }
        else {
          pf_varargs_1001df25__8__4__4_
                    ((char *)(param_2 + 0x141),0xc0,str_1001f01b,(ulonglong)vararg0_00,uVar4,
                     (uint)(*(long *)(param_1 + 0x205e48) + 0x3ffU >> 10));
        }
        goto LAB_10016970;
      }
    }
    else {
LAB_10016938:
      *(undefined4 *)(param_1 + 0x205e38) = 0;
    }
    *(undefined1 *)(param_1 + 0x205e34) = 0;
    vararg0 = str_1001eef4;
  }
  pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,(ulonglong)vararg0);
LAB_10016970:
  *(undefined1 *)(param_1 + 0x57ee) = 1;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001ea31
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006894
#undef str_1001ec2e
#undef str_1001eee3
#undef str_1001eef4
#undef str_1001f01b
#undef str_1001f033
#undef local_1dc
#undef local_15b
#undef local_98

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001e435
#define DAT_1001e435 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x528U)))
#undef str_1001f0e0
#define str_1001f0e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d3U)))
#define local_138 (*(char (*)[264])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100169b0
 */

void recovered_100169b0(long param_1,long param_2,char *param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *vararg0;

  if (param_3 != (char *)0x0) {
    vararg0 = param_3;
    pcVar2 = param_3;
    do {
      while( true ) {
        pcVar3 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar3;
        if ((cVar1 != '/') && (cVar1 != '\\')) break;
        vararg0 = pcVar3;
      }
    } while (cVar1 != '\0');
    uVar4 = recovered_100028e0(param_2);
    if ((char)uVar4 != '\0') {
      pf_varargs_1001df25__8_(local_138,0x100,&DAT_1001e435,(ulonglong)param_3);
      pf_varargs_1001df25__8__8__8__8_
                (*(char **)(param_2 + 0x310),0x50000,str_1001f0e0,(ulonglong)vararg0,
                 (ulonglong)vararg0,(ulonglong)local_138,(ulonglong)vararg0);
      pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x122eU));
      recovered_10002b10(param_1,param_2);
      recovered_100042b0(param_1,param_2);
    }
  }
  return;
}

#undef DAT_1001e232
#undef DAT_1001e435
#undef str_1001f0e0
#undef local_138

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016aa0
 */

void recovered_10016aa0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (*(char *)(param_1 + 0x555dc) != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 == 0) {
    return;
  }
  bVar2 = bVar1 | 0x20;
  if (0x19 < (byte)(bVar1 + 0xbf)) {
    bVar2 = bVar1;
  }
  if ((bVar2 == 0x61) && (bVar1 = *(byte *)(param_1 + 2), bVar1 != 0)) {
    bVar2 = bVar1 | 0x20;
    if (0x19 < (byte)(bVar1 + 0xbf)) {
      bVar2 = bVar1;
    }
    if ((bVar2 == 0x62) && (bVar1 = *(byte *)(param_1 + 3), bVar1 != 0)) {
      bVar2 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar2 = bVar1;
      }
      if ((bVar2 == 0x6f) && (bVar1 = *(byte *)(param_1 + 4), bVar1 != 0)) {
        bVar2 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar2 = bVar1;
        }
        if ((bVar2 == 0x75) && (bVar1 = *(byte *)(param_1 + 5), bVar1 != 0)) {
          bVar2 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar2 = bVar1;
          }
          if ((bVar2 == 0x74) && (bVar1 = *(byte *)(param_1 + 6), bVar1 != 0)) {
            bVar2 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar2 = bVar1;
            }
            if (bVar2 == 0x3a) {
              return;
            }
          }
        }
      }
    }
  }
  uVar4 = *(uint *)(param_1 + 0x554d4);
  uVar5 = 0;
  if (uVar4 != 0) {
    if (*(uint *)(param_1 + 0x554d8) < uVar4) {
      iVar3 = strcmp((char *)(param_1 + (ulong)*(uint *)(param_1 + 0x554d8) * 0x100 +
                                         0x544d4),(char *)(param_1 + 1));
      if (iVar3 == 0) {
        return;
      }
      uVar4 = *(uint *)(param_1 + 0x554d4);
      if (uVar4 == 0) goto LAB_10016db4;
    }
    uVar6 = *(int *)(param_1 + 0x554d8) + 1;
    uVar5 = uVar4;
    if (uVar6 < uVar4) {
      *(uint *)(param_1 + 0x554d4) = uVar6;
      uVar5 = uVar6;
    }
    if (0xf < uVar5) {
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x544d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x545d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x545d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x546d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x546d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x547d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x547d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x548d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x548d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x549d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x549d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x54ad4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x54ad4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x54bd4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x54bd4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x54cd4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x54cd4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x54dd4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x54dd4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x54ed4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x54ed4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x54fd4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x54fd4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x550d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x550d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x551d4));
      pf_varargs_1001df25__8_
                ((char *)(param_1 + 0x551d4),0x100,&DAT_1001e232,(ulonglong)(param_1 + 0x552d4));
      pf_varargs_1001df25__8_((char *)(param_1 + 0x552d4),0x100,&DAT_1001e232,param_1 + 0x553d4);
      *(undefined4 *)(param_1 + 0x554d4) = 0xf;
      uVar5 = 0xf;
    }
  }
LAB_10016db4:
  *(uint *)(param_1 + 0x554d8) = uVar5;
  pf_varargs_1001df25__8_
            ((char *)((ulong)uVar5 * 0x100 + param_1 + 0x544d4),0x100,&DAT_1001e232,
             (ulonglong)(param_1 + 1));
  *(int *)(param_1 + 0x554d4) = *(int *)(param_1 + 0x554d4) + 1;
  return;
}

#undef DAT_1001e232

#undef str_1001f156
#define str_1001f156 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1249U)))
#undef str_1001f1a3
#define str_1001f1a3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1296U)))
#undef str_1001f1a9
#define str_1001f1a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x129cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016e00
 */

void recovered_10016e00(long param_1,long param_2,char *param_3,char *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  char *vararg0;
  char *vararg2;

  uVar1 = recovered_100028e0(param_2);
  if ((char)uVar1 == '\0') {
    return;
  }
  vararg0 = str_1001f1a3;
  if (param_3 != (char *)0x0) {
    vararg0 = param_3;
  }
  vararg2 = str_1001f1a9;
  if (param_4 != (char *)0x0) {
    vararg2 = param_4;
  }
  pf_varargs_1001df25__8__8__8_
            (*(char **)(param_2 + 0x310),0x50000,str_1001f156,(ulonglong)vararg0,(ulonglong)vararg0,
             (ulonglong)vararg2);
  recovered_10002b10(param_1,param_2);
  recovered_100042b0(param_1,param_2);
  return;
}

#undef str_1001f156
#undef str_1001f1a3
#undef str_1001f1a9

#undef DAT_100201f0
#define DAT_100201f0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef str_1001e9f3
#define str_1001e9f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
#undef str_1001f1c7
#define str_1001f1c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12baU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016e90
 */

void recovered_10016e90(ulong param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  int *piVar4;

  if ((*(char *)(param_2 + 0x331) == '\x01') && (*(char *)(param_2 + 0x340) != '\0')) {
    recovered_10018ea0(param_1,param_2,(char *)(param_2 + 0x340),0x4800000000,
                       CONCAT44(DAT_100201f4 + -0x5e,DAT_100201f0),1,1,(byte *)str_1001f1c7);
  }
  uVar1 = *(uint *)(param_2 + 0x52c40);
  if (uVar1 != 0) {
    piVar4 = (int *)(param_2 + 0x440);
    uVar3 = 0;
    do {
      if (*piVar4 == 3) {
        pcVar2 = (char *)(piVar4 + 5);
        if ((char)piVar4[5] == '\0') {
          pcVar2 = str_1001e9f3;
        }
        recovered_10018ea0(param_1,param_2,(char *)(piVar4 + 0x35),*(undefined8 *)(piVar4 + 1),
                           *(undefined8 *)(piVar4 + 3),0,(char)piVar4[0xdb],(byte *)pcVar2);
        uVar1 = *(uint *)(param_2 + 0x52c40);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 0xdc;
    } while (uVar3 < uVar1);
  }
  return;
}

#undef DAT_100201f0
#undef DAT_100201f4
#undef str_1001e9f3
#undef str_1001f1c7

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10016f90
 */

bool recovered_10016f90(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  byte bVar3;

  if (param_1 != 0) {
    uVar2 = 0;
    while ((0x3f < (ulong)*(byte *)(param_1 + uVar2) ||
           ((0x8000000800000001U >> ((ulong)*(byte *)(param_1 + uVar2) & 0x3f) & 1) == 0))) {
      uVar2 = uVar2 + 1;
    }
    if (3 < uVar2) {
      bVar1 = *(byte *)(param_1 + -4 + uVar2);
      bVar3 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar3 = bVar1;
      }
      if (bVar3 == 0x2e) {
        bVar1 = *(byte *)(param_1 + -3 + uVar2);
        bVar3 = bVar1 | 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar3 = bVar1;
        }
        if (bVar3 == 0x70) {
          bVar1 = *(byte *)(param_1 + -2 + uVar2);
          bVar3 = bVar1 | 0x20;
          if (0x19 < (byte)(bVar1 + 0xbf)) {
            bVar3 = bVar1;
          }
          if (bVar3 == 0x6e) {
            bVar1 = *(byte *)(param_1 + -1 + uVar2);
            bVar3 = bVar1 | 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar3 = bVar1;
            }
            return bVar3 == 0x67;
          }
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
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068c8
#define UINT_000068c8 (*(uint *)(0x68c8U))
#define local_2c (*(uint *)(frame + 20))
#define local_28 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017050
 */

undefined8 recovered_10017050(long param_1,undefined8 param_2,char *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong n;

  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    uVar3 = recovered_100028e0(param_1);
    if ((char)uVar3 != '\0') {
      memset(&local_2c,0,0xc);
      iVar1 = Ram0000000000006800;
      if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
          (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xcb < uVar2)
         ) {
        uVar2 = UINT_000068c8;
        if ((code *)(ulong)uVar2 == (code *)0x0) {
          return 0;
        }
        uVar2 = (*(code *)(ulong)uVar2)((int)param_2,param_3,&local_2c);
      }
      else {
        iVar1 = Ram0000000000006800;
        if (iVar1 != 0x50414d57) {
          return 0;
        }
        iVar1 = Ram0000000000006804;
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = Ram0000000000006808;
        if (uVar2 < 0xc) {
          return 0;
        }
        uVar2 = Ram0000000000006808;
        if (uVar2 < 0x38) {
          return 0;
        }
        uVar2 = UINT_00006834;
        if ((code *)(ulong)uVar2 == (code *)0x0) {
          return 0;
        }
        uVar2 = (*(code *)(ulong)uVar2)(param_3,&local_2c);
      }
      if (local_2c != 0 && uVar2 != 0) {
        n = 0x4ffff;
        if (local_28 < 0x4ffff) {
          n = (ulong)local_28;
        }
        memcpy(*(void **)(param_1 + 0x310),(void *)(ulong)local_2c,n);
        *(undefined1 *)(*(long *)(param_1 + 0x310) + n) = 0;
        uVar3 = CONCAT71((uint7)((ulong)param_2 >> 8) & 0xffffff,1);
        if ((uint)n == local_28) {
          return uVar3;
        }
        pf_varargs_1001df25__8_((char *)(param_1 + 0x141),0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x13e6U));
        return uVar3;
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068c8
#undef local_2c
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100171b0
 */

bool recovered_100171b0(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;

  uVar2 = strlen(param_1);
  if ((param_2 == (byte *)0x0) ||
     (uVar3 = strlen((char *)param_2), param_1 == (char *)0x0 || uVar2 < uVar3)) {
    return false;
  }
  bVar5 = param_1[uVar2 - uVar3];
  if (bVar5 != 0) {
    pbVar4 = (byte *)(param_1 + (uVar2 - uVar3));
    do {
      pbVar4 = pbVar4 + 1;
      bVar1 = *param_2;
      if (bVar1 == 0) {
        return false;
      }
      bVar6 = bVar5 | 0x20;
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        bVar6 = bVar5;
      }
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      if (bVar6 != bVar5) {
        return false;
      }
      param_2 = param_2 + 1;
      bVar5 = *pbVar4;
    } while (bVar5 != 0);
  }
  return *param_2 == 0;
}


#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef str_1001ef18
#define str_1001ef18 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x100bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017260
 */

void recovered_10017260(char *param_1,byte *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;

  pcVar8 = param_1;
  if (param_1 == (char *)0x0) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    *param_2 = 0;
    pcVar13 = &DAT_1001f468;
  }
  else {
    do {
      do {
        pcVar13 = param_1;
        pcVar6 = pcVar8 + 1;
        cVar2 = *pcVar8;
        param_1 = pcVar6;
        pcVar8 = pcVar6;
      } while (cVar2 == '/');
    } while ((cVar2 == '\\') || (param_1 = pcVar13, cVar2 != '\0'));
    if (param_2 == (byte *)0x0) {
      return;
    }
    *param_2 = 0;
    if (pcVar13 == (char *)0x0) {
      pcVar8 = str_1001ef18;
      goto LAB_100172d5;
    }
  }
  pcVar8 = str_1001ef18;
  if (*pcVar13 != '\0') {
    pcVar8 = pcVar13;
  }
LAB_100172d5:
  pf_varargs_1001df25__8_((char *)param_2,param_3,&DAT_1001e232,(ulonglong)pcVar8);
  pbVar7 = param_2;
  do {
    bVar3 = *pbVar7;
    switch((uintptr_t)(bVar3)) {
    case 0x23:
    case 0x3f:
      goto switchD_10017318_caseD_23;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
      break;
    case 0x2f:
    case 0x3a:
switchD_10017318_caseD_2f:
      *pbVar7 = 0x5f;
      break;
    default:
      if (bVar3 == 0x5c) goto switchD_10017318_caseD_2f;
      if (bVar3 == 0) goto LAB_1001732e;
    }
    pbVar7 = pbVar7 + 1;
  } while( true );
switchD_10017318_caseD_23:
  *pbVar7 = 0;
LAB_1001732e:
  pbVar7 = param_2;
  pbVar9 = param_2;
LAB_10017350:
  do {
    bVar3 = *pbVar9;
    if (bVar3 == 0x25) {
      bVar4 = pbVar9[1];
      iVar10 = (int)(char)bVar4;
      if (iVar10 != 0) {
        bVar5 = pbVar9[2];
        iVar12 = (int)(char)bVar5;
        if (iVar12 != 0) {
          if ((byte)(bVar4 - 0x30U) < 10) {
            iVar11 = iVar10 + -0x30;
          }
          else if ((byte)(bVar4 + 0x9f) < 6) {
            iVar11 = iVar10 + -0x57;
          }
          else {
            iVar11 = -1;
            if ((byte)(bVar4 + 0xbf) < 6) {
              iVar11 = iVar10 + -0x37;
            }
          }
          if ((byte)(bVar5 - 0x30U) < 10) {
            iVar10 = iVar12 + -0x30;
          }
          else if ((byte)(bVar5 + 0x9f) < 6) {
            iVar10 = iVar12 + -0x57;
          }
          else {
            iVar10 = -1;
            if ((byte)(bVar5 + 0xbf) < 6) {
              iVar10 = iVar12 + -0x37;
            }
          }
          if ((-1 < iVar11) && (-1 < iVar10)) {
            *pbVar7 = (byte)iVar10 | (byte)(iVar11 << 4);
            pbVar9 = pbVar9 + 3;
            pbVar7 = pbVar7 + 1;
            goto LAB_10017350;
          }
        }
      }
    }
    else if (bVar3 == 0) {
      *pbVar7 = 0;
      pbVar7 = param_2;
      do {
        uVar1 = *pbVar7 - 0x2f;
        if ((uVar1 < 0x2e) && ((0x200000000801U >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
          *pbVar7 = 0x5f;
        }
        else if (*pbVar7 == 0) {
          if (*param_2 == 0) {
            pf_varargs_1001df25__8_((char *)param_2,param_3,&DAT_1001e232,((uintptr_t)pf_module_state + 0x100bU));
            return;
          }
          return;
        }
        pbVar7 = pbVar7 + 1;
      } while( true );
    }
    *pbVar7 = bVar3;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
  } while( true );
}

#undef DAT_1001e232
#undef DAT_1001f468
#undef str_1001ef18

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef str_1001e3dc
#define str_1001e3dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_1001e5ca
#define str_1001e5ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bdU)))
#undef str_1001ecbd
#define str_1001ecbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_1001ef25
#define str_1001ef25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1018U)))
#undef str_1001ef35
#define str_1001ef35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1028U)))
#undef str_1001ef54
#define str_1001ef54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1047U)))
#undef str_1001efbd
#define str_1001efbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10b0U)))
#undef str_1001efd0
#define str_1001efd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10c3U)))
#undef str_1001efdc
#define str_1001efdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cfU)))
#define local_80 (*(code * (*)[2])(frame + 2704))
#define local_70 (*(long * *)(frame + 2720))
#define local_68 (*(ulong *)(frame + 2728))
#define local_60 (*(long * *)(frame + 2736))
#define local_58 (*(long * *)(frame + 2744))
#define local_4e (*(char (*)[6])(frame + 2754))
#define local_48 (*(ulong *)(frame + 2760))
#define local_40 (*(byte * *)(frame + 2768))
#define local_34 (*(uint *)(frame + 2780))
#define local_af8 (*(char (*)[1536])(frame + 24))
#define local_4f8 (*(char (*)[524])(frame + 1560))
#define local_2ec (*(char *)(frame + 2084))
#define local_2eb (*(byte (*)[128])(frame + 2085))
#define local_26b (*(char (*)[193])(frame + 2213))
#define local_1aa (*(ushort *)(frame + 2406))
#define local_1a8 (*(ulong (*)[20])(frame + 2408))
#define local_108 (*(char (*)[136])(frame + 2568))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100174e0
 */

undefined1 recovered_100174e0(long *param_1)

{
  unsigned char frame[2864] __attribute__((aligned(16))) = {0};

  long *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulonglong vararg5;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  char *format;
  char cVar10;
  byte *ptr;
  char *vararg0;

  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  local_108[0] = '\0';
  local_34 = 0;
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  vararg0 = local_108;
  uVar5 = recovered_10009dd0((byte *)(param_1 + 0x22),&local_2ec,vararg0,0x80);
  if ((char)uVar5 != '\0') {
    plVar1 = param_1 + 1;
    uVar5 = recovered_1000a1a0((char *)plVar1,local_108,0x80);
    if ((char)uVar5 != '\0') {
      uVar6 = recovered_1000a500(local_2eb,&local_34);
      if ((((char)uVar6 != '\0') ||
          (uVar6 = recovered_1000a6b0((long)plVar1,local_2eb,&local_34,local_108,0x80),
          (char)uVar6 != '\0')) &&
         (uVar5 = recovered_1000ab90((long)plVar1,local_34,local_4e,local_108,0x80),
         (char)uVar5 != '\0')) {
        memset(local_80,0,0x20);
        local_80[0] = (code *)recovered_10017a10;
        iVar2 = Ram0000000000006800;
        local_70 = param_1;
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
           ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0x4f < uVar4)
            ))) {
          uVar4 = UINT_0000684c;
          if (((code *)(ulong)uVar4 != (code *)0x0) &&
             (local_40 = (*(code *)(ulong)uVar4)(0x2001001), local_40 != (byte *)0x0)) {
            vararg5 = FUN_1001df8b();
            pf_varargs_1001df25__4__8__8__8__8__8_
                      (local_4f8,0x200,str_1001e5ca,1000000,((uintptr_t)pf_module_state + 0x747U),((uintptr_t)pf_module_state + 0x73fU),((uintptr_t)pf_module_state + 0x743U),
                       ((uintptr_t)pf_module_state + 0x743U),vararg5);
            ptr = local_40;
            if (local_2ec == '\x01') {
              uVar5 = recovered_1000afb0(0,(long)plVar1,local_34,local_1aa,local_4e,local_2eb,
                                         local_26b,local_4f8,local_40,0x2001001,&local_48,local_108,
                                         0x80,recovered_10017a30,local_80);
              cVar3 = (char)uVar5;
            }
            else {
              pf_varargs_1001df25__8__8__8_
                        (local_af8,0x600,str_1001ef54,(ulonglong)local_26b,(ulonglong)local_2eb,
                         (ulonglong)local_4f8);
              ptr = local_40;
              uVar5 = recovered_1000b450((long)plVar1,local_34,local_1aa,local_4e,local_af8,local_40
                                         ,0x2001001,&local_48,local_108,0x80,recovered_10017a30,
                                         local_80);
              cVar3 = (char)uVar5;
            }
            cVar10 = '\0';
            if (cVar3 != '\0') {
              pvVar7 = (void *)recovered_1000b760((long)ptr);
              if (pvVar7 == (void *)0x0) {
                cVar10 = '\0';
                pf_varargs_1001df25___(local_108,0x80,str_1001e3dc);
              }
              else {
                uVar5 = 0;
                if ((ulong)((long)pvVar7 - (long)ptr) <= local_48) {
                  uVar5 = local_48 - ((long)pvVar7 - (long)ptr);
                }
                if (local_48 - 0x2000fff < 0xfffffffffdfff000 || 0x2000000 < uVar5) {
                  format = str_1001efbd;
LAB_1001786d:
                  cVar10 = '\0';
                  pf_varargs_1001df25___(local_108,0x80,format);
                }
                else {
                  uVar8 = recovered_1000b7b0(ptr);
                  cVar10 = '\x01';
                  if ((char)uVar8 != '\0') {
                    local_1a8[0] = 0;
                    uVar6 = recovered_1000ba10((long)pvVar7,uVar5,(long)pvVar7,uVar5,
                                               (long *)local_1a8,local_108,0x80);
                    cVar10 = (char)uVar6;
                    if (cVar10 != '\0') {
                      uVar5 = local_1a8[0];
                    }
                  }
                  local_58 = param_1 + 0x52;
                  local_60 = param_1 + 0x7a;
                  if ((cVar10 != '\0') && (uVar5 != local_68)) {
                    lVar9 = recovered_10017b10((char *)local_40);
                    param_1[0x20] = uVar5;
                    param_1[0x21] = lVar9;
                  }
                  recovered_10017260(local_26b,(byte *)local_1a8,0xa0);
                  recovered_1000dd70(str_1001ecbd);
                  pf_varargs_1001df25__8_((char *)local_58,0x140,str_1001efd0,(ulonglong)local_1a8);
                  recovered_1000bc90((char *)local_40,(undefined1 *)local_60);
                  if (cVar10 != '\0') {
                    uVar4 = recovered_1000ddc0((char *)local_58,pvVar7,(uint)uVar5);
                    ptr = local_40;
                    if (uVar4 != 0) goto LAB_100179ae;
                    format = str_1001efdc;
                    goto LAB_1001786d;
                  }
                }
                ptr = local_40;
              }
            }
LAB_100179ae:
            iVar2 = Ram0000000000006800;
            if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
               (uVar4 = Ram0000000000006808, 0x53 < uVar4)) {
              uVar4 = UINT_00006850;
              if ((code *)(ulong)uVar4 != (code *)0x0) {
                (*(code *)(ulong)uVar4)(ptr);
              }
            }
            goto LAB_1001771e;
          }
        }
        cVar10 = '\0';
        pf_varargs_1001df25___(local_108,0x80,str_1001ef35);
        goto LAB_1001771e;
      }
    }
  }
  cVar10 = '\0';
LAB_1001771e:
  *(char *)((long)param_1 + 0xf6) = cVar10;
  if (*(char *)((long)param_1 + 0xf6) == '\0') {
    if (local_108[0] == '\0') {
      vararg0 = str_1001ef25;
    }
    pf_varargs_1001df25__8_((char *)(param_1 + 0x86),0x80,&DAT_1001e232,(ulonglong)vararg0);
  }
  *(undefined1 *)((long)param_1 + 0xf5) = 1;
  return *(undefined1 *)((long)param_1 + 0xf6);
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef str_1001e3dc
#undef str_1001e5ca
#undef str_1001ecbd
#undef str_1001ef25
#undef str_1001ef35
#undef str_1001ef54
#undef str_1001efbd
#undef str_1001efd0
#undef str_1001efdc
#undef local_80
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_4e
#undef local_48
#undef local_40
#undef local_34
#undef local_af8
#undef local_4f8
#undef local_2ec
#undef local_2eb
#undef local_26b
#undef local_1aa
#undef local_1a8
#undef local_108

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017a10
 */

void recovered_10017a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x100) = param_2;
    *(undefined8 *)(param_1 + 0x108) = param_3;
  }
  return;
}


#undef DAT_1001e7ae
#define DAT_1001e7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a1U)))
#undef DAT_1001e7b3
#define DAT_1001e7b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017a30
 */

void recovered_10017a30(undefined8 *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;

  if (param_2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar1 = strstr(param_2,&DAT_1001e7ae);
    if (pcVar1 != (char *)0x0) {
      pcVar1 = pcVar1 + 4;
      goto joined_r0x10017a92;
    }
    pcVar2 = strstr(param_2,&DAT_1001e7b3);
  }
  pcVar1 = pcVar2 + 2;
  if (pcVar2 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
joined_r0x10017a92:
  if ((param_1 != (undefined8 *)0x0) && (pcVar1 != (char *)0x0)) {
    lVar4 = 0;
    if ((ulong)((long)pcVar1 - (long)param_2) <= param_3) {
      lVar4 = param_3 - ((long)pcVar1 - (long)param_2);
    }
    if (lVar4 != param_1[3]) {
      param_1[3] = lVar4;
      lVar3 = recovered_10017b10(param_2);
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(param_1[2],lVar4,lVar3);
      }
      if ((code *)param_1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10017af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[1])(param_1[2],pcVar1,lVar4,lVar3);
        return;
      }
    }
  }
  return;
}

#undef DAT_1001e7ae
#undef DAT_1001e7b3

#undef str_1001effa
#define str_1001effa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10edU)))
#undef str_1001f00b
#define str_1001f00b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017b10
 */

long recovered_10017b10(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = strlen(str_1001effa);
  if ((uVar3 != 0) && (*param_1 != '\0')) {
    pcVar4 = param_1;
    do {
      uVar5 = 0;
      while (bVar8 = pcVar4[uVar5], bVar8 != 0) {
        bVar7 = bVar8 | 0x20;
        if (0x19 < (byte)(bVar8 + 0xbf)) {
          bVar7 = bVar8;
        }
        bVar8 = str_1001effa[uVar5];
        bVar9 = bVar8 | 0x20;
        if (0x19 < (byte)(bVar8 + 0xbf)) {
          bVar9 = bVar8;
        }
        if (bVar7 != bVar9) break;
        uVar5 = uVar5 + 1;
        if (uVar3 == uVar5) goto LAB_10017c19;
      }
      if (uVar3 == uVar5) {
LAB_10017c19:
        param_1 = pcVar4 + 1;
        goto LAB_10017c1f;
      }
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
  }
  bVar8 = 99;
  lVar6 = 0;
  do {
    bVar7 = param_1[lVar6];
    if (bVar7 == 0) {
      return 0;
    }
    bVar9 = bVar7 | 0x20;
    if (0x19 < (byte)(bVar7 + 0xbf)) {
      bVar9 = bVar7;
    }
    bVar7 = bVar8 | 0x20;
    if (0x19 < (byte)(bVar8 + 0xbf)) {
      bVar7 = bVar8;
    }
    if (bVar9 != bVar7) {
      return 0;
    }
    bVar8 = str_1001f00b[lVar6 + 1];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0xf);
LAB_10017c1f:
  pcVar4 = strchr(param_1,0x3a);
  if (pcVar4 != (char *)0x0) {
    for (pcVar4 = pcVar4 + 2; (cVar2 = pcVar4[-1], cVar2 == ' ' || (cVar2 == '\t'));
        pcVar4 = pcVar4 + 1) {
    }
    if ((byte)(cVar2 - 0x30U) < 10) {
      lVar6 = 0;
      do {
        lVar6 = (ulong)(byte)(cVar2 - 0x30) + lVar6 * 10;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while ((byte)(cVar2 - 0x30U) < 10);
      return lVar6;
    }
  }
  return 0;
}

#undef str_1001effa
#undef str_1001f00b

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e7ae
#define DAT_1001e7ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a1U)))
#undef DAT_1001e7b3
#define DAT_1001e7b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8a6U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
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
#undef str_1001e30e
#define str_1001e30e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_1001e346
#define str_1001e346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x439U)))
#undef str_1001e3dc
#define str_1001e3dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4cfU)))
#undef str_1001e5ca
#define str_1001e5ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6bdU)))
#undef str_1001e805
#define str_1001e805 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8f8U)))
#undef str_1001ecb3
#define str_1001ecb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xda6U)))
#undef str_1001ecbd
#define str_1001ecbd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb0U)))
#undef str_1001f04c
#define str_1001f04c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113fU)))
#undef str_1001f065
#define str_1001f065 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1158U)))
#define local_ba8 (*(byte (*)[1536])(frame + 24))
#define local_5a8 (*(int (*)[128])(frame + 1560))
#define local_3a8 (*(char (*)[268])(frame + 2072))
#define local_29c (*(char *)(frame + 2340))
#define local_29b (*(byte (*)[128])(frame + 2341))
#define local_21b (*(char (*)[193])(frame + 2469))
#define local_15a (*(ushort *)(frame + 2662))
#define local_158 (*(char *)(frame + 2664))
#define local_157 (*(char (*)[95])(frame + 2665))
#define local_f8 (*(char (*)[96])(frame + 2760))
#define local_98 (*(undefined * *)(frame + 2856))
#define local_90 (*(undefined * *)(frame + 2864))
#define local_88 (*(undefined8 *)(frame + 2872))
#define local_80 (*(ulong *)(frame + 2880))
#define local_76 (*(char (*)[6])(frame + 2890))
#define local_70 (*(ulong *)(frame + 2896))
#define local_68 (*(ulong *)(frame + 2904))
#define local_60 (*(char * *)(frame + 2912))
#define local_58 (*(undefined8 *)(frame + 2920))
#define local_50 (*(void * *)(frame + 2928))
#define local_44 (*(uint *)(frame + 2940))
#define local_40 (*(byte * *)(frame + 2944))
#define local_38 (*(ulong *)(frame + 2952))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10017c90
 */

ulong recovered_10017c90(long param_1,byte *param_2,char *param_3,undefined *param_4,
                        undefined *param_5,undefined8 param_6)

{
  unsigned char frame[3040] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulonglong vararg5;
  undefined **ppuVar11;
  char *pcVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  code *pcVar17;
  byte bVar18;
  undefined8 unaff_R15;
  undefined7 uVar19;

  if (((param_3 != (char *)0x0) && (*param_3 = '\0', param_2 != (byte *)0x0)) &&
     (bVar4 = *param_2, bVar4 != 0)) {
    bVar14 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar14 = bVar4;
    }
    if (bVar14 == 0x68) {
      bVar14 = param_2[1];
      if (bVar14 == 0) {
code_r0x10017e06:
        bVar14 = param_2[1];
        if (bVar14 != 0) {
          bVar18 = bVar14 | 0x20;
          if (0x19 < (byte)(bVar14 + 0xbf)) {
            bVar18 = bVar14;
          }
          if ((bVar18 == 0x74) && (bVar14 = param_2[2], bVar14 != 0)) {
            bVar18 = bVar14 | 0x20;
            if (0x19 < (byte)(bVar14 + 0xbf)) {
              bVar18 = bVar14;
            }
            if ((bVar18 == 0x74) && (bVar14 = param_2[3], bVar14 != 0)) {
              bVar18 = bVar14 | 0x20;
              if (0x19 < (byte)(bVar14 + 0xbf)) {
                bVar18 = bVar14;
              }
              if ((bVar18 == 0x70) && (bVar14 = param_2[4], bVar14 != 0)) {
                bVar18 = bVar14 | 0x20;
                if (0x19 < (byte)(bVar14 + 0xbf)) {
                  bVar18 = bVar14;
                }
                if ((bVar18 == 0x73) && (bVar14 = param_2[5], bVar14 != 0)) {
                  bVar18 = bVar14 | 0x20;
                  if (0x19 < (byte)(bVar14 + 0xbf)) {
                    bVar18 = bVar14;
                  }
                  if ((bVar18 == 0x3a) && (bVar14 = param_2[6], bVar14 != 0)) {
                    bVar18 = bVar14 | 0x20;
                    if (0x19 < (byte)(bVar14 + 0xbf)) {
                      bVar18 = bVar14;
                    }
                    if ((bVar18 == 0x2f) && (bVar14 = param_2[7], bVar14 != 0)) {
                      bVar18 = bVar14 | 0x20;
                      if (0x19 < (byte)(bVar14 + 0xbf)) {
                        bVar18 = bVar14;
                      }
                      if (bVar18 == 0x2f) goto LAB_10017dea;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        bVar18 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar18 = bVar14;
        }
        if ((bVar18 != 0x74) || (bVar14 = param_2[2], bVar14 == 0)) goto code_r0x10017e06;
        bVar18 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar18 = bVar14;
        }
        if ((bVar18 != 0x74) || (bVar14 = param_2[3], bVar14 == 0)) goto code_r0x10017e06;
        bVar18 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar18 = bVar14;
        }
        if ((bVar18 != 0x70) || (bVar14 = param_2[4], bVar14 == 0)) goto code_r0x10017e06;
        bVar18 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar18 = bVar14;
        }
        if ((bVar18 != 0x3a) || (bVar14 = param_2[5], bVar14 == 0)) goto code_r0x10017e06;
        bVar18 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar18 = bVar14;
        }
        if ((bVar18 != 0x2f) || (bVar14 = param_2[6], bVar14 == 0)) goto code_r0x10017e06;
        bVar18 = bVar14 | 0x20;
        if (0x19 < (byte)(bVar14 + 0xbf)) {
          bVar18 = bVar14;
        }
        if (bVar18 != 0x2f) goto code_r0x10017e06;
LAB_10017dea:
        uVar10 = 0;
        while ((0x3f < bVar4 || ((0x8000000800000001U >> ((ulong)bVar4 & 0x3f) & 1) == 0))) {
          bVar4 = param_2[uVar10 + 1];
          uVar10 = uVar10 + 1;
        }
        if (3 < uVar10) {
          bVar4 = param_2[uVar10 - 4];
          bVar14 = bVar4 | 0x20;
          if (0x19 < (byte)(bVar4 + 0xbf)) {
            bVar14 = bVar4;
          }
          if (bVar14 == 0x2e) {
            bVar4 = param_2[uVar10 - 3];
            bVar14 = bVar4 | 0x20;
            if (0x19 < (byte)(bVar4 + 0xbf)) {
              bVar14 = bVar4;
            }
            if (bVar14 == 0x70) {
              bVar4 = param_2[uVar10 - 2];
              bVar14 = bVar4 | 0x20;
              if (0x19 < (byte)(bVar4 + 0xbf)) {
                bVar14 = bVar4;
              }
              if (bVar14 == 0x6e) {
                bVar4 = param_2[uVar10 - 1];
                bVar14 = bVar4 | 0x20;
                if (0x19 < (byte)(bVar4 + 0xbf)) {
                  bVar14 = bVar4;
                }
                if (bVar14 == 0x67) {
                  local_60 = param_3;
                  local_58 = param_6;
                  uVar8 = recovered_10018890(param_2,param_3);
                  if ((char)uVar8 != '\0') {
                    local_5a8[0] = 0;
                    local_ba8[0] = 0;
                    uVar7 = recovered_100097d0(local_60,local_5a8,local_ba8);
                    if (((char)uVar7 != '\0') &&
                       (uVar8 = recovered_10018d00(local_5a8[0],(char *)local_ba8),
                       (char)uVar8 != '\0')) {
                      uVar10 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
                      goto LAB_10018401;
                    }
                    if ((((local_ba8[0] != 0) && (iVar2 = Ram0000000000006800, iVar2 == 0x50414d57))
                        && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                       ((uVar15 = Ram0000000000006808, 0xb < uVar15 &&
                        (uVar15 = Ram0000000000006808, 0x3f < uVar15)))) {
                      uVar15 = UINT_0000683c;
                      if ((code *)(ulong)uVar15 != (code *)0x0) {
                        (*(code *)(ulong)uVar15)((char *)local_ba8);
                      }
                    }
                    *local_60 = '\0';
                  }
                  bVar4 = *param_2;
                  if (bVar4 == 0) {
                    uVar15 = 0x811c9dc5;
                  }
                  else {
                    uVar15 = 0x811c9dc5;
                    pbVar9 = param_2;
                    do {
                      pbVar9 = pbVar9 + 1;
                      uVar15 = (bVar4 ^ uVar15) * 0x1000193;
                      bVar4 = *pbVar9;
                    } while (bVar4 != 0);
                  }
                  uVar10 = 0;
                  pf_varargs_1001df25__4__8_(local_3a8,0x100,str_1001f04c,uVar15,((uintptr_t)pf_module_state + 0x113bU));
                  iVar2 = Ram0000000000006800;
                  if (iVar2 != 0x50414d57) goto LAB_10018401;
                  iVar2 = Ram0000000000006804;
                  if (((iVar2 != 0) && (uVar15 = Ram0000000000006808, 0xb < uVar15)) &&
                     (uVar15 = Ram0000000000006808, 0x4f < uVar15)) {
                    uVar15 = UINT_0000684c;
                    if (((code *)(ulong)uVar15 != (code *)0x0) &&
                       (local_50 = (*(code *)(ulong)uVar15)(0x200000), local_50 != (void *)0x0)) {
                      local_f8[0] = '\0';
                      local_44 = 0;
                      local_70 = 0;
                      local_158 = '\0';
                      uVar10 = recovered_10009dd0(param_2,&local_29c,local_f8,0x60);
                      if ((char)uVar10 != '\0') {
                        pcVar12 = (char *)(param_1 + 0x205c54);
                        uVar10 = recovered_1000a1a0(pcVar12,local_f8,0x60);
                        if (((char)uVar10 != '\0') &&
                           (((uVar8 = recovered_1000a500(local_29b,&local_44), (char)uVar8 != '\0'
                             || (uVar8 = recovered_1000a6b0((long)pcVar12,local_29b,&local_44,
                                                            local_f8,0x60), (char)uVar8 != '\0')) &&
                            (uVar10 = recovered_1000ab90((long)pcVar12,local_44,local_76,local_f8,
                                                         0x60), (char)uVar10 != '\0')))) {
                          memset(&local_98,0,0x20);
                          local_88 = local_58;
                          iVar2 = Ram0000000000006800;
                          local_98 = param_4;
                          local_90 = param_5;
                          if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0))
                             && ((uVar15 = Ram0000000000006808, 0xb < uVar15 &&
                                 (uVar15 = Ram0000000000006808, 0x4f < uVar15)))) {
                            uVar15 = UINT_0000684c;
                            if (((code *)(ulong)uVar15 != (code *)0x0) &&
                               (local_40 = (*(code *)(ulong)uVar15)(0x201001),
                               local_40 != (byte *)0x0)) {
                              vararg5 = FUN_1001df8b();
                              pf_varargs_1001df25__4__8__8__8__8__8_
                                        ((char *)local_5a8,0x200,str_1001e5ca,1000000,((uintptr_t)pf_module_state + 0x747U),
                                         ((uintptr_t)pf_module_state + 0x73fU),((uintptr_t)pf_module_state + 0x743U),((uintptr_t)pf_module_state + 0x743U),vararg5);
                              if (local_29c == '\x01') {
                                pcVar17 = (code *)recovered_10017a30;
                                if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
                                  pcVar17 = (code *)0x0;
                                }
                                local_38 = 0;
                                ppuVar11 = &local_98;
                                if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
                                  ppuVar11 = (undefined **)0x0;
                                }
                                uVar10 = recovered_1000afb0(param_1,(long)pcVar12,local_44,local_15a
                                                            ,local_76,local_29b,local_21b,
                                                            (char *)local_5a8,local_40,0x201001,
                                                            &local_70,local_f8,0x60,pcVar17,ppuVar11
                                                           );
                                cVar5 = (char)uVar10;
                              }
                              else {
                                pf_varargs_1001df25__8__8__8_
                                          ((char *)local_ba8,0x600,str_1001f065,(ulonglong)local_21b
                                           ,(ulonglong)local_29b,(ulonglong)local_5a8);
                                pcVar17 = (code *)recovered_10017a30;
                                if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
                                  pcVar17 = (code *)0x0;
                                }
                                local_38 = 0;
                                ppuVar11 = &local_98;
                                if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
                                  ppuVar11 = (undefined **)0x0;
                                }
                                uVar10 = recovered_1000b450((long)pcVar12,local_44,local_15a,
                                                            local_76,(char *)local_ba8,local_40,
                                                            0x201001,&local_70,local_f8,0x60,pcVar17
                                                            ,ppuVar11);
                                cVar5 = (char)uVar10;
                              }
                              bVar4 = 0;
                              uVar19 = 0;
                              if (cVar5 != '\0') {
                                pcVar12 = strstr((char *)local_40,&DAT_1001e7ae);
                                if (pcVar12 == (char *)0x0) {
                                  pcVar12 = strstr((char *)local_40,&DAT_1001e7b3);
                                  if (pcVar12 != (char *)0x0) {
                                    pcVar12 = pcVar12 + 2;
                                    goto LAB_100184f6;
                                  }
                                  pcVar12 = str_1001e3dc;
LAB_1001862b:
                                  local_38 = 0;
                                  pf_varargs_1001df25___(local_f8,0x60,pcVar12);
LAB_10018646:
                                  bVar4 = 0;
                                  uVar19 = 0;
                                }
                                else {
                                  pcVar12 = pcVar12 + 4;
LAB_100184f6:
                                  local_38 = local_70 - ((long)pcVar12 - (long)local_40);
                                  if (local_70 < (ulong)((long)pcVar12 - (long)local_40) ||
                                      local_38 == 0) {
                                    local_38 = strlen(pcVar12);
                                  }
                                  uVar10 = recovered_1000b7b0(local_40);
                                  if ((char)uVar10 == '\0') {
                                    if (0x200000 < local_38) {
                                      pcVar12 = str_1001e805;
                                      goto LAB_1001862b;
                                    }
                                    if ((param_4 != (undefined *)0x0) && (local_38 != local_80)) {
                                      lVar13 = recovered_10017b10((char *)local_40);
                                      (*(code *)param_4)(local_58,local_38,lVar13);
                                    }
                                    memcpy(local_50,pcVar12,local_38);
                                  }
                                  else {
                                    local_68 = 0;
                                    uVar8 = recovered_1000ba10((long)pcVar12,local_38,(long)local_50
                                                               ,0x200000,(long *)&local_68,local_f8,
                                                               0x60);
                                    if ((char)uVar8 == '\0') {
                                      local_38 = 0;
                                      goto LAB_10018646;
                                    }
                                    local_38 = local_68;
                                    if ((param_4 != (undefined *)0x0) && (local_68 != local_80)) {
                                      lVar13 = recovered_10017b10((char *)local_40);
                                      (*(code *)param_4)(local_58,local_38,lVar13);
                                      local_38 = local_68;
                                    }
                                    local_68 = local_38;
                                    if (param_5 != (undefined *)0x0) {
                                      lVar13 = recovered_10017b10((char *)local_40);
                                      (*(code *)param_5)(local_58,local_50,local_38,lVar13);
                                      local_38 = local_68;
                                    }
                                  }
                                  recovered_1000bc90((char *)local_40,&local_158);
                                  uVar19 = (undefined7)((ulong)pcVar12 >> 8);
                                  bVar4 = 1;
                                }
                              }
                              iVar2 = Ram0000000000006800;
                              if ((((iVar2 == 0x50414d57) &&
                                   (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                                  (uVar15 = Ram0000000000006808, 0xb < uVar15)) &&
                                 (uVar15 = Ram0000000000006808, 0x53 < uVar15)) {
                                uVar15 = UINT_00006850;
                                if ((code *)(ulong)uVar15 != (code *)0x0) {
                                  (*(code *)(ulong)uVar15)(local_40);
                                }
                              }
                              if ((bool)(bVar4 & local_38 != 0)) {
                                if (local_158 != '\0') {
                                  uVar19 = 0x1001ec;
                                  uVar10 = strlen(str_1001ecb3);
                                  if (uVar10 != 0) {
                                    pcVar12 = &local_158;
                                    do {
                                      uVar16 = 0;
                                      while (bVar4 = pcVar12[uVar16], bVar4 != 0) {
                                        bVar14 = bVar4 | 0x20;
                                        if (0x19 < (byte)(bVar4 + 0xbf)) {
                                          bVar14 = bVar4;
                                        }
                                        bVar4 = str_1001ecb3[uVar16];
                                        bVar18 = bVar4 | 0x20;
                                        if (0x19 < (byte)(bVar4 + 0xbf)) {
                                          bVar18 = bVar4;
                                        }
                                        if (bVar14 != bVar18) break;
                                        uVar16 = uVar16 + 1;
                                        if (uVar10 == uVar16) goto LAB_10018734;
                                      }
                                      if (uVar10 == uVar16) goto LAB_10018734;
                                      pcVar1 = pcVar12 + 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (*pcVar1 != '\0');
                                  }
                                  bVar6 = recovered_100163e0((long)param_2);
                                  if (!bVar6) goto LAB_100183bc;
                                }
LAB_10018734:
                                iVar2 = Ram0000000000006800;
                                if (((iVar2 == 0x50414d57) &&
                                    (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                                   ((uVar15 = Ram0000000000006808, 0xb < uVar15 &&
                                    (uVar15 = Ram0000000000006808, 0x8f < uVar15)))) {
                                  uVar15 = UINT_0000688c;
                                  if ((code *)(ulong)uVar15 != (code *)0x0) {
                                    (*(code *)(ulong)uVar15)(str_1001ecbd);
                                  }
                                }
                                iVar2 = Ram0000000000006800;
                                if (((iVar2 == 0x50414d57) &&
                                    (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                                   ((uVar15 = Ram0000000000006808, 0xb < uVar15 &&
                                    (uVar15 = Ram0000000000006808, 0x3b < uVar15)))) {
                                  uVar15 = UINT_00006838;
                                  if (((code *)(ulong)uVar15 != (code *)0x0) &&
                                     (uVar15 = (*(code *)(ulong)uVar15)
                                                         (local_3a8,local_50,(uint)local_38),
                                     uVar15 != 0)) {
                                    iVar2 = Ram0000000000006800;
                                    uVar15 = 0xffffffff;
                                    if ((iVar2 == 0x50414d57) &&
                                       (((iVar2 = Ram0000000000006804, iVar2 != 0 &&
                                         (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
                                        (uVar3 = Ram0000000000006808, 0xbf < uVar3)))) {
                                      uVar3 = UINT_000068bc;
                                      if ((code *)(ulong)uVar3 != (code *)0x0) {
                                        uVar15 = (*(code *)(ulong)uVar3)();
                                      }
                                    }
                                    uVar8 = recovered_10018d00(uVar15,local_3a8);
                                    if ((char)uVar8 != '\0') {
                                      pf_varargs_1001df25__4__8_
                                                (local_60,0x100,str_1001e30e,uVar15,
                                                 (ulonglong)local_3a8);
                                      recovered_10002370(local_50);
                                      uVar10 = CONCAT71(uVar19,1);
                                      goto LAB_10018401;
                                    }
                                    recovered_10018e50(local_3a8);
                                  }
                                }
                              }
                              goto LAB_100183bc;
                            }
                          }
                          pf_varargs_1001df25___(local_f8,0x60,str_1001e346);
                        }
                      }
LAB_100183bc:
                      iVar2 = Ram0000000000006800;
                      if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                         ((uVar15 = Ram0000000000006808, 0xb < uVar15 &&
                          (uVar15 = Ram0000000000006808, 0x53 < uVar15)))) {
                        uVar15 = UINT_00006850;
                        if ((code *)(ulong)uVar15 != (code *)0x0) {
                          (*(code *)(ulong)uVar15)(local_50);
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
  uVar10 = 0;
LAB_10018401:
  return uVar10 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e7ae
#undef DAT_1001e7b3
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef UINT_0000683c
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_0000688c
#undef UINT_000068bc
#undef str_1001e30e
#undef str_1001e346
#undef str_1001e3dc
#undef str_1001e5ca
#undef str_1001e805
#undef str_1001ecb3
#undef str_1001ecbd
#undef str_1001f04c
#undef str_1001f065
#undef local_ba8
#undef local_5a8
#undef local_3a8
#undef local_29c
#undef local_29b
#undef local_21b
#undef local_15a
#undef local_158
#undef local_157
#undef local_f8
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_76
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_44
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006834
#define UINT_00006834 (*(uint *)(0x6834U))
#undef UINT_000068bc
#define UINT_000068bc (*(uint *)(0x68bcU))
#undef str_1001e30e
#define str_1001e30e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x401U)))
#undef str_1001f04c
#define str_1001f04c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113fU)))
#define local_128 (*(char (*)[260])(frame + 24))
#define local_24 (*(int *)(frame + 284))
#define local_20 (*(int *)(frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018890
 */

undefined8 recovered_10018890(byte *param_1,char *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;

  if (param_2 == (char *)0x0) {
    return 0;
  }
  *param_2 = '\0';
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  bVar3 = *param_1;
  if (bVar3 == 0) {
    return 0;
  }
  bVar7 = bVar3 | 0x20;
  if (0x19 < (byte)(bVar3 + 0xbf)) {
    bVar7 = bVar3;
  }
  if (bVar7 != 0x68) {
    return 0;
  }
  bVar7 = param_1[1];
  if (bVar7 != 0) {
    bVar6 = bVar7 | 0x20;
    if (0x19 < (byte)(bVar7 + 0xbf)) {
      bVar6 = bVar7;
    }
    if ((bVar6 == 0x74) && (bVar7 = param_1[2], bVar7 != 0)) {
      bVar6 = bVar7 | 0x20;
      if (0x19 < (byte)(bVar7 + 0xbf)) {
        bVar6 = bVar7;
      }
      if ((bVar6 == 0x74) && (bVar7 = param_1[3], bVar7 != 0)) {
        bVar6 = bVar7 | 0x20;
        if (0x19 < (byte)(bVar7 + 0xbf)) {
          bVar6 = bVar7;
        }
        if ((bVar6 == 0x70) && (bVar7 = param_1[4], bVar7 != 0)) {
          bVar6 = bVar7 | 0x20;
          if (0x19 < (byte)(bVar7 + 0xbf)) {
            bVar6 = bVar7;
          }
          if ((bVar6 == 0x3a) && (bVar7 = param_1[5], bVar7 != 0)) {
            bVar6 = bVar7 | 0x20;
            if (0x19 < (byte)(bVar7 + 0xbf)) {
              bVar6 = bVar7;
            }
            if ((bVar6 == 0x2f) && (bVar7 = param_1[6], bVar7 != 0)) {
              bVar6 = bVar7 | 0x20;
              if (0x19 < (byte)(bVar7 + 0xbf)) {
                bVar6 = bVar7;
              }
              if (bVar6 == 0x2f) goto LAB_100189c3;
            }
          }
        }
      }
    }
  }
  bVar7 = param_1[1];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x74) {
    return 0;
  }
  bVar7 = param_1[2];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x74) {
    return 0;
  }
  bVar7 = param_1[3];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x70) {
    return 0;
  }
  bVar7 = param_1[4];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x73) {
    return 0;
  }
  bVar7 = param_1[5];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x3a) {
    return 0;
  }
  bVar7 = param_1[6];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x2f) {
    return 0;
  }
  bVar7 = param_1[7];
  if (bVar7 == 0) {
    return 0;
  }
  bVar6 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar6 = bVar7;
  }
  if (bVar6 != 0x2f) {
    return 0;
  }
LAB_100189c3:
  uVar5 = 0;
  bVar7 = bVar3;
  while ((0x3f < bVar7 || ((0x8000000800000001U >> ((ulong)bVar7 & 0x3f) & 1) == 0))) {
    bVar7 = param_1[uVar5 + 1];
    uVar5 = uVar5 + 1;
  }
  if (3 < uVar5) {
    bVar7 = param_1[uVar5 - 4];
    bVar6 = bVar7 | 0x20;
    if (0x19 < (byte)(bVar7 + 0xbf)) {
      bVar6 = bVar7;
    }
    if (bVar6 == 0x2e) {
      bVar7 = param_1[uVar5 - 3];
      bVar6 = bVar7 | 0x20;
      if (0x19 < (byte)(bVar7 + 0xbf)) {
        bVar6 = bVar7;
      }
      if (bVar6 == 0x70) {
        bVar7 = param_1[uVar5 - 2];
        bVar6 = bVar7 | 0x20;
        if (0x19 < (byte)(bVar7 + 0xbf)) {
          bVar6 = bVar7;
        }
        if (bVar6 == 0x6e) {
          bVar7 = param_1[uVar5 - 1];
          bVar6 = bVar7 | 0x20;
          if (0x19 < (byte)(bVar7 + 0xbf)) {
            bVar6 = bVar7;
          }
          if (bVar6 == 0x67) {
            uVar4 = 0x811c9dc5;
            do {
              param_1 = param_1 + 1;
              uVar4 = (bVar3 ^ uVar4) * 0x1000193;
              bVar3 = *param_1;
            } while (bVar3 != 0);
            pf_varargs_1001df25__4__8_(local_128,0x100,str_1001f04c,uVar4,((uintptr_t)pf_module_state + 0x113bU));
            memset(&local_24,0,0xc);
            iVar1 = Ram0000000000006800;
            if (iVar1 != 0x50414d57) {
              return 0;
            }
            iVar1 = Ram0000000000006804;
            if (((iVar1 != 0) && (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
               (uVar4 = Ram0000000000006808, 0x37 < uVar4)) {
              uVar4 = UINT_00006834;
              if ((code *)(ulong)uVar4 != (code *)0x0) {
                uVar4 = (*(code *)(ulong)uVar4)(local_128,&local_24);
                if (uVar4 == 0) {
                  return 0;
                }
                if (local_24 == 0) {
                  return 0;
                }
                if (local_20 == 0) {
                  return 0;
                }
                iVar1 = Ram0000000000006800;
                uVar4 = 0xffffffff;
                if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
                   ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
                    (uVar2 = Ram0000000000006808, 0xbf < uVar2)))) {
                  uVar2 = UINT_000068bc;
                  if ((code *)(ulong)uVar2 != (code *)0x0) {
                    uVar4 = (*(code *)(ulong)uVar2)();
                  }
                }
                pf_varargs_1001df25__4__8_(param_2,0x100,str_1001e30e,uVar4,(ulonglong)local_128);
                return 1;
              }
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
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006834
#undef UINT_000068bc
#undef str_1001e30e
#undef str_1001f04c
#undef local_128
#undef local_24
#undef local_20

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#define local_38 (*(void * (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018d00
 */

undefined8 recovered_10018d00(int param_1,char *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  memset(local_38,0,0x18);
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == '\0') {
    return 0;
  }
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0xe3 < uVar2)) {
    uVar2 = UINT_000068e0;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      return 0;
    }
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,local_38);
  }
  else {
    iVar1 = Ram0000000000006800;
    if (iVar1 != 0x50414d57) {
      return 0;
    }
    iVar1 = Ram0000000000006804;
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = Ram0000000000006808;
    if (uVar2 < 0xc) {
      return 0;
    }
    uVar2 = Ram0000000000006808;
    if (uVar2 < 0x5c) {
      return 0;
    }
    uVar2 = UINT_00006858;
    if ((code *)(ulong)uVar2 == (code *)0x0) {
      return 0;
    }
    uVar2 = (*(code *)(ulong)uVar2)(param_2,local_38);
  }
  if (uVar2 == 0) {
    return 0;
  }
  if (((local_38[0] != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
     ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
      ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x53 < uVar2))))))
  {
    uVar2 = UINT_00006850;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      (*(code *)(ulong)uVar2)(local_38[0]);
    }
  }
  memset(local_38,0,0x18);
  return 1;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018e50
 */

void recovered_10018e50(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x3f < uVar2)) {
    uVar2 = UINT_0000683c;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10018e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)uVar2)(param_1);
      return;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000683c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#undef str_1001e9f3
#define str_1001e9f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
#undef str_1001f1d2
#define str_1001f1d2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12c5U)))
#undef str_1001f1dd
#define str_1001f1dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12d0U)))
#undef str_1001f1e7
#define str_1001f1e7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12daU)))
#define local_348 (*(char (*)[256])(frame + 24))
#define local_248 (*(ulong *)(frame + 280))
#define local_240 (*(long *)(frame + 288))
#define local_238 (*(undefined8 *)(frame + 296))
#define local_230 (*(undefined8 *)(frame + 304))
#define local_228 (*(undefined1 *)(frame + 312))
#define local_227 (*(undefined1 *)(frame + 313))
#define local_226 (*(undefined1 *)(frame + 314))
#define local_20f (*(char (*)[195])(frame + 337))
#define abStack_14c (*(byte (*)[9])(frame + 532))
#define local_143 (*(byte *)(frame + 541))
#define local_142 (*(byte *)(frame + 542))
#define local_141 (*(byte *)(frame + 543))
#define local_40 (*(byte * *)(frame + 800))
#define local_34 (*(int *)(frame + 812))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018ea0
 */

void recovered_10018ea0(ulong param_1,long param_2,char *param_3,undefined8 param_4,
                       undefined8 param_5,undefined1 param_6,undefined1 param_7,byte *param_8)

{
  unsigned char frame[896] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  char *pcVar9;
  char *dst;

  if (param_3 == (char *)0x0) {
    return;
  }
  if (*param_3 == '\0') {
    return;
  }
  recovered_10008100(param_2,(byte *)param_3,(char *)(abStack_14c + 4));
  if (abStack_14c[4] == 0) {
    return;
  }
  bVar7 = abStack_14c[4] | 0x20;
  if (0x19 < (byte)(abStack_14c[4] + 0xbf)) {
    bVar7 = abStack_14c[4];
  }
  if (bVar7 != 0x68) {
    return;
  }
  if (abStack_14c[5] == 0) {
code_r0x1001901a:
    if (abStack_14c[5] == 0) {
      return;
    }
    bVar7 = abStack_14c[5] | 0x20;
    if (0x19 < (byte)(abStack_14c[5] + 0xbf)) {
      bVar7 = abStack_14c[5];
    }
    if (bVar7 != 0x74) {
      return;
    }
    if (abStack_14c[6] == 0) {
      return;
    }
    bVar7 = abStack_14c[6] | 0x20;
    if (0x19 < (byte)(abStack_14c[6] + 0xbf)) {
      bVar7 = abStack_14c[6];
    }
    if (bVar7 != 0x74) {
      return;
    }
    if (abStack_14c[7] == 0) {
      return;
    }
    bVar7 = abStack_14c[7] | 0x20;
    if (0x19 < (byte)(abStack_14c[7] + 0xbf)) {
      bVar7 = abStack_14c[7];
    }
    if (bVar7 != 0x70) {
      return;
    }
    if (abStack_14c[8] == 0) {
      return;
    }
    bVar7 = abStack_14c[8] | 0x20;
    if (0x19 < (byte)(abStack_14c[8] + 0xbf)) {
      bVar7 = abStack_14c[8];
    }
    if (bVar7 != 0x73) {
      return;
    }
    if (local_143 == 0) {
      return;
    }
    bVar7 = local_143 | 0x20;
    if (0x19 < (byte)(local_143 + 0xbf)) {
      bVar7 = local_143;
    }
    if (bVar7 != 0x3a) {
      return;
    }
    if (local_142 == 0) {
      return;
    }
    bVar7 = local_142 | 0x20;
    if (0x19 < (byte)(local_142 + 0xbf)) {
      bVar7 = local_142;
    }
    if (bVar7 != 0x2f) {
      return;
    }
    if (local_141 == 0) {
      return;
    }
    bVar7 = local_141 | 0x20;
    if (0x19 < (byte)(local_141 + 0xbf)) {
      bVar7 = local_141;
    }
    if (bVar7 != 0x2f) {
      return;
    }
  }
  else {
    bVar7 = abStack_14c[5] | 0x20;
    if (0x19 < (byte)(abStack_14c[5] + 0xbf)) {
      bVar7 = abStack_14c[5];
    }
    if ((bVar7 != 0x74) || (abStack_14c[6] == 0)) goto code_r0x1001901a;
    bVar7 = abStack_14c[6] | 0x20;
    if (0x19 < (byte)(abStack_14c[6] + 0xbf)) {
      bVar7 = abStack_14c[6];
    }
    if ((bVar7 != 0x74) || (abStack_14c[7] == 0)) goto code_r0x1001901a;
    bVar7 = abStack_14c[7] | 0x20;
    if (0x19 < (byte)(abStack_14c[7] + 0xbf)) {
      bVar7 = abStack_14c[7];
    }
    if ((bVar7 != 0x70) || (abStack_14c[8] == 0)) goto code_r0x1001901a;
    bVar7 = abStack_14c[8] | 0x20;
    if (0x19 < (byte)(abStack_14c[8] + 0xbf)) {
      bVar7 = abStack_14c[8];
    }
    if ((bVar7 != 0x3a) || (local_143 == 0)) goto code_r0x1001901a;
    bVar7 = local_143 | 0x20;
    if (0x19 < (byte)(local_143 + 0xbf)) {
      bVar7 = local_143;
    }
    if ((bVar7 != 0x2f) || (local_142 == 0)) goto code_r0x1001901a;
    bVar7 = local_142 | 0x20;
    if (0x19 < (byte)(local_142 + 0xbf)) {
      bVar7 = local_142;
    }
    if (bVar7 != 0x2f) goto code_r0x1001901a;
  }
  uVar6 = 0;
  while ((0x3f < abStack_14c[4] ||
         ((0x8000000800000001U >> ((ulong)abStack_14c[4] & 0x3f) & 1) == 0))) {
    abStack_14c[4] = abStack_14c[uVar6 + 5];
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 4) {
    return;
  }
  bVar7 = abStack_14c[uVar6];
  bVar8 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar8 = bVar7;
  }
  if (bVar8 != 0x2e) {
    return;
  }
  bVar7 = abStack_14c[uVar6 + 1];
  bVar8 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar8 = bVar7;
  }
  if (bVar8 != 0x70) {
    return;
  }
  bVar7 = abStack_14c[uVar6 + 2];
  bVar8 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar8 = bVar7;
  }
  if (bVar8 != 0x6e) {
    return;
  }
  bVar7 = abStack_14c[uVar6 + 3];
  bVar8 = bVar7 | 0x20;
  if (0x19 < (byte)(bVar7 + 0xbf)) {
    bVar8 = bVar7;
  }
  if (bVar8 != 0x67) {
    return;
  }
  local_40 = param_8;
  uVar4 = recovered_10018890(abStack_14c + 4,local_348);
  if ((char)uVar4 != '\0') {
    local_34 = 0;
    local_248 = local_248 & 0xffffffffffffff00;
    uVar3 = recovered_100097d0(local_348,&local_34,(byte *)&local_248);
    if (((char)uVar3 != '\0') &&
       (uVar4 = recovered_10018d00(local_34,(char *)&local_248), (char)uVar4 != '\0')) {
      return;
    }
    if (((((char)local_248 != '\0') && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
        (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
       ((uVar2 = Ram0000000000006808, 0xb < uVar2 && (uVar2 = Ram0000000000006808, 0x3f < uVar2))))
    {
      uVar2 = UINT_0000683c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        (*(code *)(ulong)uVar2)((char *)&local_248);
      }
    }
    local_348[0] = '\0';
  }
  memset(&local_248,0,0xa0);
  local_227 = param_7;
  dst = local_20f;
  local_248 = param_1;
  local_240 = param_2;
  local_238 = param_4;
  local_230 = param_5;
  local_228 = param_6;
  local_226 = param_6;
  if ((param_8 == (byte *)0x0) || (*param_8 == 0)) {
    pbVar5 = abStack_14c + 5;
    local_40 = abStack_14c + 4;
    do {
      bVar7 = pbVar5[-1];
      if ((bVar7 == 0x2f) || (bVar7 == 0x5c)) {
        local_40 = pbVar5;
      }
      else if (bVar7 == 0) goto code_r0x1001932f;
      pbVar5 = pbVar5 + 1;
    } while( true );
  }
LAB_10019338:
  pf_varargs_1001df25__8_(dst,0x60,&DAT_1001e232,(ulonglong)local_40);
  pcVar9 = str_1001e9f3;
  if (local_20f[0] != '\0') {
    pcVar9 = dst;
  }
LAB_10019374:
  pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,str_1001f1d2,(ulonglong)pcVar9);
  recovered_100025b0((void *)param_1);
  uVar6 = recovered_10017c90(param_1,abStack_14c + 4,local_348,recovered_10019420,recovered_10019880
                             ,&local_248);
  pcVar9 = str_1001f1e7;
  if ((char)uVar6 != '\0') {
    pcVar9 = str_1001f1dd;
  }
  if (local_20f[0] == '\0') {
    dst = str_1001e9f3;
  }
  pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,pcVar9,(ulonglong)dst);
  recovered_100025b0((void *)param_1);
  return;
code_r0x1001932f:
  if (local_40 == (byte *)0x0) {
    local_20f[0] = '\0';
    pcVar9 = str_1001e9f3;
    goto LAB_10019374;
  }
  goto LAB_10019338;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000683c
#undef str_1001e9f3
#undef str_1001f1d2
#undef str_1001f1dd
#undef str_1001f1e7
#undef local_348
#undef local_248
#undef local_240
#undef local_238
#undef local_230
#undef local_228
#undef local_227
#undef local_226
#undef local_20f
#undef abStack_14c
#undef local_143
#undef local_142
#undef local_141
#undef local_40
#undef local_34

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(uint *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#undef str_1001e16a
#define str_1001e16a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#undef str_1001e9f3
#define str_1001e9f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019420
 */

void recovered_10019420(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void *window;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;

  if (param_1 == (long *)0x0) {
    return;
  }
  lVar8 = param_1[1];
  if (lVar8 == 0) {
LAB_100194e3:
    uVar7 = 0;
    uVar14 = 0;
  }
  else {
    iVar9 = (int)((ulong)param_1[2] >> 0x20);
    if ((char)param_1[4] == '\0') {
      iVar4 = 0;
      if (*(char *)((long)param_1 + 0x21) == '\0') {
        iVar4 = *(int *)(lVar8 + 0x544cc);
      }
      iVar9 = (iVar9 + 0x48) - iVar4;
    }
    uVar7 = 0;
    iVar1 = (int)param_1[2];
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    iVar12 = 0x48;
    if (0x48 < iVar9) {
      iVar12 = iVar9;
    }
    uVar2 = iVar1 + (int)param_1[3];
    if ((int)DAT_100201f0 <= (int)uVar2) {
      uVar2 = DAT_100201f0;
    }
    iVar9 = (int)((ulong)param_1[3] >> 0x20) + iVar9;
    iVar1 = DAT_100201f4 - 0x16;
    if (iVar9 < (int)(DAT_100201f4 - 0x16)) {
      iVar1 = iVar9;
    }
    if (uVar2 - iVar4 == 0 || (int)uVar2 < iVar4) goto LAB_100194e3;
    uVar14 = 0;
    if (iVar1 - iVar12 != 0 && iVar12 <= iVar1) {
      uVar7 = CONCAT44(iVar12,iVar4);
      uVar14 = CONCAT44(iVar1 - iVar12,uVar2 - iVar4);
    }
  }
  lVar13 = *param_1;
  if (lVar13 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  uVar2 = (uint)uVar14;
  if ((int)uVar2 < 0x15) {
    return;
  }
  iVar9 = (int)(uVar14 >> 0x20);
  if (iVar9 < 0x19) {
    return;
  }
  uVar15 = 0x200000;
  if (param_2 <= param_3) {
    uVar15 = param_3;
  }
  uVar11 = (ulong)(uVar2 - 0x12);
  uVar10 = uVar11 * param_2;
  if ((uVar10 | uVar15) >> 0x20 == 0) {
    uVar3 = (uVar10 & 0xffffffff) / (uVar15 & 0xffffffff);
  }
  else {
    uVar3 = uVar10 / uVar15;
  }
  uVar6 = 1;
  if (uVar15 <= uVar10) {
    uVar6 = uVar3;
  }
  if (uVar11 <= uVar6) {
    uVar6 = uVar11;
  }
  if ((param_1[5] == 0) || (uVar6 != param_1[5])) {
    recovered_10019c30(lVar13,uVar7,uVar14,0xe8ecefff);
    lVar8 = *param_1;
    iVar1 = (int)uVar7;
    uVar15 = (ulong)(uVar2 & 0x7fffffff) | 0x100000000;
    recovered_10019c30(lVar8,uVar7,uVar15,0x7a848eff);
    recovered_10019c30(lVar8,(((uVar14 & 0xffffffff00000000) + uVar7 & 0xffffffff00000000) +
                             (uVar7 & 0xffffffff)) - 0x100000000,uVar15,0x7a848eff);
    lVar13 = (uVar14 & 0xffffffff00000000) + 1;
    recovered_10019c30(lVar8,uVar7,lVar13,0x7a848eff);
    recovered_10019c30(lVar8,(ulong)((iVar1 + uVar2) - 1) + (uVar7 & 0xffffffff00000000),lVar13,
                       0x7a848eff);
    iVar4 = (int)(uVar7 >> 0x20);
    pcVar5 = str_1001e9f3;
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      pcVar5 = (char *)((long)param_1 + 0x39);
    }
    recovered_1001a280(*param_1,iVar1 + 10,iVar4 + 0xc,pcVar5,1,0x444a52ff);
    uVar2 = iVar9 + iVar4;
    uVar15 = ((ulong)uVar2 << 0x20) - 0x1100000000;
    uVar7 = (iVar1 + 8U) + uVar15;
    lVar8 = *param_1;
    uVar10 = uVar14 + 0xfffffff0 & 0xffffffff | 0x100000000;
    recovered_10019c30(lVar8,uVar7,uVar10,0x7a848eff);
    recovered_10019c30(lVar8,CONCAT44(uVar2,iVar1 + 8U) - 0xa00000000,uVar10,0x7a848eff);
    recovered_10019c30(lVar8,uVar7,0x800000001,0x7a848eff);
    recovered_10019c30(lVar8,iVar1 + (int)(uVar14 + 0xfffffff0) + 7 | uVar15,0x800000001,0x7a848eff)
    ;
    recovered_10019c30(*param_1,CONCAT44(uVar2,iVar1 + 9) - 0x1000000000,uVar6 | 0x600000000,
                       0x2a6cb8ff);
    param_1[5] = uVar6;
    lVar13 = *param_1;
    lVar8 = param_1[1];
  }
  recovered_1001a5d0(lVar13,lVar8,(char *)((long)param_1 + 0x39),param_2,param_3);
  recovered_1001a750(*param_1,param_1[1]);
  window = (void *)*param_1;
  if (window == (void *)0x0) {
    window = (void *)0x0;
    goto LAB_10019841;
  }
  if (*(uint *)((long)window + 0x57e8) == 0) goto LAB_10019841;
  iVar9 = Ram0000000000006800;
  if ((((iVar9 == 0x50414d57) && (iVar9 = Ram0000000000006804, iVar9 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x11b < uVar2)) {
    uVar2 = UINT_00006918;
    if (((code *)(ulong)uVar2 == (code *)0x0) ||
       (uVar2 = (*(code *)(ulong)uVar2)
                          ((void *)((long)window + 1000),*(uint *)((long)window + 0x57e8)),
       uVar2 == 0)) goto LAB_10019829;
  }
  else {
LAB_10019829:
    *(undefined1 *)((long)window + 0x57ec) = 0;
  }
  *(undefined4 *)((long)window + 0x57e8) = 0;
  window = (void *)*param_1;
LAB_10019841:
  terror_ui_window_present(window,str_1001e16a,*(void **)((long)window + 0x350),DAT_100201f0,DAT_100201f4,
                     DAT_100201f0 * 4,0xffffff);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006918
#undef str_1001e16a
#undef str_1001e9f3

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(uint *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_0000685c
#define UINT_0000685c (*(uint *)(0x685cU))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#undef str_1001e16a
#define str_1001e16a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25dU)))
#define local_50 (*(void * (*)[3])(frame + 16))
#define local_38 (*(long * *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019880
 */

void recovered_10019880(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_RDX = 0;
  undefined8 extraout_RDX_00 = 0;
  long lVar5;
  void *window;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;

  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
LAB_10019955:
    lVar2 = *param_1;
joined_r0x10019a99:
    uVar8 = 0;
    lVar5 = 0;
  }
  else {
    iVar10 = (int)((ulong)param_1[2] >> 0x20);
    if ((char)param_1[4] == '\0') {
      iVar9 = 0;
      if (*(char *)((long)param_1 + 0x21) == '\0') {
        iVar9 = *(int *)(lVar1 + 0x544cc);
      }
      iVar10 = (iVar10 + 0x48) - iVar9;
    }
    iVar6 = (int)param_1[2];
    iVar9 = 0;
    if (0 < iVar6) {
      iVar9 = iVar6;
    }
    iVar11 = 0x48;
    if (0x48 < iVar10) {
      iVar11 = iVar10;
    }
    uVar7 = iVar6 + (int)param_1[3];
    if ((int)DAT_100201f0 <= (int)uVar7) {
      uVar7 = DAT_100201f0;
    }
    iVar10 = (int)((ulong)param_1[3] >> 0x20) + iVar10;
    iVar6 = DAT_100201f4 - 0x16;
    if (iVar10 < (int)(DAT_100201f4 - 0x16)) {
      iVar6 = iVar10;
    }
    if (uVar7 - iVar9 == 0 || (int)uVar7 < iVar9) {
      lVar2 = *param_1;
      goto joined_r0x10019a99;
    }
    if (iVar6 - iVar11 == 0 || iVar6 < iVar11) goto LAB_10019955;
    lVar5 = CONCAT44(iVar11,iVar9);
    uVar8 = CONCAT44(iVar6 - iVar11,uVar7 - iVar9);
    lVar2 = *param_1;
  }
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == (void *)0x0) {
    return;
  }
  if (param_3 - 0x100000000 < 0xffffffff00000001) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  if ((int)uVar8 < 1) {
    return;
  }
  if ((int)(uVar8 >> 0x20) < 1) {
    return;
  }
  if ((param_3 <= param_4 - 1) && ((char)param_1[7] != '\0')) {
    return;
  }
  if (((param_3 < param_4) || (param_4 == 0)) && (param_1[6] != 0 && param_3 - param_1[6] < 0x20000)
     ) {
    return;
  }
  param_1[6] = param_3;
  local_38 = param_1;
  memset(local_50,0,0x18);
  iVar10 = Ram0000000000006800;
  if (iVar10 != 0x50414d57) {
    return;
  }
  iVar10 = Ram0000000000006804;
  if (iVar10 == 0) {
    return;
  }
  uVar7 = Ram0000000000006808;
  if (uVar7 < 0xc) {
    return;
  }
  uVar7 = Ram0000000000006808;
  if (uVar7 < 0x60) {
    return;
  }
  uVar7 = UINT_0000685c;
  if ((code *)(ulong)uVar7 == (code *)0x0) {
    return;
  }
  uVar7 = (*(code *)(ulong)uVar7)(param_2,(uint)param_3,local_50);
  if (uVar7 == 0) {
    return;
  }
  recovered_1001ac60(*local_38);
  plVar4 = local_38;
  if (*(char *)((long)local_38 + 0x22) == '\x01') {
    recovered_1001b510(*local_38,(long *)local_50,lVar5,uVar8);
    recovered_1001b8d0(*plVar4,plVar4[1],extraout_RDX,uVar8);
  }
  else {
    uVar3 = (ulong)DAT_100201f0;
    recovered_1001c4a0(*local_38,local_38[1],CONCAT44(DAT_100201f4 - 0x5e,DAT_100201f0));
    recovered_1001b8d0(*plVar4,plVar4[1],extraout_RDX_00,uVar3);
    recovered_1001c940(*plVar4,(long *)local_50,lVar5,uVar8);
  }
  if (((local_50[0] != (void *)0x0) && (iVar10 = Ram0000000000006800, iVar10 == 0x50414d57)) &&
     ((iVar10 = Ram0000000000006804, iVar10 != 0 &&
      ((uVar7 = Ram0000000000006808, 0xb < uVar7 && (uVar7 = Ram0000000000006808, 0x53 < uVar7))))))
  {
    uVar7 = UINT_00006850;
    if ((code *)(ulong)uVar7 != (code *)0x0) {
      (*(code *)(ulong)uVar7)(local_50[0]);
    }
  }
  memset(local_50,0,0x18);
  plVar4 = local_38;
  *(undefined1 *)(local_38 + 7) = 1;
  recovered_1001a5d0(*local_38,local_38[1],(char *)((long)local_38 + 0x39),param_3,param_4);
  recovered_1001a750(*plVar4,plVar4[1]);
  window = (void *)*plVar4;
  if (window == (void *)0x0) {
    window = (void *)0x0;
    goto LAB_10019bf6;
  }
  if (*(uint *)((long)window + 0x57e8) == 0) goto LAB_10019bf6;
  iVar10 = Ram0000000000006800;
  if ((((iVar10 == 0x50414d57) && (iVar10 = Ram0000000000006804, iVar10 != 0)) &&
      (uVar7 = Ram0000000000006808, 0xb < uVar7)) && (uVar7 = Ram0000000000006808, 0x11b < uVar7)) {
    uVar7 = UINT_00006918;
    if (((code *)(ulong)uVar7 == (code *)0x0) ||
       (uVar7 = (*(code *)(ulong)uVar7)
                          ((void *)((long)window + 1000),*(uint *)((long)window + 0x57e8)),
       plVar4 = local_38, uVar7 == 0)) goto LAB_10019bde;
  }
  else {
LAB_10019bde:
    *(undefined1 *)((long)window + 0x57ec) = 0;
  }
  *(undefined4 *)((long)window + 0x57e8) = 0;
  window = (void *)*plVar4;
LAB_10019bf6:
  terror_ui_window_present(window,str_1001e16a,*(void **)((long)window + 0x350),DAT_100201f0,DAT_100201f4,
                     DAT_100201f0 * 4,0xffffff);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_0000685c
#undef UINT_00006918
#undef str_1001e16a
#undef local_50
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(uint *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_38 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019c30
 */

void recovered_10019c30(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *commands;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 uVar18;
  long lVar19;
  undefined1 uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;

  iVar14 = (int)param_3;
  iVar25 = (int)((ulong)param_3 >> 0x20);
  if ((iVar14 < 1 || param_1 == 0) || iVar25 < 1) {
    return;
  }
  uVar21 = (uint)param_2;
  uVar26 = (uint)(param_2 >> 0x20);
  if ((char)param_4 == -1) {
    if (*(char *)(param_1 + 0x57ec) == '\0') goto LAB_10019fbc;
    uVar5 = *(uint *)(param_1 + 0x57e8);
    commands = (void *)(param_1 + 1000);
    if ((ulong)uVar5 < 0xc0) {
      *(uint *)(param_1 + 0x57e8) = uVar5 + 1;
      lVar19 = (ulong)uVar5 * 0x70;
      memset((void *)((long)commands + lVar19),0,0x70);
      *(undefined4 *)((long)commands + lVar19) = 2;
      uVar12 = DAT_100201f4;
      uVar27 = DAT_100201f0;
      uVar3 = *(undefined8 *)(param_1 + 0x350);
      uVar5 = DAT_100201f0 * 4;
      lVar23 = (ulong)uVar5 * (ulong)DAT_100201f4;
      *(int *)(param_1 + 0x3f0 + lVar19) = (int)uVar3;
      *(int *)(param_1 + 0x3f4 + lVar19) = (int)((ulong)uVar3 >> 0x20);
      uVar10 = 0xffffffff;
      if ((int)((ulong)lVar23 >> 0x20) == 0) {
        uVar10 = (int)lVar23;
      }
      *(undefined4 *)(param_1 + 0x3f8 + lVar19) = uVar10;
      *(uint *)(param_1 + 0x3fc + lVar19) = uVar27;
      *(uint *)(param_1 + 0x400 + lVar19) = uVar12;
      *(uint *)(param_1 + 0x404 + lVar19) = uVar5;
      *(undefined8 *)(param_1 + 0x408 + lVar19) = 1;
      *(uint *)(param_1 + 0x410 + lVar19) = uVar21;
      *(uint *)(param_1 + 0x414 + lVar19) = uVar26;
      *(int *)(param_1 + 0x418 + lVar19) = iVar14;
      *(int *)(param_1 + 0x41c + lVar19) = iVar25;
      *(uint *)(param_1 + 0x420 + lVar19) = param_4;
      return;
    }
    iVar4 = Ram0000000000006800;
    if ((((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
        (uVar27 = Ram0000000000006808, 0xb < uVar27)) &&
       (uVar27 = Ram0000000000006808, 0x11b < uVar27)) {
      uVar27 = UINT_00006918;
      if (((code *)(ulong)uVar27 == (code *)0x0) ||
         (uVar5 = (*(code *)(ulong)uVar27)(commands,uVar5), uVar5 == 0)) goto LAB_10019fab;
    }
    else {
LAB_10019fab:
      *(undefined1 *)(param_1 + 0x57ec) = 0;
    }
    *(undefined4 *)(param_1 + 0x57e8) = 0;
LAB_10019fbc:
    uVar6 = *(ulong *)(param_1 + 0x350);
    if (uVar6 == 0) {
      return;
    }
    uVar13 = (ulong)(DAT_100201f0 * 4);
    if (uVar13 < (ulong)DAT_100201f0 * 4 || (DAT_100201f4 == 0 || DAT_100201f0 == 0)) {
      return;
    }
    lVar23 = (ulong)(DAT_100201f0 * 4) * (ulong)DAT_100201f4;
    uVar5 = 0xffffffff;
    if ((int)((ulong)lVar23 >> 0x20) == 0) {
      uVar5 = (uint)lVar23;
    }
    local_38 = (int)uVar6;
    if (local_38 == 0) {
      return;
    }
    if (uVar5 != 0 && (ulong)uVar5 < DAT_100201f4 * uVar13) {
      return;
    }
    uVar5 = iVar14 + uVar21;
    uVar27 = iVar25 + uVar26;
    if ((int)DAT_100201f4 <= (int)uVar26 ||
        ((int)DAT_100201f0 <= (int)uVar21 || ((int)uVar27 < 1 || (int)uVar5 < 1))) {
      return;
    }
    uVar7 = 0;
    if (0 < (int)uVar21) {
      uVar7 = param_2 & 0xffffffff;
    }
    uVar12 = (uint)uVar7;
    uVar21 = 0;
    if (0xffffffff < (long)param_2) {
      uVar21 = uVar26;
    }
    uVar26 = DAT_100201f0;
    if ((int)uVar5 < (int)DAT_100201f0) {
      uVar26 = uVar5;
    }
    uVar5 = DAT_100201f4;
    if ((int)uVar27 < (int)DAT_100201f4) {
      uVar5 = uVar27;
    }
    if ((int)uVar5 <= (int)uVar21) {
      return;
    }
    uVar27 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 | param_4 << 0x18
    ;
    uVar17 = (ulong)uVar21;
    uVar1 = (ulong)(~uVar12 + uVar26) + 1;
    uVar21 = uVar26 - uVar12 & 3;
    uVar28 = uVar1 & 0xfffffffffffffff8;
    lVar23 = uVar6 + uVar17 * uVar13 + uVar7 * 4 + 0x10;
    do {
      puVar11 = (undefined1 *)(uVar17 * uVar13 + uVar6 + uVar7 * 4);
      if ((uVar6 & 3) == 0) {
        if ((int)uVar12 < (int)uVar26) {
          if (~uVar12 + uVar26 < 7) {
            uVar16 = uVar12;
          }
          else {
            puVar11 = puVar11 + uVar28 * 4;
            uVar15 = 0;
            do {
              puVar2 = (uint *)(lVar23 + -0x10 + uVar15 * 4);
              *puVar2 = uVar27;
              puVar2[1] = uVar27;
              puVar2[2] = uVar27;
              puVar2[3] = uVar27;
              puVar2 = (uint *)(lVar23 + uVar15 * 4);
              *puVar2 = uVar27;
              puVar2[1] = uVar27;
              puVar2[2] = uVar27;
              puVar2[3] = uVar27;
              uVar15 = uVar15 + 8;
            } while (uVar28 != uVar15);
            uVar16 = (int)uVar28 + uVar12;
            if (uVar1 == uVar28) goto LAB_1001a136;
          }
          lVar19 = 0;
          do {
            *(uint *)(puVar11 + lVar19 * 4) = uVar27;
            lVar19 = lVar19 + 1;
          } while (uVar26 - uVar16 != (int)lVar19);
        }
      }
      else if ((int)uVar12 < (int)uVar26) {
        uVar18 = (undefined1)(param_4 >> 0x18);
        uVar20 = (undefined1)(param_4 >> 0x10);
        uVar8 = (undefined1)(param_4 >> 8);
        uVar16 = uVar12;
        if (uVar21 != 0) {
          iVar14 = 0;
          do {
            *puVar11 = uVar18;
            puVar11[1] = uVar20;
            puVar11[2] = uVar8;
            puVar11[3] = 0xff;
            puVar11 = puVar11 + 4;
            iVar14 = iVar14 + -1;
          } while (-uVar21 != iVar14);
          uVar16 = uVar12 - iVar14;
        }
        if (uVar12 - uVar26 < 0xfffffffd) {
          lVar19 = 0;
          do {
            puVar11[lVar19 * 4] = uVar18;
            puVar11[lVar19 * 4 + 1] = uVar20;
            puVar11[lVar19 * 4 + 2] = uVar8;
            puVar11[lVar19 * 4 + 3] = 0xff;
            puVar11[lVar19 * 4 + 4] = uVar18;
            puVar11[lVar19 * 4 + 5] = uVar20;
            puVar11[lVar19 * 4 + 6] = uVar8;
            puVar11[lVar19 * 4 + 7] = 0xff;
            puVar11[lVar19 * 4 + 8] = uVar18;
            puVar11[lVar19 * 4 + 9] = uVar20;
            puVar11[lVar19 * 4 + 10] = uVar8;
            puVar11[lVar19 * 4 + 0xb] = 0xff;
            puVar11[lVar19 * 4 + 0xc] = uVar18;
            puVar11[lVar19 * 4 + 0xd] = uVar20;
            puVar11[lVar19 * 4 + 0xe] = uVar8;
            puVar11[lVar19 * 4 + 0xf] = 0xff;
            lVar19 = lVar19 + 4;
          } while (uVar26 - uVar16 != (int)lVar19);
        }
      }
LAB_1001a136:
      uVar17 = uVar17 + 1;
      lVar23 = lVar23 + uVar13;
      if (uVar17 == uVar5) {
        return;
      }
    } while( true );
  }
  if ((*(char *)(param_1 + 0x57ec) == '\0') || (*(uint *)(param_1 + 0x57e8) == 0))
  goto LAB_10019d0f;
  iVar4 = Ram0000000000006800;
  if ((iVar4 == 0x50414d57) &&
     (((iVar4 = Ram0000000000006804, iVar4 != 0 && (uVar5 = Ram0000000000006808, 0xb < uVar5)) &&
      (uVar5 = Ram0000000000006808, 0x11b < uVar5)))) {
    uVar5 = UINT_00006918;
    if (((code *)(ulong)uVar5 == (code *)0x0) ||
       (uVar5 = (*(code *)(ulong)uVar5)((void *)(param_1 + 1000),*(uint *)(param_1 + 0x57e8)),
       uVar5 == 0)) goto LAB_10019cfe;
  }
  else {
LAB_10019cfe:
    *(undefined1 *)(param_1 + 0x57ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x57e8) = 0;
LAB_10019d0f:
  uVar27 = DAT_100201f4;
  uVar5 = DAT_100201f0;
  if (((char)param_4 != '\0') && (*(long *)(param_1 + 0x350) != 0)) {
    uVar6 = (ulong)DAT_100201f0;
    uVar12 = DAT_100201f0;
    if ((int)uVar21 < (int)DAT_100201f0) {
      uVar12 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar12 = 0;
    }
    uVar16 = DAT_100201f4;
    if ((int)uVar26 < (int)DAT_100201f4) {
      uVar16 = uVar26;
    }
    if ((long)param_2 < 0) {
      uVar16 = 0;
    }
    uVar21 = iVar14 + uVar21;
    uVar9 = DAT_100201f0;
    if ((int)uVar21 < (int)DAT_100201f0) {
      uVar9 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar9 = 0;
    }
    uVar26 = iVar25 + uVar26;
    uVar21 = DAT_100201f4;
    if ((int)uVar26 < (int)DAT_100201f4) {
      uVar21 = uVar26;
    }
    if ((int)uVar26 < 0) {
      uVar21 = 0;
    }
    if ((int)uVar16 < (int)uVar21) {
      uVar26 = param_4 & 0xff;
      uVar24 = uVar26 ^ 0xff;
      do {
        if ((int)uVar12 < (int)uVar9) {
          uVar22 = uVar12;
          do {
            if ((((-1 < (int)(uVar22 | uVar16)) &&
                 (lVar23 = *(long *)(param_1 + 0x350), lVar23 != 0)) && ((int)uVar22 < (int)uVar5))
               && ((int)uVar16 < (int)uVar27)) {
              lVar19 = (ulong)uVar22 + uVar16 * uVar6;
              *(char *)(lVar23 + lVar19 * 4) =
                   (char)((ulong)(*(byte *)(lVar23 + lVar19 * 4) * uVar24 +
                                 (param_4 >> 0x18) * uVar26 + 0x7f) * 0x1010102 >> 0x20);
              *(char *)(lVar23 + 1 + lVar19 * 4) =
                   (char)((*(byte *)(lVar23 + 1 + lVar19 * 4) * uVar24 +
                          (param_4 >> 0x10 & 0xff) * uVar26 + 0x7f) / 0xff);
              *(char *)(lVar23 + 2 + lVar19 * 4) =
                   (char)((*(byte *)(lVar23 + 2 + lVar19 * 4) * uVar24 +
                          (param_4 >> 8 & 0xff) * uVar26 + 0x7f) / 0xff);
              *(undefined1 *)(lVar23 + 3 + lVar19 * 4) = 0xff;
            }
            uVar22 = uVar22 + 1;
          } while (uVar9 != uVar22);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar21);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006918
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#undef UINT_00006978
#define UINT_00006978 (*(uint *)(0x6978U))
#define local_60 (*(void * *)(frame + 16))
#define local_54 (*(uint *)(frame + 28))
#define local_50 (*(uint *)(frame + 32))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(ulong *)(frame + 40))
#define local_40 (*(void * *)(frame + 48))
#define local_34 (*(uint *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a280
 */

void recovered_1001a280(long param_1,uint param_2,uint param_3,char *param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;

  local_48 = (ulong)param_3;
  if (param_4 == (char *)0x0 || param_1 == 0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  memset(&local_60,0,0x18);
  uVar14 = local_48;
  uVar6 = 1;
  if (1 < (int)param_5) {
    uVar6 = param_5;
  }
  iVar5 = Ram0000000000006800;
  if (iVar5 != 0x50414d57) {
    return;
  }
  iVar5 = Ram0000000000006804;
  if (iVar5 == 0) {
    return;
  }
  uVar15 = Ram0000000000006808;
  if (uVar15 < 0xc) {
    return;
  }
  uVar15 = Ram0000000000006808;
  if (uVar15 < 0x17c) {
    return;
  }
  uVar15 = UINT_00006978;
  if ((code *)(ulong)uVar15 == (code *)0x0) {
    return;
  }
  uVar6 = (*(code *)(ulong)uVar15)(param_4,0xffffffff,uVar6,param_6,&local_60);
  if (uVar6 == 0) {
    return;
  }
  local_40 = local_60;
  if (local_60 == (void *)0x0) {
    return;
  }
  local_34 = param_2;
  if (*(uint *)(param_1 + 0x57e8) == 0) goto LAB_1001a3d6;
  iVar5 = Ram0000000000006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar6 = Ram0000000000006808, 0xb < uVar6)) && (uVar6 = Ram0000000000006808, 0x11b < uVar6)) {
    uVar6 = UINT_00006918;
    if (((code *)(ulong)uVar6 == (code *)0x0) ||
       (uVar6 = (*(code *)(ulong)uVar6)((void *)(param_1 + 1000),*(uint *)(param_1 + 0x57e8)),
       uVar6 == 0)) goto LAB_1001a3c3;
  }
  else {
LAB_1001a3c3:
    *(undefined1 *)(param_1 + 0x57ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x57e8) = 0;
LAB_1001a3d6:
  iVar5 = DAT_100201f4;
  uVar6 = DAT_100201f0;
  if (local_50 != 0) {
    uVar7 = (ulong)DAT_100201f0;
    uVar10 = 0;
    uVar15 = local_54;
    do {
      if (uVar15 == 0) {
        uVar15 = 0;
      }
      else {
        uVar12 = (int)uVar10 + (int)uVar14;
        uVar14 = 0;
        lVar13 = (long)local_40 + 3;
        uVar15 = local_34;
        do {
          lVar4 = *(long *)(param_1 + 0x350);
          if (((int)uVar15 < (int)uVar6 && -1 < (int)(uVar15 | uVar12)) && lVar4 != 0) {
            lVar11 = local_4c * uVar10;
            uVar8 = (uint)*(byte *)(lVar13 + lVar11);
            if ((uVar8 != 0) && ((int)uVar12 < iVar5)) {
              bVar1 = *(byte *)(lVar13 + -3 + lVar11);
              bVar2 = *(byte *)(lVar13 + -2 + lVar11);
              bVar3 = *(byte *)(lVar13 + -1 + lVar11);
              lVar11 = (ulong)uVar15 + uVar7 * uVar12;
              if (uVar8 == 0xff) {
                *(byte *)(lVar4 + lVar11 * 4) = bVar1;
                *(byte *)(lVar4 + 1 + lVar11 * 4) = bVar2;
                *(byte *)(lVar4 + 2 + lVar11 * 4) = bVar3;
              }
              else {
                uVar9 = uVar8 ^ 0xff;
                *(char *)(lVar4 + lVar11 * 4) =
                     (char)((*(byte *)(lVar4 + lVar11 * 4) * uVar9 + bVar1 * uVar8 + 0x7f) / 0xff);
                *(char *)(lVar4 + 1 + lVar11 * 4) =
                     (char)((*(byte *)(lVar4 + 1 + lVar11 * 4) * uVar9 + bVar2 * uVar8 + 0x7f) /
                           0xff);
                *(char *)(lVar4 + 2 + lVar11 * 4) =
                     (char)((*(byte *)(lVar4 + 2 + lVar11 * 4) * uVar9 + bVar3 * uVar8 + 0x7f) /
                           0xff);
              }
              *(undefined1 *)(lVar4 + 3 + lVar11 * 4) = 0xff;
            }
          }
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 4;
        } while (uVar14 < local_54);
        uVar14 = local_48;
        uVar15 = local_54;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_50);
  }
  iVar5 = Ram0000000000006800;
  if ((((iVar5 == 0x50414d57) && (iVar5 = Ram0000000000006804, iVar5 != 0)) &&
      (uVar6 = Ram0000000000006808, 0xb < uVar6)) && (uVar6 = Ram0000000000006808, 0x53 < uVar6)) {
    uVar6 = UINT_00006850;
    if ((code *)(ulong)uVar6 != (code *)0x0) {
      (*(code *)(ulong)uVar6)(local_40);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006918
#undef UINT_00006978
#undef local_60
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_40
#undef local_34

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef str_1001e9f3
#define str_1001e9f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
#undef str_1001f201
#define str_1001f201 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12f4U)))
#undef str_1001f215
#define str_1001f215 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1308U)))
#define local_d8 (*(char (*)[192])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a5d0
 */

void recovered_1001a5d0(long param_1,long param_2,char *param_3,long param_4,long param_5)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (param_5 == 0) {
      if (param_3 == (char *)0x0) {
        pcVar1 = str_1001e9f3;
      }
      else {
        pcVar1 = str_1001e9f3;
        if (*param_3 != '\0') {
          pcVar1 = param_3;
        }
      }
      pf_varargs_1001df25__8__4_
                (local_d8,0xc0,str_1001f215,(ulonglong)pcVar1,(uint)(param_4 + 0x3ffU >> 10));
    }
    else {
      if (param_3 == (char *)0x0) {
        pcVar1 = str_1001e9f3;
      }
      else {
        pcVar1 = str_1001e9f3;
        if (*param_3 != '\0') {
          pcVar1 = param_3;
        }
      }
      pf_varargs_1001df25__8__4__4_
                (local_d8,0xc0,str_1001f201,(ulonglong)pcVar1,(uint)(param_4 + 0x3ffU >> 10),
                 (uint)(param_5 + 0x3ffU >> 10));
    }
    pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,(ulonglong)local_d8);
    recovered_10019c30(param_1,(ulong)(DAT_100201f4 - 0x16) << 0x20,
                       (ulong)DAT_100201f0 | 0x1600000000,0xeceff1ff);
    recovered_10019c30(param_1,(ulong)(DAT_100201f4 - 0x16) << 0x20,
                       (ulong)DAT_100201f0 | 0x100000000,0x7a848eff);
    recovered_1001a280(param_1,10,DAT_100201f4 - 0xf,(char *)(param_2 + 0x141),1,0x12181cff);
  }
  return;
}

#undef DAT_1001e232
#undef DAT_100201f0
#undef DAT_100201f4
#undef str_1001e9f3
#undef str_1001f201
#undef str_1001f215
#undef local_d8

#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001a750
 */

void recovered_1001a750(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;

  iVar1 = DAT_100201f4;
  uVar13 = (ulong)(DAT_100201f4 - 0x3c) << 0x20;
  uVar15 = 0x120000000c;
  if (0x9d < DAT_100201f4) {
    uVar15 = uVar13 - 0x4ffffffff4;
  }
  if (param_2 != 0) {
    iVar12 = *(int *)(param_2 + 0x544d0);
    iVar2 = DAT_100201f4 + -0x5e;
    iVar11 = iVar12 - iVar2;
    if (iVar11 != 0 && iVar2 <= iVar12) {
      uVar7 = (uint)(uVar15 >> 0x20);
      uVar3 = (int)(iVar2 * uVar7) / iVar12;
      uVar8 = 0x12;
      if (0x12 < (int)uVar3) {
        uVar8 = uVar3;
      }
      if ((int)uVar7 <= (int)uVar8) {
        uVar8 = uVar7;
      }
      uVar9 = (ulong)uVar8;
      iVar12 = 1;
      if (1 < iVar11) {
        iVar12 = iVar11;
      }
      uVar14 = (ulong)((int)((uVar7 - uVar8) * *(int *)(param_2 + 0x544cc)) / iVar12 + 0x4e) << 0x20
               | 8;
      goto joined_r0x1001a81f;
    }
  }
  uVar9 = uVar15 >> 0x20;
  uVar14 = 0x4e00000008;
joined_r0x1001a81f:
  if (param_1 == 0) {
    return;
  }
  uVar4 = (ulong)(DAT_100201f4 - 0x2c) << 0x20;
  uVar5 = uVar4 + 8;
  uVar6 = uVar13 | 8;
  lVar10 = uVar9 << 0x20;
  recovered_10019c30(param_1,0x4e00000008,uVar15,0xe4e4e4ff);
  recovered_10019c30(param_1,0x4e00000008,0x10000000c,0xacacacff);
  recovered_10019c30(param_1,(uVar15 & 0xffffffff00000000) + 0x4d00000008,0x10000000c,0xacacacff);
  lVar16 = (uVar15 & 0xffffffff00000000) + 1;
  recovered_10019c30(param_1,0x4e00000008,lVar16,0xacacacff);
  recovered_10019c30(param_1,0x4e00000013,lVar16,0xacacacff);
  recovered_10019c30(param_1,((ulong)((int)uVar14 + 1) | uVar14 & 0xffffffff00000000) + 0x100000000,
                     lVar10 + -0x1fffffff6,0xbebebeff);
  recovered_10019c30(param_1,uVar14,0x10000000c,0x747474ff);
  recovered_10019c30(param_1,(lVar10 + uVar14 & 0xffffffff00000008) - 0x100000000,0x10000000c,
                     0x747474ff);
  recovered_10019c30(param_1,uVar14,lVar10 + 1,0x747474ff);
  recovered_10019c30(param_1,(ulong)((int)uVar14 + 0xb) | uVar14 & 0xffffffff00000000,lVar10 + 1,
                     0x747474ff);
  recovered_10019c30(param_1,uVar6,0xe0000000c,0xeeeeeeff);
  recovered_10019c30(param_1,uVar6,0x10000000c,0x969696ff);
  recovered_10019c30(param_1,uVar13 + 0xd00000008,0x10000000c,0x969696ff);
  recovered_10019c30(param_1,uVar6,0xe00000001,0x969696ff);
  recovered_10019c30(param_1,uVar13 | 0x13,0xe00000001,0x969696ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x39) << 0x20 | 0xe,0x100000001,0x464646ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x38) << 0x20 | 0xd,0x100000003,0x464646ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x37) << 0x20 | 0xc,0x100000005,0x464646ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x36) << 0x20 | 0xb,0x100000007,0x464646ff);
  recovered_10019c30(param_1,uVar5,0xe0000000c,0xeeeeeeff);
  recovered_10019c30(param_1,uVar5,0x10000000c,0x969696ff);
  recovered_10019c30(param_1,uVar4 + 0xd00000008,0x10000000c,0x969696ff);
  recovered_10019c30(param_1,uVar5,0xe00000001,0x969696ff);
  recovered_10019c30(param_1,uVar4 | 0x13,0xe00000001,0x969696ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x27) << 0x20 | 0xb,0x100000007,0x464646ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x26) << 0x20 | 0xc,0x100000005,0x464646ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x25) << 0x20 | 0xd,0x100000003,0x464646ff);
  recovered_10019c30(param_1,(ulong)(iVar1 - 0x24) << 0x20 | 0xe,0x100000001,0x464646ff);
  return;
}

#undef DAT_100201f4

#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001abb0
 */

uint128 recovered_1001abb0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint128 auVar9;

  uVar5 = 0x120000000c;
  if (0x9d < DAT_100201f4) {
    uVar5 = ((ulong)(DAT_100201f4 - 0x3c) << 0x20) - 0x4ffffffff4;
  }
  if (param_1 != 0) {
    iVar8 = *(int *)(param_1 + 0x544d0);
    iVar1 = DAT_100201f4 + -0x5e;
    iVar6 = iVar8 - iVar1;
    if (iVar6 != 0 && iVar1 <= iVar8) {
      uVar4 = (uint)(uVar5 >> 0x20);
      uVar2 = (int)(iVar1 * uVar4) / iVar8;
      uVar7 = 0x12;
      if (0x12 < (int)uVar2) {
        uVar7 = uVar2;
      }
      if ((int)uVar4 <= (int)uVar7) {
        uVar7 = uVar4;
      }
      iVar8 = 1;
      if (1 < iVar6) {
        iVar8 = iVar6;
      }
      uVar3 = (ulong)((int)((uVar4 - uVar7) * *(int *)(param_1 + 0x544cc)) / iVar8 + 0x4e) << 0x20 |
              8;
      uVar5 = (ulong)uVar7;
      goto LAB_1001ac54;
    }
  }
  uVar5 = uVar5 >> 0x20;
  uVar3 = 0x4e00000008;
LAB_1001ac54:
  PF_PART8(auVar9, 8) = uVar5 << 0x20 | 0xc;
  PF_PART8(auVar9, 0) = uVar3;
  return auVar9;
}

#undef DAT_100201f4

#undef DAT_1001f226
#define DAT_1001f226 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1319U)))
#undef DAT_1001f228
#define DAT_1001f228 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x131bU)))
#undef DAT_1001f22a
#define DAT_1001f22a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x131dU)))
#undef DAT_1001f244
#define DAT_1001f244 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1337U)))
#undef DAT_1001f248
#define DAT_1001f248 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x133bU)))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef str_1001f22d
#define str_1001f22d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1320U)))
#undef str_1001f239
#define str_1001f239 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132cU)))
#undef str_1001f24a
#define str_1001f24a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x133dU)))
#undef str_1001f264
#define str_1001f264 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1357U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ac60
 */

void recovered_1001ac60(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;

  if (((param_1 == 0) || (*(uint *)(param_1 + 0x205c38) == 0)) ||
     (*(uint *)(param_1 + 0x205c38) <= *(uint *)(param_1 + 0x205c3c))) {
    return;
  }
  lVar7 = (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0;
  lVar1 = lVar7 + param_1;
  *(undefined4 *)(param_1 + 0x57e8) = 0;
  recovered_10019c30(param_1,0,CONCAT44(DAT_100201f4,DAT_100201f0),0xfffffcff);
  recovered_10019c30(param_1,0,(ulong)DAT_100201f0 | 0x4800000000,0xe1e5e8ff);
  recovered_10019c30(param_1,0x4700000000,(ulong)DAT_100201f0 + 0x100000000,0x7a848eff);
  if ((*(int *)(param_1 + 0x5adcc + lVar7) == 0) ||
     (uVar4 = 0xecf0f2ff, *(int *)(lVar1 + 0x5add0) == 0)) {
    uVar4 = 0xd2d6daff;
  }
  recovered_10019c30(param_1,0x90000000a,0x1a0000001a,uVar4);
  recovered_10019c30(param_1,0x90000000a,0x10000001a,0x7a848eff);
  recovered_10019c30(param_1,0x220000000a,0x10000001a,0x7a848eff);
  recovered_10019c30(param_1,0x90000000a,0x1a00000001,0x7a848eff);
  recovered_10019c30(param_1,0x900000023,0x1a00000001,0x7a848eff);
  if ((*(int *)(lVar1 + 0x5adcc) == 0) || (uVar4 = 0x12181cff, *(int *)(lVar1 + 0x5add0) == 0)) {
    uVar4 = 0x808890ff;
  }
  recovered_1001a280(param_1,0x12,0x12,&DAT_1001f226,1,uVar4);
  if ((*(uint *)(lVar1 + 0x5adcc) == 0) ||
     (uVar4 = 0xecf0f2ff, *(uint *)(lVar1 + 0x5adcc) <= *(int *)(lVar1 + 0x5add0) + 1U)) {
    uVar4 = 0xd2d6daff;
  }
  recovered_10019c30(param_1,0x900000028,0x1a0000001a,uVar4);
  recovered_10019c30(param_1,0x900000028,0x10000001a,0x7a848eff);
  recovered_10019c30(param_1,0x2200000028,0x10000001a,0x7a848eff);
  recovered_10019c30(param_1,0x900000028,0x1a00000001,0x7a848eff);
  recovered_10019c30(param_1,0x900000041,0x1a00000001,0x7a848eff);
  if ((*(uint *)(lVar1 + 0x5adcc) == 0) ||
     (uVar4 = 0x12181cff, *(uint *)(lVar1 + 0x5adcc) <= *(int *)(lVar1 + 0x5add0) + 1U)) {
    uVar4 = 0x808890ff;
  }
  recovered_1001a280(param_1,0x30,0x12,&DAT_1001f228,1,uVar4);
  uVar4 = DAT_100201f0;
  uVar3 = (ulong)(DAT_100201f0 - 0xfa);
  recovered_10019c30(param_1,0x90000004a,uVar3 + 0x1a00000000,0xfafcfcff);
  uVar9 = 0x7a848eff;
  if (*(char *)(param_1 + 0x57ef) != '\0') {
    uVar9 = 0x165cb0ff;
  }
  recovered_10019c30(param_1,0x90000004a,uVar3 + 0x100000000,uVar9);
  recovered_10019c30(param_1,0x220000004a,uVar3 + 0x100000000,uVar9);
  recovered_10019c30(param_1,0x90000004a,0x1a00000001,uVar9);
  recovered_10019c30(param_1,uVar3 + 0x49 | 0x900000000,0x1a00000001,uVar9);
  recovered_1001a280(param_1,0x50,0x11,(char *)(param_1 + 0x57f2),1,0x12181cff);
  if ((*(char *)(param_1 + 0x57ef) == '\x01') &&
     (((ulong)*(uint *)(param_1 + 0x205c4c) / 0x18 & 1) == 0)) {
    uVar2 = recovered_10015e00((char *)(param_1 + 0x57f2),1);
    uVar9 = uVar4 - 0xb8;
    if ((int)(uVar2 + 0x50) < (int)(uVar4 - 0xb8)) {
      uVar9 = uVar2 + 0x50;
    }
    uVar3 = 0x50;
    if (-1 < (int)uVar2) {
      uVar3 = (ulong)uVar9;
    }
    recovered_10019c30(param_1,uVar3 | 0xf00000000,0xe00000001,0x12181cff);
  }
  uVar4 = DAT_100201f0;
  recovered_10019c30(param_1,(ulong)(DAT_100201f0 - 0xa6) | 0x900000000,0x1a0000002e,0x165cb0ff);
  recovered_1001a280(param_1,uVar4 - 0x9a,0x12,&DAT_1001f22a,1,0xffffffff);
  uVar4 = DAT_100201f0;
  uVar8 = (ulong)(DAT_100201f0 - 0x70);
  uVar3 = uVar8 | 0x900000000;
  uVar9 = 0xbfe2c8ff;
  if (*(char *)(param_1 + 0x57f0) != '\0') {
    uVar9 = 0xced6dbff;
  }
  recovered_10019c30(param_1,uVar3,0x1a00000068,uVar9);
  recovered_10019c30(param_1,uVar3,0x100000068,0x7a848eff);
  recovered_10019c30(param_1,uVar8 | 0x2200000000,0x100000068,0x7a848eff);
  recovered_10019c30(param_1,uVar3,0x1a00000001,0x7a848eff);
  recovered_10019c30(param_1,uVar8 + 0x67 | 0x900000000,0x1a00000001,0x7a848eff);
  pcVar5 = str_1001f239;
  if (*(char *)(param_1 + 0x57f0) != '\0') {
    pcVar5 = str_1001f22d;
  }
  recovered_1001a280(param_1,uVar4 - 0x68,0x12,pcVar5,1,0x12181cff);
  if (*(int *)(param_1 + 0x205c38) == 0) {
    uVar4 = 0;
  }
  else {
    pcVar5 = (char *)(param_1 + 0x59f9);
    uVar9 = 0x10;
    uVar3 = 0;
    do {
      uVar8 = (ulong)(uVar9 - 8);
      uVar10 = uVar8 | 0x2f00000000;
      uVar4 = 0xccd3d8ff;
      if (uVar3 == *(uint *)(param_1 + 0x205c3c)) {
        uVar4 = 0xfffffcff;
      }
      recovered_10019c30(param_1,uVar10,0x1800000084,uVar4);
      recovered_10019c30(param_1,uVar10,0x100000084,0x7a848eff);
      recovered_10019c30(param_1,uVar8 | 0x4600000000,0x100000084,0x7a848eff);
      recovered_10019c30(param_1,uVar10,0x1800000001,0x7a848eff);
      recovered_10019c30(param_1,uVar8 + 0x83 | 0x2f00000000,0x1800000001,0x7a848eff);
      pcVar6 = pcVar5;
      if (*pcVar5 == '\0') {
        pcVar6 = &DAT_1001f244;
      }
      recovered_1001a280(param_1,uVar9,0x37,pcVar6,1,0x12181cff);
      uVar3 = uVar3 + 1;
      uVar4 = *(uint *)(param_1 + 0x205c38);
      pcVar5 = pcVar5 + 0x555e0;
      uVar9 = uVar9 + 0x88;
    } while (uVar3 < uVar4);
    if (5 < uVar4) goto LAB_1001b441;
  }
  uVar8 = (ulong)(uVar4 * 0x88 + 8);
  uVar3 = uVar8 + 0x3100000000;
  recovered_10019c30(param_1,uVar3,0x1600000018,0xecf0f2ff);
  recovered_10019c30(param_1,uVar3,0x100000018,0x7a848eff);
  recovered_10019c30(param_1,uVar8 | 0x4600000000,0x100000018,0x7a848eff);
  recovered_10019c30(param_1,uVar3,0x1600000001,0x7a848eff);
  recovered_10019c30(param_1,uVar8 + 0x3100000017,0x1600000001,0x7a848eff);
  recovered_1001a280(param_1,uVar4 * 0x88 + 0xf,0x38,&DAT_1001f248,1,0x12181cff);
LAB_1001b441:
  recovered_1001a750(param_1,lVar1 + 0x58f8);
  recovered_10019c30(param_1,(ulong)(DAT_100201f4 - 0x16) << 0x20,(ulong)DAT_100201f0 + 0x1600000000
                     ,0xeceff1ff);
  recovered_10019c30(param_1,(ulong)(DAT_100201f4 - 0x16) << 0x20,(ulong)DAT_100201f0 + 0x100000000,
                     0x7a848eff);
  if (*(char *)(lVar1 + 0x5a39) == '\0') {
    pcVar5 = str_1001f264;
    if (*(char *)(param_1 + 0x57ec) != '\0') {
      pcVar5 = str_1001f24a;
    }
  }
  else {
    pcVar5 = (char *)(lVar1 + 0x5a39);
  }
  recovered_1001a280(param_1,10,DAT_100201f4 - 0xf,pcVar5,1,0x12181cff);
  return;
}

#undef DAT_1001f226
#undef DAT_1001f228
#undef DAT_1001f22a
#undef DAT_1001f244
#undef DAT_1001f248
#undef DAT_100201f0
#undef DAT_100201f4
#undef str_1001f22d
#undef str_1001f239
#undef str_1001f24a
#undef str_1001f264

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
#define local_50 (*(long *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b510
 */

void recovered_1001b510(long param_1,long *param_2,long param_3,ulong param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;

  if (param_2 == (long *)0x0) {
    return;
  }
  lVar5 = *param_2;
  if (lVar5 == 0 || param_1 == 0) {
    return;
  }
  uVar7 = *(uint *)((long)param_2 + 0xc);
  if (uVar7 == 0) {
    return;
  }
  uVar18 = *(uint *)(param_2 + 2);
  uVar14 = (uint)param_4;
  uVar21 = (uint)(param_4 >> 0x20);
  if (((int)uVar21 < 1 || (int)uVar14 < 1) || uVar18 == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x57e8) == 0) goto LAB_1001b626;
  iVar6 = Ram0000000000006800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
      (uVar7 = Ram0000000000006808, 0xb < uVar7)) && (uVar7 = Ram0000000000006808, 0x11b < uVar7)) {
    uVar7 = UINT_00006918;
    if (((code *)(ulong)uVar7 == (code *)0x0) ||
       (uVar7 = (*(code *)(ulong)uVar7)((void *)(param_1 + 1000),*(uint *)(param_1 + 0x57e8)),
       uVar7 == 0)) goto LAB_1001b602;
  }
  else {
LAB_1001b602:
    *(undefined1 *)(param_1 + 0x57ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x57e8) = 0;
  uVar7 = *(uint *)((long)param_2 + 0xc);
  uVar18 = *(uint *)(param_2 + 2);
LAB_1001b626:
  uVar12 = (ulong)uVar18;
  uVar10 = (uVar14 & 0x7fffffff) * uVar12;
  uVar19 = (ulong)uVar7;
  if ((uVar10 & 0x7fffffff00000000) == 0) {
    uVar7 = (uint)((uVar10 & 0xffffffff) / uVar19);
  }
  else {
    uVar7 = (uint)(uVar10 / uVar19);
  }
  uVar18 = uVar14;
  if ((int)uVar7 < (int)uVar21) {
    uVar19 = uVar19 * (param_4 >> 0x20);
    if (uVar19 >> 0x20 == 0) {
      uVar18 = (uint)((uVar19 & 0xffffffff) / uVar12);
    }
    else {
      uVar18 = (uint)(uVar19 / uVar12);
    }
    uVar7 = uVar21;
    if ((int)uVar18 < 1) {
      return;
    }
  }
  lVar15 = (long)(int)DAT_100201f0;
  lVar11 = (long)DAT_100201f4;
  uVar10 = (ulong)DAT_100201f0;
  local_50 = (param_3 >> 0x20) * uVar10 * 4 + 3;
  uVar19 = 0;
  do {
    uVar12 = ((long)((int)(uVar7 - uVar21) / 2) + uVar19) * (ulong)*(uint *)(param_2 + 2);
    if (uVar12 >> 0x20 == 0) {
      uVar8 = (uint)((uVar12 & 0xffffffff) / (ulong)uVar7);
    }
    else {
      uVar8 = (uint)(uVar12 / uVar7);
    }
    lVar1 = uVar19 + (param_3 >> 0x20);
    lVar20 = (long)(int)param_3;
    uVar12 = (ulong)(uVar14 & 0x7fffffff);
    lVar22 = (long)((int)(uVar18 - uVar14) / 2);
    do {
      uVar13 = lVar22 * (ulong)*(uint *)((long)param_2 + 0xc);
      if (uVar13 >> 0x20 == 0) {
        uVar9 = (uint)((uVar13 & 0xffffffff) / (ulong)uVar18);
      }
      else {
        uVar9 = (uint)(uVar13 / uVar18);
      }
      if ((lVar20 < lVar15 && -1 < (int)((uint)lVar20 | (uint)lVar1)) &&
          *(long *)(param_1 + 0x350) != 0) {
        lVar17 = (ulong)uVar9 + (ulong)*(uint *)((long)param_2 + 0xc) * (ulong)uVar8;
        uVar9 = (uint)*(byte *)(lVar5 + 3 + lVar17 * 4);
        if ((uVar9 != 0) && (lVar1 < lVar11)) {
          bVar2 = *(byte *)(lVar5 + lVar17 * 4);
          bVar3 = *(byte *)(lVar5 + 1 + lVar17 * 4);
          bVar4 = *(byte *)(lVar5 + 2 + lVar17 * 4);
          lVar17 = *(long *)(param_1 + 0x350) + local_50;
          if (uVar9 == 0xff) {
            *(byte *)(lVar17 + -3 + lVar20 * 4) = bVar2;
            *(byte *)(lVar17 + -2 + lVar20 * 4) = bVar3;
            *(byte *)(lVar17 + -1 + lVar20 * 4) = bVar4;
          }
          else {
            uVar16 = uVar9 ^ 0xff;
            *(char *)(lVar17 + -3 + lVar20 * 4) =
                 (char)((*(byte *)(lVar17 + -3 + lVar20 * 4) * uVar16 + bVar2 * uVar9 + 0x7f) / 0xff
                       );
            *(char *)(lVar17 + -2 + lVar20 * 4) =
                 (char)((*(byte *)(lVar17 + -2 + lVar20 * 4) * uVar16 + bVar3 * uVar9 + 0x7f) / 0xff
                       );
            *(char *)(lVar17 + -1 + lVar20 * 4) =
                 (char)((bVar4 * uVar9 + *(byte *)(lVar17 + -1 + lVar20 * 4) * uVar16 + 0x7f) / 0xff
                       );
          }
          *(undefined1 *)(lVar17 + lVar20 * 4) = 0xff;
        }
      }
      lVar20 = lVar20 + 1;
      lVar22 = lVar22 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar19 = uVar19 + 1;
    local_50 = local_50 + uVar10 * 4;
  } while (uVar19 != param_4 >> 0x20);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006918
#undef local_50

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000683c
#define UINT_0000683c (*(uint *)(0x683cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#undef str_1001e9f3
#define str_1001e9f3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae6U)))
#define local_2d8 (*(byte (*)[256])(frame + 24))
#define local_1d8 (*(byte *)(frame + 280))
#define local_1d7 (*(byte *)(frame + 281))
#define local_1d6 (*(byte *)(frame + 282))
#define local_1d5 (*(byte *)(frame + 283))
#define local_1d4 (*(byte *)(frame + 284))
#define local_1d3 (*(byte *)(frame + 285))
#define local_1d2 (*(byte *)(frame + 286))
#define local_1d1 (*(byte *)(frame + 287))
#define local_d0 (*(void * (*)[3])(frame + 544))
#define local_b8 (*(ulong *)(frame + 568))
#define local_b0 (*(long *)(frame + 576))
#define local_a8 (*(ulong *)(frame + 584))
#define local_a0 (*(char * *)(frame + 592))
#define local_98 (*(uint *)(frame + 600))
#define local_94 (*(uint *)(frame + 604))
#define local_90 (*(int *)(frame + 608))
#define local_8c (*(uint *)(frame + 612))
#define local_88 (*(long *)(frame + 616))
#define local_80 (*(long *)(frame + 624))
#define local_78 (*(long *)(frame + 632))
#define local_70 (*(ulong *)(frame + 640))
#define local_68 (*(ulong *)(frame + 648))
#define local_60 (*(ulong *)(frame + 656))
#define local_58 (*(ulong *)(frame + 664))
#define local_50 (*(ulong *)(frame + 672))
#define local_48 (*(uint *)(frame + 680))
#define local_44 (*(uint *)(frame + 684))
#define local_40 (*(ulong *)(frame + 688))
#define local_38 (*(long *)(frame + 696))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001b8d0
 */

void recovered_1001b8d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[784] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  bool bVar21;

  if (param_2 != 0) {
    local_44 = 0x161c22ff;
    if (*(char *)(param_2 + 0x332) == '\x01') {
      local_44 = *(uint *)(param_2 + 0x338);
    }
    local_8c = 0x1252b4ff;
    if (*(char *)(param_2 + 0x333) == '\x01') {
      local_8c = *(uint *)(param_2 + 0x33c);
    }
    if (param_1 != 0) {
      lVar16 = param_2 + 0x440;
      local_a0 = (char *)(param_2 + 0x141);
      uVar5 = (ulong)*(uint *)(param_2 + 0x52c40);
      uVar7 = CONCAT71((int7)((ulong)param_4 >> 8),1);
      uVar4 = 0;
      local_88 = param_2;
      local_78 = lVar16;
      local_38 = param_1;
      do {
        iVar20 = (int)uVar5;
        uVar5 = 0;
        if (iVar20 != 0) {
          local_94 = (uint)uVar7;
          local_50 = 0;
          local_48 = uVar4;
          do {
            lVar13 = local_38;
            uVar17 = local_8c;
            lVar8 = local_50 * 0x370;
            if (uVar4 == (*(int *)(lVar16 + lVar8) == 7)) goto switchD_1001bab5_default;
            lVar1 = lVar16 + lVar8;
            iVar20 = 0;
            if (*(char *)(lVar1 + 0x36c) == '\0') {
              iVar20 = *(int *)(local_88 + 0x544cc);
            }
            local_58 = *(ulong *)(lVar16 + 4 + lVar8);
            uVar5 = *(ulong *)(lVar16 + 0xc + lVar8);
            uVar14 = ((int)(local_58 >> 0x20) + 0x48) - iVar20;
            uVar7 = (ulong)uVar14;
            uVar18 = uVar5 >> 0x20;
            iVar20 = uVar14 + (int)(uVar5 >> 0x20);
            if ((iVar20 < 0x48) || (DAT_100201f4 + -0x16 <= (int)uVar14))
            goto switchD_1001bab5_default;
            uVar12 = (uint)local_58;
            local_80 = lVar1;
            local_40 = uVar5;
            switch((uintptr_t)(*(int *)(lVar16 + lVar8))) {
            case 0:
            case 1:
              uVar17 = *(uint *)(lVar1 + 0x358);
              goto LAB_1001c05f;
            case 2:
              recovered_1001a280(local_38,uVar12,uVar14,(char *)(lVar1 + 0x14),
                                 *(uint *)(lVar1 + 0x358),local_8c);
              lVar16 = local_78;
              uVar4 = recovered_10015e00((char *)(lVar1 + 0x14),*(uint *)(lVar1 + 0x358));
              uVar7 = CONCAT44(iVar20 + -2,(undefined4)local_58);
              uVar5 = (ulong)uVar4 | 0x100000000;
              uVar4 = local_48;
              goto LAB_1001b9fc;
            case 3:
              local_90 = -1;
              local_60 = uVar7;
              recovered_10008100(local_88,(byte *)(lVar1 + 0xd4),(char *)&local_1d8);
              if (local_1d8 == 0) {
                cVar15 = '\0';
              }
              else {
                bVar2 = local_1d8 | 0x20;
                if (0x19 < (byte)(local_1d8 + 0xbf)) {
                  bVar2 = local_1d8;
                }
                if ((bVar2 == 0x68) && (local_1d7 != 0)) {
                  bVar2 = local_1d7 | 0x20;
                  if (0x19 < (byte)(local_1d7 + 0xbf)) {
                    bVar2 = local_1d7;
                  }
                  if (bVar2 == 0x74) {
                    if (local_1d6 != 0) {
                      bVar2 = local_1d6 | 0x20;
                      if (0x19 < (byte)(local_1d6 + 0xbf)) {
                        bVar2 = local_1d6;
                      }
                      if ((bVar2 != 0x74) || (local_1d5 == 0)) goto code_r0x1001c0a1;
                      bVar2 = local_1d5 | 0x20;
                      if (0x19 < (byte)(local_1d5 + 0xbf)) {
                        bVar2 = local_1d5;
                      }
                      if ((bVar2 != 0x70) || (local_1d4 == 0)) goto code_r0x1001c0a1;
                      bVar2 = local_1d4 | 0x20;
                      if (0x19 < (byte)(local_1d4 + 0xbf)) {
                        bVar2 = local_1d4;
                      }
                      if ((bVar2 != 0x3a) || (local_1d3 == 0)) goto code_r0x1001c0a1;
                      bVar2 = local_1d3 | 0x20;
                      if (0x19 < (byte)(local_1d3 + 0xbf)) {
                        bVar2 = local_1d3;
                      }
                      if ((bVar2 != 0x2f) || (local_1d2 == 0)) goto code_r0x1001c0a1;
                      bVar2 = local_1d2 | 0x20;
                      if (0x19 < (byte)(local_1d2 + 0xbf)) {
                        bVar2 = local_1d2;
                      }
                      if (bVar2 != 0x2f) goto code_r0x1001c0a1;
LAB_1001bdf1:
                      uVar6 = recovered_10018890(&local_1d8,(char *)&local_1d8);
                      cVar15 = (char)uVar6;
                      goto LAB_1001c178;
                    }
code_r0x1001c0a1:
                    if (local_1d6 != 0) {
                      bVar2 = local_1d6 | 0x20;
                      if (0x19 < (byte)(local_1d6 + 0xbf)) {
                        bVar2 = local_1d6;
                      }
                      if ((bVar2 == 0x74) && (local_1d5 != 0)) {
                        bVar2 = local_1d5 | 0x20;
                        if (0x19 < (byte)(local_1d5 + 0xbf)) {
                          bVar2 = local_1d5;
                        }
                        if ((bVar2 == 0x70) && (local_1d4 != 0)) {
                          bVar2 = local_1d4 | 0x20;
                          if (0x19 < (byte)(local_1d4 + 0xbf)) {
                            bVar2 = local_1d4;
                          }
                          if ((bVar2 == 0x73) && (local_1d3 != 0)) {
                            bVar2 = local_1d3 | 0x20;
                            if (0x19 < (byte)(local_1d3 + 0xbf)) {
                              bVar2 = local_1d3;
                            }
                            if ((bVar2 == 0x3a) && (local_1d2 != 0)) {
                              bVar2 = local_1d2 | 0x20;
                              if (0x19 < (byte)(local_1d2 + 0xbf)) {
                                bVar2 = local_1d2;
                              }
                              if ((bVar2 == 0x2f) && (local_1d1 != 0)) {
                                bVar2 = local_1d1 | 0x20;
                                if (0x19 < (byte)(local_1d1 + 0xbf)) {
                                  bVar2 = local_1d1;
                                }
                                if (bVar2 == 0x2f) goto LAB_1001bdf1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                cVar15 = '\0';
              }
LAB_1001c178:
              uVar7 = local_60 << 0x20;
              local_68 = local_58 & 0xffffffff;
              uVar5 = uVar7 + local_68;
              memset(local_d0,0,0x18);
              uVar3 = recovered_100097d0((char *)&local_1d8,&local_90,local_2d8);
              if ((char)uVar3 == '\0') {
LAB_1001c361:
                lVar16 = local_38;
                uVar18 = local_40;
                recovered_10019c30(local_38,uVar5,local_40,0xe8ecefff);
                uVar19 = uVar18 & 0xffffffff00000000;
                uVar18 = uVar18 & 0xffffffff | 0x100000000;
                local_70 = uVar7;
                recovered_10019c30(lVar16,uVar5,uVar18,0x7a848eff);
                recovered_10019c30(lVar16,(uVar19 - 0x100000000) + uVar7 | local_68,uVar18,
                                   0x7a848eff);
                uVar19 = uVar19 | 1;
                recovered_10019c30(lVar16,uVar5,uVar19,0x7a848eff);
                iVar20 = (int)local_58;
                recovered_10019c30(lVar16,((int)local_40 + iVar20) - 1 | local_70,uVar19,0x7a848eff)
                ;
                pcVar10 = (char *)(local_80 + 0x14);
                if (*(char *)(local_80 + 0x14) == '\0') {
                  pcVar10 = str_1001e9f3;
                }
                recovered_1001a280(lVar16,iVar20 + 10,(int)local_60 + 0xc,pcVar10,1,0x444a52ff);
              }
              else {
                iVar20 = Ram0000000000006800;
                if ((((iVar20 != 0x50414d57) || (iVar20 = Ram0000000000006804, iVar20 == 0)) ||
                    (uVar4 = Ram0000000000006808, uVar4 < 0xc)) ||
                   (uVar4 = Ram0000000000006808, uVar4 < 0xe4)) {
                  iVar20 = Ram0000000000006800;
                  if (((iVar20 == 0x50414d57) && (iVar20 = Ram0000000000006804, iVar20 != 0)) &&
                     ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                      (uVar4 = Ram0000000000006808, 0x5b < uVar4)))) {
                    uVar4 = UINT_00006858;
                    if (((code *)(ulong)uVar4 != (code *)0x0) &&
                       (uVar4 = (*(code *)(ulong)uVar4)((char *)local_2d8,local_d0), uVar4 != 0))
                    goto LAB_1001c27d;
                  }
LAB_1001c2f6:
                  if (cVar15 != '\0') {
                    iVar20 = Ram0000000000006800;
                    if ((((iVar20 == 0x50414d57) && (iVar20 = Ram0000000000006804, iVar20 != 0)) &&
                        (uVar4 = Ram0000000000006808, 0xb < uVar4)) &&
                       (uVar4 = Ram0000000000006808, 0x3f < uVar4)) {
                      uVar4 = UINT_0000683c;
                      if ((code *)(ulong)uVar4 != (code *)0x0) {
                        (*(code *)(ulong)uVar4)((char *)local_2d8);
                      }
                    }
                    pf_varargs_1001df25__8_(local_a0,0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x1371U));
                  }
                  goto LAB_1001c361;
                }
                uVar4 = UINT_000068e0;
                if (((code *)(ulong)uVar4 == (code *)0x0) ||
                   (uVar4 = (*(code *)(ulong)uVar4)(local_90,(char *)local_2d8,local_d0), uVar4 == 0
                   )) goto LAB_1001c2f6;
LAB_1001c27d:
                recovered_1001c940(local_38,(long *)local_d0,uVar5,local_40);
                if (((local_d0[0] != (void *)0x0) &&
                    (iVar20 = Ram0000000000006800, iVar20 == 0x50414d57)) &&
                   ((iVar20 = Ram0000000000006804, iVar20 != 0 &&
                    ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                     (uVar4 = Ram0000000000006808, 0x53 < uVar4)))))) {
                  uVar4 = UINT_00006850;
                  if ((code *)(ulong)uVar4 != (code *)0x0) {
                    (*(code *)(ulong)uVar4)(local_d0[0]);
                  }
                }
                memset(local_d0,0,0x18);
              }
              lVar16 = local_78;
              uVar4 = local_48;
              break;
            case 4:
              local_70 = local_58 & 0xffffffff;
              local_68 = (uVar7 << 0x20) + local_70;
              local_60 = uVar7;
              recovered_10019c30(local_38,local_68,uVar5,0xffffffff);
              uVar17 = 0x7a848eff;
              if (local_50 == *(uint *)(local_88 + 0x544c8)) {
                uVar17 = 0x165cb0ff;
              }
              uVar18 = uVar5 & 0xffffffff00000000;
              uVar5 = uVar5 & 0xffffffff | 0x100000000;
              recovered_10019c30(lVar13,local_68,uVar5,uVar17);
              recovered_10019c30(lVar13,(uVar18 - 0x100000000) + (uVar7 << 0x20) | local_70,uVar5,
                                 uVar17);
              local_70 = uVar18;
              recovered_10019c30(lVar13,local_68,uVar18 | 1,uVar17);
              uVar4 = local_48;
              recovered_10019c30(lVar13,CONCAT44(uVar14,(int)local_40 + (int)local_58 + -1),
                                 uVar18 | 1,uVar17);
              lVar16 = local_78;
              uVar17 = (int)local_58 + 6;
              pcVar10 = (char *)(local_80 + 0x254);
              bVar21 = *(char *)(local_80 + 0x254) != '\0';
              pcVar9 = (char *)(local_80 + 0x14);
              if (bVar21) {
                pcVar9 = pcVar10;
              }
              uVar14 = local_44;
              if (!bVar21) {
                uVar14 = 0x7e848aff;
              }
              recovered_1001a280(lVar13,uVar17,(int)local_60 + 8,pcVar9,1,uVar14);
              uVar7 = local_58;
              uVar5 = local_60;
              if ((local_50 == *(uint *)(local_88 + 0x544c8)) &&
                 (((ulong)*(uint *)(local_38 + 0x205c4c) / 0x18 & 1) == 0)) {
                uVar12 = recovered_10015e00(pcVar10,1);
                uVar14 = ((int)uVar7 + (int)local_40) - 8;
                if ((int)(uVar12 + uVar17) < (int)uVar14) {
                  uVar14 = uVar12 + uVar17;
                }
                if ((int)uVar12 < 0) {
                  uVar14 = uVar17;
                }
                uVar7 = CONCAT44((int)uVar5 + 5,uVar14);
                uVar5 = local_70 - 0x9ffffffff;
                lVar13 = local_38;
                uVar17 = local_44;
                goto LAB_1001b9fc;
              }
              break;
            case 5:
              local_70 = local_58 & 0xffffffff;
              local_68 = (uVar7 << 0x20) + local_70;
              local_60 = uVar7;
              recovered_10019c30(local_38,local_68,uVar5,0xd6e1eaff);
              uVar18 = uVar5 & 0xffffffff | 0x100000000;
              recovered_10019c30(lVar13,local_68,uVar18,0x7a848eff);
              recovered_10019c30(lVar13,((uVar5 & 0xffffffff00000000) - 0x100000000) +
                                        (uVar7 << 0x20) | local_70,uVar18,0x7a848eff);
              uVar5 = uVar5 & 0xffffffff00000000 | 1;
              recovered_10019c30(lVar13,local_68,uVar5,0x7a848eff);
              lVar16 = local_78;
              iVar20 = (int)local_58;
              recovered_10019c30(lVar13,CONCAT44(uVar14,(int)local_40 + iVar20 + -1),uVar5,
                                 0x7a848eff);
              uVar12 = iVar20 + 10;
              uVar14 = (int)local_60 + 9;
              uVar17 = 1;
              uVar4 = local_48;
LAB_1001c05f:
              recovered_1001a280(lVar13,uVar12,uVar14,(char *)(local_80 + 0x14),uVar17,local_44);
              break;
            case 6:
              uVar7 = local_58 & 0xffffffff | uVar7 << 0x20;
              uVar17 = 0x7a848eff;
LAB_1001b9fc:
              recovered_10019c30(lVar13,uVar7,uVar5,uVar17);
              break;
            case 7:
              recovered_10019c30(local_38,local_58 & 0xffffffff | uVar7 << 0x20,uVar5,
                                 *(uint *)(lVar1 + 0x360));
              if (0 < *(int *)(local_80 + 0x368)) {
                uVar5 = local_58 + 0xffffffff;
                local_68 = 0;
                do {
                  lVar13 = local_38;
                  local_b8 = (ulong)(uint)((int)uVar5 + (int)local_40);
                  local_a8 = (ulong)(uint)((int)local_68 + (int)local_58);
                  local_98 = *(uint *)(local_80 + 0x364);
                  local_b0 = uVar7 << 0x20;
                  uVar19 = local_b0 + local_a8;
                  uVar11 = local_40 & 0xffffffff | 0x100000000;
                  local_70 = uVar5;
                  local_60 = uVar7;
                  recovered_10019c30(local_38,uVar19,uVar11,local_98);
                  uVar17 = local_98;
                  recovered_10019c30(lVar13,((uVar18 << 0x20) + uVar19 & 0xffffffff00000000) -
                                            0x100000000 | local_a8,uVar11,local_98);
                  lVar8 = (uVar18 << 0x20) + 1;
                  recovered_10019c30(lVar13,uVar19,lVar8,uVar17);
                  uVar4 = local_48;
                  lVar16 = local_78;
                  recovered_10019c30(lVar13,local_b8 + local_b0,lVar8,uVar17);
                  local_68 = local_68 + 1;
                  uVar7 = (ulong)((int)local_60 + 1);
                  local_40 = (ulong)((int)local_40 - 2);
                  uVar18 = (ulong)((int)uVar18 - 2);
                  uVar5 = local_70 + 1;
                } while ((long)local_68 < (long)*(int *)(local_80 + 0x368));
              }
            }
switchD_1001bab5_default:
            local_50 = local_50 + 1;
            uVar5 = (ulong)*(uint *)(local_88 + 0x52c40);
          } while (local_50 < uVar5);
          uVar7 = (ulong)local_94;
        }
        uVar4 = 1;
        uVar18 = uVar7 & 1;
        uVar7 = 0;
      } while (uVar18 != 0);
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000683c
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef str_1001e9f3
#undef local_2d8
#undef local_1d8
#undef local_1d7
#undef local_1d6
#undef local_1d5
#undef local_1d4
#undef local_1d3
#undef local_1d2
#undef local_1d1
#undef local_d0
#undef local_b8
#undef local_b0
#undef local_a8
#undef local_a0
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_60
#undef local_58
#undef local_50
#undef local_48
#undef local_44
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006858
#define UINT_00006858 (*(uint *)(0x6858U))
#undef UINT_000068e0
#define UINT_000068e0 (*(uint *)(0x68e0U))
#define local_348 (*(char (*)[256])(frame + 24))
#define local_248 (*(byte (*)[256])(frame + 280))
#define local_148 (*(byte *)(frame + 536))
#define local_147 (*(byte *)(frame + 537))
#define local_146 (*(byte *)(frame + 538))
#define local_145 (*(byte *)(frame + 539))
#define local_144 (*(byte *)(frame + 540))
#define local_143 (*(byte *)(frame + 541))
#define local_142 (*(byte *)(frame + 542))
#define local_141 (*(byte *)(frame + 543))
#define local_48 (*(void * (*)[3])(frame + 792))
#define local_2c (*(int *)(frame + 820))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c4a0
 */

void recovered_1001c4a0(long param_1,long param_2,ulong param_3)

{
  unsigned char frame[896] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;

  if (param_2 == 0 || param_1 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x330) == '\x01') {
    recovered_10019c30(param_1,0x4800000000,param_3,*(uint *)(param_2 + 0x334));
  }
  if (*(char *)(param_2 + 0x331) != '\x01') {
    return;
  }
  if (*(char *)(param_2 + 0x340) == '\0') {
    return;
  }
  local_2c = -1;
  recovered_10008100(param_2,(byte *)(param_2 + 0x340),(char *)&local_148);
  if (local_148 == 0) {
LAB_1001c798:
    bVar2 = false;
  }
  else {
    bVar3 = local_148 | 0x20;
    if (0x19 < (byte)(local_148 + 0xbf)) {
      bVar3 = local_148;
    }
    if (bVar3 != 0x68) goto LAB_1001c798;
    if (local_147 == 0) {
code_r0x1001c69c:
      if (local_147 != 0) {
        bVar3 = local_147 | 0x20;
        if (0x19 < (byte)(local_147 + 0xbf)) {
          bVar3 = local_147;
        }
        if ((bVar3 == 0x74) && (local_146 != 0)) {
          bVar3 = local_146 | 0x20;
          if (0x19 < (byte)(local_146 + 0xbf)) {
            bVar3 = local_146;
          }
          if ((bVar3 == 0x74) && (local_145 != 0)) {
            bVar3 = local_145 | 0x20;
            if (0x19 < (byte)(local_145 + 0xbf)) {
              bVar3 = local_145;
            }
            if ((bVar3 == 0x70) && (local_144 != 0)) {
              bVar3 = local_144 | 0x20;
              if (0x19 < (byte)(local_144 + 0xbf)) {
                bVar3 = local_144;
              }
              if ((bVar3 == 0x73) && (local_143 != 0)) {
                bVar3 = local_143 | 0x20;
                if (0x19 < (byte)(local_143 + 0xbf)) {
                  bVar3 = local_143;
                }
                if ((bVar3 == 0x3a) && (local_142 != 0)) {
                  bVar3 = local_142 | 0x20;
                  if (0x19 < (byte)(local_142 + 0xbf)) {
                    bVar3 = local_142;
                  }
                  if ((bVar3 == 0x2f) && (local_141 != 0)) {
                    bVar3 = local_141 | 0x20;
                    if (0x19 < (byte)(local_141 + 0xbf)) {
                      bVar3 = local_141;
                    }
                    if (bVar3 == 0x2f) goto LAB_1001c650;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_1001c798;
    }
    bVar3 = local_147 | 0x20;
    if (0x19 < (byte)(local_147 + 0xbf)) {
      bVar3 = local_147;
    }
    if ((bVar3 != 0x74) || (local_146 == 0)) goto code_r0x1001c69c;
    bVar3 = local_146 | 0x20;
    if (0x19 < (byte)(local_146 + 0xbf)) {
      bVar3 = local_146;
    }
    if ((bVar3 != 0x74) || (local_145 == 0)) goto code_r0x1001c69c;
    bVar3 = local_145 | 0x20;
    if (0x19 < (byte)(local_145 + 0xbf)) {
      bVar3 = local_145;
    }
    if ((bVar3 != 0x70) || (local_144 == 0)) goto code_r0x1001c69c;
    bVar3 = local_144 | 0x20;
    if (0x19 < (byte)(local_144 + 0xbf)) {
      bVar3 = local_144;
    }
    if ((bVar3 != 0x3a) || (local_143 == 0)) goto code_r0x1001c69c;
    bVar3 = local_143 | 0x20;
    if (0x19 < (byte)(local_143 + 0xbf)) {
      bVar3 = local_143;
    }
    if ((bVar3 != 0x2f) || (local_142 == 0)) goto code_r0x1001c69c;
    bVar3 = local_142 | 0x20;
    if (0x19 < (byte)(local_142 + 0xbf)) {
      bVar3 = local_142;
    }
    if (bVar3 != 0x2f) goto code_r0x1001c69c;
LAB_1001c650:
    uVar6 = recovered_10018890(&local_148,local_348);
    if ((char)uVar6 == '\0') {
      return;
    }
    pf_varargs_1001df25__8_((char *)&local_148,0x100,&DAT_1001e232,(ulonglong)local_348);
    bVar2 = true;
  }
  memset(local_48,0,0x18);
  uVar4 = recovered_100097d0((char *)&local_148,&local_2c,local_248);
  if ((char)uVar4 == '\0') {
    return;
  }
  iVar1 = Ram0000000000006800;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0xe3 < uVar5)) {
    uVar5 = UINT_000068e0;
    if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_1001c8f1;
    uVar5 = (*(code *)(ulong)uVar5)(local_2c,(char *)local_248,local_48);
  }
  else {
    iVar1 = Ram0000000000006800;
    if (((iVar1 != 0x50414d57) || (iVar1 = Ram0000000000006804, iVar1 == 0)) ||
       ((uVar5 = Ram0000000000006808, uVar5 < 0xc || (uVar5 = Ram0000000000006808, uVar5 < 0x5c))))
    goto LAB_1001c8f1;
    uVar5 = UINT_00006858;
    if ((code *)(ulong)uVar5 == (code *)0x0) goto LAB_1001c8f1;
    uVar5 = (*(code *)(ulong)uVar5)((char *)local_248,local_48);
  }
  if (uVar5 != 0) {
    recovered_1001b510(param_1,(long *)local_48,0x4800000000,param_3);
    if (((local_48[0] != (void *)0x0) && (iVar1 = Ram0000000000006800, iVar1 == 0x50414d57)) &&
       ((iVar1 = Ram0000000000006804, iVar1 != 0 &&
        ((uVar5 = Ram0000000000006808, 0xb < uVar5 && (uVar5 = Ram0000000000006808, 0x53 < uVar5))))
       )) {
      uVar5 = UINT_00006850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_48[0]);
      }
    }
    memset(local_48,0,0x18);
    return;
  }
LAB_1001c8f1:
  if (bVar2) {
    recovered_10018e50((char *)local_248);
    pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x13a9U));
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006858
#undef UINT_000068e0
#undef local_348
#undef local_248
#undef local_148
#undef local_147
#undef local_146
#undef local_145
#undef local_144
#undef local_143
#undef local_142
#undef local_141
#undef local_48
#undef local_2c

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_100201f0
#define DAT_100201f0 (*(uint *)(((uintptr_t)pf_module_state + 0x22e3U)))
#undef DAT_100201f4
#define DAT_100201f4 (*(int *)(((uintptr_t)pf_module_state + 0x22e7U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006918
#define UINT_00006918 (*(uint *)(0x6918U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c940
 */

void recovered_1001c940(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;

  if (param_2 == (long *)0x0) {
    return;
  }
  lVar5 = *param_2;
  if (lVar5 == 0 || param_1 == 0) {
    return;
  }
  uVar7 = *(uint *)((long)param_2 + 0xc);
  if (uVar7 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_2 + 2);
  uVar21 = (uint)param_4;
  uVar22 = (uint)(param_4 >> 0x20);
  if (((int)uVar22 < 1 || (int)uVar21 < 1) || uVar8 == 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x57e8) == 0) goto LAB_1001ca58;
  iVar6 = Ram0000000000006800;
  if ((((iVar6 == 0x50414d57) && (iVar6 = Ram0000000000006804, iVar6 != 0)) &&
      (uVar7 = Ram0000000000006808, 0xb < uVar7)) && (uVar7 = Ram0000000000006808, 0x11b < uVar7)) {
    uVar7 = UINT_00006918;
    if (((code *)(ulong)uVar7 == (code *)0x0) ||
       (uVar7 = (*(code *)(ulong)uVar7)((void *)(param_1 + 1000),*(uint *)(param_1 + 0x57e8)),
       uVar7 == 0)) goto LAB_1001ca33;
  }
  else {
LAB_1001ca33:
    *(undefined1 *)(param_1 + 0x57ec) = 0;
  }
  *(undefined4 *)(param_1 + 0x57e8) = 0;
  uVar7 = *(uint *)((long)param_2 + 0xc);
  uVar8 = *(uint *)(param_2 + 2);
LAB_1001ca58:
  uVar14 = (ulong)uVar8;
  uVar9 = (uVar21 & 0x7fffffff) * uVar14;
  if ((uVar9 & 0x7fffffff00000000) == 0) {
    uVar9 = uVar9 & 0xffffffff;
  }
  uVar13 = (uint)(uVar9 / uVar7);
  uVar8 = uVar21;
  if ((int)uVar22 < (int)uVar13) {
    uVar9 = (param_4 >> 0x20) * (ulong)uVar7;
    if (uVar9 >> 0x20 == 0) {
      uVar8 = (uint)((uVar9 & 0xffffffff) / uVar14);
    }
    else {
      uVar8 = (uint)(uVar9 / uVar14);
    }
    uVar13 = uVar22;
  }
  if ((0 < (int)uVar8) && (0 < (int)uVar13)) {
    uVar14 = (ulong)uVar13;
    lVar15 = (long)DAT_100201f4;
    uVar18 = (ulong)uVar8;
    lVar19 = (long)(int)DAT_100201f0;
    uVar16 = (ulong)DAT_100201f0;
    lVar23 = (long)((int)(uVar21 - uVar8) / 2 + (int)param_3);
    lVar10 = (long)((int)(uVar22 - uVar13) / 2 + (int)((ulong)param_3 >> 0x20));
    lVar17 = lVar23 * 4 + lVar10 * uVar16 * 4 + 3;
    uVar9 = 0;
    do {
      lVar1 = uVar9 + lVar10;
      if ((0x47 < lVar1) && (lVar1 < lVar15 + -0x16)) {
        uVar11 = *(uint *)(param_2 + 2) * uVar9;
        if (uVar11 >> 0x20 == 0) {
          uVar7 = (uint)((uVar11 & 0xffffffff) / uVar14);
        }
        else {
          uVar7 = (uint)(uVar11 / uVar14);
        }
        uVar11 = 0;
        do {
          uVar12 = uVar11 * *(uint *)((long)param_2 + 0xc);
          if (uVar12 >> 0x20 == 0) {
            uVar8 = (uint)((uVar12 & 0xffffffff) / uVar18);
          }
          else {
            uVar8 = (uint)(uVar12 / uVar18);
          }
          lVar20 = lVar23 + uVar11;
          if ((lVar20 < lVar19 && -1 < (int)((uint)lVar1 | (uint)lVar20)) &&
              *(long *)(param_1 + 0x350) != 0) {
            lVar20 = (ulong)uVar8 + (ulong)*(uint *)((long)param_2 + 0xc) * (ulong)uVar7;
            uVar8 = (uint)*(byte *)(lVar5 + 3 + lVar20 * 4);
            if (uVar8 != 0) {
              bVar2 = *(byte *)(lVar5 + lVar20 * 4);
              bVar3 = *(byte *)(lVar5 + 1 + lVar20 * 4);
              bVar4 = *(byte *)(lVar5 + 2 + lVar20 * 4);
              lVar20 = *(long *)(param_1 + 0x350) + lVar17;
              if (uVar8 == 0xff) {
                *(byte *)(lVar20 + -3 + uVar11 * 4) = bVar2;
                *(byte *)(lVar20 + -2 + uVar11 * 4) = bVar3;
                *(byte *)(lVar20 + -1 + uVar11 * 4) = bVar4;
              }
              else {
                uVar21 = uVar8 ^ 0xff;
                *(char *)(lVar20 + -3 + uVar11 * 4) =
                     (char)((*(byte *)(lVar20 + -3 + uVar11 * 4) * uVar21 + bVar2 * uVar8 + 0x7f) /
                           0xff);
                *(char *)(lVar20 + -2 + uVar11 * 4) =
                     (char)((*(byte *)(lVar20 + -2 + uVar11 * 4) * uVar21 + bVar3 * uVar8 + 0x7f) /
                           0xff);
                *(char *)(lVar20 + -1 + uVar11 * 4) =
                     (char)((bVar4 * uVar8 + *(byte *)(lVar20 + -1 + uVar11 * 4) * uVar21 + 0x7f) /
                           0xff);
              }
              *(undefined1 *)(lVar20 + uVar11 * 4) = 0xff;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar18 != uVar11);
      }
      uVar9 = uVar9 + 1;
      lVar17 = lVar17 + uVar16 * 4;
    } while (uVar9 < uVar14);
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_100201f0
#undef DAT_100201f4
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006918

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006838
#define UINT_00006838 (*(uint *)(0x6838U))
#undef UINT_0000688c
#define UINT_0000688c (*(uint *)(0x688cU))
#undef str_1001e1a8
#define str_1001e1a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x29bU)))
#undef str_1001e733
#define str_1001e733 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x826U)))
#undef str_1001f3ae
#define str_1001f3ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14a1U)))
#undef str_1001f3c4
#define str_1001f3c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14b7U)))
#undef str_1001f3da
#define str_1001f3da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cdU)))
#define local_58 (*(char (*)[64])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ccf0
 */

void recovered_1001ccf0(long param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;
  char *vararg0;
  long lVar4;

  if (((param_1 == 0) || (*(uint *)(param_1 + 0x205c38) == 0)) ||
     (*(uint *)(param_1 + 0x205c38) <= *(uint *)(param_1 + 0x205c3c))) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0 + 0x58f8;
  }
  uVar3 = *(byte *)(param_1 + 0x57f0) ^ 1;
  *(char *)(param_1 + 0x57f0) = (char)uVar3;
  pf_varargs_1001df25__4_(local_58,0x40,str_1001f3da,uVar3);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x8f < uVar3)))) {
    uVar3 = UINT_0000688c;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      (*(code *)(ulong)uVar3)(str_1001e733);
    }
  }
  uVar2 = strlen(local_58);
  iVar1 = Ram0000000000006800;
  if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
     ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x3b < uVar3)))) {
    uVar3 = UINT_00006838;
    if ((code *)(ulong)uVar3 != (code *)0x0) {
      (*(code *)(ulong)uVar3)(str_1001e1a8,local_58,(uint)uVar2);
    }
  }
  if (lVar4 != 0) {
    vararg0 = str_1001f3c4;
    if (*(char *)(param_1 + 0x57f0) != '\0') {
      vararg0 = str_1001f3ae;
    }
    pf_varargs_1001df25__8_((char *)(lVar4 + 0x141),0xc0,&DAT_1001e232,(ulonglong)vararg0);
  }
  *(undefined1 *)(param_1 + 0x57ee) = 1;
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006838
#undef UINT_0000688c
#undef str_1001e1a8
#undef str_1001e733
#undef str_1001f3ae
#undef str_1001f3c4
#undef str_1001f3da
#undef local_58

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ce40
 */

void recovered_1001ce40(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *text;

  bVar4 = true;
  if (((param_1 == 0) || (*(uint *)(param_1 + 0x205c38) == 0)) ||
     (*(uint *)(param_1 + 0x205c38) <= *(uint *)(param_1 + 0x205c3c))) {
    lVar10 = 0;
  }
  else {
    lVar6 = (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0;
    lVar1 = param_1 + lVar6;
    lVar10 = lVar1 + 0x58f8;
    iVar3 = *(int *)(param_1 + 0x59dc0 + lVar6);
    if ((-1 < (long)iVar3) && (iVar3 < *(int *)(lVar1 + 0x58538))) {
      lVar7 = (long)iVar3 * 0x370;
      lVar6 = lVar10 + lVar7 + 0x440;
      bVar4 = false;
      if (*(int *)(lVar1 + 0x5d38 + lVar7) != 4) {
        lVar6 = 0;
      }
      cVar2 = *(char *)(param_1 + 0x57ef);
      goto joined_r0x1001cee0;
    }
    bVar4 = false;
  }
  lVar6 = 0;
  cVar2 = *(char *)(param_1 + 0x57ef);
joined_r0x1001cee0:
  if (cVar2 == '\x01') {
    text = (char *)(param_1 + 0x57f2);
  }
  else if (lVar6 == 0) {
    text = &DAT_1001f468;
    if (!bVar4) {
      text = (char *)(lVar10 + 1);
    }
  }
  else {
    text = (char *)(lVar6 + 0x254);
  }
  uVar8 = strlen(text);
  uVar9 = 0xffffffff;
  if (uVar8 < 0xffffffff) {
    uVar9 = uVar8;
  }
  iVar3 = Ram0000000000006800;
  if (((iVar3 == 0x50414d57) && (iVar3 = Ram0000000000006804, iVar3 != 0)) &&
     ((uVar5 = Ram0000000000006808, 0xb < uVar5 && (uVar5 = Ram0000000000006808, 0x183 < uVar5)))) {
    uVar5 = UINT_00006980;
    if (((code *)(ulong)uVar5 != (code *)0x0) &&
       (uVar5 = (*(code *)(ulong)uVar5)(text,(uint)uVar9), uVar5 != 0)) {
      if (!bVar4) {
        pf_varargs_1001df25__8_((char *)(lVar10 + 0x141),0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x14d7U));
      }
      *(undefined1 *)(param_1 + 0x57ee) = 1;
    }
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001f468
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006980

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cfa0
 */

void recovered_1001cfa0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;

  bVar3 = true;
  if (((param_1 == 0) || (*(uint *)(param_1 + 0x205c38) == 0)) ||
     (*(uint *)(param_1 + 0x205c38) <= *(uint *)(param_1 + 0x205c3c))) {
    lVar5 = 0;
LAB_1001d041:
    lVar8 = 0;
    cVar4 = *(char *)(param_1 + 0x57ef);
  }
  else {
    lVar8 = (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0;
    lVar1 = param_1 + lVar8;
    lVar5 = lVar1 + 0x58f8;
    iVar2 = *(int *)(param_1 + 0x59dc0 + lVar8);
    if (((long)iVar2 < 0) || (*(int *)(lVar1 + 0x58538) <= iVar2)) {
      bVar3 = false;
      goto LAB_1001d041;
    }
    lVar9 = (long)iVar2 * 0x370;
    lVar8 = lVar5 + lVar9 + 0x440;
    bVar3 = false;
    if (*(int *)(lVar1 + 0x5d38 + lVar9) != 4) {
      lVar8 = 0;
    }
    cVar4 = *(char *)(param_1 + 0x57ef);
  }
  if (cVar4 != '\x01') {
    if (lVar8 != 0) {
      uVar6 = recovered_1001d0c0((char *)(lVar8 + 0x254),0x80);
      cVar4 = (char)uVar6;
      goto joined_r0x1001d0a3;
    }
    *(undefined1 *)(param_1 + 0x57ef) = 1;
    if (!bVar3) {
      *(undefined4 *)(lVar5 + 0x544c8) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x57f2) = 0;
    *(undefined4 *)(param_1 + 0x58f4) = 0;
  }
  uVar6 = recovered_1001d0c0((char *)(param_1 + 0x57f2),0x100);
  cVar4 = (char)uVar6;
  uVar7 = strlen((char *)(param_1 + 0x57f2));
  *(int *)(param_1 + 0x58f4) = (int)uVar7;
joined_r0x1001d0a3:
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0x57ee) = 1;
  }
  return;
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#undef UINT_00006984
#define UINT_00006984 (*(uint *)(0x6984U))
#undef UINT_00006988
#define UINT_00006988 (*(uint *)(0x6988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d0c0
 */

undefined8 recovered_1001d0c0(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *outText;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;

  iVar2 = Ram0000000000006800;
  uVar3 = 0;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar5 = Ram0000000000006808, 0xb < uVar5)) && (uVar5 = Ram0000000000006808, 0x18b < uVar5)) {
    uVar5 = UINT_00006988;
    if ((code *)(ulong)uVar5 != (code *)0x0) {
      uVar3 = (*(code *)(ulong)uVar5)();
    }
  }
  if (((param_1 != (char *)0x0) && (uVar4 = strlen(param_1), uVar3 != 0)) &&
     (uVar4 < param_2 - 1U)) {
    uVar5 = (int)param_2 + ~(uint)uVar4;
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    iVar2 = Ram0000000000006800;
    if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
       ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x4f < uVar3))))
    {
      uVar3 = UINT_0000684c;
      if ((code *)(ulong)uVar3 != (code *)0x0) {
        uVar5 = uVar5 + 1;
        outText = (*(code *)(ulong)uVar3)((ulong)uVar5);
        if (outText != (char *)0x0) {
          iVar2 = Ram0000000000006800;
          if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
              (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
             (uVar3 = Ram0000000000006808, 0x187 < uVar3)) {
            uVar3 = UINT_00006984;
            if ((code *)(ulong)uVar3 == (code *)0x0) {
              uVar6 = 0;
            }
            else {
              uVar3 = (*(code *)(ulong)uVar3)(outText,uVar5);
              if (uVar3 == 0) {
                uVar6 = 0;
              }
              else {
                uVar7 = 1;
                uVar6 = 0;
                do {
                  bVar1 = outText[uVar7 - 1];
                  bVar8 = 0x20;
                  if ((bVar1 & 0xfb) != 9) {
                    bVar8 = bVar1;
                  }
                  if (bVar1 == 10) {
                    bVar8 = 0x20;
                  }
                  if ((byte)(bVar8 - 0x20) < 0x5f) {
                    param_1[uVar4] = bVar8;
                    uVar4 = uVar4 + 1;
                    uVar6 = 1;
                  }
                } while ((uVar7 < uVar3) && (uVar7 = uVar7 + 1, uVar4 < param_2 - 1U));
              }
            }
          }
          else {
            if ((ulong)uVar5 != 0) {
              *outText = '\0';
            }
            uVar6 = 0;
          }
          param_1[uVar4] = '\0';
          iVar2 = Ram0000000000006800;
          if (iVar2 != 0x50414d57) {
            return uVar6;
          }
          iVar2 = Ram0000000000006804;
          if (iVar2 == 0) {
            return uVar6;
          }
          uVar3 = Ram0000000000006808;
          if (uVar3 < 0xc) {
            return uVar6;
          }
          uVar3 = Ram0000000000006808;
          if (uVar3 < 0x54) {
            return uVar6;
          }
          uVar3 = UINT_00006850;
          if ((code *)(ulong)uVar3 == (code *)0x0) {
            return uVar6;
          }
          (*(code *)(ulong)uVar3)(outText);
          return uVar6;
        }
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006984
#undef UINT_00006988

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d300
 */

void recovered_1001d300(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *dst;
  ulong uVar1;
  long lVar2;

  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x205c38) != 0) &&
       (*(uint *)(param_1 + 0x205c3c) < *(uint *)(param_1 + 0x205c38))) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0;
      dst = (byte *)(param_1 + 0x57f2);
      recovered_100068b0(param_1,param_1 + lVar2 + 0x58f8,dst);
      pf_varargs_1001df25__8_((char *)dst,0x100,&DAT_1001e232,param_1 + lVar2 + 0x58f9);
      uVar1 = strlen((char *)dst);
      *(int *)(param_1 + 0x58f4) = (int)uVar1;
      *(undefined2 *)(param_1 + 0x57ee) = 1;
    }
  }
  return;
}

#undef DAT_1001e232

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f430
#define DAT_1001f430 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1523U)))
#undef DAT_1001f431
#define DAT_1001f431 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1524U)))
#undef DAT_1001f432
#define DAT_1001f432 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1525U)))
#undef DAT_1001f433
#define DAT_1001f433 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1526U)))
#undef DAT_1001f434
#define DAT_1001f434 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1527U)))
#undef str_1001f414
#define str_1001f414 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1507U)))
#undef str_1001f421
#define str_1001f421 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1514U)))
#define local_3c8 (*(char (*)[256])(frame + 24))
#define local_2c8 (*(char (*)[384])(frame + 280))
#define local_148 (*(byte (*)[264])(frame + 664))
#define local_40 (*(byte * *)(frame + 928))
#define local_38 (*(ulong *)(frame + 936))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d390
 */

void recovered_1001d390(long param_1,long param_2,uint param_3)

{
  unsigned char frame[1024] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  byte bVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  uint *puVar10;
  byte bVar11;
  byte bVar12;

  if ((int)param_3 < 0) {
    return;
  }
  if (*(int *)(param_2 + 0x544c4) <= (int)param_3) {
    return;
  }
  lVar2 = param_2 + (ulong)param_3 * 0x188;
  pbVar9 = (byte *)(lVar2 + 0x52c44);
  if (*(char *)(param_2 + 0x52c44 + (ulong)param_3 * 0x188) == '\0') {
    pf_varargs_1001df25__8_(local_3c8,0x100,&DAT_1001e232,param_2 + 1);
  }
  else {
    recovered_10008100(param_2,pbVar9,local_3c8);
  }
  local_40 = pbVar9;
  if (*(char *)(lVar2 + 0x52d4c) != '\0') {
    pcVar5 = (char *)(lVar2 + 0x52d4c);
    uVar4 = strlen(str_1001f414);
    if ((uVar4 != 0) && (*pcVar5 != '\0')) {
      pcVar7 = pcVar5;
      do {
        uVar8 = 0;
        while (bVar6 = pcVar7[uVar8], bVar6 != 0) {
          bVar11 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar11 = bVar6;
          }
          bVar6 = str_1001f414[uVar8];
          bVar12 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar12 = bVar6;
          }
          if (bVar11 != bVar12) break;
          uVar8 = uVar8 + 1;
          if (uVar4 == uVar8) goto LAB_1001d6c4;
        }
        if (uVar4 == uVar8) goto LAB_1001d6c4;
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    uVar4 = strlen(str_1001f421);
    if ((uVar4 != 0) && (*pcVar5 != '\0')) {
      pcVar7 = pcVar5;
      do {
        uVar8 = 0;
        while (bVar6 = pcVar7[uVar8], bVar6 != 0) {
          bVar11 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar11 = bVar6;
          }
          bVar6 = str_1001f421[uVar8];
          bVar12 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar12 = bVar6;
          }
          if (bVar11 != bVar12) break;
          uVar8 = uVar8 + 1;
          if (uVar4 == uVar8) goto LAB_1001d6c4;
        }
        if (uVar4 == uVar8) {
LAB_1001d6c4:
          recovered_1001d840(param_1,param_2,pcVar5);
          return;
        }
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
    }
    uVar4 = recovered_1001d840(param_1,param_2,pcVar5);
    if ((char)uVar4 != '\0') {
      return;
    }
  }
  local_2c8[0] = '\0';
  uVar3 = *(uint *)(param_2 + 0x52c40);
  local_38 = param_1;
  if (uVar3 != 0) {
    puVar10 = (uint *)(param_2 + 0x794);
    uVar4 = 0;
    do {
      if ((*puVar10 == param_3) &&
         (((puVar10[-0xd5] == 8 || (puVar10[-0xd5] == 4)) && ((char)puVar10[-0x60] != '\0')))) {
        if ((local_2c8[0] != '\0') && (uVar8 = strlen(local_2c8), uVar8 < 0x17f)) {
          (local_2c8 + uVar8)[0] = '&';
          (local_2c8 + uVar8)[1] = '\0';
        }
        recovered_1001dcb0(local_2c8,(byte *)(puVar10 + -0x60));
        uVar8 = strlen(local_2c8);
        if (uVar8 < 0x17f) {
          (local_2c8 + uVar8)[0] = '=';
          (local_2c8 + uVar8)[1] = '\0';
        }
        recovered_1001dcb0(local_2c8,(byte *)(puVar10 + -0x40));
        uVar3 = *(uint *)(param_2 + 0x52c40);
      }
      uVar4 = uVar4 + 1;
      puVar10 = puVar10 + 0xdc;
    } while (uVar4 < uVar3);
  }
  uVar4 = local_38;
  bVar6 = local_40[0x100];
  if (bVar6 == 0) {
    pcVar5 = &DAT_1001f430;
LAB_1001d6fd:
    if (*pcVar5 == '\0') {
      pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x1528U));
      goto LAB_1001d826;
    }
  }
  else {
    bVar11 = bVar6 | 0x20;
    if (0x19 < (byte)(bVar6 + 0xbf)) {
      bVar11 = bVar6;
    }
    if (bVar11 == 0x70) {
      bVar6 = local_40[0x101];
      if (bVar6 == 0) {
        pcVar5 = &DAT_1001f431;
      }
      else {
        bVar11 = bVar6 | 0x20;
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar11 = bVar6;
        }
        if (bVar11 != 0x6f) goto LAB_1001d706;
        bVar6 = local_40[0x102];
        if (bVar6 == 0) {
          pcVar5 = &DAT_1001f432;
        }
        else {
          bVar11 = bVar6 | 0x20;
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar11 = bVar6;
          }
          if (bVar11 != 0x73) goto LAB_1001d706;
          bVar6 = local_40[0x103];
          if (bVar6 == 0) {
            pcVar5 = &DAT_1001f433;
          }
          else {
            bVar11 = bVar6 | 0x20;
            if (0x19 < (byte)(bVar6 + 0xbf)) {
              bVar11 = bVar6;
            }
            if ((bVar11 != 0x74) || (local_40[0x104] != 0)) goto LAB_1001d706;
            pcVar5 = &DAT_1001f434;
          }
        }
      }
      goto LAB_1001d6fd;
    }
  }
LAB_1001d706:
  pf_varargs_1001df25__8_((char *)local_148,0x100,&DAT_1001e232,(ulonglong)local_3c8);
  if (local_2c8[0] != '\0') {
    pcVar5 = strchr((char *)local_148,0x3f);
    uVar4 = strlen((char *)local_148);
    if (uVar4 < 0xff) {
      bVar6 = 0x26;
      if (pcVar5 == (char *)0x0) {
        bVar6 = 0x3f;
      }
      local_148[uVar4] = bVar6;
      local_148[uVar4 + 1] = 0;
    }
    uVar8 = strlen((char *)local_148);
    uVar4 = local_38;
    if (uVar8 < 0xff) {
      pf_varargs_1001df25__8_
                ((char *)(local_148 + uVar8),0x100 - uVar8,&DAT_1001e232,(ulonglong)local_2c8);
    }
  }
  recovered_100068b0(uVar4,param_2,local_148);
  pf_varargs_1001df25__8_((char *)(uVar4 + 0x57f2),0x100,&DAT_1001e232,param_2 + 1);
  uVar8 = strlen((char *)(uVar4 + 0x57f2));
  *(int *)(uVar4 + 0x58f4) = (int)uVar8;
LAB_1001d826:
  *(undefined1 *)(uVar4 + 0x57ee) = 1;
  return;
}

#undef DAT_1001e232
#undef DAT_1001f430
#undef DAT_1001f431
#undef DAT_1001f432
#undef DAT_1001f433
#undef DAT_1001f434
#undef str_1001f414
#undef str_1001f421
#undef local_3c8
#undef local_2c8
#undef local_148
#undef local_40
#undef local_38

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#undef DAT_1001f468
#define DAT_1001f468 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x155bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_0000684c
#define UINT_0000684c (*(uint *)(0x684cU))
#undef UINT_00006850
#define UINT_00006850 (*(uint *)(0x6850U))
#define local_3c (*(uint *)(frame + 756))
#define local_38 (*(char * *)(frame + 760))
#define local_318 (*(byte (*)[256])(frame + 24))
#define local_218 (*(byte (*)[256])(frame + 280))
#define local_118 (*(char (*)[192])(frame + 536))
#define local_58 (*(long *)(frame + 728))
#define local_50 (*(ulong *)(frame + 736))
#define local_48 (*(char * *)(frame + 744))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d840
 */

ulong recovered_1001d840(long param_1,long param_2,char *param_3)

{
  unsigned char frame[848] __attribute__((aligned(16))) = {0};

  char *dst;
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_R12;

  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
LAB_1001dc93:
    uVar8 = 0;
  }
  else {
    uVar3 = recovered_100028e0(param_2);
    if (((char)uVar3 != '\0') &&
       ((((iVar1 = Ram0000000000006800, iVar1 == 0x50414d57 &&
          (iVar1 = Ram0000000000006804, iVar1 != 0)) && (uVar2 = Ram0000000000006808, 0xb < uVar2))
        && (uVar2 = Ram0000000000006808, 0x4f < uVar2)))) {
      uVar2 = UINT_0000684c;
      if ((code *)(ulong)uVar2 != (code *)0x0) {
        local_38 = (*(code *)(ulong)uVar2)(0x60000);
        if (local_38 != (char *)0x0) {
          local_50 = (ulong)((uint)*(byte *)(param_1 + 0x57f0) * 2 + 1);
          local_118[0] = '\0';
          local_48 = (char *)(param_2 + 0x141);
          local_58 = param_2 + 0x694;
          uVar3 = 0;
          do {
            local_3c = (uint)uVar3;
            if (*(int *)(param_2 + 0x52c40) == 0) {
              bVar5 = false;
            }
            else {
              uVar8 = 0;
              bVar5 = false;
              unaff_R12 = local_58;
              do {
                if (*(int *)(unaff_R12 + -0x254) == 4) {
                  local_218[0] = 0;
                  *local_38 = '\0';
                  local_118[0] = '\0';
                  if (*(char *)(unaff_R12 + -0x40) == '\0') {
                    lVar7 = unaff_R12 + -0x80;
                  }
                  else {
                    lVar7 = unaff_R12 + -0x40;
                  }
                  uVar4 = FUN_1001df85(*(undefined8 *)(param_2 + 0x328),param_3,lVar7,unaff_R12,
                                       local_218,0x100,local_38,0x60000,local_118,0xc0,local_50);
                  if (((uVar4 & 0x10) != 0) && (local_218[0] != 0)) goto LAB_1001db7a;
                  if (((uVar4 & 1) != 0) && (*local_38 != '\0')) goto LAB_1001daa7;
                  if (local_118[0] != '\0') {
                    pf_varargs_1001df25__8_(local_48,0xc0,&DAT_1001e232,(ulonglong)local_118);
                  }
                  bVar5 = true;
                }
                uVar8 = uVar8 + 1;
                unaff_R12 = unaff_R12 + 0x370;
              } while (uVar8 < *(uint *)(param_2 + 0x52c40));
            }
            if ((local_3c & 1) != 0 || bVar5) {
              if (local_118[0] != '\0') {
                pf_varargs_1001df25__8_(local_48,0xc0,&DAT_1001e232,(ulonglong)local_118);
              }
              *(undefined1 *)(param_1 + 0x57ee) = 1;
              iVar1 = Ram0000000000006800;
              if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
                 ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
                  (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
                uVar2 = UINT_00006850;
                if ((code *)(ulong)uVar2 != (code *)0x0) {
                  (*(code *)(ulong)uVar2)(local_38);
                }
              }
              goto LAB_1001dc93;
            }
            local_218[0] = 0;
            *local_38 = '\0';
            local_118[0] = '\0';
            puVar6 = &DAT_1001f468;
            uVar8 = FUN_1001df85(*(undefined8 *)(param_2 + 0x328),param_3,&DAT_1001f468,
                                 &DAT_1001f468,local_218,0x100,local_38,0x60000,local_118,0xc0,
                                 local_50);
            if (((uVar8 & 0x10) != 0) && (local_218[0] != 0)) {
LAB_1001db7a:
              recovered_10008100(param_2,local_218,(char *)local_318);
              recovered_100068b0(param_1,param_2,local_318);
              dst = (char *)(param_1 + 0x57f2);
              pf_varargs_1001df25__8_(dst,0x100,&DAT_1001e232,param_2 + 1);
              uVar8 = strlen(dst);
              *(int *)(param_1 + 0x58f4) = (int)uVar8;
              *(undefined1 *)(param_1 + 0x57ee) = 1;
              iVar1 = Ram0000000000006800;
              if ((iVar1 == 0x50414d57) &&
                 (((iVar1 = Ram0000000000006804, iVar1 != 0 &&
                   (uVar2 = Ram0000000000006808, 0xb < uVar2)) &&
                  (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
                uVar2 = UINT_00006850;
                if ((code *)(ulong)uVar2 != (code *)0x0) {
                  (*(code *)(ulong)uVar2)(local_38);
                }
              }
              uVar8 = CONCAT71((int7)((ulong)dst >> 8),1);
              goto LAB_1001dc96;
            }
            uVar3 = CONCAT71((int7)((ulong)puVar6 >> 8),1);
          } while (((uVar8 & 1) == 0) || (*local_38 == '\0'));
LAB_1001daa7:
          if (*(char **)(param_2 + 0x310) != (char *)0x0) {
            pf_varargs_1001df25__8_
                      (*(char **)(param_2 + 0x310),0x50000,&DAT_1001e232,(ulonglong)local_38);
          }
          recovered_10002b10(param_1,param_2);
          recovered_100042b0(param_1,param_2);
          *(undefined1 *)(param_1 + 0x57ee) = 1;
          iVar1 = Ram0000000000006800;
          uVar8 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
          if (((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
             ((uVar2 = Ram0000000000006808, 0xb < uVar2 &&
              (uVar2 = Ram0000000000006808, 0x53 < uVar2)))) {
            uVar2 = UINT_00006850;
            if ((code *)(ulong)uVar2 != (code *)0x0) {
              (*(code *)(ulong)uVar2)(local_38);
            }
          }
          goto LAB_1001dc96;
        }
      }
    }
    uVar8 = 0;
    pf_varargs_1001df25__8_((char *)(param_2 + 0x141),0xc0,&DAT_1001e232,((uintptr_t)pf_module_state + 0x439U));
    *(undefined1 *)(param_1 + 0x57ee) = 1;
  }
LAB_1001dc96:
  return uVar8 & 0xffffffff;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_1001e232
#undef DAT_1001f468
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_0000684c
#undef UINT_00006850
#undef local_3c
#undef local_38
#undef local_318
#undef local_218
#undef local_118
#undef local_58
#undef local_50
#undef local_48

#undef str_1001f470
#define str_1001f470 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1563U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001dcb0
 */

void recovered_1001dcb0(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;

  if (param_2 != (byte *)0x0 && param_1 != (char *)0x0) {
    bVar4 = *param_2;
    while (bVar4 != 0) {
      if (((byte)(bVar4 - 0x30U) < 10) || ((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a)) {
LAB_1001dd60:
        uVar3 = strlen(param_1);
        if (uVar3 < 0x17f) {
LAB_1001dcf0:
          param_1[uVar3] = bVar4;
          param_1[uVar3 + 1] = '\0';
        }
      }
      else {
        if (0x5e < bVar4) {
          if ((bVar4 == 0x7e) || (bVar4 == 0x5f)) goto LAB_1001dd60;
LAB_1001dd72:
          uVar3 = strlen(param_1);
          if (uVar3 < 0x17f) {
            (param_1 + uVar3)[0] = '%';
            (param_1 + uVar3)[1] = '\0';
          }
          cVar2 = str_1001f470[*param_2 >> 4];
          uVar3 = strlen(param_1);
          if (uVar3 < 0x17f) {
            param_1[uVar3] = cVar2;
            param_1[uVar3 + 1] = '\0';
          }
          bVar4 = str_1001f470[*param_2 & 0xf];
          uVar3 = strlen(param_1);
          if (0x17e < uVar3) goto LAB_1001dcfa;
          goto LAB_1001dcf0;
        }
        if (bVar4 - 0x2d < 2) goto LAB_1001dd60;
        if (bVar4 != 0x20) goto LAB_1001dd72;
        uVar3 = strlen(param_1);
        if (uVar3 < 0x17f) {
          bVar4 = 0x2b;
          goto LAB_1001dcf0;
        }
      }
LAB_1001dcfa:
      pbVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      bVar4 = *pbVar1;
    }
  }
  return;
}

#undef str_1001f470

#undef DAT_1001e232
#define DAT_1001e232 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x325U)))
#define local_128 (*(byte (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001dde0
 */

void recovered_1001dde0(long param_1,int param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;

  if (((param_1 != 0) && (*(uint *)(param_1 + 0x205c38) != 0)) &&
     (*(uint *)(param_1 + 0x205c3c) < *(uint *)(param_1 + 0x205c38))) {
    if (param_2 != 0) {
      lVar1 = param_1 + 0x58f8 + (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0;
      uVar2 = *(uint *)(lVar1 + 0x554d4);
      if (param_2 < 0) {
        if (uVar2 == 0) {
          return;
        }
        if (*(int *)(lVar1 + 0x554d8) == 0) {
          return;
        }
        uVar3 = *(int *)(lVar1 + 0x554d8) - 1;
      }
      else {
        if (uVar2 == 0) {
          return;
        }
        uVar3 = *(int *)(lVar1 + 0x554d8) + 1;
        if (uVar2 <= uVar3) {
          return;
        }
      }
      *(uint *)(lVar1 + 0x554d8) = uVar3;
      pf_varargs_1001df25__8_
                ((char *)local_128,0x100,&DAT_1001e232,lVar1 + (ulong)uVar3 * 0x100 + 0x544d4);
      *(undefined1 *)(lVar1 + 0x555dc) = 1;
      recovered_100068b0(param_1,lVar1,local_128);
      *(undefined1 *)(lVar1 + 0x555dc) = 0;
      pf_varargs_1001df25__8_((char *)(param_1 + 0x57f2),0x100,&DAT_1001e232,lVar1 + 1);
      uVar4 = strlen((char *)(param_1 + 0x57f2));
      *(int *)(param_1 + 0x58f4) = (int)uVar4;
      *(undefined2 *)(param_1 + 0x57ee) = 1;
    }
  }
  return;
}

#undef DAT_1001e232
#undef local_128
