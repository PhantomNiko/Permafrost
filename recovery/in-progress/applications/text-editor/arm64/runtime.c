/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004210
#define DAT_10004210 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x244U)))
#undef DAT_100042cd
#define DAT_100042cd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x301U)))
#undef str_10004230
#define str_10004230 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#undef str_10004255
#define str_10004255 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x289U)))
#undef str_1000425b
#define str_1000425b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x28fU)))
#undef str_10004261
#define str_10004261 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x295U)))
#undef str_1000426d
#define str_1000426d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2a1U)))
#undef str_10004289
#define str_10004289 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bdU)))
#define uStack_68a0 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_6898 (*(undefined8 *)(pf_stack_frame + 24))
#define iStack_6878 (*(int *)(pf_stack_frame + 56))
#define uStack_6874 (*(uint *)(pf_stack_frame + 60))
#define uStack_6870 (*(uint *)(pf_stack_frame + 64))
#define uStack_686c (*(uint *)(pf_stack_frame + 68))
#define pvStack_6848 (*(void * *)(pf_stack_frame + 104))
#define uStack_6528 (*(uint *)(pf_stack_frame + 904))
#define bStack_6524 (*(byte *)(pf_stack_frame + 908))
#define uStack_6523 (*(undefined1 *)(pf_stack_frame + 909))
#define auStack_6520 (*(undefined1 (*)[25888])(pf_stack_frame + 912))
#define uStack_6510 (*(ulonglong *)(pf_stack_frame + 928))
#define uStack_6508 (*(ulonglong *)(pf_stack_frame + 936))
#define pvStack_64f0 (*(void * *)(pf_stack_frame + 960))
#define uStack_64e8 (*(undefined8 *)(pf_stack_frame + 968))
#define puStack_64e0 (*(undefined1 * *)(pf_stack_frame + 976))
#define uStack_64d0 (*(ulong *)(pf_stack_frame + 992))
#define uStack_64c8 (*(ulong *)(pf_stack_frame + 1000))
#define uStack_64c0 (*(ulong *)(pf_stack_frame + 1008))
#define acStack_64b8 (*(char (*)[25784])(pf_stack_frame + 1016))
#define acStack_3434 (*(char (*)[13364])(pf_stack_frame + 13436))
#define uStack_3a8 (*(ulong *)(pf_stack_frame + 25864))
#define iStack_3a0 (*(int *)(pf_stack_frame + 25872))
#define auStack_39c (*(undefined1 (*)[924])(pf_stack_frame + 25876))
#define uStack_31c (*(uint *)(pf_stack_frame + 26004))
#define uStack_318 (*(uint *)(pf_stack_frame + 26008))
#define iStack_314 (*(int *)(pf_stack_frame + 26012))
#define uStack_310 (*(undefined8 *)(pf_stack_frame + 26016))
#define uStack_308 (*(undefined2 *)(pf_stack_frame + 26024))
#define uStack_306 (*(undefined1 *)(pf_stack_frame + 26026))
#define uStack_305 (*(undefined2 *)(pf_stack_frame + 26027))
#define bStack_303 (*(byte *)(pf_stack_frame + 26029))
#define iStack_300 (*(int *)(pf_stack_frame + 26032))
#define cStack_2fc (*(char *)(pf_stack_frame + 26036))
#define lStack_2f8 (*(long *)(pf_stack_frame + 26040))
#define iStack_2ec (*(int *)(pf_stack_frame + 26052))
#define iStack_2e8 (*(int *)(pf_stack_frame + 26056))
#define uStack_2e0 (*(uint *)(pf_stack_frame + 26064))
#define uStack_2dc (*(uint *)(pf_stack_frame + 26068))
#define uStack_2cc (*(uint *)(pf_stack_frame + 26084))
#define iStack_2c8 (*(int *)(pf_stack_frame + 26088))
#define uStack_2b8 (*(uint *)(pf_stack_frame + 26104))
#define iStack_2ac (*(int *)(pf_stack_frame + 26116))
#define iStack_2a8 (*(int *)(pf_stack_frame + 26120))
#define iStack_2a4 (*(int *)(pf_stack_frame + 26124))
#define uStack_2a0 (*(uint *)(pf_stack_frame + 26128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005a0
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_100005a0(int argc,char **argv)

