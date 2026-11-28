/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1530U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002afc
#define DAT_10002afc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef str_10002afd
#define str_10002afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dU)))
#define local_9c (*(int (*)[39])(pf_stack_frame + 1044))
#define auStack_49c (*(undefined1 (*)[1180])(pf_stack_frame + 20))
#define abStack_6c (*(byte (*)[108])(pf_stack_frame + 1092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

/* WARNING: Removing unreachable block (ram,0x1000057c) */
/* WARNING: Removing unreachable block (ram,0x10000580) */
/* WARNING: Removing unreachable block (ram,0x10000588) */
/* WARNING: Removing unreachable block (ram,0x100005a4) */
/* WARNING: Removing unreachable block (ram,0x100005ac) */

uint recovered_10000484(void *api)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  local_9c[0] = 0;
  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    recovered_10000608(auStack_49c,0x400,&DAT_10002afc);
    if (*(uint *)((long)api + 0xc) != 0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002afc,str_10002afd,auStack_49c);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
         (*(int *)((long)api + 0x5c) != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_10001704(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_6c)
            ;
            if ((int)uVar2 != 0) {
              recovered_10000618(api,abStack_6c,local_9c);
            }
          }
        }
        if (local_9c[0] != 0) {
          if (*(uint *)((long)api + 0xc) != 0) {
            (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002afc,str_10002afd,auStack_49c);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

#undef DAT_10002afc
#undef str_10002afd
#undef local_9c
#undef auStack_49c
#undef abStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000608
 */

void recovered_10000608(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_100016e8((long)param_1);
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


#undef DAT_10002afc
#define DAT_10002afc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_10002ba7
#define DAT_10002ba7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd7U)))
#undef DAT_10002bae
#define DAT_10002bae (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdeU)))
#undef DAT_10002bb2
#define DAT_10002bb2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe2U)))
#undef DAT_10002bb7
#define DAT_10002bb7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe7U)))
#undef DAT_10002bba
#define DAT_10002bba (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef DAT_10002bbc
#define DAT_10002bbc (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_10011000
#define DAT_10011000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe530U)))
#undef DAT_10011100
#define DAT_10011100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe630U)))
#undef DAT_10011200
#define DAT_10011200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe730U)))
#undef DAT_10011300
#define DAT_10011300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe830U)))
#undef DAT_10011428
#define DAT_10011428 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe958U)))
#undef DAT_10011430
#define DAT_10011430 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe960U)))
#undef DAT_10011438
#define DAT_10011438 (*(byte *)(((uintptr_t)pf_module_state + 0xe968U)))
#undef DAT_10011439
#define DAT_10011439 (*(byte *)(((uintptr_t)pf_module_state + 0xe969U)))
#undef DAT_1001143a
#define DAT_1001143a (*(byte *)(((uintptr_t)pf_module_state + 0xe96aU)))
#undef DAT_1001143b
#define DAT_1001143b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe96bU)))
#undef DAT_1001143c
#define DAT_1001143c (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe96cU)))
#undef DAT_10011440
#define DAT_10011440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe970U)))
#undef DAT_10011444
#define DAT_10011444 (*(uint *)(((uintptr_t)pf_module_state + 0xe974U)))
#undef DAT_10011448
#define DAT_10011448 (*(uint *)(((uintptr_t)pf_module_state + 0xe978U)))
#undef DAT_10011450
#define DAT_10011450 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe980U)))
#undef DAT_10011458
#define DAT_10011458 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe988U)))
#undef DAT_10011468
#define DAT_10011468 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe998U)))
#undef DAT_1001146a
#define DAT_1001146a (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe99aU)))
#undef DAT_10011478
#define DAT_10011478 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe9a8U)))
#undef DAT_10011500
#define DAT_10011500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xea30U)))
#undef DAT_10011700
#define DAT_10011700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xec30U)))
#undef UNK_10002ad0
#define UNK_10002ad0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef UNK_10011400
#define UNK_10011400 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe930U)))
#undef UNK_1001144c
#define UNK_1001144c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe97cU)))
#undef _DAT_10011100
#define _DAT_10011100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe630U)))
#undef str_10002afd
#define str_10002afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2dU)))
#undef str_10002b36
#define str_10002b36 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x66U)))
#undef str_10002b41
#define str_10002b41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x71U)))
#undef str_10002b51
#define str_10002b51 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x81U)))
#undef str_10002b63
#define str_10002b63 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_10002b70
#define str_10002b70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa0U)))
#undef str_10002b82
#define str_10002b82 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb2U)))
#undef str_10002b94
#define str_10002b94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc4U)))
#undef str_10002bbf
#define str_10002bbf (*(char (*)[1])(((uintptr_t)pf_module_state + 0xefU)))
#undef str_10002bca
#define str_10002bca (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfaU)))
#undef str_10002bd9
#define str_10002bd9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x109U)))
#undef str_10002bea
#define str_10002bea (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11aU)))
#undef str_10002bfd
#define str_10002bfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_10002c10
#define str_10002c10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x140U)))
#undef str_10002c20
#define str_10002c20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
#undef str_10002c2f
#define str_10002c2f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15fU)))
#undef str_10002c3e
#define str_10002c3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_10002c4f
#define str_10002c4f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17fU)))
#undef str_10002c5a
#define str_10002c5a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18aU)))
#undef str_10002c66
#define str_10002c66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x196U)))
#undef str_10002c79
#define str_10002c79 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_10002c9e
#define str_10002c9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ceU)))
#undef str_10002ca5
#define str_10002ca5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5U)))
#undef str_10002cb8
#define str_10002cb8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10002ccb
#define str_10002ccb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fbU)))
#undef str_10002cde
#define str_10002cde (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20eU)))
#undef uRam0000000010002ad0
#define uRam0000000010002ad0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef uRam0000000010011400
#define uRam0000000010011400 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe930U)))
#undef uRam000000001001144c
#define uRam000000001001144c (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe97cU)))
#define acStack_a44 (*(char (*)[2628])(pf_stack_frame + 28))
#define uStack_644 (*(undefined4 *)(pf_stack_frame + 1052))
#define uStack_640 (*(undefined4 *)(pf_stack_frame + 1056))
#define uStack_63c (*(uint *)(pf_stack_frame + 1060))
#define uStack_638 (*(undefined4 *)(pf_stack_frame + 1064))
#define abStack_634 (*(byte (*)[1588])(pf_stack_frame + 1068))
#define auStack_604 (*(undefined1 (*)[1540])(pf_stack_frame + 1116))
#define auStack_5c4 (*(undefined1 (*)[1476])(pf_stack_frame + 1180))
#define abStack_582 (*(byte (*)[1410])(pf_stack_frame + 1246))
#define uStack_57c (*(uint *)(pf_stack_frame + 1252))
#define uStack_578 (*(undefined8 *)(pf_stack_frame + 1256))
#define uStack_570 (*(ulong *)(pf_stack_frame + 1264))
#define uStack_568 (*(ulong *)(pf_stack_frame + 1272))
#define uStack_560 (*(ulong *)(pf_stack_frame + 1280))
#define uStack_558 (*(ulong *)(pf_stack_frame + 1288))
#define uStack_550 (*(uint *)(pf_stack_frame + 1296))
#define uStack_54c (*(undefined4 *)(pf_stack_frame + 1300))
#define uStack_548 (*(undefined4 *)(pf_stack_frame + 1304))
#define uStack_544 (*(undefined4 *)(pf_stack_frame + 1308))
#define uStack_540 (*(undefined4 *)(pf_stack_frame + 1312))
#define uStack_53c (*(uint *)(pf_stack_frame + 1316))
#define uStack_538 (*(uint *)(pf_stack_frame + 1320))
#define iStack_534 (*(int *)(pf_stack_frame + 1324))
#define uStack_530 (*(uint *)(pf_stack_frame + 1328))
#define uStack_52c (*(uint *)(pf_stack_frame + 1332))
#define uStack_528 (*(uint *)(pf_stack_frame + 1336))
#define uStack_524 (*(uint *)(pf_stack_frame + 1340))
#define auStack_520 (*(undefined1 (*)[1312])(pf_stack_frame + 1344))
#define auStack_51c (*(uint (*)[327])(pf_stack_frame + 1348))
#define uStack_510 (*(undefined4 *)(pf_stack_frame + 1360))
#define uStack_50c (*(undefined4 *)(pf_stack_frame + 1364))
#define uStack_508 (*(undefined4 *)(pf_stack_frame + 1368))
#define lStack_500 (*(long *)(pf_stack_frame + 1376))
#define auStack_4f8 (*(undefined1 (*)[1272])(pf_stack_frame + 1384))
#define uStack_4ec (*(uint *)(pf_stack_frame + 1396))
#define uStack_4e8 (*(undefined8 *)(pf_stack_frame + 1400))
#define uStack_4e0 (*(undefined8 *)(pf_stack_frame + 1408))
#define uStack_4d8 (*(undefined8 *)(pf_stack_frame + 1416))
#define uStack_4d0 (*(undefined8 *)(pf_stack_frame + 1424))
#define auStack_d0 (*(uint (*)[52])(pf_stack_frame + 2448))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000618
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000618(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2688] __attribute__((aligned(16))) = {0};

  short sVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;

  bVar3 = recovered_1000189c((long)param_2);
  if (!bVar3) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    if (*(short *)(param_2 + 4) != 0x1af4) {
      return;
    }
    if (*(short *)(param_2 + 6) != 0x1041) {
      return;
    }
  }
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    return;
  }
  recovered_10000608(acStack_a44,0x400,&DAT_10002afc);
  uStack_578 = 0;
  uStack_57c = 0;
  bVar3 = recovered_1000189c((long)param_2);
  if (!bVar3) {
    if (param_2 == (byte *)0x0) {
      return;
    }
    if (*(short *)(param_2 + 4) != 0x1af4) {
      return;
    }
    if (*(short *)(param_2 + 6) != 0x1041) {
      return;
    }
  }
  recovered_100018d4(abStack_582,6);
  recovered_100018d4((undefined1 *)&uStack_570,0x80);
  recovered_100018d4((undefined1 *)&DAT_10011428,0x60);
  DAT_10011000 = 0;
  DAT_10011438 = *param_2;
  DAT_10011439 = param_2[1];
  DAT_1001143a = param_2[2];
  DAT_10011428 = param_1;
  uVar8 = recovered_10001850(param_1,(ulong)DAT_10011438,(ulong)DAT_10011439,(ulong)DAT_1001143a,4,2
                             ,(long)&uStack_578 + 4);
  if ((int)uVar8 == 0) {
    return;
  }
  DAT_1001143c = (undefined2)(uStack_578 >> 0x20);
  DAT_1001143b = 1;
  uStack_4d0 = (ulong)PF_PART4(uStack_4d0, 4) << 0x20;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    pcVar12 = str_10002b70;
  }
  else {
    uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                               (long)&uStack_4d0);
    if ((int)uVar8 == 0) {
      pcVar12 = str_10002b82;
    }
    else {
      uVar10 = 0;
      for (lVar11 = 0x14; lVar11 != 0x2c; lVar11 = lVar11 + 4) {
        uVar2 = uVar10 | 1;
        if (*(uint *)(param_2 + lVar11) != 0) {
          uVar10 = uVar10 | 2;
        }
        if ((*(uint *)(param_2 + lVar11) & 1) != 0) {
          uVar10 = uVar2;
        }
      }
      lVar11 = recovered_100016e8(((uintptr_t)pf_module_state+0x51U));
      if (lVar11 != 0) {
        uVar10 = uVar10 | 4;
      }
      if (param_2[8] == 6) {
        if (param_2[9] != 0) {
          uVar10 = uVar10 | 2;
        }
      }
      auStack_d0[0] = (uint)uStack_4d0 | uVar10;
      uVar8 = recovered_10001e60(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                 (ulong)auStack_d0[0]);
      if ((int)uVar8 != 0) {
        recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                           (long)auStack_d0);
        if ((uVar10 & (auStack_d0[0] ^ 0xffffffff)) != 0) goto LAB_1000079c;
        auStack_d0[0] = 0;
        recovered_100018d4((undefined1 *)&uStack_570,0x80);
        uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x34,
                                   1,(long)auStack_d0);
        if ((int)uVar8 == 0) goto LAB_1000079c;
        uVar10 = 0;
        while ((uVar10 < 0x20 && (auStack_d0[0] - 0x40 < 0xb0))) {
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uStack_4e8 = 0;
          uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                     (ulong)(auStack_d0[0] & 0xffff),1,(long)&uStack_4d8 + 4);
          if (((int)uVar8 == 0) ||
             (uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2]
                                         ,(ulong)((auStack_d0[0] & 0xffff) + 1 & 0xffff),1,
                                         (long)&uStack_4d8), (int)uVar8 == 0)) break;
          if ((((PF_PART4(uStack_4d8, 4) == 9) &&
               (uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_d0[0] & 0xffff) + 3 & 0xffff),1,
                                           (long)&uStack_4e0 + 4), (int)uVar8 != 0)) &&
              (uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],
                                          (ulong)((auStack_d0[0] & 0xffff) + 4 & 0xffff),1,
                                          (long)&uStack_4e0), (int)uVar8 != 0)) &&
             ((uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],
                                          (ulong)((auStack_d0[0] & 0xffff) + 8 & 0xffff),4,
                                          (long)&uStack_4e8 + 4), (int)uVar8 != 0 &&
              (uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],
                                          (ulong)param_2[2],
                                          (ulong)((auStack_d0[0] & 0xffff) + 0xc & 0xffff),4,
                                          (long)&uStack_4e8), (int)uVar8 != 0)))) {
            uStack_4d0 = 0;
            iStack_534 = iStack_534 + 1;
            if ((PF_PART4(uStack_4e0, 4) == 1) && (0x37 < (uint)uStack_4e8)) {
              uVar8 = recovered_10001ea8(param_1,param_2,(uint)uStack_4e0,PF_PART4(uStack_4e8, 4),
                                         (uint)uStack_4e8,&uStack_4d0);
              if ((int)uVar8 != 0) {
                uStack_570 = uStack_4d0;
                uStack_54c = (uint)uStack_4e0;
                goto LAB_10000a74;
              }
            }
            iVar4 = PF_PART4(uStack_4e0, 4);
            if (PF_PART4(uStack_4e0, 4) == 2 && 1 < (uint)uStack_4e8) {
              uVar8 = recovered_10001ea8(param_1,param_2,(uint)uStack_4e0,PF_PART4(uStack_4e8, 4),
                                         (uint)uStack_4e8,&uStack_4d0);
              if ((int)uVar8 != 0) {
                uStack_4ec = 0;
                uStack_568 = uStack_4d0;
                uStack_548 = (uint)uStack_4e0;
                uVar8 = recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_d0[0] & 0xffff) + 0x10 & 0xffff),4,
                                           (long)&uStack_4ec);
                if (((int)uVar8 == 0) || (uStack_4ec == 0)) {
                  uStack_568 = 0;
                }
                else {
                  uStack_53c = uStack_4ec;
                  uStack_538 = (uint)uStack_4e8;
                }
                goto LAB_10000a74;
              }
              iVar4 = PF_PART4(uStack_4e0, 4);
            }
            if (iVar4 == 3) {
              uVar8 = recovered_10001ea8(param_1,param_2,(uint)uStack_4e0,PF_PART4(uStack_4e8, 4),
                                         (uint)uStack_4e8,&uStack_4d0);
              if ((int)uVar8 != 0) {
                uStack_560 = uStack_4d0;
                uStack_544 = (uint)uStack_4e0;
                goto LAB_10000a74;
              }
              iVar4 = PF_PART4(uStack_4e0, 4);
            }
            if (iVar4 == 4) {
              uVar8 = recovered_10001ea8(param_1,param_2,(uint)uStack_4e0,PF_PART4(uStack_4e8, 4),
                                         (uint)uStack_4e8,&uStack_4d0);
              if ((int)uVar8 != 0) {
                uStack_558 = uStack_4d0;
                uStack_550 = (uint)uStack_4e8;
                uStack_540 = (uint)uStack_4e0;
              }
            }
          }
