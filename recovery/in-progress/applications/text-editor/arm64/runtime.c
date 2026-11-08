#include "../../window_focus.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100036a0
#define DAT_100036a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x180U)))
#undef DAT_1000374b
#define DAT_1000374b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22bU)))
#undef DAT_1000374f
#define DAT_1000374f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22fU)))
#undef DAT_1000384d
#define DAT_1000384d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32dU)))
#undef UINT_8201082c
#define UINT_8201082c (*(uint *)(0x8201082cU))
#undef UINT_82010834
#define UINT_82010834 (*(uint *)(0x82010834U))
#undef UINT_8201089c
#define UINT_8201089c (*(uint *)(0x8201089cU))
#undef UINT_820108c8
#define UINT_820108c8 (*(uint *)(0x820108c8U))
#undef str_100036d4
#define str_100036d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_100036f9
#define str_100036f9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d9U)))
#undef str_10003721
#define str_10003721 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x201U)))
#undef str_1000373c
#define str_1000373c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21cU)))
#undef str_100037e3
#define str_100037e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2c3U)))
#undef str_10003804
#define str_10003804 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2e4U)))
#undef str_10003810
#define str_10003810 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f0U)))
#undef str_10003820
#define str_10003820 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x300U)))
#undef str_1000382a
#define str_1000382a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x30aU)))
#define uStack_950 (*(undefined8 *)(frame + 16))
#define uStack_948 (*(undefined8 *)(frame + 24))
#define iStack_928 (*(int *)(frame + 56))
#define uStack_924 (*(uint *)(frame + 60))
#define uStack_920 (*(uint *)(frame + 64))
#define uStack_91c (*(uint *)(frame + 68))
#define pvStack_8f8 (*(void * *)(frame + 104))
#define pvStack_5d8 (*(void * *)(frame + 904))
#define uStack_5d0 (*(undefined8 *)(frame + 912))
#define puStack_5c8 (*(undefined1 * *)(frame + 920))
#define uStack_5c0 (*(ulong *)(frame + 928))
#define uStack_5b8 (*(ulong *)(frame + 936))
#define uStack_5b0 (*(ulong *)(frame + 944))
#define uStack_5a8 (*(ulong *)(frame + 952))
#define acStack_5a0 (*(char (*)[191])(frame + 960))
#define acStack_4e1 (*(char (*)[193])(frame + 1151))
#define uStack_420 (*(ulong *)(frame + 1344))
#define iStack_418 (*(int *)(frame + 1352))
#define acStack_414 (*(char (*)[128])(frame + 1356))
#define uStack_394 (*(uint *)(frame + 1484))
#define uStack_390 (*(uint *)(frame + 1488))
#define iStack_38c (*(int *)(frame + 1492))
#define uStack_388 (*(undefined8 *)(frame + 1496))
#define uStack_380 (*(undefined2 *)(frame + 1504))
#define uStack_37e (*(undefined1 *)(frame + 1506))
#define uStack_37d (*(undefined2 *)(frame + 1507))
#define bStack_37b (*(byte *)(frame + 1509))
#define iStack_378 (*(int *)(frame + 1512))
#define cStack_374 (*(char *)(frame + 1516))
#define uStack_370 (*(uint *)(frame + 1520))
#define auStack_36c (*(uint (*)[4])(frame + 1524))
#define uStack_35c (*(uint *)(frame + 1540))
#define uStack_358 (*(uint *)(frame + 1544))
#define uStack_348 (*(uint *)(frame + 1560))
#define iStack_33c (*(int *)(frame + 1572))
#define iStack_338 (*(int *)(frame + 1576))
#define iStack_334 (*(int *)(frame + 1580))
#define uStack_330 (*(uint *)(frame + 1584))
#define lStack_f4 (*(long *)(frame + 2156))
#define iStack_e8 (*(int *)(frame + 2168))
#define iStack_e4 (*(int *)(frame + 2172))
#define uStack_74 (*(uint *)(frame + 2284))
#define uStack_70 (*(uint *)(frame + 2288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005a0
 */

/* WARNING: Type propagation algorithm not settling */

int recovered_100005a0(void)

