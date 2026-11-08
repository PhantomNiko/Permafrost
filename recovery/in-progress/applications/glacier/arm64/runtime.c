/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(uint *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef UINT_82010914
#define UINT_82010914 (*(uint *)(0x82010914U))
#undef str_1000fac0
#define str_1000fac0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2fcU)))
#undef str_1000fad9
#define str_1000fad9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x315U)))
#undef str_1000fafa
#define str_1000fafa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#undef str_1000fb02
#define str_1000fb02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33eU)))
#undef str_1000fb2c
#define str_1000fb2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x368U)))
#undef str_1000fb38
#define str_1000fb38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_1000fb4e
#define str_1000fb4e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38aU)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_10010669
#define str_10010669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xea5U)))
#undef str_100108c4
#define str_100108c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1100U)))
#undef str_1001097c
#define str_1001097c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b8U)))
#undef str_10010cd6
#define str_10010cd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1512U)))
#undef str_10010ce0
#define str_10010ce0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151cU)))
#undef str_10010cfa
#define str_10010cfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1536U)))
#undef str_10010d1c
#define str_10010d1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1558U)))
#undef str_10010d3e
#define str_10010d3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157aU)))
#undef str_10010d44
#define str_10010d44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1580U)))
#undef str_10010d54
#define str_10010d54 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1590U)))
#undef str_10010e2c
#define str_10010e2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1668U)))
#undef str_10010e57
#define str_10010e57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1693U)))
#undef str_10010e7b
#define str_10010e7b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16b7U)))
#undef str_10010e8d
#define str_10010e8d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16c9U)))
#define abStack_9f0 (*(byte (*)[20])(frame + 16))
#define uStack_9dc (*(undefined4 *)(frame + 36))
#define iStack_9c8 (*(int *)(frame + 56))
#define iStack_9bc (*(int *)(frame + 68))
#define iStack_9b8 (*(int *)(frame + 72))
#define iStack_9b4 (*(int *)(frame + 76))
#define uStack_9b0 (*(uint *)(frame + 80))
#define uStack_778 (*(uint *)(frame + 648))
#define uStack_774 (*(uint *)(frame + 652))
#define abStack_76c (*(byte (*)[8])(frame + 660))
#define uStack_764 (*(uint *)(frame + 668))
#define iStack_75c (*(int *)(frame + 676))
#define iStack_758 (*(int *)(frame + 680))
#define iStack_754 (*(int *)(frame + 684))
#define iStack_66c (*(int *)(frame + 916))
#define acStack_668 (*(char (*)[1024])(frame + 920))
#define uStack_268 (*(uint *)(frame + 1944))
#define uStack_264 (*(uint *)(frame + 1948))
#define aiStack_1c8 (*(int (*)[24])(frame + 2104))
#define uStack_168 (*(uint *)(frame + 2200))
#define uStack_164 (*(uint *)(frame + 2204))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000658
 */

int recovered_10000658(void)

{
  unsigned char frame[2592] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int iVar2;
  int *text;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *dst;
  undefined8 uVar16;
  long lVar17;
  char *pcVar18;
  undefined2 uVar19;
  int iVar20;
  ulong uVar21;
  char *vararg0;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  uint *puVar27;
  ulong uVar28;
  uint128 auVar29;

  dst = recovered_100016e0(0x2061f0);
  if (dst == (int *)0x0) {
    pcVar18 = str_1000fac0;
  }
  else {
    memset(dst,0,0x2061f0);
    pf_app_window_spec(abStack_9f0,str_1000fafa,DAT_100180d0,DAT_100180d4);
    uStack_9b0 = uStack_9b0 | 1;
    uStack_9dc = 0xffffff;
    uVar12 = terror_ui_window_open(dst,abStack_9f0);
    if (uVar12 != 0) {
      *(long *)(dst + 0xd4) = *(long *)(dst + 0xc);
      if (*(long *)(dst + 0xc) == 0) {
        terror_ui_window_close(dst);
      }
      else {
        puVar1 = (uint *)(dst + 0x8170e);
        DAT_100180d0 = dst[1];
        DAT_100180d4 = dst[2];
        terror_ui_window_set_menus(dst,str_1000fb02,str_1000fb2c,&DAT_1000fb37);
        memset(dst + 0xd6,0,0x90);
        bVar10 = recovered_100019c8(0x114);
        if (bVar10) {
          uVar12 = UINT_82010914;
          if ((uVar12 != 0) && (uVar12 = (*(code *)(ulong)uVar12)(dst + 0xd6), uVar12 != 0)) {
            if ((*(byte *)(dst + 0xd7) & 1) == 0) {
              bVar11 = 0;
            }
            else {
              bVar11 = *(byte *)(dst + 0xd8) >> 1 & 1;
            }
            *(byte *)(dst + 0x15fb) = bVar11;
          }
        }
        *(undefined1 *)(dst + 0x15fc) = 1;
        memset(&uStack_168,0,0xc);
        uVar16 = recovered_10001b5c(str_1000fb38,&uStack_168);
        if ((((int)uVar16 != 0) && (uStack_168 != 0)) && (6 < uStack_164)) {
          if (0x7e < uStack_164) {
            uStack_164 = 0x7f;
          }
          memcpy(acStack_668,(void *)(ulong)uStack_168,(ulong)uStack_164);
          acStack_668[uStack_164] = '\0';
          iVar13 = strncmp(acStack_668,str_1000fb4e,7);
          if (iVar13 == 0) {
            *(undefined1 *)(dst + 0x15fc) = 0;
          }
        }
        *(undefined2 *)((long)dst + 0x57ed) = 0x101;
        dst[0x81714] = 0;
        recovered_10001a10((ulong)dst,&DAT_1000fb37);
        if (*puVar1 != 0) {
          *(undefined1 *)((long)dst + 0x57ef) = 1;
          piVar25 = dst + 0x163e;
          text = (int *)((long)dst + 0x57f2);
          while (*(char *)((long)dst + 0x57ed) == '\x01') {
            uVar12 = dst[1];
            uVar15 = dst[2];
            memset(abStack_9f0,0,0x278);
            uVar14 = terror_ui_window_query(dst,abStack_9f0);
            if (uVar14 == 0) break;
            dst[0x81712] = iStack_9c8;
            bVar11 = terror_ui_window_info_requests_close(abStack_9f0);
            if (((bVar11 & 1) != 0) || (uVar14 = terror_ui_window_sync_buffer(dst,abStack_9f0), uVar14 == 0))
            break;
            *(undefined8 *)(dst + 0xd4) = *(undefined8 *)(dst + 0xc);
            DAT_100180d0 = dst[1];
            DAT_100180d4 = dst[2];
            if (DAT_100180d0 != uVar12 || DAT_100180d4 != uVar15) {
              if ((*puVar1 != 0) && (uVar12 = dst[0x8170f], uVar12 < *puVar1)) {
                recovered_100024dc((long)dst,(long)(piVar25 + (ulong)uVar12 * 0x15578));
                recovered_1000a34c((long)(piVar25 + (ulong)uVar12 * 0x15578));
              }
              *(undefined1 *)((long)dst + 0x57ee) = 1;
            }
            if ((iStack_9bc != 0) && (iStack_9bc != dst[0x81710])) {
              dst[0x81710] = iStack_9bc;
              if (iStack_9b8 == 2) {
                if (iStack_9b4 == 1) {
                  recovered_1000e368((long)dst);
                }
                else if (iStack_9b4 == 0) {
                  recovered_1000e2bc((long)dst);
                }
              }
              else if (iStack_9b8 == 1) {
                switch((uintptr_t)(iStack_9b4)) {
                case 0:
                  if ((*puVar1 != 0) && (uVar12 = dst[0x8170f], uVar12 < *puVar1)) {
                    piVar22 = piVar25 + (ulong)uVar12 * 0x15578;
                    recovered_10008934(str_10010cd6);
                    recovered_10008934(str_10010669);
                    iVar13 = 0x3e9;
                    do {
                      iVar13 = iVar13 + -1;
                      if (iVar13 == 0) break;
                      iVar20 = dst[0x81714];
                      dst[0x81714] = iVar20 + 1U;
                      pf_varargs_1000f7f4_1
                                ((char *)aiStack_1c8,0x60,str_10010ce0,(ulong)(iVar20 + 1U));
                      uVar15 = recovered_10008934((char *)aiStack_1c8);
                    } while (uVar15 == 0);
                    pf_varargs_1000f7f4_1
                              ((char *)&uStack_268,0xa0,str_10010cfa,(ulonglong)aiStack_1c8);
                    pcVar18 = *(char **)(piVar22 + 0xc4);
                    uVar21 = strlen(pcVar18);
                    uVar15 = recovered_10008970((char *)&uStack_268,pcVar18,(uint)uVar21);
                    if (uVar15 == 0) {
                      recovered_10001c8c((char *)((long)piVar22 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x1544U));
                    }
                    else {
                      pf_varargs_1000f7f4_2
                                (acStack_668,0x400,str_10010d1c,(long)piVar22 + 1,
                                 (long)piVar22 + 0x101);
                      puVar27 = (uint *)(dst + (ulong)uVar12 * 0x15578 + 0x1783);
                      for (uVar21 = 0; uVar21 < (uint)piVar22[0x14b10]; uVar21 = uVar21 + 1) {
                        if ((puVar27[-0x35] == 3) && ((char)*puVar27 != '\0')) {
                          iStack_66c = -1;
                          recovered_10005020((char *)piVar22,puVar27,(char *)&uStack_168);
                          memset(&uStack_778,0,0xc);
                          bVar10 = recovered_100058f4((char *)&uStack_168,&iStack_66c,abStack_76c);
                          if ((bVar10) &&
                             ((uVar12 = recovered_10005d78(iStack_66c,(char *)abStack_76c,
                                                           &uStack_778), uVar12 != 0 &&
                              (uStack_778 != 0)))) {
                            pcVar18 = recovered_1000be3c((char *)abStack_76c);
                            pf_varargs_1000f7f4_2
                                      ((char *)&uStack_268,0xa0,str_10010d3e,(ulonglong)aiStack_1c8,
                                       (ulonglong)pcVar18);
                            uVar12 = recovered_10008970((char *)&uStack_268,
                                                        (void *)(ulong)uStack_778,uStack_774);
                            if (uVar12 != 0) {
                              recovered_10004bd4(acStack_668,0x400,(long)&uStack_268);
                              recovered_100054a4(acStack_668,0x400,'\n');
                            }
                          }
                        }
                        puVar27 = puVar27 + 0xdc;
                      }
                      pf_varargs_1000f7f4_1
                                ((char *)&uStack_268,0xa0,str_10010d44,(ulonglong)aiStack_1c8);
                      uVar21 = strlen(acStack_668);
                      recovered_10008970((char *)&uStack_268,acStack_668,(uint)uVar21);
                      pf_varargs_1000f7f4_1
                                ((char *)((long)piVar22 + 0x141),0xc0,str_10010d54,
                                 (ulonglong)aiStack_1c8);
                    }
LAB_10000c90:
                    *(undefined1 *)((long)dst + 0x57ee) = 1;
                  }
                  break;
                case 1:
                  recovered_10001a10((ulong)dst,&DAT_1000fb37);
                  *(undefined1 *)((long)dst + 0x57ef) = 1;
                  break;
                case 2:
                  if ((1 < *puVar1) && ((uint)dst[0x8170f] < *puVar1)) {
                    recovered_10004b80((long)(piVar25 + (ulong)(uint)dst[0x8170f] * 0x15578));
                    piVar22 = piVar25 + (ulong)(dst[0x8170f] + 1) * 0x15578;
                    uVar12 = dst[0x8170f];
                    while( true ) {
                      if (*puVar1 <= uVar12 + 1) break;
                      memcpy(piVar25 + (ulong)uVar12 * 0x15578,piVar22,0x555e0);
                      piVar22 = piVar22 + 0x15578;
                      uVar12 = uVar12 + 1;
                    }
                    memset(piVar25 + (ulong)(*puVar1 - 1) * 0x15578,0,0x555e0);
                    uVar12 = *puVar1;
                    uVar15 = dst[0x8170f];
                    uVar14 = uVar12 - 1;
                    *puVar1 = uVar14;
                    if (uVar14 <= uVar15) {
                      uVar15 = uVar12 - 2;
                      dst[0x8170f] = uVar15;
                      if (uVar14 == 0) goto LAB_10000c90;
                    }
                    if (uVar15 < uVar14) {
                      recovered_10001c8c((char *)text,0x100,
                                         (long)piVar25 + (ulong)uVar15 * 0x555e0 + 1);
                      uVar21 = strlen((char *)text);
                      dst[0x163d] = (int)uVar21;
                    }
                    goto LAB_10000c90;
                  }
                  break;
                case 3:
                  recovered_1000e220((long)dst);
                }
              }
            }
            recovered_1000178c((char *)dst);
            lVar17 = recovered_1000e1e4((long)dst);
            if ((lVar17 != 0) && ((dst[0x81712] & 6U) == 2)) {
              iVar13 = 0x20;
              do {
                bVar10 = recovered_100019c8(0x2c);
                if (!bVar10) break;
                uVar12 = UINT_8201082c;
                if ((uVar12 == 0) || (uVar12 = (*(code *)(ulong)uVar12)(), uVar12 == 0)) break;
                uVar15 = uVar12 >> 8 & 0xff;
                if ((uVar12 & 0x800000ff) != 0x80000000 || uVar15 != 0) {
                  uVar14 = uVar12 & 0xff;
                  if ((uVar12 >> 0x12 & 1) != 0) {
                    if ((((uVar12 & 0xbf) == 3) || (uVar14 == 99)) || (uVar15 == 0x2e)) {
                      recovered_1000e2bc((long)dst);
                    }
                    else if ((((uVar12 & 0xbf) == 0x16) || (uVar14 == 0x76)) || (uVar15 == 0x2f)) {
                      recovered_1000e368((long)dst);
                    }
                    goto LAB_10000ecc;
                  }
                  if ((uVar12 >> 0x11 & 1) != 0) goto LAB_10000ecc;
                  if (*(char *)((long)dst + 0x57ef) == '\x01') {
                    if (uVar14 - 0x20 < 0x5f) {
                      iVar20 = dst[0x163d];
                      if (iVar20 < 0xff) {
                        dst[0x163d] = iVar20 + 1;
                        *(char *)((long)text + (long)iVar20) = (char)uVar12;
                        uVar21 = (ulong)dst[0x163d];
                        piVar22 = text;
LAB_10000d4c:
                        *(char *)((long)piVar22 + uVar21) = '\0';
                        goto LAB_10000ec8;
                      }
                    }
                    else if ((uVar15 == 0xe) ||
                            (uVar12 = uVar12 & 0xff, uVar12 == 0x7f || uVar12 == 8)) {
                      uVar12 = dst[0x163d] - 1;
                      if (0 < dst[0x163d]) {
                        dst[0x163d] = uVar12;
                        *(char *)((long)text + (ulong)uVar12) = '\0';
                        goto LAB_10000ec8;
                      }
                    }
                    else if ((uVar15 == 0x1c || uVar12 == 0xd) || uVar12 == 10) {
                      recovered_1000e5ac((long)dst);
                    }
                    else if (uVar14 == 0x1b || uVar15 == 1) {
                      *(undefined2 *)((long)dst + 0x57ee) = 1;
                    }
                    goto LAB_10000ecc;
                  }
                  uVar3 = *(uint *)(lVar17 + 0x544c8);
                  if ((((int)uVar3 < 0) || (*(int *)(lVar17 + 0x52c40) <= (int)uVar3)) ||
                     (piVar23 = (int *)(lVar17 + 0x440 + (ulong)uVar3 * 0x370), *piVar23 != 4)) {
                    if (uVar14 == 0x1b || uVar15 == 1) {
                      *(undefined2 *)((long)dst + 0x57ed) = 0x100;
                      break;
                    }
                    iVar4 = *(int *)(lVar17 + 0x544cc);
                    iVar20 = 0;
                    switch((uintptr_t)(uVar15)) {
                    case 0x47:
                      break;
                    case 0x48:
                      iVar20 = iVar4 + -0x1c;
                      break;
                    case 0x49:
                      iVar20 = (iVar4 - DAT_100180d4) + 0x86;
                      break;
                    default:
                      goto switchD_10000e3c_caseD_4a;
                    case 0x4f:
                      iVar20 = *(int *)(lVar17 + 0x544d0);
                      break;
                    case 0x50:
                      iVar20 = iVar4 + 0x1c;
                      break;
                    case 0x51:
                      iVar20 = iVar4 + DAT_100180d4 + -0x86;
                    }
                    *(int *)(lVar17 + 0x544cc) = iVar20;
switchD_10000e3c_caseD_4a:
                    recovered_1000a34c(lVar17);
                    if (*(int *)(lVar17 + 0x544cc) == iVar4) goto LAB_10000ecc;
                  }
                  else {
                    piVar22 = piVar23 + 0x95;
                    uVar26 = strlen((char *)piVar22);
                    if (uVar14 - 0x20 < 0x5f) {
                      uVar21 = uVar26 + 1;
                      if (uVar21 < 0x80) {
                        *(char *)((long)piVar22 + uVar26) = (char)uVar12;
                        goto LAB_10000d4c;
                      }
                      goto LAB_10000ecc;
                    }
                    if ((uVar15 != 0xe) && (uVar12 = uVar12 & 0xff, uVar12 != 0x7f && uVar12 != 8))
                    {
                      if ((uVar15 == 0x1c || uVar12 == 0xd) || uVar12 == 10) {
                        recovered_1000e600((long)dst,lVar17,piVar23[0xd5]);
                      }
                      else if (uVar14 == 0x1b || uVar15 == 1) {
                        *(uint *)(lVar17 + 0x544c8) = 0xffffffff;
                        goto LAB_10000ec8;
                      }
                      goto LAB_10000ecc;
                    }
                    if (uVar26 == 0) goto LAB_10000ecc;
                    *(char *)((long)piVar22 + (uVar26 - 1)) = '\0';
                  }
LAB_10000ec8:
                  *(undefined1 *)((long)dst + 0x57ee) = 1;
                }
LAB_10000ecc:
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            if ((dst[0x81712] & 6U) == 2) {
              memset(abStack_76c,0,0x1c);
              uVar15 = terror_ui_window_pointer_state(dst,abStack_76c);
              iVar20 = iStack_754;
              iVar13 = iStack_758;
              uVar12 = uStack_764;
              if (((uVar15 != 0) && ((abStack_76c[0] >> 1 & 1) != 0)) &&
                 ((iStack_75c != dst[0x81711] && ((uStack_764 & 3) != 0)))) {
                dst[0x81711] = iStack_75c;
                uVar14 = DAT_100180d0;
                uVar15 = *puVar1;
                if (uVar15 != 0) {
                  uVar3 = dst[0x8170f];
                  uVar21 = (ulong)uVar3;
                  if (uVar3 < uVar15) {
                    piVar22 = piVar25 + (ulong)uVar3 * 0x15578;
                    if ((uStack_764 >> 1 & 1) == 0) {
                      if (iStack_758 - 10U < 0x1a && iStack_754 - 9U < 0x1a) {
                        iVar13 = -1;
                      }
                      else {
                        if (0x19 < iStack_758 - 0x28U || 0x19 < iStack_754 - 9U) {
                          bVar10 = recovered_1000eb18(iStack_758,iStack_754,0x90000004a,
                                                      (ulong)(DAT_100180d0 - 0xfa) | 0x1a00000000);
                          if (bVar10) {
                            piVar22[0x15132] = -1;
                            uVar19 = 0x101;
                            goto LAB_100011cc;
                          }
                          bVar10 = recovered_1000eb18(iVar13,iVar20,
                                                      (ulong)(uVar14 - 0xa6) | 0x900000000,
                                                      0x1a0000002e);
                          if (bVar10) {
                            recovered_1000e5ac((long)dst);
                          }
                          else {
                            bVar10 = recovered_1000eb18(iVar13,iVar20,
                                                        (ulong)(uVar14 - 0x70) | 0x900000000,
                                                        0x1a00000068);
                            if (!bVar10) goto LAB_10000ff8;
                            recovered_1000e220((long)dst);
                          }
                          goto LAB_100012b8;
                        }
                        iVar13 = 1;
                      }
                      recovered_1000eb44((long)dst,iVar13);
                    }
                    else {
LAB_10000ff8:
                      lVar17 = -0x58f9;
                      uVar28 = 8;
                      for (uVar26 = 0; uVar15 != uVar26; uVar26 = uVar26 + 1) {
                        bVar10 = recovered_1000eb18(iVar13,iVar20,uVar28 & 0xfffffff8 | 0x2f00000000
                                                    ,0x1800000084);
                        if (bVar10) {
                          dst[0x8170f] = (uint)uVar26;
                          if (uVar15 <= (uint)uVar26) {
                            *(undefined1 *)((long)dst + 0x57ef) = 0;
                            goto LAB_100012b4;
                          }
                          *(undefined1 *)((long)dst + 0x57ef) = 0;
                          lVar17 = (long)dst - lVar17;
                          goto LAB_1000119c;
                        }
                        lVar17 = lVar17 + -0x555e0;
                        uVar28 = uVar28 + 0x88;
                      }
                      if ((uVar12 >> 1 & 1) == 0) {
                        if ((uVar15 < 6) &&
                           (bVar10 = recovered_1000eb18(iVar13,iVar20,
                                                        (ulong)uVar15 * 0x88 + 0x3100000008,
                                                        0x1600000018), bVar10)) {
                          recovered_10001a10((ulong)dst,&DAT_1000fb37);
                          *(undefined1 *)((long)dst + 0x57ef) = 1;
                          goto LAB_100012b8;
                        }
                        uVar15 = DAT_100180d4;
                        bVar10 = recovered_1000eb18(iVar13,iVar20,
                                                    (ulong)(DAT_100180d4 - 0x3c) << 0x20 | 8,
                                                    0xe0000000c);
                        if (bVar10) {
                          iVar13 = piVar22[0x15133] + -0x1c;
LAB_100012a8:
                          piVar22[0x15133] = iVar13;
                        }
                        else {
                          bVar10 = recovered_1000eb18(iVar13,iVar20,
                                                      (ulong)(uVar15 - 0x2c) << 0x20 | 8,0xe0000000c
                                                     );
                          if (bVar10) {
                            iVar13 = piVar22[0x15133] + 0x1c;
                            goto LAB_100012a8;
                          }
                          auVar29 = recovered_1000d388();
                          bVar10 = recovered_1000eb18(iVar13,iVar20,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8));
                          if (!bVar10) goto LAB_100010bc;
                          auVar29 = recovered_1000d3c0((long)piVar22);
                          if (iVar20 < PF_PART4(auVar29, 4)) {
                            iVar13 = -2;
LAB_10001454:
                            iVar20 = 0;
                            if (iVar13 != 0) {
                              iVar20 = (int)(uVar15 - 0x5e) / iVar13;
                            }
                            piVar22[0x15133] = piVar22[0x15133] + iVar20;
                          }
                          else if (PF_PART4(auVar29, 4) + PF_PART4(auVar29, 12) < iVar20) {
                            iVar13 = 2;
                            goto LAB_10001454;
                          }
                        }
                        recovered_1000a34c((long)piVar22);
LAB_100012b4:
                        *(undefined1 *)((long)dst + 0x57ee) = 1;
                      }
                      else {
LAB_100010bc:
                        if ((iVar20 < 0x48) || ((int)(DAT_100180d4 - 0x16) <= iVar20)) {
LAB_100011c4:
                          piVar22[0x15132] = -1;
                          uVar19 = 1;
LAB_100011cc:
                          *(undefined2 *)((long)dst + 0x57ee) = uVar19;
                        }
                        else {
                          uVar24 = (ulong)(uint)piVar22[0x14b10];
                          uVar26 = uVar24 * 0x10;
                          lVar17 = uVar21 * 0x555e0 + 0x59c8;
                          uVar28 = uVar24 * 0x370;
                          do {
                            do {
                              do {
                                uVar8 = uVar28;
                                uVar26 = uVar26 - 0x10;
                                uVar28 = uVar8 - 0x370;
                                if (uVar28 == 0xfffffffffffffc90) goto LAB_100011c4;
                                lVar9 = uVar28 + lVar17;
                                iVar4 = *(int *)((long)dst + lVar9 + 0x370);
                              } while (iVar4 - 7U < 2);
                              iVar5 = *(int *)((long)dst + lVar9 + 0x374);
                            } while (iVar13 < iVar5);
                            iVar2 = 0;
                            if (*(char *)((long)dst + uVar28 + uVar21 * 0x555e0 + 0x60a4) == '\0') {
                              iVar2 = piVar22[0x15133];
                            }
                            iVar2 = iVar20 + -0x48 + iVar2;
                            lVar9 = uVar28 + lVar17;
                            iVar6 = *(int *)((long)dst + lVar9 + 0x378);
                          } while ((*(int *)((long)dst + lVar9 + 0x37c) + iVar5 <= iVar13 ||
                                   iVar2 < iVar6) ||
                                   iVar6 + *(int *)((long)dst + lVar9 + 0x380) <= iVar2);
                          *(undefined1 *)((long)dst + 0x57ef) = 0;
                          if (iVar4 == 4) {
                            if ((uVar12 >> 1 & 1) == 0) {
                              iVar13 = (int)(uVar28 / 0x370);
                              if (uVar24 <= uVar26 >> 4) {
                                iVar13 = -1;
                              }
                              piVar22[0x15132] = iVar13;
                              goto LAB_100012b4;
                            }
LAB_100014e8:
                            piVar22[0x15132] = -1;
                            goto LAB_100012b4;
                          }
                          if (iVar4 == 2) {
                            piVar22[0x15132] = -1;
                            lVar17 = uVar21 * 0x555e0 + 0x5a9c;
                            if (*(char *)((long)dst + uVar8 + lVar17) != '\0') {
                              cVar7 = *(char *)((long)dst + uVar28 + uVar21 * 0x555e0 + 0x60a5);
                              recovered_10005020((char *)piVar22,
                                                 (uint *)((long)dst + uVar8 + lVar17),
                                                 (char *)&uStack_168);
                              if (cVar7 == '\0') {
                                if ((uVar12 >> 1 & 1) != 0) {
                                  recovered_10001a10((ulong)dst,(byte *)&uStack_168);
                                  if ((*puVar1 != 0) && ((uint)dst[0x8170f] < *puVar1)) {
                                    recovered_10001c8c((char *)text,0x100,
                                                       (long)piVar25 +
                                                       (ulong)(uint)dst[0x8170f] * 0x555e0 + 1);
                                    uVar21 = strlen((char *)text);
                                    dst[0x163d] = (int)uVar21;
                                  }
                                  goto LAB_100012b8;
                                }
                                recovered_100045cc((ulong)dst,(long)piVar22,(byte *)&uStack_168);
                                lVar17 = (long)piVar22 + 1;
LAB_1000119c:
                                recovered_10001c8c((char *)text,0x100,lVar17);
                                uVar21 = strlen((char *)text);
                                dst[0x163d] = (int)uVar21;
                              }
                              else {
                                aiStack_1c8[0] = -1;
                                bVar10 = recovered_100058f4((char *)&uStack_168,aiStack_1c8,
                                                            abStack_9f0);
                                if (bVar10) {
                                  memset(&uStack_268,0,0xc);
                                  uVar12 = recovered_10005d78(aiStack_1c8[0],(char *)abStack_9f0,
                                                              &uStack_268);
                                  if ((uVar12 == 0) || (uStack_268 == 0)) {
                                    pcVar18 = str_10010e57;
                                  }
                                  else {
                                    recovered_10008934(str_10010669);
                                    pcVar18 = recovered_1000be3c((char *)abStack_9f0);
                                    if (pcVar18 == (char *)0x0) {
                                      vararg0 = str_100108c4;
                                    }
                                    else {
                                      vararg0 = str_100108c4;
                                      if (*pcVar18 != '\0') {
                                        vararg0 = pcVar18;
                                      }
                                    }
                                    pf_varargs_1000f7f4_1
                                              (acStack_668,0x140,str_1001097c,(ulonglong)vararg0);
                                    uVar12 = recovered_10008970(acStack_668,
                                                                (void *)(ulong)uStack_268,uStack_264
                                                               );
                                    if (uVar12 != 0) {
                                      pf_varargs_1000f7f4_1
                                                ((char *)((long)piVar22 + 0x141),0xc0,str_10010e7b,
                                                 (ulonglong)acStack_668);
                                      goto LAB_100012b4;
                                    }
                                    pcVar18 = str_10010e8d;
                                  }
                                }
                                else {
                                  bVar10 = recovered_10004fc4((byte *)&uStack_168,
                                                              (byte *)str_1000fbdc);
                                  if ((bVar10) ||
                                     (bVar10 = recovered_10004fc4((byte *)&uStack_168,
                                                                  (byte *)str_1000fbe4), bVar10)) {
                                    recovered_1000b290((long)dst,(long)piVar22,(char *)&uStack_168,
                                                       &DAT_1000fb37);
                                    goto LAB_100012b8;
                                  }
                                  pcVar18 = str_10010e2c;
                                }
                                recovered_10001c8c((char *)((long)piVar22 + 0x141),0xc0,
                                                   (long)pcVar18);
                              }
                              goto LAB_100012b4;
                            }
                          }
                          else {
                            if (((uVar12 >> 1 & 1) != 0) || (iVar4 != 5)) goto LAB_100014e8;
                            piVar22[0x15132] = -1;
                            if (*(char *)((long)dst + uVar28 + uVar21 * 0x555e0 + 0x600c) == '\0') {
                              recovered_1000e600((long)dst,(long)piVar22,
                                                 *(uint *)((long)dst +
                                                          uVar28 + uVar21 * 0x555e0 + 0x608c));
                            }
                            else {
                              recovered_1000e810((long)dst,(long)piVar22,
                                                 (char *)((long)dst +
                                                         uVar8 + 0x5c9c + uVar21 * 0x555e0));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_100012b8:
            if (((*(byte *)((long)dst + 0x57ee) & 1) != 0) ||
               ((uVar12 = dst[0x81713], *(char *)((long)dst + 0x57ef) == '\x01' &&
                (uVar12 % 0x18 == 0)))) {
              recovered_10001904((long)dst);
              *(undefined1 *)((long)dst + 0x57ee) = 0;
              uVar12 = dst[0x81713];
            }
            dst[0x81713] = uVar12 + 1;
            iVar13 = 7;
            if ((dst[0x81712] & 6U) != 2) {
              iVar13 = 0x19;
            }
            do {
              recovered_10001994();
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          while (((char)dst[0x8178d] == '\x01' && ((*(byte *)((long)dst + 0x205e35) & 1) == 0))) {
            recovered_10001994();
          }
          recovered_1000178c((char *)dst);
          if (*dst != 0) {
            terror_ui_window_close(dst);
          }
          for (uVar21 = 0; uVar21 < *puVar1; uVar21 = uVar21 + 1) {
            recovered_10004b80((long)piVar25);
            piVar25 = piVar25 + 0x15578;
          }
          memset(dst,0,0x2061f0);
          recovered_10001754(dst);
          return 1;
        }
        terror_ui_window_close(dst);
        memset(dst,0,0x2061f0);
      }
    }
    recovered_10001754(dst);
    pcVar18 = str_1000fad9;
  }
  recovered_1000171c(pcVar18);
  return 0;
}

#undef DAT_1000fb37
#undef DAT_100180d0
#undef DAT_100180d4
#undef UINT_82010914
#undef str_1000fac0
#undef str_1000fad9
#undef str_1000fafa
#undef str_1000fb02
#undef str_1000fb2c
#undef str_1000fb38
#undef str_1000fb4e
#undef str_1000fbdc
#undef str_1000fbe4
#undef str_10010669
#undef str_100108c4
#undef str_1001097c
#undef str_10010cd6
#undef str_10010ce0
#undef str_10010cfa
#undef str_10010d1c
#undef str_10010d3e
#undef str_10010d44
#undef str_10010d54
#undef str_10010e2c
#undef str_10010e57
#undef str_10010e7b
#undef str_10010e8d
#undef abStack_9f0
#undef uStack_9dc
#undef iStack_9c8
#undef iStack_9bc
#undef iStack_9b8
#undef iStack_9b4
#undef uStack_9b0
#undef uStack_778
#undef uStack_774
#undef abStack_76c
#undef uStack_764
#undef iStack_75c
#undef iStack_758
#undef iStack_754
#undef iStack_66c
#undef acStack_668
#undef uStack_268
#undef uStack_264
#undef aiStack_1c8
#undef uStack_168
#undef uStack_164

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e0
 */

void * recovered_100016e0(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_100019c8(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100243c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return (void *)0x0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000171c
 */

uint recovered_1000171c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(0x28);
  if ((bVar1 == 0) || (uVar2 = UINT_82010828, uVar2 == 0)) {
    return (uint)bVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x100243e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)uVar2)(param_1);
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001754
 */

void recovered_10001754(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_100019c8(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10024410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}


#undef DAT_100103ce
#define DAT_100103ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0aU)))
#undef str_100108d1
#define str_100108d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110dU)))
#undef str_10010da3
#define str_10010da3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dfU)))
#undef str_10010db8
#define str_10010db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15f4U)))
#define in_stack_ffffffffffffff08 (*(char * *)(frame + 24))
#define acStack_f0 (*(char (*)[192])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000178c
 */

char * recovered_1000178c(char *param_1)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  char *format;
  char *pcVar3;

  pcVar2 = param_1;
  if (param_1[0x205e34] == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x205c38);
    if (uVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    else if (*(uint *)(param_1 + 0x205e3c) < uVar1) {
      pcVar3 = param_1 + (ulong)*(uint *)(param_1 + 0x205e3c) * 0x555e0 + 0x58f8;
    }
    else {
      pcVar3 = (char *)0x0;
      if (*(uint *)(param_1 + 0x205c3c) < uVar1) {
        pcVar3 = param_1 + (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0 + 0x58f8;
      }
    }
    acStack_f0[0] = '\0';
    if (param_1[0x205e35] == '\x01') {
      if (param_1[0x205d48] == '\x01') {
        memcpy(param_1 + 0x205c54,param_1 + 0x205d48,0xec);
      }
      if (param_1[0x205e36] == '\x01') {
        pcVar2 = &DAT_100103ce;
        if (param_1[0x205f50] != '\0') {
          pcVar2 = param_1 + 0x205f50;
        }
        in_stack_ffffffffffffff08 = param_1 + 0x205fd0;
        format = str_10010da3;
      }
      else {
        pcVar2 = str_100108d1;
        if (param_1[0x206170] != '\0') {
          pcVar2 = param_1 + 0x206170;
        }
        format = str_10010db8;
      }
      uVar1 = pf_varargs_1000f7f4_2
                        (acStack_f0,0xc0,format,(ulonglong)pcVar2,
                         (ulonglong)in_stack_ffffffffffffff08);
      pcVar2 = (char *)(ulong)uVar1;
      param_1[0x205e34] = '\0';
    }
    else {
      pcVar2 = (char *)recovered_1000bda0((ulong)(param_1 + 0x205d40),acStack_f0);
    }
    if ((pcVar3 != (char *)0x0) && (acStack_f0[0] != '\0')) {
      uVar1 = strcmp(pcVar3 + 0x141,acStack_f0);
      pcVar2 = (char *)(ulong)uVar1;
      if (uVar1 != 0) {
        pcVar2 = recovered_10001c8c(pcVar3 + 0x141,0xc0,(long)acStack_f0);
        param_1[0x57ee] = '\x01';
      }
    }
  }
  return pcVar2;
}

#undef DAT_100103ce
#undef str_100108d1
#undef str_10010da3
#undef str_10010db8
#undef in_stack_ffffffffffffff08
#undef acStack_f0

#undef DAT_100180d0
#define DAT_100180d0 (*(int *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef PTR_recovered_1000f9bc_10018070
#define PTR_recovered_1000f9bc_10018070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x88acU)))
#undef PTR_terror_ui_window_present_10018070
#define PTR_terror_ui_window_present_10018070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x88acU)))
#undef str_1000fafa
#define str_1000fafa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001904
 */

void recovered_10001904(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000e1e4(param_1);
  if (lVar1 == 0) {
    return;
  }
  recovered_1000d4e8(param_1);
  recovered_1000df48(param_1,lVar1,0x4800000000,CONCAT44(DAT_100180d4 + -0x5e,DAT_100180d0));
  recovered_1000dae4(param_1,lVar1);
  recovered_1000d12c(param_1,lVar1);
  recovered_1000d270(param_1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xb0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_terror_ui_window_present_10018070)
            (param_1,str_1000fafa,*(undefined8 *)(param_1 + 0x350),DAT_100180d0,DAT_100180d4,
             DAT_100180d0 << 2,0xffffff);
  return;
}

#undef DAT_100180d0
#undef DAT_100180d4
#undef PTR_recovered_1000f9bc_10018070
#undef PTR_terror_ui_window_present_10018070
#undef str_1000fafa

#undef UINT_8201089c
#define UINT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001994
 */

undefined * recovered_10001994(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  bVar1 = recovered_100019c8(0x9c);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)bVar1;
  if ((bVar1) && (uVar2 = UINT_8201089c, UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar2, uVar2 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x100019bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return (undefined *)(ulong)uVar2;
  }
  return UNRECOVERED_JUMPTABLE;
}

#undef UINT_8201089c

#undef DAT_82010800
#define DAT_82010800 (*(uint32_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint32_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint32_t *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c8
 */

bool recovered_100019c8(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = DAT_82010800;
  if (((iVar1 == 0x50414d57) && (iVar1 = DAT_82010804, iVar1 != 0)) &&
     (uVar2 = DAT_82010808, 0xb < uVar2)) {
    uVar2 = DAT_82010808;
    return param_1 + 4U <= uVar2;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a10
 */

void recovered_10001a10(ulong param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char *dst;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;

  puVar1 = (uint *)(param_1 + 0x205c38);
  uVar2 = *puVar1;
  if (uVar2 < 6) {
    *puVar1 = uVar2 + 1;
    lVar6 = param_1 + (ulong)uVar2 * 0x555e0;
    dst = (char *)(lVar6 + 0x58f8);
    memset(dst,0,0x555e0);
    uVar4 = recovered_10001ba4((long)dst);
    if ((uVar4 & 1) == 0) {
      memset(dst,0,0x555e0);
      *puVar1 = *puVar1 - 1;
    }
    else {
      *dst = '\x01';
      *(undefined4 *)(lVar6 + 0x59dc0) = 0xffffffff;
      iVar3 = recovered_10001c54();
      *(int *)(lVar6 + 0x5bfc) = iVar3;
      recovered_10001c8c((char *)(lVar6 + 0x59f9),0x40,((uintptr_t)pf_module_state + 0x392U));
      recovered_10001c8c(*(char **)(lVar6 + 0x5c08),0x50000,((uintptr_t)pf_module_state + 0x39aU));
      recovered_10001c8c((char *)(lVar6 + 0x58f9),0x100,((uintptr_t)pf_module_state + 0x3f2U));
      recovered_10001cc4(param_1,dst);
      recovered_100024dc(param_1,(long)dst);
      *(uint *)(param_1 + 0x205c3c) = uVar2;
      pbVar5 = &DAT_1000fb37;
      if ((param_2 != (byte *)0x0) && (pbVar5 = &DAT_1000fb37, *param_2 != 0)) {
        pbVar5 = param_2;
      }
      recovered_10001c8c((char *)(param_1 + 0x57f2),0x100,(long)pbVar5);
      uVar4 = strlen((char *)(param_1 + 0x57f2));
      *(undefined4 *)(param_1 + 0x58f4) = (int)uVar4;
      if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
        recovered_100045cc(param_1,(long)dst,param_2);
        recovered_10001c8c((char *)(param_1 + 0x57f2),0x100,lVar6 + 0x58f9);
        uVar4 = strlen((char *)(param_1 + 0x57f2));
        *(undefined4 *)(param_1 + 0x58f4) = (int)uVar4;
      }
      *(undefined1 *)(param_1 + 0x57ee) = 1;
    }
  }
  return;
}

#undef DAT_1000fb37

#undef UINT_82010834
#define UINT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b5c
 */

undefined8 recovered_10001b5c(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_100019c8(0x34);
  if ((bVar2) && (uVar1 = UINT_82010834, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return uVar3;
  }
  return 0;
}

#undef UINT_82010834

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ba4
 */

undefined8 recovered_10001ba4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  void *pvVar2;

  uVar1 = 0;
  if (param_1 != 0) {
    if ((((*(long *)(param_1 + 0x310) == 0) || (*(long *)(param_1 + 0x318) == 0)) ||
        (*(long *)(param_1 + 800) == 0)) || (*(long *)(param_1 + 0x328) == 0)) {
      recovered_10004b80(param_1);
      pvVar2 = recovered_100016e0(0x50000);
      *(void **)(param_1 + 0x310) = pvVar2;
      pvVar2 = recovered_100016e0(0x60000);
      *(void **)(param_1 + 0x318) = pvVar2;
      pvVar2 = recovered_100016e0(0x8000);
      *(void **)(param_1 + 800) = pvVar2;
      pvVar2 = recovered_100016e0(0x8000);
      *(void **)(param_1 + 0x328) = pvVar2;
      if (((*(undefined1 **)(param_1 + 0x310) == (undefined1 *)0x0) ||
          (*(long *)(param_1 + 0x318) == 0)) ||
         ((*(long *)(param_1 + 800) == 0 || (pvVar2 == (void *)0x0)))) {
        recovered_10004b80(param_1);
        return 0;
      }
      **(undefined1 **)(param_1 + 0x310) = 0;
      **(undefined1 **)(param_1 + 0x318) = 0;
      **(undefined1 **)(param_1 + 800) = 0;
      **(undefined1 **)(param_1 + 0x328) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


#undef UINT_820108bc
#define UINT_820108bc (*(uint *)(0x820108bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c54
 */

int recovered_10001c54(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;

  bVar2 = recovered_100019c8(0xbc);
  if ((bVar2) && (uVar1 = UINT_820108bc, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(code *)(ulong)uVar1)();
    return iVar3;
  }
  return -1;
}

#undef UINT_820108bc

#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c8c
 */

char * recovered_10001c8c(char *param_1,ulong param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;

  pcVar2 = (char *)0x0;
  if (param_1 != (char *)0x0) {
    if (param_3 == 0) {
      *param_1 = '\0';
      return param_1;
    }
    uVar1 = pf_varargs_1000f7f4_1(param_1,param_2,&DAT_1000fbc2,param_3);
    pcVar2 = (char *)(ulong)uVar1;
  }
  return pcVar2;
}

#undef DAT_1000fbc2

#undef DAT_1000fa80
#define DAT_1000fa80 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2bcU)))
#undef DAT_1000fbc5
#define DAT_1000fbc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401U)))
#undef DAT_1000fbc9
#define DAT_1000fbc9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_1000fbcd
#define DAT_1000fbcd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x409U)))
#undef DAT_1000fbd2
#define DAT_1000fbd2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_1000fbed
#define DAT_1000fbed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x429U)))
#undef DAT_1000fbf2
#define DAT_1000fbf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x42eU)))
#undef DAT_1000fc21
#define DAT_1000fc21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45dU)))
#undef DAT_10010255
#define DAT_10010255 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa91U)))
#undef DAT_10010282
#define DAT_10010282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabeU)))
#undef DAT_10010297
#define DAT_10010297 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad3U)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000fbf6
#define str_1000fbf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x432U)))
#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000fc07
#define str_1000fc07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x443U)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_1000fc17
#define str_1000fc17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_1000fc25
#define str_1000fc25 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x461U)))
#undef str_100101c8
#define str_100101c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa04U)))
#undef str_100101d7
#define str_100101d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa13U)))
#undef str_100101e8
#define str_100101e8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa24U)))
#undef str_100101f2
#define str_100101f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa2eU)))
#undef str_100101fc
#define str_100101fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa38U)))
#undef str_10010208
#define str_10010208 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa44U)))
#undef str_10010212
#define str_10010212 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4eU)))
#undef str_10010225
#define str_10010225 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa61U)))
#undef str_10010231
#define str_10010231 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6dU)))
#undef str_1001023e
#define str_1001023e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa7aU)))
#undef str_10010245
#define str_10010245 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa81U)))
#undef str_1001025a
#define str_1001025a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa96U)))
#undef str_1001026b
#define str_1001026b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa7U)))
#undef str_1001027c
#define str_1001027c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab8U)))
#undef str_10010284
#define str_10010284 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac0U)))
#define uStack_84c4 (*(uint *)(frame + 28))
#define acStack_84a9 (*(char (*)[192])(frame + 55))
#define acStack_83e9 (*(char (*)[96])(frame + 247))
#define auStack_8389 (*(uint (*)[8192])(frame + 343))
#define abStack_389 (*(byte (*)[256])(frame + 33111))
#define auStack_289 (*(uint (*)[64])(frame + 33367))
#define bStack_189 (*(byte *)(frame + 33623))
#define abStack_188 (*(byte (*)[32])(frame + 33624))
#define abStack_168 (*(byte (*)[264])(frame + 33656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc4
 */

long recovered_10001cc4(long param_1,char *param_2)

{
  unsigned char frame[34048] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  long unaff_x30;

  if (param_2 != (char *)0x0) {
    uVar8 = recovered_10001ba4((long)param_2);
    if ((int)uVar8 != 0) {
      uStack_84c4 = 0;
      pcVar13 = *(char **)(param_2 + 0x310);
      **(undefined1 **)(param_2 + 0x318) = 0;
      **(undefined1 **)(param_2 + 800) = 0;
      **(undefined1 **)(param_2 + 0x328) = 0;
      param_2[0x554dc] = '\0';
LAB_10001d3c:
      do {
        while( true ) {
          while( true ) {
            if (((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) ||
               (uVar7 = strlen(*(char **)(param_2 + 0x318)), 0x5fffe < uVar7))
            goto LAB_100022e4;
            pcVar9 = strchr(pcVar13,0x3c);
            if (pcVar9 == (char *)0x0) {
              recovered_10004bd4(*(char **)(param_2 + 0x318),0x60000,(long)pcVar13);
              goto LAB_100022e4;
            }
            if (pcVar13 < pcVar9) {
              uVar7 = strlen(*(char **)(param_2 + 0x318));
              iVar6 = (int)pcVar9 - (int)pcVar13;
              iVar3 = 0x5ffff - (int)uVar7;
              if (iVar3 <= iVar6) {
                iVar6 = iVar3;
              }
              recovered_10004c38(*(char **)(param_2 + 0x318),0x60000,pcVar13,(long)iVar6);
            }
            pcVar10 = strchr(pcVar9,0x3e);
            if (pcVar10 == (char *)0x0) goto LAB_100022e4;
            uVar11 = (uint)pcVar10;
            iVar3 = uVar11 - (int)pcVar9;
            iVar6 = iVar3 + -1;
            if (0xfe < iVar6) {
              iVar6 = 0xff;
            }
            memcpy(abStack_168,pcVar9 + 1,(long)iVar6);
            abStack_168[iVar6] = 0;
            bStack_189 = 0;
            recovered_10004cb8(abStack_168,abStack_188,0x20,&bStack_189);
            iVar6 = strncmp((char *)abStack_168,&DAT_1000fbc5,3);
            if (iVar6 != 0) break;
            pcVar9 = strstr(pcVar9 + 4,&DAT_1000fbc9);
            pcVar13 = pcVar9 + 3;
            if (pcVar9 == (char *)0x0) {
              pcVar13 = pcVar10 + 1;
            }
          }
          if ((bStack_189 & 1) == 0) break;
LAB_10001f10:
          pcVar13 = *(char **)(param_2 + 0x318);
          uVar7 = strlen(pcVar13);
          iVar6 = 0x5ffff - (int)uVar7;
          if (iVar3 + 1 < iVar6) {
            iVar6 = iVar3 + 1;
          }
          recovered_10004c38(pcVar13,0x60000,pcVar9,(long)iVar6);
LAB_10001f4c:
          pcVar13 = pcVar10 + 1;
        }
        if ((abStack_188[0] == 0x21) ||
           (bVar5 = recovered_10004d9c(abStack_188,&DAT_1000fbcd), bVar5)) goto LAB_10001f4c;
        bVar5 = recovered_10004d9c(abStack_188,&DAT_1000fbd2);
        if (bVar5) {
          recovered_10004e00((char *)abStack_168,&DAT_1000fbd7,(undefined1 *)auStack_8389,0x100);
          cVar4 = (char)auStack_8389[0];
          if ((char)auStack_8389[0] != '\0') {
            bVar5 = recovered_10004fc4((byte *)auStack_8389,(byte *)str_1000fbdc);
            if (((bVar5) ||
                (bVar5 = recovered_10004fc4((byte *)auStack_8389,(byte *)str_1000fbe4), cVar4 == '['
                )) || (bVar5)) {
              recovered_10001c8c(param_2 + 0x554dc,0x100,(long)auStack_8389);
            }
            else {
              recovered_10005020(param_2,auStack_8389,param_2 + 0x554dc);
            }
          }
          goto LAB_10001f4c;
        }
        bVar5 = recovered_10004d9c(abStack_188,&DAT_1000fbed);
        if (bVar5) {
          recovered_10004e00((char *)abStack_168,&DAT_1000fbf2,acStack_83e9,0x40);
          recovered_10004e00((char *)abStack_168,&DAT_1000fbd7,(undefined1 *)auStack_289,0x100);
          abStack_389[0] = 0;
          acStack_84a9[0] = '\0';
          if ((char)auStack_289[0] != '\0') {
            recovered_10005020(param_2,auStack_289,(char *)abStack_389);
            bVar5 = recovered_10004fc4(abStack_389,(byte *)str_1000fbdc);
            if (bVar5) {
              uVar11 = 1;
            }
            else {
              bVar5 = recovered_10004fc4(abStack_389,(byte *)str_1000fbe4);
              uVar11 = (uint)bVar5;
            }
            if ((char)auStack_289[0] != '\0') {
              pcVar13 = recovered_100052e0(acStack_83e9,str_1000fbf6);
              uVar1 = 0;
              if (3 < uStack_84c4) {
                uVar1 = uVar11;
              }
              if ((pcVar13 != (char *)0x0) && (uVar1 == 0)) {
                uStack_84c4 = uStack_84c4 + uVar11;
                uVar7 = recovered_10005370(param_1,param_2,(char *)auStack_289,
                                           (undefined1 *)auStack_8389,0x8000,acStack_84a9);
                if ((int)uVar7 != 0) {
                  recovered_10004bd4(*(char **)(param_2 + 800),0x8000,(long)auStack_8389);
                  recovered_100054a4(*(char **)(param_2 + 800),0x8000,'\n');
                }
              }
            }
          }
          goto LAB_10001f4c;
        }
        bVar5 = recovered_10004d9c(abStack_188,(byte *)str_1000fc01);
        if (bVar5) {
          pcVar13 = recovered_100052e0(pcVar10 + 1,str_1000fc07);
          if (pcVar13 == (char *)0x0) break;
          pcVar9 = *(char **)(param_2 + 800);
          iVar6 = (int)pcVar13 + ~uVar11;
          uVar7 = strlen(pcVar9);
          iVar3 = 0x7fff - (int)uVar7;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
          recovered_10004c38(pcVar9,0x8000,pcVar10 + 1,(long)iVar6);
          recovered_100054a4(*(char **)(param_2 + 800),0x8000,'\n');
          pcVar13 = pcVar13 + 8;
          goto LAB_10001d3c;
        }
        bVar5 = recovered_10004d9c(abStack_188,(byte *)str_1000fc10);
        if (!bVar5) goto LAB_10001f10;
        pcVar9 = recovered_100052e0(pcVar10 + 1,str_1000fc17);
        PF_PART1(auStack_8389[0], 0) = '\0';
        PF_PART1(auStack_289[0], 0) = '\0';
        abStack_389[0] = 0;
        acStack_83e9[0] = '\0';
        recovered_10004e00((char *)abStack_168,&DAT_1000fc21,(undefined1 *)auStack_289,0x100);
        if ((char)auStack_289[0] == '\0') {
          if (pcVar9 != (char *)0x0) {
            iVar6 = (int)pcVar9 + ~uVar11;
            if (0xffe < iVar6) {
              iVar6 = 0xfff;
            }
            memcpy(auStack_8389,pcVar10 + 1,(long)iVar6);
            *(undefined1 *)((long)auStack_8389 + (long)iVar6) = 0;
          }
        }
        else {
          recovered_10005020(param_2,auStack_289,(char *)abStack_389);
          bVar5 = recovered_10004fc4(abStack_389,(byte *)str_1000fbdc);
          if ((!bVar5) && (bVar5 = recovered_10004fc4(abStack_389,(byte *)str_1000fbe4), !bVar5)) {
            recovered_10005370(param_1,param_2,(char *)auStack_289,(undefined1 *)auStack_8389,0x1000
                               ,acStack_83e9);
          }
        }
        pcVar13 = recovered_100052e0((char *)abStack_168,str_1000fc25);
        if (pcVar13 == (char *)0x0) {
          if ((char)auStack_8389[0] != '\0') {
            recovered_10004bd4(*(char **)(param_2 + 0x328),0x8000,(long)auStack_8389);
            recovered_100054a4(*(char **)(param_2 + 0x328),0x8000,'\n');
            pcVar13 = recovered_100052e0((char *)auStack_8389,str_100101c8);
            if ((((((pcVar13 != (char *)0x0) ||
                   (pcVar13 = recovered_100052e0((char *)auStack_8389,str_100101d7),
                   pcVar13 != (char *)0x0)) ||
                  (pcVar13 = recovered_100052e0((char *)auStack_8389,str_100101e8),
                  pcVar13 != (char *)0x0)) ||
                 (((pcVar13 = recovered_100052e0((char *)auStack_8389,str_100101f2),
                   pcVar13 != (char *)0x0 ||
                   (pcVar13 = recovered_100052e0((char *)auStack_8389,str_100101fc),
                   pcVar13 != (char *)0x0)) ||
                  ((pcVar13 = recovered_100052e0((char *)auStack_8389,str_10010208),
                   pcVar13 != (char *)0x0 ||
                   ((pcVar13 = recovered_100052e0((char *)auStack_8389,str_10010212),
                    pcVar13 != (char *)0x0 ||
                    (pcVar13 = recovered_100052e0((char *)auStack_8389,str_10010225),
                    pcVar13 != (char *)0x0)))))))) ||
                (pcVar13 = recovered_100052e0((char *)auStack_8389,str_10010231),
                pcVar13 != (char *)0x0)) ||
               ((pcVar13 = recovered_100052e0((char *)auStack_8389,str_1001023e),
                pcVar13 != (char *)0x0 ||
                (pcVar13 = recovered_100052e0((char *)auStack_8389,str_10010245),
                pcVar13 != (char *)0x0)))) {
              uVar11 = 3;
              if (*(char *)(param_1 + 0x57f0) == '\0') {
                uVar11 = 1;
              }
              acStack_84a9[0] = '\0';
              winter_js_execute_basic((char *)auStack_8389,*(char **)(param_2 + 0x318),0x60000,
                                 acStack_84a9,0xc0,uVar11);
              if (acStack_84a9[0] != '\0') {
                recovered_10001c8c(param_2 + 0x141,0xc0,(long)acStack_84a9);
              }
            }
          }
        }
        else if (*(char *)(param_1 + 0x57f1) == '\x01') {
          recovered_10004bd4(*(char **)(param_2 + 0x318),0x60000,((uintptr_t)pf_module_state + 0x46eU));
        }
        pcVar13 = pcVar9 + 9;
      } while (pcVar9 != (char *)0x0);
LAB_100022e4:
      memset(param_2 + 0x330,0,0x110);
      *(undefined8 *)(param_2 + 0x334) = DAT_1000fa80;
      param_2[0x33c] = -1;
      param_2[0x33d] = -0x4c;
      param_2[0x33e] = 'R';
      param_2[0x33f] = '\x12';
      param_2[0x340] = '\0';
      uVar8 = recovered_100089cc(*(char **)(param_2 + 800),&DAT_10010255,(undefined1 *)auStack_8389)
      ;
      if ((int)uVar8 != 0) {
        bVar5 = recovered_10008afc((long)auStack_8389,str_1001025a,(char *)abStack_168,0x100);
        if ((bVar5) &&
           (uVar8 = recovered_10008ca0(abStack_168,(uint *)(param_2 + 0x334)), (int)uVar8 != 0)) {
          param_2[0x330] = '\x01';
        }
        bVar5 = recovered_10008afc((long)auStack_8389,str_1001026b,(char *)abStack_168,0x100);
        if (bVar5) {
          pcVar13 = param_2 + 0x340;
          *pcVar13 = '\0';
          for (pbVar12 = abStack_168;
              *pbVar12 < 0x21 && (1L << ((ulong)*pbVar12 & 0x3f) & 0x100003600U) != 0;
              pbVar12 = pbVar12 + 1) {
          }
          bVar5 = recovered_10004fc4(pbVar12,&DAT_10010297);
          if (bVar5) {
            pbVar12 = pbVar12 + 4;
            while( true ) {
              bVar2 = *pbVar12;
              uVar11 = (uint)bVar2;
              if (0x27 < bVar2) break;
              if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003600U) == 0) {
                if ((1L << ((ulong)bVar2 & 0x3f) & 0x8400000000U) != 0) {
                  pbVar12 = pbVar12 + 1;
                  goto LAB_100023e8;
                }
                break;
              }
              pbVar12 = pbVar12 + 1;
            }
            uVar11 = 0;
LAB_100023e8:
            uVar7 = 0;
            while( true ) {
              bVar2 = pbVar12[uVar7];
              if (((int)(char)bVar2 == 0) || (0xfe < uVar7 || uVar11 == (int)(char)bVar2)) break;
              if ((uVar11 == 0) &&
                 (bVar2 < 0x2a && (1L << ((ulong)(uint)bVar2 & 0x3f) & 0x20100003600U) != 0)) break;
              pcVar13[uVar7] = bVar2;
              uVar7 = uVar7 + 1;
            }
            pcVar13[uVar7] = '\0';
            if (*pcVar13 != '\0') {
              param_2[0x331] = '\x01';
            }
          }
        }
        bVar5 = recovered_10008afc((long)auStack_8389,str_1001027c,(char *)abStack_168,0x100);
        if ((bVar5) &&
           (uVar8 = recovered_10008ca0(abStack_168,(uint *)(param_2 + 0x338)), (int)uVar8 != 0)) {
          param_2[0x332] = '\x01';
        }
      }
      uVar7 = recovered_100089cc(*(char **)(param_2 + 800),&DAT_10010282,(undefined1 *)auStack_8389)
      ;
      if (((((uVar7 & 1) != 0) ||
           (uVar8 = recovered_100089cc(*(char **)(param_2 + 800),str_10010284,
                                       (undefined1 *)auStack_8389), (int)uVar8 != 0)) &&
          (bVar5 = recovered_10008afc((long)auStack_8389,str_1001027c,(char *)abStack_168,0x100),
          bVar5)) &&
         (uVar8 = recovered_10008ca0(abStack_168,(uint *)(param_2 + 0x33c)), (int)uVar8 != 0)) {
        param_2[0x333] = '\x01';
      }
    }
    param_1 = unaff_x30;
  }
  return param_1;
}

#undef DAT_1000fa80
#undef DAT_1000fbc5
#undef DAT_1000fbc9
#undef DAT_1000fbcd
#undef DAT_1000fbd2
#undef DAT_1000fbd7
#undef DAT_1000fbed
#undef DAT_1000fbf2
#undef DAT_1000fc21
#undef DAT_10010255
#undef DAT_10010282
#undef DAT_10010297
#undef str_1000fbdc
#undef str_1000fbe4
#undef str_1000fbf6
#undef str_1000fc01
#undef str_1000fc07
#undef str_1000fc10
#undef str_1000fc17
#undef str_1000fc25
#undef str_100101c8
#undef str_100101d7
#undef str_100101e8
#undef str_100101f2
#undef str_100101fc
#undef str_10010208
#undef str_10010212
#undef str_10010225
#undef str_10010231
#undef str_1001023e
#undef str_10010245
#undef str_1001025a
#undef str_1001026b
#undef str_1001027c
#undef str_10010284
#undef uStack_84c4
#undef acStack_84a9
#undef acStack_83e9
#undef auStack_8389
#undef abStack_389
#undef auStack_289
#undef bStack_189
#undef abStack_188
#undef abStack_168

#undef DAT_1000fa88
#define DAT_1000fa88 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2c4U)))
#undef DAT_1000fa90
#define DAT_1000fa90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_1000fbc5
#define DAT_1000fbc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401U)))
#undef DAT_1000fbc9
#define DAT_1000fbc9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_1000fc21
#define DAT_1000fc21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45dU)))
#undef DAT_10010282
#define DAT_10010282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabeU)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad8U)))
#undef DAT_1001029f
#define DAT_1001029f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_100102a2
#define DAT_100102a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadeU)))
#undef DAT_100102a5
#define DAT_100102a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae1U)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae4U)))
#undef DAT_100102ab
#define DAT_100102ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae7U)))
#undef DAT_100102ae
#define DAT_100102ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaeaU)))
#undef DAT_100102b3
#define DAT_100102b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaefU)))
#undef DAT_100102b6
#define DAT_100102b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf2U)))
#undef DAT_100102c1
#define DAT_100102c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafdU)))
#undef DAT_100102eb
#define DAT_100102eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#undef DAT_100102ee
#define DAT_100102ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2aU)))
#undef DAT_100102f7
#define DAT_100102f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb33U)))
#undef DAT_100102f9
#define DAT_100102f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb35U)))
#undef DAT_10010316
#define DAT_10010316 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb52U)))
#undef DAT_10010321
#define DAT_10010321 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5dU)))
#undef DAT_10010331
#define DAT_10010331 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6dU)))
#undef DAT_10010335
#define DAT_10010335 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb71U)))
#undef DAT_10010364
#define DAT_10010364 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba0U)))
#undef DAT_10010368
#define DAT_10010368 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba4U)))
#undef DAT_1001036d
#define DAT_1001036d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba9U)))
#undef DAT_10010372
#define DAT_10010372 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaeU)))
#undef DAT_100103c5
#define DAT_100103c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc01U)))
#undef DAT_100103ce
#define DAT_100103ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0aU)))
#undef DAT_100103d3
#define DAT_100103d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0fU)))
#undef DAT_100103df
#define DAT_100103df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1bU)))
#undef DAT_100103f2
#define DAT_100103f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2eU)))
#undef DAT_100103fd
#define DAT_100103fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc39U)))
#undef DAT_10010411
#define DAT_10010411 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4dU)))
#undef DAT_10010470
#define DAT_10010470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcacU)))
#undef DAT_100104dd
#define DAT_100104dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd19U)))
#undef DAT_100104f8
#define DAT_100104f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd34U)))
#undef DAT_10010508
#define DAT_10010508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010511
#define DAT_10010511 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4dU)))
#undef DAT_100180d0
#define DAT_100180d0 (*(int *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000fc07
#define str_1000fc07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x443U)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_1000fc17
#define str_1000fc17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_100102b9
#define str_100102b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf5U)))
#undef str_100102c5
#define str_100102c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb01U)))
#undef str_100102cc
#define str_100102cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb08U)))
#undef str_100102d5
#define str_100102d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb11U)))
#undef str_100102db
#define str_100102db (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb17U)))
#undef str_100102e4
#define str_100102e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb20U)))
#undef str_100102f1
#define str_100102f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2dU)))
#undef str_100102fc
#define str_100102fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb38U)))
#undef str_10010303
#define str_10010303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_10010309
#define str_10010309 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb45U)))
#undef str_1001030f
#define str_1001030f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4bU)))
#undef str_1001031a
#define str_1001031a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb56U)))
#undef str_10010326
#define str_10010326 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb62U)))
#undef str_10010339
#define str_10010339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb75U)))
#undef str_1001033f
#define str_1001033f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7bU)))
#undef str_10010346
#define str_10010346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb82U)))
#undef str_1001034d
#define str_1001034d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb89U)))
#undef str_10010354
#define str_10010354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb90U)))
#undef str_1001035d
#define str_1001035d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb99U)))
#undef str_10010375
#define str_10010375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb1U)))
#undef str_1001037b
#define str_1001037b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#undef str_10010382
#define str_10010382 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbeU)))
#undef str_10010389
#define str_10010389 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc5U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
#undef str_10010396
#define str_10010396 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd2U)))
#undef str_1001039e
#define str_1001039e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#undef str_100103a5
#define str_100103a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe1U)))
#undef str_100103ae
#define str_100103ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbeaU)))
#undef str_100103b7
#define str_100103b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf3U)))
#undef str_100103bd
#define str_100103bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf9U)))
#undef str_100103c8
#define str_100103c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef str_100103d8
#define str_100103d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc14U)))
#undef str_100103e3
#define str_100103e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1fU)))
#undef str_100103e9
#define str_100103e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc25U)))
#undef str_100103f6
#define str_100103f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc32U)))
#undef str_10010402
#define str_10010402 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3eU)))
#undef str_10010416
#define str_10010416 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc52U)))
#undef str_10010422
#define str_10010422 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5eU)))
#undef str_1001042c
#define str_1001042c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc68U)))
#undef str_10010436
#define str_10010436 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc72U)))
#undef str_1001043c
#define str_1001043c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc78U)))
#undef str_100104c5
#define str_100104c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd01U)))
#undef str_100104fd
#define str_100104fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd39U)))
#undef str_10010516
#define str_10010516 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd52U)))
#undef str_10010522
#define str_10010522 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5eU)))
#undef str_10010529
#define str_10010529 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd65U)))
#undef str_100105ac
#define str_100105ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde8U)))
#undef str_100105bf
#define str_100105bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdfbU)))
#undef str_100105c7
#define str_100105c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe03U)))
#undef str_100105d1
#define str_100105d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe0dU)))
#define local_df0 (*(undefined8 *)(frame + 2656))
#define local_de8 (*(undefined8 *)(frame + 2664))
#define uStack_1834 (*(uint *)(frame + 28))
#define uStack_1830 (*(uint *)(frame + 32))
#define uStack_182c (*(uint *)(frame + 36))
#define uStack_1828 (*(undefined8 *)(frame + 40))
#define iStack_1818 (*(int *)(frame + 56))
#define iStack_1814 (*(int *)(frame + 60))
#define uStack_1810 (*(uint *)(frame + 64))
#define abStack_1809 (*(byte (*)[128])(frame + 71))
#define bStack_1789 (*(byte *)(frame + 199))
#define abStack_1788 (*(byte (*)[40])(frame + 200))
#define abStack_1760 (*(byte (*)[512])(frame + 240))
#define acStack_1560 (*(char (*)[256])(frame + 752))
#define abStack_1460 (*(byte (*)[4])(frame + 1008))
#define aiStack_145c (*(int (*)[47])(frame + 1012))
#define iStack_13a0 (*(int *)(frame + 1200))
#define auStack_139c (*(ulong (*)[2])(frame + 1204))
#define auStack_138c (*(ulong (*)[5])(frame + 1220))
#define auStack_1364 (*(ulong (*)[136])(frame + 1260))
#define aiStack_f20 (*(int (*)[12])(frame + 2352))
#define acStack_ef0 (*(char (*)[256])(frame + 2400))
#define abStack_dd4 (*(byte (*)[256])(frame + 2684))
#define abStack_cd4 (*(byte (*)[64])(frame + 2940))
#define acStack_c94 (*(char (*)[96])(frame + 3004))
#define abStack_c34 (*(byte (*)[180])(frame + 3100))
#define abStack_b80 (*(byte (*)[64])(frame + 3280))
#define aiStack_b40 (*(int (*)[24])(frame + 3344))
#define abStack_ae0 (*(byte (*)[512])(frame + 3440))
#define auStack_8e0 (*(uint (*)[24])(frame + 3952))
#define uStack_880 (*(undefined8 *)(frame + 4048))
#define uStack_878 (*(undefined8 *)(frame + 4056))
#define iStack_870 (*(int *)(frame + 4064))
#define acStack_86c (*(char (*)[192])(frame + 4068))
#define acStack_7ac (*(char (*)[640])(frame + 4260))
#define uStack_52c (*(undefined8 *)(frame + 4900))
#define iStack_524 (*(int *)(frame + 4908))
#define uStack_514 (*(undefined1 *)(frame + 4924))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024dc
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_100024dc(long param_1,long param_2)

{
  unsigned char frame[6256] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char *dst;
  char *src;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  char *pcVar22;
  char *pcVar23;
  uint *puVar24;
  undefined4 uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  int *piVar30;
  undefined1 *dst_00;
  byte bVar31;
  byte *pbVar32;
  ulong uVar33;
  ulong uVar34;
  uint128 auVar35;

  local_df0 = CONCAT44(DAT_100180d0 + -0x3c,0x1e);
  local_de8 = CONCAT35(PF_PART3(local_de8, 5),0x12);
  if (param_2 == 0) {
    return;
  }
  uVar15 = recovered_10001ba4(param_2);
  if ((int)uVar15 == 0) {
    return;
  }
  puVar1 = (uint *)(param_2 + 0x544c4);
  pbVar32 = *(byte **)(param_2 + 0x318);
  *(undefined4 *)(param_2 + 0x52c40) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0xffffffff;
  acStack_ef0[0] = '\0';
  memset(&iStack_13a0,0,0x480);
  memset(abStack_1460,0,0xc0);
  uVar6 = DAT_1000fa90;
  uVar15 = DAT_1000fa88;
  uStack_1828 = 0;
  uStack_182c = 0;
  iStack_1814 = 0;
  bVar8 = false;
  iStack_1818 = 0;
  acStack_1560[0] = '\0';
  dst = (char *)(param_2 + 0x101);
  uStack_1834 = 0;
  uStack_1830 = 0xffffffff;
  uStack_1810 = 1;
LAB_100025e8:
  do {
    iVar12 = 2;
    pcVar17 = acStack_ef0;
    if (!bVar8) {
      iVar12 = iStack_1818;
      pcVar17 = &DAT_1000fb37;
    }
    while( true ) {
      if ((pbVar32 == (byte *)0x0) || (*pbVar32 == 0)) goto LAB_10004578;
      if (*pbVar32 == 0x3c) break;
      pbVar16 = (byte *)strchr((char *)pbVar32,0x3c);
      if (pbVar16 == (byte *)0x0) {
        uVar33 = strlen((char *)pbVar32);
      }
      else {
        uVar33 = (long)pbVar16 - (long)pbVar32;
      }
      iVar11 = (int)uVar33;
      if (0x1fe < iVar11) {
        iVar11 = 0x1ff;
      }
      memcpy(&uStack_880,pbVar32,(long)iVar11);
      *(byte *)((long)&uStack_880 + (long)iVar11) = 0;
      if ((byte)uStack_880 != 0) {
        recovered_10009368(param_2,(byte *)&uStack_880,iVar12,pcVar17,uStack_1810,iStack_1814,
                           (int *)&local_df0);
      }
      pbVar32 = pbVar32 + uVar33;
      if (pbVar16 != (byte *)0x0) {
        pbVar32 = pbVar16;
      }
    }
    pcVar17 = strchr((char *)pbVar32,0x3e);
    if (pcVar17 == (char *)0x0) {
LAB_10004578:
      iVar12 = (int)local_de8 + 0x20;
      if ((int)local_de8 + 0x20 <= DAT_100180d4 + -0x5e) {
        iVar12 = DAT_100180d4 + -0x5e;
      }
      *(int *)(param_2 + 0x544d0) = iVar12;
      recovered_1000a34c(param_2);
      return;
    }
    bStack_1789 = 0;
    uVar26 = (uint)pcVar17;
    iVar12 = uVar26 + ~(uint)pbVar32;
    if (0x1fe < iVar12) {
      iVar12 = 0x1ff;
    }
    memcpy(abStack_1760,pbVar32 + 1,(long)iVar12);
    abStack_1760[iVar12] = 0;
    recovered_10004cb8(abStack_1760,abStack_1788,0x28,&bStack_1789);
    iVar12 = strncmp((char *)abStack_1760,&DAT_1000fbc5,3);
    if (iVar12 != 0) {
      if (((bStack_1789 & 1) == 0) && (abStack_1788[0] == 0x21)) goto LAB_100026fc;
      if (bStack_1789 == 0) {
        if (((**(char **)(param_2 + 0x328) == '\0') ||
            (bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102cc), !bVar9)) &&
           ((bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102d5), bVar9 ||
            (((bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102db), bVar9 ||
              (bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102e4), bVar9)) ||
             (uVar18 = recovered_10009144(param_2,(char *)abStack_1760,(char *)abStack_1788),
             (int)uVar18 == 0)))))) {
          bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102eb);
          if (bVar9) {
            local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 0xe);
          }
          else {
            bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102ee);
            if (bVar9) {
              pbVar32 = (byte *)(pcVar17 + 1);
              pcVar13 = recovered_100052e0((char *)pbVar32,str_100102f1);
              if (pcVar13 != (char *)0x0) {
                if ((PF_PART4(uStack_1828, 4) == 0) ||
                   (uVar33 = (ulong)(PF_PART4(uStack_1828, 4) - 1), abStack_1460[uVar33 * 0xc] != 1)) {
                  aiStack_b40[0] = (int)local_de8 + 2;
                  local_de8 = CONCAT44(PF_PART4(local_de8, 4),aiStack_b40[0]);
                  auStack_8e0[0] = (uint)local_df0;
                  abStack_ae0[0] = 0;
                  recovered_1000aadc(param_2,(int *)&local_df0,(int *)auStack_8e0,aiStack_b40,
                                     &DAT_100102f7,0,&DAT_1000fb37,uStack_1810);
                  bVar9 = false;
                  pbVar16 = pbVar32 + ~(ulong)pcVar17 + (long)pcVar13;
                  uVar26 = uStack_1810;
                  if ((int)uStack_1810 < 2) {
                    uVar26 = 1;
                  }
LAB_10002c04:
                  uVar25 = 2;
                  pbVar20 = abStack_ae0;
                  if (!bVar9) {
                    uVar25 = 0;
                    pbVar20 = &DAT_1000fb37;
                  }
                  while( true ) {
                    if ((pbVar16 <= pbVar32) || (*pbVar32 == 0)) goto LAB_10002e2c;
                    if (*pbVar32 == 0x3c) break;
                    pbVar19 = (byte *)recovered_1000a7e8((long)pbVar32,'<',
                                                         (long)pbVar16 - (long)pbVar32);
                    iVar12 = (int)((long)pbVar16 - (long)pbVar32);
                    pbVar2 = pbVar16;
                    if (pbVar19 != (byte *)0x0) {
                      iVar12 = (int)pbVar19 - (uint)pbVar32;
                      pbVar2 = pbVar19;
                    }
                    if (0x1fe < iVar12) {
                      iVar12 = 0x1ff;
                    }
                    memcpy(&uStack_880,pbVar32,(long)iVar12);
                    *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
                    recovered_1000a810(param_2,(int *)&local_df0,(int *)auStack_8e0,aiStack_b40,
                                       (char *)&uStack_880,uVar25,pbVar20,uStack_1810);
                    pbVar32 = pbVar2;
                  }
                  pbVar20 = (byte *)recovered_1000a7e8((long)pbVar32,'>',
                                                       (long)pbVar16 - (long)pbVar32);
                  if (pbVar20 == (byte *)0x0) break;
                  acStack_c94[0] = '\0';
                  iVar12 = (int)pbVar20 + ~(uint)pbVar32;
                  if (0xfe < iVar12) {
                    iVar12 = 0xff;
                  }
                  memcpy(&uStack_880,pbVar32 + 1,(long)iVar12);
                  *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
                  recovered_10004cb8((byte *)&uStack_880,abStack_1809,0x28,acStack_c94);
                  cVar7 = acStack_c94[0];
                  bVar10 = recovered_10004d9c(abStack_1809,&DAT_10010282);
                  if (cVar7 == '\x01') {
                    if (bVar10) {
                      bVar9 = false;
                      abStack_ae0[0] = 0;
                    }
                  }
                  else {
                    if (bVar10) {
                      pbVar32 = (byte *)recovered_100052e0((char *)(pbVar20 + 1),&DAT_10010321);
                      recovered_10004e00((char *)&uStack_880,&DAT_1000fbd7,abStack_ae0,0x100);
                      recovered_10004e00((char *)&uStack_880,str_10010326,abStack_c34,0x80);
                      bVar31 = abStack_ae0[0];
                      bVar9 = abStack_ae0[0] != 0;
                      if (((pbVar32 == (byte *)0x0) || (pbVar16 <= pbVar32)) ||
                         (recovered_10009a44(param_2,pbVar20 + 1,(long)(pbVar32 + ~(ulong)pbVar20),
                                             (char *)abStack_dd4,0x100),
                         abStack_dd4[0] == 0 && abStack_c34[0] == 0)) goto LAB_10002df8;
                      pbVar20 = abStack_dd4;
                      if (abStack_dd4[0] == 0) {
                        pbVar20 = abStack_c34;
                      }
                      pbVar2 = abStack_ae0;
                      if (bVar31 == 0) {
                        pbVar2 = &DAT_1000fb37;
                      }
                      recovered_1000a810(param_2,(int *)&local_df0,(int *)auStack_8e0,aiStack_b40,
                                         (char *)pbVar20,(uint)(bVar31 != 0) << 1,pbVar2,uStack_1810
                                        );
                      bVar9 = false;
                      pbVar32 = pbVar32 + 4;
                      abStack_ae0[0] = 0;
                      goto LAB_10002c04;
                    }
                    bVar10 = recovered_10004d9c(abStack_1809,&DAT_100102eb);
                    if (!bVar10) {
                      uVar33 = recovered_10009144(param_2,(char *)&uStack_880,(char *)abStack_1809);
                      if (((uVar33 & 1) == 0) &&
                         (bVar10 = recovered_100095b4(abStack_1809), !bVar10)) goto LAB_10002df8;
                      auVar35 = recovered_1000a92c(pbVar20,pbVar16,(char *)abStack_1809);
                      pbVar32 = PF_PART8(auVar35, 0);
                      goto LAB_10002c04;
                    }
                    auStack_8e0[0] = (uint)local_df0;
                    aiStack_b40[0] = ((uVar26 & 0xfffffff) << 3 | 4) + aiStack_b40[0];
                  }
LAB_10002df8:
                  pbVar32 = pbVar20 + 1;
                  goto LAB_10002c04;
                }
                bVar9 = false;
                abStack_ae0[0] = 0;
                pbVar16 = pbVar32 + ~(ulong)pcVar17 + (long)pcVar13;
                uVar26 = uStack_1810;
                if ((int)uStack_1810 < 2) {
                  uVar26 = 1;
                }
LAB_10002910:
                uVar25 = 2;
                pbVar20 = abStack_ae0;
                if (!bVar9) {
                  uVar25 = 0;
                  pbVar20 = &DAT_1000fb37;
                }
                while( true ) {
                  if ((pbVar16 <= pbVar32) || (*pbVar32 == 0)) goto LAB_10002e40;
                  if (*pbVar32 == 0x3c) break;
                  pbVar19 = (byte *)recovered_1000a7e8((long)pbVar32,'<',
                                                       (long)pbVar16 - (long)pbVar32);
                  iVar12 = (int)((long)pbVar16 - (long)pbVar32);
                  pbVar2 = pbVar16;
                  if (pbVar19 != (byte *)0x0) {
                    iVar12 = (int)pbVar19 - (uint)pbVar32;
                    pbVar2 = pbVar19;
                  }
                  if (0x1fe < iVar12) {
                    iVar12 = 0x1ff;
                  }
                  memcpy(&uStack_880,pbVar32,(long)iVar12);
                  *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
                  recovered_1000a810(param_2,(int *)&local_df0,aiStack_145c + uVar33 * 3,
                                     aiStack_145c + uVar33 * 3 + 1,(char *)&uStack_880,uVar25,
                                     pbVar20,uStack_1810);
                  pbVar32 = pbVar2;
                }
                pbVar20 = (byte *)recovered_1000a7e8((long)pbVar32,'>',(long)pbVar16 - (long)pbVar32
                                                    );
                if (pbVar20 == (byte *)0x0) goto LAB_10002e40;
                auStack_8e0[0] = auStack_8e0[0] & 0xffffff00;
                iVar12 = (int)pbVar20 + ~(uint)pbVar32;
                if (0xfe < iVar12) {
                  iVar12 = 0xff;
                }
                memcpy(&uStack_880,pbVar32 + 1,(long)iVar12);
                *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
                recovered_10004cb8((byte *)&uStack_880,abStack_1809,0x28,(undefined1 *)auStack_8e0);
                cVar7 = (char)auStack_8e0[0];
                bVar10 = recovered_10004d9c(abStack_1809,&DAT_10010282);
                if (cVar7 == '\x01') {
                  if (bVar10) {
                    bVar9 = false;
                    abStack_ae0[0] = 0;
                  }
                }
                else {
                  if (bVar10) {
                    pbVar32 = (byte *)recovered_100052e0((char *)(pbVar20 + 1),&DAT_10010321);
                    recovered_10004e00((char *)&uStack_880,&DAT_1000fbd7,abStack_ae0,0x100);
                    recovered_10004e00((char *)&uStack_880,str_10010326,abStack_c34,0x80);
                    bVar31 = abStack_ae0[0];
                    bVar9 = abStack_ae0[0] != 0;
                    if (((pbVar32 == (byte *)0x0) || (pbVar16 <= pbVar32)) ||
                       (recovered_10009a44(param_2,pbVar20 + 1,(long)(pbVar32 + ~(ulong)pbVar20),
                                           (char *)abStack_dd4,0x100),
                       abStack_dd4[0] == 0 && abStack_c34[0] == 0)) goto LAB_10002b14;
                    pbVar20 = abStack_dd4;
                    if (abStack_dd4[0] == 0) {
                      pbVar20 = abStack_c34;
                    }
                    pbVar2 = abStack_ae0;
                    if (bVar31 == 0) {
                      pbVar2 = &DAT_1000fb37;
                    }
                    recovered_1000a810(param_2,(int *)&local_df0,aiStack_145c + uVar33 * 3,
                                       aiStack_145c + uVar33 * 3 + 1,(char *)pbVar20,
                                       (uint)(bVar31 != 0) << 1,pbVar2,uStack_1810);
                    bVar9 = false;
                    pbVar32 = pbVar32 + 4;
                    abStack_ae0[0] = 0;
                    goto LAB_10002910;
                  }
                  bVar10 = recovered_10004d9c(abStack_1809,&DAT_100102eb);
                  if (!bVar10) {
                    uVar21 = recovered_10009144(param_2,(char *)&uStack_880,(char *)abStack_1809);
                    if (((uVar21 & 1) == 0) && (bVar10 = recovered_100095b4(abStack_1809), !bVar10))
                    goto LAB_10002b14;
                    auVar35 = recovered_1000a92c(pbVar20,pbVar16,(char *)abStack_1809);
                    pbVar32 = PF_PART8(auVar35, 0);
                    goto LAB_10002910;
                  }
                  iVar12 = aiStack_145c[uVar33 * 3 + 1];
                  aiStack_145c[uVar33 * 3] = (uint)local_df0;
                  aiStack_145c[uVar33 * 3 + 1] = (uVar26 << 3 | 4) + iVar12;
                }
LAB_10002b14:
                pbVar32 = pbVar20 + 1;
                goto LAB_10002910;
              }
              local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 2);
              recovered_10009368(param_2,&DAT_100102f7,0,&DAT_1000fb37,uStack_1810,iStack_1814,
                                 (int *)&local_df0);
            }
            else {
              bVar9 = recovered_100095b4(abStack_1788);
              if (bVar9) goto LAB_10002b60;
              bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102f9);
              if (bVar9) {
                recovered_10009640(param_2,(undefined4 *)&local_df0);
                goto LAB_100027e4;
              }
              bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102b3);
              if ((bVar9) || (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102b6), bVar9)) {
                bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102b3);
                if ((bVar9) ||
                   ((bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102b6), bVar9 ||
                    (bVar9 = recovered_10004d9c(abStack_1788,&DAT_10010470), bVar9)))) {
                  abStack_b80[0] = 0;
                  recovered_10004e00((char *)abStack_1760,str_1000fc01,abStack_ae0,0x200);
                  if ((abStack_ae0[0] == 0) ||
                     (bVar9 = recovered_10008afc((long)abStack_ae0,str_100104c5,(char *)abStack_b80,
                                                 0x40), !bVar9)) {
                    recovered_10004e00((char *)abStack_1760,&DAT_10010372,(undefined1 *)aiStack_b40,
                                       0x60);
                    if ((char)aiStack_b40[0] != '\0') {
                      pf_varargs_1000f7f4_1
                                ((char *)abStack_1809,0x70,&DAT_100104dd,(ulonglong)aiStack_b40);
                      uVar18 = recovered_100089cc(*(char **)(param_2 + 800),(char *)abStack_1809,
                                                  (undefined1 *)&uStack_880);
                      if (((int)uVar18 != 0) &&
                         (bVar9 = recovered_10008afc((long)&uStack_880,str_100104c5,
                                                     (char *)abStack_b80,0x40), bVar9))
                      goto LAB_100030c0;
                    }
                    recovered_10004e00((char *)abStack_1760,str_10010303,abStack_dd4,0xb4);
                    uVar26 = (uint)abStack_dd4[0];
                    if (abStack_dd4[0] != 0) {
                      abStack_b80[0] = 0;
                      pbVar32 = abStack_dd4;
                      if (abStack_dd4[0] != 0) {
                        do {
                          while ((uVar26 < 0x21 &&
                                 ((1L << ((ulong)uVar26 & 0x3f) & 0x100003600U) != 0))) {
                            pbVar32 = pbVar32 + 1;
                            uVar26 = (uint)*pbVar32;
                          }
                          lVar28 = 0;
                          while( true ) {
                            if ((uVar26 < 0x21) &&
                               ((1L << ((ulong)uVar26 & 0x3f) & 0x100003601U) != 0)) {
                              lVar27 = lVar28;
                              goto LAB_10003024;
                            }
                            if (lVar28 == 0x5f) break;
                            *(char *)((long)auStack_8e0 + lVar28) = (char)uVar26;
                            uVar26 = (uint)pbVar32[lVar28 + 1];
                            lVar28 = lVar28 + 1;
                          }
                          lVar27 = 0x5f;
LAB_10003024:
                          *(undefined1 *)((long)auStack_8e0 + lVar27) = 0;
                          pbVar32 = pbVar32 + lVar28;
                          if (((char)auStack_8e0[0] != '\0') &&
                             (uVar33 = recovered_1000b020(param_2,(long)auStack_8e0,((uintptr_t)pf_module_state + 0xd01U),
                                                          (long)abStack_b80,0x40), (int)uVar33 != 0)
                             ) goto LAB_100030c0;
                          for (; 0x20 < *pbVar32 ||
                                 (1L << ((ulong)*pbVar32 & 0x3f) & 0x100003601U) == 0;
                              pbVar32 = pbVar32 + 1) {
                          }
                          uVar26 = (uint)*pbVar32;
                        } while (uVar26 != 0);
                      }
                    }
                    if (((abStack_1788[0] != 0) &&
                        (uVar18 = recovered_100089cc(*(char **)(param_2 + 800),(char *)abStack_1788,
                                                     (undefined1 *)&uStack_880), (int)uVar18 != 0))
                       && (bVar9 = recovered_10008afc((long)&uStack_880,str_100104c5,
                                                      (char *)abStack_b80,0x40), bVar9))
                    goto LAB_100030c0;
LAB_10003110:
                    recovered_10004e00((char *)abStack_1760,str_10010303,abStack_c34,0xb4);
                    recovered_10004e00((char *)abStack_1760,&DAT_10010372,acStack_c94,0x60);
                    recovered_10004e00((char *)abStack_1760,&DAT_100104f8,abStack_cd4,0x40);
                    bVar9 = recovered_10004d9c(abStack_cd4,(byte *)str_100104fd);
                    if (((!bVar9) &&
                        (pcVar13 = recovered_100052e0((char *)abStack_c34,&DAT_10010470),
                        pcVar13 == (char *)0x0)) &&
                       ((pcVar13 = recovered_100052e0((char *)abStack_c34,&DAT_10010508),
                        pcVar13 == (char *)0x0 &&
                        (pcVar13 = recovered_100052e0(acStack_c94,&DAT_10010470),
                        pcVar13 == (char *)0x0)))) {
                      pcVar13 = recovered_100052e0(acStack_c94,&DAT_10010508);
                      if (pcVar13 == (char *)0x0) goto LAB_100036d0;
                      bVar31 = 1;
                      iVar12 = 4;
                      goto LAB_100031a4;
                    }
                  }
                  else {
LAB_100030c0:
                    bVar9 = recovered_10004d9c(abStack_b80,&DAT_10010511);
                    if (((!bVar9) &&
                        (bVar9 = recovered_10004d9c(abStack_b80,(byte *)str_10010516), !bVar9)) &&
                       ((bVar9 = recovered_10004d9c(abStack_b80,(byte *)str_10010522), !bVar9 &&
                        (bVar9 = recovered_10004d9c(abStack_b80,(byte *)str_10010529), !bVar9))))
                    goto LAB_10003110;
                  }
                  bVar31 = 1;
                  iVar12 = 4;
                }
                else {
LAB_100036d0:
                  bVar31 = 0;
                  iVar12 = 6;
                }
LAB_100031a4:
                local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + iVar12);
                if (PF_PART4(uStack_1828, 4) < 0x10) {
                  uVar33 = (ulong)PF_PART4(uStack_1828, 4);
                  memset(abStack_1460 + uVar33 * 0xc,0,0xc);
                  abStack_1460[uVar33 * 0xc] = bVar31;
                  aiStack_145c[uVar33 * 3] = (uint)local_df0;
                  aiStack_145c[uVar33 * 3 + 1] = (int)local_de8;
                  uStack_1828 = CONCAT44(PF_PART4(uStack_1828, 4) + 1,(uint)uStack_1828);
                }
              }
              else {
                bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102b9);
                if (bVar9) {
                  if ((uint)uStack_1828 < 8) {
                    PF_PART4(uStack_1828, 0) = (uint)uStack_1828 + 1;
                  }
                  acStack_1560[0] = '\0';
                }
                else {
                  bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102fc);
                  if (bVar9) {
                    if (((uint)uStack_1828 != 0) && (acStack_1560[0] == '\0')) {
                      recovered_100096d8((long)abStack_1760,acStack_1560);
                    }
                  }
                  else {
                    bVar9 = recovered_10008e40(abStack_1788);
                    if (bVar9) {
                      bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102c1);
                      if (bVar9) {
                        recovered_10004e00((char *)abStack_1760,str_10010303,
                                           (undefined1 *)&uStack_880,0x60);
                        uVar18 = recovered_100097d0((byte *)&uStack_880,str_10010309);
                        if (((int)uVar18 == 0) || (0xf < uStack_1834)) {
                          uVar18 = recovered_100097d0((byte *)&uStack_880,str_1001030f);
                          if (((int)uVar18 == 0) ||
                             ((uStack_1834 == 0 ||
                              (uVar33 = (ulong)(uStack_1834 - 1),
                              aiStack_145c[uVar33 * 0x12 + 0x2f] != 1 || 0xf < uStack_1834)))) {
                            uVar18 = recovered_100097d0((byte *)&uStack_880,&DAT_10010316);
                            if (((int)uVar18 == 0) || (0xf < uStack_1834)) {
                              uVar18 = recovered_100097d0((byte *)&uStack_880,str_1001031a);
                              if (((int)uVar18 == 0) || (0xf < uStack_1834)) {
                                if (uStack_182c < 0xc) {
                                  aiStack_f20[uStack_182c] = iStack_1814;
                                  iStack_1814 = recovered_10009914((char *)abStack_1760,iStack_1814)
                                  ;
                                  uStack_182c = uStack_182c + 1;
                                }
                                if (uStack_1834 < 0x10) {
                                  uVar33 = (ulong)uStack_1834;
                                  memset(aiStack_145c + uVar33 * 0x12 + 0x2f,0,0x48);
                                  aiStack_145c[uVar33 * 0x12 + 0x2f] = 0;
                                  uVar21 = local_df0;
                                  auStack_139c[uVar33 * 9 + 1] = local_de8;
                                  auStack_139c[uVar33 * 9] = uVar21;
                                  uStack_1834 = uStack_1834 + 1;
                                }
                                goto LAB_10003464;
                              }
                              uVar33 = (ulong)uStack_1834;
                              memset(aiStack_145c + uVar33 * 0x12 + 0x2f,0,0x48);
                              aiStack_145c[uVar33 * 0x12 + 0x2f] = 4;
                              uVar21 = local_df0;
                              auStack_139c[uVar33 * 9 + 1] = local_de8;
                              auStack_139c[uVar33 * 9] = uVar21;
                            }
                            else {
                              uVar33 = (ulong)uStack_1834;
                              memset(aiStack_145c + uVar33 * 0x12 + 0x2f,0,0x48);
                              aiStack_145c[uVar33 * 0x12 + 0x2f] = 3;
                              uVar21 = local_df0;
                              auStack_139c[uVar33 * 9 + 1] = local_de8;
                              auStack_139c[uVar33 * 9] = uVar21;
                              uVar25 = *(undefined4 *)(param_2 + 0x52c40);
                              *(undefined4 *)(auStack_138c + uVar33 * 9 + 1) = 0xfc;
                              *(undefined4 *)(auStack_138c + uVar33 * 9 + 2) = uVar25;
                              puVar24 = (uint *)((long)auStack_138c + (uVar33 * 0x12 + 5) * 4);
                              *(undefined8 *)puVar24 = uVar15;
                              *(undefined4 *)((long)auStack_138c + (uVar33 * 0x12 + 7) * 4) = 3;
                              recovered_100098cc(param_2,((uintptr_t)pf_module_state + 0xb52U),puVar24);
                              local_df0 = CONCAT44((int)auStack_138c[uVar33 * 9 + 1] + -0x14,10);
                              local_de8 = CONCAT35(PF_PART3(local_de8, 5),0x10000000a);
                            }
                          }
                          else {
                            iVar11 = (int)auStack_138c[uVar33 * 9 + 4];
                            iVar29 = *(int *)((long)auStack_1364 + (uVar33 * 0x12 + -1) * 4);
                            iVar12 = iVar29 / 4;
                            if (iVar12 < 0x97) {
                              iVar12 = 0x96;
                            }
                            iVar12 = iVar12 + 10;
                            if ((int)auStack_1364[uVar33 * 9] != iVar11 &&
                                iVar11 + iVar29 < iVar12 + (int)auStack_1364[uVar33 * 9]) {
                              iVar29 = *(int *)((long)auStack_1364 + (uVar33 * 0x12 + 1) * 4);
                              uVar21 = auStack_1364[uVar33 * 9 + 1];
                              *(int *)(auStack_1364 + uVar33 * 9) = iVar11;
                              *(int *)((long)auStack_1364 + (uVar33 * 0x12 + 1) * 4) =
                                   (int)uVar21 + iVar29 + 10;
                              *(undefined4 *)(auStack_1364 + uVar33 * 9 + 1) = 0;
                            }
                            uVar21 = (ulong)uStack_1834;
                            memset(aiStack_145c + uVar21 * 0x12 + 0x2f,0,0x48);
                            aiStack_145c[uVar21 * 0x12 + 0x2f] = 2;
                            uVar34 = local_df0;
                            auStack_139c[uVar21 * 9 + 1] = local_de8;
                            auStack_139c[uVar21 * 9] = uVar34;
                            uVar34 = auStack_1364[uVar33 * 9];
                            auStack_138c[uVar21 * 9] = uVar34;
                            iVar11 = ((int)auStack_138c[uVar33 * 9 + 4] - (int)uVar34) +
                                     *(int *)((long)auStack_1364 + (uVar33 * 0x12 + -1) * 4);
                            if (iVar11 <= iVar12) {
                              iVar12 = iVar11;
                            }
                            *(int *)(auStack_138c + uVar21 * 9 + 1) = iVar12;
                            puVar24 = (uint *)((long)auStack_138c + (uVar21 * 0x12 + 5) * 4);
                            *(undefined8 *)puVar24 = uVar6;
                            *(undefined4 *)((long)auStack_138c + (uVar21 * 0x12 + 7) * 4) = 0;
                            recovered_100098cc(param_2,((uintptr_t)pf_module_state + 0xb4bU),puVar24);
                            iVar12 = (int)auStack_138c[uVar21 * 9 + 1];
                            if (iVar12 < 0x45) {
                              iVar12 = 0x44;
                            }
                            local_df0 = CONCAT44(iVar12 + -0x14,(int)auStack_138c[uVar21 * 9] + 10);
                            PF_PART5(local_de8, 0) =
                                 (uint5)(*(int *)((long)auStack_138c + (uVar21 * 0x12 + 1) * 4) + 10
                                        );
                          }
                        }
                        else {
                          uVar33 = (ulong)uStack_1834;
                          memset(aiStack_145c + uVar33 * 0x12 + 0x2f,0,0x48);
                          aiStack_145c[uVar33 * 0x12 + 0x2f] = 1;
                          uVar21 = local_df0;
                          auStack_139c[uVar33 * 9 + 1] = local_de8;
                          auStack_139c[uVar33 * 9] = uVar21;
                          uVar21 = local_df0;
                          auStack_138c[uVar33 * 9 + 4] = local_df0;
                          *(int *)(auStack_1364 + uVar33 * 9) = (int)uVar21;
                          *(int *)((long)auStack_1364 + (uVar33 * 0x12 + 1) * 4) = (int)local_de8;
                          *(undefined4 *)(auStack_1364 + uVar33 * 9 + 1) = 0;
                        }
                        uStack_1834 = uStack_1834 + 1;
                        pbVar32 = (byte *)(pcVar17 + 1);
                        goto LAB_100025e8;
                      }
                      bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102c5);
                      if ((bVar9) && (uStack_182c < 0xc)) {
                        aiStack_f20[uStack_182c] = iStack_1814;
                        uStack_182c = uStack_182c + 1;
                        iStack_1814 = 1;
                      }
LAB_10003464:
                      iVar12 = (int)local_de8 + 8;
LAB_1000346c:
                      local_de8 = CONCAT44(PF_PART4(local_de8, 4),iVar12);
                    }
                    else {
                      bVar9 = recovered_10004d9c(abStack_1788,&DAT_1001029c);
                      if (bVar9) {
                        recovered_10004e00((char *)abStack_1760,str_10010303,
                                           (undefined1 *)&uStack_880,0x40);
                        uVar33 = recovered_10009994(param_2,(char *)&uStack_880,2);
                        uStack_1810 = (uint)uVar33;
                        local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 8);
                        iStack_1818 = 1;
                      }
                      else {
                        bVar9 = recovered_10004d9c(abStack_1788,&DAT_1001029f);
                        if ((((bVar9) ||
                             (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102a2), bVar9)) ||
                            (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102a5), bVar9)) ||
                           ((bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102a8), bVar9 ||
                            (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102ab), bVar9)))) {
                          recovered_10004e00((char *)abStack_1760,str_10010303,
                                             (undefined1 *)&uStack_880,0x40);
                          iStack_1818 = 1;
                          uVar33 = recovered_10009994(param_2,(char *)&uStack_880,1);
                          uStack_1810 = (uint)uVar33;
                          local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 8);
                        }
                        else {
                          bVar9 = recovered_10004d9c(abStack_1788,&DAT_10010282);
                          if (bVar9) {
                            pcVar13 = recovered_100052e0(pcVar17 + 1,&DAT_10010321);
                            recovered_10004e00((char *)abStack_1760,&DAT_1000fbd7,acStack_ef0,0x100)
                            ;
                            recovered_10004e00((char *)abStack_1760,str_10010326,abStack_ae0,0x80);
                            cVar7 = acStack_ef0[0];
                            bVar8 = acStack_ef0[0] != '\0';
                            if ((pcVar13 != (char *)0x0) && (abStack_ae0[0] != 0)) {
                              recovered_10009a44(param_2,(byte *)(pcVar17 + 1),
                                                 (long)(pcVar13 + ~(ulong)pcVar17),
                                                 (char *)&uStack_880,0x100);
                              if ((byte)uStack_880 == 0) {
                                pcVar17 = acStack_ef0;
                                if (cVar7 == '\0') {
                                  pcVar17 = &DAT_1000fb37;
                                }
                                recovered_10009368(param_2,abStack_ae0,(uint)(cVar7 != '\0') << 1,
                                                   pcVar17,uStack_1810,iStack_1814,(int *)&local_df0
                                                  );
                                pbVar32 = (byte *)(pcVar13 + 4);
                                bVar8 = false;
                                acStack_ef0[0] = '\0';
                                goto LAB_100025e8;
                              }
                            }
                          }
                          else {
                            bVar9 = recovered_10004d9c(abStack_1788,&DAT_10010331);
                            if (bVar9) {
                              recovered_100096d8((long)abStack_1760,abStack_ae0);
                              if ((abStack_ae0[0] == 0) && (acStack_1560[0] != '\0')) {
                                recovered_10001c8c((char *)abStack_ae0,0x100,(long)acStack_1560);
                              }
                              recovered_10004e00((char *)abStack_1760,&DAT_10010335,abStack_dd4,0x80
                                                );
                              recovered_10004e00((char *)abStack_1760,str_10010339,abStack_c34,0x20)
                              ;
                              recovered_10004e00((char *)abStack_1760,str_1001033f,abStack_1809,0x20
                                                );
                              iVar11 = recovered_10009ddc(abStack_c34);
                              iVar12 = recovered_10009ddc(abStack_1809);
                              memset(&uStack_880,0,0x370);
                              uStack_880 = CONCAT44(PF_PART4(uStack_880, 4),3);
                              if (iVar11 < 1) {
                                bVar9 = recovered_1000b1dc((long)abStack_ae0);
                                iVar11 = PF_PART4(local_df0, 4);
                                if (!bVar9) {
                                  iVar11 = 0xa0;
                                }
                              }
                              if (iVar12 < 1) {
                                bVar9 = recovered_1000b1dc((long)abStack_ae0);
                                if (bVar9) {
                                  iVar12 = iVar11;
                                  if (0x40 < iVar11) {
                                    iVar12 = 0xb4;
                                  }
                                }
                                else {
                                  iVar12 = 0x5a;
                                }
                              }
                              if (((int32_t)PF_PART4(local_df0, 4)) <= iVar11) {
                                iVar11 = PF_PART4(local_df0, 4);
                              }
                              iStack_870 = iVar12;
                              PF_PART4(uStack_878, 4) = iVar11;
                              iVar12 = recovered_1000afe4((int *)&local_df0,iStack_1814,iVar11);
                              uStack_880 = CONCAT44(iVar12,(undefined4)uStack_880);
                              uStack_878 = CONCAT44(PF_PART4(uStack_878, 4),(int)local_de8);
                              uStack_52c = 0x1ffffffff;
                              iStack_524 = iStack_1814;
                              uStack_514 = PF_PART1(local_de8, 4);
                              recovered_10001c8c(acStack_7ac,0x100,(long)abStack_ae0);
                              pbVar32 = abStack_ae0;
                              if (abStack_dd4[0] != 0) {
                                pbVar32 = abStack_dd4;
                              }
                              recovered_10001c8c(acStack_86c,0xc0,(long)pbVar32);
                              uVar26 = *(uint *)(param_2 + 0x52c40);
                              if (uVar26 < 0x180) {
                                *(uint *)(param_2 + 0x52c40) = uVar26 + 1;
                                memcpy((void *)(param_2 + 0x440 + (ulong)uVar26 * 0x370)
                                                   ,&uStack_880,0x370);
                              }
                              iVar12 = iStack_870 + (int)local_de8 + 0xe;
                              goto LAB_1000346c;
                            }
                            bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_10010346);
                            if (bVar9) {
                              recovered_10004e00((char *)abStack_1760,&DAT_1000fc21,abStack_dd4,
                                                 0x100);
                              if (abStack_dd4[0] != 0) {
                                abStack_c34[0] = 0;
                                uVar33 = recovered_10005370(param_1,(char *)param_2,
                                                            (char *)abStack_dd4,
                                                            (undefined1 *)&uStack_880,0x800,
                                                            (char *)abStack_c34);
                                if ((int)uVar33 == 0) {
                                  recovered_10009368(param_2,(byte *)str_100105ac,0,&DAT_1000fb37,
                                                     uStack_1810,0,(int *)&local_df0);
                                }
                                else {
                                  pcVar13 = (char *)&uStack_880;
LAB_10003b98:
                                  while (*pcVar13 == '<') {
                                    pcVar22 = strchr(pcVar13,0x3e);
                                    if (pcVar22 == (char *)0x0) goto LAB_100027e4;
                                    auStack_8e0[0] = auStack_8e0[0] & 0xffffff00;
                                    iVar12 = (int)pcVar22 + ~(uint)pcVar13;
                                    if (0x7e < iVar12) {
                                      iVar12 = 0x7f;
                                    }
                                    memcpy(abStack_ae0,pcVar13 + 1,(long)iVar12);
                                    abStack_ae0[iVar12] = 0;
                                    recovered_10004cb8(abStack_ae0,abStack_1809,0x28,
                                                       (undefined1 *)auStack_8e0);
                                    if ((auStack_8e0[0] & 1) == 0) {
                                      bVar9 = recovered_10004d9c(abStack_1809,&DAT_100102f9);
                                      if (bVar9) {
                                        recovered_10009640(param_2,(undefined4 *)&local_df0);
                                        goto LAB_10003ca0;
                                      }
                                      bVar9 = recovered_10004d9c(abStack_1809,&DAT_100102eb);
                                      if (bVar9) {
                                        local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 0xc);
                                        goto LAB_10003ca0;
                                      }
                                      bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_1000fc10);
                                      pcVar23 = str_1000fc17;
                                      if (!bVar9) {
                                        bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_1000fc01
                                                                  );
                                        pcVar23 = str_1000fc07;
                                        if (!bVar9) goto LAB_10003ca0;
                                      }
                                      pcVar13 = pcVar22 + 1;
                                      pcVar22 = recovered_100052e0(pcVar13,pcVar23);
                                      if (pcVar22 != (char *)0x0) {
                                        bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_1000fc10
                                                                  );
                                        lVar28 = 8;
                                        if (bVar9) {
                                          lVar28 = 9;
                                        }
                                        pcVar13 = pcVar22 + lVar28;
                                      }
                                    }
                                    else {
LAB_10003ca0:
                                      pcVar13 = pcVar22 + 1;
                                    }
                                  }
                                  if (*pcVar13 != '\0') {
                                    pcVar22 = strchr(pcVar13,0x3c);
                                    if (pcVar22 == (char *)0x0) {
                                      uVar33 = strlen(pcVar13);
                                    }
                                    else {
                                      uVar33 = (long)pcVar22 - (long)pcVar13;
                                    }
                                    iVar12 = (int)uVar33;
                                    if (0x17e < iVar12) {
                                      iVar12 = 0x17f;
                                    }
                                    memcpy(abStack_ae0,pcVar13,(long)iVar12);
                                    abStack_ae0[iVar12] = 0;
                                    recovered_10009368(param_2,abStack_ae0,0,&DAT_1000fb37,
                                                       uStack_1810,0,(int *)&local_df0);
                                    pcVar13 = pcVar13 + uVar33;
                                    if (pcVar22 != (char *)0x0) {
                                      pcVar13 = pcVar22;
                                    }
                                    goto LAB_10003b98;
                                  }
                                }
                              }
                            }
                            else {
                              bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102ae);
                              if (bVar9) {
                                if (uStack_182c < 0xc) {
                                  aiStack_f20[uStack_182c] = iStack_1814;
                                  iStack_1814 = recovered_10009914((char *)abStack_1760,iStack_1814)
                                  ;
                                  uStack_182c = uStack_182c + 1;
                                }
                                if (*puVar1 < 0x10) {
                                  dst_00 = (undefined1 *)
                                           (param_2 + 0x52c44 + (ulong)*puVar1 * 0x188);
                                  memset(dst_00,0,0x188);
                                  recovered_10004e00((char *)abStack_1760,str_1001034d,dst_00,0x100)
                                  ;
                                  recovered_10004e00((char *)abStack_1760,str_10010354,
                                                     dst_00 + 0x108,0x80);
                                  recovered_10004e00((char *)abStack_1760,str_1001035d,
                                                     (undefined1 *)&uStack_880,0x10);
                                  pbVar32 = &DAT_10010364;
                                  if ((byte)uStack_880 != 0) {
                                    pbVar32 = (byte *)&uStack_880;
                                  }
                                  recovered_10001c8c(dst_00 + 0x100,8,(long)pbVar32);
                                  uStack_1830 = *puVar1;
                                  *puVar1 = uStack_1830 + 1;
                                }
                                local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 6);
                              }
                              else {
                                bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102d5);
                                if (bVar9) {
                                  recovered_10004e00((char *)abStack_1760,&DAT_10010368,abStack_1809
                                                     ,0x20);
                                  recovered_10004e00((char *)abStack_1760,&DAT_1001036d,abStack_dd4,
                                                     0x40);
                                  recovered_10004e00((char *)abStack_1760,&DAT_10010372,abStack_c34,
                                                     0x40);
                                  recovered_10004e00((char *)abStack_1760,str_10010375,
                                                     (undefined1 *)&uStack_880,0x80);
                                  bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_1001037b);
                                  if (bVar9) {
LAB_10003e60:
                                    pbVar32 = (byte *)&uStack_880;
                                  }
                                  else {
                                    uVar18 = recovered_10009144(param_2,(char *)abStack_1760,
                                                                (char *)abStack_1788);
                                    bVar31 = abStack_1809[0];
                                    if ((int)uVar18 != 0) goto LAB_10003e60;
                                    if ((abStack_1809[0] != 0) &&
                                       (((bVar9 = recovered_10004d9c(abStack_1809,
                                                                     (byte *)str_10010382), bVar9 ||
                                         (bVar9 = recovered_10004d9c(abStack_1809,
                                                                     (byte *)str_10010389), bVar9))
                                        || (bVar9 = recovered_10004d9c(abStack_1809,
                                                                       (byte *)str_10010390), bVar9)
                                        ))) {
                                      recovered_10004e00((char *)abStack_1760,str_10010396,
                                                         abStack_ae0,0x80);
                                      pbVar32 = (byte *)str_1001039e;
                                      if ((byte)uStack_880 != 0) {
                                        pbVar32 = (byte *)&uStack_880;
                                      }
                                      bVar9 = recovered_1000a100((char *)abStack_1760,str_100103a5);
                                      recovered_10009f08(param_2,(char *)pbVar32,abStack_dd4,
                                                         (undefined *)&uStack_880,abStack_ae0,
                                                         uStack_1830,bVar9,iStack_1814,
                                                         (int *)&local_df0);
                                      goto LAB_100027e4;
                                    }
                                    bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_100103ae);
                                    if ((!bVar9) &&
                                       (bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_100103b7
                                                                  ), !bVar9)) {
                                      bVar9 = recovered_10004d9c(abStack_1809,(byte *)str_100103c8);
                                      if (((!bVar9) &&
                                          (bVar9 = recovered_10004d9c(abStack_1809,&DAT_100103ce),
                                          !bVar9)) &&
                                         (((((bVar31 == 0 ||
                                             (((bVar9 = recovered_10004d9c(abStack_1809,
                                                                           &DAT_100103d3), bVar9 ||
                                               (bVar9 = recovered_10004d9c(abStack_1809,
                                                                           (byte *)str_100103d8),
                                               bVar9)) ||
                                              (bVar9 = recovered_10004d9c(abStack_1809,&DAT_100103df
                                                                         ), bVar9)))) ||
                                            (((bVar9 = recovered_10004d9c(abStack_1809,
                                                                          (byte *)str_100103e3),
                                              bVar9 || (bVar9 = recovered_10004d9c(abStack_1809,
                                                                                   (byte *)
                                                  str_100103e9), bVar9)) ||
                                             (bVar9 = recovered_10004d9c(abStack_1809,&DAT_100103f2)
                                             , bVar9)))) ||
                                           ((bVar9 = recovered_10004d9c(abStack_1809,
                                                                        (byte *)str_100103f6), bVar9
                                            || (bVar9 = recovered_10004d9c(abStack_1809,
                                                                           &DAT_100103fd), bVar9))))
                                          || ((bVar9 = recovered_10004d9c(abStack_1809,
                                                                          (byte *)str_10010402),
                                              bVar9 || (bVar9 = recovered_10004d9c(abStack_1809,
                                                                                   &DAT_10010411),
                                                       bVar9)))))) {
                                        recovered_1000a1f8(param_2,(char *)abStack_dd4,
                                                           (char *)abStack_c34,
                                                           (undefined *)&uStack_880,uStack_1830,
                                                           iStack_1814,(int *)&local_df0);
                                      }
                                      goto LAB_100027e4;
                                    }
                                    bVar9 = recovered_1000a100((char *)abStack_1760,str_100103bd);
                                    if (!bVar9) goto LAB_100027e4;
                                    pbVar32 = &DAT_100103c5;
                                    if ((byte)uStack_880 != 0) {
                                      pbVar32 = (byte *)&uStack_880;
                                    }
                                  }
                                  recovered_10009e44(param_2,abStack_dd4,abStack_c34,pbVar32,
                                                     uStack_1830);
                                }
                                else {
                                  bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102db);
                                  if (bVar9) {
                                    pcVar13 = recovered_100052e0(pcVar17 + 1,str_10010416);
                                    recovered_10004e00((char *)abStack_1760,&DAT_1001036d,
                                                       abStack_dd4,0x40);
                                    recovered_10004e00((char *)abStack_1760,&DAT_10010372,
                                                       abStack_c34,0x40);
                                    uStack_880 = uStack_880 & 0xffffffffffffff00;
                                    if (pcVar13 != (char *)0x0) {
                                      iVar12 = (int)pcVar13 + ~uVar26;
                                      if (0xfe < iVar12) {
                                        iVar12 = 0xff;
                                      }
                                      memcpy(&uStack_880,pcVar17 + 1,(long)iVar12);
                                      *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
                                    }
                                    recovered_100054ec((long)&uStack_880,(char *)abStack_ae0,0x100);
                                    uVar18 = recovered_10009144(param_2,(char *)abStack_1760,
                                                                (char *)abStack_1788);
                                    if ((int)uVar18 == 0) {
                                      recovered_1000a1f8(param_2,(char *)abStack_dd4,
                                                         (char *)abStack_c34,abStack_ae0,uStack_1830
                                                         ,iStack_1814,(int *)&local_df0);
                                    }
                                    else {
                                      recovered_10009e44(param_2,abStack_dd4,abStack_c34,abStack_ae0
                                                         ,uStack_1830);
                                    }
                                    if (pcVar13 != (char *)0x0) {
                                      pbVar32 = (byte *)(pcVar13 + 0xb);
                                      goto LAB_100025e8;
                                    }
                                  }
                                  else {
                                    bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102e4);
                                    if (bVar9) {
                                      pcVar13 = pcVar17 + 1;
                                      pcVar22 = recovered_100052e0(pcVar13,str_10010422);
                                      recovered_10004e00((char *)abStack_1760,&DAT_1001036d,
                                                         (undefined1 *)auStack_8e0,0x40);
                                      recovered_10004e00((char *)abStack_1760,&DAT_10010372,
                                                         (undefined1 *)aiStack_b40,0x40);
                                      abStack_1809[0] = 0;
                                      if (pcVar22 != (char *)0x0) {
                                        abStack_1809[0] = 0;
                                        abStack_ae0[0] = 0;
                                        while ((((pcVar13 < pcVar22 &&
                                                 (pcVar13 = recovered_100052e0(pcVar13,str_100105bf)
                                                 , pcVar13 != (char *)0x0)) && (pcVar13 < pcVar22))
                                               && ((pcVar23 = strchr(pcVar13,0x3e),
                                                   pcVar23 != (char *)0x0 && (pcVar23 < pcVar22)))))
                                        {
                                          iVar12 = (uint)pcVar23 + ~(uint)pcVar13;
                                          if (0xfe < iVar12) {
                                            iVar12 = 0xff;
                                          }
                                          memcpy(&uStack_880,pcVar13 + 1,(long)iVar12);
                                          *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
                                          recovered_10004e00((char *)&uStack_880,str_10010375,
                                                             abStack_dd4,0x80);
                                          src = pcVar23 + 1;
                                          pcVar14 = recovered_100052e0(src,str_100105c7);
                                          if (abStack_dd4[0] == 0) {
                                            iVar12 = (int)pcVar14;
                                            if (pcVar22 <= pcVar14 || pcVar14 == (char *)0x0) {
                                              iVar12 = (int)pcVar22;
                                            }
                                            iVar12 = iVar12 + ~(uint)pcVar23;
                                            if (0x7e < iVar12) {
                                              iVar12 = 0x7f;
                                            }
                                            memcpy(abStack_c34,src,(long)iVar12);
                                            abStack_c34[iVar12] = 0;
                                            uVar33 = strlen((char *)abStack_c34);
                                            recovered_10009a44(0,abStack_c34,uVar33,
                                                               (char *)abStack_dd4,0x80);
                                          }
                                          if (abStack_ae0[0] == 0) {
                                            recovered_10001c8c((char *)abStack_ae0,0x80,
                                                               (long)abStack_dd4);
                                          }
                                          bVar9 = recovered_1000a100((char *)&uStack_880,
                                                                     str_100105d1);
                                          if (bVar9) {
                                            pbVar32 = abStack_dd4;
                                            goto LAB_100043e4;
                                          }
                                          pcVar13 = pcVar14 + 9;
                                          if (pcVar14 == (char *)0x0) {
                                            pcVar13 = src;
                                          }
                                        }
                                        pbVar32 = abStack_ae0;
LAB_100043e4:
                                        recovered_10001c8c((char *)abStack_1809,0x80,(long)pbVar32);
                                      }
                                      uVar18 = recovered_10009144(param_2,(char *)abStack_1760,
                                                                  (char *)abStack_1788);
                                      if ((int)uVar18 == 0) {
                                        recovered_1000a1f8(param_2,(char *)auStack_8e0,
                                                           (char *)aiStack_b40,abStack_1809,
                                                           uStack_1830,iStack_1814,(int *)&local_df0
                                                          );
                                      }
                                      else {
                                        recovered_10009e44(param_2,(undefined *)auStack_8e0,
                                                           (undefined *)aiStack_b40,abStack_1809,
                                                           uStack_1830);
                                      }
                                      if (pcVar22 != (char *)0x0) {
                                        pbVar32 = (byte *)(pcVar22 + 9);
                                        goto LAB_100025e8;
                                      }
                                    }
                                    else {
                                      bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_10010389);
                                      if (!bVar9) {
                                        bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_10010436
                                                                  );
                                        if ((!bVar9) ||
                                           (pcVar13 = recovered_100052e0(pcVar17 + 1,str_1001043c),
                                           pcVar13 == (char *)0x0)) goto LAB_100027e4;
                                        iVar12 = (int)pcVar13 + ~uVar26;
                                        if (0x3e < iVar12) {
                                          iVar12 = 0x3f;
                                        }
                                        memcpy(dst,pcVar17 + 1,(long)iVar12);
                                        dst[iVar12] = '\0';
                                        recovered_100054ec((long)dst,(char *)&uStack_880,0x40);
                                        recovered_10001c8c(dst,0x40,(long)&uStack_880);
                                        pbVar32 = (byte *)(pcVar13 + 8);
                                        goto LAB_100025e8;
                                      }
                                      pcVar13 = recovered_100052e0(pcVar17 + 1,str_1001042c);
                                      recovered_10004e00((char *)abStack_1760,&DAT_10010368,
                                                         (undefined1 *)auStack_8e0,0x20);
                                      recovered_10004e00((char *)abStack_1760,&DAT_1001036d,
                                                         abStack_1809,0x40);
                                      recovered_10004e00((char *)abStack_1760,str_10010375,
                                                         (undefined1 *)&uStack_880,0x80);
                                      recovered_10004e00((char *)abStack_1760,str_10010326,
                                                         abStack_dd4,0x80);
                                      abStack_ae0[0] = 0;
                                      recovered_10004e00((char *)abStack_1760,str_10010396,
                                                         abStack_c34,0x80);
                                      if (pcVar13 != (char *)0x0) {
                                        recovered_10009a44(param_2,(byte *)(pcVar17 + 1),
                                                           (long)(pcVar13 + ~(ulong)pcVar17),
                                                           (char *)abStack_ae0,0x80);
                                      }
                                      bVar9 = recovered_10004d9c((byte *)auStack_8e0,
                                                                 (byte *)str_100103c8);
                                      if (!bVar9) {
                                        if (abStack_ae0[0] == 0) {
                                          if (abStack_dd4[0] == 0) {
                                            pbVar32 = (byte *)str_1001039e;
                                            if ((byte)uStack_880 != 0) {
                                              pbVar32 = (byte *)&uStack_880;
                                            }
                                          }
                                          else {
                                            pbVar32 = abStack_dd4;
                                          }
                                        }
                                        else {
                                          pbVar32 = abStack_ae0;
                                        }
                                        bVar9 = recovered_1000a100((char *)abStack_1760,str_100103a5
                                                                  );
                                        recovered_10009f08(param_2,(char *)pbVar32,abStack_1809,
                                                           (undefined *)&uStack_880,abStack_c34,
                                                           uStack_1830,bVar9,iStack_1814,
                                                           (int *)&local_df0);
                                      }
                                      if (pcVar13 != (char *)0x0) {
                                        pbVar32 = (byte *)(pcVar13 + 9);
                                        goto LAB_100025e8;
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
LAB_100027e4:
          pbVar32 = (byte *)(pcVar17 + 1);
          goto LAB_100025e8;
        }
LAB_10002b60:
        pbVar32 = recovered_10008fbc((long)pcVar17,abStack_1788);
      }
      else {
        bVar9 = recovered_10004d9c(abStack_1788,&DAT_10010282);
        if (bVar9) {
          bVar8 = false;
          acStack_ef0[0] = '\0';
        }
        else {
          bVar9 = recovered_10004d9c(abStack_1788,&DAT_1001029c);
          if (((((bVar9) || (bVar9 = recovered_10004d9c(abStack_1788,&DAT_1001029f), bVar9)) ||
               (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102a2), bVar9)) ||
              ((bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102a5), bVar9 ||
               (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102a8), bVar9)))) ||
             (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102ab), bVar9)) {
            iStack_1818 = 0;
            local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 6);
            uStack_1810 = 1;
          }
          else {
            bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102ae);
            if (bVar9) {
              if (uStack_182c == 0) {
                uStack_182c = 0;
              }
              else {
                uStack_182c = uStack_182c - 1;
                iStack_1814 = aiStack_f20[uStack_182c];
              }
              local_de8 = CONCAT44(PF_PART4(local_de8, 4),(int)local_de8 + 8);
              uStack_1830 = 0xffffffff;
            }
            else {
              bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102b3);
              if ((bVar9) || (bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102b6), bVar9)) {
                if (PF_PART4(uStack_1828, 4) == 0) {
                  uStack_1828 = uStack_1828 & 0xffffffff;
LAB_100033e0:
                  iVar11 = (int)local_de8 + 8;
                }
                else {
                  PF_PART4(uStack_1828, 4) = PF_PART4(uStack_1828, 4) - 1;
                  if ((abStack_1460[(ulong)PF_PART4(uStack_1828, 4) * 0xc] & 1) == 0) goto LAB_100033e0;
                  uVar26 = uStack_1810;
                  if ((int)uStack_1810 < 2) {
                    uVar26 = 1;
                  }
                  iVar12 = aiStack_145c[(ulong)PF_PART4(uStack_1828, 4) * 3 + 1] + uVar26 * 8 + 8;
                  iVar11 = (int)local_de8;
                  if ((int)local_de8 <= iVar12) {
                    iVar11 = iVar12;
                  }
                }
                local_de8 = CONCAT44(PF_PART4(local_de8, 4),iVar11);
              }
              else {
                bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102b9);
                if (bVar9) {
                  bVar9 = (uint)uStack_1828 == 0;
                  iVar12 = (uint)uStack_1828 - 1;
                  uStack_1828 = CONCAT44(PF_PART4(uStack_1828, 4),iVar12);
                  if (bVar9 || iVar12 == 0) {
                    uStack_1828 = (ulong)PF_PART4(uStack_1828, 4) << 0x20;
                    acStack_1560[0] = '\0';
                  }
                }
                else {
                  bVar9 = recovered_10008e40(abStack_1788);
                  if (bVar9) {
                    bVar9 = recovered_10004d9c(abStack_1788,&DAT_100102c1);
                    if (!bVar9) {
                      bVar9 = recovered_10004d9c(abStack_1788,(byte *)str_100102c5);
                      if ((bVar9) && (uStack_182c != 0)) {
                        uStack_182c = uStack_182c - 1;
                        iStack_1814 = aiStack_f20[uStack_182c];
                      }
                      goto LAB_100033e0;
                    }
                    if (uStack_1834 == 0) {
                      uStack_1834 = 0;
                    }
                    else {
                      uVar26 = uStack_1834 - 1;
                      uVar33 = (ulong)uVar26;
                      iVar12 = aiStack_145c[uVar33 * 0x12 + 0x2f];
                      uStack_878 = auStack_139c[uVar33 * 9 + 1];
                      uStack_880 = auStack_139c[uVar33 * 9];
                      if (iVar12 == 1) {
                        local_de8 = auStack_139c[uVar33 * 9 + 1];
                        local_df0 = auStack_139c[uVar33 * 9];
                        iVar12 = (int)auStack_1364[uVar33 * 9 + 1] +
                                 *(int *)((long)auStack_1364 + (uVar33 * 0x12 + 1) * 4) + 10;
LAB_10003b28:
                        local_de8 = CONCAT44(PF_PART4(local_de8, 4),iVar12);
                      }
                      else {
                        iVar11 = (int)auStack_138c[uVar33 * 9 + 1];
                        uVar25 = *(undefined4 *)((long)auStack_138c + (uVar33 * 0x12 + 5) * 4);
                        uVar21 = auStack_138c[uVar33 * 9 + 3];
                        uVar3 = *(undefined4 *)((long)auStack_138c + (uVar33 * 0x12 + 7) * 4);
                        iVar29 = (int)local_de8;
                        if (iVar12 == 3) {
                          uVar33 = (ulong)(uint)auStack_138c[uVar33 * 9 + 2];
                          iVar12 = (int)local_de8;
                          if ((int)local_de8 < 0x1b) {
                            iVar12 = 0x1a;
                          }
                          iVar5 = (DAT_100180d0 - iVar11) + -0x1c;
                          iVar29 = (DAT_100180d4 - iVar12) + -0x68;
                          if (iVar29 < 0x13) {
                            iVar29 = 0x12;
                          }
                          uVar4 = *(uint *)(param_2 + 0x52c40);
                          piVar30 = (int *)(param_2 + 0x444 + uVar33 * 0x370);
                          for (; uVar33 < uVar4; uVar33 = uVar33 + 1) {
                            *piVar30 = *piVar30 + iVar5;
                            piVar30[1] = piVar30[1] + iVar29 + -10;
                            *(undefined1 *)(piVar30 + 0xda) = 1;
                            piVar30 = piVar30 + 0xdc;
                          }
                          recovered_10008f1c(param_2,CONCAT44(iVar29 + -10,iVar5),
                                             CONCAT44(iVar12 + 10,iVar11),uVar25,(int)uVar21,uVar3,1
                                            );
                        }
                        else {
                          if (iVar12 != 2) {
                            local_df0 = auStack_139c[uVar33 * 9];
                            PF_PART4(local_de8, 0) = (int)auStack_139c[uVar33 * 9 + 1];
                            if ((int)local_de8 <= iVar29) {
                              PF_PART4(local_de8, 0) = iVar29;
                            }
                            PF_PART4(local_de8, 4) = (undefined4)(auStack_139c[uVar33 * 9 + 1] >> 0x20);
                            if (uStack_182c == 0) {
                              uStack_182c = 0;
                            }
                            else {
                              uStack_182c = uStack_182c - 1;
                              iStack_1814 = aiStack_f20[uStack_182c];
                            }
                            if (iVar12 != 4) {
                              iVar12 = (int)local_de8 + 8;
                              goto LAB_10003b28;
                            }
                            goto LAB_10003b2c;
                          }
                          uVar34 = auStack_138c[uVar33 * 9];
                          iVar12 = (int)local_de8 -
                                   *(int *)((long)auStack_138c + (uVar33 * 0x12 + 1) * 4);
                          if (iVar12 < 0x13) {
                            iVar12 = 0x12;
                          }
                          iVar12 = iVar12 + 10;
                          recovered_10008f1c(param_2,auStack_138c[uVar33 * 9],
                                             CONCAT44(iVar12,iVar11),uVar25,(int)uVar21,uVar3,0);
                          if ((uVar26 != 0) &&
                             (uVar33 = (ulong)(uStack_1834 - 2),
                             aiStack_145c[uVar33 * 0x12 + 0x2f] == 1)) {
                            iVar29 = (int)auStack_1364[uVar33 * 9 + 1];
                            if ((int)auStack_1364[uVar33 * 9 + 1] <= iVar12) {
                              iVar29 = iVar12;
                            }
                            *(int *)(auStack_1364 + uVar33 * 9 + 1) = iVar29;
                            *(int *)(auStack_1364 + uVar33 * 9) = iVar11 + (int)uVar34;
                          }
                        }
                        local_de8 = uStack_878;
                        local_df0 = uStack_880;
                      }
LAB_10003b2c:
                      uStack_1834 = uVar26;
                    }
                  }
                }
              }
            }
          }
        }
LAB_100026fc:
        pbVar32 = (byte *)(pcVar17 + 1);
      }
      goto LAB_100025e8;
    }
    pcVar13 = strstr((char *)(pbVar32 + 4),&DAT_1000fbc9);
    pbVar32 = (byte *)(pcVar13 + 3);
    if (pcVar13 == (char *)0x0) {
      pbVar32 = (byte *)(pcVar17 + 1);
    }
  } while( true );
LAB_10002e2c:
  local_de8 = CONCAT44(PF_PART4(local_de8, 4),aiStack_b40[0] + uVar26 * 8 + 5);
LAB_10002e40:
  pbVar32 = (byte *)(pcVar13 + 5);
  goto LAB_100025e8;
}

#undef DAT_1000fa88
#undef DAT_1000fa90
#undef DAT_1000fb37
#undef DAT_1000fbc5
#undef DAT_1000fbc9
#undef DAT_1000fbd7
#undef DAT_1000fc21
#undef DAT_10010282
#undef DAT_1001029c
#undef DAT_1001029f
#undef DAT_100102a2
#undef DAT_100102a5
#undef DAT_100102a8
#undef DAT_100102ab
#undef DAT_100102ae
#undef DAT_100102b3
#undef DAT_100102b6
#undef DAT_100102c1
#undef DAT_100102eb
#undef DAT_100102ee
#undef DAT_100102f7
#undef DAT_100102f9
#undef DAT_10010316
#undef DAT_10010321
#undef DAT_10010331
#undef DAT_10010335
#undef DAT_10010364
#undef DAT_10010368
#undef DAT_1001036d
#undef DAT_10010372
#undef DAT_100103c5
#undef DAT_100103ce
#undef DAT_100103d3
#undef DAT_100103df
#undef DAT_100103f2
#undef DAT_100103fd
#undef DAT_10010411
#undef DAT_10010470
#undef DAT_100104dd
#undef DAT_100104f8
#undef DAT_10010508
#undef DAT_10010511
#undef DAT_100180d0
#undef DAT_100180d4
#undef str_1000fc01
#undef str_1000fc07
#undef str_1000fc10
#undef str_1000fc17
#undef str_100102b9
#undef str_100102c5
#undef str_100102cc
#undef str_100102d5
#undef str_100102db
#undef str_100102e4
#undef str_100102f1
#undef str_100102fc
#undef str_10010303
#undef str_10010309
#undef str_1001030f
#undef str_1001031a
#undef str_10010326
#undef str_10010339
#undef str_1001033f
#undef str_10010346
#undef str_1001034d
#undef str_10010354
#undef str_1001035d
#undef str_10010375
#undef str_1001037b
#undef str_10010382
#undef str_10010389
#undef str_10010390
#undef str_10010396
#undef str_1001039e
#undef str_100103a5
#undef str_100103ae
#undef str_100103b7
#undef str_100103bd
#undef str_100103c8
#undef str_100103d8
#undef str_100103e3
#undef str_100103e9
#undef str_100103f6
#undef str_10010402
#undef str_10010416
#undef str_10010422
#undef str_1001042c
#undef str_10010436
#undef str_1001043c
#undef str_100104c5
#undef str_100104fd
#undef str_10010516
#undef str_10010522
#undef str_10010529
#undef str_100105ac
#undef str_100105bf
#undef str_100105c7
#undef str_100105d1
#undef local_df0
#undef local_de8
#undef uStack_1834
#undef uStack_1830
#undef uStack_182c
#undef uStack_1828
#undef iStack_1818
#undef iStack_1814
#undef uStack_1810
#undef abStack_1809
#undef bStack_1789
#undef abStack_1788
#undef abStack_1760
#undef acStack_1560
#undef abStack_1460
#undef aiStack_145c
#undef iStack_13a0
#undef auStack_139c
#undef auStack_138c
#undef auStack_1364
#undef aiStack_f20
#undef acStack_ef0
#undef abStack_dd4
#undef abStack_cd4
#undef acStack_c94
#undef abStack_c34
#undef abStack_b80
#undef aiStack_b40
#undef abStack_ae0
#undef auStack_8e0
#undef uStack_880
#undef uStack_878
#undef iStack_870
#undef acStack_86c
#undef acStack_7ac
#undef uStack_52c
#undef iStack_524
#undef uStack_514

#undef DAT_1001076d
#define DAT_1001076d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfa9U)))
#undef DAT_10010772
#define DAT_10010772 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xfaeU)))
#undef PTR_DAT_10014008
#define PTR_DAT_10014008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4844U)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000fcd6
#define str_1000fcd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_100105da
#define str_100105da (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe16U)))
#undef str_100105f8
#define str_100105f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe34U)))
#undef str_1001061d
#define str_1001061d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe59U)))
#undef str_1001062b
#define str_1001062b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe67U)))
#undef str_1001065f
#define str_1001065f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9bU)))
#undef str_10010669
#define str_10010669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xea5U)))
#undef str_10010672
#define str_10010672 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeaeU)))
#undef str_10010690
#define str_10010690 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeccU)))
#undef str_1001069c
#define str_1001069c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xed8U)))
#undef str_100106d9
#define str_100106d9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf15U)))
#undef str_100106e3
#define str_100106e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf1fU)))
#undef str_100106ee
#define str_100106ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2aU)))
#undef str_100106fe
#define str_100106fe (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3aU)))
#undef str_10010707
#define str_10010707 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf43U)))
#undef str_10010720
#define str_10010720 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf5cU)))
#undef str_10010734
#define str_10010734 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf70U)))
#undef str_10010743
#define str_10010743 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf7fU)))
#undef str_10010767
#define str_10010767 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfa3U)))
#undef str_10010777
#define str_10010777 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb3U)))
#undef str_1001078b
#define str_1001078b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfc7U)))
#undef str_100107b9
#define str_100107b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xff5U)))
#define abStack_594 (*(byte (*)[256])(frame + 28))
#define iStack_494 (*(int *)(frame + 284))
#define abStack_490 (*(byte (*)[256])(frame + 288))
#define uStack_390 (*(ulong *)(frame + 544))
#define abStack_388 (*(byte (*)[96])(frame + 552))
#define acStack_328 (*(char (*)[128])(frame + 648))
#define acStack_2a8 (*(char (*)[256])(frame + 776))
#define acStack_1a8 (*(char (*)[64])(frame + 1032))
#define acStack_168 (*(char (*)[264])(frame + 1096))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045cc
 */

ulong recovered_100045cc(ulong param_1,long param_2,byte *param_3)

{
  unsigned char frame[1488] __attribute__((aligned(16))) = {0};

  byte *vararg0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  long lVar11;
  ulong unaff_x30;

  if (param_2 == 0) {
    return param_1;
  }
  if (param_3 == (byte *)0x0) {
    return unaff_x30;
  }
  uVar8 = recovered_10001ba4(param_2);
  if ((uVar8 & 1) == 0) {
    pcVar10 = str_1000fcd6;
LAB_10004688:
    recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)pcVar10);
    *(undefined1 *)(param_1 + 0x57ee) = 1;
    return unaff_x30;
  }
  recovered_10001c8c(acStack_168,0x100,param_2 + 1);
  recovered_10001c8c(acStack_1a8,0x40,param_2 + 0x101);
  recovered_10001c8c(acStack_2a8,0x100,param_2 + 0x201);
  uVar3 = *(undefined1 *)(param_2 + 0x308);
  uVar1 = *(undefined4 *)(param_2 + 0x304);
  uVar2 = *(undefined4 *)(param_2 + 0x544cc);
  recovered_1000178c((char *)param_1);
  if ((*(char *)(param_1 + 0x205e34) == '\x01') &&
     ((bVar4 = recovered_10004fc4(param_3,(byte *)str_1000fbdc), bVar4 ||
      (bVar4 = recovered_10004fc4(param_3,(byte *)str_1000fbe4), bVar4)))) {
    pcVar10 = str_100105da;
    goto LAB_10004688;
  }
  bVar4 = recovered_10004fc4(param_3,(byte *)str_1000fbdc);
  if (((bVar4) || (bVar4 = recovered_10004fc4(param_3,(byte *)str_1000fbe4), bVar4)) &&
     ((((bVar4 = recovered_1000b87c((long)param_3,(byte *)str_10010767), !bVar4 &&
        (bVar4 = recovered_1000b87c((long)param_3,&DAT_1001076d), !bVar4)) &&
       (bVar4 = recovered_1000b87c((long)param_3,&DAT_10010772), !bVar4)) &&
      (bVar4 = recovered_1000b1dc((long)param_3), !bVar4)))) {
    lVar11 = 0;
    while (lVar11 != 0x110) {
      bVar4 = recovered_1000b87c((long)param_3,*(byte **)((long)&PTR_DAT_10014008 + lVar11));
      lVar11 = lVar11 + 8;
      if (bVar4) {
        recovered_1000b290(param_1,param_2,(char *)param_3,(char *)0x0);
        return unaff_x30;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x141) = 0;
  *(undefined1 *)(param_2 + 0x101) = 0;
  *(undefined4 *)(param_2 + 0x544cc) = 0;
  *(undefined1 *)(param_2 + 0x308) = 0;
  *(undefined1 *)(param_2 + 0x201) = 0;
  iVar5 = recovered_10001c54();
  *(int *)(param_2 + 0x304) = iVar5;
  recovered_10001c8c((char *)(param_2 + 1),0x100,(long)param_3);
  bVar4 = recovered_10004fc4(param_3,(byte *)str_1000fbdc);
  if ((bVar4) || (bVar4 = recovered_10004fc4(param_3,(byte *)str_1000fbe4), bVar4)) {
    uStack_390 = 0;
    bVar4 = recovered_1000b1dc((long)param_3);
    if (bVar4) {
      iStack_494 = 0;
      uVar7 = recovered_1000bfc8(param_1,(char *)param_3,abStack_490,(undefined *)0x0,
                                 (undefined *)0x0,0);
      if ((int)uVar7 != 0) {
        bVar4 = recovered_100058f4((char *)abStack_490,&iStack_494,abStack_594);
        if (bVar4) {
          *(int *)(param_2 + 0x304) = iStack_494;
          *(undefined1 *)(param_2 + 0x308) = 1;
          recovered_10001c8c((char *)(param_2 + 0x201),0x100,(long)abStack_594);
          recovered_10001c8c((char *)(param_2 + 1),0x100,(long)param_3);
          recovered_1000b46c(param_1,param_2,(char *)(param_2 + 0x201));
          pf_varargs_1000f7f4_1((char *)(param_2 + 0x141),0xc0,str_100105f8,(ulonglong)abStack_594);
          goto LAB_10004af4;
        }
      }
    }
    acStack_328[0] = '\0';
    abStack_388[0] = 0;
    puVar9 = recovered_100016e0(0x50000);
    if (puVar9 != (undefined1 *)0x0) {
      uVar7 = recovered_10005afc(param_1,(long)param_3,puVar9,0x50000,&uStack_390,abStack_388,
                                 acStack_328,0x80);
      if ((int)uVar7 == 0) {
        pcVar10 = str_10010707;
        if (acStack_328[0] != '\0') {
          pcVar10 = acStack_328;
        }
        recovered_1000b604(param_1,param_2,str_1001061d,pcVar10);
        pcVar10 = str_10010720;
        if (acStack_328[0] != '\0') {
          pcVar10 = acStack_328;
        }
        recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)pcVar10);
      }
      else {
        pcVar10 = recovered_100052e0((char *)abStack_388,str_1001065f);
        if ((pcVar10 != (char *)0x0) || (bVar4 = recovered_1000b1dc((long)param_3), bVar4)) {
          recovered_10008934(str_10010669);
          uVar6 = *(uint *)(param_1 + 0x205c50) + 1;
          *(uint *)(param_1 + 0x205c50) = uVar6;
          pf_varargs_1000f7f4_1((char *)abStack_490,0x60,str_10010672,(ulong)uVar6);
          uVar6 = recovered_10008970((char *)abStack_490,puVar9,(uint)uStack_390);
          if (uVar6 == 0) {
            recovered_1000b604(param_1,param_2,str_10010690,str_1001069c);
          }
          else {
            iVar5 = recovered_10001c54();
            *(int *)(param_2 + 0x304) = iVar5;
            *(undefined1 *)(param_2 + 0x308) = 1;
            recovered_10001c8c((char *)(param_2 + 0x201),0x100,(long)abStack_490);
            recovered_1000b46c(param_1,param_2,(char *)(param_2 + 0x201));
            pf_varargs_1000f7f4_1
                      ((char *)(param_2 + 0x141),0xc0,str_100105f8,(ulonglong)abStack_490);
          }
        }
        else {
          if (((abStack_388[0] != 0) &&
              (pcVar10 = recovered_100052e0((char *)abStack_388,str_100106d9),
              pcVar10 == (char *)0x0)) &&
             (pcVar10 = recovered_100052e0((char *)abStack_388,str_100106e3), pcVar10 == (char *)0x0
             )) {
            recovered_10001c8c((char *)(param_2 + 1),0x100,(long)acStack_168);
            recovered_10001c8c((char *)(param_2 + 0x101),0x40,(long)acStack_1a8);
            recovered_10001c8c((char *)(param_2 + 0x201),0x100,(long)acStack_2a8);
            *(undefined1 *)(param_2 + 0x308) = uVar3;
            *(undefined4 *)(param_2 + 0x304) = uVar1;
            *(undefined4 *)(param_2 + 0x544cc) = uVar2;
            recovered_1000b290(param_1,param_2,(char *)param_3,(char *)abStack_388);
            recovered_10001754(puVar9);
            return unaff_x30;
          }
          recovered_10001c8c(*(char **)(param_2 + 0x310),0x50000,(long)puVar9);
          vararg0 = (byte *)str_100106fe;
          if (abStack_388[0] != 0) {
            vararg0 = abStack_388;
          }
          pf_varargs_1000f7f4_1((char *)(param_2 + 0x141),0xc0,str_100106ee,(ulonglong)vararg0);
          recovered_10001cc4(param_1,(char *)param_2);
          recovered_100024dc(param_1,param_2);
          recovered_1000b69c(param_1,param_2);
        }
      }
      recovered_10001754(puVar9);
      goto LAB_10004af4;
    }
    recovered_1000b604(param_1,param_2,str_1001061d,str_1001062b);
    pcVar10 = str_1000fcd6;
LAB_100048c4:
    recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)pcVar10);
  }
  else {
    bVar4 = recovered_100058f4((char *)param_3,(int *)(param_2 + 0x304),(byte *)(param_2 + 0x201));
    if (bVar4) {
      *(undefined1 *)(param_2 + 0x308) = 1;
    }
    else {
      if ((((*param_3 != 0x2f) &&
           (pcVar10 = strchr((char *)param_3,0x2f), pcVar10 == (char *)0x0)) &&
          ((bVar4 = recovered_1000b828((char *)param_3,(byte *)str_10010767), !bVar4 &&
           ((bVar4 = recovered_1000b828((char *)param_3,&DAT_1001076d), !bVar4 &&
            (bVar4 = recovered_1000b828((char *)param_3,&DAT_10010772), !bVar4)))))) &&
         (bVar4 = recovered_1000b1dc((long)param_3), !bVar4)) {
        recovered_1000b604(param_1,param_2,str_10010777,str_1001078b);
        pcVar10 = str_100107b9;
        goto LAB_100048c4;
      }
      if (*param_3 == 0x2f) {
        param_3 = param_3 + 1;
      }
      recovered_10001c8c((char *)abStack_490,0x100,(long)param_3);
      recovered_10005a38(abStack_490);
      iVar5 = recovered_10001c54();
      *(int *)(param_2 + 0x304) = iVar5;
      *(undefined1 *)(param_2 + 0x308) = 1;
      recovered_10001c8c((char *)(param_2 + 0x201),0x100,(long)abStack_490);
    }
    bVar4 = recovered_1000b1dc(param_2 + 0x201);
    if (bVar4) {
      recovered_100058ac((ulong)*(uint *)(param_2 + 0x304),(undefined *)(param_2 + 0x201),
                         (char *)(param_2 + 1));
      recovered_1000b46c(param_1,param_2,(char *)(param_2 + 0x201));
    }
    else {
      uVar8 = recovered_1000b778(param_2,(ulong)*(uint *)(param_2 + 0x304),(char *)(param_2 + 0x201)
                                );
      if ((uVar8 & 1) == 0) {
        recovered_1000b604(param_1,param_2,str_10010734,str_10010743);
      }
      else {
        recovered_100058ac((ulong)*(uint *)(param_2 + 0x304),(undefined *)(param_2 + 0x201),
                           (char *)(param_2 + 1));
        recovered_10001cc4(param_1,(char *)param_2);
        recovered_100024dc(param_1,param_2);
        recovered_1000b69c(param_1,param_2);
      }
    }
  }
LAB_10004af4:
  recovered_1000b510(param_2);
  return unaff_x30;
}

#undef DAT_1001076d
#undef DAT_10010772
#undef PTR_DAT_10014008
#undef str_1000fbdc
#undef str_1000fbe4
#undef str_1000fcd6
#undef str_100105da
#undef str_100105f8
#undef str_1001061d
#undef str_1001062b
#undef str_1001065f
#undef str_10010669
#undef str_10010672
#undef str_10010690
#undef str_1001069c
#undef str_100106d9
#undef str_100106e3
#undef str_100106ee
#undef str_100106fe
#undef str_10010707
#undef str_10010720
#undef str_10010734
#undef str_10010743
#undef str_10010767
#undef str_10010777
#undef str_1001078b
#undef str_100107b9
#undef abStack_594
#undef iStack_494
#undef abStack_490
#undef uStack_390
#undef abStack_388
#undef acStack_328
#undef acStack_2a8
#undef acStack_1a8
#undef acStack_168

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b80
 */

void recovered_10004b80(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    if (*(void **)(param_1 + 0x310) != (void *)0x0) {
      recovered_10001754(*(void **)(param_1 + 0x310));
    }
    if (*(void **)(param_1 + 0x318) != (void *)0x0) {
      recovered_10001754(*(void **)(param_1 + 0x318));
    }
    if (*(void **)(param_1 + 800) != (void *)0x0) {
      recovered_10001754(*(void **)(param_1 + 800));
    }
    if (*(void **)(param_1 + 0x328) != (void *)0x0) {
      recovered_10001754(*(void **)(param_1 + 0x328));
    }
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
  }
  return;
}


#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004bd4
 */

ulong recovered_10004bd4(char *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = 0;
  if (((param_1 != (char *)0x0) && (uVar2 = strlen(param_1), param_3 != 0)) &&
     (uVar2 < param_2 - 1U)) {
    uVar1 = pf_varargs_1000f7f4_1(param_1 + uVar2,param_2 - uVar2,&DAT_1000fbc2,param_3);
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}

#undef DAT_1000fbc2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c38
 */

void recovered_10004c38(char *param_1,long param_2,void *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong n;
  ulong uVar1;

  if (((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), param_3 != (void *)0x0)) &&
     (uVar1 < param_2 - 1U)) {
    n = ~uVar1 + param_2;
    if (param_4 <= ~uVar1 + param_2) {
      n = param_4;
    }
    if (n != 0) {
      memcpy(param_1 + uVar1,param_3,n);
    }
    param_1[n + uVar1] = '\0';
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb8
 */

void recovered_10004cb8(byte *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    if (param_1 != (byte *)0x0) {
      for (; bVar2 = *param_1, bVar2 < 0x30; param_1 = param_1 + 1) {
        if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003600U) == 0) {
          if ((ulong)bVar2 == 0x2f) {
            if (param_4 != (undefined1 *)0x0) {
              *param_4 = 1;
            }
            param_1 = param_1 + 1;
          }
          break;
        }
      }
      do {
        pbVar3 = param_1 + 1;
        bVar2 = *param_1;
        uVar5 = (ulong)bVar2;
        param_1 = pbVar3;
      } while (bVar2 < 0x21 && (1L << (uVar5 & 0x3f) & 0x100003600U) != 0);
      uVar6 = 0;
      while (((uVar4 = (uint)uVar5, 0x2f < uVar4 || ((1L << (uVar5 & 0x3f) & 0x800100003601U) == 0))
             && (uVar6 + 1 < param_3))) {
        uVar1 = uVar4 | 0x20;
        if (0x19 < uVar4 - 0x41) {
          uVar1 = uVar4;
        }
        param_2[uVar6] = (char)uVar1;
        uVar5 = (ulong)pbVar3[uVar6];
        uVar6 = uVar6 + 1;
      }
      param_2[uVar6] = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d9c
 */

bool recovered_10004d9c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;

  bVar4 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      if (bVar1 != bVar2) {
        return false;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}


#define acStack_140 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004e00
 */

void recovered_10004e00(char *param_1,char *param_2,undefined1 *param_3,ulong param_4)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;

  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = strlen(param_2);
  }
  if (param_3 == (undefined1 *)0x0) {
    return;
  }
  *param_3 = 0;
  if (param_1 == (char *)0x0) {
    return;
  }
  if (param_2 == (char *)0x0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  pbVar5 = (byte *)(param_1 + uVar2);
  pcVar7 = param_1;
  do {
    pbVar5 = pbVar5 + 1;
    if (*pcVar7 == '\0') {
      return;
    }
    uVar3 = 0;
    do {
      if (uVar2 == uVar3) {
        if ((pcVar7 == param_1) ||
           ((byte)pcVar7[-1] < 0x3d &&
            (1L << ((ulong)(byte)pcVar7[-1] & 0x3f) & 0x1000800100003600U) != 0)) {
          pbVar4 = pbVar5;
          goto LAB_10004ed8;
        }
        break;
      }
      bVar1 = pcVar7[uVar3];
      uVar8 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar8 = (uint)bVar1;
      }
      bVar1 = param_2[uVar3];
      uVar9 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar9 = (uint)bVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar8 == uVar9);
LAB_10004ea8:
    pcVar7 = pcVar7 + 1;
  } while( true );
LAB_10004ed8:
  bVar1 = pbVar4[-1];
  if (0x3d < bVar1) goto LAB_10004ea8;
  if ((1L << ((ulong)bVar1 & 0x3f) & 0x100003600U) == 0) {
    if ((ulong)bVar1 == 0x3d) goto LAB_10004f04;
    goto LAB_10004ea8;
  }
  pbVar4 = pbVar4 + 1;
  goto LAB_10004ed8;
LAB_10004f04:
  bVar1 = *pbVar4;
  uVar8 = (uint)bVar1;
  if (0x27 < bVar1) goto LAB_10004f34;
  if ((1L << ((ulong)bVar1 & 0x3f) & 0x100003600U) == 0) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x8400000000U) != 0) {
      pbVar4 = pbVar4 + 1;
      goto LAB_10004f38;
    }
    goto LAB_10004f34;
  }
  pbVar4 = pbVar4 + 1;
  goto LAB_10004f04;
LAB_10004f34:
  uVar8 = 0;
LAB_10004f38:
  for (lVar6 = 0; bVar1 = pbVar4[lVar6],
      ((int)(char)bVar1 != 0 && lVar6 + 1U < param_4) && uVar8 != (int)(char)bVar1;
      lVar6 = lVar6 + 1) {
    if ((uVar8 == 0) &&
       (bVar1 < 0x3f && (1L << ((ulong)(uint)bVar1 & 0x3f) & 0x4000000100003600U) != 0)) break;
    param_3[lVar6] = bVar1;
  }
  param_3[lVar6] = 0;
  recovered_100054ec((long)param_3,acStack_140,0x100);
  recovered_10001c8c(param_3,param_4,(long)acStack_140);
  return;
}

#undef acStack_140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fc4
 */

bool recovered_10004fc4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;

  bVar5 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar3 = *param_2;
      bVar5 = bVar3 == 0;
      if (bVar3 == 0) break;
      bVar4 = *param_1;
      if (bVar4 == 0) {
        return bVar5;
      }
      uVar1 = bVar4 | 0x20;
      if (0x19 < bVar4 - 0x41U) {
        uVar1 = (uint)bVar4;
      }
      uVar6 = (uint)bVar3;
      uVar2 = uVar6 | 0x20;
      if (0x19 < uVar6 - 0x41) {
        uVar2 = uVar6;
      }
      if (uVar1 != uVar2) {
        return bVar5;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return bVar5;
}


#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_1000fc9c
#define DAT_1000fc9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000fca9
#define str_1000fca9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4e5U)))
#define acStack_344 (*(char (*)[255])(frame + 28))
#define cStack_245 (*(char *)(frame + 283))
#define auStack_244 (*(uint (*)[64])(frame + 284))
#define uStack_144 (*(undefined4 *)(frame + 540))
#define abStack_140 (*(byte (*)[256])(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005020
 */

char * recovered_10005020(char *param_1,uint *param_2,char *param_3)

{
  unsigned char frame[896] __attribute__((aligned(16))) = {0};

  undefined *vararg1;
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;

  if (param_3 == (char *)0x0) {
    return param_1;
  }
  *param_3 = '\0';
  if (param_2 == (uint *)0x0) {
    return param_1;
  }
  cVar1 = (char)*param_2;
  if (cVar1 == '\0') {
    return param_1;
  }
  bVar2 = recovered_10004fc4((byte *)param_2,(byte *)str_1000fbdc);
  if ((bVar2) || (bVar2 = recovered_10004fc4((byte *)param_2,(byte *)str_1000fbe4), bVar2)) {
LAB_10025868:
    pcVar4 = (char *)0x0;
    if (param_3 != (char *)0x0) {
      if (param_2 == (uint *)0x0) {
        *param_3 = '\0';
        return param_3;
      }
      uVar3 = pf_varargs_1000f7f4_1(param_3,0x100,&DAT_1000fbc2,(ulonglong)param_2);
      pcVar4 = (char *)(ulong)uVar3;
    }
    return pcVar4;
  }
  if (cVar1 == '#') {
    if (param_1[1] != '\0') {
      recovered_10001c8c(param_3,0x100,(long)(param_1 + 1));
      pcVar4 = strchr(param_3,0x23);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      pcVar4 = (char *)0x0;
      if (((param_3 != (char *)0x0) &&
          (pcVar4 = (char *)strlen(param_3), param_2 != (uint *)0x0)) &&
         (pcVar4 < (char *)0xff)) {
        uVar3 = pf_varargs_1000f7f4_1
                          (param_3 + (long)pcVar4,0x100 - (long)pcVar4,&DAT_1000fbc2,
                           (ulonglong)param_2);
        pcVar4 = (char *)(ulong)uVar3;
      }
      return pcVar4;
    }
  }
  else if (cVar1 == '[') goto LAB_10025868;
  if (param_1[0x554dc] != '\0') {
    pcVar4 = (char *)recovered_10005670(param_1 + 0x554dc,(char *)param_2,param_3);
    if (((ulong)pcVar4 & 1) != 0) {
      return pcVar4;
    }
    cVar1 = (char)*param_2;
  }
  if (cVar1 == '/') {
    auStack_244[0] = 0;
    uVar5 = recovered_1000581c((long)param_1,(int *)auStack_244,abStack_140);
    if ((uVar5 & 1) != 0) {
      pcVar4 = (char *)((long)param_2 + 1);
      uVar3 = auStack_244[0];
      goto LAB_100052b4;
    }
  }
  uStack_144 = 0;
  uVar6 = recovered_1000581c((long)param_1,&uStack_144,abStack_140);
  if ((int)uVar6 == 0) {
    if ((((char)*param_2 == '/') &&
        ((bVar2 = recovered_10004fc4((byte *)(param_1 + 1),(byte *)str_1000fbdc), bVar2 ||
         (bVar2 = recovered_10004fc4((byte *)(param_1 + 1),(byte *)str_1000fbe4), bVar2)))) &&
       (pcVar4 = (char *)recovered_10005670(param_1 + 1,(char *)param_2,param_3),
       ((ulong)pcVar4 & 1) != 0)) {
      return pcVar4;
    }
    bVar2 = recovered_10004fc4((byte *)(param_1 + 1),(byte *)str_1000fbdc);
    if (((bVar2) || (bVar2 = recovered_10004fc4((byte *)(param_1 + 1),(byte *)str_1000fbe4), bVar2))
       && (pcVar4 = (char *)recovered_10005670(param_1 + 1,(char *)param_2,param_3),
          ((ulong)pcVar4 & 1) != 0)) {
      return pcVar4;
    }
    pcVar4 = recovered_10001c8c(param_3,0x100,(long)param_2);
    return pcVar4;
  }
  uVar5 = strlen((char *)abStack_140);
  auStack_244[0] = auStack_244[0] & 0xffffff00;
  if (uVar5 != 0) {
    for (; (uVar5 != 0 && ((abStack_140[uVar5 - 1] == 0x5c || (abStack_140[uVar5 - 1] == 0x2f))));
        uVar5 = uVar5 - 1) {
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if ((abStack_140[uVar5 - 1] == 0x2f) || (abStack_140[uVar5 - 1] == 0x5c)) {
        if (0xfe < uVar5) {
          uVar5 = 0xff;
        }
        memcpy(auStack_244,abStack_140,uVar5);
        *(undefined1 *)((long)auStack_244 + uVar5) = 0;
        break;
      }
    }
  }
  acStack_344[0] = '\0';
  if ((char)*param_2 == '/') {
    param_2 = (uint *)((long)param_2 + 1);
LAB_10005258:
    recovered_10001c8c(acStack_344,0x100,(long)param_2);
  }
  else {
    if ((char)*param_2 == '\0') {
      param_2 = auStack_244;
      goto LAB_10005258;
    }
    if ((char)auStack_244[0] == '\0') goto LAB_10005258;
    uVar5 = strlen((char *)auStack_244);
    vararg1 = &DAT_1000fb37;
    if (acStack_344[uVar5 + 0xff] != '/') {
      vararg1 = &DAT_1000fc9c;
    }
    pf_varargs_1000f7f4_3
              (acStack_344,0x100,str_1000fca9,(ulonglong)auStack_244,(ulonglong)vararg1,
               (ulonglong)param_2);
  }
  pcVar4 = acStack_344;
  uVar3 = uStack_144;
LAB_100052b4:
  pcVar4 = (char *)recovered_100058ac((ulong)uVar3,pcVar4,param_3);
  return pcVar4;
}

#undef DAT_1000fb37
#undef DAT_1000fbc2
#undef DAT_1000fc9c
#undef str_1000fbdc
#undef str_1000fbe4
#undef str_1000fca9
#undef acStack_344
#undef cStack_245
#undef auStack_244
#undef uStack_144
#undef abStack_140

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100052e0
 */

char * recovered_100052e0(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;

  if (param_2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = strlen(param_2);
  }
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (uVar3 != 0)) {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      uVar4 = 0;
      do {
        if (uVar3 == uVar4) {
          return param_1;
        }
        bVar2 = param_1[uVar4];
        if (bVar2 == 0) break;
        uVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar1 = (uint)bVar2;
        }
        bVar2 = param_2[uVar4];
        uVar5 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar5 = (uint)bVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 == uVar5);
    }
  }
  return (char *)0x0;
}


#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000fcb0
#define str_1000fcb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ecU)))
#undef str_1000fcc3
#define str_1000fcc3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ffU)))
#define uStack_250 (*(uint *)(frame + 16))
#define uStack_24c (*(uint *)(frame + 20))
#define abStack_244 (*(byte (*)[256])(frame + 28))
#define abStack_140 (*(byte (*)[256])(frame + 288))
#define local_144 (*(int *)(frame + 284))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005370
 */

ulong recovered_10005370(long param_1,char *param_2,char *param_3,undefined1 *param_4,ulong param_5,
                        char *param_6)

{
  unsigned char frame[640] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;

  local_144 = -1;
  if (((param_4 != (undefined1 *)0x0) && (*param_4 = 0, param_3 != (char *)0x0)) &&
     (*param_3 != '\0')) {
    recovered_10005020(param_2,(uint *)param_3,(char *)abStack_140);
    bVar2 = recovered_10004fc4(abStack_140,(byte *)str_1000fbdc);
    if ((bVar2) || (bVar2 = recovered_10004fc4(abStack_140,(byte *)str_1000fbe4), bVar2)) {
      uVar4 = recovered_10005afc(param_1,(long)abStack_140,param_4,param_5,(ulong *)&uStack_250,
                                 abStack_244,param_6,0x60);
      return uVar4;
    }
    bVar2 = recovered_100058f4((char *)abStack_140,&local_144,abStack_244);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    memset(&uStack_250,0,0xc);
    uVar3 = recovered_10005d78(local_144,(char *)abStack_244,&uStack_250);
    if ((uVar3 != 0) && (uStack_250 != 0)) {
      uVar1 = (int)param_5 - 1;
      uVar3 = uStack_24c;
      if (uVar1 <= uStack_24c) {
        uVar3 = uVar1;
      }
      memcpy(param_4,(void *)(ulong)uStack_250,(ulong)uVar3);
      param_4[uVar3] = 0;
      if (param_6 == (char *)0x0) {
        return 1;
      }
      if (uVar3 == uStack_24c) {
        return 1;
      }
      pf_varargs_1000f7f4_0(param_6,0x60,str_1000fcc3);
      return 1;
    }
    pf_varargs_1000f7f4_0(param_6,0x60,str_1000fcb0);
  }
  return 0;
}

#undef str_1000fbdc
#undef str_1000fbe4
#undef str_1000fcb0
#undef str_1000fcc3
#undef uStack_250
#undef uStack_24c
#undef abStack_244
#undef abStack_140
#undef local_144

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054a4
 */

void recovered_100054a4(char *param_1,long param_2,char param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((param_1 != (char *)0x0) && (uVar1 = strlen(param_1), uVar1 < param_2 - 1U)) {
    param_1[uVar1] = param_3;
    (param_1 + uVar1)[1] = '\0';
  }
  return;
}


#undef str_1000fc8c
#define str_1000fc8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054ec
 */

long recovered_100054ec(long param_1,char *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long unaff_x30;

  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
    if (param_1 != 0) {
      lVar4 = 0;
      while ((*(char *)(param_1 + lVar4) != '\0' &&
             (uVar2 = strlen(param_2), uVar2 < param_3 - 1U))) {
        cVar3 = *(char *)(param_1 + lVar4);
        if (cVar3 == '&') {
          iVar1 = strncmp((char *)(param_1 + lVar4),(char *)((uintptr_t)pf_module_state + 0x4abU),5);
          if (iVar1 == 0) {
            cVar3 = '&';
LAB_10005600:
            recovered_100054a4(param_2,param_3,cVar3);
            lVar4 = lVar4 + 4;
          }
          else {
            iVar1 = strncmp((char *)(param_1 + lVar4),(char *)((uintptr_t)pf_module_state + 0x4b1U),4);
            if (iVar1 == 0) {
              cVar3 = '<';
            }
            else {
              iVar1 = strncmp((char *)(param_1 + lVar4),(char *)((uintptr_t)pf_module_state + 0x4b6U),4);
              if (iVar1 != 0) {
                iVar1 = strncmp((char *)(param_1 + lVar4),(char *)((uintptr_t)pf_module_state + 0x4bbU),6);
                if (iVar1 == 0) {
                  cVar3 = '\"';
                }
                else {
                  iVar1 = strncmp((char *)(param_1 + lVar4),(char *)((uintptr_t)pf_module_state + 0x4c2U),5);
                  if (iVar1 == 0) {
                    cVar3 = '\'';
                    goto LAB_10005600;
                  }
                  iVar1 = strncmp((char *)(param_1 + lVar4),str_1000fc8c,6);
                  if (iVar1 != 0) {
                    cVar3 = *(char *)(param_1 + lVar4);
                    goto LAB_100055e8;
                  }
                  cVar3 = ' ';
                }
                recovered_100054a4(param_2,param_3,cVar3);
                lVar4 = lVar4 + 5;
                goto LAB_10005654;
              }
              cVar3 = '>';
            }
            recovered_100054a4(param_2,param_3,cVar3);
            lVar4 = lVar4 + 3;
          }
        }
        else {
LAB_100055e8:
          recovered_100054a4(param_2,param_3,cVar3);
        }
LAB_10005654:
        lVar4 = lVar4 + 1;
      }
    }
    param_1 = unaff_x30;
  }
  return param_1;
}

#undef str_1000fc8c

#undef DAT_1000fc93
#define DAT_1000fc93 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cfU)))
#undef DAT_1000fc97
#define DAT_1000fc97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d3U)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#define acStack_140 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005670
 */

undefined8 recovered_10005670(char *param_1,char *param_2,char *param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  bVar1 = recovered_10004fc4((byte *)param_1,(byte *)str_1000fbdc);
  if (!bVar1) {
    bVar1 = recovered_10004fc4((byte *)param_1,(byte *)str_1000fbe4);
    if (!bVar1) {
      return (ulong)bVar1;
    }
  }
  bVar1 = recovered_10004fc4((byte *)param_2,(byte *)str_1000fbdc);
  if (((bVar1) || (bVar1 = recovered_10004fc4((byte *)param_2,(byte *)str_1000fbe4), bVar1)) ||
     (*param_2 == '[')) {
    recovered_10001c8c(param_3,0x100,(long)param_2);
    return 1;
  }
  pcVar3 = strstr(param_1,&DAT_1000fc93);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  if (*param_2 != '/') {
    recovered_10001c8c(acStack_140,0x100,(long)param_1);
    pcVar3 = strchr(acStack_140,0x23);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    pcVar3 = strchr(acStack_140,0x3f);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    pcVar5 = (char *)0x0;
    pcVar3 = acStack_140;
    do {
      if (*pcVar3 == '/') {
        pcVar5 = pcVar3;
      }
      else if (*pcVar3 == '\0') goto LAB_10005794;
      pcVar3 = pcVar3 + 1;
    } while( true );
  }
  pcVar3 = strchr(pcVar3 + 3,0x2f);
  if (pcVar3 == (char *)0x0) {
    uVar4 = strlen(param_1);
    iVar2 = (int)uVar4;
  }
  else {
    iVar2 = (int)pcVar3 - (int)param_1;
  }
  if (0xfe < iVar2) {
    iVar2 = 0xff;
  }
  memcpy(acStack_140,param_1,(long)iVar2);
  acStack_140[iVar2] = '\0';
LAB_10005808:
  pf_varargs_1000f7f4_2(param_3,0x100,&DAT_1000fc97,(ulonglong)acStack_140,(ulonglong)param_2);
  return 1;
LAB_10005794:
  if ((pcVar5 == (char *)0x0) ||
     (pcVar3 = strstr(acStack_140,&DAT_1000fc93), pcVar5 <= pcVar3 + 2)) {
    recovered_10004bd4(acStack_140,0x100,((uintptr_t)pf_module_state + 0x4d8U));
  }
  else {
    pcVar5[1] = '\0';
  }
  goto LAB_10005808;
}

#undef DAT_1000fc93
#undef DAT_1000fc97
#undef str_1000fbdc
#undef str_1000fbe4
#undef acStack_140

#define local_34 (*(int *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000581c
 */

undefined8 recovered_1000581c(long param_1,int *param_2,byte *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  uVar2 = 0;
  local_34 = 0;
  if ((param_2 != (int *)0x0) && (param_3 != (byte *)0x0)) {
    *param_3 = 0;
    bVar1 = recovered_100058f4((char *)(param_1 + 1),&local_34,param_3);
    if (bVar1) {
      *param_2 = local_34;
    }
    else {
      if ((*(char *)(param_1 + 0x308) != '\x01') || (*(char *)(param_1 + 0x201) == '\0')) {
        return 0;
      }
      *param_2 = *(int *)(param_1 + 0x304);
      recovered_10001c8c((char *)param_3,0x100,param_1 + 0x201);
    }
    uVar2 = 1;
  }
  return uVar2;
}

#undef local_34

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1000fc9e
#define str_1000fc9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058ac
 */

ulong recovered_100058ac(ulong param_1,undefined *param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *vararg1;
  uint uVar1;

  if (param_3 != (char *)0x0) {
    vararg1 = &DAT_1000fb37;
    if (param_2 != (undefined *)0x0) {
      vararg1 = param_2;
    }
    uVar1 = pf_varargs_1000f7f4_2(param_3,0x100,str_1000fc9e,param_1,(ulonglong)vararg1);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}

#undef DAT_1000fb37
#undef str_1000fc9e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058f4
 */

bool recovered_100058f4(char *param_1,int *param_2,byte *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  ulong n;
  int iVar7;

  if (param_1 == (char *)0x0) {
    return false;
  }
  if (((param_2 != (int *)0x0) && (param_3 != (byte *)0x0)) && (*param_3 = 0, *param_1 == '[')) {
    pcVar6 = param_1 + 1;
    cVar4 = *pcVar6;
    lVar2 = 1;
    if (cVar4 == '-') {
      lVar2 = 2;
      pcVar6 = param_1 + 2;
    }
    cVar5 = param_1[lVar2];
    if (0xf5 < (byte)(cVar5 - 0x3aU)) {
      iVar7 = 0;
      pcVar6 = pcVar6 + 4;
      while ((byte)(cVar5 - 0x30U) < 10) {
        iVar7 = iVar7 * 10 + (uint)(byte)(cVar5 - 0x30);
        pcVar1 = pcVar6 + -3;
        pcVar6 = pcVar6 + 1;
        cVar5 = *pcVar1;
      }
      if (((cVar5 == ']') && (pcVar6[-3] == ':')) && (pcVar6[-2] == ';')) {
        n = 0;
        if (pcVar6[-1] != '/') {
          pcVar6 = pcVar6 + -1;
        }
        while ((pcVar6[n] != '\0' && (pcVar6[n] != '>'))) {
          n = n + 1;
        }
        if (0xfe < n) {
          n = 0xff;
        }
        memcpy(param_3,pcVar6,n);
        param_3[n] = 0;
        recovered_10005a38(param_3);
        iVar3 = -iVar7;
        if (cVar4 != '-') {
          iVar3 = iVar7;
        }
        *param_2 = iVar3;
        return *param_3 != 0;
      }
    }
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a38
 */

void recovered_10005a38(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;

  if (param_1 == (byte *)0x0) {
    return;
  }
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar5;
    if (bVar1 == 0x25) {
      if (((char)pbVar5[1] == 0) || (bVar2 = pbVar5[2], bVar2 == 0)) goto LAB_10005aa4;
      uVar3 = recovered_10005acc((int)(char)pbVar5[1]);
      uVar4 = recovered_10005acc((int)(char)bVar2);
      if (((int)uVar3 < 0) || ((int)uVar4 < 0)) goto LAB_10005aa4;
      *param_1 = (byte)uVar4 | (byte)(uVar3 << 4);
      pbVar5 = pbVar5 + 3;
    }
    else {
      if (bVar1 == 0) {
        *param_1 = 0;
        return;
      }
LAB_10005aa4:
      pbVar5 = pbVar5 + 1;
      *param_1 = bVar1;
    }
    param_1 = param_1 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005acc
 */

uint recovered_10005acc(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = param_1 - 0x37;
  if (5 < param_1 - 0x41U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x61U < 6) {
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}


#undef str_1000fcd6
#define str_1000fcd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_1000fce4
#define str_1000fce4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x520U)))
#undef str_1000fd6c
#define str_1000fd6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a8U)))
#define uStack_9c8 (*(ulong *)(frame + 24))
#define acStack_9c0 (*(char (*)[512])(frame + 32))
#define acStack_7c0 (*(char (*)[1536])(frame + 544))
#define uStack_1c0 (*(ulong *)(frame + 2080))
#define acStack_1b6 (*(char (*)[6])(frame + 2090))
#define uStack_1b0 (*(uint *)(frame + 2096))
#define acStack_1ac (*(char (*)[129])(frame + 2100))
#define acStack_12b (*(char (*)[193])(frame + 2229))
#define uStack_6a (*(ushort *)(frame + 2422))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005afc
 */

undefined8
recovered_10005afc(long param_1,long param_2,undefined1 *param_3,ulong param_4,ulong *param_5,
                  byte *param_6,char *param_7,ulong param_8)

{
  unsigned char frame[2560] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *text;
  byte *pbVar4;
  byte *vararg1;

  uStack_1b0 = 0;
  uStack_1c0 = 0;
  if (param_2 == 0) {
    return 0;
  }
  *param_3 = 0;
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = 0;
  }
  uVar2 = recovered_10005ddc(param_2,acStack_1ac,param_7,param_8);
  if ((int)uVar2 == 0) {
    return 0;
  }
  uVar2 = recovered_10005fc4((byte *)(param_1 + 0x205c54),param_7,param_8);
  if ((int)uVar2 == 0) {
    return 0;
  }
  vararg1 = (byte *)((ulong)acStack_1ac | 1);
  uVar3 = recovered_100061f8(vararg1,&uStack_1b0);
  if (((uVar3 & 1) == 0) &&
     (uVar2 = recovered_100062b0(param_1 + 0x205c54,vararg1,&uStack_1b0,param_7,param_8),
     (int)uVar2 == 0)) {
    return 0;
  }
  uVar2 = recovered_10006718(param_1 + 0x205c54,uStack_1b0,acStack_1b6,param_7,param_8);
  if ((int)uVar2 == 0) {
    return 0;
  }
  pbVar4 = recovered_100016e0(0x50000);
  if (pbVar4 == (byte *)0x0) {
    pf_varargs_1000f7f4_0(param_7,param_8,str_1000fcd6);
    return 0;
  }
  recovered_1000695c(acStack_9c0);
  if (acStack_1ac[0] == '\x01') {
    uVar3 = recovered_100069c8(param_1,param_1 + 0x205c54,(ulong)uStack_1b0,(ulong)uStack_6a,
                               acStack_1b6,(long)vararg1,acStack_12b,acStack_9c0,pbVar4,0x50000,
                               &uStack_1c0,param_7,param_8,(undefined *)0x0,0);
    if ((uVar3 & 1) != 0) {
LAB_10005ca8:
      text = (char *)recovered_10006ed8((long)pbVar4);
      if (text != (char *)0x0) {
        uVar3 = uStack_1c0 - ((long)text - (long)pbVar4);
        if (uStack_1c0 < (ulong)((long)text - (long)pbVar4) || uVar3 == 0) {
          uVar3 = strlen(text);
        }
        bVar1 = recovered_10006f28(pbVar4);
        if (bVar1) {
          uStack_9c8 = 0;
          uVar2 = recovered_1000708c((long)text,uVar3,(long)param_3,param_4 - 1,(long *)&uStack_9c8,
                                     param_7,param_8);
          if (((int)uVar2 != 0) && (param_3[uStack_9c8] = 0, param_5 != (ulong *)0x0)) {
            *param_5 = uStack_9c8;
          }
        }
        else {
          if (param_4 <= uVar3) {
            uVar3 = param_4 - 1;
          }
          memcpy(param_3,text,uVar3);
          param_3[uVar3] = 0;
          if (param_5 != (ulong *)0x0) {
            *param_5 = uVar3;
          }
          uVar2 = 1;
        }
        if (param_6 != (byte *)0x0) {
          recovered_100071fc((char *)pbVar4,param_6);
        }
        goto LAB_10005d6c;
      }
      pf_varargs_1000f7f4_0(param_7,param_8,str_1000fd6c);
    }
  }
  else {
    pf_varargs_1000f7f4_3
              (acStack_7c0,0x600,str_1000fce4,(ulonglong)acStack_12b,(ulonglong)vararg1,
               (ulonglong)acStack_9c0);
    uVar2 = recovered_10006c6c(param_1 + 0x205c54,(ulong)uStack_1b0,(ulong)uStack_6a,acStack_1b6,
                               acStack_7c0,pbVar4,0x50000,&uStack_1c0,param_7,param_8,
                               (undefined *)0x0,0);
    if ((int)uVar2 != 0) goto LAB_10005ca8;
  }
  uVar2 = 0;
LAB_10005d6c:
  recovered_10001754(pbVar4);
  return uVar2;
}

#undef str_1000fcd6
#undef str_1000fce4
#undef str_1000fd6c
#undef uStack_9c8
#undef acStack_9c0
#undef acStack_7c0
#undef uStack_1c0
#undef acStack_1b6
#undef uStack_1b0
#undef acStack_1ac
#undef acStack_12b
#undef uStack_6a

#undef UINT_82010834
#define UINT_82010834 (*(uint *)(0x82010834U))
#undef UINT_820108c8
#define UINT_820108c8 (*(uint *)(0x820108c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d78
 */

uint recovered_10005d78(int param_1,char *param_2,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(200);
  if (bVar1) {
    uVar2 = UINT_820108c8;
    if (uVar2 == 0) {
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x10025bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
    return uVar2;
  }
  bVar1 = recovered_100019c8(0x34);
  if ((bVar1) && (uVar2 = UINT_82010834, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010834
#undef UINT_820108c8

#undef DAT_1000fc9c
#define DAT_1000fc9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef DAT_1000fdc5
#define DAT_1000fdc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x601U)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000fd8a
#define str_1000fd8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c6U)))
#undef str_1000fda3
#define str_1000fda3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5dfU)))
#undef str_1000fdb4
#define str_1000fdb4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5f0U)))
#undef str_1000fdc9
#define str_1000fdc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x605U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ddc
 */

undefined8 recovered_10005ddc(long param_1,undefined1 *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  char *format;
  undefined2 uVar3;
  uint uVar4;
  byte *vararg0;
  void *src;
  ulong n;

  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  memset(param_2,0,0x144);
  bVar2 = recovered_10004fc4((byte *)param_1,(byte *)str_1000fbe4);
  if (bVar2) {
    src = (void *)(param_1 + 8);
    *param_2 = 1;
    uVar3 = 0x1bb;
  }
  else {
    bVar2 = recovered_10004fc4((byte *)param_1,(byte *)str_1000fbdc);
    if (!bVar2) {
      format = str_1000fd8a;
      goto LAB_10005fa0;
    }
    src = (void *)(param_1 + 7);
    uVar3 = 0x50;
  }
  *(undefined2 *)(param_2 + 0x142) = uVar3;
  for (n = 0; bVar1 = *(byte *)((long)src + n),
      0x3f < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x8400800800000001U) == 0; n = n + 1) {
    if (bVar1 < 0x21) goto LAB_10005eb0;
  }
  if (n - 0x80 < 0xffffffffffffff80 || n == 0) {
LAB_10005eb0:
    format = str_1000fda3;
  }
  else {
    vararg0 = (byte *)((long)src + n);
    memcpy(param_2 + 1,src,n);
    (param_2 + 1)[n] = 0;
    bVar1 = *(byte *)((long)src + n);
    if (bVar1 != 0x3a) {
LAB_10005f2c:
      if ((bVar1 == 0x3f) || (bVar1 == 0x23)) {
        pf_varargs_1000f7f4_1(param_2 + 0x81,0xc0,&DAT_1000fdc5,(ulonglong)vararg0);
      }
      else {
        if (bVar1 != 0x2f) {
          if (bVar1 != 0) {
            format = str_1000fdc9;
            goto LAB_10005fa0;
          }
          vararg0 = &DAT_1000fc9c;
        }
        recovered_10001c8c(param_2 + 0x81,0xc0,(long)vararg0);
      }
      return 1;
    }
    uVar4 = 0;
    do {
      vararg0 = vararg0 + 1;
      if (9 < *vararg0 - 0x30U) {
        if (uVar4 != 0) {
          *(short *)(param_2 + 0x142) = (short)uVar4;
          bVar1 = *vararg0;
          goto LAB_10005f2c;
        }
        break;
      }
      uVar4 = ((uint)*vararg0 + uVar4 * 10) - 0x30;
    } while (uVar4 < 0x10000);
    format = str_1000fdb4;
  }
LAB_10005fa0:
  pf_varargs_1000f7f4_0(param_3,param_4,format);
  return 0;
}

#undef DAT_1000fc9c
#undef DAT_1000fdc5
#undef str_1000fbdc
#undef str_1000fbe4
#undef str_1000fd8a
#undef str_1000fda3
#undef str_1000fdb4
#undef str_1000fdc9

#undef str_1000fdda
#define str_1000fdda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x616U)))
#undef str_1000fdef
#define str_1000fdef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x62bU)))
#undef str_1000fe10
#define str_1000fe10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64cU)))
#undef str_1000fe26
#define str_1000fe26 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x662U)))
#undef str_1000fe3f
#define str_1000fe3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67bU)))
#undef str_1000fe59
#define str_1000fe59 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x695U)))
#undef str_1000fe6c
#define str_1000fe6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a8U)))
#undef str_1000fe85
#define str_1000fe85 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c1U)))
#define iStack_114 (*(int *)(frame + 28))
#define uStack_110 (*(uint *)(frame + 32))
#define uStack_10c (*(uint *)(frame + 36))
#define uStack_108 (*(uint *)(frame + 40))
#define auStack_104 (*(uint (*)[44])(frame + 44))
#define iStack_54 (*(int *)(frame + 220))
#define uStack_50 (*(uint *)(frame + 224))
#define uStack_4c (*(uint *)(frame + 228))
#define uStack_48 (*(uint *)(frame + 232))
#define uStack_44 (*(uint *)(frame + 236))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005fc4
 */

undefined8 recovered_10005fc4(byte *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong extraout_x0;
  ulong extraout_x0_00;
  char *format;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  memset(&iStack_114,0,0xc0);
  bVar2 = recovered_100019c8(0x124);
  if (bVar2) {
    uVar3 = UINT_82010924;
    if (((uVar3 != 0) && (uVar3 = (*(code *)(ulong)uVar3)(&iStack_114), uVar3 != 0)) &&
       ((uStack_110 & 1) != 0)) {
      if ((uStack_110 >> 2 & 1) == 0) {
        format = str_1000fdef;
      }
      else if ((uStack_110 >> 1 & 1) == 0) {
        format = str_1000fe10;
      }
      else {
        bVar2 = recovered_100072ac((char *)auStack_104);
        if (bVar2) {
          format = str_1000fe26;
        }
        else {
          if ((*param_1 == 1) && (iVar4 = memcmp(param_1 + 2,auStack_104,6), iVar4 != 0)
             ) {
            memset(param_1,0,0xec);
          }
          memcpy(param_1 + 0x2c,&iStack_114,0xc0);
          recovered_100072f4((long)(param_1 + 2),(long)auStack_104);
          if ((*param_1 & 1) != 0) {
            return 1;
          }
          memset(&iStack_114,0,0x14);
          memset(&iStack_54,0,0x14);
          param_1[1] = 1;
          uVar3 = *(int *)(param_1 + 0x28) + 0x1fff;
          if (uVar3 < 2) {
            uVar3 = 1;
          }
          uVar1 = 0x474c6142;
          if (*(int *)(param_1 + 0x28) != 0) {
            uVar1 = uVar3;
          }
          *(uint *)(param_1 + 0x28) = uVar1;
          *(uint *)(param_1 + 0x1c) =
               uVar1 ^ ((uint)param_1[2] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8
                       | (uint)param_1[7]);
          iVar4 = 4;
          do {
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) break;
            recovered_1000730c((long)param_1,1,0,0);
            if ((extraout_x0 & 1) == 0) {
              format = str_1000fe3f;
              goto LAB_10006024;
            }
            bVar2 = recovered_100074d4((long)param_1,2,(undefined8 *)&iStack_114);
          } while (!bVar2);
          if (iStack_114 == 0) {
            format = str_1000fe59;
          }
          else {
            iVar4 = 3;
            do {
              iVar4 = iVar4 + -1;
              if (iVar4 == 0) break;
              recovered_1000730c((long)param_1,3,iStack_114,auStack_104[0]);
              if ((extraout_x0_00 & 1) == 0) {
                format = str_1000fe6c;
                goto LAB_10006024;
              }
              bVar2 = recovered_100074d4((long)param_1,5,(undefined8 *)&iStack_54);
            } while (!bVar2);
            if (iStack_54 != 0) {
              *(int *)(param_1 + 8) = iStack_54;
              *(uint *)(param_1 + 0x14) =
                   uStack_48 ^ (uStack_48 ^ uStack_108) & -(uint)(uStack_48 == 0);
              *(uint *)(param_1 + 0x18) =
                   uStack_44 ^ (uStack_44 ^ auStack_104[0]) & -(uint)(uStack_44 == 0);
              *(uint *)(param_1 + 0xc) =
                   uStack_50 ^ (uStack_50 ^ uStack_110) & -(uint)(uStack_50 == 0);
              *(uint *)(param_1 + 0x10) =
                   uStack_4c ^ (uStack_4c ^ uStack_10c) & -(uint)(uStack_4c == 0);
              *param_1 = 1;
              return 1;
            }
            format = str_1000fe85;
          }
        }
      }
      goto LAB_10006024;
    }
  }
  format = str_1000fdda;
LAB_10006024:
  pf_varargs_1000f7f4_0(param_2,param_3,format);
  return 0;
}

#undef str_1000fdda
#undef str_1000fdef
#undef str_1000fe10
#undef str_1000fe26
#undef str_1000fe3f
#undef str_1000fe59
#undef str_1000fe6c
#undef str_1000fe85
#undef iStack_114
#undef uStack_110
#undef uStack_10c
#undef uStack_108
#undef auStack_104
#undef iStack_54
#undef uStack_50
#undef uStack_4c
#undef uStack_48
#undef uStack_44

#define local_10 (*(uint (*)[3])(frame + 16))
#define local_4 (*(byte *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061f8
 */

undefined8 recovered_100061f8(byte *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;

  uVar2 = 0;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    for (lVar3 = 0; lVar3 != 4; lVar3 = lVar3 + 1) {
      uVar4 = 0;
      bVar5 = false;
      for (pbVar1 = param_1; *pbVar1 - 0x30U < 10; pbVar1 = pbVar1 + 1) {
        uVar4 = ((uint)*pbVar1 + uVar4 * 10) - 0x30;
        if (0xff < uVar4) goto LAB_1000627c;
        bVar5 = true;
      }
      if ((!bVar5) ||
         ((local_10[lVar3] = uVar4, param_1 = pbVar1, lVar3 != 3 &&
          (param_1 = pbVar1 + 1, *pbVar1 != 0x2e)))) goto LAB_1000627c;
    }
    if (*param_1 == 0) {
      *param_2 = local_10[0] << 0x18 | (local_10[1] & 0xff) << 0x10 | (local_10[2] & 0xff) << 8 |
                 (uint)local_4;
      uVar2 = 1;
    }
    else {
LAB_1000627c:
      uVar2 = 0;
    }
  }
  return uVar2;
}

#undef local_10
#undef local_4

#undef DAT_1000fa98
#define DAT_1000fa98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2d4U)))
#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef str_1000fe96
#define str_1000fe96 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d2U)))
#undef str_1000fead
#define str_1000fead (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6e9U)))
#undef str_1000febe
#define str_1000febe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6faU)))
#undef str_1000fece
#define str_1000fece (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70aU)))
#undef str_1000feda
#define str_1000feda (*(char (*)[1])(((uintptr_t)pf_module_state + 0x716U)))
#undef str_1000fee4
#define str_1000fee4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x720U)))
#undef str_1000fefb
#define str_1000fefb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x737U)))
#define in_stack_fffffffffffff500 (*(char * *)(frame + 16))
#define acStack_adc (*(char (*)[96])(frame + 52))
#define uStack_a7c (*(uint *)(frame + 148))
#define auStack_a76 (*(undefined1 (*)[12])(frame + 154))
#define uStack_a6a (*(ushort *)(frame + 166))
#define abStack_a68 (*(byte (*)[2])(frame + 168))
#define auStack_a66 (*(ushort (*)[3])(frame + 170))
#define uStack_a60 (*(undefined2 *)(frame + 176))
#define acStack_a5e (*(char (*)[2])(frame + 178))
#define uStack_a5c (*(undefined4 *)(frame + 180))
#define auStack_a58 (*(undefined1 (*)[2018])(frame + 184))
#define acStack_276 (*(char (*)[6])(frame + 2202))
#define cStack_270 (*(char *)(frame + 2208))
#define auStack_26f (*(undefined1 (*)[11])(frame + 2209))
#define acStack_264 (*(char (*)[500])(frame + 2220))
#define auStack_70 (*(ulong (*)[2])(frame + 2720))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062b0
 */

undefined8 recovered_100062b0(long param_1,byte *param_2,uint *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2864] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;

  if (((param_1 != 0) && (param_2 != (byte *)0x0)) && (param_3 != (uint *)0x0)) {
    if (*(uint *)(param_1 + 0x14) == 0) {
      pcVar13 = str_1000fe96;
    }
    else {
      uVar12 = recovered_10006718(param_1,*(uint *)(param_1 + 0x14),acStack_276,param_4,param_5);
      if ((int)uVar12 == 0) {
        return uVar12;
      }
      memset(&cStack_270,0,0x200);
      uVar15 = 0x474c;
      if (*(ushort *)(param_1 + 0x22) != 0) {
        uVar15 = (uint)*(ushort *)(param_1 + 0x22);
      }
      uVar1 = uVar15 + 2;
      if ((uVar15 + 1 & 0x10000) == 0) {
        uVar1 = uVar15 + 1;
      }
      *(short *)(param_1 + 0x22) = (short)uVar1;
      cStack_270 = (char)(uVar1 >> 8);
      auStack_26f[0] = (undefined1)uVar1;
      PF_PART4(auStack_26f, 1) = SUB84(DAT_1000fa98,0);
      uVar14 = 0xc;
      while( true ) {
        bVar5 = *param_2;
        uVar15 = (uint)bVar5;
        if (bVar5 == 0) break;
        uVar17 = 0;
        if (bVar5 != 0) {
          do {
            if (uVar15 == 0x2e) break;
            if ((uVar15 < 0x21) ||
               ((uVar15 - 0x23 < 0x3a &&
                ((1L << ((ulong)(uVar15 - 0x23) & 0x3f) & 0x200000010801001U) != 0))))
            goto LAB_1000641c;
            uVar15 = (uint)param_2[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar15 != 0);
        }
        if (uVar17 == 0) {
          if (uVar15 != 0) goto LAB_1000641c;
          break;
        }
        if ((0x3f < uVar17) || (uVar3 = uVar14 + 1 + uVar17, 0x1ff < uVar3)) goto LAB_1000641c;
        acStack_276[uVar14 + 6] = (char)uVar17;
        memcpy(auStack_26f + uVar14,param_2,uVar17);
        param_2 = param_2 + uVar17;
        if (*param_2 == 0x2e) {
          param_2 = param_2 + 1;
        }
        uVar14 = uVar3;
      }
      acStack_276[uVar14 + 6] = '\0';
      if (uVar14 - 0x1fc < 0xfffffffffffffdfe || uVar14 == 0xfffffffffffffffa) {
LAB_1000641c:
        pcVar13 = str_1000fead;
      }
      else {
        *(undefined4 *)(auStack_26f + uVar14) = 0x1000100;
        bVar11 = recovered_10007844(param_1,acStack_276,(ulong)*(uint *)(param_1 + 8),
                                    (ulong)*(uint *)(param_1 + 0x14),
                                    (ulong)((uVar1 | 0xffffc000) & 0xffff),0x35,&cStack_270,
                                    (int)uVar14 + 5U & 0xffff);
        if (bVar11) {
          iVar16 = 0;
LAB_10006488:
          if (iVar16 != 0x1450) {
            uStack_a7c = 0;
            acStack_adc[0] = '\0';
            uVar12 = recovered_10007adc(auStack_a76,&uStack_a7c);
            if ((((int)uVar12 != 0) && (0x29 < uStack_a7c)) &&
               (((ushort)(uStack_a6a >> 8 | uStack_a6a << 8) == 0x800 &&
                ((((abStack_a68[0] & 0xf0) == 0x40 && PF_PART1(uStack_a60, 1) == '\x11' &&
                  (uVar15 = (uStack_a5c & 0xff00ff00) >> 8 | (uStack_a5c & 0xff00ff) << 8,
                  (uVar15 >> 0x10 | uVar15 << 0x10) == *(uint *)(param_1 + 0x14))) &&
                 (uVar15 = (PF_PART4(auStack_a58, 0) & 0xff00ff00) >> 8 |
                           (PF_PART4(auStack_a58, 0) & 0xff00ff) << 8,
                 (uVar15 >> 0x10 | uVar15 << 0x10) == *(uint *)(param_1 + 8))))))) {
              uVar10 = (abStack_a68[0] & 0x3f) * 4;
              uVar15 = (uint)(auStack_a66[0] >> 8) | (auStack_a66[0] & 0xff00ff) << 8;
              if ((((uVar10 < 0x14 || uVar15 < uVar10 + 8) || uStack_a7c < uVar15 + 0xe) ||
                  (uVar14 = (ulong)uVar10,
                  (ushort)(*(ushort *)(abStack_a68 + uVar14) >> 8 |
                          *(ushort *)(abStack_a68 + uVar14) << 8) != 0x35)) ||
                 (((uint)(*(ushort *)((long)auStack_a66 + uVar14) >> 8) |
                  (*(ushort *)((long)auStack_a66 + uVar14) & 0xff00ff) << 8) !=
                  ((uVar1 | 0xffffc000) & 0xffff))) goto LAB_100066a8;
              uVar6 = *(ushort *)((long)auStack_a66 + uVar14 + 2);
              uVar8 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
              uVar9 = uVar8 - 8;
              uVar17 = (ulong)uVar9;
              if (((uVar8 < 8 || uVar15 < uVar10 + ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8))
                  || (auStack_70[0] = 0xc, uVar9 < 0xc)) ||
                 ((uVar6 = *(ushort *)((long)auStack_a66 + uVar14 + 6),
                  ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) != (uVar1 & 0xffff) ||
                  (-1 < acStack_a5e[uVar14])))) goto LAB_100066a8;
              pcVar13 = str_1000feda;
              if ((acStack_a5e[uVar14 + 1] & 0xfU) == 0) {
                lVar2 = (long)auStack_a66 + uVar14 + 6;
                uVar6 = *(ushort *)(acStack_a5e + uVar14 + 2);
                uVar7 = *(ushort *)(auStack_a58 + (uVar14 - 2));
                for (uVar15 = 0; uVar15 < ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
                    uVar15 = uVar15 + 1) {
                  uVar12 = recovered_10007b64(lVar2,uVar17,auStack_70);
                  uVar14 = auStack_70[0];
                  if (((int)uVar12 == 0) || (uVar17 < auStack_70[0] + 4)) goto LAB_1000668c;
                  auStack_70[0] = auStack_70[0] + 4;
                }
                for (uVar15 = 0; uVar15 < ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
                    uVar15 = uVar15 + 1) {
                  uVar12 = recovered_10007b64(lVar2,uVar17,auStack_70);
                  uVar14 = auStack_70[0];
                  if (((int)uVar12 == 0) || (uVar3 = auStack_70[0] + 10, uVar17 < uVar3))
                  goto LAB_1000668c;
                  puVar4 = (undefined1 *)(lVar2 + auStack_70[0]);
                  uVar10 = (uint)(*(ushort *)(puVar4 + 8) >> 8) |
                           (*(ushort *)(puVar4 + 8) & 0xff00ff) << 8;
                  auStack_70[0] = uVar3 + uVar10;
                  uVar14 = uVar3;
                  if (uVar17 < auStack_70[0]) goto LAB_1000668c;
                  if ((CONCAT11(*puVar4,puVar4[1]) == 1 && CONCAT11(puVar4[2],puVar4[3]) == 1) &&
                      uVar10 == 4) {
                    auStack_70[0] = uVar3;
                    uVar15 = recovered_10007b58((uint *)(lVar2 + uVar3));
                    *param_3 = uVar15;
                    if (uVar15 != 0) {
                      return 1;
                    }
                    goto LAB_100066a8;
                  }
                }
                pcVar13 = str_1000fefb;
              }
              goto LAB_10006694;
            }
            goto LAB_100066a8;
          }
          pcVar13 = str_1000fece;
        }
        else {
          pcVar13 = str_1000febe;
        }
      }
    }
LAB_10006424:
    pf_varargs_1000f7f4_1(param_4,param_5,pcVar13,(ulonglong)in_stack_fffffffffffff500);
  }
  return 0;
LAB_1000668c:
  auStack_70[0] = uVar14;
  pcVar13 = str_1000fee4;
LAB_10006694:
  pf_varargs_1000f7f4_0(acStack_adc,0x60,pcVar13);
LAB_100066a8:
  if (acStack_adc[0] != '\0') {
    in_stack_fffffffffffff500 = acStack_adc;
    pcVar13 = &DAT_1000fbc2;
    goto LAB_10006424;
  }
  iVar16 = iVar16 + 1;
  goto LAB_10006488;
}

#undef DAT_1000fa98
#undef DAT_1000fbc2
#undef str_1000fe96
#undef str_1000fead
#undef str_1000febe
#undef str_1000fece
#undef str_1000feda
#undef str_1000fee4
#undef str_1000fefb
#undef in_stack_fffffffffffff500
#undef acStack_adc
#undef uStack_a7c
#undef auStack_a76
#undef uStack_a6a
#undef abStack_a68
#undef auStack_a66
#undef uStack_a60
#undef acStack_a5e
#undef uStack_a5c
#undef auStack_a58
#undef acStack_276
#undef cStack_270
#undef auStack_26f
#undef acStack_264
#undef auStack_70

#undef DAT_1000fa6d
#define DAT_1000fa6d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
#undef DAT_1000faa0
#define DAT_1000faa0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2dcU)))
#undef str_1000ff14
#define str_1000ff14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x750U)))
#undef str_1000ff24
#define str_1000ff24 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x760U)))
#undef str_1000ff30
#define str_1000ff30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x76cU)))
#undef str_1000ff49
#define str_1000ff49 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x785U)))
#define local_a6 (*(undefined8 *)(frame + 2090))
#define auStack_8b4 (*(undefined1 (*)[12])(frame + 28))
#define uStack_8a8 (*(ushort *)(frame + 40))
#define uStack_8a6 (*(ushort *)(frame + 42))
#define uStack_8a4 (*(ushort *)(frame + 44))
#define cStack_8a2 (*(char *)(frame + 46))
#define cStack_8a1 (*(char *)(frame + 47))
#define uStack_8a0 (*(ushort *)(frame + 48))
#define auStack_89e (*(undefined1 (*)[6])(frame + 50))
#define uStack_898 (*(uint *)(frame + 56))
#define uStack_88e (*(uint *)(frame + 66))
#define auStack_b4 (*(uint (*)[3])(frame + 2076))
#define auStack_9e (*(undefined1 (*)[6])(frame + 2098))
#define uStack_98 (*(uint *)(frame + 2104))
#define auStack_94 (*(undefined1 (*)[6])(frame + 2108))
#define uStack_8e (*(uint *)(frame + 2114))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006718
 */

undefined8 recovered_10006718(long param_1,uint param_2,char *param_3,char *param_4,ulong param_5)

{
  unsigned char frame[2288] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  char *format;
  int iVar6;
  int iVar7;

  uVar2 = DAT_1000faa0;
  if ((param_1 == 0) || (param_2 == 0)) {
    format = str_1000ff30;
  }
  else if ((param_2 == 0xffffffff) ||
          (((*(uint *)(param_1 + 0xc) != 0 &&
            (((*(uint *)(param_1 + 8) ^ param_2) & *(uint *)(param_1 + 0xc)) == 0)) ||
           (param_2 = *(uint *)(param_1 + 0x10), param_2 != 0)))) {
    if (param_2 == *(uint *)(param_1 + 8)) {
      recovered_100072f4((long)param_3,param_1 + 2);
      return 1;
    }
    uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    for (iVar7 = 0; iVar7 != 3; iVar7 = iVar7 + 1) {
      memset(auStack_b4,0,0x3c);
      recovered_10007948(auStack_b4,&DAT_1000fa6d,(void *)(param_1 + 2),0x806);
      local_a6 = uVar2;
      memcpy(auStack_9e,(void *)(param_1 + 2),6);
      uVar4 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
      uStack_98 = uVar4 >> 0x10 | uVar4 << 0x10;
      memcpy(auStack_94,(void *)((uintptr_t)pf_module_state + 0x2afU),6);
      uStack_8e = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar4 = recovered_10007a40(auStack_b4,0x3c);
      if (uVar4 == 0) {
        format = str_1000ff14;
        goto LAB_10006924;
      }
      iVar6 = 900;
      do {
        auStack_b4[0] = 0;
        uVar5 = recovered_10007adc(auStack_8b4,auStack_b4);
        if ((((((int)uVar5 != 0) && (param_3 != (char *)0x0)) &&
             ((0x29 < auStack_b4[0] &&
              (((ushort)(uStack_8a8 >> 8 | uStack_8a8 << 8) == 0x806 &&
               ((ushort)(uStack_8a6 >> 8 | uStack_8a6 << 8) == 1)))))) &&
            (((ushort)(uStack_8a4 >> 8 | uStack_8a4 << 8) == 0x800 && cStack_8a2 == '\x06') &&
             cStack_8a1 == '\x04')) &&
           ((((ushort)(uStack_8a0 >> 8 | uStack_8a0 << 8) == 2 &&
             (uVar4 = (uStack_898 & 0xff00ff00) >> 8 | (uStack_898 & 0xff00ff) << 8,
             (uVar4 >> 0x10 | uVar4 << 0x10) == param_2)) &&
            (uVar4 = (uStack_88e & 0xff00ff00) >> 8 | (uStack_88e & 0xff00ff) << 8,
            (uVar4 >> 0x10 | uVar4 << 0x10) == *(uint *)(param_1 + 8))))) {
          memcpy(param_3,auStack_89e,6);
          bVar3 = recovered_100072ac(param_3);
          if (!bVar3) {
            return 1;
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    format = str_1000ff24;
  }
  else {
    format = str_1000ff49;
  }
LAB_10006924:
  pf_varargs_1000f7f4_0(param_4,param_5,format);
  return 0;
}

#undef DAT_1000fa6d
#undef DAT_1000faa0
#undef str_1000ff14
#undef str_1000ff24
#undef str_1000ff30
#undef str_1000ff49
#undef local_a6
#undef auStack_8b4
#undef uStack_8a8
#undef uStack_8a6
#undef uStack_8a4
#undef cStack_8a2
#undef cStack_8a1
#undef uStack_8a0
#undef auStack_89e
#undef uStack_898
#undef uStack_88e
#undef auStack_b4
#undef auStack_9e
#undef uStack_98
#undef auStack_94
#undef uStack_8e

#undef str_1000ff5a
#define str_1000ff5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x796U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000695c
 */

int recovered_1000695c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *vararg5;

  iVar1 = 0;
  if (param_1 != (char *)0x0) {
    vararg5 = winter_js_version();
    iVar1 = pf_varargs_1000f7f4_6
                      (param_1,0x200,str_1000ff5a,1000000,((uintptr_t)pf_module_state + 0x820U),((uintptr_t)pf_module_state + 0x818U),((uintptr_t)pf_module_state + 0x81cU),
                       ((uintptr_t)pf_module_state + 0x81cU),(ulonglong)vararg5);
  }
  return iVar1;
}

#undef str_1000ff5a

#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_1000fc9c
#define DAT_1000fc9c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4d8U)))
#undef str_1000fafa
#define str_1000fafa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#undef str_1000fcd6
#define str_1000fcd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_1000fce4
#define str_1000fce4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x520U)))
#undef str_1000ffea
#define str_1000ffea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x826U)))
#define acStack_4958 (*(char (*)[96])(frame + 24))
#define uStack_48f8 (*(ulong *)(frame + 120))
#define acStack_48f0 (*(char (*)[1536])(frame + 128))
#define auStack_42f0 (*(undefined1 (*)[544])(frame + 1664))
#define puStack_40d0 (*(undefined8 * *)(frame + 2208))
#define pcStack_40c8 (*(code * *)(frame + 2216))
#define pcStack_40c0 (*(code * *)(frame + 2224))
#define pcStack_40b8 (*(code * *)(frame + 2232))
#define pcStack_40b0 (*(code * *)(frame + 2240))
#define uStack_40a8 (*(undefined8 *)(frame + 2248))
#define plStack_40a0 (*(long * *)(frame + 2256))
#define uStack_4098 (*(undefined1 *)(frame + 2264))
#define alStack_4090 (*(long (*)[2054])(frame + 2272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069c8
 */

undefined8
recovered_100069c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5,long param_6,char *param_7,char *param_8,undefined1 *param_9,
                  ulong param_10,ulong *param_11,char *param_12,ulong param_13,undefined *param_14,
                  undefined8 param_15)

{
  unsigned char frame[18832] __attribute__((aligned(16))) = {0};

  char *vararg2;
  ulong n;
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *data;
  char *vararg0;

  if (param_11 != (ulong *)0x0) {
    *param_11 = 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_5 == (void *)0x0) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  *param_9 = 0;
  memset(alStack_4090,0,0x4028);
  uVar2 = recovered_10007be0(alStack_4090,param_2,param_3,param_4,param_5,param_12,param_13);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  memset(&uStack_40a8,0,0x18);
  plStack_40a0 = alStack_4090;
  uStack_4098 = 0;
  uStack_40a8 = param_1;
  memset(&puStack_40d0,0,0x28);
  pcStack_40c8 = (code *)recovered_10007db0;
  pcStack_40c0 = (code *)recovered_10007e64;
  pcStack_40b8 = (code *)recovered_10007e78;
  pcStack_40b0 = (code *)recovered_10007fcc;
  puStack_40d0 = &uStack_40a8;
  winter_tls_client_init(auStack_42f0,&puStack_40d0,(char *)param_6);
  uVar1 = winter_tls_client_handshake(auStack_42f0,param_12,param_13);
  if ((uVar1 & 1) != 0) {
    vararg0 = &DAT_1000fc9c;
    if ((param_7 != (char *)0x0) && (vararg0 = &DAT_1000fc9c, *param_7 != '\0')) {
      vararg0 = param_7;
    }
    vararg2 = str_1000fafa;
    if (param_8 != (char *)0x0) {
      vararg2 = param_8;
    }
    pf_varargs_1000f7f4_3
              (acStack_48f0,0x600,str_1000fce4,(ulonglong)vararg0,param_6,(ulonglong)vararg2);
    uVar3 = strlen(acStack_48f0);
    uVar1 = winter_tls_write(auStack_42f0,acStack_48f0,uVar3,param_12,param_13);
    if ((uVar1 & 1) != 0) {
      data = recovered_100016e0(0x4100);
      if (data != (void *)0x0) {
        uVar3 = 0;
        do {
          uStack_48f8 = 0;
          acStack_4958[0] = '\0';
          uVar1 = winter_tls_read(auStack_42f0,data,0x4100,&uStack_48f8,acStack_4958,0x60);
          if ((uVar1 & 1) == 0) {
            if ((uVar3 == 0) && (acStack_4958[0] != '\0')) {
              pf_varargs_1000f7f4_1(param_12,param_13,&DAT_1000fbc2,(ulonglong)acStack_4958);
              uVar3 = 0;
            }
            break;
          }
          n = uStack_48f8;
          if (~uVar3 + param_10 <= uStack_48f8) {
            n = ~uVar3 + param_10;
          }
          if (n != 0) {
            memcpy(param_9 + uVar3,data,n);
            uVar3 = n + uVar3;
            param_9[uVar3] = 0;
            if (param_14 != (undefined *)0x0) {
              (*(code *)param_14)(param_15,param_9,uVar3);
            }
          }
        } while (uVar3 + 1 < param_10);
        recovered_10001754(data);
        recovered_1000820c(alStack_4090);
        if (uVar3 != 0) {
          if (param_11 != (ulong *)0x0) {
            *param_11 = uVar3;
          }
          return 1;
        }
        if (param_12 == (char *)0x0) {
          return 0;
        }
        if (*param_12 == '\0') {
          pf_varargs_1000f7f4_0(param_12,param_13,str_1000ffea);
          return 0;
        }
        return 0;
      }
      pf_varargs_1000f7f4_0(param_12,param_13,str_1000fcd6);
    }
  }
  recovered_1000820c(alStack_4090);
  return 0;
}

#undef DAT_1000fbc2
#undef DAT_1000fc9c
#undef str_1000fafa
#undef str_1000fcd6
#undef str_1000fce4
#undef str_1000ffea
#undef acStack_4958
#undef uStack_48f8
#undef acStack_48f0
#undef auStack_42f0
#undef puStack_40d0
#undef pcStack_40c8
#undef pcStack_40c0
#undef pcStack_40b8
#undef pcStack_40b0
#undef uStack_40a8
#undef plStack_40a0
#undef uStack_4098
#undef alStack_4090

#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef str_1001010d
#define str_1001010d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x949U)))
#undef str_10010124
#define str_10010124 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x960U)))
#define acStack_50f0 (*(char (*)[96])(frame + 16))
#define auStack_5090 (*(undefined1 (*)[4096])(frame + 112))
#define alStack_4090 (*(long (*)[3])(frame + 4208))
#define auStack_4072 (*(undefined1 (*)[16384])(frame + 4238))
#define uStack_72 (*(ushort *)(frame + 20622))
#define uStack_70 (*(ushort *)(frame + 20624))
#define cStack_6d (*(char *)(frame + 20627))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c6c
 */

undefined8
recovered_10006c6c(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,char *param_5,
                  undefined1 *param_6,ulong param_7,ulong *param_8,char *param_9,ulong param_10,
                  undefined *param_11,undefined8 param_12)

{
  unsigned char frame[20768] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *format;
  ulong n;
  bool bVar6;

  if (param_8 != (ulong *)0x0) {
    *param_8 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (void *)0x0) {
    return 0;
  }
  if (param_5 == (char *)0x0) {
    return 0;
  }
  *param_6 = 0;
  memset(alStack_4090,0,0x4028);
  uVar4 = recovered_10007be0(alStack_4090,param_1,param_2,param_3,param_4,param_9,param_10);
  if ((int)uVar4 == 0) {
    return 0;
  }
  uVar5 = strlen(param_5);
  if (uVar5 < 0x2001) {
    uVar4 = recovered_10008860(alStack_4090,(long)param_5,uVar5,param_9,param_10);
    if ((int)uVar4 != 0) {
      bVar6 = false;
      uVar5 = 0;
      while ((acStack_50f0[0] = '\0', uStack_72 < uStack_70 ||
             (bVar3 = recovered_10008608(alStack_4090,acStack_50f0,0x60), bVar3))) {
        uVar2 = uStack_70;
        uVar1 = uStack_72;
        n = (ulong)uStack_70 - (ulong)uStack_72;
        if (0xfff < n) {
          n = 0x1000;
        }
        memcpy(auStack_5090,auStack_4072 + uStack_72,n);
        uStack_72 = uStack_72 + (short)n;
        if (uVar2 == uVar1) break;
        if (~uVar5 + param_7 <= n) {
          n = ~uVar5 + param_7;
        }
        if (n != 0) {
          memcpy(param_6 + uVar5,auStack_5090,n);
          uVar5 = n + uVar5;
          param_6[uVar5] = 0;
          if (param_11 != (undefined *)0x0) {
            (*(code *)param_11)(param_12,param_6,uVar5);
          }
          bVar6 = true;
        }
        if ((param_7 <= uVar5 + 1) || ((cStack_6d == '\x01' && (uStack_70 <= uStack_72))))
        goto LAB_10006eb8;
      }
      if (!bVar6 && acStack_50f0[0] != '\0') {
        pf_varargs_1000f7f4_1(param_9,param_10,&DAT_1000fbc2,(ulonglong)acStack_50f0);
        bVar6 = false;
      }
LAB_10006eb8:
      if (param_8 != (ulong *)0x0) {
        *param_8 = uVar5;
      }
      if (bVar6) {
        uVar4 = 1;
        goto LAB_10006e58;
      }
      format = str_10010124;
      goto LAB_10006d14;
    }
  }
  else {
    format = str_1001010d;
LAB_10006d14:
    pf_varargs_1000f7f4_0(param_9,param_10,format);
  }
  uVar4 = 0;
LAB_10006e58:
  recovered_1000820c(alStack_4090);
  return uVar4;
}

#undef DAT_1000fbc2
#undef str_1001010d
#undef str_10010124
#undef acStack_50f0
#undef auStack_5090
#undef alStack_4090
#undef auStack_4072
#undef uStack_72
#undef uStack_70
#undef cStack_6d

#undef DAT_1001013a
#define DAT_1001013a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x976U)))
#undef DAT_1001013f
#define DAT_1001013f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x97bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed8
 */

long recovered_10006ed8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar2 = (char *)0x0;
  if (param_1 != 0) {
    pcVar2 = strstr((char *)param_1,&DAT_1001013a);
    if (pcVar2 != (char *)0x0) {
      return (long)(pcVar2 + 4);
    }
    pcVar2 = strstr((char *)param_1,&DAT_1001013f);
  }
  pcVar1 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2 + 2;
  }
  return (long)pcVar1;
}

#undef DAT_1001013a
#undef DAT_1001013f

#undef str_10010142
#define str_10010142 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97eU)))
#undef str_10010154
#define str_10010154 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x990U)))
#define acStack_e0 (*(char (*)[192])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f28
 */

bool recovered_10006f28(byte *param_1)

{
  unsigned char frame[272] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;

  pbVar2 = (byte *)recovered_10006ed8((long)param_1);
  uVar3 = strlen(str_10010142);
  if (uVar3 == 0) {
    return false;
  }
  uVar7 = (uint)*param_1;
  do {
    if (uVar7 == 0) {
      return false;
    }
    if (pbVar2 != (byte *)0x0 && pbVar2 <= param_1) {
      return false;
    }
    iVar5 = -1;
    pbVar6 = param_1;
    while ((0xd < uVar7 || ((1 << (ulong)(uVar7 & 0x1f) & 0x2401U) == 0))) {
      pbVar6 = pbVar6 + 1;
      uVar7 = (uint)*pbVar6;
      iVar5 = iVar5 + 1;
    }
    uVar9 = uVar3;
    for (pbVar8 = param_1; pbVar8 < pbVar6; pbVar8 = pbVar8 + 1) {
      if (*pbVar8 == 0x3a) {
        if (uVar9 == 0) {
          uVar9 = uVar3;
          pbVar10 = (byte *)str_10010142;
          do {
            if (uVar9 == 0) {
              if (0xbe < iVar5) {
                iVar5 = 0xbf;
              }
              memcpy(acStack_e0,pbVar8 + 1,(long)iVar5);
              acStack_e0[iVar5] = '\0';
              pcVar4 = recovered_100052e0(acStack_e0,str_10010154);
              return pcVar4 != (char *)0x0;
            }
            bVar1 = *param_1;
            uVar7 = bVar1 | 0x20;
            if (0x19 < bVar1 - 0x41U) {
              uVar7 = (uint)bVar1;
            }
            bVar1 = *pbVar10;
            uVar11 = bVar1 | 0x20;
            if (0x19 < bVar1 - 0x41U) {
              uVar11 = (uint)bVar1;
            }
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            param_1 = param_1 + 1;
          } while (uVar7 == uVar11);
        }
        break;
      }
      iVar5 = iVar5 + -1;
      uVar9 = uVar9 - 1;
    }
    while( true ) {
      uVar7 = (uint)*pbVar6;
      param_1 = pbVar6;
      if (!(uVar7 == 0xd || uVar7 == 10)) break;
      pbVar6 = pbVar6 + 1;
    }
  } while( true );
}

#undef str_10010142
#undef str_10010154
#undef acStack_e0

#undef str_1001015c
#define str_1001015c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x998U)))
#undef str_10010175
#define str_10010175 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b1U)))
#undef str_10010191
#define str_10010191 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9cdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000708c
 */

undefined8
recovered_1000708c(long param_1,ulong param_2,long param_3,long param_4,long *param_5,char *param_6,
                  ulong param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong n;
  long lVar5;
  ulong uVar6;

  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  uVar6 = 0;
  lVar5 = 0;
  while (uVar6 < param_2) {
    for (; param_2 != uVar6; uVar6 = uVar6 + 1) {
      if (*(char *)(param_1 + uVar6) != '\r' && *(char *)(param_1 + uVar6) != '\n')
      goto LAB_100070f4;
    }
    uVar6 = param_2;
LAB_100070f4:
    n = 0;
    bVar3 = false;
    uVar4 = uVar6;
    if (uVar6 <= param_2) {
      uVar4 = param_2;
    }
    while (uVar4 != uVar6) {
      uVar1 = recovered_10005acc((int)*(char *)(param_1 + uVar6));
      if ((int)uVar1 < 0) {
        uVar4 = uVar6;
        break;
      }
      n = n * 0x10 + (ulong)uVar1;
      bVar3 = true;
      uVar6 = uVar6 + 1;
    }
    if (!bVar3) {
      pcVar2 = str_1001015c;
      goto LAB_100071c4;
    }
    do {
      if (param_2 <= uVar4) goto LAB_100071bc;
      pcVar2 = (char *)(param_1 + uVar4);
      uVar4 = uVar4 + 1;
    } while (*pcVar2 != '\n');
    if (n == 0) {
      if (param_5 != (long *)0x0) {
        *param_5 = lVar5;
      }
      return 1;
    }
    if (param_2 - uVar4 < n) break;
    if ((ulong)(param_4 - lVar5) < n) {
      pcVar2 = str_10010191;
      goto LAB_100071c4;
    }
    memmove((void *)(param_3 + lVar5),(void *)(param_1 + uVar4),n);
    uVar6 = n + uVar4;
    if (uVar6 < param_2) {
      uVar6 = n;
      if (*(char *)(param_1 + n + uVar4) == '\r') {
        uVar6 = n + 1;
      }
      uVar6 = uVar6 + uVar4;
    }
    lVar5 = n + lVar5;
    if ((uVar6 < param_2) && (*(char *)(param_1 + uVar6) == '\n')) {
      uVar6 = uVar6 + 1;
    }
  }
LAB_100071bc:
  pcVar2 = str_10010175;
LAB_100071c4:
  pf_varargs_1000f7f4_0(param_6,param_7,pcVar2);
  return 0;
}

#undef str_1001015c
#undef str_10010175
#undef str_10010191

#undef str_100101ab
#define str_100101ab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e7U)))
#undef str_100101ba
#define str_100101ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071fc
 */

void recovered_100071fc(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;

  *param_2 = 0;
  pcVar3 = recovered_100052e0(param_1,str_100101ab);
  if (pcVar3 == (char *)0x0) {
    bVar2 = recovered_10004fc4((byte *)param_1,(byte *)str_100101ba);
    if (param_1 == (char *)0x0) {
      return;
    }
    if (!bVar2) {
      return;
    }
  }
  else {
    param_1 = pcVar3 + 1;
  }
  pbVar4 = (byte *)strchr(param_1,0x3a);
  if (pbVar4 != (byte *)0x0) {
    do {
      do {
        pbVar5 = pbVar4;
        pbVar4 = pbVar5 + 1;
        bVar1 = *pbVar4;
      } while (bVar1 == 9);
    } while (bVar1 == 0x20);
    for (lVar6 = 2; (0xd < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x2401U) == 0 && (lVar6 != 0x61));
        lVar6 = lVar6 + 1) {
      *param_2 = bVar1;
      bVar1 = pbVar5[lVar6];
      param_2 = param_2 + 1;
    }
    *param_2 = 0;
  }
  return;
}

#undef str_100101ab
#undef str_100101ba

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072ac
 */

bool recovered_100072ac(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (char *)0x0) {
    return true;
  }
  if ((((*param_1 == '\0') && (param_1[1] == '\0')) && (param_1[2] == '\0')) &&
     ((param_1[3] == '\0' && (param_1[4] == '\0')))) {
    return param_1[5] == '\0';
  }
  return false;
}


#undef PTR_memcpy_10018008
#define PTR_memcpy_10018008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8844U)))
#undef PTR_memset_10018018
#define PTR_memset_10018018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8854U)))
#undef PTR_recovered_1000f920_10018008
#define PTR_recovered_1000f920_10018008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8844U)))
#undef PTR_recovered_1000f938_10018018
#define PTR_recovered_1000f938_10018018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8854U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072f4
 */

void recovered_100072f4(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x2cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_memset_10018018)(param_1,0,6);
    return;
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x14U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_10018008)();
  return;
}

#undef PTR_memcpy_10018008
#undef PTR_memset_10018018
#undef PTR_recovered_1000f920_10018008
#undef PTR_recovered_1000f938_10018018

#undef DAT_1000fa67
#define DAT_1000fa67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a3U)))
#undef DAT_1000faa8
#define DAT_1000faa8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2e4U)))
#define auStack_161 (*(undefined1 (*)[208])(frame + 79))
#define uStack_91 (*(undefined4 *)(frame + 287))
#define auStack_8d (*(undefined1 (*)[60])(frame + 291))
#define uStack_51 (*(undefined1 *)(frame + 351))
#define local_194 (*(undefined4 *)(frame + 28))
#define local_188 (*(ulong *)(frame + 40))
#define local_17d (*(undefined2 *)(frame + 51))
#define local_17b (*(undefined1 *)(frame + 53))
#define local_179 (*(undefined1 *)(frame + 55))
#define local_178 (*(undefined1 *)(frame + 56))
#define local_177 (*(undefined1 *)(frame + 57))
#define local_176 (*(undefined1 *)(frame + 58))
#define local_173 (*(undefined2 *)(frame + 61))
#define uStack_18f (*(undefined1 *)(frame + 33))
#define auStack_18e (*(undefined1 (*)[6])(frame + 34))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000730c
 */

void recovered_1000730c(long param_1,int param_2,int param_3,int param_4)

{
  unsigned char frame[464] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  undefined8 uVar2;

  local_188 = 0;
  local_194 = 0x33060301;
  memset(&local_17d,0,300);
  local_17d = 0x101;
  local_17b = 6;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_179 = (undefined1)((uint)uVar1 >> 0x18);
  local_178 = (undefined1)((uint)uVar1 >> 0x10);
  local_177 = (undefined1)((uint)uVar1 >> 8);
  local_176 = (undefined1)uVar1;
  local_173 = 0x80;
  memcpy(auStack_161,(void *)(param_1 + 2),6);
  uStack_91 = (undefined4)DAT_1000faa8;
  uStack_18f = 1;
  memcpy(auStack_18e,(void *)(param_1 + 2),6);
  uStack_51 = (undefined1)param_2;
  uVar2 = recovered_10007790((long)auStack_8d,(long *)&local_188,0x35,&uStack_51,1);
  if (((((int)uVar2 != 0) &&
       (uVar2 = recovered_10007790((long)auStack_8d,(long *)&local_188,0x3d,&uStack_18f,7),
       (int)uVar2 != 0)) &&
      ((param_2 != 3 ||
       (((param_3 != 0 &&
         (recovered_10007818((long)auStack_8d,(long *)&local_188,0x32), extraout_w0 != 0)) &&
        ((param_4 == 0 ||
         (recovered_10007818((long)auStack_8d,(long *)&local_188,0x36), extraout_w0_00 != 0))))))))
     && ((uVar2 = recovered_10007790((long)auStack_8d,(long *)&local_188,0x37,&local_194,4),
         (int)uVar2 != 0 && (local_188 < 0x3c)))) {
    auStack_8d[local_188] = 0xff;
    local_188 = local_188 + 1;
    recovered_10007844(param_1,&DAT_1000fa67,0,0xffffffff,0x44,0x43,&local_17d,300);
  }
  return;
}

#undef DAT_1000fa67
#undef DAT_1000faa8
#undef auStack_161
#undef uStack_91
#undef auStack_8d
#undef uStack_51
#undef local_194
#undef local_188
#undef local_17d
#undef local_17b
#undef local_179
#undef local_178
#undef local_177
#undef local_176
#undef local_173
#undef uStack_18f
#undef auStack_18e

#define uStack_884 (*(uint *)(frame + 28))
#define uStack_880 (*(uint *)(frame + 32))
#define auStack_87c (*(undefined1 (*)[12])(frame + 36))
#define uStack_870 (*(ushort *)(frame + 48))
#define abStack_86e (*(byte (*)[2])(frame + 50))
#define auStack_86c (*(ushort (*)[3])(frame + 52))
#define acStack_865 (*(char (*)[3])(frame + 59))
#define uStack_862 (*(undefined4 *)(frame + 62))
#define auStack_84a (*(undefined1 (*)[208])(frame + 86))
#define acStack_77a (*(char (*)[1790])(frame + 294))
#define uStack_7c (*(uint *)(frame + 2084))
#define uStack_78 (*(uint *)(frame + 2088))
#define uStack_74 (*(uint *)(frame + 2092))
#define uStack_70 (*(uint *)(frame + 2096))
#define uStack_6c (*(uint *)(frame + 2100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d4
 */

bool recovered_100074d4(long param_1,uint param_2,undefined8 *param_3)

{
  unsigned char frame[2240] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;

  uVar15 = 0;
  do {
    if (uVar15 == 0x1450) {
LAB_10007778:
      return uVar15 >> 4 < 0x145;
    }
    uStack_880 = 0;
    uVar13 = recovered_10007adc(auStack_87c,&uStack_880);
    if (((((int)uVar13 != 0) && (param_3 != (undefined8 *)0x0)) && (0x119 < uStack_880)) &&
       (((ushort)(uStack_870 >> 8 | uStack_870 << 8) == 0x800 &&
        ((abStack_86e[0] & 0xf0) == 0x40 && acStack_865[0] == '\x11')))) {
      uVar16 = (ulong)abStack_86e[0] & 0xf;
      lVar9 = uVar16 * 4;
      uVar10 = (uint)(auStack_86c[0] >> 8) | (auStack_86c[0] & 0xff00ff) << 8;
      uVar12 = (uint)lVar9;
      if (((0x13 < uVar12 && uVar12 + 8 <= uVar10) && uVar10 + 0xe <= uStack_880) &&
         (((ushort)(*(ushort *)(abStack_86e + lVar9) >> 8 | *(ushort *)(abStack_86e + lVar9) << 8)
           == 0x43 &&
          ((ushort)(auStack_86c[uVar16 * 2] >> 8 | auStack_86c[uVar16 * 2] << 8) == 0x44)))) {
        uVar6 = *(ushort *)(&uStack_862 + (uVar16 - 2));
        uVar7 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
        uVar8 = uVar7 - 8;
        if (((7 < uVar7 && uVar12 + ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) <= uVar10) &&
            (((((0xef < uVar8 && (pcVar2 = (char *)(&uStack_862 + (uVar16 - 1)), *pcVar2 == '\x02'))
               && (acStack_865[lVar9] == '\x01')) &&
              (((5 < (byte)acStack_865[lVar9 + 1] &&
                (uVar10 = recovered_10007b58(&uStack_862 + uVar16),
                uVar10 == *(uint *)(param_1 + 0x1c))) &&
               ((iVar11 = memcmp(auStack_84a + lVar9,(void *)(param_1 + 2),6),
                iVar11 == 0 && ((acStack_77a[lVar9] == 'c' && (acStack_77a[lVar9 + 1] == -0x7e))))))
              )) && (acStack_77a[lVar9 + 2] == 'S')))) && (acStack_77a[lVar9 + 3] == 'c')) {
          memset(&uStack_7c,0,0x14);
          uVar12 = recovered_10007b58(&uStack_862 + uVar16 + 3);
          uStack_884 = 0;
          uVar10 = (uStack_862 & 0xff00ff00) >> 8 | (uStack_862 & 0xff00ff) << 8;
          uStack_7c = uVar12;
          uStack_6c = uVar10 >> 0x10 | uVar10 << 0x10;
          uVar16 = 0xf0;
          while ((uint)uVar16 < uVar8) {
            uVar14 = uVar16 & 0xffffffff;
            uVar3 = uVar14 + 1;
            cVar4 = pcVar2[uVar16 & 0xffffffff];
            uVar16 = uVar3;
            if (cVar4 != '\0') {
              if (cVar4 == -1) break;
              if (uVar8 <= (uint)uVar3) goto LAB_10007750;
              uVar14 = uVar14 + 2;
              bVar5 = pcVar2[uVar3];
              uVar10 = (int)uVar14 + (uint)bVar5;
              uVar16 = (ulong)uVar10;
              if (uVar8 < uVar10) goto LAB_10007750;
              puVar1 = (uint *)(pcVar2 + (uVar14 & 0xffffffff));
              if (cVar4 == '\x01') {
                if (3 < bVar5) {
                  uStack_78 = recovered_10007b58(puVar1);
                }
              }
              else if (cVar4 == '\x03') {
                if (3 < bVar5) {
                  uStack_74 = recovered_10007b58(puVar1);
                }
              }
              else if (cVar4 == '\x06') {
                if (3 < bVar5) {
                  uStack_70 = recovered_10007b58(puVar1);
                }
              }
              else if (cVar4 == '6') {
                if (3 < bVar5) {
                  uStack_6c = recovered_10007b58(puVar1);
                }
              }
              else if ((cVar4 == '5') && (bVar5 != 0)) {
                uStack_884 = (uint)(byte)pcVar2[uVar14];
              }
            }
          }
          if ((uStack_884 == param_2) && (uVar12 != 0)) {
            if (uStack_78 == 0) {
              uStack_78 = 0xffffff00;
            }
            param_3[1] = CONCAT44(uStack_70,uStack_74);
            *param_3 = CONCAT44(uStack_78,uStack_7c);
            *(uint *)(param_3 + 2) = uStack_6c;
            goto LAB_10007778;
          }
        }
      }
    }
LAB_10007750:
    uVar15 = uVar15 + 1;
  } while( true );
}

#undef uStack_884
#undef uStack_880
#undef auStack_87c
#undef uStack_870
#undef abStack_86e
#undef auStack_86c
#undef acStack_865
#undef uStack_862
#undef auStack_84a
#undef acStack_77a
#undef uStack_7c
#undef uStack_78
#undef uStack_74
#undef uStack_70
#undef uStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007790
 */

undefined8
recovered_10007790(long param_1,long *param_2,undefined1 param_3,void *param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;

  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_4 != (void *)0x0)) {
    lVar2 = *param_2;
    if (lVar2 + (ulong)param_5 + 2 < 0x3d) {
      *param_2 = lVar2 + 1;
      *(undefined1 *)(param_1 + lVar2) = param_3;
      lVar2 = *param_2;
      *param_2 = lVar2 + 1;
      *(char *)(param_1 + lVar2) = (char)param_5;
      memcpy((void *)(param_1 + *param_2),param_4,(ulong)param_5);
      *param_2 = *param_2 + (ulong)param_5;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007818
 */

void recovered_10007818(long in_x0,long *in_x1,undefined1 in_w2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint in_w3;

  uVar1 = (in_w3 & 0xff00ff00) >> 8 | (in_w3 & 0xff00ff) << 8;
  local_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  recovered_10007790(in_x0,in_x1,in_w2,&local_14,4);
  return;
}

#undef local_14

#define auStack_868 (*(undefined1 (*)[14])(frame + 24))
#define auStack_85a (*(ushort (*)[10])(frame + 38))
#define uStack_846 (*(undefined1 *)(frame + 58))
#define uStack_845 (*(undefined1 *)(frame + 59))
#define uStack_844 (*(undefined1 *)(frame + 60))
#define uStack_843 (*(undefined1 *)(frame + 61))
#define uStack_842 (*(undefined1 *)(frame + 62))
#define uStack_841 (*(undefined1 *)(frame + 63))
#define uStack_840 (*(undefined2 *)(frame + 64))
#define auStack_83e (*(undefined1 (*)[2014])(frame + 66))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007844
 */

bool recovered_10007844(long param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,void *param_7,uint param_8)

{
  unsigned char frame[2208] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;

  if (param_2 == (void *)0x0) {
    return false;
  }
  bVar2 = false;
  if ((param_8 < 0x7d7) && (param_7 != (void *)0x0 || param_8 == 0)) {
    recovered_10007948(auStack_868,param_2,(void *)(param_1 + 2),0x800);
    uVar3 = 0x4700;
    if (*(ushort *)(param_1 + 0x20) != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x20);
    }
    uVar1 = uVar3 + 2;
    if ((uVar3 + 1 & 0x10000) == 0) {
      uVar1 = uVar3 + 1;
    }
    *(short *)(param_1 + 0x20) = (short)uVar1;
    recovered_10007984(auStack_85a,(ulong)(param_8 + 0x1c & 0xffff),(ulong)(uVar1 & 0xffff),0x11,
                       param_3,param_4);
    uStack_846 = (undefined1)((ulong)param_5 >> 8);
    uStack_845 = (undefined1)param_5;
    uStack_844 = (undefined1)((ulong)param_6 >> 8);
    uStack_843 = (undefined1)param_6;
    uStack_842 = (undefined1)(param_8 + 8 >> 8);
    uStack_841 = (undefined1)(param_8 + 8);
    uStack_840 = 0;
    if (param_8 != 0) {
      memcpy(auStack_83e,param_7,(ulong)param_8);
    }
    uVar3 = recovered_10007a40(auStack_868,param_8 + 0x2a);
    bVar2 = uVar3 != 0;
  }
  return bVar2;
}

#undef auStack_868
#undef auStack_85a
#undef uStack_846
#undef uStack_845
#undef uStack_844
#undef uStack_843
#undef uStack_842
#undef uStack_841
#undef uStack_840
#undef auStack_83e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007948
 */

void recovered_10007948(void *param_1,void *param_2,void *param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  memcpy(param_1,param_2,6);
  memcpy((void *)((long)param_1 + 6),param_3,6);
  *(ushort *)((long)param_1 + 0xc) =
       (ushort)(param_4 >> 8) & 0xff | (ushort)((param_4 & 0xff00ff) << 8);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007984
 */

void recovered_10007984(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  memset(param_1,0,0x14);
  *(undefined1 *)param_1 = 0x45;
  *(char *)(param_1 + 1) = (char)((ulong)param_2 >> 8);
  *(char *)((long)param_1 + 3) = (char)param_2;
  *(char *)(param_1 + 2) = (char)((ulong)param_3 >> 8);
  *(char *)((long)param_1 + 5) = (char)param_3;
  param_1[3] = 0x40;
  *(undefined1 *)(param_1 + 4) = 0x40;
  *(undefined1 *)((long)param_1 + 9) = param_4;
  *(char *)(param_1 + 6) = (char)((ulong)param_5 >> 0x18);
  *(char *)((long)param_1 + 0xd) = (char)((ulong)param_5 >> 0x10);
  *(char *)(param_1 + 7) = (char)((ulong)param_5 >> 8);
  *(char *)((long)param_1 + 0xf) = (char)param_5;
  *(char *)(param_1 + 8) = (char)((ulong)param_6 >> 0x18);
  *(char *)((long)param_1 + 0x11) = (char)((ulong)param_6 >> 0x10);
  *(char *)(param_1 + 9) = (char)((ulong)param_6 >> 8);
  *(char *)((long)param_1 + 0x13) = (char)param_6;
  uVar2 = recovered_10007ab0(0,param_1,0x14);
  uVar1 = recovered_10007a90((uint)uVar2);
  param_1[5] = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
  return;
}


#undef UINT_8201092c
#define UINT_8201092c (*(uint *)(0x8201092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a40
 */

uint recovered_10007a40(void *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(300);
  if ((bVar1) && (uVar2 = UINT_8201092c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10007a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef UINT_8201092c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a90
 */

uint recovered_10007a90(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; 0xffff < param_1; param_1 = (param_1 >> 0x10) + (param_1 & 0xffff)) {
  }
  return (param_1 ^ 0xffffffff) & 0xffff;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ab0
 */

ulong recovered_10007ab0(ulong param_1,ushort *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (param_3 < 2) break;
    param_1 = (ulong)((int)param_1 + ((uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8));
    param_2 = param_2 + 1;
    param_3 = param_3 - 2;
  }
  if (param_3 != 0) {
    param_1 = (ulong)((int)param_1 + (uint)(byte)*param_2 * 0x100);
  }
  return param_1;
}


#define uStack_24 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007adc
 */

undefined8 recovered_10007adc(void *param_1,uint *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if (param_1 != (void *)0x0) {
    uStack_24 = 0;
    bVar1 = recovered_100019c8(0x128);
    if (bVar1) {
      uVar2 = UINT_82010928;
      if (((uVar2 != 0) && (uVar2 = (*(code *)(ulong)uVar2)(param_1,0x800,&uStack_24), uVar2 != 0))
         && (0xd < uStack_24)) {
        if (param_2 != (uint *)0x0) {
          *param_2 = uStack_24;
        }
        return 1;
      }
    }
    recovered_10001994();
  }
  return 0;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b58
 */

uint recovered_10007b58(uint *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007b64
 */

undefined8 recovered_10007b64(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;

  if ((param_3 == (ulong *)0x0) || (param_1 == 0)) {
    return 0;
  }
  uVar4 = *param_3;
  uVar3 = 0;
  while( true ) {
    if (param_2 <= uVar4) {
      return 0;
    }
    uVar5 = uVar4 + 1;
    bVar2 = *(byte *)(param_1 + uVar4);
    if (0xbf < bVar2) break;
    if (0x3f < bVar2) {
      return 0;
    }
    if (bVar2 == 0) goto LAB_10007bcc;
    uVar4 = uVar5 + bVar2;
    if (param_2 < uVar4) {
      return 0;
    }
    bVar1 = 0x7f < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) {
      return 0;
    }
  }
  if (param_2 <= uVar5) {
    return 0;
  }
  uVar5 = uVar4 + 2;
LAB_10007bcc:
  *param_3 = uVar5;
  return 1;
}


#undef str_10010001
#define str_10010001 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x83dU)))
#undef str_10010015
#define str_10010015 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x851U)))
#undef str_1001001f
#define str_1001001f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85bU)))
#undef str_10010033
#define str_10010033 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86fU)))
#define bStack_875 (*(byte *)(frame + 27))
#define uStack_874 (*(uint *)(frame + 28))
#define uStack_870 (*(undefined8 *)(frame + 32))
#define auStack_868 (*(undefined1 (*)[2056])(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007be0
 */

undefined8
recovered_10007be0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,void *param_5,
                  char *param_6,ulong param_7)

{
  unsigned char frame[2224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 uVar6;
  char *format;
  int iVar7;

  if (((param_1 != (long *)0x0) && (param_2 != 0)) && (param_5 != (void *)0x0)) {
    memset(param_1,0,0x4028);
    *param_1 = param_2;
    *(int *)(param_1 + 1) = (int)param_3;
    *(short *)((long)param_1 + 0xc) = (short)param_4;
    memcpy(param_1 + 3,param_5,6);
    uVar2 = 0x474c;
    if (*(ushort *)(param_2 + 0x24) != 0) {
      uVar2 = (uint)*(ushort *)(param_2 + 0x24);
    }
    uVar1 = uVar2 + 2;
    if ((uVar2 + 1 & 0x10000) == 0) {
      uVar1 = uVar2 + 1;
    }
    *(short *)(param_2 + 0x24) = (short)uVar1;
    *(short *)((long)param_1 + 0xe) = (short)(uVar1 | 0xffffc000);
    uVar2 = *(int *)(param_2 + 0x28) + 0x1fff;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar3 = 0x474c6142;
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar3 = uVar2;
    }
    *(uint *)(param_2 + 0x28) = uVar3;
    *(uint *)(param_1 + 2) = uVar3;
    bVar5 = recovered_10008278(param_2,(long)param_5,param_3,(ulong)((uVar1 | 0xffffc000) & 0xffff),
                               param_4,(ulong)uVar3,0,2,(void *)0x0,0);
    if (bVar5) {
      iVar7 = 0x1450;
      do {
        uStack_870 = 0;
        uStack_874 = 0;
        bStack_875 = 0;
        uVar6 = recovered_10007adc(auStack_868,(uint *)((long)&uStack_870 + 4));
        if ((int)uVar6 != 0) {
          uVar4 = *(ushort *)((long)param_1 + 0xe);
          uVar6 = recovered_10008488(param_2,(long)auStack_868,PF_PART4(uStack_870, 4),(int)param_3,
                                     (uint)uVar4,(uint)param_4,(undefined4 *)&uStack_870,&uStack_874
                                     ,&bStack_875,(long *)0x0,(short *)0x0);
          if ((int)uVar6 != 0) {
            if ((bStack_875 >> 2 & 1) != 0) {
              format = str_10010015;
              goto LAB_10007d44;
            }
            if ((((bStack_875 ^ 0xff) & 0x12) == 0) && (uStack_874 == (int)param_1[2] + 1U)) {
              *(uint *)(param_1 + 2) = uStack_874;
              *(uint *)((long)param_1 + 0x14) = (int)uStack_870 + 1U;
              bVar5 = recovered_10008278(param_2,(long)param_5,param_3,(ulong)uVar4,param_4,
                                         (ulong)uStack_874,(ulong)((int)uStack_870 + 1U),0x10,
                                         (void *)0x0,0);
              if (bVar5) {
                *(undefined1 *)((long)param_1 + 0x4022) = 1;
                return 1;
              }
              format = str_10010033;
              goto LAB_10007d44;
            }
          }
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      format = str_1001001f;
    }
    else {
      format = str_10010001;
    }
LAB_10007d44:
    pf_varargs_1000f7f4_0(param_6,param_7,format);
  }
  return 0;
}

#undef str_10010001
#undef str_10010015
#undef str_1001001f
#undef str_10010033
#undef bStack_875
#undef uStack_874
#undef uStack_870
#undef auStack_868

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007db0
 */

bool recovered_10007db0(long param_1,long param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  ushort uVar2;
  ulong n;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  bool bVar6;
  ulong uVar7;

  if (((param_1 == 0) || (puVar5 = *(undefined8 **)(param_1 + 8), puVar5 == (undefined8 *)0x0)) ||
     ((param_2 == 0 && (param_3 != 0)))) {
    bVar6 = false;
  }
  else {
    uVar7 = 0;
    while( true ) {
      n = param_3 - uVar7;
      bVar6 = param_3 < uVar7 || n == 0;
      if (param_3 < uVar7 || n == 0) break;
      uVar1 = *(ushort *)((long)puVar5 + 0x401e);
      uVar2 = *(ushort *)(puVar5 + 0x804);
      if (uVar2 <= uVar1) {
        bVar3 = recovered_10008608(puVar5,param_4,param_5);
        if (!bVar3) {
          return bVar6;
        }
        uVar2 = *(ushort *)(puVar5 + 0x804);
        uVar1 = *(ushort *)((long)puVar5 + 0x401e);
      }
      uVar4 = (ulong)uVar2 - (ulong)uVar1;
      if (uVar4 <= n) {
        n = uVar4;
      }
      memcpy((void *)(param_2 + uVar7),(void *)((long)puVar5 + (ulong)uVar1 + 0x1e),n);
      *(short *)((long)puVar5 + 0x401e) = *(short *)((long)puVar5 + 0x401e) + (short)n;
      uVar7 = n + uVar7;
    }
  }
  return bVar6;
}


#undef str_10010071
#define str_10010071 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8adU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e64
 */

undefined8 recovered_10007e64(long param_1,void *param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;

  if ((param_1 == 0) || (plVar3 = *(long **)(param_1 + 8), plVar3 == (long *)0x0)) {
    return 0;
  }
  uVar4 = 0;
  if (plVar3 != (long *)0x0) {
    if ((*(char *)((long)plVar3 + 0x4022) == '\x01') && ((param_2 != (void *)0x0 || (param_3 == 0)))
       ) {
      for (; param_3 != 0; param_3 = param_3 - uVar1) {
        uVar1 = param_3;
        if (0x5b3 < param_3) {
          uVar1 = 0x5b4;
        }
        bVar2 = recovered_10008278(*plVar3,(long)(plVar3 + 3),(ulong)*(uint *)(plVar3 + 1),
                                   (ulong)*(ushort *)((long)plVar3 + 0xe),
                                   (ulong)*(ushort *)((long)plVar3 + 0xc),
                                   (ulong)*(uint *)(plVar3 + 2),
                                   (ulong)*(uint *)((long)plVar3 + 0x14),0x18,param_2,(ushort)uVar1)
        ;
        if (!bVar2) {
          pf_varargs_1000f7f4_0(param_4,param_5,str_10010071);
          goto LAB_10008914;
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2] + (int)uVar1;
        param_2 = (void *)((long)param_2 + uVar1);
        recovered_10001994();
      }
      uVar4 = 1;
    }
    else {
LAB_10008914:
      uVar4 = 0;
    }
  }
  return uVar4;
}

#undef str_10010071

#define auStack_58 (*(undefined1 (*)[8])(frame + 24))
#define uStack_50 (*(uint *)(frame + 32))
#define iStack_4c (*(int *)(frame + 36))
#define iStack_48 (*(int *)(frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e78
 */

bool recovered_10007e78(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;

  if (param_1 == (long *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *param_1;
  }
  bVar2 = param_3 == 0;
  if (param_2 != (undefined1 *)0x0 || bVar2) {
    uVar6 = 0x474c5343;
    memset(auStack_58,0,0x18);
    bVar3 = recovered_100019c8(0x168);
    if (bVar3) {
      uVar4 = UINT_82010968;
      if ((uVar4 != 0) && (uVar4 = (*(code *)(ulong)uVar4)(auStack_58), uVar4 != 0)) {
        uVar6 = uStack_50 ^ iStack_4c * 0x3c6ef35f ^ iStack_48 * 0x19660d ^ 0x474c5343U;
      }
    }
    if (lVar5 != 0) {
      uVar6 = *(int *)(lVar5 + 0x205c4c) * 0x19660d ^ *(int *)(lVar5 + 0x205c50) * 0x3c6ef35f ^
              *(uint *)(lVar5 + 0x205c7c) ^ *(uint *)(lVar5 + 0x205c5c) ^
              ((uint)*(byte *)(lVar5 + 0x205c56) << 0x18 | (uint)*(byte *)(lVar5 + 0x205c57) << 0x10
               | (uint)*(byte *)(lVar5 + 0x205c5a) << 8 | (uint)*(byte *)(lVar5 + 0x205c5b)) ^ uVar6
      ;
    }
    uVar4 = 0;
    puVar1 = param_2;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar6 = uVar6 ^ uVar6 << 0xd;
      uVar6 = uVar6 ^ uVar6 >> 0x11;
      uVar6 = uVar6 ^ uVar6 << 5;
      *puVar1 = (char)(uVar6 >> (ulong)(uVar4 & 0x18));
      uVar4 = uVar4 + 8;
      puVar1 = puVar1 + 1;
    }
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x205c7c) = *(uint *)(lVar5 + 0x205c7c) ^ uVar6;
    }
  }
  return param_2 != (undefined1 *)0x0 || bVar2;
}

#undef auStack_58
#undef uStack_50
#undef iStack_4c
#undef iStack_48

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_100100bd
#define DAT_100100bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8f9U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x944U)))
#undef str_10010081
#define str_10010081 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8bdU)))
#undef str_10010099
#define str_10010099 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d5U)))
#undef str_100100c2
#define str_100100c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8feU)))
#undef str_100100c9
#define str_100100c9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x905U)))
#undef str_100100dc
#define str_100100dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x918U)))
#undef str_10010100
#define str_10010100 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93cU)))
#define acStack_251 (*(char (*)[256])(frame + 47))
#define in_stack_fffffffffffffd90 (*(byte * *)(frame + 16))
#define local_151 (*(char (*)[192])(frame + 303))
#define local_91 (*(byte (*)[65])(frame + 495))
#define uStack_260 (*(uint *)(frame + 32))
#define uStack_25c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fcc
 */

bool recovered_10007fcc(long param_1,byte *param_2,byte *param_3,int param_4,char *param_5,
                       ulong param_6)

{
  unsigned char frame[672] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  byte bVar11;

  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    if ((param_3 == (byte *)0x0) || (param_4 == 0)) {
      pcVar9 = str_10010081;
    }
    else {
      for (lVar6 = 0; lVar6 != 0x40; lVar6 = lVar6 + 2) {
        bVar1 = *param_3;
        local_91[lVar6] = str_100100dc[bVar1 >> 4];
        local_91[lVar6 + 1] = str_100100dc[(ulong)bVar1 & 0xf];
        param_3 = param_3 + 1;
      }
      local_91[0x40] = 0;
      local_151[0] = '\0';
      recovered_10004bd4(local_151,0xc0,((uintptr_t)pf_module_state + 0x929U));
      if ((param_2 == (byte *)0x0) || (bVar1 = *param_2, bVar1 == 0)) {
        pcVar9 = str_10010100;
      }
      else {
        pcVar9 = &DAT_10010108;
        pbVar10 = param_2;
        while (pbVar10 = pbVar10 + 1, bVar1 != 0) {
          bVar11 = bVar1;
          if (1 < (byte)(bVar1 - 0x2d) && 9 < (byte)(bVar1 - 0x30U)) {
            bVar11 = 0x5f;
          }
          if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
            bVar1 = bVar11;
          }
          recovered_100054a4(local_151,0xc0,bVar1);
          bVar1 = *pbVar10;
        }
      }
      recovered_10004bd4(local_151,0xc0,(long)pcVar9);
      memset(&uStack_260,0,0xc);
      uVar4 = recovered_10001b5c(local_151,&uStack_260);
      if ((((int)uVar4 == 0) || (uStack_260 == 0)) || (uStack_25c == 0)) {
        recovered_10008934(str_100100c2);
        pbVar10 = &DAT_1000fb37;
        if (param_2 != (byte *)0x0) {
          pbVar10 = param_2;
        }
        pf_varargs_1000f7f4_2(acStack_251,0x100,str_100100c9,(ulonglong)pbVar10,(ulonglong)local_91)
        ;
        uVar5 = strlen(acStack_251);
        uVar3 = recovered_10008970(local_151,acStack_251,(uint)uVar5);
        return uVar3 != 0;
      }
      if (0x3f < uStack_25c) {
        for (uVar3 = 0; uVar3 + 0x40 <= uStack_25c; uVar3 = uVar3 + 1) {
          lVar6 = 0x40;
          pbVar10 = local_91;
          uVar7 = uVar3;
          do {
            if (lVar6 == 0) goto LAB_10008000;
            bVar1 = *(byte *)((ulong)uStack_260 + (ulong)uVar7);
            uVar8 = bVar1 | 0x20;
            if (0x19 < bVar1 - 0x41U) {
              uVar8 = (uint)bVar1;
            }
            bVar1 = *pbVar10;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + -1;
            pbVar10 = pbVar10 + 1;
          } while (uVar8 == bVar1);
        }
      }
      in_stack_fffffffffffffd90 = &DAT_100100bd;
      if (param_2 != (byte *)0x0) {
        in_stack_fffffffffffffd90 = param_2;
      }
      pcVar9 = str_10010099;
    }
    pf_varargs_1000f7f4_1(param_5,param_6,pcVar9,(ulonglong)in_stack_fffffffffffffd90);
    bVar2 = false;
  }
  else {
LAB_10008000:
    bVar2 = true;
  }
  return bVar2;
}

#undef DAT_1000fb37
#undef DAT_100100bd
#undef DAT_10010108
#undef str_10010081
#undef str_10010099
#undef str_100100c2
#undef str_100100c9
#undef str_100100dc
#undef str_10010100
#undef acStack_251
#undef in_stack_fffffffffffffd90
#undef local_151
#undef local_91
#undef uStack_260
#undef uStack_25c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000820c
 */

long * recovered_1000820c(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long *plVar2;

  plVar2 = param_1;
  if ((param_1 != (long *)0x0) && (*(char *)((long)param_1 + 0x4022) == '\x01')) {
    bVar1 = recovered_10008278(*param_1,(long)(param_1 + 3),(ulong)*(uint *)(param_1 + 1),
                               (ulong)*(ushort *)((long)param_1 + 0xe),
                               (ulong)*(ushort *)((long)param_1 + 0xc),(ulong)*(uint *)(param_1 + 2)
                               ,(ulong)*(uint *)((long)param_1 + 0x14),0x11,(void *)0x0,0);
    plVar2 = (long *)(ulong)bVar1;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(undefined1 *)((long)param_1 + 0x4022) = 0;
  }
  return plVar2;
}


#undef DAT_1000fab0
#define DAT_1000fab0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ecU)))
#define uStack_72 (*(undefined1 *)(frame + 2078))
#define uStack_71 (*(undefined1 *)(frame + 2079))
#define uStack_70 (*(undefined1 *)(frame + 2080))
#define uStack_6f (*(undefined1 *)(frame + 2081))
#define uStack_6e (*(undefined1 *)(frame + 2082))
#define uStack_6d (*(undefined1 *)(frame + 2083))
#define uStack_6c (*(undefined2 *)(frame + 2084))
#define uStack_6a (*(undefined1 *)(frame + 2086))
#define uStack_69 (*(undefined1 *)(frame + 2087))
#define auStack_874 (*(undefined1 (*)[14])(frame + 28))
#define auStack_866 (*(ushort (*)[10])(frame + 42))
#define uStack_852 (*(undefined2 *)(frame + 62))
#define uStack_850 (*(undefined1 *)(frame + 64))
#define uStack_84f (*(undefined1 *)(frame + 65))
#define uStack_84e (*(undefined1 *)(frame + 66))
#define uStack_84d (*(undefined1 *)(frame + 67))
#define uStack_84c (*(undefined1 *)(frame + 68))
#define uStack_84b (*(undefined1 *)(frame + 69))
#define uStack_84a (*(undefined1 *)(frame + 70))
#define uStack_849 (*(undefined1 *)(frame + 71))
#define uStack_848 (*(undefined1 *)(frame + 72))
#define uStack_847 (*(undefined1 *)(frame + 73))
#define uStack_846 (*(undefined1 *)(frame + 74))
#define uStack_845 (*(undefined1 *)(frame + 75))
#define uStack_844 (*(undefined2 *)(frame + 76))
#define uStack_842 (*(ushort *)(frame + 78))
#define uStack_83e (*(undefined4 *)(frame + 82))
#define uStack_74 (*(undefined1 *)(frame + 2076))
#define uStack_73 (*(undefined1 *)(frame + 2077))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008278
 */

bool recovered_10008278(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                       void *param_9,ushort param_10)

{
  unsigned char frame[2224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;

  bVar6 = false;
  uVar7 = 0x14;
  if ((param_8 & 2) != 0) {
    uVar7 = 0x18;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    bVar6 = false;
    if (param_10 == 0 || param_9 != (void *)0x0) {
      uVar2 = uVar7 + param_10;
      uVar3 = uVar2 + 0x14 & 0xffff;
      if (uVar3 < 0x7f3) {
        recovered_10007948(auStack_874,(void *)param_2,(void *)(param_1 + 2),0x800);
        uVar4 = 0x4700;
        if (*(ushort *)(param_1 + 0x20) != 0) {
          uVar4 = (uint)*(ushort *)(param_1 + 0x20);
        }
        uVar1 = uVar4 + 2;
        if ((uVar4 + 1 & 0x10000) == 0) {
          uVar1 = uVar4 + 1;
        }
        *(short *)(param_1 + 0x20) = (short)uVar1;
        recovered_10007984(auStack_866,(ulong)uVar3,(ulong)(uVar1 & 0xffff),6,
                           (ulong)*(uint *)(param_1 + 8),param_3);
        memset(&uStack_852,0,(ulong)uVar2 & 0xffff);
        PF_PART1(uStack_852, 0) = (undefined1)((ulong)param_4 >> 8);
        PF_PART1(uStack_852, 1) = (undefined1)param_4;
        uStack_850 = (undefined1)((ulong)param_5 >> 8);
        uStack_84f = (undefined1)param_5;
        uStack_84e = (undefined1)((ulong)param_6 >> 0x18);
        uStack_84d = (undefined1)((ulong)param_6 >> 0x10);
        uStack_84c = (undefined1)((ulong)param_6 >> 8);
        uStack_84b = (undefined1)param_6;
        uStack_84a = (undefined1)((ulong)param_7 >> 0x18);
        uStack_849 = (undefined1)((ulong)param_7 >> 0x10);
        uStack_848 = (undefined1)((ulong)param_7 >> 8);
        uStack_847 = (undefined1)param_7;
        uStack_846 = (undefined1)(uVar7 << 2);
        uStack_845 = (undefined1)param_8;
        uStack_844 = 0x40;
        if ((param_8 >> 1 & 1) != 0) {
          uStack_83e = (undefined4)DAT_1000fab0;
        }
        if (param_10 != 0) {
          memcpy((void *)((long)&uStack_852 + (ulong)uVar7),param_9,(ulong)param_10);
        }
        uVar5 = *(undefined4 *)(param_1 + 8);
        uStack_74 = (undefined1)((uint)uVar5 >> 0x18);
        uStack_73 = (undefined1)((uint)uVar5 >> 0x10);
        uStack_72 = (undefined1)((uint)uVar5 >> 8);
        uStack_71 = (undefined1)uVar5;
        uStack_70 = (undefined1)((ulong)param_3 >> 0x18);
        uStack_6f = (undefined1)((ulong)param_3 >> 0x10);
        uStack_6e = (undefined1)((ulong)param_3 >> 8);
        uStack_6d = (undefined1)param_3;
        uStack_6c = 0x600;
        uStack_6a = (undefined1)(uVar2 >> 8);
        uStack_69 = (undefined1)uVar2;
        uVar8 = recovered_10007ab0(0,(ushort *)&uStack_74,0xc);
        uVar8 = recovered_10007ab0(uVar8,&uStack_852,(ulong)uVar2 & 0xffff);
        uVar7 = recovered_10007a90((uint)uVar8);
        uStack_842 = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
        uVar7 = recovered_10007a40(auStack_874,(uVar2 + 0x14 & 0xffff) + 0xe);
        bVar6 = uVar7 != 0;
      }
    }
  }
  return bVar6;
}

#undef DAT_1000fab0
#undef uStack_72
#undef uStack_71
#undef uStack_70
#undef uStack_6f
#undef uStack_6e
#undef uStack_6d
#undef uStack_6c
#undef uStack_6a
#undef uStack_69
#undef auStack_874
#undef auStack_866
#undef uStack_852
#undef uStack_850
#undef uStack_84f
#undef uStack_84e
#undef uStack_84d
#undef uStack_84c
#undef uStack_84b
#undef uStack_84a
#undef uStack_849
#undef uStack_848
#undef uStack_847
#undef uStack_846
#undef uStack_845
#undef uStack_844
#undef uStack_842
#undef uStack_83e
#undef uStack_74
#undef uStack_73

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008488
 */

undefined8
recovered_10008488(long param_1,long param_2,uint param_3,int param_4,uint param_5,uint param_6,
                  undefined4 *param_7,undefined4 *param_8,byte *param_9,long *param_10,
                  short *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;

  if (param_10 != (long *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (short *)0x0) {
    *param_11 = 0;
  }
  if ((((param_1 != 0) && (param_2 != 0)) && (0x35 < param_3)) &&
     ((ushort)(*(ushort *)(param_2 + 0xc) >> 8 | *(ushort *)(param_2 + 0xc) << 8) == 0x800)) {
    uVar4 = (uint)*(byte *)(param_2 + 0xe);
    if ((((uVar4 & 0xf0) == 0x40) && (*(char *)(param_2 + 0x17) == '\x06')) &&
       ((uVar3 = recovered_10007b58((uint *)(param_2 + 0x1a)), uVar3 == param_4 &&
        (uVar3 = recovered_10007b58((uint *)(param_2 + 0x1e)), uVar3 == *(uint *)(param_1 + 8))))) {
      uVar4 = uVar4 & 0x3f;
      uVar2 = uVar4 * 4;
      uVar3 = (uint)(*(ushort *)(param_2 + 0x10) >> 8) |
              (*(ushort *)(param_2 + 0x10) & 0xff00ff) << 8;
      if ((((0x13 < uVar2 && uVar2 + 0x14 <= uVar3) && uVar3 + 0xe <= param_3) &&
          (puVar1 = (ushort *)((byte *)(param_2 + 0xe) + uVar2),
          param_6 == ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8))) &&
         (param_5 == ((uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8))) {
        uVar5 = (ulong)(byte)((byte)puVar1[6] >> 2) & 0x3c;
        uVar3 = uVar3 + uVar4 * -4;
        if (0x4f < (byte)puVar1[6] && (uint)uVar5 <= uVar3) {
          if (param_7 != (undefined4 *)0x0) {
            uVar4 = recovered_10007b58((uint *)(puVar1 + 2));
            *param_7 = uVar4;
          }
          if (param_8 != (undefined4 *)0x0) {
            uVar4 = recovered_10007b58((uint *)(puVar1 + 4));
            *param_8 = uVar4;
          }
          if (param_9 != (byte *)0x0) {
            *param_9 = *(byte *)((long)puVar1 + 0xd);
          }
          if (param_10 != (long *)0x0) {
            *param_10 = (long)((long)puVar1 + uVar5);
          }
          if (param_11 != (short *)0x0) {
            *param_11 = (short)uVar3 - (short)uVar5;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


#undef str_10010015
#define str_10010015 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x851U)))
#undef str_10010047
#define str_10010047 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x883U)))
#undef str_1001005d
#define str_1001005d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x899U)))
#define uStack_882 (*(ushort *)(frame + 30))
#define pvStack_880 (*(void * *)(frame + 32))
#define bStack_875 (*(byte *)(frame + 43))
#define uStack_874 (*(undefined4 *)(frame + 44))
#define uStack_870 (*(undefined8 *)(frame + 48))
#define auStack_868 (*(undefined1 (*)[2056])(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008608
 */

bool recovered_10008608(undefined8 *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[2240] __attribute__((aligned(16))) = {0};

  int iVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *format;
  bool bVar5;
  bool bVar6;
  int iVar7;

  if ((param_1 == (undefined8 *)0x0) || (*(char *)((long)param_1 + 0x4022) != '\x01')) {
LAB_10008798:
    bVar5 = false;
  }
  else {
    if (*(ushort *)(param_1 + 0x804) <= *(ushort *)((long)param_1 + 0x401e)) {
      bVar5 = false;
      bVar6 = false;
      *(undefined4 *)((long)param_1 + 0x401e) = 0;
      iVar7 = 0x1450;
      do {
        uStack_870 = 0;
        uStack_874 = 0;
        bStack_875 = 0;
        pvStack_880 = (void *)0x0;
        uStack_882 = 0;
        uVar3 = recovered_10007adc(auStack_868,(uint *)((long)&uStack_870 + 4));
        if ((uVar3 & 1) == 0) {
          if (bVar5) goto LAB_10008778;
          bVar5 = false;
        }
        else {
          uVar4 = recovered_10008488(*param_1,(long)auStack_868,PF_PART4(uStack_870, 4),
                                     *(int *)(param_1 + 1),(uint)*(ushort *)((long)param_1 + 0xe),
                                     (uint)*(ushort *)((long)param_1 + 0xc),
                                     (undefined4 *)&uStack_870,&uStack_874,&bStack_875,
                                     (long *)&pvStack_880,(short *)&uStack_882);
          if ((int)uVar4 != 0) {
            if ((bStack_875 >> 2 & 1) != 0) {
              pf_varargs_1000f7f4_0(param_2,param_3,str_10010015);
              *(undefined1 *)((long)param_1 + 0x4022) = 0;
              return false;
            }
            uVar3 = (ulong)uStack_882;
            if (uVar3 != 0) {
              if ((uint)uStack_870 == *(uint *)((long)param_1 + 0x14)) {
                if (uVar3 <= 0x4000 - (ulong)*(ushort *)(param_1 + 0x804)) {
                  memcpy((void *)((long)param_1 +
                                             (ulong)*(ushort *)(param_1 + 0x804) + 0x1e),pvStack_880
                                     ,uVar3);
                  sVar2 = *(short *)(param_1 + 0x804);
                  *(ushort *)(param_1 + 0x804) = uStack_882 + sVar2;
                  iVar1 = *(int *)((long)param_1 + 0x14) + (uint)uStack_882;
                  *(int *)((long)param_1 + 0x14) = iVar1;
                  if ((bStack_875 & 1) != 0) {
                    *(int *)((long)param_1 + 0x14) = iVar1 + 1;
                    bVar5 = true;
                    *(undefined1 *)((long)param_1 + 0x4023) = 1;
                    goto LAB_10008808;
                  }
                  if (0x5b3 < (ulong)(ushort)(uStack_882 + sVar2) - 0x3a4d) {
                    bVar5 = true;
                    bVar6 = true;
                    goto LAB_1000876c;
                  }
                  goto LAB_1000877c;
                }
                format = str_10010047;
                goto LAB_10008790;
              }
              if ((uint)uStack_870 < *(uint *)((long)param_1 + 0x14)) {
                recovered_10008810(param_1);
              }
            }
            if ((bStack_875 & 1) != 0) {
              if ((uint)uStack_870 == *(int *)((long)param_1 + 0x14)) {
                *(uint *)((long)param_1 + 0x14) = (uint)uStack_870 + 1;
              }
              *(undefined1 *)((long)param_1 + 0x4023) = 1;
LAB_10008808:
              recovered_10008810(param_1);
              return bVar5;
            }
          }
        }
LAB_1000876c:
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (bVar5 == false) {
        format = str_1001005d;
LAB_10008790:
        pf_varargs_1000f7f4_0(param_2,param_3,format);
        goto LAB_10008798;
      }
LAB_10008778:
      if (bVar6) {
LAB_1000877c:
        recovered_10008810(param_1);
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

#undef str_10010015
#undef str_10010047
#undef str_1001005d
#undef uStack_882
#undef pvStack_880
#undef bStack_875
#undef uStack_874
#undef uStack_870
#undef auStack_868

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008810
 */

void recovered_10008810(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (*(char *)((long)param_1 + 0x4022) == '\x01') {
    recovered_10008278(*param_1,(long)(param_1 + 3),(ulong)*(uint *)(param_1 + 1),
                       (ulong)*(ushort *)((long)param_1 + 0xe),
                       (ulong)*(ushort *)((long)param_1 + 0xc),(ulong)*(uint *)(param_1 + 2),
                       (ulong)*(uint *)((long)param_1 + 0x14),0x10,(void *)0x0,0);
  }
  return;
}


#undef str_10010071
#define str_10010071 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8adU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008860
 */

undefined8
recovered_10008860(undefined8 *param_1,long param_2,ulong param_3,char *param_4,ulong param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((*(char *)((long)param_1 + 0x4022) == '\x01') && ((param_2 != 0 || (param_3 == 0)))) {
      for (; param_3 != 0; param_3 = param_3 - uVar1) {
        uVar1 = param_3;
        if (0x5b3 < param_3) {
          uVar1 = 0x5b4;
        }
        bVar2 = recovered_10008278(*param_1,(long)(param_1 + 3),(ulong)*(uint *)(param_1 + 1),
                                   (ulong)*(ushort *)((long)param_1 + 0xe),
                                   (ulong)*(ushort *)((long)param_1 + 0xc),
                                   (ulong)*(uint *)(param_1 + 2),
                                   (ulong)*(uint *)((long)param_1 + 0x14),0x18,(void *)param_2,
                                   (ushort)uVar1);
        if (!bVar2) {
          pf_varargs_1000f7f4_0(param_4,param_5,str_10010071);
          goto LAB_10008914;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + (int)uVar1;
        param_2 = param_2 + uVar1;
        recovered_10001994();
      }
      uVar3 = 1;
    }
    else {
LAB_10008914:
      uVar3 = 0;
    }
  }
  return uVar3;
}

#undef str_10010071

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008934
 */

uint recovered_10008934(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(0x8c);
  if ((bVar1) && (uVar2 = UINT_8201088c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10026308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return uVar2;
  }
  return 0;
}


#undef UINT_82010838
#define UINT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008970
 */

uint recovered_10008970(char *param_1,void *param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(0x38);
  if ((bVar1) && (uVar2 = UINT_82010838, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100089bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100089cc
 */

undefined8 recovered_100089cc(char *param_1,char *param_2,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;

  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pcVar2 = param_1;
    while (pcVar2 = recovered_100052e0(pcVar2,param_2), pcVar2 != (char *)0x0) {
      if (pcVar2 == param_1) {
        uVar5 = strlen(param_2);
        pbVar6 = (byte *)(pcVar2 + uVar5);
LAB_10008a64:
        bVar1 = *pbVar6;
        if (((bVar1 < 0x2d && (1L << ((ulong)bVar1 & 0x3f) & 0x100100003600U) != 0) ||
            (bVar1 == 0x7b)) &&
           ((pcVar3 = strchr(pcVar2,0x7b), pcVar3 != (char *)0x0 &&
            (pcVar4 = strchr(pcVar3 + 1,0x7d), pcVar4 != (char *)0x0)))) {
          iVar7 = (int)pcVar4 + ~(uint)pcVar3;
          if (0x3fe < iVar7) {
            iVar7 = 0x3ff;
          }
          memcpy(param_3,pcVar3 + 1,(long)iVar7);
          param_3[iVar7] = 0;
          return 1;
        }
      }
      else {
        bVar1 = pcVar2[-1];
        uVar5 = strlen(param_2);
        pbVar6 = (byte *)(pcVar2 + uVar5);
        if ((bVar1 < 0x2d && (1L << ((ulong)bVar1 & 0x3f) & 0x100100003601U) != 0) ||
           (bVar1 == 0x7d)) goto LAB_10008a64;
      }
      pcVar2 = pcVar2 + 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008afc
 */

bool recovered_10008afc(long param_1,char *param_2,char *param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;

  if (param_2 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = strlen(param_2);
  }
  if ((((param_3 != (char *)0x0) && (*param_3 = '\0', param_1 != 0)) && (param_2 != (char *)0x0)) &&
     (uVar4 != 0)) {
    pcVar3 = (char *)param_1;
    while (pcVar3 = recovered_100052e0(pcVar3,param_2), pcVar3 != (char *)0x0) {
      if (pcVar3 == (char *)param_1) {
LAB_10008ba0:
        uVar6 = (ulong)(byte)pcVar3[uVar4];
        if ((byte)pcVar3[uVar4] < 0x3b && (1L << (uVar6 & 0x3f) & 0x400000100003600U) != 0) {
          pcVar5 = pcVar3 + uVar4 + 2;
          while ((uint)uVar6 < 0x3b) {
            if ((1L << (uVar6 & 0x3f) & 0x100003600U) == 0) {
              if (uVar6 == 0x3a) {
                for (; uVar4 = (ulong)(byte)pcVar5[-1],
                    (byte)pcVar5[-1] < 0x21 && (1L << (uVar4 & 0x3f) & 0x100003600U) != 0;
                    pcVar5 = pcVar5 + 1) {
                }
                uVar6 = 0;
                while (((iVar7 = (int)uVar4, iVar7 != 0 && (iVar7 != 0x3b)) &&
                       (iVar7 != 0x7d && uVar6 + 1 < param_4))) {
                  param_3[uVar6] = (char)uVar4;
                  uVar4 = (ulong)(byte)pcVar5[uVar6];
                  uVar6 = uVar6 + 1;
                }
                while ((uVar6 != 0 &&
                       ((byte)param_3[uVar6 - 1] < 0x21 &&
                        (1L << ((ulong)(byte)param_3[uVar6 - 1] & 0x3f) & 0x100003600U) != 0))) {
                  uVar6 = uVar6 - 1;
                }
                param_3[uVar6] = '\0';
                return *param_3 != '\0';
              }
              break;
            }
            pbVar1 = (byte *)(pcVar5 + -1);
            pcVar5 = pcVar5 + 1;
            uVar6 = (ulong)*pbVar1;
          }
        }
      }
      else {
        bVar2 = pcVar3[-1];
        if (((bVar2 & 0xbf) == 0x3b) ||
           (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003600U) != 0)) goto LAB_10008ba0;
      }
      pcVar3 = pcVar3 + 1;
    }
  }
  return false;
}


#undef str_1001028b
#define str_1001028b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xac7U)))
#undef str_10010291
#define str_10010291 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacdU)))
#define local_40 (*(uint (*)[7])(frame + 16))
#define bStack_24 (*(byte *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008ca0
 */

undefined8 recovered_10008ca0(byte *param_1,uint *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;

  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  for (; bVar1 = *param_1, bVar1 < 0x24; param_1 = param_1 + 1) {
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100003600U) == 0) {
      if ((ulong)bVar1 == 0x23) {
        lVar5 = 0;
        goto LAB_10008d00;
      }
      break;
    }
  }
  bVar2 = recovered_10004fc4(param_1,(byte *)str_1001028b);
  if (bVar2) {
    uVar4 = 0xff;
  }
  else {
    bVar2 = recovered_10004fc4(param_1,(byte *)str_10010291);
    if (!bVar2) {
      return (ulong)bVar2;
    }
    uVar4 = 0xffffffff;
  }
LAB_10008e28:
  *param_2 = uVar4;
  return 1;
LAB_10008d00:
  iVar3 = (int)lVar5;
  if (lVar5 == 8) goto LAB_10008dd4;
  bVar1 = param_1[lVar5 + 1];
  uVar4 = (int)(char)bVar1 - 0x30U;
  if (9 < uVar4) {
    iVar6 = (int)(char)bVar1;
    if ((int)(char)bVar1 - 0x61U < 6) {
      uVar4 = iVar6 - 0x57;
      goto joined_r0x10008d4c;
    }
    if (iVar6 - 0x41U < 6) {
      uVar4 = iVar6 - 0x37;
      goto joined_r0x10008d4c;
    }
LAB_10008d50:
    if (iVar3 - 3U < 2) {
      uVar4 = local_40[3] * 0x11 & 0xff;
      if (lVar5 != 4) {
        uVar4 = 0xff;
      }
      uVar4 = uVar4 | local_40[0] * 0x11000000 | local_40[1] * 0x110000 & 0xff0000 |
                      local_40[2] * 0x1100 & 0xff00;
      goto LAB_10008e28;
    }
    if (iVar3 != 8 && iVar3 != 6) {
      return 0;
    }
    goto LAB_10008dd4;
  }
joined_r0x10008d4c:
  if ((int)uVar4 < 0) goto LAB_10008d50;
  local_40[lVar5] = uVar4;
  lVar5 = lVar5 + 1;
  goto LAB_10008d00;
LAB_10008dd4:
  uVar4 = (local_40[6] & 0xf) << 4 | (uint)bStack_24;
  if (iVar3 != 8) {
    uVar4 = 0xff;
  }
  uVar4 = local_40[1] << 0x18 | local_40[0] << 0x1c |
          (local_40[3] << 0x10 | local_40[2] << 0x14) & 0xff0000 |
          (local_40[5] << 8 | local_40[4] << 0xc) & 0xff00 | uVar4;
  goto LAB_10008e28;
}

#undef str_1001028b
#undef str_10010291
#undef local_40
#undef bStack_24

#undef DAT_100102c1
#define DAT_100102c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafdU)))
#undef DAT_10010445
#define DAT_10010445 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc81U)))
#undef DAT_1001044f
#define DAT_1001044f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc8bU)))
#undef DAT_10010470
#define DAT_10010470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcacU)))
#undef str_100102c5
#define str_100102c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb01U)))
#undef str_10010447
#define str_10010447 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc83U)))
#undef str_10010454
#define str_10010454 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc90U)))
#undef str_1001045c
#define str_1001045c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc98U)))
#undef str_10010462
#define str_10010462 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9eU)))
#undef str_10010469
#define str_10010469 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca5U)))
#undef str_10010474
#define str_10010474 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb0U)))
#undef str_1001047b
#define str_1001047b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcb7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008e40
 */

bool recovered_10008e40(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;

  bVar4 = recovered_10004d9c(param_1,&DAT_10010445);
  if ((((((bVar4) || (bVar4 = recovered_10004d9c(param_1,&DAT_100102c1), bVar4)) ||
        (bVar4 = recovered_10004d9c(param_1,(byte *)str_10010447), bVar4)) ||
       ((bVar4 = recovered_10004d9c(param_1,&DAT_1001044f), bVar4 ||
        (bVar4 = recovered_10004d9c(param_1,(byte *)str_10010454), bVar4)))) ||
      ((bVar4 = recovered_10004d9c(param_1,(byte *)str_1001045c), bVar4 ||
       ((bVar4 = recovered_10004d9c(param_1,(byte *)str_10010462), bVar4 ||
        (bVar4 = recovered_10004d9c(param_1,(byte *)str_10010469), bVar4)))))) ||
     ((bVar4 = recovered_10004d9c(param_1,&DAT_10010470), bVar4 ||
      ((bVar4 = recovered_10004d9c(param_1,(byte *)str_10010474), bVar4 ||
       (bVar4 = recovered_10004d9c(param_1,(byte *)str_1001047b), bVar4)))))) {
    return true;
  }
  pcVar5 = str_100102c5;
  bVar4 = false;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      bVar2 = *param_1;
      bVar3 = *pcVar5;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      if (bVar1 != bVar2) {
        return false;
      }
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}

#undef DAT_100102c1
#undef DAT_10010445
#undef DAT_1001044f
#undef DAT_10010470
#undef str_100102c5
#undef str_10010447
#undef str_10010454
#undef str_1001045c
#undef str_10010462
#undef str_10010469
#undef str_10010474
#undef str_1001047b

#define uStack_3c0 (*(undefined4 *)(frame + 16))
#define uStack_3bc (*(undefined8 *)(frame + 20))
#define uStack_3b4 (*(undefined8 *)(frame + 28))
#define uStack_6c (*(undefined4 *)(frame + 868))
#define uStack_60 (*(undefined4 *)(frame + 880))
#define uStack_5c (*(undefined4 *)(frame + 884))
#define uStack_58 (*(undefined4 *)(frame + 888))
#define uStack_54 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f1c
 */

void recovered_10008f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  unsigned char frame[1008] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;

  bVar2 = true;
  bVar3 = false;
  if (0 < (int)param_3) {
    iVar4 = (int)((ulong)param_3 >> 0x20);
    bVar3 = SBORROW4(iVar4,1);
    bVar2 = iVar4 + -1 < 0;
  }
  if (bVar2 == bVar3) {
    memset(&uStack_3c0,0,0x370);
    uStack_3c0 = 7;
    uStack_6c = 0xffffffff;
    uVar1 = *(uint *)(param_1 + 0x52c40);
    if (uVar1 < 0x180) {
      *(uint *)(param_1 + 0x52c40) = uVar1 + 1;
      uStack_3bc = param_2;
      uStack_3b4 = param_3;
      uStack_60 = param_4;
      uStack_5c = param_5;
      uStack_58 = param_6;
      uStack_54 = param_7;
      memcpy((void *)(param_1 + (ulong)uVar1 * 0x370 + 0x440),&uStack_3c0,0x370);
    }
  }
  return;
}

#undef uStack_3c0
#undef uStack_3bc
#undef uStack_3b4
#undef uStack_6c
#undef uStack_60
#undef uStack_5c
#undef uStack_58
#undef uStack_54

#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_10010486
#define str_10010486 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc2U)))
#undef str_100104ae
#define str_100104ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceaU)))
#define abStackY_79 (*(byte (*)[9])(frame + 23))
#define acStack_60 (*(char (*)[15])(frame + 48))
#define bStack_51 (*(byte *)(frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008fbc
 */

byte * recovered_10008fbc(long param_1,byte *param_2)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  byte *s;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;

  pbVar5 = (byte *)(param_1 + 1);
  if (((param_2 == (byte *)0x0) || (*param_2 == 0)) || (bVar1 = recovered_1000a390(param_2), bVar1))
  {
    return pbVar5;
  }
  bVar1 = recovered_10004d9c(param_2,(byte *)str_1000fc10);
  if (((bVar1) || (bVar1 = recovered_10004d9c(param_2,(byte *)str_1000fc01), bVar1)) ||
     (bVar1 = recovered_10004d9c(param_2,(byte *)str_10010486), bVar1)) {
    if (((param_2 == (byte *)0x0) || (*param_2 == 0)) ||
       (bVar1 = recovered_1000a390(param_2), bVar1)) {
      pbVar5 = (byte *)(param_1 + 1);
    }
    else {
      pf_varargs_1000f7f4_1(acStack_60,0x40,str_100104ae,(ulonglong)param_2);
      pbVar5 = (byte *)(param_1 + 1);
      pcVar2 = recovered_100052e0((char *)pbVar5,acStack_60);
      if (pcVar2 != (char *)0x0) {
        uVar4 = strlen(acStack_60);
        pbVar5 = (byte *)(pcVar2 + uVar4);
      }
    }
    return pbVar5;
  }
  iVar6 = 1;
  pbVar3 = pbVar5;
  while( true ) {
    if (pbVar3 == (byte *)0x0) {
      return pbVar5;
    }
    if (*pbVar3 == 0) {
      return pbVar5;
    }
    s = (byte *)strchr((char *)pbVar3,0x3c);
    if (s == (byte *)0x0) {
      return pbVar5;
    }
    pbVar3 = (byte *)strchr((char *)s,0x3e);
    bStack_51 = 0;
    if (pbVar3 == (byte *)0x0) break;
    recovered_1000a504((char *)s,(char *)pbVar3,abStackY_79,&bStack_51);
    if (((bStack_51 & 1) == 0) &&
       (((bVar1 = recovered_10004d9c(abStackY_79,(byte *)str_1000fc10), bVar1 ||
         (bVar1 = recovered_10004d9c(abStackY_79,(byte *)str_1000fc01), bVar1)) ||
        (bVar1 = recovered_10004d9c(abStackY_79,(byte *)str_10010486), bVar1)))) {
      pbVar3 = (byte *)recovered_1000a48c((long)pbVar3,(char *)abStackY_79);
    }
    else {
      uVar4 = recovered_1000a5a0((char *)s,(char *)pbVar3,(char *)param_2,&bStack_51);
      if ((int)uVar4 != 0) {
        if (bStack_51 == 1) {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            return pbVar3 + 1;
          }
        }
        else {
          bVar1 = recovered_1000a61c(s,pbVar3);
          iVar6 = iVar6 + (bVar1 ^ 1);
        }
      }
      pbVar3 = pbVar3 + 1;
    }
  }
  return pbVar5;
}

#undef str_1000fc01
#undef str_1000fc10
#undef str_10010486
#undef str_100104ae
#undef abStackY_79
#undef acStack_60
#undef bStack_51

#undef DAT_10010372
#define DAT_10010372 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaeU)))
#undef DAT_100104c0
#define DAT_100104c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcfcU)))
#undef DAT_100104cd
#define DAT_100104cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd09U)))
#undef DAT_100104dd
#define DAT_100104dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd19U)))
#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_10010303
#define str_10010303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_1001037b
#define str_1001037b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#undef str_100104b4
#define str_100104b4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcf0U)))
#define abStack_3e8 (*(byte (*)[16])(frame + 24))
#define cStack_3d8 (*(char *)(frame + 40))
#define abStack_3d7 (*(byte (*)[111])(frame + 41))
#define acStack_368 (*(char (*)[96])(frame + 152))
#define abStack_308 (*(byte (*)[160])(frame + 248))
#define acStack_268 (*(char (*)[520])(frame + 408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009144
 */

undefined8 recovered_10009144(long param_1,char *param_2,char *param_3)

{
  unsigned char frame[1056] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;

  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  bVar2 = recovered_1000a100(param_2,str_1001037b);
  if (!bVar2) {
    recovered_10004e00(param_2,str_100104b4,abStack_3e8,0x10);
    bVar2 = recovered_10004d9c(abStack_3e8,&DAT_100104c0);
    if ((!bVar2) &&
       ((recovered_10004e00(param_2,str_1000fc01,acStack_268,0x200), acStack_268[0] == '\0' ||
        ((uVar3 = recovered_1000a668((long)acStack_268,((uintptr_t)pf_module_state + 0xd01U),&DAT_100104cd), (uVar3 & 1) == 0
         && (uVar3 = recovered_1000a668((long)acStack_268,((uintptr_t)pf_module_state + 0xd0eU),(byte *)str_1001037b),
            (uVar3 & 1) == 0)))))) {
      if (param_1 != 0) {
        recovered_10004e00(param_2,str_10010303,abStack_308,0xa0);
        uVar3 = (uint)abStack_308[0];
        if ((abStack_308[0] != 0) && (pbVar5 = abStack_308, abStack_308[0] != 0)) {
LAB_10009250:
          do {
            if (uVar3 < 0x21) {
              if ((1L << ((ulong)uVar3 & 0x3f) & 0x100003600U) != 0) {
                pbVar5 = pbVar5 + 1;
                uVar3 = (uint)*pbVar5;
                goto LAB_10009250;
              }
              if ((ulong)uVar3 == 0) break;
            }
            cStack_3d8 = '.';
            for (lVar6 = 0; bVar1 = pbVar5[lVar6],
                0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100003601U) == 0; lVar6 = lVar6 + 1
                ) {
              if (lVar6 == 0x5e) {
                abStack_3d7[0x5e] = 0;
                goto LAB_100092c8;
              }
              abStack_3d7[lVar6] = bVar1;
            }
            abStack_3d7[lVar6] = 0;
            if (1 < lVar6 + 1U) {
LAB_100092c8:
              uVar4 = recovered_1000a734(param_1,(long)&cStack_3d8);
              if ((uVar4 & 1) != 0) {
                return 1;
              }
            }
            for (pbVar5 = pbVar5 + lVar6;
                0x20 < *pbVar5 || (1L << ((ulong)*pbVar5 & 0x3f) & 0x100003601U) == 0;
                pbVar5 = pbVar5 + 1) {
            }
            uVar3 = (uint)*pbVar5;
          } while (uVar3 != 0);
        }
        recovered_10004e00(param_2,&DAT_10010372,acStack_368,0x60);
        if (acStack_368[0] != '\0') {
          pf_varargs_1000f7f4_1(&cStack_3d8,0x70,&DAT_100104dd,(ulonglong)acStack_368);
          uVar4 = recovered_1000a734(param_1,(long)&cStack_3d8);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
        }
        if ((*param_3 != '\0') &&
           (uVar4 = recovered_1000a734(param_1,(long)param_3), (uVar4 & 1) != 0)) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

#undef DAT_10010372
#undef DAT_100104c0
#undef DAT_100104cd
#undef DAT_100104dd
#undef str_1000fc01
#undef str_10010303
#undef str_1001037b
#undef str_100104b4
#undef abStack_3e8
#undef cStack_3d8
#undef abStack_3d7
#undef acStack_368
#undef abStack_308
#undef acStack_268

#undef DAT_100180d0
#define DAT_100180d0 (*(int *)(((uintptr_t)pf_module_state + 0x890cU)))
#define auStack_388 (*(undefined1 (*)[95])(frame + 120))
#define uStack_329 (*(undefined1 *)(frame + 215))
#define acStack_328 (*(char (*)[192])(frame + 216))
#define bStack_268 (*(byte *)(frame + 408))
#define abStack_267 (*(byte (*)[519])(frame + 409))
#define auStack_3e8 (*(undefined1 (*)[96])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009368
 */

void recovered_10009368(long param_1,byte *param_2,int param_3,undefined *param_4,uint param_5,
                       int param_6,int *param_7)

{
  unsigned char frame[1056] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong n;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;

  if (param_7 == (int *)0x0) {
    iVar4 = DAT_100180d0 + -0x48;
  }
  else {
    iVar4 = param_7[1];
  }
  uVar5 = param_5;
  if ((int)param_5 < 2) {
    uVar5 = 1;
  }
  uVar7 = 0;
  if (uVar5 * 6 != 0) {
    uVar7 = iVar4 / (int)(uVar5 * 6);
  }
  if ((int)uVar7 < 9) {
    uVar7 = 8;
  }
  uVar6 = (ulong)uVar7;
  if ((param_2 != (byte *)0x0) && (param_7 != (int *)0x0)) {
    uVar3 = strlen((char *)param_2);
    recovered_10009a44(param_1,param_2,uVar3,(char *)&bStack_268,0x200);
    acStack_328[0] = '\0';
    for (pbVar8 = &bStack_268; bVar1 = *pbVar8, bVar1 != 0; pbVar8 = pbVar8 + uVar3) {
      while ((uVar5 = (uint)bVar1, uVar5 < 0x21 &&
             ((1L << ((ulong)uVar5 & 0x3f) & 0x100003600U) != 0))) {
        pbVar8 = pbVar8 + 1;
        bVar1 = *pbVar8;
      }
      uVar3 = 0;
      while( true ) {
        if ((uVar5 < 0x21) && ((1L << ((ulong)uVar5 & 0x3f) & 0x100003601U) != 0)) {
          auStack_388[uVar3] = 0;
          uVar9 = uVar3;
          if (uVar3 != 0) goto LAB_10009488;
          goto LAB_100095a4;
        }
        if (uVar3 == 0x5f) break;
        auStack_388[uVar3] = (char)uVar5;
        uVar5 = (uint)pbVar8[uVar3 + 1];
        uVar3 = uVar3 + 1;
      }
      uStack_329 = 0;
      uVar9 = 0x5f;
LAB_10009488:
      uVar2 = strlen(acStack_328);
      iVar4 = (int)uVar2 + (int)uVar9;
      if (acStack_328[0] != '\0') {
        iVar4 = iVar4 + 1;
      }
      if ((int)uVar7 < iVar4) {
        recovered_1000aebc(param_1,param_3,param_4,acStack_328,(ulong)param_5,param_6,param_7);
      }
      if (uVar6 < uVar9) {
        for (uVar2 = 0; n = uVar9 - uVar2, uVar2 <= uVar9 && n != 0; uVar2 = n + uVar2) {
          if (uVar6 <= n) {
            n = uVar6;
          }
          memcpy(auStack_3e8,auStack_388 + uVar2,n);
          auStack_3e8[n] = 0;
          recovered_1000aebc(param_1,param_3,param_4,acStack_328,(ulong)param_5,param_6,param_7);
          recovered_10001c8c(acStack_328,0xc0,(long)auStack_3e8);
          recovered_1000aebc(param_1,param_3,param_4,acStack_328,(ulong)param_5,param_6,param_7);
        }
      }
      else {
        if (acStack_328[0] != '\0') {
          recovered_100054a4(acStack_328,0xc0,' ');
        }
        recovered_10004bd4(acStack_328,0xc0,(long)auStack_388);
      }
    }
LAB_100095a4:
    recovered_1000aebc(param_1,param_3,param_4,acStack_328,(ulong)param_5,param_6,param_7);
  }
  return;
}

#undef DAT_100180d0
#undef auStack_388
#undef uStack_329
#undef acStack_328
#undef bStack_268
#undef abStack_267
#undef auStack_3e8

#undef DAT_100104e1
#define DAT_100104e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd1dU)))
#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_10010486
#define str_10010486 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc2U)))
#undef str_100104e5
#define str_100104e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd21U)))
#undef str_100104ec
#define str_100104ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd28U)))
#undef str_100104f2
#define str_100104f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd2eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100095b4
 */

bool recovered_100095b4(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char *pcVar5;

  bVar4 = recovered_10004d9c(param_1,(byte *)str_1000fc10);
  if (((((bVar4) || (bVar4 = recovered_10004d9c(param_1,(byte *)str_1000fc01), bVar4)) ||
       (bVar4 = recovered_10004d9c(param_1,(byte *)str_10010486), bVar4)) ||
      ((bVar4 = recovered_10004d9c(param_1,&DAT_100104e1), bVar4 ||
       (bVar4 = recovered_10004d9c(param_1,(byte *)str_100104e5), bVar4)))) ||
     (bVar4 = recovered_10004d9c(param_1,(byte *)str_100104ec), bVar4)) {
    return true;
  }
  pcVar5 = str_100104f2;
  bVar4 = false;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      bVar2 = *param_1;
      bVar3 = *pcVar5;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      if (bVar1 != bVar2) {
        return false;
      }
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}

#undef DAT_100104e1
#undef str_1000fc01
#undef str_1000fc10
#undef str_10010486
#undef str_100104e5
#undef str_100104ec
#undef str_100104f2

#define uStack_3a0 (*(undefined4 *)(frame + 16))
#define uStack_39c (*(undefined4 *)(frame + 20))
#define iStack_398 (*(int *)(frame + 24))
#define uStack_394 (*(undefined4 *)(frame + 28))
#define uStack_390 (*(undefined4 *)(frame + 32))
#define uStack_34 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(long param_1,undefined4 *param_2)

{
  unsigned char frame[976] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  if (param_2 != (undefined4 *)0x0) {
    memset(&uStack_3a0,0,0x370);
    uStack_394 = param_2[1];
    iVar2 = param_2[2];
    iStack_398 = iVar2 + 9;
    uStack_39c = *param_2;
    uStack_3a0 = 6;
    uStack_390 = 1;
    uStack_34 = *(undefined1 *)(param_2 + 3);
    uVar1 = *(uint *)(param_1 + 0x52c40);
    if (uVar1 < 0x180) {
      *(uint *)(param_1 + 0x52c40) = uVar1 + 1;
      memcpy((void *)(param_1 + (ulong)uVar1 * 0x370 + 0x440),&uStack_3a0,0x370);
      iVar2 = param_2[2];
    }
    param_2[2] = iVar2 + 0x16;
  }
  return;
}

#undef uStack_3a0
#undef uStack_39c
#undef iStack_398
#undef uStack_394
#undef uStack_390
#undef uStack_34

#undef DAT_1000fc21
#define DAT_1000fc21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45dU)))
#undef str_10010532
#define str_10010532 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6eU)))
#undef str_1001053b
#define str_1001053b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd77U)))
#undef str_10010549
#define str_10010549 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd85U)))
#undef str_10010557
#define str_10010557 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd93U)))
#undef str_1001055e
#define str_1001055e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd9aU)))
#undef str_10010565
#define str_10010565 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xda1U)))
#define abStack_130 (*(byte (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100096d8
 */

void recovered_100096d8(long param_1,undefined1 *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    if (param_1 != 0) {
      recovered_10004e00((char *)param_1,&DAT_1000fc21,abStack_130,0x100);
      if ((((((abStack_130[0] == 0) || (bVar1 = recovered_1000b0a0(abStack_130), bVar1)) &&
            ((recovered_10004e00((char *)param_1,str_10010532,abStack_130,0x100),
             abStack_130[0] == 0 || (bVar1 = recovered_1000b0a0(abStack_130), bVar1)))) &&
           ((recovered_10004e00((char *)param_1,str_1001053b,abStack_130,0x100), abStack_130[0] == 0
            || (bVar1 = recovered_1000b0a0(abStack_130), bVar1)))) &&
          ((recovered_10004e00((char *)param_1,str_10010549,abStack_130,0x100), abStack_130[0] == 0
           || (bVar1 = recovered_1000b0a0(abStack_130), bVar1)))) &&
         ((recovered_10004e00((char *)param_1,str_10010557,abStack_130,0x100), abStack_130[0] == 0
          || (bVar1 = recovered_1000b0a0(abStack_130), bVar1)))) {
        recovered_10004e00((char *)param_1,str_1001055e,abStack_130,0x100);
        uVar2 = recovered_1000b0f0(abStack_130,param_2);
        if ((uVar2 & 1) == 0) {
          recovered_10004e00((char *)param_1,str_10010565,abStack_130,0x100);
          recovered_1000b0f0(abStack_130,param_2);
        }
      }
      else {
        recovered_10001c8c(param_2,0x100,(long)abStack_130);
      }
    }
  }
  return;
}

#undef DAT_1000fc21
#undef str_10010532
#undef str_1001053b
#undef str_10010549
#undef str_10010557
#undef str_1001055e
#undef str_10010565
#undef abStack_130

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097d0
 */

undefined8 recovered_100097d0(byte *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;

  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = strlen(param_2);
  }
  if (((param_1 != (byte *)0x0) && (param_2 != (char *)0x0)) && (uVar2 != 0)) {
    uVar3 = (uint)*param_1;
    while (pbVar4 = param_1, uVar3 != 0) {
      while ((uVar3 < 0x21 && ((1L << ((ulong)uVar3 & 0x3f) & 0x100003600U) != 0))) {
        pbVar4 = pbVar4 + 1;
        uVar3 = (uint)*pbVar4;
      }
      uVar5 = 0;
      while ((0x20 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x100003601U) == 0))) {
        uVar3 = (uint)pbVar4[uVar5 + 1];
        uVar5 = uVar5 + 1;
      }
      param_1 = pbVar4 + uVar5;
      if (uVar2 == uVar5) {
        uVar5 = 0;
        do {
          if (uVar2 == uVar5) {
            return 1;
          }
          bVar1 = pbVar4[uVar5];
          uVar6 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar6 = (uint)bVar1;
          }
          bVar1 = param_2[uVar5];
          uVar7 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar7 = (uint)bVar1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar6 == uVar7);
      }
    }
  }
  return 0;
}


#define abStack_a0 (*(byte (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100098cc
 */

void recovered_100098cc(long param_1,long param_2,uint *param_3)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1000b020(param_1,param_2,((uintptr_t)pf_module_state + 0xa96U),(long)abStack_a0,0x80);
  if ((int)uVar1 != 0) {
    recovered_10008ca0(abStack_a0,param_3);
  }
  return;
}

#undef abStack_a0

#undef DAT_1001059d
#define DAT_1001059d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdd9U)))
#undef str_100102c5
#define str_100102c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb01U)))
#undef str_1001058a
#define str_1001058a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdc6U)))
#undef str_10010590
#define str_10010590 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdccU)))
#undef str_10010597
#define str_10010597 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd3U)))
#define abStack_40 (*(byte (*)[32])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009914
 */

undefined4 recovered_10009914(char *param_1,undefined4 param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;

  recovered_10004e00(param_1,str_1001058a,abStack_40,0x20);
  bVar1 = recovered_10004d9c(abStack_40,(byte *)str_100102c5);
  if ((bVar1) || (bVar1 = recovered_10004d9c(abStack_40,(byte *)str_10010590), bVar1)) {
    uVar2 = 1;
  }
  else {
    bVar1 = recovered_10004d9c(abStack_40,(byte *)str_10010597);
    if (bVar1) {
      uVar2 = 2;
    }
    else {
      bVar1 = recovered_10004d9c(abStack_40,&DAT_1001059d);
      uVar2 = 0;
      if (!bVar1) {
        uVar2 = param_2;
      }
    }
  }
  return uVar2;
}

#undef DAT_1001059d
#undef str_100102c5
#undef str_1001058a
#undef str_10010590
#undef str_10010597
#undef abStack_40

#undef DAT_1001050d
#define DAT_1001050d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd49U)))
#undef str_100105a2
#define str_100105a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddeU)))
#define abStack_510 (*(byte (*)[128])(frame + 16))
#define auStack_490 (*(undefined1 (*)[1024])(frame + 144))
#define acStack_90 (*(char (*)[96])(frame + 1168))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009994
 */

ulong recovered_10009994(long param_1,char *param_2,ulong param_3)

{
  unsigned char frame[1344] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;

  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pf_varargs_1000f7f4_1(acStack_90,0x60,&DAT_1001050d,(ulonglong)param_2);
    uVar4 = recovered_100089cc(*(char **)(param_1 + 800),acStack_90,auStack_490);
    if (((int)uVar4 != 0) &&
       (bVar2 = recovered_10008afc((long)auStack_490,str_100105a2,(char *)abStack_510,0x80), bVar2))
    {
      iVar3 = recovered_10009ddc(abStack_510);
      uVar5 = 2;
      if (iVar3 < 0x16) {
        uVar5 = (uint)param_3;
      }
      uVar1 = 3;
      if (iVar3 < 0x2a) {
        uVar1 = uVar5;
      }
      uVar5 = 4;
      if (iVar3 < 0x48) {
        uVar5 = uVar1;
      }
      param_3 = (ulong)uVar5;
    }
  }
  return param_3;
}

#undef DAT_1001050d
#undef str_100105a2
#undef abStack_510
#undef auStack_490
#undef acStack_90

#undef DAT_1000fbc5
#define DAT_1000fbc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401U)))
#undef DAT_1000fbc9
#define DAT_1000fbc9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad8U)))
#undef DAT_1001029f
#define DAT_1001029f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_100102a2
#define DAT_100102a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadeU)))
#undef DAT_100102a5
#define DAT_100102a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae1U)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae4U)))
#undef DAT_100102ab
#define DAT_100102ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae7U)))
#undef DAT_100102c1
#define DAT_100102c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafdU)))
#undef DAT_100102eb
#define DAT_100102eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#undef DAT_100102ee
#define DAT_100102ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2aU)))
#undef DAT_10010331
#define DAT_10010331 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6dU)))
#undef DAT_10010335
#define DAT_10010335 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb71U)))
#undef DAT_10010445
#define DAT_10010445 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc81U)))
#undef DAT_10010470
#define DAT_10010470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcacU)))
#undef str_10010447
#define str_10010447 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc83U)))
#undef str_10010454
#define str_10010454 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc90U)))
#undef str_1001045c
#define str_1001045c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc98U)))
#undef str_10010462
#define str_10010462 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9eU)))
#undef str_10010469
#define str_10010469 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xca5U)))
#define abStack_890 (*(byte (*)[40])(frame + 160))
#define abStack_868 (*(byte (*)[1024])(frame + 200))
#define acStack_468 (*(char (*)[1032])(frame + 1224))
#define acStack_911 (*(char (*)[128])(frame + 31))
#define bStack_891 (*(byte *)(frame + 159))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009a44
 */

void recovered_10009a44(long param_1,byte *param_2,long param_3,char *param_4,long param_5)

{
  unsigned char frame[2384] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  uint128 auVar10;

  pbVar9 = param_2 + param_3;
  pbVar1 = (byte *)0x0;
  if (param_2 != (byte *)0x0) {
    pbVar1 = pbVar9;
  }
  if (((param_4 == (char *)0x0) || (*param_4 = '\0', param_2 == (byte *)0x0)) || (param_3 == 0)) {
    return;
  }
  acStack_468[0] = '\0';
  while( true ) {
    while( true ) {
      if (((pbVar1 <= param_2) || (*param_2 == 0)) ||
         (uVar5 = strlen(acStack_468), 0x3fe < uVar5)) goto LAB_10009d50;
      if (*param_2 == 0x3c) break;
      recovered_100054a4(acStack_468,0x400,*param_2);
      param_2 = param_2 + 1;
    }
    pbVar7 = (byte *)recovered_1000a7e8((long)param_2,'>',(long)pbVar9 - (long)param_2);
    if (pbVar7 == (byte *)0x0) break;
    bStack_891 = 0;
    iVar4 = (int)pbVar7 + ~(uint)param_2;
    if (0x1fe < iVar4) {
      iVar4 = 0x1ff;
    }
    memcpy(abStack_868,param_2 + 1,(long)iVar4);
    abStack_868[iVar4] = 0;
    iVar4 = strncmp((char *)abStack_868,&DAT_1000fbc5,3);
    if (iVar4 == 0) {
      pbVar6 = recovered_1000ade4(param_2 + 4,pbVar1,&DAT_1000fbc9);
      param_2 = pbVar6 + 3;
      if (pbVar6 == (byte *)0x0) {
        param_2 = pbVar7 + 1;
      }
    }
    else {
      recovered_10004cb8(abStack_868,abStack_890,0x28,&bStack_891);
      if (((bStack_891 & 1) == 0) && (abStack_890[0] != 0)) {
        uVar5 = recovered_10009144(param_1,(char *)abStack_868,(char *)abStack_890);
        if (((uVar5 & 1) == 0) && (bVar3 = recovered_100095b4(abStack_890), !bVar3)) {
          bVar3 = recovered_10004d9c(abStack_890,&DAT_10010331);
          if ((bVar3) &&
             (recovered_10004e00((char *)abStack_868,&DAT_10010335,acStack_911,0x80),
             acStack_911[0] != '\0')) {
            if (acStack_468[0] != '\0') {
              recovered_100054a4(acStack_468,0x400,' ');
            }
            recovered_10004bd4(acStack_468,0x400,(long)acStack_911);
          }
          bVar3 = recovered_10004d9c(abStack_890,&DAT_100102eb);
          if ((((((bVar3) || (bVar3 = recovered_10004d9c(abStack_890,&DAT_10010445), bVar3)) ||
                (bVar3 = recovered_10004d9c(abStack_890,&DAT_100102c1), bVar3)) ||
               ((bVar3 = recovered_10004d9c(abStack_890,(byte *)str_10010447), bVar3 ||
                (bVar3 = recovered_10004d9c(abStack_890,(byte *)str_10010454), bVar3)))) ||
              ((((bVar3 = recovered_10004d9c(abStack_890,(byte *)str_1001045c), bVar3 ||
                 ((bVar3 = recovered_10004d9c(abStack_890,(byte *)str_10010462), bVar3 ||
                  (bVar3 = recovered_10004d9c(abStack_890,(byte *)str_10010469), bVar3)))) ||
                (bVar3 = recovered_10004d9c(abStack_890,&DAT_10010470), bVar3)) ||
               ((((bVar3 = recovered_10004d9c(abStack_890,&DAT_100102ee), bVar3 ||
                  (bVar3 = recovered_10004d9c(abStack_890,&DAT_1001029c), bVar3)) ||
                 (bVar3 = recovered_10004d9c(abStack_890,&DAT_1001029f), bVar3)) ||
                (((bVar3 = recovered_10004d9c(abStack_890,&DAT_100102a2), bVar3 ||
                  (bVar3 = recovered_10004d9c(abStack_890,&DAT_100102a5), bVar3)) ||
                 ((bVar3 = recovered_10004d9c(abStack_890,&DAT_100102a8), bVar3 ||
                  (bVar3 = recovered_10004d9c(abStack_890,&DAT_100102ab), bVar3)))))))))) &&
             (acStack_468[0] != '\0')) {
            recovered_100054a4(acStack_468,0x400,' ');
          }
          goto LAB_10009d30;
        }
        auVar10 = recovered_1000a92c(pbVar7,pbVar1,(char *)abStack_890);
        param_2 = PF_PART8(auVar10, 0);
      }
      else {
LAB_10009d30:
        param_2 = pbVar7 + 1;
      }
    }
  }
LAB_10009d50:
  pbVar9 = abStack_868;
  recovered_100054ec((long)acStack_468,(char *)abStack_868,0x400);
  bVar3 = false;
  *param_4 = '\0';
  do {
    bVar8 = *pbVar9;
    bVar2 = false;
    if (bVar8 < 0x21) {
      if ((1L << ((ulong)bVar8 & 0x3f) & 0x100003600U) == 0) {
        if ((ulong)bVar8 == 0) {
          return;
        }
        goto LAB_10009db8;
      }
      if (bVar3) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
        if (*param_4 != '\0') {
          bVar8 = 0x20;
          bVar2 = bVar3;
          goto LAB_10009db8;
        }
      }
    }
    else {
LAB_10009db8:
      bVar3 = bVar2;
      recovered_100054a4(param_4,param_5,bVar8);
    }
    pbVar9 = pbVar9 + 1;
  } while( true );
}

#undef DAT_1000fbc5
#undef DAT_1000fbc9
#undef DAT_1001029c
#undef DAT_1001029f
#undef DAT_100102a2
#undef DAT_100102a5
#undef DAT_100102a8
#undef DAT_100102ab
#undef DAT_100102c1
#undef DAT_100102eb
#undef DAT_100102ee
#undef DAT_10010331
#undef DAT_10010335
#undef DAT_10010445
#undef DAT_10010470
#undef str_10010447
#undef str_10010454
#undef str_1001045c
#undef str_10010462
#undef str_10010469
#undef abStack_890
#undef abStack_868
#undef acStack_468
#undef acStack_911
#undef bStack_891

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ddc
 */

int recovered_10009ddc(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;

  if (param_1 == (byte *)0x0) {
    iVar3 = 0;
  }
  else {
    for (; uVar4 = (ulong)*param_1, *param_1 < 0x21 && (1L << (uVar4 & 0x3f) & 0x100003600U) != 0;
        param_1 = param_1 + 1) {
    }
    iVar3 = 0;
    lVar5 = 1;
    while (uVar2 = (int)uVar4 - 0x30, (uVar2 & 0xff) < 10) {
      iVar3 = iVar3 * 10 + (uVar2 & 0xff);
      pbVar1 = param_1 + lVar5;
      lVar5 = lVar5 + 1;
      uVar4 = (ulong)*pbVar1;
    }
  }
  return iVar3;
}


#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#define auStack_3c0 (*(undefined4 (*)[117])(frame + 16))
#define acStack_1ec (*(char (*)[64])(frame + 484))
#define acStack_1ac (*(char (*)[64])(frame + 548))
#define acStack_16c (*(char (*)[256])(frame + 612))
#define uStack_6c (*(undefined4 *)(frame + 868))
#define uStack_68 (*(undefined4 *)(frame + 872))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e44
 */

void recovered_10009e44(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                       undefined4 param_5)

{
  unsigned char frame[1008] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  uint uVar2;

  memset(auStack_3c0,0,0x370);
  auStack_3c0[0] = 8;
  uStack_68 = 1;
  puVar1 = &DAT_1000fb37;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  uStack_6c = param_5;
  recovered_10001c8c(acStack_1ec,0x40,(long)puVar1);
  puVar1 = &DAT_1000fb37;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  recovered_10001c8c(acStack_1ac,0x40,(long)puVar1);
  puVar1 = &DAT_1000fb37;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  recovered_10001c8c(acStack_16c,0x80,(long)puVar1);
  uVar2 = *(uint *)(param_1 + 0x52c40);
  if (uVar2 < 0x180) {
    *(uint *)(param_1 + 0x52c40) = uVar2 + 1;
    memcpy((void *)(param_1 + (ulong)uVar2 * 0x370 + 0x440),auStack_3c0,0x370);
  }
  return;
}

#undef DAT_1000fb37
#undef auStack_3c0
#undef acStack_1ec
#undef acStack_1ac
#undef acStack_16c
#undef uStack_6c
#undef uStack_68

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef str_1001039e
#define str_1001039e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#define uStack_3d8 (*(undefined4 *)(frame + 24))
#define iStack_3d4 (*(int *)(frame + 28))
#define iStack_3d0 (*(int *)(frame + 32))
#define iStack_3cc (*(int *)(frame + 36))
#define uStack_3c8 (*(undefined4 *)(frame + 40))
#define acStack_3c4 (*(char (*)[448])(frame + 44))
#define acStack_204 (*(char (*)[128])(frame + 492))
#define acStack_184 (*(char (*)[128])(frame + 620))
#define acStack_104 (*(char (*)[128])(frame + 748))
#define iStack_84 (*(int *)(frame + 876))
#define uStack_80 (*(undefined4 *)(frame + 880))
#define iStack_7c (*(int *)(frame + 884))
#define uStack_6c (*(undefined1 *)(frame + 900))
#define bStack_6b (*(byte *)(frame + 901))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f08
 */

void recovered_10009f08(long param_1,char *param_2,undefined *param_3,undefined *param_4,
                       undefined *param_5,int param_6,byte param_7,int param_8,int *param_9)

{
  unsigned char frame[1040] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;

  if (param_9 == (int *)0x0) {
    return;
  }
  memset(&uStack_3d8,0,0x370);
  pcVar8 = str_1001039e;
  if ((param_2 != (char *)0x0) && (pcVar8 = str_1001039e, *param_2 != '\0')) {
    pcVar8 = param_2;
  }
  uStack_3d8 = 5;
  uVar6 = recovered_1000ac60(pcVar8,1);
  iVar3 = param_9[1];
  iVar5 = iVar3;
  if ((int)(uVar6 + 0x16) <= iVar3) {
    iVar5 = uVar6 + 0x16;
  }
  if (0x9f < iVar5) {
    iVar5 = 0xa0;
  }
  iVar1 = 0x36;
  if (0x1f < (int)uVar6) {
    iVar1 = iVar5;
  }
  uStack_3c8 = 0x1a;
  iStack_3cc = iVar1;
  iVar5 = recovered_1000afe4(param_9,param_8,iVar1);
  iStack_3d0 = param_9[2];
  iStack_3d4 = iVar5;
  if (-1 < param_6) {
    bVar4 = false;
    if ((*(int *)(param_1 + 0x52c40) == 0) || ((param_7 & 1) != 0)) goto LAB_1000a024;
    lVar7 = param_1 + (ulong)(*(int *)(param_1 + 0x52c40) - 1) * 0x370;
    if ((*(int *)(lVar7 + 0x440) == 4) &&
       ((*(int *)(lVar7 + 0x794) == param_6 &&
        (iStack_3d4 = *(int *)(lVar7 + 0x444) + *(int *)(lVar7 + 0x44c) + 8,
        iStack_3d4 + iVar1 <= *param_9 + iVar3)))) {
      iStack_3d0 = *(int *)(lVar7 + 0x448);
      bVar4 = true;
      goto LAB_1000a024;
    }
  }
  bVar4 = false;
  iStack_3d4 = iVar5;
LAB_1000a024:
  uStack_80 = 1;
  uStack_6c = (undefined1)param_9[3];
  iStack_84 = param_6;
  iStack_7c = param_8;
  bStack_6b = param_7;
  recovered_10001c8c(acStack_3c4,0xc0,(long)pcVar8);
  puVar2 = &DAT_1000fb37;
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  recovered_10001c8c(acStack_204,0x40,(long)puVar2);
  puVar2 = &DAT_1000fb37;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
  }
  recovered_10001c8c(acStack_184,0x80,(long)puVar2);
  puVar2 = &DAT_1000fb37;
  if (param_5 != (undefined *)0x0) {
    puVar2 = param_5;
  }
  recovered_10001c8c(acStack_104,0x80,(long)puVar2);
  uVar6 = *(uint *)(param_1 + 0x52c40);
  if (uVar6 < 0x180) {
    *(uint *)(param_1 + 0x52c40) = uVar6 + 1;
    memcpy((void *)(param_1 + (ulong)uVar6 * 0x370 + 0x440),&uStack_3d8,0x370);
  }
  iVar5 = param_9[2];
  if (bVar4) {
    if (iVar5 <= iStack_3d0 + 0x22) {
      iVar5 = iStack_3d0 + 0x22;
    }
  }
  else {
    iVar5 = iVar5 + 0x22;
  }
  param_9[2] = iVar5;
  return;
}

#undef DAT_1000fb37
#undef str_1001039e
#undef uStack_3d8
#undef iStack_3d4
#undef iStack_3d0
#undef iStack_3cc
#undef uStack_3c8
#undef acStack_3c4
#undef acStack_204
#undef acStack_184
#undef acStack_104
#undef iStack_84
#undef uStack_80
#undef iStack_7c
#undef uStack_6c
#undef bStack_6b

#define acStack_30 (*(char (*)[16])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a100
 */

bool recovered_1000a100(char *param_1,char *param_2)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;

  recovered_10004e00(param_1,param_2,acStack_30,0x10);
  if (acStack_30[0] == '\0') {
    bVar2 = false;
    if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
      uVar3 = strlen(param_2);
      for (pcVar4 = param_1; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        uVar5 = 0;
        do {
          if (uVar3 == uVar5) {
            if (((pcVar4 == param_1) ||
                ((byte)pcVar4[-1] < 0x3d &&
                 (1L << ((ulong)(byte)pcVar4[-1] & 0x3f) & 0x1000800100003600U) != 0)) &&
               ((byte)pcVar4[uVar3] < 0x3f &&
                (1L << ((ulong)(byte)pcVar4[uVar3] & 0x3f) & 0x4000800100003601U) != 0)) {
              return *pcVar4 != '\0';
            }
            break;
          }
          bVar1 = pcVar4[uVar5];
          uVar6 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar6 = (uint)bVar1;
          }
          bVar1 = param_2[uVar5];
          uVar7 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar7 = (uint)bVar1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar6 == uVar7);
      }
      bVar2 = false;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

#undef acStack_30

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef str_100102d5
#define str_100102d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb11U)))
#define uStack_3d0 (*(undefined4 *)(frame + 16))
#define iStack_3cc (*(int *)(frame + 20))
#define iStack_3c8 (*(int *)(frame + 24))
#define iStack_3c4 (*(int *)(frame + 28))
#define uStack_3c0 (*(undefined4 *)(frame + 32))
#define acStack_3bc (*(char (*)[448])(frame + 36))
#define acStack_1fc (*(char (*)[64])(frame + 484))
#define acStack_1bc (*(char (*)[64])(frame + 548))
#define acStack_17c (*(char (*)[256])(frame + 612))
#define uStack_7c (*(undefined4 *)(frame + 868))
#define uStack_78 (*(undefined4 *)(frame + 872))
#define iStack_74 (*(int *)(frame + 876))
#define uStack_64 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a1f8
 */

long recovered_1000a1f8(long param_1,char *param_2,char *param_3,undefined *param_4,
                       undefined4 param_5,int param_6,int *param_7)

{
  unsigned char frame[1024] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  char cVar4;
  long unaff_x30;

  if (param_7 == (int *)0x0) {
    return param_1;
  }
  memset(&uStack_3d0,0,0x370);
  iStack_3c4 = param_7[1];
  if (0xdb < iStack_3c4) {
    iStack_3c4 = 0xdc;
  }
  uStack_3d0 = 4;
  uStack_3c0 = 0x18;
  iStack_3cc = recovered_1000afe4(param_7,param_6,iStack_3c4);
  iStack_3c8 = param_7[2];
  uStack_78 = 1;
  uStack_64 = (undefined1)param_7[3];
  pcVar1 = &DAT_1000fb37;
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  uStack_7c = param_5;
  iStack_74 = param_6;
  recovered_10001c8c(acStack_1fc,0x40,(long)pcVar1);
  pcVar1 = &DAT_1000fb37;
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
  }
  recovered_10001c8c(acStack_1bc,0x40,(long)pcVar1);
  puVar2 = &DAT_1000fb37;
  if (param_4 != (undefined *)0x0) {
    puVar2 = param_4;
  }
  recovered_10001c8c(acStack_17c,0x80,(long)puVar2);
  if (param_2 == (char *)0x0) {
    if (param_3 == (char *)0x0) {
      param_2 = str_100102d5;
      goto LAB_1000a2fc;
    }
  }
  else {
    cVar4 = *param_2;
    if (cVar4 == '\0') {
      param_2 = str_100102d5;
    }
    if ((param_3 == (char *)0x0) || (cVar4 != '\0')) goto LAB_1000a2fc;
  }
  param_2 = str_100102d5;
  if (*param_3 != '\0') {
    param_2 = param_3;
  }
LAB_1000a2fc:
  recovered_10001c8c(acStack_3bc,0xc0,(long)param_2);
  uVar3 = *(uint *)(param_1 + 0x52c40);
  if (uVar3 < 0x180) {
    *(uint *)(param_1 + 0x52c40) = uVar3 + 1;
    memcpy((void *)(param_1 + (ulong)uVar3 * 0x370 + 0x440),&uStack_3d0,0x370);
  }
  param_7[2] = param_7[2] + 0x1e;
  return unaff_x30;
}

#undef DAT_1000fb37
#undef str_100102d5
#undef uStack_3d0
#undef iStack_3cc
#undef iStack_3c8
#undef iStack_3c4
#undef uStack_3c0
#undef acStack_3bc
#undef acStack_1fc
#undef acStack_1bc
#undef acStack_17c
#undef uStack_7c
#undef uStack_78
#undef iStack_74
#undef uStack_64

#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a34c
 */

void recovered_1000a34c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = (*(int *)(param_1 + 0x544d0) - DAT_100180d4) + 0x5e;
  if (iVar3 < -0x13) {
    iVar3 = -0x14;
  }
  iVar2 = *(int *)(param_1 + 0x544cc);
  iVar1 = iVar2;
  if (iVar3 + 0x14 <= iVar2) {
    iVar1 = iVar3 + 0x14;
  }
  iVar3 = 0;
  if (-1 < iVar2) {
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 0x544cc) = iVar3;
  return;
}

#undef DAT_100180d4

#undef DAT_1000fbcd
#define DAT_1000fbcd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x409U)))
#undef DAT_1000fbd2
#define DAT_1000fbd2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x40eU)))
#undef DAT_1000fbed
#define DAT_1000fbed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x429U)))
#undef DAT_100102eb
#define DAT_100102eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#undef DAT_100102f9
#define DAT_100102f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb35U)))
#undef DAT_10010331
#define DAT_10010331 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6dU)))
#undef DAT_1001048f
#define DAT_1001048f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xccbU)))
#undef DAT_10010494
#define DAT_10010494 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcd0U)))
#undef DAT_100104aa
#define DAT_100104aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0xce6U)))
#undef str_100102d5
#define str_100102d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb11U)))
#undef str_100102fc
#define str_100102fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb38U)))
#undef str_10010498
#define str_10010498 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcd4U)))
#undef str_1001049e
#define str_1001049e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdaU)))
#undef str_100104a4
#define str_100104a4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a390
 */

bool recovered_1000a390(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;

  bVar4 = recovered_10004d9c(param_1,&DAT_1001048f);
  if ((((((bVar4) || (bVar4 = recovered_10004d9c(param_1,&DAT_1000fbd2), bVar4)) ||
        (bVar4 = recovered_10004d9c(param_1,&DAT_100102eb), bVar4)) ||
       (((bVar4 = recovered_10004d9c(param_1,&DAT_10010494), bVar4 ||
         (bVar4 = recovered_10004d9c(param_1,(byte *)str_10010498), bVar4)) ||
        ((bVar4 = recovered_10004d9c(param_1,&DAT_100102f9), bVar4 ||
         ((bVar4 = recovered_10004d9c(param_1,&DAT_10010331), bVar4 ||
          (bVar4 = recovered_10004d9c(param_1,(byte *)str_100102d5), bVar4)))))))) ||
      (bVar4 = recovered_10004d9c(param_1,&DAT_1000fbed), bVar4)) ||
     ((((bVar4 = recovered_10004d9c(param_1,&DAT_1000fbcd), bVar4 ||
        (bVar4 = recovered_10004d9c(param_1,(byte *)str_1001049e), bVar4)) ||
       (bVar4 = recovered_10004d9c(param_1,(byte *)str_100102fc), bVar4)) ||
      (bVar4 = recovered_10004d9c(param_1,(byte *)str_100104a4), bVar4)))) {
    return true;
  }
  pbVar5 = &DAT_100104aa;
  bVar4 = false;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      bVar2 = *param_1;
      bVar3 = *pbVar5;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      if (bVar1 != bVar2) {
        return false;
      }
      param_1 = param_1 + 1;
      pbVar5 = pbVar5 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}

#undef DAT_1000fbcd
#undef DAT_1000fbd2
#undef DAT_1000fbed
#undef DAT_100102eb
#undef DAT_100102f9
#undef DAT_10010331
#undef DAT_1001048f
#undef DAT_10010494
#undef DAT_100104aa
#undef str_100102d5
#undef str_100102fc
#undef str_10010498
#undef str_1001049e
#undef str_100104a4

#undef str_100104ae
#define str_100104ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceaU)))
#define acStack_60 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a48c
 */

long recovered_1000a48c(long param_1,char *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;

  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) ||
     (bVar1 = recovered_1000a390((byte *)param_2), bVar1)) {
    pcVar4 = (char *)(param_1 + 1);
  }
  else {
    pf_varargs_1000f7f4_1(acStack_60,0x40,str_100104ae,(ulonglong)param_2);
    pcVar4 = (char *)(param_1 + 1);
    pcVar2 = recovered_100052e0(pcVar4,acStack_60);
    if (pcVar2 != (char *)0x0) {
      uVar3 = strlen(acStack_60);
      pcVar4 = pcVar2 + uVar3;
    }
  }
  return (long)pcVar4;
}

#undef str_100104ae
#undef acStack_60

#define abStack_b0 (*(byte (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a504
 */

void recovered_1000a504(char *param_1,char *param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (((param_1 < param_2) && (param_3 != (undefined1 *)0x0)) && (*param_1 == '<')) {
    iVar1 = (int)param_2 + ~(uint)param_1;
    if (0x7e < iVar1) {
      iVar1 = 0x7f;
    }
    memcpy(abStack_b0,param_1 + 1,(long)iVar1);
    abStack_b0[iVar1] = 0;
    recovered_10004cb8(abStack_b0,param_3,0x28,param_4);
  }
  return;
}

#undef abStack_b0

#define local_49 (*(undefined1 *)(frame + 23))
#define abStack_48 (*(byte (*)[40])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a5a0
 */

ulong recovered_1000a5a0(char *param_1,char *param_2,char *param_3,undefined1 *param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  local_49 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (((param_1 < param_2) && (*param_3 != '\0')) && (*param_1 == '<')) {
    recovered_1000a504(param_1,param_2,abStack_48,&local_49);
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = local_49;
    }
    bVar1 = recovered_10004d9c(abStack_48,(byte *)param_3);
    uVar2 = (ulong)bVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

#undef local_49
#undef abStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a61c
 */

bool recovered_1000a61c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;

  if (param_1 < param_2) {
    do {
      bVar1 = param_1 <= param_2 && param_2 != param_1;
      if (param_1 > param_2 || param_2 == param_1) {
        return bVar1;
      }
      param_2 = param_2 + -1;
      bVar2 = *param_2;
      if (0x2f < bVar2) {
        return false;
      }
    } while ((1L << ((ulong)bVar2 & 0x3f) & 0x100003600U) != 0);
    if ((ulong)bVar2 == 0x2f) {
      return bVar1;
    }
  }
  return false;
}


#define abStack_b0 (*(byte (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a668
 */

uint recovered_1000a668(long param_1,long param_2,byte *param_3)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;

  if (param_3 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = strlen((char *)param_3);
  }
  uVar5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (byte *)0x0)) {
    bVar2 = recovered_10008afc(param_1,(char *)param_2,(char *)abStack_b0,0x80);
    if (bVar2) {
      bVar2 = recovered_10004d9c(abStack_b0,param_3);
      if (bVar2) {
        uVar5 = 1;
        goto LAB_1000a6fc;
      }
      if (uVar3 != 0) {
        pbVar4 = abStack_b0;
        uVar6 = uVar3;
        do {
          if (uVar6 == 0) {
            uVar5 = 0;
            if (abStack_b0[uVar3] < 0x22) {
              uVar5 = (uint)(0x300003601 >> ((ulong)abStack_b0[uVar3] & 0x3f));
            }
            goto LAB_1000a6fc;
          }
          bVar1 = *pbVar4;
          uVar5 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar5 = (uint)bVar1;
          }
          bVar1 = *param_3;
          uVar7 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar7 = (uint)bVar1;
          }
          uVar6 = uVar6 - 1;
          pbVar4 = pbVar4 + 1;
          param_3 = param_3 + 1;
        } while (uVar5 == uVar7);
      }
    }
    uVar5 = 0;
  }
LAB_1000a6fc:
  return uVar5 & 1;
}

#undef abStack_b0

#undef str_1001037b
#define str_1001037b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#define auStack_430 (*(undefined1 (*)[1024])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a734
 */

undefined8 recovered_1000a734(long param_1,long param_2)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = recovered_1000a788(param_1,param_2,((uintptr_t)pf_module_state + 0xd01U),((uintptr_t)pf_module_state + 0xd09U));
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = recovered_100089cc(*(char **)(param_1 + 800),(char *)param_2,auStack_430);
    if ((int)uVar2 != 0) {
      uVar1 = recovered_1000a668((long)auStack_430,((uintptr_t)pf_module_state + 0xd0eU),(byte *)str_1001037b);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

#undef str_1001037b
#undef auStack_430

#define auStack_430 (*(undefined1 (*)[1024])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a788
 */

ulong recovered_1000a788(long param_1,long param_2,long param_3,long param_4)

{
  unsigned char frame[1120] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;

  uVar2 = 0;
  if (param_2 != 0) {
    if (((param_3 != 0) && (param_4 != 0)) &&
       (uVar2 = recovered_100089cc(*(char **)(param_1 + 800),(char *)param_2,auStack_430),
       (int)uVar2 != 0)) {
      uVar1 = recovered_1000a668((long)auStack_430,param_3,(byte *)param_4);
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}

#undef auStack_430

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a7e8
 */

char * recovered_1000a7e8(long param_1,char param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = (char *)0x0;
  if (param_1 != 0) {
    pcVar1 = (char *)(param_1 + -1);
    do {
      if (param_3 == 0) {
        return (char *)0x0;
      }
      pcVar1 = pcVar1 + 1;
      param_3 = param_3 + -1;
    } while (*pcVar1 != param_2);
  }
  return pcVar1;
}


#define abStack_267 (*(byte (*)[519])(frame + 153))
#define acStack_2e8 (*(char (*)[129])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a810
 */

void recovered_1000a810(long param_1,int *param_2,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined *param_7,uint param_8)

{
  unsigned char frame[800] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;

  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    uVar2 = strlen(param_5);
    recovered_10009a44(param_1,(byte *)param_5,uVar2,acStack_2e8 + 0x80,0x200);
    for (pbVar5 = (byte *)(acStack_2e8 + 0x80); bVar1 = *pbVar5, bVar1 != 0; pbVar5 = pbVar5 + lVar4
        ) {
      while ((uVar3 = (uint)bVar1, uVar3 < 0x21 &&
             ((1L << ((ulong)uVar3 & 0x3f) & 0x100003600U) != 0))) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
      }
      lVar4 = 0;
      while( true ) {
        if ((uVar3 < 0x21) && ((1L << ((ulong)uVar3 & 0x3f) & 0x100003601U) != 0)) {
          acStack_2e8[lVar4] = '\0';
          if (lVar4 == 0) goto LAB_1000a918;
          goto LAB_1000a8fc;
        }
        if (lVar4 == 0x7f) break;
        acStack_2e8[lVar4] = (char)uVar3;
        uVar3 = (uint)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      }
      acStack_2e8[0x7f] = 0;
LAB_1000a8fc:
      recovered_1000aadc(param_1,param_2,param_3,param_4,acStack_2e8,param_6,param_7,param_8);
LAB_1000a918:
    }
  }
  return;
}

#undef abStack_267
#undef acStack_2e8

#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_10010486
#define str_10010486 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc2U)))
#undef str_100104ae
#define str_100104ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceaU)))
#define abStackY_89 (*(byte (*)[9])(frame + 23))
#define abStack_70 (*(byte (*)[15])(frame + 48))
#define bStack_61 (*(byte *)(frame + 63))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a92c
 */

uint128 recovered_1000a92c(byte *param_1,byte *param_2,char *param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *extraout_x1 = 0;
  byte *pbVar5;
  byte *extraout_x1_00 = 0;
  byte *extraout_x1_01 = 0;
  int iVar6;
  undefined8 unaff_x30;
  uint128 auVar7;
  uint128 auVar8;

  pbVar5 = param_1 + 1;
  if ((((param_2 == (byte *)0x0) || (param_2 <= param_1)) || (param_3 == (char *)0x0)) ||
     ((*param_3 == '\0' || (bVar1 = recovered_1000a390((byte *)param_3), bVar1)))) {
LAB_1000a978:
    PF_PART8(auVar7, 8) = unaff_x30;
    PF_PART8(auVar7, 0) = pbVar5;
    return auVar7;
  }
  bVar1 = recovered_10004d9c((byte *)param_3,(byte *)str_1000fc10);
  if ((bVar1) ||
     ((bVar1 = recovered_10004d9c((byte *)param_3,(byte *)str_1000fc01), bVar1 ||
      (bVar1 = recovered_10004d9c((byte *)param_3,(byte *)str_10010486), bVar1)))) {
    pbVar5 = param_2;
    if (((param_2 <= param_1) || (param_3 == (char *)0x0)) ||
       ((*param_3 == '\0' ||
        (bVar1 = recovered_1000a390((byte *)param_3), pbVar5 = extraout_x1, bVar1)))) {
      pbVar3 = param_1 + 1;
    }
    else {
      pf_varargs_1000f7f4_1((char *)abStack_70,0x40,str_100104ae,(ulonglong)param_3);
      pbVar3 = param_1 + 1;
      pbVar2 = recovered_1000ade4(pbVar3,param_2,abStack_70);
      pbVar5 = extraout_x1_00;
      if (pbVar2 != (byte *)0x0) {
        uVar4 = strlen((char *)abStack_70);
        pbVar3 = pbVar2 + uVar4;
        pbVar5 = extraout_x1_01;
      }
    }
    PF_PART8(auVar8, 8) = pbVar5;
    PF_PART8(auVar8, 0) = pbVar3;
    return auVar8;
  }
  iVar6 = 1;
  pbVar3 = pbVar5;
  do {
    while( true ) {
      if ((((pbVar3 == (byte *)0x0) || (param_2 <= pbVar3)) || (*pbVar3 == 0)) ||
         (pbVar2 = (byte *)recovered_1000a7e8((long)pbVar3,'<',(long)param_2 - (long)pbVar3),
         pbVar2 == (byte *)0x0)) goto LAB_1000a978;
      pbVar3 = (byte *)recovered_1000a7e8((long)pbVar2,'>',(long)param_2 - (long)pbVar2);
      bStack_61 = 0;
      if (pbVar3 == (byte *)0x0) goto LAB_1000a978;
      recovered_1000a504((char *)pbVar2,(char *)pbVar3,abStackY_89,&bStack_61);
      if (((bStack_61 & 1) != 0) ||
         (((bVar1 = recovered_10004d9c(abStackY_89,(byte *)str_1000fc10), !bVar1 &&
           (bVar1 = recovered_10004d9c(abStackY_89,(byte *)str_1000fc01), !bVar1)) &&
          (bVar1 = recovered_10004d9c(abStackY_89,(byte *)str_10010486), !bVar1)))) break;
      pbVar3 = recovered_1000ad54(pbVar3,param_2,(char *)abStackY_89);
    }
    uVar4 = recovered_1000a5a0((char *)pbVar2,(char *)pbVar3,param_3,&bStack_61);
    if ((int)uVar4 != 0) {
      if (bStack_61 == 1) {
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          pbVar5 = pbVar3 + 1;
          goto LAB_1000a978;
        }
      }
      else {
        bVar1 = recovered_1000a61c(pbVar2,pbVar3);
        iVar6 = iVar6 + (bVar1 ^ 1);
      }
    }
    pbVar3 = pbVar3 + 1;
  } while( true );
}

#undef str_1000fc01
#undef str_1000fc10
#undef str_10010486
#undef str_100104ae
#undef abStackY_89
#undef abStack_70
#undef bStack_61

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#define uStack_3d8 (*(undefined4 *)(frame + 24))
#define iStack_3d4 (*(int *)(frame + 28))
#define iStack_3d0 (*(int *)(frame + 32))
#define uStack_3cc (*(uint *)(frame + 36))
#define uStack_3c8 (*(uint *)(frame + 40))
#define acStack_3c4 (*(char (*)[192])(frame + 44))
#define acStack_304 (*(char (*)[640])(frame + 236))
#define uStack_84 (*(undefined4 *)(frame + 876))
#define uStack_80 (*(uint *)(frame + 880))
#define uStack_6c (*(undefined1 *)(frame + 900))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aadc
 */

long recovered_1000aadc(long param_1,int *param_2,int *param_3,int *param_4,char *param_5,
                       undefined4 param_6,undefined *param_7,uint param_8)

{
  unsigned char frame[1040] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long unaff_x30;

  if (param_3 != (int *)0x0) {
    if (((param_4 != (int *)0x0) && (param_5 != (char *)0x0)) && (*param_5 != '\0')) {
      uVar2 = param_8;
      if ((int)param_8 < 2) {
        uVar2 = 1;
      }
      iVar3 = *param_2;
      iVar4 = param_2[1];
      uVar5 = recovered_1000ac60(param_5,param_8);
      iVar6 = *param_3;
      iVar7 = *param_2;
      if (iVar6 != iVar7) {
        if (iVar4 + iVar3 < (int)(iVar6 + uVar5)) {
          *param_3 = iVar7;
          *param_4 = *param_4 + uVar2 * 8 + 4;
          iVar6 = *param_3;
          iVar7 = *param_2;
        }
        if (iVar6 != iVar7) {
          *param_3 = iVar6 + uVar2 * 6;
        }
      }
      memset(&uStack_3d8,0,0x370);
      uStack_6c = (undefined1)param_2[3];
      iStack_3d4 = *param_3;
      iStack_3d0 = *param_4;
      uStack_3c8 = uVar2 << 3 | 3;
      uStack_84 = 0xffffffff;
      uStack_3d8 = param_6;
      uStack_3cc = uVar5;
      uStack_80 = param_8;
      recovered_10001c8c(acStack_3c4,0xc0,(long)param_5);
      puVar1 = &DAT_1000fb37;
      if (param_7 != (undefined *)0x0) {
        puVar1 = param_7;
      }
      recovered_10001c8c(acStack_304,0x100,(long)puVar1);
      uVar2 = *(uint *)(param_1 + 0x52c40);
      if (uVar2 < 0x180) {
        *(uint *)(param_1 + 0x52c40) = uVar2 + 1;
        memcpy((void *)(param_1 + (ulong)uVar2 * 0x370 + 0x440),&uStack_3d8,0x370);
      }
      *param_3 = *param_3 + uVar5;
    }
    param_1 = unaff_x30;
  }
  return param_1;
}

#undef DAT_1000fb37
#undef uStack_3d8
#undef iStack_3d4
#undef iStack_3d0
#undef uStack_3cc
#undef uStack_3c8
#undef acStack_3c4
#undef acStack_304
#undef uStack_84
#undef uStack_80
#undef uStack_6c

#define pvStack_38 (*(void * *)(frame + 24))
#define uStack_2c (*(uint *)(frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac60
 */

uint recovered_1000ac60(char *param_1,uint param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  ulong uVar3;

  iVar2 = 0;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      memset(&pvStack_38,0,0x18);
      uVar1 = param_2;
      if ((int)param_2 < 2) {
        uVar1 = 1;
      }
      uVar1 = recovered_1000ace8(param_1,uVar1,0,&pvStack_38);
      if (uVar1 != 0) {
        uVar1 = uStack_2c;
        if (0x7ffffffe < uStack_2c) {
          uVar1 = 0x7fffffff;
        }
        if (pvStack_38 == (void *)0x0) {
          return uVar1;
        }
        recovered_10001754(pvStack_38);
        return uVar1;
      }
    }
    uVar3 = strlen(param_1);
    iVar2 = (int)uVar3;
  }
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  return param_2 * iVar2 * 6;
}

#undef pvStack_38
#undef uStack_2c

#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ace8
 */

uint recovered_1000ace8(char *param_1,uint param_2,uint param_3,void *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000ad44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,0xffffffff,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010978

#undef str_100104ae
#define str_100104ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceaU)))
#define abStack_70 (*(byte (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ad54
 */

byte * recovered_1000ad54(byte *param_1,byte *param_2,char *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;

  if ((((param_2 <= param_1) || (param_3 == (char *)0x0)) || (*param_3 == '\0')) ||
     (bVar1 = recovered_1000a390((byte *)param_3), bVar1)) {
    pbVar4 = param_1 + 1;
  }
  else {
    pf_varargs_1000f7f4_1((char *)abStack_70,0x40,str_100104ae,(ulonglong)param_3);
    pbVar4 = param_1 + 1;
    pbVar2 = recovered_1000ade4(pbVar4,param_2,abStack_70);
    if (pbVar2 != (byte *)0x0) {
      uVar3 = strlen((char *)abStack_70);
      pbVar4 = pbVar2 + uVar3;
    }
  }
  return pbVar4;
}

#undef str_100104ae
#undef abStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ade4
 */

byte * recovered_1000ade4(byte *param_1,byte *param_2,byte *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;

  if (param_3 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = strlen((char *)param_3);
  }
  if ((((param_1 < param_2) && (param_1 != (byte *)0x0)) && (param_2 != (byte *)0x0)) &&
     ((param_3 != (byte *)0x0 && (uVar3 != 0)))) {
    for (; (param_1 + uVar3 <= param_2 && (*param_1 != 0)); param_1 = param_1 + 1) {
      pbVar4 = param_3;
      pbVar5 = param_1;
      uVar6 = uVar3;
      do {
        if (uVar6 == 0) {
          return param_1;
        }
        if (param_2 <= pbVar5) break;
        bVar2 = *pbVar5;
        if (bVar2 == 0) break;
        uVar1 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar1 = (uint)bVar2;
        }
        bVar2 = *pbVar4;
        uVar7 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41U) {
          uVar7 = (uint)bVar2;
        }
        uVar6 = uVar6 - 1;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (uVar1 == uVar7);
    }
  }
  return (byte *)0x0;
}


#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#define iStack_3d0 (*(int *)(frame + 16))
#define iStack_3cc (*(int *)(frame + 20))
#define iStack_3c8 (*(int *)(frame + 24))
#define uStack_3c4 (*(uint *)(frame + 28))
#define uStack_3c0 (*(uint *)(frame + 32))
#define acStack_3bc (*(char (*)[192])(frame + 36))
#define acStack_2fc (*(char (*)[640])(frame + 228))
#define uStack_7c (*(undefined4 *)(frame + 868))
#define uStack_78 (*(uint *)(frame + 872))
#define iStack_74 (*(int *)(frame + 876))
#define uStack_64 (*(undefined1 *)(frame + 892))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aebc
 */

long recovered_1000aebc(long param_1,int param_2,undefined *param_3,char *param_4,undefined8 param_5
                       ,int param_6,int *param_7)

{
  unsigned char frame[1024] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long unaff_x30;

  if (param_4 != (char *)0x0) {
    if (*param_4 != '\0') {
      memset(&iStack_3d0,0,0x370);
      uStack_7c = 0xffffffff;
      iStack_3d0 = param_2;
      uStack_78 = (uint)param_5;
      iStack_74 = param_6;
      uStack_3c4 = recovered_1000ac60(param_4,(uint)param_5);
      if ((int)(uint)param_5 < 2) {
        PF_PART4(param_5, 0) = 1;
      }
      uStack_3c0 = (uint)param_5 << 3 | 3;
      iStack_3cc = recovered_1000afe4(param_7,param_6,uStack_3c4);
      iStack_3c8 = param_7[2];
      uStack_64 = (undefined1)param_7[3];
      recovered_10001c8c(acStack_3bc,0xc0,(long)param_4);
      puVar1 = &DAT_1000fb37;
      if (param_3 != (undefined *)0x0) {
        puVar1 = param_3;
      }
      recovered_10001c8c(acStack_2fc,0x100,(long)puVar1);
      uVar2 = *(uint *)(param_1 + 0x52c40);
      if (uVar2 < 0x180) {
        *(uint *)(param_1 + 0x52c40) = uVar2 + 1;
        memcpy((void *)(param_1 + (ulong)uVar2 * 0x370 + 0x440),&iStack_3d0,0x370);
      }
      iVar3 = 8;
      if (param_2 != 1) {
        iVar3 = 4;
      }
      param_7[2] = uStack_3c0 + iVar3 + param_7[2];
      *param_4 = '\0';
    }
    param_1 = unaff_x30;
  }
  return param_1;
}

#undef DAT_1000fb37
#undef iStack_3d0
#undef iStack_3cc
#undef iStack_3c8
#undef uStack_3c4
#undef uStack_3c0
#undef acStack_3bc
#undef acStack_2fc
#undef uStack_7c
#undef uStack_78
#undef iStack_74
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000afe4
 */

int recovered_1000afe4(int *param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 2) {
    uVar1 = param_1[1] - param_3;
  }
  else {
    if (param_2 != 1) {
      return *param_1;
    }
    uVar1 = (param_1[1] - param_3) / 2;
  }
  return (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + *param_1;
}


#undef DAT_1001050d
#define DAT_1001050d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd49U)))
#define auStack_4a0 (*(undefined1 (*)[1024])(frame + 16))
#define acStack_a0 (*(char (*)[96])(frame + 1040))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b020
 */

ulong recovered_1000b020(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  unsigned char frame[1232] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  uVar2 = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    pf_varargs_1000f7f4_1(acStack_a0,0x60,&DAT_1001050d,param_2);
    uVar2 = recovered_100089cc(*(char **)(param_1 + 800),acStack_a0,auStack_4a0);
    if ((int)uVar2 != 0) {
      bVar1 = recovered_10008afc((long)auStack_4a0,(char *)param_3,(char *)param_4,param_5);
      uVar2 = (ulong)bVar1;
    }
  }
  return uVar2;
}

#undef DAT_1001050d
#undef auStack_4a0
#undef acStack_a0

#undef str_10010571
#define str_10010571 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdadU)))
#undef str_10010577
#define str_10010577 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb3U)))
#undef str_1001057e
#define str_1001057e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbaU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0a0
 */

bool recovered_1000b0a0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  char *pcVar6;
  uint uVar7;

  bVar5 = recovered_10004fc4(param_1,(byte *)str_10010571);
  if ((bVar5) || (bVar5 = recovered_10004fc4(param_1,(byte *)str_10010577), bVar5)) {
    return true;
  }
  pcVar6 = str_1001057e;
  bVar5 = false;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      bVar3 = *pcVar6;
      bVar5 = bVar3 == 0;
      if (bVar3 == 0) break;
      bVar4 = *param_1;
      if (bVar4 == 0) {
        return bVar5;
      }
      uVar1 = bVar4 | 0x20;
      if (0x19 < bVar4 - 0x41U) {
        uVar1 = (uint)bVar4;
      }
      uVar7 = (uint)bVar3;
      uVar2 = uVar7 | 0x20;
      if (0x19 < uVar7 - 0x41) {
        uVar2 = uVar7;
      }
      if (uVar1 != uVar2) {
        return bVar5;
      }
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  return bVar5;
}

#undef str_10010571
#undef str_10010577
#undef str_1001057e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b0f0
 */

undefined8 recovered_1000b0f0(byte *param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  ulong n;

  *param_2 = 0;
  if (param_1 != (byte *)0x0) {
    uVar2 = (uint)*param_1;
    while (uVar2 != 0) {
      while ((uVar2 < 0x2d && ((1L << ((ulong)uVar2 & 0x3f) & 0x100100003600U) != 0))) {
        param_1 = param_1 + 1;
        uVar2 = (uint)*param_1;
      }
      n = 0;
      while ((0x2c < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x100100003601U) == 0))) {
        uVar2 = (uint)param_1[n + 1];
        n = n + 1;
      }
      if ((n != 0) && (n < 0x100)) {
        memcpy(param_2,param_1,n);
        param_2[n] = 0;
        bVar1 = recovered_1000b0a0(param_2);
        if (!bVar1) {
          return 1;
        }
      }
      for (param_1 = param_1 + n; (uVar2 = (uint)*param_1, uVar2 != 0 && (uVar2 != 0x2c));
          param_1 = param_1 + 1) {
      }
    }
    *param_2 = 0;
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b1dc
 */

bool recovered_1000b1dc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return false;
  }
  for (uVar3 = 0;
      0x3f < *(byte *)(param_1 + uVar3) ||
      (1L << ((ulong)*(byte *)(param_1 + uVar3) & 0x3f) & 0x8000000800000001U) == 0;
      uVar3 = uVar3 + 1) {
  }
  if (3 < uVar3) {
    bVar1 = *(byte *)(param_1 + uVar3 + -4);
    uVar2 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41U) {
      uVar2 = (uint)bVar1;
    }
    if (uVar2 == 0x2e) {
      bVar1 = *(byte *)(param_1 + uVar3 + -3);
      uVar2 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar2 = (uint)bVar1;
      }
      if (uVar2 == 0x70) {
        bVar1 = *(byte *)(param_1 + uVar3 + -2);
        uVar2 = bVar1 | 0x20;
        if (0x19 < bVar1 - 0x41U) {
          uVar2 = (uint)bVar1;
        }
        if (uVar2 == 0x6e) {
          bVar1 = *(byte *)(param_1 + uVar3 + -1);
          uVar2 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41U) {
            uVar2 = (uint)bVar1;
          }
          return uVar2 == 0x67;
        }
      }
    }
  }
  return false;
}


#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_100105da
#define str_100105da (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe16U)))
#undef str_1001088f
#define str_1001088f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cbU)))
#undef str_100108a0
#define str_100108a0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10dcU)))
#define acStack_1f4 (*(char (*)[96])(frame + 28))
#define auStack_194 (*(undefined1 (*)[129])(frame + 124))
#define acStack_113 (*(char (*)[195])(frame + 253))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b290
 */

void recovered_1000b290(long param_1,long param_2,char *param_3,char *param_4)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;

  bVar1 = recovered_10004fc4((byte *)param_3,(byte *)str_1000fbdc);
  if ((!bVar1) && (bVar1 = recovered_10004fc4((byte *)param_3,(byte *)str_1000fbe4), !bVar1)) {
    return;
  }
  recovered_1000178c((char *)param_1);
  if (*(char *)(param_1 + 0x205e34) == '\x01') {
    pcVar4 = str_100105da;
  }
  else {
    memset((void *)(param_1 + 0x205d40),0,0x4b0);
    *(long *)(param_1 + 0x205d40) = param_1;
    memcpy((void *)(param_1 + 0x205d48),(void *)(param_1 + 0x205c54),0xec);
    *(undefined1 *)(param_1 + 0x205e34) = 1;
    lVar6 = param_1 + 0x58f8;
    for (uVar5 = 0; *(uint *)(param_1 + 0x205c38) != uVar5; uVar5 = uVar5 + 1) {
      if (lVar6 == param_2) goto LAB_1000b374;
      lVar6 = lVar6 + 0x555e0;
    }
    uVar5 = (ulong)*(uint *)(param_1 + 0x205c3c);
LAB_1000b374:
    *(int *)(param_1 + 0x205e3c) = (int)uVar5;
    recovered_10001c8c((char *)(param_1 + 0x205e50),0x100,(long)param_3);
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      recovered_10001c8c((char *)(param_1 + 0x206110),0x60,(long)param_4);
    }
    memset(auStack_194,0,0x144);
    acStack_1f4[0] = '\0';
    uVar3 = recovered_10005ddc((long)param_3,auStack_194,acStack_1f4,0x60);
    if ((int)uVar3 != 0) {
      param_3 = acStack_113;
    }
    recovered_1000b918(param_3,(byte *)(param_1 + 0x205f50),0x80);
    bVar1 = recovered_100019c8(0x94);
    if (bVar1) {
      uVar2 = UINT_82010894;
      if (uVar2 == 0) goto LAB_1000b440;
      uVar2 = (*(code *)(ulong)uVar2)(recovered_1000ba28,(void *)(param_1 + 0x205d40),str_1001088f);
      *(uint *)(param_1 + 0x205e38) = uVar2;
      if (uVar2 != 0) {
        recovered_1000bda0(param_1 + 0x205d40,(char *)(param_2 + 0x141));
        goto LAB_1000b458;
      }
    }
    else {
LAB_1000b440:
      *(undefined4 *)(param_1 + 0x205e38) = 0;
    }
    *(undefined1 *)(param_1 + 0x205e34) = 0;
    pcVar4 = str_100108a0;
  }
  recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)pcVar4);
LAB_1000b458:
  *(undefined1 *)(param_1 + 0x57ee) = 1;
  return;
}

#undef str_1000fbdc
#undef str_1000fbe4
#undef str_100105da
#undef str_1001088f
#undef str_100108a0
#undef acStack_1f4
#undef auStack_194
#undef acStack_113

#undef DAT_1000fdc5
#define DAT_1000fdc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x601U)))
#undef str_10010a98
#define str_10010a98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12d4U)))
#define acStack_140 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b46c
 */

void recovered_1000b46c(long param_1,long param_2,char *param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char *vararg0;
  undefined8 uVar1;

  vararg0 = recovered_1000be3c(param_3);
  if ((param_3 != (char *)0x0) && (uVar1 = recovered_10001ba4(param_2), (int)uVar1 != 0)) {
    pf_varargs_1000f7f4_1(acStack_140,0x100,&DAT_1000fdc5,(ulonglong)param_3);
    pf_varargs_1000f7f4_4
              (*(char **)(param_2 + 0x310),0x50000,str_10010a98,(ulonglong)vararg0,
               (ulonglong)vararg0,(ulonglong)acStack_140,(ulonglong)vararg0);
    recovered_10001c8c((char *)(param_2 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x132fU));
    recovered_10001cc4(param_1,(char *)param_2);
    recovered_100024dc(param_1,param_2);
  }
  return;
}

#undef DAT_1000fdc5
#undef str_10010a98
#undef acStack_140

#undef str_10010577
#define str_10010577 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b510
 */

void recovered_1000b510(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  byte *b;
  long lVar6;

  if ((*(byte *)(param_1 + 0x555dc) & 1) != 0) {
    return;
  }
  b = (byte *)(param_1 + 1);
  if (*b == 0) {
    return;
  }
  bVar2 = recovered_10004fc4(b,(byte *)str_10010577);
  if (bVar2) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x554d4);
  if (uVar5 != 0) {
    if (*(uint *)(param_1 + 0x554d8) < uVar5) {
      iVar3 = strcmp((char *)(param_1 + (ulong)*(uint *)(param_1 + 0x554d8) * 0x100 +
                                         0x544d4),(char *)b);
      if (iVar3 == 0) {
        return;
      }
      uVar5 = *(uint *)(param_1 + 0x554d4);
      if (uVar5 == 0) goto LAB_1000b5d0;
    }
    uVar1 = *(int *)(param_1 + 0x554d8) + 1;
    if (uVar1 < uVar5) {
      *(uint *)(param_1 + 0x554d4) = uVar1;
      uVar5 = uVar1;
    }
    if (0xf < uVar5) {
      lVar6 = 0xf;
      pcVar4 = (char *)(param_1 + 0x544d4);
      do {
        recovered_10001c8c(pcVar4,0x100,(long)(pcVar4 + 0x100));
        lVar6 = lVar6 + -1;
        pcVar4 = pcVar4 + 0x100;
      } while (lVar6 != 0);
      uVar5 = 0xf;
      *(undefined4 *)(param_1 + 0x554d4) = 0xf;
    }
  }
LAB_1000b5d0:
  *(uint *)(param_1 + 0x554d8) = uVar5;
  recovered_10001c8c((char *)(param_1 + (ulong)uVar5 * 0x100 + 0x544d4),0x100,(long)b);
  *(int *)(param_1 + 0x554d4) = *(int *)(param_1 + 0x554d4) + 1;
  return;
}

#undef str_10010577

#undef DAT_1000fa88
#define DAT_1000fa88 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2c4U)))
#undef DAT_1000fa90
#define DAT_1000fa90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2ccU)))
#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#undef DAT_1000fbc5
#define DAT_1000fbc5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x401U)))
#undef DAT_1000fbc9
#define DAT_1000fbc9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x405U)))
#undef DAT_1000fbd7
#define DAT_1000fbd7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x413U)))
#undef DAT_1000fc21
#define DAT_1000fc21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x45dU)))
#undef DAT_10010282
#define DAT_10010282 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabeU)))
#undef DAT_1001029c
#define DAT_1001029c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xad8U)))
#undef DAT_1001029f
#define DAT_1001029f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadbU)))
#undef DAT_100102a2
#define DAT_100102a2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xadeU)))
#undef DAT_100102a5
#define DAT_100102a5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae1U)))
#undef DAT_100102a8
#define DAT_100102a8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae4U)))
#undef DAT_100102ab
#define DAT_100102ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae7U)))
#undef DAT_100102ae
#define DAT_100102ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaeaU)))
#undef DAT_100102b3
#define DAT_100102b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaefU)))
#undef DAT_100102b6
#define DAT_100102b6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xaf2U)))
#undef DAT_100102c1
#define DAT_100102c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafdU)))
#undef DAT_100102eb
#define DAT_100102eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb27U)))
#undef DAT_100102ee
#define DAT_100102ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2aU)))
#undef DAT_100102f7
#define DAT_100102f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb33U)))
#undef DAT_100102f9
#define DAT_100102f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb35U)))
#undef DAT_10010316
#define DAT_10010316 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb52U)))
#undef DAT_10010321
#define DAT_10010321 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb5dU)))
#undef DAT_10010331
#define DAT_10010331 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6dU)))
#undef DAT_10010335
#define DAT_10010335 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb71U)))
#undef DAT_10010364
#define DAT_10010364 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba0U)))
#undef DAT_10010368
#define DAT_10010368 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba4U)))
#undef DAT_1001036d
#define DAT_1001036d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba9U)))
#undef DAT_10010372
#define DAT_10010372 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaeU)))
#undef DAT_100103c5
#define DAT_100103c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc01U)))
#undef DAT_100103ce
#define DAT_100103ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0aU)))
#undef DAT_100103d3
#define DAT_100103d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0fU)))
#undef DAT_100103df
#define DAT_100103df (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1bU)))
#undef DAT_100103f2
#define DAT_100103f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2eU)))
#undef DAT_100103fd
#define DAT_100103fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc39U)))
#undef DAT_10010411
#define DAT_10010411 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4dU)))
#undef DAT_10010470
#define DAT_10010470 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcacU)))
#undef DAT_100104dd
#define DAT_100104dd (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd19U)))
#undef DAT_100104f8
#define DAT_100104f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd34U)))
#undef DAT_10010508
#define DAT_10010508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd44U)))
#undef DAT_10010511
#define DAT_10010511 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4dU)))
#undef DAT_100180d0
#define DAT_100180d0 (*(int *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_1000fc01
#define str_1000fc01 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x43dU)))
#undef str_1000fc07
#define str_1000fc07 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x443U)))
#undef str_1000fc10
#define str_1000fc10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44cU)))
#undef str_1000fc17
#define str_1000fc17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x453U)))
#undef str_100102b9
#define str_100102b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf5U)))
#undef str_100102c5
#define str_100102c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb01U)))
#undef str_100102cc
#define str_100102cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb08U)))
#undef str_100102d5
#define str_100102d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb11U)))
#undef str_100102db
#define str_100102db (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb17U)))
#undef str_100102e4
#define str_100102e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb20U)))
#undef str_100102f1
#define str_100102f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2dU)))
#undef str_100102fc
#define str_100102fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb38U)))
#undef str_10010303
#define str_10010303 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3fU)))
#undef str_10010309
#define str_10010309 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb45U)))
#undef str_1001030f
#define str_1001030f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb4bU)))
#undef str_1001031a
#define str_1001031a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb56U)))
#undef str_10010326
#define str_10010326 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb62U)))
#undef str_10010339
#define str_10010339 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb75U)))
#undef str_1001033f
#define str_1001033f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7bU)))
#undef str_10010346
#define str_10010346 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb82U)))
#undef str_1001034d
#define str_1001034d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb89U)))
#undef str_10010354
#define str_10010354 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb90U)))
#undef str_1001035d
#define str_1001035d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb99U)))
#undef str_10010375
#define str_10010375 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb1U)))
#undef str_1001037b
#define str_1001037b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbb7U)))
#undef str_10010382
#define str_10010382 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbeU)))
#undef str_10010389
#define str_10010389 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc5U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
#undef str_10010396
#define str_10010396 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbd2U)))
#undef str_1001039e
#define str_1001039e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbdaU)))
#undef str_100103a5
#define str_100103a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe1U)))
#undef str_100103ae
#define str_100103ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbeaU)))
#undef str_100103b7
#define str_100103b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf3U)))
#undef str_100103bd
#define str_100103bd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf9U)))
#undef str_100103c8
#define str_100103c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc04U)))
#undef str_100103d8
#define str_100103d8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc14U)))
#undef str_100103e3
#define str_100103e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc1fU)))
#undef str_100103e9
#define str_100103e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc25U)))
#undef str_100103f6
#define str_100103f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc32U)))
#undef str_10010402
#define str_10010402 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3eU)))
#undef str_10010416
#define str_10010416 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc52U)))
#undef str_10010422
#define str_10010422 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc5eU)))
#undef str_1001042c
#define str_1001042c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc68U)))
#undef str_10010436
#define str_10010436 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc72U)))
#undef str_1001043c
#define str_1001043c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc78U)))
#undef str_100104c5
#define str_100104c5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd01U)))
#undef str_100104fd
#define str_100104fd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd39U)))
#undef str_10010516
#define str_10010516 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd52U)))
#undef str_10010522
#define str_10010522 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd5eU)))
#undef str_10010529
#define str_10010529 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd65U)))
#undef str_100105ac
#define str_100105ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xde8U)))
#undef str_100105bf
#define str_100105bf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdfbU)))
#undef str_100105c7
#define str_100105c7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe03U)))
#undef str_100105d1
#define str_100105d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe0dU)))
#undef str_10010b0e
#define str_10010b0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x134aU)))
#undef str_10010b5b
#define str_10010b5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1397U)))
#undef str_10010b61
#define str_10010b61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139dU)))
#define uStack_1834 (*(uint *)(frame + 28))
#define uStack_1830 (*(uint *)(frame + 32))
#define uStack_182c (*(uint *)(frame + 36))
#define uStack_1828 (*(undefined8 *)(frame + 40))
#define iStack_1818 (*(int *)(frame + 56))
#define iStack_1814 (*(int *)(frame + 60))
#define uStack_1810 (*(uint *)(frame + 64))
#define abStack_1809 (*(byte (*)[128])(frame + 71))
#define bStack_1789 (*(byte *)(frame + 199))
#define abStack_1788 (*(byte (*)[40])(frame + 200))
#define abStack_1760 (*(byte (*)[512])(frame + 240))
#define acStack_1560 (*(char (*)[256])(frame + 752))
#define abStack_1460 (*(byte (*)[4])(frame + 1008))
#define aiStack_145c (*(int (*)[47])(frame + 1012))
#define iStack_13a0 (*(int *)(frame + 1200))
#define auStack_139c (*(ulong (*)[2])(frame + 1204))
#define auStack_138c (*(ulong (*)[5])(frame + 1220))
#define auStack_1364 (*(ulong (*)[136])(frame + 1260))
#define aiStack_f20 (*(int (*)[12])(frame + 2352))
#define acStack_ef0 (*(char (*)[256])(frame + 2400))
#define uStack_df0 (*(undefined8 *)(frame + 2656))
#define uStack_de8 (*(undefined8 *)(frame + 2664))
#define abStack_dd4 (*(byte (*)[256])(frame + 2684))
#define abStack_cd4 (*(byte (*)[64])(frame + 2940))
#define acStack_c94 (*(char (*)[96])(frame + 3004))
#define abStack_c34 (*(byte (*)[180])(frame + 3100))
#define abStack_b80 (*(byte (*)[64])(frame + 3280))
#define aiStack_b40 (*(int (*)[24])(frame + 3344))
#define abStack_ae0 (*(byte (*)[512])(frame + 3440))
#define auStack_8e0 (*(uint (*)[24])(frame + 3952))
#define uStack_880 (*(undefined8 *)(frame + 4048))
#define uStack_878 (*(undefined8 *)(frame + 4056))
#define iStack_870 (*(int *)(frame + 4064))
#define acStack_86c (*(char (*)[192])(frame + 4068))
#define acStack_7ac (*(char (*)[640])(frame + 4260))
#define uStack_52c (*(undefined8 *)(frame + 4900))
#define iStack_524 (*(int *)(frame + 4908))
#define uStack_514 (*(undefined1 *)(frame + 4924))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b604
 */

/* WARNING: Type propagation algorithm not settling */

void recovered_1000b604(long param_1,long param_2,char *in_x2,char *in_x3)

{
  unsigned char frame[6256] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char *pcVar2;
  char *src;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 uVar23;
  char *pcVar24;
  uint *puVar25;
  undefined4 uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  int *piVar31;
  undefined1 *dst;
  byte bVar32;
  byte *pbVar33;
  ulong uVar34;
  ulong uVar35;
  uint128 auVar36;

  uVar23 = recovered_10001ba4(param_2);
  if ((int)uVar23 == 0) {
    return;
  }
  pcVar2 = str_10010b5b;
  if (in_x2 != (char *)0x0) {
    pcVar2 = in_x2;
  }
  pcVar17 = str_10010b61;
  if (in_x3 != (char *)0x0) {
    pcVar17 = in_x3;
  }
  pf_varargs_1000f7f4_3
            (*(char **)(param_2 + 0x310),0x50000,str_10010b0e,(ulonglong)pcVar2,(ulonglong)pcVar2,
             (ulonglong)pcVar17);
  recovered_10001cc4(param_1,(char *)param_2);
  uStack_df0 = CONCAT44(DAT_100180d0 + -0x3c,0x1e);
  uStack_de8 = CONCAT35(PF_PART3(uStack_de8, 5),0x12);
  if ((param_2 == 0) || (uVar23 = recovered_10001ba4(param_2), (int)uVar23 == 0)) {
    return;
  }
  puVar1 = (uint *)(param_2 + 0x544c4);
  pbVar33 = *(byte **)(param_2 + 0x318);
  *(undefined4 *)(param_2 + 0x52c40) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0xffffffff;
  acStack_ef0[0] = '\0';
  memset(&iStack_13a0,0,0x480);
  memset(abStack_1460,0,0xc0);
  uVar7 = DAT_1000fa90;
  uVar23 = DAT_1000fa88;
  uStack_1828 = 0;
  uStack_182c = 0;
  iStack_1814 = 0;
  bVar9 = false;
  iStack_1818 = 0;
  acStack_1560[0] = '\0';
  pcVar2 = (char *)(param_2 + 0x101);
  uStack_1834 = 0;
  uStack_1830 = 0xffffffff;
  uStack_1810 = 1;
LAB_100025e8:
  do {
    iVar13 = 2;
    pcVar17 = acStack_ef0;
    if (!bVar9) {
      iVar13 = iStack_1818;
      pcVar17 = &DAT_1000fb37;
    }
    while( true ) {
      if ((pbVar33 == (byte *)0x0) || (*pbVar33 == 0)) goto LAB_10004578;
      if (*pbVar33 == 0x3c) break;
      pbVar16 = (byte *)strchr((char *)pbVar33,0x3c);
      if (pbVar16 == (byte *)0x0) {
        uVar34 = strlen((char *)pbVar33);
      }
      else {
        uVar34 = (long)pbVar16 - (long)pbVar33;
      }
      iVar12 = (int)uVar34;
      if (0x1fe < iVar12) {
        iVar12 = 0x1ff;
      }
      memcpy(&uStack_880,pbVar33,(long)iVar12);
      *(byte *)((long)&uStack_880 + (long)iVar12) = 0;
      if ((byte)uStack_880 != 0) {
        recovered_10009368(param_2,(byte *)&uStack_880,iVar13,pcVar17,uStack_1810,iStack_1814,
                           (int *)&uStack_df0);
      }
      pbVar33 = pbVar33 + uVar34;
      if (pbVar16 != (byte *)0x0) {
        pbVar33 = pbVar16;
      }
    }
    pcVar17 = strchr((char *)pbVar33,0x3e);
    if (pcVar17 == (char *)0x0) {
LAB_10004578:
      iVar13 = (int)uStack_de8 + 0x20;
      if ((int)uStack_de8 + 0x20 <= DAT_100180d4 + -0x5e) {
        iVar13 = DAT_100180d4 + -0x5e;
      }
      *(int *)(param_2 + 0x544d0) = iVar13;
      recovered_1000a34c(param_2);
      return;
    }
    bStack_1789 = 0;
    uVar27 = (uint)pcVar17;
    iVar13 = uVar27 + ~(uint)pbVar33;
    if (0x1fe < iVar13) {
      iVar13 = 0x1ff;
    }
    memcpy(abStack_1760,pbVar33 + 1,(long)iVar13);
    abStack_1760[iVar13] = 0;
    recovered_10004cb8(abStack_1760,abStack_1788,0x28,&bStack_1789);
    iVar13 = strncmp((char *)abStack_1760,&DAT_1000fbc5,3);
    if (iVar13 != 0) {
      if (((bStack_1789 & 1) == 0) && (abStack_1788[0] == 0x21)) goto LAB_100026fc;
      if (bStack_1789 == 0) {
        if (((**(char **)(param_2 + 0x328) == '\0') ||
            (bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102cc), !bVar10)) &&
           ((bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102d5), bVar10 ||
            (((bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102db), bVar10 ||
              (bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102e4), bVar10)) ||
             (uVar18 = recovered_10009144(param_2,(char *)abStack_1760,(char *)abStack_1788),
             (int)uVar18 == 0)))))) {
          bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102eb);
          if (bVar10) {
            uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 0xe);
          }
          else {
            bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102ee);
            if (bVar10) {
              pbVar33 = (byte *)(pcVar17 + 1);
              pcVar14 = recovered_100052e0((char *)pbVar33,str_100102f1);
              if (pcVar14 != (char *)0x0) {
                if ((PF_PART4(uStack_1828, 4) == 0) ||
                   (uVar34 = (ulong)(PF_PART4(uStack_1828, 4) - 1), abStack_1460[uVar34 * 0xc] != 1)) {
                  aiStack_b40[0] = (int)uStack_de8 + 2;
                  uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),aiStack_b40[0]);
                  auStack_8e0[0] = (uint)uStack_df0;
                  abStack_ae0[0] = 0;
                  recovered_1000aadc(param_2,(int *)&uStack_df0,(int *)auStack_8e0,aiStack_b40,
                                     &DAT_100102f7,0,&DAT_1000fb37,uStack_1810);
                  bVar10 = false;
                  pbVar16 = pbVar33 + ~(ulong)pcVar17 + (long)pcVar14;
                  uVar27 = uStack_1810;
                  if ((int)uStack_1810 < 2) {
                    uVar27 = 1;
                  }
LAB_10002c04:
                  uVar26 = 2;
                  pbVar20 = abStack_ae0;
                  if (!bVar10) {
                    uVar26 = 0;
                    pbVar20 = &DAT_1000fb37;
                  }
                  while( true ) {
                    if ((pbVar16 <= pbVar33) || (*pbVar33 == 0)) goto LAB_10002e2c;
                    if (*pbVar33 == 0x3c) break;
                    pbVar19 = (byte *)recovered_1000a7e8((long)pbVar33,'<',
                                                         (long)pbVar16 - (long)pbVar33);
                    iVar13 = (int)((long)pbVar16 - (long)pbVar33);
                    pbVar3 = pbVar16;
                    if (pbVar19 != (byte *)0x0) {
                      iVar13 = (int)pbVar19 - (uint)pbVar33;
                      pbVar3 = pbVar19;
                    }
                    if (0x1fe < iVar13) {
                      iVar13 = 0x1ff;
                    }
                    memcpy(&uStack_880,pbVar33,(long)iVar13);
                    *(byte *)((long)&uStack_880 + (long)iVar13) = 0;
                    recovered_1000a810(param_2,(int *)&uStack_df0,(int *)auStack_8e0,aiStack_b40,
                                       (char *)&uStack_880,uVar26,pbVar20,uStack_1810);
                    pbVar33 = pbVar3;
                  }
                  pbVar20 = (byte *)recovered_1000a7e8((long)pbVar33,'>',
                                                       (long)pbVar16 - (long)pbVar33);
                  if (pbVar20 == (byte *)0x0) break;
                  acStack_c94[0] = '\0';
                  iVar13 = (int)pbVar20 + ~(uint)pbVar33;
                  if (0xfe < iVar13) {
                    iVar13 = 0xff;
                  }
                  memcpy(&uStack_880,pbVar33 + 1,(long)iVar13);
                  *(byte *)((long)&uStack_880 + (long)iVar13) = 0;
                  recovered_10004cb8((byte *)&uStack_880,abStack_1809,0x28,acStack_c94);
                  cVar8 = acStack_c94[0];
                  bVar11 = recovered_10004d9c(abStack_1809,&DAT_10010282);
                  if (cVar8 == '\x01') {
                    if (bVar11) {
                      bVar10 = false;
                      abStack_ae0[0] = 0;
                    }
                  }
                  else {
                    if (bVar11) {
                      pbVar33 = (byte *)recovered_100052e0((char *)(pbVar20 + 1),&DAT_10010321);
                      recovered_10004e00((char *)&uStack_880,&DAT_1000fbd7,abStack_ae0,0x100);
                      recovered_10004e00((char *)&uStack_880,str_10010326,abStack_c34,0x80);
                      bVar32 = abStack_ae0[0];
                      bVar10 = abStack_ae0[0] != 0;
                      if (((pbVar33 == (byte *)0x0) || (pbVar16 <= pbVar33)) ||
                         (recovered_10009a44(param_2,pbVar20 + 1,(long)(pbVar33 + ~(ulong)pbVar20),
                                             (char *)abStack_dd4,0x100),
                         abStack_dd4[0] == 0 && abStack_c34[0] == 0)) goto LAB_10002df8;
                      pbVar20 = abStack_dd4;
                      if (abStack_dd4[0] == 0) {
                        pbVar20 = abStack_c34;
                      }
                      pbVar3 = abStack_ae0;
                      if (bVar32 == 0) {
                        pbVar3 = &DAT_1000fb37;
                      }
                      recovered_1000a810(param_2,(int *)&uStack_df0,(int *)auStack_8e0,aiStack_b40,
                                         (char *)pbVar20,(uint)(bVar32 != 0) << 1,pbVar3,uStack_1810
                                        );
                      bVar10 = false;
                      pbVar33 = pbVar33 + 4;
                      abStack_ae0[0] = 0;
                      goto LAB_10002c04;
                    }
                    bVar11 = recovered_10004d9c(abStack_1809,&DAT_100102eb);
                    if (!bVar11) {
                      uVar34 = recovered_10009144(param_2,(char *)&uStack_880,(char *)abStack_1809);
                      if (((uVar34 & 1) == 0) &&
                         (bVar11 = recovered_100095b4(abStack_1809), !bVar11)) goto LAB_10002df8;
                      auVar36 = recovered_1000a92c(pbVar20,pbVar16,(char *)abStack_1809);
                      pbVar33 = PF_PART8(auVar36, 0);
                      goto LAB_10002c04;
                    }
                    auStack_8e0[0] = (uint)uStack_df0;
                    aiStack_b40[0] = ((uVar27 & 0xfffffff) << 3 | 4) + aiStack_b40[0];
                  }
LAB_10002df8:
                  pbVar33 = pbVar20 + 1;
                  goto LAB_10002c04;
                }
                bVar10 = false;
                abStack_ae0[0] = 0;
                pbVar16 = pbVar33 + ~(ulong)pcVar17 + (long)pcVar14;
                uVar27 = uStack_1810;
                if ((int)uStack_1810 < 2) {
                  uVar27 = 1;
                }
LAB_10002910:
                uVar26 = 2;
                pbVar20 = abStack_ae0;
                if (!bVar10) {
                  uVar26 = 0;
                  pbVar20 = &DAT_1000fb37;
                }
                while( true ) {
                  if ((pbVar16 <= pbVar33) || (*pbVar33 == 0)) goto LAB_10002e40;
                  if (*pbVar33 == 0x3c) break;
                  pbVar19 = (byte *)recovered_1000a7e8((long)pbVar33,'<',
                                                       (long)pbVar16 - (long)pbVar33);
                  iVar13 = (int)((long)pbVar16 - (long)pbVar33);
                  pbVar3 = pbVar16;
                  if (pbVar19 != (byte *)0x0) {
                    iVar13 = (int)pbVar19 - (uint)pbVar33;
                    pbVar3 = pbVar19;
                  }
                  if (0x1fe < iVar13) {
                    iVar13 = 0x1ff;
                  }
                  memcpy(&uStack_880,pbVar33,(long)iVar13);
                  *(byte *)((long)&uStack_880 + (long)iVar13) = 0;
                  recovered_1000a810(param_2,(int *)&uStack_df0,aiStack_145c + uVar34 * 3,
                                     aiStack_145c + uVar34 * 3 + 1,(char *)&uStack_880,uVar26,
                                     pbVar20,uStack_1810);
                  pbVar33 = pbVar3;
                }
                pbVar20 = (byte *)recovered_1000a7e8((long)pbVar33,'>',(long)pbVar16 - (long)pbVar33
                                                    );
                if (pbVar20 == (byte *)0x0) goto LAB_10002e40;
                auStack_8e0[0] = auStack_8e0[0] & 0xffffff00;
                iVar13 = (int)pbVar20 + ~(uint)pbVar33;
                if (0xfe < iVar13) {
                  iVar13 = 0xff;
                }
                memcpy(&uStack_880,pbVar33 + 1,(long)iVar13);
                *(byte *)((long)&uStack_880 + (long)iVar13) = 0;
                recovered_10004cb8((byte *)&uStack_880,abStack_1809,0x28,(undefined1 *)auStack_8e0);
                cVar8 = (char)auStack_8e0[0];
                bVar11 = recovered_10004d9c(abStack_1809,&DAT_10010282);
                if (cVar8 == '\x01') {
                  if (bVar11) {
                    bVar10 = false;
                    abStack_ae0[0] = 0;
                  }
                }
                else {
                  if (bVar11) {
                    pbVar33 = (byte *)recovered_100052e0((char *)(pbVar20 + 1),&DAT_10010321);
                    recovered_10004e00((char *)&uStack_880,&DAT_1000fbd7,abStack_ae0,0x100);
                    recovered_10004e00((char *)&uStack_880,str_10010326,abStack_c34,0x80);
                    bVar32 = abStack_ae0[0];
                    bVar10 = abStack_ae0[0] != 0;
                    if (((pbVar33 == (byte *)0x0) || (pbVar16 <= pbVar33)) ||
                       (recovered_10009a44(param_2,pbVar20 + 1,(long)(pbVar33 + ~(ulong)pbVar20),
                                           (char *)abStack_dd4,0x100),
                       abStack_dd4[0] == 0 && abStack_c34[0] == 0)) goto LAB_10002b14;
                    pbVar20 = abStack_dd4;
                    if (abStack_dd4[0] == 0) {
                      pbVar20 = abStack_c34;
                    }
                    pbVar3 = abStack_ae0;
                    if (bVar32 == 0) {
                      pbVar3 = &DAT_1000fb37;
                    }
                    recovered_1000a810(param_2,(int *)&uStack_df0,aiStack_145c + uVar34 * 3,
                                       aiStack_145c + uVar34 * 3 + 1,(char *)pbVar20,
                                       (uint)(bVar32 != 0) << 1,pbVar3,uStack_1810);
                    bVar10 = false;
                    pbVar33 = pbVar33 + 4;
                    abStack_ae0[0] = 0;
                    goto LAB_10002910;
                  }
                  bVar11 = recovered_10004d9c(abStack_1809,&DAT_100102eb);
                  if (!bVar11) {
                    uVar21 = recovered_10009144(param_2,(char *)&uStack_880,(char *)abStack_1809);
                    if (((uVar21 & 1) == 0) && (bVar11 = recovered_100095b4(abStack_1809), !bVar11))
                    goto LAB_10002b14;
                    auVar36 = recovered_1000a92c(pbVar20,pbVar16,(char *)abStack_1809);
                    pbVar33 = PF_PART8(auVar36, 0);
                    goto LAB_10002910;
                  }
                  iVar13 = aiStack_145c[uVar34 * 3 + 1];
                  aiStack_145c[uVar34 * 3] = (uint)uStack_df0;
                  aiStack_145c[uVar34 * 3 + 1] = (uVar27 << 3 | 4) + iVar13;
                }
LAB_10002b14:
                pbVar33 = pbVar20 + 1;
                goto LAB_10002910;
              }
              uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 2);
              recovered_10009368(param_2,&DAT_100102f7,0,&DAT_1000fb37,uStack_1810,iStack_1814,
                                 (int *)&uStack_df0);
            }
            else {
              bVar10 = recovered_100095b4(abStack_1788);
              if (bVar10) goto LAB_10002b60;
              bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102f9);
              if (bVar10) {
                recovered_10009640(param_2,(undefined4 *)&uStack_df0);
                goto LAB_100027e4;
              }
              bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102b3);
              if ((bVar10) || (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102b6), bVar10)) {
                bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102b3);
                if ((bVar10) ||
                   ((bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102b6), bVar10 ||
                    (bVar10 = recovered_10004d9c(abStack_1788,&DAT_10010470), bVar10)))) {
                  abStack_b80[0] = 0;
                  recovered_10004e00((char *)abStack_1760,str_1000fc01,abStack_ae0,0x200);
                  if ((abStack_ae0[0] == 0) ||
                     (bVar10 = recovered_10008afc((long)abStack_ae0,str_100104c5,(char *)abStack_b80
                                                  ,0x40), !bVar10)) {
                    recovered_10004e00((char *)abStack_1760,&DAT_10010372,(undefined1 *)aiStack_b40,
                                       0x60);
                    if ((char)aiStack_b40[0] != '\0') {
                      pf_varargs_1000f7f4_1
                                ((char *)abStack_1809,0x70,&DAT_100104dd,(ulonglong)aiStack_b40);
                      uVar18 = recovered_100089cc(*(char **)(param_2 + 800),(char *)abStack_1809,
                                                  (undefined1 *)&uStack_880);
                      if (((int)uVar18 != 0) &&
                         (bVar10 = recovered_10008afc((long)&uStack_880,str_100104c5,
                                                      (char *)abStack_b80,0x40), bVar10))
                      goto LAB_100030c0;
                    }
                    recovered_10004e00((char *)abStack_1760,str_10010303,abStack_dd4,0xb4);
                    uVar27 = (uint)abStack_dd4[0];
                    if (abStack_dd4[0] != 0) {
                      abStack_b80[0] = 0;
                      pbVar33 = abStack_dd4;
                      if (abStack_dd4[0] != 0) {
                        do {
                          while ((uVar27 < 0x21 &&
                                 ((1L << ((ulong)uVar27 & 0x3f) & 0x100003600U) != 0))) {
                            pbVar33 = pbVar33 + 1;
                            uVar27 = (uint)*pbVar33;
                          }
                          lVar29 = 0;
                          while( true ) {
                            if ((uVar27 < 0x21) &&
                               ((1L << ((ulong)uVar27 & 0x3f) & 0x100003601U) != 0)) {
                              lVar28 = lVar29;
                              goto LAB_10003024;
                            }
                            if (lVar29 == 0x5f) break;
                            *(char *)((long)auStack_8e0 + lVar29) = (char)uVar27;
                            uVar27 = (uint)pbVar33[lVar29 + 1];
                            lVar29 = lVar29 + 1;
                          }
                          lVar28 = 0x5f;
LAB_10003024:
                          *(undefined1 *)((long)auStack_8e0 + lVar28) = 0;
                          pbVar33 = pbVar33 + lVar29;
                          if (((char)auStack_8e0[0] != '\0') &&
                             (uVar34 = recovered_1000b020(param_2,(long)auStack_8e0,((uintptr_t)pf_module_state + 0xd01U),
                                                          (long)abStack_b80,0x40), (int)uVar34 != 0)
                             ) goto LAB_100030c0;
                          for (; 0x20 < *pbVar33 ||
                                 (1L << ((ulong)*pbVar33 & 0x3f) & 0x100003601U) == 0;
                              pbVar33 = pbVar33 + 1) {
                          }
                          uVar27 = (uint)*pbVar33;
                        } while (uVar27 != 0);
                      }
                    }
                    if (((abStack_1788[0] != 0) &&
                        (uVar18 = recovered_100089cc(*(char **)(param_2 + 800),(char *)abStack_1788,
                                                     (undefined1 *)&uStack_880), (int)uVar18 != 0))
                       && (bVar10 = recovered_10008afc((long)&uStack_880,str_100104c5,
                                                       (char *)abStack_b80,0x40), bVar10))
                    goto LAB_100030c0;
LAB_10003110:
                    recovered_10004e00((char *)abStack_1760,str_10010303,abStack_c34,0xb4);
                    recovered_10004e00((char *)abStack_1760,&DAT_10010372,acStack_c94,0x60);
                    recovered_10004e00((char *)abStack_1760,&DAT_100104f8,abStack_cd4,0x40);
                    bVar10 = recovered_10004d9c(abStack_cd4,(byte *)str_100104fd);
                    if (((!bVar10) &&
                        (pcVar14 = recovered_100052e0((char *)abStack_c34,&DAT_10010470),
                        pcVar14 == (char *)0x0)) &&
                       ((pcVar14 = recovered_100052e0((char *)abStack_c34,&DAT_10010508),
                        pcVar14 == (char *)0x0 &&
                        (pcVar14 = recovered_100052e0(acStack_c94,&DAT_10010470),
                        pcVar14 == (char *)0x0)))) {
                      pcVar14 = recovered_100052e0(acStack_c94,&DAT_10010508);
                      if (pcVar14 == (char *)0x0) goto LAB_100036d0;
                      bVar32 = 1;
                      iVar13 = 4;
                      goto LAB_100031a4;
                    }
                  }
                  else {
LAB_100030c0:
                    bVar10 = recovered_10004d9c(abStack_b80,&DAT_10010511);
                    if (((!bVar10) &&
                        (bVar10 = recovered_10004d9c(abStack_b80,(byte *)str_10010516), !bVar10)) &&
                       ((bVar10 = recovered_10004d9c(abStack_b80,(byte *)str_10010522), !bVar10 &&
                        (bVar10 = recovered_10004d9c(abStack_b80,(byte *)str_10010529), !bVar10))))
                    goto LAB_10003110;
                  }
                  bVar32 = 1;
                  iVar13 = 4;
                }
                else {
LAB_100036d0:
                  bVar32 = 0;
                  iVar13 = 6;
                }
LAB_100031a4:
                uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + iVar13);
                if (PF_PART4(uStack_1828, 4) < 0x10) {
                  uVar34 = (ulong)PF_PART4(uStack_1828, 4);
                  memset(abStack_1460 + uVar34 * 0xc,0,0xc);
                  abStack_1460[uVar34 * 0xc] = bVar32;
                  aiStack_145c[uVar34 * 3] = (uint)uStack_df0;
                  aiStack_145c[uVar34 * 3 + 1] = (int)uStack_de8;
                  uStack_1828 = CONCAT44(PF_PART4(uStack_1828, 4) + 1,(uint)uStack_1828);
                }
              }
              else {
                bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102b9);
                if (bVar10) {
                  if ((uint)uStack_1828 < 8) {
                    PF_PART4(uStack_1828, 0) = (uint)uStack_1828 + 1;
                  }
                  acStack_1560[0] = '\0';
                }
                else {
                  bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102fc);
                  if (bVar10) {
                    if (((uint)uStack_1828 != 0) && (acStack_1560[0] == '\0')) {
                      recovered_100096d8((long)abStack_1760,acStack_1560);
                    }
                  }
                  else {
                    bVar10 = recovered_10008e40(abStack_1788);
                    if (bVar10) {
                      bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102c1);
                      if (bVar10) {
                        recovered_10004e00((char *)abStack_1760,str_10010303,
                                           (undefined1 *)&uStack_880,0x60);
                        uVar18 = recovered_100097d0((byte *)&uStack_880,str_10010309);
                        if (((int)uVar18 == 0) || (0xf < uStack_1834)) {
                          uVar18 = recovered_100097d0((byte *)&uStack_880,str_1001030f);
                          if (((int)uVar18 == 0) ||
                             ((uStack_1834 == 0 ||
                              (uVar34 = (ulong)(uStack_1834 - 1),
                              aiStack_145c[uVar34 * 0x12 + 0x2f] != 1 || 0xf < uStack_1834)))) {
                            uVar18 = recovered_100097d0((byte *)&uStack_880,&DAT_10010316);
                            if (((int)uVar18 == 0) || (0xf < uStack_1834)) {
                              uVar18 = recovered_100097d0((byte *)&uStack_880,str_1001031a);
                              if (((int)uVar18 == 0) || (0xf < uStack_1834)) {
                                if (uStack_182c < 0xc) {
                                  aiStack_f20[uStack_182c] = iStack_1814;
                                  iStack_1814 = recovered_10009914((char *)abStack_1760,iStack_1814)
                                  ;
                                  uStack_182c = uStack_182c + 1;
                                }
                                if (uStack_1834 < 0x10) {
                                  uVar34 = (ulong)uStack_1834;
                                  memset(aiStack_145c + uVar34 * 0x12 + 0x2f,0,0x48);
                                  aiStack_145c[uVar34 * 0x12 + 0x2f] = 0;
                                  uVar21 = uStack_df0;
                                  auStack_139c[uVar34 * 9 + 1] = uStack_de8;
                                  auStack_139c[uVar34 * 9] = uVar21;
                                  uStack_1834 = uStack_1834 + 1;
                                }
                                goto LAB_10003464;
                              }
                              uVar34 = (ulong)uStack_1834;
                              memset(aiStack_145c + uVar34 * 0x12 + 0x2f,0,0x48);
                              aiStack_145c[uVar34 * 0x12 + 0x2f] = 4;
                              uVar21 = uStack_df0;
                              auStack_139c[uVar34 * 9 + 1] = uStack_de8;
                              auStack_139c[uVar34 * 9] = uVar21;
                            }
                            else {
                              uVar34 = (ulong)uStack_1834;
                              memset(aiStack_145c + uVar34 * 0x12 + 0x2f,0,0x48);
                              aiStack_145c[uVar34 * 0x12 + 0x2f] = 3;
                              uVar21 = uStack_df0;
                              auStack_139c[uVar34 * 9 + 1] = uStack_de8;
                              auStack_139c[uVar34 * 9] = uVar21;
                              uVar26 = *(undefined4 *)(param_2 + 0x52c40);
                              *(undefined4 *)(auStack_138c + uVar34 * 9 + 1) = 0xfc;
                              *(undefined4 *)(auStack_138c + uVar34 * 9 + 2) = uVar26;
                              puVar25 = (uint *)((long)auStack_138c + (uVar34 * 0x12 + 5) * 4);
                              *(undefined8 *)puVar25 = uVar23;
                              *(undefined4 *)((long)auStack_138c + (uVar34 * 0x12 + 7) * 4) = 3;
                              recovered_100098cc(param_2,((uintptr_t)pf_module_state + 0xb52U),puVar25);
                              uStack_df0 = CONCAT44((int)auStack_138c[uVar34 * 9 + 1] + -0x14,10);
                              uStack_de8 = CONCAT35(PF_PART3(uStack_de8, 5),0x10000000a);
                            }
                          }
                          else {
                            iVar12 = (int)auStack_138c[uVar34 * 9 + 4];
                            iVar30 = *(int *)((long)auStack_1364 + (uVar34 * 0x12 + -1) * 4);
                            iVar13 = iVar30 / 4;
                            if (iVar13 < 0x97) {
                              iVar13 = 0x96;
                            }
                            iVar13 = iVar13 + 10;
                            if ((int)auStack_1364[uVar34 * 9] != iVar12 &&
                                iVar12 + iVar30 < iVar13 + (int)auStack_1364[uVar34 * 9]) {
                              iVar30 = *(int *)((long)auStack_1364 + (uVar34 * 0x12 + 1) * 4);
                              uVar21 = auStack_1364[uVar34 * 9 + 1];
                              *(int *)(auStack_1364 + uVar34 * 9) = iVar12;
                              *(int *)((long)auStack_1364 + (uVar34 * 0x12 + 1) * 4) =
                                   (int)uVar21 + iVar30 + 10;
                              *(undefined4 *)(auStack_1364 + uVar34 * 9 + 1) = 0;
                            }
                            uVar21 = (ulong)uStack_1834;
                            memset(aiStack_145c + uVar21 * 0x12 + 0x2f,0,0x48);
                            aiStack_145c[uVar21 * 0x12 + 0x2f] = 2;
                            uVar35 = uStack_df0;
                            auStack_139c[uVar21 * 9 + 1] = uStack_de8;
                            auStack_139c[uVar21 * 9] = uVar35;
                            uVar35 = auStack_1364[uVar34 * 9];
                            auStack_138c[uVar21 * 9] = uVar35;
                            iVar12 = ((int)auStack_138c[uVar34 * 9 + 4] - (int)uVar35) +
                                     *(int *)((long)auStack_1364 + (uVar34 * 0x12 + -1) * 4);
                            if (iVar12 <= iVar13) {
                              iVar13 = iVar12;
                            }
                            *(int *)(auStack_138c + uVar21 * 9 + 1) = iVar13;
                            puVar25 = (uint *)((long)auStack_138c + (uVar21 * 0x12 + 5) * 4);
                            *(undefined8 *)puVar25 = uVar7;
                            *(undefined4 *)((long)auStack_138c + (uVar21 * 0x12 + 7) * 4) = 0;
                            recovered_100098cc(param_2,((uintptr_t)pf_module_state + 0xb4bU),puVar25);
                            iVar13 = (int)auStack_138c[uVar21 * 9 + 1];
                            if (iVar13 < 0x45) {
                              iVar13 = 0x44;
                            }
                            uStack_df0 = CONCAT44(iVar13 + -0x14,(int)auStack_138c[uVar21 * 9] + 10)
                            ;
                            PF_PART5(uStack_de8, 0) =
                                 (uint5)(*(int *)((long)auStack_138c + (uVar21 * 0x12 + 1) * 4) + 10
                                        );
                          }
                        }
                        else {
                          uVar34 = (ulong)uStack_1834;
                          memset(aiStack_145c + uVar34 * 0x12 + 0x2f,0,0x48);
                          aiStack_145c[uVar34 * 0x12 + 0x2f] = 1;
                          uVar21 = uStack_df0;
                          auStack_139c[uVar34 * 9 + 1] = uStack_de8;
                          auStack_139c[uVar34 * 9] = uVar21;
                          uVar21 = uStack_df0;
                          auStack_138c[uVar34 * 9 + 4] = uStack_df0;
                          *(int *)(auStack_1364 + uVar34 * 9) = (int)uVar21;
                          *(int *)((long)auStack_1364 + (uVar34 * 0x12 + 1) * 4) = (int)uStack_de8;
                          *(undefined4 *)(auStack_1364 + uVar34 * 9 + 1) = 0;
                        }
                        uStack_1834 = uStack_1834 + 1;
                        pbVar33 = (byte *)(pcVar17 + 1);
                        goto LAB_100025e8;
                      }
                      bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102c5);
                      if ((bVar10) && (uStack_182c < 0xc)) {
                        aiStack_f20[uStack_182c] = iStack_1814;
                        uStack_182c = uStack_182c + 1;
                        iStack_1814 = 1;
                      }
LAB_10003464:
                      iVar13 = (int)uStack_de8 + 8;
LAB_1000346c:
                      uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),iVar13);
                    }
                    else {
                      bVar10 = recovered_10004d9c(abStack_1788,&DAT_1001029c);
                      if (bVar10) {
                        recovered_10004e00((char *)abStack_1760,str_10010303,
                                           (undefined1 *)&uStack_880,0x40);
                        uVar34 = recovered_10009994(param_2,(char *)&uStack_880,2);
                        uStack_1810 = (uint)uVar34;
                        uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 8);
                        iStack_1818 = 1;
                      }
                      else {
                        bVar10 = recovered_10004d9c(abStack_1788,&DAT_1001029f);
                        if ((((bVar10) ||
                             (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102a2), bVar10)) ||
                            (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102a5), bVar10)) ||
                           ((bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102a8), bVar10 ||
                            (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102ab), bVar10)))) {
                          recovered_10004e00((char *)abStack_1760,str_10010303,
                                             (undefined1 *)&uStack_880,0x40);
                          iStack_1818 = 1;
                          uVar34 = recovered_10009994(param_2,(char *)&uStack_880,1);
                          uStack_1810 = (uint)uVar34;
                          uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 8);
                        }
                        else {
                          bVar10 = recovered_10004d9c(abStack_1788,&DAT_10010282);
                          if (bVar10) {
                            pcVar14 = recovered_100052e0(pcVar17 + 1,&DAT_10010321);
                            recovered_10004e00((char *)abStack_1760,&DAT_1000fbd7,acStack_ef0,0x100)
                            ;
                            recovered_10004e00((char *)abStack_1760,str_10010326,abStack_ae0,0x80);
                            cVar8 = acStack_ef0[0];
                            bVar9 = acStack_ef0[0] != '\0';
                            if ((pcVar14 != (char *)0x0) && (abStack_ae0[0] != 0)) {
                              recovered_10009a44(param_2,(byte *)(pcVar17 + 1),
                                                 (long)(pcVar14 + ~(ulong)pcVar17),
                                                 (char *)&uStack_880,0x100);
                              if ((byte)uStack_880 == 0) {
                                pcVar17 = acStack_ef0;
                                if (cVar8 == '\0') {
                                  pcVar17 = &DAT_1000fb37;
                                }
                                recovered_10009368(param_2,abStack_ae0,(uint)(cVar8 != '\0') << 1,
                                                   pcVar17,uStack_1810,iStack_1814,
                                                   (int *)&uStack_df0);
                                pbVar33 = (byte *)(pcVar14 + 4);
                                bVar9 = false;
                                acStack_ef0[0] = '\0';
                                goto LAB_100025e8;
                              }
                            }
                          }
                          else {
                            bVar10 = recovered_10004d9c(abStack_1788,&DAT_10010331);
                            if (bVar10) {
                              recovered_100096d8((long)abStack_1760,abStack_ae0);
                              if ((abStack_ae0[0] == 0) && (acStack_1560[0] != '\0')) {
                                recovered_10001c8c((char *)abStack_ae0,0x100,(long)acStack_1560);
                              }
                              recovered_10004e00((char *)abStack_1760,&DAT_10010335,abStack_dd4,0x80
                                                );
                              recovered_10004e00((char *)abStack_1760,str_10010339,abStack_c34,0x20)
                              ;
                              recovered_10004e00((char *)abStack_1760,str_1001033f,abStack_1809,0x20
                                                );
                              iVar12 = recovered_10009ddc(abStack_c34);
                              iVar13 = recovered_10009ddc(abStack_1809);
                              memset(&uStack_880,0,0x370);
                              uStack_880 = CONCAT44(PF_PART4(uStack_880, 4),3);
                              if (iVar12 < 1) {
                                bVar10 = recovered_1000b1dc((long)abStack_ae0);
                                iVar12 = PF_PART4(uStack_df0, 4);
                                if (!bVar10) {
                                  iVar12 = 0xa0;
                                }
                              }
                              if (iVar13 < 1) {
                                bVar10 = recovered_1000b1dc((long)abStack_ae0);
                                if (bVar10) {
                                  iVar13 = iVar12;
                                  if (0x40 < iVar12) {
                                    iVar13 = 0xb4;
                                  }
                                }
                                else {
                                  iVar13 = 0x5a;
                                }
                              }
                              if (((int32_t)PF_PART4(uStack_df0, 4)) <= iVar12) {
                                iVar12 = PF_PART4(uStack_df0, 4);
                              }
                              iStack_870 = iVar13;
                              PF_PART4(uStack_878, 4) = iVar12;
                              iVar13 = recovered_1000afe4((int *)&uStack_df0,iStack_1814,iVar12);
                              uStack_880 = CONCAT44(iVar13,(undefined4)uStack_880);
                              uStack_878 = CONCAT44(PF_PART4(uStack_878, 4),(int)uStack_de8);
                              uStack_52c = 0x1ffffffff;
                              iStack_524 = iStack_1814;
                              uStack_514 = PF_PART1(uStack_de8, 4);
                              recovered_10001c8c(acStack_7ac,0x100,(long)abStack_ae0);
                              pbVar33 = abStack_ae0;
                              if (abStack_dd4[0] != 0) {
                                pbVar33 = abStack_dd4;
                              }
                              recovered_10001c8c(acStack_86c,0xc0,(long)pbVar33);
                              uVar27 = *(uint *)(param_2 + 0x52c40);
                              if (uVar27 < 0x180) {
                                *(uint *)(param_2 + 0x52c40) = uVar27 + 1;
                                memcpy((void *)(param_2 + 0x440 + (ulong)uVar27 * 0x370)
                                                   ,&uStack_880,0x370);
                              }
                              iVar13 = iStack_870 + (int)uStack_de8 + 0xe;
                              goto LAB_1000346c;
                            }
                            bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_10010346);
                            if (bVar10) {
                              recovered_10004e00((char *)abStack_1760,&DAT_1000fc21,abStack_dd4,
                                                 0x100);
                              if (abStack_dd4[0] != 0) {
                                abStack_c34[0] = 0;
                                uVar34 = recovered_10005370(param_1,(char *)param_2,
                                                            (char *)abStack_dd4,
                                                            (undefined1 *)&uStack_880,0x800,
                                                            (char *)abStack_c34);
                                if ((int)uVar34 == 0) {
                                  recovered_10009368(param_2,(byte *)str_100105ac,0,&DAT_1000fb37,
                                                     uStack_1810,0,(int *)&uStack_df0);
                                }
                                else {
                                  pcVar14 = (char *)&uStack_880;
LAB_10003b98:
                                  while (*pcVar14 == '<') {
                                    pcVar22 = strchr(pcVar14,0x3e);
                                    if (pcVar22 == (char *)0x0) goto LAB_100027e4;
                                    auStack_8e0[0] = auStack_8e0[0] & 0xffffff00;
                                    iVar13 = (int)pcVar22 + ~(uint)pcVar14;
                                    if (0x7e < iVar13) {
                                      iVar13 = 0x7f;
                                    }
                                    memcpy(abStack_ae0,pcVar14 + 1,(long)iVar13);
                                    abStack_ae0[iVar13] = 0;
                                    recovered_10004cb8(abStack_ae0,abStack_1809,0x28,
                                                       (undefined1 *)auStack_8e0);
                                    if ((auStack_8e0[0] & 1) == 0) {
                                      bVar10 = recovered_10004d9c(abStack_1809,&DAT_100102f9);
                                      if (bVar10) {
                                        recovered_10009640(param_2,(undefined4 *)&uStack_df0);
                                        goto LAB_10003ca0;
                                      }
                                      bVar10 = recovered_10004d9c(abStack_1809,&DAT_100102eb);
                                      if (bVar10) {
                                        uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 0xc
                                                             );
                                        goto LAB_10003ca0;
                                      }
                                      bVar10 = recovered_10004d9c(abStack_1809,(byte *)str_1000fc10)
                                      ;
                                      pcVar24 = str_1000fc17;
                                      if (!bVar10) {
                                        bVar10 = recovered_10004d9c(abStack_1809,
                                                                    (byte *)str_1000fc01);
                                        pcVar24 = str_1000fc07;
                                        if (!bVar10) goto LAB_10003ca0;
                                      }
                                      pcVar14 = pcVar22 + 1;
                                      pcVar22 = recovered_100052e0(pcVar14,pcVar24);
                                      if (pcVar22 != (char *)0x0) {
                                        bVar10 = recovered_10004d9c(abStack_1809,
                                                                    (byte *)str_1000fc10);
                                        lVar29 = 8;
                                        if (bVar10) {
                                          lVar29 = 9;
                                        }
                                        pcVar14 = pcVar22 + lVar29;
                                      }
                                    }
                                    else {
LAB_10003ca0:
                                      pcVar14 = pcVar22 + 1;
                                    }
                                  }
                                  if (*pcVar14 != '\0') {
                                    pcVar22 = strchr(pcVar14,0x3c);
                                    if (pcVar22 == (char *)0x0) {
                                      uVar34 = strlen(pcVar14);
                                    }
                                    else {
                                      uVar34 = (long)pcVar22 - (long)pcVar14;
                                    }
                                    iVar13 = (int)uVar34;
                                    if (0x17e < iVar13) {
                                      iVar13 = 0x17f;
                                    }
                                    memcpy(abStack_ae0,pcVar14,(long)iVar13);
                                    abStack_ae0[iVar13] = 0;
                                    recovered_10009368(param_2,abStack_ae0,0,&DAT_1000fb37,
                                                       uStack_1810,0,(int *)&uStack_df0);
                                    pcVar14 = pcVar14 + uVar34;
                                    if (pcVar22 != (char *)0x0) {
                                      pcVar14 = pcVar22;
                                    }
                                    goto LAB_10003b98;
                                  }
                                }
                              }
                            }
                            else {
                              bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102ae);
                              if (bVar10) {
                                if (uStack_182c < 0xc) {
                                  aiStack_f20[uStack_182c] = iStack_1814;
                                  iStack_1814 = recovered_10009914((char *)abStack_1760,iStack_1814)
                                  ;
                                  uStack_182c = uStack_182c + 1;
                                }
                                if (*puVar1 < 0x10) {
                                  dst = (undefined1 *)(param_2 + 0x52c44 + (ulong)*puVar1 * 0x188);
                                  memset(dst,0,0x188);
                                  recovered_10004e00((char *)abStack_1760,str_1001034d,dst,0x100);
                                  recovered_10004e00((char *)abStack_1760,str_10010354,dst + 0x108,
                                                     0x80);
                                  recovered_10004e00((char *)abStack_1760,str_1001035d,
                                                     (undefined1 *)&uStack_880,0x10);
                                  pbVar33 = &DAT_10010364;
                                  if ((byte)uStack_880 != 0) {
                                    pbVar33 = (byte *)&uStack_880;
                                  }
                                  recovered_10001c8c(dst + 0x100,8,(long)pbVar33);
                                  uStack_1830 = *puVar1;
                                  *puVar1 = uStack_1830 + 1;
                                }
                                uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 6);
                              }
                              else {
                                bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102d5);
                                if (bVar10) {
                                  recovered_10004e00((char *)abStack_1760,&DAT_10010368,abStack_1809
                                                     ,0x20);
                                  recovered_10004e00((char *)abStack_1760,&DAT_1001036d,abStack_dd4,
                                                     0x40);
                                  recovered_10004e00((char *)abStack_1760,&DAT_10010372,abStack_c34,
                                                     0x40);
                                  recovered_10004e00((char *)abStack_1760,str_10010375,
                                                     (undefined1 *)&uStack_880,0x80);
                                  bVar10 = recovered_10004d9c(abStack_1809,(byte *)str_1001037b);
                                  if (bVar10) {
LAB_10003e60:
                                    pbVar33 = (byte *)&uStack_880;
                                  }
                                  else {
                                    uVar18 = recovered_10009144(param_2,(char *)abStack_1760,
                                                                (char *)abStack_1788);
                                    bVar32 = abStack_1809[0];
                                    if ((int)uVar18 != 0) goto LAB_10003e60;
                                    if ((abStack_1809[0] != 0) &&
                                       (((bVar10 = recovered_10004d9c(abStack_1809,
                                                                      (byte *)str_10010382), bVar10
                                         || (bVar10 = recovered_10004d9c(abStack_1809,
                                                                         (byte *)str_10010389),
                                            bVar10)) ||
                                        (bVar10 = recovered_10004d9c(abStack_1809,
                                                                     (byte *)str_10010390), bVar10))
                                       )) {
                                      recovered_10004e00((char *)abStack_1760,str_10010396,
                                                         abStack_ae0,0x80);
                                      pbVar33 = (byte *)str_1001039e;
                                      if ((byte)uStack_880 != 0) {
                                        pbVar33 = (byte *)&uStack_880;
                                      }
                                      bVar10 = recovered_1000a100((char *)abStack_1760,str_100103a5)
                                      ;
                                      recovered_10009f08(param_2,(char *)pbVar33,abStack_dd4,
                                                         (undefined *)&uStack_880,abStack_ae0,
                                                         uStack_1830,bVar10,iStack_1814,
                                                         (int *)&uStack_df0);
                                      goto LAB_100027e4;
                                    }
                                    bVar10 = recovered_10004d9c(abStack_1809,(byte *)str_100103ae);
                                    if ((!bVar10) &&
                                       (bVar10 = recovered_10004d9c(abStack_1809,
                                                                    (byte *)str_100103b7), !bVar10))
                                    {
                                      bVar10 = recovered_10004d9c(abStack_1809,(byte *)str_100103c8)
                                      ;
                                      if (((!bVar10) &&
                                          (bVar10 = recovered_10004d9c(abStack_1809,&DAT_100103ce),
                                          !bVar10)) &&
                                         (((((bVar32 == 0 ||
                                             (((bVar10 = recovered_10004d9c(abStack_1809,
                                                                            &DAT_100103d3), bVar10
                                               || (bVar10 = recovered_10004d9c(abStack_1809,
                                                                               (byte *)str_100103d8)
                                                  , bVar10)) ||
                                              (bVar10 = recovered_10004d9c(abStack_1809,
                                                                           &DAT_100103df), bVar10)))
                                             ) || (((bVar10 = recovered_10004d9c(abStack_1809,
                                                                                 (byte *)
                                                  str_100103e3), bVar10 ||
                                                  (bVar10 = recovered_10004d9c(abStack_1809,
                                                                               (byte *)str_100103e9)
                                                  , bVar10)) ||
                                                  (bVar10 = recovered_10004d9c(abStack_1809,
                                                                               &DAT_100103f2),
                                                  bVar10)))) ||
                                           ((bVar10 = recovered_10004d9c(abStack_1809,
                                                                         (byte *)str_100103f6),
                                            bVar10 || (bVar10 = recovered_10004d9c(abStack_1809,
                                                                                   &DAT_100103fd),
                                                      bVar10)))) ||
                                          ((bVar10 = recovered_10004d9c(abStack_1809,
                                                                        (byte *)str_10010402),
                                           bVar10 || (bVar10 = recovered_10004d9c(abStack_1809,
                                                                                  &DAT_10010411),
                                                     bVar10)))))) {
                                        recovered_1000a1f8(param_2,(char *)abStack_dd4,
                                                           (char *)abStack_c34,
                                                           (undefined *)&uStack_880,uStack_1830,
                                                           iStack_1814,(int *)&uStack_df0);
                                      }
                                      goto LAB_100027e4;
                                    }
                                    bVar10 = recovered_1000a100((char *)abStack_1760,str_100103bd);
                                    if (!bVar10) goto LAB_100027e4;
                                    pbVar33 = &DAT_100103c5;
                                    if ((byte)uStack_880 != 0) {
                                      pbVar33 = (byte *)&uStack_880;
                                    }
                                  }
                                  recovered_10009e44(param_2,abStack_dd4,abStack_c34,pbVar33,
                                                     uStack_1830);
                                }
                                else {
                                  bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102db);
                                  if (bVar10) {
                                    pcVar14 = recovered_100052e0(pcVar17 + 1,str_10010416);
                                    recovered_10004e00((char *)abStack_1760,&DAT_1001036d,
                                                       abStack_dd4,0x40);
                                    recovered_10004e00((char *)abStack_1760,&DAT_10010372,
                                                       abStack_c34,0x40);
                                    uStack_880 = uStack_880 & 0xffffffffffffff00;
                                    if (pcVar14 != (char *)0x0) {
                                      iVar13 = (int)pcVar14 + ~uVar27;
                                      if (0xfe < iVar13) {
                                        iVar13 = 0xff;
                                      }
                                      memcpy(&uStack_880,pcVar17 + 1,(long)iVar13);
                                      *(byte *)((long)&uStack_880 + (long)iVar13) = 0;
                                    }
                                    recovered_100054ec((long)&uStack_880,(char *)abStack_ae0,0x100);
                                    uVar18 = recovered_10009144(param_2,(char *)abStack_1760,
                                                                (char *)abStack_1788);
                                    if ((int)uVar18 == 0) {
                                      recovered_1000a1f8(param_2,(char *)abStack_dd4,
                                                         (char *)abStack_c34,abStack_ae0,uStack_1830
                                                         ,iStack_1814,(int *)&uStack_df0);
                                    }
                                    else {
                                      recovered_10009e44(param_2,abStack_dd4,abStack_c34,abStack_ae0
                                                         ,uStack_1830);
                                    }
                                    if (pcVar14 != (char *)0x0) {
                                      pbVar33 = (byte *)(pcVar14 + 0xb);
                                      goto LAB_100025e8;
                                    }
                                  }
                                  else {
                                    bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102e4);
                                    if (bVar10) {
                                      pcVar14 = pcVar17 + 1;
                                      pcVar22 = recovered_100052e0(pcVar14,str_10010422);
                                      recovered_10004e00((char *)abStack_1760,&DAT_1001036d,
                                                         (undefined1 *)auStack_8e0,0x40);
                                      recovered_10004e00((char *)abStack_1760,&DAT_10010372,
                                                         (undefined1 *)aiStack_b40,0x40);
                                      abStack_1809[0] = 0;
                                      if (pcVar22 != (char *)0x0) {
                                        abStack_1809[0] = 0;
                                        abStack_ae0[0] = 0;
                                        while ((((pcVar14 < pcVar22 &&
                                                 (pcVar14 = recovered_100052e0(pcVar14,str_100105bf)
                                                 , pcVar14 != (char *)0x0)) && (pcVar14 < pcVar22))
                                               && ((pcVar24 = strchr(pcVar14,0x3e),
                                                   pcVar24 != (char *)0x0 && (pcVar24 < pcVar22)))))
                                        {
                                          iVar13 = (uint)pcVar24 + ~(uint)pcVar14;
                                          if (0xfe < iVar13) {
                                            iVar13 = 0xff;
                                          }
                                          memcpy(&uStack_880,pcVar14 + 1,(long)iVar13);
                                          *(byte *)((long)&uStack_880 + (long)iVar13) = 0;
                                          recovered_10004e00((char *)&uStack_880,str_10010375,
                                                             abStack_dd4,0x80);
                                          src = pcVar24 + 1;
                                          pcVar15 = recovered_100052e0(src,str_100105c7);
                                          if (abStack_dd4[0] == 0) {
                                            iVar13 = (int)pcVar15;
                                            if (pcVar22 <= pcVar15 || pcVar15 == (char *)0x0) {
                                              iVar13 = (int)pcVar22;
                                            }
                                            iVar13 = iVar13 + ~(uint)pcVar24;
                                            if (0x7e < iVar13) {
                                              iVar13 = 0x7f;
                                            }
                                            memcpy(abStack_c34,src,(long)iVar13);
                                            abStack_c34[iVar13] = 0;
                                            uVar34 = strlen((char *)abStack_c34);
                                            recovered_10009a44(0,abStack_c34,uVar34,
                                                               (char *)abStack_dd4,0x80);
                                          }
                                          if (abStack_ae0[0] == 0) {
                                            recovered_10001c8c((char *)abStack_ae0,0x80,
                                                               (long)abStack_dd4);
                                          }
                                          bVar10 = recovered_1000a100((char *)&uStack_880,
                                                                      str_100105d1);
                                          if (bVar10) {
                                            pbVar33 = abStack_dd4;
                                            goto LAB_100043e4;
                                          }
                                          pcVar14 = pcVar15 + 9;
                                          if (pcVar15 == (char *)0x0) {
                                            pcVar14 = src;
                                          }
                                        }
                                        pbVar33 = abStack_ae0;
LAB_100043e4:
                                        recovered_10001c8c((char *)abStack_1809,0x80,(long)pbVar33);
                                      }
                                      uVar18 = recovered_10009144(param_2,(char *)abStack_1760,
                                                                  (char *)abStack_1788);
                                      if ((int)uVar18 == 0) {
                                        recovered_1000a1f8(param_2,(char *)auStack_8e0,
                                                           (char *)aiStack_b40,abStack_1809,
                                                           uStack_1830,iStack_1814,
                                                           (int *)&uStack_df0);
                                      }
                                      else {
                                        recovered_10009e44(param_2,(undefined *)auStack_8e0,
                                                           (undefined *)aiStack_b40,abStack_1809,
                                                           uStack_1830);
                                      }
                                      if (pcVar22 != (char *)0x0) {
                                        pbVar33 = (byte *)(pcVar22 + 9);
                                        goto LAB_100025e8;
                                      }
                                    }
                                    else {
                                      bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_10010389)
                                      ;
                                      if (!bVar10) {
                                        bVar10 = recovered_10004d9c(abStack_1788,
                                                                    (byte *)str_10010436);
                                        if ((!bVar10) ||
                                           (pcVar14 = recovered_100052e0(pcVar17 + 1,str_1001043c),
                                           pcVar14 == (char *)0x0)) goto LAB_100027e4;
                                        iVar13 = (int)pcVar14 + ~uVar27;
                                        if (0x3e < iVar13) {
                                          iVar13 = 0x3f;
                                        }
                                        memcpy(pcVar2,pcVar17 + 1,(long)iVar13);
                                        pcVar2[iVar13] = '\0';
                                        recovered_100054ec((long)pcVar2,(char *)&uStack_880,0x40);
                                        recovered_10001c8c(pcVar2,0x40,(long)&uStack_880);
                                        pbVar33 = (byte *)(pcVar14 + 8);
                                        goto LAB_100025e8;
                                      }
                                      pcVar14 = recovered_100052e0(pcVar17 + 1,str_1001042c);
                                      recovered_10004e00((char *)abStack_1760,&DAT_10010368,
                                                         (undefined1 *)auStack_8e0,0x20);
                                      recovered_10004e00((char *)abStack_1760,&DAT_1001036d,
                                                         abStack_1809,0x40);
                                      recovered_10004e00((char *)abStack_1760,str_10010375,
                                                         (undefined1 *)&uStack_880,0x80);
                                      recovered_10004e00((char *)abStack_1760,str_10010326,
                                                         abStack_dd4,0x80);
                                      abStack_ae0[0] = 0;
                                      recovered_10004e00((char *)abStack_1760,str_10010396,
                                                         abStack_c34,0x80);
                                      if (pcVar14 != (char *)0x0) {
                                        recovered_10009a44(param_2,(byte *)(pcVar17 + 1),
                                                           (long)(pcVar14 + ~(ulong)pcVar17),
                                                           (char *)abStack_ae0,0x80);
                                      }
                                      bVar10 = recovered_10004d9c((byte *)auStack_8e0,
                                                                  (byte *)str_100103c8);
                                      if (!bVar10) {
                                        if (abStack_ae0[0] == 0) {
                                          if (abStack_dd4[0] == 0) {
                                            pbVar33 = (byte *)str_1001039e;
                                            if ((byte)uStack_880 != 0) {
                                              pbVar33 = (byte *)&uStack_880;
                                            }
                                          }
                                          else {
                                            pbVar33 = abStack_dd4;
                                          }
                                        }
                                        else {
                                          pbVar33 = abStack_ae0;
                                        }
                                        bVar10 = recovered_1000a100((char *)abStack_1760,
                                                                    str_100103a5);
                                        recovered_10009f08(param_2,(char *)pbVar33,abStack_1809,
                                                           (undefined *)&uStack_880,abStack_c34,
                                                           uStack_1830,bVar10,iStack_1814,
                                                           (int *)&uStack_df0);
                                      }
                                      if (pcVar14 != (char *)0x0) {
                                        pbVar33 = (byte *)(pcVar14 + 9);
                                        goto LAB_100025e8;
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
LAB_100027e4:
          pbVar33 = (byte *)(pcVar17 + 1);
          goto LAB_100025e8;
        }
LAB_10002b60:
        pbVar33 = recovered_10008fbc((long)pcVar17,abStack_1788);
      }
      else {
        bVar10 = recovered_10004d9c(abStack_1788,&DAT_10010282);
        if (bVar10) {
          bVar9 = false;
          acStack_ef0[0] = '\0';
        }
        else {
          bVar10 = recovered_10004d9c(abStack_1788,&DAT_1001029c);
          if (((((bVar10) || (bVar10 = recovered_10004d9c(abStack_1788,&DAT_1001029f), bVar10)) ||
               (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102a2), bVar10)) ||
              ((bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102a5), bVar10 ||
               (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102a8), bVar10)))) ||
             (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102ab), bVar10)) {
            iStack_1818 = 0;
            uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 6);
            uStack_1810 = 1;
          }
          else {
            bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102ae);
            if (bVar10) {
              if (uStack_182c == 0) {
                uStack_182c = 0;
              }
              else {
                uStack_182c = uStack_182c - 1;
                iStack_1814 = aiStack_f20[uStack_182c];
              }
              uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),(int)uStack_de8 + 8);
              uStack_1830 = 0xffffffff;
            }
            else {
              bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102b3);
              if ((bVar10) || (bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102b6), bVar10)) {
                if (PF_PART4(uStack_1828, 4) == 0) {
                  uStack_1828 = uStack_1828 & 0xffffffff;
LAB_100033e0:
                  iVar12 = (int)uStack_de8 + 8;
                }
                else {
                  PF_PART4(uStack_1828, 4) = PF_PART4(uStack_1828, 4) - 1;
                  if ((abStack_1460[(ulong)PF_PART4(uStack_1828, 4) * 0xc] & 1) == 0) goto LAB_100033e0;
                  uVar27 = uStack_1810;
                  if ((int)uStack_1810 < 2) {
                    uVar27 = 1;
                  }
                  iVar13 = aiStack_145c[(ulong)PF_PART4(uStack_1828, 4) * 3 + 1] + uVar27 * 8 + 8;
                  iVar12 = (int)uStack_de8;
                  if ((int)uStack_de8 <= iVar13) {
                    iVar12 = iVar13;
                  }
                }
                uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),iVar12);
              }
              else {
                bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102b9);
                if (bVar10) {
                  bVar10 = (uint)uStack_1828 == 0;
                  iVar13 = (uint)uStack_1828 - 1;
                  uStack_1828 = CONCAT44(PF_PART4(uStack_1828, 4),iVar13);
                  if (bVar10 || iVar13 == 0) {
                    uStack_1828 = (ulong)PF_PART4(uStack_1828, 4) << 0x20;
                    acStack_1560[0] = '\0';
                  }
                }
                else {
                  bVar10 = recovered_10008e40(abStack_1788);
                  if (bVar10) {
                    bVar10 = recovered_10004d9c(abStack_1788,&DAT_100102c1);
                    if (!bVar10) {
                      bVar10 = recovered_10004d9c(abStack_1788,(byte *)str_100102c5);
                      if ((bVar10) && (uStack_182c != 0)) {
                        uStack_182c = uStack_182c - 1;
                        iStack_1814 = aiStack_f20[uStack_182c];
                      }
                      goto LAB_100033e0;
                    }
                    if (uStack_1834 == 0) {
                      uStack_1834 = 0;
                    }
                    else {
                      uVar27 = uStack_1834 - 1;
                      uVar34 = (ulong)uVar27;
                      iVar13 = aiStack_145c[uVar34 * 0x12 + 0x2f];
                      uStack_878 = auStack_139c[uVar34 * 9 + 1];
                      uStack_880 = auStack_139c[uVar34 * 9];
                      if (iVar13 == 1) {
                        uStack_de8 = auStack_139c[uVar34 * 9 + 1];
                        uStack_df0 = auStack_139c[uVar34 * 9];
                        iVar13 = (int)auStack_1364[uVar34 * 9 + 1] +
                                 *(int *)((long)auStack_1364 + (uVar34 * 0x12 + 1) * 4) + 10;
LAB_10003b28:
                        uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),iVar13);
                      }
                      else {
                        iVar12 = (int)auStack_138c[uVar34 * 9 + 1];
                        uVar26 = *(undefined4 *)((long)auStack_138c + (uVar34 * 0x12 + 5) * 4);
                        uVar21 = auStack_138c[uVar34 * 9 + 3];
                        uVar4 = *(undefined4 *)((long)auStack_138c + (uVar34 * 0x12 + 7) * 4);
                        iVar30 = (int)uStack_de8;
                        if (iVar13 == 3) {
                          uVar34 = (ulong)(uint)auStack_138c[uVar34 * 9 + 2];
                          iVar13 = (int)uStack_de8;
                          if ((int)uStack_de8 < 0x1b) {
                            iVar13 = 0x1a;
                          }
                          iVar6 = (DAT_100180d0 - iVar12) + -0x1c;
                          iVar30 = (DAT_100180d4 - iVar13) + -0x68;
                          if (iVar30 < 0x13) {
                            iVar30 = 0x12;
                          }
                          uVar5 = *(uint *)(param_2 + 0x52c40);
                          piVar31 = (int *)(param_2 + 0x444 + uVar34 * 0x370);
                          for (; uVar34 < uVar5; uVar34 = uVar34 + 1) {
                            *piVar31 = *piVar31 + iVar6;
                            piVar31[1] = piVar31[1] + iVar30 + -10;
                            *(undefined1 *)(piVar31 + 0xda) = 1;
                            piVar31 = piVar31 + 0xdc;
                          }
                          recovered_10008f1c(param_2,CONCAT44(iVar30 + -10,iVar6),
                                             CONCAT44(iVar13 + 10,iVar12),uVar26,(int)uVar21,uVar4,1
                                            );
                        }
                        else {
                          if (iVar13 != 2) {
                            uStack_df0 = auStack_139c[uVar34 * 9];
                            PF_PART4(uStack_de8, 0) = (int)auStack_139c[uVar34 * 9 + 1];
                            if ((int)uStack_de8 <= iVar30) {
                              PF_PART4(uStack_de8, 0) = iVar30;
                            }
                            PF_PART4(uStack_de8, 4) = (undefined4)(auStack_139c[uVar34 * 9 + 1] >> 0x20);
                            if (uStack_182c == 0) {
                              uStack_182c = 0;
                            }
                            else {
                              uStack_182c = uStack_182c - 1;
                              iStack_1814 = aiStack_f20[uStack_182c];
                            }
                            if (iVar13 != 4) {
                              iVar13 = (int)uStack_de8 + 8;
                              goto LAB_10003b28;
                            }
                            goto LAB_10003b2c;
                          }
                          uVar35 = auStack_138c[uVar34 * 9];
                          iVar13 = (int)uStack_de8 -
                                   *(int *)((long)auStack_138c + (uVar34 * 0x12 + 1) * 4);
                          if (iVar13 < 0x13) {
                            iVar13 = 0x12;
                          }
                          iVar13 = iVar13 + 10;
                          recovered_10008f1c(param_2,auStack_138c[uVar34 * 9],
                                             CONCAT44(iVar13,iVar12),uVar26,(int)uVar21,uVar4,0);
                          if ((uVar27 != 0) &&
                             (uVar34 = (ulong)(uStack_1834 - 2),
                             aiStack_145c[uVar34 * 0x12 + 0x2f] == 1)) {
                            iVar30 = (int)auStack_1364[uVar34 * 9 + 1];
                            if ((int)auStack_1364[uVar34 * 9 + 1] <= iVar13) {
                              iVar30 = iVar13;
                            }
                            *(int *)(auStack_1364 + uVar34 * 9 + 1) = iVar30;
                            *(int *)(auStack_1364 + uVar34 * 9) = iVar12 + (int)uVar35;
                          }
                        }
                        uStack_de8 = uStack_878;
                        uStack_df0 = uStack_880;
                      }
LAB_10003b2c:
                      uStack_1834 = uVar27;
                    }
                  }
                }
              }
            }
          }
        }
LAB_100026fc:
        pbVar33 = (byte *)(pcVar17 + 1);
      }
      goto LAB_100025e8;
    }
    pcVar14 = strstr((char *)(pbVar33 + 4),&DAT_1000fbc9);
    pbVar33 = (byte *)(pcVar14 + 3);
    if (pcVar14 == (char *)0x0) {
      pbVar33 = (byte *)(pcVar17 + 1);
    }
  } while( true );
LAB_10002e2c:
  uStack_de8 = CONCAT44(PF_PART4(uStack_de8, 4),aiStack_b40[0] + uVar27 * 8 + 5);
LAB_10002e40:
  pbVar33 = (byte *)(pcVar14 + 5);
  goto LAB_100025e8;
}

#undef DAT_1000fa88
#undef DAT_1000fa90
#undef DAT_1000fb37
#undef DAT_1000fbc5
#undef DAT_1000fbc9
#undef DAT_1000fbd7
#undef DAT_1000fc21
#undef DAT_10010282
#undef DAT_1001029c
#undef DAT_1001029f
#undef DAT_100102a2
#undef DAT_100102a5
#undef DAT_100102a8
#undef DAT_100102ab
#undef DAT_100102ae
#undef DAT_100102b3
#undef DAT_100102b6
#undef DAT_100102c1
#undef DAT_100102eb
#undef DAT_100102ee
#undef DAT_100102f7
#undef DAT_100102f9
#undef DAT_10010316
#undef DAT_10010321
#undef DAT_10010331
#undef DAT_10010335
#undef DAT_10010364
#undef DAT_10010368
#undef DAT_1001036d
#undef DAT_10010372
#undef DAT_100103c5
#undef DAT_100103ce
#undef DAT_100103d3
#undef DAT_100103df
#undef DAT_100103f2
#undef DAT_100103fd
#undef DAT_10010411
#undef DAT_10010470
#undef DAT_100104dd
#undef DAT_100104f8
#undef DAT_10010508
#undef DAT_10010511
#undef DAT_100180d0
#undef DAT_100180d4
#undef str_1000fc01
#undef str_1000fc07
#undef str_1000fc10
#undef str_1000fc17
#undef str_100102b9
#undef str_100102c5
#undef str_100102cc
#undef str_100102d5
#undef str_100102db
#undef str_100102e4
#undef str_100102f1
#undef str_100102fc
#undef str_10010303
#undef str_10010309
#undef str_1001030f
#undef str_1001031a
#undef str_10010326
#undef str_10010339
#undef str_1001033f
#undef str_10010346
#undef str_1001034d
#undef str_10010354
#undef str_1001035d
#undef str_10010375
#undef str_1001037b
#undef str_10010382
#undef str_10010389
#undef str_10010390
#undef str_10010396
#undef str_1001039e
#undef str_100103a5
#undef str_100103ae
#undef str_100103b7
#undef str_100103bd
#undef str_100103c8
#undef str_100103d8
#undef str_100103e3
#undef str_100103e9
#undef str_100103f6
#undef str_10010402
#undef str_10010416
#undef str_10010422
#undef str_1001042c
#undef str_10010436
#undef str_1001043c
#undef str_100104c5
#undef str_100104fd
#undef str_10010516
#undef str_10010522
#undef str_10010529
#undef str_100105ac
#undef str_100105bf
#undef str_100105c7
#undef str_100105d1
#undef str_10010b0e
#undef str_10010b5b
#undef str_10010b61
#undef uStack_1834
#undef uStack_1830
#undef uStack_182c
#undef uStack_1828
#undef iStack_1818
#undef iStack_1814
#undef uStack_1810
#undef abStack_1809
#undef bStack_1789
#undef abStack_1788
#undef abStack_1760
#undef acStack_1560
#undef abStack_1460
#undef aiStack_145c
#undef iStack_13a0
#undef auStack_139c
#undef auStack_138c
#undef auStack_1364
#undef aiStack_f20
#undef acStack_ef0
#undef uStack_df0
#undef uStack_de8
#undef abStack_dd4
#undef abStack_cd4
#undef acStack_c94
#undef abStack_c34
#undef abStack_b80
#undef aiStack_b40
#undef abStack_ae0
#undef auStack_8e0
#undef uStack_880
#undef uStack_878
#undef iStack_870
#undef acStack_86c
#undef acStack_7ac
#undef uStack_52c
#undef iStack_524
#undef uStack_514

#undef DAT_100180d0
#define DAT_100180d0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
#undef str_10010b7f
#define str_10010b7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b69c
 */

void recovered_1000b69c(ulong param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;

  if ((*(char *)(param_2 + 0x331) == '\x01') && (*(char *)(param_2 + 0x340) != '\0')) {
    recovered_1000c66c(param_1,param_2,(char *)(param_2 + 0x340),0x4800000000,
                       CONCAT44(DAT_100180d4 + -0x5e,DAT_100180d0),1,1,str_10010b7f);
  }
  lVar3 = 0;
  for (uVar4 = 0; uVar4 < *(uint *)(param_2 + 0x52c40); uVar4 = uVar4 + 1) {
    lVar1 = param_2 + lVar3;
    if (*(int *)(lVar1 + 0x440) == 3) {
      pcVar2 = str_10010390;
      if (*(char *)(lVar1 + 0x454) != '\0') {
        pcVar2 = (char *)(lVar1 + 0x454);
      }
      recovered_1000c66c(param_1,param_2,(char *)(lVar1 + 0x514),*(undefined8 *)(lVar1 + 0x444),
                         *(undefined8 *)(lVar1 + 0x44c),0,*(undefined1 *)(lVar1 + 0x7ac),pcVar2);
    }
    lVar3 = lVar3 + 0x370;
  }
  return;
}

#undef DAT_100180d0
#undef DAT_100180d4
#undef str_10010390
#undef str_10010b7f

#define uStack_3c (*(uint *)(frame + 20))
#define uStack_38 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b778
 */

undefined8 recovered_1000b778(long param_1,undefined8 param_2,char *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;

  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (*param_3 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10001ba4(param_1);
    if ((int)uVar2 != 0) {
      memset(&uStack_3c,0,0xc);
      uVar1 = recovered_10005d78((int)param_2,param_3,&uStack_3c);
      uVar2 = 0;
      if ((uVar1 != 0) && (uStack_3c != 0)) {
        uVar1 = uStack_38;
        if (0x4fffe < uStack_38) {
          uVar1 = 0x4ffff;
        }
        memcpy(*(void **)(param_1 + 0x310),(void *)(ulong)uStack_3c,(ulong)uVar1);
        *(undefined1 *)(*(long *)(param_1 + 0x310) + (ulong)uVar1) = 0;
        if (uVar1 != uStack_38) {
          recovered_10001c8c((char *)(param_1 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x14e7U));
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_3c
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b828
 */

bool recovered_1000b828(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;

  uVar5 = strlen(param_1);
  if ((param_2 == (byte *)0x0) || (uVar7 = strlen((char *)param_2), uVar5 < uVar7)) {
    return false;
  }
  pbVar6 = (byte *)(param_1 + (uVar5 - uVar7));
  bVar4 = false;
  if ((pbVar6 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar2 = *pbVar6;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      if (bVar1 != bVar2) {
        return false;
      }
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b87c
 */

bool recovered_1000b87c(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;

  if ((param_2 != (byte *)0x0) && (uVar3 = strlen((char *)param_2), uVar3 != 0)) {
    pbVar5 = (byte *)(param_1 - uVar3);
    for (uVar4 = 0;
        0x3f < *(byte *)(param_1 + uVar4) ||
        (1L << ((ulong)*(byte *)(param_1 + uVar4) & 0x3f) & 0x8000000800000001U) == 0;
        uVar4 = uVar4 + 1) {
      pbVar5 = pbVar5 + 1;
    }
    if (uVar3 <= uVar4) {
      do {
        bVar2 = uVar3 == 0;
        if (uVar3 == 0) {
          return true;
        }
        bVar1 = *pbVar5;
        uVar6 = bVar1 | 0x20;
        if (0x19 < bVar1 - 0x41U) {
          uVar6 = (uint)bVar1;
        }
        bVar1 = *param_2;
        uVar7 = bVar1 | 0x20;
        if (0x19 < bVar1 - 0x41U) {
          uVar7 = (uint)bVar1;
        }
        uVar3 = uVar3 - 1;
        pbVar5 = pbVar5 + 1;
        param_2 = param_2 + 1;
      } while (uVar6 == uVar7);
      return bVar2;
    }
  }
  return false;
}


#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef str_100108c4
#define str_100108c4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1100U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b918
 */

/* WARNING: Removing unreachable block (ram,0x10001cbc) */

char * recovered_1000b918(char *param_1,byte *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  char *extraout_x0 = 0;
  char *pcVar3;
  byte *pbVar4;

  pcVar2 = recovered_1000be3c(param_1);
  if (param_2 == (byte *)0x0) {
    return pcVar2;
  }
  *param_2 = 0;
  pcVar3 = str_100108c4;
  if ((pcVar2 != (char *)0x0) && (pcVar3 = str_100108c4, *pcVar2 != '\0')) {
    pcVar3 = pcVar2;
  }
  recovered_10001c8c((char *)param_2,param_3,(long)pcVar3);
  pbVar4 = param_2;
  do {
    uVar1 = *pbVar4 - 0x23;
    if (uVar1 < 0x3a) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x200000000801000U) == 0) {
        if ((1L << ((ulong)uVar1 & 0x3f) & 0x10000001U) == 0) goto LAB_1000b9a4;
        *pbVar4 = 0;
LAB_1000b9b4:
        recovered_10005a38(param_2);
        pbVar4 = param_2;
        do {
          uVar1 = *pbVar4 - 0x2f;
          if (uVar1 < 0x2e && (1L << ((ulong)uVar1 & 0x3f) & 0x200000000801U) != 0) {
            *pbVar4 = 0x5f;
          }
          else if (*pbVar4 == 0) {
            if (*param_2 != 0) {
              return extraout_x0;
            }
            pcVar2 = (char *)0x0;
            if (param_2 != (byte *)0x0) {
              uVar1 = pf_varargs_1000f7f4_1((char *)param_2,param_3,&DAT_1000fbc2,((uintptr_t)pf_module_state + 0x1100U));
              pcVar2 = (char *)(ulong)uVar1;
            }
            return pcVar2;
          }
          pbVar4 = pbVar4 + 1;
        } while( true );
      }
      *pbVar4 = 0x5f;
    }
    else {
LAB_1000b9a4:
      if (*pbVar4 == 0) goto LAB_1000b9b4;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

#undef DAT_1000fbc2
#undef str_100108c4

#undef str_1000fd6c
#define str_1000fd6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a8U)))
#undef str_10010669
#define str_10010669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xea5U)))
#undef str_100108d1
#define str_100108d1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x110dU)))
#undef str_100108e1
#define str_100108e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x111dU)))
#undef str_10010900
#define str_10010900 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x113cU)))
#undef str_10010969
#define str_10010969 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11a5U)))
#undef str_1001097c
#define str_1001097c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b8U)))
#undef str_10010988
#define str_10010988 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11c4U)))
#define apcStack_a68 (*(code * (*)[2])(frame + 152))
#define plStack_a58 (*(long * *)(frame + 168))
#define uStack_a50 (*(ulong *)(frame + 176))
#define auStack_a48 (*(ulong (*)[20])(frame + 184))
#define acStack_9a8 (*(char (*)[512])(frame + 344))
#define acStack_7a8 (*(char (*)[1536])(frame + 856))
#define acStack_19e (*(char (*)[6])(frame + 2402))
#define acStack_194 (*(char (*)[129])(frame + 2412))
#define acStack_113 (*(char (*)[193])(frame + 2541))
#define uStack_52 (*(ushort *)(frame + 2734))
#define local_ae8 (*(char (*)[128])(frame + 24))
#define local_1a8 (*(ulong *)(frame + 2392))
#define local_198 (*(uint *)(frame + 2408))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ba28
 */

undefined1 recovered_1000ba28(long *param_1)

{
  unsigned char frame[2848] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  void *pvVar8;
  long lVar9;
  char *pcVar10;
  undefined1 uVar11;
  byte *vararg1;

  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  local_ae8[0] = '\0';
  local_198 = 0;
  local_1a8 = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  uVar5 = recovered_10005ddc((long)(param_1 + 0x22),acStack_194,local_ae8,0x80);
  if (((int)uVar5 != 0) &&
     (uVar5 = recovered_10005fc4((byte *)(param_1 + 1),local_ae8,0x80), (int)uVar5 != 0)) {
    vararg1 = (byte *)((ulong)acStack_194 | 1);
    uVar6 = recovered_100061f8(vararg1,&local_198);
    if ((((uVar6 & 1) != 0) ||
        (uVar5 = recovered_100062b0((long)(param_1 + 1),vararg1,&local_198,local_ae8,0x80),
        (int)uVar5 != 0)) &&
       (uVar5 = recovered_10006718((long)(param_1 + 1),local_198,acStack_19e,local_ae8,0x80),
       (int)uVar5 != 0)) {
      memset(apcStack_a68,0,0x20);
      apcStack_a68[0] = (code *)recovered_1000be78;
      plStack_a58 = param_1;
      pbVar7 = recovered_100016e0(0x2001001);
      if (pbVar7 != (byte *)0x0) {
        recovered_1000695c(acStack_9a8);
        if (acStack_194[0] == '\x01') {
          uVar6 = recovered_100069c8(0,(long)(param_1 + 1),(ulong)local_198,(ulong)uStack_52,
                                     acStack_19e,(long)vararg1,acStack_113,acStack_9a8,pbVar7,
                                     0x2001001,&local_1a8,local_ae8,0x80,recovered_1000be88,
                                     apcStack_a68);
          if ((uVar6 & 1) == 0) goto LAB_1000bcb4;
LAB_1000bc5c:
          pvVar8 = (void *)recovered_10006ed8((long)pbVar7);
          if (pvVar8 == (void *)0x0) {
            pcVar10 = str_1000fd6c;
LAB_1000bcb0:
            pf_varargs_1000f7f4_0(local_ae8,0x80,pcVar10);
            goto LAB_1000bcb4;
          }
          uVar6 = 0;
          if ((ulong)((long)pvVar8 - (long)pbVar7) <= local_1a8) {
            uVar6 = local_1a8 - ((long)pvVar8 - (long)pbVar7);
          }
          if (0x2000000 < uVar6 || local_1a8 - 0x2000fff < 0xfffffffffdfff000) {
            pcVar10 = str_10010969;
            goto LAB_1000bcb0;
          }
          bVar2 = recovered_10006f28(pbVar7);
          if (bVar2) {
            auStack_a48[0] = 0;
            uVar5 = recovered_1000708c((long)pvVar8,uVar6,(long)pvVar8,uVar6,(long *)auStack_a48,
                                       local_ae8,0x80);
            iVar3 = (int)uVar5;
            uVar1 = auStack_a48[0];
            if (iVar3 == 0) {
              uVar1 = uVar6;
            }
            uVar6 = uVar1;
          }
          else {
            iVar3 = 1;
          }
          if ((iVar3 != 0) && (uVar6 != uStack_a50)) {
            lVar9 = recovered_1000bf28((char *)pbVar7);
            param_1[0x20] = uVar6;
            param_1[0x21] = lVar9;
          }
          recovered_1000b918(acStack_113,(byte *)auStack_a48,0xa0);
          recovered_10008934(str_10010669);
          pf_varargs_1000f7f4_1((char *)(param_1 + 0x52),0x140,str_1001097c,(ulonglong)auStack_a48);
          recovered_100071fc((char *)pbVar7,(byte *)(param_1 + 0x7a));
          if (iVar3 == 0) goto LAB_1000bcb4;
          uVar4 = recovered_10008970((char *)(param_1 + 0x52),pvVar8,(uint)uVar6);
          if (uVar4 == 0) {
            pcVar10 = str_10010988;
            goto LAB_1000bcb0;
          }
          uVar11 = 1;
        }
        else {
          pf_varargs_1000f7f4_3
                    (acStack_7a8,0x600,str_10010900,(ulonglong)acStack_113,(ulonglong)vararg1,
                     (ulonglong)acStack_9a8);
          uVar5 = recovered_10006c6c((long)(param_1 + 1),(ulong)local_198,(ulong)uStack_52,
                                     acStack_19e,acStack_7a8,pbVar7,0x2001001,&local_1a8,local_ae8,
                                     0x80,recovered_1000be88,apcStack_a68);
          if ((int)uVar5 != 0) goto LAB_1000bc5c;
LAB_1000bcb4:
          uVar11 = 0;
        }
        recovered_10001754(pbVar7);
        goto LAB_1000bba0;
      }
      pf_varargs_1000f7f4_0(local_ae8,0x80,str_100108e1);
    }
  }
  uVar11 = 0;
LAB_1000bba0:
  *(undefined1 *)((long)param_1 + 0xf6) = uVar11;
  if ((*(byte *)((long)param_1 + 0xf6) & 1) == 0) {
    pcVar10 = str_100108d1;
    if (local_ae8[0] != '\0') {
      pcVar10 = local_ae8;
    }
    recovered_10001c8c((char *)(param_1 + 0x86),0x80,(long)pcVar10);
  }
  *(undefined1 *)((long)param_1 + 0xf5) = 1;
  return *(undefined1 *)((long)param_1 + 0xf6);
}

#undef str_1000fd6c
#undef str_10010669
#undef str_100108d1
#undef str_100108e1
#undef str_10010900
#undef str_10010969
#undef str_1001097c
#undef str_10010988
#undef apcStack_a68
#undef plStack_a58
#undef uStack_a50
#undef auStack_a48
#undef acStack_9a8
#undef acStack_7a8
#undef acStack_19e
#undef acStack_194
#undef acStack_113
#undef uStack_52
#undef local_ae8
#undef local_1a8
#undef local_198

#undef DAT_1000fbc2
#define DAT_1000fbc2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3feU)))
#undef DAT_100103ce
#define DAT_100103ce (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0aU)))
#undef str_100109d3
#define str_100109d3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120fU)))
#undef str_100109eb
#define str_100109eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1227U)))
#define in_stack_ffffffffffffffe0 (*(ulong *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bda0
 */

/* WARNING: Removing unreachable block (ram,0x10001cbc) */

ulong recovered_1000bda0(ulong param_1,char *param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined *vararg0;
  uint uVar1;
  ulong uVar2;
  char *format;

  if (param_1 == 0) {
    if (param_2 != (char *)0x0) {
      uVar2 = 0;
      if (param_2 != (char *)0x0) {
        uVar1 = pf_varargs_1000f7f4_1(param_2,0xc0,&DAT_1000fbc2,((uintptr_t)pf_module_state + 0x1203U));
        uVar2 = (ulong)uVar1;
      }
      return uVar2;
    }
  }
  else if (param_2 != (char *)0x0) {
    vararg0 = &DAT_100103ce;
    if (*(char *)(param_1 + 0x210) != '\0') {
      vararg0 = (undefined *)(param_1 + 0x210);
    }
    if (*(long *)(param_1 + 0x108) == 0) {
      format = str_100109eb;
    }
    else {
      in_stack_ffffffffffffffe0 = *(long *)(param_1 + 0x108) + 0x3ffU >> 10;
      format = str_100109d3;
    }
    uVar1 = pf_varargs_1000f7f4_3
                      (param_2,0xc0,format,(ulonglong)vararg0,
                       *(long *)(param_1 + 0x100) + 0x3ffU >> 10,in_stack_ffffffffffffffe0);
    param_1 = (ulong)uVar1;
  }
  return param_1;
}

#undef DAT_1000fbc2
#undef DAT_100103ce
#undef str_100109d3
#undef str_100109eb
#undef in_stack_ffffffffffffffe0

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be3c
 */

char * recovered_1000be3c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar2 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar3 = &DAT_1000fb37;
  }
  else {
    do {
      do {
        pcVar3 = param_1;
        pcVar4 = pcVar2 + 1;
        cVar1 = *pcVar2;
        param_1 = pcVar4;
        pcVar2 = pcVar4;
      } while (cVar1 == '/');
    } while ((cVar1 == '\\') || (param_1 = pcVar3, cVar1 != '\0'));
  }
  return pcVar3;
}

#undef DAT_1000fb37

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be78
 */

void recovered_1000be78(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x100) = param_2;
    *(undefined8 *)(param_1 + 0x108) = param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000be88
 */

void recovered_1000be88(undefined8 *param_1,char *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = recovered_10006ed8((long)param_2);
  if ((param_1 != (undefined8 *)0x0) && (lVar2 != 0)) {
    lVar1 = 0;
    if ((ulong)(lVar2 - (long)param_2) <= param_3) {
      lVar1 = param_3 - (lVar2 - (long)param_2);
    }
    if (lVar1 != param_1[3]) {
      param_1[3] = lVar1;
      lVar3 = recovered_1000bf28(param_2);
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)(param_1[2],lVar1,lVar3);
      }
      if ((code *)param_1[1] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000bf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[1])(param_1[2],lVar2,lVar1,lVar3);
        return;
      }
    }
  }
  return;
}


#undef str_100109a6
#define str_100109a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11e2U)))
#undef str_100109b7
#define str_100109b7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11f3U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bf28
 */

long recovered_1000bf28(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;

  lVar5 = 0;
  if (param_1 != (char *)0x0) {
    pcVar3 = recovered_100052e0(param_1,str_100109a6);
    if (pcVar3 == (char *)0x0) {
      bVar2 = recovered_10004fc4((byte *)param_1,(byte *)str_100109b7);
      if (!bVar2) {
        return 0;
      }
    }
    else {
      param_1 = pcVar3 + 1;
    }
    pcVar3 = strchr(param_1,0x3a);
    lVar5 = 0;
    if (pcVar3 != (char *)0x0) {
      do {
        do {
          pcVar4 = pcVar3;
          pcVar3 = pcVar4 + 1;
          cVar1 = *pcVar3;
        } while (cVar1 == '\t');
      } while (cVar1 == ' ');
      lVar5 = 0;
      lVar6 = 2;
      while ((byte)(cVar1 - 0x30U) < 10) {
        lVar5 = lVar5 * 10 + (ulong)(byte)(cVar1 - 0x30);
        pcVar3 = pcVar4 + lVar6;
        lVar6 = lVar6 + 1;
        cVar1 = *pcVar3;
      }
    }
  }
  return lVar5;
}

#undef str_100109a6
#undef str_100109b7

#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_1000fcd6
#define str_1000fcd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x512U)))
#undef str_1000fd6c
#define str_1000fd6c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a8U)))
#undef str_10010191
#define str_10010191 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9cdU)))
#undef str_1001065f
#define str_1001065f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe9bU)))
#undef str_10010669
#define str_10010669 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xea5U)))
#undef str_10010a1d
#define str_10010a1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1259U)))
#define acStack_ba8 (*(char (*)[96])(frame + 24))
#define abStack_b48 (*(byte (*)[96])(frame + 120))
#define acStack_ae8 (*(char (*)[256])(frame + 216))
#define uStack_9e8 (*(ulong *)(frame + 472))
#define puStack_9e0 (*(undefined * *)(frame + 480))
#define puStack_9d8 (*(undefined * *)(frame + 488))
#define uStack_9d0 (*(undefined8 *)(frame + 496))
#define uStack_9c8 (*(ulong *)(frame + 504))
#define aiStack_9c0 (*(int (*)[128])(frame + 512))
#define abStack_7c0 (*(byte (*)[1536])(frame + 1024))
#define uStack_1c0 (*(ulong *)(frame + 2560))
#define acStack_1b6 (*(char (*)[6])(frame + 2570))
#define uStack_1b0 (*(uint *)(frame + 2576))
#define acStack_1ac (*(char (*)[129])(frame + 2580))
#define acStack_12b (*(char (*)[193])(frame + 2709))
#define uStack_6a (*(ushort *)(frame + 2902))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000bfc8
 */

undefined8
recovered_1000bfc8(long param_1,char *param_2,undefined1 *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  unsigned char frame[3040] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  undefined **ppuVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  void *dst;
  undefined8 uVar7;
  byte *pbVar8;
  char *pcVar9;
  long lVar10;
  byte *vararg1;

  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  bVar3 = recovered_10004fc4((byte *)param_2,(byte *)str_1000fbdc);
  if (!bVar3) {
    bVar3 = recovered_10004fc4((byte *)param_2,(byte *)str_1000fbe4);
    if (!bVar3) {
      return (ulong)bVar3;
    }
  }
  bVar3 = recovered_1000b1dc((long)param_2);
  if (!bVar3) {
    return (ulong)bVar3;
  }
  uVar6 = recovered_1000c40c(param_2,param_3);
  if ((int)uVar6 != 0) {
    aiStack_9c0[0] = 0;
    abStack_7c0[0] = 0;
    bVar3 = recovered_100058f4(param_3,aiStack_9c0,abStack_7c0);
    if ((bVar3) &&
       (uVar4 = recovered_1000c4c4(aiStack_9c0[0],(char *)abStack_7c0), (uVar4 & 1) != 0)) {
      return 1;
    }
    if (abStack_7c0[0] != 0) {
      recovered_1000c51c((char *)abStack_7c0);
    }
    *param_3 = 0;
  }
  recovered_1000c554(param_2,acStack_ae8);
  dst = recovered_100016e0(0x200000);
  if (dst == (void *)0x0) {
    return 0;
  }
  acStack_ba8[0] = '\0';
  uStack_1b0 = 0;
  uStack_1c0 = 0;
  abStack_b48[0] = 0;
  uVar7 = recovered_10005ddc((long)param_2,acStack_1ac,acStack_ba8,0x60);
  if (((int)uVar7 == 0) ||
     (uVar7 = recovered_10005fc4((byte *)(param_1 + 0x205c54),acStack_ba8,0x60), (int)uVar7 == 0))
  goto LAB_1000c3bc;
  vararg1 = (byte *)((ulong)acStack_1ac | 1);
  uVar6 = recovered_100061f8(vararg1,&uStack_1b0);
  if ((((uVar6 & 1) == 0) &&
      (uVar7 = recovered_100062b0(param_1 + 0x205c54,vararg1,&uStack_1b0,acStack_ba8,0x60),
      (int)uVar7 == 0)) ||
     (uVar7 = recovered_10006718(param_1 + 0x205c54,uStack_1b0,acStack_1b6,acStack_ba8,0x60),
     (int)uVar7 == 0)) goto LAB_1000c3bc;
  memset(&puStack_9e0,0,0x20);
  puStack_9e0 = param_4;
  puStack_9d8 = param_5;
  uStack_9d0 = param_6;
  pbVar8 = recovered_100016e0(0x201001);
  if (pbVar8 == (byte *)0x0) {
    pf_varargs_1000f7f4_0(acStack_ba8,0x60,str_1000fcd6);
    goto LAB_1000c3bc;
  }
  recovered_1000695c((char *)aiStack_9c0);
  if (acStack_1ac[0] == '\x01') {
    pcVar1 = (code *)recovered_1000be88;
    ppuVar2 = &puStack_9e0;
    if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
      pcVar1 = (code *)0x0;
      ppuVar2 = (undefined **)0x0;
    }
    uVar6 = recovered_100069c8(param_1,param_1 + 0x205c54,(ulong)uStack_1b0,(ulong)uStack_6a,
                               acStack_1b6,(long)vararg1,acStack_12b,(char *)aiStack_9c0,pbVar8,
                               0x201001,&uStack_1c0,acStack_ba8,0x60,pcVar1,ppuVar2);
    if ((uVar6 & 1) == 0) goto LAB_1000c330;
LAB_1000c26c:
    pcVar9 = (char *)recovered_10006ed8((long)pbVar8);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = str_1000fd6c;
LAB_1000c328:
      pf_varargs_1000f7f4_0(acStack_ba8,0x60,pcVar9);
      goto LAB_1000c330;
    }
    uVar6 = uStack_1c0 - ((long)pcVar9 - (long)pbVar8);
    if (uStack_1c0 < (ulong)((long)pcVar9 - (long)pbVar8) || uVar6 == 0) {
      uVar6 = strlen(pcVar9);
    }
    bVar3 = recovered_10006f28(pbVar8);
    if (bVar3) {
      uStack_9e8 = 0;
      uVar7 = recovered_1000708c((long)pcVar9,uVar6,(long)dst,0x200000,(long *)&uStack_9e8,
                                 acStack_ba8,0x60);
      uVar6 = uStack_9e8;
      if ((int)uVar7 == 0) goto LAB_1000c330;
      if ((param_4 != (undefined *)0x0) && (uStack_9e8 != uStack_9c8)) {
        lVar10 = recovered_1000bf28((char *)pbVar8);
        (*(code *)param_4)(param_6,uVar6,lVar10);
      }
      uVar6 = uStack_9e8;
      if (param_5 != (undefined *)0x0) {
        lVar10 = recovered_1000bf28((char *)pbVar8);
        (*(code *)param_5)(param_6,dst,uVar6,lVar10);
        uVar6 = uStack_9e8;
      }
    }
    else {
      if (0x200000 < uVar6) {
        pcVar9 = str_10010191;
        goto LAB_1000c328;
      }
      if ((param_4 != (undefined *)0x0) && (uVar6 != uStack_9c8)) {
        lVar10 = recovered_1000bf28((char *)pbVar8);
        (*(code *)param_4)(param_6,uVar6,lVar10);
      }
      memcpy(dst,pcVar9,uVar6);
    }
    recovered_100071fc((char *)pbVar8,abStack_b48);
    bVar3 = true;
  }
  else {
    pf_varargs_1000f7f4_3
              ((char *)abStack_7c0,0x600,str_10010a1d,(ulonglong)acStack_12b,(ulonglong)vararg1,
               (ulonglong)aiStack_9c0);
    pcVar1 = (code *)recovered_1000be88;
    ppuVar2 = &puStack_9e0;
    if (param_4 == (undefined *)0x0 && param_5 == (undefined *)0x0) {
      pcVar1 = (code *)0x0;
      ppuVar2 = (undefined **)0x0;
    }
    uVar7 = recovered_10006c6c(param_1 + 0x205c54,(ulong)uStack_1b0,(ulong)uStack_6a,acStack_1b6,
                               (char *)abStack_7c0,pbVar8,0x201001,&uStack_1c0,acStack_ba8,0x60,
                               pcVar1,ppuVar2);
    if ((int)uVar7 != 0) goto LAB_1000c26c;
LAB_1000c330:
    uVar6 = 0;
    bVar3 = false;
  }
  recovered_10001754(pbVar8);
  if (((bVar3) && (uVar6 != 0)) &&
     ((abStack_b48[0] == 0 ||
      ((pcVar9 = recovered_100052e0((char *)abStack_b48,str_1001065f), pcVar9 != (char *)0x0 ||
       (bVar3 = recovered_1000b1dc((long)param_2), bVar3)))))) {
    recovered_10008934(str_10010669);
    uVar4 = recovered_10008970(acStack_ae8,dst,(uint)uVar6);
    if (uVar4 != 0) {
      uVar4 = recovered_10001c54();
      iVar5 = recovered_1000c4c4(uVar4,acStack_ae8);
      if (iVar5 != 0) {
        recovered_100058ac((ulong)uVar4,acStack_ae8,param_3);
        recovered_10001754(dst);
        return 1;
      }
      recovered_1000c51c(acStack_ae8);
    }
  }
LAB_1000c3bc:
  recovered_10001754(dst);
  return 0;
}

#undef str_1000fbdc
#undef str_1000fbe4
#undef str_1000fcd6
#undef str_1000fd6c
#undef str_10010191
#undef str_1001065f
#undef str_10010669
#undef str_10010a1d
#undef acStack_ba8
#undef abStack_b48
#undef acStack_ae8
#undef uStack_9e8
#undef puStack_9e0
#undef puStack_9d8
#undef uStack_9d0
#undef uStack_9c8
#undef aiStack_9c0
#undef abStack_7c0
#undef uStack_1c0
#undef acStack_1b6
#undef uStack_1b0
#undef acStack_1ac
#undef acStack_12b
#undef uStack_6a

#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#define iStack_13c (*(int *)(frame + 20))
#define iStack_138 (*(int *)(frame + 24))
#define acStack_130 (*(char (*)[256])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c40c
 */

ulong recovered_1000c40c(char *param_1,undefined1 *param_2)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;

  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  *param_2 = 0;
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    bVar1 = recovered_10004fc4((byte *)param_1,(byte *)str_1000fbdc);
    if (!bVar1) {
      bVar1 = recovered_10004fc4((byte *)param_1,(byte *)str_1000fbe4);
      if (!bVar1) {
        return (ulong)bVar1;
      }
    }
    bVar1 = recovered_1000b1dc((long)param_1);
    uVar4 = (ulong)bVar1;
    if (bVar1) {
      recovered_1000c554(param_1,acStack_130);
      memset(&iStack_13c,0,0xc);
      uVar3 = recovered_10001b5c(acStack_130,&iStack_13c);
      uVar4 = 0;
      if ((((int)uVar3 != 0) && (iStack_13c != 0)) && (iStack_138 != 0)) {
        uVar2 = recovered_10001c54();
        recovered_100058ac((ulong)uVar2,acStack_130,param_2);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

#undef str_1000fbdc
#undef str_1000fbe4
#undef iStack_13c
#undef iStack_138
#undef acStack_130

#define alStack_38 (*(long (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c4c4
 */

undefined4 recovered_1000c4c4(int param_1,char *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;

  memset(alStack_38,0,0x18);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar1 = recovered_1000c5b4(param_1,param_2,alStack_38);
    uVar2 = 0;
    if (uVar1 != 0) {
      recovered_1000c634(alStack_38);
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef alStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c51c
 */

ulong recovered_1000c51c(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(0x3c);
  if ((bVar1) && (uVar2 = UINT_8201083c, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1002736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1);
    return (ulong)uVar2;
  }
  return (ulong)bVar1;
}


#undef str_10010a04
#define str_10010a04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1240U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c554
 */

char * recovered_1000c554(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 != (char *)0x0) {
    uVar1 = 0x811c9dc5;
    while( true ) {
      if ((byte)*param_1 == 0) break;
      uVar1 = (uVar1 ^ (byte)*param_1) * 0x1000193;
      param_1 = param_1 + 1;
    }
    uVar1 = pf_varargs_1000f7f4_2(param_2,0x100,str_10010a04,(ulong)uVar1,((uintptr_t)pf_module_state + 0x123cU));
    param_1 = (char *)(ulong)uVar1;
  }
  return param_1;
}

#undef str_10010a04

#undef UINT_82010858
#define UINT_82010858 (*(uint *)(0x82010858U))
#undef UINT_820108e0
#define UINT_820108e0 (*(uint *)(0x820108e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c5b4
 */

uint recovered_1000c5b4(int param_1,char *param_2,void *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_100019c8(0xe0);
  if (bVar1) {
    uVar2 = UINT_820108e0;
    if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x100273a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    bVar1 = recovered_100019c8(0x58);
    if ((bVar1) && (uVar2 = UINT_82010858, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000c624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)uVar2)(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

#undef UINT_82010858
#undef UINT_820108e0

#undef PTR_memset_10018018
#define PTR_memset_10018018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8854U)))
#undef PTR_recovered_1000f938_10018018
#define PTR_recovered_1000f938_10018018 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8854U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c634
 */

void recovered_1000c634(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if ((void *)*param_1 != (void *)0x0) {
    recovered_10001754((void *)*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x2cU). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_10018018)(param_1,0,0x18);
  return;
}

#undef PTR_memset_10018018
#undef PTR_recovered_1000f938_10018018

#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
#undef str_10010b8a
#define str_10010b8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13c6U)))
#undef str_10010b95
#define str_10010b95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13d1U)))
#undef str_10010b9f
#define str_10010b9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13dbU)))
#define uStack_368 (*(ulong *)(frame + 24))
#define lStack_360 (*(long *)(frame + 32))
#define uStack_358 (*(undefined8 *)(frame + 40))
#define uStack_350 (*(undefined8 *)(frame + 48))
#define uStack_348 (*(undefined1 *)(frame + 56))
#define uStack_347 (*(undefined1 *)(frame + 57))
#define uStack_346 (*(undefined1 *)(frame + 58))
#define acStack_32f (*(char (*)[203])(frame + 81))
#define iStack_264 (*(int *)(frame + 284))
#define acStack_260 (*(char (*)[256])(frame + 288))
#define abStack_160 (*(byte (*)[256])(frame + 544))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c66c
 */

undefined8
recovered_1000c66c(ulong param_1,long param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,undefined1 param_7,char *param_8)

{
  unsigned char frame[928] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *vararg0;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 unaff_x30;

  if (param_3 == (char *)0x0) {
    return param_1;
  }
  if (*param_3 == '\0') {
    return param_1;
  }
  recovered_10005020((char *)param_2,(uint *)param_3,(char *)abStack_160);
  bVar2 = recovered_10004fc4(abStack_160,(byte *)str_1000fbdc);
  if (((bVar2) || (bVar2 = recovered_10004fc4(abStack_160,(byte *)str_1000fbe4), bVar2)) &&
     (bVar2 = recovered_1000b1dc((long)abStack_160), bVar2)) {
    uVar4 = recovered_1000c40c((char *)abStack_160,acStack_260);
    if ((int)uVar4 != 0) {
      iStack_264 = 0;
      uStack_368 = uStack_368 & 0xffffffffffffff00;
      bVar2 = recovered_100058f4(acStack_260,&iStack_264,(byte *)&uStack_368);
      if ((bVar2) && (uVar3 = recovered_1000c4c4(iStack_264,(char *)&uStack_368), (uVar3 & 1) != 0))
      {
        return unaff_x30;
      }
      if ((char)uStack_368 != '\0') {
        recovered_1000c51c((char *)&uStack_368);
      }
      acStack_260[0] = '\0';
    }
    memset(&uStack_368,0,0xa0);
    uStack_368 = param_1;
    lStack_360 = param_2;
    uStack_358 = param_4;
    uStack_350 = param_5;
    uStack_348 = param_6;
    uStack_347 = param_7;
    uStack_346 = param_6;
    if ((param_8 == (char *)0x0) || (*param_8 == '\0')) {
      param_8 = recovered_1000be3c((char *)abStack_160);
    }
    recovered_10001c8c(acStack_32f,0x60,(long)param_8);
    pcVar1 = str_10010390;
    if (acStack_32f[0] != '\0') {
      pcVar1 = acStack_32f;
    }
    pf_varargs_1000f7f4_1((char *)(param_2 + 0x141),0xc0,str_10010b8a,(ulonglong)pcVar1);
    recovered_10001904(param_1);
    uVar5 = recovered_1000bfc8(param_1,(char *)abStack_160,acStack_260,recovered_1000c828,
                               recovered_1000c9b4,&uStack_368);
    pcVar1 = str_10010b95;
    if ((int)uVar5 == 0) {
      pcVar1 = str_10010b9f;
    }
    vararg0 = str_10010390;
    if (acStack_32f[0] != '\0') {
      vararg0 = acStack_32f;
    }
    pf_varargs_1000f7f4_1((char *)(param_2 + 0x141),0xc0,pcVar1,(ulonglong)vararg0);
    recovered_10001904(param_1);
  }
  return unaff_x30;
}

#undef str_1000fbdc
#undef str_1000fbe4
#undef str_10010390
#undef str_10010b8a
#undef str_10010b95
#undef str_10010b9f
#undef uStack_368
#undef lStack_360
#undef uStack_358
#undef uStack_350
#undef uStack_348
#undef uStack_347
#undef uStack_346
#undef acStack_32f
#undef iStack_264
#undef acStack_260
#undef abStack_160

#undef DAT_100180d0
#define DAT_100180d0 (*(int *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef PTR_recovered_1000f9bc_10018070
#define PTR_recovered_1000f9bc_10018070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x88acU)))
#undef PTR_terror_ui_window_present_10018070
#define PTR_terror_ui_window_present_10018070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x88acU)))
#undef str_1000fafa
#define str_1000fafa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c828
 */

void recovered_1000c828(long *param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  uint128 auVar10;

  auVar10 = recovered_1000cb50((long)param_1);
  if ((((param_1 != (long *)0x0) && (lVar5 = *param_1, lVar5 != 0)) && (param_2 != 0)) &&
     (lVar6 = param_1[1], lVar6 != 0)) {
    iVar9 = PF_PART4(auVar10, 8);
    if (0x14 < iVar9 && 0x18 < PF_PART4(auVar10, 12)) {
      uVar2 = 0x200000;
      if (param_2 <= param_3) {
        uVar2 = param_3;
      }
      uVar7 = (ulong)(iVar9 - 0x12);
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = (uVar7 * param_2) / uVar2;
      }
      if (uVar7 * param_2 < uVar2) {
        uVar4 = 1;
      }
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      if ((param_1[5] == 0) || (uVar4 != param_1[5])) {
        recovered_1000cbf4(lVar5,PF_PART8(auVar10, 0),PF_PART8(auVar10, 8),0xe8ecefff);
        recovered_1000cebc(*param_1,PF_PART8(auVar10, 0),PF_PART8(auVar10, 8),0x7a848eff);
        pcVar3 = str_10010390;
        if (*(char *)((long)param_1 + 0x39) != '\0') {
          pcVar3 = (char *)((long)param_1 + 0x39);
        }
        iVar8 = PF_PART4(auVar10, 0);
        recovered_1000cf4c(*param_1,iVar8 + 10,PF_PART4(auVar10, 4) + 0xc,pcVar3,1,0x444a52ff);
        iVar1 = PF_PART4(auVar10, 4) + PF_PART4(auVar10, 12);
        recovered_1000cebc(*param_1,CONCAT44(iVar1,iVar8 + 8) - 0x1100000000,
                           (ulong)(iVar9 - 0x10) | 0x800000000,0x7a848eff);
        recovered_1000cbf4(*param_1,CONCAT44(iVar1,iVar8 + 9) + -0x1000000000,uVar4 | 0x600000000,
                           0x2a6cb8ff);
        param_1[5] = uVar4;
        lVar5 = *param_1;
        lVar6 = param_1[1];
      }
      recovered_1000d03c(lVar5,lVar6,(char *)((long)param_1 + 0x39),param_2,param_3);
      recovered_1000d12c(*param_1,param_1[1]);
      recovered_1000d270(*param_1);
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0xb0U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_terror_ui_window_present_10018070)
                (*param_1,str_1000fafa,*(undefined8 *)(*param_1 + 0x350),DAT_100180d0,DAT_100180d4,
                 DAT_100180d0 << 2,0xffffff);
      return;
    }
  }
  return;
}

#undef DAT_100180d0
#undef DAT_100180d4
#undef PTR_recovered_1000f9bc_10018070
#undef PTR_terror_ui_window_present_10018070
#undef str_1000fafa
#undef str_10010390

#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(uint *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_1000fafa
#define str_1000fafa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x336U)))
#define alStack_58 (*(long (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000c9b4
 */

ulong recovered_1000c9b4(long *param_1,void *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint128 auVar6;

  auVar6 = recovered_1000cb50((long)param_1);
  uVar4 = PF_PART8(auVar6, 0);
  uVar5 = uVar4;
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (0xffffffff00000000 < param_3 - 0x100000000)
      ) && ((param_2 != (void *)0x0 && (param_1[1] != 0)))) {
    bVar1 = true;
    bVar2 = false;
    if (0 < PF_PART4(auVar6, 8)) {
      bVar2 = SBORROW4(PF_PART4(auVar6, 12),1);
      bVar1 = PF_PART4(auVar6, 12) + -1 < 0;
    }
    if (((bVar1 == bVar2) && ((param_4 - 1 < param_3 || ((*(byte *)(param_1 + 7) & 1) == 0)))) &&
       (((param_4 <= param_3 && (param_4 != 0)) ||
        ((param_1[6] == 0 || (0x1ffff < param_3 - param_1[6])))))) {
      param_1[6] = param_3;
      memset(alStack_58,0,0x18);
      bVar1 = recovered_100019c8(0x5c);
      uVar5 = (ulong)bVar1;
      if ((bVar1) && (uVar3 = UINT_8201085c, uVar3 != 0)) {
        uVar3 = (*(code *)(ulong)uVar3)(param_2,(uint)param_3,alStack_58);
        uVar5 = (ulong)uVar3;
        if (uVar3 != 0) {
          recovered_1000d4e8(*param_1);
          if (*(char *)((long)param_1 + 0x22) == '\x01') {
            recovered_1000d96c(*param_1,alStack_58,uVar4,PF_PART8(auVar6, 8));
            recovered_1000dae4(*param_1,param_1[1]);
          }
          else {
            recovered_1000df48(*param_1,param_1[1],0x4800000000,
                               CONCAT44(DAT_100180d4 - 0x5e,DAT_100180d0));
            recovered_1000dae4(*param_1,param_1[1]);
            recovered_1000e088(*param_1,alStack_58,uVar4,PF_PART8(auVar6, 8));
          }
          recovered_1000c634(alStack_58);
          *(undefined1 *)(param_1 + 7) = 1;
          recovered_1000d03c(*param_1,param_1[1],(char *)((long)param_1 + 0x39),param_3,param_4);
          recovered_1000d12c(*param_1,param_1[1]);
          recovered_1000d270(*param_1);
          uVar3 = terror_ui_window_present((void *)*param_1,str_1000fafa,*(void **)(*param_1 + 0x350),
                                     DAT_100180d0,DAT_100180d4,DAT_100180d0 << 2,0xffffff);
          uVar5 = (ulong)uVar3;
        }
      }
    }
  }
  return uVar5;
}

#undef DAT_100180d0
#undef DAT_100180d4
#undef str_1000fafa
#undef alStack_58

#undef DAT_100180d0
#define DAT_100180d0 (*(int *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cb50
 */

uint128 recovered_1000cb50(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint128 auVar7;

  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    iVar5 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
        iVar6 = *(int *)(*(long *)(param_1 + 8) + 0x544cc);
      }
      else {
        iVar6 = 0;
      }
      iVar5 = (iVar5 + 0x48) - iVar6;
    }
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    iVar6 = iVar5;
    if (iVar5 < 0x49) {
      iVar6 = 0x48;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18) + uVar4;
    if (DAT_100180d0 <= iVar1) {
      iVar1 = DAT_100180d0;
    }
    iVar5 = iVar5 + (int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    if (DAT_100180d4 + -0x16 <= iVar5) {
      iVar5 = DAT_100180d4 + -0x16;
    }
    iVar3 = iVar1 - uVar2;
    if (((iVar3 != 0 && iVar1 >= (int)uVar2) && iVar5 != iVar6) &&
        ((iVar3 == 0 || iVar1 < (int)uVar2) || iVar6 <= iVar5)) {
      PF_PART4(auVar7, 4) = iVar6;
      PF_PART4(auVar7, 0) = uVar2;
      PF_PART4(auVar7, 12) = iVar5 - iVar6;
      PF_PART4(auVar7, 8) = iVar3;
      return auVar7;
    }
  }
  return ZEXT816(0);
}

#undef DAT_100180d0
#undef DAT_100180d4

#undef DAT_1000fab8
#define DAT_1000fab8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f4U)))
#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(uint *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cbf4
 */

undefined8 recovered_1000cbf4(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  undefined8 unaff_x30;

  if (param_1 == 0) {
    return 0;
  }
  iVar15 = (int)param_3;
  iVar19 = (int)((ulong)param_3 >> 0x20);
  if (0 < iVar15 && 0 < iVar19) {
    uVar14 = (uint)param_2;
    uVar18 = (uint)((ulong)param_2 >> 0x20);
    if (((param_4 ^ 0xffffffff) & 0xff) == 0) {
      if (*(char *)(param_1 + 0x57ec) != '\0') {
        uVar10 = *(uint *)(param_1 + 0x57e8);
        if (uVar10 < 0xc0) {
          lVar17 = param_1 + (ulong)uVar10 * 0x70;
          *(uint *)(param_1 + 0x57e8) = uVar10 + 1;
          memset((void *)(lVar17 + 1000),0,0x70);
          *(undefined4 *)(lVar17 + 1000) = 2;
          uVar10 = DAT_100180d4;
          uVar18 = DAT_100180d0;
          uVar8 = *(undefined8 *)(param_1 + 0x350);
          uVar14 = DAT_100180d0 << 2;
          uVar13 = (ulong)DAT_100180d4 * (ulong)uVar14;
          *(int *)(lVar17 + 0x3f0) = (int)uVar8;
          *(int *)(lVar17 + 0x3f4) = (int)((ulong)uVar8 >> 0x20);
          uVar12 = (undefined4)uVar13;
          if ((uVar13 & 0xffffffff00000000) != 0) {
            uVar12 = 0xffffffff;
          }
          *(undefined4 *)(lVar17 + 0x3f8) = uVar12;
          *(uint *)(lVar17 + 0x3fc) = uVar18;
          *(uint *)(lVar17 + 0x400) = uVar10;
          *(uint *)(lVar17 + 0x404) = uVar14;
          *(undefined8 *)(lVar17 + 0x408) = DAT_1000fab8;
          *(long *)(lVar17 + 0x410) = param_2;
          *(undefined8 *)(lVar17 + 0x418) = param_3;
          *(uint *)(lVar17 + 0x420) = param_4;
          return unaff_x30;
        }
        recovered_1000d270(param_1);
      }
      uVar13 = *(ulong *)(param_1 + 0x350);
      if ((((uVar13 != 0) && (DAT_100180d0 != 0)) && (DAT_100180d4 != 0)) &&
         (uVar9 = (ulong)(DAT_100180d0 << 2), (ulong)DAT_100180d0 * 4 <= uVar9)) {
        uVar11 = DAT_100180d4 * uVar9;
        uVar10 = (uint)uVar11;
        if ((uVar11 & 0xffffffff00000000) != 0) {
          uVar10 = 0xffffffff;
        }
        if (((int)uVar13 != 0) && (uVar10 == 0 || uVar11 <= uVar10)) {
          uVar10 = iVar15 + uVar14;
          uVar2 = iVar19 + uVar18;
          bVar1 = (int)uVar10 < 1;
          bVar4 = (int)uVar2 < 1;
          if (((((!bVar1 && !bVar4) && DAT_100180d0 != uVar14) &&
               ((bVar1 || bVar4) || (int)uVar14 <= (int)DAT_100180d0)) && DAT_100180d4 != uVar18) &&
              (((bVar1 || bVar4) || (int)DAT_100180d0 <= (int)uVar14) ||
              (int)uVar18 <= (int)DAT_100180d4)) {
            uVar16 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
            uVar11 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
            if ((int)DAT_100180d0 <= (int)uVar10) {
              uVar10 = DAT_100180d0;
            }
            if ((int)DAT_100180d4 <= (int)uVar2) {
              uVar2 = DAT_100180d4;
            }
            lVar17 = uVar13 + uVar9 * uVar11;
            uVar5 = (ulong)(uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU));
            for (; (long)uVar11 < (long)(int)uVar2; uVar11 = uVar11 + 1) {
              if ((uVar13 & 3) == 0) {
                for (uVar7 = uVar5; (int)uVar7 < (int)uVar10; uVar7 = uVar7 + 1) {
                  *(uint *)(lVar17 + uVar7 * 4) = uVar16 >> 0x10 | uVar16 << 0x10;
                }
              }
              else {
                puVar6 = (undefined1 *)(uVar13 + uVar5 * 4 + uVar11 * uVar9);
                for (uVar7 = uVar5; (int)uVar7 < (int)uVar10; uVar7 = (ulong)((int)uVar7 + 1)) {
                  *puVar6 = (char)(param_4 >> 0x18);
                  puVar6[1] = (char)(param_4 >> 0x10);
                  puVar6[2] = (char)(param_4 >> 8);
                  puVar6[3] = 0xff;
                  puVar6 = puVar6 + 4;
                }
              }
              lVar17 = lVar17 + uVar9;
            }
          }
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x57ec) != '\0') {
        recovered_1000d270(param_1);
      }
      if (((param_4 & 0xff) != 0) && (*(long *)(param_1 + 0x350) != 0)) {
        uVar10 = uVar14;
        if ((int)DAT_100180d0 <= (int)uVar14) {
          uVar10 = DAT_100180d0;
        }
        uVar2 = 0;
        if (-1 < (int)uVar14) {
          uVar2 = uVar10;
        }
        uVar10 = uVar18;
        if ((int)DAT_100180d4 <= (int)uVar18) {
          uVar10 = DAT_100180d4;
        }
        uVar16 = 0;
        if (-1 < param_2) {
          uVar16 = uVar10;
        }
        uVar14 = uVar14 + iVar15;
        uVar10 = uVar14;
        if ((int)DAT_100180d0 <= (int)uVar14) {
          uVar10 = DAT_100180d0;
        }
        uVar3 = 0;
        if (-1 < (int)uVar14) {
          uVar3 = uVar10;
        }
        uVar18 = uVar18 + iVar19;
        uVar14 = uVar18;
        if ((int)DAT_100180d4 <= (int)uVar18) {
          uVar14 = DAT_100180d4;
        }
        uVar10 = 0;
        if (-1 < (int)uVar18) {
          uVar10 = uVar14;
        }
        for (; (int)uVar16 < (int)uVar10; uVar16 = uVar16 + 1) {
          for (uVar14 = uVar2; (int)uVar14 < (int)uVar3; uVar14 = uVar14 + 1) {
            recovered_1000d2d4(param_1,uVar14,uVar16,param_4 >> 0x18,param_4 >> 0x10 & 0xff,
                               param_4 >> 8 & 0xff,param_4 & 0xff);
          }
        }
      }
    }
  }
  return unaff_x30;
}

#undef DAT_1000fab8
#undef DAT_100180d0
#undef DAT_100180d4

#undef DAT_1000fab8
#define DAT_1000fab8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2f4U)))
#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(uint *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cebc
 */

undefined8 recovered_1000cebc(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 unaff_x30;

  uVar16 = param_3 & 0xffffffff | 0x100000000;
  uVar6 = (uint)param_4;
  recovered_1000cbf4(param_1,param_2,uVar16,uVar6);
  recovered_1000cbf4(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar16,uVar6);
  recovered_1000cbf4(param_1,param_2,param_3 & 0xffffffff00000000 | 1,uVar6);
  uVar19 = (int)param_3 + (int)param_2;
  uVar3 = uVar19 - 1;
  if (param_1 == 0) {
    return 0;
  }
  iVar18 = (int)(param_3 >> 0x20);
  if (0xffffffff < (long)param_3) {
    uVar17 = (uint)(param_2 >> 0x20);
    if (((uVar6 ^ 0xffffffff) & 0xff) == 0) {
      if (*(char *)(param_1 + 0x57ec) != '\0') {
        uVar11 = *(uint *)(param_1 + 0x57e8);
        if (uVar11 < 0xc0) {
          lVar15 = param_1 + (ulong)uVar11 * 0x70;
          *(uint *)(param_1 + 0x57e8) = uVar11 + 1;
          memset((void *)(lVar15 + 1000),0,0x70);
          *(undefined4 *)(lVar15 + 1000) = 2;
          uVar2 = DAT_100180d4;
          uVar11 = DAT_100180d0;
          uVar9 = *(undefined8 *)(param_1 + 0x350);
          uVar19 = DAT_100180d0 << 2;
          uVar16 = (ulong)DAT_100180d4 * (ulong)uVar19;
          *(int *)(lVar15 + 0x3f0) = (int)uVar9;
          *(int *)(lVar15 + 0x3f4) = (int)((ulong)uVar9 >> 0x20);
          uVar13 = (undefined4)uVar16;
          if ((uVar16 & 0xffffffff00000000) != 0) {
            uVar13 = 0xffffffff;
          }
          *(undefined4 *)(lVar15 + 0x3f8) = uVar13;
          *(uint *)(lVar15 + 0x3fc) = uVar11;
          *(uint *)(lVar15 + 0x400) = uVar2;
          *(uint *)(lVar15 + 0x404) = uVar19;
          *(undefined8 *)(lVar15 + 0x408) = DAT_1000fab8;
          *(uint *)(lVar15 + 0x410) = uVar3;
          *(uint *)(lVar15 + 0x414) = uVar17;
          *(undefined4 *)(lVar15 + 0x418) = 1;
          *(int *)(lVar15 + 0x41c) = iVar18;
          *(uint *)(lVar15 + 0x420) = uVar6;
          return unaff_x30;
        }
        recovered_1000d270(param_1);
      }
      uVar16 = *(ulong *)(param_1 + 0x350);
      if ((((uVar16 != 0) && (DAT_100180d0 != 0)) && (DAT_100180d4 != 0)) &&
         (uVar10 = (ulong)(DAT_100180d0 << 2), (ulong)DAT_100180d0 * 4 <= uVar10)) {
        uVar12 = DAT_100180d4 * uVar10;
        uVar11 = (uint)uVar12;
        if ((uVar12 & 0xffffffff00000000) != 0) {
          uVar11 = 0xffffffff;
        }
        if (((int)uVar16 != 0) && (uVar11 == 0 || uVar12 <= uVar11)) {
          uVar11 = iVar18 + uVar17;
          bVar1 = (int)uVar19 < 1;
          bVar4 = (int)uVar11 < 1;
          if (((((!bVar1 && !bVar4) && DAT_100180d0 != uVar3) &&
               ((bVar1 || bVar4) || (int)uVar3 <= (int)DAT_100180d0)) && DAT_100180d4 != uVar17) &&
              (((bVar1 || bVar4) || (int)DAT_100180d0 <= (int)uVar3) ||
              (int)uVar17 <= (int)DAT_100180d4)) {
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar12 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
            if ((int)DAT_100180d0 <= (int)uVar19) {
              uVar19 = DAT_100180d0;
            }
            if ((int)DAT_100180d4 <= (int)uVar11) {
              uVar11 = DAT_100180d4;
            }
            lVar15 = uVar16 + uVar10 * uVar12;
            uVar5 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
            for (; (long)uVar12 < (long)(int)uVar11; uVar12 = uVar12 + 1) {
              if ((uVar16 & 3) == 0) {
                for (uVar8 = uVar5; (int)uVar8 < (int)uVar19; uVar8 = uVar8 + 1) {
                  *(uint *)(lVar15 + uVar8 * 4) = uVar6 >> 0x10 | uVar6 << 0x10;
                }
              }
              else {
                puVar7 = (undefined1 *)(uVar16 + uVar5 * 4 + uVar12 * uVar10);
                for (uVar8 = uVar5; (int)uVar8 < (int)uVar19; uVar8 = (ulong)((int)uVar8 + 1)) {
                  *puVar7 = (char)(param_4 >> 0x18);
                  puVar7[1] = (char)(param_4 >> 0x10);
                  puVar7[2] = (char)(param_4 >> 8);
                  puVar7[3] = 0xff;
                  puVar7 = puVar7 + 4;
                }
              }
              lVar15 = lVar15 + uVar10;
            }
          }
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x57ec) != '\0') {
        recovered_1000d270(param_1);
      }
      if (((param_4 & 0xff) != 0) && (*(long *)(param_1 + 0x350) != 0)) {
        uVar11 = uVar3;
        if ((int)DAT_100180d0 <= (int)uVar3) {
          uVar11 = DAT_100180d0;
        }
        uVar2 = 0;
        if (-1 < (int)uVar3) {
          uVar2 = uVar11;
        }
        uVar11 = uVar17;
        if ((int)DAT_100180d4 <= (int)uVar17) {
          uVar11 = DAT_100180d4;
        }
        uVar14 = 0;
        if (-1 < (long)((ulong)uVar3 | param_2 & 0xffffffff00000000)) {
          uVar14 = uVar11;
        }
        uVar3 = uVar19;
        if ((int)DAT_100180d0 <= (int)uVar19) {
          uVar3 = DAT_100180d0;
        }
        uVar11 = 0;
        if (-1 < (int)uVar19) {
          uVar11 = uVar3;
        }
        uVar17 = uVar17 + iVar18;
        uVar19 = uVar17;
        if ((int)DAT_100180d4 <= (int)uVar17) {
          uVar19 = DAT_100180d4;
        }
        uVar3 = 0;
        if (-1 < (int)uVar17) {
          uVar3 = uVar19;
        }
        for (; (int)uVar14 < (int)uVar3; uVar14 = uVar14 + 1) {
          for (uVar19 = uVar2; (int)uVar19 < (int)uVar11; uVar19 = uVar19 + 1) {
            recovered_1000d2d4(param_1,uVar19,uVar14,uVar6 >> 0x18,uVar6 >> 0x10 & 0xff,
                               uVar6 >> 8 & 0xff,uVar6 & 0xff);
          }
        }
      }
    }
  }
  return unaff_x30;
}

#undef DAT_1000fab8
#undef DAT_100180d0
#undef DAT_100180d4

#define uStack_5c (*(uint *)(frame + 36))
#define uStack_58 (*(uint *)(frame + 40))
#define uStack_54 (*(uint *)(frame + 44))
#define pvStack_68 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000cf4c
 */

void recovered_1000cf4c(long param_1,uint param_2,int param_3,char *param_4,int param_5,
                       undefined8 param_6)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;

  if (((param_1 != 0) && (param_4 != (char *)0x0)) && (*param_4 != '\0')) {
    memset(&pvStack_68,0,0x18);
    if (param_5 < 2) {
      param_5 = 1;
    }
    uVar1 = recovered_1000ace8(param_4,param_5,(uint)param_6,&pvStack_68);
    if ((uVar1 != 0) && (pvStack_68 != (void *)0x0)) {
      recovered_1000d270(param_1);
      for (uVar3 = 0; uVar3 < uStack_58; uVar3 = uVar3 + 1) {
        pvVar5 = pvStack_68;
        uVar1 = param_2;
        for (uVar4 = 0; uVar4 < uStack_5c; uVar4 = uVar4 + 1) {
          pbVar2 = (byte *)((long)pvVar5 + uVar3 * uStack_54);
          recovered_1000d2d4(param_1,uVar1,(int)uVar3 + param_3,(uint)*pbVar2,(uint)pbVar2[1],
                             (uint)pbVar2[2],(uint)pbVar2[3]);
          pvVar5 = (void *)((long)pvVar5 + 4);
          uVar1 = uVar1 + 1;
        }
      }
      recovered_10001754(pvStack_68);
    }
  }
  return;
}

#undef uStack_5c
#undef uStack_58
#undef uStack_54
#undef pvStack_68

#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
#undef str_10010bb9
#define str_10010bb9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13f5U)))
#undef str_10010bcd
#define str_10010bcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1409U)))
#define in_stack_ffffffffffffff00 (*(ulong *)(frame + 16))
#define acStack_f0 (*(char (*)[192])(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d03c
 */

void recovered_1000d03c(long param_1,long param_2,char *param_3,long param_4,long param_5)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  char *format;
  char *vararg0;

  if ((param_1 != 0) && (param_2 != 0)) {
    vararg0 = str_10010390;
    if (param_5 == 0) {
      if ((param_3 != (char *)0x0) && (vararg0 = str_10010390, *param_3 != '\0')) {
        vararg0 = param_3;
      }
      format = str_10010bcd;
    }
    else {
      if ((param_3 != (char *)0x0) && (vararg0 = str_10010390, *param_3 != '\0')) {
        vararg0 = param_3;
      }
      in_stack_ffffffffffffff00 = param_5 + 0x3ffU >> 10;
      format = str_10010bb9;
    }
    pf_varargs_1000f7f4_3
              (acStack_f0,0xc0,format,(ulonglong)vararg0,param_4 + 0x3ffU >> 10,
               in_stack_ffffffffffffff00);
    recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)acStack_f0);
    recovered_1000cbf4(param_1,(ulong)(DAT_100180d4 - 0x16) << 0x20,
                       (ulong)DAT_100180d0 | 0x1600000000,0xeceff1ff);
    recovered_1000cbf4(param_1,(ulong)(DAT_100180d4 - 0x16) << 0x20,
                       (ulong)DAT_100180d0 | 0x100000000,0x7a848eff);
    recovered_1000cf4c(param_1,10,DAT_100180d4 + -0xf,(char *)(param_2 + 0x141),1,0x12181cff);
  }
  return;
}

#undef DAT_100180d0
#undef DAT_100180d4
#undef str_10010390
#undef str_10010bb9
#undef str_10010bcd
#undef in_stack_ffffffffffffff00
#undef acStack_f0

#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d12c
 */

void recovered_1000d12c(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint128 auVar6;
  uint128 auVar7;

  iVar1 = DAT_100180d4;
  if (param_1 == 0) {
    return;
  }
  uVar2 = (ulong)(DAT_100180d4 - 0x2c) << 0x20 | 8;
  uVar3 = (ulong)(DAT_100180d4 - 0x3c) << 0x20 | 8;
  auVar6 = recovered_1000d3c0(param_2);
  auVar7 = recovered_1000d388();
  recovered_1000cbf4(param_1,PF_PART8(auVar7, 0),PF_PART8(auVar7, 8),0xe4e4e4ff);
  recovered_1000cebc(param_1,PF_PART8(auVar7, 0),PF_PART8(auVar7, 8),0xacacacff);
  recovered_1000cbf4(param_1,(PF_PART8(auVar6, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar6, 0) + 1)) +
                             0x100000000,
                     (PF_PART8(auVar6, 8) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar6, 8) - 2)) - 0x200000000,
                     0xbebebeff);
  recovered_1000cebc(param_1,PF_PART8(auVar6, 0),PF_PART8(auVar6, 8),0x747474ff);
  recovered_1000cbf4(param_1,uVar3,0xe0000000c,0xeeeeeeff);
  recovered_1000cebc(param_1,uVar3,0xe0000000c,0x969696ff);
  recovered_1000d450(param_1,uVar3,0xe0000000c,1,0x464646ff);
  recovered_1000cbf4(param_1,uVar2,0xe0000000c,0xeeeeeeff);
  recovered_1000cebc(param_1,uVar2,0xe0000000c,0x969696ff);
  iVar5 = 3;
  for (lVar4 = 0; lVar4 != 4; lVar4 = lVar4 + 1) {
    recovered_1000cbf4(param_1,CONCAT44(iVar1 + -0x27 + (int)lVar4,0xe - iVar5),
                       (ulong)(uint)(iVar5 << 1) | 0x100000001,0x464646ff);
    iVar5 = iVar5 + -1;
  }
  return;
}

#undef DAT_100180d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d270
 */

void recovered_1000d270(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x57e8);
  if (uVar3 == 0) {
    return;
  }
  bVar2 = recovered_100019c8(0x118);
  if (bVar2) {
    uVar1 = UINT_82010918;
    if ((uVar1 != 0) &&
       (uVar3 = (*(code *)(ulong)uVar1)((void *)(param_1 + 1000),uVar3), uVar3 != 0))
    goto LAB_1000d2c0;
  }
  *(undefined1 *)(param_1 + 0x57ec) = 0;
LAB_1000d2c0:
  *(undefined4 *)(param_1 + 0x57e8) = 0;
  return;
}


#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d2d4
 */

void recovered_1000d2d4(long param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                       uint param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;

  if ((((-1 < (int)(param_3 | param_2)) && (*(long *)(param_1 + 0x350) != 0)) &&
      ((int)param_2 < (int)DAT_100180d0)) && ((param_7 != 0 && ((int)param_3 < DAT_100180d4)))) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x350) +
                     ((ulong)param_2 + (ulong)DAT_100180d0 * (ulong)param_3) * 4);
    if (param_7 == 0xff) {
      *pbVar1 = (byte)param_4;
      pbVar1[1] = (byte)param_5;
      pbVar1[2] = (byte)param_6;
    }
    else {
      uVar2 = param_7 ^ 0xff;
      *pbVar1 = (byte)((uVar2 * *pbVar1 + param_7 * param_4 + 0x7f) / 0xff);
      pbVar1[1] = (byte)((uVar2 * pbVar1[1] + param_7 * param_5 + 0x7f) / 0xff);
      pbVar1[2] = (byte)((uVar2 * pbVar1[2] + param_7 * param_6 + 0x7f) / 0xff);
    }
    pbVar1[3] = 0xff;
  }
  return;
}

#undef DAT_100180d0
#undef DAT_100180d4

#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d388
 */

uint128 recovered_1000d388(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint128 auVar2;

  lVar1 = 0x120000000c;
  if (0x9d < DAT_100180d4) {
    lVar1 = ((ulong)(DAT_100180d4 - 0x3c) << 0x20) + -0x4ffffffff4;
  }
  PF_PART8(auVar2, 8) = lVar1;
  PF_PART8(auVar2, 0) = 0x4e00000008;
  return auVar2;
}

#undef DAT_100180d4

#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d3c0
 */

uint128 recovered_1000d3c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint128 auVar8;
  uint128 auVar9;

  auVar8 = recovered_1000d388();
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x544d0);
    iVar2 = DAT_100180d4 + -0x5e;
    iVar3 = iVar1 - iVar2;
    if (iVar3 != 0 && iVar2 <= iVar1) {
      uVar7 = PF_PART4(auVar8, 12);
      uVar6 = 0;
      if (iVar1 != 0) {
        uVar6 = (int)(iVar2 * uVar7) / iVar1;
      }
      if ((int)uVar6 < 0x13) {
        uVar6 = 0x12;
      }
      if ((int)uVar7 <= (int)uVar6) {
        uVar6 = uVar7;
      }
      uVar5 = (ulong)uVar6;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = (int)((uVar7 - uVar6) * *(int *)(param_1 + 0x544cc)) / iVar3;
      }
      uVar4 = (ulong)(uint)(iVar1 + PF_PART4(auVar8, 4));
      goto LAB_1000d43c;
    }
  }
  uVar4 = PF_PART8(auVar8, 0) >> 0x20;
  uVar5 = PF_PART8(auVar8, 8) >> 0x20;
LAB_1000d43c:
  PF_PART8(auVar9, 8) = PF_PART8(auVar8, 8) & 0xffffffff | uVar5 << 0x20;
  PF_PART8(auVar9, 0) = PF_PART8(auVar8, 0) & 0xffffffff | uVar4 << 0x20;
  return auVar9;
}

#undef DAT_100180d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d450
 */

void recovered_1000d450(long param_1,undefined8 param_2,undefined8 param_3,int param_4,
                       undefined8 param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;

  lVar3 = 0;
  iVar2 = -4;
  if (param_4 == 0) {
    iVar2 = -2;
  }
  iVar4 = 3;
  for (; lVar3 != 4; lVar3 = lVar3 + 1) {
    iVar1 = (int)lVar3;
    if (param_4 == 0) {
      iVar1 = iVar4;
    }
    recovered_1000cbf4(param_1,CONCAT44(iVar2 + (int)((ulong)param_2 >> 0x20) +
                                        (int)((ulong)param_3 >> 0x20) / 2 + (int)lVar3,
                                        ((int)param_3 / 2 + (int)param_2) - iVar1),
                       (ulong)(uint)(iVar1 << 1) | 0x100000001,(uint)param_5);
    iVar4 = iVar4 + -1;
  }
  return;
}


#undef DAT_10010bde
#define DAT_10010bde (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141aU)))
#undef DAT_10010be0
#define DAT_10010be0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141cU)))
#undef DAT_10010be2
#define DAT_10010be2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141eU)))
#undef DAT_10010c00
#define DAT_10010c00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143cU)))
#undef DAT_100180d0
#define DAT_100180d0 (*(uint *)(((uintptr_t)pf_module_state + 0x890cU)))
#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_10010be5
#define str_10010be5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1421U)))
#undef str_10010bf1
#define str_10010bf1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142dU)))
#undef str_10010c02
#define str_10010c02 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143eU)))
#undef str_10010c1c
#define str_10010c1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1458U)))
#define pvStack_68 (*(void * *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d4e8
 */

void recovered_1000d4e8(long param_1)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong unaff_x27;
  ulong unaff_x28;

  pvVar6 = (void *)recovered_1000e1e4(param_1);
  if ((param_1 == 0) || (pvVar6 == (void *)0x0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x57e8) = 0;
  recovered_1000cbf4(param_1,0,CONCAT44(DAT_100180d4,DAT_100180d0),0xfffffcff);
  recovered_1000cbf4(param_1,0,(ulong)DAT_100180d0 | 0x4800000000,0xe1e5e8ff);
  recovered_1000cbf4(param_1,0x4700000000,(ulong)DAT_100180d0 | 0x100000000,0x7a848eff);
  if ((*(int *)((long)pvVar6 + 0x554d4) == 0) ||
     (uVar4 = 0xecf0f2ff, *(int *)((long)pvVar6 + 0x554d8) == 0)) {
    uVar4 = 0xd2d6daff;
  }
  recovered_1000cbf4(param_1,0x90000000a,0x1a0000001a,uVar4);
  recovered_1000cebc(param_1,0x90000000a,0x1a0000001a,0x7a848eff);
  if ((*(int *)((long)pvVar6 + 0x554d4) == 0) ||
     (uVar4 = 0x12181cff, *(int *)((long)pvVar6 + 0x554d8) == 0)) {
    uVar4 = 0x808890ff;
  }
  recovered_1000cf4c(param_1,0x12,0x12,&DAT_10010bde,1,(ulong)uVar4);
  if ((*(uint *)((long)pvVar6 + 0x554d4) == 0) ||
     (uVar4 = 0xecf0f2ff, *(uint *)((long)pvVar6 + 0x554d4) <= *(int *)((long)pvVar6 + 0x554d8) + 1U
     )) {
    uVar4 = 0xd2d6daff;
  }
  pvStack_68 = pvVar6;
  recovered_1000cbf4(param_1,0x900000028,0x1a0000001a,uVar4);
  recovered_1000cebc(param_1,0x900000028,0x1a0000001a,0x7a848eff);
  if ((*(uint *)((long)pvVar6 + 0x554d4) == 0) ||
     (uVar4 = 0x12181cff, *(uint *)((long)pvVar6 + 0x554d4) <= *(int *)((long)pvVar6 + 0x554d8) + 1U
     )) {
    uVar4 = 0x808890ff;
  }
  recovered_1000cf4c(param_1,0x30,0x12,&DAT_10010be0,1,(ulong)uVar4);
  uVar1 = DAT_100180d0;
  uVar5 = DAT_100180d0 - 0xfa;
  recovered_1000cbf4(param_1,0x90000004a,(ulong)uVar5 | 0x1a00000000,0xfafcfcff);
  uVar4 = 0x165cb0ff;
  if (*(char *)(param_1 + 0x57ef) == '\0') {
    uVar4 = 0x7a848eff;
  }
  recovered_1000cebc(param_1,0x90000004a,(ulong)uVar5 | 0x1a00000000,(ulong)uVar4);
  recovered_1000cf4c(param_1,0x50,0x11,(char *)(param_1 + 0x57f2),1,0x12181cff);
  if ((*(char *)(param_1 + 0x57ef) == '\x01') && ((*(uint *)(param_1 + 0x205c4c) / 0x18 & 1) == 0))
  {
    uVar5 = recovered_1000ac60((char *)(param_1 + 0x57f2),1);
    uVar4 = uVar5 + 0x50;
    if ((int)(uVar1 - 0xb8) <= (int)(uVar5 + 0x50)) {
      uVar4 = uVar1 - 0xb8;
    }
    uVar1 = 0x50;
    if (-1 < (int)uVar5) {
      uVar1 = uVar4;
    }
    recovered_1000cbf4(param_1,(ulong)uVar1 | 0xf00000000,0xe00000001,0x12181cff);
  }
  uVar4 = DAT_100180d0;
  recovered_1000cbf4(param_1,(ulong)(DAT_100180d0 - 0xa6) | 0x900000000,0x1a0000002e,0x165cb0ff);
  recovered_1000cf4c(param_1,uVar4 - 0x9a,0x12,&DAT_10010be2,1,0xffffffff);
  uVar1 = DAT_100180d0;
  uVar5 = DAT_100180d0 - 0x70;
  uVar4 = 0xced6dbff;
  if (*(char *)(param_1 + 0x57f0) == '\0') {
    uVar4 = 0xbfe2c8ff;
  }
  recovered_1000cbf4(param_1,(ulong)uVar5 | 0x900000000,0x1a00000068,uVar4);
  recovered_1000cebc(param_1,(ulong)uVar5 | 0x900000000,0x1a00000068,0x7a848eff);
  pcVar7 = str_10010be5;
  if (*(char *)(param_1 + 0x57f0) == '\0') {
    pcVar7 = str_10010bf1;
  }
  recovered_1000cf4c(param_1,uVar1 - 0x68,0x12,pcVar7,1,0x12181cff);
  uVar10 = 0;
  pcVar7 = (char *)(param_1 + 0x59f9);
  uVar4 = 0x10;
  while( true ) {
    uVar5 = *(uint *)(param_1 + 0x205c38);
    if (uVar5 <= uVar10) break;
    uVar5 = 0xfffffcff;
    if (uVar10 != *(uint *)(param_1 + 0x205c3c)) {
      uVar5 = 0xccd3d8ff;
    }
    recovered_1000cbf4(param_1,(ulong)(uVar4 - 8) | 0x2f00000000,0x1800000084,uVar5);
    recovered_1000cebc(param_1,(ulong)(uVar4 - 8) | 0x2f00000000,0x1800000084,0x7a848eff);
    pcVar2 = (char *)((uintptr_t)pf_module_state + 0x1438U);
    if (*pcVar7 != '\0') {
      pcVar2 = pcVar7;
    }
    recovered_1000cf4c(param_1,uVar4,0x37,pcVar2,1,0x12181cff);
    uVar10 = uVar10 + 1;
    uVar4 = uVar4 + 0x88;
    pcVar7 = pcVar7 + 0x555e0;
  }
  if (uVar5 < 6) {
    uVar10 = (ulong)uVar5 * 0x88 + 0x3100000008;
    recovered_1000cbf4(param_1,uVar10,0x1600000018,0xecf0f2ff);
    recovered_1000cebc(param_1,uVar10,0x1600000018,0x7a848eff);
    recovered_1000cf4c(param_1,uVar5 * 0x88 + 0xf,0x38,&DAT_10010c00,1,0x12181cff);
  }
  pvVar6 = pvStack_68;
  recovered_1000d12c(param_1,(long)pvStack_68);
  recovered_1000cbf4(param_1,(ulong)(DAT_100180d4 - 0x16) << 0x20,(ulong)DAT_100180d0 | 0x1600000000
                     ,0xeceff1ff);
  recovered_1000cbf4(param_1,(ulong)(DAT_100180d4 - 0x16) << 0x20,(ulong)DAT_100180d0 | 0x100000000,
                     0x7a848eff);
  iVar3 = DAT_100180d4 + -0xf;
  if (*(char *)((long)pvVar6 + 0x141) == '\0') {
    pcVar7 = str_10010c02;
    if (*(char *)(param_1 + 0x57ec) == '\0') {
      pcVar7 = str_10010c1c;
    }
  }
  else {
    pcVar7 = (char *)((long)pvVar6 + 0x141);
  }
  if (((param_1 != 0) && (pcVar7 != (char *)0x0)) && (*pcVar7 != '\0')) {
    memset(&pvStack_68,0,0x18);
    uVar4 = recovered_1000ace8(pcVar7,1,0x12181cff,&pvStack_68);
    pvVar6 = pvStack_68;
    if ((uVar4 != 0) && (pvStack_68 != (void *)0x0)) {
      recovered_1000d270(param_1);
      for (uVar10 = 0; uVar10 < (unaff_x27 & 0xffffffff); uVar10 = uVar10 + 1) {
        pvVar11 = pvVar6;
        uVar4 = 10;
        for (uVar9 = 0; uVar9 < unaff_x28 >> 0x20; uVar9 = uVar9 + 1) {
          pbVar8 = (byte *)((long)pvVar11 + uVar10 * (unaff_x27 >> 0x20));
          recovered_1000d2d4(param_1,uVar4,(int)uVar10 + iVar3,(uint)*pbVar8,(uint)pbVar8[1],
                             (uint)pbVar8[2],(uint)pbVar8[3]);
          pvVar11 = (void *)((long)pvVar11 + 4);
          uVar4 = uVar4 + 1;
        }
      }
      recovered_10001754(pvVar6);
    }
  }
  return;
}

#undef DAT_10010bde
#undef DAT_10010be0
#undef DAT_10010be2
#undef DAT_10010c00
#undef DAT_100180d0
#undef DAT_100180d4
#undef str_10010be5
#undef str_10010bf1
#undef str_10010c02
#undef str_10010c1c
#undef pvStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d96c
 */

undefined8 recovered_1000d96c(long param_1,long *param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 unaff_x30;

  if ((((param_2 != (long *)0x0) && (lVar11 = *param_2, param_2 != (long *)0x0)) && (param_1 != 0))
     && (((lVar11 != 0 && (*(int *)((long)param_2 + 0xc) != 0)) && ((int)param_2[2] != 0)))) {
    uVar6 = param_4 >> 0x20;
    iVar9 = (int)param_4;
    uVar5 = (uint)(param_4 >> 0x20);
    if (0 < iVar9 && 0 < (int)uVar5) {
      recovered_1000d270(param_1);
      uVar7 = param_4 & 0x7fffffff;
      uVar13 = (ulong)*(uint *)((long)param_2 + 0xc);
      uVar3 = (ulong)*(uint *)(param_2 + 2);
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = (uint)((uVar7 * uVar3) / uVar13);
      }
      if ((int)uVar8 < (int)uVar5) {
        param_4 = 0;
        if (uVar3 != 0) {
          param_4 = (uVar6 * uVar13) / uVar3;
        }
        uVar8 = uVar5;
        if ((int)param_4 < 1) {
          return unaff_x30;
        }
      }
      for (uVar13 = 0; uVar13 != uVar6; uVar13 = uVar13 + 1) {
        uVar3 = 0;
        if ((ulong)uVar8 != 0) {
          uVar3 = ((uVar13 + (long)((int)(uVar8 - uVar5) / 2)) * (ulong)*(uint *)(param_2 + 2)) /
                  (ulong)uVar8;
        }
        lVar1 = (long)(((int)param_4 - iVar9) / 2);
        uVar10 = param_3;
        for (uVar12 = uVar7; uVar12 != 0; uVar12 = uVar12 - 1) {
          uVar4 = 0;
          if ((param_4 & 0xffffffff) != 0) {
            uVar4 = (lVar1 * (ulong)*(uint *)((long)param_2 + 0xc)) / (param_4 & 0xffffffff);
          }
          pbVar2 = (byte *)(lVar11 + ((uVar3 & 0xffffffff) * (ulong)*(uint *)((long)param_2 + 0xc) +
                                     (uVar4 & 0xffffffff)) * 4);
          recovered_1000d2d4(param_1,(uint)uVar10,(int)uVar13 + (int)(param_3 >> 0x20),(uint)*pbVar2
                             ,(uint)pbVar2[1],(uint)pbVar2[2],(uint)pbVar2[3]);
          lVar1 = lVar1 + 1;
          uVar10 = (ulong)((uint)uVar10 + 1);
        }
      }
    }
  }
  return unaff_x30;
}


#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#undef str_10010390
#define str_10010390 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbccU)))
#define alStack_284 (*(long (*)[3])(frame + 28))
#define abStack_26c (*(byte (*)[256])(frame + 52))
#define iStack_16c (*(int *)(frame + 308))
#define abStack_168 (*(byte (*)[264])(frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000dae4
 */

void recovered_1000dae4(long param_1,long param_2)

{
  unsigned char frame[704] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;

  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x332) == '\x01') {
      uVar7 = *(uint *)(param_2 + 0x338);
    }
    else {
      uVar7 = 0x161c22ff;
    }
    if (*(char *)(param_2 + 0x333) == '\x01') {
      uVar8 = *(uint *)(param_2 + 0x33c);
    }
    else {
      uVar8 = 0x1252b4ff;
    }
    if (param_1 != 0) {
      for (uVar12 = 0; uVar12 != 2; uVar12 = uVar12 + 1) {
        for (uVar14 = 0; uVar14 < *(uint *)(param_2 + 0x52c40); uVar14 = uVar14 + 1) {
          puVar11 = (uint *)(param_2 + 0x440 + uVar14 * 0x370);
          uVar3 = *puVar11;
          if ((uVar12 ^ uVar3 == 7) != 1) goto LAB_1000de6c;
          if ((puVar11[0xdb] & 1) == 0) {
            iVar9 = *(int *)(param_2 + 0x544cc);
          }
          else {
            iVar9 = 0;
          }
          uVar16 = *(ulong *)(puVar11 + 1);
          uVar17 = *(ulong *)(puVar11 + 3);
          uVar13 = uVar17 >> 0x20;
          uVar5 = ((int)(uVar16 >> 0x20) + 0x48) - iVar9;
          iVar9 = uVar5 + (int)(uVar17 >> 0x20);
          if ((iVar9 < 0x48) || (DAT_100180d4 + -0x16 <= (int)uVar5 || 7 < uVar3))
          goto LAB_1000de6c;
          uVar15 = (uint)uVar16;
                    /* WARNING: Switch is manually overridden */
          switch((uintptr_t)(uVar3)) {
          default:
            uVar3 = puVar11[0xd6];
            goto LAB_1000de48;
          case 2:
            recovered_1000cf4c(param_1,uVar15,uVar5,(char *)(puVar11 + 5),puVar11[0xd6],(ulong)uVar8
                              );
            uVar3 = recovered_1000ac60((char *)(puVar11 + 5),puVar11[0xd6]);
            uVar16 = uVar16 & 0xffffffff | (ulong)(iVar9 - 2) << 0x20;
            uVar17 = (ulong)uVar3 | 0x100000000;
            uVar3 = uVar8;
            goto LAB_1000de68;
          case 3:
            iStack_16c = -1;
            recovered_10005020((char *)param_2,puVar11 + 0x35,(char *)abStack_168);
            bVar2 = recovered_10004fc4(abStack_168,(byte *)str_1000fbdc);
            if ((bVar2) || (bVar2 = recovered_10004fc4(abStack_168,(byte *)str_1000fbe4), bVar2)) {
              uVar13 = recovered_1000c40c((char *)abStack_168,abStack_168);
              iVar9 = (int)uVar13;
            }
            else {
              iVar9 = 0;
            }
            uVar16 = uVar16 & 0xffffffff | (ulong)uVar5 << 0x20;
            memset(alStack_284,0,0x18);
            bVar2 = recovered_100058f4((char *)abStack_168,&iStack_16c,abStack_26c);
            if (bVar2) {
              uVar3 = recovered_1000c5b4(iStack_16c,(char *)abStack_26c,alStack_284);
              if (uVar3 != 0) {
                recovered_1000e088(param_1,alStack_284,uVar16,uVar17);
                recovered_1000c634(alStack_284);
                break;
              }
              if (iVar9 != 0) {
                recovered_1000c51c((char *)abStack_26c);
                recovered_10001c8c((char *)(param_2 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x1472U));
              }
            }
            recovered_1000cbf4(param_1,uVar16,uVar17,0xe8ecefff);
            recovered_1000cebc(param_1,uVar16,uVar17,0x7a848eff);
            puVar6 = (uint *)str_10010390;
            if ((char)puVar11[5] != '\0') {
              puVar6 = puVar11 + 5;
            }
            uVar15 = uVar15 + 10;
            uVar5 = uVar5 + 0xc;
            uVar3 = 1;
            uVar1 = 0x444a52ff;
            goto LAB_1000de4c;
          case 4:
            uVar16 = uVar16 & 0xffffffff | (ulong)uVar5 << 0x20;
            recovered_1000cbf4(param_1,uVar16,uVar17,0xffffffff);
            uVar3 = 0x165cb0ff;
            if (uVar14 != *(uint *)(param_2 + 0x544c8)) {
              uVar3 = 0x7a848eff;
            }
            recovered_1000cebc(param_1,uVar16,uVar17,(ulong)uVar3);
            uVar3 = uVar15 + 6;
            bVar2 = (char)puVar11[0x95] != '\0';
            uVar1 = 0x7e848aff;
            if (bVar2) {
              uVar1 = uVar7;
            }
            puVar6 = puVar11 + 5;
            if (bVar2) {
              puVar6 = puVar11 + 0x95;
            }
            recovered_1000cf4c(param_1,uVar3,uVar5 + 8,(char *)puVar6,1,(ulong)uVar1);
            if ((uVar14 == *(uint *)(param_2 + 0x544c8)) &&
               ((*(uint *)(param_1 + 0x205c4c) / 0x18 & 1) == 0)) {
              uVar4 = recovered_1000ac60((char *)(puVar11 + 0x95),1);
              uVar1 = (uVar15 + (int)uVar17) - 8;
              uVar15 = uVar4 + uVar3;
              if ((int)uVar1 <= (int)(uVar4 + uVar3)) {
                uVar15 = uVar1;
              }
              if (-1 < (int)uVar4) {
                uVar3 = uVar15;
              }
              uVar16 = CONCAT44(uVar5 + 5,uVar3);
              uVar17 = (uVar17 & 0xffffffff00000000) - 0x9ffffffff;
              uVar3 = uVar7;
              goto LAB_1000de68;
            }
            break;
          case 5:
            uVar16 = uVar16 & 0xffffffff | (ulong)uVar5 << 0x20;
            recovered_1000cbf4(param_1,uVar16,uVar17,0xd6e1eaff);
            recovered_1000cebc(param_1,uVar16,uVar17,0x7a848eff);
            uVar16 = (ulong)(uVar15 + 10);
            uVar5 = uVar5 + 9;
            uVar3 = 1;
LAB_1000de48:
            uVar15 = (uint)uVar16;
            puVar6 = puVar11 + 5;
            uVar1 = uVar7;
LAB_1000de4c:
            recovered_1000cf4c(param_1,uVar15,uVar5,(char *)puVar6,uVar3,(ulong)uVar1);
            break;
          case 6:
            uVar16 = uVar16 & 0xffffffff | (ulong)uVar5 << 0x20;
            uVar3 = 0x7a848eff;
LAB_1000de68:
            recovered_1000cbf4(param_1,uVar16,uVar17,uVar3);
            break;
          case 7:
            recovered_1000cbf4(param_1,uVar16 & 0xffffffff | (ulong)uVar5 << 0x20,uVar17,
                               puVar11[0xd8]);
            for (lVar10 = 0; lVar10 < (int)puVar11[0xda]; lVar10 = lVar10 + 1) {
              recovered_1000cebc(param_1,uVar16 & 0xffffffff | (ulong)uVar5 << 0x20,
                                 uVar17 & 0xffffffff | uVar13 << 0x20,(ulong)puVar11[0xd9]);
              uVar5 = uVar5 + 1;
              uVar17 = (ulong)((int)uVar17 - 2);
              uVar13 = (ulong)((int)uVar13 - 2);
              uVar16 = uVar16 + 1;
            }
          }
LAB_1000de6c:
        }
      }
    }
  }
  return;
}

#undef DAT_100180d4
#undef str_1000fbdc
#undef str_1000fbe4
#undef str_10010390
#undef alStack_284
#undef abStack_26c
#undef iStack_16c
#undef abStack_168

#undef str_1000fbdc
#define str_1000fbdc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x418U)))
#undef str_1000fbe4
#define str_1000fbe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x420U)))
#define alStack_35c (*(long (*)[3])(frame + 20))
#define abStack_344 (*(byte (*)[256])(frame + 44))
#define iStack_244 (*(int *)(frame + 300))
#define auStack_240 (*(undefined1 (*)[256])(frame + 304))
#define abStack_140 (*(byte (*)[256])(frame + 560))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000df48
 */

void recovered_1000df48(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[912] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;

  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(char *)(param_2 + 0x330) == '\x01') {
      recovered_1000cbf4(param_1,param_3,param_4,*(uint *)(param_2 + 0x334));
    }
    if ((*(char *)(param_2 + 0x331) == '\x01') && (*(char *)(param_2 + 0x340) != '\0')) {
      iStack_244 = -1;
      recovered_10005020((char *)param_2,(uint *)(param_2 + 0x340),(char *)abStack_140);
      bVar1 = recovered_10004fc4(abStack_140,(byte *)str_1000fbdc);
      if ((bVar1) || (bVar1 = recovered_10004fc4(abStack_140,(byte *)str_1000fbe4), bVar1)) {
        uVar4 = recovered_1000c40c((char *)abStack_140,auStack_240);
        if ((int)uVar4 == 0) {
          return;
        }
        recovered_10001c8c((char *)abStack_140,0x100,(long)auStack_240);
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      memset(alStack_35c,0,0x18);
      bVar2 = recovered_100058f4((char *)abStack_140,&iStack_244,abStack_344);
      if (bVar2) {
        uVar3 = recovered_1000c5b4(iStack_244,(char *)abStack_344,alStack_35c);
        if (uVar3 == 0) {
          if (bVar1) {
            recovered_1000c51c((char *)abStack_344);
            recovered_10001c8c((char *)(param_2 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x14aaU));
          }
        }
        else {
          recovered_1000d96c(param_1,alStack_35c,param_3,param_4);
          recovered_1000c634(alStack_35c);
        }
      }
    }
  }
  return;
}

#undef str_1000fbdc
#undef str_1000fbe4
#undef alStack_35c
#undef abStack_344
#undef iStack_244
#undef auStack_240
#undef abStack_140

#undef DAT_100180d4
#define DAT_100180d4 (*(int *)(((uintptr_t)pf_module_state + 0x8910U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e088
 */

void recovered_1000e088(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;

  if (((((param_2 != (long *)0x0) && (lVar10 = *param_2, param_2 != (long *)0x0)) && (param_1 != 0))
      && ((lVar10 != 0 && (*(int *)((long)param_2 + 0xc) != 0)))) && ((int)param_2[2] != 0)) {
    uVar8 = (uint)param_4;
    uVar14 = (uint)(param_4 >> 0x20);
    if (0 < (int)uVar8 && 0 < (int)uVar14) {
      recovered_1000d270(param_1);
      uVar12 = (ulong)*(uint *)((long)param_2 + 0xc);
      uVar13 = (ulong)*(uint *)(param_2 + 2);
      uVar9 = 0;
      if (uVar12 != 0) {
        uVar9 = (uint)(((param_4 & 0x7fffffff) * uVar13) / uVar12);
      }
      uVar3 = uVar9;
      if ((int)uVar14 < (int)uVar9) {
        uVar3 = uVar14;
      }
      uVar11 = (ulong)uVar3;
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = (uint)(((param_4 >> 0x20) * uVar12) / uVar13);
      }
      uVar4 = uVar8;
      if ((int)uVar14 < (int)uVar9) {
        uVar4 = uVar5;
      }
      uVar12 = (ulong)uVar4;
      if (0 < (int)uVar4 && 0 < (int)uVar3) {
        for (uVar13 = 0; uVar13 < uVar11; uVar13 = uVar13 + 1) {
          lVar1 = uVar13 + (long)((int)(uVar14 - uVar3) / 2 + (int)((ulong)param_3 >> 0x20));
          if ((0x47 < lVar1) && (lVar1 < (long)DAT_100180d4 + -0x16)) {
            uVar15 = 0;
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = (uVar13 * *(uint *)(param_2 + 2)) / uVar11;
            }
            uVar9 = (int)(uVar8 - uVar4) / 2 + (int)param_3;
            for (; uVar12 != uVar15; uVar15 = uVar15 + 1) {
              uVar7 = 0;
              if (uVar12 != 0) {
                uVar7 = (uVar15 * *(uint *)((long)param_2 + 0xc)) / uVar12;
              }
              pbVar2 = (byte *)(lVar10 + ((uVar6 & 0xffffffff) *
                                          (ulong)*(uint *)((long)param_2 + 0xc) +
                                         (uVar7 & 0xffffffff)) * 4);
              recovered_1000d2d4(param_1,uVar9,(uint)lVar1,(uint)*pbVar2,(uint)pbVar2[1],
                                 (uint)pbVar2[2],(uint)pbVar2[3]);
              uVar9 = uVar9 + 1;
            }
          }
        }
      }
    }
  }
  return;
}

#undef DAT_100180d4

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e1e4
 */

long recovered_1000e1e4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = 0;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x205c38) == 0) ||
       (*(uint *)(param_1 + 0x205c38) <= *(uint *)(param_1 + 0x205c3c))) {
      return 0;
    }
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x205c3c) * 0x555e0 + 0x58f8;
  }
  return lVar1;
}


#undef str_1000fb38
#define str_1000fb38 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x374U)))
#undef str_100100c2
#define str_100100c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8feU)))
#undef str_10010d66
#define str_10010d66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15a2U)))
#undef str_10010d7c
#define str_10010d7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15b8U)))
#undef str_10010d92
#define str_10010d92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15ceU)))
#define acStack_60 (*(char (*)[64])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e220
 */

void recovered_1000e220(long param_1)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;

  lVar3 = recovered_1000e1e4(param_1);
  uVar2 = *(byte *)(param_1 + 0x57f0) ^ 1;
  *(char *)(param_1 + 0x57f0) = (char)uVar2;
  pf_varargs_1000f7f4_1(acStack_60,0x40,str_10010d92,(ulong)uVar2 & 1);
  recovered_10008934(str_100100c2);
  uVar4 = strlen(acStack_60);
  recovered_10008970(str_1000fb38,acStack_60,(uint)uVar4);
  if (lVar3 != 0) {
    pcVar1 = str_10010d66;
    if (*(char *)(param_1 + 0x57f0) == '\0') {
      pcVar1 = str_10010d7c;
    }
    recovered_10001c8c((char *)(lVar3 + 0x141),0xc0,(long)pcVar1);
  }
  *(undefined1 *)(param_1 + 0x57ee) = 1;
  return;
}

#undef str_1000fb38
#undef str_100100c2
#undef str_10010d66
#undef str_10010d7c
#undef str_10010d92
#undef acStack_60

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e2bc
 */

void recovered_1000e2bc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;

  lVar3 = recovered_1000e1e4(param_1);
  lVar4 = recovered_1000e420(lVar3);
  text = &DAT_1000fb37;
  if (lVar3 != 0) {
    text = (char *)(lVar3 + 1);
  }
  if (lVar4 != 0) {
    text = (char *)(lVar4 + 0x254);
  }
  if (*(char *)(param_1 + 0x57ef) == '\x01') {
    text = (char *)(param_1 + 0x57f2);
  }
  uVar5 = strlen(text);
  if (0xfffffffe < uVar5) {
    uVar5 = 0xffffffff;
  }
  bVar1 = recovered_100019c8(0x180);
  if (((bVar1) && (uVar2 = UINT_82010980, uVar2 != 0)) &&
     (uVar2 = (*(code *)(ulong)uVar2)(text,(uint)uVar5), uVar2 != 0)) {
    if (lVar3 != 0) {
      recovered_10001c8c((char *)(lVar3 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x15d8U));
    }
    *(undefined1 *)(param_1 + 0x57ee) = 1;
  }
  return;
}

#undef DAT_1000fb37

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e368
 */

void recovered_1000e368(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  lVar2 = recovered_1000e1e4(param_1);
  lVar3 = recovered_1000e420(lVar2);
  if (*(char *)(param_1 + 0x57ef) == '\x01') {
    uVar1 = recovered_1000e468((char *)(param_1 + 0x57f2),0x100);
    uVar4 = strlen((char *)(param_1 + 0x57f2));
    *(int *)(param_1 + 0x58f4) = (int)uVar4;
    uVar1 = uVar1 & 1;
  }
  else if (lVar3 == 0) {
    *(undefined1 *)(param_1 + 0x57ef) = 1;
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x544c8) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x57f2) = 0;
    *(undefined4 *)(param_1 + 0x58f4) = 0;
    uVar1 = recovered_1000e468((char *)(param_1 + 0x57f2),0x100);
    uVar4 = strlen((char *)(param_1 + 0x57f2));
    *(int *)(param_1 + 0x58f4) = (int)uVar4;
  }
  else {
    uVar1 = recovered_1000e468((char *)(lVar3 + 0x254),0x80);
    uVar1 = uVar1 & 1;
  }
  if (uVar1 != 0) {
    *(undefined1 *)(param_1 + 0x57ee) = 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e420
 */

long recovered_1000e420(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;

  lVar2 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x544c8);
    if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x52c40) <= (int)uVar1)) {
      return 0;
    }
    lVar3 = param_1 + (ulong)uVar1 * 0x370;
    lVar2 = lVar3 + 0x440;
    if (*(int *)(lVar3 + 0x440) != 4) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


#undef UINT_82010988
#define UINT_82010988 (*(uint *)(0x82010988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e468
 */

undefined4 recovered_1000e468(char *param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  char *outText;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;

  bVar4 = recovered_100019c8(0x188);
  if (bVar4) {
    uVar5 = UINT_82010988;
    if (uVar5 == 0) goto LAB_1000e4b0;
    uVar5 = (*(code *)(ulong)uVar5)();
  }
  else {
LAB_1000e4b0:
    uVar5 = 0;
  }
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar6 = strlen(param_1);
  if (uVar5 == 0) {
    return 0;
  }
  if (param_2 - 1U <= uVar6) {
    return 0;
  }
  uVar1 = ~(uint)uVar6 + (int)param_2;
  if (uVar1 <= uVar5) {
    uVar5 = uVar1;
  }
  uVar5 = uVar5 + 1;
  outText = recovered_100016e0((ulong)uVar5);
  if (outText == (char *)0x0) {
    return 0;
  }
  bVar4 = recovered_100019c8(0x184);
  if (bVar4) {
    uVar1 = UINT_82010984;
    if (uVar1 != 0) {
      uVar5 = (*(code *)(ulong)uVar1)(outText,uVar5);
      uVar7 = (ulong)uVar5;
      goto LAB_1000e550;
    }
  }
  else if (uVar5 != 0) {
    uVar7 = 0;
    *outText = '\0';
    goto LAB_1000e550;
  }
  uVar7 = 0;
LAB_1000e550:
  uVar9 = 0;
  for (uVar8 = 0; uVar8 < uVar7 && uVar6 < param_2 - 1U; uVar8 = uVar8 + 1) {
    bVar3 = outText[uVar8];
    bVar2 = 0x20;
    if ((bVar3 & 0xfb) != 9 && bVar3 != 10) {
      bVar2 = bVar3;
    }
    if ((byte)(bVar2 - 0x20) < 0x5f) {
      param_1[uVar6] = bVar2;
      uVar6 = uVar6 + 1;
      uVar9 = 1;
    }
  }
  param_1[uVar6] = '\0';
  recovered_10001754(outText);
  return uVar9;
}

#undef UINT_82010988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e5ac
 */

void recovered_1000e5ac(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  lVar1 = recovered_1000e1e4(param_1);
  if (lVar1 != 0) {
    recovered_100045cc(param_1,lVar1,(byte *)(param_1 + 0x57f2));
    recovered_10001c8c((char *)(param_1 + 0x57f2),0x100,lVar1 + 1);
    uVar2 = strlen((char *)(param_1 + 0x57f2));
    *(int *)(param_1 + 0x58f4) = (int)uVar2;
    *(undefined2 *)(param_1 + 0x57ee) = 1;
  }
  return;
}


#undef DAT_10010de8
#define DAT_10010de8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1624U)))
#undef str_10010dcc
#define str_10010dcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1608U)))
#undef str_10010dd9
#define str_10010dd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1615U)))
#define acStack_3e0 (*(char (*)[384])(frame + 16))
#define abStack_260 (*(byte (*)[256])(frame + 400))
#define acStack_160 (*(char (*)[256])(frame + 656))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e600
 */

long recovered_1000e600(long param_1,long param_2,uint param_3)

{
  unsigned char frame[1040] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  int *piVar6;
  long unaff_x30;

  if ((int)param_3 < 0) {
    return param_1;
  }
  if ((int)param_3 < *(int *)(param_2 + 0x544c4)) {
    lVar4 = param_2 + (ulong)param_3 * 0x188;
    if (*(char *)(lVar4 + 0x52c44) == '\0') {
      recovered_10001c8c(acStack_160,0x100,param_2 + 1);
    }
    else {
      recovered_10005020((char *)param_2,(uint *)(lVar4 + 0x52c44),acStack_160);
    }
    if (*(char *)(lVar4 + 0x52d4c) != '\0') {
      pcVar2 = recovered_100052e0((char *)(lVar4 + 0x52d4c),str_10010dcc);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = recovered_100052e0((char *)(lVar4 + 0x52d4c),str_10010dd9);
        bVar1 = pcVar2 != (char *)0x0;
      }
      else {
        bVar1 = true;
      }
      uVar3 = recovered_1000e810(param_1,param_2,(char *)(lVar4 + 0x52d4c));
      if (bVar1) {
        return unaff_x30;
      }
      if ((uVar3 & 1) != 0) {
        return unaff_x30;
      }
    }
    acStack_3e0[0] = '\0';
    piVar6 = (int *)(param_2 + 0x440);
    for (uVar3 = 0; uVar3 < *(uint *)(param_2 + 0x52c40); uVar3 = uVar3 + 1) {
      if (((piVar6[0xd5] == param_3) && (*piVar6 == 8 || *piVar6 == 4)) &&
         ((char)piVar6[0x75] != '\0')) {
        if (acStack_3e0[0] != '\0') {
          recovered_100054a4(acStack_3e0,0x180,'&');
        }
        recovered_1000ea54((long)acStack_3e0,(byte *)(piVar6 + 0x75));
        recovered_100054a4(acStack_3e0,0x180,'=');
        recovered_1000ea54((long)acStack_3e0,(byte *)(piVar6 + 0x95));
      }
      piVar6 = piVar6 + 0xdc;
    }
    bVar1 = recovered_10004d9c((byte *)(lVar4 + 0x52d44),&DAT_10010de8);
    if (bVar1) {
      recovered_10001c8c((char *)(param_2 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x1629U));
    }
    else {
      recovered_10001c8c((char *)abStack_260,0x100,(long)acStack_160);
      if (acStack_3e0[0] != '\0') {
        pcVar2 = strchr((char *)abStack_260,0x3f);
        cVar5 = '?';
        if (pcVar2 != (char *)0x0) {
          cVar5 = '&';
        }
        recovered_100054a4((char *)abStack_260,0x100,cVar5);
        recovered_10004bd4((char *)abStack_260,0x100,(long)acStack_3e0);
      }
      recovered_100045cc(param_1,param_2,abStack_260);
      recovered_10001c8c((char *)(param_1 + 0x57f2),0x100,param_2 + 1);
      uVar3 = strlen((char *)(param_1 + 0x57f2));
      *(int *)(param_1 + 0x58f4) = (int)uVar3;
    }
    *(undefined1 *)(param_1 + 0x57ee) = 1;
  }
  return unaff_x30;
}

#undef DAT_10010de8
#undef str_10010dcc
#undef str_10010dd9
#undef acStack_3e0
#undef abStack_260
#undef acStack_160

#undef DAT_1000fb37
#define DAT_1000fb37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x373U)))
#define abStack_328 (*(byte (*)[256])(frame + 24))
#define acStack_228 (*(char (*)[192])(frame + 280))
#define auStack_168 (*(uint (*)[66])(frame + 472))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000e810
 */

undefined8 recovered_1000e810(long param_1,long param_2,char *param_3)

{
  unsigned char frame[864] __attribute__((aligned(16))) = {0};

  int *piVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  int *piVar7;
  byte bVar8;
  undefined8 uVar9;

  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
LAB_1000ea40:
    uVar9 = 0;
  }
  else {
    uVar5 = recovered_10001ba4(param_2);
    if (((uVar5 & 1) == 0) || (pcVar4 = recovered_100016e0(0x60000), pcVar4 == (char *)0x0)) {
      recovered_10001c8c((char *)(param_2 + 0x141),0xc0,((uintptr_t)pf_module_state + 0x512U));
      uVar9 = 0;
      *(undefined1 *)(param_1 + 0x57ee) = 1;
    }
    else {
      bVar8 = 0;
      uVar6 = 3;
      if (*(char *)(param_1 + 0x57f0) == '\0') {
        uVar6 = 1;
      }
      acStack_228[0] = '\0';
      do {
        bVar2 = 0;
        piVar7 = (int *)(param_2 + 0x440);
        for (uVar5 = 0; uVar5 < *(uint *)(param_2 + 0x52c40); uVar5 = uVar5 + 1) {
          if (*piVar7 == 4) {
            PF_PART1(auStack_168[0], 0) = '\0';
            *pcVar4 = '\0';
            acStack_228[0] = '\0';
            piVar1 = piVar7 + 0x75;
            if ((char)piVar7[0x85] != '\0') {
              piVar1 = piVar7 + 0x85;
            }
            uVar3 = winter_js_execute_browser_event(*(char **)(param_2 + 0x328),(byte *)param_3,(char *)piVar1,
                                       (byte *)(piVar7 + 0x95),(char *)auStack_168,0x100,pcVar4,
                                       0x60000,acStack_228,CONCAT44(uVar6,0xc0));
            if (((uVar3 >> 4 & 1) != 0) && ((char)auStack_168[0] != '\0')) goto LAB_1000e9a4;
            if (((uVar3 & 1) != 0) && (*pcVar4 != '\0')) {
              recovered_10001c8c(*(char **)(param_2 + 0x310),0x50000,(long)pcVar4);
              recovered_10001cc4(param_1,(char *)param_2);
              recovered_100024dc(param_1,param_2);
              goto LAB_1000ea10;
            }
            if (acStack_228[0] != '\0') {
              recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)acStack_228);
            }
            bVar2 = 1;
          }
          piVar7 = piVar7 + 0xdc;
        }
        if ((bool)(bVar8 | bVar2)) {
          if (acStack_228[0] != '\0') {
            recovered_10001c8c((char *)(param_2 + 0x141),0xc0,(long)acStack_228);
          }
          *(undefined1 *)(param_1 + 0x57ee) = 1;
          recovered_10001754(pcVar4);
          goto LAB_1000ea40;
        }
        PF_PART1(auStack_168[0], 0) = '\0';
        *pcVar4 = '\0';
        acStack_228[0] = '\0';
        uVar3 = winter_js_execute_browser_event(*(char **)(param_2 + 0x328),(byte *)param_3,&DAT_1000fb37,
                                   &DAT_1000fb37,(char *)auStack_168,0x100,pcVar4,0x60000,
                                   acStack_228,CONCAT44(uVar6,0xc0));
        if (((uVar3 >> 4 & 1) != 0) && ((char)auStack_168[0] != '\0')) {
LAB_1000e9a4:
          recovered_10005020((char *)param_2,auStack_168,(char *)abStack_328);
          recovered_100045cc(param_1,param_2,abStack_328);
          recovered_10001c8c((char *)(param_1 + 0x57f2),0x100,param_2 + 1);
          uVar5 = strlen((char *)(param_1 + 0x57f2));
          *(int *)(param_1 + 0x58f4) = (int)uVar5;
          goto LAB_1000ea10;
        }
        bVar8 = 1;
      } while (((uVar3 & 1) == 0) || (*pcVar4 == '\0'));
      recovered_10001c8c(*(char **)(param_2 + 0x310),0x50000,(long)pcVar4);
      recovered_10001cc4(param_1,(char *)param_2);
      recovered_100024dc(param_1,param_2);
LAB_1000ea10:
      uVar9 = 1;
      *(undefined1 *)(param_1 + 0x57ee) = 1;
      recovered_10001754(pcVar4);
    }
  }
  return uVar9;
}

#undef DAT_1000fb37
#undef abStack_328
#undef acStack_228
#undef auStack_168

#undef str_10010e1b
#define str_10010e1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1657U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ea54
 */

void recovered_1000ea54(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  if ((param_1 != 0) && (param_2 != (byte *)0x0)) {
    for (; bVar1 = *param_2, bVar1 != 0; param_2 = param_2 + 1) {
      uVar2 = (uint)bVar1;
      if ((((9 < uVar2 - 0x30 && 0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (1 < uVar2 - 0x2d)) &&
          (uVar2 != 0x7e)) && (uVar2 != 0x5f)) {
        if (bVar1 == 0x20) {
          bVar1 = 0x2b;
        }
        else {
          recovered_100054a4((char *)param_1,0x180,'%');
          recovered_100054a4((char *)param_1,0x180,str_10010e1b[*param_2 >> 4]);
          bVar1 = str_10010e1b[(ulong)*param_2 & 0xf];
        }
      }
      recovered_100054a4((char *)param_1,0x180,bVar1);
    }
  }
  return;
}

#undef str_10010e1b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb18
 */

bool recovered_1000eb18(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = (int)param_3;
  iVar3 = (int)((ulong)param_3 >> 0x20);
  iVar1 = iVar2 + (int)param_4;
  return (((iVar2 <= param_1 && iVar3 <= param_2) && iVar1 != param_1) &&
         ((param_1 < iVar2 || param_2 < iVar3) || param_1 <= iVar1)) &&
         param_2 < iVar3 + (int)((ulong)param_4 >> 0x20);
}


#define abStack_140 (*(byte (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000eb44
 */

void recovered_1000eb44(long param_1,int param_2)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;

  lVar2 = recovered_1000e1e4(param_1);
  if ((param_2 != 0) && (lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x554d4);
    if (param_2 < 0) {
      if (uVar1 == 0) {
        return;
      }
      if (*(int *)(lVar2 + 0x554d8) == 0) {
        return;
      }
      uVar4 = *(int *)(lVar2 + 0x554d8) - 1;
    }
    else {
      if (uVar1 == 0) {
        return;
      }
      uVar4 = *(int *)(lVar2 + 0x554d8) + 1;
      if (uVar1 <= uVar4) {
        return;
      }
    }
    *(uint *)(lVar2 + 0x554d8) = uVar4;
    recovered_10001c8c((char *)abStack_140,0x100,lVar2 + (ulong)uVar4 * 0x100 + 0x544d4);
    *(undefined1 *)(lVar2 + 0x555dc) = 1;
    recovered_100045cc(param_1,lVar2,abStack_140);
    *(undefined1 *)(lVar2 + 0x555dc) = 0;
    recovered_10001c8c((char *)(param_1 + 0x57f2),0x100,lVar2 + 1);
    uVar3 = strlen((char *)(param_1 + 0x57f2));
    *(int *)(param_1 + 0x58f4) = (int)uVar3;
    *(undefined2 *)(param_1 + 0x57ee) = 1;
  }
  return;
}

#undef abStack_140