{
  unsigned char pf_stack_frame[26832] __attribute__((aligned(16))) = {0};

  char *text;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  void *pixels;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  uchar uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  char *pcVar21;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  char cVar25;
  char *a;
  byte bVar26;
  long lVar27;
  uint128 auVar28;
  uint128 auVar29;
  uint128 auVar30;

  thunk_memset(&iStack_6878,0,0x6580);
  uVar20 = recovered_10002298((long)&iStack_6878,0);
  if ((int)uVar20 != 0) {
    *puStack_64e0 = 0;
    recovered_100022fc(0xffffffff,str_1000426d,acStack_64b8);
    recovered_10002458(auStack_39c,0x80,((uintptr_t)pf_module_state + 0x2b0U));
    thunk_pf_app_window_spec(&uStack_2e0,str_10004261,800,0x208);
    uStack_2cc = thunk_terror_ui_colour(0);
    uStack_2a0 = uStack_2a0 | 1;
    uVar13 = thunk_terror_ui_window_open(&iStack_6878,&uStack_2e0);
    if (uVar13 != 0) {
      terror_ui_window_set_custom_menus(&iStack_6878,str_10004289);
      pvStack_64f0 = pvStack_6848;
      if (pvStack_6848 != (void *)0x0) {
        uStack_64e8 = DAT_10004210;
        thunk_memset(&lStack_2f8,0,0x18);
        uVar20 = recovered_10002678(&DAT_100042cd,0xffffffff,0,&lStack_2f8);
        if ((int)uVar20 != 0) {
          if (iStack_2ec - 1U < 0x40) {
            uStack_64e8 = CONCAT44(PF_PART4(uStack_64e8, 4),iStack_2ec + 1);
          }
          if (iStack_2e8 - 1U < 0x40) {
            uStack_64e8 = CONCAT44(iStack_2e8,(int)uStack_64e8);
          }
          recovered_100026e4(&lStack_2f8);
        }
        text = acStack_3434 + 1;
        cStack_2fc = '\x01';
        recovered_10001aec((long)&iStack_6878);
        if (argv != (char **)0x0) {
          for (lVar27 = 1; lVar27 < argc; lVar27 = lVar27 + 1) {
            a = argv[lVar27];
            if ((a != (char *)0x0) && (*a != '\0')) {
              iVar14 = thunk_strncmp(a,str_10004255,5);
              if ((iVar14 == 0) || (iVar14 = thunk_strncmp(a,str_1000425b,5), iVar14 == 0)) {
                a = a + 5;
              }
              else if ((lVar27 != 1) ||
                      (pcVar21 = thunk_strchr(a,0x3d), pcVar21 != (char *)0x0))
              goto LAB_1000078c;
              recovered_100014b4((long)&iStack_6878,a);
              break;
            }
LAB_1000078c:
          }
        }
        bVar9 = true;
        uVar13 = uStack_318 >> 0xc & 1;
        while (cStack_2fc == '\x01') {
          terror_ui_window_begin_frame(&iStack_6878);
          uVar17 = uStack_6870;
          uVar6 = uStack_6874;
          thunk_memset(&uStack_2e0,0,0x278);
          uVar15 = thunk_terror_ui_window_query(&iStack_6878,&uStack_2e0);
          if (((uVar15 == 0) || (bVar10 = thunk_terror_ui_window_info_requests_close(&uStack_2e0), (bVar10 & 1) != 0)) ||
             (uVar15 = thunk_terror_ui_window_sync_buffer(&iStack_6878,&uStack_2e0), uVar15 == 0)) break;
          pvStack_64f0 = pvStack_6848;
          uStack_31c = uStack_2b8;
          bVar11 = uStack_6874 != uVar6 || uStack_6870 != uVar17;
          if (uStack_6874 != uVar6 || uStack_6870 != uVar17) {
            recovered_100017cc((long)&iStack_6878);
          }
          if ((iStack_2ac != 0) && (iStack_2ac != iStack_314)) {
            iStack_314 = iStack_2ac;
            if (iStack_2a8 == 2) {
              if (iStack_2a4 == 2) {
                uVar24 = recovered_10002cc0((long)&iStack_6878);
              }
              else if (iStack_2a4 == 1) {
                uVar24 = recovered_10002c30((long)&iStack_6878);
              }
              else {
                if (iStack_2a4 != 0) goto switchD_100008ec_default;
                uVar24 = recovered_10002b04((long)&iStack_6878);
              }
              if ((uVar24 & 1) != 0) goto LAB_10000998;
            }
            else if (iStack_2a8 == 1) {
              switch((uintptr_t)(iStack_2a4)) {
              case 0:
                if (puStack_64e0 != (undefined1 *)0x0) {
                  *puStack_64e0 = 0;
                  uStack_64d0 = 0;
                  uStack_64c8 = 0;
                  uStack_64c0 = 0;
                  uStack_310 = 0;
                  uStack_306 = 0;
                  recovered_1000271c((long)&iStack_6878,((uintptr_t)pf_module_state + 0x2b0U));
                }
                break;
              case 1:
                recovered_10002944((long)&iStack_6878,0);
                break;
              case 2:
                recovered_100029c0((long)&iStack_6878);
                break;
              case 3:
                bVar11 = true;
                recovered_10002944((long)&iStack_6878,1);
                goto switchD_100008ec_default;
              }
LAB_10000998:
              bVar11 = true;
            }
          }
switchD_100008ec_default:
          uVar6 = uStack_31c;
          bStack_6524 = 0;
          thunk_memset(&uStack_2e0,0,0x1c);
          uVar15 = thunk_terror_ui_window_pointer_state(&iStack_6878,&uStack_2e0);
          uVar17 = uStack_2e0;
          if (uVar15 == 0) {
LAB_10000a34:
            bVar10 = 0;
            bStack_303 = 0;
            uStack_305 = 0;
          }
          else {
            if ((uStack_2e0 >> 1 & 1) == 0) {
              bStack_6524 = false;
            }
            else {
              auVar29 = recovered_10003248((long)&iStack_6878);
              auVar30 = recovered_1000320c((long)&iStack_6878);
              auVar28 = recovered_100031c8((long)&iStack_6878);
              bStack_6524 = recovered_100032a0(uStack_2cc,iStack_2c8,
                                               PF_PART8(auVar30, 0) & 0xffffffff00000000 |
                                               PF_PART8(auVar28, 0) & 0xffffffff,
                                               PF_PART8(auVar28, 8) & 0xffffffff |
                                               (ulong)(uint)((PF_PART4(auVar29, 4) + PF_PART4(auVar29, 12)) -
                                                            PF_PART4(auVar30, 4)) << 0x20);
            }
            uVar15 = uStack_2dc;
            if ((uVar17 >> 2 & 1) == 0) goto LAB_10000a34;
            uVar17 = 799;
            if (uStack_6874 != 0) {
              uVar17 = uStack_6874 - 1;
            }
            uVar16 = uStack_2cc;
            if ((int)uVar17 <= (int)uStack_2cc) {
              uVar16 = uVar17;
            }
            uVar17 = 0;
            if (-1 < (int)uStack_2cc) {
              uVar17 = uVar16;
            }
            iVar14 = 0x207;
            if (uStack_6870 != 0) {
              iVar14 = uStack_6870 - 1;
            }
            iVar19 = iStack_2c8;
            if (iVar14 <= iStack_2c8) {
              iVar19 = iVar14;
            }
            iVar14 = 0;
            if (-1 < iStack_2c8) {
              iVar14 = iVar19;
            }
            if ((uStack_2dc & 1) == 0) {
              bVar10 = 0;
              uStack_305 = 0;
            }
            else {
              if ((bStack_303 & 1) == 0) {
                uVar16 = uStack_6874;
                if ((int)uStack_6874 < 0xa3) {
                  uVar16 = 0xa2;
                }
                uVar18 = 0x2ce;
                if (uStack_6874 != 0) {
                  uVar18 = uVar16 - 0x52;
                }
                bVar8 = recovered_100032a0(uVar17,iVar14,0xf00000048,(ulong)uVar18 | 0x1800000000);
                if (bVar8) {
                  iVar19 = (int)uStack_64e8;
                  if ((int)uStack_64e8 < 1) {
                    iVar19 = 6;
                  }
                  bVar10 = 1;
                  uStack_308 = 1;
                  uStack_64c0 = uStack_64c8;
                  iVar5 = 0;
                  if (iVar19 != 0) {
                    iVar5 = (int)(uVar17 - 0x4c) / iVar19;
                  }
                  recovered_10002458(text,0x3085,(long)acStack_64b8);
                  iVar5 = iStack_3a0 + iVar5;
                  uVar24 = thunk_strlen(text);
                  iVar19 = iVar5;
                  if ((int)uVar24 <= iVar5) {
                    iVar19 = (int)uVar24;
                  }
                  iVar1 = 0;
                  if (-1 < iVar5) {
                    iVar1 = iVar19;
                  }
                  uStack_3a8 = (ulong)iVar1;
                }
                else {
                  auVar30 = recovered_100031c8((long)&iStack_6878);
                  auVar28 = recovered_100034fc((long)&iStack_6878);
                  iVar19 = (int)uStack_310;
                  auVar29 = recovered_1000320c((long)&iStack_6878);
                  bVar8 = recovered_100032a0(uVar17,iVar14,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8));
                  if (bVar8) {
                    bVar10 = 1;
                    recovered_100035c8((long)&iStack_6878,1);
                    if ((int)uStack_310 == iVar19) goto LAB_10000c34;
                  }
                  else {
                    auVar29 = recovered_10003248((long)&iStack_6878);
                    bVar8 = recovered_100032a0(uVar17,iVar14,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8));
                    if (bVar8) {
                      recovered_100035c8((long)&iStack_6878,0);
                      if ((int)uStack_310 == iVar19) goto LAB_10000c34;
                      bVar10 = 1;
                    }
                    else {
                      uStack_68a0 = PF_PART8(auVar30, 0);
                      uStack_6898 = PF_PART8(auVar30, 8);
                      bVar8 = recovered_100032a0(uVar17,iVar14,uStack_68a0,uStack_6898);
                      if (!bVar8) {
LAB_10000c34:
                        bVar8 = recovered_10003300((long)&iStack_6878,uVar17,iVar14,0,0);
                        if (!bVar8) {
                          auVar29 = recovered_10003478((long)&iStack_6878);
                          bVar8 = recovered_100032a0(uVar17,iVar14,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8));
                          if (!bVar8) goto LAB_10000ab0;
                        }
                        bVar10 = 1;
                        uStack_305 = CONCAT11(1,(char)uStack_305);
                      }
                      else {
                        bVar8 = recovered_100032a0(uVar17,iVar14,PF_PART8(auVar28, 0),PF_PART8(auVar28, 8));
                        if (!bVar8) {
                          uVar18 = recovered_10003678((long)&iStack_6878);
                          uVar16 = PF_PART4(auVar30, 12) - PF_PART4(auVar28, 12);
                          if (((int)uVar18 >= 1 && uVar16 != 0) &&
                              ((int)uVar18 < 1 || -1 < (int)uVar16)) {
                            lVar27 = 0;
                            if ((ulong)uVar16 != 0) {
                              lVar27 = (long)((ulong)uVar18 *
                                             (long)((iVar14 - PF_PART4(auVar30, 4)) + PF_PART4(auVar28, 12) / -2))
                                       / (long)(ulong)uVar16;
                            }
                            if (0x7ffffffe < lVar27) {
                              lVar27 = 0x7fffffff;
                            }
                            uStack_310 = CONCAT44(PF_PART4(uStack_310, 4),
                                                  (uint)lVar27 &
                                                  ((uint)(lVar27 >> 0x3f) ^ 0xffffffff));
                            recovered_100036a0((long)&iStack_6878);
                          }
                          else {
                            uStack_310 = (ulong)PF_PART4(uStack_310, 4) << 0x20;
                          }
                        }
                        bVar10 = 1;
                        uStack_305 = CONCAT11(PF_PART1(uStack_305, 1),1);
                        auVar29 = recovered_100034fc((long)&iStack_6878);
                        iStack_300 = iVar14 - PF_PART4(auVar29, 4);
                      }
                    }
                  }
                }
              }
              else {
LAB_10000ab0:
                bVar10 = 0;
              }
              if ((char)uStack_305 == '\x01') {
                auVar29 = recovered_100031c8((long)&iStack_6878);
                auVar30 = recovered_100034fc((long)&iStack_6878);
                uVar16 = recovered_10003678((long)&iStack_6878);
                uVar17 = PF_PART4(auVar29, 12) - PF_PART4(auVar30, 12);
                if ((int)uVar16 < 1 || (int)uVar17 < 1) {
                  bVar8 = false;
                }
                else {
                  iVar19 = (int)uStack_310;
                  lVar27 = 0;
                  if ((ulong)uVar17 != 0) {
                    lVar27 = (long)((long)(iVar14 - (iStack_300 + PF_PART4(auVar29, 4))) * (ulong)uVar16) /
                             (long)(ulong)uVar17;
                  }
                  if (0x7ffffffe < lVar27) {
                    lVar27 = 0x7fffffff;
                  }
                  uStack_310 = CONCAT44(PF_PART4(uStack_310, 4),
                                        (uint)lVar27 & ((uint)(lVar27 >> 0x3f) ^ 0xffffffff));
                  recovered_100036a0((long)&iStack_6878);
                  bVar8 = (int)uStack_310 != iVar19;
                }
                bVar10 = bVar10 | bVar8;
              }
              else if (PF_PART1(uStack_305, 1) == '\x01') {
                bVar8 = recovered_10003300((long)&iStack_6878,uVar17,iVar14,1,1);
                bVar10 = bVar10 | bVar8;
              }
            }
            bStack_303 = (byte)uVar15 & 1;
          }
          bVar10 = bVar11 | bVar10;
          if ((uVar6 >> 1 & 1) != 0) {
            bVar26 = 0;
            iVar14 = 0x20;
            do {
              bVar11 = recovered_10002528(0x2c);
              if (!bVar11) break;
              uVar17 = UINT_8201082c;
              if (uVar17 == 0) break;
              uVar17 = (*(code *)(ulong)uVar17)();
              uVar22 = uStack_3a8;
              uVar24 = uStack_64c8;
              if (uVar17 == 0) break;
              if ((uVar17 & 0x8000ffff) == 0x80000000) goto switchD_10001190_caseD_48;
              uVar15 = uVar17 >> 8 & 0xff;
              cVar25 = (char)uVar17;
              if ((char)uStack_308 != '\x01') {
                uVar22 = uStack_64c0;
                if (uStack_64d0 <= uStack_64c0) {
                  uVar22 = uStack_64d0;
                }
                uVar2 = uStack_64c8;
                if (uStack_64d0 <= uStack_64c8) {
                  uVar2 = uStack_64d0;
                }
                uVar3 = uVar2;
                uVar4 = uVar22;
                if (uVar2 <= uStack_64c0) {
                  uVar3 = uVar22;
                  uVar4 = uVar2;
                }
                uVar23 = 0;
                if (uVar22 != uVar2) {
                  uVar23 = uVar4;
                }
                uVar4 = 0;
                if (uVar22 != uVar2) {
                  uVar4 = uVar3;
                }
                if ((uVar17 >> 0x12 & 1) != 0) {
                  uVar16 = uVar17 & 0xff;
                  if (((uVar15 == 0x1e || uVar16 == 1) || (uVar16 == 0x61)) || (uVar16 == 0x41)) {
                    uStack_64c0 = 0;
                    uStack_64c8 = uStack_64d0;
                    recovered_1000271c((long)&iStack_6878,((uintptr_t)pf_module_state + 0x3ffU));
                    goto LAB_10000ec8;
                  }
                  uVar16 = uVar17 & 0xff;
                  if (((uVar15 == 0x2e || uVar16 == 3) || (uVar16 == 99)) || (uVar16 == 0x43)) {
                    uVar24 = recovered_10002c30((long)&iStack_6878);
                  }
                  else {
                    uVar16 = uVar17 & 0xff;
                    if (((uVar15 == 0x2f || uVar16 == 0x16) || (uVar16 == 0x76)) || (uVar16 == 0x56)
                       ) {
                      uVar24 = recovered_10002cc0((long)&iStack_6878);
                    }
                    else {
                      uVar17 = uVar17 & 0xff;
                      if (((uVar15 != 0x2d && uVar17 != 0x18) && (uVar17 != 0x78)) &&
                         (uVar17 != 0x58)) goto switchD_10001190_caseD_48;
                      uVar24 = recovered_10002b04((long)&iStack_6878);
                    }
                  }
joined_r0x10000f64:
                  if ((uVar24 & 1) == 0) goto switchD_10001190_caseD_48;
                  goto LAB_10000ec8;
                }
                if ((uVar17 >> 0x11 & 1) != 0) goto switchD_10001190_caseD_48;
                if ((uVar17 - 0x20 & 0xff) < 0x5f) {
LAB_10000e94:
                  recovered_10003740((long)&iStack_6878,cVar25);
                  uVar24 = extraout_x0;
                  goto joined_r0x10000f64;
                }
                if ((uVar17 & 0xff) == 9) {
                  uVar24 = recovered_1000307c((long)&iStack_6878,((uintptr_t)pf_module_state + 0x40cU),4);
                  goto joined_r0x10000f64;
                }
                if ((uVar15 == 0xe) || ((uVar17 & 0xff) == 0x7f || (uVar17 & 0xff) == 8)) {
                  recovered_10003820((long)&iStack_6878);
                  if ((extraout_x0_00 & 1) == 0) {
                    if ((puStack_64e0 == (undefined1 *)0x0) || (uStack_64c8 == 0))
                    goto switchD_10001190_caseD_48;
                    thunk_memmove(puStack_64e0 + uStack_64c8 + -1,puStack_64e0 + uStack_64c8,
                                       (uStack_64d0 - uStack_64c8) + 1);
                    uStack_64c8 = uStack_64c8 - 1;
LAB_10000ff4:
                    uStack_64d0 = uStack_64d0 - 1;
                    uStack_306 = 1;
                    uStack_64c0 = uStack_64c8;
                  }
                  goto LAB_10000ec8;
                }
                if (uVar15 == 0x1c) {
LAB_10001134:
                  cVar25 = '\n';
                  goto LAB_10000e94;
                }
                if (uVar15 == 0x53) {
                  recovered_10003820((long)&iStack_6878);
                  if ((extraout_x0_01 & 1) != 0) goto LAB_10000ec8;
                  if ((puStack_64e0 != (undefined1 *)0x0) &&
                     (uStack_64c8 <= uStack_64d0 && uStack_64d0 - uStack_64c8 != 0)) {
                    thunk_memmove(puStack_64e0 + uStack_64c8,puStack_64e0 + uStack_64c8 + 1,
                                       uStack_64d0 - uStack_64c8);
                    goto LAB_10000ff4;
                  }
                  goto switchD_10001190_caseD_48;
                }
                if ((uVar17 & 0xff) == 0xd || (uVar17 & 0xff) == 10) goto LAB_10001134;
                switch((uintptr_t)(uVar15)) {
                case 0x47:
                  uStack_64c8 = recovered_10002ff4((long)&iStack_6878);
                  break;
                case 0x48:
                  iVar19 = 1;
                  goto LAB_10001238;
                case 0x49:
                  iVar19 = recovered_10003638((long)&iStack_6878);
                  uVar17 = (int)uStack_310 - iVar19;
                  goto LAB_10001274;
                default:
                  goto switchD_10001190_caseD_48;
                case 0x4b:
                  if (((uVar17 >> 0x10 & 1) != 0) || (uVar22 == uVar2)) {
                    if (uStack_64c8 == 0) goto switchD_10001190_caseD_48;
                    uVar23 = uStack_64c8 - 1;
                  }
LAB_100012bc:
                  bVar11 = true;
                  uStack_64c8 = uVar23;
                  goto LAB_100012c4;
                case 0x4d:
                  if (((uVar17 >> 0x10 & 1) == 0) && (uVar22 != uVar2)) {
                    bVar11 = true;
                    uStack_64c8 = uVar4;
                    goto LAB_100012c4;
                  }
                  if (uStack_64c8 < uStack_64d0) {
                    uVar23 = uStack_64c8 + 1;
                    goto LAB_100012bc;
                  }
                  goto switchD_10001190_caseD_48;
                case 0x4f:
                  uVar22 = recovered_10002ff4((long)&iStack_6878);
                  uStack_64c8 = recovered_10003038((long)&iStack_6878,uVar22);
                  break;
                case 0x50:
                  iVar19 = 0;
LAB_10001238:
                  recovered_10003768((long)&iStack_6878,iVar19);
                  break;
                case 0x51:
                  lVar27 = (long)(int)uStack_310;
                  iVar19 = recovered_10003638((long)&iStack_6878);
                  lVar27 = lVar27 + iVar19;
                  if (0x7ffffffe < lVar27) {
                    lVar27 = 0x7fffffff;
                  }
                  uVar17 = (uint)lVar27 & ((uint)(lVar27 >> 0x3f) ^ 0xffffffff);
LAB_10001274:
                  uStack_310 = CONCAT44(PF_PART4(uStack_310, 4),uVar17);
                  recovered_100036a0((long)&iStack_6878);
                  goto LAB_10000ec8;
                }
                bVar11 = uStack_64c8 != uVar24;
LAB_100012c4:
                if (((uVar17 >> 0x10 & 1) != 0) || (!bVar11)) {
                  if (!bVar11) goto switchD_10001190_caseD_48;
                }
                else {
                  uStack_64c0 = uStack_64c8;
                }
LAB_10000ec8:
                recovered_100017cc((long)&iStack_6878);
                goto LAB_10000f2c;
              }
              if ((uVar17 & 0x60000) != 0) goto switchD_10001190_caseD_48;
              if ((uVar17 - 0x20 & 0xff) < 0x5f) {
                uVar24 = thunk_strlen(text);
                if (0xffffffffffffcf7a < uVar24 - 0x3084) {
                  thunk_memmove(acStack_3434 + uStack_3a8 + 2,text + uStack_3a8,
                                     (uVar24 - uStack_3a8) + 1);
                  text[uStack_3a8] = cVar25;
LAB_10000e34:
                  uStack_3a8 = uStack_3a8 + 1;
                  goto LAB_10000f24;
                }
                goto switchD_10001190_caseD_48;
              }
              if ((uVar15 == 0xe) || (uVar16 = uVar17 & 0xff, uVar16 == 0x7f || uVar16 == 8)) {
                uVar24 = thunk_strlen(text);
                if ((uStack_3a8 != 0) && (uVar24 != 0)) {
                  thunk_memmove(acStack_3434 + uStack_3a8,text + uStack_3a8,
                                     (uVar24 - uStack_3a8) + 1);
LAB_10000f1c:
                  uStack_3a8 = uStack_3a8 - 1;
                  goto LAB_10000f24;
                }
                goto switchD_10001190_caseD_48;
              }
              bVar7 = PF_PART1(uStack_308, 1);
              if ((uVar15 == 0x1c || uVar16 == 0xd) || uVar16 == 10) {
                if (acStack_3434[1] == '\0') {
                  recovered_1000271c((long)&iStack_6878,((uintptr_t)pf_module_state + 0x3f1U));
                }
                else {
                  uStack_308 = (ushort)PF_PART1(uStack_308, 1) << 8;
                  if (bVar7 == 1) {
                    recovered_10002458(acStack_64b8,0x3085,(long)text);
                    uVar24 = recovered_100029c0((long)&iStack_6878);
                    if ((uVar24 & 1) != 0) goto LAB_10000f24;
                  }
                  else {
                    uVar20 = recovered_100014b4((long)&iStack_6878,text);
                    if ((int)uVar20 != 0) goto LAB_10000f24;
                  }
                }
                goto switchD_10001190_caseD_48;
              }
              if ((uVar17 & 0xff) == 0x1b || uVar15 == 1) {
                uStack_308 = (ushort)PF_PART1(uStack_308, 1) << 8;
                recovered_1000271c((long)&iStack_6878,((uintptr_t)pf_module_state + 0x3ddU));
                goto LAB_10000f24;
              }
              switch((uintptr_t)(uVar15)) {
              case 0x47:
                uStack_3a8 = 0;
                goto LAB_10000f24;
              case 0x4b:
                if (uStack_3a8 != 0) goto LAB_10000f1c;
                break;
              case 0x4d:
                uVar24 = thunk_strlen(text);
                if (uVar22 < uVar24) goto LAB_10000e34;
                break;
              case 0x4f:
                uStack_3a8 = thunk_strlen(text);
LAB_10000f24:
                recovered_1000174c((long)&iStack_6878);
LAB_10000f2c:
                bVar26 = 1;
              }
switchD_10001190_caseD_48:
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            bVar10 = bVar26 | bVar10;
          }
          if ((char)uStack_308 == '\x01') {
            bVar11 = recovered_1000174c((long)&iStack_6878);
          }
          else {
            bVar11 = recovered_100017cc((long)&iStack_6878);
          }
          uVar15 = uStack_6528;
          uVar17 = uStack_318 >> 0xc & 1;
          if ((uVar6 & 2) == 0) {
            uVar17 = 1;
          }
          bVar8 = uVar17 != uVar13;
          if (((bStack_6524 & 1) == 0) && ((uStack_305 & 1) == 0)) {
            if (uStack_6528 != 0) {
              iVar14 = -1;
              goto LAB_10001348;
            }
            uVar13 = 0;
          }
          else {
            uVar13 = uStack_6528;
            if (uStack_6528 < 0x20) {
              iVar14 = 1;
LAB_10001348:
              uStack_6528 = iVar14 + uStack_6528;
              uVar13 = uStack_6528;
            }
          }
          if (bVar9) {
LAB_10001368:
            recovered_10001aec((long)&iStack_6878);
            pixels = pvStack_64f0;
            uVar16 = uStack_686c;
            uVar15 = uStack_6870;
            uVar13 = uStack_6874;
            uVar18 = thunk_terror_ui_colour(0);
            thunk_terror_ui_window_present(&iStack_6878,str_10004261,pixels,uVar13,uVar15,uVar16,uVar18);
          }
          else {
            iVar14 = recovered_1000391c(uVar15);
            iVar19 = recovered_1000391c(uVar13);
            if ((bVar8 || (bVar11 != false || bVar10 != 0)) || iVar14 != iVar19) {
              if ((bVar8 || (bVar11 != false || bVar10 != 0)) ||
                 (uVar12 = terror_ui_scrollbar_restore(auStack_6520,&iStack_6878), uVar12 == '\0'))
              goto LAB_10001368;
              uStack_6523 = 1;
              recovered_1000189c((long)&iStack_6878);
              uStack_6523 = 0;
              pf_app_terror_ui_window_present_rect(&iStack_6878,uStack_6510,uStack_6508);
            }
          }
          uStack_318 = uStack_318 + 1;
          uVar13 = uVar17;
          if (uStack_6528 - 1 < 0x1f) {
            uVar17 = 2;
LAB_10001474:
            thunk_terror_ui_yield_frames(uVar17);
            goto LAB_10001478;
          }
          if (!bVar8 && (bVar11 == false && bVar10 == 0)) {
            uVar17 = 0x14;
            if ((uVar6 & 2) != 0) {
              uVar17 = 5;
            }
            goto LAB_10001474;
          }
          bVar11 = recovered_10002528(0x9c);
          bVar9 = false;
          if (bVar11) {
            bVar9 = false;
            uVar6 = UINT_8201089c;
            if (uVar6 != 0) {
              (*(code *)(ulong)uVar6)();
LAB_10001478:
              bVar9 = false;
            }
          }
        }
        terror_ui_scrollbar_release(auStack_6520);
        if (iStack_6878 != 0) {
          thunk_terror_ui_window_close(&iStack_6878);
        }
        if (puStack_64e0 == (undefined1 *)0x0) {
          return 0;
        }
        recovered_10002490(puStack_64e0);
        return 0;
      }
      thunk_terror_ui_window_close(&iStack_6878);
    }
    recovered_10002490(puStack_64e0);
    puStack_64e0 = (undefined1 *)0x0;
  }
  bVar9 = recovered_10002528(0x28);
  if (bVar9) {
    uVar13 = UINT_82010828;
    if (uVar13 != 0) {
      (*(code *)(ulong)uVar13)(str_10004230);
    }
  }
  return 1;
}

