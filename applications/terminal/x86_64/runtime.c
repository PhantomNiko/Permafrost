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
#undef DAT_100080c0
#define DAT_100080c0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4U)))
#undef DAT_100080d0
#define DAT_100080d0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef DAT_100080e0
#define DAT_100080e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x104U)))
#undef DAT_100080f0
#define DAT_100080f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x114U)))
#undef DAT_10008127
#define DAT_10008127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef DAT_10008148
#define DAT_10008148 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x16cU)))
#undef DAT_10008171
#define DAT_10008171 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195U)))
#undef DAT_100081aa
#define DAT_100081aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ceU)))
#undef DAT_100081ae
#define DAT_100081ae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d2U)))
#undef DAT_100081b3
#define DAT_100081b3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d7U)))
#undef DAT_100081b7
#define DAT_100081b7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1dbU)))
#undef DAT_100081bc
#define DAT_100081bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e0U)))
#undef DAT_100081c1
#define DAT_100081c1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e5U)))
#undef DAT_100081c5
#define DAT_100081c5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e9U)))
#undef DAT_100081cc
#define DAT_100081cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f0U)))
#undef DAT_100081d3
#define DAT_100081d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f7U)))
#undef DAT_100081e1
#define DAT_100081e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x205U)))
#undef DAT_100081e6
#define DAT_100081e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20aU)))
#undef DAT_100081eb
#define DAT_100081eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20fU)))
#undef DAT_100081f0
#define DAT_100081f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x214U)))
#undef DAT_100081f4
#define DAT_100081f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x218U)))
#undef DAT_100081f9
#define DAT_100081f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21dU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef Ram0000000000006950
#define Ram0000000000006950 (*(uint32_t *)(0x6950U))
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
#undef UNK_100080e4
#define UNK_100080e4 (*(uint *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_100080e8
#define UNK_100080e8 (*(int *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef UNK_100080ec
#define UNK_100080ec (*(int *)(((uintptr_t)pf_module_state + 0x110U)))
#undef UNK_100080f4
#define UNK_100080f4 (*(int *)(((uintptr_t)pf_module_state + 0x118U)))
#undef UNK_100080f8
#define UNK_100080f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef UNK_100080fc
#define UNK_100080fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef _DAT_100080d0
#define _DAT_100080d0 (*(uint128 *)(((uintptr_t)pf_module_state + 0xf4U)))
#undef _DAT_100080e0
#define _DAT_100080e0 (*(uint *)(((uintptr_t)pf_module_state + 0x104U)))
#undef _DAT_100080f0
#define _DAT_100080f0 (*(int *)(((uintptr_t)pf_module_state + 0x114U)))
#undef iRam00000000100080e8
#define iRam00000000100080e8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x10cU)))
#undef iRam00000000100080ec
#define iRam00000000100080ec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef iRam00000000100080f4
#define iRam00000000100080f4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x118U)))
#undef str_10008100
#define str_10008100 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10008120
#define str_10008120 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x144U)))
#undef str_10008128
#define str_10008128 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#undef str_10008138
#define str_10008138 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15cU)))
#undef str_1000814a
#define str_1000814a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_10008150
#define str_10008150 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_10008174
#define str_10008174 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x198U)))
#undef str_10008183
#define str_10008183 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a7U)))
#undef uRam00000000100080e4
#define uRam00000000100080e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef uRam00000000100080f8
#define uRam00000000100080f8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x11cU)))
#undef uRam00000000100080fc
#define uRam00000000100080fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x120U)))
#define uStack_50 (*(undefined8 *)(frame + 6848))
#define local_1af8 (*(byte (*)[4])(frame + 24))
#define local_1af4 (*(undefined4 *)(frame + 28))
#define local_1ae4 (*(int *)(frame + 44))
#define local_1ad0 (*(uint *)(frame + 64))
#define local_1acc (*(undefined8 *)(frame + 68))
#define local_1ac4 (*(int *)(frame + 76))
#define local_1ac0 (*(uint *)(frame + 80))
#define local_1abc (*(int *)(frame + 84))
#define local_1ab8 (*(byte *)(frame + 88))
#define local_16f8 (*(int *)(frame + 1048))
#define local_16f4 (*(uint *)(frame + 1052))
#define local_16ec (*(uint *)(frame + 1060))
#define local_16c8 (*(void * *)(frame + 1096))
#define local_13a8 (*(void * *)(frame + 1896))
#define local_13a0 (*(void * *)(frame + 1904))
#define local_1398 (*(undefined8 *)(frame + 1912))
#define local_1390 (*(uint *)(frame + 1920))
#define local_138c (*(undefined8 *)(frame + 1924))
#define local_1384 (*(uint *)(frame + 1932))
#define local_1380 (*(char *)(frame + 1936))
#define local_137f (*(undefined2 *)(frame + 1937))
#define local_137c (*(int *)(frame + 1940))
#define local_1378 (*(undefined8 *)(frame + 1944))
#define local_1370 (*(byte (*)[160])(frame + 1952))
#define local_12d0 (*(int *)(frame + 2112))
#define local_12cc (*(int *)(frame + 2116))
#define local_12c8 (*(uint *)(frame + 2120))
#define local_12c4 (*(uint *)(frame + 2124))
#define local_12c0 (*(int *)(frame + 2128))
#define iStack_1ae0 (*(int *)(frame + 48))
#define local_12bc (*(char *)(frame + 2132))
#define local_12bb (*(char *)(frame + 2133))
#define local_12b8 (*(int *)(frame + 2136))
#define local_12b4 (*(int *)(frame + 2140))
#define local_12b0 (*(int *)(frame + 2144))
#define local_12ac (*(uint *)(frame + 2148))
#define local_12a8 (*(char (*)[512])(frame + 2152))
#define local_10a8 (*(byte (*)[4096])(frame + 2664))
#define local_a8 (*(void * *)(frame + 6760))
#define local_9c (*(int *)(frame + 6772))
#define uStack_16f0 (*(uint *)(frame + 1056))
#define local_98 (*(int *)(frame + 6776))
#define local_90 (*(uint *)(frame + 6784))
#define local_8c (*(uint *)(frame + 6788))
#define local_88 (*(undefined8 *)(frame + 6792))
#define local_80 (*(ulong *)(frame + 6800))
#define local_74 (*(int *)(frame + 6812))
#define local_70 (*(uint *)(frame + 6816))
#define local_6c (*(uint *)(frame + 6820))
#define local_68 (*(ulong *)(frame + 6824))
#define local_60 (*(ulong *)(frame + 6832))
#define local_58 (*(undefined8 *)(frame + 6840))
#define local_40 (*(ulong *)(frame + 6864))
#define local_38 (*(ulong *)(frame + 6872))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000550
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_10000550(void)