LAB_10000a74:
          if (((uint)uStack_4d8 == 0) || ((uint)uStack_4d8 == auStack_d0[0])) break;
          uVar10 = uVar10 + 1;
          auStack_d0[0] = (uint)uStack_4d8;
        }
        if (uStack_570 == 0) goto LAB_1000079c;
        DAT_10011430 = uStack_570;
        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
        auStack_d0[0] = 0;
        recovered_100018ec(param_1,uStack_570,0x14,(long)auStack_520);
        auStack_51c[1] = 1;
        uVar5 = recovered_1000206c(param_1,uStack_570);
        if ((int)uVar5 != 0) {
          auStack_51c[1] = 2;
          uVar8 = recovered_10002108(param_1,uStack_570,1);
          if ((((int)uVar8 != 0) &&
              (uVar8 = recovered_100018ec(param_1,uStack_570,0x14,(long)auStack_d0), (int)uVar8 != 0
              )) && ((auStack_d0[0] & 0xc1) == 1)) {
            auStack_51c[1] = 3;
            uVar8 = recovered_10002108(param_1,uStack_570,3);
            if ((((int)uVar8 != 0) &&
                (uVar8 = recovered_100018ec(param_1,uStack_570,0x14,(long)auStack_d0),
                (int)uVar8 != 0)) && ((auStack_d0[0] & 0xc3) == 3)) {
              auStack_51c[1] = 4;
              uVar8 = recovered_10002120(param_1,uStack_570,0,0);
              if ((((int)uVar8 != 0) &&
                  (uVar8 = recovered_10002134(param_1,uStack_570,&uStack_530), (int)uVar8 != 0)) &&
                 ((uVar8 = recovered_10002120(param_1,uStack_570,0,1), (int)uVar8 != 0 &&
                  ((uVar8 = recovered_10002134(param_1,uStack_570,&uStack_52c), (int)uVar8 != 0 &&
                   ((uStack_52c & 1) != 0)))))) {
                uStack_528 = uStack_530 & 0x10028;
                uStack_524 = uStack_52c & 3;
                auStack_51c[1] = 5;
                uVar8 = recovered_10002120(param_1,uStack_570,8,0);
                if (((int)uVar8 != 0) &&
                   (((uVar8 = recovered_10002120(param_1,uStack_570,0xc,(ulong)uStack_528),
                     (int)uVar8 != 0 &&
                     (uVar8 = recovered_10002120(param_1,uStack_570,8,1), (int)uVar8 != 0)) &&
                    (uVar8 = recovered_10002120(param_1,uStack_570,0xc,(ulong)uStack_524),
                    (int)uVar8 != 0)))) {
                  recovered_1000217c(param_1);
                  auStack_d0[0] = 0xb;
                  auStack_51c[1] = 6;
                  uVar8 = recovered_10002108(param_1,uStack_570,0xb);
                  if ((((int)uVar8 != 0) &&
                      (uVar8 = recovered_100018ec(param_1,uStack_570,0x14,(long)auStack_51c),
                      (int)uVar8 != 0)) && ((auStack_51c[0] & 200) == 8)) {
                    auStack_51c[1] = 7;
                    uVar8 = recovered_10001904(param_1,uStack_570,0x12,auStack_51c + 2);
                    if ((((int)uVar8 != 0) &&
                        (uVar8 = recovered_100018ec(param_1,uStack_570,0x15,(long)auStack_4f8),
                        (int)uVar8 != 0)) &&
                       ((uVar8 = recovered_100021ac(param_1,uStack_570,0x16,0), (int)uVar8 != 0 &&
                        ((uVar8 = recovered_10001904(param_1,uStack_570,0x18,&uStack_510),
                         (int)uVar8 != 0 &&
                         (uVar8 = recovered_10001904(param_1,uStack_570,0x1c,&uStack_50c),
                         (int)uVar8 != 0)))))) {
                      uVar8 = recovered_10001904(param_1,uStack_570,0x1e,(undefined4 *)&uStack_4d0);
                      if ((int)uVar8 != 0) {
                        uStack_508 = (uint)uStack_4d0;
                        if ((((uStack_568 != 0) && (uStack_53c != 0)) && (1 < uStack_538)) &&
                           ((uVar5 = (ulong)uStack_53c * (uStack_4d0 & 0xffffffff),
                            !CARRY8(uStack_568,uVar5) && (uVar5 <= (ulong)uStack_538 - 2)))) {
                          lStack_500 = uVar5 + uStack_568;
                        }
                      }
                      auStack_51c[1] = 8;
                      uVar10 = 0xc0000000;
                      if ((uStack_524 & 2) != 0) {
                        uVar10 = 0x80000000;
                      }
                      DAT_10011444 = uVar10 | (uint)param_2[2] << 8 | (uint)*param_2 << 0x10 |
                                     (uint)param_2[1] << 0xb;
                      if (((((byte)uStack_528 >> 5 & 1) == 0) || (uStack_558 == 0)) ||
                         (uStack_550 < 6)) goto LAB_1000079c;
                      uVar10 = 0;
                      for (uVar5 = 0; uVar5 != 6; uVar5 = uVar5 + 1) {
                        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
                        uVar8 = recovered_100018ec(param_1,uStack_558,uVar5,(long)&uStack_4d0);
                        if ((int)uVar8 == 0) goto LAB_1000079c;
                        abStack_582[uVar5] = (byte)uStack_4d0;
                        uVar10 = (uint)uStack_4d0 & 0xff | uVar10;
                      }
                      if ((uVar10 == 0) || ((abStack_582[0] & 1) != 0)) goto LAB_1000079c;
                      if ((uStack_528 >> 0x10 & 1) == 0) {
                        uStack_578 = CONCAT44(PF_PART4(uStack_578, 4),1);
                      }
                      else if ((uStack_550 < 8) ||
                              (uVar8 = recovered_10001904(param_1,uStack_558,6,
                                                          (undefined4 *)&uStack_578),
                              (int)uVar8 == 0)) goto LAB_1000079c;
                      if ((((uStack_528 >> 3 & 1) != 0) &&
                          ((uStack_550 < 0xc ||
                           (uVar8 = recovered_10001904(param_1,uStack_558,10,&uStack_57c),
                           (int)uVar8 == 0)))) || (auStack_51c[2] < 2)) goto LAB_1000079c;
                      if (uStack_57c - 0x7f3 < 0xfffff80e) {
                        uStack_57c = 0x5dc;
                      }
                      uRam000000001001144c = (undefined4)uStack_578;
                      DAT_10011450 = 0xc;
                      DAT_10011448 = uStack_57c;
                      for (lVar11 = 0; lVar11 != 6; lVar11 = lVar11 + 1) {
                        *(byte *)(lVar11 + ((uintptr_t)pf_module_state+0xe98cU)) = abStack_582[lVar11];
                      }
                      puVar13 = (undefined1 *)((uintptr_t)pf_module_state+0xeb30U);
                      recovered_100018d4((undefined1 *)((uintptr_t)pf_module_state+0xeb30U),0x100);
                      recovered_100018d4((undefined1 *)((uintptr_t)pf_module_state+0xe930U),0x24);
                      recovered_100018d4(&DAT_10011500,0x84);
                      lVar14 = ((uintptr_t)pf_module_state+0x5530U);
                      recovered_100018d4((undefined1 *)((uintptr_t)pf_module_state+0x5530U),0x9000);
                      uVar8 = uRam0000000010002ad0;
                      puVar15 = (undefined1 *)((uintptr_t)pf_module_state+0xe935U);
                      for (lVar11 = 0; lVar11 != 0x10; lVar11 = lVar11 + 1) {
                        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
                        auStack_d0[0] = 0;
                        uVar6 = recovered_100022cc(param_1,(ulong)DAT_10011444,lVar14,0x900,
                                                   (long)&uStack_4d0,auStack_d0);
                        if ((int)uVar6 == 0) goto LAB_1000079c;
                        recovered_10002318(puVar13,(uint)uStack_4d0,auStack_d0[0]);
                        *(undefined8 *)(puVar13 + 8) = uVar8;
                        puVar15[-1] = (char)lVar11;
                        *puVar15 = 0;
                        recovered_10002358(param_1,(ulong)DAT_10011444,lVar14,0x900);
                        puVar13 = puVar13 + 0x10;
                        lVar14 = lVar14 + 0x900;
                        puVar15 = puVar15 + 2;
                      }
                      uRam0000000010011400 = 0x100000;
                      uVar5 = recovered_10002394(param_1,(long *)&uStack_570,0,0x10,((uintptr_t)pf_module_state+0xeb30U),0x100
                                                 ,((uintptr_t)pf_module_state+0xe930U),0x24,((uintptr_t)pf_module_state+0xea30U),0x84,&DAT_10011468);
                      if ((int)uVar5 == 0) goto LAB_1000079c;
                      DAT_1001146a = 0x10;
                      recovered_100018d4(&DAT_10011300,0x10);
                      recovered_100018d4(&DAT_10011100,6);
                      recovered_100018d4(&DAT_10011200,0xc);
                      recovered_100018d4(&DAT_10011700,0x80c);
                      uVar8 = recovered_100022cc(param_1,(ulong)DAT_10011444,((uintptr_t)pf_module_state+0xec30U),0x80c,
                                                 ((uintptr_t)pf_module_state+0xe984U),&DAT_10011458);
                      if ((int)uVar8 == 0) goto LAB_1000079c;
                      _DAT_10011100 = 0;
                      uVar7 = recovered_10002394(param_1,(long *)&uStack_570,1,1,((uintptr_t)pf_module_state+0xe830U),0x10,
                                                 ((uintptr_t)pf_module_state+0xe630U),6,((uintptr_t)pf_module_state+0xe730U),0xc,&DAT_10011478);
                      uVar5 = uStack_570;
                      if (((((int)uVar7 == 0) ||
                           (uStack_4d0 = uStack_4d0 & 0xffffffff00000000, uStack_570 == 0)) ||
                          (uVar8 = recovered_100018ec(param_1,uStack_570,0x14,(long)&uStack_4d0),
                          (int)uVar8 == 0)) ||
                         (((((uint)uStack_4d0 & 200) != 8 ||
                           (uVar8 = recovered_10002108(param_1,uVar5,(ulong)((uint)uStack_4d0 | 4)),
                           (int)uVar8 == 0)) ||
                          ((uVar8 = recovered_100018ec(param_1,uVar5,0x14,(long)&uStack_4d0),
                           (int)uVar8 == 0 ||
                           ((((uint)uStack_4d0 & 0xc4) != 4 ||
                            (uVar8 = recovered_100018ec(param_1,uStack_570,0x14,
                                                        (long)&uStack_578 + 4), (int)uVar8 == 0)))))
                          ))) goto LAB_1000079c;
                      DAT_10011440 = 1;
                      uVar8 = recovered_1000194c(param_1,((uintptr_t)pf_module_state+0xe998U),0);
                      if ((int)uVar8 == 0) goto LAB_1000079c;
                      recovered_100018d4((undefined1 *)&uStack_644,0xc0);
                      uVar5 = uStack_578;
                      lVar11 = 0;
                      uStack_640 = 0xd;
                      if ((uStack_578 & 1) != 0) {
                        uStack_640 = 0xf;
                      }
                      uStack_644 = 0xc0;
                      uStack_63c = DAT_10011448;
                      uStack_638 = 0x800;
                      for (; lVar11 != 6; lVar11 = lVar11 + 1) {
                        abStack_634[lVar11] = abStack_582[lVar11];
                      }
                      recovered_10000608(auStack_604,0x40,str_10002afd);
                      recovered_10000608(auStack_5c4,0x40,str_10002b36);
                      recovered_10000608(acStack_a44,0x400,&DAT_10002afc);
                      recovered_10001690((long)acStack_a44,0x400,&DAT_10002ba7);
                      lVar11 = 0;
                      while( true ) {
                        do {
                          recovered_100026f0((long)acStack_a44,0x400,(uint)abStack_582[lVar11],2);
                          lVar11 = lVar11 + 1;
                        } while (lVar11 == 0);
                        if (lVar11 == 6) break;
                        recovered_10001690((long)acStack_a44,0x400,(char *)((uintptr_t)pf_module_state+0xdcU));
                      }
                      pcVar12 = str_10002b51;
                      if ((uVar5 & 1) != 0) {
                        pcVar12 = str_10002b41;
                      }
                      recovered_10001690((long)acStack_a44,0x400,pcVar12);
                      recovered_100019a4((long)acStack_a44,0x400,uStack_57c);
                      sVar1 = *(short *)(param_2 + 4);
                      if (sVar1 == 0x1013) {
                        if ((*(ushort *)(param_2 + 6) & 0xfffe) == 0xb8) {
                          pcVar12 = str_10002c79;
                          goto switchD_10001308_caseD_1041;
                        }
LAB_100013e4:
                        bVar9 = param_2[8];
LAB_100013e8:
                        pcVar12 = str_10002ca5;
                        switch((uintptr_t)(bVar9)) {
                        case 1:
                          pcVar12 = str_10002ccb;
                          break;
                        case 2:
                          pcVar12 = str_10002cb8;
                          break;
                        case 3:
                          break;
                        case 4:
switchD_10001410_caseD_4:
                          pcVar12 = str_10002cde;
                          break;
                        default:
switchD_10001410_caseD_5:
                          pcVar12 = str_10002bbf;
                          break;
                        case 0xc:
switchD_10001410_caseD_c:
                          if (param_2[9] != 3) goto switchD_10001410_caseD_5;
                          pcVar12 = recovered_100027a8((uint)param_2[10]);
                        }
                      }
                      else {
                        if (sVar1 == 0x1033) {
                          if (*(short *)(param_2 + 6) == 0x194) {
                            pcVar12 = (char *)((uintptr_t)pf_module_state+0x1a0U);
                            goto switchD_10001308_caseD_1041;
                          }
                          goto LAB_100013e4;
                        }
                        if (sVar1 == 0x106b) {
                          if (*(short *)(param_2 + 6) == 0x21) {
LAB_1000136c:
                            pcVar12 = str_10002c9e;
                            goto switchD_10001308_caseD_1041;
                          }
                          goto LAB_100013e4;
                        }
                        if (sVar1 == 0x108e) {
                          if (*(short *)(param_2 + 6) == 0x2bad) goto LAB_1000136c;
                          goto LAB_100013e4;
                        }
                        if (sVar1 != 0x10ec) {
                          if (sVar1 == 0x1234) {
                            if (*(short *)(param_2 + 6) != 0x1111) goto LAB_100013e4;
                            pcVar12 = (char *)((uintptr_t)pf_module_state+0x1b4U);
                            goto switchD_10001308_caseD_1041;
                          }
                          if (sVar1 != -0x7f7a) {
                            if (sVar1 == 0x1b36) {
                              if (*(short *)(param_2 + 6) == 0x100) {
                                pcVar12 = (char *)((uintptr_t)pf_module_state+0x1bdU);
                                goto switchD_10001308_caseD_1041;
                              }
                            }
                            else if (sVar1 == 0x1af4) {
                              pcVar12 = str_10002bca;
                              switch((uintptr_t)(*(undefined2 *)(param_2 + 6))) {
                              case 0x1041:
                                break;
                              case 0x1042:
switchD_10001308_caseD_1042:
                                pcVar12 = str_10002bd9;
                                break;
                              case 0x1043:
switchD_10001308_caseD_1043:
                                pcVar12 = str_10002bfd;
                                break;
                              case 0x1044:
switchD_10001308_caseD_1044:
                                pcVar12 = str_10002c20;
                                break;
                              case 0x1045:
switchD_10001308_caseD_1045:
                                pcVar12 = str_10002bea;
                                break;
                              case 0x1046:
                              case 0x1047:
                              case 0x1049:
                              case 0x104a:
                              case 0x104b:
                              case 0x104c:
                              case 0x104d:
                              case 0x104e:
                              case 0x104f:
                              case 0x1051:
switchD_10001308_caseD_1046:
                                pcVar12 = str_10002c4f;
                                break;
                              case 0x1048:
switchD_10001308_caseD_1048:
                                pcVar12 = str_10002c10;
                                break;
                              case 0x1050:
                                pcVar12 = str_10002c2f;
                                break;
                              case 0x1052:
                                pcVar12 = str_10002c3e;
                                break;
                              default:
                                switch((uintptr_t)(*(undefined2 *)(param_2 + 6))) {
                                case 0x1000:
                                  break;
                                case 0x1001:
                                  goto switchD_10001308_caseD_1042;
                                case 0x1002:
                                  goto switchD_10001308_caseD_1045;
                                case 0x1003:
                                  goto switchD_10001308_caseD_1043;
                                case 0x1004:
                                  goto switchD_10001308_caseD_1048;
                                case 0x1005:
                                  goto switchD_10001308_caseD_1044;
                                default:
                                  goto switchD_10001308_caseD_1046;
                                }
                              }
                              goto switchD_10001308_caseD_1041;
                            }
                            goto LAB_100013e4;
                          }
                          if (*(short *)(param_2 + 6) == 0x100e) {
                            pcVar12 = str_10002c5a;
                            goto switchD_10001308_caseD_1041;
                          }
                          bVar9 = param_2[8];
                          if (bVar9 == 0xc) goto switchD_10001410_caseD_c;
                          if (bVar9 != 4) goto LAB_100013e8;
                          if (param_2[9] == 3) {
                            pcVar12 = str_10002c66;
                            goto switchD_10001308_caseD_1041;
                          }
                          goto switchD_10001410_caseD_4;
                        }
                        if (*(short *)(param_2 + 6) != -0x7fd7) goto LAB_100013e4;
                        pcVar12 = (char *)((uintptr_t)pf_module_state+0x1c5U);
                      }
switchD_10001308_caseD_1041:
                      recovered_10000608((undefined1 *)auStack_d0,0x60,str_10002b63);
                      recovered_10001690((long)auStack_d0,0x60,&DAT_10002bae);
                      recovered_100026f0((long)auStack_d0,0x60,(uint)*param_2,2);
                      recovered_10001690((long)auStack_d0,0x60,(char *)((uintptr_t)pf_module_state+0xdcU));
                      recovered_100026f0((long)auStack_d0,0x60,(uint)param_2[1],2);
                      recovered_10001690((long)auStack_d0,0x60,(char *)((uintptr_t)pf_module_state+0xe0U));
                      recovered_100019a4((long)auStack_d0,0x60,(uint)param_2[2]);
                      recovered_10000608((undefined1 *)&uStack_4d0,0x400,&DAT_10002bb2);
                      recovered_100026f0((long)&uStack_4d0,0x400,(uint)*param_2,2);
                      recovered_10001690((long)&uStack_4d0,0x400,(char *)((uintptr_t)pf_module_state+0xdcU));
                      recovered_100026f0((long)&uStack_4d0,0x400,(uint)param_2[1],2);
                      recovered_10001690((long)&uStack_4d0,0x400,(char *)((uintptr_t)pf_module_state+0xe0U));
                      recovered_100019a4((long)&uStack_4d0,0x400,(uint)param_2[2]);
                      recovered_10001690((long)&uStack_4d0,0x400,&DAT_10002bb7);
                      recovered_100026f0((long)&uStack_4d0,0x400,(uint)*(ushort *)(param_2 + 4),4);
                      recovered_10001690((long)&uStack_4d0,0x400,(char *)((uintptr_t)pf_module_state+0xdcU));
                      recovered_100026f0((long)&uStack_4d0,0x400,(uint)*(ushort *)(param_2 + 6),4);
                      recovered_10001690((long)&uStack_4d0,0x400,&DAT_10002bba);
                      if (acStack_a44[0] != '\0') {
                        recovered_10001690((long)&uStack_4d0,0x400,&DAT_10002bbc);
                        recovered_10001690((long)&uStack_4d0,0x400,acStack_a44);
                      }
                      if ((((param_1[3] != 0) &&
                           (iVar4 = (*(code *)(ulong)(uint)param_1[3])
                                              (auStack_d0,pcVar12,&uStack_4d0), iVar4 != 0)) &&
                          (*param_1 == 0x54584b57)) &&
                         (((0xcb < (uint)param_1[2] && (param_1[0x32] != 0)) &&
                          (iVar4 = (*(code *)(ulong)(uint)param_1[0x32])
                                             (&uStack_644,recovered_10001a4c,recovered_10001bd4),
                          iVar4 != 0)))) {
                        if (param_3 == (int *)0x0) {
                          return;
                        }
                        *param_3 = *param_3 + 1;
                        return;
                      }
                      goto LAB_1000079c;
                    }
                  }
                }
              }
            }
          }
        }
        uVar8 = recovered_100018ec(param_1,uStack_570,0x14,(long)auStack_d0);
        if (((int)uVar8 != 0) && (auStack_d0[0] != 0)) {
          recovered_10002108(param_1,uStack_570,(ulong)(auStack_d0[0] | 0x80));
        }
        goto LAB_1000079c;
      }
      pcVar12 = str_10002b94;
    }
  }
  recovered_10001690((long)acStack_a44,0x400,pcVar12);
