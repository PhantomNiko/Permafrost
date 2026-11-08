#include "../../window_focus.h"
/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002b60
#define DAT_10002b60 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef DAT_10002b68
#define DAT_10002b68 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x128U)))
#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
#undef DAT_10002bb8
#define DAT_10002bb8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x178U)))
#undef DAT_10002be1
#define DAT_10002be1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a1U)))
#undef DAT_10002c1a
#define DAT_10002c1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1daU)))
#undef DAT_10002c1e
#define DAT_10002c1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1deU)))
#undef DAT_10002c23
#define DAT_10002c23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e3U)))
#undef DAT_10002c27
#define DAT_10002c27 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e7U)))
#undef DAT_10002c2c
#define DAT_10002c2c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ecU)))
#undef DAT_10002c31
#define DAT_10002c31 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f1U)))
#undef DAT_10002c51
#define DAT_10002c51 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x211U)))
#undef DAT_10002c56
#define DAT_10002c56 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216U)))
#undef DAT_10002c5b
#define DAT_10002c5b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21bU)))
#undef DAT_10002c60
#define DAT_10002c60 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220U)))
#undef DAT_10002c64
#define DAT_10002c64 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef DAT_10002c69
#define DAT_10002c69 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef Ram0000000082010950
#define Ram0000000082010950 (*(uint32_t *)(0x82010950U))
#undef str_10002b70
#define str_10002b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
#undef str_10002b90
#define str_10002b90 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
#undef str_10002b98
#define str_10002b98 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x158U)))
#undef str_10002ba8
#define str_10002ba8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x168U)))
#undef str_10002bba
#define str_10002bba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_10002bc0
#define str_10002bc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x180U)))
#undef str_10002be4
#define str_10002be4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a4U)))
#undef str_10002bf3
#define str_10002bf3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b3U)))
#undef str_10002c35
#define str_10002c35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f5U)))
#undef str_10002c3c
#define str_10002c3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_10002c43
#define str_10002c43 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x203U)))
#define iStack_460 (*(int *)(frame + 5776))
#define uStack_450 (*(uint *)(frame + 5792))
#define uStack_44c (*(undefined8 *)(frame + 5796))
#define iStack_444 (*(int *)(frame + 5804))
#define iStack_440 (*(int *)(frame + 5808))
#define iStack_43c (*(int *)(frame + 5812))
#define local_1788 (*(void * *)(frame + 872))
#define local_464 (*(int *)(frame + 5772))
#define iStack_1ae0 (*(int *)(frame + 16))
#define local_438 (*(uint *)(frame + 5816))
#define uStack_1adc (*(uint *)(frame + 20))
#define uStack_1ad8 (*(uint *)(frame + 24))
#define uStack_1ad4 (*(uint *)(frame + 28))
#define pvStack_1ab0 (*(void * *)(frame + 64))
#define pvStack_1790 (*(void * *)(frame + 864))
#define uStack_1780 (*(undefined8 *)(frame + 880))
#define uStack_1778 (*(uint *)(frame + 888))
#define iStack_1774 (*(int *)(frame + 892))
#define iStack_1770 (*(int *)(frame + 896))
#define uStack_176c (*(uint *)(frame + 900))
#define bStack_1768 (*(byte *)(frame + 904))
#define uStack_1767 (*(undefined2 *)(frame + 905))
#define iStack_1764 (*(int *)(frame + 908))
#define uStack_1760 (*(undefined8 *)(frame + 912))
#define abStack_1758 (*(byte (*)[164])(frame + 920))
#define iStack_16b4 (*(int *)(frame + 1084))
#define uStack_16b0 (*(uint *)(frame + 1088))
#define uStack_16ac (*(undefined4 *)(frame + 1092))
#define iStack_16a8 (*(int *)(frame + 1096))
#define bStack_16a4 (*(byte *)(frame + 1100))
#define bStack_16a3 (*(byte *)(frame + 1101))
#define iStack_16a0 (*(int *)(frame + 1104))
#define iStack_169c (*(int *)(frame + 1108))
#define iStack_1698 (*(int *)(frame + 1112))
#define uStack_1694 (*(uint *)(frame + 1116))
#define acStack_1690 (*(char (*)[512])(frame + 1120))
#define acStack_1490 (*(char (*)[4096])(frame + 1632))
#define lStack_490 (*(long *)(frame + 5728))
#define iStack_484 (*(int *)(frame + 5740))
#define iStack_480 (*(int *)(frame + 5744))
#define abStack_478 (*(byte (*)[4])(frame + 5752))
#define uStack_474 (*(uint *)(frame + 5756))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005a0
 */

int recovered_100005a0(void)

