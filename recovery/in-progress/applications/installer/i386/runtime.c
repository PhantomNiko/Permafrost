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
#undef UINT_0000689c
#define UINT_0000689c (*(uint *)(0x689cU))
#define local_1600 (*(char (*)[4])(frame + 48))
#define local_15fc (*(uint *)(frame + 52))
#define local_15f8 (*(uint *)(frame + 56))
#define local_15d4 (*(void * *)(frame + 92))
#define local_12c0 (*(char (*)[3168])(frame + 880))
#define local_660 (*(int *)(frame + 4048))
#define local_65c (*(uint *)(frame + 4052))
#define local_658 (*(uint *)(frame + 4056))
#define local_654 (*(uint *)(frame + 4060))
#define local_650 (*(uint *)(frame + 4064))
#define local_64c (*(uint *)(frame + 4068))
#define local_648 (*(uint *)(frame + 4072))
#define local_344 (*(char *)(frame + 4844))
#define local_343 (*(char *)(frame + 4845))
#define local_33c (*(uint *)(frame + 4852))
#define local_32c (*(int *)(frame + 4868))
#define local_328 (*(uint *)(frame + 4872))
#define local_c8 (*(undefined1 (*)[48])(frame + 5480))
#define local_98 (*(byte *)(frame + 5528))
#define local_94 (*(uint *)(frame + 5532))
#define local_90 (*(int *)(frame + 5536))
#define local_8c (*(char *)(frame + 5540))
#define local_8b (*(char *)(frame + 5541))
#define local_8a (*(char *)(frame + 5542))
#define local_89 (*(char *)(frame + 5543))
#define local_88 (*(char *)(frame + 5544))
#define local_87 (*(byte *)(frame + 5545))
#define local_86 (*(char *)(frame + 5546))
#define local_85 (*(char *)(frame + 5547))
#define local_84 (*(char *)(frame + 5548))
#define local_83 (*(char *)(frame + 5549))
#define local_82 (*(char *)(frame + 5550))
#define local_81 (*(char *)(frame + 5551))
#define local_80 (*(char *)(frame + 5552))
#define local_7c (*(uint *)(frame + 5556))
#define local_74 (*(uint *)(frame + 5564))
#define local_70 (*(undefined2 *)(frame + 5568))
#define local_6e (*(char *)(frame + 5570))
#define local_6d (*(char *)(frame + 5571))
#define local_6c (*(char *)(frame + 5572))
#define local_6b (*(char *)(frame + 5573))
#define local_6a (*(char *)(frame + 5574))
#define local_69 (*(char *)(frame + 5575))
#define local_68 (*(char *)(frame + 5576))
#define local_67 (*(char *)(frame + 5577))
#define local_66 (*(char *)(frame + 5578))
#define local_65 (*(char *)(frame + 5579))
#define local_64 (*(char *)(frame + 5580))
#define local_63 (*(char *)(frame + 5581))
#define local_62 (*(char *)(frame + 5582))
#define local_61 (*(char *)(frame + 5583))
#define local_60 (*(char *)(frame + 5584))
#define local_5f (*(char *)(frame + 5585))
#define local_5e (*(char *)(frame + 5586))
#define local_5d (*(char *)(frame + 5587))
#define local_5c (*(char *)(frame + 5588))
#define local_5b (*(char *)(frame + 5589))
#define local_5a (*(char *)(frame + 5590))
#define local_59 (*(char *)(frame + 5591))
#define local_58 (*(char *)(frame + 5592))
#define local_57 (*(char *)(frame + 5593))
#define local_56 (*(char *)(frame + 5594))
#define local_55 (*(char *)(frame + 5595))
#define local_54 (*(char *)(frame + 5596))
#define local_53 (*(char *)(frame + 5597))
#define local_52 (*(char *)(frame + 5598))
#define local_51 (*(char *)(frame + 5599))
#define local_50 (*(int *)(frame + 5600))
#define local_4c (*(uint *)(frame + 5604))
#define local_48 (*(int *)(frame + 5608))
#define local_44 (*(uint *)(frame + 5612))
#define local_40 (*(uint *)(frame + 5616))
#define local_3c (*(void * *)(frame + 5620))
#define local_38 (*(undefined4 *)(frame + 5624))
#define local_34 (*(undefined4 *)(frame + 5628))
#define local_30 (*(undefined4 *)(frame + 5632))
#define local_2a (*(undefined2 *)(frame + 5638))
#define local_28 (*(char *)(frame + 5640))
#define local_27 (*(char *)(frame + 5641))
#define local_26 (*(char *)(frame + 5642))
#define local_25 (*(char *)(frame + 5643))
#define local_24 (*(char *)(frame + 5644))
#define local_23 (*(char *)(frame + 5645))
#define local_22 (*(char *)(frame + 5646))
#define local_21 (*(char *)(frame + 5647))
#define local_20 (*(char *)(frame + 5648))
#define local_1f (*(char *)(frame + 5649))
#define local_1e (*(char *)(frame + 5650))
#define local_1d (*(char *)(frame + 5651))
#define local_1c (*(char *)(frame + 5652))
#define local_1b (*(char *)(frame + 5653))
#define local_1a (*(char *)(frame + 5654))
#define local_19 (*(char *)(frame + 5655))
#define local_18 (*(char *)(frame + 5656))
#define local_17 (*(char *)(frame + 5657))
#define local_16 (*(char *)(frame + 5658))
#define local_15 (*(char *)(frame + 5659))
#define local_14 (*(char *)(frame + 5660))
#define local_13 (*(char *)(frame + 5661))
#define local_12 (*(char *)(frame + 5662))
#define local_11 (*(char *)(frame + 5663))
#define acStack_644 (*(char (*)[768])(frame + 4076))
#define acStack_341 (*(char (*)[5])(frame + 4847))
#define acStack_2e1 (*(char (*)[537])(frame + 4943))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009c0
 */

int recovered_100009c0(void)

