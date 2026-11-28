/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19b4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000478
 */

void * recovered_10000478(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002670
#define DAT_10002670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1000b310
#define DAT_1000b310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cc4U)))
#undef str_10002671
#define str_10002671 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x25U)))
#undef str_10002687
#define str_10002687 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3bU)))
#define auStack_4c0 (*(undefined1 (*)[1216])(pf_stack_frame + 16))
#define auStack_c0 (*(undefined1 (*)[192])(pf_stack_frame + 1040))
#define iStack_a0 (*(int *)(pf_stack_frame + 1072))
#define iStack_9c (*(int *)(pf_stack_frame + 1076))
#define abStack_6c (*(byte (*)[108])(pf_stack_frame + 1124))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000484
 */

/* WARNING: Removing unreachable block (ram,0x1000059c) */
/* WARNING: Removing unreachable block (ram,0x100005a0) */
/* WARNING: Removing unreachable block (ram,0x100005a8) */
/* WARNING: Removing unreachable block (ram,0x100005c4) */
/* WARNING: Removing unreachable block (ram,0x100005cc) */

uint recovered_10000484(void *api)

{
  unsigned char pf_stack_frame[1264] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  if (api == (void *)0x0) {
    return 0;
  }
  if (((*(int *)api == 0x54584b57) && (*(int *)((long)api + 4) == 1100000)) &&
     (0xf7 < *(uint *)((long)api + 8))) {
    recovered_10000678((undefined1 *)&DAT_1000b310,0xa8);
    recovered_10000678((undefined1 *)&iStack_a0,8);
    recovered_10000678(auStack_c0,0x20);
    recovered_10000690(auStack_4c0,0x400,&DAT_10002670);
    if (*(uint *)((long)api + 0xc) != 0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002670,str_10002671,auStack_4c0);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
         (*(int *)((long)api + 0x5c) != 0)) {
        for (uVar3 = 0; uVar3 != 8; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_100017f8(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_6c)
            ;
            if ((int)uVar2 != 0) {
              recovered_100006a0(api,abStack_6c,&iStack_a0);
            }
          }
        }
      }
      if (((iStack_9c != 0) && (uVar2 = recovered_10001334(auStack_c0,0x20), (int)uVar2 != 0)) &&
         ((*(int *)api == 0x54584b57 &&
          (((0xe7 < *(uint *)((long)api + 8) && (*(uint *)((long)api + 0xe4) != 0)) &&
           (iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xe4))
                              (recovered_10001334,0x100,str_10002687), iVar1 != 0)))))) {
        if (*(uint *)((long)api + 0xc) != 0) {
          (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002670,str_10002671,auStack_4c0);
        }
        return 1;
      }
      recovered_10001738();
    }
  }
  return 0;
}

#undef DAT_10002670
#undef DAT_1000b310
#undef str_10002671
#undef str_10002687
#undef auStack_4c0
#undef auStack_c0
#undef iStack_a0
#undef iStack_9c
#undef abStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000678
 */

void recovered_10000678(undefined1 *param_1,long param_2)

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
 * Address: 0x10000690
 */