{
  unsigned char frame[6928] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  char *pcVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  uint128 auVar29;
  uint128 auVar30;
  uint128 auVar31;

  memset(&iStack_1ae0,0,0x1650);
  local_1788 = (void *)recovered_10001690(0x3e800);
  if (local_1788 != (void *)0x0) {
    memset(local_1788,0,0x3e800);
    pf_app_window_spec(abStack_478,str_10002b90,0x2f8,400);
    local_438 = local_438 | 1;
    local_464 = 0x4c91c4;
    uVar8 = terror_ui_window_open(&iStack_1ae0,abStack_478);
    if (uVar8 != 0) {
      terror_ui_window_set_menus(&iStack_1ae0,&DAT_10002b97,str_10002b98,&DAT_10002b97);
      if ((pvStack_1790 != (void *)0x0) ||
         (pvStack_1790 = pvStack_1ab0, pvStack_1ab0 != (void *)0x0)) {
        uStack_1760 = DAT_10002b60;
        memset(&lStack_490,0,0x18);
        uVar8 = recovered_1000187c(&DAT_10002bb8,0xffffffff,0,&lStack_490);
        if (uVar8 != 0) {
          if (iStack_484 - 1U < 0x40) {
            uStack_1760 = CONCAT44(PF_PART4(uStack_1760, 4),iStack_484);
          }
          if (iStack_480 - 1U < 0x40) {
            uStack_1760 = CONCAT44(iStack_480,(int)uStack_1760);
          }
          recovered_100018e8(&lStack_490);
        }
        recovered_10001718((long)&iStack_1ae0,str_10002ba8);
        uStack_16b0 = recovered_10001804((long)&iStack_1ae0);
        uVar4 = DAT_10002b68;
        bStack_16a3 = 1;
        bVar6 = true;
        uVar8 = uStack_16ac >> 0xc & 1;
LAB_10000734:
        uVar25 = uStack_1ad8;
        uVar24 = uStack_1adc;
        memset(abStack_478,0,0x278);
        pf_app_refresh_inactive_info(&iStack_1ae0);        uVar9 = terror_ui_window_query(&iStack_1ae0,abStack_478);
        if ((uVar9 != 0) && (uVar9 = terror_ui_window_sync_buffer(&iStack_1ae0,abStack_478), uVar9 != 0)) {
          pvStack_1790 = pvStack_1ab0;
          if (uStack_1adc != uVar24 || uStack_1ad8 != uVar25) {
            bStack_16a4 = 1;
          }
          uStack_1780 = uStack_44c;
          uStack_1778 = uStack_450;
          if ((iStack_444 != 0) && (iStack_444 != iStack_16a8)) {
            iStack_16a8 = iStack_444;
            if ((iStack_440 == 2) && (iStack_43c == 0)) {
              recovered_10001c2c((long)&iStack_1ae0);
            }
            else if (iStack_440 == 2 && iStack_43c == 1) {
              recovered_10001d4c((long)&iStack_1ae0);
            }
          }
          if ((uStack_450 & 0x11) == 0) {
            uVar24 = (uint)bStack_16a4;
            if (uVar24 == 1) {
              bStack_16a4 = 0;
            }
            uVar25 = 0;
            while( true ) {
              bVar7 = recovered_10001ebc((long)&iStack_1ae0);
              bVar5 = recovered_10001830(0x150);
              if (!bVar5) break;
              uVar9 = Ram0000000082010950;
              if (((uVar9 == 0) ||
                  (iVar10 = (*(code *)(ulong)uVar9)(abStack_478,0x400), iVar10 == 0)) ||
                 (abStack_478[0] == 0)) break;
              recovered_10001ee0((long)&iStack_1ae0,(char *)abStack_478);
              uVar25 = 1;
              if (bVar7) {
                uStack_16b0 = recovered_10001804((long)&iStack_1ae0);
              }
            }
            if ((iStack_16a0 == 0) || (iStack_169c == 0)) {
              uVar9 = 0;
            }
            else {
              bVar5 = recovered_10001ebc((long)&iStack_1ae0);
              if (acStack_1490[0] == '\0') {
                if (iStack_1698 == 0) {
                  recovered_10001718((long)&iStack_1ae0,str_10002bba);
                }
              }
              else {
                recovered_10001ee0((long)&iStack_1ae0,acStack_1490);
              }
              acStack_1490[0] = '\0';
              acStack_1690[0] = '\0';
              uStack_1694 = 0;
              iStack_169c = 0;
              iStack_16a0 = 0;
              if (bVar5) {
                uStack_16b0 = recovered_10001804((long)&iStack_1ae0);
              }
              uVar9 = 1;
            }
            uVar25 = uVar25 | uVar24;
            uVar24 = uStack_1778 & 6;
            if (((uVar24 == 2) || ((uStack_1767 & 0x100) != 0)) || ((uStack_1767 & 1) != 0)) {
              memset(abStack_478,0,0x1c);
              uVar11 = terror_ui_window_pointer_state(&iStack_1ae0,abStack_478);
              if (uVar11 != 0) {
                if ((bStack_1768 & 1) == 0) {
                  bStack_1768 = 1;
                  iStack_1774 = 0x17c;
                  if (uStack_1adc != 0) {
                    iStack_1774 = (int)uStack_1adc / 2;
                  }
                  iStack_1770 = 200;
                  if (uStack_1ad8 != 0) {
                    iStack_1770 = (int)uStack_1ad8 / 2;
                  }
                }
                if ((abStack_478[0] >> 2 & 1) == 0) {
                  uStack_176c = 0;
                }
                else {
                  uVar16 = CONCAT44(uStack_1ad8 - 1,uStack_1adc - 1);
                  uVar16 = NEON_smin(CONCAT44(iStack_460,local_464),
                                     uVar16 ^ (uVar16 ^ uVar4) &
                                              CONCAT44(-(uint)(uStack_1ad8 == 0),
                                                       -(uint)(uStack_1adc == 0)),4);
                  uVar16 = CONCAT44(-(uint)(-1 < iStack_460),-(uint)(-1 < local_464)) & uVar16;
                  iStack_1774 = (int)uVar16;
                  iStack_1770 = (int)(uVar16 >> 0x20);
                  uStack_176c = uStack_474;
                }
              }
              if (uVar24 == 2) {
                iVar10 = 0;
                uVar11 = 0;
LAB_100009a4:
                while ((iVar10 != 0x18 && (bVar5 = recovered_10001830(0x2c), bVar5))) {
                  uVar12 = UINT_8201082c;
                  if ((uVar12 == 0) || (uVar12 = (*(code *)(ulong)uVar12)(), uVar12 == 0)) break;
                  iVar10 = iVar10 + 1;
                  uVar13 = uVar12 >> 8 & 0xff;
                  if ((uVar12 & 0x800000ff) != 0x80000000 || uVar13 != 0) {
                    uVar26 = uVar12 & 0xff;
                    if ((uVar12 >> 0x12 & 1) == 0) {
                      if ((uVar12 >> 0x11 & 1) == 0) {
                        if (uVar26 - 0x20 < 0x5f) {
                          uVar16 = strlen((char *)abStack_1758);
                          uVar11 = 1;
                          if (uVar16 + 1 < 0xa0) {
                            abStack_1758[uVar16] = (byte)uVar12;
                            abStack_1758[uVar16 + 1] = 0;
                          }
                        }
                        else {
                          if ((uVar13 != 0xe) &&
                             (uVar12 = uVar12 & 0xff, uVar12 != 0x7f && uVar12 != 8)) {
                            if ((uVar13 != 0x1c && uVar12 != 0xd) && uVar12 != 10)
                            goto LAB_10000b50;
                            bVar7 = recovered_10001ebc((long)&iStack_1ae0);
                            pbVar17 = recovered_100020c0(abStack_1758);
                            bVar5 = false;
                            if (pbVar17 != (byte *)0x0) {
                              bVar2 = *pbVar17;
                              if (bVar2 == 0) {
                                bVar5 = false;
                              }
                              else {
                                pbVar18 = recovered_100020c0(pbVar17);
                                if ((pbVar18 == (byte *)0x0) || (bVar3 = *pbVar18, bVar3 == 0)) {
LAB_10000b68:
                                  for (lVar21 = 0;
                                      ((0x2c < bVar2 ||
                                       ((1L << ((ulong)(uint)bVar2 & 0x3f) & 0x100100000201U) == 0))
                                      && (lVar21 != 0x3f)); lVar21 = lVar21 + 1) {
                                    abStack_478[lVar21] = bVar2;
                                    bVar2 = pbVar17[lVar21 + 1];
                                  }
                                  abStack_478[lVar21] = 0;
                                  bVar5 = recovered_10002100(abStack_478,&DAT_10002c1a);
                                  if (!bVar5) {
                                    bVar5 = recovered_10002100(abStack_478,&DAT_10002c1e);
                                    if (((((bVar5) ||
                                          (bVar5 = recovered_10002100(abStack_478,&DAT_10002c23),
                                          bVar5)) ||
                                         ((bVar5 = recovered_10002100(abStack_478,&DAT_10002c27),
                                          bVar5 || ((bVar5 = recovered_10002100(abStack_478,
                                                                                &DAT_10002c2c),
                                                    bVar5 || (bVar5 = recovered_10002100(abStack_478
                                                                                         ,&
                                                  DAT_10002c31), bVar5)))))) ||
                                        (bVar5 = recovered_10002100(abStack_478,(byte *)str_10002c35
                                                                   ), bVar5)) ||
                                       (bVar5 = recovered_10002100(abStack_478,(byte *)str_10002c3c)
                                       , bVar5)) {
                                      bVar5 = true;
                                    }
                                    else {
                                      bVar5 = recovered_10002100(abStack_478,(byte *)str_10002c43);
                                    }
                                    goto LAB_10000c74;
                                  }
                                }
                                else if (bVar3 != 0x3e) {
                                  uVar12 = (uint)bVar3;
                                  uVar11 = uVar12 | 0x20;
                                  if (0x19 < uVar12 - 0x41) {
                                    uVar11 = uVar12;
                                  }
                                  pbVar1 = pbVar18;
                                  if (uVar11 == 0x69) {
                                    pbVar1 = pbVar18 + 1;
                                  }
                                  bVar3 = *pbVar1;
                                  if (bVar3 - 0x30U < 10) {
                                    pbVar18 = pbVar18 + (uVar11 == 0x69);
                                    while( true ) {
                                      pbVar18 = pbVar18 + 1;
                                      if (9 < bVar3 - 0x30U) break;
                                      bVar3 = *pbVar18;
                                    }
                                    if (bVar3 == 0x3e) goto LAB_10000bd4;
                                  }
                                  goto LAB_10000b68;
                                }
LAB_10000bd4:
                                bVar5 = true;
                              }
                            }
LAB_10000c74:
                            recovered_10001f74((char *)abStack_478,0x100,abStack_1758);
                            recovered_10001718((long)&iStack_1ae0,abStack_478);
                            if (abStack_1758[0] != 0) {
                              if (bVar5 == false) {
                                lVar21 = 0x389;
                                bVar2 = abStack_1758[0];
                                do {
                                  uVar11 = (uint)bVar2;
                                  if (uVar11 < 0x21) {
                                    if ((1L << ((ulong)uVar11 & 0x3f) & 0x100002600U) != 0) break;
                                    if ((ulong)uVar11 == 0) goto LAB_10000d90;
                                  }
                                  bVar2 = *(byte *)((long)&iStack_1ae0 + lVar21);
                                  lVar21 = lVar21 + 1;
                                } while( true );
                              }
                              goto LAB_10000c98;
                            }
                            goto joined_r0x10000d88;
                          }
                          uVar16 = strlen((char *)abStack_1758);
                          uVar11 = 1;
                          if (uVar16 != 0) {
                            abStack_1758[uVar16 - 1] = 0;
                          }
                        }
                      }
                    }
                    else if ((((uVar12 & 0xbf) == 3) || (uVar26 == 99)) || (uVar13 == 0x2e)) {
                      uVar16 = recovered_10001c2c((long)&iStack_1ae0);
                      uVar11 = (uint)uVar16 | uVar11;
                    }
                    else if ((((uVar12 & 0xbf) == 0x16) || (uVar26 == 0x76)) || (uVar13 == 0x2f)) {
                      uVar28 = recovered_10001d4c((long)&iStack_1ae0);
                      uVar11 = (uint)uVar28 | uVar11;
                    }
                  }
                }
                uVar25 = uVar25 | uVar9 | uVar11;
                goto LAB_10000ec4;
              }
              uVar25 = uVar25 | uVar9;
              goto LAB_10000ec4;
            }
            uVar25 = uVar25 | uVar9;
            uStack_1767 = 0;
            goto LAB_10000fe0;
          }
        }
        goto LAB_100015a4;
      }
      terror_ui_window_close(&iStack_1ae0);
    }
    recovered_100016d8(local_1788);
    local_1788 = (void *)0x0;
  }
  bVar6 = recovered_10001830(0x28);
  uVar8 = (uint)bVar6;
  if (bVar6) {
    uVar8 = UINT_82010828;
    if (uVar8 != 0) {
      (*(code *)(ulong)uVar8)(str_10002b70);
    }
    uVar8 = 0;
  }
  return uVar8;
LAB_10000b50:
  if (uVar26 == 0x1b || uVar13 == 1) goto LAB_10001598;
  goto LAB_100009a4;
LAB_10001598:
  bStack_16a3 = 0;
  uVar25 = 1;
LAB_10000ec4:
  uVar9 = uStack_176c;
  iVar23 = iStack_1770;
  iVar10 = iStack_1774;
  if ((uStack_176c & 1) == 0) {
    PF_PART1(uStack_1767, 1) = 0;
  }
  else {
    if ((uStack_1767 & 1) == 0) {
      auVar29 = recovered_100021f8((long)&iStack_1ae0);
      auVar31 = recovered_1000223c((long)&iStack_1ae0);
      uVar11 = uStack_16b0;
      auVar30 = recovered_100022f4((long)&iStack_1ae0);
      bVar5 = recovered_10001e90(iVar10,iVar23,PF_PART8(auVar30, 0),PF_PART8(auVar30, 8));
      if (bVar5) {
        iVar10 = 1;
LAB_10000f40:
        recovered_10002310((long)&iStack_1ae0,iVar10);
      }
      else {
        auVar30 = recovered_10002328((long)&iStack_1ae0);
        bVar5 = recovered_10001e90(iVar10,iVar23,PF_PART8(auVar30, 0),PF_PART8(auVar30, 8));
        if (bVar5) {
          iVar10 = 0;
          goto LAB_10000f40;
        }
        bVar5 = recovered_10001e90(iVar10,iVar23,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8));
        if (!bVar5) goto LAB_10000f64;
        bVar5 = recovered_10001e90(iVar10,iVar23,PF_PART8(auVar31, 0),PF_PART8(auVar31, 8));
        if (!bVar5) {
          auVar29 = recovered_100021f8((long)&iStack_1ae0);
          auVar31 = recovered_1000223c((long)&iStack_1ae0);
          uVar12 = recovered_10001804((long)&iStack_1ae0);
          iVar10 = PF_PART4(auVar29, 12) - PF_PART4(auVar31, 12);
          if (((int)uVar12 >= 1 && iVar10 != 0) && ((int)uVar12 < 1 || -1 < iVar10)) {
            uStack_16b0 = 0;
            if (iVar10 != 0) {
              uStack_16b0 = (int)(((iVar23 - PF_PART4(auVar29, 4)) + PF_PART4(auVar31, 12) / -2) * uVar12) /
                            iVar10;
            }
            recovered_1000162c((long)&iStack_1ae0);
          }
          else {
            uStack_16b0 = 0;
          }
        }
        auVar29 = recovered_1000223c((long)&iStack_1ae0);
        uStack_1767 = CONCAT11(1,(undefined1)uStack_1767);
        iStack_1764 = iVar23 - PF_PART4(auVar29, 4);
      }
      uVar25 = uStack_16b0 != uVar11 | uVar25;
    }
LAB_10000f64:
    if (PF_PART1(uStack_1767, 1) == '\x01') {
      auVar29 = recovered_100021f8((long)&iStack_1ae0);
      auVar31 = recovered_1000223c((long)&iStack_1ae0);
      uVar12 = recovered_10001804((long)&iStack_1ae0);
      uVar11 = uStack_16b0;
      iVar10 = PF_PART4(auVar29, 12) - PF_PART4(auVar31, 12);
      if ((PF_PART1(uStack_1767, 1) == '\x01' && 0 < (int)uVar12) && 0 < iVar10) {
        uStack_16b0 = 0;
        if (iVar10 != 0) {
          uStack_16b0 = (int)((iVar23 - (iStack_1764 + PF_PART4(auVar29, 4))) * uVar12) / iVar10;
        }
        recovered_1000162c((long)&iStack_1ae0);
        uVar25 = uStack_16b0 != uVar11 | uVar25;
      }
    }
  }
  uStack_1767 = CONCAT11(PF_PART1(uStack_1767, 1),(char)uVar9) & 0xff01;