{
  unsigned char frame[5712] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  code *pcVar2;
  uchar uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  undefined4 uVar8;
  undefined4 extraout_EAX_01 = 0;
  char cVar9;
  undefined1 uVar11;
  ushort uVar10;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  char *pcVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;

  pf_app_window_spec(local_c8,(char *)0x1803c9c,0x280,0x1c8);
  local_44 = 0;
  local_40 = 0;
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar6 = -0x340;
  do {
    local_12c0[iVar6] = '\0';
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  iVar6 = -0xf80;
  do {
    acStack_341[iVar6 + 1] = '\0';
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  local_650 = 0x32;
  local_98 = local_98 | 1;
  uVar7 = terror_ui_window_open(local_1600,local_c8);
  if (uVar7 == 0) {
    local_50 = 0;
  }
  else {
    local_44 = local_15fc;
    local_40 = local_15f8;
    local_3c = local_15d4;
    if (local_15d4 == (void *)0x0) {
      local_50 = 0;
    }
    else {
      recovered_10002240((int)local_12c0);
      while( true ) {
        pcVar18 = acStack_341 + 1;
        memset(pcVar18,0,0x278);
        uVar7 = terror_ui_window_query(local_1600,pcVar18);
        if (((uVar7 == 0) || (uVar3 = terror_ui_window_info_requests_close(pcVar18), uVar3 != '\0')) ||
           (uVar7 = terror_ui_window_sync_buffer(local_1600,pcVar18), uVar7 == 0)) break;
        local_44 = local_15fc;
        local_40 = local_15f8;
        local_3c = local_15d4;
        if (local_15d4 == (void *)0x0) break;
        local_50 = 1;
        if (0 < (int)local_15f8) {
          uVar7 = 0;
          do {
            if (0 < (int)local_15fc) {
              uVar14 = 0;
              do {
                if (((local_15d4 != (void *)0x0) && ((int)uVar14 < (int)local_15fc)) &&
                   ((int)uVar7 < (int)local_15f8)) {
                  iVar6 = local_15fc * uVar7 + uVar14;
                  *(undefined1 *)((int)local_15d4 + iVar6 * 4) = 0xf4;
                  *(undefined1 *)((int)local_15d4 + iVar6 * 4 + 1) = 0xf6;
                  *(undefined1 *)((int)local_15d4 + iVar6 * 4 + 2) = 0xf8;
                  *(undefined1 *)((int)local_15d4 + iVar6 * 4 + 3) = 0xff;
                }
                uVar14 = uVar14 + 1;
              } while (local_15fc != uVar14);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != local_15f8);
        }
        iVar6 = 0;
        do {
          if (0 < (int)local_15fc) {
            uVar7 = 0;
            do {
              if (((local_15d4 != (void *)0x0) && ((int)uVar7 < (int)local_15fc)) &&
                 (iVar6 < (int)local_15f8)) {
                iVar15 = local_15fc * iVar6 + uVar7;
                *(undefined1 *)((int)local_15d4 + iVar15 * 4) = 0x22;
                *(undefined1 *)((int)local_15d4 + iVar15 * 4 + 1) = 0x42;
                *(undefined1 *)((int)local_15d4 + iVar15 * 4 + 2) = 0x62;
                *(undefined1 *)((int)local_15d4 + iVar15 * 4 + 3) = 0xff;
              }
              uVar7 = uVar7 + 1;
            } while (local_15fc != uVar7);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x32);
        recovered_100026a0((int *)&local_44,0x1c,0x12,(char *)0x1803d00,2,0xff,0xff,0xff);
        recovered_100026a0((int *)&local_44,0x1e,0x40,(char *)0x1803d13,1,0x46,0x46,0x46);
        uVar7 = 0;
        local_4c = 0x69;
        uVar8 = extraout_EAX;
        do {
          if (uVar7 == local_65c) {
            bVar17 = local_658 == 0;
            uVar11 = 0xdd;
            if (!bVar17) {
              uVar11 = 0xe6;
            }
            cVar12 = !bVar17 * '\x04' + -0x14;
            cVar9 = bVar17 * '\x02' + -6;
            uVar10 = CONCAT11(uVar11,cVar9);
            local_48 = CONCAT31((int3)((uint)uVar8 >> 8),(int)uVar7 < local_660);
            if (local_660 <= (int)uVar7) {
              uVar10 = CONCAT11(0xfc,cVar9);
              cVar12 = -4;
            }
            uVar14 = (uint)uVar10;
            if (local_660 <= (int)uVar7) goto LAB_10000d2b;
          }
          else {
            uVar14 = 0xfc00;
            local_48 = 0;
            cVar12 = -4;
LAB_10000d2b:
            uVar10 = (ushort)CONCAT31((int3)(uVar14 >> 8),0xfc);
          }
          local_94 = uVar7 * 0x1a + 0x52;
          local_90 = uVar7 * 0x1a;
          uVar14 = local_94;
          do {
            iVar6 = 0x1c;
            do {
              if (((local_3c != (void *)0x0) && (iVar6 < (int)local_44)) &&
                 ((int)uVar14 < (int)local_40)) {
                iVar15 = local_44 * uVar14 + iVar6;
                *(char *)((int)local_3c + iVar15 * 4) = (char)(uVar10 >> 8);
                *(char *)((int)local_3c + iVar15 * 4 + 1) = cVar12;
                *(char *)((int)local_3c + iVar15 * 4 + 2) = (char)uVar10;
                *(undefined1 *)((int)local_3c + iVar15 * 4 + 3) = 0xff;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0x264);
            uVar14 = uVar14 + 1;
          } while (uVar14 != local_4c);
          bVar17 = (char)local_48 == '\0';
          uVar11 = 0x99;
          if (bVar17) {
            uVar11 = 0xc4;
          }
          uVar4 = 0x67;
          if (bVar17) {
            uVar4 = 0xc4;
          }
          uVar5 = 0x34;
          if (bVar17) {
            uVar5 = 0xc4;
          }
          local_74 = uVar7;
          recovered_100028a0((int *)&local_44,0x1c,local_94,0x248,0x17,uVar5,uVar4,uVar11);
          if ((int)uVar7 < local_660) {
            iVar6 = local_90 + 0x5a;
            pcVar18 = local_12c0 + uVar7 * 0x84 + 4;
            bVar21 = 0x1e;
            bVar20 = 0x1e;
            bVar19 = 0x1e;
LAB_10000cbf:
            recovered_100026a0((int *)&local_44,0x24,iVar6,pcVar18,1,bVar19,bVar20,bVar21);
            uVar8 = extraout_EAX_00;
          }
          else {
            uVar8 = extraout_EAX_01;
            if (uVar7 == 0) {
              bVar21 = 0x78;
              bVar20 = 0x78;
              bVar19 = 0x78;
              pcVar18 = (char *)0x1803d21;
              iVar6 = 0x5a;
              goto LAB_10000cbf;
            }
          }
          uVar7 = uVar7 + 1;
          local_4c = local_4c + 0x1a;
        } while (uVar7 != 6);
        recovered_10002a90((int *)&local_44,0x1e,0xfa,0x138,(char *)0x1803d2c,
                           *(char **)(local_654 * 4 + 0x180402c),local_658 == 1);
        local_2a = local_2a & 0xff00;
        if ((int)local_650 < 1) {
          local_2a = 0x30;
LAB_10001206:
          iVar6 = 2;
          pcVar18 = (char *)((int)&local_2a + 1);
LAB_10001310:
          *pcVar18 = '%';
LAB_10001313:
          pcVar18 = (char *)((int)&local_2a + iVar6);
        }
        else {
          uVar7 = 0;
          uVar14 = local_650;
          do {
            acStack_341[uVar7 + 1] = (byte)(uVar14 % 10) | 0x30;
            uVar13 = uVar7 + 1;
            if (0xe < uVar7) break;
            bVar17 = 9 < uVar14;
            uVar7 = uVar13;
            uVar14 = uVar14 / 10;
          } while (bVar17);
          do {
            cVar12 = acStack_341[uVar13];
            local_12 = cVar12;
            local_11 = '\0';
            pcVar18 = &local_11;
            if ((char)local_2a == '\0') {
              uVar7 = 0;
joined_r0x100010c4:
              while (uVar14 = uVar7, cVar12 != '\0') {
                *(char *)((int)&local_2a + uVar7) = cVar12;
                uVar14 = uVar7 + 1;
                if (0x15 < uVar7) break;
                cVar12 = *pcVar18;
                pcVar18 = pcVar18 + 1;
                uVar7 = uVar14;
              }
LAB_100010e4:
              pcVar18 = (char *)((int)&local_2a + uVar14);
            }
            else {
              if (PF_PART1(local_2a, 1) == '\0') {
                uVar7 = 1;
                goto joined_r0x100010c4;
              }
              if (local_28 == '\0') {
                uVar7 = 2;
                goto joined_r0x100010c4;
              }
              if (local_27 == '\0') {
                uVar7 = 3;
                goto joined_r0x100010c4;
              }
              if (local_26 == '\0') {
                uVar7 = 4;
                goto joined_r0x100010c4;
              }
              if (local_25 == '\0') {
                uVar7 = 5;
                goto joined_r0x100010c4;
              }
              if (local_24 == '\0') {
                uVar7 = 6;
                goto joined_r0x100010c4;
              }
              if (local_23 == '\0') {
                uVar7 = 7;
                goto joined_r0x100010c4;
              }
              if (local_22 == '\0') {
                uVar7 = 8;
                goto joined_r0x100010c4;
              }
              if (local_21 == '\0') {
                uVar7 = 9;
                goto joined_r0x100010c4;
              }
              if (local_20 == '\0') {
                uVar7 = 10;
                goto joined_r0x100010c4;
              }
              if (local_1f == '\0') {
                uVar7 = 0xb;
                goto joined_r0x100010c4;
              }
              if (local_1e == '\0') {
                uVar7 = 0xc;
                goto joined_r0x100010c4;
              }
              if (local_1d == '\0') {
                uVar7 = 0xd;
                goto joined_r0x100010c4;
              }
              if (local_1c == '\0') {
                uVar7 = 0xe;
                goto joined_r0x100010c4;
              }
              if (local_1b == '\0') {
                uVar7 = 0xf;
                goto joined_r0x100010c4;
              }
              if (local_1a == '\0') {
                uVar7 = 0x10;
                goto joined_r0x100010c4;
              }
              if (local_19 == '\0') {
                uVar7 = 0x11;
                goto joined_r0x100010c4;
              }
              if (local_18 == '\0') {
                uVar7 = 0x12;
                goto joined_r0x100010c4;
              }
              if (local_17 == '\0') {
                uVar7 = 0x13;
                goto joined_r0x100010c4;
              }
              if (local_16 == '\0') {
                uVar7 = 0x14;
                goto joined_r0x100010c4;
              }
              if (local_15 == '\0') {
                uVar7 = 0x15;
                goto joined_r0x100010c4;
              }
              if (local_14 == '\0') {
                uVar7 = 0x16;
                goto joined_r0x100010c4;
              }
              pcVar18 = &local_13;
              if (local_13 == '\0') {
                uVar14 = 0x17;
                goto LAB_100010e4;
              }
            }
            uVar13 = uVar13 - 1;
            *pcVar18 = '\0';
          } while (uVar13 != 0);
          if ((char)local_2a == '\0') {
            iVar6 = 1;
            pcVar18 = (char *)&local_2a;
            goto LAB_10001310;
          }
          if (PF_PART1(local_2a, 1) == '\0') goto LAB_10001206;
          if (local_28 == '\0') {
            iVar6 = 3;
            pcVar18 = &local_28;
            goto LAB_10001310;
          }
          if (local_27 == '\0') {
            iVar6 = 4;
            pcVar18 = &local_27;
            goto LAB_10001310;
          }
          if (local_26 == '\0') {
            iVar6 = 5;
            pcVar18 = &local_26;
            goto LAB_10001310;
          }
          if (local_25 == '\0') {
            iVar6 = 6;
            pcVar18 = &local_25;
            goto LAB_10001310;
          }
          if (local_24 == '\0') {
            iVar6 = 7;
            pcVar18 = &local_24;
            goto LAB_10001310;
          }
          if (local_23 == '\0') {
            iVar6 = 8;
            pcVar18 = &local_23;
            goto LAB_10001310;
          }
          if (local_22 == '\0') {
            iVar6 = 9;
            pcVar18 = &local_22;
            goto LAB_10001310;
          }
          if (local_21 == '\0') {
            iVar6 = 10;
            pcVar18 = &local_21;
            goto LAB_10001310;
          }
          if (local_20 == '\0') {
            iVar6 = 0xb;
            pcVar18 = &local_20;
            goto LAB_10001310;
          }
          if (local_1f == '\0') {
            iVar6 = 0xc;
            pcVar18 = &local_1f;
            goto LAB_10001310;
          }
          if (local_1e == '\0') {
            iVar6 = 0xd;
            pcVar18 = &local_1e;
            goto LAB_10001310;
          }
          if (local_1d == '\0') {
            iVar6 = 0xe;
            pcVar18 = &local_1d;
            goto LAB_10001310;
          }
          if (local_1c == '\0') {
            iVar6 = 0xf;
            pcVar18 = &local_1c;
            goto LAB_10001310;
          }
          if (local_1b == '\0') {
            iVar6 = 0x10;
            pcVar18 = &local_1b;
            goto LAB_10001310;
          }
          if (local_1a == '\0') {
            iVar6 = 0x11;
            pcVar18 = &local_1a;
            goto LAB_10001310;
          }
          if (local_19 == '\0') {
            iVar6 = 0x12;
            pcVar18 = &local_19;
            goto LAB_10001310;
          }
          if (local_18 == '\0') {
            iVar6 = 0x13;
            pcVar18 = &local_18;
            goto LAB_10001310;
          }
          if (local_17 == '\0') {
            iVar6 = 0x14;
            pcVar18 = &local_17;
            goto LAB_10001310;
          }
          if (local_16 == '\0') {
            iVar6 = 0x15;
            pcVar18 = &local_16;
            goto LAB_10001310;
          }
          if (local_15 == '\0') {
            iVar6 = 0x16;
            pcVar18 = &local_15;
            goto LAB_10001310;
          }
          if (local_14 == '\0') {
            iVar6 = 0x17;
            pcVar18 = &local_14;
            goto LAB_10001310;
          }
          pcVar18 = &local_13;
          if (local_13 == '\0') {
            iVar6 = 0x17;
            goto LAB_10001313;
          }
        }
        *pcVar18 = '\0';
        recovered_10002a90((int *)&local_44,0x184,0xfa,0xe0,(char *)0x1803d35,(char *)&local_2a,
                           local_658 == 2);
        recovered_10002a90((int *)&local_44,0x1e,0x132,0x246,(char *)0x1803d3e,
                           *(char **)(local_64c * 4 + 0x1804040),local_658 == 3);
        local_70 = local_70 & 0xff00;
        if (local_648 == 0) {
          local_70 = 0x30;
        }
        else {
          uVar7 = 0;
          uVar14 = local_648;
          do {
            acStack_341[uVar7 + 1] = (byte)(uVar14 % 10) | 0x30;
            uVar13 = uVar7 + 1;
            if (0xe < uVar7) break;
            bVar17 = 9 < uVar14;
            uVar7 = uVar13;
            uVar14 = uVar14 / 10;
          } while (bVar17);
          do {
            cVar12 = acStack_341[uVar13];
            local_11 = '\0';
            if ((char)local_70 == '\0') {
              uVar7 = 0;
LAB_10001660:
              pcVar18 = &local_11;
              while (uVar14 = uVar7, cVar12 != '\0') {
                *(char *)((int)&local_70 + uVar7) = cVar12;
                uVar14 = uVar7 + 1;
                if (0x1d < uVar7) break;
                cVar12 = *pcVar18;
                uVar7 = uVar14;
                pcVar18 = pcVar18 + 1;
              }
LAB_10001684:
              pcVar18 = (char *)((int)&local_70 + uVar14);
            }
            else {
              if (PF_PART1(local_70, 1) == '\0') {
                uVar7 = 1;
                goto LAB_10001660;
              }
              if (local_6e == '\0') {
                uVar7 = 2;
                goto LAB_10001660;
              }
              if (local_6d == '\0') {
                uVar7 = 3;
                goto LAB_10001660;
              }
              if (local_6c == '\0') {
                uVar7 = 4;
                goto LAB_10001660;
              }
              if (local_6b == '\0') {
                uVar7 = 5;
                goto LAB_10001660;
              }
              if (local_6a == '\0') {
                uVar7 = 6;
                goto LAB_10001660;
              }
              if (local_69 == '\0') {
                uVar7 = 7;
                goto LAB_10001660;
              }
              if (local_68 == '\0') {
                uVar7 = 8;
                goto LAB_10001660;
              }
              if (local_67 == '\0') {
                uVar7 = 9;
                goto LAB_10001660;
              }
              if (local_66 == '\0') {
                uVar7 = 10;
                goto LAB_10001660;
              }
              if (local_65 == '\0') {
                uVar7 = 0xb;
                goto LAB_10001660;
              }
              if (local_64 == '\0') {
                uVar7 = 0xc;
                goto LAB_10001660;
              }
              if (local_63 == '\0') {
                uVar7 = 0xd;
                goto LAB_10001660;
              }
              if (local_62 == '\0') {
                uVar7 = 0xe;
                goto LAB_10001660;
              }
              if (local_61 == '\0') {
                uVar7 = 0xf;
                goto LAB_10001660;
              }
              if (local_60 == '\0') {
                uVar7 = 0x10;
                goto LAB_10001660;
              }
              if (local_5f == '\0') {
                uVar7 = 0x11;
                goto LAB_10001660;
              }
              if (local_5e == '\0') {
                uVar7 = 0x12;
                goto LAB_10001660;
              }
              if (local_5d == '\0') {
                uVar7 = 0x13;
                goto LAB_10001660;
              }
              if (local_5c == '\0') {
                uVar7 = 0x14;
                goto LAB_10001660;
              }
              if (local_5b == '\0') {
                uVar7 = 0x15;
                goto LAB_10001660;
              }
              if (local_5a == '\0') {
                uVar7 = 0x16;
                goto LAB_10001660;
              }
              if (local_59 == '\0') {
                uVar7 = 0x17;
                goto LAB_10001660;
              }
              if (local_58 == '\0') {
                uVar7 = 0x18;
                goto LAB_10001660;
              }
              if (local_57 == '\0') {
                uVar7 = 0x19;
                goto LAB_10001660;
              }
              if (local_56 == '\0') {
                uVar7 = 0x1a;
                goto LAB_10001660;
              }
              if (local_55 == '\0') {
                uVar7 = 0x1b;
                goto LAB_10001660;
              }
              if (local_54 == '\0') {
                uVar7 = 0x1c;
                goto LAB_10001660;
              }
              if (local_53 == '\0') {
                uVar7 = 0x1d;
                goto LAB_10001660;
              }
              if (local_52 == '\0') {
                uVar7 = 0x1e;
                goto LAB_10001660;
              }
              pcVar18 = &local_51;
              if (local_51 == '\0') {
                uVar14 = 0x1f;
                goto LAB_10001684;
              }
            }
            uVar13 = uVar13 - 1;
            *pcVar18 = '\0';
          } while (uVar13 != 0);
        }
        recovered_10002a90((int *)&local_44,0x1e,0x160,0x130,(char *)0x1803d4d,(char *)&local_70,
                           local_658 == 4);
        recovered_10002ca0((int *)&local_44,0x1e,0x184,0x70,0x24,(char *)0x1803d59,0);
        pcVar18 = (char *)0x1803d61;
        if (local_344 == '\0') {
          pcVar18 = (char *)0x1803d69;
        }
        recovered_10002ca0((int *)&local_44,0x1de,0x184,0x86,0x24,pcVar18,local_658 == 5);
        recovered_100026a0((int *)&local_44,0xa0,0x186,(char *)0x1803d71,1,0x5a,0x5a,0x5a);
        recovered_100026a0((int *)&local_44,0xa0,0x19a,(char *)0x1803d91,1,0x5a,0x5a,0x5a);
        iVar6 = 0x1ae;
        do {
          if (0 < (int)local_44) {
            uVar7 = 0;
            do {
              if (((local_3c != (void *)0x0) && ((int)uVar7 < (int)local_44)) &&
                 (iVar6 < (int)local_40)) {
                iVar15 = local_44 * iVar6 + uVar7;
                *(undefined1 *)((int)local_3c + iVar15 * 4) = 0xe8;
                *(undefined1 *)((int)local_3c + iVar15 * 4 + 1) = 0xec;
                *(undefined1 *)((int)local_3c + iVar15 * 4 + 2) = 0xf0;
                *(undefined1 *)((int)local_3c + iVar15 * 4 + 3) = 0xff;
              }
              uVar7 = uVar7 + 1;
            } while (local_44 != uVar7);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x1c8);
        recovered_100026a0((int *)&local_44,0x1e,0x1b6,(char *)0x1803db4,1,0x46,0x46,0x46);
        for (iVar6 = -0x5f;
            ((cVar12 = acStack_644[iVar6 + 0x5f], cVar12 != '\0' && (cVar12 != '\n')) &&
            (iVar6 != 0)); iVar6 = iVar6 + 1) {
          acStack_2e1[iVar6] = cVar12;
        }
        acStack_2e1[iVar6] = '\0';
        recovered_100026a0((int *)&local_44,0x5a,0x1b6,acStack_341 + 1,1,0x28,0x28,0x28);
        terror_ui_window_present(local_1600,(char *)0x1803caf,local_3c,local_44,local_40,local_44 * 4,
                           0xf6f6f6);
        terror_ui_keyboard_poll(&local_8c);
        if ((local_8c != '\0') || (local_80 == '\x01')) {
          if (local_658 == 0) {
            puVar1 = &local_65c;
            uVar7 = local_65c;
          }
          else {
            puVar1 = &local_658;
            uVar7 = local_658;
          }
          if (0 < (int)uVar7) {
            *puVar1 = uVar7 - 1;
          }
        }
        uVar7 = local_65c;
        if ((local_8b == '\0') && (local_81 != '\x01')) {
joined_r0x100019bc:
          local_65c = uVar7;
          if (local_8a == '\0') goto LAB_100019d0;
LAB_100019dd:
          if (local_658 - 1 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x100019ed */
                    /* WARNING: Treating indirect jump as call */
            iVar6 = (**(code **)((local_658 - 1) * 4 + 0x1803c7c))();
            return iVar6;
          }
        }
        else {
          if (local_658 == 0) {
            uVar7 = local_65c + 1;
            if ((int)(local_65c + 1) < local_660) goto joined_r0x100019bc;
          }
          else if (4 < (int)local_658) goto joined_r0x100019bc;
          local_658 = local_658 + 1;
          if (local_8a != '\0') goto LAB_100019dd;
LAB_100019d0:
          if (local_85 == '\x01') goto LAB_100019dd;
        }
        if (((local_89 != '\0') || (local_84 == '\x01')) && (local_658 - 1 < 4)) {
                    /* WARNING: Could not emulate address calculation at 0x10001b40 */
                    /* WARNING: Treating indirect jump as call */
          iVar6 = (**(code **)((local_658 - 1) * 4 + 0x1803c8c))();
          return iVar6;
        }
        if (local_82 == '\x01') {
          recovered_10002240((int)local_12c0);
        }
        if (((local_87 != 0) || ((local_7c | 0x20) == 0x69)) && (local_658 == 5)) {
          recovered_10002e20((int)local_12c0);
        }
        if (((local_87 & 1) != 0) && (local_658 != 5)) {
          uVar7 = 0;
          if ((int)local_658 < 5) {
            uVar7 = local_658 + 1;
          }
          local_658 = uVar7;
        }
        memset(acStack_341 + 1,0,0x1c);
        uVar7 = terror_ui_window_pointer_state(local_1600,acStack_341 + 1);
        if (uVar7 != 0) {
          if ((acStack_341[1] & 2U) == 0) {
            local_343 = '\0';
          }
          else {
            cVar12 = (char)(local_33c & 1);
            if ((local_33c & 1) == 0) {
              local_343 = cVar12;
            }
            else {
              bVar17 = local_343 == '\0';
              local_343 = cVar12;
              if (bVar17) {
                local_48 = local_32c;
                local_4c = local_328;
                if (0 < local_660) {
                  uVar7 = local_660 - 1;
                  if (4 < uVar7) {
                    uVar7 = 5;
                  }
                  local_74 = local_32c - 0x1c;
                  uVar13 = 0;
                  uVar14 = 0x69;
                  do {
                    if ((local_328 < uVar14 && local_74 < 0x248) &&
                        (int)(uVar14 - 0x17) <= (int)local_328) {
                      local_658 = 0;
                      local_65c = uVar13;
                      goto LAB_10002090;
                    }
                    uVar13 = uVar13 + 1;
                    uVar14 = uVar14 + 0x1a;
                  } while (uVar7 + 1 != uVar13);
                }
                uVar7 = local_32c - 0x1e;
                if (uVar7 < 0x22 && 0xf9 < (int)local_328) {
                  if (0x113 < local_328) {
LAB_10001ee9:
                    bVar16 = false;
                    bVar17 = true;
                    goto LAB_10001eeb;
                  }
                  local_658 = 1;
                  iVar6 = local_654 - 1;
                  if (iVar6 < 1) {
                    iVar6 = 0;
                  }
                  iVar6 = (iVar6 + 1) - local_654;
                  uVar7 = (uint)(iVar6 != 0);
                  iVar6 = ((iVar6 - uVar7) / 5 + uVar7) * 5 + local_654;
                  local_654 = iVar6 - 1;
                  if (4 < local_654) {
                    local_654 = iVar6 - 6;
LAB_10001eb8:
                    local_658 = 1;
                    local_654 = local_654 % 5;
                  }
                }
                else if (local_32c - 0x134U < 0x22 && 0xf9 < (int)local_328) {
                  if (0x113 < local_328) goto LAB_10001ee9;
                  local_658 = 1;
                  iVar6 = local_654 + 1;
                  if (iVar6 < 1) {
                    iVar6 = 0;
                  }
                  uVar7 = (uint)(~local_654 + iVar6 != 0);
                  iVar6 = (((~local_654 + iVar6) - uVar7) / 5 + uVar7) * 5 + local_654;
                  local_654 = iVar6 + 1;
                  if (4 < local_654) {
                    local_654 = iVar6 - 4;
                    goto LAB_10001eb8;
                  }
                }
                else {
                  if (local_32c - 0x184U < 0x22 && 0xf9 < (int)local_328) {
                    if (local_328 < 0x114) {
                      uVar7 = 5;
                      if (9 < (int)local_650) {
                        uVar7 = local_650 - 5;
                      }
                      goto LAB_10002083;
                    }
                    bVar17 = true;
                    bVar16 = false;
                  }
                  else {
                    bVar16 = 0x241 < local_32c;
                    bVar17 = local_32c < 0x264;
                    if (local_328 - 0xfa < 0x1a && local_32c - 0x242U < 0x22) {
                      uVar7 = 100;
                      if ((int)local_650 < 0x60) {
                        uVar7 = local_650 + 5;
                      }
LAB_10002083:
                      local_658 = 2;
                      local_650 = uVar7;
                      goto LAB_10002090;
                    }
                  }
LAB_10001eeb:
                  if (local_328 - 0x132 < 0x1a && uVar7 < 0x22) {
                    local_658 = 3;
                    iVar6 = local_64c - 1;
                    if (iVar6 < 1) {
                      iVar6 = 0;
                    }
                    iVar6 = (iVar6 + 1) - local_64c;
                    uVar7 = (uint)(iVar6 != 0);
                    iVar6 = ((iVar6 - uVar7) / 0xf + uVar7) * 0xf + local_64c;
                    local_64c = iVar6 - 1;
                    if (0xe < local_64c) {
                      local_64c = iVar6 - 0x10;
LAB_10002014:
                      local_658 = 3;
                      local_64c = local_64c % 0xf;
                    }
                  }
                  else if ((bool)(local_328 < 0x14c & bVar16 & bVar17 & 0x131 < (int)local_328)) {
                    local_658 = 3;
                    iVar6 = local_64c + 1;
                    if (iVar6 < 1) {
                      iVar6 = 0;
                    }
                    uVar7 = (uint)(~local_64c + iVar6 != 0);
                    iVar6 = (((~local_64c + iVar6) - uVar7) / 0xf + uVar7) * 0xf + local_64c;
                    local_64c = iVar6 + 1;
                    if (0xe < local_64c) {
                      local_64c = iVar6 - 0xe;
                      goto LAB_10002014;
                    }
                  }
                  else if ((int)local_328 < 0x160 || 0x21 < uVar7) {
                    if (local_32c - 300U < 0x22 && 0x15f < (int)local_328) {
                      if (0x179 < local_328) goto LAB_10002188;
                      local_658 = 4;
                      local_648 = local_648 + 0x8000;
                    }
                    else {
                      bVar16 = 0x183 < (int)local_328;
                      if (!(bool)(bVar17 & local_328 < 0x1a8 & (0x1dd < local_32c && bVar16)))
                      goto LAB_100021d5;
                      local_658 = 5;
                      recovered_10002e20((int)local_12c0);
                    }
                  }
                  else if (local_328 < 0x17a) {
                    local_658 = 4;
                    bVar17 = 0x7fff < local_648;
                    uVar7 = local_648 - 0x8000;
                    local_648 = 0;
                    if (bVar17) {
                      local_648 = uVar7;
                    }
                  }
                  else {
LAB_10002188:
                    bVar16 = 0x183 < local_328;
LAB_100021d5:
                    if ((bool)((int)local_328 < 0x1a8 & bVar16 & uVar7 < 0x70)) {
                      recovered_10002240((int)local_12c0);
                    }
                  }
                }
              }
            }
          }
        }
LAB_10002090:
        if (((local_83 != '\0') || (local_88 != '\0')) || (local_86 != '\0')) goto LAB_10002215;
        iVar6 = Ram00006800;
        if (((iVar6 == 0x50414d57) && (iVar6 = Ram00006804, iVar6 != 0)) &&
           ((uVar7 = Ram00006808, 0xb < uVar7 &&
            ((uVar7 = Ram00006808, 0x9f < uVar7 &&
             (pcVar2 = (code *)UINT_0000689c, pcVar2 != (code *)0x0)))))) {
          (*pcVar2)();
        }
      }
      local_50 = 1;
    }
LAB_10002215:
    terror_ui_window_close(local_1600);
  }
  return local_50;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram00006800
#undef Ram00006804
#undef Ram00006808
#undef UINT_0000689c
#undef local_1600
#undef local_15fc
#undef local_15f8
#undef local_15d4
#undef local_12c0
#undef local_660
#undef local_65c
#undef local_658
#undef local_654
#undef local_650
#undef local_64c
#undef local_648
#undef local_344
#undef local_343
#undef local_33c
#undef local_32c
#undef local_328
#undef local_c8
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_8b
#undef local_8a
#undef local_89
#undef local_88
#undef local_87
#undef local_86
#undef local_85
#undef local_84
#undef local_83
#undef local_82
#undef local_81
#undef local_80
#undef local_7c
#undef local_74
#undef local_70
#undef local_6e
#undef local_6d
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef local_5f
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_57
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2a
#undef local_28
#undef local_27
#undef local_26
#undef local_25
#undef local_24
#undef local_23
#undef local_22
#undef local_21
#undef local_20
#undef local_1f
#undef local_1e
#undef local_1d
#undef local_1c
#undef local_1b
#undef local_1a
#undef local_19
#undef local_18
#undef local_17
#undef local_16
#undef local_15
#undef local_14
#undef local_13
#undef local_12
#undef local_11
#undef acStack_644
#undef acStack_341
#undef acStack_2e1

void recovered_10002240(uintptr_t state){pf_install_refresh((void *)state);}


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
#define local_3c (*(uint *)(frame + 36))
#define local_38 (*(uint *)(frame + 40))
#define local_34 (*(int *)(frame + 44))
#define local_30 (*(int *)(frame + 48))
#define local_2c (*(int *)(frame + 52))
#define local_28 (*(uint *)(frame + 56))
#define local_24 (*(int *)(frame + 60))
#define local_1c (*(uint *)(frame + 68))
#define local_18 (*(void * *)(frame + 72))
#define local_14 (*(int * *)(frame + 76))
#define local_48 (*(void * (*)[3])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a0
 */

void recovered_100026a0(int *in_ECX,int in_EDX,int param_3,char *param_4,uint param_5,byte param_6,
                       byte param_7,byte param_8)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  if (param_4 != (char *)0x0) {
    local_30 = in_EDX;
    local_14 = in_ECX;
    memset(local_48,0,0x18);
    iVar7 = Ram00006800;
    if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
        (uVar5 = Ram00006808, 0xb < uVar5)) &&
       (((uVar5 = Ram00006808, 0x17b < uVar5 &&
         (pcVar4 = (code *)UINT_00006978, pcVar4 != (code *)0x0)) &&
        ((uVar5 = (*pcVar4)(param_4,0xffffffff,param_5,
                            (uint)param_8 * 0x100 + 0xff +
                            ((uint)param_7 << 0x10 | (uint)param_6 << 0x18),local_48), uVar5 != 0 &&
         (local_48[0] != (void *)0x0)))))) {
      if (local_38 != 0) {
        local_1c = 0;
        local_24 = param_3;
        local_18 = local_48[0];
        uVar5 = local_3c;
        do {
          if (uVar5 == 0) {
            uVar5 = 0;
          }
          else {
            local_28 = param_3 + local_1c;
            uVar5 = 0;
            do {
              iVar7 = local_34 * local_1c;
              if ((*(char *)((int)local_48[0] + uVar5 * 4 + iVar7 + 3) != '\0') &&
                 (local_14 != (int *)0x0)) {
                uVar1 = local_30 + uVar5;
                local_2c = local_14[2];
                if ((-1 < (int)(uVar1 | local_28) && local_2c != 0) &&
                   (((int)uVar1 < *local_14 && ((int)local_28 < local_14[1])))) {
                  iVar6 = uVar1 + *local_14 * local_24;
                  uVar2 = *(undefined1 *)((int)local_48[0] + uVar5 * 4 + iVar7 + 1);
                  uVar3 = *(undefined1 *)((int)local_48[0] + uVar5 * 4 + iVar7 + 2);
                  *(undefined1 *)(local_2c + iVar6 * 4) =
                       *(undefined1 *)((int)local_48[0] + uVar5 * 4 + iVar7);
                  *(undefined1 *)(local_14[2] + 1 + iVar6 * 4) = uVar2;
                  *(undefined1 *)(local_14[2] + 2 + iVar6 * 4) = uVar3;
                  *(undefined1 *)(local_14[2] + 3 + iVar6 * 4) = 0xff;
                }
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_3c);
            uVar5 = local_3c;
          }
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
        } while (local_1c < local_38);
      }
      iVar7 = Ram00006800;
      if ((((iVar7 == 0x50414d57) && (iVar7 = Ram00006804, iVar7 != 0)) &&
          (uVar5 = Ram00006808, 0xb < uVar5)) &&
         ((uVar5 = Ram00006808, 0x53 < uVar5 &&
          (pcVar4 = (code *)UINT_00006850, pcVar4 != (code *)0x0)))) {
        (*pcVar4)(local_48[0]);
      }
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
#undef local_48

#define local_1c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028a0
 */

void recovered_100028a0(int *in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,
                       undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;

  iVar1 = param_4 + in_EDX;
  if (0 < param_4) {
    uVar2 = in_EDX;
    do {
      if ((((in_ECX != (int *)0x0) && (-1 < (int)(uVar2 | param_3) && in_ECX[2] != 0)) &&
          ((int)uVar2 < *in_ECX)) && ((int)param_3 < in_ECX[1])) {
        iVar4 = *in_ECX * param_3 + uVar2;
        *(undefined1 *)(in_ECX[2] + iVar4 * 4) = param_6;
        *(undefined1 *)(in_ECX[2] + 1 + iVar4 * 4) = param_7;
        *(undefined1 *)(in_ECX[2] + 2 + iVar4 * 4) = param_8;
        *(undefined1 *)(in_ECX[2] + 3 + iVar4 * 4) = 0xff;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
    if (0 < param_4) {
      uVar2 = param_5 + -1 + param_3;
      uVar3 = in_EDX;
      do {
        if (((in_ECX != (int *)0x0) && (-1 < (int)(uVar3 | uVar2) && in_ECX[2] != 0)) &&
           (((int)uVar3 < *in_ECX && ((int)(param_5 + param_3) <= in_ECX[1])))) {
          iVar4 = *in_ECX * uVar2 * 4;
          *(undefined1 *)(in_ECX[2] + iVar4 + uVar3 * 4) = param_6;
          *(undefined1 *)(in_ECX[2] + iVar4 + 1 + uVar3 * 4) = param_7;
          *(undefined1 *)(in_ECX[2] + iVar4 + 2 + uVar3 * 4) = param_8;
          *(undefined1 *)(iVar4 + in_ECX[2] + 3 + uVar3 * 4) = 0xff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  if (0 < param_5) {
    local_1c = param_5 + param_3;
    uVar2 = param_3;
    do {
      if (((in_ECX != (int *)0x0) && (-1 < (int)(uVar2 | in_EDX) && in_ECX[2] != 0)) &&
         (((int)in_EDX < *in_ECX && ((int)uVar2 < in_ECX[1])))) {
        iVar4 = *in_ECX * uVar2 + in_EDX;
        *(undefined1 *)(in_ECX[2] + iVar4 * 4) = param_6;
        *(undefined1 *)(in_ECX[2] + 1 + iVar4 * 4) = param_7;
        *(undefined1 *)(in_ECX[2] + 2 + iVar4 * 4) = param_8;
        *(undefined1 *)(in_ECX[2] + 3 + iVar4 * 4) = 0xff;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < local_1c);
    do {
      if ((((in_ECX != (int *)0x0) && (-1 < (int)(iVar1 - 1U | param_3) && in_ECX[2] != 0)) &&
          (iVar1 <= *in_ECX)) && ((int)param_3 < in_ECX[1])) {
        iVar4 = *in_ECX * param_3 + (iVar1 - 1U);
        *(undefined1 *)(in_ECX[2] + iVar4 * 4) = param_6;
        *(undefined1 *)(in_ECX[2] + 1 + iVar4 * 4) = param_7;
        *(undefined1 *)(in_ECX[2] + 2 + iVar4 * 4) = param_8;
        *(undefined1 *)(in_ECX[2] + 3 + iVar4 * 4) = 0xff;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < local_1c);
  }
  return;
}

#undef local_1c

#define local_11 (*(undefined1 *)(frame + 31))
#define local_18 (*(uint *)(frame + 24))
#define local_13 (*(undefined1 *)(frame + 29))
#define local_12 (*(undefined1 *)(frame + 30))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a90
 */

void recovered_10002a90(int *in_ECX,int in_EDX,uint param_3,int param_4,char *param_5,char *param_6,
                       byte param_7)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  recovered_100026a0(in_ECX,in_EDX,param_3 - 0x10,param_5,1,0x46,0x46,0x46);
  recovered_10002ca0(in_ECX,in_EDX,param_3,0x22,0x1a,(char *)0x1803dbc,0);
  bVar6 = param_7 == 0;
  local_13 = 0xe1;
  if (bVar6) {
    local_13 = 0xf7;
  }
  local_12 = 0xec;
  if (bVar6) {
    local_12 = 0xf7;
  }
  local_11 = 0xfa;
  if (bVar6) {
    local_11 = 0xf7;
  }
  local_18 = param_3;
  if ((int)param_3 <= (int)(param_3 + 0x19)) {
    local_18 = param_3 + 0x19;
  }
  uVar5 = param_3;
  do {
    uVar4 = in_EDX + 0x2aU;
    if (0x54 < param_4) {
      do {
        if ((((in_ECX != (int *)0x0) && (-1 < (int)(uVar4 | uVar5) && in_ECX[2] != 0)) &&
            ((int)uVar4 < *in_ECX)) && ((int)uVar5 < in_ECX[1])) {
          iVar3 = *in_ECX * uVar5 + uVar4;
          *(undefined1 *)(in_ECX[2] + iVar3 * 4) = local_13;
          *(undefined1 *)(in_ECX[2] + 1 + iVar3 * 4) = local_12;
          *(undefined1 *)(in_ECX[2] + 2 + iVar3 * 4) = local_11;
          *(undefined1 *)(in_ECX[2] + 3 + iVar3 * 4) = 0xff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < param_4 + -0x2a + in_EDX);
    }
    bVar6 = uVar5 != local_18;
    uVar5 = uVar5 + 1;
  } while (bVar6);
  uVar1 = 0x5f;
  if (param_7 == 0) {
    uVar1 = 0x96;
  }
  uVar2 = 0x24;
  if (param_7 == 0) {
    uVar2 = 0x96;
  }
  recovered_100028a0(in_ECX,in_EDX + 0x2aU,param_3,param_4 + -0x54,0x1a,uVar2,uVar1,
                     param_7 * '\x04' + -0x6a);
  recovered_100026a0(in_ECX,in_EDX + 0x34,param_3 + 9,param_6,1,0x1e,0x1e,0x1e);
  recovered_10002ca0(in_ECX,in_EDX + -0x22 + param_4,param_3,0x22,0x1a,(char *)0x1803dbe,0);
  return;
}

#undef local_11
#undef local_18
#undef local_13
#undef local_12

#define local_13 (*(undefined1 *)(frame + 29))
#define local_12 (*(undefined1 *)(frame + 30))
#define local_11 (*(undefined1 *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ca0
 */

void recovered_10002ca0(int *in_ECX,uint in_EDX,uint param_3,int param_4,int param_5,char *param_6,
                       byte param_7)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  if (param_7 == 0) {
    local_12 = 0xeb;
    local_13 = 0xeb;
    local_11 = 0xeb;
  }
  else {
    local_12 = 0x69;
    local_13 = 0x37;
    local_11 = 0x9b;
  }
  if (0 < param_5) {
    uVar5 = param_3;
    do {
      uVar6 = in_EDX;
      if (0 < param_4) {
        do {
          if ((((in_ECX != (int *)0x0) && (-1 < (int)(uVar6 | uVar5) && in_ECX[2] != 0)) &&
              ((int)uVar6 < *in_ECX)) && ((int)uVar5 < in_ECX[1])) {
            iVar4 = *in_ECX * uVar5 + uVar6;
            *(undefined1 *)(in_ECX[2] + iVar4 * 4) = local_13;
            *(undefined1 *)(in_ECX[2] + 1 + iVar4 * 4) = local_12;
            *(undefined1 *)(in_ECX[2] + 2 + iVar4 * 4) = local_11;
            *(undefined1 *)(in_ECX[2] + 3 + iVar4 * 4) = 0xff;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)(in_EDX + param_4));
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)(param_5 + param_3));
  }
  bVar7 = param_7 == 0;
  uVar1 = 0x4a;
  if (bVar7) {
    uVar1 = 0x84;
  }
  uVar2 = 0x14;
  if (bVar7) {
    uVar2 = 0x84;
  }
  bVar3 = 0xff;
  if (bVar7) {
    bVar3 = 0x14;
  }
  recovered_100028a0(in_ECX,in_EDX,param_3,param_4,param_5,uVar2,uVar1,(param_7 ^ 1) * '\b' + '|');
  recovered_100026a0(in_ECX,in_EDX + 10,param_3 + 10,param_6,1,bVar3,bVar3,bVar3);
  return;
}

#undef local_13
#undef local_12
#undef local_11

void recovered_10002e20(uintptr_t state){pf_install_run((void *)state);}

