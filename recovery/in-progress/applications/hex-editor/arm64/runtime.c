/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004ea8
#define DAT_10004ea8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef DAT_10004ed3
#define DAT_10004ed3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2e3U)))
#undef DAT_10005090
#define DAT_10005090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_100058b9
#define DAT_100058b9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcc9U)))
#undef DAT_100058be
#define DAT_100058be (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcceU)))
#undef DAT_100058c3
#define DAT_100058c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcd3U)))
#undef DAT_100058c8
#define DAT_100058c8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcd8U)))
#undef UINT_8201082c
#define UINT_8201082c (*(uint *)(0x8201082cU))
#undef UINT_82010984
#define UINT_82010984 (*(uint *)(0x82010984U))
#undef UINT_82010a30
#define UINT_82010a30 (*(uint *)(0x82010a30U))
#undef str_10004ee5
#define str_10004ee5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2f5U)))
#undef str_10004ef0
#define str_10004ef0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x300U)))
#undef str_10004f14
#define str_10004f14 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x324U)))
#undef str_10004fcc
#define str_10004fcc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3dcU)))
#undef str_10004fd2
#define str_10004fd2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e2U)))
#undef str_10004fd8
#define str_10004fd8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e8U)))
#undef str_100057dc
#define str_100057dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbecU)))
#undef str_100057e6
#define str_100057e6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbf6U)))
#undef str_10005811
#define str_10005811 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc21U)))
#undef str_1000582c
#define str_1000582c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3cU)))
#undef str_1000583f
#define str_1000583f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4fU)))
#undef str_10005879
#define str_10005879 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc89U)))
#undef str_10005887
#define str_10005887 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc97U)))
#undef str_100058b2
#define str_100058b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc2U)))
#undef str_100058cc
#define str_100058cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcdcU)))
#undef str_100058d6
#define str_100058d6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xce6U)))
#undef str_100058dd
#define str_100058dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcedU)))
#undef str_10005927
#define str_10005927 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd37U)))
#undef str_1000593e
#define str_1000593e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4eU)))
#undef str_10005952
#define str_10005952 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd62U)))
#undef str_1000595e
#define str_1000595e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd6eU)))
#undef str_10005966
#define str_10005966 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd76U)))
#undef str_10005977
#define str_10005977 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd87U)))
#undef str_100059a6
#define str_100059a6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdb6U)))
#undef str_100059b2
#define str_100059b2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdc2U)))
#define auStack_6c40 (*(undefined1 (*)[27712])(pf_stack_frame + 16))
#define uStack_6c18 (*(uint *)(pf_stack_frame + 56))
#define iStack_6c14 (*(int *)(pf_stack_frame + 60))
#define iStack_6c10 (*(int *)(pf_stack_frame + 64))
#define iStack_6c0c (*(int *)(pf_stack_frame + 68))
#define iStack_6c08 (*(int *)(pf_stack_frame + 72))
#define uStack_6c04 (*(uint *)(pf_stack_frame + 76))
#define auStack_69c8 (*(undefined1 (*)[27080])(pf_stack_frame + 648))
#define uStack_6988 (*(uint *)(pf_stack_frame + 712))
#define uStack_6980 (*(undefined8 *)(pf_stack_frame + 720))
#define uStack_6978 (*(uint *)(pf_stack_frame + 728))
#define uStack_6974 (*(uint *)(pf_stack_frame + 732))
#define pvStack_6950 (*(void * *)(pf_stack_frame + 768))
#define uStack_6938 (*(undefined4 *)(pf_stack_frame + 792))
#define auStack_6630 (*(undefined1 (*)[26160])(pf_stack_frame + 1568))
#define uStack_6620 (*(ulonglong *)(pf_stack_frame + 1584))
#define uStack_6618 (*(ulonglong *)(pf_stack_frame + 1592))
#define lStack_6600 (*(long *)(pf_stack_frame + 1616))
#define uStack_65f8 (*(ulong *)(pf_stack_frame + 1624))
#define uStack_65e8 (*(ulong *)(pf_stack_frame + 1640))
#define uStack_65e0 (*(ulong *)(pf_stack_frame + 1648))
#define iStack_65d8 (*(int *)(pf_stack_frame + 1656))
#define uStack_65c0 (*(undefined8 *)(pf_stack_frame + 1680))
#define uStack_65b8 (*(undefined8 *)(pf_stack_frame + 1688))
#define uStack_65b0 (*(undefined4 *)(pf_stack_frame + 1696))
#define lStack_65a8 (*(long *)(pf_stack_frame + 1704))
#define uStack_65a0 (*(uint *)(pf_stack_frame + 1712))
#define uStack_659c (*(uint *)(pf_stack_frame + 1716))
#define uStack_6590 (*(ulonglong *)(pf_stack_frame + 1728))
#define uStack_6588 (*(ulong *)(pf_stack_frame + 1736))
#define uStack_6580 (*(ulong *)(pf_stack_frame + 1744))
#define iStack_6578 (*(int *)(pf_stack_frame + 1752))
#define uStack_6574 (*(uint *)(pf_stack_frame + 1756))
#define uStack_6570 (*(uint *)(pf_stack_frame + 1760))
#define uStack_656c (*(undefined8 *)(pf_stack_frame + 1764))
#define uStack_6564 (*(uint *)(pf_stack_frame + 1772))
#define iStack_6560 (*(int *)(pf_stack_frame + 1776))
#define iStack_655c (*(int *)(pf_stack_frame + 1780))
#define iStack_6558 (*(int *)(pf_stack_frame + 1784))
#define cStack_6554 (*(char *)(pf_stack_frame + 1788))
#define bStack_6553 (*(byte *)(pf_stack_frame + 1789))
#define cStack_6552 (*(char *)(pf_stack_frame + 1790))
#define bStack_6551 (*(byte *)(pf_stack_frame + 1791))
#define uStack_6550 (*(undefined2 *)(pf_stack_frame + 1792))
#define bStack_654e (*(byte *)(pf_stack_frame + 1794))
#define uStack_654d (*(undefined1 *)(pf_stack_frame + 1795))
#define bStack_654c (*(byte *)(pf_stack_frame + 1796))
#define bStack_654b (*(byte *)(pf_stack_frame + 1797))
#define cStack_654a (*(char *)(pf_stack_frame + 1798))
#define uStack_6549 (*(undefined1 *)(pf_stack_frame + 1799))
#define uStack_6548 (*(uint *)(pf_stack_frame + 1800))
#define iStack_6544 (*(int *)(pf_stack_frame + 1804))
#define uStack_6540 (*(ulong *)(pf_stack_frame + 1808))
#define iStack_6538 (*(int *)(pf_stack_frame + 1816))
#define uStack_6534 (*(undefined4 *)(pf_stack_frame + 1820))
#define abStack_6530 (*(byte (*)[25904])(pf_stack_frame + 1824))
#define abStack_34ac (*(byte (*)[13484])(pf_stack_frame + 14244))
#define auStack_426 (*(undefined1 (*)[1062])(pf_stack_frame + 26666))
#define auStack_380 (*(undefined4 (*)[224])(pf_stack_frame + 26832))
#define bStack_370 (*(byte *)(pf_stack_frame + 26848))
#define cStack_36f (*(char *)(pf_stack_frame + 26849))
#define uStack_358 (*(undefined8 *)(pf_stack_frame + 26872))
#define uStack_350 (*(undefined8 *)(pf_stack_frame + 26880))
#define abStack_244 (*(byte (*)[580])(pf_stack_frame + 27148))
#define uStack_240 (*(uint *)(pf_stack_frame + 27152))
#define iStack_230 (*(int *)(pf_stack_frame + 27168))
#define iStack_22c (*(int *)(pf_stack_frame + 27172))
#define iStack_21c (*(int *)(pf_stack_frame + 27188))
#define auStack_1c4 (*(undefined8 (*)[56])(pf_stack_frame + 27276))
#define uStack_1b4 (*(uint *)(pf_stack_frame + 27292))
#define auStack_1b0 (*(undefined1 (*)[432])(pf_stack_frame + 27296))
#define uStack_19c (*(undefined8 *)(pf_stack_frame + 27316))
#define uStack_194 (*(undefined8 *)(pf_stack_frame + 27324))
#define uStack_18c (*(undefined8 *)(pf_stack_frame + 27332))
#define lStack_184 (*(long *)(pf_stack_frame + 27340))
#define uStack_17c (*(undefined8 *)(pf_stack_frame + 27348))
#define uStack_174 (*(undefined8 *)(pf_stack_frame + 27356))
#define uStack_16c (*(undefined4 *)(pf_stack_frame + 27364))
#define iStack_168 (*(int *)(pf_stack_frame + 27368))
#define uStack_164 (*(undefined8 *)(pf_stack_frame + 27372))
#define auStack_db (*(undefined1 (*)[219])(pf_stack_frame + 27509))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005a0
 */

int recovered_100005a0(int argc,char **argv)

