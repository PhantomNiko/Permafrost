/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1794U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002870
#define DAT_10002870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10002880
#define DAT_10002880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10002890
#define DAT_10002890 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x579cU)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57a4U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_1000801c
#define DAT_1000801c (*(int *)(((uintptr_t)pf_module_state + 0x57b0U)))
#undef DAT_10008020
#define DAT_10008020 (*(int *)(((uintptr_t)pf_module_state + 0x57b4U)))
#undef DAT_10008024
#define DAT_10008024 (*(int *)(((uintptr_t)pf_module_state + 0x57b8U)))
#undef DAT_10008028
#define DAT_10008028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008030
#define DAT_10008030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef DAT_10008034
#define DAT_10008034 (*(uint *)(((uintptr_t)pf_module_state + 0x57c8U)))
#undef DAT_10008038
#define DAT_10008038 (*(uint *)(((uintptr_t)pf_module_state + 0x57ccU)))
#undef DAT_1000803c
#define DAT_1000803c (*(int *)(((uintptr_t)pf_module_state + 0x57d0U)))
#undef DAT_10008040
#define DAT_10008040 (*(uint *)(((uintptr_t)pf_module_state + 0x57d4U)))
#undef DAT_10008044
#define DAT_10008044 (*(uint *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008048
#define DAT_10008048 (*(uint *)(((uintptr_t)pf_module_state + 0x57dcU)))
#undef DAT_10008054
#define DAT_10008054 (*(int *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_1000805c
#define DAT_1000805c (*(int *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef DAT_10008064
#define DAT_10008064 (*(uint *)(((uintptr_t)pf_module_state + 0x57f8U)))
#undef DAT_10008068
#define DAT_10008068 (*(int *)(((uintptr_t)pf_module_state + 0x57fcU)))
#undef DAT_1000806c
#define DAT_1000806c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5800U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint *)(((uintptr_t)pf_module_state + 0x5804U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5824U)))
#undef DAT_10008098
#define DAT_10008098 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x582cU)))
#undef DAT_100080a4
#define DAT_100080a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5838U)))
#undef DAT_100080bc
#define DAT_100080bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5850U)))
#undef UNK_10002878
#define UNK_10002878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef UNK_10002888
#define UNK_10002888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef UNK_10008060
#define UNK_10008060 (*(int *)(((uintptr_t)pf_module_state + 0x57f4U)))
#undef _DAT_10002870
#define _DAT_10002870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef _DAT_10002880
#define _DAT_10002880 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef _DAT_10008030
#define _DAT_10008030 (*(int *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef iRam0000000010008060
#define iRam0000000010008060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57f4U)))
#undef str_100028c8
#define str_100028c8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_100028d5
#define str_100028d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x69U)))
#undef str_100028f1
#define str_100028f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85U)))
#undef str_10002918
#define str_10002918 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xacU)))
#undef str_10002965
#define str_10002965 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf9U)))
#undef str_100029f8
#define str_100029f8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18cU)))
#undef str_10002a5e
#define str_10002a5e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f2U)))
#undef str_10002aab
#define str_10002aab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23fU)))
#undef str_10002d5d
#define str_10002d5d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4f1U)))
#undef str_10002d7a
#define str_10002d7a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50eU)))
#undef str_10002da3
#define str_10002da3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x537U)))
#undef str_10002dbf
#define str_10002dbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x553U)))
#undef str_10002dd3
#define str_10002dd3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x567U)))
#undef str_10002df2
#define str_10002df2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x586U)))
#undef str_10002e12
#define str_10002e12 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5a6U)))
#undef str_10002e30
#define str_10002e30 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c4U)))
#undef str_10002e4c
#define str_10002e4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e0U)))
#undef str_10002ea3
#define str_10002ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x637U)))
#undef str_10002ede
#define str_10002ede (*(char (*)[1])(((uintptr_t)pf_module_state + 0x672U)))
#undef str_10002ef1
#define str_10002ef1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x685U)))
#undef str_10002f03
#define str_10002f03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x697U)))
#undef str_10002f1d
#define str_10002f1d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b1U)))
#undef str_10002f45
#define str_10002f45 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6d9U)))
#undef str_10002f75
#define str_10002f75 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x709U)))
#undef str_10002fa9
#define str_10002fa9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73dU)))
#undef str_10002fd5
#define str_10002fd5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x769U)))
#undef str_1000304c
#define str_1000304c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7e0U)))
#undef str_100030f2
#define str_100030f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x886U)))
#undef str_1000316d
#define str_1000316d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x901U)))
#undef uRam0000000010002878
#define uRam0000000010002878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef uRam0000000010002888
#define uRam0000000010002888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1cU)))
#define puStack_378 (*(undefined8 * *)(pf_stack_frame + 24))
#define puStack_370 (*(uint * *)(pf_stack_frame + 32))
#define uStack_354 (*(uint *)(pf_stack_frame + 60))
#define puStack_350 (*(undefined8 * *)(pf_stack_frame + 64))
#define uStack_33c (*(undefined4 *)(pf_stack_frame + 84))
#define auStack_334 (*(uint (*)[205])(pf_stack_frame + 92))
#define uStack_2cc (*(uint *)(pf_stack_frame + 196))
#define uStack_2c8 (*(uint *)(pf_stack_frame + 200))
#define uStack_2c4 (*(uint *)(pf_stack_frame + 204))
#define uStack_2c0 (*(undefined8 *)(pf_stack_frame + 208))
#define auStack_2b8 (*(uint (*)[174])(pf_stack_frame + 216))
#define uStack_260 (*(uint *)(pf_stack_frame + 304))
#define uStack_25c (*(uint *)(pf_stack_frame + 308))
#define uStack_258 (*(uint *)(pf_stack_frame + 312))
#define uStack_254 (*(uint *)(pf_stack_frame + 316))
#define uStack_250 (*(undefined8 *)(pf_stack_frame + 320))
#define uStack_248 (*(undefined8 *)(pf_stack_frame + 328))
#define uStack_240 (*(uint *)(pf_stack_frame + 336))
#define uStack_238 (*(ulong *)(pf_stack_frame + 344))
#define uStack_230 (*(undefined4 *)(pf_stack_frame + 352))
#define uStack_22c (*(uint *)(pf_stack_frame + 356))
#define auStack_228 (*(uint (*)[138])(pf_stack_frame + 360))
#define pcStack_220 (*(code * *)(pf_stack_frame + 368))
#define pcStack_218 (*(code * *)(pf_stack_frame + 376))
#define auStack_210 (*(undefined1 (*)[528])(pf_stack_frame + 384))
#define auStack_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 448))
#define auStack_190 (*(undefined1 (*)[400])(pf_stack_frame + 512))
#define auStack_130 (*(undefined1 (*)[304])(pf_stack_frame + 608))
#define local_338 (*(uint *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_1000048c(void *api)