#undef DAT_10004210
#undef DAT_100042cd
#undef str_10004230
#undef str_10004255
#undef str_1000425b
#undef str_10004261
#undef str_1000426d
#undef str_10004289
#undef uStack_68a0
#undef uStack_6898
#undef iStack_6878
#undef uStack_6874
#undef uStack_6870
#undef uStack_686c
#undef pvStack_6848
#undef uStack_6528
#undef bStack_6524
#undef uStack_6523
#undef auStack_6520
#undef uStack_6510
#undef uStack_6508
#undef pvStack_64f0
#undef uStack_64e8
#undef puStack_64e0
#undef uStack_64d0
#undef uStack_64c8
#undef uStack_64c0
#undef acStack_64b8
#undef acStack_3434
#undef uStack_3a8
#undef iStack_3a0
#undef auStack_39c
#undef uStack_31c
#undef uStack_318
#undef iStack_314
#undef uStack_310
#undef uStack_308
#undef uStack_306
#undef uStack_305
#undef bStack_303
#undef iStack_300
#undef cStack_2fc
#undef lStack_2f8
#undef iStack_2ec
#undef iStack_2e8
#undef uStack_2e0
#undef uStack_2dc
#undef uStack_2cc
#undef iStack_2c8
#undef uStack_2b8
#undef iStack_2ac
#undef iStack_2a8
#undef iStack_2a4
#undef uStack_2a0

#undef DAT_82010a1c
#define DAT_82010a1c (*(uint8_t *)(0x82010a1cU))
#undef Ram0000000082010a1c
#define Ram0000000082010a1c (*(uint32_t *)(0x82010a1cU))
#undef str_100042cf
#define str_100042cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x303U)))
#undef str_100042db
#define str_100042db (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30fU)))
#undef str_100042eb
#define str_100042eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31fU)))
#undef str_1000430c
#define str_1000430c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x340U)))
#define local_30d8 (*(uint *)(pf_stack_frame + 152))
#define acStack_3158 (*(char (*)[12632])(pf_stack_frame + 24))
#define acStack_30d4 (*(char (*)[12500])(pf_stack_frame + 156))
#define uStack_4c (*(uint *)(pf_stack_frame + 12580))
#define uStack_48 (*(uint *)(pf_stack_frame + 12584))
#define bStack_44 (*(byte *)(pf_stack_frame + 12588))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b4
 */

undefined8 recovered_100014b4(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[12688] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;

  if ((((param_1 == 0) || (param_2 == (char *)0x0)) || (*(long *)(param_1 + 0x398) == 0)) ||
     (*param_2 == '\0')) {
    pcVar7 = str_100042cf;
    goto LAB_1000154c;
  }
  thunk_memset(&uStack_4c,0,0xc);
  bVar3 = recovered_10002738(param_2,(int *)&local_30d8);
  uVar5 = local_30d8;
  if (bVar3) {
    bVar3 = recovered_10002528(0x21c);
    if ((bVar3) && (iVar4 = Ram0000000082010a1c, iVar4 != 0)) {
      uVar2 = Ram0000000082010a1c;
      iVar4 = (*(code *)(ulong)uVar2)(uVar5,acStack_30d4,&uStack_4c);
      if (iVar4 != 0) goto LAB_10001614;
    }
    else {
      bVar3 = recovered_10002528(200);
      if (bVar3) {
        uVar2 = UINT_820108c8;
        if (uVar2 != 0) {
          uVar5 = (*(code *)(ulong)uVar2)(uVar5,acStack_30d4,&uStack_4c);
LAB_100015a8:
          uVar2 = uStack_4c;
          if (uVar5 != 0) {
            uVar1 = (ulong)uStack_4c;
            uStack_4c = 0;
            if (uStack_48 == 0) {
LAB_10001614:
              if ((bStack_44 >> 1 & 1) == 0) {
                uVar1 = (ulong)uStack_48;
                if ((uStack_48 == 0) || (uStack_4c != 0)) {
                  lVar6 = recovered_100024d4((ulong)uStack_4c,uVar1 + 1);
                  if (lVar6 != 0) {
                    uVar8 = 0;
                    lVar11 = 0;
                    do {
                      if (uStack_48 <= uVar8) {
                        *(undefined1 *)(lVar6 + lVar11) = 0;
                        recovered_10002490(*(undefined8 *)(param_1 + 0x398));
                        *(long *)(param_1 + 0x398) = lVar6;
                        *(ulong *)(param_1 + 0x3a0) = uVar1 + 1;
                        *(long *)(param_1 + 0x3a8) = lVar11;
                        *(undefined8 *)(param_1 + 0x3b8) = 0;
                        *(undefined8 *)(param_1 + 0x3b0) = 0;
                        *(undefined8 *)(param_1 + 0x6568) = 0;
                        *(undefined1 *)(param_1 + 0x6572) = 0;
                        recovered_100022fc((ulong)local_30d8,acStack_30d4,(char *)(param_1 + 0x3c0))
                        ;
                        thunk_snprintf(acStack_3158,0x80,str_1000430c,(char *)(param_1 + 0x3c0))
                        ;
                        recovered_1000271c(param_1,(long)acStack_3158);
                        return 1;
                      }
                      bVar9 = *(byte *)(lVar6 + uVar8);
                      if (bVar9 == 0xd) {
                        if (((ulong)uStack_48 <= uVar8 + 1) ||
                           (*(char *)(lVar6 + uVar8 + 1) != '\n')) {
                          bVar9 = 10;
                          goto LAB_100016c4;
                        }
                      }
                      else {
                        if ((1U < (uint)(bVar9 - 9)) && (0x5eU < (uint)(bVar9 - 0x20))) {
                          if (bVar9 == 0) goto LAB_100016cc;
                          bVar9 = 0x3f;
                        }
LAB_100016c4:
                        *(byte *)(lVar6 + lVar11) = bVar9;
                        lVar11 = lVar11 + 1;
                      }
LAB_100016cc:
                      uVar8 = uVar8 + 1;
                    } while( true );
                  }
                  recovered_10002490((ulong)uStack_4c);
                  pcVar7 = str_100042eb;
                  goto LAB_1000154c;
                }
              }
            }
            else if ((uVar2 != 0) && (uVar8 = recovered_100028fc((ulong)uStack_48), uVar8 != 0)) {
              if ((uStack_48 == 0) ||
                 ((uVar8 >> 0x20 == 0 && ((ulong)uStack_48 - 1 <= 0xffffffff - uVar8)))) {
                for (uVar10 = 0; uVar10 < uStack_48; uVar10 = uVar10 + 1) {
                  *(undefined1 *)(uVar8 + uVar10) = *(undefined1 *)(uVar1 + uVar10);
                }
                uStack_4c = (uint)uVar8;
                goto LAB_10001614;
              }
              recovered_10002490(uVar8);
            }
          }
        }
      }
      else {
        bVar3 = recovered_10002528(0x34);
        if (bVar3) {
          uVar5 = UINT_82010834;
          if (uVar5 != 0) {
            uVar5 = (*(code *)(ulong)uVar5)(acStack_30d4,&uStack_4c);
            goto LAB_100015a8;
          }
        }
      }
    }
  }
  recovered_10002490((ulong)uStack_4c);
  thunk_snprintf(acStack_3158,0x80,str_100042db,param_2);
  pcVar7 = acStack_3158;
LAB_1000154c:
  recovered_1000271c(param_1,(long)pcVar7);
  return 0;
}

#undef DAT_82010a1c
#undef Ram0000000082010a1c
#undef str_100042cf
#undef str_100042db
#undef str_100042eb
#undef str_1000430c
#undef local_30d8
#undef acStack_3158
#undef acStack_30d4
#undef uStack_4c
#undef uStack_48
#undef bStack_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000174c
 */

bool recovered_1000174c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint128 auVar5;

  if (param_1 == 0) {
    return false;
  }
  auVar5 = recovered_100032cc(param_1);
  iVar4 = *(int *)(param_1 + 0x390);
  if (iVar4 < 1) {
    iVar4 = 6;
  }
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = (PF_PART4(auVar5, 8) + -8) / iVar4;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x64d8);
  iVar2 = *(int *)(param_1 + 0x64d0);
  iVar4 = iVar2;
  if (iVar1 <= iVar2) {
    iVar4 = iVar1;
    if (iVar2 < iVar1 + iVar3) goto LAB_100017ac;
    iVar4 = (iVar2 - iVar3) + 1;
  }
  *(int *)(param_1 + 0x64d8) = iVar4;
LAB_100017ac:
  if (iVar4 < 0) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x64d8) = 0;
  }
  return iVar1 != iVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017cc
 */

bool recovered_100017cc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  if (param_1 == 0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x6568);
  iVar2 = *(int *)(param_1 + 0x656c);
  iVar4 = recovered_1000389c(param_1,*(ulong *)(param_1 + 0x3b0));
  iVar6 = recovered_1000385c(param_1);
  iVar7 = recovered_10003638(param_1);
  iVar5 = recovered_100038e4(param_1);
  if (iVar4 < iVar1) {
LAB_10001838:
    *(int *)(param_1 + 0x6568) = iVar4;
  }
  else if ((long)iVar1 + (long)iVar7 <= (long)iVar4) {
    iVar4 = (iVar4 - iVar7) + 1;
    goto LAB_10001838;
  }
  if (iVar2 <= iVar6) {
    if ((long)iVar6 < (long)iVar2 + (long)iVar5) goto LAB_1000185c;
    iVar6 = (iVar6 - iVar5) + 1;
  }
  *(int *)(param_1 + 0x656c) = iVar6;