LAB_10000fe0:
  uVar11 = uStack_16b0;
  uVar12 = 0x82010828;
  recovered_1000162c((long)&iStack_1ae0);
  uVar9 = uStack_16ac >> 0xc & 1;
  if (uVar24 != 2) {
    uVar9 = 1;
  }
  bVar5 = uStack_16b0 == uVar11;
  if (!bVar6 && ((uVar9 == uVar8 && bVar5) && (uVar25 & 1) == 0)) goto LAB_100014a8;
  uVar11 = 0x2f8;
  if (uStack_1adc != 0) {
    uVar11 = uStack_1adc;
  }
  uVar13 = 400;
  if (uStack_1ad8 != 0) {
    uVar13 = uStack_1ad8;
  }
  recovered_10002344((long)&iStack_1ae0,0,CONCAT44(uVar13,uVar11),0xc4914c);
  auVar29 = recovered_10001aec((long)&iStack_1ae0);
  uVar13 = recovered_100019fc((long)&iStack_1ae0);
  iVar14 = recovered_10001bec((long)&iStack_1ae0);
  uVar11 = uStack_16b0;
  recovered_10002344((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0xc4914c);
  recovered_100024b0((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0);
  iVar10 = 0;
  for (iVar23 = 0; iVar23 < iStack_16b4 && iVar10 < iVar14; iVar23 = iVar23 + 1) {
    pcVar19 = recovered_100019a8((long)&iStack_1ae0,iVar23);
    iVar15 = recovered_10001920((long)&iStack_1ae0,pcVar19);
    if ((int)uVar11 < iVar15) {
      uVar26 = uVar12 & 0xff000000;
      for (; (int)uVar11 < iVar15 && iVar10 < iVar14; uVar11 = uVar11 + 1) {
        uVar28 = 0;
        uVar12 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        iVar20 = PF_PART4(uStack_1760, 4) + 2;
        if (((int32_t)PF_PART4(uStack_1760, 4)) < 1) {
          iVar20 = 0xc;
        }
        iVar20 = PF_PART4(auVar29, 4) + 2 + iVar20 * iVar10;
        while ((uVar27 = (uint)uVar28, uVar12 != 0 && (pcVar19[(int)uVar27] != '\0'))) {
          uVar16 = recovered_10001a38((long)pcVar19,uVar27,uVar13);
          uVar28 = recovered_10001abc(pcVar19,uVar28,uVar16);
          uVar12 = uVar12 - 1;
        }
        uVar16 = recovered_10001a38((long)pcVar19,uVar27,uVar13);
        iVar22 = PF_PART4(uStack_1760, 4);
        if (((int32_t)PF_PART4(uStack_1760, 4)) < 1) {
          iVar22 = 10;
        }
        if (PF_PART4(auVar29, 4) + PF_PART4(auVar29, 12) < iVar22 + iVar20) goto LAB_100011e0;
        uVar12 = uVar13;
        if (0 < (int)(uint)uVar16) {
          uVar12 = (uint)uVar16;
        }
        recovered_10002558((long)&iStack_1ae0,PF_PART4(auVar29, 0) + 4,iVar20,(long)(pcVar19 + (int)uVar27)
                           ,(ulong)uVar12,uVar26);
        iVar10 = iVar10 + 1;
        uVar12 = uVar26;
      }
      uVar11 = 0;
    }
    else {
      uVar11 = uVar11 - iVar15;
    }
  }
LAB_100011e0:
  auVar29 = recovered_100021f8((long)&iStack_1ae0);
  auVar31 = recovered_1000223c((long)&iStack_1ae0);
  recovered_10002678((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0xe4e4e4);
  recovered_100024b0((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0xacacac);
  if (0 < PF_PART4(auVar31, 12)) {
    recovered_10002678((long)&iStack_1ae0,
                       (PF_PART8(auVar31, 0) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar31, 0) + 1)) +
                       0x100000000,
                       (PF_PART8(auVar31, 8) & 0xffffffff00000000 | (ulong)(PF_PART4(auVar31, 8) - 2)) -
                       0x200000000,0xbebebe);
    recovered_100024b0((long)&iStack_1ae0,PF_PART8(auVar31, 0),PF_PART8(auVar31, 8),0x747474);
  }
  auVar29 = recovered_100022f4((long)&iStack_1ae0);
  recovered_10002678((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0xeeeeee);
  auVar29 = recovered_100022f4((long)&iStack_1ae0);
  recovered_100024b0((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0x969696);
  auVar29 = recovered_100022f4((long)&iStack_1ae0);
  recovered_10002820((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),1,0x464646);
  auVar29 = recovered_10002328((long)&iStack_1ae0);
  recovered_10002678((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0xeeeeee);
  auVar29 = recovered_10002328((long)&iStack_1ae0);
  recovered_100024b0((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0x969696);
  auVar29 = recovered_10002328((long)&iStack_1ae0);
  recovered_10002820((long)&iStack_1ae0,PF_PART8(auVar29, 0),PF_PART8(auVar29, 8),0,0x464646);
  auVar29 = recovered_10001aec((long)&iStack_1ae0);
  uVar11 = PF_PART4(auVar29, 12) + PF_PART4(auVar29, 4) + 8;
  iVar10 = 0x2e4;
  if (uStack_1adc != 0) {
    iVar10 = uStack_1adc - 0x14;
  }
  uVar12 = 400;
  if (uStack_1ad8 != 0) {
    uVar12 = uStack_1ad8;
  }
  iVar14 = (uVar12 - uVar11) + -10;
  iVar23 = (int)uStack_1760 + 8;
  if ((int)uStack_1760 < 1) {
    iVar23 = 0xe;
  }
  if (iVar10 <= iVar23) {
    iVar10 = iVar23;
  }
  if (((int32_t)PF_PART4(uStack_1760, 4)) < 1) {
    if ((int)(uVar12 - uVar11) < 0x1c) {
      iVar23 = 10;
      goto LAB_10001374;
    }
  }
  else {
    iVar23 = PF_PART4(uStack_1760, 4);
    if (iVar14 < PF_PART4(uStack_1760, 4) + 8) {
LAB_10001374:
      iVar14 = iVar23 + 8;
    }
  }
  uVar16 = (ulong)uVar11 << 0x20 | 10;
  iVar23 = PF_PART4(uStack_1760, 4);
  if (((int32_t)PF_PART4(uStack_1760, 4)) < 1) {
    iVar23 = 10;
  }
  iVar23 = (iVar14 - iVar23) / 2 + uVar11;
  recovered_10002344((long)&iStack_1ae0,uVar16,CONCAT44(iVar14,iVar10),0xdcba8e);
  recovered_100024b0((long)&iStack_1ae0,uVar16,CONCAT44(iVar14,iVar10),0);
  recovered_10001f74((char *)abStack_478,0x120,abStack_1758);
  iVar14 = (int)uStack_1760;
  if ((int)uStack_1760 < 1) {
    iVar14 = 6;
  }
  uVar11 = 0;
  if (iVar14 != 0) {
    uVar11 = (iVar10 + -10) / iVar14;
  }
  recovered_10002558((long)&iStack_1ae0,0xe,iVar23,(long)abStack_478,(ulong)uVar11,0);
  if (((uStack_1778 & 6) == 2) && ((PF_PART1(uStack_16ac, 1) >> 4 & 1) == 0)) {
    uVar16 = strlen((char *)abStack_478);
    iVar10 = (int)uStack_1760;
    if ((int)uStack_1760 < 1) {
      iVar10 = 6;
    }
    iVar14 = PF_PART4(uStack_1760, 4);
    if (((int32_t)PF_PART4(uStack_1760, 4)) < 1) {
      iVar14 = 10;
    }
    uVar11 = (int)uStack_1760 - 1;
    if (uVar11 == 0 || (int)uStack_1760 < 1) {
      uVar11 = 5;
    }
    recovered_10002678((long)&iStack_1ae0,CONCAT44(iVar23 + iVar14 + -1,iVar10 * (int)uVar16 + 0xe),
                       (ulong)uVar11 | 0x200000000,0);
  }
  terror_ui_window_present(&iStack_1ae0,str_10002b90,pvStack_1790,uStack_1adc,uStack_1ad8,uStack_1ad4,
                     0x4c91c4);
LAB_100014a8:
  uStack_16ac = uStack_16ac + 1;
  if ((uVar9 == uVar8 && bVar5) && (uVar25 & 1) == 0) {
    iVar10 = 6;
    if (uVar24 != 2) {
      iVar10 = 0x18;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      recovered_1000165c();
    }
  }
  recovered_1000165c();
  bVar6 = false;
  uVar8 = uVar9;
  if ((bStack_16a3 & 1) == 0) {
LAB_100015a4:
    if (iStack_1ae0 != 0) {
      terror_ui_window_close(&iStack_1ae0);
    }
    if (local_1788 != (void *)0x0) {
      recovered_100016d8(local_1788);
    }
    return 1;
  }
  goto LAB_10000734;
LAB_10000d90:
  bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c51);
  if (((((bVar5) || (bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c56), bVar5)) ||
       (bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c5b), bVar5)) ||
      ((bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c60), bVar5 ||
       (bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c64), bVar5)))) ||
     (bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c69), bVar5)) {
    uVar11 = 0x80000002;
    bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c60);
    if (!bVar5) {
      bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c64);
      if (bVar5) {
        uVar11 = 0x80000003;
      }
      else {
        bVar5 = recovered_10002160((char *)abStack_1758,&DAT_10002c69);
        uVar11 = 0x80000004;
        if (!bVar5) {
          uVar11 = 0x80000001;
        }
      }
    }
    bVar5 = recovered_10001830(0x90);
    if (bVar5) {
      uVar12 = UINT_82010890;
      if ((uVar12 != 0) &&
         (uVar11 = (*(code *)(ulong)uVar12)((char *)abStack_1758,uVar11), uVar11 != 0))
      goto joined_r0x10000d88;
    }
    pcVar19 = str_10002bba;
  }
  else {
LAB_10000c98:
    if (iStack_16a0 == 0) {
      pf_varargs_10002a4c_1(acStack_1690,0x200,&DAT_10002be1,(ulonglong)abStack_1758);
      acStack_1490[0] = '\0';
      iStack_169c = 0;
      iStack_1698 = 0;
      iStack_16a0 = 1;
      bVar5 = recovered_10001830(0x94);
      if (bVar5) {
        uVar11 = UINT_82010894;
        if (uVar11 == 0) goto LAB_10000d6c;
        uStack_1694 = (*(code *)(ulong)uVar11)(recovered_10002054,&iStack_1ae0,str_10002be4);
        if (uStack_1694 != 0) goto joined_r0x10000d88;
      }
      else {
LAB_10000d6c:
        uStack_1694 = 0;
      }
      iStack_16a0 = 0;
      iStack_169c = 0;
      recovered_10001718((long)&iStack_1ae0,str_10002bf3);
      goto joined_r0x10000d88;
    }
    pcVar19 = str_10002bc0;
  }
  recovered_10001718((long)&iStack_1ae0,pcVar19);