{
  unsigned char pf_stack_frame[27760] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *text;
  undefined *puVar2;
  ulonglong arg4;
  char *pcVar3;
  int iVar4;
  void *pixels;
  char cVar5;
  bool bVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *src;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulonglong arg6;
  uint uVar23;
  byte *pbVar24;
  char *pcVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  uint128 auVar30;

  thunk_memset(&uStack_6980,0,0x6600);
  uStack_6548 = 0xffffffff;
  uStack_6564 = 0x10;
  uStack_656c = DAT_10004ea8;
  iStack_65d8 = 1;
  uVar14 = recovered_10002064();
  uStack_65b0 = (undefined4)uVar14;
  thunk_pf_app_window_spec(auStack_69c8,str_10004ee5,1000,0x26c);
  uStack_6988 = uStack_6988 | 1;
  uVar8 = thunk_terror_ui_window_open(&uStack_6980,auStack_69c8);
  if (uVar8 == 0) {
    bVar6 = recovered_1000243c(0x28);
    if (bVar6) {
      uVar8 = UINT_82010828;
      if (uVar8 != 0) {
        (*(code *)(ulong)uVar8)(str_10004ef0);
      }
    }
    iVar9 = 1;
  }
  else {
    text = abStack_34ac + 1;
    terror_ui_window_set_custom_menus(&uStack_6980,str_10004f14);
    recovered_1000209c((long)&uStack_6980);
    recovered_10002168((long)&uStack_6980);
    if (argv != (char **)0x0) {
      for (lVar28 = 1; lVar28 < argc; lVar28 = lVar28 + 1) {
        pcVar25 = argv[lVar28];
        if (pcVar25 != (char *)0x0) {
          iVar9 = thunk_strncmp(pcVar25,str_10004fcc,5);
          if ((iVar9 == 0) || (iVar9 = thunk_strncmp(pcVar25,str_10004fd2,5), iVar9 == 0)) {
            pcVar25 = pcVar25 + 5;
          }
          if (*pcVar25 != '\0') {
            recovered_100021b4((long)&uStack_6980,pcVar25,0);
            break;
          }
        }
      }
    }
    bStack_654b = 1;
    uVar8 = 1;
    uVar23 = 0;
    do {
      terror_ui_window_begin_frame(&uStack_6980);
      thunk_memset(auStack_6c40,0,0x278);
      uVar10 = thunk_terror_ui_window_query(&uStack_6980,auStack_6c40);
      if ((uVar10 == 0) || ((uStack_6c18 >> 4 & 1) != 0)) break;
      if ((uStack_6c18 & 1) != 0) {
        if (cStack_6552 != '\x01') break;
        thunk_terror_ui_window_configure((uint)uStack_6980,iStack_6c14,iStack_6c10,0xb,10);
        uStack_6c18 = uStack_6c18 & 0xfffffffc | 10;
        uStack_6938 = 0;
        recovered_1000236c((long)&uStack_6980,str_10004fd8);
        uVar8 = 1;
      }
      uVar13 = uStack_6978;
      uVar10 = PF_PART4(uStack_6980, 4);
      uVar11 = thunk_terror_ui_window_sync_buffer(&uStack_6980,auStack_6c40);
      if (uVar11 == 0) break;
      if (iStack_6c0c == iStack_6578) {
        uVar8 = (uVar10 != PF_PART4(uStack_6980, 4) || uVar13 != uStack_6978) | uVar8;
        goto LAB_100008e8;
      }
      if (iStack_6c0c == 0) goto switchD_10000850_default;
      iStack_6578 = iStack_6c0c;
      if (iStack_6c08 == 3) {
        if (uStack_6c04 == 2) {
          uVar16 = 5;
LAB_100008e0:
          recovered_10002f24((long)&uStack_6980,uVar16);
        }
        else if (uStack_6c04 == 1) {
          recovered_1000209c((long)&uStack_6980);
        }
        else {
          if (uStack_6c04 == 0) {
            uVar16 = 4;
            goto LAB_100008e0;
          }
          if (uStack_6c04 < 6) {
            recovered_10003608((long)&uStack_6980,uStack_6c04 - 3);
          }
        }
        goto switchD_10000850_default;
      }
      if (iStack_6c08 != 2) {
        if (iStack_6c08 == 1) {
          switch((uintptr_t)(uStack_6c04)) {
          case 0:
            recovered_10002168((long)&uStack_6980);
            break;
          case 1:
            uVar8 = 1;
            recovered_10002f24((long)&uStack_6980,1);
            goto LAB_100008e8;
          case 2:
            recovered_10003018((long)&uStack_6980);
            break;
          case 3:
            recovered_100030d4((long)&uStack_6980);
            break;
          case 4:
            uVar16 = 3;
            goto LAB_100008e0;
          }
        }
        goto switchD_10000850_default;
      }
      switch((uintptr_t)(uStack_6c04)) {
      case 0:
        recovered_10003298((long)&uStack_6980,0);
        break;
      case 1:
        uVar8 = 1;
        recovered_10003298((long)&uStack_6980,1);
        goto LAB_100008e8;
      case 2:
        recovered_100033b4((long)&uStack_6980,0);
        break;
      case 3:
        uVar8 = 1;
        recovered_100033b4((long)&uStack_6980,1);
        goto LAB_100008e8;
      case 4:
        recovered_100035a4((long)&uStack_6980);
        break;
      case 5:
        uStack_65e0 = 0;
        uStack_65e8 = uStack_65f8;
      }
switchD_10000850_default:
      uVar8 = 1;
LAB_100008e8:
      bStack_654e = 0;
      thunk_memset(abStack_244,0,0x30);
      uVar10 = (uint)uStack_6980;
      bVar6 = recovered_1000243c(0x230);
      if (bVar6) {
        uVar13 = UINT_82010a30;
        if ((uVar13 == 0) || (iVar9 = (*(code *)(ulong)uVar13)(uVar10,abStack_244), iVar9 == 0))
        goto LAB_10000934;
LAB_10000944:
        iVar12 = iStack_22c;
        iVar9 = iStack_230;
        if ((abStack_244[0] >> 2 & 1) == 0) {
          uStack_6550 = 0;
          bStack_654c = 0;
          iStack_6560 = iStack_21c;
        }
        else {
          recovered_10003e0c((long)&uStack_6980,&bStack_370);
          if ((abStack_244[0] >> 1 & 1) == 0) {
            bStack_654e = false;
          }
          else {
            bStack_654e = recovered_10003ea0(iVar9,iVar12,uStack_358,uStack_350);
          }
          uVar10 = uStack_240;
          if ((cStack_6554 == '\x01') && (iStack_21c != iStack_6560)) {
            lVar29 = (long)iStack_21c - (long)iStack_6560;
            lVar28 = -lVar29;
            if (-1 < lVar29) {
              lVar28 = lVar29;
            }
            uVar26 = lVar28 * 3;
            uVar15 = (ulong)uStack_659c;
            if (cStack_654a == '\0') {
              uVar15 = uStack_6580;
            }
            if (lVar29 < 1) {
              uVar21 = recovered_10003ecc((long)&uStack_6980);
              if (uVar26 <= uVar21 - uVar15 && uVar15 < uVar21) {
                uVar21 = uVar15 + uVar26;
              }
            }
            else {
              uVar21 = 0;
              if (uVar26 <= uVar15) {
                uVar21 = uVar15 + lVar28 * -3;
              }
            }
            recovered_10003efc((long)&uStack_6980,uVar21);
            uVar13 = 1;
          }
          else {
            uVar13 = 0;
          }
          cStack_6554 = '\x01';
          iStack_6560 = iStack_21c;
          if ((uVar10 & 1) == 0) {
            uStack_6550 = 0;
          }
          else {
            if ((bStack_654c & 1) == 0) {
              if ((iVar12 < 10 || PF_PART4(uStack_656c, 4) + 0x14 <= iVar12) ||
                 (iVar9 < (int)uStack_656c * 8 + 10)) {
                if (PF_PART4(uStack_656c, 4) + 0x1c <= iVar12) {
                  iVar19 = PF_PART4(uStack_656c, 4) * 2;
                  if (iVar19 < 0x25) {
                    iVar19 = 0x24;
                  }
                  if (iVar12 < iVar19 + 0x24) {
                    auVar30 = recovered_10003f84((long)&uStack_6980,0);
                    bVar6 = recovered_10003ea0(iVar9,iVar12,PF_PART8(auVar30, 0),PF_PART8(auVar30, 8));
                    if (bVar6) {
                      bStack_6553 = bStack_6553 ^ 1;
                      uStack_6548 = 0xffffffff;
                    }
                    else {
                      auVar30 = recovered_10003f84((long)&uStack_6980,1);
                      bVar6 = recovered_10003ea0(iVar9,iVar12,PF_PART8(auVar30, 0),PF_PART8(auVar30, 8));
                      if (bVar6) {
                        recovered_10003608((long)&uStack_6980,(iStack_65d8 + 1U) % 3);
                      }
                      else {
                        auVar30 = recovered_10003f84((long)&uStack_6980,2);
                        bVar6 = recovered_10003ea0(iVar9,iVar12,PF_PART8(auVar30, 0),PF_PART8(auVar30, 8));
                        if (bVar6) {
                          recovered_10003018((long)&uStack_6980);
                        }
                        else {
                          auVar30 = recovered_10003f84((long)&uStack_6980,3);
                          bVar6 = recovered_10003ea0(iVar9,iVar12,PF_PART8(auVar30, 0),PF_PART8(auVar30, 8));
                          if (bVar6) {
                            recovered_10002f24((long)&uStack_6980,5);
                          }
                        }
                      }
                    }
                    goto LAB_10000b70;
                  }
                }
                recovered_10003e0c((long)&uStack_6980,auStack_1c4);
                recovered_100040e4((long)&uStack_6980,auStack_380);
                cVar5 = cStack_654a;
                uVar13 = uStack_659c;
                uVar15 = (ulong)uStack_659c;
                if (cStack_654a == '\0') {
                  uVar15 = uStack_6580;
                }
                bVar6 = recovered_10003ea0(iVar9,iVar12,uStack_18c,lStack_184);
                if (bVar6) {
                  uVar26 = 0;
                  if (uVar15 != 0) {
                    uVar26 = uVar15 - 1;
                  }
LAB_10000b24:
                  recovered_10003efc((long)&uStack_6980,uVar26);
                }
                else {
                  bVar6 = recovered_10003ea0(iVar9,iVar12,uStack_17c,uStack_174);
                  if (bVar6) {
                    uVar26 = recovered_10003ecc((long)&uStack_6980);
                    if (uVar15 < uVar26) {
                      uVar26 = uVar15 + 1;
                    }
                    goto LAB_10000b24;
                  }
                  bVar6 = recovered_10003ea0(iVar9,iVar12,uStack_19c,uStack_194);
                  uVar14 = uStack_164;
                  iVar19 = iStack_168;
                  if (!bVar6) {
                    if (cVar5 != '\0') {
                      iVar19 = PF_PART4(uStack_656c, 4) * 2;
                      if (iVar19 < 0x25) {
                        iVar19 = 0x24;
                      }
                      iVar19 = PF_PART4(uStack_656c, 4) + iVar19 + 0x30;
                      if (iVar19 <= iVar12) {
                        iVar22 = 0;
                        if (PF_PART4(uStack_656c, 4) + 4 != 0) {
                          iVar22 = (iVar12 - iVar19) / (PF_PART4(uStack_656c, 4) + 4);
                        }
                        if ((iVar22 + uVar13 < uStack_65a0) &&
                           (uVar14 = recovered_10002ce8((long)&uStack_6980,
                                                        (ulong)*(uint *)(lStack_65a8 +
                                                                        (ulong)(iVar22 + uVar13) * 4
                                                                        )), (int)uVar14 != 0)) {
                          iStack_6544 = 0;
                        }
                        goto LAB_10000b70;
                      }
                    }
                    uVar14 = recovered_10004018((long)&uStack_6980,iVar9,iVar12,0);
                    uVar13 = 1;
                    if ((int)uVar14 != 0) {
                      iStack_6544 = 0;
                      uStack_6550 = CONCAT11(PF_PART1(uStack_6550, 1),1);
                    }
                    goto LAB_10000b74;
                  }
                  bVar6 = recovered_10003ea0(iVar9,iVar12,CONCAT44(iStack_168,uStack_16c),uStack_164
                                            );
                  if (bVar6) {
                  }
                  else {
                    uVar13 = thunk_terror_ui_scrollbar_value_from_point(auStack_1b0,auStack_380,iVar12,
                                                (int)((ulong)uVar14 >> 0x20) / 2);
                    uVar15 = recovered_10003ecc((long)&uStack_6980);
                    if (uVar15 >> 0x1f == 0) {
                      uVar15 = (ulong)(int)uVar13;
                    }
                    else {
                      if (0x7ffffffe < uVar13) {
                        uVar13 = 0x7fffffff;
                      }
                      uVar15 = ((uVar15 % 0x7fffffff) * (ulong)uVar13) / 0x7fffffff +
                               (uVar15 / 0x7fffffff) * (ulong)uVar13;
                    }
                    recovered_10003efc((long)&uStack_6980,uVar15);
                    recovered_10003e0c((long)&uStack_6980,auStack_1c4);
                    iVar19 = iStack_168;
                  }
                  uStack_6550 = 0x100;
                  iStack_655c = iVar12 - iVar19;
                  iStack_6558 = iVar12;
                }
                uStack_6550 = uStack_6550 & 0xff00;
              }
              else {
                if (iStack_6544 == 0) {
                  recovered_10002f24((long)&uStack_6980,1);
                }
                uVar15 = thunk_strlen((char *)text);
                uVar13 = 0;
                if ((int)uStack_656c != 0) {
                  uVar13 = (iVar9 + (int)uStack_656c * -8 + -0x10) / (int)uStack_656c;
                }
                uStack_6540 = CONCAT44(uStack_6534,iStack_6538) +
                              (ulong)(uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU));
                if (uVar15 <= uStack_6540) {
                  uStack_6540 = uVar15;
                }
              }
LAB_10000b70:
              uVar13 = 1;
            }
LAB_10000b74:
            if (PF_PART1(uStack_6550, 1) == '\x01') {
              if (iStack_6558 == iVar12) {
                uVar11 = 0;
              }
              else {
                recovered_10003e0c((long)&uStack_6980,auStack_1c4);
                recovered_100040e4((long)&uStack_6980,auStack_380);
                uVar11 = thunk_terror_ui_scrollbar_value_from_point(auStack_1b0,auStack_380,iVar12,iStack_655c);
                iStack_6558 = iVar12;
                uVar15 = recovered_10003ecc((long)&uStack_6980);
                if (uVar15 >> 0x1f == 0) {
                  uVar15 = (ulong)(int)uVar11;
                }
                else {
                  if (0x7ffffffe < uVar11) {
                    uVar11 = 0x7fffffff;
                  }
                  uVar15 = ((uVar15 % 0x7fffffff) * (ulong)uVar11) / 0x7fffffff +
                           (uVar15 / 0x7fffffff) * (ulong)uVar11;
                }
                uVar15 = recovered_10003efc((long)&uStack_6980,uVar15);
                uVar11 = (uint)uVar15;
              }
            }
            else {
              if ((char)uStack_6550 != '\x01') goto LAB_10000c3c;
              iVar19 = PF_PART4(uStack_656c, 4) * 2;
              iVar22 = iVar19;
              if (iVar19 < 0x25) {
                iVar22 = 0x24;
              }
              iVar22 = PF_PART4(uStack_656c, 4) + iVar22 + 0x30;
              iVar19 = iVar19 + 8;
              if (iVar19 < 0x23) {
                iVar19 = 0x22;
              }
              iVar4 = (uStack_6978 - iVar19) + -9;
              iVar19 = iVar12;
              if (iVar4 <= iVar12) {
                iVar19 = iVar4;
              }
              if (iVar22 <= iVar12) {
                iVar22 = iVar19;
              }
              uVar14 = recovered_10004018((long)&uStack_6980,iVar9,iVar22,1);
              uVar11 = (uint)uVar14;
            }
            uVar13 = uVar13 | uVar11;
          }
LAB_10000c3c:
          bStack_654c = (byte)(uVar10 & 1);
          uVar8 = uVar13 | uVar8;
        }
      }
      else {
LAB_10000934:
        uVar10 = thunk_terror_ui_window_pointer_state(&uStack_6980,abStack_244);
        if (uVar10 != 0) goto LAB_10000944;
      }
      if (((byte)uStack_6c18 >> 1 & 1) != 0) {
        iVar9 = 0;
        while ((iVar9 != 0x20 && (bVar6 = recovered_1000243c(0x2c), bVar6))) {
          uVar10 = UINT_8201082c;
          if (uVar10 == 0) break;
          uVar10 = (*(code *)(ulong)uVar10)();
          uVar13 = uStack_6564;
          if (uVar10 == 0) break;
          if (((uVar10 | uVar10 >> 8) & 0xff) == 0) goto LAB_10001218;
          uVar8 = uVar10 >> 8 & 0xff;
          if (iStack_6544 != 0) {
            uVar15 = thunk_strlen((char *)text);
            if ((uVar10 & 0x60000) != 0) {
              uVar10 = uVar10 & 0xff;
              if (((uVar8 == 0x2f || uVar10 == 0x16) || (uVar10 == 0x76)) || (uVar10 == 0x56)) {
                src = (undefined1 *)recovered_10002ae4(0x30001);
                if (src == (undefined1 *)0x0) goto LAB_10001214;
                bVar6 = recovered_1000243c(0x184);
                if (bVar6) {
                  uVar8 = UINT_82010984;
                  if (((uVar8 != 0) && (uVar8 = (*(code *)(ulong)uVar8)(src,0x30001), uVar8 != 0))
                     && ((ulong)uVar8 < 0x3085 - uVar15)) {
                    uVar26 = (ulong)uVar8;
                    lVar28 = memchr(src,0,uVar26);
                    if (lVar28 == 0) {
                      thunk_memmove(text + uStack_6540 + uVar26,text + uStack_6540,
                                         (uVar15 - uStack_6540) + 1);
                      thunk_memcpy(text + uStack_6540,src,uVar26);
                      uStack_6540 = uStack_6540 + uVar26;
                    }
                  }
                }
                else {
                  *src = 0;
                }
                recovered_100023fc(src);
              }
              goto switchD_10000e88_default;
            }
            uVar8 = uVar10 & 0xff;
            if (uVar8 == 8) {
LAB_10000e98:
              if (uStack_6540 != 0) {
                thunk_memmove(abStack_34ac + uStack_6540,text + uStack_6540,
                                   (uVar15 - uStack_6540) + 1);
                uStack_6540 = uStack_6540 - 1;
              }
              goto switchD_10000e88_default;
            }
            if (uVar8 == 10 || uVar8 == 0xd) {
              switch((uintptr_t)(iStack_6544)) {
              case 1:
                iVar12 = 0;
                break;
              case 2:
                iVar12 = 1;
                break;
              case 3:
                uVar15 = recovered_10003708((long)&uStack_6980,(char *)text);
                if ((uVar15 & 1) == 0) goto switchD_10000e88_default;
                goto LAB_10001068;
              case 4:
                uVar15 = recovered_10002484((long)&uStack_6980,(char *)text);
                goto joined_r0x10001050;
              case 5:
                uVar8 = (uint)abStack_34ac[1];
                pbVar24 = text;
                if (abStack_34ac[1] == 0x30) {
                  if ((abStack_34ac[2] | 0x20) == 0x78) {
                    uVar8 = (uint)abStack_34ac[3];
                    uVar15 = 0x10;
                    pbVar24 = abStack_34ac + 3;
                    if (abStack_34ac[3] == 0) goto LAB_100011fc;
                  }
                  else {
                    uVar8 = 0x30;
                    uVar15 = 10;
                  }
LAB_100011a0:
                  uVar26 = 0;
                  while (pbVar24 = pbVar24 + 1, uVar8 != 0) {
                    uVar8 = recovered_10003d2c(uVar8);
                    if ((int)uVar8 < 0) goto LAB_100011fc;
                    uVar21 = 0;
                    if (uVar15 != 0) {
                      uVar21 = ~(ulong)uVar8 / uVar15;
                    }
                    if ((uint)uVar15 <= uVar8 || uVar21 < uVar26) goto LAB_100011fc;
                    uVar26 = (ulong)uVar8 + uVar26 * uVar15;
                    uVar8 = (uint)*pbVar24;
                  }
                  lVar28 = 0x3f0;
                  if (bStack_6551 == 0) {
                    lVar28 = 0x388;
                  }
                  if (uVar26 <= *(ulong *)((long)&uStack_6980 + lVar28)) {
                    uVar14 = recovered_100042e0((long)&uStack_6980,uVar26,0);
                    if ((int)uVar14 != 0) goto LAB_10001068;
                    goto switchD_10000e88_default;
                  }
                }
                else {
                  uVar15 = 10;
                  if (abStack_34ac[1] != 0) goto LAB_100011a0;
                }
LAB_100011fc:
                pcVar25 = str_100057e6;
                goto LAB_10001208;
              default:
                goto switchD_10000e88_default;
              }
              uVar15 = recovered_100021b4((long)&uStack_6980,(char *)text,iVar12);
joined_r0x10001050:
              if ((uVar15 & 1) != 0) {
LAB_10001068:
                iStack_6544 = 0;
                cStack_654a = '\0';
              }
            }
            else {
              if (uVar8 == 0x7f) goto LAB_10000e98;
              if (uVar8 != 0x1b) {
                uVar8 = (uVar10 >> 8) - 0x47;
                uVar13 = uVar8 >> 1 & 0x7f;
                uVar8 = uVar8 * 0x80;
                if ((uVar13 | uVar8 & 0xff) < 7) {
                    /* WARNING: Could not recover jumptable at 0x10000ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  iVar9 = (*(code *)((ulong)(byte)(&DAT_10004ed3)[(ulong)(uVar13 | uVar8) & 0xff] *
                                     4 + 0x10000efc))();
                  return iVar9;
                }
                if ((uVar10 - 0x20 & 0xff) < 0x5f && uVar15 + 1 < 0x3085) {
                  thunk_memmove(abStack_34ac + uStack_6540 + 2,text + uStack_6540,
                                     (uVar15 + 1) - uStack_6540);
                  text[uStack_6540] = (byte)uVar10;
                  uStack_6540 = uStack_6540 + 1;
                }
                goto switchD_10000e88_default;
              }
              iStack_6544 = 0;
              cStack_654a = '\0';
              pcVar25 = str_100057dc;
LAB_10001208:
              recovered_1000236c((long)&uStack_6980,pcVar25);
            }
switchD_10000e88_default:
            recovered_10003654((long)&uStack_6980);
            goto LAB_10001214;
          }
          PF_PART4(auStack_1c4[0], 0) = CONCAT31(PF_PART3(auStack_1c4[0], 1),(byte)uVar10);
          if ((uVar10 & 0x60000) != 0) {
            uVar13 = uVar10 & 0xff;
            if (((uVar8 == 0x2e || uVar13 == 3) || (uVar13 == 99)) || (uVar13 == 0x43)) {
              recovered_10003298((long)&uStack_6980,(uint)bStack_6553);
            }
            else {
              uVar13 = uVar10 & 0xff;
              if (((uVar8 == 0x2f || uVar13 == 0x16) || (uVar13 == 0x76)) || (uVar13 == 0x56)) {
                recovered_100033b4((long)&uStack_6980,(ulong)bStack_6553);
              }
              else {
                uVar13 = uVar10 & 0xff;
                if (((uVar8 == 0x2d || uVar13 == 0x18) || (uVar13 == 0x78)) || (uVar13 == 0x58)) {
                  recovered_100035a4((long)&uStack_6980);
                  goto LAB_10001214;
                }
                uVar13 = uVar10 & 0xff;
                if (((uVar8 != 0x1e && uVar13 != 1) && (uVar13 != 0x61)) && (uVar13 != 0x41)) {
                  uVar13 = uVar10 & 0xff;
                  if (((uVar8 == 0x1f || uVar13 == 0x13) || (uVar13 == 0x73)) || (uVar13 == 0x53)) {
                    if ((uVar10 >> 0x10 & 1) == 0) {
                      recovered_100030d4((long)&uStack_6980);
                      goto LAB_10001214;
                    }
                    uVar16 = 3;
                  }
                  else {
                    uVar13 = uVar10 & 0xff;
                    if (((uVar8 != 0x18 && uVar13 != 0xf) && (uVar13 != 0x6f)) && (uVar13 != 0x4f))
                    {
                      uVar13 = uVar10 & 0xff;
                      if (((uVar8 == 0x31 || uVar13 == 0xe) || (uVar13 == 0x6e)) || (uVar13 == 0x4e)
                         ) {
                        recovered_10002168((long)&uStack_6980);
                      }
                      else {
                        uVar10 = uVar10 & 0xff;
                        if (((uVar8 == 0x22 || uVar10 == 7) || (uVar10 == 0x67)) || (uVar10 == 0x47)
                           ) {
                          uVar16 = 5;
                          goto LAB_10001340;
                        }
                      }
                      goto LAB_10001214;
                    }
                    uVar16 = 1;
                  }
LAB_10001340:
                  recovered_10002f24((long)&uStack_6980,uVar16);
                  goto LAB_10001214;
                }
                uStack_65e0 = 0;
                uStack_65e8 = uStack_65f8;
                uStack_6548 = 0xffffffff;
                pcVar25 = str_10005811;
                if (bStack_6551 == 0) {
                  pcVar25 = str_1000582c;
                }
LAB_100012e4:
                recovered_1000236c((long)&uStack_6980,pcVar25);
              }
            }
            goto LAB_10001214;
          }
          if (10 < uVar8 - 0x47) {
switchD_10000e10_caseD_4a:
            if ((uVar10 & 0xff) == 9) {
              bStack_6553 = bStack_6553 ^ 1;
              goto LAB_10000f1c;
            }
            if (uVar8 == 0x52) {
              recovered_10003608((long)&uStack_6980,(iStack_65d8 + 1U) % 3);
            }
            else if ((uVar10 & 0xff) == 0x1b) {
              uStack_6548 = 0xffffffff;
              uStack_65e0 = uStack_65e8;
              uStack_6549 = 0;
            }
            else if ((uVar8 == 0x53) || ((uVar10 & 0xff) == 0x7f || (uVar10 & 0xff) == 8)) {
              pcVar25 = str_1000583f;
              if ((bStack_6551 & 1) == 0) {
                uVar14 = recovered_10003d5c(&lStack_6600,(uint)(uVar8 != 0x53));
                if ((int)uVar14 == 0) goto LAB_10000f1c;
                cStack_6552 = '\x01';
                pcVar25 = str_10005879;
              }
              recovered_1000236c((long)&uStack_6980,pcVar25);
LAB_10000f1c:
              uStack_6548 = 0xffffffff;
            }
            else if (bStack_6553 == 1) {
              if ((uVar10 - 0x20 & 0xff) < 0x5f) {
                pbVar24 = (byte *)auStack_1c4;
              }
              else {
                if ((uVar10 & 0xff) != 0xd && (uVar10 & 0xff) != 10) goto LAB_10001214;
                bStack_370 = 10;
                pbVar24 = &bStack_370;
              }
              recovered_1000383c((long)&uStack_6980,(long)pbVar24,1);
            }
            else {
              uVar8 = recovered_10003d2c(uVar10 & 0xff);
              if (-1 < (int)uVar8) {
                if ((int)uStack_6548 < 0) {
                  pcVar25 = str_10005887;
                  uStack_6548 = uVar8;
                  goto LAB_100012e4;
                }
                bStack_370 = (byte)uVar8 | (byte)(uStack_6548 << 4);
                recovered_1000383c((long)&uStack_6980,(long)&bStack_370,1);
                goto LAB_10000f1c;
              }
            }
            goto LAB_10001214;
          }
          uVar15 = uStack_65e8 + uStack_6588;
          switch((uintptr_t)(uVar8)) {
          case 0x47:
            uVar21 = (ulong)uStack_6564;
            uVar26 = 0;
            if (uVar21 != 0) {
              uVar26 = uVar15 / uVar21;
            }
            uVar15 = uVar26 * uVar21;
            break;
          case 0x48:
            uVar8 = uStack_6564;
            goto LAB_10000fcc;
          case 0x49:
            iVar12 = recovered_10003c9c((long)&uStack_6980);
            uVar8 = iVar12 * uVar13;
LAB_10000fcc:
            bVar6 = uVar8 <= uVar15;
            uVar26 = uVar15 - uVar8;
LAB_10000fd8:
            uVar15 = 0;
            if (bVar6) {
              uVar15 = uVar26;
            }
            break;
          default:
            goto switchD_10000e10_caseD_4a;
          case 0x4b:
            bVar6 = uVar15 != 0;
            uVar26 = uVar15 - 1;
            goto LAB_10000fd8;
          case 0x4d:
            lVar28 = 0x3f0;
            if (bStack_6551 == 0) {
              lVar28 = 0x388;
            }
            if (uVar15 < *(ulong *)((long)&uStack_6980 + lVar28)) {
              uVar15 = uVar15 + 1;
            }
            break;
          case 0x4f:
            uVar26 = (ulong)uStack_6564;
            uVar21 = 0;
            if (uVar26 != 0) {
              uVar21 = uVar15 / uVar26;
            }
            lVar28 = 0x3f0;
            if (bStack_6551 == 0) {
              lVar28 = 0x388;
            }
            uVar20 = *(ulong *)((long)&uStack_6980 + lVar28);
            uVar26 = uVar26 + (uVar21 * uVar26 - uVar15);
            uVar21 = uVar26 + uVar15;
            uVar18 = uVar20 - uVar15;
            bVar6 = uVar15 < uVar20;
            uVar15 = uVar20;
            if (uVar26 <= uVar18 && bVar6) {
              uVar15 = uVar21;
            }
            break;
          case 0x50:
            lVar28 = 0x3f0;
            if (bStack_6551 == 0) {
              lVar28 = 0x388;
            }
            uVar26 = *(ulong *)((long)&uStack_6980 + lVar28);
            uVar8 = uStack_6564;
            goto LAB_10000fa8;
          case 0x51:
            iVar12 = recovered_10003c9c((long)&uStack_6980);
            lVar28 = 0x3f0;
            if (bStack_6551 == 0) {
              lVar28 = 0x388;
            }
            uVar26 = *(ulong *)((long)&uStack_6980 + lVar28);
            uVar8 = iVar12 * uVar13;
LAB_10000fa8:
            uVar20 = uVar26 - uVar15;
            uVar21 = uVar15 + uVar8;
            bVar6 = uVar15 < uVar26;
            uVar15 = uVar26;
            if (uVar8 <= uVar20 && bVar6) {
              uVar15 = uVar21;
            }
          }
          recovered_100042e0((long)&uStack_6980,uVar15,uVar10 >> 0x10 & 1);
LAB_10001214:
          uVar8 = 1;
LAB_10001218:
          iVar9 = iVar9 + 1;
        }
      }
      uVar13 = uStack_6570;
      uVar10 = uStack_6574 / 0x50 & 1;
      bVar6 = iStack_6544 != 0;
      if (((bStack_654e & 1) == 0) && ((uStack_6550 & 0x100) == 0)) {
        if (uStack_6570 != 0) {
          iVar9 = -1;
          goto LAB_100014c4;
        }
        uVar11 = 0;
      }
      else {
        uVar11 = uStack_6570;
        if (uStack_6570 < 0x20) {
          iVar9 = 1;
LAB_100014c4:
          uStack_6570 = iVar9 + uStack_6570;
          uVar11 = uStack_6570;
        }
      }
      iVar9 = recovered_100043a0(uVar13);
      iVar12 = recovered_100043a0(uVar11);
      if ((bVar6 && uVar10 != uVar23 || (uVar8 & 1) != 0) || iVar9 != iVar12) {
        if ((bVar6 && uVar10 != uVar23 || (uVar8 & 1) != 0) ||
           (uVar7 = terror_ui_scrollbar_restore(auStack_6630,&uStack_6980), uVar7 == '\0')) {
          uVar23 = uStack_6978;
          uVar8 = PF_PART4(uStack_6980, 4);
          iVar9 = 0;
          if ((int)uStack_656c << 2 != 0) {
            iVar9 = (int)(PF_PART4(uStack_6980, 4) + (int)uStack_656c * -0x13 + -0x36) /
                    ((int)uStack_656c << 2);
          }
          if (iVar9 < 0x40) {
            if (iVar9 < 0x20) {
              if (iVar9 < 0x10) {
                uVar15 = 4;
                if (iVar9 < 4) {
                  uVar15 = 1;
                }
                uVar26 = 8;
                if (iVar9 < 8) {
                  uVar26 = uVar15;
                }
              }
              else {
                uVar26 = 0x10;
              }
            }
            else {
              uVar26 = 0x20;
            }
          }
          else {
            uVar26 = 0x40;
          }
          uVar21 = (ulong)uStack_6564;
          uStack_6564 = (uint)uVar26;
          uVar15 = 0;
          if (uVar26 != 0) {
            uVar15 = (uStack_6580 * uVar21) / uVar26;
          }
          uStack_6580 = uVar15;
          uVar26 = recovered_10003ce8((long)&uStack_6980);
          uStack_6580 = uVar15;
          if (uVar26 <= uVar15) {
            uStack_6580 = uVar26;
          }
          if (iStack_6544 != 0) {
            recovered_10003654((long)&uStack_6980);
          }
          recovered_100043e0((long)&uStack_6980,0,0,uVar8,uVar23,0x1f);
          iVar9 = PF_PART4(uStack_656c, 4) * 2;
          if (iVar9 < 0x25) {
            iVar9 = 0x24;
          }
          recovered_100043e0((long)&uStack_6980,0,0,uVar8,iVar9 + 0x24,0x2d);
          iVar9 = PF_PART4(uStack_656c, 4) * 2;
          if (iVar9 < 0x25) {
            iVar9 = 0x24;
          }
          recovered_100043e0((long)&uStack_6980,0,iVar9 + 0x23,uVar8,1,3);
          pcVar25 = &DAT_100058b9;
          if (iStack_6544 != 4) {
            pcVar25 = &DAT_100058be;
          }
          pcVar3 = str_100058b2;
          if (iStack_6544 != 5) {
            pcVar3 = pcVar25;
          }
          recovered_100044b4((long)&uStack_6980,10,0x11,(long)pcVar3,0x31);
          uVar13 = (int)uStack_656c * 8 + 10;
          iVar12 = (uVar8 - uVar13) + -0x16;
          iVar9 = PF_PART4(uStack_656c, 4) + 10;
          uVar11 = 2;
          if (iStack_6544 != 0) {
            uVar11 = 0x1f;
          }
          recovered_100043e0((long)&uStack_6980,uVar13,10,iVar12,iVar9,(ulong)uVar11);
          uVar11 = 3;
          if (iStack_6544 != 0) {
            uVar11 = 4;
          }
          recovered_1000451c((long)&uStack_6980,(ulong)uVar13 | 0xa00000000,CONCAT44(iVar9,iVar12),
                             (ulong)uVar11);
          pbVar24 = abStack_6530;
          if (iStack_6544 != 0) {
            pbVar24 = text + CONCAT44(uStack_6534,iStack_6538);
          }
          recovered_100044b4((long)&uStack_6980,(int)uStack_656c * 8 + 0x10,0xf,(long)pbVar24,1);
          if ((iStack_6544 != 0) && ((uStack_6574 / 0x50 & 1) == 0)) {
            recovered_100043e0((long)&uStack_6980,
                               (((int)uStack_6540 - iStack_6538) + 8) * (int)uStack_656c + 0x10,0xe,
                               1,PF_PART4(uStack_656c, 4) + 2,4);
          }
          puVar2 = &DAT_100058c3;
          if (bStack_6553 == 0) {
            puVar2 = &DAT_100058c8;
          }
          recovered_100045c4((long)&uStack_6980,0,(long)puVar2);
          pcVar25 = str_100058cc;
          if ((bStack_6551 & 1) == 0) {
            if (iStack_65d8 == 0) {
              pcVar25 = str_100058d6;
            }
            else {
              pcVar25 = str_100058dd;
              if (iStack_65d8 != 1) {
                pcVar25 = str_100058cc;
              }
            }
          }
          recovered_100045c4((long)&uStack_6980,1,(long)pcVar25);
          recovered_100045c4((long)&uStack_6980,2,((uintptr_t)pf_module_state + 0xcf4U));
          recovered_100045c4((long)&uStack_6980,3,((uintptr_t)pf_module_state + 0xcfcU));
          iVar9 = PF_PART4(uStack_656c, 4) * 2;
          if (iVar9 < 0x25) {
            iVar9 = 0x24;
          }
          if (cStack_654a == '\x01') {
            recovered_100044b4((long)&uStack_6980,0x12,iVar9 + 0x2a,((uintptr_t)pf_module_state + 0xd02U),0x31);
            for (iVar9 = 0;
                (iVar12 = recovered_10003c9c((long)&uStack_6980), iVar9 < iVar12 &&
                (iVar9 + uStack_659c < uStack_65a0)); iVar9 = iVar9 + 1) {
              uVar15 = (ulong)*(uint *)(lStack_65a8 + (ulong)(iVar9 + uStack_659c) * 4);
              thunk_memset(auStack_1c4,0,0x15c);
              PF_PART4(auStack_1c4[0], 0) = 0x15c;
              uVar14 = recovered_10002e58(uVar15,auStack_1c4);
              if (((int)uVar14 != 0) &&
                 (uVar14 = recovered_10002a8c(uVar15,abStack_244), -1 < (int)uVar14)) {
                pcVar25 = &DAT_10005090;
                if ((uStack_1b4 & 8) != 0) {
                  pcVar25 = str_1000593e;
                }
                thunk_snprintf((char *)&bStack_370,300,str_10005927,abStack_244,auStack_db,
                                   lStack_184 << 9,pcVar25);
                iVar12 = PF_PART4(uStack_656c, 4) * 2;
                if (iVar12 < 0x25) {
                  iVar12 = 0x24;
                }
                recovered_100044b4((long)&uStack_6980,0x12,
                                   PF_PART4(uStack_656c, 4) + iVar12 + (PF_PART4(uStack_656c, 4) + 4) * iVar9 +
                                   0x30,(long)&bStack_370,1);
              }
            }
          }
          else {
            recovered_100044b4((long)&uStack_6980,0x12,iVar9 + 0x2a,((uintptr_t)pf_module_state + 0xd5bU),0x31);
            iVar9 = PF_PART4(uStack_656c, 4) * 2;
            if (iVar9 < 0x25) {
              iVar9 = 0x24;
            }
            pcVar25 = str_10005952;
            if ((int)uStack_6564 < 4) {
              pcVar25 = &DAT_100058c8;
            }
            recovered_100044b4((long)&uStack_6980,(int)uStack_656c * 0x11 + 0x12,iVar9 + 0x2a,
                               (long)pcVar25,0x31);
            iVar9 = PF_PART4(uStack_656c, 4) * 2;
            if (iVar9 < 0x25) {
              iVar9 = 0x24;
            }
            recovered_100044b4((long)&uStack_6980,(uStack_6564 * 3 + 0x13) * (int)uStack_656c + 0x12
                               ,iVar9 + 0x2a,((uintptr_t)pf_module_state + 0xcd3U),0x31);
            iVar9 = PF_PART4(uStack_656c, 4) * 2;
            iVar12 = iVar9;
            if (iVar9 < 0x25) {
              iVar12 = 0x24;
            }
            iVar9 = iVar9 + 8;
            if (iVar9 < 0x23) {
              iVar9 = 0x22;
            }
            recovered_100043e0((long)&uStack_6980,(uStack_6564 * 3 + 0x12) * (int)uStack_656c + 0x12
                               ,iVar12 + 0x24,1,((uVar23 - iVar12) - iVar9) + -0x2c,0x15);
            uVar15 = 0;
            uVar26 = uStack_65e0;
            if (uStack_65e8 <= uStack_65e0) {
              uVar26 = uStack_65e8;
            }
            uVar21 = uStack_65e0;
            if (uStack_65e0 <= uStack_65e8) {
              uVar21 = uStack_65e8;
            }
            bVar6 = uStack_65f8 < uVar21;
            while( true ) {
              iVar9 = recovered_10003c9c((long)&uStack_6980);
              uVar20 = uStack_6580;
              if ((long)iVar9 <= (long)uVar15) break;
              uVar27 = (ulong)uStack_6564;
              uVar18 = (uStack_6580 + uVar15) * uVar27;
              lVar28 = 0x3f0;
              if (bStack_6551 == 0) {
                lVar28 = 0x388;
              }
              if (*(ulong *)((long)&uStack_6980 + lVar28) < uVar18) break;
              thunk_snprintf((char *)auStack_1c4,0x14,str_1000595e,uVar18);
              iVar9 = PF_PART4(uStack_656c, 4) * 2;
              if (iVar9 < 0x25) {
                iVar9 = 0x24;
              }
              iVar9 = PF_PART4(uStack_656c, 4) + iVar9 + (PF_PART4(uStack_656c, 4) + 4) * (int)uVar15;
              if ((uVar15 & 1) != 0) {
                recovered_100043e0((long)&uStack_6980,0,iVar9 + 0x2f,uVar8 - 0x14,
                                   PF_PART4(uStack_656c, 4) + 4,0x2c);
              }
              uVar13 = iVar9 + 0x30;
              recovered_10004684((long)&uStack_6980,0x12,uVar13,(long)auStack_1c4,0x10,0x31);
              lVar29 = (uVar20 + uVar15) * uVar27;
              for (lVar28 = 0; uVar20 = uStack_6588, lVar28 < (int)uStack_6564; lVar28 = lVar28 + 1)
              {
                if ((uStack_6588 <= (ulong)(lVar29 + lVar28)) &&
                   ((ulong)(lVar29 + lVar28) <= uStack_65f8 + uStack_6588)) {
                  uVar18 = (lVar29 + lVar28) - uStack_6588;
                  iVar12 = (int)uStack_656c * (int)lVar28;
                  uVar11 = (int)uStack_656c * 0x11 + iVar12 * 3 + 0x12;
                  uVar1 = iVar12 + (int)uStack_656c * (uStack_6564 * 3 + 0x13) + 0x12;
                  if (uVar21 > uVar18 && (uVar18 >= uVar26 && (uVar21 > uVar26 && !bVar6))) {
                    recovered_100043e0((long)&uStack_6980,uVar11,iVar9 + 0x2f,(int)uStack_656c << 1,
                                       PF_PART4(uStack_656c, 4) + 4,0x2b);
                    recovered_100043e0((long)&uStack_6980,uVar1,iVar9 + 0x2f,(int)uStack_656c,
                                       PF_PART4(uStack_656c, 4) + 4,0x2b);
                  }
                  if (uVar18 < uStack_65f8) {
                    abStack_244[0] = *(byte *)((lStack_6600 - uVar20) + lVar29 + lVar28);
                    bStack_370 = str_10005966[abStack_244[0] >> 4];
                    cStack_36f = str_10005966[(ulong)abStack_244[0] & 0xf];
                    if (0x5eU < (uint)(abStack_244[0] - 0x20)) {
                      abStack_244[0] = 0x2e;
                    }
                    uVar17 = 0xe;
                    if (uVar21 <= uVar18 || (uVar18 < uVar26 || (uVar21 <= uVar26 || bVar6))) {
                      uVar17 = 1;
                    }
                    recovered_10004684((long)&uStack_6980,uVar11,uVar13,(long)&bStack_370,2,
                                       (ulong)uVar17);
                    recovered_10004684((long)&uStack_6980,uVar1,uVar13,(long)abStack_244,1,
                                       (ulong)uVar17);
                  }
                  if ((uVar18 == uStack_65e8) && (iStack_6544 == 0)) {
                    if (bStack_6553 == 0) {
                      uVar1 = uVar11;
                    }
                    recovered_100043e0((long)&uStack_6980,uVar1,iVar9 + 0x31 + PF_PART4(uStack_656c, 4),
                                       (int)uStack_656c << (ulong)((bStack_6553 ^ 1) & 0x1f),2,4);
                    if (-1 < (int)uStack_6548) {
                      bStack_370 = str_10005966[uStack_6548];
                      recovered_100043e0((long)&uStack_6980,uVar11,uVar13,(int)uStack_656c << 1,
                                         PF_PART4(uStack_656c, 4),2);
                      recovered_10004684((long)&uStack_6980,uVar11,uVar13,(long)&bStack_370,1,4);
                    }
                  }
                }
              }
              uVar15 = uVar15 + 1;
            }
          }
          iVar9 = PF_PART4(uStack_656c, 4) * 2 + 8;
          if (iVar9 < 0x23) {
            iVar9 = 0x22;
          }
          recovered_100043e0((long)&uStack_6980,0,uVar23 - (iVar9 + 8),uVar8,iVar9 + 8,0x2d);
          iVar9 = PF_PART4(uStack_656c, 4) * 2 + 8;
          if (iVar9 < 0x23) {
            iVar9 = 0x22;
          }
          recovered_100043e0((long)&uStack_6980,0,(uVar23 - iVar9) - 8,uVar8,1,3);
          uVar15 = uStack_65e0;
          if (uStack_65e8 <= uStack_65e0) {
            uVar15 = uStack_65e8;
          }
          uVar26 = uStack_65e0;
          if (uStack_65e0 <= uStack_65e8) {
            uVar26 = uStack_65e8;
          }
          pcVar25 = str_100059a6;
          if (cStack_6552 == '\0') {
            pcVar25 = &DAT_10005090;
          }
          arg6 = uVar26 - uVar15;
          if (uStack_65f8 < uVar26 || uVar26 <= uVar15) {
            arg6 = 0;
          }
          arg4 = uStack_6590;
          if (bStack_6551 == 0) {
            arg4 = uStack_65f8;
          }
          pcVar3 = str_100059b2;
          if (bStack_6551 == 0) {
            pcVar3 = &DAT_10005090;
          }
          thunk_snprintf((char *)auStack_1c4,0xa0,str_10005977,pcVar25,arg4,
                             uStack_6588 + uStack_65e8,arg6,pcVar3);
          iVar9 = PF_PART4(uStack_656c, 4) * 2 + 8;
          if (iVar9 < 0x23) {
            iVar9 = 0x22;
          }
          recovered_100044b4((long)&uStack_6980,10,(uVar23 - iVar9) + -5,(long)auStack_1c4,0x31);
          recovered_100044b4((long)&uStack_6980,10,(uVar23 - PF_PART4(uStack_656c, 4)) + -3,
                             (long)auStack_426,1);
          recovered_100023a0((long)&uStack_6980);
          pixels = pvStack_6950;
          uVar13 = uStack_6974;
          uVar23 = uStack_6978;
          uVar8 = PF_PART4(uStack_6980, 4);
          uVar11 = thunk_terror_ui_colour(0);
          thunk_terror_ui_window_present(&uStack_6980,str_10004ee5,pixels,uVar8,uVar23,uVar13,uVar11);
        }
        else {
          uStack_654d = 1;
          recovered_100023a0((long)&uStack_6980);
          uStack_654d = 0;
          pf_app_terror_ui_window_present_rect(&uStack_6980,uStack_6620,uStack_6618);
        }
      }
      uStack_6574 = uStack_6574 + 1;
      uVar8 = 0x14;
      if ((uStack_6c18 & 2) != 0) {
        uVar8 = 5;
      }
      uVar23 = 2;
      if (0x1e < uStack_6570 - 1) {
        uVar23 = uVar8;
      }
      thunk_terror_ui_yield_frames(uVar23);
      uVar8 = 0;
      uVar23 = uVar10;
    } while ((bStack_654b & 1) != 0);
    recovered_100023fc(lStack_6600);
    recovered_100023fc(uStack_65b8);
    recovered_100023fc(uStack_65c0);
    recovered_100023fc(lStack_65a8);
    terror_ui_scrollbar_release(auStack_6630);
    thunk_terror_ui_window_close(&uStack_6980);
    iVar9 = 0;
  }
  return iVar9;
}

#undef DAT_10004ea8
#undef DAT_10004ed3
#undef DAT_10005090
#undef DAT_100058b9
#undef DAT_100058be
#undef DAT_100058c3
#undef DAT_100058c8
#undef UINT_8201082c
#undef UINT_82010984
#undef UINT_82010a30
#undef str_10004ee5
#undef str_10004ef0
#undef str_10004f14
#undef str_10004fcc
#undef str_10004fd2
#undef str_10004fd8
#undef str_100057dc
#undef str_100057e6
#undef str_10005811
#undef str_1000582c
#undef str_1000583f
#undef str_10005879
#undef str_10005887
#undef str_100058b2
#undef str_100058cc
#undef str_100058d6
#undef str_100058dd
#undef str_10005927
#undef str_1000593e
#undef str_10005952
#undef str_1000595e
#undef str_10005966
#undef str_10005977
#undef str_100059a6
#undef str_100059b2
#undef auStack_6c40
#undef uStack_6c18
#undef iStack_6c14
#undef iStack_6c10
#undef iStack_6c0c
#undef iStack_6c08
#undef uStack_6c04
#undef auStack_69c8
#undef uStack_6988
#undef uStack_6980
#undef uStack_6978
#undef uStack_6974
#undef pvStack_6950
#undef uStack_6938
#undef auStack_6630
#undef uStack_6620
#undef uStack_6618
#undef lStack_6600
#undef uStack_65f8
#undef uStack_65e8
#undef uStack_65e0
#undef iStack_65d8
#undef uStack_65c0
#undef uStack_65b8
#undef uStack_65b0
#undef lStack_65a8
#undef uStack_65a0
#undef uStack_659c
#undef uStack_6590
#undef uStack_6588
#undef uStack_6580
#undef iStack_6578
#undef uStack_6574
#undef uStack_6570
#undef uStack_656c
#undef uStack_6564
#undef iStack_6560
#undef iStack_655c
#undef iStack_6558
#undef cStack_6554
#undef bStack_6553
#undef cStack_6552
#undef bStack_6551
#undef uStack_6550
#undef bStack_654e
#undef uStack_654d
#undef bStack_654c
#undef bStack_654b
#undef cStack_654a
#undef uStack_6549
#undef uStack_6548
#undef iStack_6544
#undef uStack_6540
#undef iStack_6538
#undef uStack_6534
#undef abStack_6530
#undef abStack_34ac
#undef auStack_426
#undef auStack_380
#undef bStack_370
#undef cStack_36f
#undef uStack_358
#undef uStack_350
#undef abStack_244
#undef uStack_240
#undef iStack_230
#undef iStack_22c
#undef iStack_21c
#undef auStack_1c4
#undef uStack_1b4
#undef auStack_1b0
#undef uStack_19c
#undef uStack_194
#undef uStack_18c
#undef lStack_184
#undef uStack_17c
#undef uStack_174
#undef uStack_16c
#undef iStack_168
#undef uStack_164
#undef auStack_db

#undef UINT_820108bc
#define UINT_820108bc (*(uint *)(0x820108bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002064
 */

undefined8 recovered_10002064(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_1000243c(0xbc);
  if ((bVar1) && (uVar2 = UINT_820108bc, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)();
    return (ulong)uVar2;
  }
  return 0xffffffff;
}

#undef UINT_820108bc

#undef DAT_10004ea8
#define DAT_10004ea8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2b8U)))
#undef DAT_1000503c
#define DAT_1000503c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44cU)))
#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
#undef str_10005017
#define str_10005017 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x427U)))
#undef str_10005029
#define str_10005029 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x439U)))
#define uStack_2c (*(ulong *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

void recovered_1000209c(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10002484(param_1,str_10005017);
  if ((int)uVar1 != 0) {
    thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10005225);
    return;
  }
  recovered_100023fc(*(undefined8 *)(param_1 + 0x3c0));
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  thunk_memset((void *)(param_1 + 0x3b0),0,0x10);
  *(ulong *)(param_1 + 0x414) = 0x1000000008;
  thunk_memset(&uStack_38,0,0x18);
  uVar1 = recovered_100025ec(&DAT_1000503c,1,0,&uStack_38);
  if ((int)uVar1 != 0) {
    *(ulong *)(param_1 + 0x414) =
         uStack_2c ^
         (uStack_2c ^ DAT_10004ea8) &
         CONCAT44(-(uint)((int)(uStack_2c >> 0x20) == 0),-(uint)((int)uStack_2c == 0));
    recovered_100023fc(uStack_38);
  }
  recovered_1000236c(param_1,str_10005029);
  return;
}

#undef DAT_10004ea8
#undef DAT_1000503c
#undef DAT_10005225
#undef str_10005017
#undef str_10005029
#undef uStack_2c
#undef uStack_38

#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
#undef str_10005096
#define str_10005096 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4a6U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002168
 */

void recovered_10002168(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = recovered_10002b28(param_1);
  if ((int)uVar1 == 0) {
    return;
  }
  recovered_10002b70(param_1);
  *(undefined8 *)(param_1 + 0x388) = 0;
  uVar1 = recovered_10002064();
  recovered_10002bb4(uVar1,str_10005096,(char *)(param_1 + 0x450));
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10005225);
  return;
}

#undef DAT_10005225
#undef str_10005096

#undef DAT_100050f3
#define DAT_100050f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x503U)))
#undef str_100050f8
#define str_100050f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x508U)))
#undef str_1000511f
#define str_1000511f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52fU)))
#undef str_10005135
#define str_10005135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x545U)))
#undef str_1000516b
#define str_1000516b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57bU)))
#undef str_10005185
#define str_10005185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x595U)))
#undef str_100051ca
#define str_100051ca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5daU)))
#undef str_100051ef
#define str_100051ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5ffU)))
#undef str_10005203
#define str_10005203 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x613U)))
#undef str_10005219
#define str_10005219 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x629U)))
#define acStack_6161 (*(char (*)[24929])(pf_stack_frame + 31))
#define uStack_30dc (*(uint *)(pf_stack_frame + 12452))
#define uStack_30d8 (*(uint *)(pf_stack_frame + 12456))
#define uStack_30d4 (*(uint *)(pf_stack_frame + 12460))
#define bStack_30d0 (*(byte *)(pf_stack_frame + 12464))
#define acStack_30c9 (*(char (*)[12489])(pf_stack_frame + 12471))
#define auStack_1ac (*(undefined8 (*)[53])(pf_stack_frame + 24532))
#define uStack_19c (*(undefined4 *)(pf_stack_frame + 24548))
#define iStack_178 (*(int *)(pf_stack_frame + 24584))
#define iStack_16c (*(int *)(pf_stack_frame + 24596))
#define uStack_168 (*(uint *)(pf_stack_frame + 24600))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 24888))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021b4
 */

undefined8 recovered_100021b4(long param_1,char *param_2,int param_3)

{
  unsigned char pf_stack_frame[24992] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *src;
  void *dst;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong n;
  ulong uVar8;

  uVar2 = recovered_10002924(param_2);
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0x7fffffff) {
    thunk_memset(auStack_1ac,0,0x15c);
    PF_PART4(auStack_1ac[0], 0) = 0x15c;
    uVar6 = recovered_10002e58(uVar4,auStack_1ac);
    uVar7 = 0;
    if ((int)uVar6 == 0) {
      pcVar5 = str_1000511f;
    }
    else {
      pcVar5 = str_10005135;
      if (((uStack_168 >> 0x17 == 0) && (uVar8 = CONCAT44(uStack_168,iStack_16c), uVar8 != 0)) &&
         (iStack_178 == 0x200)) {
        uVar6 = recovered_10002b28(param_1);
        if ((int)uVar6 == 0) {
          return 0;
        }
        uVar1 = 0x10000;
        if (uVar8 < 0x81) {
          uVar1 = iStack_16c << 9;
        }
        n = (ulong)uVar1;
        src = (void *)recovered_10002ae4(n);
        dst = (void *)recovered_10002ae4(n);
        if (((src == (void *)0x0) || (dst == (void *)0x0)) ||
           (uVar6 = recovered_10002ebc(uVar4,0,0,src,(ulong)(uVar1 >> 9)), (int)uVar6 == 0)) {
          recovered_100023fc(src);
          recovered_100023fc(dst);
          uVar7 = 0;
          pcVar5 = str_1000516b;
        }
        else {
          recovered_10002b70(param_1);
          recovered_100023fc(*(undefined8 *)(param_1 + 0x380));
          *(void **)(param_1 + 0x380) = src;
          *(ulong *)(param_1 + 0x388) = n;
          *(ulong *)(param_1 + 0x390) = n;
          thunk_memcpy(dst,src,n);
          *(void **)(param_1 + 0x3c8) = dst;
          uVar7 = 1;
          *(undefined1 *)(param_1 + 0x3ac) = 1;
          *(undefined1 *)(param_1 + 0x42f) = 1;
          *(undefined4 *)(param_1 + 1000) = uStack_19c;
          *(ulong *)(param_1 + 0x3f0) = uVar8 << 9;
          *(uint *)(param_1 + 0x3d0) = uVar2;
          recovered_10002bb4(uVar4,&DAT_100050f3,(char *)(param_1 + 0x450));
          pcVar5 = str_10005185;
        }
      }
    }
    recovered_1000236c(param_1,pcVar5);
    return uVar7;
  }
  recovered_1000281c(param_2,(int *)&uStack_30dc,(long)acStack_6161);
  if ((uStack_30dc < 0x7fffffff) &&
     (iVar3 = thunk_strcmp(acStack_6161,&DAT_100050f3), iVar3 == 0)) {
    uVar6 = recovered_10002ce8(param_1,(ulong)uStack_30dc);
    return uVar6;
  }
  if (param_3 == 0) {
    thunk_memset(&uStack_30d8,0,0xc);
    uVar2 = recovered_10002658(param_2,(uint *)((long)&uStack_48 + 4),acStack_30c9);
    if (uVar2 == 0) {
      uVar6 = 0;
      pcVar5 = str_100051ca;
    }
    else {
      uVar6 = recovered_10002b28(param_1);
      if ((int)uVar6 == 0) goto LAB_10002238;
      uVar4 = recovered_100026f0(uStack_48 >> 0x20,acStack_30c9,&uStack_30d8);
      if ((int)uVar4 == 0) {
        uVar6 = 0;
        pcVar5 = str_100051ef;
      }
      else if (((bStack_30d0 >> 1 & 1) == 0) && ((uStack_30d4 == 0 || (uStack_30d8 != 0)))) {
        recovered_10002b70(param_1);
        recovered_100023fc(*(undefined8 *)(param_1 + 0x380));
        *(ulong *)(param_1 + 0x380) = (ulong)uStack_30d8;
        *(ulong *)(param_1 + 0x390) = (ulong)uStack_30d4;
        *(ulong *)(param_1 + 0x388) = (ulong)uStack_30d4;
        *(uint *)(param_1 + 0x3d0) = PF_PART4(uStack_48, 4);
        recovered_10002bb4((ulong)PF_PART4(uStack_48, 4),acStack_30c9,(char *)(param_1 + 0x450));
        uVar6 = 1;
        pcVar5 = str_10005219;
      }
      else {
        recovered_100023fc((ulong)uStack_30d8);
        uVar6 = 0;
        pcVar5 = str_10005203;
      }
    }
    recovered_1000236c(param_1,pcVar5);
  }
  else {
    recovered_1000236c(param_1,str_100050f8);
LAB_10002238:
    uVar6 = 0;
  }
  return uVar6;
}

#undef DAT_100050f3
#undef str_100050f8
#undef str_1000511f
#undef str_10005135
#undef str_1000516b
#undef str_10005185
#undef str_100051ca
#undef str_100051ef
#undef str_10005203
#undef str_10005219
#undef acStack_6161
#undef uStack_30dc
#undef uStack_30d8
#undef uStack_30d4
#undef bStack_30d0
#undef acStack_30c9
#undef auStack_1ac
#undef uStack_19c
#undef iStack_178
#undef iStack_16c
#undef uStack_168
#undef uStack_48

#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000236c
 */

void recovered_1000236c(long state,char *message)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  thunk_snprintf((char *)(state + 0x655a),0xa0,&DAT_10005225,message);
  return;
}

#undef DAT_10005225

#define local_c4 (*(ulonglong *)(pf_stack_frame + 44))
#define local_bc (*(ulonglong *)(pf_stack_frame + 52))
#define auStack_dc (*(undefined1 (*)[220])(pf_stack_frame + 20))
#define auStack_c8 (*(undefined1 (*)[200])(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023a0
 */

void recovered_100023a0(long param_1)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};


  recovered_10003e0c(param_1,auStack_dc);
  if ((*(byte *)(param_1 + 0x433) & 1) == 0) {
    pf_app_terror_ui_scrollbar_capture((void *)(param_1 + 0x350),(void *)param_1,local_c4,local_bc);
  }
  terror_ui_scrollbar_draw((void *)param_1,auStack_c8,*(uint *)(param_1 + 0x410));
  return;
}

#undef local_c4
#undef local_bc
#undef auStack_dc
#undef auStack_c8

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023fc
 */

void recovered_100023fc(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_1000243c(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002430. Too many branches */
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
 * Address: 0x1000243c
 */

bool recovered_1000243c(int param_1)

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

#undef DAT_10005091
#define DAT_10005091 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a1U)))
#undef str_1000503e
#define str_1000503e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x44eU)))
#undef str_10005056
#define str_10005056 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x466U)))
#undef str_10005080
#define str_10005080 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x490U)))
#define uStack_30f8 (*(uint *)(pf_stack_frame + 24))
#define uStack_30f4 (*(uint *)(pf_stack_frame + 28))
#define bStack_30f0 (*(byte *)(pf_stack_frame + 32))
#define acStack_30e9 (*(char (*)[12521])(pf_stack_frame + 39))
#define uStack_64 (*(uint *)(pf_stack_frame + 12460))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002484
 */

undefined8 recovered_10002484(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[12592] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  char *message;
  void *a;
  undefined8 uVar8;

  thunk_memset(&uStack_30f8,0,0xc);
  uVar5 = recovered_10002658(param_2,&uStack_64,acStack_30e9);
  if ((uVar5 == 0) ||
     (uVar7 = recovered_100026f0((ulong)uStack_64,acStack_30e9,&uStack_30f8), (int)uVar7 == 0)) {
    uVar8 = 0;
    message = str_1000503e;
  }
  else {
    a = (void *)(ulong)uStack_30f8;
    if (((((bStack_30f0 >> 1 & 1) == 0) && (uStack_30f8 != 0)) && (0xb < uStack_30f4)) &&
       (iVar6 = thunk_memcmp(a,&DAT_10005091,4), iVar6 == 0)) {
      bVar1 = *(byte *)((long)a + 4);
      uVar5 = 0x100;
      if (*(byte *)((long)a + 7) != 0) {
        uVar5 = (uint)*(byte *)((long)a + 7);
      }
      if (0xffffffdf < bVar1 - 0x21) {
        bVar2 = *(byte *)((long)a + 5);
        if (0xffffffdf < bVar2 - 0x21) {
          bVar3 = *(byte *)((long)a + 8);
          if (((bVar1 + 7 >> 3 <= (uint)bVar3) &&
              (bVar4 = *(byte *)((long)a + 6), uVar5 + bVar4 < 0x101)) &&
             ((ulong)uStack_30f4 - 0xc == (ulong)((uint)bVar3 * (uint)bVar2) * (ulong)uVar5)) {
            recovered_100023fc(*(undefined8 *)(param_1 + 0x3c0));
            *(void **)(param_1 + 0x3c0) = a;
            *(long *)(param_1 + 0x3b0) = (long)a + 0xc;
            *(short *)(param_1 + 0x3b8) = (short)uVar5;
            *(byte *)(param_1 + 0x3ba) = bVar1;
            *(byte *)(param_1 + 0x3bb) = bVar2;
            *(byte *)(param_1 + 0x3bc) = bVar3;
            *(byte *)(param_1 + 0x3bd) = bVar4;
            *(uint *)(param_1 + 0x414) = (uint)bVar1;
            uVar8 = 1;
            message = str_10005080;
            *(uint *)(param_1 + 0x418) = (uint)bVar2;
            goto LAB_10002530;
          }
        }
      }
    }
    recovered_100023fc(a);
    uVar8 = 0;
    message = str_10005056;
  }
LAB_10002530:
  recovered_1000236c(param_1,message);
  return uVar8;
}

#undef DAT_10005091
#undef str_1000503e
#undef str_10005056
#undef str_10005080
#undef uStack_30f8
#undef uStack_30f4
#undef bStack_30f0
#undef acStack_30e9
#undef uStack_64

#undef UINT_82010978
#define UINT_82010978 (*(uint *)(0x82010978U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ec
 */

undefined8 recovered_100025ec(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;

  bVar1 = recovered_1000243c(0x178);
  if ((bVar1) && (uVar2 = UINT_82010978, uVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)uVar2)(param_1,(uint)param_2,0xc0000001,(uint)param_3,param_4);
    return (ulong)uVar2;
  }
  return 0;
}

#undef UINT_82010978

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002658
 */

uint recovered_10002658(char *param_1,uint *param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((*param_1 != '\0') && (uVar1 = thunk_strlen(param_1), uVar1 < 0x3085)) {
    recovered_1000281c(param_1,(int *)param_2,(long)param_3);
    if ((*param_2 != 0x7fffffff) && (*param_3 != '\0')) {
      if ((int)*param_2 < 0) {
        uVar2 = recovered_10002064();
        *param_2 = (uint)uVar2;
        return ~(uint)uVar2 >> 0x1f;
      }
      return 1;
    }
  }
  return 0;
}


#undef DAT_82010a1c
#define DAT_82010a1c (*(uint8_t *)(0x82010a1cU))
#undef Ram0000000082010a1c
#define Ram0000000082010a1c (*(uint32_t *)(0x82010a1cU))
#undef UINT_82010834
#define UINT_82010834 (*(uint *)(0x82010834U))
#undef UINT_820108c8
#define UINT_820108c8 (*(uint *)(0x820108c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f0
 */

ulong recovered_100026f0(undefined8 param_1,char *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;

  if (param_3 != (uint *)0x0) {
    bVar2 = recovered_1000243c(0x21c);
    if ((bVar2) && (iVar1 = Ram0000000082010a1c, iVar1 != 0)) {
      uVar3 = Ram0000000082010a1c;
                    /* WARNING: Could not recover jumptable at 0x10002748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(ulong)uVar3)(param_1,param_2,param_3);
      return uVar4;
    }
    bVar2 = recovered_1000243c(200);
    if (bVar2) {
      uVar3 = UINT_820108c8;
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = (*(code *)(ulong)uVar3)((int)param_1,param_2,param_3);
      if (uVar3 == 0) {
        return 0;
      }
    }
    else {
      bVar2 = recovered_1000243c(0x34);
      if (!bVar2) {
        return (ulong)bVar2;
      }
      uVar3 = UINT_82010834;
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = (*(code *)(ulong)uVar3)(param_2,param_3);
      if (uVar3 == 0) {
        return 0;
      }
    }
    uVar3 = *param_3;
    *param_3 = 0;
    if (param_3[1] == 0) {
      return 1;
    }
    if (uVar3 != 0) {
      uVar4 = recovered_10002ae4((ulong)param_3[1]);
      if (uVar4 == 0) {
        return 0;
      }
      uVar5 = (ulong)param_3[1];
      if ((param_3[1] == 0) || ((uVar4 >> 0x20 == 0 && (uVar5 - 1 <= 0xffffffff - uVar4)))) {
        for (uVar6 = 0; uVar6 < uVar5; uVar6 = uVar6 + 1) {
          *(undefined1 *)(uVar4 + uVar6) = *(undefined1 *)(uVar3 + uVar6);
          uVar5 = (ulong)param_3[1];
        }
        *param_3 = (uint)uVar4;
        return 1;
      }
      recovered_100023fc(uVar4);
    }
  }
  return 0;
}

#undef DAT_82010a1c
#undef Ram0000000082010a1c
#undef UINT_82010834
#undef UINT_820108c8

#undef DAT_10005090
#define DAT_10005090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a0U)))
#define local_b0 (*(char (*)[176])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000281c
 */

void recovered_1000281c(char *param_1,int *param_2,long param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;

  pcVar5 = &DAT_10005090;
  if (param_1 != (char *)0x0) {
    pcVar5 = param_1;
  }
  if (*pcVar5 == '[') {
    uVar4 = 0;
    lVar3 = 1;
    while( true ) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
      if ((cVar1 == '\0') || (cVar1 == ']')) break;
      if (uVar4 + 1 < 0x80) {
        local_b0[uVar4] = cVar1;
        uVar4 = uVar4 + 1;
      }
      lVar3 = lVar3 + 1;
    }
    local_b0[uVar4] = '\0';
    iVar2 = 0x7fffffff;
    uVar4 = (ulong)(cVar1 == ']');
    if ((cVar1 == ']') && (lVar3 + 1U < 0x82)) {
      iVar2 = recovered_10002924(local_b0);
    }
    if (pcVar5[uVar4] == '\\') {
      uVar4 = uVar4 + 1;
    }
    pcVar5 = pcVar5 + uVar4;
  }
  else {
    iVar2 = -1;
  }
  if (param_3 != 0) {
    for (uVar4 = 0; uVar4 >> 2 < 0xc21 && pcVar5[uVar4] != '\0'; uVar4 = uVar4 + 1) {
      *(char *)(param_3 + uVar4) = pcVar5[uVar4];
    }
    *(undefined1 *)(param_3 + uVar4) = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  return;
}

#undef DAT_10005090
#undef local_b0

#define local_a0 (*(char (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002924
 */

int recovered_10002924(char *param_1)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;

  if (param_1 != (char *)0x0) {
    lVar7 = 0;
    cVar2 = *param_1;
    pcVar1 = param_1 + 1;
    if (cVar2 != '[') {
      pcVar1 = param_1;
    }
    for (; ((cVar3 = pcVar1[lVar7], cVar3 != '\0' && (cVar3 != ']')) && (lVar7 != 0x7f));
        lVar7 = lVar7 + 1) {
      local_a0[lVar7] = cVar3;
    }
    local_a0[lVar7] = '\0';
    if (cVar2 == '[') {
      if (cVar3 != ']') {
        return 0x7fffffff;
      }
      cVar3 = param_1[lVar7 + 2];
    }
    if (cVar3 == '\0') {
      bVar4 = recovered_100029dc((long)local_a0);
      if (bVar4) {
        uVar6 = recovered_10002a8c(0xfffffffe,local_a0);
        iVar5 = (int)uVar6;
        if (iVar5 < 0) {
          iVar5 = 0x7fffffff;
        }
        return iVar5;
      }
      return 0x7fffffff;
    }
  }
  return 0x7fffffff;
}

#undef local_a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029dc
 */

bool recovered_100029dc(long param_1)

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


#undef DAT_82010a20
#define DAT_82010a20 (*(uint8_t *)(0x82010a20U))
#undef Ram0000000082010a20
#define Ram0000000082010a20 (*(uint32_t *)(0x82010a20U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a8c
 */

undefined8 recovered_10002a8c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;

  bVar3 = recovered_1000243c(0x220);
  if ((bVar3) && (iVar1 = Ram0000000082010a20, iVar1 != 0)) {
    uVar2 = Ram0000000082010a20;
                    /* WARNING: Could not recover jumptable at 0x10002ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(ulong)uVar2)(param_1,param_2,0x80);
    return uVar4;
  }
  return 0xffffffff;
}

#undef DAT_82010a20
#undef Ram0000000082010a20

#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ae4
 */

undefined8 recovered_10002ae4(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_1000243c(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1);
    return uVar3;
  }
  return 0;
}

#undef UINT_8201084c

#undef str_100050b8
#define str_100050b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b28
 */

undefined8 recovered_10002b28(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((*(byte *)(param_1 + 0x42e) & 1) == 0) || (*(char *)(param_1 + 0x437) == '\x01')) {
    *(undefined1 *)(param_1 + 0x437) = 0;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x437) = 1;
  recovered_1000236c(param_1,str_100050b8);
  return 0;
}

#undef str_100050b8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

void recovered_10002b70(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100023fc(*(undefined8 *)(param_1 + 0x3c8));
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined2 *)(param_1 + 0x42e) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined1 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x436) = 0;
  return;
}


#define local_b0 (*(char (*)[176])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bb4
 */

void recovered_10002bb4(undefined8 param_1,char *param_2,char *param_3)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;

  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    uVar4 = recovered_10002a8c(param_1,local_b0);
    if ((-1 < (int)uVar4) && (bVar3 = recovered_100029dc((long)local_b0), bVar3)) {
      lVar5 = 0;
      *param_3 = '[';
      pcVar8 = param_3;
      while( true ) {
        pcVar7 = pcVar8 + 1;
        if (local_b0[lVar5] == '\0') break;
        if (lVar5 + 2U < 0x3085) {
          *pcVar7 = local_b0[lVar5];
        }
        lVar5 = lVar5 + 1;
        pcVar8 = pcVar7;
      }
      if (lVar5 + 2U < 0x3085) {
        *pcVar7 = ']';
      }
      uVar6 = lVar5 + 3;
      if (uVar6 < 0x3085) {
        pcVar8[2] = '\\';
      }
      if (param_2 != (char *)0x0) {
        do {
          pcVar8 = param_2 + 1;
          cVar1 = *param_2;
          param_2 = pcVar8;
        } while (cVar1 == '\\');
        bVar3 = true;
        do {
          if (cVar1 == '\\') {
            if (!bVar3) {
              bVar3 = true;
              goto joined_r0x10002cb0;
            }
            bVar3 = true;
            uVar2 = uVar6;
          }
          else {
            if (cVar1 == '\0') break;
            bVar3 = false;
joined_r0x10002cb0:
            uVar2 = uVar6 + 1;
            if (uVar6 + 1 < 0x3085) {
              param_3[uVar6] = cVar1;
              uVar2 = uVar6 + 1;
            }
          }
          uVar6 = uVar2;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while( true );
      }
      if (0x3083 < uVar6) {
        uVar6 = 0x3084;
      }
      param_3[uVar6] = '\0';
    }
  }
  return;
}

#undef local_b0

#undef DAT_100050f3
#define DAT_100050f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x503U)))
#undef str_1000511f
#define str_1000511f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x52fU)))
#undef str_10005135
#define str_10005135 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x545U)))
#undef str_1000516b
#define str_1000516b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x57bU)))
#undef str_10005185
#define str_10005185 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x595U)))
#define auStack_1ac (*(undefined8 (*)[53])(pf_stack_frame + 20))
#define uStack_19c (*(undefined4 *)(pf_stack_frame + 36))
#define iStack_178 (*(int *)(pf_stack_frame + 72))
#define iStack_16c (*(int *)(pf_stack_frame + 84))
#define uStack_168 (*(uint *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce8
 */

undefined8 recovered_10002ce8(long param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *src;
  void *dst;
  char *message;
  undefined8 uVar3;
  ulong n;
  ulong uVar4;

  thunk_memset(auStack_1ac,0,0x15c);
  PF_PART4(auStack_1ac[0], 0) = 0x15c;
  uVar2 = recovered_10002e58(param_2,auStack_1ac);
  uVar3 = 0;
  if ((int)uVar2 == 0) {
    message = str_1000511f;
  }
  else {
    message = str_10005135;
    if (((uStack_168 >> 0x17 == 0) && (uVar4 = CONCAT44(uStack_168,iStack_16c), uVar4 != 0)) &&
       (iStack_178 == 0x200)) {
      uVar2 = recovered_10002b28(param_1);
      if ((int)uVar2 == 0) {
        return 0;
      }
      uVar1 = 0x10000;
      if (uVar4 < 0x81) {
        uVar1 = iStack_16c << 9;
      }
      n = (ulong)uVar1;
      src = (void *)recovered_10002ae4(n);
      dst = (void *)recovered_10002ae4(n);
      if (((src == (void *)0x0) || (dst == (void *)0x0)) ||
         (uVar2 = recovered_10002ebc(param_2,0,0,src,(ulong)(uVar1 >> 9)), (int)uVar2 == 0)) {
        recovered_100023fc(src);
        recovered_100023fc(dst);
        uVar3 = 0;
        message = str_1000516b;
      }
      else {
        recovered_10002b70(param_1);
        recovered_100023fc(*(undefined8 *)(param_1 + 0x380));
        *(void **)(param_1 + 0x380) = src;
        *(ulong *)(param_1 + 0x388) = n;
        *(ulong *)(param_1 + 0x390) = n;
        thunk_memcpy(dst,src,n);
        *(void **)(param_1 + 0x3c8) = dst;
        uVar3 = 1;
        *(undefined1 *)(param_1 + 0x3ac) = 1;
        *(undefined1 *)(param_1 + 0x42f) = 1;
        *(undefined4 *)(param_1 + 1000) = uStack_19c;
        *(ulong *)(param_1 + 0x3f0) = uVar4 << 9;
        *(int *)(param_1 + 0x3d0) = (int)param_2;
        recovered_10002bb4(param_2,&DAT_100050f3,(char *)(param_1 + 0x450));
        message = str_10005185;
      }
    }
  }
  recovered_1000236c(param_1,message);
  return uVar3;
}

#undef DAT_100050f3
#undef str_1000511f
#undef str_10005135
#undef str_1000516b
#undef str_10005185
#undef auStack_1ac
#undef uStack_19c
#undef iStack_178
#undef iStack_16c
#undef uStack_168

#undef DAT_10004eb0
#define DAT_10004eb0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2c0U)))
#undef DAT_820109e8
#define DAT_820109e8 (*(uint8_t *)(0x820109e8U))
#undef Ram00000000820109e8
#define Ram00000000820109e8 (*(uint32_t *)(0x820109e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e58
 */

undefined8 recovered_10002e58(undefined8 param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  if (param_2 != (undefined8 *)0x0) {
    *param_2 = DAT_10004eb0;
    bVar2 = recovered_1000243c(0x1e8);
    if ((bVar2) && (uVar1 = Ram00000000820109e8, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2,0x15c);
      return uVar3;
    }
  }
  return 0;
}

#undef DAT_10004eb0
#undef DAT_820109e8
#undef Ram00000000820109e8

#undef DAT_820109f0
#define DAT_820109f0 (*(uint8_t *)(0x820109f0U))
#undef Ram00000000820109f0
#define Ram00000000820109f0 (*(uint32_t *)(0x820109f0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ebc
 */

undefined8
recovered_10002ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  bVar2 = recovered_1000243c(0x1f0);
  if ((bVar2) && (uVar1 = Ram00000000820109f0, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2,param_3,param_4,param_5);
    return uVar3;
  }
  return 0;
}