LAB_1000079c:
  recovered_10001de0();
  return;
}

#undef DAT_10002afc
#undef DAT_10002ba7
#undef DAT_10002bae
#undef DAT_10002bb2
#undef DAT_10002bb7
#undef DAT_10002bba
#undef DAT_10002bbc
#undef DAT_10011000
#undef DAT_10011100
#undef DAT_10011200
#undef DAT_10011300
#undef DAT_10011428
#undef DAT_10011430
#undef DAT_10011438
#undef DAT_10011439
#undef DAT_1001143a
#undef DAT_1001143b
#undef DAT_1001143c
#undef DAT_10011440
#undef DAT_10011444
#undef DAT_10011448
#undef DAT_10011450
#undef DAT_10011458
#undef DAT_10011468
#undef DAT_1001146a
#undef DAT_10011478
#undef DAT_10011500
#undef DAT_10011700
#undef UNK_10002ad0
#undef UNK_10011400
#undef UNK_1001144c
#undef _DAT_10011100
#undef str_10002afd
#undef str_10002b36
#undef str_10002b41
#undef str_10002b51
#undef str_10002b63
#undef str_10002b70
#undef str_10002b82
#undef str_10002b94
#undef str_10002bbf
#undef str_10002bca
#undef str_10002bd9
#undef str_10002bea
#undef str_10002bfd
#undef str_10002c10
#undef str_10002c20
#undef str_10002c2f
#undef str_10002c3e
#undef str_10002c4f
#undef str_10002c5a
#undef str_10002c66
#undef str_10002c79
#undef str_10002c9e
#undef str_10002ca5
#undef str_10002cb8
#undef str_10002ccb
#undef str_10002cde
#undef uRam0000000010002ad0
#undef uRam0000000010011400
#undef uRam000000001001144c
#undef acStack_a44
#undef uStack_644
#undef uStack_640
#undef uStack_63c
#undef uStack_638
#undef abStack_634
#undef auStack_604
#undef auStack_5c4
#undef abStack_582
#undef uStack_57c
#undef uStack_578
#undef uStack_570
#undef uStack_568
#undef uStack_560
#undef uStack_558
#undef uStack_550
#undef uStack_54c
#undef uStack_548
#undef uStack_544
#undef uStack_540
#undef uStack_53c
#undef uStack_538
#undef iStack_534
#undef uStack_530
#undef uStack_52c
#undef uStack_528
#undef uStack_524
#undef auStack_520
#undef auStack_51c
#undef uStack_510
#undef uStack_50c
#undef uStack_508
#undef lStack_500
#undef auStack_4f8
#undef uStack_4ec
#undef uStack_4e8
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d0
#undef auStack_d0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001690
 */