joined_r0x10000d88:
  if (bVar7) {
    uStack_16b0 = recovered_10001804((long)&iStack_1ae0);
  }
  abStack_1758[0] = 0;
  uVar11 = 1;
  goto LAB_100009a4;
}

#undef DAT_10002b60
#undef DAT_10002b68
#undef DAT_10002b97
#undef DAT_10002bb8
#undef DAT_10002be1
#undef DAT_10002c1a
#undef DAT_10002c1e
#undef DAT_10002c23
#undef DAT_10002c27
#undef DAT_10002c2c
#undef DAT_10002c31
#undef DAT_10002c51
#undef DAT_10002c56
#undef DAT_10002c5b
#undef DAT_10002c60
#undef DAT_10002c64
#undef DAT_10002c69
#undef Ram0000000082010950
#undef str_10002b70
#undef str_10002b90
#undef str_10002b98
#undef str_10002ba8
#undef str_10002bba
#undef str_10002bc0
#undef str_10002be4
#undef str_10002bf3
#undef str_10002c35
#undef str_10002c3c
#undef str_10002c43
#undef iStack_460
#undef uStack_450
#undef uStack_44c
#undef iStack_444
#undef iStack_440
#undef iStack_43c
#undef local_1788
#undef local_464
#undef iStack_1ae0
#undef local_438
#undef uStack_1adc
#undef uStack_1ad8
#undef uStack_1ad4
#undef pvStack_1ab0
#undef pvStack_1790
#undef uStack_1780
#undef uStack_1778
#undef iStack_1774
#undef iStack_1770
#undef uStack_176c
#undef bStack_1768
#undef uStack_1767
#undef iStack_1764
#undef uStack_1760
#undef abStack_1758
#undef iStack_16b4
#undef uStack_16b0
#undef uStack_16ac
#undef iStack_16a8
#undef bStack_16a4
#undef bStack_16a3
#undef iStack_16a0
#undef iStack_169c
#undef iStack_1698
#undef uStack_1694
#undef acStack_1690
#undef acStack_1490
#undef lStack_490
#undef iStack_484
#undef iStack_480
#undef abStack_478
#undef uStack_474

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000162c
 */

