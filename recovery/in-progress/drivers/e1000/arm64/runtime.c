/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x246cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000480
 */

void * recovered_10000480(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10001ba8
#define DAT_10001ba8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef str_10001ba9
#define str_10001ba9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15U)))
#define local_9c (*(int (*)[39])(pf_stack_frame + 1044))
#define auStack_49c (*(undefined1 (*)[1180])(pf_stack_frame + 20))
#define abStack_6c (*(byte (*)[108])(pf_stack_frame + 1092))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000048c
 */

/* WARNING: Removing unreachable block (ram,0x10000580) */
/* WARNING: Removing unreachable block (ram,0x10000584) */
/* WARNING: Removing unreachable block (ram,0x1000058c) */
/* WARNING: Removing unreachable block (ram,0x100005a8) */
/* WARNING: Removing unreachable block (ram,0x100005b0) */

uint recovered_1000048c(void *api)

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
    recovered_1000060c(auStack_49c,0x400,&DAT_10001ba8);
    if (*(uint *)((long)api + 0xc) != 0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10001ba8,str_10001ba9,auStack_49c);
      if (iVar1 == 0) {
        return 0;
      }
      if (((*(int *)api == 0x54584b57) && (0x5f < *(uint *)((long)api + 8))) &&
         (*(int *)((long)api + 0x5c) != 0)) {
        for (uVar3 = 0; uVar3 != 0x20; uVar3 = uVar3 + 1) {
          for (uVar4 = 0; uVar4 != 0x20; uVar4 = uVar4 + 1) {
            uVar2 = recovered_10000f3c(api,(ulong)(uVar3 & 0xff),(ulong)(uVar4 & 0xff),0,abStack_6c)
            ;
            if ((int)uVar2 != 0) {
              recovered_1000061c(api,abStack_6c,local_9c);
            }
          }
        }
        if (local_9c[0] != 0) {
          if (*(uint *)((long)api + 0xc) != 0) {
            (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10001ba8,str_10001ba9,auStack_49c);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

#undef DAT_10001ba8
#undef str_10001ba9
#undef local_9c
#undef auStack_49c
#undef abStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000060c
 */

void recovered_1000060c(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  uVar1 = recovered_10000f20((long)param_1);
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


#undef DAT_10001b98
#define DAT_10001b98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x4U)))
#undef DAT_10001ba0
#define DAT_10001ba0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_10001ba8
#define DAT_10001ba8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_10001bf1
#define DAT_10001bf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5dU)))
#undef DAT_10001c5e
#define DAT_10001c5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xcaU)))
#undef DAT_10001c62
#define DAT_10001c62 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_10001c67
#define DAT_10001c67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd3U)))
#undef DAT_10001c6a
#define DAT_10001c6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd6U)))
#undef DAT_10001c6c
#define DAT_10001c6c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd8U)))
#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x646cU)))
#undef DAT_1000c000
#define DAT_1000c000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa46cU)))
#undef DAT_10010000
#define DAT_10010000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe46cU)))
#undef DAT_10010008
#define DAT_10010008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010010
#define DAT_10010010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe47cU)))
#undef DAT_10010018
#define DAT_10010018 (*(byte *)(((uintptr_t)pf_module_state + 0xe484U)))
#undef DAT_10010019
#define DAT_10010019 (*(byte *)(((uintptr_t)pf_module_state + 0xe485U)))
#undef DAT_1001001a
#define DAT_1001001a (*(byte *)(((uintptr_t)pf_module_state + 0xe486U)))
#undef DAT_1001001b
#define DAT_1001001b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe487U)))
#undef DAT_1001001c
#define DAT_1001001c (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe488U)))
#undef DAT_10010020
#define DAT_10010020 (*(uint *)(((uintptr_t)pf_module_state + 0xe48cU)))
#undef DAT_10010024
#define DAT_10010024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe490U)))
#undef DAT_10010028
#define DAT_10010028 (*(uint *)(((uintptr_t)pf_module_state + 0xe494U)))
#undef DAT_1001002c
#define DAT_1001002c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe498U)))
#undef DAT_10010034
#define DAT_10010034 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe4a0U)))
#undef DAT_10010038
#define DAT_10010038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe4a4U)))
#undef DAT_1001003c
#define DAT_1001003c (*(uint16_t *)(((uintptr_t)pf_module_state + 0xe4a8U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe56cU)))
#undef _DAT_1001002c
#define _DAT_1001002c (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe498U)))
#undef _DAT_10010038
#define _DAT_10010038 (*(uint *)(((uintptr_t)pf_module_state + 0xe4a4U)))
#undef str_10001ba9
#define str_10001ba9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15U)))
#undef str_10001bf8
#define str_10001bf8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64U)))
#undef str_10001c08
#define str_10001c08 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74U)))
#undef str_10001c1a
#define str_10001c1a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10001c27
#define str_10001c27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x93U)))
#undef str_10001c39
#define str_10001c39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa5U)))
#undef str_10001c4b
#define str_10001c4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb7U)))
#undef str_10001c6f
#define str_10001c6f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbU)))
#define uStack_4b8 (*(undefined8 *)(pf_stack_frame + 1064))
#define auStack_4b0 (*(undefined1 (*)[1200])(pf_stack_frame + 1072))
#define auStack_480 (*(undefined1 (*)[1152])(pf_stack_frame + 1120))
#define auStack_440 (*(undefined1 (*)[1088])(pf_stack_frame + 1184))
#define auStack_c0 (*(uint (*)[48])(pf_stack_frame + 2080))
#define acStack_8cc (*(char (*)[2252])(pf_stack_frame + 20))
#define uStack_4cc (*(uint *)(pf_stack_frame + 1044))
#define uStack_4c8 (*(uint *)(pf_stack_frame + 1048))
#define uStack_4c4 (*(uint *)(pf_stack_frame + 1052))
#define uStack_4c0 (*(undefined4 *)(pf_stack_frame + 1056))
#define uStack_4bc (*(uint *)(pf_stack_frame + 1060))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000061c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000061c(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2304] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined *puVar9;

  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    return;
  }
  recovered_1000060c(acStack_8cc,0x400,&DAT_10001ba8);
  uStack_4c8 = 0;
  uStack_4cc = 0;
  if (param_2 == (byte *)0x0) {
    return;
  }
  if (*(short *)(param_2 + 4) != -0x7f7a) {
    return;
  }
  if (param_2[8] != 2) {
    return;
  }
  if (param_2[9] != 0) {
    return;
  }
  if (*(short *)(param_2 + 6) != 0x100e) {
    return;
  }
  recovered_10001300((undefined1 *)&DAT_10010008,0x38);
  DAT_10010000 = 0;
  DAT_10010018 = *param_2;
  DAT_10010019 = param_2[1];
  DAT_1001001a = param_2[2];
  DAT_10010020 = (uint)DAT_10010018 << 0x10 | (uint)DAT_10010019 << 0xb | (uint)DAT_1001001a << 8 |
                 0x80000000;
  DAT_10010008 = param_1;
  uVar3 = recovered_10001088(param_1,(ulong)DAT_10010018,(ulong)DAT_10010019,(ulong)DAT_1001001a,4,2
                             ,(long)&uStack_4c8);
  if ((int)uVar3 == 0) {
    return;
  }
  DAT_1001001c = (undefined2)uStack_4c8;
  DAT_1001001b = 1;
  auStack_c0[0] = 0;
  uVar7 = *(uint *)(param_2 + 0x14);
  if ((uVar7 != 0) && ((uVar7 & 1) == 0)) {
    uStack_4c4 = uVar7;
    recovered_10001088(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x10,4,
                       (long)&uStack_4c4);
    if ((uStack_4c4 & 7) == 4) {
      auStack_c0[0] = *(uint *)(param_2 + 0x18);
      recovered_10001088(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],0x14,4,
                         (long)auStack_c0);
      uVar7 = auStack_c0[0];
    }
    else {
      uVar7 = 0;
    }
    uVar6 = 0xfffffff0;
    if ((uStack_4c4 & 1) != 0) {
      uVar6 = 0xfffffffc;
    }
    uVar6 = uVar6 & uStack_4c4;
    if (uVar6 != 0 || uVar7 != 0) {
      DAT_10010010 = 0;
      uStack_4c0 = 0;
      if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xbc) || (param_1[0x2e] == 0)) {
          if ((((uVar7 != 0) || ((uint)param_1[2] < 0x68)) || (param_1[0x19] == 0)) ||
             (iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(uVar6,0,0x6000,&uStack_4c0), iVar1 == 0)
             ) goto LAB_10000888;
          DAT_10010010 = (ulong)uStack_4c0;
        }
        else {
          iVar1 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar6,uVar7,0x6000,&DAT_10010010);
          if (iVar1 == 0) goto LAB_10000888;
        }
        uStack_4c0 = 0;
        if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
          uVar3 = recovered_10001088(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2
                                     ,(long)&uStack_4c0);
          if ((int)uVar3 == 0) {
            pcVar4 = str_10001c39;
          }
          else {
            uVar7 = 0;
            for (lVar5 = 0x14; lVar5 != 0x2c; lVar5 = lVar5 + 4) {
              uVar6 = uVar7 | 1;
              if (*(uint *)(param_2 + lVar5) != 0) {
                uVar7 = uVar7 | 2;
              }
              if ((*(uint *)(param_2 + lVar5) & 1) != 0) {
                uVar7 = uVar6;
              }
            }
            lVar5 = recovered_10000f20(((uintptr_t)pf_module_state+0x47U));
            if (lVar5 != 0) {
              uVar7 = uVar7 | 4;
            }
            if (param_2[8] == 6) {
              if (param_2[9] != 0) {
                uVar7 = uVar7 | 2;
              }
            }
            auStack_c0[0] = uStack_4c0 | uVar7;
            uVar3 = recovered_10001448(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],
                                       (ulong)auStack_c0[0]);
            if ((int)uVar3 != 0) {
              recovered_10001088(param_1,(ulong)*param_2,(ulong)param_2[1],(ulong)param_2[2],4,2,
                                 (long)auStack_c0);
              if ((uVar7 & (auStack_c0[0] ^ 0xffffffff)) == 0) {
                uStack_4c0 = 0;
                uVar3 = recovered_10001318(0,&uStack_4c0);
                if ((((int)uVar3 != 0) &&
                    (uVar3 = recovered_100013d4(0xd8,0xffffffff), (int)uVar3 != 0)) &&
                   (uVar3 = recovered_100013d4(0,(ulong)(uStack_4c0 | 0x4000000)), (int)uVar3 != 0))
                {
                  iVar1 = 200;
                  do {
                    recovered_10001490(DAT_10010008,100);
                    uVar3 = recovered_10001318(0,&uStack_4c0);
                    if (((int)uVar3 != 0) && ((PF_PART1(uStack_4c0, 3) >> 2 & 1) == 0)) {
                      recovered_100013d4(0xd8,0xffffffff);
                      recovered_10001318(0xc0,&uStack_4c0);
                      uStack_4c0 = 0;
                      auStack_c0[0] = 0;
                      uVar3 = recovered_10001318(0x5400,&uStack_4c0);
                      if (((int)uVar3 != 0) &&
                         (uVar3 = recovered_10001318(0x5404,auStack_c0), (int)uVar3 != 0)) {
                        _DAT_10010038 = uStack_4c0;
                        DAT_1001003c = (undefined2)auStack_c0[0];
                        if ((((int)auStack_c0[0] < 0) && ((uStack_4c0 & 1) == 0)) &&
                           (((uStack_4c0 >> 0x10 | uStack_4c0 | uStack_4c0 >> 8 | uStack_4c0 >> 0x18
                             | auStack_c0[0] | auStack_c0[0] >> 8) & 0xff) != 0)) {
                          puVar8 = &DAT_10010100;
                          recovered_10001300(&DAT_10010100,0x80);
                          puVar9 = &DAT_10008000;
                          recovered_10001300(&DAT_10008000,0x4000);
                          lVar5 = 8;
                          goto LAB_10000a44;
                        }
                      }
                      break;
                    }
                    iVar1 = iVar1 + -1;
                  } while (iVar1 != 0);
                }
              }
              goto LAB_10000888;
            }
            pcVar4 = str_10001c4b;
          }
        }
        else {
          pcVar4 = str_10001c27;
        }
        recovered_10000ec8((long)acStack_8cc,0x400,pcVar4);
      }
    }
  }
  goto LAB_10000888;
  while( true ) {
    recovered_10001510(puVar8,uStack_4c0,auStack_c0[0]);
    puVar8 = puVar8 + 0x10;
    puVar9 = puVar9 + 0x800;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
LAB_10000a44:
    uStack_4c0 = 0;
    auStack_c0[0] = 0;
    uVar3 = recovered_100014c4(DAT_10010008,(ulong)DAT_10010020,(long)puVar9,0x800,(long)&uStack_4c0
                               ,auStack_c0);
    if ((int)uVar3 == 0) goto LAB_10000888;
  }
  recovered_10001550(DAT_10010008,(ulong)DAT_10010020,&DAT_10010100,0x80);
  recovered_10001550(DAT_10010008,(ulong)DAT_10010020,&DAT_10008000,0x4000);
  uVar2 = recovered_1000158c(0x2800,0x2804,((uintptr_t)pf_module_state+0xe56cU));
  if ((((int)uVar2 != 0) && (uVar3 = recovered_100013d4(0x2808,0x80), (int)uVar3 != 0)) &&
     ((uVar3 = recovered_100013d4(0x2810,0), (int)uVar3 != 0 &&
      (uVar3 = recovered_100013d4(0x2818,7), (int)uVar3 != 0)))) {
    uVar2 = 0x5200;
    iVar1 = 0x80;
    do {
      recovered_100013d4(uVar2,0);
      uVar2 = (ulong)((int)uVar2 + 4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _DAT_1001002c = DAT_10001b98;
    uVar3 = recovered_100013d4(0x100,0x4008012);
    if ((int)uVar3 != 0) {
      puVar8 = (undefined1 *)((uintptr_t)pf_module_state+0xe66cU);
      recovered_10001300((undefined1 *)((uintptr_t)pf_module_state+0xe66cU),0x80);
      puVar9 = &DAT_1000c000;
      recovered_10001300(&DAT_1000c000,0x4000);
      lVar5 = 8;
      do {
        uStack_4c0 = 0;
        auStack_c0[0] = 0;
        uVar3 = recovered_100014c4(DAT_10010008,(ulong)DAT_10010020,(long)puVar9,0x800,
                                   (long)&uStack_4c0,auStack_c0);
        if ((int)uVar3 == 0) goto LAB_10000888;
        recovered_10001510(puVar8,uStack_4c0,auStack_c0[0]);
        puVar8[0xc] = 1;
        puVar8 = puVar8 + 0x10;
        puVar9 = puVar9 + 0x800;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      recovered_10001550(DAT_10010008,(ulong)DAT_10010020,((uintptr_t)pf_module_state+0xe66cU),0x80);
      uVar2 = recovered_1000158c(0x3800,0x3804,((uintptr_t)pf_module_state+0xe66cU));
      if ((((int)uVar2 != 0) && (uVar3 = recovered_100013d4(0x3808,0x80), (int)uVar3 != 0)) &&
         ((uVar3 = recovered_100013d4(0x3810,0), (int)uVar3 != 0 &&
          ((uVar3 = recovered_100013d4(0x3818,0), (int)uVar3 != 0 &&
           (uVar3 = recovered_100013d4(0x410,0x60200a), (int)uVar3 != 0)))))) {
        DAT_10010034 = 0;
        uVar3 = recovered_100013d4(0x400,0x4010a);
        if (((int)uVar3 != 0) &&
           ((uVar3 = recovered_10001318(0,&uStack_4cc), (int)uVar3 != 0 &&
            (uVar3 = recovered_100013d4(0,(ulong)(uStack_4cc | 0x40)), (int)uVar3 != 0)))) {
          uVar3 = recovered_10001318(8,&uStack_4c8);
          uVar7 = uStack_4c8;
          if ((int)uVar3 != 0) {
            DAT_10010024 = 1;
            DAT_10010028 = uStack_4c8;
            recovered_1000060c(acStack_8cc,0x400,&DAT_10001ba8);
            recovered_10000ec8((long)acStack_8cc,0x400,&DAT_10001bf1);
            lVar5 = 0;
            while( true ) {
              do {
                recovered_100010d4((long)acStack_8cc,0x400,(uint)(byte)(&DAT_10010038)[lVar5],2);
                lVar5 = lVar5 + 1;
              } while (lVar5 == 0);
              if (lVar5 == 6) break;
              recovered_10000ec8((long)acStack_8cc,0x400,(char *)((uintptr_t)pf_module_state+0x62U));
            }
            pcVar4 = str_10001c08;
            if ((uVar7 & 2) != 0) {
              pcVar4 = str_10001bf8;
            }
            recovered_10000ec8((long)acStack_8cc,0x400,pcVar4);
            recovered_1000114c((long)acStack_8cc,0x400,0x5dc);
            recovered_1000060c((undefined1 *)auStack_c0,0x60,str_10001c1a);
            recovered_10000ec8((long)auStack_c0,0x60,&DAT_10001c5e);
            recovered_100010d4((long)auStack_c0,0x60,(uint)*param_2,2);
            recovered_10000ec8((long)auStack_c0,0x60,(char *)((uintptr_t)pf_module_state+0x62U));
            recovered_100010d4((long)auStack_c0,0x60,(uint)param_2[1],2);
            recovered_10000ec8((long)auStack_c0,0x60,(char *)((uintptr_t)pf_module_state+0xccU));
            recovered_1000114c((long)auStack_c0,0x60,(uint)param_2[2]);
            recovered_1000060c((undefined1 *)&uStack_4c0,0x400,&DAT_10001c62);
            recovered_100010d4((long)&uStack_4c0,0x400,(uint)*param_2,2);
            recovered_10000ec8((long)&uStack_4c0,0x400,(char *)((uintptr_t)pf_module_state+0x62U));
            recovered_100010d4((long)&uStack_4c0,0x400,(uint)param_2[1],2);
            recovered_10000ec8((long)&uStack_4c0,0x400,(char *)((uintptr_t)pf_module_state+0xccU));
            recovered_1000114c((long)&uStack_4c0,0x400,(uint)param_2[2]);
            recovered_10000ec8((long)&uStack_4c0,0x400,&DAT_10001c67);
            recovered_100010d4((long)&uStack_4c0,0x400,(uint)*(ushort *)(param_2 + 4),4);
            recovered_10000ec8((long)&uStack_4c0,0x400,(char *)((uintptr_t)pf_module_state+0x62U));
            recovered_100010d4((long)&uStack_4c0,0x400,(uint)*(ushort *)(param_2 + 6),4);
            recovered_10000ec8((long)&uStack_4c0,0x400,&DAT_10001c6a);
            if (acStack_8cc[0] != '\0') {
              recovered_10000ec8((long)&uStack_4c0,0x400,&DAT_10001c6c);
              recovered_10000ec8((long)&uStack_4c0,0x400,acStack_8cc);
            }
            if ((param_1[3] != 0) &&
               (iVar1 = (*(code *)(ulong)(uint)param_1[3])(auStack_c0,str_10001ba9,&uStack_4c0),
               iVar1 != 0)) {
              recovered_10001300((undefined1 *)&uStack_4c0,0xc0);
              uStack_4bc = DAT_10010028 & 2 | 0xd;
              uStack_4c0 = 0xc0;
              uStack_4b8 = DAT_10001ba0;
              for (lVar5 = 0; lVar5 != 6; lVar5 = lVar5 + 1) {
                auStack_4b0[lVar5] = (&DAT_10010038)[lVar5];
              }
              recovered_1000060c(auStack_480,0x40,str_10001ba9);
              recovered_1000060c(auStack_440,0x40,str_10001c6f);
              if ((((*param_1 == 0x54584b57) && (0xcb < (uint)param_1[2])) && (param_1[0x32] != 0))
                 && (iVar1 = (*(code *)(ulong)(uint)param_1[0x32])
                                       (&uStack_4c0,recovered_10001678,recovered_10001828),
                    iVar1 != 0)) {
                if (param_3 == (int *)0x0) {
                  return;
                }
                *param_3 = *param_3 + 1;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_10000888:
  recovered_100011f0();
  return;
}

#undef DAT_10001b98
#undef DAT_10001ba0
#undef DAT_10001ba8
#undef DAT_10001bf1
#undef DAT_10001c5e
#undef DAT_10001c62
#undef DAT_10001c67
#undef DAT_10001c6a
#undef DAT_10001c6c
#undef DAT_10008000
#undef DAT_1000c000
#undef DAT_10010000
#undef DAT_10010008
#undef DAT_10010010
#undef DAT_10010018
#undef DAT_10010019
#undef DAT_1001001a
#undef DAT_1001001b
#undef DAT_1001001c
#undef DAT_10010020
#undef DAT_10010024
#undef DAT_10010028
#undef DAT_1001002c
#undef DAT_10010034
#undef DAT_10010038
#undef DAT_1001003c
#undef DAT_10010100
#undef _DAT_1001002c
#undef _DAT_10010038
#undef str_10001ba9
#undef str_10001bf8
#undef str_10001c08
#undef str_10001c1a
#undef str_10001c27
#undef str_10001c39
#undef str_10001c4b
#undef str_10001c6f
#undef uStack_4b8
#undef auStack_4b0
#undef auStack_480
#undef auStack_440
#undef auStack_c0
#undef acStack_8cc
#undef uStack_4cc
#undef uStack_4c8
#undef uStack_4c4
#undef uStack_4c0
#undef uStack_4bc

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec8
 */

void recovered_10000ec8(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;

  uVar1 = recovered_10000f20(param_1);
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
 * Address: 0x10000f20
 */

long recovered_10000f20(long param_1)

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
 * Address: 0x10000f3c
 */

undefined8
recovered_10000f3c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    uVar2 = recovered_10001088(param_1,param_2,param_3,param_4,0,4,(long)&local_48 + 4);
    if ((int)uVar2 != 0) {
      uVar2 = 0;
      if (((PF_PART2(local_48, 4) != 0) && (PF_PART2(local_48, 4) != 0xffffU)) &&
         (uVar2 = recovered_10001088(param_1,param_2,param_3,param_4,8,4,(long)&local_48),
         (int)uVar2 != 0)) {
        uVar2 = recovered_10001088(param_1,param_2,param_3,param_4,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001088(param_1,param_2,param_3,param_4,0xc,4,(long)&local_4c);
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
          uVar2 = recovered_10001088(param_1,param_2,param_3,param_4,
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
 * Address: 0x10001088
 */

undefined8
recovered_10001088(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x60)) ||
     ((param_7 == 0 || (param_1[0x17] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100010d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010d4
 */

void recovered_100010d4(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10001608(param_1,param_2,bVar2);
  }
  return;
}


#define local_3b (*(byte (*)[59])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000114c
 */

void recovered_1000114c(long param_1,ulong param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  if (param_3 == 0) {
    lVar1 = recovered_10000f20(param_1);
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
    recovered_10001608(param_1,param_2,local_3b[uVar2]);
  }
  return;
}

#undef local_3b

#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010010
#define DAT_10010010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe47cU)))
#undef DAT_10010018
#define DAT_10010018 (*(byte *)(((uintptr_t)pf_module_state + 0xe484U)))
#undef DAT_10010019
#define DAT_10010019 (*(byte *)(((uintptr_t)pf_module_state + 0xe485U)))
#undef DAT_1001001a
#define DAT_1001001a (*(byte *)(((uintptr_t)pf_module_state + 0xe486U)))
#undef DAT_1001001b
#define DAT_1001001b (*(char *)(((uintptr_t)pf_module_state + 0xe487U)))
#undef DAT_1001001c
#define DAT_1001001c (*(ushort *)(((uintptr_t)pf_module_state + 0xe488U)))
#undef DAT_10010024
#define DAT_10010024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe490U)))
#define local_3c (*(undefined4 *)(pf_stack_frame + 20))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011f0
 */

void recovered_100011f0(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;

  local_38 = 0;
  local_3c = 0;
  DAT_10010024 = 0;
  if (DAT_10010008 != (int *)0x0) {
    if (DAT_10010010 == 0) {
      uVar4 = 1;
    }
    else {
      uVar2 = recovered_100013d4(0xd8,0xffffffff);
      uVar3 = recovered_10001318(0x100,(undefined4 *)((long)&local_38 + 4));
      if ((int)uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar3 = recovered_100013d4(0x100,(ulong)(PF_PART4(local_38, 4) & 0xfffffffd));
        uVar4 = (uint)uVar3 & (uint)uVar2;
      }
      uVar2 = recovered_10001318(0x400,(undefined4 *)&local_38);
      if ((int)uVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = recovered_100013d4(0x400,(ulong)((uint)local_38 & 0xfffffffd));
        uVar4 = (uint)uVar2 & uVar4;
      }
      recovered_10001318(0xc0,&local_3c);
      recovered_10001648(DAT_10010008);
      recovered_10001490(DAT_10010008,10);
      uVar2 = recovered_10001318(0x100,(undefined4 *)((long)&local_38 + 4));
      if (((((int)uVar2 == 0) || ((PF_PART1(local_38, 4) >> 1 & 1) != 0)) ||
          (uVar2 = recovered_10001318(0x400,(undefined4 *)&local_38), (int)uVar2 == 0)) ||
         (((byte)local_38 >> 1 & 1) != 0)) {
        uVar4 = 0;
      }
    }
    if (DAT_1001001b != '\0') {
      uVar1 = DAT_1001001c & 0xfffffffb;
      if (uVar4 != 0) {
        uVar1 = (uint)DAT_1001001c;
      }
      recovered_10001448(DAT_10010008,(ulong)DAT_10010018,(ulong)DAT_10010019,(ulong)DAT_1001001a,
                         (ulong)uVar1);
      DAT_1001001b = '\0';
    }
  }
  return;
}

#undef DAT_10010008
#undef DAT_10010010
#undef DAT_10010018
#undef DAT_10010019
#undef DAT_1001001a
#undef DAT_1001001b
#undef DAT_1001001c
#undef DAT_10010024
#undef local_3c
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

void recovered_10001300(undefined1 *param_1,long param_2)

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


#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010010
#define DAT_10010010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe47cU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001318
 */

undefined8 recovered_10001318(ulong param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  undefined8 uVar3;

  local_24 = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_10010010 == 0) {
    return 0;
  }
  if ((DAT_10010008 == (int *)0x0) || (*DAT_10010008 != 0x54584b57)) {
LAB_100013c8:
    uVar3 = 0;
  }
  else {
    uVar1 = DAT_10010010 + (param_1 & 0xffffffff);
    if (((uint)DAT_10010008[2] < 0xc0) || (DAT_10010008[0x2f] == 0)) {
      if (((uVar1 >> 0x20 != 0) || ((uint)DAT_10010008[2] < 0x6c)) || (DAT_10010008[0x1a] == 0))
      goto LAB_100013c8;
      uVar3 = (*(code *)(ulong)(uint)DAT_10010008[0x1a])(uVar1,4,&local_24);
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = (*(code *)(ulong)(uint)DAT_10010008[0x2f])(uVar1,4,&local_24);
      iVar2 = (int)uVar3;
    }
    if (iVar2 != 0) {
      *param_2 = local_24;
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_10010008
#undef DAT_10010010
#undef local_24

#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010010
#define DAT_10010010 (*(uint64_t *)(((uintptr_t)pf_module_state + 0xe47cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013d4
 */

undefined8 recovered_100013d4(ulong param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  if (((DAT_10010010 != 0) && (DAT_10010008 != (int *)0x0)) && (*DAT_10010008 == 0x54584b57)) {
    uVar1 = DAT_10010010 + (param_1 & 0xffffffff);
    if ((0xc3 < (uint)DAT_10010008[2]) && (DAT_10010008[0x30] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_10010008[0x30])(uVar1,4);
      return uVar2;
    }
    if ((uVar1 >> 0x20 == 0) && ((0x6f < (uint)DAT_10010008[2] && (DAT_10010008[0x1b] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x10001440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)(uint)DAT_10010008[0x1b])(uVar1,4,param_2);
      return uVar2;
    }
  }
  return 0;
}

#undef DAT_10010008
#undef DAT_10010010

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001448
 */

undefined8
recovered_10001448(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10001488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001490
 */

void recovered_10001490(int *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     (param_1[0xc] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100014bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014c4
 */

undefined8
recovered_100014c4(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001510
 */

void recovered_10001510(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

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
 * Address: 0x10001550
 */

void recovered_10001550(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     (param_1[0x1d] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010020
#define DAT_10010020 (*(uint *)(((uintptr_t)pf_module_state + 0xe48cU)))
#define local_28 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000158c
 */

ulong recovered_1000158c(ulong param_1,ulong param_2,long param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  local_28 = 0;
  uVar1 = recovered_100014c4(DAT_10010008,(ulong)DAT_10010020,param_3,0x80,(long)&local_28 + 4,
                             &local_28);
  if ((int)uVar1 != 0) {
    if ((local_28 & 0x7f00000000) == 0) {
      uVar1 = recovered_100013d4(param_1,local_28 >> 0x20);
      if ((int)uVar1 != 0) {
        uVar2 = recovered_100013d4(param_2,local_28 & 0xffffffff);
        uVar1 = (ulong)((int)uVar2 != 0);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_10010008
#undef DAT_10010020
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001608
 */

void recovered_10001608(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10000f20(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + lVar1 + 1U) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001648
 */

void recovered_10001648(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     (param_1[0x1e] == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_10008000
#define DAT_10008000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x646cU)))
#undef DAT_10010000
#define DAT_10010000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe46cU)))
#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010020
#define DAT_10010020 (*(uint *)(((uintptr_t)pf_module_state + 0xe48cU)))
#undef DAT_10010024
#define DAT_10010024 (*(int *)(((uintptr_t)pf_module_state + 0xe490U)))
#undef DAT_1001002c
#define DAT_1001002c (*(uint *)(((uintptr_t)pf_module_state + 0xe498U)))
#undef DAT_10010030
#define DAT_10010030 (*(uint *)(((uintptr_t)pf_module_state + 0xe49cU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe56cU)))
#define uStack_54 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001678
 */

undefined8 recovered_10001678(undefined1 *param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;

  recovered_1000196c();
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (undefined1 *)0x0) {
    DAT_10010000 = 0;
    return 0;
  }
  if (DAT_10010024 == 0) {
    DAT_10010000 = 0;
    return 0;
  }
  lVar1 = (ulong)DAT_10010030 * 0x10;
  recovered_10001550(DAT_10010008,(ulong)DAT_10010020,&DAT_10010100,0x80);
  if ((*(byte *)(lVar1 + ((uintptr_t)pf_module_state+0xe578U)) & 1) != 0) {
    uStack_54 = 0;
    uVar5 = recovered_100013d4(0x100,(ulong)(DAT_1001002c & 0xfffffffd));
    if ((int)uVar5 != 0) {
      recovered_10001648(DAT_10010008);
      recovered_10001490(DAT_10010008,10);
      uVar5 = recovered_10001318(0x100,&uStack_54);
      if (((int)uVar5 != 0) && ((uStack_54 >> 1 & 1) == 0)) {
        recovered_10001550(DAT_10010008,(ulong)DAT_10010020,&DAT_10010100,0x80);
        if ((*(byte *)(lVar1 + ((uintptr_t)pf_module_state+0xe578U)) & 1) == 0) {
          uVar3 = recovered_1000199c();
          if ((int)uVar3 != 0) {
            DAT_10010000 = 0;
            return 0;
          }
        }
        else {
          uVar2 = (uint)*(ushort *)(lVar1 + ((uintptr_t)pf_module_state+0xe574U));
          if (uVar2 < 0x801) {
            recovered_10001550(DAT_10010008,(ulong)DAT_10010020,
                               &DAT_10008000 + (ulong)DAT_10010030 * 0x800,0x800);
            if (((*(byte *)(lVar1 + ((uintptr_t)pf_module_state+0xe578U)) >> 1 & 1) == 0) ||
               ((param_2 < uVar2 || uVar2 < 0xe) || *(char *)(lVar1 + ((uintptr_t)pf_module_state+0xe579U)) != '\0')) {
              uVar5 = 0;
            }
            else {
              recovered_100019f4(param_1,&DAT_10008000 + (ulong)DAT_10010030 * 0x800,uVar2);
              if (param_3 != (uint *)0x0) {
                *param_3 = uVar2;
              }
              uVar5 = 1;
            }
            *(undefined2 *)(lVar1 + ((uintptr_t)pf_module_state+0xe578U)) = 0;
            recovered_10001550(DAT_10010008,(ulong)DAT_10010020,&DAT_10010100,0x80);
            uVar4 = recovered_100013d4(0x2818,(ulong)DAT_10010030);
            if (((int)uVar4 != 0) && (uVar3 = recovered_1000199c(), (int)uVar3 != 0)) {
              DAT_10010000 = 0;
              DAT_10010030 = DAT_10010030 + 1 & 7;
              return uVar5;
            }
          }
        }
      }
    }
    recovered_100011f0();
  }
  DAT_10010000 = 0;
  return 0;
}

#undef DAT_10008000
#undef DAT_10010000
#undef DAT_10010008
#undef DAT_10010020
#undef DAT_10010024
#undef DAT_1001002c
#undef DAT_10010030
#undef DAT_10010100
#undef uStack_54

#undef DAT_1000c000
#define DAT_1000c000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa46cU)))
#undef DAT_10010000
#define DAT_10010000 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xe46cU)))
#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_10010020
#define DAT_10010020 (*(uint *)(((uintptr_t)pf_module_state + 0xe48cU)))
#undef DAT_10010024
#define DAT_10010024 (*(int *)(((uintptr_t)pf_module_state + 0xe490U)))
#undef DAT_10010034
#define DAT_10010034 (*(uint *)(((uintptr_t)pf_module_state + 0xe4a0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001828
 */

undefined8 recovered_10001828(undefined1 *param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;

  recovered_1000196c();
  if (((0xfffff80c < (uint)param_2 - 0x801) && (param_1 != (undefined1 *)0x0)) &&
     (DAT_10010024 != 0)) {
    lVar1 = (ulong)DAT_10010034 * 0x10;
    iVar5 = 999;
    while (recovered_10001550(DAT_10010008,(ulong)DAT_10010020,((uintptr_t)pf_module_state+0xe66cU),0x80),
          (*(byte *)(lVar1 + ((uintptr_t)pf_module_state+0xe678U)) & 1) == 0) {
      if (iVar5 == 0) goto LAB_10001938;
      recovered_10001490(DAT_10010008,100);
      iVar5 = iVar5 + -1;
    }
    uVar4 = (ulong)DAT_10010034;
    recovered_100019f4(&DAT_1000c000 + uVar4 * 0x800,param_1,(uint)param_2);
    *(char *)(lVar1 + ((uintptr_t)pf_module_state+0xe674U)) = (char)param_2;
    *(char *)(lVar1 + ((uintptr_t)pf_module_state+0xe675U)) = (char)((ulong)param_2 >> 8);
    *(undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0xe676U)) = 0xb00;
    *(undefined2 *)(lVar1 + ((uintptr_t)pf_module_state+0xe67aU)) = 0;
    recovered_10001550(DAT_10010008,(ulong)DAT_10010020,&DAT_1000c000 + uVar4 * 0x800,param_2);
    recovered_10001550(DAT_10010008,(ulong)DAT_10010020,((uintptr_t)pf_module_state+0xe66cU),0x80);
    uVar2 = DAT_10010034 + 1 & 7;
    uVar3 = recovered_100013d4(0x3818,(ulong)uVar2);
    if ((int)uVar3 != 0) {
      iVar5 = 1000;
      do {
        recovered_10001550(DAT_10010008,(ulong)DAT_10010020,((uintptr_t)pf_module_state+0xe66cU),0x80);
        if ((*(byte *)(lVar1 + ((uintptr_t)pf_module_state+0xe678U)) & 1) != 0) {
          DAT_10010000 = 0;
          DAT_10010034 = uVar2;
          return 1;
        }
        recovered_10001490(DAT_10010008,100);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
LAB_10001938:
    recovered_100011f0();
  }
  DAT_10010000 = 0;
  return 0;
}

#undef DAT_1000c000
#undef DAT_10010000
#undef DAT_10010008
#undef DAT_10010020
#undef DAT_10010024
#undef DAT_10010034

#undef DAT_10010000
#define DAT_10010000 (*(int *)(((uintptr_t)pf_module_state + 0xe46cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000196c
 */

void recovered_1000196c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10010000;
      cVar1 = '\x01';
      { __typeof__(DAT_10010000) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10010000),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    do {
    } while (DAT_10010000 != 0);
  }
  return;
}

#undef DAT_10010000

#undef DAT_10010008
#define DAT_10010008 (*(int * *)(((uintptr_t)pf_module_state + 0xe474U)))
#undef DAT_1001002c
#define DAT_1001002c (*(uint *)(((uintptr_t)pf_module_state + 0xe498U)))
#define local_14 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000199c
 */

ulong recovered_1000199c(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;

  local_14 = 0;
  uVar2 = recovered_100013d4(0x100,(ulong)DAT_1001002c);
  if ((int)uVar2 != 0) {
    recovered_10001648(DAT_10010008);
    uVar3 = recovered_10001318(0x100,&local_14);
    uVar1 = 0;
    if ((int)uVar3 != 0) {
      uVar1 = local_14 >> 1 & 1;
    }
    uVar2 = (ulong)uVar1;
  }
  return uVar2;
}

#undef DAT_10010008
#undef DAT_1001002c
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019f4
 */

void recovered_100019f4(undefined1 *param_1,undefined1 *param_2,uint param_3)

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