LAB_1000185c:
  recovered_100036a0(param_1);
  if (*(int *)(param_1 + 0x6568) == iVar1) {
    bVar3 = *(int *)(param_1 + 0x656c) != iVar2;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000189c
 */

void recovered_1000189c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint128 auVar10;
  uint128 auVar11;
  uint128 auVar12;
  uint128 auVar13;

  auVar10 = recovered_100031c8(param_1);
  uVar7 = PF_PART8(auVar10, 0);
  auVar11 = recovered_100034fc(param_1);
  auVar12 = recovered_1000320c(param_1);
  uVar4 = PF_PART8(auVar12, 0);
  auVar13 = recovered_10003248(param_1);
  if ((*(byte *)(param_1 + 0x355) & 1) == 0) {
    uVar2 = PF_PART4(auVar10, 4);
    uVar1 = uVar2;
    if ((int)PF_PART4(auVar12, 4) <= (int)uVar2) {
      uVar1 = PF_PART4(auVar12, 4);
    }
    iVar6 = PF_PART4(auVar13, 4) + PF_PART4(auVar13, 12);
    iVar5 = uVar2 + PF_PART4(auVar10, 12);
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x358),(void *)param_1,
                       uVar7 & 0xffffffff | (ulong)uVar1 << 0x20,
                       (ulong)(iVar6 - uVar1) << 0x20 | 0xc);
  }
  uVar1 = recovered_1000391c(*(uint *)(param_1 + 0x350));
  uVar9 = (ulong)uVar1;
  uVar8 = PF_PART8(auVar10, 8) & 0xffffffff00000000;
  uVar2 = thunk_terror_ui_colour(5);
  recovered_1000395c(param_1,uVar7,uVar8 | uVar9,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  uVar2 = thunk_terror_ui_colour(8);
  recovered_10003a64(param_1,uVar7,uVar8 | uVar9,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  if (0 < PF_PART4(auVar11, 12)) {
    iVar6 = PF_PART4(auVar11, 0);
    iVar5 = PF_PART4(auVar11, 4);
    if (2 < uVar1) {
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 1;
    }
    uVar2 = thunk_terror_ui_colour(6);
    recovered_1000395c(param_1,CONCAT44(iVar5,iVar6),
                       CONCAT44(PF_PART4(auVar11, 12) + (uint)(2 < uVar1) * -2,
                                uVar1 + (uint)(2 < uVar1) * -2),
                       uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
    uVar2 = thunk_terror_ui_colour(9);
    recovered_10003a64(param_1,PF_PART8(auVar11, 0),PF_PART8(auVar11, 8) & 0xffffffff00000000 | uVar9,
                       uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  }
  uVar8 = PF_PART8(auVar12, 8) & 0xffffffff00000000;
  uVar7 = PF_PART8(auVar13, 8) & 0xffffffff00000000;
  uVar2 = thunk_terror_ui_colour(7);
  recovered_1000395c(param_1,uVar4,uVar8 | uVar9,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  uVar2 = thunk_terror_ui_colour(10);
  recovered_10003a64(param_1,uVar4,uVar8 | uVar9,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  uVar2 = thunk_terror_ui_colour(0xb);
  recovered_10003b0c(param_1,uVar4,uVar8 | uVar9,1,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  uVar2 = thunk_terror_ui_colour(7);
  recovered_1000395c(param_1,PF_PART8(auVar13, 0),uVar7 | uVar9,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  uVar2 = thunk_terror_ui_colour(10);
  recovered_10003a64(param_1,PF_PART8(auVar13, 0),uVar7 | uVar9,
                     uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff);
  uVar3 = thunk_terror_ui_colour(0xb);
  uVar2 = (int)(uVar1 + 1) / 2;
  if (3 < (int)uVar2) {
    uVar2 = 4;
  }
  iVar6 = PF_PART4(auVar13, 4) + -2 + PF_PART4(auVar13, 12) / 2;
  for (uVar7 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar2 = uVar2 - 1;
    recovered_1000395c(param_1,CONCAT44(iVar6,((int)uVar1 / 2 + PF_PART4(auVar13, 0)) - uVar2),
                       (ulong)(uVar2 * 2) | 0x100000001,
                       uVar3 & 0xff00 | (uVar3 & 0xff) << 0x10 | uVar3 >> 0x10 & 0xff);
    iVar6 = iVar6 + 1;
  }
  return;
}


#undef DAT_10004318
#define DAT_10004318 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x34cU)))
#undef DAT_100043e2
#define DAT_100043e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x416U)))
#undef DAT_100043e5
#define DAT_100043e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x419U)))
#undef str_100043ea
#define str_100043ea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x41eU)))
#define uStack_150 (*(uint *)(pf_stack_frame + 16))
#define uStack_138 (*(uint *)(pf_stack_frame + 40))
#define uStack_108 (*(ulong *)(pf_stack_frame + 88))
#define uStack_100 (*(ulong *)(pf_stack_frame + 96))
#define acStack_f8 (*(char (*)[248])(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aec
 */

void recovered_10001aec(long param_1)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char *arg3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  uint128 auVar28;
  uint128 auVar29;

  if (param_1 == 0) {
    uVar25 = 0x20800000000;
    uVar24 = 800;
  }
  else {
    uVar8 = 800;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar8 = *(uint *)(param_1 + 4);
    }
    uVar24 = (ulong)uVar8;
    uVar8 = 0x208;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar8 = *(uint *)(param_1 + 8);
    }
    uVar25 = (ulong)uVar8 << 0x20;
  }
  uVar8 = recovered_10003c64(0);
  recovered_1000395c(param_1,0,uVar25 | uVar24,uVar8 & 0xffffff);
  auVar28 = recovered_100032cc(param_1);
  uVar25 = PF_PART8(auVar28, 8);
  uVar24 = PF_PART8(auVar28, 0);
  lVar1 = 0x3445;
  if (*(char *)(param_1 + 0x6570) == '\0') {
    lVar1 = 0x3c0;
  }
  iVar11 = *(int *)(param_1 + 0x390);
  uVar8 = 800;
  if (*(uint *)(param_1 + 4) != 0) {
    uVar8 = *(uint *)(param_1 + 4);
  }
  uVar9 = recovered_10003c64(0x2d);
  recovered_1000395c(param_1,0,(ulong)uVar8 | 0x3a00000000,uVar9 & 0xffffff);
  uVar8 = 800;
  if (*(uint *)(param_1 + 4) != 0) {
    uVar8 = *(uint *)(param_1 + 4);
  }
  uVar9 = recovered_10003c64(3);
  recovered_1000395c(param_1,0x3900000000,(ulong)uVar8 | 0x100000000,uVar9 & 0xffffff);
  uVar8 = recovered_10003c64(1);
  recovered_10003c88(param_1,0xc,0x12,((uintptr_t)pf_module_state + 0x411U),8,uVar8 & 0xffffff);
  uVar8 = 0x1f;
  if (*(char *)(param_1 + 0x6570) == '\0') {
    uVar8 = 2;
  }
  uVar8 = recovered_10003c64(uVar8);
  recovered_1000395c(param_1,uVar24,uVar25,uVar8 & 0xffffff);
  uVar8 = 3;
  if (*(char *)(param_1 + 0x6570) != '\0') {
    uVar8 = 4;
  }
  uVar8 = recovered_10003c64(uVar8);
  recovered_10003a64(param_1,uVar24,uVar25,uVar8 & 0xffffff);
  uVar18 = thunk_strlen((char *)(param_1 + lVar1));
  iVar17 = *(int *)(param_1 + 0x64d8);
  iVar27 = PF_PART4(auVar28, 0);
  if (iVar17 < (int)uVar18) {
    if (iVar11 < 1) {
      iVar11 = 6;
    }
    uVar8 = 0;
    if (iVar11 != 0) {
      uVar8 = (PF_PART4(auVar28, 8) + -8) / iVar11;
    }
    if ((int)uVar8 < 2) {
      uVar8 = 1;
    }
    iVar11 = *(int *)(param_1 + 0x394);
    if (iVar11 < 1) {
      iVar11 = 10;
    }
    uVar9 = recovered_10003c64(1);
    recovered_10003c88(param_1,iVar27 + 4,(PF_PART4(auVar28, 12) - iVar11) / 2 + PF_PART4(auVar28, 4),
                       (long)((char *)(param_1 + lVar1) + iVar17),uVar8,uVar9 & 0xffffff);
  }
  if ((*(char *)(param_1 + 0x6570) == '\x01') && ((*(byte *)(param_1 + 0x6561) >> 4 & 1) == 0)) {
    iVar11 = *(int *)(param_1 + 0x390);
    if (iVar11 < 1) {
      iVar11 = 6;
    }
    iVar11 = iVar11 * (*(int *)(param_1 + 0x64d0) - *(int *)(param_1 + 0x64d8));
    if ((-1 < iVar11) && (uVar8 = iVar27 + iVar11 + 4, (int)uVar8 < PF_PART4(auVar28, 8) + iVar27 + -3)) {
      uVar9 = recovered_10003c64(4);
      recovered_1000395c(param_1,(uVar24 & 0xffffffff00000000 | (ulong)uVar8) + 0x400000000,
                         (uVar25 & 0xffffffff00000000) - 0x7fffffffe,uVar9 & 0xffffff);
    }
  }
  auVar28 = recovered_100034b8(param_1);
  uVar25 = PF_PART8(auVar28, 8);
  uVar24 = PF_PART8(auVar28, 0);
  auVar29 = recovered_10003478(param_1);
  uVar9 = PF_PART4(auVar29, 0);
  iVar27 = PF_PART4(auVar28, 0);
  uVar8 = (uVar9 - iVar27) - 0xe;
  uVar16 = recovered_10003638(param_1);
  uVar10 = recovered_100038e4(param_1);
  iVar11 = recovered_100035f8(param_1);
  uVar12 = recovered_1000389c(param_1,*(ulong *)(param_1 + 0x3b0));
  iVar17 = recovered_1000385c(param_1);
  uStack_108 = 0;
  uStack_100 = 0;
  uVar19 = recovered_10002dcc(param_1,&uStack_100,&uStack_108);
  uVar13 = recovered_10003c64(0x1f);
  recovered_1000395c(param_1,uVar24,uVar25,uVar13 & 0xffffff);
  uVar13 = recovered_10003c64(3);
  recovered_10003a64(param_1,uVar24,uVar25,uVar13 & 0xffffff);
  if ((int)uVar8 < 1) {
    uVar24 = (uVar24 & 0xffffffff00000000) + 0x100000000;
  }
  else {
    uVar13 = recovered_10003c64(0x2a);
    uVar24 = (uVar24 & 0xffffffff00000000) + 0x100000000;
    recovered_1000395c(param_1,uVar24 | iVar27 + 0xd,
                       (uVar25 & 0xffffffff00000000 | (ulong)uVar8) - 0x200000000,uVar13 & 0xffffff)
    ;
  }
  uVar8 = recovered_10003c64(0x15);
  recovered_1000395c(param_1,uVar24 | uVar9 - 1,(uVar25 & 0xffffffff00000000) - 0x1ffffffff,
                     uVar8 & 0xffffff);
  uVar8 = uVar12;
  for (uVar24 = 0; (uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU)) != uVar24; uVar24 = uVar24 + 1) {
    iVar23 = *(int *)(param_1 + 0x6568);
    uVar13 = *(int *)(param_1 + 0x394) + 3;
    if (*(int *)(param_1 + 0x394) < 1) {
      uVar13 = 0xd;
    }
    if ((long)iVar11 <= (long)(uVar24 + (long)iVar23)) break;
    iVar20 = (int)uVar24;
    iVar6 = PF_PART4(auVar29, 4) + uVar13 * iVar20;
    if (((iVar20 - uVar12) + iVar23 == 0) && ((*(byte *)(param_1 + 0x6570) & 1) == 0)) {
      uVar14 = recovered_10003c64(0x2c);
      uStack_150 = uStack_150 & 0xff000000 | uVar14 & 0xffffff;
      recovered_1000395c(param_1,PF_PART8(auVar29, 0) & 0xffffffff | (ulong)(iVar6 - 1) << 0x20,
                         PF_PART8(auVar29, 8) & 0xffffffff | (ulong)uVar13 << 0x20,uStack_150);
    }
    thunk_snprintf(acStack_f8,0x10,&DAT_100043e2,iVar20 + iVar23 + 1);
    uVar13 = recovered_10003c64(0x31);
    uVar8 = uVar8 & 0xff000000 | uVar13 & 0xffffff;
    recovered_10003c88(param_1,iVar27 + 0x12,iVar6,(long)acStack_f8,5,uVar8);
    uVar18 = recovered_100036e8(param_1,iVar20 + iVar23);
    uVar25 = recovered_10003038(param_1,uVar18);
    if ((int)uVar19 != 0) {
      uVar22 = uStack_100;
      if (uStack_100 <= uVar18) {
        uVar22 = uVar18;
      }
      uVar21 = uStack_108;
      if (uVar25 <= uStack_108) {
        uVar21 = uVar25;
      }
      if (uVar25 < *(ulong *)(param_1 + 0x3a8)) {
        bVar7 = *(char *)(*(long *)(param_1 + 0x398) + uVar25) != '\n';
        bVar7 = ((uStack_100 <= uVar25 && !bVar7) && uVar25 <= uStack_108) &&
                ((uVar25 < uStack_100 || bVar7) || uStack_108 != uVar25);
      }
      else {
        bVar7 = false;
      }
      if ((uVar22 < uVar21) || (bVar7)) {
        uVar22 = uVar22 - uVar18;
        uVar2 = uVar22;
        if (0x7ffffffe < uVar22) {
          uVar2 = 0x7fffffff;
        }
        uVar21 = uVar21 - uVar18;
        uVar3 = uVar21;
        if (0x7ffffffe < uVar21) {
          uVar3 = 0x7fffffff;
        }
        bVar4 = (bool)(bVar7 ^ 1);
        if (uVar22 < uVar3) {
          bVar4 = true;
        }
        if (0x7ffffffd < uVar21) {
          uVar21 = 0x7ffffffe;
        }
        uVar13 = (uint)uVar3;
        if (bVar7) {
          uVar13 = (int)uVar21 + 1;
        }
        if (0x7ffffffd < uVar22) {
          uVar22 = 0x7ffffffe;
        }
        if (!bVar4) {
          uVar13 = (int)uVar22 + 1;
        }
        uVar5 = *(uint *)(param_1 + 0x656c);
        uVar14 = (uint)uVar2;
        if ((int)(uint)uVar2 <= (int)uVar5) {
          uVar14 = uVar5;
        }
        lVar1 = (long)(int)uVar5 + (long)(int)uVar10;
        if (0x7ffffffe < lVar1) {
          lVar1 = 0x7fffffff;
        }
        uVar15 = (uint)lVar1 & ((uint)(lVar1 >> 0x3f) ^ 0xffffffff);
        if (uVar15 <= uVar13) {
          uVar13 = uVar15;
        }
        if (uVar14 <= uVar13 && uVar13 - uVar14 != 0) {
          iVar23 = *(int *)(param_1 + 0x390);
          if (iVar23 < 1) {
            iVar23 = 6;
          }
          iVar20 = *(int *)(param_1 + 0x394) + 3;
          if (*(int *)(param_1 + 0x394) < 1) {
            iVar20 = 0xd;
          }
          uVar15 = recovered_10003c64(0x2b);
          recovered_1000395c(param_1,CONCAT44(iVar6 + -1,uVar9 + iVar23 * (uVar14 - uVar5)),
                             CONCAT44(iVar20,iVar23 * (uVar13 - uVar14)),uVar15 & 0xffffff);
        }
      }
    }
    if ((ulong)(long)*(int *)(param_1 + 0x656c) < uVar25 - uVar18) {
      lVar1 = uVar18 + (long)*(int *)(param_1 + 0x656c);
      uVar25 = uVar25 - lVar1;
      if (0x7ffffffe < uVar25) {
        uVar25 = 0x7fffffff;
      }
      uVar13 = uVar10;
      if ((int)(uint)uVar25 <= (int)uVar10) {
        uVar13 = (uint)uVar25;
      }
      lVar26 = *(long *)(param_1 + 0x398);
      uVar14 = recovered_10003c64(1);
      uStack_138 = uStack_138 & 0xff000000 | uVar14 & 0xffffff;
      recovered_10003cc8(param_1,uVar9,iVar6,lVar26 + lVar1,(ulong)uVar13,uStack_138);
    }
  }
  if ((((*(byte *)(param_1 + 0x6570) & 1) == 0) && ((*(byte *)(param_1 + 0x655c) >> 1 & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x6561) >> 4 & 1) == 0)) {
    iVar11 = *(int *)(param_1 + 0x6568);
    if ((iVar11 <= (int)uVar12) && ((long)(int)uVar12 < (long)iVar11 + (long)(int)uVar16)) {
      iVar27 = *(int *)(param_1 + 0x656c);
      if ((iVar27 <= iVar17) && ((long)iVar17 <= (long)iVar27 + (long)(int)uVar10)) {
        iVar23 = *(int *)(param_1 + 0x390);
        if (iVar23 < 1) {
          iVar23 = 6;
        }
        iVar20 = *(int *)(param_1 + 0x394);
        iVar6 = iVar20 + 3;
        if (iVar20 < 1) {
          iVar6 = 0xd;
        }
        uVar8 = iVar20 + 2;
        if (iVar20 < 1) {
          uVar8 = 0xc;
        }
        uVar10 = recovered_10003c64(4);
        recovered_1000395c(param_1,CONCAT44(PF_PART4(auVar29, 4) + iVar6 * (uVar12 - iVar11) + -1,
                                            uVar9 + iVar23 * (iVar17 - iVar27)),
                           (ulong)uVar8 << 0x20 | 2,uVar10 & 0xffffff);
      }
    }
  }
  recovered_1000189c(param_1);
  uVar8 = 0x1f0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar8 = *(int *)(param_1 + 8) - 0x18;
  }
  uVar9 = 800;
  if (*(uint *)(param_1 + 4) != 0) {
    uVar9 = *(uint *)(param_1 + 4);
  }
  uVar10 = recovered_10003c64(0x2d);
  recovered_1000395c(param_1,(ulong)uVar8 << 0x20,(ulong)uVar9 | 0x1800000000,uVar10 & 0xffffff);
  uVar10 = recovered_10003c64(3);
  recovered_1000395c(param_1,(ulong)uVar8 << 0x20,(ulong)uVar9 | 0x100000000,uVar10 & 0xffffff);
  arg3 = str_100043ea;
  if (*(char *)(param_1 + 0x6572) == '\0') {
    arg3 = &DAT_10004318;
  }
  thunk_snprintf(acStack_f8,0x90,&DAT_100043e5,arg3,(void *)(param_1 + 0x64dc));
  iVar11 = (0x18 - *(int *)(param_1 + 0x394)) / 2;
  if (*(int *)(param_1 + 0x394) < 1) {
    iVar11 = 7;
  }
  iVar17 = *(int *)(param_1 + 0x390);
  if (iVar17 < 1) {
    iVar17 = 6;
  }
  uVar10 = 0;
  if (iVar17 != 0) {
    uVar10 = (int)(uVar9 - 0x14) / iVar17;
  }
  if ((int)uVar10 < 2) {
    uVar10 = 1;
  }
  uVar9 = recovered_10003c64(0x31);
  recovered_10003c88(param_1,10,iVar11 + uVar8,(long)acStack_f8,uVar10,uVar9 & 0xffffff);
  return;
}

#undef DAT_10004318
#undef DAT_100043e2
#undef DAT_100043e5
#undef str_100043ea
#undef uStack_150
#undef uStack_138
#undef uStack_108
#undef uStack_100
#undef acStack_f8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002298
 */

undefined8 recovered_10002298(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if (param_2 >> 0x20 != 0) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x3a0);
  if (uVar3 <= param_2) {
    uVar1 = 0x400;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    do {
      uVar3 = uVar1;
      uVar1 = uVar3 << 1;
    } while (uVar3 <= param_2);
    lVar2 = recovered_100024d4(*(undefined8 *)(param_1 + 0x398),uVar3);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x398) = lVar2;
    *(ulong *)(param_1 + 0x3a0) = uVar3;
  }
  return 1;
}