void recovered_1000162c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = *(uint *)(param_1 + 0x430);
  uVar3 = recovered_10001804(param_1);
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x430) = uVar3;
  return;
}


#undef UINT_8201089c
#define UINT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000165c
 */

undefined * recovered_1000165c(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;

  bVar1 = recovered_10001830(0x9c);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)bVar1;
  if ((bVar1) && (uVar2 = UINT_8201089c, UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar2, uVar2 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x10001684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return (undefined *)(ulong)uVar2;
  }
  return UNRECOVERED_JUMPTABLE;
}

#undef UINT_8201089c

#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001690
 */

undefined8 recovered_10001690(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10001830(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100016c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(param_1);
    return pvVar3;
  }
  return 0;
}

#undef UINT_8201084c

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d8
 */

void recovered_100016d8(void *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10001830(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000170c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}

#undef UINT_82010850

#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001718
 */

void recovered_10001718(long param_1,undefined *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  byte bVar8;

  puVar1 = &DAT_10002b97;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x358) != 0)) {
    iVar2 = *(int *)(param_1 + 0x42c);
    if (iVar2 < 1000) {
      iVar7 = *(int *)(param_1 + 0x428) + iVar2;
      *(int *)(param_1 + 0x42c) = iVar2 + 1;
    }
    else {
      pcVar5 = recovered_100019a8(param_1,0);
      iVar4 = recovered_10001920(param_1,pcVar5);
      iVar2 = (*(int *)(param_1 + 0x428) + 1) % 1000;
      *(int *)(param_1 + 0x428) = iVar2;
      iVar7 = *(int *)(param_1 + 0x42c) + iVar2 + -1;
      iVar2 = *(int *)(param_1 + 0x430) - iVar4;
      if (iVar2 == 0 || *(int *)(param_1 + 0x430) < iVar4) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x430) = iVar2;
    }
    uVar3 = iVar7 % 1000;
    for (uVar6 = 0; (bVar8 = puVar1[uVar6], bVar8 != 0 && (uVar6 < 0xff)); uVar6 = uVar6 + 1) {
      if (bVar8 < 0x21) {
        bVar8 = 0x20;
      }
      *(byte *)(*(long *)(param_1 + 0x358) +
                (-(ulong)(uVar3 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar3 << 8) + uVar6) = bVar8;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x358) + (long)(int)uVar3 * 0x100 + uVar6) = 0;
  }
  return;
}

#undef DAT_10002b97

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001804
 */

uint recovered_10001804(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar1 = recovered_10001b8c(param_1);
  iVar2 = recovered_10001bec(param_1);
  return iVar1 - iVar2 & (iVar1 - iVar2 >> 0x1f ^ 0xffffffffU);
}


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
 * Address: 0x10001830
 */

bool recovered_10001830(int param_1)

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
 * Address: 0x1000187c
 */

uint recovered_1000187c(char *param_1,uint param_2,uint param_3,void *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_10001830(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100018d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,param_2,0x80000001,param_3,param_4);
    return uVar2;
  }
  return 0;
}

#undef UINT_82010978

#undef PTR_FUN_10008000
#define PTR_FUN_10008000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x55c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e8
 */

void recovered_100018e8(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (long *)0x0) {
    return;
  }
  if ((void *)*param_1 != (void *)0x0) {
    recovered_100016d8((void *)*param_1);
  }
                    /* WARNING: Could not recover jumptable at ((uintptr_t)pf_module_state + 0x8U). Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((void *)memset))(param_1,0,0x18);
  return;
}

#undef PTR_FUN_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001920
 */

int recovered_10001920(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;

  uVar1 = recovered_100019fc(param_1);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar4 = 1;
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    do {
      uVar2 = recovered_10001a38((long)param_2,(uint)uVar3,uVar1);
      if ((int)uVar2 < 1) break;
      iVar4 = iVar4 + 1;
      uVar3 = recovered_10001abc(param_2,uVar3,uVar2);
    } while (param_2[(int)uVar3] != '\0');
    if (iVar4 < 2) {
      iVar4 = 1;
    }
  }
  return iVar4;
}


#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a8
 */

undefined * recovered_100019a8(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined *puVar1;

  if (param_1 == 0) {
    return &DAT_10002b97;
  }
  puVar1 = &DAT_10002b97;
  if (((-1 < param_2) && (*(long *)(param_1 + 0x358) != 0)) && (param_2 < *(int *)(param_1 + 0x42c))
     ) {
    puVar1 = (undefined *)
             (*(long *)(param_1 + 0x358) +
             (long)((*(int *)(param_1 + 0x428) + param_2) % 1000) * 0x100);
  }
  return puVar1;
}

#undef DAT_10002b97

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019fc
 */