{
  unsigned char frame[6960] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  char *pcVar22;
  byte *pbVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  byte bVar30;
  int iVar31;
  uint uVar32;
  byte bVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  uint128 auVar37;
  uint128 auVar38;
  uint128 auVar39;

  memset(&local_16f8,0,0x1650);
  iVar34 = Ram0000000000006800;
  if ((((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x4f < uVar4)) {
    uVar4 = UINT_0000684c;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      local_13a0 = (*(code *)(ulong)uVar4)(0x3e800);
      if (local_13a0 == (void *)0x0) goto LAB_10006d23;
      memset(local_13a0,0,0x3e800);
      pf_app_window_spec(local_1af8,str_10008120,0x2f8,400);
      local_1ae4 = 0x4c91c4;
      local_1ab8 = local_1ab8 | 1;
      uVar4 = terror_ui_window_open(&local_16f8,local_1af8);
      if (uVar4 != 0) {
        terror_ui_window_set_menus(&local_16f8,&DAT_10008127,str_10008128,&DAT_10008127);
        if ((local_13a8 != (void *)0x0) || (local_13a8 = local_16c8, local_16c8 != (void *)0x0)) {
          local_1378 = 0xa00000006;
          iVar31 = 0;
          memset(&local_a8,0,0x18);
          iVar34 = Ram0000000000006800;
          if (((iVar34 == 0x50414d57) &&
              ((iVar34 = Ram0000000000006804, iVar34 != 0 &&
               (uVar4 = Ram0000000000006808, 0xb < uVar4)))) &&
             (uVar4 = Ram0000000000006808, 0x17b < uVar4)) {
            uVar4 = UINT_00006978;
            if (((code *)(ulong)uVar4 != (code *)0x0) &&
               (uVar4 = (*(code *)(ulong)uVar4)(&DAT_10008148,0xffffffff,0x80000001,0,&local_a8),
               uVar4 != 0)) {
              if (local_9c - 1U < 0x40) {
                local_1378 = CONCAT44(PF_PART4(local_1378, 4),local_9c);
              }
              if (local_98 - 1U < 0x40) {
                local_1378 = CONCAT44(local_98,(int)local_1378);
              }
              if ((((local_a8 != (void *)0x0) &&
                   (iVar34 = Ram0000000000006800, iVar34 == 0x50414d57)) &&
                  (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
                 ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                  (uVar4 = Ram0000000000006808, 0x53 < uVar4)))) {
                uVar4 = UINT_00006850;
                if ((code *)(ulong)uVar4 != (code *)0x0) {
                  (*(code *)(ulong)uVar4)(local_a8);
                }
              }
              memset(&local_a8,0,0x18);
            }
          }
          recovered_10006da0((long)&local_16f8,(byte *)str_10008138);
          if (0 < local_12cc) {
            iVar34 = 0;
            iVar31 = 0;
            do {
              pcVar22 = &DAT_10008127;
              if (local_13a0 != (void *)0x0) {
                pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar34) % 1000) * 0x100);
              }
              iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
              iVar31 = iVar31 + iVar5;
              iVar34 = iVar34 + 1;
            } while (iVar34 < local_12cc);
          }
          uVar4 = 0xc;
          if (0 < (int)PF_PART4(local_1378, 4)) {
            uVar4 = PF_PART4(local_1378, 4) + 2;
          }
          uVar6 = 400;
          if (uStack_16f0 != 0) {
            uVar6 = uStack_16f0;
          }
          uVar14 = 0xc;
          uVar4 = (uVar6 - uVar4) - 0x26;
          if ((int)PF_PART4(local_1378, 4) < 1) {
            uVar6 = 0x10;
            if (0x10 < (int)uVar4) {
              uVar6 = uVar4;
            }
          }
          else {
            uVar6 = PF_PART4(local_1378, 4) + 6;
            if ((int)(PF_PART4(local_1378, 4) + 6) < (int)uVar4) {
              uVar6 = uVar4;
            }
            uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
          }
          iVar34 = (int)(uVar6 / uVar14);
          local_12c8 = (iVar31 - iVar34) - (uint)(iVar34 == 0);
          if ((int)local_12c8 < 1) {
            local_12c8 = 0;
          }
          local_12bb = '\x01';
          local_60 = CONCAT44(PF_PART4(local_60, 4),(int)CONCAT71((int7)(uVar14 >> 8),1));
          uVar4 = local_12c4 >> 0xc & 1;
LAB_100008ca:
          local_58 = CONCAT44(uStack_16f0,local_16f4);
          uStack_50 = 0;
          memset(local_1af8,0,0x278);
          pf_app_refresh_inactive_info(&local_16f8);          uVar6 = terror_ui_window_query(&local_16f8,local_1af8);
          if ((uVar6 != 0) && (uVar6 = terror_ui_window_sync_buffer(&local_16f8,local_1af8), uVar6 != 0)) {
            local_13a8 = local_16c8;
            PF_PART4(auVar39, 0) = -(uint)(local_16f4 == (uint)local_58);
            PF_PART4(auVar39, 4) = PF_PART4(auVar39, 0);
            PF_PART4(auVar39, 8) = -(uint)(uStack_16f0 == PF_PART4(local_58, 4));
            PF_PART4(auVar39, 12) = -(uint)(uStack_16f0 == PF_PART4(local_58, 4));
            iVar34 = movmskpd(local_16f4,auVar39);
            if (iVar34 != 3) {
              local_12bc = '\x01';
            }
            local_1398 = local_1acc;
            local_1390 = local_1ad0;
            if ((local_1ac4 != 0) && (local_1ac4 != local_12c0)) {
              local_12c0 = local_1ac4;
              if ((local_1ac0 ^ 2) == 0 && local_1abc == 0) {
                recovered_10007040((long)&local_16f8);
              }
              else if ((local_1ac0 ^ 2) == 0 && local_1abc == 1) {
                recovered_100072c0((long)&local_16f8);
              }
            }
            if ((local_1ad0 & 0x11) == 0) {
              local_40 = CONCAT44(PF_PART4(local_40, 4),uVar4);
              local_58 = CONCAT71(PF_PART7(local_58, 1),local_12bc);
              if (local_12bc == '\x01') {
                local_12bc = '\0';
              }
              bVar33 = 0;
              while( true ) {
                uVar4 = local_12c8;
                iVar34 = 0;
                if (0 < local_12cc) {
                  iVar31 = 0;
                  iVar34 = 0;
                  do {
                    pcVar22 = &DAT_10008127;
                    if (local_13a0 != (void *)0x0) {
                      pcVar22 = (char *)((long)local_13a0 +
                                        (long)((local_12d0 + iVar31) % 1000) * 0x100);
                    }
                    iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                    iVar34 = iVar34 + iVar5;
                    iVar31 = iVar31 + 1;
                  } while (iVar31 < local_12cc);
                }
                uVar6 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar6 = 400;
                }
                uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
                uVar18 = PF_PART4(local_1378, 4) + 6;
                if ((int)PF_PART4(local_1378, 4) < 1) {
                  uVar14 = 0xc;
                  uVar18 = 0x10;
                }
                uVar6 = (uVar6 - (int)uVar14) - 0x26;
                if ((int)uVar6 <= (int)uVar18) {
                  uVar6 = uVar18;
                }
                iVar31 = (int)(uVar6 / uVar14);
                iVar34 = (iVar34 - iVar31) - (uint)(iVar31 == 0);
                if (iVar34 < 1) {
                  iVar34 = 0;
                }
                iVar31 = Ram0000000000006800;
                if ((((iVar31 != 0x50414d57) || (iVar31 = Ram0000000000006804, iVar31 == 0)) ||
                    (uVar18 = Ram0000000000006808, uVar18 < 0xc)) ||
                   (uVar18 = Ram0000000000006808, uVar18 < 0x154)) break;
                uVar18 = Ram0000000000006950;
                if ((((code *)(ulong)uVar18 == (code *)0x0) ||
                    (iVar31 = (*(code *)(ulong)uVar18)(local_1af8,0x400,(ulong)uVar6 % uVar14),
                    iVar31 == 0)) || (local_1af8[0] == 0)) break;
                recovered_10007520((long)&local_16f8,local_1af8);
                bVar33 = 1;
                if (iVar34 <= (int)uVar4) {
                  if (local_12cc < 1) {
                    iVar34 = 0;
                  }
                  else {
                    iVar31 = 0;
                    iVar34 = 0;
                    do {
                      pcVar22 = &DAT_10008127;
                      if (local_13a0 != (void *)0x0) {
                        pcVar22 = (char *)((long)local_13a0 +
                                          (long)((local_12d0 + iVar31) % 1000) * 0x100);
                      }
                      iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                      iVar34 = iVar34 + iVar5;
                      iVar31 = iVar31 + 1;
                    } while (iVar31 < local_12cc);
                  }
                  uVar4 = uStack_16f0;
                  if (uStack_16f0 == 0) {
                    uVar4 = 400;
                  }
                  uVar6 = PF_PART4(local_1378, 4) + 2;
                  uVar18 = PF_PART4(local_1378, 4) + 6;
                  if ((int)PF_PART4(local_1378, 4) < 1) {
                    uVar6 = 0xc;
                    uVar18 = 0x10;
                  }
                  uVar4 = (uVar4 - uVar6) - 0x26;
                  if ((int)uVar4 <= (int)uVar18) {
                    uVar4 = uVar18;
                  }
                  local_12c8 = (iVar34 - uVar4 / uVar6) - (uint)(uVar4 / uVar6 == 0);
                  if ((int)local_12c8 < 1) {
                    local_12c8 = 0;
                  }
                }
              }
              uVar4 = local_12c8;
              if (local_12b8 == 0) {
                bVar30 = 0;
              }
              else {
                bVar30 = 0;
                iVar34 = 0;
                if (local_12b4 != 0) {
                  if (0 < local_12cc) {
                    iVar31 = 0;
                    iVar34 = 0;
                    do {
                      pcVar22 = &DAT_10008127;
                      if (local_13a0 != (void *)0x0) {
                        pcVar22 = (char *)((long)local_13a0 +
                                          (long)((local_12d0 + iVar31) % 1000) * 0x100);
                      }
                      iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                      iVar34 = iVar34 + iVar5;
                      iVar31 = iVar31 + 1;
                    } while (iVar31 < local_12cc);
                  }
                  uVar6 = uStack_16f0;
                  if (uStack_16f0 == 0) {
                    uVar6 = 400;
                  }
                  uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
                  uVar18 = PF_PART4(local_1378, 4) + 6;
                  if ((int)PF_PART4(local_1378, 4) < 1) {
                    uVar14 = 0xc;
                    uVar18 = 0x10;
                  }
                  uVar6 = (uVar6 - (int)uVar14) - 0x26;
                  if ((int)uVar6 <= (int)uVar18) {
                    uVar6 = uVar18;
                  }
                  iVar31 = (int)(uVar6 / uVar14);
                  iVar34 = (iVar34 - iVar31) - (uint)(iVar31 == 0);
                  if (iVar34 < 1) {
                    iVar34 = 0;
                  }
                  if (local_10a8[0] == 0) {
                    if ((local_12b0 == 0) && (local_13a0 != (void *)0x0)) {
                      if (local_12cc < 1000) {
                        iVar5 = local_12d0 + local_12cc;
                        local_12cc = local_12cc + 1;
                      }
                      else {
                        iVar31 = recovered_10006f00((long)&local_16f8,
                                                    (char *)((long)local_13a0 +
                                                            (long)(local_12d0 % 1000) * 0x100));
                        local_12d0 = local_12d0 + ((local_12d0 + 1) / 1000) * -1000 + 1;
                        iVar5 = local_12cc + local_12d0 + -1;
                        uVar6 = local_12c8 - iVar31;
                        if (uVar6 == 0 || (int)local_12c8 < iVar31) {
                          uVar6 = 0;
                        }
                        local_12c8 = uVar6;
                      }
                      lVar27 = (long)(iVar5 % 1000) * 0x100;
                      *(undefined1 *)((long)local_13a0 + lVar27) = 0x45;
                      *(undefined1 *)((long)local_13a0 + lVar27 + 1) = 0x52;
                      *(undefined1 *)((long)local_13a0 + lVar27 + 2) = 0x52;
                      *(undefined1 *)((long)local_13a0 + lVar27 + 3) = 0x4f;
                      *(undefined1 *)((long)local_13a0 + lVar27 + 4) = 0x52;
                      *(undefined1 *)((long)local_13a0 + lVar27 + 5) = 0;
                    }
                  }
                  else {
                    recovered_10007520((long)&local_16f8,local_10a8);
                  }
                  local_10a8[0] = 0;
                  local_12a8[0] = '\0';
                  local_12ac = 0;
                  local_12b4 = 0;
                  local_12b8 = 0;
                  bVar30 = 1;
                  if (iVar34 <= (int)uVar4) {
                    if (local_12cc < 1) {
                      iVar34 = 0;
                    }
                    else {
                      iVar31 = 0;
                      iVar34 = 0;
                      do {
                        pcVar22 = &DAT_10008127;
                        if (local_13a0 != (void *)0x0) {
                          pcVar22 = (char *)((long)local_13a0 +
                                            (long)((local_12d0 + iVar31) % 1000) * 0x100);
                        }
                        iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                        iVar34 = iVar34 + iVar5;
                        iVar31 = iVar31 + 1;
                      } while (iVar31 < local_12cc);
                    }
                    uVar4 = uStack_16f0;
                    if (uStack_16f0 == 0) {
                      uVar4 = 400;
                    }
                    uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
                    uVar6 = PF_PART4(local_1378, 4) + 6;
                    if ((int)PF_PART4(local_1378, 4) < 1) {
                      uVar14 = 0xc;
                      uVar6 = 0x10;
                    }
                    uVar4 = (uVar4 - (int)uVar14) - 0x26;
                    if ((int)uVar4 <= (int)uVar6) {
                      uVar4 = uVar6;
                    }
                    iVar31 = (int)(uVar4 / uVar14);
                    local_12c8 = (iVar34 - iVar31) - (uint)(iVar31 == 0);
                    if ((int)local_12c8 < 1) {
                      local_12c8 = 0;
                    }
                  }
                }
              }
              bVar33 = bVar33 | (byte)local_58;
              local_70 = local_1390 & 6;
              if (((local_70 == 2) || (PF_PART1(local_137f, 1) != '\0')) || ((char)local_137f != '\0')) {
                memset(local_1af8,0,0x1c);
                uVar4 = terror_ui_window_pointer_state(&local_16f8,local_1af8);
                if (uVar4 != 0) {
                  if (local_1380 == '\0') {
                    local_1380 = '\x01';
                    uVar14 = CONCAT44(-(uint)(uStack_16f0 == uRam00000000100080e4),
                                      -(uint)(local_16f4 == _DAT_100080e0));
                    local_138c = uVar14 & (ulong)DAT_100080c0 |
                                 ~uVar14 & CONCAT44((int)uStack_16f0 / 2,(int)local_16f4 / 2);
                  }
                  local_1384 = 0;
                  if ((local_1af8[0] & 4) != 0) {
                    PF_PART4(auVar38, 0) = -(uint)(local_16f4 == _DAT_100080e0);
                    PF_PART4(auVar38, 4) = -(uint)(uStack_16f0 == uRam00000000100080e4);
                    PF_PART4(auVar38, 8) = -(uint)(iRam00000000100080e8 == 0);
                    PF_PART4(auVar38, 12) = -(uint)(iRam00000000100080ec == 0);
                    PF_PART4(auVar37, 0) = local_16f4 + _DAT_100080f0;
                    PF_PART4(auVar37, 4) = uStack_16f0 + iRam00000000100080f4;
                    PF_PART4(auVar37, 8) = uRam00000000100080f8;
                    PF_PART4(auVar37, 12) = uRam00000000100080fc;
                    auVar39 = auVar38 & _DAT_100080d0 | ~auVar38 & auVar37;
                    uVar14 = CONCAT44(-(uint)(iStack_1ae0 < PF_PART4(auVar39, 4)),
                                      -(uint)(local_1ae4 < PF_PART4(auVar39, 0)));
                    local_138c = ~CONCAT44(-(uint)(iStack_1ae0 < 0),-(uint)(local_1ae4 < 0)) &
                                 (~uVar14 & PF_PART8(auVar39, 0) |
                                 CONCAT44(iStack_1ae0,local_1ae4) & uVar14);
                    local_1384 = local_1af4;
                  }
                }
                if (local_70 == 2) {
                  local_58 = CONCAT44(PF_PART4(local_58, 4),(uint)bVar33);
                  bVar33 = 0;
                  uVar14 = 0;
LAB_100010ad:
                  iVar34 = Ram0000000000006800;
                  if (((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
                     ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
                      (uVar4 = Ram0000000000006808, 0x2f < uVar4)))) {
                    uVar4 = UINT_0000682c;
                    if (((code *)(ulong)uVar4 != (code *)0x0) &&
                       (uVar4 = (*(code *)(ulong)uVar4)(), uVar4 != 0)) {
                      uVar6 = uVar4 >> 8 & 0xff;
                      if ((uVar4 & 0x800000ff) == 0x80000000 && uVar6 == 0) goto LAB_100010a0;
                      uVar18 = uVar4 & 0xff;
                      if ((uVar4 & 0x40000) != 0) {
                        if (((uVar4 & 0xbf) == 3 || uVar18 == 99) || uVar6 == 0x2e) {
                          uVar9 = recovered_10007040((long)&local_16f8);
                          bVar3 = (byte)uVar9;
                        }
                        else {
                          if (((uVar4 & 0xbf) != 0x16 && uVar18 != 0x76) && uVar6 != 0x2f)
                          goto LAB_100010a0;
                          uVar9 = recovered_100072c0((long)&local_16f8);
                          bVar3 = (byte)uVar9;
                        }
                        bVar33 = bVar33 | bVar3;
                        goto LAB_100010a0;
                      }
                      if ((uVar4 & 0x20000) != 0) goto LAB_100010a0;
                      bVar3 = (byte)uVar4;
                      if (uVar18 - 0x20 < 0x5f) {
                        uVar8 = strlen((char *)local_1370);
                        bVar33 = 1;
                        if (uVar8 + 1 < 0xa0) {
                          local_1370[uVar8] = bVar3;
                          local_1370[uVar8 + 1] = 0;
                        }
                        goto LAB_100010a0;
                      }
                      if (((uVar6 == 0xe) || (bVar3 == 0x7f)) || (uVar18 == 8)) {
                        uVar8 = strlen((char *)local_1370);
                        bVar33 = 1;
                        if (uVar8 != 0) {
                          local_1370[uVar8 - 1] = 0;
                        }
                        goto LAB_100010a0;
                      }
                      if (((uVar6 == 0x1c) || (bVar3 == 0xd)) || (uVar18 == 10)) {
                        local_38 = CONCAT44(PF_PART4(local_38, 4),local_12c8);
                        if (local_12cc < 1) {
                          iVar34 = 0;
                        }
                        else {
                          iVar31 = 0;
                          iVar34 = 0;
                          do {
                            pcVar22 = &DAT_10008127;
                            if (local_13a0 != (void *)0x0) {
                              pcVar22 = (char *)((long)local_13a0 +
                                                (long)((local_12d0 + iVar31) % 1000) * 0x100);
                            }
                            iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                            iVar34 = iVar34 + iVar5;
                            iVar31 = iVar31 + 1;
                          } while (iVar31 < local_12cc);
                        }
                        uVar4 = PF_PART4(local_1378, 4) + 2;
                        uVar6 = uStack_16f0;
                        if (uStack_16f0 == 0) {
                          uVar6 = 400;
                        }
                        uVar18 = PF_PART4(local_1378, 4) + 6;
                        if ((int)PF_PART4(local_1378, 4) < 1) {
                          uVar4 = 0xc;
                          uVar18 = 0x10;
                        }
                        uVar6 = (uVar6 - uVar4) - 0x26;
                        if ((int)uVar6 <= (int)uVar18) {
                          uVar6 = uVar18;
                        }
                        uVar4 = (iVar34 - uVar6 / uVar4) - (uint)(uVar6 / uVar4 == 0);
                        pbVar10 = local_1370;
                        pbVar19 = local_1370;
                        while( true ) {
                          pbVar10 = pbVar10 + 1;
                          bVar33 = *pbVar19;
                          uVar8 = (ulong)bVar33;
                          if ((0x20 < uVar8) || ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0)) break;
                          pbVar19 = pbVar19 + 1;
                        }
                        uVar6 = 0;
                        if ((int)uVar4 < 1) {
                          uVar4 = uVar6;
                        }
                        if (bVar33 != 0) {
                          pbVar23 = pbVar10;
                          bVar3 = bVar33;
                          while (uVar17 = (ulong)bVar3, bVar3 < 0x3f) {
                            if ((0x100002600U >> (uVar17 & 0x3f) & 1) == 0) {
                              if (uVar17 == 0) goto LAB_100013a1;
                              if (uVar17 == 0x3e) goto LAB_1000134e;
                              break;
                            }
                            pbVar1 = pbVar19 + 1;
                            pbVar19 = pbVar19 + 1;
                            pbVar23 = pbVar23 + 1;
                            bVar3 = *pbVar1;
                          }
                          bVar24 = bVar3 | 0x20;
                          if (0x19 < (byte)(bVar3 + 0xbf)) {
                            bVar24 = bVar3;
                          }
                          if ((byte)(pbVar19[bVar24 == 0x69] - 0x30U) < 10) {
                            pbVar23 = pbVar23 + (bVar24 == 0x69);
                            do {
                              bVar3 = *pbVar23;
                              pbVar23 = pbVar23 + 1;
                            } while ((byte)(bVar3 - 0x30U) < 10);
                            uVar6 = 1;
                            if (bVar3 == 0x3e) goto switchD_10001495_caseD_6d;
                          }
LAB_100013a1:
                          lVar27 = 0;
                          while( true ) {
                            if ((bVar33 < 0x2d) && ((0x100100000201U >> (uVar8 & 0x3f) & 1) != 0))
                            goto LAB_1000144d;
                            local_1af8[lVar27] = (byte)uVar8;
                            bVar33 = pbVar10[lVar27];
                            if (((ulong)bVar33 < 0x2d) &&
                               ((0x100100000201U >> ((ulong)bVar33 & 0x3f) & 1) != 0)) {
                              lVar27 = lVar27 + 1;
                              goto LAB_1000144d;
                            }
                            local_1af8[lVar27 + 1] = bVar33;
                            bVar33 = pbVar10[lVar27 + 1];
                            if (((ulong)bVar33 < 0x2d) &&
                               ((0x100100000201U >> ((ulong)bVar33 & 0x3f) & 1) != 0)) {
                              lVar27 = lVar27 + 2;
                              goto LAB_1000144d;
                            }
                            local_1af8[lVar27 + 2] = bVar33;
                            bVar33 = pbVar10[lVar27 + 2];
                            if (((ulong)bVar33 < 0x2d) &&
                               ((0x100100000201U >> ((ulong)bVar33 & 0x3f) & 1) != 0)) {
                              lVar27 = lVar27 + 3;
                              goto LAB_1000144d;
                            }
                            if (lVar27 == 0x3c) break;
                            local_1af8[lVar27 + 3] = bVar33;
                            bVar33 = pbVar10[lVar27 + 3];
                            uVar8 = (ulong)bVar33;
                            lVar27 = lVar27 + 4;
                          }
                          lVar27 = 0x3f;
LAB_1000144d:
                          local_1af8[lVar27] = 0;
                          if (local_1af8[0] == 0) {
                            lVar27 = 0;
                            goto LAB_1000153b;
                          }
                          bVar33 = local_1af8[0] | 0x20;
                          if (0x19 < (byte)(local_1af8[0] + 0xbf)) {
                            bVar33 = local_1af8[0];
                          }
                          uVar6 = 0;
                          switch((uintptr_t)(bVar33)) {
                          case 0x6c:
                            if (local_1af8[1] == 0) {
                              lVar27 = 1;
LAB_100016d7:
                              puVar16 = &DAT_100081cc;
                              goto LAB_100017e1;
                            }
                            bVar33 = local_1af8[1] | 0x20;
                            if (0x19 < (byte)(local_1af8[1] + 0xbf)) {
                              bVar33 = local_1af8[1];
                            }
                            if (bVar33 != 0x6f) {
                              if (bVar33 != 0x69) break;
                              if (local_1af8[2] == 0) {
                                lVar27 = 2;
                                puVar16 = &DAT_100081ae;
                              }
                              else {
                                bVar33 = local_1af8[2] | 0x20;
                                if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                                  bVar33 = local_1af8[2];
                                }
                                if (bVar33 != 0x73) break;
                                if (local_1af8[3] == 0) {
                                  lVar27 = 3;
                                  puVar16 = &DAT_100081ae;
                                }
                                else {
                                  bVar33 = local_1af8[3] | 0x20;
                                  if (0x19 < (byte)(local_1af8[3] + 0xbf)) {
                                    bVar33 = local_1af8[3];
                                  }
                                  if ((bVar33 != 0x74) || (lVar27 = 4, (byte)local_1af4 != 0))
                                  break;
                                  puVar16 = &DAT_100081ae;
                                }
                              }
                              goto LAB_100017e1;
                            }
                            if (local_1af8[2] == 0) {
                              lVar27 = 2;
LAB_100023c0:
                              if ((&DAT_100081bc)[lVar27] == '\0') goto LAB_1000134e;
                            }
                            else {
                              bVar33 = local_1af8[2] | 0x20;
                              if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                                bVar33 = local_1af8[2];
                              }
                              if (bVar33 == 0x61) {
                                if (local_1af8[3] == 0) {
                                  lVar27 = 3;
                                }
                                else {
                                  bVar33 = local_1af8[3] | 0x20;
                                  if (0x19 < (byte)(local_1af8[3] + 0xbf)) {
                                    bVar33 = local_1af8[3];
                                  }
                                  if ((bVar33 != 100) || (lVar27 = 4, (byte)local_1af4 != 0))
                                  goto LAB_100023d1;
                                }
                                goto LAB_100023c0;
                              }
                            }
LAB_100023d1:
                            if (local_1af8[2] == 0) {
                              lVar27 = 2;
                              goto LAB_100016d7;
                            }
                            bVar33 = local_1af8[2] | 0x20;
                            if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                              bVar33 = local_1af8[2];
                            }
                            if (bVar33 == 0x61) {
                              if (local_1af8[3] == 0) {
                                lVar27 = 3;
                              }
                              else {
                                bVar33 = local_1af8[3] | 0x20;
                                if (0x19 < (byte)(local_1af8[3] + 0xbf)) {
                                  bVar33 = local_1af8[3];
                                }
                                if (bVar33 != 100) break;
                                if ((byte)local_1af4 == 0) {
                                  lVar27 = 4;
                                }
                                else {
                                  bVar33 = (byte)local_1af4 | 0x20;
                                  if (0x19 < (byte)((byte)local_1af4 + 0xbf)) {
                                    bVar33 = (byte)local_1af4;
                                  }
                                  if (bVar33 != 0x62) break;
                                  if (PF_PART1(local_1af4, 1) == 0) {
                                    lVar27 = 5;
                                  }
                                  else {
                                    bVar33 = PF_PART1(local_1af4, 1) | 0x20;
                                    if (0x19 < (byte)(PF_PART1(local_1af4, 1) + 0xbf)) {
                                      bVar33 = PF_PART1(local_1af4, 1);
                                    }
                                    if ((bVar33 != 99) || (lVar27 = 6, PF_PART1(local_1af4, 2) != '\0'))
                                    break;
                                  }
                                }
                              }
                              goto LAB_100016d7;
                            }
                            break;
                          default:
                            goto switchD_10001495_caseD_6d;
                          case 0x6e:
                            if (local_1af8[1] == 0) {
                              lVar27 = 1;
                              puVar16 = &DAT_100081b3;
                            }
                            else {
                              bVar33 = local_1af8[1] | 0x20;
                              if (0x19 < (byte)(local_1af8[1] + 0xbf)) {
                                bVar33 = local_1af8[1];
                              }
                              if (bVar33 != 0x65) break;
                              if (local_1af8[2] == 0) {
                                lVar27 = 2;
                                puVar16 = &DAT_100081b3;
                              }
                              else {
                                bVar33 = local_1af8[2] | 0x20;
                                if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                                  bVar33 = local_1af8[2];
                                }
                                if ((bVar33 != 0x77) || (lVar27 = 3, local_1af8[3] != 0)) break;
                                puVar16 = &DAT_100081b3;
                              }
                            }
                            goto LAB_100017e1;
                          case 0x72:
                            if (local_1af8[1] == 0) {
                              lVar27 = 1;
                              goto LAB_1000153b;
                            }
                            bVar33 = local_1af8[1] | 0x20;
                            if (0x19 < (byte)(local_1af8[1] + 0xbf)) {
                              bVar33 = local_1af8[1];
                            }
                            if (bVar33 != 0x75) {
                              if (bVar33 != 0x65) break;
                              if (local_1af8[2] == 0) {
                                lVar27 = 2;
                              }
                              else {
                                bVar33 = local_1af8[2] | 0x20;
                                if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                                  bVar33 = local_1af8[2];
                                }
                                if ((bVar33 != 0x6d) || (lVar27 = 3, local_1af8[3] != 0)) break;
                              }
                              puVar16 = &DAT_100081aa;
                              goto LAB_100017e1;
                            }
                            if (local_1af8[2] != 0) {
                              bVar33 = local_1af8[2] | 0x20;
                              if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                                bVar33 = local_1af8[2];
                              }
                              if ((bVar33 == 0x6e) && (lVar27 = 3, local_1af8[3] == 0))
                              goto LAB_10002240;
LAB_10002251:
                              if (local_1af8[2] == 0) {
                                lVar27 = 2;
LAB_1000153b:
                                uVar6 = (uint)((&DAT_100081d3)[lVar27] == '\0');
                                goto switchD_10001495_caseD_6d;
                              }
                              bVar33 = local_1af8[2] | 0x20;
                              if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                                bVar33 = local_1af8[2];
                              }
                              if (bVar33 == 0x6e) {
                                if (local_1af8[3] == 0) {
                                  lVar27 = 3;
                                }
                                else {
                                  bVar33 = local_1af8[3] | 0x20;
                                  if (0x19 < (byte)(local_1af8[3] + 0xbf)) {
                                    bVar33 = local_1af8[3];
                                  }
                                  if (bVar33 != 0x62) break;
                                  if ((byte)local_1af4 == 0) {
                                    lVar27 = 4;
                                  }
                                  else {
                                    bVar33 = (byte)local_1af4 | 0x20;
                                    if (0x19 < (byte)((byte)local_1af4 + 0xbf)) {
                                      bVar33 = (byte)local_1af4;
                                    }
                                    uVar6 = 0;
                                    if ((bVar33 != 99) || (lVar27 = 5, PF_PART1(local_1af4, 1) != 0))
                                    goto switchD_10001495_caseD_6d;
                                  }
                                }
                                goto LAB_1000153b;
                              }
                              break;
                            }
                            lVar27 = 2;
LAB_10002240:
                            if ((&DAT_100081c1)[lVar27] != '\0') goto LAB_10002251;
LAB_1000134e:
                            uVar6 = 1;
                            goto switchD_10001495_caseD_6d;
                          case 0x73:
                            if (local_1af8[1] == 0) {
                              lVar27 = 1;
                              puVar16 = &DAT_100081c5;
                              goto LAB_100017e1;
                            }
                            bVar33 = local_1af8[1] | 0x20;
                            if (0x19 < (byte)(local_1af8[1] + 0xbf)) {
                              bVar33 = local_1af8[1];
                            }
                            if (bVar33 != 0x61) break;
                            if (local_1af8[2] == 0) {
                              lVar27 = 2;
                              puVar16 = &DAT_100081c5;
                              goto LAB_100017e1;
                            }
                            bVar33 = local_1af8[2] | 0x20;
                            if (0x19 < (byte)(local_1af8[2] + 0xbf)) {
                              bVar33 = local_1af8[2];
                            }
                            if (bVar33 != 0x76) break;
                            if (local_1af8[3] == 0) {
                              lVar27 = 3;
LAB_100022f2:
                              if ((&DAT_100081b7)[lVar27] != '\0') goto LAB_10002303;
                              goto LAB_1000134e;
                            }
                            bVar33 = local_1af8[3] | 0x20;
                            if (0x19 < (byte)(local_1af8[3] + 0xbf)) {
                              bVar33 = local_1af8[3];
                            }
                            if ((bVar33 == 0x65) && (lVar27 = 4, (byte)local_1af4 == 0))
                            goto LAB_100022f2;
LAB_10002303:
                            if (local_1af8[3] != 0) {
                              bVar33 = local_1af8[3] | 0x20;
                              if (0x19 < (byte)(local_1af8[3] + 0xbf)) {
                                bVar33 = local_1af8[3];
                              }
                              if (bVar33 == 0x65) {
                                if ((byte)local_1af4 == 0) {
                                  lVar27 = 4;
                                  puVar16 = &DAT_100081c5;
                                }
                                else {
                                  bVar33 = (byte)local_1af4 | 0x20;
                                  if (0x19 < (byte)((byte)local_1af4 + 0xbf)) {
                                    bVar33 = (byte)local_1af4;
                                  }
                                  if (bVar33 != 0x62) break;
                                  if (PF_PART1(local_1af4, 1) == 0) {
                                    lVar27 = 5;
                                    puVar16 = &DAT_100081c5;
                                  }
                                  else {
                                    bVar33 = PF_PART1(local_1af4, 1) | 0x20;
                                    if (0x19 < (byte)(PF_PART1(local_1af4, 1) + 0xbf)) {
                                      bVar33 = PF_PART1(local_1af4, 1);
                                    }
                                    if ((bVar33 != 99) || (lVar27 = 6, PF_PART1(local_1af4, 2) != '\0'))
                                    break;
                                    puVar16 = &DAT_100081c5;
                                  }
                                }
                                goto LAB_100017e1;
                              }
                              break;
                            }
                            lVar27 = 3;
                            puVar16 = &DAT_100081c5;
LAB_100017e1:
                            if (puVar16[lVar27] == '\0') goto LAB_1000134e;
                          }
                          uVar6 = 0;
                        }
switchD_10001495_caseD_6d:
                        recovered_10007850((char *)local_1af8,0x100,local_1370);
                        if (local_13a0 != (void *)0x0) {
                          if (local_12cc < 1000) {
                            iVar31 = local_12d0 + local_12cc;
                            local_12cc = local_12cc + 1;
                          }
                          else {
                            iVar34 = recovered_10006f00((long)&local_16f8,
                                                        (char *)((long)local_13a0 +
                                                                (long)(local_12d0 % 1000) * 0x100));
                            local_12d0 = local_12d0 + ((local_12d0 + 1) / 1000) * -1000 + 1;
                            iVar31 = local_12d0 + local_12cc + -1;
                            uVar18 = local_12c8 - iVar34;
                            if (uVar18 == 0 || (int)local_12c8 < iVar34) {
                              uVar18 = 0;
                            }
                            local_12c8 = uVar18;
                          }
                          if (local_1af8[0] == 0) {
                            uVar8 = 0;
                          }
                          else {
                            uVar8 = 0;
                            bVar33 = local_1af8[0];
                            do {
                              if (bVar33 < 0x21) {
                                bVar33 = 0x20;
                              }
                              *(byte *)((long)local_13a0 + uVar8 + (long)(iVar31 % 1000) * 0x100) =
                                   bVar33;
                              bVar33 = local_1af8[uVar8 + 1];
                              uVar8 = uVar8 + 1;
                            } while ((bVar33 != 0) && (uVar8 < 0xff));
                          }
                          *(undefined1 *)((long)local_13a0 + uVar8 + (long)(iVar31 % 1000) * 0x100)
                               = 0;
                        }
                        if (local_1370[0] != 0) {
                          if ((char)uVar6 == '\0') {
                            pbVar19 = local_1370;
                            bVar33 = local_1370[0];
                            do {
                              pbVar19 = pbVar19 + 1;
                              if (bVar33 < 0x21) {
                                if ((0x100002600U >> ((ulong)bVar33 & 0x3f) & 1) != 0) break;
                                if ((ulong)bVar33 == 0) goto code_r0x10001a59;
                              }
                              bVar33 = *pbVar19;
                            } while( true );
                          }
                          goto LAB_1000195d;
                        }
                        if ((int)uVar4 <= (int)(uint)local_38) {
                          if (local_12cc < 1) goto LAB_100021ce;
                          iVar31 = 0;
                          iVar34 = 0;
                          do {
                            pcVar22 = &DAT_10008127;
                            if (local_13a0 != (void *)0x0) {
                              pcVar22 = (char *)((long)local_13a0 +
                                                (long)((local_12d0 + iVar31) % 1000) * 0x100);
                            }
                            iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                            iVar34 = iVar34 + iVar5;
                            iVar31 = iVar31 + 1;
                          } while (iVar31 < local_12cc);
                          goto LAB_100021d0;
                        }
                        goto LAB_10002223;
                      }
                      if ((uVar18 != 0x1b) && (uVar6 != 1)) goto LAB_100010a0;
                      local_12bb = '\0';
                      uVar4 = (uint)CONCAT71((int7)(uVar14 >> 8),1);
                      goto LAB_100024f5;
                    }
                  }
                  goto LAB_100024e6;
                }
                uVar4 = (uint)(bVar33 | bVar30);
                goto LAB_100024f5;
              }
              uVar6 = (bVar33 | bVar30) & 0xffffff01;
              local_137f = 0;
              goto LAB_10002c49;
            }
          }
          goto LAB_10006c3f;
        }
        terror_ui_window_close(&local_16f8);
      }
      iVar34 = Ram0000000000006800;
      if (((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
         ((uVar4 = Ram0000000000006808, 0xb < uVar4 &&
          ((uVar4 = Ram0000000000006808, 0x53 < uVar4 && (uVar4 = UINT_00006850, uVar4 != 0)))))) {
        (*(code *)(ulong)uVar4)(local_13a0);
      }
    }
  }
  local_13a0 = (void *)0x0;