{
  unsigned char frame[2432] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong extraout_x0;
  ulong extraout_x0_00;
  ulong extraout_x0_01;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  char cVar19;
  char *pcVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  uint128 auVar24;
  uint128 auVar25;
  uint128 auVar26;

  memset(&iStack_928,0,0x5b8);
  uStack_5c0 = 0x10000;
  puStack_5c8 = recovered_10001d50(0x10000);
  if (puStack_5c8 != (undefined1 *)0x0) {
    *puStack_5c8 = 0;
    recovered_10001d98(acStack_5a0,0xc0,((uintptr_t)pf_module_state + 0x1e5U));
    recovered_10001d98(acStack_414,0x80,((uintptr_t)pf_module_state + 0x1f4U));
    pf_app_window_spec(&uStack_370,str_100036f9,800,0x208);
    uStack_330 = uStack_330 | 1;
    uStack_35c = 0xf6f7f6;
    uVar11 = terror_ui_window_open(&iStack_928,&uStack_370);
    if (uVar11 != 0) {
      terror_ui_window_set_menus(&iStack_928,str_10003721,str_1000373c,&DAT_1000374b);
      pvStack_5d8 = pvStack_8f8;
      if (pvStack_8f8 != (void *)0x0) {
        uStack_5d0 = DAT_100036a0;
        memset(&lStack_f4,0,0x18);
        uVar11 = recovered_10001e60(&DAT_1000374f,0xffffffff,0,&lStack_f4);
        if (uVar11 != 0) {
          if (iStack_e8 - 1U < 0x40) {
            uStack_5d0 = CONCAT44(PF_PART4(uStack_5d0, 4),iStack_e8 + 1);
          }
          if (iStack_e4 - 1U < 0x40) {
            uStack_5d0 = CONCAT44(iStack_e4,(int)uStack_5d0);
          }
          recovered_10001ecc(&lStack_f4);
        }
        cStack_374 = '\x01';
        recovered_1000156c((long)&iStack_928);
        text = acStack_4e1 + 1;
        bVar10 = true;
        uVar11 = uStack_390 >> 0xc & 1;
LAB_1000071c:
        uVar23 = uStack_920;
        uVar7 = uStack_924;
        if (cStack_374 == '\x01') {
          memset(&uStack_370,0,0x278);
          pf_app_refresh_window_info(&iStack_928);          uVar12 = terror_ui_window_query(&iStack_928,&uStack_370);
          if (((uVar12 != 0) && (bVar8 = terror_ui_window_info_requests_close(&uStack_370), (bVar8 & 1) == 0)) &&
             (uVar12 = terror_ui_window_sync_buffer(&iStack_928,&uStack_370), uVar12 != 0)) {
            pvStack_5d8 = pvStack_8f8;
            uStack_394 = uStack_348;
            uVar12 = (uint)(uStack_924 != uVar7 || uStack_920 != uVar23);
            if (uStack_924 != uVar7 || uStack_920 != uVar23) {
              recovered_100014a8((long)&iStack_928);
            }
            if ((iStack_33c != 0) && (iStack_33c != iStack_38c)) {
              iStack_38c = iStack_33c;
              if (iStack_338 == 2) {
                if (iStack_334 == 2) {
                  uVar18 = recovered_10002240((long)&iStack_928);
                }
                else if (iStack_334 == 1) {
                  uVar18 = recovered_100021b0((long)&iStack_928);
                }
                else {
                  if (iStack_334 != 0) goto LAB_10000888;
                  uVar18 = recovered_10002090((long)&iStack_928);
                }
                if ((uVar18 & 1) != 0) goto switchD_100007d8_default;
              }
              else if (iStack_338 == 1) {
                switch((uintptr_t)(iStack_334)) {
                case 0:
                  if (puStack_5c8 != (undefined1 *)0x0) {
                    *puStack_5c8 = 0;
                    uStack_5b0 = 0;
                    uStack_5b8 = 0;
                    uStack_5a8 = 0;
                    uStack_388 = 0;
                    uStack_37e = 0;
                    recovered_10002348((long)&iStack_928,((uintptr_t)pf_module_state + 0x1f4U));
                  }
                  break;
                case 1:
                  recovered_10001f04((long)&iStack_928,0);
                  break;
                case 2:
                  recovered_10001f70((long)&iStack_928);
                  break;
                case 3:
                  uVar12 = 1;
                  recovered_10001f04((long)&iStack_928,1);
                  goto LAB_10000888;
                }
switchD_100007d8_default:
                uVar12 = 1;
              }
            }
LAB_10000888:
            uVar7 = uStack_394;
            if ((((uStack_394 >> 1 & 1) != 0) || ((uStack_37d & 1) != 0)) || (bStack_37b == 1)) {
              memset(&uStack_370,0,0x1c);
              uVar13 = terror_ui_window_pointer_state(&iStack_928,&uStack_370);
              uVar23 = auStack_36c[0];
              if ((uVar13 == 0) || (((byte)uStack_370 >> 2 & 1) == 0)) {
                uVar13 = 0;
                bStack_37b = 0;
                uStack_37d = 0;
              }
              else {
                uVar13 = 799;
                if (uStack_924 != 0) {
                  uVar13 = uStack_924 - 1;
                }
                uVar14 = uStack_35c;
                if ((int)uVar13 <= (int)uStack_35c) {
                  uVar14 = uVar13;
                }
                uVar1 = 0;
                if (-1 < (int)uStack_35c) {
                  uVar1 = uVar14;
                }
                uVar13 = 0x207;
                if (uStack_920 != 0) {
                  uVar13 = uStack_920 - 1;
                }
                uVar14 = uStack_358;
                if ((int)uVar13 <= (int)uStack_358) {
                  uVar14 = uVar13;
                }
                uVar2 = 0;
                if (-1 < (int)uStack_358) {
                  uVar2 = uVar14;
                }
                if ((auStack_36c[0] & 1) == 0) {
                  uVar13 = 0;
                  uStack_37d = 0;
                }
                else {
                  if ((bStack_37b & 1) == 0) {
                    uVar13 = uStack_924;
                    if ((int)uStack_924 < 0xa3) {
                      uVar13 = 0xa2;
                    }
                    uVar14 = 0x2ce;
                    if (uStack_924 != 0) {
                      uVar14 = uVar13 - 0x52;
                    }
                    bVar9 = recovered_10002840(uVar1,uVar2,0xf00000048,(ulong)uVar14 | 0x1800000000)
                    ;
                    if (bVar9) {
                      iVar22 = (int)uStack_5d0;
                      if ((int)uStack_5d0 < 1) {
                        iVar22 = 6;
                      }
                      uVar13 = 1;
                      uStack_380 = 1;
                      uStack_5a8 = uStack_5b0;
                      iVar15 = 0;
                      if (iVar22 != 0) {
                        iVar15 = (int)(uVar1 - 0x4c) / iVar22;
                      }
                      recovered_10001d98(text,0xc0,(long)acStack_5a0);
                      iVar15 = iStack_418 + iVar15;
                      uVar18 = strlen(text);
                      iVar22 = iVar15;
                      if ((int)uVar18 <= iVar15) {
                        iVar22 = (int)uVar18;
                      }
                      iVar3 = 0;
                      if (-1 < iVar15) {
                        iVar3 = iVar22;
                      }
                      uStack_420 = (ulong)iVar3;
                    }
                    else {
                      auVar24 = recovered_10002a34((long)&iStack_928);
                      auVar25 = recovered_10002a78((long)&iStack_928);
                      iVar22 = (int)uStack_388;
                      auVar26 = recovered_10002b3c((long)&iStack_928);
                      bVar9 = recovered_10002840(uVar1,uVar2,PF_PART8(auVar26, 0),PF_PART8(auVar26, 8));
                      if (bVar9) {
                        uVar13 = 1;
                        recovered_10002b78((long)&iStack_928,1);
                        if ((int)uStack_388 == iVar22) goto LAB_10000ac4;
                      }
                      else {
                        auVar26 = recovered_10002b90((long)&iStack_928);
                        bVar9 = recovered_10002840(uVar1,uVar2,PF_PART8(auVar26, 0),PF_PART8(auVar26, 8));
                        if (bVar9) {
                          recovered_10002b78((long)&iStack_928,0);
                          if ((int)uStack_388 == iVar22) goto LAB_10000ac4;
                          uVar13 = 1;
                        }
                        else {
                          uStack_950 = PF_PART8(auVar24, 0);
                          uStack_948 = PF_PART8(auVar24, 8);
                          bVar9 = recovered_10002840(uVar1,uVar2,uStack_950,uStack_948);
                          if (!bVar9) {
LAB_10000ac4:
                            uVar18 = recovered_100028a0((long)&iStack_928,(ulong)uVar1,(ulong)uVar2,
                                                        0,0);
                            if ((int)uVar18 == 0) {
                              auVar24 = recovered_100029f4((long)&iStack_928);
                              bVar9 = recovered_10002840(uVar1,uVar2,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8));
                              if (!bVar9) goto LAB_10000954;
                            }
                            uVar13 = 1;
                            uStack_37d = CONCAT11(1,(char)uStack_37d);
                          }
                          else {
                            bVar9 = recovered_10002840(uVar1,uVar2,PF_PART8(auVar25, 0),PF_PART8(auVar25, 8));
                            if (!bVar9) {
                              uVar13 = recovered_10002ca4((long)&iStack_928);
                              iVar22 = PF_PART4(auVar24, 12) - PF_PART4(auVar25, 12);
                              if (((int)uVar13 >= 1 && iVar22 != 0) &&
                                  ((int)uVar13 < 1 || -1 < iVar22)) {
                                iVar15 = 0;
                                if (iVar22 != 0) {
                                  iVar15 = (int)(uVar13 * ((uVar2 - PF_PART4(auVar24, 4)) +
                                                          PF_PART4(auVar25, 12) / -2)) / iVar22;
                                }
                                uStack_388 = CONCAT44(PF_PART4(uStack_388, 4),iVar15);
                                recovered_10002ccc((long)&iStack_928);
                              }
                              else {
                                uStack_388 = (ulong)PF_PART4(uStack_388, 4) << 0x20;
                              }
                            }
                            uVar13 = 1;
                            uStack_37d = CONCAT11(PF_PART1(uStack_37d, 1),1);
                            auVar24 = recovered_10002a78((long)&iStack_928);
                            iStack_378 = uVar2 - PF_PART4(auVar24, 4);
                          }
                        }
                      }
                    }
                  }
                  else {
LAB_10000954:
                    uVar13 = 0;
                  }
                  if ((char)uStack_37d == '\x01') {
                    auVar24 = recovered_10002a34((long)&iStack_928);
                    auVar26 = recovered_10002a78((long)&iStack_928);
                    uVar14 = recovered_10002ca4((long)&iStack_928);
                    iVar22 = PF_PART4(auVar24, 12) - PF_PART4(auVar26, 12);
                    if ((int)uVar14 < 1 || iVar22 < 1) {
                      uVar14 = 0;
                    }
                    else {
                      iVar3 = (int)uStack_388;
                      iVar15 = 0;
                      if (iVar22 != 0) {
                        iVar15 = (int)((uVar2 - (iStack_378 + PF_PART4(auVar24, 4))) * uVar14) / iVar22;
                      }
                      uStack_388 = CONCAT44(PF_PART4(uStack_388, 4),iVar15);
                      recovered_10002ccc((long)&iStack_928);
                      uVar14 = (uint)((int)uStack_388 != iVar3);
                    }
                    uVar13 = uVar13 | uVar14;
                  }
                  else if (PF_PART1(uStack_37d, 1) == '\x01') {
                    uVar18 = recovered_100028a0((long)&iStack_928,(ulong)uVar1,(ulong)uVar2,1,1);
                    uVar13 = uVar13 | (uint)uVar18;
                  }
                }
                bStack_37b = (byte)uVar23 & 1;
              }
              uVar12 = uVar12 | uVar13;
              if ((uVar7 >> 1 & 1) != 0) {
                uVar23 = 0;
                iVar22 = 0;
switchD_10001038_caseD_48:
                do {
                  do {
                    if ((iVar22 == 0x20) || (bVar9 = recovered_10001e14(0x2c), !bVar9))
                    goto LAB_100012e4;
                    uVar13 = UINT_8201082c;
                    if (uVar13 == 0) goto LAB_100012e4;
                    uVar13 = (*(code *)(ulong)uVar13)();
                    uVar17 = uStack_420;
                    uVar18 = uStack_5b0;
                    if (uVar13 == 0) goto LAB_100012e4;
                    iVar22 = iVar22 + 1;
                  } while ((uVar13 & 0x8000ffff) == 0x80000000);
                  uVar14 = uVar13 >> 8 & 0xff;
                  cVar19 = (char)uVar13;
                  if ((char)uStack_380 == '\x01') {
                    if ((uVar13 & 0x60000) == 0) {
                      if (0x5e < (uVar13 - 0x20 & 0xff)) {
                        if ((uVar14 == 0xe) || (uVar1 = uVar13 & 0xff, uVar1 == 0x7f || uVar1 == 8))
                        {
                          uVar18 = strlen(text);
                          if ((uStack_420 == 0) || (uVar18 == 0)) goto switchD_10001038_caseD_48;
                          memmove(acStack_4e1 + uStack_420,text + uStack_420,
                                             (uVar18 - uStack_420) + 1);
LAB_10000d88:
                          uStack_420 = uStack_420 - 1;
                        }
                        else {
                          bVar8 = PF_PART1(uStack_380, 1);
                          if ((uVar14 == 0x1c || uVar1 == 0xd) || uVar1 == 10) {
                            if (acStack_4e1[1] == '\0') {
                              recovered_10002348((long)&iStack_928,((uintptr_t)pf_module_state + 0x2d6U));
                            }
                            else {
                              uStack_380 = (ushort)PF_PART1(uStack_380, 1) << 8;
                              if (bVar8 == 1) {
                                recovered_10001d98(acStack_5a0,0xc0,(long)text);
                                uVar18 = recovered_10001f70((long)&iStack_928);
                                if ((uVar18 & 1) != 0) goto LAB_10000d90;
                              }
                              else {
                                if (puStack_5c8 == (undefined1 *)0x0) {
                                  pcVar20 = str_10003804;
                                }
                                else {
                                  memset(&uStack_74,0,0xc);
                                  bVar9 = recovered_10002360(text,&uStack_370);
                                  uVar13 = uStack_370;
                                  if (bVar9) {
                                    bVar9 = recovered_10001e14(200);
                                    if (bVar9) {
                                      uVar14 = UINT_820108c8;
                                      if (uVar14 == 0) {
LAB_1000109c:
                                        uVar13 = 0;
                                      }
                                      else {
                                        uVar13 = (*(code *)(ulong)uVar14)
                                                           (uVar13,(char *)auStack_36c,&uStack_74);
                                      }
                                    }
                                    else {
                                      bVar9 = recovered_10001e14(0x34);
                                      uVar13 = 0;
                                      if (bVar9) {
                                        uVar13 = UINT_82010834;
                                        if (uVar13 == 0) goto LAB_1000109c;
                                        uVar13 = (*(code *)(ulong)uVar13)
                                                           ((char *)auStack_36c,&uStack_74);
                                      }
                                    }
                                    if ((uVar13 != 0) && (uStack_74 != 0)) {
                                      uStack_5b8 = 0;
                                      uVar18 = 1;
                                      pbVar21 = (byte *)(ulong)uStack_74;
                                      while( true ) {
                                        if (((ulong)uStack_70 <= uVar18 - 1) ||
                                           (uStack_5c0 <= uStack_5b8 + 1)) break;
                                        bVar8 = *pbVar21;
                                        if (bVar8 == 0xd) {
                                          if ((uStack_70 <= uVar18) || (pbVar21[1] != 10)) {
                                            bVar8 = 10;
                                            goto LAB_10001124;
                                          }
                                        }
                                        else {
                                          if ((1 < bVar8 - 9) && (0x5e < bVar8 - 0x20)) {
                                            if (bVar8 == 0) goto LAB_10001130;
                                            bVar8 = 0x3f;
                                          }
LAB_10001124:
                                          puStack_5c8[uStack_5b8] = bVar8;
                                          uStack_5b8 = uStack_5b8 + 1;
                                        }
LAB_10001130:
                                        uVar18 = uVar18 + 1;
                                        pbVar21 = pbVar21 + 1;
                                      }
                                      puStack_5c8[uStack_5b8] = 0;
                                      uStack_5b0 = 0;
                                      uStack_5a8 = 0;
                                      uStack_388 = 0;
                                      uStack_37e = 0;
                                      recovered_10001d98(acStack_5a0,0xc0,(long)text);
                                      pf_varargs_10003544_1
                                                ((char *)&lStack_f4,0x80,str_10003820,
                                                 (ulonglong)acStack_5a0);
                                      recovered_10002348((long)&iStack_928,(long)&lStack_f4);
                                      if (uStack_70 < uStack_5c0) goto LAB_10000d90;
                                      pcVar20 = str_1000382a;
                                      goto LAB_10000fb8;
                                    }
                                  }
                                  pcVar20 = (char *)&lStack_f4;
                                  pf_varargs_10003544_1
                                            ((char *)&lStack_f4,0x80,str_10003810,(ulonglong)text);
                                }
                                recovered_10002348((long)&iStack_928,(long)pcVar20);
                              }
                            }
                            goto switchD_10001038_caseD_48;
                          }
                          if ((uVar13 & 0xff) == 0x1b || uVar14 == 1) {
                            uStack_380 = (ushort)PF_PART1(uStack_380, 1) << 8;
                            pcVar20 = str_100037e3;
LAB_10000fb8:
                            recovered_10002348((long)&iStack_928,(long)pcVar20);
                          }
                          else {
                            switch((uintptr_t)(uVar14)) {
                            case 0x47:
                              uStack_420 = 0;
                              break;
                            default:
                              goto switchD_10001038_caseD_48;
                            case 0x4b:
                              if (uStack_420 != 0) goto LAB_10000d88;
                              goto switchD_10001038_caseD_48;
                            case 0x4d:
                              uVar18 = strlen(text);
                              if (uVar17 < uVar18) goto LAB_10000c9c;
                              goto switchD_10001038_caseD_48;
                            case 0x4f:
                              uStack_420 = strlen(text);
                            }
                          }
                        }
LAB_10000d90:
                        recovered_10001430((long)&iStack_928);
                        uVar23 = 1;
                        goto switchD_10001038_caseD_48;
                      }
                      uVar18 = strlen(text);
                      if (0xffffffffffffff3f < uVar18 - 0xbf) {
                        memmove(acStack_4e1 + uStack_420 + 2,text + uStack_420,
                                           (uVar18 - uStack_420) + 1);
                        text[uStack_420] = cVar19;
LAB_10000c9c:
                        uStack_420 = uStack_420 + 1;
                        goto LAB_10000d90;
                      }
                    }
                    goto switchD_10001038_caseD_48;
                  }
                  uVar17 = uStack_5a8;
                  if (uStack_5b8 <= uStack_5a8) {
                    uVar17 = uStack_5b8;
                  }
                  uVar4 = uStack_5b0;
                  if (uStack_5b8 <= uStack_5b0) {
                    uVar4 = uStack_5b8;
                  }
                  uVar5 = uVar4;
                  uVar6 = uVar17;
                  if (uVar4 <= uStack_5a8) {
                    uVar5 = uVar17;
                    uVar6 = uVar4;
                  }
                  uVar16 = 0;
                  if (uVar17 != uVar4) {
                    uVar16 = uVar6;
                  }
                  uVar6 = 0;
                  if (uVar17 != uVar4) {
                    uVar6 = uVar5;
                  }
                  if ((uVar13 >> 0x12 & 1) != 0) {
                    uVar1 = uVar13 & 0xff;
                    if (((uVar14 == 0x1e || uVar1 == 1) || (uVar1 == 0x61)) || (uVar1 == 0x41)) {
                      uStack_5a8 = 0;
                      uStack_5b0 = uStack_5b8;
                      recovered_10002348((long)&iStack_928,((uintptr_t)pf_module_state + 0x320U));
                      goto LAB_10000d30;
                    }
                    uVar1 = uVar13 & 0xff;
                    if (((uVar14 == 0x2e || uVar1 == 3) || (uVar1 == 99)) || (uVar1 == 0x43)) {
                      uVar18 = recovered_100021b0((long)&iStack_928);
                    }
                    else {
                      uVar1 = uVar13 & 0xff;
                      if (((uVar14 == 0x2f || uVar1 == 0x16) || (uVar1 == 0x76)) || (uVar1 == 0x56))
                      {
                        uVar18 = recovered_10002240((long)&iStack_928);
                      }
                      else {
                        uVar13 = uVar13 & 0xff;
                        if (((uVar14 != 0x2d && uVar13 != 0x18) && (uVar13 != 0x78)) &&
                           (uVar13 != 0x58)) goto switchD_10001038_caseD_48;
                        uVar18 = recovered_10002090((long)&iStack_928);
                      }
                    }
joined_r0x10000dc8:
                    if ((uVar18 & 1) != 0) goto LAB_10000d30;
                    goto switchD_10001038_caseD_48;
                  }
                } while ((uVar13 >> 0x11 & 1) != 0);
                if ((uVar13 - 0x20 & 0xff) < 0x5f) {
LAB_10000cfc:
                  recovered_10002d68((long)&iStack_928,cVar19);
                  uVar18 = extraout_x0;
                  goto joined_r0x10000dc8;
                }
                if ((uVar13 & 0xff) == 9) {
                  uVar18 = recovered_10002720((long)&iStack_928,&DAT_1000384d,4);
                  goto joined_r0x10000dc8;
                }
                if ((uVar14 == 0xe) || ((uVar13 & 0xff) == 0x7f || (uVar13 & 0xff) == 8)) {
                  recovered_10002e3c((long)&iStack_928);
                  if ((extraout_x0_00 & 1) == 0) {
                    if ((puStack_5c8 != (undefined1 *)0x0) && (uStack_5b0 != 0)) {
                      memmove(puStack_5c8 + uStack_5b0 + -1,puStack_5c8 + uStack_5b0,
                                         (uStack_5b8 - uStack_5b0) + 1);
                      uStack_5b0 = uStack_5b0 - 1;
LAB_10000e58:
                      uStack_5b8 = uStack_5b8 - 1;
                      uStack_37e = 1;
                      uStack_5a8 = uStack_5b0;
                      goto LAB_10000d30;
                    }
                    goto switchD_10001038_caseD_48;
                  }
                }
                else {
                  if (uVar14 == 0x1c) {
LAB_10000fd0:
                    cVar19 = '\n';
                    goto LAB_10000cfc;
                  }
                  if (uVar14 == 0x53) {
                    recovered_10002e3c((long)&iStack_928);
                    if ((extraout_x0_01 & 1) != 0) goto LAB_10000d30;
                    if ((puStack_5c8 != (undefined1 *)0x0) &&
                       (uStack_5b0 <= uStack_5b8 && uStack_5b8 - uStack_5b0 != 0)) {
                      memmove(puStack_5c8 + uStack_5b0,puStack_5c8 + uStack_5b0 + 1,
                                         uStack_5b8 - uStack_5b0);
                      goto LAB_10000e58;
                    }
                    goto switchD_10001038_caseD_48;
                  }
                  if ((uVar13 & 0xff) == 0xd || (uVar13 & 0xff) == 10) goto LAB_10000fd0;
                  switch((uintptr_t)(uVar14)) {
                  case 0x47:
                    uStack_5b0 = recovered_10002698((long)&iStack_928);
                    break;
                  case 0x48:
                    iVar15 = 1;
                    goto LAB_100012a4;
                  case 0x49:
                    iVar15 = recovered_10002c64((long)&iStack_928);
                    iVar15 = (int)uStack_388 - iVar15;
                    goto LAB_10001270;
                  default:
                    goto switchD_10001038_caseD_48;
                  case 0x4b:
                    if (((uVar13 >> 0x10 & 1) != 0) || (uVar17 == uVar4)) {
                      if (uStack_5b0 == 0) goto switchD_10001038_caseD_48;
                      uVar16 = uStack_5b0 - 1;
                    }
LAB_100012c4:
                    bVar9 = true;
                    uStack_5b0 = uVar16;
                    goto LAB_100012cc;
                  case 0x4d:
                    if (((uVar13 >> 0x10 & 1) == 0) && (uVar17 != uVar4)) {
                      bVar9 = true;
                      uStack_5b0 = uVar6;
                      goto LAB_100012cc;
                    }
                    if (uStack_5b0 < uStack_5b8) {
                      uVar16 = uStack_5b0 + 1;
                      goto LAB_100012c4;
                    }
                    goto switchD_10001038_caseD_48;
                  case 0x4f:
                    uVar17 = recovered_10002698((long)&iStack_928);
                    uStack_5b0 = recovered_100026dc((long)&iStack_928,uVar17);
                    break;
                  case 0x50:
                    iVar15 = 0;
LAB_100012a4:
                    recovered_10002d90((long)&iStack_928,iVar15);
                    break;
                  case 0x51:
                    iVar15 = recovered_10002c64((long)&iStack_928);
                    iVar15 = (int)uStack_388 + iVar15;
LAB_10001270:
                    uStack_388 = CONCAT44(PF_PART4(uStack_388, 4),iVar15);
                    recovered_10002ccc((long)&iStack_928);
                    goto LAB_10000d30;
                  }
                  bVar9 = uStack_5b0 != uVar18;
LAB_100012cc:
                  if (((uVar13 >> 0x10 & 1) != 0) || (!bVar9)) {
                    if (!bVar9) goto switchD_10001038_caseD_48;
                  }
                  else {
                    uStack_5a8 = uStack_5b0;
                  }
                }
LAB_10000d30:
                recovered_100014a8((long)&iStack_928);
                uVar23 = 1;
                goto switchD_10001038_caseD_48;
              }
            }
            goto LAB_100012e8;
          }
        }
        if (iStack_928 != 0) {
          terror_ui_window_close(&iStack_928);
        }
        if (puStack_5c8 == (undefined1 *)0x0) {
          return 0;
        }
        recovered_10001dd0(puStack_5c8);
        return 0;
      }
      terror_ui_window_close(&iStack_928);
    }
    recovered_10001dd0(puStack_5c8);
    puStack_5c8 = (undefined1 *)0x0;
  }
  bVar10 = recovered_10001e14(0x28);
  if (bVar10) {
    uVar11 = UINT_82010828;
    if (uVar11 != 0) {
      (*(code *)(ulong)uVar11)(str_100036d4);
    }
  }
  return 1;