void recovered_10000690(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_100017dc((long)param_1);
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


#undef DAT_10002670
#define DAT_10002670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_10002702
#define DAT_10002702 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_10002708
#define DAT_10002708 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbcU)))
#undef DAT_1000270d
#define DAT_1000270d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc1U)))
#undef DAT_10002710
#define DAT_10002710 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_10002712
#define DAT_10002712 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc6U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
#undef DAT_1000b200
#define DAT_1000b200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bb4U)))
#undef DAT_1000b300
#define DAT_1000b300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb4U)))
#undef DAT_1000b310
#define DAT_1000b310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cc4U)))
#undef DAT_1000b318
#define DAT_1000b318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cccU)))
#undef DAT_1000b320
#define DAT_1000b320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cd4U)))
#undef DAT_1000b328
#define DAT_1000b328 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cdcU)))
#undef DAT_1000b330
#define DAT_1000b330 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8ce4U)))
#undef DAT_1000b338
#define DAT_1000b338 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cecU)))
#undef DAT_1000b340
#define DAT_1000b340 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cf4U)))
#undef DAT_1000b344
#define DAT_1000b344 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cf8U)))
#undef DAT_1000b348
#define DAT_1000b348 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cfcU)))
#undef DAT_1000b34c
#define DAT_1000b34c (*(uint *)(((uintptr_t)pf_module_state + 0x8d00U)))
#undef DAT_1000b350
#define DAT_1000b350 (*(uint *)(((uintptr_t)pf_module_state + 0x8d04U)))
#undef DAT_1000b35c
#define DAT_1000b35c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d10U)))
#undef DAT_1000b364
#define DAT_1000b364 (*(uint *)(((uintptr_t)pf_module_state + 0x8d18U)))
#undef DAT_1000b36c
#define DAT_1000b36c (*(uint *)(((uintptr_t)pf_module_state + 0x8d20U)))
#undef DAT_1000b370
#define DAT_1000b370 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d24U)))
#undef DAT_1000b380
#define DAT_1000b380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d34U)))
#undef DAT_1000b388
#define DAT_1000b388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8d3cU)))
#undef DAT_1000b398
#define DAT_1000b398 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d4cU)))
#undef DAT_1000b39c
#define DAT_1000b39c (*(uint *)(((uintptr_t)pf_module_state + 0x8d50U)))
#undef DAT_1000b3a0
#define DAT_1000b3a0 (*(uint *)(((uintptr_t)pf_module_state + 0x8d54U)))
#undef DAT_1000b3a4
#define DAT_1000b3a4 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x8d58U)))
#undef DAT_1000b3aa
#define DAT_1000b3aa (*(byte *)(((uintptr_t)pf_module_state + 0x8d5eU)))
#undef DAT_1000b3ab
#define DAT_1000b3ab (*(byte *)(((uintptr_t)pf_module_state + 0x8d5fU)))
#undef DAT_1000b3ac
#define DAT_1000b3ac (*(byte *)(((uintptr_t)pf_module_state + 0x8d60U)))
#undef DAT_1000b3ad
#define DAT_1000b3ad (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d61U)))
#undef DAT_1000b3ae
#define DAT_1000b3ae (*(uint16_t *)(((uintptr_t)pf_module_state + 0x8d62U)))
#undef DAT_1000b3b0
#define DAT_1000b3b0 (*(int *)(((uintptr_t)pf_module_state + 0x8d64U)))
#undef UNK_1000b33c
#define UNK_1000b33c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cf0U)))
#undef UNK_1000b354
#define UNK_1000b354 (*(int *)(((uintptr_t)pf_module_state + 0x8d08U)))
#undef UNK_1000b360
#define UNK_1000b360 (*(uint *)(((uintptr_t)pf_module_state + 0x8d14U)))
#undef UNK_1000b378
#define UNK_1000b378 (*(int *)(((uintptr_t)pf_module_state + 0x8d2cU)))
#undef UNK_1000b37c
#define UNK_1000b37c (*(int *)(((uintptr_t)pf_module_state + 0x8d30U)))
#undef iRam000000001000b354
#define iRam000000001000b354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d08U)))
#undef iRam000000001000b378
#define iRam000000001000b378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d2cU)))
#undef iRam000000001000b37c
#define iRam000000001000b37c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d30U)))
#undef str_100026b3
#define str_100026b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67U)))
#undef str_100026cb
#define str_100026cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#undef str_100026dd
#define str_100026dd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_100026ef
#define str_100026ef (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3U)))
#undef uRam000000001000b33c
#define uRam000000001000b33c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8cf0U)))
#undef uRam000000001000b360
#define uRam000000001000b360 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d14U)))
#define acStack_904 (*(char (*)[2308])(pf_stack_frame + 28))
#define uStack_504 (*(undefined4 *)(pf_stack_frame + 1052))
#define uStack_500 (*(undefined8 *)(pf_stack_frame + 1056))
#define uStack_4f8 (*(undefined8 *)(pf_stack_frame + 1064))
#define uStack_4f0 (*(undefined8 *)(pf_stack_frame + 1072))
#define uStack_4e8 (*(uint *)(pf_stack_frame + 1080))
#define uStack_4e4 (*(uint *)(pf_stack_frame + 1084))
#define uStack_4e0 (*(undefined8 *)(pf_stack_frame + 1088))
#define uStack_4d8 (*(undefined8 *)(pf_stack_frame + 1096))
#define uStack_4d0 (*(undefined8 *)(pf_stack_frame + 1104))
#define auStack_4c8 (*(ulong (*)[153])(pf_stack_frame + 1112))
#define auStack_c8 (*(uint (*)[50])(pf_stack_frame + 2136))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006a0
 */

void recovered_100006a0(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2368] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;

  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != 0x1af4) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x1044 && *(short *)(param_2 + 6) != 0x1005) {
    return;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  if (DAT_1000b3b0 != 0) {
    return;
  }
  recovered_10000690(acStack_904,0x400,&DAT_10002670);
  uStack_504 = 0;
  if (param_1 == (int *)0x0) goto LAB_1000080c;
  recovered_10000678((undefined1 *)&DAT_1000b310,0xa8);
  uVar7 = recovered_10001944(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                             (long)&uStack_504);
  if ((int)uVar7 == 0) goto LAB_1000080c;
  DAT_1000b310 = param_1;
  DAT_1000b39c = recovered_10001c38(param_2);
  DAT_1000b3aa = *param_2;
  DAT_1000b3ab = param_2[1];
  DAT_1000b3ac = param_2[2];
  DAT_1000b3ae = (undefined2)uStack_504;
  DAT_1000b3ad = 1;
  auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000;
  if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
    uVar7 = recovered_10001944(param_1,(ulong)DAT_1000b3aa,(ulong)DAT_1000b3ab,(ulong)DAT_1000b3ac,4
                               ,2,(long)auStack_4c8);
    if ((int)uVar7 == 0) {
      pcVar6 = str_100026dd;
      goto LAB_100007fc;
    }
    uVar9 = 0;
    for (lVar8 = 0x14; lVar8 != 0x2c; lVar8 = lVar8 + 4) {
      uVar4 = uVar9 | 1;
      if (*(uint *)(param_2 + lVar8) != 0) {
        uVar9 = uVar9 | 2;
      }
      if ((*(uint *)(param_2 + lVar8) & 1) != 0) {
        uVar9 = uVar4;
      }
    }
    lVar8 = recovered_100017dc(((uintptr_t)pf_module_state+0x77U));
    if (lVar8 != 0) {
      uVar9 = uVar9 | 4;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar9 = uVar9 | 2;
      }
    }
    auStack_c8[0] = (uint)auStack_4c8[0] | uVar9;
    uVar7 = recovered_10001c5c(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                               (ulong)auStack_c8[0]);
    if ((int)uVar7 == 0) {
      pcVar6 = str_100026ef;
      goto LAB_100007fc;
    }
    recovered_10001944(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                       (long)auStack_c8);
    piVar2 = DAT_1000b310;
    if ((uVar9 & (auStack_c8[0] ^ 0xffffffff)) == 0) {
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      auStack_c8[0] = 0;
      recovered_10000678((undefined1 *)&DAT_1000b318,0x80);
      uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x34,1,
                                 (long)auStack_c8);
      if ((int)uVar7 != 0) {
        uVar9 = 0;
        while ((uVar9 < 0x20 && (auStack_c8[0] - 0x40 < 0xb0))) {
          uStack_4d0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                     (ulong)(auStack_c8[0] & 0xffff),1,(long)&uStack_4d0 + 4);
          if (((int)uVar7 == 0) ||
             (uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                         (ulong)((auStack_c8[0] & 0xffff) + 1 & 0xffff),1,
                                         (long)&uStack_4d0), (int)uVar7 == 0)) break;
          if ((((PF_PART4(uStack_4d0, 4) == 9) &&
               (uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_c8[0] & 0xffff) + 3 & 0xffff),1,
                                           (long)&uStack_4d8 + 4), (int)uVar7 != 0)) &&
              (uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2]
                                          ,(ulong)((auStack_c8[0] & 0xffff) + 4 & 0xffff),1,
                                          (long)&uStack_4d8), (int)uVar7 != 0)) &&
             ((uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2]
                                          ,(ulong)((auStack_c8[0] & 0xffff) + 8 & 0xffff),4,
                                          (long)&uStack_4e0 + 4), (int)uVar7 != 0 &&
              (uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2]
                                          ,(ulong)((auStack_c8[0] & 0xffff) + 0xc & 0xffff),4,
                                          (long)&uStack_4e0), (int)uVar7 != 0)))) {
            auStack_4c8[0] = 0;
            iRam000000001000b354 = iRam000000001000b354 + 1;
            if ((PF_PART4(uStack_4d8, 4) == 1) && (0x37 < (uint)uStack_4e0)) {
              uVar7 = recovered_10001ddc(piVar2,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                         (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar7 != 0) {
                DAT_1000b318 = auStack_4c8[0];
                uRam000000001000b33c = (uint)uStack_4d8;
                goto LAB_10000b00;
              }
            }
            iVar3 = PF_PART4(uStack_4d8, 4);
            if (PF_PART4(uStack_4d8, 4) == 2 && 1 < (uint)uStack_4e0) {
              uVar7 = recovered_10001ddc(piVar2,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                         (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar7 != 0) {
                uStack_4e4 = 0;
                DAT_1000b320 = auStack_4c8[0];
                DAT_1000b340 = (uint)uStack_4d8;
                uVar7 = recovered_10001944(piVar2,(ulong)*param_2,(ulong)param_2[1],
                                           (ulong)param_2[2],
                                           (ulong)((auStack_c8[0] & 0xffff) + 0x10 & 0xffff),4,
                                           (long)&uStack_4e4);
                if (((int)uVar7 == 0) || (uStack_4e4 == 0)) {
                  DAT_1000b320 = 0;
                }
                else {
                  DAT_1000b34c = uStack_4e4;
                  DAT_1000b350 = (uint)uStack_4e0;
                }
                goto LAB_10000b00;
              }
              iVar3 = PF_PART4(uStack_4d8, 4);
            }
            if (iVar3 == 3) {
              uVar7 = recovered_10001ddc(piVar2,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                         (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar7 != 0) {
                DAT_1000b328 = auStack_4c8[0];
                DAT_1000b344 = (uint)uStack_4d8;
                goto LAB_10000b00;
              }
              iVar3 = PF_PART4(uStack_4d8, 4);
            }
            if (iVar3 == 4) {
              uVar7 = recovered_10001ddc(piVar2,param_2,(uint)uStack_4d8,PF_PART4(uStack_4e0, 4),
                                         (uint)uStack_4e0,auStack_4c8);
              if ((int)uVar7 != 0) {
                DAT_1000b330 = auStack_4c8[0];
                DAT_1000b338 = (uint)uStack_4e0;
                DAT_1000b348 = (uint)uStack_4d8;
              }
            }
          }
LAB_10000b00:
          if (((uint)uStack_4d0 == 0) || ((uint)uStack_4d0 == auStack_c8[0])) break;
          uVar9 = uVar9 + 1;
          auStack_c8[0] = (uint)uStack_4d0;
        }
        piVar2 = DAT_1000b310;
        if (DAT_1000b318 == 0) goto LAB_10000ff8;
        DAT_1000b398 = 1;
        auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000;
        auStack_c8[0] = 0;
        recovered_10001fa0(DAT_1000b310,DAT_1000b318,0x14,((uintptr_t)pf_module_state+0x8d1cU));
        DAT_1000b370 = 1;
        uVar5 = recovered_10001fb8(piVar2,DAT_1000b318);
        if ((int)uVar5 == 0) {
LAB_10000fd8:
          uVar7 = recovered_10001fa0(piVar2,DAT_1000b318,0x14,(long)auStack_c8);
          if (((int)uVar7 != 0) && (auStack_c8[0] != 0)) {
            recovered_10002050(piVar2,DAT_1000b318,(ulong)(auStack_c8[0] | 0x80));
          }
          goto LAB_10000ff8;
        }
        DAT_1000b370 = 2;
        uVar7 = recovered_10002050(piVar2,DAT_1000b318,1);
        if ((((int)uVar7 == 0) ||
            (uVar7 = recovered_10001fa0(piVar2,DAT_1000b318,0x14,(long)auStack_c8), (int)uVar7 == 0)
            ) || ((auStack_c8[0] & 0xc1) != 1)) goto LAB_10000fd8;
        DAT_1000b370 = 3;
        uVar7 = recovered_10002050(piVar2,DAT_1000b318,3);
        if ((((int)uVar7 == 0) ||
            (uVar7 = recovered_10001fa0(piVar2,DAT_1000b318,0x14,(long)auStack_c8), (int)uVar7 == 0)
            ) || ((auStack_c8[0] & 0xc3) != 3)) goto LAB_10000fd8;
        DAT_1000b370 = 4;
        uVar7 = recovered_10002068(piVar2,DAT_1000b318,0,0);
        if ((((int)uVar7 == 0) ||
            (uVar7 = recovered_1000207c(piVar2,DAT_1000b318,(undefined4 *)((uintptr_t)pf_module_state+0x8d0cU)),
            (int)uVar7 == 0)) ||
           ((uVar7 = recovered_10002068(piVar2,DAT_1000b318,0,1), (int)uVar7 == 0 ||
            ((uVar7 = recovered_1000207c(piVar2,DAT_1000b318,&DAT_1000b35c), (int)uVar7 == 0 ||
             ((DAT_1000b35c & 1) == 0)))))) goto LAB_10000fd8;
        DAT_1000b364 = DAT_1000b35c & 3;
        uRam000000001000b360 = 0;
        DAT_1000b370 = 5;
        uVar7 = recovered_10002068(piVar2,DAT_1000b318,8,0);
        if (((int)uVar7 == 0) ||
           (((uVar7 = recovered_10002068(piVar2,DAT_1000b318,0xc,(ulong)uRam000000001000b360),
             (int)uVar7 == 0 ||
             (uVar7 = recovered_10002068(piVar2,DAT_1000b318,8,1), (int)uVar7 == 0)) ||
            (uVar7 = recovered_10002068(piVar2,DAT_1000b318,0xc,(ulong)DAT_1000b364),
            (int)uVar7 == 0)))) goto LAB_10000fd8;
        recovered_100020c4(piVar2);
        auStack_c8[0] = 0xb;
        DAT_1000b370 = 6;
        uVar7 = recovered_10002050(piVar2,DAT_1000b318,0xb);
        if ((((int)uVar7 == 0) ||
            (uVar7 = recovered_10001fa0(piVar2,DAT_1000b318,0x14,((uintptr_t)pf_module_state+0x8d20U)), (int)uVar7 == 0)) ||
           ((DAT_1000b36c & 200) != 8)) goto LAB_10000fd8;
        DAT_1000b370 = 7;
        uVar7 = recovered_10001d94(piVar2,DAT_1000b318,0x12,(undefined4 *)((uintptr_t)pf_module_state+0x8d28U));
        if ((((int)uVar7 == 0) ||
            (uVar7 = recovered_10001fa0(piVar2,DAT_1000b318,0x15,((uintptr_t)pf_module_state+0x8d44U)), (int)uVar7 == 0)) ||
           ((uVar7 = recovered_10001cf0(piVar2,DAT_1000b318,0x16,0), (int)uVar7 == 0 ||
            ((uVar7 = recovered_10001d94(piVar2,DAT_1000b318,0x18,(undefined4 *)((uintptr_t)pf_module_state+0x8d2cU)),
             (int)uVar7 == 0 ||
             (uVar7 = recovered_10001d94(piVar2,DAT_1000b318,0x1c,(undefined4 *)((uintptr_t)pf_module_state+0x8d30U)),
             (int)uVar7 == 0)))))) goto LAB_10000fd8;
        uVar7 = recovered_10001d94(piVar2,DAT_1000b318,0x1e,(undefined4 *)auStack_4c8);
        uVar9 = DAT_1000b364;
        if ((int)uVar7 != 0) {
          DAT_1000b380 = (uint)auStack_4c8[0];
          if ((((DAT_1000b320 != 0) && (DAT_1000b34c != 0)) && (1 < DAT_1000b350)) &&
             ((uVar5 = (ulong)DAT_1000b34c * (auStack_4c8[0] & 0xffffffff),
              !CARRY8(DAT_1000b320,uVar5) && (uVar5 <= (ulong)DAT_1000b350 - 2)))) {
            DAT_1000b388 = uVar5 + DAT_1000b320;
          }
        }
        DAT_1000b370 = 8;
        uVar4 = recovered_10001c38(param_2);
        DAT_1000b39c = (uVar9 << 0x1d ^ 0xffffffff) & 0x40000000 | uVar4;
        if (((iRam000000001000b378 == 0) || (iRam000000001000b37c != 0)) ||
           ((DAT_1000b388 == 0 ||
            (((uVar7 = recovered_10001ca4(DAT_1000b310,(ulong)DAT_1000b39c,((uintptr_t)pf_module_state+0x8cb4U),0x10,
                                          (long)&uStack_4e8,(long)&uStack_4f0 + 4), (int)uVar7 == 0
              || (uVar7 = recovered_10001ca4(DAT_1000b310,(ulong)DAT_1000b39c,((uintptr_t)pf_module_state+0x8ab4U),8,
                                             (long)&uStack_4f0,(long)&uStack_4f8 + 4),
                 (int)uVar7 == 0)) ||
             (uVar7 = recovered_10001ca4(DAT_1000b310,(ulong)DAT_1000b39c,((uintptr_t)pf_module_state+0x8bb4U),0xe,
                                         (long)&uStack_4f8,(long)&uStack_500 + 4), (int)uVar7 == 0))
            )))) goto LAB_10000ff8;
        recovered_10000678(&DAT_1000b300,0x10);
        recovered_10000678((undefined1 *)((uintptr_t)pf_module_state+0x8ab4U),8);
        recovered_10000678(&DAT_1000b200,0xe);
        uVar7 = recovered_10001cf0(DAT_1000b310,DAT_1000b318,0x16,0);
        if (((((int)uVar7 == 0) ||
             (uVar7 = recovered_10001cf0(DAT_1000b310,DAT_1000b318,0x18,1), (int)uVar7 == 0)) ||
            (uVar5 = recovered_10001d04(DAT_1000b310,DAT_1000b318,0x20,(ulong)uStack_4e8,
                                        uStack_4f0 >> 0x20), (int)uVar5 == 0)) ||
           ((uVar5 = recovered_10001d04(DAT_1000b310,DAT_1000b318,0x28,uStack_4f0 & 0xffffffff,
                                        uStack_4f8 >> 0x20), (int)uVar5 == 0 ||
            (uVar5 = recovered_10001d04(DAT_1000b310,DAT_1000b318,0x30,uStack_4f8 & 0xffffffff,
                                        uStack_500 >> 0x20), (int)uVar5 == 0)))) goto LAB_10000ff8;
        recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,&DAT_1000b300,0x10);
        recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,((uintptr_t)pf_module_state+0x8ab4U),8);
        recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,&DAT_1000b200,0xe);
        uVar7 = recovered_10001cf0(DAT_1000b310,DAT_1000b318,0x1c,1);
        if ((int)uVar7 == 0) goto LAB_10000ff8;
        uVar7 = recovered_10001d94(DAT_1000b310,DAT_1000b318,0x1c,(undefined4 *)&uStack_500);
        uVar5 = DAT_1000b318;
        piVar2 = DAT_1000b310;
        if ((((((int)uVar7 == 0) || ((int)uStack_500 == 0)) ||
             (auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000, DAT_1000b318 == 0)) ||
            ((uVar7 = recovered_10001fa0(DAT_1000b310,DAT_1000b318,0x14,(long)auStack_4c8),
             (int)uVar7 == 0 || (((uint)auStack_4c8[0] & 200) != 8)))) ||
           ((uVar7 = recovered_10002050(piVar2,uVar5,(ulong)((uint)auStack_4c8[0] | 4)),
            (int)uVar7 == 0 ||
            ((uVar7 = recovered_10001fa0(piVar2,uVar5,0x14,(long)auStack_4c8), (int)uVar7 == 0 ||
             (((uint)auStack_4c8[0] & 0xc4) != 4)))))) goto LAB_10000ff8;
        DAT_1000b3a4 = 1;