LAB_10006d23:
  iVar34 = Ram0000000000006800;
  if ((((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
      (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x2b < uVar4)) {
    uVar4 = UINT_00006828;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      (*(code *)(ulong)uVar4)(str_10008100);
    }
  }
  return 0;
code_r0x10001a59:
  uVar8 = strlen((char *)local_1370);
  uVar17 = strlen(&DAT_100081e1);
  if (uVar17 - 1 < uVar8) {
    uVar28 = 0;
    do {
      bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
      bVar3 = bVar33 | 0x20;
      if (0x19 < (byte)(bVar33 + 0xbf)) {
        bVar3 = bVar33;
      }
      bVar33 = (&DAT_100081e1)[uVar28];
      bVar24 = bVar33 | 0x20;
      if (0x19 < (byte)(bVar33 + 0xbf)) {
        bVar24 = bVar33;
      }
      if (bVar3 != bVar24) goto LAB_10001db9;
      uVar28 = uVar28 + 1;
    } while (uVar17 != uVar28);
LAB_10001f65:
    uVar8 = strlen((char *)local_1370);
    uVar17 = strlen(&DAT_100081f0);
    if (uVar17 - 1 < uVar8) {
      uVar28 = 0;
      do {
        bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
        bVar3 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar3 = bVar33;
        }
        bVar33 = (&DAT_100081f0)[uVar28];
        bVar24 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar24 = bVar33;
        }
        if (bVar3 != bVar24) goto LAB_10001fe6;
        uVar28 = uVar28 + 1;
      } while (uVar17 != uVar28);
      uVar6 = 0x80000002;
    }
    else {
LAB_10001fe6:
      uVar8 = strlen((char *)local_1370);
      uVar17 = strlen(&DAT_100081f4);
      if (uVar17 - 1 < uVar8) {
        uVar28 = 0;
        do {
          bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
          bVar3 = bVar33 | 0x20;
          if (0x19 < (byte)(bVar33 + 0xbf)) {
            bVar3 = bVar33;
          }
          bVar33 = (&DAT_100081f4)[uVar28];
          bVar24 = bVar33 | 0x20;
          if (0x19 < (byte)(bVar33 + 0xbf)) {
            bVar24 = bVar33;
          }
          if (bVar3 != bVar24) goto LAB_10002067;
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
        uVar6 = 0x80000003;
      }
      else {
LAB_10002067:
        uVar8 = strlen((char *)local_1370);
        uVar17 = strlen(&DAT_100081f9);
        uVar6 = 0x80000001;
        if (uVar17 - 1 < uVar8) {
          uVar28 = 0;
          do {
            bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
            bVar3 = bVar33 | 0x20;
            if (0x19 < (byte)(bVar33 + 0xbf)) {
              bVar3 = bVar33;
            }
            bVar33 = (&DAT_100081f9)[uVar28];
            bVar24 = bVar33 | 0x20;
            if (0x19 < (byte)(bVar33 + 0xbf)) {
              bVar24 = bVar33;
            }
            if (bVar3 != bVar24) goto LAB_100020ee;
            uVar28 = uVar28 + 1;
          } while (uVar17 != uVar28);
          uVar6 = 0x80000004;
        }
      }
    }
LAB_100020ee:
    iVar34 = Ram0000000000006800;
    if ((((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
        (uVar18 = Ram0000000000006808, 0xb < uVar18)) &&
       (uVar18 = Ram0000000000006808, 0x93 < uVar18)) {
      uVar18 = UINT_00006890;
      if (((code *)(ulong)uVar18 == (code *)0x0) ||
         (uVar6 = (*(code *)(ulong)uVar18)((char *)local_1370,uVar6), uVar6 == 0))
      goto LAB_10002140;
    }
    else {
LAB_10002140:
      recovered_10006da0((long)&local_16f8,(byte *)str_1000814a);
    }
    if ((int)(uint)local_38 < (int)uVar4) goto LAB_10002223;
    if (local_12cc < 1) {
LAB_100021ce:
      iVar34 = 0;
    }
    else {
      iVar31 = 0;
      iVar34 = 0;
      do {
        pcVar22 = &DAT_10008127;
        if (local_13a0 != (void *)0x0) {
          pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
        }
        iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
        iVar34 = iVar34 + iVar5;
        iVar31 = iVar31 + 1;
      } while (iVar31 < local_12cc);
    }
  }
  else {
LAB_10001db9:
    uVar8 = strlen((char *)local_1370);
    uVar17 = strlen(&DAT_100081e6);
    if (uVar17 - 1 < uVar8) {
      uVar28 = 0;
      do {
        bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
        bVar3 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar3 = bVar33;
        }
        bVar33 = (&DAT_100081e6)[uVar28];
        bVar24 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar24 = bVar33;
        }
        if (bVar3 != bVar24) goto LAB_10001e38;
        uVar28 = uVar28 + 1;
      } while (uVar17 != uVar28);
      goto LAB_10001f65;
    }
LAB_10001e38:
    uVar8 = strlen((char *)local_1370);
    uVar17 = strlen(&DAT_100081eb);
    if (uVar17 - 1 < uVar8) {
      uVar28 = 0;
      do {
        bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
        bVar3 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar3 = bVar33;
        }
        bVar33 = (&DAT_100081eb)[uVar28];
        bVar24 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar24 = bVar33;
        }
        if (bVar3 != bVar24) goto LAB_10001eb7;
        uVar28 = uVar28 + 1;
      } while (uVar17 != uVar28);
      goto LAB_10001f65;
    }
LAB_10001eb7:
    uVar8 = strlen((char *)local_1370);
    uVar17 = strlen(&DAT_100081f0);
    if (uVar17 - 1 < uVar8) {
      uVar28 = 0;
      do {
        bVar33 = local_1370[uVar28 + (uVar8 - uVar17)];
        bVar3 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar3 = bVar33;
        }
        bVar33 = (&DAT_100081f0)[uVar28];
        bVar24 = bVar33 | 0x20;
        if (0x19 < (byte)(bVar33 + 0xbf)) {
          bVar24 = bVar33;
        }
        if (bVar3 != bVar24) goto LAB_10001f33;
        uVar28 = uVar28 + 1;
      } while (uVar17 != uVar28);
      goto LAB_10001f65;
    }
LAB_10001f33:
    bVar36 = recovered_10007a00((char *)local_1370,&DAT_100081f4);
    if ((bVar36) || (bVar36 = recovered_10007a00((char *)local_1370,&DAT_100081f9), bVar36))
    goto LAB_10001f65;
LAB_1000195d:
    if (local_12b8 == 0) {
      pf_varargs_10007fe2__8_(local_12a8,0x200,&DAT_10008171,(ulonglong)local_1370);
      local_10a8[0] = 0;
      local_12b4 = 0;
      local_12b0 = 0;
      local_12b8 = 1;
      iVar34 = Ram0000000000006800;
      if (((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
         ((uVar6 = Ram0000000000006808, 0xb < uVar6 && (uVar6 = Ram0000000000006808, 0x97 < uVar6)))
         ) {
        uVar6 = UINT_00006894;
        if ((code *)(ulong)uVar6 == (code *)0x0) goto LAB_10001b89;
        local_12ac = (*(code *)(ulong)uVar6)(recovered_10007960,&local_16f8,str_10008174);
        if (local_12ac == 0) goto LAB_10001b93;
      }
      else {
LAB_10001b89:
        local_12ac = 0;
LAB_10001b93:
        local_12b8 = 0;
        local_12b4 = 0;
        recovered_10006da0((long)&local_16f8,(byte *)str_10008183);
      }
      if ((int)(uint)local_38 < (int)uVar4) goto LAB_10002223;
      if (0 < local_12cc) {
        iVar31 = 0;
        iVar34 = 0;
        do {
          pcVar22 = &DAT_10008127;
          if (local_13a0 != (void *)0x0) {
            pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
          }
          iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
          iVar34 = iVar34 + iVar5;
          iVar31 = iVar31 + 1;
        } while (iVar31 < local_12cc);
        goto LAB_100021d0;
      }
      goto LAB_100021ce;
    }
    if (local_13a0 != (void *)0x0) {
      if (local_12cc < 1000) {
        iVar31 = local_12d0 + local_12cc;
        local_12cc = local_12cc + 1;
      }
      else {
        iVar34 = recovered_10006f00((long)&local_16f8,
                                    (char *)((long)local_13a0 + (long)(local_12d0 % 1000) * 0x100));
        local_12d0 = local_12d0 + ((local_12d0 + 1) / 1000) * -1000 + 1;
        iVar31 = local_12d0 + local_12cc + -1;
        uVar6 = local_12c8 - iVar34;
        if (uVar6 == 0 || (int)local_12c8 < iVar34) {
          uVar6 = 0;
        }
        local_12c8 = uVar6;
      }
      lVar27 = (long)(iVar31 % 1000) * 0x100;
      bVar33 = 99;
      lVar15 = 0;
      do {
        if (bVar33 < 0x21) {
          bVar33 = 0x20;
        }
        *(byte *)((long)local_13a0 + lVar15 + lVar27) = bVar33;
        bVar33 = str_10008150[lVar15 + 1];
        if ((byte)str_10008150[lVar15 + 1] < 0x21) {
          bVar33 = 0x20;
        }
        *(byte *)((long)local_13a0 + lVar15 + 1 + lVar27) = bVar33;
        bVar33 = str_10008150[lVar15 + 2];
        lVar15 = lVar15 + 2;
      } while (lVar15 != 0x20);
      *(undefined1 *)((long)local_13a0 + lVar27 + 0x20) = 0;
    }
    if ((int)(uint)local_38 < (int)uVar4) goto LAB_10002223;
    if (local_12cc < 1) goto LAB_100021ce;
    iVar31 = 0;
    iVar34 = 0;
    do {
      pcVar22 = &DAT_10008127;
      if (local_13a0 != (void *)0x0) {
        pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
      }
      iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
      iVar34 = iVar34 + iVar5;
      iVar31 = iVar31 + 1;
    } while (iVar31 < local_12cc);
  }
LAB_100021d0:
  uVar4 = uStack_16f0;
  if (uStack_16f0 == 0) {
    uVar4 = 400;
  }
  uVar6 = PF_PART4(local_1378, 4) + 2;
  uVar18 = PF_PART4(local_1378, 4) + 6;
  if ((int)PF_PART4(local_1378, 4) < 1) {
    uVar6 = 0xc;
    uVar18 = 0x10;
  }
  uVar4 = (uVar4 - uVar6) - 0x26;
  if ((int)uVar4 <= (int)uVar18) {
    uVar4 = uVar18;
  }
  local_12c8 = (iVar34 - uVar4 / uVar6) - (uint)(uVar4 / uVar6 == 0);
  if ((int)local_12c8 < 1) {
    local_12c8 = 0;
  }
LAB_10002223:
  local_1370[0] = 0;
  bVar33 = 1;
LAB_100010a0:
  uVar4 = (int)uVar14 + 1;
  uVar14 = (ulong)uVar4;
  if (uVar4 == 0x18) goto LAB_100024e6;
  goto LAB_100010ad;
LAB_100024e6:
  uVar4 = CONCAT31((int3)(local_58 >> 8),(byte)local_58 | bVar30 | bVar33);
LAB_100024f5:
  uVar18 = local_1384 & 1;
  uVar6 = uVar4 & 0xffffff01;
  if (uVar18 == 0) {
    local_137f = 0;
  }
  else {
    local_38 = CONCAT44(PF_PART4(local_38, 4),PF_PART4(local_138c, 4));
    if ((char)local_137f == '\0') {
      iVar34 = PF_PART4(local_1378, 4) + 2;
      if ((int)PF_PART4(local_1378, 4) < 1) {
        iVar34 = 0xc;
      }
      uVar6 = uStack_16f0;
      if (uStack_16f0 == 0) {
        uVar6 = 400;
      }
      uVar6 = (uVar6 - iVar34) - 0x26;
      local_58 = CONCAT44(PF_PART4(local_58, 4),uVar4) & 0xffffffffffffff01;
      if ((int)PF_PART4(local_1378, 4) < 1) {
        uVar4 = 0x10;
        if ((int)uVar6 < 0x10) goto LAB_1000255a;
      }
      else {
        uVar4 = PF_PART4(local_1378, 4) + 6;
        if ((int)uVar6 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_1000255a:
          uVar6 = uVar4;
        }
      }
      iVar34 = (int)local_138c;
      auVar39 = recovered_10007aa0((long)&local_16f8);
      uVar4 = PF_PART4(local_1378, 4) + 2;
      uVar21 = 0xc;
      if (0 < (int)PF_PART4(local_1378, 4)) {
        uVar21 = uVar4;
      }
      uVar12 = uStack_16f0;
      if (uStack_16f0 == 0) {
        uVar12 = 400;
      }
      uVar7 = (uVar12 - uVar21) - 0x26;
      if ((int)PF_PART4(local_1378, 4) < 1) {
        uVar25 = 0x10;
        bVar36 = SBORROW4(uVar7,0x10);
        iVar31 = (uVar12 - uVar21) + -0x36;
      }
      else {
        uVar25 = PF_PART4(local_1378, 4) + 6;
        bVar36 = SBORROW4(uVar7,uVar25);
        iVar31 = uVar7 - uVar25;
      }
      uVar21 = uVar7;
      if (bVar36 != iVar31 < 0) {
        uVar21 = uVar25;
      }
      local_68 = (ulong)local_12c8;
      uVar12 = iVar34 - 10;
      uVar25 = local_12c8;
      if (((uVar12 < 0xc) && ((int)(uVar21 - 0x14) <= (int)(uint)local_38)) &&
         ((int)(uint)local_38 < (int)(uVar21 - 6))) {
        uVar6 = local_12c8 - 1;
        if (local_12cc < 1) {
          iVar34 = 0;
        }
        else {
          iVar31 = 0;
          iVar34 = 0;
          local_12c8 = uVar6;
          do {
            pcVar22 = &DAT_10008127;
            if (local_13a0 != (void *)0x0) {
              pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
            }
            iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
            iVar34 = iVar34 + iVar5;
            iVar31 = iVar31 + 1;
          } while (iVar31 < local_12cc);
          uVar4 = PF_PART4(local_1378, 4) + 2;
          uVar25 = (uint)local_68;
        }
        uVar21 = uStack_16f0;
        if (uStack_16f0 == 0) {
          uVar21 = 400;
        }
        uVar12 = PF_PART4(local_1378, 4) + 6;
        if ((int)PF_PART4(local_1378, 4) < 1) {
          uVar4 = 0xc;
          uVar12 = 0x10;
        }
        uVar21 = (uVar21 - uVar4) - 0x26;
        if ((int)uVar21 <= (int)uVar12) {
          uVar21 = uVar12;
        }
        uVar14 = (ulong)uVar21 / (ulong)uVar4;
        local_12c8 = (iVar34 - (int)uVar14) - (uint)((int)uVar14 == 0);
        if ((int)local_12c8 < 1) {
          local_12c8 = 0;
        }
        if ((int)uVar6 < (int)local_12c8) {
          local_12c8 = uVar6;
        }
        if ((int)uVar25 < 1) {
          local_12c8 = 0;
        }
LAB_10002969:
        bVar33 = (byte)local_58;
      }
      else {
        uVar21 = uVar7;
        if ((int)PF_PART4(local_1378, 4) < 1) {
          uVar13 = 0x10;
          if ((int)uVar7 < 0x10) goto LAB_100026bc;
        }
        else {
          uVar13 = PF_PART4(local_1378, 4) + 6;
          if ((int)uVar7 < (int)uVar13) {
LAB_100026bc:
            uVar21 = uVar13;
          }
        }
        if (((uVar12 < 0xc) && ((int)(uVar21 - 4) <= (int)(uint)local_38)) &&
           ((uint)local_38 < uVar21 + 10)) {
          uVar6 = local_12c8 + 1;
          if (local_12cc < 1) {
            iVar34 = 0;
          }
          else {
            iVar31 = 0;
            iVar34 = 0;
            local_12c8 = uVar6;
            do {
              pcVar22 = &DAT_10008127;
              if (local_13a0 != (void *)0x0) {
                pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
              }
              iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
              iVar34 = iVar34 + iVar5;
              iVar31 = iVar31 + 1;
            } while (iVar31 < local_12cc);
            uVar4 = PF_PART4(local_1378, 4) + 2;
            uVar25 = (uint)local_68;
          }
          uVar21 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar21 = 400;
          }
          uVar12 = PF_PART4(local_1378, 4) + 6;
          if ((int)PF_PART4(local_1378, 4) < 1) {
            uVar4 = 0xc;
            uVar12 = 0x10;
          }
          uVar21 = (uVar21 - uVar4) - 0x26;
          if ((int)uVar21 <= (int)uVar12) {
            uVar21 = uVar12;
          }
          uVar14 = (ulong)uVar21 / (ulong)uVar4;
          local_12c8 = (iVar34 - (int)uVar14) - (uint)((int)uVar14 == 0);
          if ((int)local_12c8 < 1) {
            local_12c8 = 0;
          }
          if ((int)uVar6 < (int)local_12c8) {
            local_12c8 = uVar6;
          }
          if ((int)uVar25 < -1) {
            local_12c8 = 0;
          }
          goto LAB_10002969;
        }
        if ((int)(uint)local_38 < 10 || 0xb < uVar12) {
LAB_100028f8:
          uVar6 = (uint)local_58;
          goto LAB_1000297f;
        }
        iVar31 = uVar6 - 0x18;
        if (uVar6 < 0x34) {
          iVar31 = 0x1c;
        }
        if (iVar31 <= (int)(uint)local_38) goto LAB_100028f8;
        if ((PF_PART4(auVar39, 0) + PF_PART4(auVar39, 8) <= iVar34 ||
             ((int)(uint)local_38 < PF_PART4(auVar39, 4) || iVar34 < PF_PART4(auVar39, 0))) ||
           (PF_PART4(auVar39, 12) + PF_PART4(auVar39, 4) <= (int)(uint)local_38)) {
          if ((int)PF_PART4(local_1378, 4) < 1) {
            uVar4 = 0x10;
            if ((int)uVar7 < 0x10) goto LAB_10002806;
          }
          else {
            uVar4 = PF_PART4(local_1378, 4) + 6;
            if ((int)uVar7 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_10002806:
              uVar7 = uVar4;
            }
          }
          auVar39 = recovered_10007aa0((long)&local_16f8);
          uVar9 = PF_PART8(auVar39, 8);
          if (local_12cc < 1) {
            bVar36 = false;
            iVar34 = 0;
          }
          else {
            iVar31 = 0;
            iVar34 = 0;
            local_88 = uVar9;
            do {
              pcVar22 = &DAT_10008127;
              if (local_13a0 != (void *)0x0) {
                pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
              }
              iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
              iVar34 = iVar34 + iVar5;
              iVar31 = iVar31 + 1;
            } while (iVar31 < local_12cc);
            bVar36 = 0 < local_12cc;
            uVar9 = local_88;
          }
          uVar4 = PF_PART4(local_1378, 4) + 2;
          uVar6 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar6 = 400;
          }
          uVar21 = PF_PART4(local_1378, 4) + 6;
          uVar12 = 0xc;
          if (0 < (int)PF_PART4(local_1378, 4)) {
            uVar12 = uVar4;
          }
          uVar25 = 0x10;
          if (0 < (int)PF_PART4(local_1378, 4)) {
            uVar25 = uVar21;
          }
          uVar6 = (uVar6 - uVar12) - 0x26;
          if ((int)uVar6 <= (int)uVar25) {
            uVar6 = uVar25;
          }
          iVar31 = uVar7 - 0x22;
          iVar5 = uVar6 / uVar12 + (uint)(uVar6 / uVar12 == 0);
          if (uVar7 < 0x34) {
            iVar31 = 0x12;
          }
          iVar35 = iVar34 - iVar5;
          if (iVar35 == 0 || iVar34 < iVar5) {
            local_12c8 = 0;
          }
          else {
            uVar6 = (uint)((ulong)uVar9 >> 0x20);
            iVar31 = iVar31 - uVar6;
            local_12c8 = 0;
            if (0 < iVar31) {
              uVar6 = (int)(iVar35 * (((uint)local_38 - (uVar6 >> 1)) + -10)) / iVar31;
              iVar34 = 0;
              if (bVar36) {
                iVar31 = 0;
                iVar34 = 0;
                local_12c8 = uVar6;
                do {
                  pcVar22 = &DAT_10008127;
                  if (local_13a0 != (void *)0x0) {
                    pcVar22 = (char *)((long)local_13a0 +
                                      (long)((local_12d0 + iVar31) % 1000) * 0x100);
                  }
                  iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
                  iVar34 = iVar34 + iVar5;
                  iVar31 = iVar31 + 1;
                } while (iVar31 < local_12cc);
                uVar4 = PF_PART4(local_1378, 4) + 2;
                uVar21 = PF_PART4(local_1378, 4) + 6;
              }
              iVar31 = uStack_16f0 - 0x26;
              if (uStack_16f0 == 0) {
                iVar31 = 0x16a;
              }
              if ((int)PF_PART4(local_1378, 4) < 1) {
                uVar4 = 0xc;
                uVar21 = 0x10;
              }
              uVar12 = iVar31 - uVar4;
              if ((int)(iVar31 - uVar4) <= (int)uVar21) {
                uVar12 = uVar21;
              }
              local_12c8 = (iVar34 - uVar12 / uVar4) - (uint)(uVar12 / uVar4 == 0);
              if ((int)local_12c8 < 1) {
                local_12c8 = 0;
              }
              if ((int)uVar6 < (int)local_12c8) {
                local_12c8 = uVar6;
              }
              if ((int)uVar6 < 0) {
                local_12c8 = 0;
              }
            }
          }
        }
        auVar39 = recovered_10007aa0((long)&local_16f8);
        local_137f = CONCAT11(1,(char)local_137f);
        uVar14 = PF_PART8(auVar39, 0) >> 0x20;
        local_137c = (uint)local_38 - PF_PART4(auVar39, 4);
        bVar33 = (byte)local_58;
        uVar25 = (uint)local_68;
      }
      uVar6 = (uint)CONCAT71((int7)(uVar14 >> 8),local_12c8 != uVar25 | bVar33) & 0xffffff01;
    }