LAB_100012e4:
  uVar12 = uVar23 | uVar12;
LAB_100012e8:
  if ((char)uStack_380 == '\x01') {
    bVar9 = recovered_10001430((long)&iStack_928);
  }
  else {
    bVar9 = recovered_100014a8((long)&iStack_928);
  }
  uVar23 = uStack_390 >> 0xc & 1;
  if ((uVar7 & 2) == 0) {
    uVar23 = 1;
  }
  if (bVar10 || (uVar23 != uVar11 || (bVar9 != false || (uVar12 & 1) != 0))) {
    recovered_1000156c((long)&iStack_928);
    terror_ui_window_present(&iStack_928,str_100036f9,pvStack_5d8,uStack_924,uStack_920,uStack_91c,
                       0xf6f7f6);
  }
  uStack_390 = uStack_390 + 1;
  if (uVar23 == uVar11 && (bVar9 == false && (uVar12 & 1) == 0)) {
    uVar11 = 0x14;
    if ((uVar7 & 2) != 0) {
      uVar11 = 5;
    }
    terror_ui_yield_frames(uVar11);
  }
  bVar9 = recovered_10001e14(0x9c);
  bVar10 = false;
  uVar11 = uVar23;
  if (bVar9) {
    bVar10 = false;
    uVar7 = UINT_8201089c;
    if (uVar7 != 0) {
      (*(code *)(ulong)uVar7)();
      bVar10 = false;
    }
  }
  goto LAB_1000071c;
}