#define acStack_b0 (*(char (*)[176])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022fc
 */

void recovered_100022fc(undefined8 param_1,char *param_2,char *param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;

  if ((int)param_1 < 0) {
    bVar4 = recovered_10002528(0xbc);
    if (bVar4) {
      uVar2 = UINT_820108bc;
      if (uVar2 != 0) {
        param_1 = (*(code *)(ulong)uVar2)();
        goto LAB_10002340;
      }
    }
    param_1 = 0xffffffff;
  }
LAB_10002340:
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    uVar5 = recovered_10002570(param_1,acStack_b0);
    if ((-1 < (int)uVar5) && (bVar4 = recovered_100025c8((long)acStack_b0), bVar4)) {
      lVar6 = 0;
      *param_3 = '[';
      pcVar9 = param_3;
      while( true ) {
        pcVar8 = pcVar9 + 1;
        if (acStack_b0[lVar6] == '\0') break;
        if (lVar6 + 2U < 0x3085) {
          *pcVar8 = acStack_b0[lVar6];
        }
        lVar6 = lVar6 + 1;
        pcVar9 = pcVar8;
      }
      if (lVar6 + 2U < 0x3085) {
        *pcVar8 = ']';
      }
      uVar7 = lVar6 + 3;
      if (uVar7 < 0x3085) {
        pcVar9[2] = '\\';
      }
      if (param_2 != (char *)0x0) {
        do {
          pcVar9 = param_2 + 1;
          cVar1 = *param_2;
          param_2 = pcVar9;
        } while (cVar1 == '\\');
        bVar4 = true;
        do {
          if (cVar1 == '\\') {
            if (!bVar4) {
              bVar4 = true;
              goto joined_r0x10002420;
            }
            bVar4 = true;
            uVar3 = uVar7;
          }
          else {
            if (cVar1 == '\0') break;
            bVar4 = false;
joined_r0x10002420:
            uVar3 = uVar7 + 1;
            if (uVar7 + 1 < 0x3085) {
              param_3[uVar7] = cVar1;
              uVar3 = uVar7 + 1;
            }
          }
          uVar7 = uVar3;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while( true );
      }
      if (0x3083 < uVar7) {
        uVar7 = 0x3084;
      }
      param_3[uVar7] = '\0';
    }
  }
  return;
}

#undef acStack_b0

#undef DAT_100042ca
#define DAT_100042ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002458
 */

void recovered_10002458(undefined1 *param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    if (param_3 == 0) {
      *param_1 = 0;
      return;
    }
    thunk_snprintf(param_1,param_2,&DAT_100042ca,(void *)param_3);
  }
  return;
}

#undef DAT_100042ca

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002490
 */

void recovered_10002490(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10002528(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100024c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

#undef UINT_82010854
#define UINT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d4
 */

undefined8 recovered_100024d4(void *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002528(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1,param_2);
    return pvVar3;
  }
  return 0;
}

#undef UINT_82010854

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
 * Address: 0x10002528
 */

bool recovered_10002528(int param_1)

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

#undef DAT_82010a20
#define DAT_82010a20 (*(uint8_t *)(0x82010a20U))
#undef Ram0000000082010a20
#define Ram0000000082010a20 (*(uint32_t *)(0x82010a20U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002570
 */

undefined8 recovered_10002570(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;

  bVar3 = recovered_10002528(0x220);
  if ((bVar3) && (iVar1 = Ram0000000082010a20, iVar1 != 0)) {
    uVar2 = Ram0000000082010a20;
                    /* WARNING: Could not recover jumptable at 0x100025b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(ulong)uVar2)(param_1,param_2,0x80);
    return uVar4;
  }
  return 0xffffffff;
}

#undef DAT_82010a20
#undef Ram0000000082010a20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025c8
 */

bool recovered_100025c8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;

  if (param_1 != 0) {
    uVar5 = 0;
    uVar2 = 1;
    do {
      lVar4 = 0;
      uVar3 = ~uVar5;
      while( true ) {
        bVar1 = *(byte *)(param_1 + uVar5 + lVar4);
        if (bVar1 == 0) {
          return (lVar4 != 0 && uVar2 != 0) && (lVar4 == 0 || uVar2 != 1);
        }
        if (uVar3 == 0xffffffffffffff80) {
          return false;
        }
        if (bVar1 == 0x5c) break;
        if (((9 < (byte)(bVar1 - 0x30U) && 0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f))
           && (bVar1 != 0x2d)) {
          return false;
        }
        lVar4 = lVar4 + 1;
        uVar3 = uVar3 - 1;
      }
      if (lVar4 == 0) {
        return false;
      }
      uVar2 = uVar2 + 1;
      uVar5 = -uVar3;
    } while (uVar2 < 7);
  }
  return false;
}


#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002678
 */

undefined8 recovered_10002678(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10002528(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100026d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2,1,(uint)param_3,param_4);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010978

#undef PTR_FUN_1000c010
#define PTR_FUN_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x8044U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026e4
 */

void recovered_100026e4(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    recovered_10002490(*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_1000c010)(param_1,0,0x18);
  return;
}

#undef PTR_FUN_1000c010

#undef DAT_100042ca
#define DAT_100042ca (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2feU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000271c
 */

void recovered_1000271c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *dst;

  if (param_1 == 0) {
    return;
  }
  dst = (char *)(param_1 + 0x64dc);
  if (dst != (char *)0x0) {
    if (param_2 == 0) {
      *dst = '\0';
      return;
    }
    thunk_snprintf(dst,0x80,&DAT_100042ca,(char *)param_2);
  }
  return;
}

#undef DAT_100042ca

#define local_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002738
 */

bool recovered_10002738(char *param_1,int *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;

  pcVar3 = local_150;
  bVar1 = param_1 != (char *)0x0 && param_2 != (int *)0x0;
  if (param_1 == (char *)0x0 || param_2 == (int *)0x0) {
    return bVar1;
  }
  *param_2 = -1;
  if (*param_1 != '[') {
    iVar5 = -1;
    goto LAB_10002890;
  }
  uVar8 = 0;
  lVar7 = 1;
  while( true ) {
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    if ((cVar2 == '\0') || (cVar2 == ']')) break;
    if (uVar8 + 1 < 0x80) {
      local_150[uVar8] = cVar2;
      uVar8 = uVar8 + 1;
    }
    lVar7 = lVar7 + 1;
  }
  local_150[uVar8] = '\0';
  iVar5 = 0x7fffffff;
  uVar8 = (ulong)(cVar2 == ']');
  if ((cVar2 == ']') && (lVar7 + 1U < 0x82)) {
    lVar7 = 0;
    if (local_150[0] == '[') {
      pcVar3 = local_150 + 1;
    }
    for (; ((cVar2 = pcVar3[lVar7], cVar2 != '\0' && (cVar2 != ']')) && (lVar7 != 0x7f));
        lVar7 = lVar7 + 1) {
      local_150[lVar7 + 0x80] = cVar2;
    }
    local_150[lVar7 + 0x80] = '\0';
    if (local_150[0] == '[') {
      if (cVar2 == ']') {
        cVar2 = local_150[lVar7 + 2];
        goto joined_r0x10002878;
      }
    }
    else {
joined_r0x10002878:
      if (cVar2 == '\0') {
        bVar4 = recovered_100025c8((long)(local_150 + 0x80));
        iVar5 = 0x7fffffff;
        if (bVar4) {
          uVar6 = recovered_10002570(0xfffffffe,local_150 + 0x80);
          iVar5 = (int)uVar6;
          if (iVar5 < 0) {
            iVar5 = 0x7fffffff;
          }
        }
        goto LAB_10002880;
      }
    }
    iVar5 = 0x7fffffff;
  }
LAB_10002880:
  if (param_1[uVar8] == '\\') {
    uVar8 = uVar8 + 1;
  }
  param_1 = param_1 + uVar8;
LAB_10002890:
  for (uVar8 = 0; uVar8 >> 2 < 0xc21 && param_1[uVar8] != '\0'; uVar8 = uVar8 + 1) {
    *(char *)((long)param_2 + uVar8 + 4) = param_1[uVar8];
  }
  *(undefined1 *)((long)param_2 + uVar8 + 4) = 0;
  *param_2 = iVar5;
  if ((char)param_2[1] == '\0') {
    recovered_10002458((undefined1 *)(param_2 + 1),0x3085,((uintptr_t)pf_module_state + 0x34aU));
  }
  return bVar1;
}

#undef local_150

#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028fc
 */

undefined8 recovered_100028fc(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_10002528(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1);
    return uVar3;
  }
  return 0;
}

#undef UINT_8201084c

#undef str_10004319
#define str_10004319 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x34dU)))
#undef str_10004326
#define str_10004326 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002944
 */

bool recovered_10002944(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint128 auVar7;

  recovered_10002458((undefined1 *)(param_1 + 0x3445),0x3085,param_1 + 0x3c0);
  uVar5 = thunk_strlen((char *)(param_1 + 0x3445));
  *(ulong *)(param_1 + 0x64d0) = uVar5;
  *(undefined4 *)(param_1 + 0x64d8) = 0;
  *(undefined1 *)(param_1 + 0x6570) = 1;
  *(char *)(param_1 + 0x6571) = (char)param_2;
  pcVar1 = str_10004319;
  if (param_2 == 0) {
    pcVar1 = str_10004326;
  }
  recovered_1000271c(param_1,(long)pcVar1);
  if (param_1 == 0) {
    return false;
  }
  auVar7 = recovered_100032cc(param_1);
  iVar6 = *(int *)(param_1 + 0x390);
  if (iVar6 < 1) {
    iVar6 = 6;
  }
  iVar4 = 0;
  if (iVar6 != 0) {
    iVar4 = (PF_PART4(auVar7, 8) + -8) / iVar6;
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x64d8);
  iVar3 = *(int *)(param_1 + 0x64d0);
  iVar6 = iVar3;
  if (iVar2 <= iVar3) {
    iVar6 = iVar2;
    if (iVar3 < iVar2 + iVar4) goto LAB_100017ac;
    iVar6 = (iVar3 - iVar4) + 1;
  }
  *(int *)(param_1 + 0x64d8) = iVar6;
LAB_100017ac:
  if (iVar6 < 0) {
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x64d8) = 0;
  }
  return iVar2 != iVar6;
}