{
  unsigned char pf_stack_frame[944] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  uint *puVar26;
  ulong uVar27;
  char *pcVar28;
  uint uVar29;
  long lVar30;
  byte bVar31;

  if (api == (void *)0x0) {
    return 0;
  }
  if (*(int *)api != 0x54584b57) {
    return 0;
  }
  if (*(int *)((long)api + 4) != 1100000) {
    return 0;
  }
  if (*(uint *)((long)api + 8) < 0xf8) {
    return 0;
  }
  recovered_10000f48((undefined1 *)&(*(int **)((uintptr_t)pf_module_state+0x5794U)),0x1390);
  (*(int **)((uintptr_t)pf_module_state+0x5794U)) = api;
  uVar11 = recovered_10000f5c(api,0x18b4e000,0x200,&DAT_10008008);
  if ((int)uVar11 != 0) {
    DAT_1000802c = DAT_1000802c | 1;
    DAT_10008028 = 1;
  }
  uVar12 = recovered_10000f5c(api,0x18830000,0x1000,&DAT_10008010);
  if (((int)uVar12 == 0) || (DAT_1000802c = DAT_1000802c | 2, (int)uVar11 == 0)) {
    iRam0000000010008050 = iRam0000000010008050 + 1;
    DAT_10008054 = 2;
    DAT_10008018 = 0;
    pcVar13 = str_100028c8;
  }
  else {
    DAT_10008028 = 2;
    DAT_10008018 = 1;
    local_338 = 0;
    uVar11 = recovered_1000133c(0,(undefined4 *)0x0,0,(undefined1 *)auStack_334,&local_338);
    if (((int)uVar11 == 0) || (local_338 < 4)) {
      pcVar13 = str_10002d5d;
    }
    else {
      DAT_10008040 = auStack_334[0];
      if (auStack_334[0] >> 0x11 == 0) {
        iRam0000000010008050 = iRam0000000010008050 + 1;
        DAT_10008054 = 0xb;
        pcVar13 = str_10002d7a;
      }
      else {
        DAT_10008044 = auStack_334[0];
        if (auStack_334[0] < 0x40001) {
LAB_1000064c:
          DAT_10008028 = 3;
          bVar9 = recovered_100016b0(3);
          if ((((!bVar9) || (bVar9 = recovered_100016b0(4), !bVar9)) ||
              (bVar9 = recovered_100016b0(6), !bVar9)) ||
             ((bVar9 = recovered_100016b0(7), !bVar9 || (bVar9 = recovered_100016b0(8), !bVar9)))) {
            iRam0000000010008050 = iRam0000000010008050 + 1;
            DAT_10008054 = 0xc;
            pcVar13 = str_10002dd3;
          }
          else {
            DAT_10008028 = 4;
            uVar11 = recovered_1000133c(1,(undefined4 *)0x0,0,(undefined1 *)auStack_334,&local_338);
            if (((int)uVar11 == 0) || (local_338 < 0x10)) {
              pcVar13 = str_10002df2;
            }
            else {
              DAT_10008048 = (uint)(ushort)auStack_334[0];
              if (DAT_10008048 < 3) {
                iRam0000000010008050 = iRam0000000010008050 + 1;
                DAT_10008054 = 0xd;
                pcVar13 = str_10002e12;
              }
              else {
                DAT_10008028 = 5;
                lVar18 = ((uintptr_t)pf_module_state+0x583cU);
                puStack_378 = (undefined8 *)((uintptr_t)pf_module_state+0x5868U);
                puStack_370 = (uint *)((uintptr_t)pf_module_state+0x5860U);
                puStack_350 = &(*(int **)((uintptr_t)pf_module_state+0x5794U));
                for (lVar30 = 0; lVar30 != 3; lVar30 = lVar30 + 1) {
                  uVar29 = (uint)lVar30;
                  uStack_2cc = 0;
                  lVar2 = lVar30 * 0x654;
                  *(uint *)(&DAT_10008090 + lVar2) = uVar29;
                  uStack_260 = uVar29;
                  uVar11 = recovered_1000133c(3,&uStack_260,4,(undefined1 *)&uStack_2c8,&uStack_2cc)
                  ;
                  if (((int)uVar11 == 0) || (uStack_2cc < 0x20)) {
LAB_10000bb4:
                    if (DAT_10008054 == 0) {
                      DAT_10008054 = 0xe;
LAB_10000bc4:
                      iRam0000000010008050 = iRam0000000010008050 + 1;
                    }
                    pcVar13 = str_10002e30;
                    goto LAB_10000bd8;
                  }
                  *(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5828U)) = uStack_2c8;
                  (&DAT_10008098)[lVar30 * 0x195] = uStack_2c4 & 0xfffff;
                  *(undefined8 *)(lVar2 + ((uintptr_t)pf_module_state+0x5830U)) = uStack_2c0;
                  uVar7 = DAT_10008044;
                  uVar16 = uStack_2c8 >> 0x19 & 1;
                  uVar17 = DAT_10008044 >> 0x12;
                  if (uVar17 == 0) {
                    uVar16 = 0;
                  }
                  (&DAT_100080a4)[lVar30 * 0x195] = uVar16;
                  if ((uStack_2c8 >> 0x1e & 1) == 0) {
                    DAT_10008054 = 9;
                    goto LAB_10000bc4;
                  }
                  uVar16 = 0;
                  uVar29 = 1 << (ulong)(uVar29 & 0x1f);
                  DAT_10008034 = DAT_10008034 | uVar29;
                  for (uVar19 = 0; uVar19 != 0x10; uVar19 = uVar19 + 1) {
                    *(char *)(lVar18 + uVar19) =
                         (char)(*(uint *)((long)auStack_2b8 + (uVar19 & 0xffffffec)) >>
                               (ulong)(uVar16 & 0x18));
                    uVar16 = uVar16 + 8;
                  }
                  uVar16 = 0;
                  *(undefined1 *)(lVar2 + ((uintptr_t)pf_module_state+0x584cU)) = 0;
                  uStack_25c = 0;
                  uVar14 = 5;
                  if (uVar17 == 0) {
                    uVar14 = 3;
                  }
                  uStack_354 = 0;
                  do {
                    if (0x3f < uVar16) break;
                    uStack_258 = *(uint *)(&DAT_10008090 + lVar2);
                    uStack_254 = uVar16;
                    uVar11 = recovered_1000133c(4,&uStack_258,8,(undefined1 *)&uStack_238,
                                                &uStack_25c);
                    if (((int)uVar11 == 0) || (uStack_25c < 4)) goto LAB_10000bb4;
                    uVar17 = (uint)(uStack_238 & 0xffff);
                    if ((uVar17 == 0) ||
                       (uVar3 = (uint)uStack_238 >> 0x10,
                       (0x40 - uVar16 < uVar17 || (0x40 - uVar16) - uVar17 < uVar3) ||
                       uStack_25c != uVar14 * 4 * uVar17 + 4)) goto LAB_10000ba4;
                    if (uVar16 == 0) {
                      uStack_354 = uVar17 + uVar3;
                      if (0x40 < uStack_354) goto LAB_10000bb4;
                    }
                    else if (uVar17 + uVar16 + uVar3 != uStack_354) goto LAB_10000ba4;
                    puVar22 = auStack_228;
                    for (lVar20 = 0; (uStack_238 & 0xffff) * 0x18 != lVar20; lVar20 = lVar20 + 0x18)
                    {
                      lVar25 = lVar20 + (ulong)uVar16 * 0x18;
                      *(undefined8 *)((long)puStack_350 + lVar25 + 0xbc) =
                           *(undefined8 *)(puVar22 + -3);
                      *(uint *)((long)puStack_350 + lVar25 + 0xc4) = (uint)(ushort)puVar22[-1];
                      if (0x3ffff < uVar7) {
                        *(undefined8 *)((long)puStack_350 + lVar25 + 200) = *(undefined8 *)puVar22;
                      }
                      puVar22 = puVar22 + uVar14;
                    }
                    uVar16 = uVar17 + uVar16;
                  } while (0xffff < (uint)uStack_238);
                  if (uVar16 != uStack_354) {
LAB_10000ba4:
                    iRam0000000010008050 = iRam0000000010008050 + 1;
                    DAT_10008054 = 9;
                    goto LAB_10000bb4;
                  }
                  *(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5e50U)) = uStack_354;
                  puVar15 = puStack_378;
                  for (uVar19 = 1; uVar19 < uStack_354; uVar19 = uVar19 + 1) {
                    puVar22 = (uint *)(&DAT_100080bc + uVar19 * 0x18 + lVar2);
                    uVar16 = *puVar22;
                    uStack_248 = *(undefined8 *)(puVar22 + 3);
                    uStack_250 = *(undefined8 *)(puVar22 + 1);
                    uStack_240 = puVar22[5];
                    puVar5 = puVar15;
                    uVar23 = uVar19;
                    while ((uVar23 != 0 &&
                           (puVar22 = (uint *)(&DAT_100080bc +
                                              (ulong)((int)uVar23 - 1) * 0x18 + lVar2),
                           uVar16 < *puVar22))) {
                      uVar12 = *(undefined8 *)(puVar22 + 2);
                      uVar11 = *(undefined8 *)puVar22;
                      puVar5[2] = *(undefined8 *)(puVar22 + 4);
                      puVar5[1] = uVar12;
                      *puVar5 = uVar11;
                      uVar23 = uVar23 - 1;
                      puVar5 = puVar5 + -3;
                    }
                    puVar22 = (uint *)(&DAT_100080bc + (uVar23 & 0xffffffff) * 0x18 + lVar2);
                    *puVar22 = uVar16;
                    *(undefined8 *)(puVar22 + 3) = uStack_248;
                    *(undefined8 *)(puVar22 + 1) = uStack_250;
                    puVar22[5] = uStack_240;
                    uStack_354 = *(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5e50U));
                    puVar15 = puVar15 + 3;
                  }
                  lVar20 = 1;
                  for (uVar19 = 0; uVar19 != uStack_354; uVar19 = uVar19 + 1) {
                    if ((uVar19 != 0) &&
                       (piVar24 = (int *)(&DAT_100080bc + uVar19 * 0x18 + lVar2),
                       piVar24[-6] == *piVar24)) goto LAB_10000bb4;
                    puVar22 = (uint *)(&DAT_100080bc + uVar19 * 0x18 + lVar2);
                    if ((&DAT_100080a4)[lVar30 * 0x195] == 0) {
                      if ((*(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5830U)) == 0) ||
                         (uVar16 = *(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5834U)), uVar16 == 0)) {
                        uVar23 = (ulong)*puVar22;
                      }
                      else {
                        uVar23 = 0;
                        if ((ulong)uVar16 != 0) {
                          uVar23 = ((ulong)*puVar22 * (ulong)*(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5830U))) /
                                   (ulong)uVar16;
                        }
                      }
                      if (uVar23 - 0x100000000 < 0xffffffff00000001) goto LAB_10000bb4;
                      puVar22[5] = (uint)uVar23;
                    }
                    else {
                      if (puVar22[3] == 0) goto LAB_10000bb4;
                      puVar22[5] = puVar22[3];
                      lVar25 = lVar20;
                      puVar26 = puStack_370;
                      while (lVar25 = lVar25 + -1, lVar25 != 0) {
                        uVar16 = *puVar26;
                        puVar26 = puVar26 + 6;
                        if (uVar16 == puVar22[4]) goto LAB_10000bb4;
                      }
                    }
                    lVar20 = lVar20 + 1;
                  }
                  *(uint *)(lVar2 + ((uintptr_t)pf_module_state+0x5e5cU)) = uStack_354 - 1;
                  *(undefined8 *)(lVar2 + ((uintptr_t)pf_module_state+0x5e54U)) = 0;
                  uVar21 = (ulong)*(uint *)(&DAT_100080bc + (ulong)(uStack_354 - 1) * 0x18 + lVar2)
                           + (ulong)*(uint *)(&DAT_100080bc + lVar2) >> 1;
                  uVar23 = 0xffffffffffffffff;
                  lVar20 = 0xbc;
                  for (uVar19 = 0; uStack_354 != uVar19; uVar19 = uVar19 + 1) {
                    uVar27 = (ulong)*(uint *)((long)puStack_350 + lVar20);
                    uVar1 = uVar27 - uVar21;
                    if (uVar27 <= uVar21) {
                      uVar1 = uVar21 - uVar27;
                    }
                    if (uVar1 < uVar23) {
                      *(int *)(lVar2 + ((uintptr_t)pf_module_state+0x5e58U)) = (int)uVar19;
                      uVar23 = uVar1;
                    }
                    lVar20 = lVar20 + 0x18;
                  }
                  DAT_10008038 = DAT_10008038 | uVar29;
                  _DAT_10008030 = _DAT_10008030 + 1;
                  lVar18 = lVar18 + 0x654;
                  puStack_350 = (undefined8 *)((long)puStack_350 + 0x654);
                  puStack_378 = (undefined8 *)((long)puStack_378 + 0x654);
                  puStack_370 = puStack_370 + 0x195;
                }
                DAT_10008028 = 6;
                uVar11 = recovered_100016f4();
                if ((int)uVar11 == 0) {
                  if (DAT_10008054 == 8) {
                    if (((((DAT_10008018 != 0 && _DAT_10008030 == 3) && DAT_1000805c != 0) &&
                         iRam0000000010008060 == 6) && DAT_10008064 < 2 ||
                        (((DAT_10008018 != 0 && _DAT_10008030 == 3) && DAT_1000805c != 0) &&
                        iRam0000000010008060 == 6) && DAT_10008064 == 2) && DAT_10008068 != 0) {
                      uVar11 = recovered_100018a4();
                      if ((int)uVar11 != 0) {
                        bVar31 = NEON_uminv(CONCAT17(-(DAT_10008068 ==
                                                      (int)((ulong)uRam0000000010002888 >> 0x20)),
                                                     CONCAT16(-(DAT_10008064 ==
                                                               (uint)uRam0000000010002888),
                                                              CONCAT15(-(iRam0000000010008060 ==
                                                                        (int)((ulong)_DAT_10002880
                                                                             >> 0x20)),
                                                                       CONCAT14(~-(DAT_1000805c ==
                                                                                  (int)_DAT_10002880
                                                                                  ),CONCAT13(-(
                                                  DAT_1000803c ==
                                                  (int)((ulong)uRam0000000010002878 >> 0x20)),
                                                  CONCAT12(-(DAT_10008038 ==
                                                            (uint)uRam0000000010002878),
                                                           CONCAT11(-(DAT_10008034 ==
                                                                     (uint)((ulong)_DAT_10002870 >>
                                                                           0x20)),
                                                                    -(_DAT_10008030 ==
                                                                     (int)_DAT_10002870)))))))),1);
                        if (((bVar31 & 1) == 0) || (DAT_10008018 == 0)) {
                          DAT_10008020 = 1;
                          pcVar13 = str_10002ea3;
                        }
                        else {
                          DAT_10008024 = 1;
                          DAT_1000806c = 1;
                          bVar9 = recovered_100019c0(1);
                          DAT_10008070 = (uint)!bVar9;
                          pcVar13 = str_10002e4c;
                        }
                        goto LAB_10000bd8;
                      }
                      goto LAB_10000f14;
                    }
                  }
                  else {
LAB_10000f14:
                    if (DAT_10008054 == 0) {
                      iRam0000000010008050 = iRam0000000010008050 + 1;
                      DAT_10008054 = 0xf;
                    }
                  }
                  pcVar13 = str_10002ede;
                }
                else {
                  DAT_10008028 = 7;
                  uVar11 = recovered_100018a4();
                  if ((int)uVar11 != 0) {
                    DAT_1000801c = 1;
                    DAT_10008028 = 8;
                    DAT_1000806c = 1;
                    bVar9 = recovered_100019c0(1);
                    DAT_10008070 = (uint)!bVar9;
                    goto LAB_10000bdc;
                  }
                  if (DAT_10008054 == 0) {
                    iRam0000000010008050 = iRam0000000010008050 + 1;
                    DAT_10008054 = 0x10;
                  }
                  pcVar13 = str_10002ef1;
                }
              }
            }
          }
        }
        else {
          bVar9 = recovered_100016b0(0x10);
          if (bVar9) {
            uStack_33c = 0x40000;
            uVar11 = recovered_1000133c(0x10,&uStack_33c,4,(undefined1 *)auStack_334,&local_338);
            if ((int)uVar11 != 0) {
              DAT_10008044 = 0x40000;
              goto LAB_1000064c;
            }
            pcVar13 = str_10002dbf;
          }
          else {
            iRam0000000010008050 = iRam0000000010008050 + 1;
            DAT_10008054 = 0xb;
            pcVar13 = str_10002da3;
          }
        }
      }
    }
  }