#undef DAT_100036a0
#undef DAT_1000374b
#undef DAT_1000374f
#undef DAT_1000384d
#undef UINT_8201082c
#undef UINT_82010834
#undef UINT_8201089c
#undef UINT_820108c8
#undef str_100036d4
#undef str_100036f9
#undef str_10003721
#undef str_1000373c
#undef str_100037e3
#undef str_10003804
#undef str_10003810
#undef str_10003820
#undef str_1000382a
#undef uStack_950
#undef uStack_948
#undef iStack_928
#undef uStack_924
#undef uStack_920
#undef uStack_91c
#undef pvStack_8f8
#undef pvStack_5d8
#undef uStack_5d0
#undef puStack_5c8
#undef uStack_5c0
#undef uStack_5b8
#undef uStack_5b0
#undef uStack_5a8
#undef acStack_5a0
#undef acStack_4e1
#undef uStack_420
#undef iStack_418
#undef acStack_414
#undef uStack_394
#undef uStack_390
#undef iStack_38c
#undef uStack_388
#undef uStack_380
#undef uStack_37e
#undef uStack_37d
#undef bStack_37b
#undef iStack_378
#undef cStack_374
#undef uStack_370
#undef auStack_36c
#undef uStack_35c
#undef uStack_358
#undef uStack_348
#undef iStack_33c
#undef iStack_338
#undef iStack_334
#undef uStack_330
#undef lStack_f4
#undef iStack_e8
#undef iStack_e4
#undef uStack_74
#undef uStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001430
 */

bool recovered_10001430(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint128 auVar5;

  if (param_1 == 0) {
    return false;
  }
  auVar5 = recovered_1000286c(param_1);
  iVar4 = *(int *)(param_1 + 0x358);
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
  iVar1 = *(int *)(param_1 + 0x510);
  iVar2 = *(int *)(param_1 + 0x508);
  iVar4 = iVar2;
  if (iVar1 <= iVar2) {
    iVar4 = iVar1;
    if (iVar2 < iVar1 + iVar3) goto LAB_10001488;
    iVar4 = (iVar2 - iVar3) + 1;
  }
  *(int *)(param_1 + 0x510) = iVar4;
LAB_10001488:
  if (iVar4 < 0) {
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x510) = 0;
  }
  return iVar1 != iVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014a8
 */

bool recovered_100014a8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
  iVar1 = *(int *)(param_1 + 0x5a0);
  iVar2 = *(int *)(param_1 + 0x5a4);
  iVar4 = recovered_10002eac(param_1,*(ulong *)(param_1 + 0x378));
  iVar6 = recovered_10002e78(param_1);
  iVar7 = recovered_10002c64(param_1);
  iVar5 = recovered_10002ef0(param_1);
  if (iVar4 < iVar1) {
LAB_1000150c:
    *(int *)(param_1 + 0x5a0) = iVar4;
  }
  else if (iVar7 + iVar1 <= iVar4) {
    iVar4 = (iVar4 - iVar7) + 1;
    goto LAB_1000150c;
  }
  if (iVar2 <= iVar6) {
    if (iVar6 < iVar5 + iVar2) goto LAB_10001530;
    iVar6 = (iVar6 - iVar5) + 1;
  }
  *(int *)(param_1 + 0x5a4) = iVar6;
LAB_10001530:
  recovered_10002ccc(param_1);
  if (*(int *)(param_1 + 0x5a0) == iVar1) {
    bVar3 = *(int *)(param_1 + 0x5a4) != iVar2;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


#undef DAT_1000374b
#define DAT_1000374b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22bU)))
#undef DAT_10003857
#define DAT_10003857 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x337U)))
#undef DAT_1000385a
#define DAT_1000385a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x33aU)))
#undef str_1000385f
#define str_1000385f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x33fU)))
#define uStack_128 (*(uint *)(frame + 24))
#define uStack_108 (*(ulong *)(frame + 56))
#define uStack_100 (*(ulong *)(frame + 64))
#define acStack_f8 (*(char (*)[152])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000156c
 */

void recovered_1000156c(long param_1)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  char *vararg0;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint128 auVar24;
  uint128 auVar25;

  if (param_1 == 0) {
    uVar16 = 0x20800000320;
  }
  else {
    iVar7 = 800;
    if (*(int *)(param_1 + 4) != 0) {
      iVar7 = *(int *)(param_1 + 4);
    }
    iVar9 = 0x208;
    if (*(int *)(param_1 + 8) != 0) {
      iVar9 = *(int *)(param_1 + 8);
    }
    uVar16 = CONCAT44(iVar9,iVar7);
  }
  recovered_10002f28(param_1,0,uVar16,0xf6f7f6);
  auVar24 = recovered_1000286c(param_1);
  uVar15 = PF_PART8(auVar24, 8);
  uVar14 = PF_PART8(auVar24, 0);
  lVar1 = 0x448;
  if (*(char *)(param_1 + 0x5a8) == '\0') {
    lVar1 = 0x388;
  }
  iVar7 = *(int *)(param_1 + 0x358);
  uVar20 = 800;
  if (*(uint *)(param_1 + 4) != 0) {
    uVar20 = *(uint *)(param_1 + 4);
  }
  recovered_10002f28(param_1,0,(ulong)uVar20 | 0x3a00000000,0xf0ede8);
  uVar20 = 800;
  if (*(uint *)(param_1 + 4) != 0) {
    uVar20 = *(uint *)(param_1 + 4);
  }
  recovered_10002f28(param_1,0x3900000000,(ulong)uVar20 | 0x100000000,0xa49d94);
  recovered_100030d0(param_1,0xc,0x12,((uintptr_t)pf_module_state + 0x332U),8,0x464038);
  uVar20 = 0xffffff;
  if (*(char *)(param_1 + 0x5a8) == '\0') {
    uVar20 = 0xf9f8f6;
  }
  recovered_10002f28(param_1,uVar14,uVar15,uVar20);
  uVar13 = 0xc46d27;
  if (*(char *)(param_1 + 0x5a8) == '\0') {
    uVar13 = 0x9c968e;
  }
  recovered_10003110(param_1,uVar14,uVar15,uVar13);
  uVar13 = strlen((char *)(param_1 + lVar1));
  iVar9 = PF_PART4(auVar24, 0);
  if (*(int *)(param_1 + 0x510) < (int)uVar13) {
    if (iVar7 < 1) {
      iVar7 = 6;
    }
    uVar20 = 0;
    if (iVar7 != 0) {
      uVar20 = (PF_PART4(auVar24, 8) + -8) / iVar7;
    }
    if ((int)uVar20 < 2) {
      uVar20 = 1;
    }
    iVar7 = *(int *)(param_1 + 0x35c);
    if (iVar7 < 1) {
      iVar7 = 10;
    }
    recovered_100030d0(param_1,(ulong)(iVar9 + 4),(PF_PART4(auVar24, 12) - iVar7) / 2 + PF_PART4(auVar24, 4),
                       (long)((char *)(param_1 + lVar1) + *(int *)(param_1 + 0x510)),uVar20,0x26221c
                      );
  }
  if ((*(char *)(param_1 + 0x5a8) == '\x01') && ((*(byte *)(param_1 + 0x599) >> 4 & 1) == 0)) {
    iVar7 = *(int *)(param_1 + 0x358);
    if (iVar7 < 1) {
      iVar7 = 6;
    }
    iVar7 = iVar7 * (*(int *)(param_1 + 0x508) - *(int *)(param_1 + 0x510));
    if ((-1 < iVar7) && (uVar20 = iVar9 + iVar7 + 4, (int)uVar20 < PF_PART4(auVar24, 8) + iVar9 + -3)) {
      recovered_10002f28(param_1,(uVar14 & 0xffffffff00000000 | (ulong)uVar20) + 0x400000000,
                         (uVar15 & 0xffffffff00000000) - 0x7fffffffe,0xaa5b22);
    }
  }
  auVar24 = recovered_10002be8(param_1);
  uVar15 = PF_PART8(auVar24, 8);
  uVar14 = PF_PART8(auVar24, 0);
  auVar25 = recovered_100029f4(param_1);
  iVar7 = PF_PART4(auVar25, 0);
  iVar23 = PF_PART4(auVar24, 0);
  uVar20 = (iVar7 - iVar23) - 0x18;
  uVar11 = recovered_10002c64(param_1);
  uVar8 = recovered_10002ef0(param_1);
  iVar9 = recovered_10002c2c(param_1);
  iVar10 = recovered_10002eac(param_1,*(ulong *)(param_1 + 0x378));
  iVar12 = recovered_10002e78(param_1);
  uStack_108 = 0;
  uStack_100 = 0;
  uVar16 = recovered_10002464(param_1,&uStack_100,&uStack_108);
  recovered_10002f28(param_1,uVar14,uVar15,0xffffff);
  recovered_10003110(param_1,uVar14,uVar15,0x837c72);
  if ((int)uVar20 < 1) {
    uVar14 = (uVar14 & 0xffffffff00000000) + 0x100000000;
  }
  else {
    uVar14 = (uVar14 & 0xffffffff00000000) + 0x100000000;
    recovered_10002f28(param_1,uVar14 | iVar23 + 0x17,
                       (uVar15 & 0xffffffff00000000 | (ulong)uVar20) - 0x200000000,0xeff1ee);
  }
  recovered_10002f28(param_1,uVar14 | iVar7 - 1,(uVar15 & 0xffffffff00000000) - 0x1ffffffff,0xc9ccc6
                    );
  for (uVar20 = 0; (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) != uVar20; uVar20 = uVar20 + 1) {
    iVar21 = *(int *)(param_1 + 0x5a0);
    uVar17 = *(int *)(param_1 + 0x35c) + 3;
    if (*(int *)(param_1 + 0x35c) < 1) {
      uVar17 = 0xd;
    }
    iVar22 = uVar20 + iVar21;
    if (iVar9 <= iVar22) break;
    iVar4 = PF_PART4(auVar25, 4) + uVar17 * uVar20;
    if ((iVar22 == iVar10) && ((*(byte *)(param_1 + 0x5a8) & 1) == 0)) {
      uStack_128 = uStack_128 & 0xff000000 | 0xfffbf7;
      recovered_10002f28(param_1,PF_PART8(auVar25, 0) & 0xffffffff | (ulong)(iVar4 - 1) << 0x20,
                         PF_PART8(auVar25, 8) & 0xffffffff | (ulong)uVar17 << 0x20,uStack_128);
    }
    pf_varargs_10003544_1(acStack_f8,0x10,&DAT_10003857,(ulong)(uVar20 + iVar21 + 1));
    recovered_100030d0(param_1,(ulong)(iVar23 + 0x1c),iVar4,(long)acStack_f8,5,0x767169);
    uVar14 = recovered_10002d10(param_1,iVar22);
    uVar15 = recovered_100026dc(param_1,uVar14);
    if ((int)uVar16 != 0) {
      uVar13 = uStack_100;
      if (uStack_100 <= uVar14) {
        uVar13 = uVar14;
      }
      uVar2 = uStack_108;
      if (uVar15 <= uStack_108) {
        uVar2 = uVar15;
      }
      if (uVar15 < *(ulong *)(param_1 + 0x370)) {
        bVar6 = *(char *)(*(long *)(param_1 + 0x360) + uVar15) != '\n';
        uVar17 = (uint)(((uStack_100 <= uVar15 && !bVar6) && uVar15 <= uStack_108) &&
                       ((uVar15 < uStack_100 || bVar6) || uStack_108 != uVar15));
      }
      else {
        uVar17 = 0;
      }
      if ((uVar13 < uVar2) || (uVar17 != 0)) {
        iVar3 = *(int *)(param_1 + 0x5a4);
        iVar22 = (int)uVar13 - (int)uVar14;
        iVar19 = (int)uVar2 - (int)uVar14;
        iVar21 = uVar17 + iVar19;
        if ((iVar19 <= iVar22 & uVar17) != 0) {
          iVar21 = iVar22 + 1;
        }
        if (iVar22 <= iVar3) {
          iVar22 = iVar3;
        }
        if ((int)(iVar3 + uVar8) <= iVar21) {
          iVar21 = iVar3 + uVar8;
        }
        if (iVar21 - iVar22 != 0 && iVar22 <= iVar21) {
          iVar19 = *(int *)(param_1 + 0x358);
          if (iVar19 < 1) {
            iVar19 = 6;
          }
          iVar18 = *(int *)(param_1 + 0x35c) + 3;
          if (*(int *)(param_1 + 0x35c) < 1) {
            iVar18 = 0xd;
          }
          recovered_10002f28(param_1,CONCAT44(iVar4 + -1,iVar7 + iVar19 * (iVar22 - iVar3)),
                             CONCAT44(iVar18,iVar19 * (iVar21 - iVar22)),0xfbdcc1);
        }
      }
    }
    if ((ulong)(long)*(int *)(param_1 + 0x5a4) < uVar15 - uVar14) {
      lVar1 = uVar14 + (long)*(int *)(param_1 + 0x5a4);
      uVar5 = (int)uVar15 - (int)lVar1;
      uVar17 = uVar8;
      if ((int)uVar5 <= (int)uVar8) {
        uVar17 = uVar5;
      }
      recovered_100031b8(param_1,PF_PART8(auVar25, 0),iVar4,*(long *)(param_1 + 0x360) + lVar1,
                         (ulong)uVar17,0x1f1c18);
    }
  }
  if ((((*(byte *)(param_1 + 0x5a8) & 1) == 0) && ((*(byte *)(param_1 + 0x594) >> 1 & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x599) >> 4 & 1) == 0)) {
    iVar9 = *(int *)(param_1 + 0x5a0);
    if (iVar9 <= iVar10 && iVar10 < (int)(iVar9 + uVar11)) {
      iVar23 = *(int *)(param_1 + 0x5a4);
      if (iVar23 <= iVar12 && iVar12 <= (int)(iVar23 + uVar8)) {
        iVar21 = *(int *)(param_1 + 0x358);
        if (iVar21 < 1) {
          iVar21 = 6;
        }
        iVar4 = *(int *)(param_1 + 0x35c);
        iVar22 = iVar4 + 3;
        if (iVar4 < 1) {
          iVar22 = 0xd;
        }
        uVar20 = iVar4 + 2;
        if (iVar4 < 1) {
          uVar20 = 0xc;
        }
        recovered_10002f28(param_1,CONCAT44(PF_PART4(auVar25, 4) + iVar22 * (iVar10 - iVar9) + -1,
                                            iVar7 + iVar21 * (iVar12 - iVar23)),
                           (ulong)uVar20 << 0x20 | 2,0xaa5b22);
      }
    }
  }
  auVar24 = recovered_10002a34(param_1);
  auVar25 = recovered_10002a78(param_1);
  recovered_10002f28(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0xe4e4e4);
  recovered_10003110(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0xacacac);
  if (0 < PF_PART4(auVar25, 12)) {
    recovered_10002f28(param_1,(PF_PART8(auVar25, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar25, 0) + 1)) +
                               0x100000000,
                       (PF_PART8(auVar25, 8) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar25, 8) - 2)) -
                       0x200000000,0xbebebe);
    recovered_10003110(param_1,PF_PART8(auVar25, 0),PF_PART8(auVar25, 8),0x747474);
  }
  auVar24 = recovered_10002b3c(param_1);
  recovered_10002f28(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0xeeeeee);
  auVar24 = recovered_10002b3c(param_1);
  recovered_10003110(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0x969696);
  auVar24 = recovered_10002b3c(param_1);
  recovered_100032d8(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),1,0x464646);
  auVar24 = recovered_10002b90(param_1);
  recovered_10002f28(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0xeeeeee);
  auVar24 = recovered_10002b90(param_1);
  recovered_10003110(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0x969696);
  auVar24 = recovered_10002b90(param_1);
  recovered_100032d8(param_1,PF_PART8(auVar24, 0),PF_PART8(auVar24, 8),0,0x464646);
  uVar20 = 0x1f0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar20 = *(int *)(param_1 + 8) - 0x18;
  }
  uVar8 = 800;
  if (*(uint *)(param_1 + 4) != 0) {
    uVar8 = *(uint *)(param_1 + 4);
  }
  recovered_10002f28(param_1,(ulong)uVar20 << 0x20,(ulong)uVar8 | 0x1800000000,0xe2e5e0);
  recovered_10002f28(param_1,(ulong)uVar20 << 0x20,(ulong)uVar8 | 0x100000000,0x959991);
  vararg0 = str_1000385f;
  if (*(char *)(param_1 + 0x5aa) == '\0') {
    vararg0 = &DAT_1000374b;
  }
  pf_varargs_10003544_2(acStack_f8,0x90,&DAT_1000385a,(ulonglong)vararg0,param_1 + 0x514);
  iVar7 = (0x18 - *(int *)(param_1 + 0x35c)) / 2;
  if (*(int *)(param_1 + 0x35c) < 1) {
    iVar7 = 7;
  }
  iVar9 = *(int *)(param_1 + 0x358);
  if (iVar9 < 1) {
    iVar9 = 6;
  }
  uVar11 = 0;
  if (iVar9 != 0) {
    uVar11 = (int)(uVar8 - 0x14) / iVar9;
  }
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  recovered_100030d0(param_1,10,iVar7 + uVar20,(long)acStack_f8,uVar11,0x30332b);
  return;
}