int recovered_100019fc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_10001aec(param_1);
  iVar2 = 6;
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x380), iVar2 < 1)) {
    iVar2 = 6;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (PF_PART4(auVar3, 8) + -8) / iVar2;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a38
 */

ulong recovered_10001a38(long param_1,uint param_2,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;

  uVar3 = 0;
  if (((param_1 != 0) && (-1 < (int)param_2)) && (0 < (int)param_3)) {
    uVar3 = strlen((char *)(param_1 + (ulong)param_2));
    if ((int)param_3 < (int)uVar3) {
      uVar4 = 0xffffffff;
      for (uVar3 = 0;
          (param_3 != uVar3 && (cVar2 = ((char *)(param_1 + (ulong)param_2))[uVar3], cVar2 != '\0'))
          ; uVar3 = uVar3 + 1) {
        uVar1 = (uint)uVar3;
        if (cVar2 != '\t' && cVar2 != ' ') {
          uVar1 = uVar4;
        }
        uVar4 = uVar1;
      }
      if ((int)uVar4 < 1) {
        uVar4 = param_3;
      }
      uVar3 = (ulong)uVar4;
    }
  }
  return uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001abc
 */

int recovered_10001abc(long param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  param_3 = param_3 + param_2;
  for (pcVar1 = (char *)(param_1 + param_3); (param_1 != 0 && (*pcVar1 == ' ' || *pcVar1 == '\t'));
      pcVar1 = pcVar1 + 1) {
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001aec
 */

uint128 recovered_10001aec(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint128 auVar5;

  iVar2 = 0x2d2;
  if (param_1 == 0) {
    iVar3 = 0x15e;
  }
  else {
    iVar1 = *(int *)(param_1 + 900);
    iVar3 = iVar1 + 2;
    if (iVar1 < 1) {
      iVar3 = 0xc;
    }
    iVar2 = 0x2d2;
    if (*(int *)(param_1 + 4) != 0) {
      iVar2 = *(int *)(param_1 + 4) + -0x26;
    }
    iVar4 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar4 = *(int *)(param_1 + 8);
    }
    iVar3 = (iVar4 - iVar3) + -0x26;
    iVar4 = *(int *)(param_1 + 0x380) + 8;
    if (*(int *)(param_1 + 0x380) < 1) {
      iVar4 = 0xe;
    }
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    if (iVar1 < 1) {
      if (0xf < iVar3) goto LAB_10001b78;
      iVar4 = 0x10;
    }
    else {
      iVar4 = iVar1 + 6;
      if (iVar1 + 6 <= iVar3) goto LAB_10001b78;
    }
    iVar3 = iVar4;
  }
LAB_10001b78:
  PF_PART4(auVar5, 12) = iVar3;
  PF_PART4(auVar5, 8) = iVar2;
  PF_PART8(auVar5, 0) = 0xa0000001c;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b8c
 */

int recovered_10001b8c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;

  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x42c); iVar4 = iVar4 + 1) {
      pcVar2 = recovered_100019a8(param_1,iVar4);
      iVar1 = recovered_10001920(param_1,pcVar2);
      iVar3 = iVar1 + iVar3;
    }
  }
  return iVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bec
 */

int recovered_10001bec(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  auVar3 = recovered_10001aec(param_1);
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 900), iVar2 < 1)) {
    iVar2 = 10;
  }
  iVar1 = 0;
  if (iVar2 + 2 != 0) {
    iVar1 = PF_PART4(auVar3, 12) / (iVar2 + 2);
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c2c
 */

ulong recovered_10001c2c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint128 auVar9;

  uVar5 = 0;
  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + 0x36c);
    iVar3 = *(int *)(param_1 + 0x370);
    auVar9 = recovered_10001aec(param_1);
    bVar1 = recovered_10001e90(iVar7,iVar3,PF_PART8(auVar9, 0),PF_PART8(auVar9, 8));
    if (bVar1) {
      iVar8 = 0;
      iVar7 = *(int *)(param_1 + 900) + 2;
      if (*(int *)(param_1 + 900) < 1) {
        iVar7 = 0xc;
      }
      uVar2 = 0;
      if (iVar7 != 0) {
        uVar2 = ((iVar3 - PF_PART4(auVar9, 4)) + -2) / iVar7;
      }
      iVar7 = *(int *)(param_1 + 0x430) + (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      for (; iVar8 < *(int *)(param_1 + 0x42c); iVar8 = iVar8 + 1) {
        pcVar6 = recovered_100019a8(param_1,iVar8);
        iVar3 = recovered_10001920(param_1,pcVar6);
        if (iVar7 < iVar3) {
          pcVar6 = recovered_100019a8(param_1,iVar8);
          if (pcVar6 != (char *)0x0) goto LAB_10001cc8;
          goto LAB_10001ce0;
        }
        iVar7 = iVar7 - iVar3;
      }
    }
    pcVar6 = (char *)(param_1 + 0x388);
LAB_10001cc8:
    if (*pcVar6 == '\0') {
LAB_10001ce0:
      if (0 < *(int *)(param_1 + 0x42c)) {
        pcVar6 = recovered_100019a8(param_1,*(int *)(param_1 + 0x42c) + -1);
      }
    }
    uVar4 = strlen(pcVar6);
    bVar1 = recovered_10001830(0x180);
    uVar5 = (ulong)bVar1;
    if (bVar1) {
      uVar2 = UINT_82010980;
      if (uVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = (*(code *)(ulong)uVar2)(pcVar6,(uint)uVar4);
        uVar5 = (ulong)uVar2;
        if (uVar2 != 0) {
          uVar5 = 1;
          *(undefined1 *)(param_1 + 0x43c) = 1;
        }
      }
    }
  }
  return uVar5;
}


#undef UINT_82010984
#define UINT_82010984 (*(uint *)(0x82010984U))
#undef UINT_82010988
#define UINT_82010988 (*(uint *)(0x82010988U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d4c
 */

undefined8 recovered_10001d4c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  char *outText;
  ulong uVar7;
  ulong uVar8;

  bVar4 = recovered_10001830(0x188);
  if (!bVar4) {
    return (ulong)bVar4;
  }
  uVar5 = UINT_82010988;
  if (uVar5 != 0) {
    uVar5 = (*(code *)(ulong)uVar5)();
    if (param_1 == 0) {
      return 0;
    }
    if (uVar5 == 0) {
      return 0;
    }
    text = (char *)(param_1 + 0x388);
    uVar6 = strlen(text);
    if (uVar6 < 0x9f) {
      uVar3 = 0x9f - (int)uVar6;
      if (uVar3 <= uVar5) {
        uVar5 = uVar3;
      }
      outText = (char *)recovered_10001690((ulong)(uVar5 + 1));
      if (outText == (char *)0x0) {
        return 0;
      }
      bVar4 = recovered_10001830(0x184);
      if (bVar4) {
        uVar3 = UINT_82010984;
        if (uVar3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar5 = (*(code *)(ulong)uVar3)(outText,uVar5 + 1);
          uVar7 = (ulong)uVar5;
        }
      }
      else {
        uVar7 = 0;
        *outText = '\0';
      }
      uVar8 = 0;
      bVar4 = false;
      while ((uVar8 < uVar7 && (uVar6 < 0x9f))) {
        bVar2 = outText[uVar8];
        bVar1 = 0x20;
        if ((bVar2 & 0xfb) != 9 && bVar2 != 10) {
          bVar1 = bVar2;
        }
        if ((byte)(bVar1 - 0x20) < 0x5f) {
          text[uVar6] = bVar1;
          uVar6 = uVar6 + 1;
          bVar4 = true;
        }
        uVar8 = uVar8 + 1;
      }
      text[uVar6] = '\0';
      recovered_100016d8(outText);
      if (bVar4) {
        *(undefined1 *)(param_1 + 0x43c) = 1;
        return 1;
      }
    }
  }
  return 0;
}

#undef UINT_82010984
#undef UINT_82010988

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e90
 */