LAB_10000bd8:
  recovered_10001008(pcVar13);
LAB_10000bdc:
  if (DAT_1000801c == 0) {
    if (DAT_10008024 == 0) {
      pcVar13 = str_10002a5e;
      if (DAT_10008020 != 0) {
        pcVar13 = str_100029f8;
      }
    }
    else {
      pcVar13 = str_10002965;
    }
  }
  else {
    pcVar13 = str_10002918;
  }
  if ((*(uint *)((long)api + 0xc) == 0) ||
     (iVar10 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(str_100028d5,str_100028f1,pcVar13),
     iVar10 == 0)) {
    recovered_100010f4(api,str_10002aab);
  }
  iVar6 = DAT_10008024;
  iVar10 = DAT_1000801c;
  bVar8 = DAT_1000801c == 0;
  recovered_10000f48((undefined1 *)&uStack_238,0x1c8);
  uStack_22c = 0x10005;
  bVar9 = iVar10 != 0;
  bVar4 = iVar6 != 0;
  if (!bVar9 && !bVar4) {
    uStack_22c = 0x10001;
  }
  uStack_238 = DAT_10002890;
  uStack_22c = uStack_22c | (uint)bVar8 << 3;
  uStack_230 = 1;
  auStack_228[0] = (uint)(bVar9 || bVar4);
  pcStack_218 = recovered_10002218;
  if (!bVar9 && !bVar4) {
    pcStack_218 = (code *)0x0;
  }
  pcStack_220 = recovered_10001d48;
  recovered_1000263c(auStack_210,0x40,str_100028f1);
  recovered_1000263c(auStack_1d0,0x40,str_10002f03);
  if (iVar10 == 0) {
    pcVar13 = str_10002fa9;
    if (DAT_10008020 != 0) {
      pcVar13 = str_10002f75;
    }
    pcVar28 = str_1000316d;
    if (DAT_10008020 != 0) {
      pcVar28 = str_100030f2;
    }
    if (iVar6 != 0) {
      pcVar13 = str_10002f45;
      pcVar28 = str_1000304c;
    }
    recovered_1000263c(auStack_190,0x60,pcVar13);
  }
  else {
    recovered_1000263c(auStack_190,0x60,str_10002f1d);
    pcVar28 = str_10002fd5;
  }
  recovered_1000263c(auStack_130,0xc0,pcVar28);
  if (((((*(int **)((uintptr_t)pf_module_state+0x5794U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x5794U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[2] < 0xf0)) ||
     (((*(int **)((uintptr_t)pf_module_state+0x5794U))[0x3b] == 0 ||
      (iVar10 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[0x3b])(&uStack_238), iVar10 == 0)))) {
    return 0;
  }
  return 1;
}

#undef DAT_10002870
#undef DAT_10002880
#undef DAT_10002890
#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_1000802c
#undef DAT_10008030
#undef DAT_10008034
#undef DAT_10008038
#undef DAT_1000803c
#undef DAT_10008040
#undef DAT_10008044
#undef DAT_10008048
#undef DAT_10008054
#undef DAT_1000805c
#undef DAT_10008064
#undef DAT_10008068
#undef DAT_1000806c
#undef DAT_10008070
#undef DAT_10008090
#undef DAT_10008098
#undef DAT_100080a4
#undef DAT_100080bc
#undef UNK_10002878
#undef UNK_10002888
#undef UNK_10008050
#undef UNK_10008060
#undef _DAT_10002870
#undef _DAT_10002880
#undef _DAT_10008030
#undef iRam0000000010008050
#undef iRam0000000010008060
#undef str_100028c8
#undef str_100028d5
#undef str_100028f1
#undef str_10002918
#undef str_10002965
#undef str_100029f8
#undef str_10002a5e
#undef str_10002aab
#undef str_10002d5d
#undef str_10002d7a
#undef str_10002da3
#undef str_10002dbf
#undef str_10002dd3
#undef str_10002df2
#undef str_10002e12
#undef str_10002e30
#undef str_10002e4c
#undef str_10002ea3
#undef str_10002ede
#undef str_10002ef1
#undef str_10002f03
#undef str_10002f1d
#undef str_10002f45
#undef str_10002f75
#undef str_10002fa9
#undef str_10002fd5
#undef str_1000304c
#undef str_100030f2
#undef str_1000316d
#undef uRam0000000010002878
#undef uRam0000000010002888
#undef puStack_378
#undef puStack_370
#undef uStack_354
#undef puStack_350
#undef uStack_33c
#undef auStack_334
#undef uStack_2cc
#undef uStack_2c8
#undef uStack_2c4
#undef uStack_2c0
#undef auStack_2b8
#undef uStack_260
#undef uStack_25c
#undef uStack_258
#undef uStack_254
#undef uStack_250
#undef uStack_248
#undef uStack_240
#undef uStack_238
#undef uStack_230
#undef uStack_22c
#undef auStack_228
#undef pcStack_220
#undef pcStack_218
#undef auStack_210
#undef auStack_1d0
#undef auStack_190
#undef auStack_130
#undef local_338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f48
 */

void recovered_10000f48(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f5c
 */

undefined8 recovered_10000f5c(int *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;

  local_24 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_4 == (ulong *)0x0) {
    return 0;
  }
  if (*param_1 == 0x54584b57) {
    if ((uint)param_1[2] < 0xbc) {
      if ((uint)param_1[2] < 0x68) {
        return 0;
      }
    }
    else if (param_1[0x2e] != 0) {
                    /* WARNING: Could not recover jumptable at 0x10000fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])(param_2,0,param_3,param_4);
      return uVar2;
    }
    if (param_1[0x19] == 0) {
      return 0;
    }
    iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(param_2,0,param_3,&local_24);
    if (iVar1 != 0) {
      *param_4 = (ulong)local_24;
      return 1;
    }
  }
  return 0;
}

#undef local_24

#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32bU)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008054
#define DAT_10008054 (*(int *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_10008058
#define DAT_10008058 (*(uint *)(((uintptr_t)pf_module_state + 0x57ecU)))
#undef DAT_1000805c
#define DAT_1000805c (*(int *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint *)(((uintptr_t)pf_module_state + 0x57fcU)))
#undef str_10002b56
#define str_10002b56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2eaU)))
#undef str_10002b80
#define str_10002b80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x314U)))
#undef str_10002b8e
#define str_10002b8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x322U)))
#undef str_10002b9a
#define str_10002b9a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x32eU)))
#define auStack_f0 (*(undefined1 (*)[240])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001008
 */

void recovered_10001008(char *param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;

  iVar2 = DAT_1000805c;
  uVar4 = DAT_10008068;
  if (DAT_1000805c == 0 || DAT_10008058 != 0) {
    uVar4 = DAT_10008058;
  }
  recovered_10000f48(auStack_f0,0xc0);
  recovered_10001128((long)auStack_f0,0xc0,str_10002b56);
  pcVar3 = str_10002b80;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  recovered_10001128((long)auStack_f0,0xc0,pcVar3);
  iVar1 = DAT_10008054;
  if (DAT_10008054 != 0) {
    recovered_10001128((long)auStack_f0,0xc0,str_10002b8e);
    pcVar3 = recovered_10001180(iVar1);
    recovered_10001128((long)auStack_f0,0xc0,pcVar3);
  }
  if (iVar2 == 0) {
    if (uVar4 != 0) {
      recovered_10001128((long)auStack_f0,0xc0,str_10002b9a);
      if ((int)uVar4 < 0) {
        recovered_10001238((long)auStack_f0,0xc0,0x2d);
        uVar4 = -uVar4;
      }
      recovered_10001278((long)auStack_f0,0xc0,uVar4);
    }
  }
  else {
    recovered_10001128((long)auStack_f0,0xc0,&DAT_10002b97);
    recovered_100011a8((long)auStack_f0,0xc0);
  }
  recovered_100010f4((*(int **)((uintptr_t)pf_module_state+0x5794U)),auStack_f0);
  return;
}

#undef DAT_10002b97
#undef DAT_10008000
#undef DAT_10008054
#undef DAT_10008058
#undef DAT_1000805c
#undef DAT_10008068
#undef str_10002b56
#undef str_10002b80
#undef str_10002b8e
#undef str_10002b9a
#undef auStack_f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010f4
 */

void recovered_100010f4(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x2c)) ||
     (param_1[10] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[10])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001128
 */

void recovered_10001128(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10001320(param_1);
  if ((param_1 != 0) && (param_3 != (char *)0x0)) {
    pcVar2 = (char *)(param_1 + uVar1);
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#undef DAT_10002d3b
#define DAT_10002d3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4cfU)))
#undef PTR_str_10002ba9_10004028
#define PTR_str_10002ba9_10004028 (*(char * *)(((uintptr_t)pf_module_state + 0x17bcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001180
 */

undefined * recovered_10001180(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 1U < 0x10) {
    return (&PTR_str_10002ba9_10004028)[param_1 - 1U];
  }
  return &DAT_10002d3b;
}

#undef DAT_10002d3b
#undef PTR_str_10002ba9_10004028

#undef DAT_1000805c
#define DAT_1000805c (*(int *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef DAT_10008064
#define DAT_10008064 (*(uint *)(((uintptr_t)pf_module_state + 0x57f8U)))
#undef DAT_10008068
#define DAT_10008068 (*(uint *)(((uintptr_t)pf_module_state + 0x57fcU)))
#undef str_10002d40
#define str_10002d40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4d4U)))
#undef str_10002d56
#define str_10002d56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4eaU)))
#define abStack_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011a8
 */

void recovered_100011a8(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;

  if ((param_1 == 0) || (DAT_1000805c == 0)) {
    return;
  }
  recovered_10001128(param_1,param_2,str_10002d40);
  recovered_10001278(param_1,param_2,DAT_10008064);
  recovered_10001128(param_1,param_2,str_10002d56);
  if ((int)DAT_10008068 < 0) {
    recovered_10001238(param_1,param_2,0x2d);
  }
  uVar1 = -DAT_10008068;
  if (-1 < (int)DAT_10008068) {
    uVar1 = DAT_10008068;
  }
  if (uVar1 == 0) {
    lVar2 = recovered_10001320(param_1);
    if ((param_1 != 0) && (lVar2 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar2) = 0x30;
      *(undefined1 *)(param_1 + lVar2 + 1U) = 0;
    }
    return;
  }
  for (uVar3 = 0; (uVar1 != 0 && (uVar3 < 10)); uVar3 = uVar3 + 1) {
    abStack_3b[uVar3 + 1] = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
    uVar1 = uVar1 / 10;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    recovered_10001238(param_1,param_2,abStack_3b[uVar3]);
  }
  return;
}

#undef DAT_1000805c
#undef DAT_10008064
#undef DAT_10008068
#undef str_10002d40
#undef str_10002d56
#undef abStack_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001238
 */

void recovered_10001238(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001320(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001278
 */

void recovered_10001278(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10001320(param_1);
    if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
      *(undefined1 *)(param_1 + lVar1) = 0x30;
      *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
    }
    return;
  }
  for (uVar2 = 0; (param_3 != 0 && (uVar2 < 10)); uVar2 = uVar2 + 1) {
    local_3b[uVar2 + 1] = (char)param_3 + (char)(param_3 / 10) * -10 | 0x30;
    param_3 = param_3 / 10;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    recovered_10001238(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

long recovered_10001320(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
  }
  return lVar2;
}


#undef DAT_10002898
#define DAT_10002898 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008010
#define DAT_10008010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57a4U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_1000804c
#define DAT_1000804c (*(int *)(((uintptr_t)pf_module_state + 0x57e0U)))
#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_10008058
#define DAT_10008058 (*(int *)(((uintptr_t)pf_module_state + 0x57ecU)))
#undef DAT_1000805c
#define DAT_1000805c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef DAT_10008064
#define DAT_10008064 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57f8U)))
#undef DAT_10008068
#define DAT_10008068 (*(int *)(((uintptr_t)pf_module_state + 0x57fcU)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef _DAT_1000805c
#define _DAT_1000805c (*(uint64_t *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 24))
#define local_70 (*(undefined8 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000133c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_1000133c(uint param_1,undefined4 *param_2,uint param_3,undefined1 *param_4,uint *param_5)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;

  recovered_10000f48(param_4,0x68);
  local_70 = 0;
  uStack_68 = 0;
  if (DAT_10008018 == 0) {
    return 0;
  }
  if (((((param_3 & 3) != 0) || (param_5 == (uint *)0x0)) ||
      (param_3 != 0 && param_2 == (undefined4 *)0x0)) || (param_4 == (undefined1 *)0x0)) {
    DAT_10008054 = 1;
LAB_100013f8:
    iRam0000000010008050 = iRam0000000010008050 + 1;
    return 0;
  }
  *param_5 = 0;
  iVar5 = 600;
LAB_100013b0:
  if (iVar5 != 0) {
    uVar2 = recovered_10001a2c(4,(long)&uStack_68 + 4);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((uStack_68 & 0x100000000) != 0) goto LAB_10001404;
    iVar5 = iVar5 + -1;
    if ((iVar5 == 0) || (uVar2 = recovered_10001ad8(100), (int)uVar2 != 0)) goto LAB_100013b0;
    goto LAB_100013d8;
  }
LAB_10001404:
  if ((PF_PART4(uStack_68, 4) & 1) == 0) {
    uVar2 = 0;
    DAT_10008054 = 3;
    goto LAB_10001418;
  }
  iVar5 = DAT_1000804c + 1;
  DAT_1000804c = iVar5;
  uVar2 = recovered_10001b4c(4);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  recovered_10001bac((*(int **)((uintptr_t)pf_module_state+0x5794U)));
  uVar2 = recovered_10001b4c(0x10);
  if (((int)uVar2 == 0) || (uVar2 = recovered_10001b4c(0x14), (int)uVar2 == 0)) goto LAB_100014ac;
  uVar4 = param_1 & 0xff | iVar5 * 0x40000 & 0xffc0000U | 0x4c00;
  uVar2 = recovered_10001b4c(0x18);
  if ((int)uVar2 == 0) goto LAB_100014ac;
  uVar6 = 0;
  while (uVar6 < param_3) {
    uVar2 = recovered_10001b4c((ulong)((int)uVar6 + 0x1c));
    uVar6 = uVar6 + 4;
    if ((int)uVar2 == 0) {
LAB_100014ac:
      recovered_10001bdc();
      return 0;
    }
  }
  recovered_10001bac((*(int **)((uintptr_t)pf_module_state+0x5794U)));
  if ((DAT_10008010 == 0) ||
     (uVar2 = recovered_10001c20((*(int **)((uintptr_t)pf_module_state+0x5794U)),DAT_10008010 + 0x104), (int)uVar2 == 0)) {
    recovered_10001bdc();
    uVar2 = 0;
    DAT_10008054 = 2;
  }
  else {
    iVar5 = 300;
    do {
      if (iVar5 == 0) {
LAB_10001560:
        if ((uStack_68 & 0x100000000) == 0) {
          uVar2 = 0;
          DAT_10008054 = 5;
          goto LAB_10001418;
        }
        if (((uint)uStack_68 & 0xfffffff) == uVar4) {
          recovered_10001bac((*(int **)((uintptr_t)pf_module_state+0x5794U)));
          uVar2 = recovered_10001a2c(0x14,(long)&local_70 + 4);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          if ((0x68 < PF_PART4(local_70, 4) - 8U) || ((local_70 & 0x300000000) != 0)) {
            uVar2 = 0;
            DAT_10008054 = 6;
            goto LAB_10001418;
          }
          uVar2 = recovered_10001a2c(0x18,(long)&uStack_68);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          if (((uint)uStack_68 & 0xfffffff) == uVar4) {
            uVar2 = recovered_10001a2c(0x1c,(long)&local_70);
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            DAT_10008058 = (int)local_70;
            if (param_1 == 6) {
              if (param_3 < 4) {
                uVar3 = 0xffffffff;
              }
              else {
                uVar3 = *param_2;
              }
              if ((int)local_70 == 0) {
LAB_1000166c:
                uVar4 = 0;
                uVar1 = PF_PART4(local_70, 4) - 8;
                do {
                  if (uVar1 <= uVar4) {
                    *param_5 = uVar1;
                    DAT_10008058 = 0;
                    return 1;
                  }
                  uVar2 = recovered_10001a2c((ulong)(uVar4 + 0x20),(long)(param_4 + uVar4));
                  uVar4 = uVar4 + 4;
                } while ((int)uVar2 != 0);
                return 0;
              }
              _DAT_1000805c = DAT_10002898;
              DAT_10008068 = (int)local_70;
              DAT_10008064 = uVar3;
            }
            else if ((int)local_70 == 0) goto LAB_1000166c;
            DAT_10008054 = 8;
            goto LAB_100013f8;
          }
        }
        uVar2 = 0;
        DAT_10008054 = 7;
        goto LAB_10001418;
      }
      uVar2 = recovered_10001a2c(4,(long)&uStack_68 + 4);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if ((PF_PART4(uStack_68, 4) >> 1 & 1) != 0) {
        uVar2 = 0;
        DAT_10008054 = 4;
        goto LAB_10001418;
      }
      if ((uStack_68 & 0x100000000) != 0) {
        recovered_10001bac((*(int **)((uintptr_t)pf_module_state+0x5794U)));
        uVar2 = recovered_10001a2c(0x18,(long)&uStack_68);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if (((uint)uStack_68 & 0xfffffff) == uVar4) goto LAB_10001560;
      }
      iVar5 = iVar5 + -1;
    } while ((iVar5 == 0) || (uVar2 = recovered_10001ad8(100), (int)uVar2 != 0));
LAB_100013d8:
    DAT_10008054 = 10;
  }
LAB_10001418:
  DAT_10008018 = 0;
  iRam0000000010008050 = iRam0000000010008050 + 1;
  return uVar2;
}

#undef DAT_10002898
#undef DAT_10008000
#undef DAT_10008010
#undef DAT_10008018
#undef DAT_1000804c
#undef DAT_10008054
#undef DAT_10008058
#undef DAT_1000805c
#undef DAT_10008064
#undef DAT_10008068
#undef UNK_10008050
#undef _DAT_1000805c
#undef iRam0000000010008050
#undef uStack_68
#undef local_70

#define local_80 (*(uint *)(pf_stack_frame + 16))
#define auStack_7c (*(undefined1 (*)[124])(pf_stack_frame + 20))
#define local_14 (*(undefined4 *)(pf_stack_frame + 124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016b0
 */

bool recovered_100016b0(undefined4 param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  local_80 = 0;
  local_14 = param_1;
  uVar2 = recovered_1000133c(2,&local_14,4,auStack_7c,&local_80);
  bVar1 = (int)uVar2 == 0;
  return (!bVar1 && 2 < local_80) && (bVar1 || local_80 != 3);
}

#undef local_80
#undef auStack_7c
#undef local_14

#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_10008058
#define DAT_10008058 (*(int *)(((uintptr_t)pf_module_state + 0x57ecU)))
#undef DAT_10008078
#define DAT_10008078 (*(int *)(((uintptr_t)pf_module_state + 0x580cU)))
#undef DAT_10008080
#define DAT_10008080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5814U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5824U)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef _DAT_10008078
#define _DAT_10008078 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x580cU)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#define iStack_c4 (*(int *)(pf_stack_frame + 28))
#define iStack_c0 (*(int *)(pf_stack_frame + 32))
#define auStack_58 (*(uint (*)[22])(pf_stack_frame + 136))
#define local_c8 (*(uint *)(pf_stack_frame + 24))
#define local_5c (*(int *)(pf_stack_frame + 132))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100016f4(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;

  iVar7 = 0;
  lVar8 = 0;
  puVar6 = &DAT_10008090;
  while( true ) {
    if (lVar8 == 0xc) {
      if (DAT_10008078 == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
        piVar4 = (int *)((uintptr_t)pf_module_state+0x5e64U);
        for (lVar8 = 0; lVar8 != 0xc; lVar8 = lVar8 + 4) {
          if ((piVar4[-1] != *(int *)((long)auStack_58 + lVar8 + 0xc)) ||
             (*piVar4 != *(int *)((long)auStack_58 + lVar8))) {
            bVar2 = true;
          }
          piVar4 = piVar4 + 0x195;
        }
        bVar2 = !bVar2;
      }
      puVar5 = (undefined4 *)((uintptr_t)pf_module_state+0x5e64U);
      for (lVar8 = 0; lVar8 != 0xc; lVar8 = lVar8 + 4) {
        uVar1 = *(undefined4 *)((long)auStack_58 + lVar8);
        puVar5[-1] = *(undefined4 *)((long)auStack_58 + lVar8 + 0xc);
        *puVar5 = uVar1;
        puVar5 = puVar5 + 0x195;
      }
      _DAT_10008078 = 0x100000001;
      if (!bVar2) {
        DAT_10008080 = 1;
      }
      return 1;
    }
    local_c8 = 0;
    local_5c = iVar7;
    uVar3 = recovered_1000133c(6,&local_5c,4,(undefined1 *)&iStack_c4,&local_c8);
    if (((((int)uVar3 == 0) || (local_c8 != 8)) ||
        (bVar2 = recovered_10001c84((long)puVar6,iStack_c4,(undefined4 *)((long)auStack_58 + lVar8))
        , !bVar2)) ||
       ((bVar2 = recovered_10001c84((long)puVar6,iStack_c0,
                                    (undefined4 *)((long)auStack_58 + lVar8 + 0xc)), !bVar2 ||
        (*(uint *)((long)auStack_58 + lVar8) < *(uint *)((long)auStack_58 + lVar8 + 0xc))))) break;
    lVar8 = lVar8 + 4;
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x654;
  }
  _DAT_10008078 = _DAT_10008078 & 0xffffffff;
  if ((DAT_10008018 != 0) && (DAT_10008058 == 0)) {
    iRam0000000010008050 = iRam0000000010008050 + 1;
    DAT_10008054 = 9;
  }
  return 0;
}

#undef DAT_10008018
#undef DAT_10008054
#undef DAT_10008058
#undef DAT_10008078
#undef DAT_10008080
#undef DAT_10008090
#undef UNK_10008050
#undef _DAT_10008078
#undef iRam0000000010008050
#undef iStack_c4
#undef iStack_c0
#undef auStack_58
#undef local_c8
#undef local_5c

#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_1000803c
#define DAT_1000803c (*(uint *)(((uintptr_t)pf_module_state + 0x57d0U)))
#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_100086e0
#define DAT_100086e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e74U)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#define uStack_d0 (*(uint *)(pf_stack_frame + 32))
#define aiStack_cc (*(int (*)[51])(pf_stack_frame + 36))
#define local_d4 (*(uint *)(pf_stack_frame + 28))
#define local_64 (*(uint *)(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a4
 */

undefined8 recovered_100018a4(void)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;

  lVar5 = 0;
  DAT_1000803c = 0;
  puVar6 = &DAT_100086e0;
  uVar4 = 1;
  do {
    if (lVar5 == 3) {
      return uVar4;
    }
    local_d4 = 0;
    uStack_d0 = 0;
    *puVar6 = 0;
    local_64 = (uint)lVar5;
    uVar3 = recovered_1000133c(8,&local_64,4,(undefined1 *)aiStack_cc,&uStack_d0);
    iVar1 = aiStack_cc[0];
    if ((((int)uVar3 == 0) || (uStack_d0 < 4)) ||
       (bVar2 = recovered_10001c84((long)(puVar6 + -0x194),aiStack_cc[0],&local_d4), !bVar2)) {
      if (DAT_10008018 == 0) {
        return 0;
      }
      uVar4 = 0;
      iRam0000000010008050 = iRam0000000010008050 + 1;
      DAT_10008054 = 9;
    }
    else {
      puVar6[-3] = iVar1;
      puVar6[-2] = local_d4;
      puVar6[-1] = puVar6[(ulong)local_d4 * 6 + -0x184];
      *puVar6 = 1;
      DAT_1000803c = DAT_1000803c | 1 << (ulong)((uint)lVar5 & 0x1f);
    }
    lVar5 = lVar5 + 1;
    puVar6 = puVar6 + 0x195;
  } while( true );
}

#undef DAT_10008018
#undef DAT_1000803c
#undef DAT_10008054
#undef DAT_100086e0
#undef UNK_10008050
#undef iRam0000000010008050
#undef uStack_d0
#undef aiStack_cc
#undef local_d4
#undef local_64

#undef DAT_100086e0
#define DAT_100086e0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e74U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c0
 */

bool recovered_100019c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;

  piVar5 = &DAT_100086e0;
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if ((uVar4 == 3) || (*piVar5 == 0)) break;
    uVar1 = piVar5[-2];
    uVar3 = recovered_10001ce8((long)(piVar5 + -0x194),param_1);
    piVar5 = piVar5 + 0x195;
    uVar2 = uVar4 + 1;
  } while (uVar1 == uVar3);
  return 2 < uVar4;
}

#undef DAT_100086e0

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x579cU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a2c
 */

undefined8 recovered_10001a2c(ulong param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;

  if ((((param_2 != 0) && ((*(int **)((uintptr_t)pf_module_state+0x5794U)) != (int *)0x0)) && (DAT_10008008 != 0)) &&
     (*(*(int **)((uintptr_t)pf_module_state+0x5794U)) == 0x54584b57)) {
    uVar1 = DAT_10008008 + (param_1 & 0xffffffff);
    if (((uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[2] < 0xc0) || ((*(int **)((uintptr_t)pf_module_state+0x5794U))[0x2f] == 0)) {
      if ((uVar1 >> 0x20 != 0) || (((uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[2] < 0x6c || ((*(int **)((uintptr_t)pf_module_state+0x5794U))[0x1a] == 0))))
      goto LAB_10001abc;
      iVar2 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[0x1a])(uVar1,4,param_2);
    }
    else {
      iVar2 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[0x2f])(uVar1,4);
    }
    if (iVar2 != 0) {
      return 1;
    }
  }
LAB_10001abc:
  DAT_10008054 = 2;
  iRam0000000010008050 = iRam0000000010008050 + 1;
  DAT_10008018 = 0;
  return 0;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_10008054
#undef UNK_10008050
#undef iRam0000000010008050

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad8
 */

undefined8 recovered_10001ad8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0) {
    return 1;
  }
  if (((((*(int **)((uintptr_t)pf_module_state+0x5794U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x5794U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[2] < 0x34)) ||
     (((*(int **)((uintptr_t)pf_module_state+0x5794U))[0xc] == 0 || (iVar1 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[0xc])(), iVar1 == 0)))
     ) {
    iRam0000000010008050 = iRam0000000010008050 + 1;
    DAT_10008054 = 10;
    return 0;
  }
  return 1;
}

#undef DAT_10008000
#undef DAT_10008054
#undef UNK_10008050
#undef iRam0000000010008050

#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008008
#define DAT_10008008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x579cU)))
#undef DAT_10008018
#define DAT_10008018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b4c
 */

undefined8 recovered_10001b4c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((*(int **)((uintptr_t)pf_module_state+0x5794U)) != (int *)0x0) && (DAT_10008008 != 0)) {
    uVar1 = recovered_10001c20((*(int **)((uintptr_t)pf_module_state+0x5794U)),DAT_10008008 + (param_1 & 0xffffffff));
    if ((int)uVar1 != 0) {
      return 1;
    }
  }
  iRam0000000010008050 = iRam0000000010008050 + 1;
  DAT_10008054 = 2;
  DAT_10008018 = 0;
  return 0;
}