#undef DAT_1000374b
#undef DAT_10003857
#undef DAT_1000385a
#undef str_1000385f
#undef uStack_128
#undef uStack_108
#undef uStack_100
#undef acStack_f8

#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d50
 */

void * recovered_10001d50(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10001e14(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef UINT_8201084c

#undef DAT_1000374c
#define DAT_1000374c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d98
 */

char * recovered_10001d98(char *param_1,ulong param_2,long param_3)

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
    uVar1 = pf_varargs_10003544_1(param_1,param_2,&DAT_1000374c,param_3);
    pcVar2 = (char *)(ulong)uVar1;
  }
  return pcVar2;
}

#undef DAT_1000374c

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd0
 */

void recovered_10001dd0(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10001e14(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

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
 * Address: 0x10001e14
 */

bool recovered_10001e14(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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

#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e60
 */

uint recovered_10001e60(char *param_1,uint param_2,uint param_3,void *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10001e14(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,1,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010978

#undef PTR_FUN_10008010
#define PTR_FUN_10008010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x4af0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ecc
 */

void recovered_10001ecc(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if ((void *)*param_1 != (void *)0x0) {
    recovered_10001dd0((void *)*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x20U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((void *)memset))(param_1,0,0x18);
  return;
}

#undef PTR_FUN_10008010

#undef str_10003751
#define str_10003751 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x231U)))
#undef str_1000375e
#define str_1000375e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f04
 */

bool recovered_10001f04(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  uint128 auVar7;

  recovered_10001d98((char *)(param_1 + 0x448),0xc0,param_1 + 0x388);
  uVar5 = strlen((char *)(param_1 + 0x448));
  *(ulong *)(param_1 + 0x508) = uVar5;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x5a8) = 1;
  *(char *)(param_1 + 0x5a9) = (char)param_2;
  pcVar1 = str_10003751;
  if (param_2 == 0) {
    pcVar1 = str_1000375e;
  }
  recovered_10002348(param_1,(long)pcVar1);
  if (param_1 == 0) {
    return false;
  }
  auVar7 = recovered_1000286c(param_1);
  iVar6 = *(int *)(param_1 + 0x358);
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
  iVar2 = *(int *)(param_1 + 0x510);
  iVar3 = *(int *)(param_1 + 0x508);
  iVar6 = iVar3;
  if (iVar2 <= iVar3) {
    iVar6 = iVar2;
    if (iVar3 < iVar2 + iVar4) goto LAB_10001488;
    iVar6 = (iVar3 - iVar4) + 1;
  }
  *(int *)(param_1 + 0x510) = iVar6;
LAB_10001488:
  if (iVar6 < 0) {
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x510) = 0;
  }
  return iVar2 != iVar6;
}

#undef str_10003751
#undef str_1000375e

#undef UINT_820108d0
#define UINT_820108d0 (*(uint *)(0x820108d0U))
#undef str_10003768
#define str_10003768 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x248U)))
#undef str_10003774
#define str_10003774 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x254U)))
#undef str_10003784
#define str_10003784 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x264U)))
#define local_194 (*(uint *)(frame + 28))
#define acStack_190 (*(char (*)[192])(frame + 32))
#define acStack_d0 (*(char (*)[128])(frame + 224))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f70
 */

undefined8 recovered_10001f70(long param_1)

{
  unsigned char frame[464] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  void *data;

  if ((*(long *)(param_1 + 0x360) == 0) || (*(char *)(param_1 + 0x388) == '\0')) {
    pcVar4 = str_10003768;
    goto LAB_1000206c;
  }
  pcVar4 = (char *)(param_1 + 0x388);
  bVar2 = recovered_10002360(pcVar4,&local_194);
  if (bVar2) {
    data = *(void **)(param_1 + 0x360);
    uVar3 = *(uint *)(param_1 + 0x370);
    bVar2 = recovered_10001e14(0xd0);
    if (bVar2) {
      uVar1 = UINT_820108d0;
      if (uVar1 != 0) {
        uVar3 = (*(code *)(ulong)uVar1)(local_194,acStack_190,data,uVar3);
joined_r0x10002030:
        if (uVar3 != 0) {
          *(undefined1 *)(param_1 + 0x5aa) = 0;
          pf_varargs_10003544_1(acStack_d0,0x80,str_10003784,(ulonglong)pcVar4);
          recovered_10002348(param_1,(long)acStack_d0);
          return 1;
        }
      }
    }
    else {
      bVar2 = recovered_10001e14(0x38);
      if (bVar2) {
        uVar1 = UINT_82010838;
        if (uVar1 != 0) {
          uVar3 = (*(code *)(ulong)uVar1)(acStack_190,data,uVar3);
          goto joined_r0x10002030;
        }
      }
    }
  }
  pf_varargs_10003544_1(acStack_d0,0x80,str_10003774,(ulonglong)pcVar4);
  pcVar4 = acStack_d0;
LAB_1000206c:
  recovered_10002348(param_1,(long)pcVar4);
  return 0;
}

#undef UINT_820108d0
#undef str_10003768
#undef str_10003774
#undef str_10003784
#undef local_194
#undef acStack_190
#undef acStack_d0

#define local_48 (*(ulong (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002090
 */

undefined8 recovered_10002090(long param_1)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;

  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x360) != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x380);
    uVar6 = *(ulong *)(param_1 + 0x370);
    uVar1 = uVar5;
    if (uVar6 <= uVar5) {
      uVar1 = uVar6;
    }
    uVar2 = *(ulong *)(param_1 + 0x378);
    if (uVar6 <= *(ulong *)(param_1 + 0x378)) {
      uVar2 = uVar6;
    }
    if (uVar1 == uVar2) {
      recovered_100021b0(param_1);
      recovered_10002614(param_1,local_48 + 2,local_48 + 1,local_48);
      if ((local_48[0] != local_48[2]) || (*(long *)(param_1 + 0x370) != 0)) {
        memmove((void *)(*(long *)(param_1 + 0x360) + local_48[2]),
                           (void *)(*(long *)(param_1 + 0x360) + local_48[0]),
                           (*(long *)(param_1 + 0x370) - local_48[0]) + 1);
        uVar1 = (local_48[2] - local_48[0]) + *(long *)(param_1 + 0x370);
        *(ulong *)(param_1 + 0x370) = uVar1;
        uVar5 = local_48[2];
        if (uVar1 <= local_48[2]) {
          uVar5 = uVar1;
        }
        *(ulong *)(param_1 + 0x378) = uVar5;
        *(ulong *)(param_1 + 0x380) = uVar5;
        *(undefined1 *)(param_1 + 0x5aa) = 1;
        recovered_10002348(param_1,((uintptr_t)pf_module_state + 0x27dU));
        return 1;
      }
    }
    else {
      uVar6 = uVar2;
      if (uVar2 <= uVar5) {
        uVar6 = uVar1;
        uVar1 = uVar2;
      }
      uVar3 = recovered_100024c4(param_1,uVar1,uVar6,((uintptr_t)pf_module_state + 0x26fU));
      if ((int)uVar3 != 0) {
        if ((((param_1 != 0) && (uVar1 < uVar6)) && (lVar4 = *(long *)(param_1 + 0x360), lVar4 != 0)
            ) && (uVar5 = *(ulong *)(param_1 + 0x370), uVar1 <= uVar5)) {
          uVar2 = uVar5;
          if (uVar6 <= uVar5) {
            uVar2 = uVar6;
          }
          if (uVar1 < uVar2) {
            memmove((void *)(lVar4 + uVar1),(void *)(lVar4 + uVar2),(uVar5 - uVar2) + 1);
            *(ulong *)(param_1 + 0x370) = (uVar1 - uVar2) + *(long *)(param_1 + 0x370);
            *(ulong *)(param_1 + 0x378) = uVar1;
            *(ulong *)(param_1 + 0x380) = uVar1;
            *(undefined1 *)(param_1 + 0x5aa) = 1;
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

#define auStack_440 (*(ulong (*)[128])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b0
 */

undefined8 recovered_100021b0(long param_1)

{
  unsigned char frame[1136] __attribute__((aligned(16))) = {0};

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
  if (*(long *)(param_1 + 0x360) == 0) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x380);
  uVar8 = *(ulong *)(param_1 + 0x370);
  uVar1 = uVar7;
  if (uVar8 <= uVar7) {
    uVar1 = uVar8;
  }
  uVar2 = *(ulong *)(param_1 + 0x378);
  if (uVar8 <= *(ulong *)(param_1 + 0x378)) {
    uVar2 = uVar8;
  }
  if (uVar1 == uVar2) {
    recovered_10002614(param_1,auStack_440 + 0x83,auStack_440 + 0x82,(ulong *)0x0);
    uVar6 = recovered_100024c4(param_1,0,0,((uintptr_t)pf_module_state + 0x2a3U));
    return uVar6;
  }
  uVar8 = uVar2;
  if (uVar2 <= uVar7) {
    uVar8 = uVar1;
    uVar1 = uVar2;
  }
  lVar9 = *(long *)(param_1 + 0x360);
  if ((lVar9 != 0) && (uVar7 = *(ulong *)(param_1 + 0x370), uVar1 <= uVar7)) {
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
    bVar4 = recovered_10001e14(0x180);
    if (bVar4) {
      uVar3 = UINT_82010980;
      if ((uVar3 != 0) && (iVar5 = (*(code *)(ulong)uVar3)(lVar9 + uVar1,uVar8), iVar5 != 0)) {
        recovered_10002348(param_1,((uintptr_t)pf_module_state + 0x292U));
        return 1;
      }
    }
    recovered_10002348(param_1,((uintptr_t)pf_module_state + 0x286U));
  }
  return 0;
}

#undef auStack_440

#undef UINT_82010988
#define UINT_82010988 (*(uint *)(0x82010988U))
#undef str_100037cf
#define str_100037cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2afU)))
#undef str_100037dc
#define str_100037dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002240
 */

undefined8 recovered_10002240(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  uint uVar3;
  char *outText;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;

  bVar2 = recovered_10001e14(0x188);
  uVar3 = (uint)bVar2;
  if (bVar2) {
    uVar3 = UINT_82010988;
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (*(code *)(ulong)uVar3)();
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x360) == 0) {
    return 0;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(param_1 + 0x368);
  if (uVar4 == 0) {
    return 0;
  }
  if (uVar4 <= uVar3) {
    uVar3 = (int)uVar4 - 1;
  }
  uVar3 = uVar3 + 1;
  outText = recovered_10001d50((ulong)uVar3);
  if (outText == (char *)0x0) {
    uVar5 = 0;
    pcVar6 = str_100037cf;
    goto LAB_10002334;
  }
  bVar2 = recovered_10001e14(0x184);
  if (bVar2) {
    uVar1 = UINT_82010984;
    if (((uVar1 == 0) || (uVar3 = (*(code *)(ulong)uVar1)(outText,uVar3), uVar3 == 0)) ||
       (uVar4 = recovered_10002720(param_1,outText,(ulong)uVar3), (uVar4 & 1) == 0))
    goto LAB_10002320;
    uVar5 = 1;
    pcVar6 = str_100037dc;
  }
  else {
    if (uVar3 != 0) {
      *outText = '\0';
    }
LAB_10002320:
    uVar5 = 0;
    pcVar6 = str_100037cf;
  }
  recovered_10001dd0(outText);
LAB_10002334:
  recovered_10002348(param_1,(long)pcVar6);
  return uVar5;
}

#undef UINT_82010988
#undef str_100037cf
#undef str_100037dc

#undef DAT_1000374c
#define DAT_1000374c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002348
 */

char * recovered_10002348(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *dst;
  uint uVar1;
  char *pcVar2;

  if (param_1 == 0) {
    return (char *)0x0;
  }
  dst = (char *)(param_1 + 0x514);
  pcVar2 = (char *)0x0;
  if (dst != (char *)0x0) {
    if (param_2 == 0) {
      *dst = '\0';
      return dst;
    }
    uVar1 = pf_varargs_10003544_1(dst,0x80,&DAT_1000374c,param_2);
    pcVar2 = (char *)(ulong)uVar1;
  }
  return pcVar2;
}

#undef DAT_1000374c

#undef DAT_1000378d
#define DAT_1000378d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002360
 */

bool recovered_10002360(char *param_1,uint *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;

  bVar1 = param_1 != (char *)0x0 && param_2 != (uint *)0x0;
  if (param_1 != (char *)0x0 && param_2 != (uint *)0x0) {
    *param_2 = 0xffffffff;
    recovered_10001d98((char *)(param_2 + 1),0xc0,(long)param_1);
    if ((*param_1 == '[') && (cVar3 = param_1[1], 0xf5 < (byte)(cVar3 - 0x3aU))) {
      uVar4 = 0;
      pcVar5 = param_1 + 4;
      while ((byte)(cVar3 - 0x30) < 10) {
        if (0xccccccc < uVar4) {
          return bVar1;
        }
        if ((uVar4 == 0xccccccc && 6 < (byte)(cVar3 - 0x30U)) &&
            (uVar4 != 0xccccccc || (byte)(cVar3 - 0x30U) != 7)) {
          return bVar1;
        }
        uVar4 = (uint)(byte)(cVar3 - 0x30) + uVar4 * 10;
        pcVar2 = pcVar5 + -2;
        pcVar5 = pcVar5 + 1;
        cVar3 = *pcVar2;
      }
      if ((cVar3 == ']') && (pcVar5[-2] == ':')) {
        if (pcVar5[-1] != ';') {
          pcVar5 = pcVar5 + -1;
        }
        *param_2 = uVar4;
        pcVar2 = &DAT_1000378d;
        if (*pcVar5 != '\0') {
          pcVar2 = pcVar5;
        }
        recovered_10001d98((char *)(param_2 + 1),0xc0,(long)pcVar2);
      }
    }
  }
  return bVar1;
}

#undef DAT_1000378d

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002464
 */

undefined8 recovered_10002464(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x380);
    uVar2 = *(ulong *)(param_1 + 0x370);
    uVar1 = uVar4;
    if (uVar2 <= uVar4) {
      uVar1 = uVar2;
    }
    uVar3 = *(ulong *)(param_1 + 0x378);
    if (uVar2 <= *(ulong *)(param_1 + 0x378)) {
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
 * Address: 0x100024c4
 */

undefined8 recovered_100024c4(long param_1,ulong param_2,ulong param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;

  lVar5 = *(long *)(param_1 + 0x360);
  if ((lVar5 != 0) && (uVar4 = *(ulong *)(param_1 + 0x370), param_2 <= uVar4)) {
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
    uVar1 = 0;
    if (param_2 <= uVar4) {
      uVar1 = uVar4 - param_2;
    }
    if (0xfffffffe < uVar1) {
      uVar1 = 0xffffffff;
    }
    bVar2 = recovered_10001e14(0x180);
    if (bVar2) {
      uVar3 = UINT_82010980;
      if ((uVar3 != 0) &&
         (uVar3 = (*(code *)(ulong)uVar3)((char *)(lVar5 + param_2),(uint)uVar1), uVar3 != 0)) {
        recovered_10002348(param_1,param_4);
        return 1;
      }
    }
    recovered_10002348(param_1,((uintptr_t)pf_module_state + 0x286U));
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002580
 */

undefined8 recovered_10002580(long param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  ulong uVar3;

  if ((((param_1 != 0) && (param_2 < param_3)) && (lVar2 = *(long *)(param_1 + 0x360), lVar2 != 0))
     && (uVar3 = *(ulong *)(param_1 + 0x370), param_2 <= uVar3)) {
    uVar1 = uVar3;
    if (param_3 <= uVar3) {
      uVar1 = param_3;
    }
    if (param_2 < uVar1) {
      memmove((void *)(lVar2 + param_2),(void *)(lVar2 + uVar1),(uVar3 - uVar1) + 1);
      *(ulong *)(param_1 + 0x370) = (param_2 - uVar1) + *(long *)(param_1 + 0x370);
      *(ulong *)(param_1 + 0x378) = param_2;
      *(ulong *)(param_1 + 0x380) = param_2;
      *(undefined1 *)(param_1 + 0x5aa) = 1;
      return 1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002614
 */

void recovered_10002614(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;

  uVar1 = recovered_10002698(param_1);
  uVar2 = recovered_100026dc(param_1,uVar1);
  uVar3 = uVar2;
  if ((uVar2 < *(ulong *)(param_1 + 0x370)) &&
     (*(char *)(*(long *)(param_1 + 0x360) + uVar2) == '\n')) {
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
 * Address: 0x10002698
 */

ulong recovered_10002698(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x360) == 0) {
      return 0;
    }
    uVar1 = *(ulong *)(param_1 + 0x378);
    if (*(ulong *)(param_1 + 0x370) <= *(ulong *)(param_1 + 0x378)) {
      uVar1 = *(ulong *)(param_1 + 0x370);
    }
    for (; (uVar1 != 0 && (*(char *)(*(long *)(param_1 + 0x360) + -1 + uVar1) != '\n'));
        uVar1 = uVar1 - 1) {
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026dc
 */

ulong recovered_100026dc(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x360) == 0) || (uVar1 = *(ulong *)(param_1 + 0x370), uVar1 < param_2))
    {
      uVar1 = 0;
    }
    else {
      for (; uVar1 != param_2; param_2 = param_2 + 1) {
        if (*(char *)(*(long *)(param_1 + 0x360) + param_2) == '\n') {
          return param_2;
        }
      }
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002720
 */

undefined8 recovered_10002720(long param_1,void *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;

  uVar7 = 0;
  if (((param_1 != 0) && (uVar7 = 0, param_2 != (void *)0x0)) &&
     (lVar8 = *(long *)(param_1 + 0x360), lVar8 != 0)) {
    uVar11 = *(ulong *)(param_1 + 0x380);
    uVar9 = *(ulong *)(param_1 + 0x370);
    uVar3 = uVar11;
    if (uVar9 <= uVar11) {
      uVar3 = uVar9;
    }
    uVar10 = *(ulong *)(param_1 + 0x378);
    uVar1 = uVar10;
    if (uVar9 <= uVar10) {
      uVar1 = uVar9;
    }
    uVar2 = uVar1;
    uVar5 = uVar3;
    if (uVar1 <= uVar11) {
      uVar2 = uVar3;
      uVar5 = uVar1;
    }
    bVar6 = uVar3 != uVar1;
    uVar3 = 0;
    if (bVar6) {
      uVar3 = uVar2;
    }
    uVar11 = 0;
    if (bVar6) {
      uVar11 = uVar5;
    }
    lVar4 = 0;
    if (bVar6) {
      lVar4 = uVar2 - uVar5;
    }
    if ((uVar9 + param_3) - lVar4 < *(ulong *)(param_1 + 0x368)) {
      if (lVar4 != 0) {
        memmove((void *)(lVar8 + uVar11),(void *)(lVar8 + uVar3),(uVar9 - uVar3) + 1);
        uVar9 = *(long *)(param_1 + 0x370) - lVar4;
        *(ulong *)(param_1 + 0x370) = uVar9;
        *(ulong *)(param_1 + 0x378) = uVar11;
        *(ulong *)(param_1 + 0x380) = uVar11;
        lVar8 = *(long *)(param_1 + 0x360);
        uVar10 = uVar11;
      }
      memmove((void *)((long)(lVar8 + uVar10) + param_3),(void *)(lVar8 + uVar10),
                         (uVar9 - uVar10) + 1);
      memcpy((void *)(*(long *)(param_1 + 0x360) + *(long *)(param_1 + 0x378)),param_2,
                         param_3);
      lVar8 = *(long *)(param_1 + 0x378) + param_3;
      *(long *)(param_1 + 0x378) = lVar8;
      *(ulong *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + param_3;
      *(long *)(param_1 + 0x380) = lVar8;
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0x5aa) = 1;
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002840
 */

bool recovered_10002840(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000286c
 */

uint128 recovered_1000286c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x100028a0
 */

ulong recovered_100028a0(long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint128 auVar13;

  iVar5 = (int)param_2;
  iVar6 = (int)param_3;
  lVar12 = *(long *)(param_1 + 0x378);
  lVar11 = *(long *)(param_1 + 0x380);
  auVar13 = recovered_100029f4(param_1);
  iVar10 = PF_PART4(auVar13, 0);
  iVar7 = PF_PART4(auVar13, 4);
  if (param_5 == 0) {
    bVar2 = recovered_10002840(iVar5,iVar6,PF_PART8(auVar13, 0),PF_PART8(auVar13, 8));
    if (!bVar2) {
      return (ulong)bVar2;
    }
  }
  else {
    iVar9 = PF_PART4(auVar13, 8) + iVar10 + -1;
    iVar8 = iVar5;
    if (iVar9 <= iVar5) {
      iVar8 = iVar9;
    }
    bVar2 = iVar10 <= iVar5;
    iVar5 = iVar10;
    if (bVar2) {
      iVar5 = iVar8;
    }
    iVar9 = PF_PART4(auVar13, 12) + iVar7 + -1;
    iVar8 = iVar6;
    if (iVar9 <= iVar6) {
      iVar8 = iVar9;
    }
    bVar2 = iVar7 <= iVar6;
    iVar6 = iVar7;
    if (bVar2) {
      iVar6 = iVar8;
    }
  }
  iVar8 = *(int *)(param_1 + 0x35c) + 3;
  if (*(int *)(param_1 + 0x35c) < 1) {
    iVar8 = 0xd;
  }
  iVar9 = *(int *)(param_1 + 0x358);
  if (iVar9 < 1) {
    iVar9 = 6;
  }
  uVar1 = 0;
  if (iVar9 != 0) {
    uVar1 = (iVar5 - iVar10) / iVar9;
  }
  iVar5 = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + *(int *)(param_1 + 0x5a4);
  iVar10 = 0;
  if (iVar8 != 0) {
    iVar10 = (iVar6 - iVar7) / iVar8;
  }
  uVar3 = recovered_10002d10(param_1,*(int *)(param_1 + 0x5a0) + iVar10);
  uVar4 = recovered_100026dc(param_1,uVar3);
  iVar6 = (int)uVar4 - (int)uVar3;
  if (iVar6 <= iVar5) {
    iVar5 = iVar6;
  }
  *(ulong *)(param_1 + 0x378) = uVar3 + (long)iVar5;
  *(undefined1 *)(param_1 + 0x5a8) = 0;
  if ((param_4 & 1) == 0) {
    *(ulong *)(param_1 + 0x380) = uVar3 + (long)iVar5;
  }
  recovered_100014a8(param_1);
  if (*(long *)(param_1 + 0x378) == lVar12) {
    uVar3 = (ulong)(*(long *)(param_1 + 0x380) != lVar11);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029f4
 */

uint128 recovered_100029f4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar1 = recovered_10002be8(param_1);
  PF_PART8(auVar2, 8) = (PF_PART8(auVar1, 8) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar1, 8) - 0x4b)) - 0xc00000000;
  PF_PART8(auVar2, 0) = (PF_PART8(auVar1, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar1, 0) + 0x41)) + 0x600000000;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a34
 */

uint128 recovered_10002a34(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar2 = recovered_10002be8(param_1);
  iVar1 = PF_PART4(auVar2, 12);
  if (iVar1 < 0x33) {
    iVar1 = 0x32;
  }
  PF_PART8(auVar3, 8) = (ulong)(iVar1 - 0x32) << 0x20 | 0xc;
  PF_PART8(auVar3, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar2, 0) + 5)) + 0x1500000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a78
 */

uint128 recovered_10002a78(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint128 auVar10;
  uint128 auVar11;

  auVar10 = recovered_10002a34(param_1);
  iVar4 = recovered_10002c2c(param_1);
  iVar5 = recovered_10002c64(param_1);
  uVar6 = recovered_10002ca4(param_1);
  uVar7 = PF_PART8(auVar10, 0) >> 0x20;
  uVar8 = PF_PART4(auVar10, 12);
  if (((int)uVar8 >= 1 && iVar4 != iVar5) && ((int)uVar8 < 1 || iVar5 <= iVar4)) {
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = (int)(iVar5 * uVar8) / iVar4;
    }
    uVar1 = uVar3;
    if ((int)uVar8 <= (int)uVar3) {
      uVar1 = uVar8;
    }
    uVar2 = 0x12;
    if (0x11 < (int)uVar3) {
      uVar2 = uVar1;
    }
    if (0 < (int)uVar6 && (int)uVar2 < (int)uVar8) {
      iVar4 = 0;
      if (uVar6 != 0) {
        iVar4 = (int)(*(int *)(param_1 + 0x5a0) * (uVar8 - uVar2)) / (int)uVar6;
      }
      uVar7 = (ulong)(uint)(iVar4 + PF_PART4(auVar10, 4));
    }
    uVar9 = (ulong)uVar2 << 0x20;
  }
  else {
    uVar9 = 0;
  }
  PF_PART8(auVar11, 8) = uVar9 | PF_PART8(auVar10, 8) & 0xffffffff;
  PF_PART8(auVar11, 0) = PF_PART8(auVar10, 0) & 0xffffffff | uVar7 << 0x20;
  return auVar11;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b3c
 */

uint128 recovered_10002b3c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar1 = recovered_10002a34(param_1);
  auVar2 = recovered_10002be8(param_1);
  PF_PART8(auVar3, 8) = 0xe0000000c;
  PF_PART8(auVar3, 0) = (PF_PART8(auVar2, 0) & 0xffffffff00000000 | PF_PART8(auVar1, 0) & 0xffffffff) + 0x500000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b78
 */

void recovered_10002b78(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *(int *)(param_1 + 0x5a0) + -1;
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x5a0) + 1;
  }
  *(int *)(param_1 + 0x5a0) = iVar3;
  uVar4 = recovered_10002ca4(param_1);
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x5a0);
    uVar1 = uVar2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar1 = uVar4;
    }
    uVar4 = 0;
    if (-1 < (int)uVar2) {
      uVar4 = uVar1;
    }
    *(uint *)(param_1 + 0x5a0) = uVar4;
    if (*(int *)(param_1 + 0x5a4) < 0) {
      *(undefined4 *)(param_1 + 0x5a4) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b90
 */

uint128 recovered_10002b90(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar1 = recovered_10002be8(param_1);
  auVar2 = recovered_10002a34(param_1);
  PF_PART8(auVar3, 8) = 0xe0000000c;
  PF_PART8(auVar3, 0) = ((PF_PART8(auVar1, 0) & 0xffffffff00000000) + PF_PART8(auVar1, 8) & 0xffffffff00000000 |
                 PF_PART8(auVar2, 0) & 0xffffffff) - 0x1600000000;
  return auVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be8
 */

uint128 recovered_10002be8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10002c2c
 */

int recovered_10002c2c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  long lVar3;

  if ((param_1 == 0) || (*(char **)(param_1 + 0x360) == (char *)0x0)) {
    return 1;
  }
  iVar2 = 1;
  pcVar1 = *(char **)(param_1 + 0x360);
  for (lVar3 = *(long *)(param_1 + 0x370); lVar3 != 0; lVar3 = lVar3 + -1) {
    if (*pcVar1 == '\n') {
      iVar2 = iVar2 + 1;
    }
    pcVar1 = pcVar1 + 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c64
 */

int recovered_10002c64(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_100029f4(param_1);
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x35c), iVar2 < 1)) {
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
 * Address: 0x10002ca4
 */

uint recovered_10002ca4(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = recovered_10002c2c(param_1);
  iVar2 = recovered_10002c64(param_1);
  return iVar1 - iVar2 & (iVar1 - iVar2 >> 0x1f ^ 0xffffffffU);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ccc
 */

void recovered_10002ccc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar3 = recovered_10002ca4(param_1);
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x5a0);
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = 0;
    if (-1 < (int)uVar2) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + 0x5a0) = uVar3;
    if (*(int *)(param_1 + 0x5a4) < 0) {
      *(undefined4 *)(param_1 + 0x5a4) = 0;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d10
 */

long recovered_10002d10(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  int iVar3;

  lVar1 = 0;
  if (((param_1 != 0) && (lVar1 = 0, 0 < param_2)) && (*(long *)(param_1 + 0x360) != 0)) {
    iVar3 = 0;
    lVar1 = *(long *)(param_1 + 0x370);
    for (lVar2 = 0; lVar1 != lVar2; lVar2 = lVar2 + 1) {
      if ((*(char *)(*(long *)(param_1 + 0x360) + lVar2) == '\n') &&
         (iVar3 = iVar3 + 1, iVar3 == param_2)) {
        return lVar2 + 1;
      }
    }
  }
  return lVar1;
}


#define local_11 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d68
 */

void recovered_10002d68(long param_1,undefined1 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};


  local_11 = param_2;
  recovered_10002720(param_1,&local_11,1);
  return;
}

#undef local_11

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d90
 */

void recovered_10002d90(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_1 == 0) {
    return;
  }
  uVar3 = recovered_10002698(param_1);
  iVar2 = recovered_10002e78(param_1);
  if (param_2 == 0) {
    uVar4 = recovered_100026dc(param_1,uVar3);
    uVar3 = *(ulong *)(param_1 + 0x370);
    if (uVar3 <= uVar4) goto LAB_10002e28;
  }
  else {
    if (uVar3 == 0) {
      uVar3 = 0;
      goto LAB_10002e28;
    }
    uVar3 = uVar3 - 2;
    do {
      uVar4 = uVar3;
      if (uVar4 == 0xffffffffffffffff) break;
      uVar3 = uVar4 - 1;
    } while (*(char *)(*(long *)(param_1 + 0x360) + uVar4) != '\n');
  }
  uVar3 = uVar4 + 1;
  uVar4 = recovered_100026dc(param_1,uVar3);
  iVar1 = (int)uVar4 - (int)uVar3;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  uVar3 = uVar3 + (long)iVar2;
LAB_10002e28:
  *(ulong *)(param_1 + 0x378) = uVar3;
  return;
}


#define local_30 (*(ulong *)(frame + 16))
#define uStack_28 (*(ulong *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e3c
 */

void recovered_10002e3c(long param_1)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  local_30 = 0;
  uStack_28 = 0;
  uVar1 = recovered_10002464(param_1,&uStack_28,&local_30);
  if ((int)uVar1 != 0) {
    recovered_10002580(param_1,uStack_28,local_30);
  }
  return;
}

#undef local_30
#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e78
 */

int recovered_10002e78(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;

  uVar2 = recovered_10002698(param_1);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (uVar2 <= *(ulong *)(param_1 + 0x378)) {
      iVar1 = (int)*(ulong *)(param_1 + 0x378) - (int)uVar2;
    }
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002eac
 */

int recovered_10002eac(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  char *pcVar3;

  iVar2 = 0;
  if (param_1 != 0) {
    pcVar3 = *(char **)(param_1 + 0x360);
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    iVar2 = 0;
    uVar1 = *(ulong *)(param_1 + 0x370);
    if (param_2 <= *(ulong *)(param_1 + 0x370)) {
      uVar1 = param_2;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (*pcVar3 == '\n') {
        iVar2 = iVar2 + 1;
      }
      pcVar3 = pcVar3 + 1;
    }
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ef0
 */

int recovered_10002ef0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_100029f4(param_1);
  iVar2 = 6;
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x358), iVar2 < 1)) {
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
 * Address: 0x10002f28
 */

void recovered_10002f28(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

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
      recovered_10003030(param_1,uVar4,uVar8,unaff_w21);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003030
 */

void recovered_10003030(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  if (((param_1 != 0) && (-1 < (int)(param_3 | param_2))) && (*(long *)(param_1 + 0x350) != 0)) {
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
        *(char *)(*(long *)(param_1 + 0x350) + lVar4) = (char)param_4;
        *(char *)(*(long *)(param_1 + 0x350) + lVar4 + 1) = (char)((uint)param_4 >> 8);
        *(char *)(*(long *)(param_1 + 0x350) + lVar4 + 2) = (char)((uint)param_4 >> 0x10);
        *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar4 + 3) = 0xff;
      }
    }
  }
  return;
}


#define lStack_78 (*(long *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d0
 */

void recovered_100030d0(long param_1,ulong param_2,int param_3,long param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if ((param_4 == 0) || ((int)param_5 < 1)) {
    return;
  }
  for (uVar2 = 0; param_5 != uVar2; uVar2 = uVar2 + 1) {
    if (*(char *)(param_4 + uVar2) == '\0') goto LAB_10003108;
  }
  uVar2 = (ulong)param_5;
LAB_10003108:
  if ((param_4 != 0) && (0 < (int)(uint)uVar2)) {
    memset(&lStack_78,0,0x18);
    uVar1 = (param_6 & 0xff00 | 0xff000000) >> 8 | (param_6 & 0xff00ff) << 8;
    uVar1 = recovered_10001e60((char *)param_4,(uint)uVar2,uVar1 >> 0x10 | uVar1 << 0x10,&lStack_78)
    ;
    if (uVar1 != 0) {
      if (lStack_78 != 0) {
        for (uVar6 = 0; uVar6 < uStack_68; uVar6 = uVar6 + 1) {
          uVar5 = param_2;
          lVar8 = lStack_78;
          for (uVar7 = 0; uVar7 < uStack_6c; uVar7 = uVar7 + 1) {
            lVar4 = uVar6 * uStack_64;
            if (*(char *)(lVar8 + lVar4 + 3) != '\0') {
              lVar3 = lVar8 + uVar6 * uStack_64;
              uVar2 = uVar2 & 0xffffffffff000000 | (ulong)*(byte *)(lVar8 + lVar4) |
                      (ulong)*(byte *)(lVar3 + 1) << 8 | (ulong)*(byte *)(lVar3 + 2) << 0x10;
              recovered_10003030(param_1,(uint)uVar5,(int)uVar6 + param_3,(int)uVar2);
            }
            lVar8 = lVar8 + 4;
            uVar5 = (ulong)((uint)uVar5 + 1);
          }
        }
      }
      recovered_10001ecc(&lStack_78);
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

void recovered_10003110(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong unaff_x21;
  uint uVar9;
  ulong uVar10;

  uVar10 = param_3 & 0xffffffff | 0x100000000;
  uVar6 = (uint)param_4;
  recovered_10002f28(param_1,param_2,uVar10,uVar6 & 0xffffff);
  recovered_10002f28(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar10,uVar6 & 0xffffff);
  recovered_10002f28(param_1,param_2,param_3 & 0xffffffff00000000 | 1,uVar6 & 0xffffff);
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
      unaff_x21 = unaff_x21 & 0xffffffffff000000 | param_4 & 0xffffff;
      recovered_10003030(param_1,uVar9,uVar7,(int)unaff_x21);
    }
  }
  return;
}


#define lStack_78 (*(long *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b8
 */

void recovered_100031b8(long param_1,ulong param_2,int param_3,long param_4,ulong param_5,
                       uint param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if ((param_4 != 0) && (uVar4 = param_5 & 0xffffffff, 0 < (int)(uint)param_5)) {
    memset(&lStack_78,0,0x18);
    uVar1 = (param_6 & 0xff00ff00 | 0xff000000) >> 8 | (param_6 & 0xff00ff) << 8;
    uVar1 = recovered_10001e60((char *)param_4,(uint)param_5,uVar1 >> 0x10 | uVar1 << 0x10,
                               &lStack_78);
    if (uVar1 != 0) {
      if (lStack_78 != 0) {
        for (uVar6 = 0; uVar6 < uStack_68; uVar6 = uVar6 + 1) {
          uVar5 = param_2;
          lVar8 = lStack_78;
          for (uVar7 = 0; uVar7 < uStack_6c; uVar7 = uVar7 + 1) {
            lVar3 = uVar6 * uStack_64;
            if (*(char *)(lVar8 + lVar3 + 3) != '\0') {
              lVar2 = lVar8 + uVar6 * uStack_64;
              uVar4 = uVar4 & 0xffffffffff000000 | (ulong)*(byte *)(lVar8 + lVar3) |
                      (ulong)*(byte *)(lVar2 + 1) << 8 | (ulong)*(byte *)(lVar2 + 2) << 0x10;
              recovered_10003030(param_1,(uint)uVar5,(int)uVar6 + param_3,(int)uVar4);
            }
            lVar8 = lVar8 + 4;
            uVar5 = (ulong)((uint)uVar5 + 1);
          }
        }
      }
      recovered_10001ecc(&lStack_78);
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d8
 */

void recovered_100032d8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5
                       )

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
    recovered_10002f28(param_1,CONCAT44(iVar2 + (int)((ulong)param_2 >> 0x20) +
                                        (int)((ulong)param_3 >> 0x20) / 2 + (int)lVar3,
                                        ((int)param_3 / 2 + (int)param_2) - iVar1),
                       (ulong)(uint)(iVar1 << 1) | 0x100000001,(uint)param_5 & 0xffffff);
    iVar4 = iVar4 + -1;
  }
  return;
}