bool recovered_10001e90(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
 * Address: 0x10001ebc
 */

bool recovered_10001ebc(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(param_1 + 0x430);
  uVar2 = recovered_10001804(param_1);
  return (int)uVar2 <= iVar1;
}


#define local_130 (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ee0
 */

void recovered_10001ee0(long param_1,char *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;

  if ((param_2 == (char *)0x0) || (cVar1 = *param_2, cVar1 == '\0')) {
    return;
  }
  uVar2 = 0;
  do {
    param_2 = param_2 + 1;
    if (cVar1 == '\n') {
      local_130[uVar2] = '\0';
      recovered_10001718(param_1,local_130);
      uVar2 = 0;
    }
    else if (cVar1 != '\r') {
      if (cVar1 == '\0') {
        if (uVar2 == 0) {
          return;
        }
        local_130[uVar2] = '\0';
        recovered_10001718(param_1,local_130);
        return;
      }
      if (uVar2 + 1 < 0x100) {
        local_130[uVar2] = cVar1;
        uVar2 = uVar2 + 1;
      }
    }
    cVar1 = *param_2;
  } while( true );
}

#undef local_130

#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
#undef DAT_10002be1
#define DAT_10002be1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a1U)))
#undef DAT_10002c49
#define DAT_10002c49 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
#undef Ram0000000082010930
#define Ram0000000082010930 (*(uint32_t *)(0x82010930U))
#define acStack_27c (*(char (*)[128])(frame + 20))
#define auStack_1fc (*(undefined1 (*)[8])(frame + 148))
#define bStack_1f4 (*(byte *)(frame + 156))
#define acStack_a3 (*(char (*)[99])(frame + 493))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f74
 */

int recovered_10001f74(char *param_1,ulong param_2,undefined *in_x2)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  undefined *vararg1;
  uint uVar1;
  bool bVar2;
  int iVar3;

  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    pf_varargs_10002a4c_1(acStack_27c,0x80,&DAT_10002be1,((uintptr_t)pf_module_state + 0x20eU));
    memset(auStack_1fc,0,0x1bc);
    bVar2 = recovered_10001830(0x130);
    if ((((bVar2) && (uVar1 = Ram0000000082010930, uVar1 != 0)) &&
        (iVar3 = (*(code *)(ulong)uVar1)(auStack_1fc), iVar3 != 0)) &&
       (((bStack_1f4 >> 2 & 1) != 0 && (acStack_a3[0] != '\0')))) {
      pf_varargs_10002a4c_1(acStack_27c,0x80,&DAT_10002be1,(ulonglong)acStack_a3);
    }
    vararg1 = &DAT_10002b97;
    if (in_x2 != (undefined *)0x0) {
      vararg1 = in_x2;
    }
    iVar3 = pf_varargs_10002a4c_2
                      (param_1,param_2,&DAT_10002c49,(ulonglong)acStack_27c,(ulonglong)vararg1);
  }
  return iVar3;
}

#undef DAT_10002b97
#undef DAT_10002be1
#undef DAT_10002c49
#undef Ram0000000082010930
#undef acStack_27c
#undef auStack_1fc
#undef bStack_1f4
#undef acStack_a3

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002054
 */

bool recovered_10002054(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  if (param_1 == 0) {
    return true;
  }
  *(undefined1 *)(param_1 + 0x650) = 0;
  bVar1 = recovered_10001830(0x98);
  uVar2 = (uint)bVar1;
  if (bVar1) {
    uVar2 = UINT_82010898;
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)(ulong)uVar2)((char *)(param_1 + 0x450),(char *)(param_1 + 0x650),0x1000);
    }
  }
  *(uint *)(param_1 + 0x448) = uVar2;
  *(undefined4 *)(param_1 + 0x444) = 1;
  return *(int *)(param_1 + 0x448) == 0;
}


#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x157U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c0
 */