#undef str_10004319
#undef str_10004326

#undef UINT_820108d0
#define UINT_820108d0 (*(uint *)(0x820108d0U))
#undef str_10004330
#define str_10004330 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x364U)))
#undef str_1000433c
#define str_1000433c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x370U)))
#undef str_1000434c
#define str_1000434c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x380U)))
#define local_315c (*(uint *)(pf_stack_frame + 20))
#define acStack_3158 (*(char (*)[12632])(pf_stack_frame + 24))
#define acStack_d0 (*(char (*)[208])(pf_stack_frame + 12448))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

undefined8 recovered_100029c0(long param_1)

{
  unsigned char pf_stack_frame[12688] __attribute__((aligned(16))) = {0};

  uint size;
  uint uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  void *data;

  if ((*(long *)(param_1 + 0x398) == 0) || (*(char *)(param_1 + 0x3c0) == '\0')) {
    pcVar4 = str_10004330;
    goto LAB_10002adc;
  }
  pcVar4 = (char *)(param_1 + 0x3c0);
  bVar2 = recovered_10002738(pcVar4,(int *)&local_315c);
  uVar3 = local_315c;
  if (bVar2) {
    data = *(void **)(param_1 + 0x398);
    size = *(uint *)(param_1 + 0x3a8);
    bVar2 = recovered_10002528(0xd0);
    if (bVar2) {
      uVar1 = UINT_820108d0;
      if (uVar1 != 0) {
        uVar3 = (*(code *)(ulong)uVar1)(uVar3,acStack_3158,data,size);
joined_r0x10002a84:
        if (uVar3 != 0) {
          *(undefined1 *)(param_1 + 0x6572) = 0;
          recovered_100022fc((ulong)local_315c,acStack_3158,pcVar4);
          thunk_snprintf(acStack_d0,0x80,str_1000434c,pcVar4);
          recovered_1000271c(param_1,(long)acStack_d0);
          return 1;
        }
      }
    }
    else {
      bVar2 = recovered_10002528(0x38);
      if (bVar2) {
        uVar3 = UINT_82010838;
        if (uVar3 != 0) {
          uVar3 = (*(code *)(ulong)uVar3)(acStack_3158,data,size);
          goto joined_r0x10002a84;
        }
      }
    }
  }
  thunk_snprintf(acStack_d0,0x80,str_1000433c,pcVar4);
  pcVar4 = acStack_d0;
LAB_10002adc:
  recovered_1000271c(param_1,(long)pcVar4);
  return 0;
}

#undef UINT_820108d0
#undef str_10004330
#undef str_1000433c
#undef str_1000434c
#undef local_315c
#undef acStack_3158
#undef acStack_d0

#define local_48 (*(ulong (*)[9])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b04
 */

undefined8 recovered_10002b04(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;

  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x398) != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x3b8);
    uVar6 = *(ulong *)(param_1 + 0x3a8);
    uVar1 = uVar5;
    if (uVar6 <= uVar5) {
      uVar1 = uVar6;
    }
    uVar2 = *(ulong *)(param_1 + 0x3b0);
    if (uVar6 <= *(ulong *)(param_1 + 0x3b0)) {
      uVar2 = uVar6;
    }
    if (uVar1 == uVar2) {
      recovered_10002c30(param_1);
      recovered_10002f74(param_1,local_48 + 2,local_48 + 1,local_48);
      if ((local_48[0] != local_48[2]) || (*(long *)(param_1 + 0x3a8) != 0)) {
        thunk_memmove((void *)(*(long *)(param_1 + 0x398) + local_48[2]),
                           (void *)(*(long *)(param_1 + 0x398) + local_48[0]),
                           (*(long *)(param_1 + 0x3a8) - local_48[0]) + 1);
        uVar1 = (local_48[2] - local_48[0]) + *(long *)(param_1 + 0x3a8);
        *(ulong *)(param_1 + 0x3a8) = uVar1;
        uVar5 = local_48[2];
        if (uVar1 <= local_48[2]) {
          uVar5 = uVar1;
        }
        *(ulong *)(param_1 + 0x3b0) = uVar5;
        *(ulong *)(param_1 + 0x3b8) = uVar5;
        *(undefined1 *)(param_1 + 0x6572) = 1;
        recovered_1000271c(param_1,((uintptr_t)pf_module_state + 0x397U));
        return 1;
      }
    }
    else {
      uVar6 = uVar2;
      if (uVar2 <= uVar5) {
        uVar6 = uVar1;
        uVar1 = uVar2;
      }
      uVar3 = recovered_10002e2c(param_1,uVar1,uVar6,((uintptr_t)pf_module_state + 0x389U));
      if ((int)uVar3 != 0) {
        if ((((param_1 != 0) && (uVar1 < uVar6)) && (lVar4 = *(long *)(param_1 + 0x398), lVar4 != 0)
            ) && (uVar5 = *(ulong *)(param_1 + 0x3a8), uVar1 <= uVar5)) {
          uVar2 = uVar5;
          if (uVar6 <= uVar5) {
            uVar2 = uVar6;
          }
          if (uVar1 < uVar2) {
            thunk_memmove((void *)(lVar4 + uVar1),(void *)(lVar4 + uVar2),(uVar5 - uVar2) + 1);
            *(ulong *)(param_1 + 0x3a8) = (uVar1 - uVar2) + *(long *)(param_1 + 0x3a8);
            *(ulong *)(param_1 + 0x3b0) = uVar1;
            *(ulong *)(param_1 + 0x3b8) = uVar1;
            *(undefined1 *)(param_1 + 0x6572) = 1;
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

#undef local_48

#define auStack_440 (*(ulong (*)[136])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c30
 */

undefined8 recovered_10002c30(long param_1)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;

  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x398) == 0) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x3b8);
  uVar8 = *(ulong *)(param_1 + 0x3a8);
  uVar1 = uVar7;
  if (uVar8 <= uVar7) {
    uVar1 = uVar8;
  }
  uVar2 = *(ulong *)(param_1 + 0x3b0);
  if (uVar8 <= *(ulong *)(param_1 + 0x3b0)) {
    uVar2 = uVar8;
  }
  if (uVar1 == uVar2) {
    recovered_10002f74(param_1,auStack_440 + 0x83,auStack_440 + 0x82,(ulong *)0x0);
    uVar6 = recovered_10002e2c(param_1,0,0,((uintptr_t)pf_module_state + 0x3bdU));
    return uVar6;
  }
  uVar8 = uVar2;
  if (uVar2 <= uVar7) {
    uVar8 = uVar1;
    uVar1 = uVar2;
  }
  lVar9 = *(long *)(param_1 + 0x398);
  if ((lVar9 != 0) && (uVar7 = *(ulong *)(param_1 + 0x3a8), uVar1 <= uVar7)) {
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    uVar8 = 0;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7 - uVar1;
    }
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    bVar4 = recovered_10002528(0x180);
    if (bVar4) {
      uVar3 = UINT_82010980;
      if ((uVar3 != 0) && (iVar5 = (*(code *)(ulong)uVar3)(lVar9 + uVar1,uVar8), iVar5 != 0)) {
        recovered_1000271c(param_1,((uintptr_t)pf_module_state + 0x3acU));
        return 1;
      }
    }
    recovered_1000271c(param_1,((uintptr_t)pf_module_state + 0x3a0U));
  }
  return 0;
}

#undef auStack_440

#undef UINT_82010988
#define UINT_82010988 (*(uint *)(0x82010988U))
#undef str_10004395
#define str_10004395 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c9U)))
#undef str_100043a2
#define str_100043a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cc0
 */

undefined8 recovered_10002cc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;

  bVar2 = recovered_10002528(0x188);
  if (bVar2) {
    uVar3 = UINT_82010988;
    if (uVar3 == 0) goto LAB_10002d00;
    uVar3 = (*(code *)(ulong)uVar3)();
  }
  else {
LAB_10002d00:
    uVar3 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x398) == 0) {
    return 0;
  }
  if (uVar3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x3a0) == 0) {
    return 0;
  }
  if ((uVar3 == 0xffffffff) ||
     (puVar4 = (undefined1 *)recovered_100028fc((ulong)uVar3 + 1), puVar4 == (undefined1 *)0x0)) {
    uVar6 = 0;
    pcVar7 = str_10004395;
    goto LAB_10002db4;
  }
  bVar2 = recovered_10002528(0x184);
  if (bVar2) {
    uVar1 = UINT_82010984;
    if (((uVar1 == 0) || (uVar3 = (*(code *)(ulong)uVar1)(puVar4,uVar3 + 1), uVar3 == 0)) ||
       (uVar5 = recovered_1000307c(param_1,(long)puVar4,(ulong)uVar3), (uVar5 & 1) == 0))
    goto LAB_10002da0;
    uVar6 = 1;
    pcVar7 = str_100043a2;
  }
  else {
    *puVar4 = 0;
LAB_10002da0:
    uVar6 = 0;
    pcVar7 = str_10004395;
  }
  recovered_10002490(puVar4);
LAB_10002db4:
  recovered_1000271c(param_1,(long)pcVar7);
  return uVar6;
}

#undef UINT_82010988
#undef str_10004395
#undef str_100043a2

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dcc
 */