LAB_100011b8:
        DAT_1000b3b0 = 1;
        recovered_10000690(acStack_904,0x400,&DAT_10002670);
        pcVar6 = recovered_10001990((long)param_2);
        recovered_10000690((undefined1 *)auStack_c8,0x60,str_100026b3);
        recovered_10001784((long)auStack_c8,0x60,&DAT_10002702);
        recovered_1000225c((long)auStack_c8,0x60,(uint)*param_2,2);
        recovered_10001784((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xb8U));
        recovered_1000225c((long)auStack_c8,0x60,(uint)param_2[1],2);
        recovered_10001784((long)auStack_c8,0x60,(char *)((uintptr_t)pf_module_state+0xbaU));
        recovered_100022d4((long)auStack_c8,0x60,(uint)param_2[2]);
        recovered_10000690((undefined1 *)auStack_4c8,0x400,&DAT_10002708);
        recovered_1000225c((long)auStack_4c8,0x400,(uint)*param_2,2);
        recovered_10001784((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xb8U));
        recovered_1000225c((long)auStack_4c8,0x400,(uint)param_2[1],2);
        recovered_10001784((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xbaU));
        recovered_100022d4((long)auStack_4c8,0x400,(uint)param_2[2]);
        recovered_10001784((long)auStack_4c8,0x400,&DAT_1000270d);
        recovered_1000225c((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 4),4);
        recovered_10001784((long)auStack_4c8,0x400,(char *)((uintptr_t)pf_module_state+0xb8U));
        recovered_1000225c((long)auStack_4c8,0x400,(uint)*(ushort *)(param_2 + 6),4);
        recovered_10001784((long)auStack_4c8,0x400,&DAT_10002710);
        if (acStack_904[0] != '\0') {
          recovered_10001784((long)auStack_4c8,0x400,&DAT_10002712);
          recovered_10001784((long)auStack_4c8,0x400,acStack_904);
        }
        if ((param_1[3] != 0) &&
           (iVar3 = (*(code *)(ulong)(uint)param_1[3])(auStack_c8,pcVar6,auStack_4c8), iVar3 != 0))
        {
          if (param_3 == (int *)0x0) {
            return;
          }
          param_3[1] = param_3[1] + 1;
          return;
        }
        goto LAB_1000080c;
      }