#undef DAT_820109f0
#undef Ram00000000820109f0

#undef DAT_10005090
#define DAT_10005090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4a0U)))
#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
#undef str_10005228
#define str_10005228 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x638U)))
#undef str_1000525b
#define str_1000525b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66bU)))
#undef str_10005290
#define str_10005290 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6a0U)))
#undef str_100052b8
#define str_100052b8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c8U)))
#undef str_100052e1
#define str_100052e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6f1U)))
#undef str_10005313
#define str_10005313 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x723U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f24
 */

void recovered_10002f24(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *arg3;
  ulong uVar1;
  char *arg3_00;

  *(int *)(param_1 + 0x43c) = param_2;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x436) = 0;
  arg3 = (undefined1 *)(param_1 + 0x450);
  if (param_2 != 1) {
    arg3 = &DAT_10005090;
  }
  thunk_snprintf((char *)(param_1 + 0x34d5),0x3085,&DAT_10005225,arg3);
  uVar1 = thunk_strlen((char *)(param_1 + 0x34d5));
  *(ulong *)(param_1 + 0x440) = uVar1;
  recovered_10003654(param_1);
  if (param_2 == 5) {
    arg3_00 = str_1000525b;
  }
  else if (param_2 == 4) {
    arg3_00 = str_10005228;
  }
  else if (param_2 == 3) {
    arg3_00 = str_10005290;
    if (*(char *)(param_1 + 0x42f) == '\0') {
      arg3_00 = str_100052b8;
    }
  }
  else {
    arg3_00 = str_100052e1;
    if (param_2 != 2) {
      arg3_00 = str_10005313;
    }
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10005225,arg3_00);
  return;
}