LAB_1000297f:
    if (PF_PART1(local_137f, 1) == '\x01') {
      local_58 = CONCAT44(PF_PART4(local_58, 4),uVar6);
      iVar34 = PF_PART4(local_1378, 4) + 2;
      if ((int)PF_PART4(local_1378, 4) < 1) {
        iVar34 = 0xc;
      }
      uVar4 = uStack_16f0;
      if (uStack_16f0 == 0) {
        uVar4 = 400;
      }
      uVar4 = (uVar4 - iVar34) - 0x26;
      if ((int)PF_PART4(local_1378, 4) < 1) {
        uVar6 = 0x10;
        if ((int)uVar4 < 0x10) goto LAB_100029cd;
      }
      else {
        uVar6 = PF_PART4(local_1378, 4) + 6;
        if ((int)uVar4 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_100029cd:
          uVar4 = uVar6;
        }
      }
      auVar39 = recovered_10007aa0((long)&local_16f8);
      if (local_12cc < 1) {
        bVar36 = false;
        iVar34 = 0;
      }
      else {
        iVar31 = 0;
        iVar34 = 0;
        do {
          pcVar22 = &DAT_10008127;
          if (local_13a0 != (void *)0x0) {
            pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
          }
          iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
          iVar34 = iVar34 + iVar5;
          iVar31 = iVar31 + 1;
        } while (iVar31 < local_12cc);
        bVar36 = 0 < local_12cc;
      }
      uVar12 = local_12c8;
      iVar31 = uVar4 - 0x22;
      uVar21 = PF_PART4(local_1378, 4) + 2;
      uVar6 = uStack_16f0;
      if (uStack_16f0 == 0) {
        uVar6 = 400;
      }
      uVar25 = 0xc;
      uVar7 = PF_PART4(local_1378, 4) + 6;
      if ((int)PF_PART4(local_1378, 4) < 1) {
        uVar7 = 0x10;
      }
      else {
        uVar25 = uVar21;
      }
      uVar6 = (uVar6 - uVar25) - 0x26;
      if ((int)uVar6 <= (int)uVar7) {
        uVar6 = uVar7;
      }
      iVar34 = (iVar34 - uVar6 / uVar25) - (uint)(uVar6 / uVar25 == 0);
      if (uVar4 < 0x34) {
        iVar31 = 0x12;
      }
      uVar6 = (uint)local_58;
      if (((PF_PART1(local_137f, 1) == '\x01') && (0 < iVar34)) &&
         (iVar31 = iVar31 - PF_PART4(auVar39, 12), 0 < iVar31)) {
        uVar4 = (int)((((uint)local_38 - local_137c) + -10) * iVar34) / iVar31;
        iVar34 = 0;
        if (bVar36) {
          iVar31 = 0;
          iVar34 = 0;
          local_12c8 = uVar4;
          do {
            pcVar22 = &DAT_10008127;
            if (local_13a0 != (void *)0x0) {
              pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
            }
            iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
            iVar34 = iVar34 + iVar5;
            iVar31 = iVar31 + 1;
          } while (iVar31 < local_12cc);
          uVar21 = PF_PART4(local_1378, 4) + 2;
        }
        uVar14 = (ulong)uVar21;
        uVar6 = 0xc;
        if (0 < (int)PF_PART4(local_1378, 4)) {
          uVar6 = uVar21;
        }
        uVar21 = uStack_16f0;
        if (uStack_16f0 == 0) {
          uVar21 = 400;
        }
        uVar6 = (uVar21 - uVar6) - 0x26;
        if ((int)PF_PART4(local_1378, 4) < 1) {
          uVar21 = uVar6;
          if ((int)uVar6 < 0x11) {
            uVar21 = 0x10;
          }
          uVar14 = 0xc;
        }
        else {
          uVar21 = PF_PART4(local_1378, 4) + 6;
          if ((int)(PF_PART4(local_1378, 4) + 6) < (int)uVar6) {
            uVar21 = uVar6;
          }
        }
        iVar31 = (int)(uVar21 / uVar14);
        local_12c8 = (iVar34 - iVar31) - (uint)(iVar31 == 0);
        if ((int)local_12c8 < 1) {
          local_12c8 = 0;
        }
        if ((int)uVar4 < (int)local_12c8) {
          local_12c8 = uVar4;
        }
        if ((int)uVar4 < 0) {
          local_12c8 = 0;
        }
        uVar6 = (uint)local_58 & 0xff;
        if (local_12c8 != uVar12) {
          uVar6 = 1;
        }
      }
    }
  }
  local_137f = CONCAT11(PF_PART1(local_137f, 1),(char)uVar18);