void recovered_10001690(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_100016e8(param_1);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016e8
 */

long recovered_100016e8(long param_1)

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


#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001704
 */

undefined8
recovered_10001704(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;

  local_48 = 0;
  local_4c = 0;
  if (param_5 == (undefined1 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = recovered_10001850(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001850(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001850(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001850(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
        if ((int)uVar2 == 0) {
          PF_PART1(local_4c, 2) = 0;
          local_4c = 0;
        }
        else {
        }
        *(undefined4 *)(param_5 + 4) = PF_PART4(local_48, 4);
        *(ushort *)(param_5 + 10) =
             (ushort)((ulong)local_48 >> 8) & 0xff | (ushort)(((uint)local_48 & 0xff00ff) << 8);
        param_5[9] = (char)((ulong)local_48 >> 0x10);
        *param_5 = (char)param_2;
        param_5[1] = (char)param_3;
        param_5[2] = (char)param_4;
        param_5[8] = (char)((ulong)local_48 >> 0x18);
        param_5[0xc] = PF_PART1(local_4c, 2);
        for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
          uStack_50 = 0;
          uVar2 = recovered_10001850(param_1,param_2,param_3,param_4,
                                     (ulong)((int)lVar3 * 4 + 0x10U & 0xfffc),4,(long)&uStack_50);
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = uStack_50;
          }
          *(undefined4 *)(param_5 + lVar3 * 4 + 0x14) = uVar1;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_50
#undef local_4c
#undef local_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001850
 */

undefined8
recovered_10001850(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000189c
 */

bool recovered_1000189c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if (param_1 != 0) {
    if (*(short *)(param_1 + 4) != 0x1af4) {
      return false;
    }
    bVar1 = *(short *)(param_1 + 6) == 0x1000 || *(short *)(param_1 + 6) == 0x1040;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018d4
 */

void recovered_100018d4(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018ec
 */

undefined8 recovered_100018ec(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100022ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100022c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001904
 */

undefined8 recovered_10001904(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_1000225c(param_1,param_2 + (param_3 & 0xffffffff),2,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000194c
 */

undefined8 recovered_1000194c(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
    return 0;
  }
  recovered_1000217c(param_1);
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 == 0) {
    return 0;
  }
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(uVar2,2,param_3);
      return uVar1;
    }
    if (((uVar2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar2,2,param_3);
      return uVar1;
    }
  }
  return 0;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019a4
 */

void recovered_100019a4(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_100016e8(param_1);
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
    recovered_10002768(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

#undef DAT_10011000
#define DAT_10011000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe530U)))
#undef DAT_10011428
#define DAT_10011428 (*(int * *)(((uintptr_t)pf_module_state + 0xe958U)))
#undef DAT_10011440
#define DAT_10011440 (*(int *)(((uintptr_t)pf_module_state + 0xe970U)))
#undef DAT_10011444
#define DAT_10011444 (*(uint *)(((uintptr_t)pf_module_state + 0xe974U)))
#undef DAT_10011450
#define DAT_10011450 (*(uint *)(((uintptr_t)pf_module_state + 0xe980U)))
#undef DAT_10011468
#define DAT_10011468 (*(ushort *)(((uintptr_t)pf_module_state + 0xe998U)))
#undef DAT_1001146c
#define DAT_1001146c (*(ushort *)(((uintptr_t)pf_module_state + 0xe99cU)))
#undef DAT_10011500
#define DAT_10011500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xea30U)))
#undef DAT_10011502
#define DAT_10011502 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xea32U)))
#undef DAT_10011503
#define DAT_10011503 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xea33U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a4c
 */

undefined8 recovered_10001a4c(undefined1 *param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;

  recovered_10002814();
  uVar1 = 10;
  if (DAT_10011450 != 0) {
    uVar1 = DAT_10011450;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (undefined1 *)0x0) {
    DAT_10011000 = 0;
    return 0;
  }
  if (DAT_10011440 == 0) {
    DAT_10011000 = 0;
    return 0;
  }
  if (DAT_10011428 == (int *)0x0) {
    DAT_10011000 = 0;
    return 0;
  }
  if (DAT_10011468 == 0) {
    DAT_10011000 = 0;
    return 0;
  }
  recovered_10002358(DAT_10011428,(ulong)DAT_10011444,&DAT_10011500,0x84);
  uVar3 = DAT_1001146c;
  if (DAT_1001146c != CONCAT11(DAT_10011503,DAT_10011502)) {
    if ((ushort)(CONCAT11(DAT_10011503,DAT_10011502) - DAT_1001146c) <= DAT_10011468) {
      uVar4 = 0;
      if (DAT_10011468 != 0) {
        uVar4 = (uint)DAT_1001146c / (uint)DAT_10011468;
      }
      lVar7 = (ulong)((uint)DAT_1001146c - uVar4 * DAT_10011468) * 8;
      uVar4 = recovered_10002844((undefined4 *)(lVar7 + ((uintptr_t)pf_module_state+0xea34U)));
      uVar5 = recovered_10002844((undefined4 *)(lVar7 + ((uintptr_t)pf_module_state+0xea38U)));
      DAT_1001146c = uVar3 + 1;
      if ((uVar4 < 0x10) && (uVar5 < 0x901)) {
        uVar2 = uVar5 - uVar1;
        if (uVar1 <= uVar5 && uVar2 != 0) {
          lVar7 = (ulong)uVar4 * 0x900 + ((uintptr_t)pf_module_state+0x5530U);
          recovered_10002358(DAT_10011428,(ulong)DAT_10011444,lVar7,0x900);
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar2;
          }
          if ((uVar2 <= param_2) && (uVar2 < 0x801)) {
            recovered_1000293c(param_1,(undefined1 *)(lVar7 + (ulong)uVar1),uVar2);
            uVar6 = recovered_10002868(uVar4 & 0xffff);
            DAT_10011000 = 0;
            return uVar6;
          }
        }
        recovered_10002868(uVar4 & 0xffff);
        DAT_10011000 = 0;
        return 0;
      }
    }
    recovered_10001de0();
  }
  DAT_10011000 = 0;
  return 0;
}

#undef DAT_10011000
#undef DAT_10011428
#undef DAT_10011440
#undef DAT_10011444
#undef DAT_10011450
#undef DAT_10011468
#undef DAT_1001146c
#undef DAT_10011500
#undef DAT_10011502
#undef DAT_10011503

#undef DAT_10011000
#define DAT_10011000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe530U)))
#undef DAT_10011100
#define DAT_10011100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe630U)))
#undef DAT_10011102
#define DAT_10011102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe632U)))
#undef DAT_10011103
#define DAT_10011103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe633U)))
#undef DAT_10011104
#define DAT_10011104 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe634U)))
#undef DAT_10011200
#define DAT_10011200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe730U)))
#undef DAT_10011202
#define DAT_10011202 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe732U)))
#undef DAT_10011203
#define DAT_10011203 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe733U)))
#undef DAT_10011300
#define DAT_10011300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe830U)))
#undef DAT_10011308
#define DAT_10011308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe838U)))
#undef DAT_10011309
#define DAT_10011309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe839U)))
#undef DAT_1001130a
#define DAT_1001130a (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe83aU)))
#undef DAT_1001130e
#define DAT_1001130e (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe83eU)))
#undef DAT_10011428
#define DAT_10011428 (*(int * *)(((uintptr_t)pf_module_state + 0xe958U)))
#undef DAT_10011440
#define DAT_10011440 (*(int *)(((uintptr_t)pf_module_state + 0xe970U)))
#undef DAT_10011444
#define DAT_10011444 (*(uint *)(((uintptr_t)pf_module_state + 0xe974U)))
#undef DAT_10011450
#define DAT_10011450 (*(uint *)(((uintptr_t)pf_module_state + 0xe980U)))
#undef DAT_10011454
#define DAT_10011454 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe984U)))
#undef DAT_10011458
#define DAT_10011458 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe988U)))
#undef DAT_10011478
#define DAT_10011478 (*(ushort *)(((uintptr_t)pf_module_state + 0xe9a8U)))
#undef DAT_1001147a
#define DAT_1001147a (*(ushort *)(((uintptr_t)pf_module_state + 0xe9aaU)))
#undef DAT_1001147c
#define DAT_1001147c (*(ushort *)(((uintptr_t)pf_module_state + 0xe9acU)))
#undef DAT_10011700
#define DAT_10011700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xec30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bd4
 */

undefined8 recovered_10001bd4(undefined1 *param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;

  recovered_10002814();
  uVar3 = 10;
  if (DAT_10011450 != 0) {
    uVar3 = DAT_10011450;
  }
  if ((((param_1 != (undefined1 *)0x0) && (DAT_10011440 != 0)) && (DAT_10011428 != (int *)0x0)) &&
     ((0xfffff80c < param_2 - 0x801 && (DAT_10011478 != 0)))) {
    uVar2 = uVar3 + param_2;
    if (uVar2 < 0x80d) {
      recovered_100018d4(&DAT_10011700,0x80c);
      recovered_1000293c(&DAT_10011700 + uVar3,param_1,param_2);
      recovered_10002318(&DAT_10011300,DAT_10011454,DAT_10011458);
      DAT_10011308 = (undefined1)uVar2;
      DAT_10011309 = (undefined1)(uVar2 >> 8);
      DAT_1001130a = 0;
      DAT_1001130e = 0;
      DAT_10011104 = 0;
      iVar5 = DAT_1001147a + 1;
      DAT_1001147a = (ushort)iVar5;
      DAT_10011102 = (undefined1)iVar5;
      DAT_10011103 = (undefined1)((uint)iVar5 >> 8);
      recovered_10002358(DAT_10011428,(ulong)DAT_10011444,&DAT_10011700,(ulong)uVar2);
      recovered_10002358(DAT_10011428,(ulong)DAT_10011444,&DAT_10011300,0x10);
      recovered_10002358(DAT_10011428,(ulong)DAT_10011444,&DAT_10011100,6);
      uVar6 = recovered_1000194c(DAT_10011428,((uintptr_t)pf_module_state+0xe9a8U),1);
      if ((int)uVar6 != 0) {
        iVar5 = 1000;
        do {
          recovered_10002358(DAT_10011428,(ulong)DAT_10011444,&DAT_10011200,0xc);
          uVar4 = DAT_1001147c;
          if (DAT_1001147c != CONCAT11(DAT_10011203,DAT_10011202)) {
            if ((ushort)(CONCAT11(DAT_10011203,DAT_10011202) - DAT_1001147c) == 1) {
              uVar3 = 0;
              if (DAT_10011478 != 0) {
                uVar3 = (uint)DAT_1001147c / (uint)DAT_10011478;
              }
              lVar1 = (ulong)((uint)DAT_1001147c - uVar3 * DAT_10011478) * 8;
              iVar5 = recovered_10002844((undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0xe734U)));
              if ((iVar5 == 0) &&
                 (iVar5 = recovered_10002844((undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0xe738U))), iVar5 == 0)) {
                DAT_10011000 = 0;
                DAT_1001147c = uVar4 + 1;
                return 1;
              }
            }
            break;
          }
          recovered_100021c0(DAT_10011428,100);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      recovered_10001de0();
    }
  }
  DAT_10011000 = 0;
  return 0;
}

#undef DAT_10011000
#undef DAT_10011100
#undef DAT_10011102
#undef DAT_10011103
#undef DAT_10011104
#undef DAT_10011200
#undef DAT_10011202
#undef DAT_10011203
#undef DAT_10011300
#undef DAT_10011308
#undef DAT_10011309
#undef DAT_1001130a
#undef DAT_1001130e
#undef DAT_10011428
#undef DAT_10011440
#undef DAT_10011444
#undef DAT_10011450
#undef DAT_10011454
#undef DAT_10011458
#undef DAT_10011478
#undef DAT_1001147a
#undef DAT_1001147c
#undef DAT_10011700

#undef DAT_10011428
#define DAT_10011428 (*(int * *)(((uintptr_t)pf_module_state + 0xe958U)))
#undef DAT_10011430
#define DAT_10011430 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe960U)))
#undef DAT_10011438
#define DAT_10011438 (*(byte *)(((uintptr_t)pf_module_state + 0xe968U)))
#undef DAT_10011439
#define DAT_10011439 (*(byte *)(((uintptr_t)pf_module_state + 0xe969U)))
#undef DAT_1001143a
#define DAT_1001143a (*(byte *)(((uintptr_t)pf_module_state + 0xe96aU)))
#undef DAT_1001143b
#define DAT_1001143b (*(char *)(((uintptr_t)pf_module_state + 0xe96bU)))
#undef DAT_1001143c
#define DAT_1001143c (*(ushort *)(((uintptr_t)pf_module_state + 0xe96cU)))
#undef DAT_10011440
#define DAT_10011440 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe970U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001de0
 */

void recovered_10001de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  ulong uVar3;

  DAT_10011440 = 0;
  if (DAT_10011428 != (int *)0x0) {
    if (DAT_10011430 == 0) {
      bVar2 = false;
    }
    else {
      uVar3 = recovered_1000206c(DAT_10011428,DAT_10011430);
      bVar2 = (int)uVar3 == 0;
    }
    if (DAT_1001143b != '\0') {
      uVar1 = DAT_1001143c & 0xfffffffb;
      if (!bVar2) {
        uVar1 = (uint)DAT_1001143c;
      }
      recovered_10001e60(DAT_10011428,(ulong)DAT_10011438,(ulong)DAT_10011439,(ulong)DAT_1001143a,
                         (ulong)uVar1);
      DAT_1001143b = '\0';
    }
  }
  return;
}

#undef DAT_10011428
#undef DAT_10011430
#undef DAT_10011438
#undef DAT_10011439
#undef DAT_1001143a
#undef DAT_1001143b
#undef DAT_1001143c
#undef DAT_10011440

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e60
 */

undefined8
recovered_10001e60(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


#define uStack_54 (*(uint *)(pf_stack_frame + 28))
#define local_5c (*(uint *)(pf_stack_frame + 20))
#define local_58 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ea8
 */

undefined8
recovered_10001ea8(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;

  if (CARRY4(param_5,param_4)) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (5 < param_3) {
    return 0;
  }
  if (param_6 == (ulong *)0x0) {
    return 0;
  }
  local_58 = 0;
  if ((((param_3 == 0) || ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) != 4)) &&
      (local_5c = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14), local_5c != 0)) &&
     ((local_5c & 1) == 0)) {
    recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                       (ulong)(param_3 * 4 + 0x10 & 0xfffc),4,(long)&local_5c);
    if ((local_5c & 7) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_58 = *(int *)(param_2 + (ulong)(param_3 + 1) * 4 + 0x14);
      recovered_10001850(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                         (ulong)(param_3 * 4 + 0x14 & 0xffff),4,(long)&local_58);
      iVar1 = local_58;
    }
    else {
      iVar1 = 0;
    }
    uVar4 = 0xfffffff0;
    if ((local_5c & 1) != 0) {
      uVar4 = 0xfffffffc;
    }
    if ((param_5 + param_4 != 0) && ((uVar4 & local_5c) != 0 || iVar1 != 0)) {
      *param_6 = 0;
      uStack_54 = 0;
      if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
          if (iVar1 != 0) {
            return 0;
          }
          if ((uint)param_1[2] < 0x68) {
            return 0;
          }
          if (param_1[0x19] == 0) {
            return 0;
          }
          iVar1 = (*(code *)(ulong)(uint)param_1[0x19])
                            (uVar4 & local_5c,0,param_5 + param_4,&uStack_54);
          if (iVar1 == 0) {
            return 0;
          }
          uVar3 = (ulong)uStack_54;
        }
        else {
          uVar2 = (*(code *)(ulong)(uint)param_1[0x2e])();
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          uVar3 = *param_6;
        }
        *param_6 = uVar3 + param_4;
        return 1;
      }
    }
  }
  return 0;
}

#undef uStack_54
#undef local_5c
#undef local_58

#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206c
 */

ulong recovered_1000206c(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar1 = 0;
  local_34 = 0xff;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) &&
     (uVar1 = recovered_10002108(param_1,param_2,0), (int)uVar1 != 0)) {
    recovered_1000217c(param_1);
    uVar3 = 0;
    while ((uVar3 != 1000 &&
           ((uVar2 = recovered_100018ec(param_1,param_2,0x14,(long)&local_34), (int)uVar2 == 0 ||
            (local_34 != 0))))) {
      recovered_100021c0(param_1,10);
      uVar3 = uVar3 + 1;
    }
    uVar1 = (ulong)(uVar3 < 1000);
  }
  return uVar1;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002108
 */

undefined8 recovered_10002108(int *param_1,long param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + 0x14;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002120
 */

undefined8 recovered_10002120(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002134
 */

undefined8 recovered_10002134(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_3 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_1000225c(param_1,param_2 + 4,4,(long)&uStack_24), (int)uVar1 != 0)) {
    *param_3 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000217c
 */

void recovered_1000217c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100021a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021ac
 */

undefined8 recovered_100021ac(int *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021c0
 */

void recovered_100021c0(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100021ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f4
 */

undefined8 recovered_100021f4(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10002254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000225c
 */

undefined8 recovered_1000225c(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x100022ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100022c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022cc
 */

undefined8
recovered_100022cc(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10002314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002318
 */

void recovered_10002318(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    param_1[3] = (char)((uint)param_2 >> 0x18);
    param_1[4] = (char)param_3;
    param_1[5] = (char)((uint)param_3 >> 8);
    param_1[6] = (char)((uint)param_3 >> 0x10);
    param_1[7] = (char)((uint)param_3 >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002358
 */

void recovered_10002358(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1000238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#undef DAT_10011444
#define DAT_10011444 (*(uint *)(((uintptr_t)pf_module_state + 0xe974U)))
#define local_88 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined8 *)(pf_stack_frame + 32))
#define local_70 (*(int *)(pf_stack_frame + 48))
#define local_6c (*(int *)(pf_stack_frame + 52))
#define local_68 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002394
 */

ulong recovered_10002394(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                        long param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                        ,uint param_10,undefined2 *param_11)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  uint uVar8;

  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  if (param_11 == (undefined2 *)0x0) {
    return 0;
  }
  local_68 = 0;
  local_6c = 0;
  if (param_2 == (long *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  recovered_100021ac(param_1,*param_2,0x16,param_3);
  uVar3 = recovered_10001904(param_1,*param_2,0x18,(undefined4 *)((long)&local_68 + 4));
  if ((int)uVar3 == 0) {
    return 0;
  }
  if (PF_PART4(local_68, 4) == 0) {
    return 0;
  }
  uVar8 = CONCAT13(POPCOUNT((char)(local_68 >> 0x38)),
                   CONCAT12(POPCOUNT((char)(local_68 >> 0x30)),
                            CONCAT11(POPCOUNT((char)(local_68 >> 0x28)),
                                     POPCOUNT((char)(local_68 >> 0x20)))));
  uVar7 = NEON_uaddlv((ulong)uVar8,1);
  if (1 < CONCAT22((short)(uVar8 >> 0x10),uVar7)) {
    return 0;
  }
  uVar3 = recovered_10001904(param_1,*param_2,0x1c,&local_6c);
  if ((int)uVar3 == 0) {
    return 0;
  }
  if (local_6c != 0) {
    return 0;
  }
  uVar1 = PF_PART2(local_68, 4);
  uVar3 = recovered_10001904(param_1,*param_2,0x1e,(undefined4 *)&local_68);
  if ((int)uVar3 != 0) {
    uVar4 = param_2[1];
    if (uVar4 == 0) goto LAB_100024b8;
    uVar8 = *(uint *)((long)param_2 + 0x34);
    if ((uVar8 != 0) && (1 < *(uint *)(param_2 + 7))) {
      uVar6 = (local_68 & 0xffffffff) * (ulong)uVar8;
      bVar2 = CARRY8(uVar4,uVar6);
      uVar5 = uVar4 + (local_68 & 0xffffffff) * (ulong)uVar8;
      uVar4 = 0;
      if (!bVar2 && uVar6 <= (ulong)*(uint *)(param_2 + 7) - 2) {
        uVar4 = uVar5;
      }
      goto LAB_100024b8;
    }
  }
  uVar4 = 0;
LAB_100024b8:
  if (uVar4 == 0) {
    return 0;
  }
  if ((uint)uVar1 < (uint)param_4) {
    return 0;
  }
  uVar5 = recovered_100022cc(param_1,(ulong)DAT_10011444,param_5,param_6,(long)&uStack_78 + 4,
                             &uStack_78);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = recovered_100022cc(param_1,(ulong)DAT_10011444,param_7,param_8,(long)&local_80 + 4,
                             &local_80);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = recovered_100022cc(param_1,(ulong)DAT_10011444,param_9,(ulong)param_10,(long)&local_88 + 4
                             ,&local_88);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  if ((((uStack_78 & 0xf00000000) != 0) || ((local_80 & 0x100000000) != 0)) ||
     ((local_88 & 0x300000000) != 0)) {
    return 0;
  }
  uVar5 = recovered_100021ac(param_1,*param_2,0x16,param_3);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = recovered_100021ac(param_1,*param_2,0x18,param_4);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = recovered_100026a4(param_1,*param_2,0x20,uStack_78 >> 0x20,uStack_78 & 0xffffffff);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = recovered_100026a4(param_1,*param_2,0x28,local_80 >> 0x20,local_80 & 0xffffffff);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar5 = recovered_100026a4(param_1,*param_2,0x30,local_88 >> 0x20,local_88 & 0xffffffff);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  recovered_10002358(param_1,(ulong)DAT_10011444,param_5,param_6);
  recovered_10002358(param_1,(ulong)DAT_10011444,param_7,param_8);
  recovered_10002358(param_1,(ulong)DAT_10011444,param_9,(ulong)param_10);
  uVar5 = recovered_100021ac(param_1,*param_2,0x1c,1);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar3 = recovered_10001904(param_1,*param_2,0x1c,&local_70);
  if ((int)uVar3 == 0) {
    return 0;
  }
  if (local_70 == 0) {
    return 0;
  }
  *param_11 = (short)param_4;
  param_11[1] = *(undefined2 *)(param_7 + 2);
  param_11[2] = *(undefined2 *)(param_9 + 2);
  *(ulong *)(param_11 + 4) = uVar4;
  return 1;
}

#undef DAT_10011444
#undef local_88
#undef local_80
#undef local_70
#undef local_6c
#undef local_68
#undef uStack_78

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a4
 */

ulong recovered_100026a4(int *param_1,long param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10002120(param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    uVar2 = recovered_10002120(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    uVar1 = (ulong)((int)uVar2 != 0);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f0
 */

void recovered_100026f0(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;

  uVar4 = param_4 * 4;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = uVar4 - 4;
    uVar3 = param_3 >> (ulong)(uVar4 & 0x1f);
    uVar1 = uVar3 & 0xf;
    bVar2 = (byte)uVar3 & 0xf | 0x30;
    if (9 < uVar1) {
      bVar2 = (char)uVar1 + 0x37;
    }
    recovered_10002768(param_1,param_2,bVar2);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002768
 */

void recovered_10002768(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100016e8(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_10002cf4
#define DAT_10002cf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x224U)))
#undef DAT_10002cf9
#define DAT_10002cf9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
#undef DAT_10002cfe
#define DAT_10002cfe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22eU)))
#undef DAT_10002d03
#define DAT_10002d03 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x233U)))
#undef str_10002d08
#define str_10002d08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x238U)))
#undef str_10002d13
#define str_10002d13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x243U)))
#undef str_10002d1c
#define str_10002d1c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x24cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027a8
 */

char * recovered_100027a8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10002d1c;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_10002cf9;
  }
  pcVar2 = str_10002d08;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10002d03;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10002cfe;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10002d13;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10002cf4;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_10002cf4
#undef DAT_10002cf9
#undef DAT_10002cfe
#undef DAT_10002d03
#undef str_10002d08
#undef str_10002d13
#undef str_10002d1c

#undef DAT_10011000
#define DAT_10011000 (*(int *)(((uintptr_t)pf_module_state + 0xe530U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002814
 */

void recovered_10002814(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10011000;
      cVar1 = '\x01';
      { __typeof__(DAT_10011000) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10011000),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    do {
    } while (DAT_10011000 != 0);
  }
  return;
}

#undef DAT_10011000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002844
 */

undefined4 recovered_10002844(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10011402
#define DAT_10011402 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe932U)))
#undef DAT_10011403
#define DAT_10011403 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe933U)))
#undef DAT_10011404
#define DAT_10011404 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe934U)))
#undef DAT_10011428
#define DAT_10011428 (*(int * *)(((uintptr_t)pf_module_state + 0xe958U)))
#undef DAT_10011444
#define DAT_10011444 (*(uint *)(((uintptr_t)pf_module_state + 0xe974U)))
#undef DAT_10011468
#define DAT_10011468 (*(ushort *)(((uintptr_t)pf_module_state + 0xe998U)))
#undef DAT_1001146a
#define DAT_1001146a (*(ushort *)(((uintptr_t)pf_module_state + 0xe99aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002868
 */

undefined8 recovered_10002868(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;

  uVar3 = 0;
  if ((DAT_10011428 != (int *)0x0) && (DAT_10011468 != 0)) {
    puVar5 = (undefined1 *)((ulong)param_1 * 0x900 + ((uintptr_t)pf_module_state+0x5530U));
    recovered_100018d4(puVar5,0x900);
    uVar2 = 0;
    uVar4 = (uint)DAT_1001146a;
    if (DAT_10011468 != 0) {
      uVar2 = uVar4 / DAT_10011468;
    }
    *(short *)(&DAT_10011404 + (ulong)(uVar4 - uVar2 * DAT_10011468) * 2) = (short)param_1;
    iVar1 = uVar4 + 1;
    DAT_1001146a = (ushort)iVar1;
    DAT_10011402 = (undefined1)iVar1;
    DAT_10011403 = (undefined1)((uint)iVar1 >> 8);
    recovered_10002358(DAT_10011428,(ulong)DAT_10011444,puVar5,0x900);
    recovered_10002358(DAT_10011428,(ulong)DAT_10011444,((uintptr_t)pf_module_state+0xe930U),0x24);
    uVar3 = recovered_1000194c(DAT_10011428,((uintptr_t)pf_module_state+0xe998U),0);
    if ((int)uVar3 == 0) {
      recovered_10001de0();
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_10011402
#undef DAT_10011403
#undef DAT_10011404
#undef DAT_10011428
#undef DAT_10011444
#undef DAT_10011468
#undef DAT_1001146a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000293c
 */

void recovered_1000293c(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    for (uVar1 = (ulong)param_3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