#undef DAT_10005090
#undef DAT_10005225
#undef str_10005228
#undef str_1000525b
#undef str_10005290
#undef str_100052b8
#undef str_100052e1
#undef str_10005313

#undef str_10005340
#define str_10005340 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x750U)))
#undef str_10005372
#define str_10005372 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x782U)))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003018
 */

void recovered_10003018(long param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  char *message;

  recovered_10002f24(param_1,2);
  local_24 = 0;
  uVar1 = recovered_100036a0(0,0,&local_24);
  if (((int)uVar1 == 0) || (local_24 + 0xc0000000 < 0xc0000001)) {
    message = str_10005340;
  }
  else {
    lVar2 = recovered_10002ae4((ulong)local_24 << 2);
    if (lVar2 != 0) {
      uVar1 = recovered_100036a0(lVar2,(ulong)local_24,&local_28);
      if ((int)uVar1 == 0) {
        recovered_100023fc(lVar2);
        return;
      }
      recovered_100023fc(*(undefined8 *)(param_1 + 0x3d8));
      *(long *)(param_1 + 0x3d8) = lVar2;
      if (local_24 <= local_28) {
        local_28 = local_24;
      }
      *(uint *)(param_1 + 0x3e0) = local_28;
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      *(undefined1 *)(param_1 + 0x436) = 1;
      return;
    }
    message = str_10005372;
  }
  recovered_1000236c(param_1,message);
  return;
}