#undef DAT_10008000
#undef DAT_10008008
#undef DAT_10008018
#undef DAT_10008054
#undef UNK_10008050
#undef iRam0000000010008050

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bac
 */

void recovered_10001bac(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bdc
 */

void recovered_10001bdc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined8 unaff_x30;

  recovered_10001bac((*(int **)((uintptr_t)pf_module_state+0x5794U)));
  uVar2 = recovered_10001b4c(4);
  if ((int)uVar2 == 0) {
    return;
  }
  if (((((*(int **)((uintptr_t)pf_module_state+0x5794U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x5794U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[2] < 0x7c)) || (uVar1 = (*(int **)((uintptr_t)pf_module_state+0x5794U))[0x1e], uVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uVar1)((code *)(ulong)uVar1,unaff_x30);
  return;
}

#undef DAT_10008000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c20
 */

undefined8 recovered_10001c20(int *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c84
 */

bool recovered_10001c84(long param_1,int param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;

  if ((param_1 != 0) && (param_3 != (undefined4 *)0x0)) {
    uVar2 = *(uint *)(param_1 + 0x62c);
    piVar4 = (int *)(param_1 + 0x3c);
    for (uVar3 = 0; uVar2 != uVar3; uVar3 = uVar3 + 1) {
      piVar1 = piVar4 + -4;
      if (*(int *)(param_1 + 0x14) != 0) {
        piVar1 = piVar4;
      }
      if (*piVar1 == param_2) {
        *param_3 = (int)uVar3;
        return uVar3 < uVar2;
      }
      piVar4 = piVar4 + 6;
    }
  }
  return false;
}


#undef DAT_100028b0
#define DAT_100028b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_10008078
#define DAT_10008078 (*(int *)(((uintptr_t)pf_module_state + 0x580cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ce8
 */

uint recovered_10001ce8(long param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 - 2U < 3) {
      lVar2 = *(long *)(&DAT_100028b0 + (ulong)(param_2 - 2U) * 8);
    }
    else {
      lVar2 = 0x638;
    }
    uVar1 = *(uint *)(param_1 + lVar2);
    if (DAT_10008078 != 0) {
      if (uVar1 <= *(uint *)(param_1 + 0x63c)) {
        uVar1 = *(uint *)(param_1 + 0x63c);
      }
      if (*(uint *)(param_1 + 0x640) <= uVar1) {
        uVar1 = *(uint *)(param_1 + 0x640);
      }
      return uVar1;
    }
  }
  return uVar1;
}

#undef DAT_100028b0
#undef DAT_10008078

#undef DAT_100028a0
#define DAT_100028a0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_100028a8
#define DAT_100028a8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_10002b97
#define DAT_10002b97 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x32bU)))
#undef DAT_10003414
#define DAT_10003414 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xba8U)))
#undef DAT_10008000
#define DAT_10008000 (*(int * *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_1000801c
#define DAT_1000801c (*(int *)(((uintptr_t)pf_module_state + 0x57b0U)))
#undef DAT_10008020
#define DAT_10008020 (*(int *)(((uintptr_t)pf_module_state + 0x57b4U)))
#undef DAT_10008024
#define DAT_10008024 (*(int *)(((uintptr_t)pf_module_state + 0x57b8U)))
#undef DAT_10008028
#define DAT_10008028 (*(int *)(((uintptr_t)pf_module_state + 0x57bcU)))
#undef DAT_1000802c
#define DAT_1000802c (*(uint *)(((uintptr_t)pf_module_state + 0x57c0U)))
#undef DAT_10008030
#define DAT_10008030 (*(ushort *)(((uintptr_t)pf_module_state + 0x57c4U)))
#undef DAT_10008044
#define DAT_10008044 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57d8U)))
#undef DAT_10008054
#define DAT_10008054 (*(int *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_1000805c
#define DAT_1000805c (*(int *)(((uintptr_t)pf_module_state + 0x57f0U)))
#undef DAT_1000806c
#define DAT_1000806c (*(int *)(((uintptr_t)pf_module_state + 0x5800U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint *)(((uintptr_t)pf_module_state + 0x5804U)))
#undef DAT_10008074
#define DAT_10008074 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5808U)))
#undef DAT_10008078
#define DAT_10008078 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x580cU)))
#undef DAT_10008080
#define DAT_10008080 (*(int *)(((uintptr_t)pf_module_state + 0x5814U)))
#undef DAT_10008084
#define DAT_10008084 (*(int *)(((uintptr_t)pf_module_state + 0x5818U)))
#undef DAT_10008088
#define DAT_10008088 (*(int *)(((uintptr_t)pf_module_state + 0x581cU)))
#undef DAT_1000808c
#define DAT_1000808c (*(uint *)(((uintptr_t)pf_module_state + 0x5820U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5824U)))
#undef DAT_10009390
#define DAT_10009390 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b24U)))
#undef PTR_str_100036f1_100040a8
#define PTR_str_100036f1_100040a8 (*(char * *)(((uintptr_t)pf_module_state + 0x183cU)))
#undef UNK_100086dc
#define UNK_100086dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e70U)))
#undef UNK_10008d30
#define UNK_10008d30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64c4U)))
#undef UNK_10009384
#define UNK_10009384 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b18U)))
#undef str_100028f1
#define str_100028f1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85U)))
#undef str_10002f03
#define str_10002f03 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x697U)))
#undef str_100031e5
#define str_100031e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x979U)))
#undef str_100031f6
#define str_100031f6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98aU)))
#undef str_1000320e
#define str_1000320e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9a2U)))
#undef str_10003308
#define str_10003308 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa9cU)))
#undef str_1000330e
#define str_1000330e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaa2U)))
#undef str_10003317
#define str_10003317 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaabU)))
#undef str_10003326
#define str_10003326 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xabaU)))
#undef str_100033ff
#define str_100033ff (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb93U)))
#undef str_10003417
#define str_10003417 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbabU)))
#undef str_1000342e
#define str_1000342e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbc2U)))
#undef str_10003452
#define str_10003452 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbe6U)))
#undef str_10003478
#define str_10003478 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc0cU)))
#undef str_10003480
#define str_10003480 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc14U)))
#undef str_1000349e
#define str_1000349e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc32U)))
#undef str_100034b0
#define str_100034b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc44U)))
#undef str_100034d7
#define str_100034d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc6bU)))
#undef str_100034fc
#define str_100034fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc90U)))
#undef str_10003518
#define str_10003518 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcacU)))
#undef str_10003528
#define str_10003528 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcbcU)))
#undef str_10003645
#define str_10003645 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd9U)))
#undef str_1000379a
#define str_1000379a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2eU)))
#undef uRam00000000100086dc
#define uRam00000000100086dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e70U)))
#undef uRam0000000010008d30
#define uRam0000000010008d30 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64c4U)))
#undef uRam0000000010009384
#define uRam0000000010009384 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d48
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001d48(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;

  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(int **)((uintptr_t)pf_module_state+0x5794U)) == (int *)0x0) {
    return 0;
  }
  recovered_10000f48((undefined1 *)param_1,500);
  *param_1 = DAT_100028a0;
  *(undefined8 *)((long)param_1 + 0xc) = DAT_100028a8;
  if (((((*(int **)((uintptr_t)pf_module_state+0x5794U)) == (int *)0x0) || (*(*(int **)((uintptr_t)pf_module_state+0x5794U)) != 0x54584b57)) ||
      ((uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[2] < 0x30)) || ((*(int **)((uintptr_t)pf_module_state+0x5794U))[0xb] == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)(ulong)(uint)(*(int **)((uintptr_t)pf_module_state+0x5794U))[0xb])();
  }
  *(undefined4 *)(param_1 + 3) = uVar4;
  recovered_1000263c((undefined1 *)((long)param_1 + 0x54),0x40,str_100028f1);
  recovered_1000263c((undefined1 *)((long)param_1 + 0x94),0x40,str_10002f03);
  if (DAT_1000801c == 0 && DAT_10008024 == 0) {
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 8;
    if (DAT_10008020 == 0) {
      *(uint *)(param_1 + 10) =
           DAT_10008028 << 0x18 | (DAT_1000802c & 0xff) << 0x10 | (uint)DAT_10008030;
      if (DAT_1000805c != 0) {
        recovered_100011a8((long)param_1 + 0xd4,0x60);
        recovered_10001128((long)param_1 + 0xd4,0x60,&DAT_10002b97);
      }
      recovered_10001128((long)param_1 + 0xd4,0x60,str_10003308);
      if (DAT_10008054 == 0) {
        pcVar6 = str_10003317;
      }
      else {
        pcVar6 = recovered_10001180(DAT_10008054);
        recovered_10001128((long)param_1 + 0xd4,0x60,pcVar6);
        pcVar6 = str_1000330e;
      }
      recovered_10001128((long)param_1 + 0xd4,0x60,pcVar6);
      if (DAT_10008028 - 1U < 8) {
        pcVar6 = (&PTR_str_100036f1_100040a8)[DAT_10008028 - 1U];
      }
      else {
        pcVar6 = str_1000379a;
      }
      recovered_10001128((long)param_1 + 0xd4,0x60,pcVar6);
      pcVar6 = str_10003326;
      goto LAB_100020f8;
    }
    recovered_1000264c();
    if (DAT_10008018 == 0) {
LAB_10001fb8:
      pcVar6 = str_100031f6;
    }
    else {
      uVar5 = recovered_100018a4();
      uVar4 = uRam0000000010008d30;
      if ((int)uVar5 == 0) goto LAB_10001fb8;
      puVar9 = (uint *)((uintptr_t)pf_module_state+0x5e70U);
      *(undefined4 *)((long)param_1 + 0x44) = uRam00000000100086dc;
      *(undefined4 *)(param_1 + 9) = uVar4;
      *(undefined4 *)((long)param_1 + 0x4c) = uRam0000000010009384;
      lVar10 = 3;
      uVar11 = 0;
      do {
        uVar1 = *puVar9;
        if (*puVar9 <= uVar11) {
          uVar1 = uVar11;
        }
        lVar10 = lVar10 + -1;
        puVar9 = puVar9 + 0x195;
        uVar11 = uVar1;
      } while (lVar10 != 0);
      *(uint *)((long)param_1 + 0x34) = uVar1;
      pcVar6 = str_100031e5;
    }
    recovered_1000263c((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar6);
    recovered_100011a8((long)param_1 + 0xd4,0x60);
    *(undefined4 *)(param_1 + 10) = DAT_10008044;
    DAT_10009390 = 0;
    pcVar6 = str_1000320e;
    goto LAB_100020f8;
  }
  uVar12 = 1;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 4;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  recovered_1000264c();
  if (DAT_10008018 == 0) {
LAB_10001ee4:
    uVar8 = 0;
    bVar7 = true;
  }
  else {
    if (DAT_1000801c != 0) {
      uVar5 = recovered_100016f4();
      uVar12 = (ushort)((int)uVar5 == 0);
      if (DAT_10008018 == 0) goto LAB_10001ee4;
    }
    uVar5 = recovered_100018a4();
    if ((int)uVar5 == 0) goto LAB_10001ee4;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x12;
    bVar3 = recovered_100019c0(DAT_1000806c);
    bVar7 = false;
    DAT_10008070 = (uint)!bVar3;
    uVar8 = 1;
  }
  if ((DAT_1000801c == 0) ||
     (uVar13 = NEON_umaxv(CONCAT26(-(ushort)(DAT_10008088 != 0),
                                   CONCAT24(-(ushort)(DAT_10008084 != 0),
                                            CONCAT22(-(ushort)(DAT_10008080 != 0),
                                                     -(ushort)(DAT_10008070 != 0)))),2),
     (~uVar13 & (uVar12 ^ 0xffff) & uVar8) == 0)) {
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 8;
  }
  iVar2 = DAT_1000806c;
  *(int *)((long)param_1 + 0x1c) = DAT_1000806c;
  *(undefined4 *)(param_1 + 10) = DAT_10008044;
  uVar4 = uRam0000000010008d30;
  if (bVar7) {
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    if (DAT_10008018 != 0) {
      pcVar6 = str_10003417;
      goto LAB_10001fb0;
    }
LAB_1000205c:
    recovered_1000263c((undefined1 *)((long)param_1 + 0xd4),0x60,str_100033ff);
    recovered_10001128((long)param_1 + 0xd4,0x60,&DAT_10003414);
    pcVar6 = recovered_10001180(DAT_10008054);
LAB_10002084:
    recovered_10001128((long)param_1 + 0xd4,0x60,pcVar6);
  }
  else {
    puVar9 = (uint *)((uintptr_t)pf_module_state+0x5e70U);
    *(undefined4 *)((long)param_1 + 0x44) = uRam00000000100086dc;
    *(undefined4 *)(param_1 + 9) = uVar4;
    *(undefined4 *)((long)param_1 + 0x4c) = uRam0000000010009384;
    lVar10 = 3;
    uVar11 = 0;
    do {
      uVar1 = *puVar9;
      if (*puVar9 <= uVar11) {
        uVar1 = uVar11;
      }
      lVar10 = lVar10 + -1;
      puVar9 = puVar9 + 0x195;
      uVar11 = uVar1;
    } while (lVar10 != 0);
    *(uint *)((long)param_1 + 0x34) = uVar1;
    if (DAT_10008018 == 0) goto LAB_1000205c;
    if (DAT_10008088 != 0) {
      pcVar6 = str_1000342e;
      goto LAB_10001fb0;
    }
    if (DAT_10008084 == 0) {
      if (DAT_10008024 != 0) {
        pcVar6 = recovered_1000267c(iVar2);
        recovered_1000263c((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar6);
        pcVar6 = str_1000349e;
        if (DAT_10008070 != 0) {
          pcVar6 = str_10003480;
        }
        recovered_10001128((long)param_1 + 0xd4,0x60,pcVar6);
        recovered_100011a8((long)param_1 + 0xd4,0x60);
        goto LAB_10002088;
      }
      if (uVar12 != 0) {
        pcVar6 = str_100034b0;
LAB_10001fb0:
        recovered_1000263c((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar6);
        goto LAB_10002088;
      }
      if (DAT_10008080 != 0) {
        pcVar6 = str_100034d7;
        goto LAB_10001fb0;
      }
      pcVar6 = recovered_1000267c(iVar2);
      recovered_1000263c((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar6);
      pcVar6 = str_10003518;
      if (DAT_10008070 != 0) {
        pcVar6 = str_100034fc;
      }
      goto LAB_10002084;
    }
    recovered_1000263c((undefined1 *)((long)param_1 + 0xd4),0x60,str_10003452);
    uVar11 = DAT_1000808c;
    if (DAT_1000808c != 0) {
      recovered_10001128((long)param_1 + 0xd4,0x60,str_10003478);
      if ((int)DAT_1000808c < 0) {
        recovered_10001238((long)param_1 + 0xd4,0x60,0x2d);
        uVar11 = -uVar11;
      }
      recovered_10001278((long)param_1 + 0xd4,0x60,uVar11);
      recovered_10001238((long)param_1 + 0xd4,0x60,0x29);
    }
  }
LAB_10002088:
  DAT_10009390 = 0;
  pcVar6 = str_10003645;
  if (DAT_10008024 != 0) {
    pcVar6 = str_10003528;
  }
LAB_100020f8:
  recovered_1000263c((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar6);
  return 1;
}

#undef DAT_100028a0
#undef DAT_100028a8
#undef DAT_10002b97
#undef DAT_10003414
#undef DAT_10008000
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008020
#undef DAT_10008024
#undef DAT_10008028
#undef DAT_1000802c
#undef DAT_10008030
#undef DAT_10008044
#undef DAT_10008054
#undef DAT_1000805c
#undef DAT_1000806c
#undef DAT_10008070
#undef DAT_10008074
#undef DAT_10008078
#undef DAT_10008080
#undef DAT_10008084
#undef DAT_10008088
#undef DAT_1000808c
#undef DAT_10008090
#undef DAT_10009390
#undef PTR_str_100036f1_100040a8
#undef UNK_100086dc
#undef UNK_10008d30
#undef UNK_10009384
#undef str_100028f1
#undef str_10002f03
#undef str_100031e5
#undef str_100031f6
#undef str_1000320e
#undef str_10003308
#undef str_1000330e
#undef str_10003317
#undef str_10003326
#undef str_100033ff
#undef str_10003417
#undef str_1000342e
#undef str_10003452
#undef str_10003478
#undef str_10003480
#undef str_1000349e
#undef str_100034b0
#undef str_100034d7
#undef str_100034fc
#undef str_10003518
#undef str_10003528
#undef str_10003645
#undef str_1000379a
#undef uRam00000000100086dc
#undef uRam0000000010008d30
#undef uRam0000000010009384

#undef DAT_10008000
#define DAT_10008000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5794U)))
#undef DAT_10008018
#define DAT_10008018 (*(int *)(((uintptr_t)pf_module_state + 0x57acU)))
#undef DAT_1000801c
#define DAT_1000801c (*(int *)(((uintptr_t)pf_module_state + 0x57b0U)))
#undef DAT_10008024
#define DAT_10008024 (*(int *)(((uintptr_t)pf_module_state + 0x57b8U)))
#undef DAT_10008058
#define DAT_10008058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57ecU)))
#undef DAT_1000806c
#define DAT_1000806c (*(uint *)(((uintptr_t)pf_module_state + 0x5800U)))
#undef DAT_10008070
#define DAT_10008070 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5804U)))
#undef DAT_10008074
#define DAT_10008074 (*(int *)(((uintptr_t)pf_module_state + 0x5808U)))
#undef DAT_10008080
#define DAT_10008080 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5814U)))
#undef DAT_10008084
#define DAT_10008084 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5818U)))
#undef DAT_10008088
#define DAT_10008088 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x581cU)))
#undef DAT_1000808c
#define DAT_1000808c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5820U)))
#undef DAT_100080c4
#define DAT_100080c4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5858U)))
#undef DAT_100086d4
#define DAT_100086d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5e68U)))
#undef DAT_10009390
#define DAT_10009390 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x6b24U)))
#define local_78 (*(uint (*)[30])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002218
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_10002218(uint *param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (((*param_1 < 0x38) || (param_1[1] != 1)) || (param_1[2] - 5 < 0xfffffffc)) {
    return 0;
  }
  recovered_1000264c();
  iVar3 = DAT_1000801c;
  if ((DAT_10008018 == 0) || (DAT_1000801c == 0 && DAT_10008024 == 0)) {
    DAT_10009390 = 0;
    return 0;
  }
  uVar1 = param_1[2];
  DAT_10008070 = 1;
  DAT_10008084 = 0;
  DAT_10008088 = 0;
  DAT_1000808c = 0;
  DAT_1000806c = uVar1;
  if (((DAT_1000801c != 0) && (uVar7 = recovered_100016f4(), (int)uVar7 == 0)) ||
     (uVar7 = recovered_100018a4(), (int)uVar7 == 0)) {
    DAT_10008084 = 1;
    DAT_1000808c = DAT_10008058;
    DAT_10009390 = 0;
    return 0;
  }
  bVar5 = recovered_100019c0(uVar1);
  if (bVar5) {
    DAT_10008070 = 0;
    DAT_10008080 = 0;
    DAT_10009390 = 0;
    return 1;
  }
  puVar10 = &(*(int **)((uintptr_t)pf_module_state+0x5794U));
  DAT_10008080 = 0;
  uVar12 = 0;
  for (lVar9 = 0; lVar9 != 0xc; lVar9 = lVar9 + 4) {
    *(undefined4 *)((long)local_78 + lVar9 + 0xc) = *(undefined4 *)((long)puVar10 + 0x6d4);
    *(undefined4 *)((long)local_78 + lVar9) = *(undefined4 *)(puVar10 + 0xdb);
    uVar15 = *(uint *)(puVar10 + 0x13);
    if (*(uint *)(puVar10 + 0x13) <= uVar12) {
      uVar15 = uVar12;
    }
    puVar10 = (undefined8 *)((long)puVar10 + 0x654);
    uVar12 = uVar15;
  }
  if ((DAT_10008074 != 0) && (uVar7 = recovered_10001ad8(uVar12), (int)uVar7 == 0)) {
    DAT_10008084 = 1;
    DAT_10009390 = 0;
    return uVar7;
  }
  uVar17 = 0;
  puVar10 = &(*(int **)((uintptr_t)pf_module_state+0x5794U));
  uVar15 = 0;
  for (lVar9 = 0; lVar9 != 3; lVar9 = lVar9 + 1) {
    uVar6 = recovered_10001ce8((long)(puVar10 + 0x12),uVar1);
    uVar16 = uVar15;
    if (*(uint *)(puVar10 + 0xdb) != uVar6) {
      uVar7 = recovered_100026a4((uint)lVar9,
                                 *(int *)((long)puVar10 +
                                         (ulong)uVar6 * 0x18 +
                                         (ulong)(*(int *)((long)puVar10 + 0xa4) != 0) * 0x10 + 0xbc)
                                );
      if ((int)uVar7 == 0) {
        DAT_10008074 = 1;
        goto LAB_100024e8;
      }
      DAT_10008074 = 1;
      uVar17 = uVar17 | 1 << (ulong)((uint)lVar9 & 0x1f);
      uVar16 = *(uint *)((long)puVar10 + (ulong)uVar6 * 0x18 + 0xc4);
      if (uVar16 <= uVar15) {
        uVar16 = uVar15;
      }
    }
    puVar10 = (undefined8 *)((long)puVar10 + 0x654);
    uVar15 = uVar16;
  }
  if ((((((DAT_10008018 == 0) || (uVar15 == 0)) ||
        (uVar7 = recovered_10001ad8(uVar15), (int)uVar7 != 0)) && (DAT_10008018 != 0)) &&
      ((iVar3 == 0 || (uVar7 = recovered_100016f4(), (int)uVar7 != 0)))) &&
     ((uVar7 = recovered_100018a4(), (int)uVar7 != 0 && (bVar5 = recovered_100019c0(uVar1), bVar5)))
     ) {
    DAT_10008070 = 0;
    DAT_10008080 = 0;
    DAT_10008084 = 0;
    DAT_10008088 = 0;
    DAT_1000808c = 0;
    DAT_10009390 = 0;
    return 1;
  }
LAB_100024e8:
  uVar4 = DAT_10008058;
  DAT_10008084 = 1;
  if (uVar15 <= uVar12) {
    uVar15 = uVar12;
  }
  if (DAT_10008018 != 0) {
    if (uVar17 == 0) goto LAB_10002618;
    uVar7 = recovered_10001ad8(uVar15);
    if ((int)uVar7 != 0) {
      uVar13 = 3;
      bVar5 = true;
      uVar1 = 0;
      while( true ) {
        uVar12 = uVar1;
        bVar2 = bVar5;
        if (uVar13 == 0) break;
        uVar14 = uVar13 - 1;
        iVar8 = (int)uVar13;
        uVar13 = uVar14;
        bVar5 = bVar2;
        uVar1 = uVar12;
        if ((uVar17 >> (ulong)(iVar8 - 1U & 0x1f) & 1) != 0) {
          lVar9 = (uVar14 & 0xffffffff) * 0x654;
          uVar15 = local_78[uVar14 & 0xffffffff];
          bVar5 = false;
          if (uVar15 < *(uint *)(lVar9 + ((uintptr_t)pf_module_state+0x5e50U))) {
            uVar7 = recovered_100026a4((uint)uVar14,local_78[(uVar14 & 0xffffffff) + 3]);
            if ((int)uVar7 == 0) {
              if (DAT_10008018 == 0) goto LAB_1000260c;
              bVar2 = false;
            }
            bVar5 = bVar2;
            uVar1 = *(uint *)(&DAT_100080c4 + lVar9 + (ulong)uVar15 * 0x18);
            if (*(uint *)(&DAT_100080c4 + lVar9 + (ulong)uVar15 * 0x18) <= uVar12) {
              uVar1 = uVar12;
            }
          }
        }
      }
      if (((DAT_10008018 != 0) && (uVar7 = recovered_10001ad8(uVar12), (int)uVar7 != 0)) &&
         (uVar7 = recovered_100018a4(), (int)uVar7 != 0)) {
        puVar11 = &DAT_100086d4;
        for (lVar9 = 0; lVar9 != 3; lVar9 = lVar9 + 1) {
          if (((uVar17 >> (ulong)((uint)lVar9 & 0x1f) & 1) != 0) &&
             ((puVar11[3] == 0 || (*puVar11 != local_78[lVar9 + 3])))) {
            bVar2 = false;
          }
          puVar11 = puVar11 + 0x195;
        }
        if (bVar2) goto LAB_10002618;
      }
    }
  }
LAB_1000260c:
  DAT_10008088 = 1;
LAB_10002618:
  if ((iVar3 != 0) && (DAT_10008018 != 0)) {
    recovered_100016f4();
  }
  DAT_10009390 = 0;
  DAT_1000808c = uVar4;
  return 0;
}

#undef DAT_10008000
#undef DAT_10008018
#undef DAT_1000801c
#undef DAT_10008024
#undef DAT_10008058
#undef DAT_1000806c
#undef DAT_10008070
#undef DAT_10008074
#undef DAT_10008080
#undef DAT_10008084
#undef DAT_10008088
#undef DAT_1000808c
#undef DAT_100080c4
#undef DAT_100086d4
#undef DAT_10009390
#undef local_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000263c
 */

void recovered_1000263c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10001320((long)param_1);
  if ((param_1 != (undefined1 *)0x0) && (param_3 != (char *)0x0)) {
    pcVar2 = param_1 + uVar1;
    while( true ) {
      uVar1 = uVar1 + 1;
      if (*param_3 == '\0' || param_2 <= uVar1) break;
      *pcVar2 = *param_3;
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + 1;
    }
    *pcVar2 = '\0';
  }
  return;
}


#undef DAT_10009390
#define DAT_10009390 (*(int *)(((uintptr_t)pf_module_state + 0x6b24U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000264c
 */

void recovered_1000264c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10009390;
      cVar1 = '\x01';
      { __typeof__(DAT_10009390) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10009390),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    do {
    } while (DAT_10009390 != 0);
  }
  return;
}

#undef DAT_10009390

#undef PTR_DAT_100040e8
#define PTR_DAT_100040e8 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x187cU)))
#undef str_100037bb
#define str_100037bb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000267c
 */

char * recovered_1000267c(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 1U < 4) {
    return (&PTR_DAT_100040e8)[param_1 - 1U];
  }
  return str_100037bb;
}

#undef PTR_DAT_100040e8
#undef str_100037bb

#undef DAT_10008054
#define DAT_10008054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e8U)))
#undef DAT_10008090
#define DAT_10008090 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5824U)))
#undef UNK_10008050
#define UNK_10008050 (*(int *)(((uintptr_t)pf_module_state + 0x57e4U)))
#undef iRam0000000010008050
#define iRam0000000010008050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x57e4U)))
#define uStack_94 (*(uint *)(pf_stack_frame + 28))
#define auStack_90 (*(undefined1 (*)[144])(pf_stack_frame + 32))
#define iStack_24 (*(int *)(pf_stack_frame + 140))
#define local_98 (*(undefined4 *)(pf_stack_frame + 24))
#define local_28 (*(uint *)(pf_stack_frame + 136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a4
 */

undefined8 recovered_100026a4(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  local_98 = 0;
  if ((param_1 < 3) &&
     (bVar1 = recovered_10001c84((long)(&DAT_10008090 + (ulong)param_1 * 0x654),param_2,&local_98),
     bVar1)) {
    local_28 = param_1;
    iStack_24 = param_2;
    uVar2 = recovered_1000133c(7,&local_28,8,auStack_90,&uStack_94);
  }
  else {
    uVar2 = 0;
    iRam0000000010008050 = iRam0000000010008050 + 1;
    DAT_10008054 = 9;
  }
  return uVar2;
}

#undef DAT_10008054
#undef DAT_10008090
#undef UNK_10008050
#undef iRam0000000010008050
#undef uStack_94
#undef auStack_90
#undef iStack_24
#undef local_98
#undef local_28

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