byte * recovered_100020c0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if (param_1 == (byte *)0x0) {
      return &DAT_10002b97;
    }
    if (0x20 < *param_1 || (1L << ((ulong)*param_1 & 0x3f) & 0x100002600U) == 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

#undef DAT_10002b97

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002100
 */

bool recovered_10002100(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;

  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    do {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) {
        return bVar2 == 0 && bVar3 == 0;
      }
      bVar1 = bVar2 | 0x20;
      if (0x19 < bVar2 - 0x41U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41U) {
        bVar2 = bVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar1 == bVar2);
  }
  return false;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002160
 */

bool recovered_10002160(char *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;

  if (param_2 == (byte *)0x0) {
    return false;
  }
  uVar3 = strlen(param_1);
  uVar4 = strlen((char *)param_2);
  if (uVar4 - 1 < uVar3) {
    lVar5 = -uVar4;
    do {
      bVar2 = lVar5 == 0;
      if (lVar5 == 0) {
        return true;
      }
      bVar1 = param_1[lVar5 + uVar3];
      uVar6 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar6 = (uint)bVar1;
      }
      bVar1 = *param_2;
      uVar7 = bVar1 | 0x20;
      if (0x19 < bVar1 - 0x41U) {
        uVar7 = (uint)bVar1;
      }
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 1;
    } while (uVar6 == uVar7);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f8
 */

uint128 recovered_100021f8(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint128 auVar2;
  uint128 auVar3;

  auVar3 = recovered_10001aec(in_x0);
  PF_PART8(auVar2, 0) = PF_PART8(auVar3, 0) & 0xffffffff00000000 | 10;
  lVar1 = 0x120000000c;
  if (0x15 < PF_PART4(auVar3, 12) + -0x1e) {
    lVar1 = (PF_PART8(auVar3, 8) & 0xffffffff00000000) - 0x21fffffff4;
  }
  PF_PART8(auVar2, 8) = lVar1;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000223c
 */

uint128 recovered_1000223c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint128 auVar8;
  uint128 auVar9;

  auVar8 = recovered_100021f8(param_1);
  uVar5 = PF_PART8(auVar8, 0) >> 0x20;
  uVar7 = PF_PART8(auVar8, 8) >> 0x20;
  iVar1 = recovered_10001bec(param_1);
  iVar2 = recovered_10001b8c(param_1);
  uVar3 = recovered_10001804(param_1);
  if (iVar1 < iVar2 && 0 < (int)uVar3) {
    uVar6 = PF_PART4(auVar8, 12);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = (int)(iVar1 * uVar6) / iVar2;
    }
    if ((int)uVar4 < 0x13) {
      uVar4 = 0x12;
    }
    if ((int)uVar6 <= (int)uVar4) {
      uVar4 = uVar6;
    }
    uVar7 = (ulong)uVar4;
    iVar1 = 0;
    if (uVar3 != 0) {
      iVar1 = (int)((uVar6 - uVar4) * *(int *)(param_1 + 0x430)) / (int)uVar3;
    }
    uVar5 = (ulong)(uint)(iVar1 + PF_PART4(auVar8, 4));
  }
  PF_PART8(auVar9, 8) = PF_PART8(auVar8, 8) & 0xffffffff | uVar7 << 0x20;
  PF_PART8(auVar9, 0) = PF_PART8(auVar8, 0) & 0xffffffff | uVar5 << 0x20;
  return auVar9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022f4
 */

uint128 recovered_100022f4(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_10001aec(in_x0);
  PF_PART8(auVar1, 8) = 0xe0000000c;
  PF_PART8(auVar1, 0) = ((PF_PART8(auVar2, 0) & 0xffffffff00000000) + PF_PART8(auVar2, 8) & 0xffffffff00000000) -
                 0x1dfffffff6;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002310
 */

void recovered_10002310(long param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar3 = *(int *)(param_1 + 0x430) + -1;
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x430) + 1;
  }
  *(int *)(param_1 + 0x430) = iVar3;
  uVar2 = *(uint *)(param_1 + 0x430);
  uVar4 = recovered_10001804(param_1);
  uVar1 = uVar2;
  if ((int)uVar4 <= (int)uVar2) {
    uVar1 = uVar4;
  }
  uVar4 = 0;
  if (-1 < (int)uVar2) {
    uVar4 = uVar1;
  }
  *(uint *)(param_1 + 0x430) = uVar4;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002328
 */

uint128 recovered_10002328(long in_x0)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;

  auVar2 = recovered_10001aec(in_x0);
  PF_PART8(auVar1, 8) = 0xe0000000c;
  PF_PART8(auVar1, 0) = ((PF_PART8(auVar2, 0) & 0xffffffff00000000) + PF_PART8(auVar2, 8) & 0xffffffff00000000) -
                 0xdfffffff6;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002344
 */

void recovered_10002344(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;

  uVar6 = 0x2f8;
  if (param_1 != 0) {
    uVar6 = 0x2f8;
    if (*(uint *)(param_1 + 4) != 0) {
      uVar6 = *(uint *)(param_1 + 4);
    }
  }
  uVar4 = (uint)param_2;
  uVar7 = uVar4;
  if ((int)uVar6 <= (int)uVar4) {
    uVar7 = uVar6;
  }
  uVar6 = 0;
  if (-1 < (int)uVar4) {
    uVar6 = uVar7;
  }
  uVar7 = 400;
  if (param_1 != 0) {
    uVar7 = 400;
    if (*(uint *)(param_1 + 8) != 0) {
      uVar7 = *(uint *)(param_1 + 8);
    }
  }
  uVar8 = (uint)((ulong)param_2 >> 0x20);
  uVar2 = uVar8;
  if ((int)uVar7 <= (int)uVar8) {
    uVar2 = uVar7;
  }
  uVar7 = 0;
  if (-1 < param_2) {
    uVar7 = uVar2;
  }
  iVar1 = uVar4 + (int)param_3;
  iVar9 = 0x2f8;
  if (param_1 != 0) {
    iVar9 = 0x2f8;
    if (*(int *)(param_1 + 4) != 0) {
      iVar9 = *(int *)(param_1 + 4);
    }
  }
  iVar10 = iVar1;
  if (iVar9 <= iVar1) {
    iVar10 = iVar9;
  }
  iVar9 = 0;
  if (-1 < iVar1) {
    iVar9 = iVar10;
  }
  iVar1 = uVar8 + (int)((ulong)param_3 >> 0x20);
  if (param_1 == 0) {
    iVar10 = 400;
  }
  else {
    iVar10 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar10 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = iVar1;
  if (iVar10 <= iVar1) {
    iVar3 = iVar10;
  }
  iVar10 = 0;
  if (-1 < iVar1) {
    iVar10 = iVar3;
  }
  for (; uVar4 = uVar6, (int)uVar7 < iVar10; uVar7 = uVar7 + 1) {
    for (; (int)uVar4 < iVar9; uVar4 = uVar4 + 1) {
      if (((param_1 != 0) && (-1 < (int)(uVar4 | uVar7))) && (*(long *)(param_1 + 0x350) != 0)) {
        iVar3 = *(int *)(param_1 + 4);
        iVar1 = 0x2f8;
        if (iVar3 != 0) {
          iVar1 = iVar3;
        }
        if ((int)uVar4 < iVar1) {
          iVar1 = 400;
          if (*(int *)(param_1 + 8) != 0) {
            iVar1 = *(int *)(param_1 + 8);
          }
          if ((int)uVar7 < iVar1) {
            uVar2 = 0xbe0;
            if (iVar3 != 0) {
              uVar2 = iVar3 << 2;
            }
            if (*(uint *)(param_1 + 0xc) != 0) {
              uVar2 = *(uint *)(param_1 + 0xc);
            }
            lVar5 = (ulong)uVar4 * 4 + (ulong)uVar7 * (ulong)uVar2;
            *(char *)(*(long *)(param_1 + 0x350) + lVar5) = (char)param_4;
            *(char *)(*(long *)(param_1 + 0x350) + lVar5 + 1) = (char)((uint)param_4 >> 8);
            *(char *)(*(long *)(param_1 + 0x350) + lVar5 + 2) = (char)((uint)param_4 >> 0x10);
            *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar5 + 3) = 0xd9;
          }
        }
      }
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024b0
 */

void recovered_100024b0(long param_1,ulong param_2,ulong param_3,uint param_4)

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
  uint unaff_w21;
  uint uVar9;
  ulong uVar10;

  uVar10 = param_3 & 0xffffffff | 0x100000000;
  recovered_10002678(param_1,param_2,uVar10,param_4 & 0xffffff);
  recovered_10002678(param_1,((param_3 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             param_2 & 0xffffffff) - 0x100000000,uVar10,param_4 & 0xffffff);
  recovered_10002678(param_1,param_2,param_3 & 0xffffffff00000000 | 1,param_4 & 0xffffff);
  iVar1 = (int)param_3 + (int)param_2;
  uVar9 = iVar1 - 1;
  uVar6 = 0x2f8;
  if (param_1 != 0) {
    uVar6 = 0x2f8;
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
  uVar7 = 400;
  if (param_1 != 0) {
    uVar7 = 400;
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
  iVar8 = 0x2f8;
  if (param_1 != 0) {
    iVar8 = 0x2f8;
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
  iVar5 = 400;
  if (param_1 != 0) {
    iVar5 = 400;
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
  for (; uVar9 = uVar6, (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
    for (; (int)uVar9 < iVar8; uVar9 = uVar9 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10002780(param_1,uVar9,uVar7,unaff_w21);
    }
  }
  return;
}


#define lStack_78 (*(long *)(frame + 24))
#define uStack_6c (*(uint *)(frame + 36))
#define uStack_68 (*(uint *)(frame + 40))
#define uStack_64 (*(uint *)(frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002558
 */

void recovered_10002558(long param_1,uint param_2,int param_3,long param_4,ulong param_5,
                       uint param_6)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  if ((param_4 != 0) && (uVar4 = param_5 & 0xffffffff, 0 < (int)(uint)param_5)) {
    memset(&lStack_78,0,0x18);
    uVar1 = (param_6 & 0xff00ff00 | 0xff000000) >> 8 | (param_6 & 0xff00ff) << 8;
    uVar1 = recovered_1000187c((char *)param_4,(uint)param_5,uVar1 >> 0x10 | uVar1 << 0x10,
                               &lStack_78);
    if (uVar1 != 0) {
      if (lStack_78 != 0) {
        for (uVar5 = 0; uVar5 < uStack_68; uVar5 = uVar5 + 1) {
          lVar7 = lStack_78;
          uVar1 = param_2;
          for (uVar6 = 0; uVar6 < uStack_6c; uVar6 = uVar6 + 1) {
            lVar3 = uVar5 * uStack_64;
            if (*(char *)(lVar7 + lVar3 + 3) != '\0') {
              lVar2 = lVar7 + uVar5 * uStack_64;
              uVar4 = uVar4 & 0xffffffffff000000 | (ulong)*(byte *)(lVar7 + lVar3) |
                      (ulong)*(byte *)(lVar2 + 1) << 8 | (ulong)*(byte *)(lVar2 + 2) << 0x10;
              recovered_10002780(param_1,uVar1,(int)uVar5 + param_3,(int)uVar4);
            }
            lVar7 = lVar7 + 4;
            uVar1 = uVar1 + 1;
          }
        }
      }
      recovered_100018e8(&lStack_78);
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002678
 */

void recovered_10002678(long param_1,long param_2,undefined8 param_3,uint param_4)

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

  uVar7 = 0x2f8;
  if (param_1 != 0) {
    uVar7 = 0x2f8;
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
  uVar8 = 400;
  if (param_1 != 0) {
    uVar8 = 400;
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
  iVar9 = 0x2f8;
  if (param_1 != 0) {
    iVar9 = 0x2f8;
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
  iVar6 = 400;
  if (param_1 != 0) {
    iVar6 = 400;
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
  for (; uVar4 = uVar7, (int)uVar8 < iVar6; uVar8 = uVar8 + 1) {
    for (; (int)uVar4 < iVar9; uVar4 = uVar4 + 1) {
      unaff_w21 = unaff_w21 & 0xff000000 | param_4 & 0xffffff;
      recovered_10002780(param_1,uVar4,uVar8,unaff_w21);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002780
 */

void recovered_10002780(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;

  if (((param_1 != 0) && (-1 < (int)(param_3 | param_2))) && (*(long *)(param_1 + 0x350) != 0)) {
    iVar3 = *(int *)(param_1 + 4);
    iVar1 = 0x2f8;
    if (iVar3 != 0) {
      iVar1 = iVar3;
    }
    if ((int)param_2 < iVar1) {
      iVar1 = 400;
      if (*(int *)(param_1 + 8) != 0) {
        iVar1 = *(int *)(param_1 + 8);
      }
      if ((int)param_3 < iVar1) {
        uVar2 = 0xbe0;
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002820
 */

void recovered_10002820(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong param_5
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
    recovered_10002678(param_1,CONCAT44(iVar2 + (int)((ulong)param_2 >> 0x20) +
                                        (int)((ulong)param_3 >> 0x20) / 2 + (int)lVar3,
                                        ((int)param_3 / 2 + (int)param_2) - iVar1),
                       (ulong)(uint)(iVar1 << 1) | 0x100000001,(uint)param_5 & 0xffffff);
    iVar4 = iVar4 + -1;
  }
  return;
}