#undef str_10005340
#undef str_10005372
#undef local_28
#undef local_24

#undef DAT_100050f3
#define DAT_100050f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x503U)))
#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
#undef Ram00000000820109f4
#define Ram00000000820109f4 (*(uint32_t *)(0x820109f4U))
#undef UINT_820108d0
#define UINT_820108d0 (*(uint *)(0x820108d0U))
#undef str_100053a9
#define str_100053a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7b9U)))
#undef str_100053e1
#define str_100053e1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7f1U)))
#undef str_10005426
#define str_10005426 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x836U)))
#undef str_1000543f
#define str_1000543f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84fU)))
#undef str_1000545e
#define str_1000545e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86eU)))
#undef str_1000547f
#define str_1000547f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88fU)))
#undef str_100054b5
#define str_100054b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c5U)))
#define acStack_30c9 (*(char (*)[12489])(pf_stack_frame + 23))
#define auStack_250 (*(undefined1 (*)[592])(pf_stack_frame + 11920))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030d4
 */

undefined8 recovered_100030d4(long param_1)

{
  unsigned char pf_stack_frame[12544] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_x0 = 0;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x27;

  uVar3 = (uint)((ulong)unaff_x27 >> 0x20);
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  if ((*(uint8_t *)(param_1 + 0x42f) & 1)==0) return recovered_10003708(param_1,(char *)(param_1+0x450));
  if ((*(byte *)(param_1 + 0x42f) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x42e) & 1) == 0) {
      uVar3 = thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10005225,(char *)((uintptr_t)pf_module_state+0x7a4U));
      return (ulong)uVar3;
    }
    for (uVar9 = 0; uVar8 = *(ulong *)(param_1 + 0x388), uVar9 < uVar8; uVar9 = uVar9 + 0x200) {
      iVar5 = thunk_memcmp((void *)(*(long *)(param_1 + 0x380) + uVar9),
                                 (void *)(*(long *)(param_1 + 0x3c8) + uVar9),0x200);
      if ((iVar5 != 0) &&
         ((uVar8 = uVar9 + *(long *)(param_1 + 0x3f8),
          uVar6 = recovered_10002ebc((ulong)*(uint *)(param_1 + 0x3d0),uVar8 >> 9,uVar8 >> 0x29,
                                     auStack_250,1), (int)uVar6 == 0 ||
          (iVar5 = thunk_memcmp(auStack_250,(void *)(*(long *)(param_1 + 0x3c8) + uVar9),0x200
                                     ), iVar5 != 0)))) {
        pcVar7 = str_100053a9;
        goto LAB_10003278;
      }
    }
    uVar9 = 0;
    do {
      if (uVar8 <= uVar9) {
        *(undefined1 *)(param_1 + 0x437) = 0;
        *(undefined1 *)(param_1 + 0x42e) = 0;
        pcVar7 = str_10005426;
LAB_10003278:
        recovered_1000236c(param_1,pcVar7);
        return extraout_x0;
      }
      iVar5 = thunk_memcmp((void *)(*(long *)(param_1 + 0x380) + uVar9),
                                 (void *)(*(long *)(param_1 + 0x3c8) + uVar9),0x200);
      if (iVar5 != 0) {
        lVar11 = *(long *)(param_1 + 0x3f8);
        uVar1 = *(undefined4 *)(param_1 + 0x3d0);
        lVar10 = *(long *)(param_1 + 0x380);
        bVar2 = recovered_1000243c(500);
        if (bVar2) {
          uVar3 = Ram00000000820109f4;
          if ((uVar3 != 0) &&
             (uVar8 = uVar9 + lVar11,
             iVar5 = (*(code *)(ulong)uVar3)(uVar1,uVar8 >> 9,uVar8 >> 0x29,lVar10 + uVar9,1),
             iVar5 != 0)) {
            thunk_memcpy((void *)(*(long *)(param_1 + 0x3c8) + uVar9),
                               (void *)(*(long *)(param_1 + 0x380) + uVar9),0x200);
            goto LAB_10003250;
          }
        }
        pcVar7 = str_100053e1;
        goto LAB_10003278;
      }
LAB_10003250:
      uVar9 = uVar9 + 0x200;
      uVar8 = *(ulong *)(param_1 + 0x388);
    } while( true );
  }
  uVar4 = recovered_10002658((char *)(param_1 + 0x450),(uint *)(auStack_250 + 0x20c),acStack_30c9);
  if ((uVar4 == 0) || (iVar5 = thunk_strcmp(acStack_30c9,&DAT_100050f3), iVar5 == 0)) {
    pcVar7 = str_1000543f;
    goto LAB_100037f4;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x380);
  uVar1 = *(undefined4 *)(param_1 + 0x388);
  bVar2 = recovered_1000243c(0xd0);
  if (bVar2) {
    uVar4 = UINT_820108d0;
    if (uVar4 != 0) {
      iVar5 = (*(code *)(ulong)uVar4)(uVar3,acStack_30c9,uVar6,uVar1);
joined_r0x100037d0:
      if (iVar5 != 0) {
        if (*(char *)(param_1 + 0x42f) == '\x01') {
          pcVar7 = str_1000547f;
        }
        else {
          recovered_10002bb4((ulong)uVar3,acStack_30c9,(char *)(param_1 + 0x450));
          *(uint *)(param_1 + 0x3d0) = uVar3;
          *(undefined1 *)(param_1 + 0x437) = 0;
          *(undefined1 *)(param_1 + 0x42e) = 0;
          pcVar7 = str_100054b5;
        }
        recovered_1000236c(param_1,pcVar7);
        return 1;
      }
    }
  }
  else {
    bVar2 = recovered_1000243c(0x38);
    if (bVar2) {
      uVar4 = UINT_82010838;
      if (uVar4 != 0) {
        iVar5 = (*(code *)(ulong)uVar4)(acStack_30c9,uVar6,uVar1);
        goto joined_r0x100037d0;
      }
    }
  }
  pcVar7 = str_1000545e;