LAB_10000ff8:
      auStack_4c8[0] = auStack_4c8[0] & 0xffffffff00000000;
      auStack_c8[0] = 0;
      uStack_4d0 = 0;
      if (*(ushort *)(param_2 + 6) >> 6 < 0x41) {
        lVar8 = 0x14;
        do {
          if (lVar8 == 0x2c) goto LAB_10000808;
          puVar1 = (uint *)(param_2 + lVar8);
          lVar8 = lVar8 + 4;
        } while ((*puVar1 & 1) == 0);
        uVar9 = *puVar1 & 0xfffffffc;
        if (0xffff0012 < uVar9 - 0xffee) {
          DAT_1000b398 = 2;
          uVar4 = recovered_10001c38(param_2);
          DAT_1000b39c = uVar4 | 0x40000000;
          uVar4 = uVar9 + 0x12;
          DAT_1000b3a0 = uVar9;
          uVar7 = recovered_100021f0(DAT_1000b310,(ulong)(uVar4 & 0xffff),1,0);
          if ((((((int)uVar7 != 0) &&
                (uVar7 = recovered_10002224(DAT_1000b310,(ulong)(uVar4 & 0xffff),1,(long)&uStack_4d0
                                           ), (int)uVar7 != 0)) && ((uint)uStack_4d0 == 0)) &&
              ((uVar7 = recovered_100021f0(DAT_1000b310,(ulong)(uVar4 & 0xffff),1,3),
               (int)uVar7 != 0 &&
               (uVar7 = recovered_100021f0(DAT_1000b310,(ulong)(uVar9 + 0xe & 0xffff),2,0),
               (int)uVar7 != 0)))) &&
             (uVar7 = recovered_10002224(DAT_1000b310,(ulong)(uVar9 + 0xc & 0xffff),2,
                                         (long)auStack_4c8), (int)uVar7 != 0)) {
            uVar11 = CONCAT13(POPCOUNT((char)(auStack_4c8[0] >> 0x18)),
                              CONCAT12(POPCOUNT((char)(auStack_4c8[0] >> 0x10)),
                                       CONCAT11(POPCOUNT((char)(auStack_4c8[0] >> 8)),
                                                POPCOUNT((char)auStack_4c8[0]))));
            uVar10 = NEON_uaddlv((ulong)uVar11,1);
            if ((((uint)auStack_4c8[0] - 1 < 0x80 && CONCAT22((short)(uVar11 >> 0x10),uVar10) < 2)
                && (uVar7 = recovered_10001ca4(DAT_1000b310,(ulong)DAT_1000b39c,((uintptr_t)pf_module_state+0x59b4U),0x3000,
                                               (long)auStack_c8,(long)&uStack_4d0 + 4),
                   (int)uVar7 != 0)) && ((PF_PART4(uStack_4d0, 4) == 0 && ((auStack_c8[0] & 0xfff) == 0))))
            {
              recovered_10000678(&DAT_10008000,0x3000);
              recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,&DAT_10008000,0x3000);
              uVar7 = recovered_100021f0(DAT_1000b310,(ulong)(uVar9 + 4 & 0xffff),4,0);
              if ((((int)uVar7 != 0) &&
                  (uVar7 = recovered_100021f0(DAT_1000b310,(ulong)(uVar9 + 8 & 0xffff),4,
                                              (ulong)(auStack_c8[0] >> 0xc)), (int)uVar7 != 0)) &&
                 (uVar7 = recovered_100021f0(DAT_1000b310,(ulong)(uVar4 & 0xffff),1,7),
                 (int)uVar7 != 0)) {
                DAT_1000b3a4 = (undefined2)auStack_4c8[0];
                goto LAB_100011b8;
              }
            }
          }
        }
      }
    }
  }
  else {
    pcVar6 = str_100026cb;
LAB_100007fc:
    recovered_10001784((long)acStack_904,0x400,pcVar6);
  }
LAB_10000808:
  recovered_10001738();
LAB_1000080c:
  recovered_10001738();
  return;
}