undefined8 recovered_10002dcc(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x3b8);
    uVar2 = *(ulong *)(param_1 + 0x3a8);
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      uVar1 = uVar2;
    }
    uVar3 = *(ulong *)(param_1 + 0x3b0);
    if (uVar2 <= *(ulong *)(param_1 + 0x3b0)) {
      uVar3 = uVar2;
    }
    if (uVar1 != uVar3) {
      if (uVar4 < uVar3) {
        if (param_2 != (ulong *)0x0) {
          *param_2 = uVar1;
        }
      }
      else {
        if (param_2 != (ulong *)0x0) {
          *param_2 = uVar3;
        }
        uVar3 = uVar1;
      }
      if (param_3 != (ulong *)0x0) {
        *param_3 = uVar3;
      }
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e2c
 */

undefined8 recovered_10002e2c(long param_1,ulong param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;

  lVar6 = *(long *)(param_1 + 0x398);
  if ((lVar6 != 0) && (uVar5 = *(ulong *)(param_1 + 0x3a8), param_2 <= uVar5)) {
    if (param_3 <= uVar5) {
      uVar5 = param_3;
    }
    if (uVar5 <= param_2) {
      uVar5 = param_2;
    }
    uVar1 = 0;
    if (param_2 <= uVar5) {
      uVar1 = uVar5 - param_2;
    }
    if (0xfffffffe < uVar1) {
      uVar1 = 0xffffffff;
    }
    bVar3 = recovered_10002528(0x180);
    if (bVar3) {
      uVar2 = UINT_82010980;
      if ((uVar2 != 0) && (iVar4 = (*(code *)(ulong)uVar2)(lVar6 + param_2,uVar1), iVar4 != 0)) {
        recovered_1000271c(param_1,param_4);
        return 1;
      }
    }
    recovered_1000271c(param_1,((uintptr_t)pf_module_state + 0x3a0U));
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002edc
 */

undefined8 recovered_10002edc(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if ((((param_1 != 0) && (param_2 < param_3)) && (lVar2 = *(long *)(param_1 + 0x398), lVar2 != 0))
     && (uVar3 = *(ulong *)(param_1 + 0x3a8), param_2 <= uVar3)) {
    uVar1 = uVar3;
    if (param_3 <= uVar3) {
      uVar1 = param_3;
    }
    if (param_2 < uVar1) {
      thunk_memmove((void *)(lVar2 + param_2),(void *)(lVar2 + uVar1),(uVar3 - uVar1) + 1);
      *(ulong *)(param_1 + 0x3a8) = (param_2 - uVar1) + *(long *)(param_1 + 0x3a8);
      *(ulong *)(param_1 + 0x3b0) = param_2;
      *(ulong *)(param_1 + 0x3b8) = param_2;
      *(undefined1 *)(param_1 + 0x6572) = 1;
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f74
 */

void recovered_10002f74(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  uVar1 = recovered_10002ff4(param_1);
  uVar2 = recovered_10003038(param_1,uVar1);
  uVar3 = uVar2;
  if ((uVar2 < *(ulong *)(param_1 + 0x3a8)) &&
     (*(char *)(*(long *)(param_1 + 0x398) + uVar2) == '\n')) {
    uVar3 = uVar2 + 1;
  }
  if (param_2 != (ulong *)0x0) {
    *param_2 = uVar1;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar2;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = uVar3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ff4
 */

ulong recovered_10002ff4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x398) == 0) {
      return 0;
    }
    uVar1 = *(ulong *)(param_1 + 0x3b0);
    if (*(ulong *)(param_1 + 0x3a8) <= *(ulong *)(param_1 + 0x3b0)) {
      uVar1 = *(ulong *)(param_1 + 0x3a8);
    }
    for (; (uVar1 != 0 && (*(char *)(*(long *)(param_1 + 0x398) + -1 + uVar1) != '\n'));
        uVar1 = uVar1 - 1) {
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003038
 */

ulong recovered_10003038(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x398) == 0) || (uVar1 = *(ulong *)(param_1 + 0x3a8), uVar1 < param_2))
    {
      uVar1 = 0;
    }
    else {
      for (; uVar1 != param_2; param_2 = param_2 + 1) {
        if (*(char *)(*(long *)(param_1 + 0x398) + param_2) == '\n') {
          return param_2;
        }
      }
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000307c
 */

undefined8 recovered_1000307c(long param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *src;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;

  uVar6 = 0;
  if (((param_1 != 0) && (uVar6 = 0, param_2 != 0)) && (*(long *)(param_1 + 0x398) != 0)) {
    uVar7 = *(ulong *)(param_1 + 0x3b8);
    uVar9 = *(ulong *)(param_1 + 0x3a8);
    uVar3 = uVar7;
    if (uVar9 <= uVar7) {
      uVar3 = uVar9;
    }
    uVar1 = *(ulong *)(param_1 + 0x3b0);
    if (uVar9 <= *(ulong *)(param_1 + 0x3b0)) {
      uVar1 = uVar9;
    }
    uVar2 = uVar1;
    uVar4 = uVar3;
    if (uVar1 <= uVar7) {
      uVar2 = uVar3;
      uVar4 = uVar1;
    }
    bVar5 = uVar3 != uVar1;
    uVar3 = 0;
    if (bVar5) {
      uVar3 = uVar2;
    }
    uVar7 = 0;
    if (bVar5) {
      uVar7 = uVar4;
    }
    lVar8 = 0;
    if (bVar5) {
      lVar8 = uVar2 - uVar4;
    }
    uVar9 = uVar9 - lVar8;
    if (uVar9 >> 0x20 == 0 && param_3 <= 0xffffffff - uVar9) {
      uVar6 = recovered_10002298(param_1,uVar9 + param_3);
      if ((int)uVar6 != 0) {
        if (lVar8 == 0) {
          uVar7 = *(ulong *)(param_1 + 0x3b0);
          lVar8 = *(long *)(param_1 + 0x3a8);
        }
        else {
          thunk_memmove((void *)(*(long *)(param_1 + 0x398) + uVar7),
                             (void *)(*(long *)(param_1 + 0x398) + uVar3),
                             (*(long *)(param_1 + 0x3a8) - uVar3) + 1);
          lVar8 = *(long *)(param_1 + 0x3a8) - lVar8;
          *(long *)(param_1 + 0x3a8) = lVar8;
          *(ulong *)(param_1 + 0x3b0) = uVar7;
          *(ulong *)(param_1 + 0x3b8) = uVar7;
        }
        src = (void *)(*(long *)(param_1 + 0x398) + uVar7);
        thunk_memmove((void *)((long)src + param_3),src,(lVar8 - uVar7) + 1);
        thunk_memcpy((void *)(*(long *)(param_1 + 0x398) + *(long *)(param_1 + 0x3b0)),
                           (void *)param_2,param_3);
        lVar8 = *(long *)(param_1 + 0x3b0) + param_3;
        *(long *)(param_1 + 0x3b0) = lVar8;
        *(ulong *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + param_3;
        *(long *)(param_1 + 0x3b8) = lVar8;
        uVar6 = 1;
        *(undefined1 *)(param_1 + 0x6572) = 1;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031c8
 */

uint128 recovered_100031c8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar2 = recovered_100034b8(param_1);
  iVar1 = PF_PART4(auVar2, 12);
  if (iVar1 < 0x33) {
    iVar1 = 0x32;
  }
  PF_PART8(auVar3, 8) = (ulong)(iVar1 - 0x32) << 0x20 | 0xc;
  PF_PART8(auVar3, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar2, 0) + 5)) + 0x1500000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000320c
 */

uint128 recovered_1000320c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar1 = recovered_100031c8(param_1);
  auVar2 = recovered_100034b8(param_1);
  PF_PART8(auVar3, 8) = 0xe0000000c;
  PF_PART8(auVar3, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | PF_PART8(auVar1, 0) & 0xffffffff) + 0x500000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003248
 */

uint128 recovered_10003248(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar1 = recovered_100034b8(param_1);
  auVar2 = recovered_100031c8(param_1);
  PF_PART8(auVar3, 8) = 0xe0000000c;
  PF_PART8(auVar3, 0) = ((PF_PART8(auVar1, 0) & 0xffffffff00000000) + PF_PART8(auVar1, 8) & 0xffffffff00000000 |
                 PF_PART8(auVar2, 0) & 0xffffffff) - 0x1600000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032a0
 */

bool recovered_100032a0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032cc
 */

uint128 recovered_100032cc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;

  iVar1 = 800;
  if (param_1 != 0) {
    iVar1 = 800;
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
  }
  if (iVar1 < 0xa3) {
    iVar1 = 0xa2;
  }
  PF_PART8(auVar2, 8) = (ulong)(iVar1 - 0x52) | 0x1800000000;
  PF_PART8(auVar2, 0) = 0xf00000048;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003300
 */

bool recovered_10003300(long param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint128 auVar13;

  lVar12 = *(long *)(param_1 + 0x3b0);
  lVar11 = *(long *)(param_1 + 0x3b8);
  auVar13 = recovered_10003478(param_1);
  iVar10 = PF_PART4(auVar13, 0);
  iVar9 = PF_PART4(auVar13, 4);
  if (param_5 == 0) {
    bVar6 = recovered_100032a0(param_2,param_3,PF_PART8(auVar13, 0),PF_PART8(auVar13, 8));
    if (!bVar6) {
      return bVar6;
    }
  }
  else {
    iVar5 = PF_PART4(auVar13, 8) + iVar10 + -1;
    iVar3 = param_2;
    if (iVar5 <= param_2) {
      iVar3 = iVar5;
    }
    bVar6 = iVar10 <= param_2;
    param_2 = iVar10;
    if (bVar6) {
      param_2 = iVar3;
    }
    iVar5 = PF_PART4(auVar13, 12) + iVar9 + -1;
    iVar3 = param_3;
    if (iVar5 <= param_3) {
      iVar3 = iVar5;
    }
    bVar6 = iVar9 <= param_3;
    param_3 = iVar9;
    if (bVar6) {
      param_3 = iVar3;
    }
  }
  iVar3 = *(int *)(param_1 + 0x394) + 3;
  if (*(int *)(param_1 + 0x394) < 1) {
    iVar3 = 0xd;
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = (param_3 - iVar9) / iVar3;
  }
  lVar1 = (long)*(int *)(param_1 + 0x6568) + (long)iVar5;
  if (0x7ffffffe < lVar1) {
    lVar1 = 0x7fffffff;
  }
  iVar9 = *(int *)(param_1 + 0x390);
  if (iVar9 < 1) {
    iVar9 = 6;
  }
  uVar4 = 0;
  if (iVar9 != 0) {
    uVar4 = (param_2 - iVar10) / iVar9;
  }
  lVar2 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + (long)*(int *)(param_1 + 0x656c);
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  uVar4 = (uint)lVar2 & ((uint)(lVar2 >> 0x3f) ^ 0xffffffff);
  uVar7 = recovered_100036e8(param_1,(uint)lVar1 & ((uint)(lVar1 >> 0x3f) ^ 0xffffffff));
  uVar8 = recovered_10003038(param_1,uVar7);
  uVar8 = uVar8 - uVar7;
  if (0x7ffffffe < uVar8) {
    uVar8 = 0x7fffffff;
  }
  if ((uint)uVar8 <= uVar4) {
    uVar4 = (uint)uVar8;
  }
  *(ulong *)(param_1 + 0x3b0) = uVar7 + uVar4;
  *(undefined1 *)(param_1 + 0x6570) = 0;
  if ((param_4 & 1) == 0) {
    *(ulong *)(param_1 + 0x3b8) = uVar7 + uVar4;
  }
  recovered_100017cc(param_1);
  if (*(long *)(param_1 + 0x3b0) == lVar12) {
    bVar6 = *(long *)(param_1 + 0x3b8) != lVar11;
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003478
 */

uint128 recovered_10003478(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar1 = recovered_100034b8(param_1);
  PF_PART8(auVar2, 8) = (PF_PART8(auVar1, 8) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar1, 8) - 0x41)) - 0xc00000000;
  PF_PART8(auVar2, 0) = (PF_PART8(auVar1, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar1, 0) + 0x37)) + 0x600000000;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034b8
 */

uint128 recovered_100034b8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint128 auVar4;

  iVar3 = 0x208;
  uVar2 = 0x30c;
  if (param_1 != 0) {
    iVar3 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = *(int *)(param_1 + 8);
    }
    uVar1 = 0x30c;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = *(int *)(param_1 + 4) - 0x14;
    }
    uVar2 = (ulong)uVar1;
  }
  if (iVar3 < 0xad) {
    iVar3 = 0xac;
  }
  PF_PART8(auVar4, 8) = uVar2 | (ulong)(iVar3 - 0x5c) << 0x20;
  PF_PART8(auVar4, 0) = 0x3a0000000a;
  return auVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034fc
 */

uint128 recovered_100034fc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint128 auVar10;
  uint128 auVar11;

  auVar10 = recovered_100031c8(param_1);
  iVar4 = recovered_100035f8(param_1);
  iVar5 = recovered_10003638(param_1);
  uVar6 = recovered_10003678(param_1);
  uVar7 = PF_PART8(auVar10, 0) >> 0x20;
  uVar9 = PF_PART4(auVar10, 12);
  if (((int)uVar9 >= 1 && iVar4 != iVar5) && ((int)uVar9 < 1 || iVar5 <= iVar4)) {
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = (int)(iVar5 * uVar9) / iVar4;
    }
    uVar1 = uVar3;
    if ((int)uVar9 <= (int)uVar3) {
      uVar1 = uVar9;
    }
    uVar2 = 0x12;
    if (0x11 < (int)uVar3) {
      uVar2 = uVar1;
    }
    if (0 < (int)uVar6 && (int)uVar2 < (int)uVar9) {
      iVar4 = 0;
      if ((ulong)uVar6 != 0) {
        iVar4 = (int)(((long)*(int *)(param_1 + 0x6568) * (long)(int)(uVar9 - uVar2)) /
                     (long)(ulong)uVar6);
      }
      uVar7 = (ulong)(uint)(iVar4 + PF_PART4(auVar10, 4));
    }
    uVar8 = (ulong)uVar2 << 0x20;
  }
  else {
    uVar8 = 0;
  }
  PF_PART8(auVar11, 8) = uVar8 | PF_PART8(auVar10, 8) & 0xffffffff;
  PF_PART8(auVar11, 0) = PF_PART8(auVar10, 0) & 0xffffffff | uVar7 << 0x20;
  return auVar11;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c8
 */

void recovered_100035c8(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar3 = *(int *)(param_1 + 0x6568);
  iVar5 = iVar3;
  if (0x7ffffffd < iVar3) {
    iVar5 = 0x7ffffffe;
  }
  if (iVar5 < 0) {
    iVar5 = -1;
  }
  iVar3 = iVar3 + -1;
  if (param_2 == 0) {
    iVar3 = iVar5 + 1;
  }
  *(int *)(param_1 + 0x6568) = iVar3;
  uVar4 = recovered_10003678(param_1);
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x6568);
    uVar1 = uVar2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar1 = uVar4;
    }
    uVar4 = 0;
    if (-1 < (int)uVar2) {
      uVar4 = uVar1;
    }
    *(uint *)(param_1 + 0x6568) = uVar4;
    if (*(int *)(param_1 + 0x656c) < 0) {
      *(undefined4 *)(param_1 + 0x656c) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035f8
 */

int recovered_100035f8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  long lVar3;

  if ((param_1 == 0) || (*(char **)(param_1 + 0x398) == (char *)0x0)) {
    return 1;
  }
  iVar2 = 1;
  pcVar1 = *(char **)(param_1 + 0x398);
  for (lVar3 = *(long *)(param_1 + 0x3a8); lVar3 != 0; lVar3 = lVar3 + -1) {
    if (*pcVar1 == '\n' && iVar2 != 0x7fffffff) {
      iVar2 = iVar2 + 1;
    }
    pcVar1 = pcVar1 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003638
 */

int recovered_10003638(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_10003478(param_1);
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x394), iVar2 < 1)) {
    iVar2 = 10;
  }
  iVar1 = 0;
  if (iVar2 + 3 != 0) {
    iVar1 = PF_PART4(auVar3, 12) / (iVar2 + 3);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003678
 */

uint recovered_10003678(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = recovered_100035f8(param_1);
  iVar2 = recovered_10003638(param_1);
  return iVar1 - iVar2 & (iVar1 - iVar2 >> 0x1f ^ 0xffffffffU);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a0
 */

void recovered_100036a0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = recovered_10003678(param_1);
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x6568);
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = 0;
    if (-1 < (int)uVar2) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + 0x6568) = uVar3;
    if (*(int *)(param_1 + 0x656c) < 0) {
      *(undefined4 *)(param_1 + 0x656c) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036e8
 */

long recovered_100036e8(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  int iVar3;

  lVar1 = 0;
  if (((param_1 != 0) && (lVar1 = 0, 0 < param_2)) && (*(long *)(param_1 + 0x398) != 0)) {
    iVar3 = 0;
    lVar1 = *(long *)(param_1 + 0x3a8);
    for (lVar2 = 0; lVar1 != lVar2; lVar2 = lVar2 + 1) {
      if ((*(char *)(*(long *)(param_1 + 0x398) + lVar2) == '\n') &&
         (iVar3 = iVar3 + 1, iVar3 == param_2)) {
        return lVar2 + 1;
      }
    }
  }
  return lVar1;
}


#define local_11 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

void recovered_10003740(long param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_11 = param_2;
  recovered_1000307c(param_1,(long)&local_11,1);
  return;
}

#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003768
 */

void recovered_10003768(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar2 = recovered_10002ff4(param_1);
  iVar1 = recovered_1000385c(param_1);
  if (param_2 == 0) {
    uVar3 = recovered_10003038(param_1,uVar2);
    uVar2 = *(ulong *)(param_1 + 0x3a8);
    if (uVar2 <= uVar3) goto LAB_1000380c;
  }
  else {
    if (uVar2 == 0) {
      uVar2 = 0;
      goto LAB_1000380c;
    }
    uVar2 = uVar2 - 2;
    do {
      uVar3 = uVar2;
      if (uVar3 == 0xffffffffffffffff) break;
      uVar2 = uVar3 - 1;
    } while (*(char *)(*(long *)(param_1 + 0x398) + uVar3) != '\n');
  }
  uVar2 = uVar3 + 1;
  uVar3 = recovered_10003038(param_1,uVar2);
  uVar3 = uVar3 - uVar2;
  if (0x7ffffffe < uVar3) {
    uVar3 = 0x7fffffff;
  }
  if ((int)uVar3 <= iVar1) {
    iVar1 = (int)uVar3;
  }
  uVar2 = uVar2 + (long)iVar1;
LAB_1000380c:
  *(ulong *)(param_1 + 0x3b0) = uVar2;
  return;
}


#define local_30 (*(ulong *)(pf_stack_frame + 16))
#define uStack_28 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003820
 */

void recovered_10003820(long param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_30 = 0;
  uStack_28 = 0;
  uVar1 = recovered_10002dcc(param_1,&uStack_28,&local_30);
  if ((int)uVar1 != 0) {
    recovered_10002edc(param_1,uStack_28,local_30);
  }
  return;
}

#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000385c
 */

undefined4 recovered_1000385c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;

  uVar1 = recovered_10002ff4(param_1);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x3b0) - uVar1;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    uVar2 = 0;
    if (uVar1 <= *(ulong *)(param_1 + 0x3b0)) {
      uVar2 = (undefined4)uVar3;
    }
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000389c
 */

int recovered_1000389c(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char *pcVar3;

  iVar2 = 0;
  if (param_1 != 0) {
    pcVar3 = *(char **)(param_1 + 0x398);
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    iVar2 = 0;
    uVar1 = *(ulong *)(param_1 + 0x3a8);
    if (param_2 <= *(ulong *)(param_1 + 0x3a8)) {
      uVar1 = param_2;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (*pcVar3 == '\n' && iVar2 != 0x7fffffff) {
        iVar2 = iVar2 + 1;
      }
      pcVar3 = pcVar3 + 1;
    }
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100038e4
 */

int recovered_100038e4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_10003478(param_1);
  iVar2 = 6;
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x390), iVar2 < 1)) {
    iVar2 = 6;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = PF_PART4(auVar3, 8) / iVar2;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000391c
 */

int recovered_1000391c(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0x1f < param_1) {
    param_1 = 0x20;
  }
  return ((param_1 * 0x20 * param_1 * 0x20 * (param_1 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 10 +
          0x200 >> 10) + 2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000395c
 */

void recovered_1000395c(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_w21;

  uVar7 = 800;
  if (param_1 != 0) {
    uVar7 = 800;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar7 = *(uint *)(param_1 + 4);
    }
  }
  uVar4 = (uint)param_2;
  uVar8 = uVar4;
  if ((int)uVar7 <= (int)uVar4) {
    uVar8 = uVar7;
  }
  uVar7 = 0;
  if (-1 < (int)uVar4) {
    uVar7 = uVar8;
  }
  uVar8 = 0x208;
  if (param_1 != 0) {
    uVar8 = 0x208;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar8 = *(uint *)(param_1 + 8);
    }
  }
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = uVar5;
  if ((int)uVar8 <= (int)uVar5) {
    uVar2 = uVar8;
  }
  uVar8 = 0;
  if (-1 < param_2) {
    uVar8 = uVar2;
  }
  iVar1 = uVar4 + (int)param_3;
  iVar9 = 800;
  if (param_1 != 0) {
    iVar9 = 800;
    if (*(int *)(param_1 + 4) != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
  }
  iVar6 = iVar1;
  if (iVar9 <= iVar1) {
    iVar6 = iVar9;
  }
  iVar9 = 0;
  if (-1 < iVar1) {
    iVar9 = iVar6;
  }
  iVar1 = uVar5 + (int)((ulong)param_3 >> 0x20);
  iVar6 = 0x208;
  if (param_1 != 0) {
    iVar6 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar6 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar1;
  if (iVar6 <= iVar1) {
    iVar3 = iVar6;
  }
  iVar6 = 0;
  if (-1 < iVar1) {
    iVar6 = iVar3;
  }
  for (; (int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
    for (uVar4 = uVar7; (int)uVar4 < iVar9; uVar4 = uVar4 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10003bc4(param_1,uVar4,uVar8,unaff_w21);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a64
 */

void recovered_10003a64(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_w21;
  uint uVar9;
  ulong uVar10;

  uVar10 = param_3 & 0xffffffff | 0x100000000;
  recovered_1000395c(param_1,param_2,uVar10,param_4 & 0xffffff);
  recovered_1000395c(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar10,param_4 & 0xffffff);
  recovered_1000395c(param_1,param_2,param_3 & 0xffffffff00000000 | 1,param_4 & 0xffffff);
  iVar1 = (int)param_3 + (int)param_2;
  uVar9 = iVar1 - 1;
  uVar6 = 800;
  if (param_1 != 0) {
    uVar6 = 800;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
  }
  uVar7 = uVar9;
  if ((int)uVar6 <= (int)uVar9) {
    uVar7 = uVar6;
  }
  uVar6 = 0;
  if (-1 < (int)uVar9) {
    uVar6 = uVar7;
  }
  uVar7 = 0x208;
  if (param_1 != 0) {
    uVar7 = 0x208;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar7 = *(uint *)(param_1 + 8);
    }
  }
  uVar4 = (uint)(param_2 >> 0x20);
  uVar2 = uVar4;
  if ((int)uVar7 <= (int)uVar4) {
    uVar2 = uVar7;
  }
  uVar7 = 0;
  if (-1 < (long)((ulong)uVar9 | param_2 & 0xffffffff00000000)) {
    uVar7 = uVar2;
  }
  iVar8 = 800;
  if (param_1 != 0) {
    iVar8 = 800;
    if (*(int *)(param_1 + 4) != 0) {
      iVar8 = *(int *)(param_1 + 4);
    }
  }
  iVar5 = iVar1;
  if (iVar8 <= iVar1) {
    iVar5 = iVar8;
  }
  iVar8 = 0;
  if (-1 < iVar1) {
    iVar8 = iVar5;
  }
  iVar1 = uVar4 + (int)(param_3 >> 0x20);
  iVar5 = 0x208;
  if (param_1 != 0) {
    iVar5 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar5 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar1;
  if (iVar5 <= iVar1) {
    iVar3 = iVar5;
  }
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar3;
  }
  for (; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
    for (uVar9 = uVar6; (int)uVar9 < iVar8; uVar9 = uVar9 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10003bc4(param_1,uVar9,uVar7,unaff_w21);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b0c
 */

void recovered_10003b0c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;

  uVar3 = 0;
  uVar5 = ((int)param_3 + 1) / 2;
  if (3 < (int)uVar5) {
    uVar5 = 4;
  }
  iVar2 = -4;
  if (param_4 == 0) {
    iVar2 = -2;
  }
  iVar2 = iVar2 + (int)((ulong)param_2 >> 0x20) + (int)((ulong)param_3 >> 0x20) / 2;
  for (uVar4 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar5 = uVar5 - 1;
    uVar1 = uVar3;
    if (param_4 == 0) {
      uVar1 = uVar5;
    }
    recovered_1000395c(param_1,CONCAT44(iVar2,((int)param_3 / 2 + (int)param_2) - uVar1),
                       (ulong)(uVar1 << 1) | 0x100000001,param_5 & 0xffffff);
    iVar2 = iVar2 + 1;
    uVar3 = uVar3 + 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bc4
 */

void recovered_10003bc4(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  if (((param_1 != 0) && (-1 < (int)(param_3 | param_2))) && (*(long *)(param_1 + 0x388) != 0)) {
    iVar3 = *(int *)(param_1 + 4);
    iVar1 = 800;
    if (iVar3 != 0) {
      iVar1 = iVar3;
    }
    if ((int)param_2 < iVar1) {
      iVar1 = 0x208;
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = *(int *)(param_1 + 8);
      }
      if ((int)param_3 < iVar1) {
        uVar2 = 0xc80;
        if (iVar3 != 0) {
          uVar2 = iVar3 << 2;
        }
        if (*(uint *)(param_1 + 0xc) != 0) {
          uVar2 = *(uint *)(param_1 + 0xc);
        }
        lVar4 = (ulong)param_2 * 4 + (ulong)uVar2 * (ulong)param_3;
        *(char *)(*(long *)(param_1 + 0x388) + lVar4) = (char)param_4;
        *(char *)(*(long *)(param_1 + 0x388) + lVar4 + 1) = (char)((uint)param_4 >> 8);
        *(char *)(*(long *)(param_1 + 0x388) + lVar4 + 2) = (char)((uint)param_4 >> 0x10);
        *(undefined1 *)(*(long *)(param_1 + 0x388) + lVar4 + 3) = 0xff;
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c64
 */

uint recovered_10003c64(uint in_w0)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = thunk_terror_ui_colour(in_w0);
  return uVar1 & 0xff00 | uVar1 << 0x10 | uVar1 >> 0x10 & 0xff;
}


#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(uint *)(pf_stack_frame + 36))
#define uStack_68 (*(uint *)(pf_stack_frame + 40))
#define uStack_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c88
 */

void recovered_10003c88(long param_1,uint param_2,int param_3,long param_4,uint param_5,uint param_6
                       )

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if ((param_4 == 0) || ((int)param_5 < 1)) {
    return;
  }
  for (uVar2 = 0; param_5 != uVar2; uVar2 = uVar2 + 1) {
    if (*(char *)(param_4 + uVar2) == '\0') goto LAB_10003cc0;
  }
  uVar2 = (ulong)param_5;
LAB_10003cc0:
  if ((param_4 != 0) && (0 < (int)uVar2)) {
    thunk_memset(&lStack_78,0,0x18);
    uVar5 = (param_6 & 0xff00 | 0xff000000) >> 8 | (param_6 & 0xff00ff) << 8;
    uVar1 = recovered_10002678(param_4,uVar2,(ulong)(uVar5 >> 0x10 | uVar5 << 0x10),&lStack_78);
    if ((int)uVar1 != 0) {
      if (lStack_78 != 0) {
        for (uVar6 = 0; uVar6 < uStack_68; uVar6 = uVar6 + 1) {
          lVar8 = lStack_78;
          uVar5 = param_2;
          for (uVar7 = 0; uVar7 < uStack_6c; uVar7 = uVar7 + 1) {
            lVar4 = uVar6 * uStack_64;
            if (*(char *)(lVar8 + lVar4 + 3) != '\0') {
              lVar3 = lVar8 + uVar6 * uStack_64;
              uVar2 = uVar2 & 0xffffffffff000000 | (ulong)*(byte *)(lVar8 + lVar4) |
                      (ulong)*(byte *)(lVar3 + 1) << 8 | (ulong)*(byte *)(lVar3 + 2) << 0x10;
              recovered_10003bc4(param_1,uVar5,(int)uVar6 + param_3,(int)uVar2);
            }
            lVar8 = lVar8 + 4;
            uVar5 = uVar5 + 1;
          }
        }
      }
      recovered_100026e4(&lStack_78);
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(uint *)(pf_stack_frame + 36))
#define uStack_68 (*(uint *)(pf_stack_frame + 40))
#define uStack_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cc8
 */

void recovered_10003cc8(long param_1,uint param_2,int param_3,long param_4,ulong param_5,
                       uint param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  if ((param_4 != 0) && (0 < (int)param_5)) {
    thunk_memset(&lStack_78,0,0x18);
    uVar4 = (param_6 & 0xff00ff00 | 0xff000000) >> 8 | (param_6 & 0xff00ff) << 8;
    uVar1 = recovered_10002678(param_4,param_5,(ulong)(uVar4 >> 0x10 | uVar4 << 0x10),&lStack_78);
    if ((int)uVar1 != 0) {
      if (lStack_78 != 0) {
        for (uVar5 = 0; uVar5 < uStack_68; uVar5 = uVar5 + 1) {
          lVar7 = lStack_78;
          uVar4 = param_2;
          for (uVar6 = 0; uVar6 < uStack_6c; uVar6 = uVar6 + 1) {
            lVar3 = uVar5 * uStack_64;
            if (*(char *)(lVar7 + lVar3 + 3) != '\0') {
              lVar2 = lVar7 + uVar5 * uStack_64;
              param_5 = param_5 & 0xffffffffff000000 | (ulong)*(byte *)(lVar7 + lVar3) |
                        (ulong)*(byte *)(lVar2 + 1) << 8 | (ulong)*(byte *)(lVar2 + 2) << 0x10;
              recovered_10003bc4(param_1,uVar4,(int)uVar5 + param_3,(int)param_5);
            }
            lVar7 = lVar7 + 4;
            uVar4 = uVar4 + 1;
          }
        }
      }
      recovered_100026e4(&lStack_78);
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64