LAB_100037f4:
  recovered_1000236c(param_1,pcVar7);
  return 0;
}

#undef DAT_100050f3
#undef DAT_10005225
#undef Ram00000000820109f4
#undef UINT_820108d0
#undef str_100053a9
#undef str_100053e1
#undef str_10005426
#undef str_1000543f
#undef str_1000545e
#undef str_1000547f
#undef str_100054b5
#undef acStack_30c9
#undef auStack_250

#undef UNK_82010a50
#define UNK_82010a50 (*(uint *)(0x82010a50U))
#undef str_100054c0
#define str_100054c0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8d0U)))
#undef str_100054d5
#define str_100054d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8e5U)))
#undef str_10005511
#define str_10005511 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x921U)))
#undef str_10005523
#define str_10005523 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x933U)))
#undef uRam0000000082010a50
#define uRam0000000082010a50 (*(uint32_t *)(0x82010a50U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003298
 */

bool recovered_10003298(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  char *message;
  long lVar8;

  uVar6 = *(ulong *)(param_1 + 0x3a0);
  uVar7 = *(ulong *)(param_1 + 0x398);
  uVar2 = uVar6;
  if (uVar7 <= uVar6) {
    uVar2 = uVar7;
  }
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  uVar1 = uVar7;
  if (uVar7 < *(ulong *)(param_1 + 0x388)) {
    uVar1 = uVar7 + 1;
  }
  if (uVar2 < uVar6 && uVar6 <= *(ulong *)(param_1 + 0x388)) {
    uVar7 = uVar2;
    uVar1 = uVar6;
  }
  if (uVar1 == uVar7) {
    bVar3 = false;
    message = str_100054c0;
  }
  else {
    uVar5 = 2;
    if (param_2 != 0) {
      uVar5 = 3;
    }
    lVar8 = *(long *)(param_1 + 0x380);
    bVar3 = recovered_1000243c(0x250);
    if (bVar3) {
      message = str_100054d5;
      if (uRam0000000082010a50 == 0) {
        bVar3 = false;
      }
      else {
        iVar4 = (*(code *)(ulong)uRam0000000082010a50)
                          (uVar5,lVar8 + uVar7,(int)uVar1 - (int)uVar7,0xffffffff,0);
        message = str_10005511;
        if (param_2 == 0) {
          message = str_10005523;
        }
        bVar3 = iVar4 != 0;
        if (!bVar3) {
          message = str_100054d5;
        }
      }
    }
    else {
      bVar3 = false;
      message = str_100054d5;
    }
  }
  recovered_1000236c(param_1,message);
  return bVar3;
}

#undef UNK_82010a50
#undef str_100054c0
#undef str_100054d5
#undef str_10005511
#undef str_10005523
#undef uRam0000000082010a50

#undef DAT_82010a54
#define DAT_82010a54 (*(uint8_t *)(0x82010a54U))
#undef DAT_82010a58
#define DAT_82010a58 (*(uint8_t *)(0x82010a58U))
#undef _DAT_82010a54
#define _DAT_82010a54 (*(uint *)(0x82010a54U))
#undef _DAT_82010a58
#define _DAT_82010a58 (*(uint *)(0x82010a58U))
#undef str_1000553c
#define str_1000553c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94cU)))
#undef str_1000554f
#define str_1000554f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x95fU)))
#undef str_1000556b
#define str_1000556b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x97bU)))
#undef str_1000558a
#define str_1000558a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x99aU)))
#undef str_1000559f
#define str_1000559f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9afU)))
#undef str_100055ba
#define str_100055ba (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9caU)))
#define uStack_64 (*(uint *)(pf_stack_frame + 28))
#define bStack_60 (*(byte *)(pf_stack_frame + 32))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 40))
#define iStack_54 (*(int *)(pf_stack_frame + 44))
#define uStack_50 (*(uint *)(pf_stack_frame + 48))
#define uStack_4c (*(uint *)(pf_stack_frame + 52))
#define bStack_48 (*(byte *)(pf_stack_frame + 56))
#define uStack_44 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_68 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100033b4(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;

  thunk_memset(&uStack_58,0,0x18);
  uStack_58 = 0x18;
  bVar2 = recovered_1000243c(600);
  if ((((!bVar2) || (_DAT_82010a58 == 0)) ||
      (iVar3 = (*(code *)(ulong)_DAT_82010a58)(&uStack_58), iVar3 == 0)) || (iStack_54 == 0)) {
    pcVar7 = str_1000553c;
LAB_100034a4:
    recovered_1000236c(param_1,pcVar7);
    return;
  }
  uVar1 = uStack_50;
  if (uStack_50 < 2) {
    uVar1 = 1;
  }
  lVar4 = recovered_10002ae4((ulong)uVar1);
  uVar1 = uStack_50;
  if (lVar4 == 0) {
    pcVar7 = str_1000554f;
    goto LAB_100034a4;
  }
  bVar2 = recovered_1000243c(0x254);
  if (((!bVar2) || (_DAT_82010a54 == 0)) ||
     (iVar3 = (*(code *)(ulong)_DAT_82010a54)(lVar4,uVar1,uStack_44,&uStack_58), iVar3 == 0)) {
    recovered_100023fc(lVar4);
    pcVar7 = str_1000556b;
    goto LAB_100034a4;
  }
  if (iStack_54 == 1) {
    if ((param_2 & 1) != 0) goto LAB_100034e0;
    uVar5 = recovered_10003a50(lVar4,(ulong)uStack_50,0,(long *)&uStack_68);
    if ((int)uVar5 == 0) {
      pcVar7 = str_100055ba;
      goto LAB_1000357c;
    }
    recovered_10003a50(lVar4,(ulong)uStack_50,lVar4,(long *)&uStack_68);
    uVar6 = CONCAT44(uStack_64,uStack_68);
  }
  else {
    if (iStack_54 == 4) {
      if ((((bStack_48 >> 1 & 1) == 0) && (uStack_50 != 0)) &&
         (*(char *)(lVar4 + (ulong)(uStack_50 - 1)) == '\0')) {
        thunk_memset(&uStack_68,0,0xc);
        uVar6 = recovered_100026f0((ulong)uStack_4c,lVar4,&uStack_68);
        if ((int)uVar6 != 0) {
          if ((bStack_60 >> 1 & 1) == 0) {
            recovered_1000383c(param_1,(ulong)uStack_68,(ulong)uStack_64);
          }
          else {
            recovered_1000236c(param_1,str_1000558a);
          }
          recovered_100023fc((ulong)uStack_68);
          goto LAB_10003580;
        }
        pcVar7 = str_1000559f;
      }
      else {
        pcVar7 = str_1000558a;
      }
LAB_1000357c:
      recovered_1000236c(param_1,pcVar7);
      goto LAB_10003580;
    }
LAB_100034e0:
    uVar6 = (ulong)uStack_50;
  }
  recovered_1000383c(param_1,lVar4,uVar6);
LAB_10003580:
  recovered_100023fc(lVar4);
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  return;
}

#undef DAT_82010a54
#undef DAT_82010a58
#undef _DAT_82010a54
#undef _DAT_82010a58
#undef str_1000553c
#undef str_1000554f
#undef str_1000556b
#undef str_1000558a
#undef str_1000559f
#undef str_100055ba
#undef uStack_64
#undef bStack_60
#undef uStack_58
#undef iStack_54
#undef uStack_50
#undef uStack_4c
#undef bStack_48
#undef uStack_44
#undef uStack_68

#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035a4
 */

void recovered_100035a4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  if (*(char *)(param_1 + 0x42f) == '\x01') {
    thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10005225);
    return;
  }
  bVar1 = recovered_10003298(param_1,(uint)*(byte *)(param_1 + 0x42d));
  if ((bVar1) && (uVar2 = recovered_10003d5c((long *)(param_1 + 0x380),0), (int)uVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x42e) = 1;
  }
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  return;
}

#undef DAT_10005225

#undef DAT_10005225
#define DAT_10005225 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x635U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003608
 */

void recovered_10003608(long param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((*(byte *)(param_1 + 0x42f) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x3a8) = param_2;
    *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  }
  thunk_snprintf((char *)(param_1 + 0x655a),0xa0,&DAT_10005225);
  return;
}

#undef DAT_10005225

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003654
 */

void recovered_10003654(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;

  iVar3 = *(int *)(param_1 + 0x414);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = (*(int *)(param_1 + 4) + iVar3 * -8 + -0x28) / iVar3;
  }
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x440);
  uVar6 = *(ulong *)(param_1 + 0x448);
  uVar2 = uVar5;
  if (uVar6 <= uVar5) {
    uVar2 = uVar6;
  }
  uVar1 = uVar2 + uVar4;
  if (uVar6 > uVar5 || uVar1 <= uVar5) {
    if (uVar1 <= uVar5) {
      uVar2 = (uVar5 - uVar4) + 1;
    }
    *(ulong *)(param_1 + 0x448) = uVar2;
  }
  return;
}


#undef DAT_820109ec
#define DAT_820109ec (*(uint8_t *)(0x820109ecU))
#undef Ram00000000820109ec
#define Ram00000000820109ec (*(uint32_t *)(0x820109ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036a0
 */

undefined8 recovered_100036a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined8 uVar3;

  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  bVar2 = recovered_1000243c(0x1ec);
  if ((bVar2) && (uVar1 = Ram00000000820109ec, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100036f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)uVar1)(param_1,param_2,param_3);
    return uVar3;
  }
  return 0;
}

#undef DAT_820109ec
#undef Ram00000000820109ec

#undef DAT_100050f3
#define DAT_100050f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x503U)))
#undef UINT_820108d0
#define UINT_820108d0 (*(uint *)(0x820108d0U))
#undef str_1000543f
#define str_1000543f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x84fU)))
#undef str_1000545e
#define str_1000545e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86eU)))
#undef str_1000547f
#define str_1000547f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x88fU)))
#undef str_100054b5
#define str_100054b5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x8c5U)))
#define local_44 (*(uint *)(pf_stack_frame + 12444))
#define acStack_30c9 (*(char (*)[12489])(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003708
 */

undefined8 recovered_10003708(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[12544] __attribute__((aligned(16))) = {0};

  uint size;
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  void *data;

  uVar3 = recovered_10002658(param_2,&local_44,acStack_30c9);
  if ((uVar3 == 0) ||
     (iVar4 = thunk_strcmp(acStack_30c9,&DAT_100050f3), uVar3 = local_44, iVar4 == 0)) {
    pcVar5 = str_1000543f;
    goto LAB_100037f4;
  }
  data = *(void **)(param_1 + 0x380);
  size = *(uint *)(param_1 + 0x388);
  bVar2 = recovered_1000243c(0xd0);
  if (bVar2) {
    uVar1 = UINT_820108d0;
    if (uVar1 != 0) {
      uVar3 = (*(code *)(ulong)uVar1)(uVar3,acStack_30c9,data,size);
joined_r0x100037d0:
      if (uVar3 != 0) {
        if (*(char *)(param_1 + 0x42f) == '\x01') {
          pcVar5 = str_1000547f;
        }
        else {
          recovered_10002bb4((ulong)local_44,acStack_30c9,(char *)(param_1 + 0x450));
          *(uint *)(param_1 + 0x3d0) = local_44;
          *(undefined1 *)(param_1 + 0x437) = 0;
          *(undefined1 *)(param_1 + 0x42e) = 0;
          pcVar5 = str_100054b5;
        }
        recovered_1000236c(param_1,pcVar5);
        return 1;
      }
    }
  }
  else {
    bVar2 = recovered_1000243c(0x38);
    if (bVar2) {
      uVar3 = UINT_82010838;
      if (uVar3 != 0) {
        uVar3 = (*(code *)(ulong)uVar3)(acStack_30c9,data,size);
        goto joined_r0x100037d0;
      }
    }
  }
  pcVar5 = str_1000545e;
LAB_100037f4:
  recovered_1000236c(param_1,pcVar5);
  return 0;
}

#undef DAT_100050f3
#undef UINT_820108d0
#undef str_1000543f
#undef str_1000545e
#undef str_1000547f
#undef str_100054b5
#undef local_44
#undef acStack_30c9

#undef str_100055ee
#define str_100055ee (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9feU)))
#undef str_10005606
#define str_10005606 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa16U)))
#undef str_10005629
#define str_10005629 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa39U)))
#undef str_10005636
#define str_10005636 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa46U)))
#undef str_1000565f
#define str_1000565f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa6fU)))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
#define uStack_68 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000383c
 */