#undef DAT_10002670
#undef DAT_10002702
#undef DAT_10002708
#undef DAT_1000270d
#undef DAT_10002710
#undef DAT_10002712
#undef DAT_10008000
#undef DAT_1000b200
#undef DAT_1000b300
#undef DAT_1000b310
#undef DAT_1000b318
#undef DAT_1000b320
#undef DAT_1000b328
#undef DAT_1000b330
#undef DAT_1000b338
#undef DAT_1000b340
#undef DAT_1000b344
#undef DAT_1000b348
#undef DAT_1000b34c
#undef DAT_1000b350
#undef DAT_1000b35c
#undef DAT_1000b364
#undef DAT_1000b36c
#undef DAT_1000b370
#undef DAT_1000b380
#undef DAT_1000b388
#undef DAT_1000b398
#undef DAT_1000b39c
#undef DAT_1000b3a0
#undef DAT_1000b3a4
#undef DAT_1000b3aa
#undef DAT_1000b3ab
#undef DAT_1000b3ac
#undef DAT_1000b3ad
#undef DAT_1000b3ae
#undef DAT_1000b3b0
#undef UNK_1000b33c
#undef UNK_1000b354
#undef UNK_1000b360
#undef UNK_1000b378
#undef UNK_1000b37c
#undef iRam000000001000b354
#undef iRam000000001000b378
#undef iRam000000001000b37c
#undef str_100026b3
#undef str_100026cb
#undef str_100026dd
#undef str_100026ef
#undef uRam000000001000b33c
#undef uRam000000001000b360
#undef acStack_904
#undef uStack_504
#undef uStack_500
#undef uStack_4f8
#undef uStack_4f0
#undef uStack_4e8
#undef uStack_4e4
#undef uStack_4e0
#undef uStack_4d8
#undef uStack_4d0
#undef auStack_4c8
#undef auStack_c8

#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b4U)))
#undef DAT_10008001
#define DAT_10008001 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b5U)))
#undef DAT_10008002
#define DAT_10008002 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b6U)))
#undef DAT_10008003
#define DAT_10008003 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b7U)))
#undef DAT_10008004
#define DAT_10008004 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b8U)))
#undef DAT_10008005
#define DAT_10008005 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59b9U)))
#undef DAT_10008006
#define DAT_10008006 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59baU)))
#undef DAT_10008007
#define DAT_10008007 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bbU)))
#undef DAT_10008008
#define DAT_10008008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bcU)))
#undef DAT_10008009
#define DAT_10008009 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bdU)))
#undef DAT_1000800a
#define DAT_1000800a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59beU)))
#undef DAT_1000800b
#define DAT_1000800b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59bfU)))
#undef DAT_1000800c
#define DAT_1000800c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59c0U)))
#undef DAT_1000800d
#define DAT_1000800d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59c1U)))
#undef DAT_1000800e
#define DAT_1000800e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59c2U)))
#undef DAT_1000800f
#define DAT_1000800f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x59c3U)))
#undef DAT_1000b000
#define DAT_1000b000 (*(int *)(((uintptr_t)pf_module_state + 0x89b4U)))
#undef DAT_1000b200
#define DAT_1000b200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8bb4U)))
#undef DAT_1000b300
#define DAT_1000b300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb4U)))
#undef DAT_1000b301
#define DAT_1000b301 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb5U)))
#undef DAT_1000b302
#define DAT_1000b302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb6U)))
#undef DAT_1000b303
#define DAT_1000b303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb7U)))
#undef DAT_1000b304
#define DAT_1000b304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb8U)))
#undef DAT_1000b305
#define DAT_1000b305 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cb9U)))
#undef DAT_1000b306
#define DAT_1000b306 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cbaU)))
#undef DAT_1000b307
#define DAT_1000b307 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cbbU)))
#undef DAT_1000b308
#define DAT_1000b308 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cbcU)))
#undef DAT_1000b309
#define DAT_1000b309 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cbdU)))
#undef DAT_1000b30a
#define DAT_1000b30a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cbeU)))
#undef DAT_1000b30b
#define DAT_1000b30b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cbfU)))
#undef DAT_1000b30c
#define DAT_1000b30c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cc0U)))
#undef DAT_1000b30d
#define DAT_1000b30d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cc1U)))
#undef DAT_1000b30e
#define DAT_1000b30e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cc2U)))
#undef DAT_1000b30f
#define DAT_1000b30f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cc3U)))
#undef DAT_1000b310
#define DAT_1000b310 (*(int * *)(((uintptr_t)pf_module_state + 0x8cc4U)))
#undef DAT_1000b388
#define DAT_1000b388 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8d3cU)))
#undef DAT_1000b398
#define DAT_1000b398 (*(int *)(((uintptr_t)pf_module_state + 0x8d4cU)))
#undef DAT_1000b39c
#define DAT_1000b39c (*(uint *)(((uintptr_t)pf_module_state + 0x8d50U)))
#undef DAT_1000b3a0
#define DAT_1000b3a0 (*(uint *)(((uintptr_t)pf_module_state + 0x8d54U)))
#undef DAT_1000b3a4
#define DAT_1000b3a4 (*(ushort *)(((uintptr_t)pf_module_state + 0x8d58U)))
#undef DAT_1000b3a6
#define DAT_1000b3a6 (*(ushort *)(((uintptr_t)pf_module_state + 0x8d5aU)))
#undef DAT_1000b3b0
#define DAT_1000b3b0 (*(int *)(((uintptr_t)pf_module_state + 0x8d64U)))
#undef DAT_1000b400
#define DAT_1000b400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8db4U)))
#undef UNK_1000b3a8
#define UNK_1000b3a8 (*(ushort *)(((uintptr_t)pf_module_state + 0x8d5cU)))
#undef uRam000000001000b3a8
#define uRam000000001000b3a8 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x8d5cU)))
#define local_68 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001334
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 recovered_10001334(undefined1 *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  ushort uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;

  iVar10 = DAT_1000b398;
  local_68 = 0;
  if (param_1 == (undefined1 *)0x0) {
    return 0;
  }
  if (0xff < (uint)param_2 - 1) {
    return 0;
  }
  if (DAT_1000b3b0 == 0) {
    return 0;
  }
  while( true ) {
    do {
      iVar7 = DAT_1000b000;
      cVar5 = '\x01';
      { __typeof__(DAT_1000b000) pf_exclusive_expected = iVar7;
bVar9 = __atomic_compare_exchange_n(&(DAT_1000b000),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar5 = bVar9 ? 0 : 1;
}
    } while (cVar5 != '\0');
    if (iVar7 == 0) break;
    do {
    } while (DAT_1000b000 != 0);
  }
  uVar14 = (ulong)DAT_1000b3a4;
  puVar1 = &DAT_10008000 + ((ulong)((uint)(uintptr_t)(uintptr_t)DAT_1000b3a4 * 0x12 + 0x1005) & 0x3ff000);
  if (DAT_1000b398 != 2) {
    puVar1 = &DAT_1000b200;
  }
  uVar12 = recovered_10001ca4(DAT_1000b310,(ulong)DAT_1000b39c,((uintptr_t)pf_module_state+0x8db4U),param_2,
                              (long)&local_68 + 4,&local_68);
  if ((int)uVar12 != 0) {
    puVar2 = &DAT_10008000 + uVar14 * 0x10;
    recovered_10000678(&DAT_1000b400,0x100);
    bVar9 = iVar10 == 2;
    if (!bVar9) {
      puVar2 = (undefined1 *)((uintptr_t)pf_module_state+0x8ab4U);
    }
    puVar3 = &DAT_10008000;
    if (!bVar9) {
      puVar3 = &DAT_1000b300;
    }
    *puVar3 = (char)((ulong)local_68 >> 0x20);
    puVar4 = &DAT_1000b301;
    if (bVar9) {
      puVar4 = &DAT_10008001;
    }
    *puVar4 = (char)((ulong)local_68 >> 0x28);
    puVar4 = &DAT_10008002;
    if (!bVar9) {
      puVar4 = &DAT_1000b302;
    }
    *puVar4 = (char)((ulong)local_68 >> 0x30);
    puVar4 = &DAT_10008003;
    if (!bVar9) {
      puVar4 = &DAT_1000b303;
    }
    *puVar4 = (char)((ulong)local_68 >> 0x38);
    puVar4 = &DAT_10008004;
    if (!bVar9) {
      puVar4 = &DAT_1000b304;
    }
    *puVar4 = (char)local_68;
    puVar4 = &DAT_10008005;
    if (!bVar9) {
      puVar4 = &DAT_1000b305;
    }
    *puVar4 = (char)((ulong)local_68 >> 8);
    puVar4 = &DAT_10008006;
    if (!bVar9) {
      puVar4 = &DAT_1000b306;
    }
    *puVar4 = (char)((ulong)local_68 >> 0x10);
    puVar4 = &DAT_10008007;
    if (!bVar9) {
      puVar4 = &DAT_1000b307;
    }
    *puVar4 = (char)((ulong)local_68 >> 0x18);
    puVar4 = &DAT_10008008;
    if (!bVar9) {
      puVar4 = &DAT_1000b308;
    }
    *puVar4 = (char)param_2;
    puVar4 = &DAT_10008009;
    if (!bVar9) {
      puVar4 = &DAT_1000b309;
    }
    *puVar4 = (char)(param_2 >> 8);
    puVar4 = &DAT_1000800a;
    if (!bVar9) {
      puVar4 = &DAT_1000b30a;
    }
    *puVar4 = 0;
    puVar4 = &DAT_1000800b;
    if (!bVar9) {
      puVar4 = &DAT_1000b30b;
    }
    *puVar4 = 0;
    puVar4 = &DAT_1000800c;
    if (!bVar9) {
      puVar4 = &DAT_1000b30c;
    }
    *puVar4 = 2;
    puVar4 = &DAT_1000800d;
    if (!bVar9) {
      puVar4 = &DAT_1000b30d;
    }
    *puVar4 = 0;
    puVar4 = &DAT_1000800e;
    if (!bVar9) {
      puVar4 = &DAT_1000b30e;
    }
    *puVar4 = 0;
    puVar4 = &DAT_1000800f;
    if (!bVar9) {
      puVar4 = &DAT_1000b30f;
    }
    *puVar4 = 0;
    uVar11 = 0;
    uVar13 = (uint)DAT_1000b3a6;
    if (DAT_1000b3a4 != 0) {
      uVar11 = uVar13 / DAT_1000b3a4;
    }
    *(undefined2 *)(puVar2 + (ulong)(uVar13 - uVar11 * DAT_1000b3a4) * 2 + 4) = 0;
    iVar10 = uVar13 + 1;
    DAT_1000b3a6 = (ushort)iVar10;
    puVar2[2] = (char)iVar10;
    puVar2[3] = (char)((uint)iVar10 >> 8);
    recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,&DAT_1000b400,param_2);
    recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,puVar3,(ulong)DAT_1000b3a4 << 4);
    recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,puVar2,(ulong)((uint)(uintptr_t)(uintptr_t)DAT_1000b3a4 * 2 + 6));
    recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,puVar1,(ulong)((uint)DAT_1000b3a4 << 3 | 6))
    ;
    recovered_100020c4(DAT_1000b310);
    if (DAT_1000b398 == 1) {
      if (DAT_1000b388 == 0) goto LAB_100016d0;
      uVar12 = recovered_10001cf0(DAT_1000b310,DAT_1000b388,0,0);
      iVar10 = (int)uVar12;
    }
    else {
      if ((DAT_1000b398 != 2) || (0xffe < DAT_1000b3a0 >> 4)) goto LAB_100016d0;
      uVar12 = recovered_100021f0(DAT_1000b310,(ulong)(DAT_1000b3a0 + 0x10 & 0xffff),2,0);
      iVar10 = (int)uVar12;
    }
    if (iVar10 != 0) {
      uVar11 = 0;
      for (iVar10 = 1000; iVar10 != 0; iVar10 = iVar10 + -1) {
        recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,puVar1,
                           (ulong)((uint)DAT_1000b3a4 << 3 | 6));
        uVar11 = (uint)*(ushort *)(puVar1 + 2);
        if (uVar11 != uRam000000001000b3a8) break;
        recovered_1000215c(DAT_1000b310);
      }
      uVar8 = uRam000000001000b3a8;
      uVar13 = (uint)uRam000000001000b3a8;
      if ((uVar11 - uVar13 != 0) && ((uVar11 - uVar13 & 0xffff) <= (uint)DAT_1000b3a4)) {
        uVar11 = 0;
        if (DAT_1000b3a4 != 0) {
          uVar11 = uVar13 / DAT_1000b3a4;
        }
        uVar13 = uVar13 - uVar11 * DAT_1000b3a4;
        iVar10 = recovered_10002428((undefined4 *)(puVar1 + (ulong)uVar13 * 8 + 4));
        uVar11 = recovered_10002428((undefined4 *)(puVar1 + (ulong)uVar13 * 8 + 8));
        uRam000000001000b3a8 = uVar8 + 1;
        if ((iVar10 == 0 && (uint)param_2 <= uVar11) && (uVar11 < 0x101)) {
          recovered_10001d58(DAT_1000b310,(ulong)DAT_1000b39c,&DAT_1000b400,(ulong)uVar11);
          puVar6 = &DAT_1000b400;
          for (uVar14 = param_2 & 0xffffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
            *param_1 = *puVar6;
            puVar6 = puVar6 + 1;
            param_1 = param_1 + 1;
          }
          DAT_1000b000 = 0;
          return 1;
        }
      }
    }
  }