LAB_10002c49:
  uVar4 = local_12c8;
  uVar18 = 0;
  local_58 = CONCAT44(PF_PART4(local_58, 4),uVar6);
  if (local_12cc < 1) {
    iVar34 = 0;
  }
  else {
    iVar31 = 0;
    iVar34 = 0;
    do {
      pcVar22 = &DAT_10008127;
      if (local_13a0 != (void *)0x0) {
        pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + iVar31) % 1000) * 0x100);
      }
      iVar5 = recovered_10006f00((long)&local_16f8,pcVar22);
      iVar34 = iVar34 + iVar5;
      iVar31 = iVar31 + 1;
    } while (iVar31 < local_12cc);
  }
  uVar6 = 0xc;
  if (0 < (int)PF_PART4(local_1378, 4)) {
    uVar6 = PF_PART4(local_1378, 4) + 2;
  }
  uVar21 = uStack_16f0;
  if (uStack_16f0 == 0) {
    uVar21 = 400;
  }
  uVar6 = (uVar21 - uVar6) - 0x26;
  if ((int)PF_PART4(local_1378, 4) < 1) {
    if ((int)uVar6 < 0x11) {
      uVar6 = 0x10;
    }
    uVar14 = 0xc;
  }
  else {
    if ((int)uVar6 <= (int)(PF_PART4(local_1378, 4) + 6)) {
      uVar6 = PF_PART4(local_1378, 4) + 6;
    }
    uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
  }
  iVar31 = (int)(uVar6 / uVar14);
  local_12c8 = (iVar34 - iVar31) - (uint)(iVar31 == 0);
  if ((int)local_12c8 < 1) {
    local_12c8 = uVar18;
  }
  if ((int)uVar4 < (int)local_12c8) {
    local_12c8 = uVar4;
  }
  if ((int)uVar4 < 0) {
    local_12c8 = uVar18;
  }
  local_90 = local_12c4 >> 0xc & 1;
  if (local_70 != 2) {
    local_90 = 1;
  }
  uVar6 = (uint)(byte)local_58;
  if ((uint)local_40 != local_90 || local_12c8 != uVar4) {
    uVar6 = 1;
  }
  if (((local_60 & 1) == 0) && ((char)uVar6 == '\0')) {
    local_12c4 = local_12c4 + 1;
  }
  else {
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar7 = (int)uVar21 >> 0x1f & uVar21;
    uVar12 = 0;
    if (0 < (int)uVar4) {
      uVar12 = uVar4;
    }
    if ((int)uVar21 < 1) {
      uVar21 = uVar18;
    }
    if ((int)uVar7 < (int)uVar21) {
      uVar4 = (int)uVar4 >> 0x1f & uVar4;
      do {
        if ((int)uVar4 < (int)uVar12) {
          uVar25 = uVar4;
          do {
            if (-1 < (int)(uVar25 | uVar7) && local_13a8 != (void *)0x0) {
              uVar13 = local_16f4;
              if (local_16f4 == 0) {
                uVar13 = 0x2f8;
              }
              if ((int)uVar25 < (int)uVar13) {
                uVar13 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar13 = 400;
                }
                if ((int)uVar7 < (int)uVar13) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar7 + (ulong)uVar25 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x4c;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x91;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0xc4;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xd9;
                }
              }
            }
            uVar25 = uVar25 + 1;
          } while (uVar12 != uVar25);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar21);
    }
    uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
    uVar4 = 0xc;
    if (0 < (int)PF_PART4(local_1378, 4)) {
      uVar4 = PF_PART4(local_1378, 4) + 2;
    }
    iVar34 = local_16f4 - 0x26;
    if (local_16f4 == 0) {
      iVar34 = 0x2d2;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    iVar31 = (int)local_1378 + 8;
    if ((int)local_1378 < 1) {
      iVar31 = 0xe;
    }
    if (iVar31 < iVar34) {
      iVar31 = iVar34;
    }
    uVar4 = (uVar21 - uVar4) - 0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      lVar27 = (ulong)uVar4 << 0x20;
      if ((int)uVar4 < 0x10) {
        lVar27 = 0x1000000000;
      }
      uVar12 = 0x10;
      local_80 = 0x10;
      if (0x10 < (int)uVar4) {
        local_80 = (ulong)uVar4;
      }
      iVar34 = (int)local_1378;
      if ((int)local_1378 < 1) {
        iVar34 = 6;
      }
      uVar7 = (iVar31 + -8) / iVar34;
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      uVar14 = 0xc;
    }
    else {
      uVar12 = PF_PART4(local_1378, 4) + 6;
      iVar34 = (int)local_1378;
      if ((int)local_1378 < 1) {
        iVar34 = 6;
      }
      uVar7 = (iVar31 + -8) / iVar34;
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      uVar25 = uVar12;
      if ((int)uVar12 < (int)uVar4) {
        uVar25 = uVar4;
      }
      local_80 = (ulong)uVar25;
      lVar27 = local_80 << 0x20;
    }
    local_60 = CONCAT44(PF_PART4(local_60, 4),uVar7);
    if ((int)uVar12 < (int)uVar4) {
      uVar12 = uVar4;
    }
    iVar34 = (int)(uVar12 / uVar14);
    local_68 = CONCAT44(PF_PART4(local_68, 4),iVar34 + (uint)(iVar34 == 0));
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar12 = 0x1c;
    if ((int)uVar4 < 0x1c) {
      uVar12 = uVar4;
    }
    uVar25 = iVar31 + 0x1c;
    local_40 = CONCAT44(PF_PART4(local_40, 4),uVar25);
    if ((int)uVar25 < (int)uVar4) {
      uVar4 = uVar25;
    }
    local_6c = (int)local_80 + 10;
    if (10 < (int)uVar21) {
      if ((int)local_6c < (int)uVar21) {
        uVar21 = local_6c;
      }
      uVar14 = 10;
      do {
        uVar13 = uVar12;
        if (0x1c < (int)uVar4) {
          do {
            if (-1 < (int)uVar13 && local_13a8 != (void *)0x0) {
              uVar26 = local_16f4;
              if (local_16f4 == 0) {
                uVar26 = 0x2f8;
              }
              if ((int)uVar13 < (int)uVar26) {
                uVar26 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar26 = 400;
                }
                if ((long)uVar14 < (long)(int)uVar26) {
                  uVar8 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar8 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar8 = (ulong)local_16ec;
                  }
                  lVar15 = uVar8 * uVar14 + (ulong)uVar13 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar15) = 0x4c;
                  *(undefined1 *)((long)local_13a8 + lVar15 + 1) = 0x91;
                  *(undefined1 *)((long)local_13a8 + lVar15 + 2) = 0xc4;
                  *(undefined1 *)((long)local_13a8 + lVar15 + 3) = 0xd9;
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar4 != uVar13);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar21);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar21 = uVar4;
    if ((int)uVar25 < (int)uVar4) {
      uVar21 = uVar25;
    }
    if ((uStack_16f0 == 0 || 10 < (int)uStack_16f0) && (0x1c < (int)uVar21)) {
      if (0x1b < (int)uVar4) {
        uVar4 = 0x1c;
      }
      do {
        if (-1 < (int)uVar4 && local_13a8 != (void *)0x0) {
          uVar12 = local_16f4;
          if (local_16f4 == 0) {
            uVar12 = 0x2f8;
          }
          if (((int)uVar4 < (int)uVar12) && (uStack_16f0 == 0 || 10 < (int)uStack_16f0)) {
            uVar14 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar14 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar14 = (ulong)local_16ec;
            }
            lVar15 = (ulong)uVar4 * 4 + uVar14 * 10;
            *(undefined1 *)((long)local_13a8 + lVar15) = 0;
            *(undefined1 *)((long)local_13a8 + lVar15 + 1) = 0;
            *(undefined1 *)((long)local_13a8 + lVar15 + 2) = 0;
            *(undefined1 *)((long)local_13a8 + lVar15 + 3) = 0xff;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar21 != uVar4);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar21 = 0x1c;
    if ((int)uVar4 < 0x1c) {
      uVar21 = uVar4;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar26 = (uint)((ulong)(lVar27 + 0x90000001c) >> 0x20);
    uVar13 = uVar12;
    if ((int)uVar26 < (int)uVar12) {
      uVar13 = uVar26;
    }
    if (lVar27 + 0x90000001c < 0) {
      uVar13 = uVar18;
    }
    if ((int)uVar25 < (int)uVar4) {
      uVar4 = uVar25;
    }
    if ((int)(uVar26 + 1) < (int)uVar12) {
      uVar12 = uVar26 + 1;
    }
    if ((int)uVar26 < -1) {
      uVar12 = uVar18;
    }
    if ((int)uVar13 < (int)uVar12) {
      do {
        uVar26 = uVar21;
        if (0x1c < (int)uVar4) {
          do {
            if (-1 < (int)(uVar26 | uVar13) && local_13a8 != (void *)0x0) {
              uVar32 = local_16f4;
              if (local_16f4 == 0) {
                uVar32 = 0x2f8;
              }
              if ((int)uVar26 < (int)uVar32) {
                uVar32 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar32 = 400;
                }
                if ((int)uVar13 < (int)uVar32) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar13 + (ulong)uVar26 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar4 != uVar26);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar12);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar21 = 0x1c;
    if ((int)uVar4 < 0x1c) {
      uVar21 = uVar4;
    }
    uVar14 = (ulong)uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar14 = 400;
    }
    if (10 < (int)uVar14) {
      if ((int)local_6c < (int)uVar14) {
        uVar14 = (ulong)local_6c;
      }
      uVar8 = 10;
      do {
        if (((0x1c < (int)uVar4) && (local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar21 < (int)local_16f4)))) {
          uVar12 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar12 = 400;
          }
          if ((long)uVar8 < (long)(int)uVar12) {
            uVar17 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar17 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar17 = (ulong)local_16ec;
            }
            lVar27 = uVar17 * uVar8 + (ulong)(uVar21 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar14 != uVar8);
    }
    uVar21 = iVar31 + 0x1b;
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar12 = uVar4;
    if ((int)uVar21 < (int)uVar4) {
      uVar12 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar12 = uVar18;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar13 = 10;
    if ((int)uVar21 < 10) {
      uVar13 = uVar21;
    }
    if ((int)uVar25 < (int)uVar4) {
      uVar4 = uVar25;
    }
    if ((int)uVar25 < 0) {
      uVar4 = uVar18;
    }
    if ((int)local_6c < (int)uVar21) {
      uVar21 = local_6c;
    }
    if ((int)local_80 < -10) {
      uVar21 = uVar18;
    }
    if ((int)uVar13 < (int)uVar21) {
      do {
        if ((int)uVar12 < (int)uVar4) {
          uVar18 = uVar12;
          do {
            if (-1 < (int)(uVar18 | uVar13) && local_13a8 != (void *)0x0) {
              uVar25 = local_16f4;
              if (local_16f4 == 0) {
                uVar25 = 0x2f8;
              }
              if ((int)uVar18 < (int)uVar25) {
                uVar25 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar25 = 400;
                }
                if ((int)uVar13 < (int)uVar25) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar13 + (ulong)uVar18 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar4 != uVar18);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar21);
    }
    local_8c = uVar6;
    PF_PART4(local_58, 0) = local_12c8;
    if (0 < local_12cc) {
      iVar34 = 0;
      local_74 = 0;
      PF_PART4(local_58, 0) = local_12c8;
      do {
        local_38 = CONCAT44(PF_PART4(local_38, 4),iVar34);
        pcVar22 = &DAT_10008127;
        if (local_13a0 != (void *)0x0) {
          pcVar22 = (char *)((long)local_13a0 + (long)((local_12d0 + local_74) % 1000) * 0x100);
        }
        iVar31 = recovered_10006f00((long)&local_16f8,pcVar22);
        local_88 = CONCAT44(PF_PART4(local_88, 4),iVar31);
        uVar4 = (uint)local_58 - iVar31;
        iVar34 = (uint)local_38;
        if ((int)(uint)local_58 < iVar31) {
          uVar4 = 0;
          if ((int)(uint)local_38 < (int)local_68) {
            do {
              local_38 = CONCAT44(PF_PART4(local_38, 4),iVar34);
              uVar14 = (ulong)(PF_PART4(local_1378, 4) + 2);
              if ((int)PF_PART4(local_1378, 4) < 1) {
                uVar14 = 0xc;
              }
              local_40 = uVar14;
              if ((int)(uint)local_58 < 1) {
                uVar6 = 0;
LAB_10003623:
                uVar14 = strlen(pcVar22 + uVar6);
                uVar18 = (uint)uVar14;
                if ((int)(uint)local_60 < (int)(uint)uVar14) {
                  uVar8 = 0xffffffff;
                  uVar14 = 0;
                  do {
                    uVar18 = (uint)uVar8;
                    cVar2 = (pcVar22 + uVar6)[uVar14];
                    if (cVar2 == '\0') break;
                    if (cVar2 == '\t') {
                      uVar8 = uVar14 & 0xffffffff;
                    }
                    if (cVar2 == ' ') {
                      uVar8 = uVar14 & 0xffffffff;
                    }
                    uVar18 = (uint)uVar8;
                    uVar14 = uVar14 + 1;
                  } while (uVar7 != uVar14);
                  if ((int)uVar18 < 1) {
                    uVar18 = uVar7;
                  }
                }
                iVar34 = (int)local_40;
                if ((int)uVar18 < 1) goto LAB_10003686;
              }
              else {
                uVar4 = 0;
                uVar6 = 0;
                do {
                  iVar34 = (int)uVar14;
                  if (pcVar22[(int)uVar6] == '\0') break;
                  if ((int)uVar6 < 0) {
                    uVar18 = 0;
                  }
                  else {
                    uVar14 = strlen(pcVar22 + uVar6);
                    uVar18 = (uint)uVar14;
                    uVar14 = local_40;
                    if ((int)(uint)local_60 < (int)uVar18) {
                      uVar8 = 0xffffffff;
                      uVar17 = 0;
                      do {
                        uVar18 = (uint)uVar8;
                        cVar2 = (pcVar22 + uVar6)[uVar17];
                        if (cVar2 == '\0') break;
                        if (cVar2 == '\t') {
                          uVar8 = uVar17 & 0xffffffff;
                        }
                        if (cVar2 == ' ') {
                          uVar8 = uVar17 & 0xffffffff;
                        }
                        uVar18 = (uint)uVar8;
                        uVar17 = uVar17 + 1;
                      } while (uVar7 != uVar17);
                      if ((int)uVar18 < 1) {
                        uVar18 = uVar7;
                      }
                    }
                  }
                  iVar34 = (int)uVar14;
                  uVar6 = uVar6 + uVar18;
                  for (pcVar11 = pcVar22 + (int)uVar6; (*pcVar11 == ' ' || (*pcVar11 == '\t'));
                      pcVar11 = pcVar11 + 1) {
                    uVar6 = uVar6 + 1;
                  }
                  uVar4 = uVar4 + 1;
                } while (uVar4 != (uint)local_58);
                if (-1 < (int)uVar6) goto LAB_10003623;
LAB_10003686:
                uVar18 = (uint)local_60;
              }
              iVar34 = iVar34 * (uint)local_38 + 0xc;
              if ((int)PF_PART4(local_1378, 4) < 1) {
                if ((int)local_80 < iVar34) goto LAB_100037f6;
              }
              else if ((int)local_6c < (int)(PF_PART4(local_1378, 4) + iVar34)) goto LAB_100037f6;
              uVar4 = 0;
              recovered_10007d60((long)&local_16f8,0x20,iVar34,pcVar22 + (int)uVar6,uVar18,0);
              iVar34 = (uint)local_38 + 1;
              PF_PART4(local_58, 0) = (uint)local_58 + 1;
              if ((int)local_88 <= (int)(uint)local_58) {
                break;
              }
            } while (iVar34 < (int)local_68);
          }
        }
        local_74 = local_74 + 1;
        if (local_12cc <= local_74) break;
        PF_PART4(local_58, 0) = uVar4;
      } while (iVar34 < (int)local_68);
    }
LAB_100037f6:
    iVar34 = PF_PART4(local_1378, 4) + 2;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar34 = 0xc;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar4 = (uVar4 - iVar34) - 0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      uVar6 = 0x10;
      if ((int)uVar4 < 0x10) goto LAB_10003823;
    }
    else {
      uVar6 = PF_PART4(local_1378, 4) + 6;
      if ((int)uVar4 < (int)uVar6) {
LAB_10003823:
        uVar4 = uVar6;
      }
    }
    uVar14 = 0x120000000c;
    if (0x33 < uVar4) {
      uVar14 = ((ulong)uVar4 << 0x20) - 0x21fffffff4;
    }
    auVar39 = recovered_10007aa0((long)&local_16f8);
    uVar8 = PF_PART8(auVar39, 0);
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar6 = 10;
    if ((int)uVar4 < 10) {
      uVar6 = uVar4;
    }
    iVar34 = (int)(uVar14 >> 0x20);
    uVar18 = iVar34 + 10;
    if ((int)uVar18 < (int)uVar4) {
      uVar4 = uVar18;
    }
    if (iVar34 < -10) {
      uVar4 = 0;
    }
    if ((int)uVar6 < (int)uVar4) {
      uVar21 = local_16f4;
      if (local_16f4 == 0) {
        uVar21 = 0x2f8;
      }
      uVar17 = 0x16;
      if ((int)uVar21 < 0x16) {
        uVar17 = (ulong)uVar21;
      }
      uVar28 = 10;
      if ((int)uVar21 < 10) {
        uVar28 = (ulong)uVar21;
      }
      do {
        uVar20 = uVar28;
        if (10 < (int)uVar21) {
          do {
            if (-1 < (int)(uVar6 | (uint)uVar20) && local_13a8 != (void *)0x0) {
              uVar12 = local_16f4;
              if (local_16f4 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)(uint)uVar20 < (int)uVar12) {
                uVar12 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar6 < (int)uVar12) {
                  uVar29 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar29 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar29 = (ulong)local_16ec;
                  }
                  lVar27 = uVar29 * uVar6;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27) = 0xe4;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27 + 1) = 0xe4;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27 + 2) = 0xe4;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar17 != uVar20);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar4);
    }
    if (uStack_16f0 == 0 || 10 < (int)uStack_16f0) {
      uVar4 = local_16f4;
      if (local_16f4 == 0) {
        uVar4 = 0x2f8;
      }
      uVar17 = 0x16;
      if ((int)uVar4 < 0x16) {
        uVar17 = (ulong)uVar4;
      }
      if (10 < (int)uVar4) {
        uVar28 = 10;
        do {
          if (local_13a8 != (void *)0x0) {
            uVar4 = local_16f4;
            if (local_16f4 == 0) {
              uVar4 = 0x2f8;
            }
            if (((int)uVar28 < (int)uVar4) && (uStack_16f0 == 0 || 10 < (int)uStack_16f0)) {
              uVar20 = (ulong)(local_16f4 * 4);
              if (local_16f4 == 0) {
                uVar20 = 0xbe0;
              }
              if (local_16ec != 0) {
                uVar20 = (ulong)local_16ec;
              }
              lVar27 = uVar20 * 10;
              *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27) = 0xac;
              *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 1) = 0xac;
              *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 2) = 0xac;
              *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 3) = 0xff;
            }
          }
          uVar28 = uVar28 + 1;
        } while (uVar17 != uVar28);
      }
    }
    lVar27 = (uVar14 & 0xffffffff00000000) + 0x90000000a;
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar21 = (uint)((ulong)lVar27 >> 0x20);
    uVar6 = uVar4;
    if ((int)uVar21 < (int)uVar4) {
      uVar6 = uVar21;
    }
    uVar14 = (ulong)uVar6;
    if (lVar27 < 0) {
      uVar14 = 0;
    }
    if ((int)(uVar21 + 1) < (int)uVar4) {
      uVar4 = uVar21 + 1;
    }
    if ((int)uVar21 < -1) {
      uVar4 = 0;
    }
    if ((int)uVar14 < (int)uVar4) {
      uVar6 = local_16f4;
      if (local_16f4 == 0) {
        uVar6 = 0x2f8;
      }
      uVar17 = 0x16;
      if ((int)uVar6 < 0x16) {
        uVar17 = (ulong)uVar6;
      }
      uVar28 = 10;
      if ((int)uVar6 < 10) {
        uVar28 = (ulong)uVar6;
      }
      do {
        uVar21 = (uint)uVar14;
        uVar20 = uVar28;
        if (10 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar21 | (uint)uVar20) && local_13a8 != (void *)0x0) {
              uVar12 = local_16f4;
              if (local_16f4 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)(uint)uVar20 < (int)uVar12) {
                uVar12 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar21 < (int)uVar12) {
                  uVar29 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar29 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar29 = (ulong)local_16ec;
                  }
                  lVar27 = uVar29 * uVar14;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27) = 0xac;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27 + 1) = 0xac;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27 + 2) = 0xac;
                  *(undefined1 *)((long)local_13a8 + uVar20 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar17 != uVar20);
        }
        uVar14 = (ulong)(uVar21 + 1);
      } while (uVar21 + 1 != uVar4);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar6 = 10;
    if ((int)uVar4 < 10) {
      uVar6 = uVar4;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar12 = 10;
    if ((int)uVar21 < 10) {
      uVar12 = uVar21;
    }
    if ((int)uVar18 < (int)uVar21) {
      uVar21 = uVar18;
    }
    if (iVar34 < -10) {
      uVar21 = 0;
    }
    if ((int)uVar12 < (int)uVar21) {
      do {
        if (((10 < (int)uVar4) && (-1 < (int)(uVar6 | uVar12) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar6 < (int)local_16f4)))) {
          uVar7 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar7 = 400;
          }
          if ((int)uVar12 < (int)uVar7) {
            uVar14 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar14 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar14 = (ulong)local_16ec;
            }
            lVar27 = uVar14 * uVar12 + (ulong)(uVar6 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0xac;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0xac;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0xac;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar21 != uVar12);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar6 = 0x15;
    if ((int)uVar4 < 0x15) {
      uVar6 = uVar4;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar12 = 10;
    if ((int)uVar21 < 10) {
      uVar12 = uVar21;
    }
    if ((int)uVar18 < (int)uVar21) {
      uVar21 = uVar18;
    }
    if (iVar34 < -10) {
      uVar21 = 0;
    }
    if ((int)uVar12 < (int)uVar21) {
      do {
        if (((0x15 < (int)uVar4) && (-1 < (int)(uVar6 | uVar12) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar6 < (int)local_16f4)))) {
          uVar18 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar18 = 400;
          }
          if ((int)uVar12 < (int)uVar18) {
            uVar14 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar14 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar14 = (ulong)local_16ec;
            }
            lVar27 = uVar14 * uVar12 + (ulong)(uVar6 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0xac;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0xac;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0xac;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar21 != uVar12);
    }
    lVar27 = (uVar8 & 0xffffffff00000000) + 0x100000000;
    uVar4 = PF_PART4(auVar39, 0);
    uVar18 = uVar4 + 1;
    uVar6 = local_16f4;
    if (local_16f4 == 0) {
      uVar6 = 0x2f8;
    }
    uVar21 = uVar6;
    if ((int)uVar18 < (int)uVar6) {
      uVar21 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar21 = 0;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar25 = (uint)((ulong)lVar27 >> 0x20);
    uVar7 = uVar12;
    if ((int)uVar25 < (int)uVar12) {
      uVar7 = uVar25;
    }
    uVar14 = (ulong)uVar7;
    if (lVar27 < 0) {
      uVar14 = 0;
    }
    iVar34 = PF_PART4(auVar39, 8);
    uVar7 = (uVar4 + iVar34) - 1;
    if ((int)uVar7 < (int)uVar6) {
      uVar6 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar6 = 0;
    }
    uVar25 = (int)(PF_PART8(auVar39, 8) - 0x200000000 >> 0x20) + uVar25;
    if ((int)uVar25 < (int)uVar12) {
      uVar12 = uVar25;
    }
    if ((int)uVar25 < 0) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar25 = (uint)uVar14;
        uVar7 = uVar21;
        if ((int)uVar21 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar7 | uVar25) && local_13a8 != (void *)0x0) {
              uVar13 = local_16f4;
              if (local_16f4 == 0) {
                uVar13 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar13) {
                uVar13 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar13 = 400;
                }
                if ((int)uVar25 < (int)uVar13) {
                  uVar17 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar17 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar17 = (ulong)local_16ec;
                  }
                  lVar27 = uVar17 * uVar14 + (ulong)uVar7 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0xbe;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0xbe;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0xbe;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar6 != uVar7);
        }
        uVar14 = (ulong)(uVar25 + 1);
      } while (uVar25 + 1 != uVar12);
    }
    uVar6 = local_16f4;
    if (local_16f4 == 0) {
      uVar6 = 0x2f8;
    }
    uVar21 = uVar6;
    if ((int)uVar4 < (int)uVar6) {
      uVar21 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar21 = 0;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar25 = PF_PART4(auVar39, 4);
    uVar7 = uVar12;
    if ((int)uVar25 < (int)uVar12) {
      uVar7 = uVar25;
    }
    uVar14 = (ulong)uVar7;
    if ((long)uVar8 < 0) {
      uVar14 = 0;
    }
    uVar7 = iVar34 + uVar4;
    if ((int)uVar7 < (int)uVar6) {
      uVar6 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar6 = 0;
    }
    if ((int)(uVar25 + 1) < (int)uVar12) {
      uVar12 = uVar25 + 1;
    }
    if ((int)uVar25 < -1) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar26 = (uint)uVar14;
        uVar13 = uVar21;
        if ((int)uVar21 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar13 | uVar26) && local_13a8 != (void *)0x0) {
              uVar32 = local_16f4;
              if (local_16f4 == 0) {
                uVar32 = 0x2f8;
              }
              if ((int)uVar13 < (int)uVar32) {
                uVar32 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar32 = 400;
                }
                if ((int)uVar26 < (int)uVar32) {
                  uVar17 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar17 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar17 = (ulong)local_16ec;
                  }
                  lVar27 = (ulong)uVar13 * 4 + uVar17 * uVar14;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar6 != uVar13);
        }
        uVar14 = (ulong)(uVar26 + 1);
      } while (uVar26 + 1 != uVar12);
    }
    lVar27 = ((PF_PART8(auVar39, 8) & 0xffffffff00000000) + uVar8 & 0xffffffff00000000) - 0x100000000;
    uVar6 = local_16f4;
    if (local_16f4 == 0) {
      uVar6 = 0x2f8;
    }
    uVar21 = uVar6;
    if ((int)uVar4 < (int)uVar6) {
      uVar21 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar21 = 0;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar26 = (uint)((ulong)lVar27 >> 0x20);
    uVar13 = uVar12;
    if ((int)uVar26 < (int)uVar12) {
      uVar13 = uVar26;
    }
    uVar14 = (ulong)uVar13;
    if (lVar27 < 0) {
      uVar14 = 0;
    }
    if ((int)uVar7 < (int)uVar6) {
      uVar6 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar6 = 0;
    }
    if ((int)(uVar26 + 1) < (int)uVar12) {
      uVar12 = uVar26 + 1;
    }
    if ((int)uVar26 < -1) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar13 = (uint)uVar14;
        uVar7 = uVar21;
        if ((int)uVar21 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar7 | uVar13) && local_13a8 != (void *)0x0) {
              uVar26 = local_16f4;
              if (local_16f4 == 0) {
                uVar26 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar26) {
                uVar26 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar26 = 400;
                }
                if ((int)uVar13 < (int)uVar26) {
                  uVar17 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar17 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar17 = (ulong)local_16ec;
                  }
                  lVar27 = uVar17 * uVar14 + (ulong)uVar7 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar6 != uVar7);
        }
        uVar14 = (ulong)(uVar13 + 1);
      } while (uVar13 + 1 != uVar12);
    }
    uVar6 = local_16f4;
    if (local_16f4 == 0) {
      uVar6 = 0x2f8;
    }
    uVar21 = uVar6;
    if ((int)uVar4 < (int)uVar6) {
      uVar21 = uVar4;
    }
    if ((int)uVar4 < 0) {
      uVar21 = 0;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar7 = uVar12;
    if ((int)uVar25 < (int)uVar12) {
      uVar7 = uVar25;
    }
    uVar14 = (ulong)uVar7;
    if ((long)uVar8 < 0) {
      uVar14 = 0;
    }
    if ((int)uVar18 < (int)uVar6) {
      uVar6 = uVar18;
    }
    if ((int)uVar4 < -1) {
      uVar6 = 0;
    }
    uVar18 = PF_PART4(auVar39, 12) + uVar25;
    if ((int)uVar18 < (int)uVar12) {
      uVar12 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar13 = (uint)uVar14;
        uVar7 = uVar21;
        if ((int)uVar21 < (int)uVar6) {
          do {
            if (-1 < (int)(uVar7 | uVar13) && local_13a8 != (void *)0x0) {
              uVar26 = local_16f4;
              if (local_16f4 == 0) {
                uVar26 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar26) {
                uVar26 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar26 = 400;
                }
                if ((int)uVar13 < (int)uVar26) {
                  uVar17 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar17 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar17 = (ulong)local_16ec;
                  }
                  lVar27 = uVar17 * uVar14 + (ulong)uVar7 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar6 != uVar7);
        }
        uVar14 = (ulong)(uVar13 + 1);
      } while (uVar13 + 1 != uVar12);
    }
    uVar21 = (uVar4 - 1) + iVar34;
    uVar6 = local_16f4;
    if (local_16f4 == 0) {
      uVar6 = 0x2f8;
    }
    uVar12 = uVar6;
    if ((int)uVar21 < (int)uVar6) {
      uVar12 = uVar21;
    }
    if ((int)uVar21 < 0) {
      uVar12 = 0;
    }
    uVar7 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar7 = 400;
    }
    if ((int)uVar7 <= (int)uVar25) {
      uVar25 = uVar7;
    }
    if ((long)uVar8 < 0) {
      uVar25 = 0;
    }
    uVar4 = iVar34 + (uVar4 - 1) + 1;
    if ((int)uVar4 < (int)uVar6) {
      uVar6 = uVar4;
    }
    if ((int)uVar21 < -1) {
      uVar6 = 0;
    }
    if ((int)uVar18 < (int)uVar7) {
      uVar7 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar7 = 0;
    }
    if ((int)uVar25 < (int)uVar7) {
      do {
        if ((int)uVar12 < (int)uVar6) {
          uVar4 = uVar12;
          do {
            if (-1 < (int)(uVar4 | uVar25) && local_13a8 != (void *)0x0) {
              uVar18 = local_16f4;
              if (local_16f4 == 0) {
                uVar18 = 0x2f8;
              }
              if ((int)uVar4 < (int)uVar18) {
                uVar18 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar18 = 400;
                }
                if ((int)uVar25 < (int)uVar18) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar25 + (ulong)uVar4 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x74;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar6 != uVar4);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar7);
    }
    iVar34 = 0xc;
    if (0 < (int)PF_PART4(local_1378, 4)) {
      iVar34 = PF_PART4(local_1378, 4) + 2;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar6 = (uVar4 - iVar34) - 0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      uVar18 = 0x10;
      if ((int)uVar6 < 0x10) goto LAB_1000460c;
    }
    else {
      uVar18 = PF_PART4(local_1378, 4) + 6;
      if ((int)uVar6 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_1000460c:
        uVar6 = uVar18;
      }
    }
    uVar18 = uVar6 - 0x14;
    if ((int)uVar4 <= (int)(uVar6 - 0x14)) {
      uVar18 = uVar4;
    }
    uVar14 = (ulong)uVar18;
    if (uVar6 < 0x14) {
      uVar14 = 0;
    }
    uVar18 = uVar6 - 6;
    if ((int)uVar4 <= (int)(uVar6 - 6)) {
      uVar18 = uVar4;
    }
    if ((int)uVar14 < (int)uVar18) {
      uVar4 = local_16f4;
      if (local_16f4 == 0) {
        uVar4 = 0x2f8;
      }
      uVar8 = 0x16;
      if ((int)uVar4 < 0x16) {
        uVar8 = (ulong)uVar4;
      }
      uVar17 = 10;
      if ((int)uVar4 < 10) {
        uVar17 = (ulong)uVar4;
      }
      do {
        uVar6 = (uint)uVar14;
        uVar28 = uVar17;
        if (10 < (int)uVar4) {
          do {
            if (-1 < (int)(uVar6 | (uint)uVar28) && local_13a8 != (void *)0x0) {
              uVar21 = local_16f4;
              if (local_16f4 == 0) {
                uVar21 = 0x2f8;
              }
              if ((int)(uint)uVar28 < (int)uVar21) {
                uVar21 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar21 = 400;
                }
                if ((int)uVar6 < (int)uVar21) {
                  uVar20 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar20 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar20 = (ulong)local_16ec;
                  }
                  lVar27 = uVar20 * uVar14;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27) = 0xee;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 1) = 0xee;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 2) = 0xee;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar8 != uVar28);
        }
        uVar14 = (ulong)(uVar6 + 1);
      } while (uVar6 + 1 != uVar18);
    }
    iVar34 = PF_PART4(local_1378, 4) + 2;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar34 = 0xc;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar6 = (uVar4 - iVar34) - 0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      uVar18 = 0x10;
      if ((int)uVar6 < 0x10) goto LAB_10004772;
    }
    else {
      uVar18 = PF_PART4(local_1378, 4) + 6;
      if ((int)uVar6 < (int)uVar18) {
LAB_10004772:
        uVar6 = uVar18;
      }
    }
    uVar21 = (uint)(((ulong)uVar6 << 0x20) + -0x13fffffff6 >> 0x20);
    uVar18 = uVar4;
    if ((int)uVar21 < (int)uVar4) {
      uVar18 = uVar21;
    }
    uVar14 = (ulong)uVar18;
    if (uVar6 < 0x14) {
      uVar14 = 0;
    }
    if ((int)(uVar21 + 1) < (int)uVar4) {
      uVar4 = uVar21 + 1;
    }
    if ((int)uVar21 < -1) {
      uVar4 = 0;
    }
    if ((int)uVar14 < (int)uVar4) {
      uVar18 = local_16f4;
      if (local_16f4 == 0) {
        uVar18 = 0x2f8;
      }
      uVar8 = 0x16;
      if ((int)uVar18 < 0x16) {
        uVar8 = (ulong)uVar18;
      }
      uVar17 = 10;
      if ((int)uVar18 < 10) {
        uVar17 = (ulong)uVar18;
      }
      do {
        uVar12 = (uint)uVar14;
        uVar28 = uVar17;
        if (10 < (int)uVar18) {
          do {
            if (-1 < (int)(uVar12 | (uint)uVar28) && local_13a8 != (void *)0x0) {
              uVar7 = local_16f4;
              if (local_16f4 == 0) {
                uVar7 = 0x2f8;
              }
              if ((int)(uint)uVar28 < (int)uVar7) {
                uVar7 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar7 = 400;
                }
                if ((int)uVar12 < (int)uVar7) {
                  uVar20 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar20 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar20 = (ulong)local_16ec;
                  }
                  lVar27 = uVar20 * uVar14;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 1) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 2) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar8 != uVar28);
        }
        uVar14 = (ulong)(uVar12 + 1);
      } while (uVar12 + 1 != uVar4);
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar12 = (uint)(((ulong)uVar6 << 0x20) + -0x6fffffff6 >> 0x20);
    uVar18 = uVar4;
    if ((int)uVar12 < (int)uVar4) {
      uVar18 = uVar12;
    }
    uVar14 = (ulong)uVar18;
    if (uVar6 < 7) {
      uVar14 = 0;
    }
    if ((int)(uVar12 + 1) < (int)uVar4) {
      uVar4 = uVar12 + 1;
    }
    if ((int)uVar12 < -1) {
      uVar4 = 0;
    }
    if ((int)uVar14 < (int)uVar4) {
      uVar18 = local_16f4;
      if (local_16f4 == 0) {
        uVar18 = 0x2f8;
      }
      uVar8 = 0x16;
      if ((int)uVar18 < 0x16) {
        uVar8 = (ulong)uVar18;
      }
      uVar17 = 10;
      if ((int)uVar18 < 10) {
        uVar17 = (ulong)uVar18;
      }
      do {
        uVar12 = (uint)uVar14;
        uVar28 = uVar17;
        if (10 < (int)uVar18) {
          do {
            if (-1 < (int)(uVar12 | (uint)uVar28) && local_13a8 != (void *)0x0) {
              uVar7 = local_16f4;
              if (local_16f4 == 0) {
                uVar7 = 0x2f8;
              }
              if ((int)(uint)uVar28 < (int)uVar7) {
                uVar7 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar7 = 400;
                }
                if ((int)uVar12 < (int)uVar7) {
                  uVar20 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar20 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar20 = (ulong)local_16ec;
                  }
                  lVar27 = uVar20 * uVar14;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 1) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 2) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar8 != uVar28);
        }
        uVar14 = (ulong)(uVar12 + 1);
      } while (uVar12 + 1 != uVar4);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar4 < 10) {
      uVar18 = uVar4;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar7 = uVar12;
    if ((int)uVar21 < (int)uVar12) {
      uVar7 = uVar21;
    }
    uVar14 = (ulong)uVar7;
    if (uVar6 < 0x14) {
      uVar14 = 0;
    }
    uVar7 = uVar21 + 0xe;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
    if ((int)uVar21 < -0xe) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar25 = (uint)uVar14;
        if (((10 < (int)uVar4) && (-1 < (int)(uVar18 | uVar25) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar18 < (int)local_16f4)))) {
          uVar13 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar13 = 400;
          }
          if ((int)uVar25 < (int)uVar13) {
            uVar8 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar8 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar8 = (ulong)local_16ec;
            }
            lVar27 = uVar8 * uVar14 + (ulong)(uVar18 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar14 = (ulong)(uVar25 + 1);
      } while (uVar12 != uVar25 + 1);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar18 = 0x15;
    if ((int)uVar4 < 0x15) {
      uVar18 = uVar4;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar25 = uVar12;
    if ((int)uVar21 < (int)uVar12) {
      uVar25 = uVar21;
    }
    uVar14 = (ulong)uVar25;
    if (uVar6 < 0x14) {
      uVar14 = 0;
    }
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
    if ((int)uVar21 < -0xe) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar6 = (uint)uVar14;
        if (((0x15 < (int)uVar4) && (-1 < (int)(uVar18 | uVar6) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar18 < (int)local_16f4)))) {
          uVar21 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar21 = 400;
          }
          if ((int)uVar6 < (int)uVar21) {
            uVar8 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar8 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar8 = (ulong)local_16ec;
            }
            lVar27 = uVar8 * uVar14 + (ulong)(uVar18 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar14 = (ulong)(uVar6 + 1);
      } while (uVar12 != uVar6 + 1);
    }
    iVar34 = PF_PART4(local_1378, 4) + 2;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar34 = 0xc;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar6 = (uVar4 - iVar34) - 0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      uVar18 = 0x10;
      if ((int)uVar6 < 0x10) goto LAB_10004c8a;
    }
    else {
      uVar18 = PF_PART4(local_1378, 4) + 6;
      if ((int)uVar6 < (int)uVar18) {
LAB_10004c8a:
        uVar6 = uVar18;
      }
    }
    uVar18 = uVar6 - 0x10;
    if ((int)uVar4 <= (int)(uVar6 - 0x10)) {
      uVar18 = uVar4;
    }
    if (uVar6 < 0x10) {
      uVar18 = 0;
    }
    uVar21 = local_16f4;
    if (local_16f4 == 0) {
      uVar21 = 0x2f8;
    }
    uVar12 = 0x10;
    if ((int)uVar21 < 0x10) {
      uVar12 = uVar21;
    }
    if ((int)(uVar6 - 0x11) < (int)uVar4) {
      uVar4 = uVar6 - 0x11;
    }
    if (uVar6 < 0x11) {
      uVar4 = 0;
    }
    if ((int)uVar4 < (int)uVar18) {
      do {
        if (((0x10 < (int)uVar21) && (-1 < (int)(uVar12 | uVar4) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar12 < (int)local_16f4)))) {
          uVar7 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar7 = 400;
          }
          if ((int)uVar4 < (int)uVar7) {
            uVar7 = local_16f4 * 4;
            if (local_16f4 == 0) {
              uVar7 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar7 = local_16ec;
            }
            lVar27 = (ulong)uVar7 * (ulong)uVar4 + (ulong)(uVar12 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar18 != uVar4);
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar18 = uVar6 - 0x10;
    if ((int)uVar4 <= (int)(uVar6 - 0x10)) {
      uVar18 = uVar4;
    }
    if ((int)uVar6 < 0x10) {
      uVar18 = 0;
    }
    uVar21 = uVar6 - 0xf;
    if ((int)uVar21 < (int)uVar4) {
      uVar4 = uVar21;
    }
    if ((int)uVar6 < 0xf) {
      uVar4 = 0;
    }
    if ((int)uVar18 < (int)uVar4) {
      uVar12 = local_16f4;
      if (local_16f4 == 0) {
        uVar12 = 0x2f8;
      }
      uVar14 = 0x12;
      if ((int)uVar12 < 0x12) {
        uVar14 = (ulong)uVar12;
      }
      uVar8 = 0xf;
      if ((int)uVar12 < 0xf) {
        uVar8 = (ulong)uVar12;
      }
      do {
        uVar7 = (uint)(uVar8 + 1);
        if (0xf < (int)uVar12) {
          uVar17 = (ulong)uVar18;
          if ((-1 < (int)(uVar18 | (uint)uVar8) && local_13a8 != (void *)0x0) &&
             ((local_16f4 == 0 || ((int)(uint)uVar8 < (int)local_16f4)))) {
            uVar25 = uStack_16f0;
            if (uStack_16f0 == 0) {
              uVar25 = 400;
            }
            if ((int)uVar18 < (int)uVar25) {
              uVar28 = (ulong)(local_16f4 * 4);
              if (local_16f4 == 0) {
                uVar28 = 0xbe0;
              }
              if (local_16ec != 0) {
                uVar28 = (ulong)local_16ec;
              }
              lVar27 = uVar28 * uVar17 + uVar8 * 4;
              *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
              *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
              *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
              *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
            }
          }
          if (uVar8 + 1 != uVar14) {
            if (-1 < (int)(uVar18 | uVar7) && local_13a8 != (void *)0x0) {
              uVar25 = local_16f4;
              if (local_16f4 == 0) {
                uVar25 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar25) {
                uVar7 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar7 = 400;
                }
                if ((int)uVar18 < (int)uVar7) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar17 + uVar8 * 4 + 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            if ((uVar8 + 2 != uVar14) &&
               (uVar7 = (uint)(uVar8 + 2), -1 < (int)(uVar18 | uVar7) && local_13a8 != (void *)0x0))
            {
              uVar25 = local_16f4;
              if (local_16f4 == 0) {
                uVar25 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar25) {
                uVar7 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar7 = 400;
                }
                if ((int)uVar18 < (int)uVar7) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar17 + uVar8 * 4 + 8;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar4 != uVar18);
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    if ((int)uVar4 <= (int)uVar21) {
      uVar21 = uVar4;
    }
    if ((int)uVar6 < 0xf) {
      uVar21 = 0;
    }
    uVar18 = uVar6 - 0xe;
    if ((int)uVar18 < (int)uVar4) {
      uVar4 = uVar18;
    }
    if ((int)uVar6 < 0xe) {
      uVar4 = 0;
    }
    if ((int)uVar21 < (int)uVar4) {
      uVar12 = local_16f4;
      if (local_16f4 == 0) {
        uVar12 = 0x2f8;
      }
      uVar14 = 0x13;
      if ((int)uVar12 < 0x13) {
        uVar14 = (ulong)uVar12;
      }
      uVar8 = 0xe;
      if ((int)uVar12 < 0xe) {
        uVar8 = (ulong)uVar12;
      }
      do {
        uVar17 = uVar8;
        if (0xe < (int)uVar12) {
          do {
            if (-1 < (int)(uVar21 | (uint)uVar17) && local_13a8 != (void *)0x0) {
              uVar7 = local_16f4;
              if (local_16f4 == 0) {
                uVar7 = 0x2f8;
              }
              if ((int)(uint)uVar17 < (int)uVar7) {
                uVar7 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar7 = 400;
                }
                if ((int)uVar21 < (int)uVar7) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar21;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar14 != uVar17);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar4);
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    if ((int)uVar4 <= (int)uVar18) {
      uVar18 = uVar4;
    }
    if ((int)uVar6 < 0xe) {
      uVar18 = 0;
    }
    if ((int)(uVar6 - 0xd) < (int)uVar4) {
      uVar4 = uVar6 - 0xd;
    }
    if ((int)uVar6 < 0xd) {
      uVar4 = 0;
    }
    if ((int)uVar18 < (int)uVar4) {
      uVar6 = local_16f4;
      if (local_16f4 == 0) {
        uVar6 = 0x2f8;
      }
      uVar14 = 0x14;
      if ((int)uVar6 < 0x14) {
        uVar14 = (ulong)uVar6;
      }
      uVar8 = 0xd;
      if ((int)uVar6 < 0xd) {
        uVar8 = (ulong)uVar6;
      }
      do {
        uVar17 = uVar8;
        if (0xd < (int)uVar6) {
          do {
            if (-1 < (int)(uVar18 | (uint)uVar17) && local_13a8 != (void *)0x0) {
              uVar21 = local_16f4;
              if (local_16f4 == 0) {
                uVar21 = 0x2f8;
              }
              if ((int)(uint)uVar17 < (int)uVar21) {
                uVar21 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar21 = 400;
                }
                if ((int)uVar18 < (int)uVar21) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar18;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar14 != uVar17);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar4);
    }
    iVar34 = 0xc;
    if (0 < (int)PF_PART4(local_1378, 4)) {
      iVar34 = PF_PART4(local_1378, 4) + 2;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    iVar34 = (uVar4 - iVar34) + -0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar31 = 0x10;
      if (iVar34 < 0x10) goto LAB_10005311;
    }
    else {
      iVar31 = PF_PART4(local_1378, 4) + 6;
      if (iVar34 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_10005311:
        iVar34 = iVar31;
      }
    }
    uVar6 = iVar34 - 4;
    uVar18 = iVar34 + 10U;
    if ((int)uVar4 <= (int)(iVar34 + 10U)) {
      uVar18 = uVar4;
    }
    if ((int)uVar6 < (int)uVar18) {
      uVar4 = local_16f4;
      if (local_16f4 == 0) {
        uVar4 = 0x2f8;
      }
      uVar14 = 0x16;
      if ((int)uVar4 < 0x16) {
        uVar14 = (ulong)uVar4;
      }
      uVar8 = 10;
      if ((int)uVar4 < 10) {
        uVar8 = (ulong)uVar4;
      }
      do {
        uVar17 = uVar8;
        if (10 < (int)uVar4) {
          do {
            if (-1 < (int)(uVar6 | (uint)uVar17) && local_13a8 != (void *)0x0) {
              uVar21 = local_16f4;
              if (local_16f4 == 0) {
                uVar21 = 0x2f8;
              }
              if ((int)(uint)uVar17 < (int)uVar21) {
                uVar21 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar21 = 400;
                }
                if ((int)uVar6 < (int)uVar21) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar6;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27) = 0xee;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 1) = 0xee;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 2) = 0xee;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar14 != uVar17);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar18);
    }
    iVar34 = PF_PART4(local_1378, 4) + 2;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar34 = 0xc;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar6 = (uVar4 - iVar34) - 0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      uVar18 = 0x10;
      if ((int)uVar6 < 0x10) goto LAB_10005463;
    }
    else {
      uVar18 = PF_PART4(local_1378, 4) + 6;
      if ((int)uVar6 < (int)uVar18) {
LAB_10005463:
        uVar6 = uVar18;
      }
    }
    uVar14 = ((ulong)uVar6 << 0x20) - 0x3fffffff6;
    uVar18 = (uint)(uVar14 >> 0x20);
    if ((int)uVar18 < (int)uVar4) {
      uVar4 = local_16f4;
      if (local_16f4 == 0) {
        uVar4 = 0x2f8;
      }
      uVar8 = 0x16;
      if ((int)uVar4 < 0x16) {
        uVar8 = (ulong)uVar4;
      }
      if (10 < (int)uVar4) {
        uVar17 = 10;
        do {
          if (-1 < (int)((uint)uVar17 | uVar18) && local_13a8 != (void *)0x0) {
            uVar4 = local_16f4;
            if (local_16f4 == 0) {
              uVar4 = 0x2f8;
            }
            if ((int)(uint)uVar17 < (int)uVar4) {
              uVar4 = uStack_16f0;
              if (uStack_16f0 == 0) {
                uVar4 = 400;
              }
              if ((int)uVar18 < (int)uVar4) {
                uVar28 = (ulong)(local_16f4 * 4);
                if (local_16f4 == 0) {
                  uVar28 = 0xbe0;
                }
                if (local_16ec != 0) {
                  uVar28 = (ulong)local_16ec;
                }
                lVar27 = uVar28 * (uVar14 >> 0x20);
                *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27) = 0x96;
                *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 1) = 0x96;
                *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 2) = 0x96;
                *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 3) = 0xff;
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    lVar27 = ((ulong)uVar6 << 0x20) + 0x90000000a;
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar12 = (uint)((ulong)lVar27 >> 0x20);
    uVar21 = uVar4;
    if ((int)uVar12 < (int)uVar4) {
      uVar21 = uVar12;
    }
    uVar14 = (ulong)uVar21;
    if (lVar27 < 0) {
      uVar14 = 0;
    }
    if ((int)(uVar12 + 1) < (int)uVar4) {
      uVar4 = uVar12 + 1;
    }
    if ((int)uVar12 < -1) {
      uVar4 = 0;
    }
    if ((int)uVar14 < (int)uVar4) {
      uVar21 = local_16f4;
      if (local_16f4 == 0) {
        uVar21 = 0x2f8;
      }
      uVar8 = 0x16;
      if ((int)uVar21 < 0x16) {
        uVar8 = (ulong)uVar21;
      }
      uVar17 = 10;
      if ((int)uVar21 < 10) {
        uVar17 = (ulong)uVar21;
      }
      do {
        uVar12 = (uint)uVar14;
        uVar28 = uVar17;
        if (10 < (int)uVar21) {
          do {
            if (-1 < (int)(uVar12 | (uint)uVar28) && local_13a8 != (void *)0x0) {
              uVar7 = local_16f4;
              if (local_16f4 == 0) {
                uVar7 = 0x2f8;
              }
              if ((int)(uint)uVar28 < (int)uVar7) {
                uVar7 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar7 = 400;
                }
                if ((int)uVar12 < (int)uVar7) {
                  uVar20 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar20 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar20 = (ulong)local_16ec;
                  }
                  lVar27 = uVar20 * uVar14;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 1) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 2) = 0x96;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar8 != uVar28);
        }
        uVar14 = (ulong)(uVar12 + 1);
      } while (uVar12 + 1 != uVar4);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar21 = 10;
    if ((int)uVar4 < 10) {
      uVar21 = uVar4;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar7 = uVar12;
    if ((int)uVar18 < (int)uVar12) {
      uVar7 = uVar18;
    }
    uVar25 = uVar18 + 0xe;
    if ((int)uVar25 < (int)uVar12) {
      uVar12 = uVar25;
    }
    if ((int)uVar18 < -0xe) {
      uVar12 = 0;
    }
    if ((int)uVar7 < (int)uVar12) {
      do {
        if (((10 < (int)uVar4) && (-1 < (int)(uVar21 | uVar7) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar21 < (int)local_16f4)))) {
          uVar13 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar13 = 400;
          }
          if ((int)uVar7 < (int)uVar13) {
            uVar14 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar14 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar14 = (ulong)local_16ec;
            }
            lVar27 = uVar14 * uVar7 + (ulong)(uVar21 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar12 != uVar7);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar21 = 0x15;
    if ((int)uVar4 < 0x15) {
      uVar21 = uVar4;
    }
    uVar12 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar12 = 400;
    }
    uVar7 = uVar12;
    if ((int)uVar18 < (int)uVar12) {
      uVar7 = uVar18;
    }
    uVar14 = (ulong)uVar7;
    if (uVar6 < 4) {
      uVar14 = 0;
    }
    if ((int)uVar25 < (int)uVar12) {
      uVar12 = uVar25;
    }
    if ((int)uVar18 < -0xe) {
      uVar12 = 0;
    }
    if ((int)uVar14 < (int)uVar12) {
      do {
        uVar6 = (uint)uVar14;
        if (((0x15 < (int)uVar4) && (-1 < (int)(uVar21 | uVar6) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar21 < (int)local_16f4)))) {
          uVar18 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar18 = 400;
          }
          if ((int)uVar6 < (int)uVar18) {
            uVar8 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar8 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar8 = (ulong)local_16ec;
            }
            lVar27 = uVar8 * uVar14 + (ulong)(uVar21 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x96;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar14 = (ulong)(uVar6 + 1);
      } while (uVar12 != uVar6 + 1);
    }
    iVar34 = PF_PART4(local_1378, 4) + 2;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar34 = 0xc;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    iVar34 = (uVar4 - iVar34) + -0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar31 = 0x10;
      if (iVar34 < 0x10) goto LAB_10005987;
    }
    else {
      iVar31 = PF_PART4(local_1378, 4) + 6;
      if (iVar34 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_10005987:
        iVar34 = iVar31;
      }
    }
    uVar6 = iVar34 + 1U;
    if ((int)uVar4 <= (int)(iVar34 + 1U)) {
      uVar6 = uVar4;
    }
    uVar18 = iVar34 + 2;
    if ((int)uVar18 < (int)uVar4) {
      uVar4 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar6 < (int)uVar4) {
      uVar21 = local_16f4;
      if (local_16f4 == 0) {
        uVar21 = 0x2f8;
      }
      uVar14 = 0x14;
      if ((int)uVar21 < 0x14) {
        uVar14 = (ulong)uVar21;
      }
      uVar8 = 0xd;
      if ((int)uVar21 < 0xd) {
        uVar8 = (ulong)uVar21;
      }
      do {
        uVar17 = uVar8;
        if (0xd < (int)uVar21) {
          do {
            if (-1 < (int)(uVar6 | (uint)uVar17) && local_13a8 != (void *)0x0) {
              uVar12 = local_16f4;
              if (local_16f4 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)(uint)uVar17 < (int)uVar12) {
                uVar12 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar6 < (int)uVar12) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar6;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar17 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar14 != uVar17);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar4);
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar6 = uVar4;
    if ((int)uVar18 < (int)uVar4) {
      uVar6 = uVar18;
    }
    uVar14 = (ulong)uVar6;
    if ((int)uVar18 < 0) {
      uVar14 = 0;
    }
    uVar6 = iVar34 + 3;
    if ((int)uVar6 < (int)uVar4) {
      uVar4 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar14 < (int)uVar4) {
      uVar18 = local_16f4;
      if (local_16f4 == 0) {
        uVar18 = 0x2f8;
      }
      uVar8 = 0x13;
      if ((int)uVar18 < 0x13) {
        uVar8 = (ulong)uVar18;
      }
      uVar17 = 0xe;
      if ((int)uVar18 < 0xe) {
        uVar17 = (ulong)uVar18;
      }
      do {
        uVar21 = (uint)uVar14;
        uVar28 = uVar17;
        if (0xe < (int)uVar18) {
          do {
            if (-1 < (int)(uVar21 | (uint)uVar28) && local_13a8 != (void *)0x0) {
              uVar12 = local_16f4;
              if (local_16f4 == 0) {
                uVar12 = 0x2f8;
              }
              if ((int)(uint)uVar28 < (int)uVar12) {
                uVar12 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar21 < (int)uVar12) {
                  uVar20 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar20 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar20 = (ulong)local_16ec;
                  }
                  lVar27 = uVar20 * uVar14;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + uVar28 * 4 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar8 != uVar28);
        }
        uVar14 = (ulong)(uVar21 + 1);
      } while (uVar21 + 1 != uVar4);
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    uVar18 = uVar4;
    if ((int)uVar6 < (int)uVar4) {
      uVar18 = uVar6;
    }
    uVar14 = (ulong)uVar18;
    if ((int)uVar6 < 0) {
      uVar14 = 0;
    }
    uVar6 = iVar34 + 4;
    if ((int)uVar6 < (int)uVar4) {
      uVar4 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar14 < (int)uVar4) {
      uVar18 = local_16f4;
      if (local_16f4 == 0) {
        uVar18 = 0x2f8;
      }
      uVar8 = 0x12;
      if ((int)uVar18 < 0x12) {
        uVar8 = (ulong)uVar18;
      }
      uVar17 = 0xf;
      if ((int)uVar18 < 0xf) {
        uVar17 = (ulong)uVar18;
      }
      do {
        uVar21 = (uint)uVar14;
        uVar12 = (uint)(uVar17 + 1);
        if (0xf < (int)uVar18) {
          if ((-1 < (int)(uVar21 | (uint)uVar17) && local_13a8 != (void *)0x0) &&
             ((local_16f4 == 0 || ((int)(uint)uVar17 < (int)local_16f4)))) {
            uVar7 = uStack_16f0;
            if (uStack_16f0 == 0) {
              uVar7 = 400;
            }
            if ((int)uVar21 < (int)uVar7) {
              uVar28 = (ulong)(local_16f4 * 4);
              if (local_16f4 == 0) {
                uVar28 = 0xbe0;
              }
              if (local_16ec != 0) {
                uVar28 = (ulong)local_16ec;
              }
              lVar27 = uVar28 * uVar14 + uVar17 * 4;
              *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
              *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
              *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
              *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
            }
          }
          if (uVar17 + 1 != uVar8) {
            if (-1 < (int)(uVar21 | uVar12) && local_13a8 != (void *)0x0) {
              uVar7 = local_16f4;
              if (local_16f4 == 0) {
                uVar7 = 0x2f8;
              }
              if ((int)uVar12 < (int)uVar7) {
                uVar12 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar21 < (int)uVar12) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar14 + uVar17 * 4 + 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            if ((uVar17 + 2 != uVar8) &&
               (uVar12 = (uint)(uVar17 + 2),
               -1 < (int)(uVar21 | uVar12) && local_13a8 != (void *)0x0)) {
              uVar7 = local_16f4;
              if (local_16f4 == 0) {
                uVar7 = 0x2f8;
              }
              if ((int)uVar12 < (int)uVar7) {
                uVar12 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar12 = 400;
                }
                if ((int)uVar21 < (int)uVar12) {
                  uVar28 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar28 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar28 = (ulong)local_16ec;
                  }
                  lVar27 = uVar28 * uVar14 + uVar17 * 4 + 8;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
          }
        }
        uVar14 = (ulong)(uVar21 + 1);
      } while (uVar4 != uVar21 + 1);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar18 = 0x10;
    if ((int)uVar4 < 0x10) {
      uVar18 = uVar4;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar12 = uVar21;
    if ((int)uVar6 < (int)uVar21) {
      uVar12 = uVar6;
    }
    uVar14 = (ulong)uVar12;
    if ((int)uVar6 < 0) {
      uVar14 = 0;
    }
    uVar6 = iVar34 + 5;
    if ((int)uVar6 < (int)uVar21) {
      uVar21 = uVar6;
    }
    if ((int)uVar6 < 0) {
      uVar21 = 0;
    }
    if ((int)uVar14 < (int)uVar21) {
      do {
        uVar6 = (uint)uVar14;
        if (((0x10 < (int)uVar4) && (-1 < (int)(uVar18 | uVar6) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar18 < (int)local_16f4)))) {
          uVar12 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar12 = 400;
          }
          if ((int)uVar6 < (int)uVar12) {
            uVar8 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar8 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar8 = (ulong)local_16ec;
            }
            lVar27 = uVar8 * uVar14 + (ulong)(uVar18 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0x46;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0x46;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0x46;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar14 = (ulong)(uVar6 + 1);
      } while (uVar21 != uVar6 + 1);
    }
    local_60 = (ulong)PF_PART4(local_1378, 4);
    iVar34 = PF_PART4(local_1378, 4) + 2;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar34 = 0xc;
    }
    uVar4 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar4 = 400;
    }
    iVar34 = (uVar4 - iVar34) + -0x26;
    if ((int)PF_PART4(local_1378, 4) < 1) {
      iVar31 = 0x10;
      if (iVar34 < 0x10) goto LAB_10006020;
    }
    else {
      iVar31 = PF_PART4(local_1378, 4) + 6;
      if (iVar34 < (int)(PF_PART4(local_1378, 4) + 6)) {
LAB_10006020:
        iVar34 = iVar31;
      }
    }
    uVar6 = iVar34 + 0x12;
    local_58 = (ulong)uVar6;
    uVar18 = local_16f4 - 0x14;
    if (local_16f4 == 0) {
      uVar18 = 0x2e4;
    }
    uVar21 = (uVar4 - uVar6) - 10;
    local_38 = (ulong)uVar21;
    uVar12 = (int)local_1378 + 8;
    if ((int)local_1378 < 1) {
      uVar12 = 0xe;
    }
    if ((int)uVar12 < (int)uVar18) {
      uVar12 = uVar18;
    }
    if ((int)PF_PART4(local_1378, 4) < 1) {
      if ((int)(uVar4 - uVar6) < 0x1c) {
        uVar8 = 0x1200000000;
        local_40 = (ulong)uVar12 | 0x1200000000;
        local_60 = 10;
        uVar14 = 0x12;
        goto LAB_100060e1;
      }
      uVar8 = local_38 << 0x20;
      local_40 = CONCAT44(uVar21,uVar12);
      local_60 = 10;
    }
    else {
      uVar14 = local_60 + 8;
      if ((int)uVar21 < (int)uVar14) {
        uVar8 = uVar14 << 0x20;
        local_40 = uVar12 | uVar8;
LAB_100060e1:
        local_38 = uVar14;
      }
      else {
        uVar8 = local_38 << 0x20;
        local_40 = CONCAT44(uVar21,uVar12);
      }
    }
    uVar18 = local_16f4;
    if (local_16f4 == 0) {
      uVar18 = 0x2f8;
    }
    uVar21 = 10;
    if ((int)uVar18 < 10) {
      uVar21 = uVar18;
    }
    iVar31 = (int)local_40;
    uVar7 = iVar31 + 10;
    local_68 = CONCAT44(PF_PART4(local_68, 4),uVar7);
    if ((int)uVar7 < (int)uVar18) {
      uVar18 = uVar7;
    }
    if (iVar31 < -10) {
      uVar18 = 0;
    }
    uVar25 = (int)(local_40 >> 0x20) + uVar6;
    if ((int)uVar4 <= (int)uVar25) {
      uVar25 = uVar4;
    }
    if ((int)uVar6 < (int)uVar25) {
      uVar14 = local_58;
      do {
        uVar4 = (uint)uVar14;
        if ((int)uVar21 < (int)uVar18) {
          uVar13 = uVar21;
          do {
            if (-1 < (int)(uVar13 | uVar4) && local_13a8 != (void *)0x0) {
              uVar26 = local_16f4;
              if (local_16f4 == 0) {
                uVar26 = 0x2f8;
              }
              if ((int)uVar13 < (int)uVar26) {
                uVar26 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar26 = 400;
                }
                if ((int)uVar4 < (int)uVar26) {
                  uVar17 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar17 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar17 = (ulong)local_16ec;
                  }
                  lVar27 = (ulong)uVar13 * 4 + uVar17 * uVar14;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0x8e;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0xba;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0xdc;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xd9;
                }
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar18 != uVar13);
        }
        uVar14 = (ulong)(uVar4 + 1);
      } while (uVar4 + 1 != uVar25);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar4 < 10) {
      uVar18 = uVar4;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar25 = uVar21;
    if ((int)uVar6 < (int)uVar21) {
      uVar25 = uVar6;
    }
    uVar13 = uVar12 + 10;
    if ((int)uVar13 < (int)uVar4) {
      uVar4 = uVar13;
    }
    if ((int)uVar12 < -10) {
      uVar4 = 0;
    }
    if ((int)(iVar34 + 0x13U) < (int)uVar21) {
      uVar21 = iVar34 + 0x13U;
    }
    if (iVar34 < -0x13) {
      uVar21 = 0;
    }
    if ((int)uVar25 < (int)uVar21) {
      do {
        if ((int)uVar18 < (int)uVar4) {
          uVar12 = uVar18;
          do {
            if (-1 < (int)(uVar12 | uVar25) && local_13a8 != (void *)0x0) {
              uVar26 = local_16f4;
              if (local_16f4 == 0) {
                uVar26 = 0x2f8;
              }
              if ((int)uVar12 < (int)uVar26) {
                uVar26 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar26 = 400;
                }
                if ((int)uVar25 < (int)uVar26) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar25 + (ulong)uVar12 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar4 != uVar12);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar21);
    }
    lVar27 = (local_58 << 0x20) + uVar8 + -0xfffffff6LL;
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar4 < 10) {
      uVar18 = uVar4;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar25 = (uint)((ulong)lVar27 >> 0x20);
    uVar12 = uVar21;
    if ((int)uVar25 < (int)uVar21) {
      uVar12 = uVar25;
    }
    if (lVar27 < 0) {
      uVar12 = 0;
    }
    if ((int)uVar13 < (int)uVar4) {
      uVar4 = uVar13;
    }
    if ((int)(uVar25 + 1) < (int)uVar21) {
      uVar21 = uVar25 + 1;
    }
    if ((int)uVar25 < -1) {
      uVar21 = 0;
    }
    if ((int)uVar12 < (int)uVar21) {
      do {
        if (10 < (int)uVar4) {
          uVar25 = uVar18;
          do {
            if (-1 < (int)(uVar25 | uVar12) && local_13a8 != (void *)0x0) {
              uVar13 = local_16f4;
              if (local_16f4 == 0) {
                uVar13 = 0x2f8;
              }
              if ((int)uVar25 < (int)uVar13) {
                uVar13 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar13 = 400;
                }
                if ((int)uVar12 < (int)uVar13) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar12 + (ulong)uVar25 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar25 = uVar25 + 1;
          } while (uVar4 != uVar25);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar21);
    }
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar18 = 10;
    if ((int)uVar4 < 10) {
      uVar18 = uVar4;
    }
    uVar21 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar21 = 400;
    }
    uVar12 = uVar21;
    if ((int)uVar6 < (int)uVar21) {
      uVar12 = uVar6;
    }
    uVar25 = (int)(uVar8 >> 0x20) + uVar6;
    if ((int)uVar25 < (int)uVar21) {
      uVar21 = uVar25;
    }
    if ((int)uVar25 < 0) {
      uVar21 = 0;
    }
    if ((int)uVar12 < (int)uVar21) {
      do {
        if (((10 < (int)uVar4) && (-1 < (int)(uVar18 | uVar12) && local_13a8 != (void *)0x0)) &&
           ((local_16f4 == 0 || ((int)uVar18 < (int)local_16f4)))) {
          uVar13 = uStack_16f0;
          if (uStack_16f0 == 0) {
            uVar13 = 400;
          }
          if ((int)uVar12 < (int)uVar13) {
            uVar14 = (ulong)(local_16f4 * 4);
            if (local_16f4 == 0) {
              uVar14 = 0xbe0;
            }
            if (local_16ec != 0) {
              uVar14 = (ulong)local_16ec;
            }
            lVar27 = uVar14 * uVar12 + (ulong)(uVar18 * 4);
            *(undefined1 *)((long)local_13a8 + lVar27) = 0;
            *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
            *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
            *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar21 != uVar12);
    }
    uVar18 = iVar31 + 9;
    uVar4 = local_16f4;
    if (local_16f4 == 0) {
      uVar4 = 0x2f8;
    }
    uVar21 = uVar4;
    if ((int)uVar18 < (int)uVar4) {
      uVar21 = uVar18;
    }
    if ((int)uVar18 < 0) {
      uVar21 = 0;
    }
    uVar18 = uStack_16f0;
    if (uStack_16f0 == 0) {
      uVar18 = 400;
    }
    if ((int)uVar7 < (int)uVar4) {
      uVar4 = uVar7;
    }
    if ((int)uVar7 < 0) {
      uVar4 = 0;
    }
    if ((int)uVar25 < (int)uVar18) {
      uVar18 = uVar25;
    }
    uVar12 = uVar6;
    if ((int)uVar6 < (int)uVar18) {
      do {
        uVar7 = uVar21;
        if ((int)uVar21 < (int)uVar4) {
          do {
            if (-1 < (int)(uVar7 | uVar12) && local_13a8 != (void *)0x0) {
              uVar25 = local_16f4;
              if (local_16f4 == 0) {
                uVar25 = 0x2f8;
              }
              if ((int)uVar7 < (int)uVar25) {
                uVar25 = uStack_16f0;
                if (uStack_16f0 == 0) {
                  uVar25 = 400;
                }
                if ((int)uVar12 < (int)uVar25) {
                  uVar14 = (ulong)(local_16f4 * 4);
                  if (local_16f4 == 0) {
                    uVar14 = 0xbe0;
                  }
                  if (local_16ec != 0) {
                    uVar14 = (ulong)local_16ec;
                  }
                  lVar27 = uVar14 * uVar12 + (ulong)uVar7 * 4;
                  *(undefined1 *)((long)local_13a8 + lVar27) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
                  *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
          } while (uVar4 != uVar7);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar18);
    }
    iVar31 = (int)((int)local_38 - (uint)local_60) / 2 + uVar6;
    recovered_10007850((char *)local_1af8,0x120,local_1370);
    iVar34 = (int)local_1378;
    if ((int)local_1378 < 1) {
      iVar34 = 6;
    }
    recovered_10007d60((long)&local_16f8,0xe,iVar31,(char *)local_1af8,
                       ((int)local_40 + -10) / iVar34,0);
    if (((local_1390 & 6) == 2) && ((local_12c4 & 0x1000) == 0)) {
      uVar14 = strlen((char *)local_1af8);
      iVar34 = 6;
      if (0 < (int)local_1378) {
        iVar34 = (int)local_1378;
      }
      iVar34 = iVar34 * (int)uVar14;
      iVar5 = PF_PART4(local_1378, 4);
      if ((int)PF_PART4(local_1378, 4) < 1) {
        iVar5 = 10;
      }
      iVar35 = (int)local_1378 + -1;
      if ((int)local_1378 < 2) {
        iVar35 = 5;
      }
      uVar4 = local_16f4;
      if (local_16f4 == 0) {
        uVar4 = 0x2f8;
      }
      uVar6 = iVar34 + 0xeU;
      if ((int)uVar4 <= (int)(iVar34 + 0xeU)) {
        uVar6 = uVar4;
      }
      uVar18 = (iVar31 + iVar5) - 1;
      if (iVar34 < -0xe) {
        uVar6 = 0;
      }
      uVar21 = uStack_16f0;
      if (uStack_16f0 == 0) {
        uVar21 = 400;
      }
      uVar12 = uVar21;
      if ((int)uVar18 < (int)uVar21) {
        uVar12 = uVar18;
      }
      uVar14 = (ulong)uVar12;
      if ((int)uVar18 < 0) {
        uVar14 = 0;
      }
      uVar12 = iVar34 + iVar35 + 0xe;
      if ((int)uVar12 < (int)uVar4) {
        uVar4 = uVar12;
      }
      if ((int)uVar12 < 0) {
        uVar4 = 0;
      }
      uVar12 = iVar5 + iVar31 + 1;
      if ((int)uVar12 < (int)uVar21) {
        uVar21 = uVar12;
      }
      if ((int)uVar18 < -2) {
        uVar21 = 0;
      }
      if ((int)uVar14 < (int)uVar21) {
        do {
          uVar12 = (uint)uVar14;
          uVar18 = uVar6;
          if ((int)uVar6 < (int)uVar4) {
            do {
              if (-1 < (int)(uVar18 | uVar12) && local_13a8 != (void *)0x0) {
                uVar7 = local_16f4;
                if (local_16f4 == 0) {
                  uVar7 = 0x2f8;
                }
                if ((int)uVar18 < (int)uVar7) {
                  uVar7 = uStack_16f0;
                  if (uStack_16f0 == 0) {
                    uVar7 = 400;
                  }
                  if ((int)uVar12 < (int)uVar7) {
                    uVar8 = (ulong)(local_16f4 * 4);
                    if (local_16f4 == 0) {
                      uVar8 = 0xbe0;
                    }
                    if (local_16ec != 0) {
                      uVar8 = (ulong)local_16ec;
                    }
                    lVar27 = uVar8 * uVar14 + (ulong)uVar18 * 4;
                    *(undefined1 *)((long)local_13a8 + lVar27) = 0;
                    *(undefined1 *)((long)local_13a8 + lVar27 + 1) = 0;
                    *(undefined1 *)((long)local_13a8 + lVar27 + 2) = 0;
                    *(undefined1 *)((long)local_13a8 + lVar27 + 3) = 0xff;
                  }
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar4 != uVar18);
          }
          uVar14 = (ulong)(uVar12 + 1);
        } while (uVar12 + 1 != uVar21);
      }
    }
    terror_ui_window_present(&local_16f8,str_10008120,local_13a8,local_16f4,uStack_16f0,local_16ec,
                       0x4c91c4);
    local_12c4 = local_12c4 + 1;
    local_60 = local_60 & 0xffffffff00000000;
    if ((char)local_8c != '\0') goto LAB_100068ad;
  }
  iVar34 = 0x18;
  if (local_70 == 2) {
    iVar34 = 6;
  }
  do {
    iVar31 = Ram0000000000006800;
    if ((((iVar31 == 0x50414d57) && (iVar31 = Ram0000000000006804, iVar31 != 0)) &&
        (uVar4 = Ram0000000000006808, 0xb < uVar4)) && (uVar4 = Ram0000000000006808, 0x9f < uVar4))
    {
      uVar4 = UINT_0000689c;
      if ((code *)(ulong)uVar4 != (code *)0x0) {
        (*(code *)(ulong)uVar4)();
      }
    }
    iVar34 = iVar34 + -1;
  } while (iVar34 != 0);
LAB_100068ad:
  iVar34 = Ram0000000000006800;
  if (((iVar34 == 0x50414d57) && (iVar34 = Ram0000000000006804, iVar34 != 0)) &&
     ((uVar4 = Ram0000000000006808, 0xb < uVar4 && (uVar4 = Ram0000000000006808, 0x9f < uVar4)))) {
    uVar4 = UINT_0000689c;
    if ((code *)(ulong)uVar4 != (code *)0x0) {
      (*(code *)(ulong)uVar4)();
    }
  }
  uVar4 = local_90;
  if (local_12bb == '\0') {
LAB_10006c3f:
    if (local_16f8 != 0) {
      terror_ui_window_close(&local_16f8);
    }
    if (local_13a0 == (void *)0x0) {
      return 1;
    }
    iVar34 = Ram0000000000006800;
    if (iVar34 != 0x50414d57) {
      return 1;
    }
    iVar34 = Ram0000000000006804;
    if (iVar34 == 0) {
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
    (*(code *)(ulong)uVar4)(local_13a0);
    return 1;
  }
  goto LAB_100008ca;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006950
#undef DAT_100080c0
#undef DAT_100080d0
#undef DAT_100080e0
#undef DAT_100080f0
#undef DAT_10008127
#undef DAT_10008148
#undef DAT_10008171
#undef DAT_100081aa
#undef DAT_100081ae
#undef DAT_100081b3
#undef DAT_100081b7
#undef DAT_100081bc
#undef DAT_100081c1
#undef DAT_100081c5
#undef DAT_100081cc
#undef DAT_100081d3
#undef DAT_100081e1
#undef DAT_100081e6
#undef DAT_100081eb
#undef DAT_100081f0
#undef DAT_100081f4
#undef DAT_100081f9
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef Ram0000000000006950
#undef UINT_00006828
#undef UINT_0000682c
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006890
#undef UINT_00006894
#undef UINT_0000689c
#undef UINT_00006978
#undef UNK_100080e4
#undef UNK_100080e8
#undef UNK_100080ec
#undef UNK_100080f4
#undef UNK_100080f8
#undef UNK_100080fc
#undef _DAT_100080d0
#undef _DAT_100080e0
#undef _DAT_100080f0
#undef iRam00000000100080e8
#undef iRam00000000100080ec
#undef iRam00000000100080f4
#undef str_10008100
#undef str_10008120
#undef str_10008128
#undef str_10008138
#undef str_1000814a
#undef str_10008150
#undef str_10008174
#undef str_10008183
#undef uRam00000000100080e4
#undef uRam00000000100080f8
#undef uRam00000000100080fc
#undef uStack_50
#undef local_1af8
#undef local_1af4
#undef local_1ae4
#undef local_1ad0
#undef local_1acc
#undef local_1ac4
#undef local_1ac0
#undef local_1abc
#undef local_1ab8
#undef local_16f8
#undef local_16f4
#undef local_16ec
#undef local_16c8
#undef local_13a8
#undef local_13a0
#undef local_1398
#undef local_1390
#undef local_138c
#undef local_1384
#undef local_1380
#undef local_137f
#undef local_137c
#undef local_1378
#undef local_1370
#undef local_12d0
#undef local_12cc
#undef local_12c8
#undef local_12c4
#undef local_12c0
#undef iStack_1ae0
#undef local_12bc
#undef local_12bb
#undef local_12b8
#undef local_12b4
#undef local_12b0
#undef local_12ac
#undef local_12a8
#undef local_10a8
#undef local_a8
#undef local_9c
#undef uStack_16f0
#undef local_98
#undef local_90
#undef local_8c
#undef local_88
#undef local_80
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_60
#undef local_58
#undef local_40
#undef local_38

#undef DAT_10008127
#define DAT_10008127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006da0
 */

void recovered_10006da0(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;

  pbVar6 = &DAT_10008127;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x358) != 0)) {
    iVar3 = *(int *)(param_1 + 0x42c);
    if (iVar3 < 1000) {
      iVar2 = *(int *)(param_1 + 0x428) + iVar3;
      *(int *)(param_1 + 0x42c) = iVar3 + 1;
    }
    else {
      iVar1 = recovered_10006f00(param_1,(char *)(*(long *)(param_1 + 0x358) +
                                                 (long)(*(int *)(param_1 + 0x428) % 1000) * 0x100));
      iVar3 = *(int *)(param_1 + 0x428) + ((*(int *)(param_1 + 0x428) + 1) / 1000) * -1000 + 1;
      *(int *)(param_1 + 0x428) = iVar3;
      iVar2 = iVar3 + *(int *)(param_1 + 0x42c) + -1;
      iVar3 = *(int *)(param_1 + 0x430) - iVar1;
      if (iVar3 == 0 || *(int *)(param_1 + 0x430) < iVar1) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x430) = iVar3;
    }
    bVar5 = *pbVar6;
    if (bVar5 == 0) {
      uVar4 = (ulong)(-(iVar2 >> 0x1f) ^ (uint)(iVar2 >> 0x1f) >> 0x1f);
    }
    else {
      uVar4 = 0;
      do {
        if (bVar5 < 0x21) {
          bVar5 = 0x20;
        }
        *(byte *)(uVar4 + *(long *)(param_1 + 0x358) + (long)(iVar2 % 1000) * 0x100) = bVar5;
        bVar5 = pbVar6[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while ((bVar5 != 0) && (uVar4 < 0xff));
    }
    *(undefined1 *)(uVar4 + (long)(iVar2 % 1000) * 0x100 + *(long *)(param_1 + 0x358)) = 0;
  }
  return;
}

#undef DAT_10008127

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f00
 */

int recovered_10006f00(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;

  if (param_1 == 0) {
    uVar4 = 0x77;
  }
  else {
    iVar9 = 0x2d2;
    if (*(int *)(param_1 + 4) != 0) {
      iVar9 = *(int *)(param_1 + 4) + -0x26;
    }
    iVar2 = *(int *)(param_1 + 0x380);
    iVar3 = 0xe;
    if (0 < iVar2) {
      iVar3 = iVar2 + 8;
    }
    iVar10 = 6;
    if (0 < iVar2) {
      iVar10 = iVar2;
    }
    if (iVar3 < iVar9) {
      iVar3 = iVar9;
    }
    uVar4 = (iVar3 + -8) / iVar10;
  }
  uVar7 = 1;
  if (1 < (int)uVar4) {
    uVar7 = uVar4;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 1;
  }
  iVar9 = 0;
  uVar11 = 0;
  do {
    uVar5 = strlen(param_2 + (uVar11 & 0xffffffff));
    uVar4 = (uint)uVar5;
    if ((int)uVar7 < (int)(uint)uVar5) {
      uVar5 = 0xffffffff;
      uVar8 = 0;
      do {
        uVar4 = (uint)uVar5;
        cVar1 = (param_2 + (uVar11 & 0xffffffff))[uVar8];
        if (cVar1 == '\0') break;
        if (cVar1 == '\t') {
          uVar5 = uVar8 & 0xffffffff;
        }
        if (cVar1 == ' ') {
          uVar5 = uVar8 & 0xffffffff;
        }
        uVar4 = (uint)uVar5;
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
      if ((int)uVar4 < 1) {
        uVar4 = uVar7;
      }
    }
    if ((int)uVar4 < 1) {
LAB_1000701a:
      if (iVar9 < 2) {
        return 1;
      }
      return iVar9;
    }
    uVar11 = (ulong)(int)(uVar4 + (int)uVar11);
    lVar6 = uVar11 << 0x20;
    for (; (param_2[uVar11] == ' ' || (param_2[uVar11] == '\t')); uVar11 = uVar11 + 1) {
      lVar6 = lVar6 + 0x100000000;
    }
    iVar9 = iVar9 + 1;
    if (((long)uVar11 < 0) || (param_2[lVar6 >> 0x20] == '\0')) goto LAB_1000701a;
  } while( true );
}


#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_10008127
#define DAT_10008127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef UINT_00006980
#define UINT_00006980 (*(uint *)(0x6980U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007040
 */

undefined8 recovered_10007040(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 extraout_var = 0;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;

  if (param_1 == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 900);
  iVar1 = 0xc;
  if (0 < iVar7) {
    iVar1 = iVar7 + 2;
  }
  iVar8 = 0x2d2;
  if (*(int *)(param_1 + 4) != 0) {
    iVar8 = *(int *)(param_1 + 4) + -0x26;
  }
  iVar4 = 400;
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = *(int *)(param_1 + 8);
  }
  iVar5 = (iVar4 - iVar1) + -0x26;
  iVar4 = 0xe;
  if (0 < *(int *)(param_1 + 0x380)) {
    iVar4 = *(int *)(param_1 + 0x380) + 8;
  }
  if (iVar4 < iVar8) {
    iVar4 = iVar8;
  }
  if (iVar7 < 1) {
    iVar8 = 0x10;
    if (0xf < iVar5) goto LAB_100070bf;
  }
  else {
    iVar8 = iVar7 + 6;
    if (iVar7 + 6 <= iVar5) goto LAB_100070bf;
  }
  iVar5 = iVar8;
LAB_100070bf:
  if ((((0x1b < *(int *)(param_1 + 0x36c)) && (uVar2 = *(uint *)(param_1 + 0x370), 9 < (int)uVar2))
      && (*(int *)(param_1 + 0x36c) < iVar4 + 0x1c)) &&
     ((uVar2 < iVar5 + 10U && (0 < *(int *)(param_1 + 0x42c))))) {
    iVar8 = 0;
    iVar7 = (int)(uVar2 - 0xc) / iVar1 + *(int *)(param_1 + 0x430);
    do {
      pcVar6 = &DAT_10008127;
      if (*(long *)(param_1 + 0x358) != 0) {
        pcVar6 = (char *)(*(long *)(param_1 + 0x358) +
                         (long)((*(int *)(param_1 + 0x428) + iVar8) % 1000) * 0x100);
      }
      iVar1 = recovered_10006f00(param_1,pcVar6);
      if (iVar7 < iVar1) {
        pcVar6 = &DAT_10008127;
        if ((*(long *)(param_1 + 0x358) != 0) && (iVar8 < *(int *)(param_1 + 0x42c))) {
          pcVar6 = (char *)(*(long *)(param_1 + 0x358) +
                           (long)((iVar8 + *(int *)(param_1 + 0x428)) % 1000) * 0x100);
        }
        goto LAB_10007178;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 - iVar1;
    } while (iVar8 < *(int *)(param_1 + 0x42c));
  }
  pcVar6 = (char *)(param_1 + 0x388);
LAB_10007178:
  if ((*pcVar6 == '\0') && (0 < *(int *)(param_1 + 0x42c))) {
    if (*(long *)(param_1 + 0x358) == 0) {
      pcVar6 = &DAT_10008127;
    }
    else {
      pcVar6 = (char *)(*(long *)(param_1 + 0x358) +
                       (long)((*(int *)(param_1 + 0x42c) + *(int *)(param_1 + 0x428) + -1) % 1000) *
                       0x100);
    }
  }
  uVar3 = strlen(pcVar6);
  iVar7 = Ram0000000000006800;
  if ((((iVar7 == 0x50414d57) && (iVar7 = Ram0000000000006804, iVar7 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x183 < uVar2)) {
    uVar2 = UINT_00006980;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar2 = (*(code *)(ulong)uVar2)(pcVar6,(uint)uVar3);
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 0x43c) = 1;
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),1);
      }
    }
  }
  return 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_10008127
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006980

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
 * Address: 0x100072c0
 */

undefined8 recovered_100072c0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *outText;
  ulong uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;

  iVar2 = Ram0000000000006800;
  if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
      (uVar3 = Ram0000000000006808, 0xb < uVar3)) && (uVar3 = Ram0000000000006808, 0x18b < uVar3)) {
    uVar3 = UINT_00006988;
    if (((code *)(ulong)uVar3 != (code *)0x0) &&
       (uVar3 = (*(code *)(ulong)uVar3)(), uVar3 != 0 && param_1 != 0)) {
      text = (char *)(param_1 + 0x388);
      uVar4 = strlen(text);
      if (uVar4 < 0x9f) {
        uVar8 = 0x9f - (int)uVar4;
        if (uVar3 < uVar8) {
          uVar8 = uVar3;
        }
        iVar2 = Ram0000000000006800;
        if (((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
           ((uVar3 = Ram0000000000006808, 0xb < uVar3 && (uVar3 = Ram0000000000006808, 0x4f < uVar3)
            ))) {
          uVar3 = UINT_0000684c;
          if ((code *)(ulong)uVar3 != (code *)0x0) {
            outText = (*(code *)(ulong)uVar3)((ulong)(uVar8 + 1));
            if (outText != (char *)0x0) {
              iVar2 = Ram0000000000006800;
              if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
                  (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
                 (uVar3 = Ram0000000000006808, 0x187 < uVar3)) {
                uVar3 = UINT_00006984;
                if (((code *)(ulong)uVar3 == (code *)0x0) ||
                   (uVar3 = (*(code *)(ulong)uVar3)(outText,uVar8 + 1), uVar3 == 0)) {
                  bVar7 = false;
                }
                else {
                  uVar5 = 1;
                  bVar7 = false;
                  do {
                    bVar1 = outText[uVar5 - 1];
                    bVar6 = 0x20;
                    if ((bVar1 & 0xfb) != 9) {
                      bVar6 = bVar1;
                    }
                    if (bVar1 == 10) {
                      bVar6 = 0x20;
                    }
                    if ((byte)(bVar6 - 0x20) < 0x5f) {
                      text[uVar4] = bVar6;
                      uVar4 = uVar4 + 1;
                      bVar7 = true;
                    }
                  } while ((uVar5 < uVar3) && (uVar5 = uVar5 + 1, uVar4 < 0x9f));
                }
              }
              else {
                *outText = '\0';
                bVar7 = false;
              }
              text[uVar4] = '\0';
              iVar2 = Ram0000000000006800;
              if ((iVar2 == 0x50414d57) &&
                 (((iVar2 = Ram0000000000006804, iVar2 != 0 &&
                   (uVar3 = Ram0000000000006808, 0xb < uVar3)) &&
                  (uVar3 = Ram0000000000006808, 0x53 < uVar3)))) {
                uVar3 = UINT_00006850;
                if ((code *)(ulong)uVar3 != (code *)0x0) {
                  outText = (char *)(*(code *)(ulong)uVar3)(outText);
                }
              }
              if (bVar7) {
                *(undefined1 *)(param_1 + 0x43c) = 1;
                return CONCAT71((int7)((ulong)outText >> 8),1);
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
#undef UINT_0000684c
#undef UINT_00006850
#undef UINT_00006984
#undef UINT_00006988

#define local_128 (*(byte (*)[256])(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007520
 */

void recovered_10007520(long param_1,byte *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;

  if ((param_2 == (byte *)0x0) || (bVar1 = *param_2, bVar1 == 0)) {
    return;
  }
  uVar5 = 0;
  do {
    if (bVar1 == 10) {
      local_128[uVar5] = 0;
      if ((param_1 == 0) || (*(long *)(param_1 + 0x358) == 0)) {
        uVar5 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x42c);
        if (iVar4 < 1000) {
          iVar2 = *(int *)(param_1 + 0x428) + iVar4;
          *(int *)(param_1 + 0x42c) = iVar4 + 1;
        }
        else {
          iVar4 = recovered_10006f00(param_1,(char *)(*(long *)(param_1 + 0x358) +
                                                     (long)(*(int *)(param_1 + 0x428) % 1000) *
                                                     0x100));
          iVar2 = *(int *)(param_1 + 0x428) + ((*(int *)(param_1 + 0x428) + 1) / 1000) * -1000 + 1;
          *(int *)(param_1 + 0x428) = iVar2;
          iVar2 = iVar2 + *(int *)(param_1 + 0x42c) + -1;
          iVar3 = *(int *)(param_1 + 0x430) - iVar4;
          if (iVar3 == 0 || *(int *)(param_1 + 0x430) < iVar4) {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x430) = iVar3;
        }
        if (local_128[0] == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          bVar1 = local_128[0];
          do {
            if (bVar1 < 0x21) {
              bVar1 = 0x20;
            }
            *(byte *)(uVar5 + *(long *)(param_1 + 0x358) + (long)(iVar2 % 1000) * 0x100) = bVar1;
            bVar1 = local_128[uVar5 + 1];
            uVar5 = uVar5 + 1;
          } while ((bVar1 != 0) && (uVar5 < 0xff));
        }
        *(undefined1 *)(uVar5 + (long)(iVar2 % 1000) * 0x100 + *(long *)(param_1 + 0x358)) = 0;
        uVar5 = 0;
      }
    }
    else if (bVar1 != 0xd) {
      if (bVar1 == 0) {
        if (uVar5 == 0) {
          return;
        }
        local_128[uVar5] = 0;
        if (param_1 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x358) == 0) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x42c);
        if (iVar4 < 1000) {
          iVar3 = *(int *)(param_1 + 0x428) + iVar4;
          *(int *)(param_1 + 0x42c) = iVar4 + 1;
        }
        else {
          iVar2 = recovered_10006f00(param_1,(char *)(*(long *)(param_1 + 0x358) +
                                                     (long)(*(int *)(param_1 + 0x428) % 1000) *
                                                     0x100));
          iVar4 = *(int *)(param_1 + 0x428) + ((*(int *)(param_1 + 0x428) + 1) / 1000) * -1000 + 1;
          *(int *)(param_1 + 0x428) = iVar4;
          iVar3 = iVar4 + *(int *)(param_1 + 0x42c) + -1;
          iVar4 = *(int *)(param_1 + 0x430) - iVar2;
          if (iVar4 == 0 || *(int *)(param_1 + 0x430) < iVar2) {
            iVar4 = 0;
          }
          *(int *)(param_1 + 0x430) = iVar4;
        }
        if (local_128[0] == 0) {
          uVar5 = (ulong)(-(iVar3 >> 0x1f) ^ (uint)(iVar3 >> 0x1f) >> 0x1f);
        }
        else {
          uVar5 = 0;
          do {
            if (local_128[0] < 0x21) {
              local_128[0] = 0x20;
            }
            *(byte *)(uVar5 + *(long *)(param_1 + 0x358) + (long)(iVar3 % 1000) * 0x100) =
                 local_128[0];
            local_128[0] = local_128[uVar5 + 1];
            uVar5 = uVar5 + 1;
          } while ((local_128[0] != 0) && (uVar5 < 0xff));
        }
        *(undefined1 *)(uVar5 + (long)(iVar3 % 1000) * 0x100 + *(long *)(param_1 + 0x358)) = 0;
        return;
      }
      if (uVar5 + 1 < 0x100) {
        local_128[uVar5] = bVar1;
        uVar5 = uVar5 + 1;
      }
    }
    bVar1 = param_2[1];
    param_2 = param_2 + 1;
  } while( true );
}

#undef local_128

#undef DAT_00006800
#define DAT_00006800 (*(uint8_t *)(0x6800U))
#undef DAT_00006804
#define DAT_00006804 (*(uint8_t *)(0x6804U))
#undef DAT_00006808
#define DAT_00006808 (*(uint8_t *)(0x6808U))
#undef DAT_00006930
#define DAT_00006930 (*(uint8_t *)(0x6930U))
#undef DAT_10008127
#define DAT_10008127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef DAT_10008171
#define DAT_10008171 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x195U)))
#undef DAT_100081d9
#define DAT_100081d9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdU)))
#undef Ram0000000000006800
#define Ram0000000000006800 (*(uint32_t *)(0x6800U))
#undef Ram0000000000006804
#define Ram0000000000006804 (*(uint32_t *)(0x6804U))
#undef Ram0000000000006808
#define Ram0000000000006808 (*(uint32_t *)(0x6808U))
#undef Ram0000000000006930
#define Ram0000000000006930 (*(uint32_t *)(0x6930U))
#define local_264 (*(undefined1 (*)[8])(frame + 28))
#define local_25c (*(byte *)(frame + 36))
#define local_10b (*(char (*)[99])(frame + 373))
#define local_a8 (*(char (*)[136])(frame + 472))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007850
 */

void recovered_10007850(char *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char frame[672] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  undefined1 *vararg1;

  if (param_1 != (char *)0x0) {
    pf_varargs_10007fe2__8_(local_a8,0x80,&DAT_10008171,((uintptr_t)pf_module_state + 0x202U));
    memset(local_264,0,0x1bc);
    iVar2 = Ram0000000000006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram0000000000006804, iVar2 != 0)) &&
        (uVar1 = Ram0000000000006808, 0xb < uVar1)) && (uVar1 = Ram0000000000006808, 0x133 < uVar1))
    {
      uVar1 = Ram0000000000006930;
      if ((code *)(ulong)uVar1 != (code *)0x0) {
        iVar2 = (*(code *)(ulong)uVar1)(local_264);
        if (((iVar2 != 0) && ((local_25c & 4) != 0)) && (local_10b[0] != '\0')) {
          pf_varargs_10007fe2__8_(local_a8,0x80,&DAT_10008171,(ulonglong)local_10b);
        }
      }
    }
    vararg1 = &DAT_10008127;
    if (param_3 != (undefined1 *)0x0) {
      vararg1 = param_3;
    }
    pf_varargs_10007fe2__8__8_(param_1,param_2,&DAT_100081d9,(ulonglong)local_a8,(ulonglong)vararg1)
    ;
  }
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef DAT_00006930
#undef DAT_10008127
#undef DAT_10008171
#undef DAT_100081d9
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef Ram0000000000006930
#undef local_264
#undef local_25c
#undef local_10b
#undef local_a8

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
#undef UINT_00006898
#define UINT_00006898 (*(uint *)(0x6898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007960
 */

bool recovered_10007960(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 == 0) {
    return true;
  }
  *(undefined1 *)(param_1 + 0x650) = 0;
  iVar1 = Ram0000000000006800;
  uVar3 = 0;
  if ((((iVar1 == 0x50414d57) && (iVar1 = Ram0000000000006804, iVar1 != 0)) &&
      (uVar2 = Ram0000000000006808, 0xb < uVar2)) && (uVar2 = Ram0000000000006808, 0x9b < uVar2)) {
    uVar2 = UINT_00006898;
    if ((code *)(ulong)uVar2 != (code *)0x0) {
      uVar3 = (*(code *)(ulong)uVar2)((char *)(param_1 + 0x450),(char *)(param_1 + 0x650),0x1000);
    }
  }
  *(uint *)(param_1 + 0x448) = uVar3;
  *(undefined4 *)(param_1 + 0x444) = 1;
  return *(int *)(param_1 + 0x448) == 0;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006898

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007a00
 */

bool recovered_10007a00(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;

  if (param_2 == (char *)0x0) {
    return false;
  }
  uVar2 = strlen(param_1);
  uVar3 = strlen(param_2);
  if (uVar3 - 1 < uVar2) {
    uVar4 = 0;
    do {
      bVar1 = param_1[uVar4 + (uVar2 - uVar3)];
      bVar5 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar5 = bVar1;
      }
      bVar1 = param_2[uVar4];
      bVar6 = bVar1 | 0x20;
      if (0x19 < (byte)(bVar1 + 0xbf)) {
        bVar6 = bVar1;
      }
      bVar7 = bVar5 == bVar6;
    } while ((bVar7) && (bVar8 = uVar3 - 1 != uVar4, uVar4 = uVar4 + 1, bVar8));
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}


#undef DAT_10008127
#define DAT_10008127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007aa0
 */

uint128 recovered_10007aa0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint128 auVar14;

  if (param_1 == 0) {
    uVar4 = 0xc;
    uVar7 = 0x15e;
    iVar10 = 0x1d;
    uVar13 = 0x13c0000000c;
    uVar9 = 0x13c;
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    iVar10 = *(int *)(param_1 + 900);
    uVar4 = 0xc;
    uVar7 = 0xc;
    if (0 < iVar10) {
      uVar7 = iVar10 + 2U;
    }
    iVar11 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar11 = *(int *)(param_1 + 8);
    }
    uVar7 = (iVar11 - uVar7) - 0x26;
    if (iVar10 < 1) {
      uVar3 = 0x10;
      if (0x10 < (int)uVar7) {
        uVar3 = (ulong)uVar7;
      }
      uVar13 = (uVar3 << 0x20) - 0x21fffffff4;
      if ((int)uVar7 < 0x34) {
        uVar13 = 0x120000000c;
      }
    }
    else {
      uVar5 = iVar10 + 6U;
      if ((int)(iVar10 + 6U) < (int)uVar7) {
        uVar5 = uVar7;
      }
      uVar3 = (ulong)uVar5;
      uVar13 = (uVar3 << 0x20) - 0x21fffffff4;
      if (uVar5 < 0x34) {
        uVar13 = 0x120000000c;
      }
      uVar4 = (ulong)(iVar10 + 2U);
    }
    uVar9 = uVar13 >> 0x20;
    iVar12 = 0;
    iVar10 = (int)(uVar3 / uVar4);
    iVar10 = iVar10 + (uint)(iVar10 == 0);
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 0x42c)) {
      iVar11 = 0;
      iVar12 = 0;
      do {
        pcVar6 = &DAT_10008127;
        if (*(long *)(param_1 + 0x358) != 0) {
          pcVar6 = (char *)(*(long *)(param_1 + 0x358) +
                           (long)((*(int *)(param_1 + 0x428) + iVar11) % 1000) * 0x100);
        }
        iVar1 = recovered_10006f00(param_1,pcVar6);
        iVar12 = iVar12 + iVar1;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x42c));
      if (*(int *)(param_1 + 0x42c) < 1) {
        iVar11 = 0;
      }
      else {
        iVar1 = 0;
        iVar11 = 0;
        do {
          pcVar6 = &DAT_10008127;
          if (*(long *)(param_1 + 0x358) != 0) {
            pcVar6 = (char *)(*(long *)(param_1 + 0x358) +
                             (long)((*(int *)(param_1 + 0x428) + iVar1) % 1000) * 0x100);
          }
          iVar2 = recovered_10006f00(param_1,pcVar6);
          iVar11 = iVar11 + iVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x42c));
      }
    }
    iVar1 = *(int *)(param_1 + 900);
    uVar7 = 0xc;
    if (0 < iVar1) {
      uVar7 = iVar1 + 2U;
    }
    iVar2 = 400;
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = *(int *)(param_1 + 8);
    }
    uVar4 = 0xc;
    uVar5 = (iVar2 - uVar7) - 0x26;
    if (iVar1 < 1) {
      uVar7 = 0x10;
      if (0x10 < (int)uVar5) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = iVar1 + 6U;
      if ((int)(iVar1 + 6U) < (int)uVar5) {
        uVar7 = uVar5;
      }
      uVar4 = (ulong)(iVar1 + 2U);
    }
  }
  iVar1 = (int)(uVar7 / uVar4);
  iVar11 = (iVar11 - iVar1) - (uint)(iVar1 == 0);
  uVar4 = 0xa0000000a;
  if ((iVar10 < iVar12) && (0 < iVar11)) {
    uVar8 = (uint)uVar9;
    uVar5 = (int)(iVar10 * uVar8) / iVar12;
    uVar7 = 0x12;
    if (0x12 < (int)uVar5) {
      uVar7 = uVar5;
    }
    if ((int)uVar8 <= (int)uVar7) {
      uVar7 = uVar8;
    }
    uVar4 = (ulong)((int)((uVar8 - uVar7) * *(int *)(param_1 + 0x430)) / iVar11 + 10) << 0x20 | 10;
    uVar9 = (ulong)uVar7;
  }
  PF_PART8(auVar14, 8) = uVar13 & 0xffffffff | uVar9 << 0x20;
  PF_PART8(auVar14, 0) = uVar4;
  return auVar14;
}

#undef DAT_10008127

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
#define local_58 (*(void * *)(frame + 24))
#define local_4c (*(uint *)(frame + 36))
#define local_48 (*(uint *)(frame + 40))
#define local_44 (*(uint *)(frame + 44))
#define local_3c (*(uint *)(frame + 52))
#define local_38 (*(void * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d60
 */

void recovered_10007d60(long param_1,uint param_2,int param_3,char *param_4,uint param_5,
                       uint param_6)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;

  if ((int)param_5 < 1 || param_4 == (char *)0x0) {
    return;
  }
  local_3c = param_2;
  memset(&local_58,0,0x18);
  iVar4 = Ram0000000000006800;
  if (iVar4 != 0x50414d57) {
    return;
  }
  iVar4 = Ram0000000000006804;
  if (iVar4 == 0) {
    return;
  }
  uVar5 = Ram0000000000006808;
  if (uVar5 < 0xc) {
    return;
  }
  uVar5 = Ram0000000000006808;
  if (uVar5 < 0x17c) {
    return;
  }
  uVar5 = UINT_00006978;
  if ((code *)(ulong)uVar5 == (code *)0x0) {
    return;
  }
  uVar5 = (*(code *)(ulong)uVar5)
                    (param_4,param_5,0x80000001,
                     (param_6 | 0xff000000) >> 0x18 | (param_6 & 0xff0000) >> 8 |
                     (param_6 & 0xff00) << 8 | param_6 << 0x18,&local_58);
  if (uVar5 == 0) {
    return;
  }
  local_38 = local_58;
  if (local_58 != (void *)0x0) {
    if (local_48 != 0) {
      uVar6 = 0;
      uVar5 = local_4c;
      do {
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar8 = (int)uVar6 + param_3;
          uVar7 = 0;
          lVar9 = (long)local_58 + 3;
          uVar5 = local_3c;
          do {
            lVar12 = local_44 * uVar6;
            if (((*(char *)(lVar9 + lVar12) != '\0') && (param_1 != 0)) &&
               (-1 < (int)(uVar5 | uVar8) && *(long *)(param_1 + 0x350) != 0)) {
              iVar4 = *(int *)(param_1 + 4);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                iVar10 = 0x2f8;
              }
              if ((int)uVar5 < iVar10) {
                iVar10 = *(int *)(param_1 + 8);
                if (iVar10 == 0) {
                  iVar10 = 400;
                }
                if ((int)uVar8 < iVar10) {
                  uVar11 = (ulong)(uint)(iVar4 * 4);
                  if (iVar4 == 0) {
                    uVar11 = 0xbe0;
                  }
                  if (*(uint *)(param_1 + 0xc) != 0) {
                    uVar11 = (ulong)*(uint *)(param_1 + 0xc);
                  }
                  uVar2 = *(undefined1 *)(lVar9 + -2 + lVar12);
                  uVar3 = *(undefined1 *)(lVar9 + -1 + lVar12);
                  lVar1 = uVar11 * uVar8 + (ulong)uVar5 * 4;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + lVar1) =
                       *(undefined1 *)(lVar9 + -3 + lVar12);
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 1 + lVar1) = uVar2;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 2 + lVar1) = uVar3;
                  *(undefined1 *)(*(long *)(param_1 + 0x350) + 3 + lVar1) = 0xff;
                }
              }
            }
            uVar7 = uVar7 + 1;
            uVar5 = uVar5 + 1;
            lVar9 = lVar9 + 4;
          } while (uVar7 < local_4c);
          uVar5 = local_4c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_48);
      if (local_58 == (void *)0x0) goto LAB_10007fbd;
    }
    iVar4 = Ram0000000000006800;
    if (((iVar4 == 0x50414d57) && (iVar4 = Ram0000000000006804, iVar4 != 0)) &&
       ((uVar5 = Ram0000000000006808, 0xb < uVar5 && (uVar5 = Ram0000000000006808, 0x53 < uVar5))))
    {
      uVar5 = UINT_00006850;
      if ((code *)(ulong)uVar5 != (code *)0x0) {
        (*(code *)(ulong)uVar5)(local_58);
      }
    }
  }
LAB_10007fbd:
  memset(&local_58,0,0x18);
  return;
}

#undef DAT_00006800
#undef DAT_00006804
#undef DAT_00006808
#undef Ram0000000000006800
#undef Ram0000000000006804
#undef Ram0000000000006808
#undef UINT_00006850
#undef UINT_00006978
#undef local_58
#undef local_4c
#undef local_48
#undef local_44
#undef local_3c
#undef local_38