undefined8 recovered_1000383c(long param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *src;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  char *message;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;

  if ((*(char *)(param_1 + 0x42f) == '\x01') && ((*(byte *)(param_1 + 1000) >> 3 & 1) != 0)) {
    message = str_100055ee;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x380);
    uVar6 = recovered_10003b6c((long)puVar1,param_3,&uStack_70);
    if ((uVar6 & 1) == 0) {
      message = str_10005606;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x390);
      if (uStack_70 <= uVar6) {
LAB_10003928:
        uVar9 = *(ulong *)(param_1 + 0x3a0);
        uVar8 = *(ulong *)(param_1 + 0x398);
        uVar2 = uVar9;
        if (uVar8 <= uVar9) {
          uVar2 = uVar8;
        }
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (uVar2 < uVar9) {
          bVar4 = uVar9 <= *(ulong *)(param_1 + 0x388);
        }
        else {
          bVar4 = false;
        }
        if (param_2 == 0) {
          return 0;
        }
        if (param_3 == 0) {
          return 0;
        }
        uVar7 = recovered_10003b6c((long)puVar1,param_3,&uStack_68);
        if ((int)uVar7 == 0) {
          return 0;
        }
        if (uVar6 < uStack_68) {
          return 0;
        }
        if (*(char *)(param_1 + 0x3ac) == '\x01') {
          if (!bVar4) {
            uVar2 = uVar8;
          }
          uVar8 = uVar2;
        }
        else if (*(int *)(param_1 + 0x3a8) == 0) {
          uVar8 = *(ulong *)(param_1 + 0x388);
        }
        else if (bVar4) {
          thunk_memmove((void *)(*(long *)(param_1 + 0x380) + param_3 + uVar2),
                             (void *)(*(long *)(param_1 + 0x380) + uVar9),
                             *(long *)(param_1 + 0x388) - uVar9);
          uVar8 = uVar2;
        }
        else if (*(int *)(param_1 + 0x3a8) == 1) {
          src = (void *)(*(long *)(param_1 + 0x380) + uVar8);
          thunk_memmove((void *)((long)src + param_3),src,*(long *)(param_1 + 0x388) - uVar8);
        }
        thunk_memcpy((void *)(*(long *)(param_1 + 0x380) + uVar8),(void *)param_2,param_3);
        *(ulong *)(param_1 + 0x388) = uStack_68;
        *(ulong *)(param_1 + 0x3a0) = uVar8 + param_3;
        *(ulong *)(param_1 + 0x398) = uVar8 + param_3;
        *(undefined1 *)(param_1 + 0x42e) = 1;
        *(undefined1 *)(param_1 + 0x437) = 0;
        recovered_10003c24(param_1);
        recovered_1000236c(param_1,str_10005629);
        return 1;
      }
      if (uStack_70 < 0xffffffff) {
        uVar9 = 0x1000;
        if (uVar6 != 0) {
          uVar9 = uVar6;
        }
        for (; uVar6 = uVar9, uVar9 < uStack_70; uVar9 = uVar9 << 1) {
          if (uVar9 >> 0x1f != 0) {
            uVar6 = uStack_70;
            break;
          }
        }
        uVar7 = *puVar1;
        bVar4 = recovered_1000243c(0x54);
        if (bVar4) {
          uVar3 = UINT_82010854;
          if ((uVar3 != 0) &&
             (lVar5 = (*(code *)(ulong)uVar3)(uVar7,uVar6 & 0xffffffff), lVar5 != 0)) {
            *(long *)(param_1 + 0x380) = lVar5;
            *(ulong *)(param_1 + 0x390) = uVar6;
            goto LAB_10003928;
          }
        }
        message = str_1000565f;
      }
      else {
        message = str_10005636;
      }
    }
  }
  recovered_1000236c(param_1,message);
  return 0;
}

#undef str_100055ee
#undef str_10005606
#undef str_10005629
#undef str_10005636
#undef str_1000565f
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a50
 */