LAB_100016d0:
  recovered_1000244c();
  DAT_1000b000 = 0;
  return 0;
}

#undef DAT_10008000
#undef DAT_10008001
#undef DAT_10008002
#undef DAT_10008003
#undef DAT_10008004
#undef DAT_10008005
#undef DAT_10008006
#undef DAT_10008007
#undef DAT_10008008
#undef DAT_10008009
#undef DAT_1000800a
#undef DAT_1000800b
#undef DAT_1000800c
#undef DAT_1000800d
#undef DAT_1000800e
#undef DAT_1000800f
#undef DAT_1000b000
#undef DAT_1000b200
#undef DAT_1000b300
#undef DAT_1000b301
#undef DAT_1000b302
#undef DAT_1000b303
#undef DAT_1000b304
#undef DAT_1000b305
#undef DAT_1000b306
#undef DAT_1000b307
#undef DAT_1000b308
#undef DAT_1000b309
#undef DAT_1000b30a
#undef DAT_1000b30b
#undef DAT_1000b30c
#undef DAT_1000b30d
#undef DAT_1000b30e
#undef DAT_1000b30f
#undef DAT_1000b310
#undef DAT_1000b388
#undef DAT_1000b398
#undef DAT_1000b39c
#undef DAT_1000b3a0
#undef DAT_1000b3a4
#undef DAT_1000b3a6
#undef DAT_1000b3b0
#undef DAT_1000b400
#undef UNK_1000b3a8
#undef uRam000000001000b3a8
#undef local_68

#undef DAT_1000b310
#define DAT_1000b310 (*(int * *)(((uintptr_t)pf_module_state + 0x8cc4U)))
#undef DAT_1000b3aa
#define DAT_1000b3aa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d5eU)))
#undef DAT_1000b3ab
#define DAT_1000b3ab (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d5fU)))
#undef DAT_1000b3ac
#define DAT_1000b3ac (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8d60U)))
#undef DAT_1000b3ad
#define DAT_1000b3ad (*(char *)(((uintptr_t)pf_module_state + 0x8d61U)))
#undef DAT_1000b3ae
#define DAT_1000b3ae (*(uint16_t *)(((uintptr_t)pf_module_state + 0x8d62U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001738
 */

int * recovered_10001738(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;

  recovered_1000244c();
  if ((DAT_1000b310 == (int *)0x0) || (DAT_1000b3ad == '\0')) {
    return DAT_1000b310;
  }
  if ((((DAT_1000b310 == (int *)0x0) || (*DAT_1000b310 != 0x54584b57)) ||
      ((uint)DAT_1000b310[2] < 100)) || (DAT_1000b310[0x18] == 0)) {
    return (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  piVar1 = (int *)(*(code *)(ulong)(uint)DAT_1000b310[0x18])
                            (DAT_1000b3aa,DAT_1000b3ab,DAT_1000b3ac,4,2,DAT_1000b3ae);
  return piVar1;
}

#undef DAT_1000b310
#undef DAT_1000b3aa
#undef DAT_1000b3ab
#undef DAT_1000b3ac
#undef DAT_1000b3ad
#undef DAT_1000b3ae

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001784
 */

void recovered_10001784(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_100017dc(param_1);
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
 * Address: 0x100017dc
 */

long recovered_100017dc(long param_1)

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


#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_50 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f8
 */

undefined8
recovered_100017f8(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001944(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001944(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001944(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001944(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001944(param_1,param_2,param_3,param_4,
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

#undef local_4c
#undef local_48
#undef uStack_50

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001944
 */

undefined8
recovered_10001944(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


#undef DAT_1000284a
#define DAT_1000284a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feU)))
#undef DAT_1000284f
#define DAT_1000284f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_10002854
#define DAT_10002854 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x208U)))
#undef DAT_10002859
#define DAT_10002859 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef str_10002715
#define str_10002715 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9U)))
#undef str_10002720
#define str_10002720 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_1000272f
#define str_1000272f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3U)))
#undef str_10002740
#define str_10002740 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4U)))
#undef str_10002753
#define str_10002753 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x107U)))
#undef str_10002766
#define str_10002766 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11aU)))
#undef str_10002776
#define str_10002776 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x12aU)))
#undef str_10002785
#define str_10002785 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#undef str_10002794
#define str_10002794 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x148U)))
#undef str_100027a5
#define str_100027a5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x159U)))
#undef str_100027b0
#define str_100027b0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x164U)))
#undef str_100027bc
#define str_100027bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x170U)))
#undef str_100027c6
#define str_100027c6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17aU)))
#undef str_100027cf
#define str_100027cf (*(char (*)[1])(((uintptr_t)pf_module_state + 0x183U)))
#undef str_100027da
#define str_100027da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_100027e3
#define str_100027e3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x197U)))
#undef str_100027eb
#define str_100027eb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19fU)))
#undef str_100027f4
#define str_100027f4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a8U)))
#undef str_100027fb
#define str_100027fb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_1000280e
#define str_1000280e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c2U)))
#undef str_10002821
#define str_10002821 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d5U)))
#undef str_10002834
#define str_10002834 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_1000285e
#define str_1000285e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef str_10002869
#define str_10002869 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_10002872
#define str_10002872 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001990
 */

char * recovered_10001990(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;

  if (param_1 == 0) goto switchD_10001ba4_caseD_5;
  sVar3 = *(short *)(param_1 + 4);
  if (sVar3 == 0x1013) {
    if ((*(ushort *)(param_1 + 6) & 0xfffe) == 0xb8) {
      return str_100027cf;
    }
LAB_10001b78:
    pcVar4 = str_100027fb;
    switch((uintptr_t)(*(undefined1 *)(param_1 + 8))) {
    case 1:
      pcVar4 = str_10002821;
      break;
    case 2:
      pcVar4 = str_1000280e;
      break;
    case 3:
      break;
    case 4:
      pcVar4 = str_10002834;
      break;
    case 0xc:
      if (*(char *)(param_1 + 9) == '\x03') {
LAB_10001bd8:
        cVar2 = *(char *)(param_1 + 10);
        pcVar4 = str_10002872;
        if (cVar2 == '\x10') {
          pcVar4 = &DAT_1000284f;
        }
        pcVar1 = str_1000285e;
        if (cVar2 != -0x80) {
          pcVar1 = pcVar4;
        }
        pcVar4 = &DAT_10002859;
        if (cVar2 != '0') {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_10002854;
        if (cVar2 != ' ') {
          pcVar1 = pcVar4;
        }
        pcVar4 = str_10002869;
        if (cVar2 != -2) {
          pcVar4 = pcVar1;
        }
        pcVar1 = &DAT_1000284a;
        if (cVar2 != '\0') {
          pcVar1 = pcVar4;
        }
        return pcVar1;
      }
    default:
switchD_10001ba4_caseD_5:
      pcVar4 = str_10002715;
    }
  }
  else {
    if (sVar3 == 0x1033) {
      if (*(short *)(param_1 + 6) == 0x194) {
        return str_100027c6;
      }
      goto LAB_10001b78;
    }
    if (sVar3 == 0x106b) {
      if (*(short *)(param_1 + 6) == 0x21) {
LAB_10001aec:
        return str_100027f4;
      }
      goto LAB_10001b78;
    }
    if (sVar3 == 0x108e) {
      if (*(short *)(param_1 + 6) == 0x2bad) goto LAB_10001aec;
      goto LAB_10001b78;
    }
    if (sVar3 == 0x10ec) {
      if (*(short *)(param_1 + 6) == -0x7fd7) {
        return str_100027eb;
      }
      goto LAB_10001b78;
    }
    if (sVar3 == 0x1234) {
      if (*(short *)(param_1 + 6) == 0x1111) {
        return str_100027da;
      }
      goto LAB_10001b78;
    }
    if (sVar3 == -0x7f7a) {
      if (*(short *)(param_1 + 6) == 0x100e) {
        return str_100027b0;
      }
      if (*(char *)(param_1 + 8) == '\f') {
        if (*(char *)(param_1 + 9) == '\x03') goto LAB_10001bd8;
      }
      else if ((*(char *)(param_1 + 8) == '\x04') && (*(char *)(param_1 + 9) == '\x03')) {
        return str_100027bc;
      }
      goto LAB_10001b78;
    }
    if (sVar3 == 0x1b36) {
      if (*(short *)(param_1 + 6) == 0x100) {
        return str_100027e3;
      }
      goto LAB_10001b78;
    }
    if (sVar3 != 0x1af4) goto LAB_10001b78;
    pcVar4 = str_10002720;
    switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
    case 0x1041:
      break;
    case 0x1042:
switchD_10001a34_caseD_1042:
      pcVar4 = str_1000272f;
      break;
    case 0x1043:
switchD_10001a34_caseD_1043:
      pcVar4 = str_10002753;
      break;
    case 0x1044:
switchD_10001a34_caseD_1044:
      pcVar4 = str_10002776;
      break;
    case 0x1045:
switchD_10001a34_caseD_1045:
      pcVar4 = str_10002740;
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
switchD_10001a34_caseD_1046:
      pcVar4 = str_100027a5;
      break;
    case 0x1048:
switchD_10001a34_caseD_1048:
      pcVar4 = str_10002766;
      break;
    case 0x1050:
      pcVar4 = str_10002785;
      break;
    case 0x1052:
      pcVar4 = str_10002794;
      break;
    default:
      switch((uintptr_t)(*(undefined2 *)(param_1 + 6))) {
      case 0x1000:
        break;
      case 0x1001:
        goto switchD_10001a34_caseD_1042;
      case 0x1002:
        goto switchD_10001a34_caseD_1045;
      case 0x1003:
        goto switchD_10001a34_caseD_1043;
      case 0x1004:
        goto switchD_10001a34_caseD_1048;
      case 0x1005:
        goto switchD_10001a34_caseD_1044;
      default:
        goto switchD_10001a34_caseD_1046;
      }
    }
  }
  return pcVar4;
}

#undef DAT_1000284a
#undef DAT_1000284f
#undef DAT_10002854
#undef DAT_10002859
#undef str_10002715
#undef str_10002720
#undef str_1000272f
#undef str_10002740
#undef str_10002753
#undef str_10002766
#undef str_10002776
#undef str_10002785
#undef str_10002794
#undef str_100027a5
#undef str_100027b0
#undef str_100027bc
#undef str_100027c6
#undef str_100027cf
#undef str_100027da
#undef str_100027e3
#undef str_100027eb
#undef str_100027f4
#undef str_100027fb
#undef str_1000280e
#undef str_10002821
#undef str_10002834
#undef str_1000285e
#undef str_10002869
#undef str_10002872

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c38
 */

uint recovered_10001c38(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0;
  if (param_1 != (byte *)0x0) {
    uVar1 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 0xb | (uint)param_1[2] << 8 | 0x80000000;
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c5c
 */

undefined8
recovered_10001c5c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ca4
 */

undefined8
recovered_10001ca4(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cf0
 */

undefined8 recovered_10001cf0(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x100021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,2,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,2,param_4);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d04
 */

ulong recovered_10001d04(int *param_1,long param_2,ulong param_3,undefined8 param_4,
                        undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10002068(param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    uVar2 = recovered_10002068(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    uVar1 = (ulong)((int)uVar2 != 0);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d58
 */

void recovered_10001d58(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d94
 */

undefined8 recovered_10001d94(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_4 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_100020f4(param_1,param_2 + (param_3 & 0xffffffff),2,(long)&uStack_24),
     (int)uVar1 != 0)) {
    *param_4 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

#define uStack_54 (*(uint *)(pf_stack_frame + 28))
#define local_5c (*(uint *)(pf_stack_frame + 20))
#define local_58 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ddc
 */

undefined8
recovered_10001ddc(int *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,ulong *param_6)

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
    recovered_10001944(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                       (ulong)(param_3 * 4 + 0x10 & 0xfffc),4,(long)&local_5c);
    if ((local_5c & 7) == 4) {
      if (4 < param_3) {
        return 0;
      }
      local_58 = *(int *)(param_2 + (ulong)(param_3 + 1) * 4 + 0x14);
      recovered_10001944(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa0
 */

undefined8 recovered_10001fa0(int *param_1,long param_2,ulong param_3,long param_4)

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
                    /* WARNING: Could not recover jumptable at 0x10002144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x2f])(uVar1,1,param_4);
      return uVar2;
    }
    if ((((uVar1 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1a])(uVar1,1,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fb8
 */

ulong recovered_10001fb8(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;

  uVar1 = 0;
  local_34 = 0xff;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) &&
     (uVar1 = recovered_10002050(param_1,param_2,0), (int)uVar1 != 0)) {
    recovered_100020c4(param_1);
    uVar3 = 0;
    while ((uVar3 != 1000 &&
           ((uVar2 = recovered_10001fa0(param_1,param_2,0x14,(long)&local_34), (int)uVar2 == 0 ||
            (local_34 != 0))))) {
      recovered_1000215c(param_1);
      uVar3 = uVar3 + 1;
    }
    uVar1 = (ulong)(uVar3 < 1000);
  }
  return uVar1;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002050
 */

undefined8 recovered_10002050(int *param_1,long param_2,undefined8 param_3)

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
                    /* WARNING: Could not recover jumptable at 0x100021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,1,param_3);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,1,param_3);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002068
 */

undefined8 recovered_10002068(int *param_1,long param_2,ulong param_3,undefined8 param_4)

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
                    /* WARNING: Could not recover jumptable at 0x100021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x30])(uVar1,4,param_4);
      return uVar2;
    }
    if (((uVar1 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)param_1[0x1b])(uVar1,4,param_4);
      return uVar2;
    }
  }
  return 0;
}


#define uStack_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000207c
 */

undefined8 recovered_1000207c(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  uStack_24 = 0;
  if (((param_2 != 0) && (param_3 != (undefined4 *)0x0)) &&
     (uVar1 = recovered_100020f4(param_1,param_2 + 4,4,(long)&uStack_24), (int)uVar1 != 0)) {
    *param_3 = uStack_24;
    uVar1 = 1;
  }
  return uVar1;
}

#undef uStack_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c4
 */

void recovered_100020c4(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f4
 */

undefined8 recovered_100020f4(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xbf < (uint)param_1[2]) && ((param_4 != 0 && (param_1[0x2f] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10002144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
      return uVar1;
    }
    if ((((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) && (param_4 != 0)) &&
       (param_1[0x1a] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10010708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000215c
 */

void recovered_1000215c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002190
 */

undefined8 recovered_10002190(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && (param_1[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100021c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) && (param_1[0x1b] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1001073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f0
 */

undefined8 recovered_100021f0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x5c)) ||
     (param_1[0x16] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10010764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002224
 */

undefined8 recovered_10002224(int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (param_4 == 0)) || (*param_1 != 0x54584b57)) ||
     (((uint)param_1[2] < 0x58 || (param_1[0x15] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1001078c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x15])(param_2,param_3,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000225c
 */

void recovered_1000225c(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_1000237c(param_1,param_2,bVar2);
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100022d4
 */

void recovered_100022d4(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_100017dc(param_1);
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
    recovered_1000237c(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000237c
 */

void recovered_1000237c(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100017dc(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


#undef DAT_1000284a
#define DAT_1000284a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1feU)))
#undef DAT_1000284f
#define DAT_1000284f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x203U)))
#undef DAT_10002854
#define DAT_10002854 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x208U)))
#undef DAT_10002859
#define DAT_10002859 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20dU)))
#undef str_1000285e
#define str_1000285e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x212U)))
#undef str_10002869
#define str_10002869 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x21dU)))
#undef str_10002872
#define str_10002872 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023bc
 */

char * recovered_100023bc(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *pcVar2;

  pcVar1 = str_10002872;
  if (param_1 == 0x10) {
    pcVar1 = &DAT_1000284f;
  }
  pcVar2 = str_1000285e;
  if (param_1 != 0x80) {
    pcVar2 = pcVar1;
  }
  pcVar1 = &DAT_10002859;
  if (param_1 != 0x30) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_10002854;
  if (param_1 != 0x20) {
    pcVar2 = pcVar1;
  }
  pcVar1 = str_10002869;
  if (param_1 != 0xfe) {
    pcVar1 = pcVar2;
  }
  pcVar2 = &DAT_1000284a;
  if (param_1 != 0) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}

#undef DAT_1000284a
#undef DAT_1000284f
#undef DAT_10002854
#undef DAT_10002859
#undef str_1000285e
#undef str_10002869
#undef str_10002872

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002428
 */

undefined4 recovered_10002428(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_1000b310
#define DAT_1000b310 (*(int * *)(((uintptr_t)pf_module_state + 0x8cc4U)))
#undef DAT_1000b318
#define DAT_1000b318 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8cccU)))
#undef DAT_1000b398
#define DAT_1000b398 (*(int *)(((uintptr_t)pf_module_state + 0x8d4cU)))
#undef DAT_1000b3a0
#define DAT_1000b3a0 (*(uint *)(((uintptr_t)pf_module_state + 0x8d54U)))
#undef DAT_1000b3b0
#define DAT_1000b3b0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8d64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000244c
 */

void recovered_1000244c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (DAT_1000b310 != (int *)0x0) {
    if (DAT_1000b398 == 1 && DAT_1000b318 != 0) {
      recovered_10001fb8(DAT_1000b310,DAT_1000b318);
    }
    else if (DAT_1000b398 == 2 && DAT_1000b3a0 < 0xffee) {
      recovered_100021f0(DAT_1000b310,(ulong)(DAT_1000b3a0 + 0x12 & 0xffff),1,0);
    }
  }
  DAT_1000b3b0 = 0;
  return;
}

#undef DAT_1000b310
#undef DAT_1000b318
#undef DAT_1000b398
#undef DAT_1000b3a0
#undef DAT_1000b3b0

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