undefined8 recovered_10003a50(long param_1,ulong param_2,long param_3,long *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;

  lVar6 = 0;
  uVar7 = 0;
  uVar4 = 0xffffffff;
  do {
    if (param_2 <= uVar7) {
      uVar5 = 0;
      if (((int)uVar4 < 0) && (lVar6 != 0)) {
        *param_4 = lVar6;
        uVar5 = 1;
      }
      return uVar5;
    }
    pbVar1 = (byte *)(param_1 + uVar7);
    bVar2 = *pbVar1;
    if (bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) != 0) {
      if (-1 < (int)uVar4) {
        return 0;
      }
LAB_10003ac0:
      uVar8 = uVar7;
      uVar4 = 0xffffffff;
    }
    else if ((((int)uVar4 < 0) && (uVar8 = uVar7 + 1, bVar2 == 0x30 && uVar8 < param_2)) &&
            ((*(byte *)(param_1 + uVar8) | 0x20) == 0x78)) {
      if (((param_2 - uVar7 < 4) || (uVar4 = recovered_10003d2c((uint)pbVar1[2]), (int)uVar4 < 0))
         || (uVar4 = recovered_10003d2c((uint)pbVar1[3]), (int)uVar4 < 0)) {
        return 0;
      }
      uVar4 = 0xffffffff;
    }
    else {
      uVar3 = recovered_10003d2c((uint)bVar2);
      if ((int)uVar3 < 0) {
        return 0;
      }
      if (-1 < (int)uVar4) {
        if (param_3 != 0) {
          *(byte *)(param_3 + lVar6) = (byte)uVar3 | (byte)(uVar4 << 4);
        }
        lVar6 = lVar6 + 1;
        goto LAB_10003ac0;
      }
      uVar8 = uVar7;
      uVar4 = uVar3;
    }
    uVar7 = uVar8 + 1;
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b6c
 */

undefined8 recovered_10003b6c(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar2 = uVar4;
  if (uVar3 <= uVar4) {
    uVar2 = uVar3;
  }
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (uVar2 < uVar4) {
    bVar1 = uVar4 <= *(ulong *)(param_1 + 8);
  }
  else {
    bVar1 = false;
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    uVar4 = *(ulong *)(param_1 + 8);
    if (uVar4 < uVar3) {
      return 0;
    }
    if (!bVar1) {
      uVar2 = uVar3;
    }
    if (uVar4 - uVar2 < param_2) {
      return 0;
    }
    goto LAB_10003c18;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
LAB_10003c04:
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if (!bVar1) {
      if (*(int *)(param_1 + 0x28) == 2) {
        if (CARRY8(uVar3,param_2)) {
          return 0;
        }
        uVar4 = uVar3 + param_2;
        if (uVar3 + param_2 <= *(ulong *)(param_1 + 8)) {
          uVar4 = *(ulong *)(param_1 + 8);
        }
        goto LAB_10003c18;
      }
      goto LAB_10003c04;
    }
    uVar4 = *(long *)(param_1 + 8) + (uVar2 - uVar4);
  }
  if (CARRY8(uVar4,param_2)) {
    return 0;
  }
  uVar4 = uVar4 + param_2;
LAB_10003c18:
  *param_3 = uVar4;
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c24
 */

void recovered_10003c24(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;

  uVar2 = 0;
  if ((ulong)*(uint *)(param_1 + 0x41c) != 0) {
    uVar2 = (ulong)(*(long *)(param_1 + 0x398) + *(long *)(param_1 + 0x3f8)) /
            (ulong)*(uint *)(param_1 + 0x41c);
  }
  uVar3 = *(ulong *)(param_1 + 0x400);
  if (uVar3 <= uVar2) {
    uVar1 = recovered_10003c9c(param_1);
    if (uVar2 < uVar3 + uVar1) goto LAB_10003c80;
    uVar2 = (uVar2 - uVar1) + 1;
  }
  *(ulong *)(param_1 + 0x400) = uVar2;
  uVar3 = uVar2;
LAB_10003c80:
  uVar2 = recovered_10003ce8(param_1);
  if (uVar2 < uVar3) {
    *(ulong *)(param_1 + 0x400) = uVar2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c9c
 */

int recovered_10003c9c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = *(int *)(param_1 + 0x418);
  iVar4 = iVar1 * 2;
  iVar3 = iVar4;
  if (iVar4 < 0x25) {
    iVar3 = 0x24;
  }
  iVar4 = iVar4 + 8;
  if (iVar4 < 0x23) {
    iVar4 = 0x22;
  }
  iVar2 = 0;
  if (iVar1 + 4 != 0) {
    iVar2 = ((*(int *)(param_1 + 8) - (iVar1 + iVar3 + iVar4)) + -0x3e) / (iVar1 + 4);
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  return iVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ce8
 */

long recovered_10003ce8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  uint uVar3;

  lVar1 = 0x3f0;
  if (*(char *)(param_1 + 0x42f) == '\0') {
    lVar1 = 0x388;
  }
  uVar2 = 0;
  if ((ulong)*(uint *)(param_1 + 0x41c) != 0) {
    uVar2 = *(ulong *)(param_1 + lVar1) / (ulong)*(uint *)(param_1 + 0x41c);
  }
  uVar3 = recovered_10003c9c(param_1);
  lVar1 = 0;
  if ((ulong)uVar3 <= uVar2 + 1) {
    lVar1 = (uVar2 + 1) - (ulong)uVar3;
  }
  return lVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d2c
 */

uint recovered_10003d2c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d5c
 */

undefined8 recovered_10003d5c(long *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if ((*(byte *)((long)param_1 + 0x2c) & 1) != 0) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  uVar4 = uVar3;
  if (uVar1 <= uVar3) {
    uVar4 = uVar1;
  }
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  if ((uVar3 <= uVar4) || (uVar2 = param_1[1], uVar2 < uVar3)) {
    if (param_2 == 0) {
      uVar2 = param_1[1];
      if (uVar2 <= uVar1) {
        return 0;
      }
      uVar3 = uVar1 + 1;
      uVar4 = uVar1;
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[1];
      uVar3 = uVar1;
      uVar4 = uVar1 - 1;
    }
  }
  thunk_memmove((void *)(*param_1 + uVar4),(void *)(*param_1 + uVar3),uVar2 - uVar3);
  param_1[1] = (uVar4 - uVar3) + param_1[1];
  param_1[3] = uVar4;
  param_1[4] = uVar4;
  return 1;
}


#define auStack_30 (*(undefined4 (*)[12])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e0c
 */

void recovered_10003e0c(long param_1,void *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  recovered_100040e4(param_1,auStack_30);
  iVar2 = *(int *)(param_1 + 0x418) * 2;
  iVar1 = iVar2 + 8;
  if (iVar1 < 0x23) {
    iVar1 = 0x22;
  }
  if (iVar2 < 0x25) {
    iVar2 = 0x24;
  }
  iVar1 = ((*(int *)(param_1 + 8) - iVar2) - iVar1) + -0x2c;
  if (iVar1 < 0xf) {
    iVar1 = 0xe;
  }
  thunk_pf_app_scrollbars_layout((ulong)(iVar2 + 0x28U >> 1) << 0x21 | 10,
                     CONCAT44(iVar1 + -0xe,*(int *)(param_1 + 4) + -0x14),auStack_30,(void *)0x0,
                     param_2);
  return;
}

#undef auStack_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ea0
 */

bool recovered_10003ea0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
 * Address: 0x10003ecc
 */

ulong recovered_10003ecc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;

  if ((*(byte *)(param_1 + 0x436) & 1) != 0) {
    uVar5 = *(uint *)(param_1 + 0x3e0);
    uVar6 = recovered_10003c9c(param_1);
    uVar3 = uVar5 - uVar6;
    uVar4 = 0;
    if (uVar6 <= uVar5 && uVar3 != 0) {
      uVar4 = (ulong)uVar3;
    }
    return uVar4;
  }
  lVar1 = 0x3f0;
  if (*(char *)(param_1 + 0x42f) == '\0') {
    lVar1 = 0x388;
  }
  uVar4 = 0;
  if ((ulong)*(uint *)(param_1 + 0x41c) != 0) {
    uVar4 = *(ulong *)(param_1 + lVar1) / (ulong)*(uint *)(param_1 + 0x41c);
  }
  uVar5 = recovered_10003c9c(param_1);
  uVar2 = 0;
  if ((ulong)uVar5 <= uVar4 + 1) {
    uVar2 = (uVar4 + 1) - (ulong)uVar5;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003efc
 */

ulong recovered_10003efc(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  uVar1 = recovered_10003ecc(param_1);
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  if (*(char *)(param_1 + 0x436) == '\x01') {
    uVar2 = (ulong)(uVar1 != *(uint *)(param_1 + 0x3e4));
    *(int *)(param_1 + 0x3e4) = (int)uVar1;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x400);
    uVar3 = recovered_10003ce8(param_1);
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
    if ((*(char *)(param_1 + 0x42f) != '\x01') ||
       (uVar2 = recovered_100041e0(param_1,uVar3 * *(uint *)(param_1 + 0x41c)), (int)uVar2 != 0)) {
      *(ulong *)(param_1 + 0x400) = uVar3;
      uVar2 = (ulong)(uVar4 != uVar3);
    }
  }
  return uVar2;
}


#define local_10 (*(int (*)[4])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f84
 */

uint128 recovered_10003f84(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint128 auVar3;

  iVar2 = *(int *)(param_1 + 0x414);
  local_10[0] = 10;
  local_10[1] = iVar2 * 4 + 0x1a;
  local_10[3] = iVar2 * 0x14 + 0x3a;
  local_10[2] = iVar2 * 0xd + 0x2a;
  if ((int)param_2 < 3) {
    iVar2 = local_10[param_2 + 1] + -8;
  }
  else {
    iVar2 = iVar2 * 5 + local_10[3] + 8;
  }
  iVar1 = *(int *)(param_1 + 4) + -10;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  PF_PART4(auVar3, 4) = *(int *)(param_1 + 0x418) + 0x1c;
  PF_PART4(auVar3, 0) = local_10[param_2];
  PF_PART4(auVar3, 12) = *(int *)(param_1 + 0x418) + 8;
  PF_PART4(auVar3, 8) = iVar2 - local_10[param_2];
  return auVar3;
}

#undef local_10

#undef str_100057ac
#define str_100057ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004018
 */

undefined8 recovered_10004018(long param_1,int param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;

  iVar3 = *(int *)(param_1 + 0x418);
  iVar13 = iVar3 * 2;
  iVar12 = iVar13;
  if (iVar13 < 0x25) {
    iVar12 = 0x24;
  }
  iVar12 = iVar3 + iVar12 + 0x30;
  if (param_3 < iVar12) {
    return 0;
  }
  iVar13 = iVar13 + 8;
  if (iVar13 < 0x23) {
    iVar13 = 0x22;
  }
  if ((*(int *)(param_1 + 8) - iVar13) + -8 <= param_3) {
    return 0;
  }
  iVar13 = *(int *)(param_1 + 0x414);
  uVar4 = *(uint *)(param_1 + 0x41c);
  iVar5 = (uVar4 * 3 + 0x13) * iVar13 + 0x12;
  iVar14 = param_2 - iVar5;
  if (param_2 < iVar5) {
    iVar5 = iVar13 * 0x11 + 0x12;
    iVar14 = param_2 - iVar5;
    if (param_2 < iVar5) {
      return 0;
    }
    if ((param_4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x42d) = 0;
    }
    iVar13 = iVar13 * 3;
  }
  else if ((param_4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x42d) = 1;
  }
  uVar6 = 0;
  if (iVar13 != 0) {
    uVar6 = iVar14 / iVar13;
  }
  uVar1 = uVar6;
  if ((int)(uVar4 - 1) <= (int)uVar6) {
    uVar1 = uVar4 - 1;
  }
  uVar2 = 0;
  if (-1 < (int)uVar6) {
    uVar2 = uVar1;
  }
  uVar6 = 0;
  if (iVar3 + 4 != 0) {
    uVar6 = (param_3 - iVar12) / (iVar3 + 4);
  }
  uVar8 = (ulong)uVar2 + (*(long *)(param_1 + 0x400) + (ulong)uVar6) * (ulong)uVar4;
  lVar11 = 0x3f0;
  if (*(byte *)(param_1 + 0x42f) == 0) {
    lVar11 = 0x388;
  }
  uVar9 = *(ulong *)(param_1 + lVar11);
  uVar15 = uVar9;
  if (uVar8 <= uVar9) {
    uVar15 = uVar8;
  }
  if ((*(byte *)(param_1 + 0x42f) & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 0x3f8);
LAB_10004358:
    lVar11 = uVar15 - uVar10;
    *(long *)(param_1 + 0x398) = lVar11;
    if ((param_4 & 1) != 0) goto LAB_10014b18;
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x3f8);
    uVar15 = uVar15 - (uVar9 - 1 < uVar8);
    if ((uVar10 <= uVar15) && (uVar15 < *(long *)(param_1 + 0x388) + uVar10)) goto LAB_10004358;
    if (param_4 != 0) {
      recovered_1000236c(param_1,str_100057ac);
      return 0;
    }
    uVar7 = recovered_100041e0(param_1,uVar15);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    lVar11 = uVar15 - *(long *)(param_1 + 0x3f8);
    *(long *)(param_1 + 0x398) = lVar11;
  }
  *(long *)(param_1 + 0x3a0) = lVar11;
LAB_10014b18:
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  recovered_10003c24(param_1);
  return 1;
}

#undef str_100057ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e4
 */

void recovered_100040e4(long param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;

  uVar3 = recovered_10003ecc(param_1);
  if (*(char *)(param_1 + 0x436) == '\x01') {
    uVar4 = (ulong)*(uint *)(param_1 + 0x3e4);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x400);
  }
  uVar1 = uVar3;
  if (0x7ffffffe < uVar3) {
    uVar1 = 0x7fffffff;
  }
  *param_2 = 0;
  param_2[1] = (int)uVar1;
  if (uVar3 >> 0x1f == 0) {
    param_2[2] = (int)uVar4;
    uVar2 = recovered_10003c9c(param_1);
  }
  else {
    uVar2 = recovered_10004178(uVar4,uVar3);
    param_2[2] = uVar2;
    uVar2 = recovered_10003c9c(param_1);
    uVar2 = recovered_10004178((ulong)uVar2,uVar3);
  }
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  param_2[3] = uVar2;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004178
 */

uint recovered_10004178(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;

  uVar4 = 0x7fffffff;
  uVar3 = param_2 - param_1;
  if (param_1 <= param_2 && uVar3 != 0) {
    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0x1f;
    do {
      uVar7 = param_2 - uVar6;
      uVar2 = uVar6 - uVar7;
      if (uVar7 > uVar6) {
        uVar2 = uVar6 << 1;
      }
      uVar4 = (uint)(uVar7 <= uVar6) | uVar4 << 1;
      uVar7 = param_1;
      if (uVar3 <= uVar2) {
        uVar7 = -uVar3;
      }
      uVar1 = uVar4;
      if (uVar3 <= uVar2) {
        uVar1 = uVar4 + 1;
      }
      uVar6 = uVar2;
      if ((0x7fffffffU >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
        uVar4 = uVar1;
        uVar6 = uVar2 + uVar7;
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return uVar4;
}


#undef str_1000574f
#define str_1000574f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb5fU)))
#undef str_10005784
#define str_10005784 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb94U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041e0
 */

undefined8 recovered_100041e0(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong n;
  undefined8 uVar1;
  void *src;
  void *dst;
  char *message;
  ulong uVar2;

  uVar2 = param_2 & 0xffffffffffff0000;
  if ((*(long *)(param_1 + 0x3c8) != 0) && (uVar2 == *(ulong *)(param_1 + 0x3f8))) {
    return 1;
  }
  if (*(char *)(param_1 + 0x42e) == '\x01') {
    message = str_1000574f;
  }
  else {
    n = *(ulong *)(param_1 + 0x3f0) - uVar2;
    if (*(ulong *)(param_1 + 0x3f0) < uVar2 || n == 0) {
      return 0;
    }
    if (0xffff < n) {
      n = 0x10000;
    }
    src = (void *)recovered_10002ae4(n);
    dst = (void *)recovered_10002ae4(n);
    if (((src != (void *)0x0) && (dst != (void *)0x0)) &&
       (uVar1 = recovered_10002ebc((ulong)*(uint *)(param_1 + 0x3d0),uVar2 >> 9,param_2 >> 0x29,src,
                                   n >> 9 & 0x7fffff), (int)uVar1 != 0)) {
      thunk_memcpy(dst,src,n);
      recovered_100023fc(*(undefined8 *)(param_1 + 0x380));
      recovered_100023fc(*(undefined8 *)(param_1 + 0x3c8));
      *(void **)(param_1 + 0x380) = src;
      *(ulong *)(param_1 + 0x388) = n;
      *(ulong *)(param_1 + 0x390) = n;
      *(void **)(param_1 + 0x3c8) = dst;
      *(ulong *)(param_1 + 0x3f8) = uVar2;
      *(ulong *)(param_1 + 0x3a0) = param_2 & 0xffff;
      *(ulong *)(param_1 + 0x398) = param_2 & 0xffff;
      *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
      return 1;
    }
    recovered_100023fc(src);
    recovered_100023fc(dst);
    message = str_10005784;
  }
  recovered_1000236c(param_1,message);
  return 0;
}

#undef str_1000574f
#undef str_10005784

#undef str_100057ac
#define str_100057ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

undefined8 recovered_100042e0(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;

  lVar4 = 0x3f0;
  if (*(byte *)(param_1 + 0x42f) == 0) {
    lVar4 = 0x388;
  }
  uVar2 = *(ulong *)(param_1 + lVar4);
  uVar5 = uVar2;
  if (param_2 <= uVar2) {
    uVar5 = param_2;
  }
  if ((*(byte *)(param_1 + 0x42f) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x3f8);
LAB_10004358:
    lVar4 = uVar5 - uVar3;
    *(long *)(param_1 + 0x398) = lVar4;
    if ((param_3 & 1) != 0) goto LAB_10014b18;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x3f8);
    uVar5 = uVar5 - (uVar2 - 1 < param_2);
    if ((uVar3 <= uVar5) && (uVar5 < *(long *)(param_1 + 0x388) + uVar3)) goto LAB_10004358;
    if (param_3 != 0) {
      recovered_1000236c(param_1,str_100057ac);
      return 0;
    }
    uVar1 = recovered_100041e0(param_1,uVar5);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    lVar4 = uVar5 - *(long *)(param_1 + 0x3f8);
    *(long *)(param_1 + 0x398) = lVar4;
  }
  *(long *)(param_1 + 0x3a0) = lVar4;
LAB_10014b18:
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  recovered_10003c24(param_1);
  return 1;
}

#undef str_100057ac

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043a0
 */

int recovered_100043a0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0x1f < param_1) {
    param_1 = 0x20;
  }
  return ((param_1 * 0x20 * param_1 * 0x20 * (param_1 * -0x40 + 0xc00) + 0x80000 >> 0x14) * 10 +
          0x200 >> 10) + 2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043e0
 */

void recovered_100043e0(long param_1,uint param_2,uint param_3,int param_4,int param_5,
                       undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  uVar5 = thunk_terror_ui_colour((uint)param_6);
  uVar6 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 8);
  uVar7 = param_4 + param_2;
  uVar3 = uVar7;
  if ((int)uVar6 <= (int)uVar7) {
    uVar3 = uVar6;
  }
  uVar1 = 0;
  if (-1 < (int)uVar7) {
    uVar1 = uVar3;
  }
  uVar7 = param_5 + param_3;
  uVar3 = uVar7;
  if ((int)uVar4 <= (int)uVar7) {
    uVar3 = uVar4;
  }
  uVar2 = 0;
  if (-1 < (int)uVar7) {
    uVar2 = uVar3;
  }
  uVar7 = param_2;
  if ((int)uVar6 <= (int)param_2) {
    uVar7 = uVar6;
  }
  uVar3 = 0;
  if (-1 < (int)param_2) {
    uVar3 = uVar7;
  }
  uVar7 = param_3;
  if ((int)uVar4 <= (int)param_3) {
    uVar7 = uVar4;
  }
  uVar6 = 0;
  if (-1 < (int)param_3) {
    uVar6 = uVar7;
  }
  for (; uVar7 = uVar3, (int)uVar6 < (int)uVar2; uVar6 = uVar6 + 1) {
    for (; (int)uVar7 < (int)uVar1; uVar7 = uVar7 + 1) {
      recovered_1000487c(param_1,uVar7,uVar6,uVar5);
    }
  }
  return;
}


#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(uint *)(pf_stack_frame + 36))
#define uStack_68 (*(uint *)(pf_stack_frame + 40))
#define uStack_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044b4
 */

void recovered_100044b4(long param_1,uint param_2,int param_3,long param_4,undefined8 param_5)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;

  uVar3 = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    uVar3 = (int)((*(int *)(param_1 + 4) - param_2) + -0x14) / *(int *)(param_1 + 0x414);
  }
  uVar4 = thunk_strlen((char *)param_4);
  if ((int)uVar3 < 1) {
    return;
  }
  if (uVar3 <= uVar4) {
    uVar4 = (ulong)uVar3;
  }
  uVar3 = thunk_terror_ui_colour((uint)param_5);
  if (uVar4 != 0) {
    if (*(long *)(param_1 + 0x3b0) == 0) {
      thunk_memset(&lStack_78,0,0x18);
      uVar5 = recovered_100025ec(param_4,uVar4,(ulong)(uVar3 << 8 | 0xff),&lStack_78);
      if (((int)uVar5 != 0) && (lStack_78 != 0)) {
        for (uVar4 = 0; uVar4 < uStack_68; uVar4 = uVar4 + 1) {
          lVar12 = lStack_78;
          uVar3 = param_2;
          for (uVar10 = 0; uVar10 < uStack_6c; uVar10 = uVar10 + 1) {
            lVar7 = uVar4 * uStack_64;
            if (*(char *)(lVar12 + lVar7 + 3) != '\0') {
              lVar6 = lVar12 + uVar4 * uStack_64;
              recovered_1000487c(param_1,uVar3,(int)uVar4 + param_3,
                                 (uint)*(byte *)(lVar12 + lVar7) << 0x10 |
                                 (uint)*(byte *)(lVar6 + 1) << 8 | (uint)*(byte *)(lVar6 + 2));
            }
            lVar12 = lVar12 + 4;
            uVar3 = uVar3 + 1;
          }
        }
        recovered_100023fc(lStack_78);
      }
    }
    else {
      for (uVar10 = 0; uVar10 != uVar4; uVar10 = uVar10 + 1) {
        for (uVar11 = 0; uVar11 < *(byte *)(param_1 + 0x3bb); uVar11 = uVar11 + 1) {
          uVar14 = param_2;
          for (uVar13 = 0; uVar13 < *(byte *)(param_1 + 0x3ba); uVar13 = uVar13 + 1) {
            if ((*(long *)(param_1 + 0x3b0) != 0) && (uVar11 < *(byte *)(param_1 + 0x3bb))) {
              bVar2 = *(byte *)(param_4 + uVar10);
              uVar9 = (uint)bVar2;
              bVar1 = *(byte *)(param_1 + 0x3bd);
              uVar8 = (uint)bVar1;
              if ((bVar2 < bVar1) || ((uint)*(ushort *)(param_1 + 0x3b8) <= bVar2 - uVar8)) {
                uVar9 = 0x3f;
              }
              if (((uVar8 <= uVar9) && (uVar9 - uVar8 < (uint)*(ushort *)(param_1 + 0x3b8))) &&
                 ((((uint)*(byte *)(*(long *)(param_1 + 0x3b0) +
                                    (uVar11 + (long)(int)(uVar9 - bVar1) *
                                              (long)(int)(uint)*(byte *)(param_1 + 0x3bb)) *
                                    (ulong)*(byte *)(param_1 + 0x3bc) + (ulong)(uVar13 >> 3)) <<
                   (ulong)(uVar13 & 7)) >> 7 & 1) != 0)) {
                recovered_1000487c(param_1,uVar14 + (int)uVar10 * *(int *)(param_1 + 0x414),
                                   (int)uVar11 + param_3,uVar3);
              }
            }
            uVar14 = uVar14 + 1;
          }
        }
      }
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000451c
 */

void recovered_1000451c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;

  iVar11 = (int)param_3;
  iVar10 = (int)((ulong)param_3 >> 0x20);
  if (iVar11 < 1 || iVar10 < 1) {
    return;
  }
  uVar8 = (uint)param_2;
  uVar9 = (uint)((ulong)param_2 >> 0x20);
  recovered_100043e0(param_1,uVar8,uVar9,iVar11,1,param_4);
  recovered_100043e0(param_1,uVar8,(iVar10 + uVar9) - 1,iVar11,1,param_4);
  recovered_100043e0(param_1,uVar8,uVar9,1,iVar10,param_4);
  uVar8 = iVar11 + uVar8;
  uVar6 = uVar8 - 1;
  uVar7 = thunk_terror_ui_colour((uint)param_4);
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)(param_1 + 8);
  uVar3 = uVar8;
  if ((int)uVar4 <= (int)uVar8) {
    uVar3 = uVar4;
  }
  uVar1 = 0;
  if (-1 < (int)uVar8) {
    uVar1 = uVar3;
  }
  uVar8 = iVar10 + uVar9;
  uVar3 = uVar8;
  if ((int)uVar5 <= (int)uVar8) {
    uVar3 = uVar5;
  }
  uVar2 = 0;
  if (-1 < (int)uVar8) {
    uVar2 = uVar3;
  }
  uVar8 = uVar6;
  if ((int)uVar4 <= (int)uVar6) {
    uVar8 = uVar4;
  }
  uVar3 = 0;
  if (-1 < (int)uVar6) {
    uVar3 = uVar8;
  }
  if ((int)uVar5 <= (int)uVar9) {
    uVar9 = uVar5;
  }
  uVar8 = 0;
  if (-1 < param_2) {
    uVar8 = uVar9;
  }
  for (; uVar9 = uVar3, (int)uVar8 < (int)uVar2; uVar8 = uVar8 + 1) {
    for (; (int)uVar9 < (int)uVar1; uVar9 = uVar9 + 1) {
      recovered_1000487c(param_1,uVar9,uVar8,uVar7);
    }
  }
  return;
}


#define lStack_78 (*(long *)(pf_stack_frame + 24))
#define uStack_6c (*(uint *)(pf_stack_frame + 36))
#define uStack_68 (*(uint *)(pf_stack_frame + 40))
#define uStack_64 (*(uint *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045c4
 */

void recovered_100045c4(long param_1,uint param_2,long param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint128 auVar18;

  auVar18 = recovered_10003f84(param_1,param_2);
  iVar12 = PF_PART4(auVar18, 8);
  if (iVar12 < 9) {
    return;
  }
  uVar6 = PF_PART4(auVar18, 0);
  uVar7 = PF_PART4(auVar18, 4);
  recovered_100043e0(param_1,uVar6,uVar7,iVar12,PF_PART4(auVar18, 12),2);
  recovered_1000451c(param_1,PF_PART8(auVar18, 0),PF_PART8(auVar18, 8),3);
  recovered_100043e0(param_1,uVar6 + 1,uVar7 + 1,iVar12 + -2,1,0x1f);
  uVar4 = thunk_strlen((char *)param_3);
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x414) != 0) {
    uVar3 = (iVar12 - 8U) / *(uint *)(param_1 + 0x414);
  }
  if (uVar3 <= uVar4) {
    uVar4 = (ulong)uVar3;
  }
  uVar3 = thunk_terror_ui_colour(1);
  if (uVar4 != 0) {
    if (*(long *)(param_1 + 0x3b0) == 0) {
      thunk_memset(&lStack_78,0,0x18);
      uVar5 = recovered_100025ec(param_3,uVar4,(ulong)(uVar3 << 8 | 0xff),&lStack_78);
      if (((int)uVar5 != 0) && (lStack_78 != 0)) {
        for (uVar4 = 0; uVar4 < uStack_68; uVar4 = uVar4 + 1) {
          lVar15 = lStack_78;
          uVar3 = uVar6 + 4;
          for (uVar13 = 0; uVar13 < uStack_6c; uVar13 = uVar13 + 1) {
            lVar9 = uVar4 * uStack_64;
            if (*(char *)(lVar15 + lVar9 + 3) != '\0') {
              lVar8 = lVar15 + uVar4 * uStack_64;
              recovered_1000487c(param_1,uVar3,(int)uVar4 + uVar7 + 4,
                                 (uint)*(byte *)(lVar15 + lVar9) << 0x10 |
                                 (uint)*(byte *)(lVar8 + 1) << 8 | (uint)*(byte *)(lVar8 + 2));
            }
            lVar15 = lVar15 + 4;
            uVar3 = uVar3 + 1;
          }
        }
        recovered_100023fc(lStack_78);
      }
    }
    else {
      for (uVar13 = 0; uVar13 != uVar4; uVar13 = uVar13 + 1) {
        for (uVar14 = 0; uVar14 < *(byte *)(param_1 + 0x3bb); uVar14 = uVar14 + 1) {
          uVar17 = uVar6 + 4;
          for (uVar16 = 0; uVar16 < *(byte *)(param_1 + 0x3ba); uVar16 = uVar16 + 1) {
            if ((*(long *)(param_1 + 0x3b0) != 0) && (uVar14 < *(byte *)(param_1 + 0x3bb))) {
              bVar2 = *(byte *)(param_3 + uVar13);
              uVar11 = (uint)bVar2;
              bVar1 = *(byte *)(param_1 + 0x3bd);
              uVar10 = (uint)bVar1;
              if ((bVar2 < bVar1) || ((uint)*(ushort *)(param_1 + 0x3b8) <= bVar2 - uVar10)) {
                uVar11 = 0x3f;
              }
              if (((uVar10 <= uVar11) && (uVar11 - uVar10 < (uint)*(ushort *)(param_1 + 0x3b8))) &&
                 ((((uint)*(byte *)(*(long *)(param_1 + 0x3b0) +
                                    (uVar14 + (long)(int)(uVar11 - bVar1) *
                                              (long)(int)(uint)*(byte *)(param_1 + 0x3bb)) *
                                    (ulong)*(byte *)(param_1 + 0x3bc) + (ulong)(uVar16 >> 3)) <<
                   (ulong)(uVar16 & 7)) >> 7 & 1) != 0)) {
                recovered_1000487c(param_1,uVar17 + (int)uVar13 * *(int *)(param_1 + 0x414),
                                   (int)uVar14 + uVar7 + 4,uVar3);
              }
            }
            uVar17 = uVar17 + 1;
          }
        }
      }
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
 * Address: 0x10004684
 */

void recovered_10004684(long param_1,uint param_2,int param_3,long param_4,long param_5,
                       undefined8 param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;

  uVar3 = thunk_terror_ui_colour((uint)param_6);
  if (param_5 != 0) {
    if (*(long *)(param_1 + 0x3b0) == 0) {
      thunk_memset(&lStack_78,0,0x18);
      uVar4 = recovered_100025ec(param_4,param_5,(ulong)(uVar3 << 8 | 0xff),&lStack_78);
      if (((int)uVar4 != 0) && (lStack_78 != 0)) {
        for (uVar11 = 0; uVar11 < uStack_68; uVar11 = uVar11 + 1) {
          lVar9 = lStack_78;
          uVar3 = param_2;
          for (uVar10 = 0; uVar10 < uStack_6c; uVar10 = uVar10 + 1) {
            lVar6 = uVar11 * uStack_64;
            if (*(char *)(lVar9 + lVar6 + 3) != '\0') {
              lVar5 = lVar9 + uVar11 * uStack_64;
              recovered_1000487c(param_1,uVar3,(int)uVar11 + param_3,
                                 (uint)*(byte *)(lVar9 + lVar6) << 0x10 |
                                 (uint)*(byte *)(lVar5 + 1) << 8 | (uint)*(byte *)(lVar5 + 2));
            }
            lVar9 = lVar9 + 4;
            uVar3 = uVar3 + 1;
          }
        }
        recovered_100023fc(lStack_78);
      }
    }
    else {
      for (lVar9 = 0; lVar9 != param_5; lVar9 = lVar9 + 1) {
        for (uVar11 = 0; uVar11 < *(byte *)(param_1 + 0x3bb); uVar11 = uVar11 + 1) {
          uVar13 = param_2;
          for (uVar12 = 0; uVar12 < *(byte *)(param_1 + 0x3ba); uVar12 = uVar12 + 1) {
            if ((*(long *)(param_1 + 0x3b0) != 0) && (uVar11 < *(byte *)(param_1 + 0x3bb))) {
              bVar2 = *(byte *)(param_4 + lVar9);
              uVar8 = (uint)bVar2;
              bVar1 = *(byte *)(param_1 + 0x3bd);
              uVar7 = (uint)bVar1;
              if ((bVar2 < bVar1) || ((uint)*(ushort *)(param_1 + 0x3b8) <= bVar2 - uVar7)) {
                uVar8 = 0x3f;
              }
              if (((uVar7 <= uVar8) && (uVar8 - uVar7 < (uint)*(ushort *)(param_1 + 0x3b8))) &&
                 ((((uint)*(byte *)(*(long *)(param_1 + 0x3b0) +
                                    (uVar11 + (long)(int)(uVar8 - bVar1) *
                                              (long)(int)(uint)*(byte *)(param_1 + 0x3bb)) *
                                    (ulong)*(byte *)(param_1 + 0x3bc) + (ulong)(uVar12 >> 3)) <<
                   (ulong)(uVar12 & 7)) >> 7 & 1) != 0)) {
                recovered_1000487c(param_1,uVar13 + (int)lVar9 * *(int *)(param_1 + 0x414),
                                   (int)uVar11 + param_3,uVar3);
              }
            }
            uVar13 = uVar13 + 1;
          }
        }
      }
    }
  }
  return;
}

#undef lStack_78
#undef uStack_6c
#undef uStack_68
#undef uStack_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000487c
 */

void recovered_1000487c(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if (((-1 < (int)(param_3 | param_2)) && ((int)param_2 < *(int *)(param_1 + 4))) &&
     ((int)param_3 < *(int *)(param_1 + 8))) {
    puVar1 = (undefined1 *)
             (*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0xc) * (ulong)param_3 +
             (ulong)param_2 * 4);
    *puVar1 = (char)((uint)param_4 >> 0x10);
    puVar1[1] = (char)((uint)param_4 >> 8);
    puVar1[2] = (char)param_4;
    puVar1[3] = 0xff;
  }
  return;
}

