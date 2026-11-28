/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002000
#define DAT_10002000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2a9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000420
 */

void * recovered_10000420(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10002000;
}

#undef DAT_10002000

#undef DAT_10001d57
#define DAT_10001d57 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10001d58
#define str_10001d58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#define local_498 (*(undefined1 (*)[1176])(pf_stack_frame + 24))
#define local_94 (*(byte (*)[148])(pf_stack_frame + 1052))
#define local_68 (*(byte (*)[104])(pf_stack_frame + 1096))
#define local_5c (*(char *)(pf_stack_frame + 1108))
#define local_3c (*(uint *)(pf_stack_frame + 1140))
#define local_38 (*(uint *)(pf_stack_frame + 1144))
#define local_34 (*(int *)(pf_stack_frame + 1148))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000042d
 */

uint recovered_1000042d(void *api)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  local_34 = 0;
  uVar3 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((long)api + 4) == 1100000)
      ) && (0xf7 < *(uint *)((long)api + 8))) {
    recovered_100005c1(local_498,0x400,&DAT_10001d57);
    if ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10001d57,str_10001d58,local_498);
      if (((iVar1 != 0) && (*(int *)api == 0x54584b57)) &&
         ((0x5f < *(uint *)((long)api + 8) && (*(int *)((long)api + 0x5c) != 0)))) {
        uVar3 = 0;
        while (uVar3 != 0x20) {
          uVar4 = 0;
          local_38 = uVar3;
          while (uVar4 != 0x20) {
            local_3c = uVar4;
            iVar1 = recovered_100011ec(api,uVar3 & 0xff,uVar4 & 0xff,0,local_68);
            if (iVar1 != 0) {
              recovered_100005d5(api,local_68,&local_34);
              if (local_5c < '\0') {
                for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                  iVar2 = recovered_100011ec(api,uVar3 & 0xff,uVar4 & 0xff,iVar1 + 8U & 0xff,
                                             local_94);
                  if (iVar2 != 0) {
                    recovered_100005d5(api,local_94,&local_34);
                  }
                }
              }
            }
            uVar4 = local_3c + 1;
          }
          uVar3 = local_38 + 1;
        }
        if (local_34 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          if ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) {
            (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10001d57,str_10001d58,local_498);
          }
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10001d57
#undef str_10001d58
#undef local_498
#undef local_94
#undef local_68
#undef local_5c
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005c1
 */

void recovered_100005c1(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10001178((long)param_1,param_2,param_3);
  return;
}


#undef DAT_10001d57
#define DAT_10001d57 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10001da0
#define DAT_10001da0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_10001da5
#define DAT_10001da5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4eU)))
#undef DAT_10001e0d
#define DAT_10001e0d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_10001e0f
#define DAT_10001e0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb8U)))
#undef DAT_10001e11
#define DAT_10001e11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbaU)))
#undef DAT_10001e16
#define DAT_10001e16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbfU)))
#undef DAT_10001e19
#define DAT_10001e19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc2U)))
#undef DAT_10001e1b
#define DAT_10001e1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc4U)))
#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12b1U)))
#undef DAT_10003010
#define DAT_10003010 (*(byte *)(((uintptr_t)pf_module_state + 0x12b9U)))
#undef DAT_10003011
#define DAT_10003011 (*(byte *)(((uintptr_t)pf_module_state + 0x12baU)))
#undef DAT_10003012
#define DAT_10003012 (*(byte *)(((uintptr_t)pf_module_state + 0x12bbU)))
#undef DAT_10003013
#define DAT_10003013 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12bcU)))
#undef DAT_10003014
#define DAT_10003014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12bdU)))
#undef DAT_10003018
#define DAT_10003018 (*(uint *)(((uintptr_t)pf_module_state + 0x12c1U)))
#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12c5U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint *)(((uintptr_t)pf_module_state + 0x12c9U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12cdU)))
#undef DAT_1000302c
#define DAT_1000302c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12d5U)))
#undef DAT_10003030
#define DAT_10003030 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12d9U)))
#undef DAT_10003034
#define DAT_10003034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12ddU)))
#undef DAT_10003038
#define DAT_10003038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12e1U)))
#undef DAT_10003100
#define DAT_10003100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13a9U)))
#undef DAT_10003200
#define DAT_10003200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14a9U)))
#undef DAT_10007200
#define DAT_10007200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a9U)))
#undef DAT_10007300
#define DAT_10007300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55a9U)))
#undef _DAT_10003024
#define _DAT_10003024 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12cdU)))
#undef _DAT_10003030
#define _DAT_10003030 (*(uint *)(((uintptr_t)pf_module_state + 0x12d9U)))
#undef _DAT_10003034
#define _DAT_10003034 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x12ddU)))
#undef str_10001d58
#define str_10001d58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#undef str_10001da7
#define str_10001da7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x50U)))
#undef str_10001db7
#define str_10001db7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x60U)))
#undef str_10001dc9
#define str_10001dc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72U)))
#undef str_10001dd6
#define str_10001dd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7fU)))
#undef str_10001de8
#define str_10001de8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91U)))
#undef str_10001dfa
#define str_10001dfa (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa3U)))
#undef str_10001e1e
#define str_10001e1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc7U)))
#define local_468 (*(undefined1 (*)[1128])(pf_stack_frame + 1112))
#define local_428 (*(undefined1 (*)[1064])(pf_stack_frame + 1176))
#define local_a8 (*(uint (*)[42])(pf_stack_frame + 2072))
#define local_48 (*(uint *)(pf_stack_frame + 2168))
#define local_44 (*(uint *)(pf_stack_frame + 2172))
#define local_40 (*(undefined * *)(pf_stack_frame + 2176))
#define local_34 (*(uint *)(pf_stack_frame + 2188))
#define auStack_498 (*(undefined1 (*)[1176])(pf_stack_frame + 1064))
#define local_8a8 (*(char (*)[2216])(pf_stack_frame + 24))
#define local_4a8 (*(uint *)(pf_stack_frame + 1048))
#define local_4a4 (*(uint *)(pf_stack_frame + 1052))
#define local_4a0 (*(undefined8 *)(pf_stack_frame + 1056))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005d5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100005d5(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2272] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  bool bVar9;

  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    return;
  }
  recovered_100005c1(local_8a8,0x400,&DAT_10001d57);
  local_34 = 0;
  local_44 = 0;
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
  recovered_10001615(((uintptr_t)pf_module_state+0x12a9U),0x38);
  DAT_10003038 = 0;
  DAT_10003010 = *param_2;
  DAT_10003011 = param_2[1];
  DAT_10003012 = param_2[2];
  DAT_10003018 = (uint)DAT_10003011 << 0xb | (uint)DAT_10003010 << 0x10 | (uint)DAT_10003012 << 8 |
                 0x80000000;
  DAT_10003000 = param_1;
  uVar2 = recovered_1000139e(param_1,DAT_10003010,DAT_10003011,DAT_10003012,4,2,(long)&local_34);
  if ((int)uVar2 == 0) {
    return;
  }
  local_a8[0] = 0;
  PF_PART2(DAT_10003014, 0) = (undefined2)local_34;
  DAT_10003013 = 1;
  uVar7 = *(uint *)(param_2 + 0x14);
  if ((uVar7 & 1) == 0 && uVar7 != 0) {
    local_48 = uVar7;
    recovered_1000139e(param_1,*param_2,param_2[1],param_2[2],0x10,4,(long)&local_48);
    uVar7 = 0;
    if ((local_48 & 7) == 4) {
      local_a8[0] = *(uint *)(param_2 + 0x18);
      recovered_1000139e(param_1,*param_2,param_2[1],param_2[2],0x14,4,(long)local_a8);
      uVar7 = local_a8[0];
    }
    uVar6 = 0xfffffffc;
    if ((local_48 & 1) == 0) {
      uVar6 = 0xfffffff0;
    }
    uVar6 = uVar6 & local_48;
    if (uVar6 != 0 || uVar7 != 0) {
      DAT_10003008 = 0;
      local_4a8 = 0;
      if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
        if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
          if ((((uint)param_1[2] < 0x68 || uVar7 != 0) ||
              ((code *)(ulong)(uint)param_1[0x19] == (code *)0x0)) ||
             (iVar1 = (*(code *)(ulong)(uint)param_1[0x19])(uVar6,0,0x6000,&local_4a8), iVar1 == 0))
          goto LAB_10000b67;
          DAT_10003008 = (ulong)local_4a8;
        }
        else {
          iVar1 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar6,uVar7,0x6000,&DAT_10003008);
          if (iVar1 == 0) goto LAB_10000b67;
        }
        local_4a8 = 0;
        pcVar5 = str_10001dd6;
        if (((*param_1 == 0x54584b57) && (99 < (uint)param_1[2])) && (param_1[0x18] != 0)) {
          uVar2 = recovered_1000139e(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_4a8);
          if ((int)uVar2 == 0) {
            pcVar5 = str_10001de8;
          }
          else {
            uVar7 = 0;
            for (lVar3 = 5; lVar3 != 0xb; lVar3 = lVar3 + 1) {
              uVar4 = uVar7 | 1;
              uVar6 = uVar7 | 2;
              if (*(uint *)(param_2 + lVar3 * 4) == 0) {
                uVar6 = uVar7;
              }
              uVar7 = uVar6;
              if ((*(uint *)(param_2 + lVar3 * 4) & 1) != 0) {
                uVar7 = uVar4;
              }
            }
            lVar3 = recovered_100011cc(((uintptr_t)pf_module_state+0x33U));
            uVar6 = uVar7 | 4;
            if (lVar3 == 0) {
              uVar6 = uVar7;
            }
            if ((param_2[8] == 6) && (param_2[9] != 0)) {
              uVar6 = uVar6 | 2;
            }
            local_a8[0] = local_4a8 | uVar6;
            uVar2 = recovered_1000173b(param_1,*param_2,param_2[1],param_2[2],local_a8[0]);
            if ((int)uVar2 != 0) {
              recovered_1000139e(param_1,*param_2,param_2[1],param_2[2],4,2,(long)local_a8);
              if ((uVar6 & ~local_a8[0]) == 0) {
                local_4a8 = 0;
                uVar2 = recovered_10001630(0,&local_4a8);
                if ((((int)uVar2 != 0) &&
                    (uVar2 = recovered_100016d1(0xd8,0xffffffff), (int)uVar2 != 0)) &&
                   (uVar2 = recovered_100016d1(0,local_4a8 | 0x4000000), (int)uVar2 != 0)) {
                  iVar1 = 200;
                  do {
                    bVar9 = iVar1 == 0;
                    iVar1 = iVar1 + -1;
                    if (bVar9) goto LAB_10000b67;
                    recovered_10001775(DAT_10003000,100);
                    uVar2 = recovered_10001630(0,&local_4a8);
                  } while (((int)uVar2 == 0) || ((local_4a8 & 0x4000000) != 0));
                  recovered_100016d1(0xd8,0xffffffff);
                  recovered_10001630(0xc0,&local_4a8);
                  local_4a8 = 0;
                  local_a8[0] = 0;
                  uVar2 = recovered_10001630(0x5400,&local_4a8);
                  if (((int)uVar2 != 0) &&
                     (uVar2 = recovered_10001630(0x5404,local_a8), (int)uVar2 != 0)) {
                    _DAT_10003030 = local_4a8;
                    _DAT_10003034 = (undefined2)local_a8[0];
                    if (((int)local_a8[0] < 0 && (local_4a8 & 1) == 0) &&
                       ((char)(local_a8[0] >> 8) != '\0' ||
                        ((((char)(local_4a8 >> 0x18) != '\0' || (char)(local_4a8 >> 8) != '\0') ||
                         ((char)(local_4a8 >> 0x10) != '\0' || (char)local_4a8 != '\0')) ||
                        (char)local_a8[0] != '\0'))) {
                      recovered_10001615(((uintptr_t)pf_module_state+0x13a9U),0x80);
                      local_40 = &DAT_10003200;
                      recovered_10001615(((uintptr_t)pf_module_state+0x14a9U),0x4000);
                      for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 0x10) {
                        local_4a8 = 0;
                        local_a8[0] = 0;
                        uVar2 = recovered_1000179b(DAT_10003000,DAT_10003018,(long)local_40,0x800,
                                                   (long)&local_4a8,local_a8);
                        if ((int)uVar2 == 0) goto LAB_10000b67;
                        recovered_100017d7(&DAT_10003100 + lVar3,local_4a8,local_a8[0]);
                        local_40 = local_40 + 0x800;
                      }
                      recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10003100,0x80);
                      recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10003200,0x4000);
                      bVar9 = recovered_10001836(0x2800,0x2804,((uintptr_t)pf_module_state+0x13a9U));
                      if (((((int)CONCAT71(extraout_var,bVar9) != 0) &&
                           (uVar2 = recovered_100016d1(0x2808,0x80), (int)uVar2 != 0)) &&
                          (uVar2 = recovered_100016d1(0x2810,0), (int)uVar2 != 0)) &&
                         (uVar2 = recovered_100016d1(0x2818,7), (int)uVar2 != 0)) {
                        for (uVar7 = 0x5200; uVar7 != 0x5400; uVar7 = uVar7 + 4) {
                          recovered_100016d1((ulong)uVar7,0);
                        }
                        _DAT_10003024 = 0x4008012;
                        uVar2 = recovered_100016d1(0x100,0x4008012);
                        if ((int)uVar2 != 0) {
                          puVar8 = &DAT_10007200;
                          recovered_10001615(((uintptr_t)pf_module_state+0x54a9U),0x80);
                          recovered_10001615(((uintptr_t)pf_module_state+0x55a9U),0x4000);
                          for (local_40 = (undefined *)0x0; local_40 != (undefined *)0x4000;
                              local_40 = local_40 + 0x800) {
                            local_4a8 = 0;
                            local_a8[0] = 0;
                            uVar2 = recovered_1000179b(DAT_10003000,DAT_10003018,
                                                       (long)(&DAT_10007300 + (long)local_40),0x800,
                                                       (long)&local_4a8,local_a8);
                            if ((int)uVar2 == 0) goto LAB_10000b67;
                            recovered_100017d7(puVar8,local_4a8,local_a8[0]);
                            puVar8[0xc] = 1;
                            puVar8 = puVar8 + 0x10;
                          }
                          recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10007200,0x80);
                          bVar9 = recovered_10001836(0x3800,0x3804,((uintptr_t)pf_module_state+0x54a9U));
                          if ((((int)CONCAT71(extraout_var_00,bVar9) != 0) &&
                              (uVar2 = recovered_100016d1(0x3808,0x80), (int)uVar2 != 0)) &&
                             ((uVar2 = recovered_100016d1(0x3810,0), (int)uVar2 != 0 &&
                              ((uVar2 = recovered_100016d1(0x3818,0), (int)uVar2 != 0 &&
                               (uVar2 = recovered_100016d1(0x410,0x60200a), (int)uVar2 != 0)))))) {
                            DAT_1000302c = 0;
                            uVar2 = recovered_100016d1(0x400,0x4010a);
                            if (((int)uVar2 != 0) &&
                               (((uVar2 = recovered_10001630(0,&local_44), (int)uVar2 != 0 &&
                                 (uVar2 = recovered_100016d1(0,local_44 | 0x40), (int)uVar2 != 0))
                                && (uVar2 = recovered_10001630(8,&local_34), (int)uVar2 != 0)))) {
                              local_40 = (undefined *)CONCAT44(PF_PART4(local_40, 4),local_34);
                              DAT_10003020 = local_34;
                              DAT_1000301c = 1;
                              recovered_100005c1(local_8a8,0x400,&DAT_10001d57);
                              recovered_10001178((long)local_8a8,0x400,&DAT_10001da0);
                              lVar3 = 0;
                              do {
                                if (lVar3 != 0) {
                                  if (lVar3 == 6) goto LAB_10000e6d;
                                  recovered_10001178((long)local_8a8,0x400,&DAT_10001da5);
                                }
                                recovered_100013eb((long)local_8a8,0x400,
                                                   (uint)(byte)(&DAT_10003030)[lVar3],2);
                                lVar3 = lVar3 + 1;
                              } while( true );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_10000b67;
            }
            pcVar5 = str_10001dfa;
          }
        }
        recovered_10001178((long)local_8a8,0x400,pcVar5);
      }
    }
  }
LAB_10000b67:
  recovered_100014bf();
  return;
LAB_10000e6d:
  pcVar5 = str_10001da7;
  if (((ulong)local_40 & 2) == 0) {
    pcVar5 = str_10001db7;
  }
  recovered_10001178((long)local_8a8,0x400,pcVar5);
  recovered_10001448((long)local_8a8,0x400,0x5dc);
  recovered_100005c1((undefined1 *)local_a8,0x60,str_10001dc9);
  recovered_10001178((long)local_a8,0x60,&DAT_10001e0d);
  recovered_100013eb((long)local_a8,0x60,(uint)*param_2,2);
  recovered_10001178((long)local_a8,0x60,&DAT_10001da5);
  recovered_100013eb((long)local_a8,0x60,(uint)param_2[1],2);
  recovered_10001178((long)local_a8,0x60,&DAT_10001e0f);
  recovered_10001448((long)local_a8,0x60,(ulong)param_2[2]);
  recovered_100005c1((undefined1 *)&local_4a8,0x400,&DAT_10001e11);
  recovered_100013eb((long)&local_4a8,0x400,(uint)*param_2,2);
  recovered_10001178((long)&local_4a8,0x400,&DAT_10001da5);
  recovered_100013eb((long)&local_4a8,0x400,(uint)param_2[1],2);
  recovered_10001178((long)&local_4a8,0x400,&DAT_10001e0f);
  recovered_10001448((long)&local_4a8,0x400,(ulong)param_2[2]);
  recovered_10001178((long)&local_4a8,0x400,&DAT_10001e16);
  recovered_100013eb((long)&local_4a8,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001178((long)&local_4a8,0x400,&DAT_10001da5);
  recovered_100013eb((long)&local_4a8,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001178((long)&local_4a8,0x400,&DAT_10001e19);
  if (local_8a8[0] != '\0') {
    recovered_10001178((long)&local_4a8,0x400,&DAT_10001e1b);
    recovered_10001178((long)&local_4a8,0x400,local_8a8);
  }
  if (((code *)(ulong)(uint)param_1[3] != (code *)0x0) &&
     (iVar1 = (*(code *)(ulong)(uint)param_1[3])(local_a8,str_10001d58,&local_4a8), iVar1 != 0)) {
    recovered_10001615((long)&local_4a8,0xc0);
    local_4a8 = 0xc0;
    local_4a4 = DAT_10003020 & 2 | 0xd;
    local_4a0 = 0x800000005dc;
    for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
      auStack_498[lVar3] = (&DAT_10003030)[lVar3];
    }
    recovered_100005c1(local_468,0x40,str_10001d58);
    recovered_100005c1(local_428,0x40,str_10001e1e);
    if (((*param_1 == 0x54584b57) && (0xcb < (uint)param_1[2])) &&
       (((code *)(ulong)(uint)param_1[0x32] != (code *)0x0 &&
        (iVar1 = (*(code *)(ulong)(uint)param_1[0x32])
                           (&local_4a8,recovered_10001907,recovered_10001b15), iVar1 != 0)))) {
      if (param_3 == (int *)0x0) {
        return;
      }
      *param_3 = *param_3 + 1;
      return;
    }
  }
  goto LAB_10000b67;
}

#undef DAT_10001d57
#undef DAT_10001da0
#undef DAT_10001da5
#undef DAT_10001e0d
#undef DAT_10001e0f
#undef DAT_10001e11
#undef DAT_10001e16
#undef DAT_10001e19
#undef DAT_10001e1b
#undef DAT_10003000
#undef DAT_10003008
#undef DAT_10003010
#undef DAT_10003011
#undef DAT_10003012
#undef DAT_10003013
#undef DAT_10003014
#undef DAT_10003018
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_1000302c
#undef DAT_10003030
#undef DAT_10003034
#undef DAT_10003038
#undef DAT_10003100
#undef DAT_10003200
#undef DAT_10007200
#undef DAT_10007300
#undef _DAT_10003024
#undef _DAT_10003030
#undef _DAT_10003034
#undef str_10001d58
#undef str_10001da7
#undef str_10001db7
#undef str_10001dc9
#undef str_10001dd6
#undef str_10001de8
#undef str_10001dfa
#undef str_10001e1e
#undef local_468
#undef local_428
#undef local_a8
#undef local_48
#undef local_44
#undef local_40
#undef local_34
#undef auStack_498
#undef local_8a8
#undef local_4a8
#undef local_4a4
#undef local_4a0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001178
 */

void recovered_10001178(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_100011cc(param_1);
  if (param_3 != (char *)0x0 && param_1 != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_3 == '\0') || (param_2 <= uVar1)) break;
      *(char *)(param_1 + -1 + uVar1) = *param_3;
      param_3 = param_3 + 1;
    }
    *(undefined1 *)(param_1 + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011cc
 */

long recovered_100011cc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;
  long lVar3;

  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar2 = lVar3 + 1;
      pcVar1 = (char *)(param_1 + 1 + lVar3);
      lVar3 = lVar2;
    } while (*pcVar1 != '\0');
  }
  return lVar2;
}


#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011ec
 */

undefined4
recovered_100011ec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;

  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  if (param_5 == (undefined1 *)0x0) {
    local_34 = 0;
  }
  else {
    uVar5 = (undefined1)param_2;
    uVar4 = (undefined1)param_3;
    uVar3 = (undefined1)param_4;
    local_34 = 0;
    local_48 = param_4;
    local_44 = param_3;
    local_40 = param_2;
    uVar2 = recovered_1000139e(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_1000139e(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_1000139e(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_1000139e(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
        if ((int)uVar2 == 0) {
          local_38 = 0;
          PF_PART1(local_38, 2) = 0;
        }
        else {
        }
        *param_5 = (char)local_40;
        param_5[1] = (char)local_44;
        param_5[2] = (char)local_48;
        *(undefined4 *)(param_5 + 4) = local_3c;
        *(ushort *)(param_5 + 10) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
        param_5[9] = (char)((uint)local_50 >> 0x10);
        param_5[8] = (char)((uint)local_50 >> 0x18);
        param_5[0xc] = PF_PART1(local_38, 2);
        local_34 = 1;
        for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 4) {
          local_4c = 0;
          uVar2 = recovered_1000139e(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
                                    );
          uVar1 = 0;
          if ((int)uVar2 != 0) {
            uVar1 = local_4c;
          }
          *(undefined4 *)(param_5 + lVar6 + 0x14) = uVar1;
        }
      }
    }
  }
  return local_34;
}

#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000139e
 */

undefined8
recovered_1000139e(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100013e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013eb
 */

void recovered_100013eb(long param_1,ulong param_2,uint param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;

  iVar1 = param_4 * 4;
  while( true ) {
    iVar1 = iVar1 + -4;
    bVar5 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar5) break;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f) & 0xf;
    cVar2 = (char)uVar3;
    cVar4 = cVar2 + '7';
    if (uVar3 < 10) {
      cVar4 = cVar2 + '0';
    }
    recovered_100018a9(param_1,param_2,cVar4);
  }
  return;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001448
 */

void recovered_10001448(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_100018a9(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_100018a9(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12b1U)))
#undef DAT_10003010
#define DAT_10003010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12b9U)))
#undef DAT_10003011
#define DAT_10003011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12baU)))
#undef DAT_10003012
#define DAT_10003012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12bbU)))
#undef DAT_10003013
#define DAT_10003013 (*(char *)(((uintptr_t)pf_module_state + 0x12bcU)))
#undef DAT_10003014
#define DAT_10003014 (*(uint *)(((uintptr_t)pf_module_state + 0x12bdU)))
#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12c5U)))
#define local_2c (*(undefined4 *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014bf
 */

void recovered_100014bf(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;

  local_28 = 0;
  local_24 = 0;
  local_2c = 0;
  DAT_1000301c = 0;
  if (DAT_10003000 == (int *)0x0) {
    DAT_1000301c = 0;
    return;
  }
  if (DAT_10003008 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = recovered_100016d1(0xd8,0xffffffff);
    uVar2 = recovered_10001630(0x100,&local_28);
    uVar3 = 0;
    uVar4 = 0;
    if ((int)uVar2 != 0) {
      uVar2 = recovered_100016d1(0x100,local_28 & 0xfffffffd);
      uVar4 = (uint)uVar2 & (uint)uVar1;
    }
    uVar1 = recovered_10001630(0x400,&local_24);
    if ((int)uVar1 != 0) {
      uVar1 = recovered_100016d1(0x400,local_24 & 0xfffffffd);
      uVar3 = (uint)uVar1 & uVar4;
    }
    recovered_10001630(0xc0,&local_2c);
    recovered_100018e3(DAT_10003000);
    recovered_10001775(DAT_10003000,10);
    uVar1 = recovered_10001630(0x100,&local_28);
    if (((((int)uVar1 == 0) || ((local_28 & 2) != 0)) ||
        (uVar1 = recovered_10001630(0x400,&local_24), (int)uVar1 == 0)) || ((local_24 & 2) != 0)) {
      uVar3 = 0;
    }
  }
  if (DAT_10003013 != '\0') {
    uVar4 = DAT_10003014 & 0xfffffffb;
    if (uVar3 != 0) {
      uVar4 = DAT_10003014;
    }
    recovered_1000173b(DAT_10003000,DAT_10003010,DAT_10003011,DAT_10003012,uVar4 & 0xffff);
    DAT_10003013 = '\0';
  }
  return;
}

#undef DAT_10003000
#undef DAT_10003008
#undef DAT_10003010
#undef DAT_10003011
#undef DAT_10003012
#undef DAT_10003013
#undef DAT_10003014
#undef DAT_1000301c
#undef local_2c
#undef local_28
#undef local_24

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001615
 */

void recovered_10001615(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 != 0) {
    for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined1 *)(param_1 + lVar1) = 0;
    }
  }
  return;
}


#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12b1U)))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001630
 */

undefined8 recovered_10001630(uint param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined8 uVar2;
  ulong uVar3;

  local_1c = 0;
  uVar2 = 0;
  if (((DAT_10003008 != 0 && param_2 != (undefined4 *)0x0) && (DAT_10003000 != (int *)0x0)) &&
     (*DAT_10003000 == 0x54584b57)) {
    uVar3 = DAT_10003008 + (ulong)param_1;
    if (((uint)DAT_10003000[2] < 0xc0) || ((code *)(ulong)(uint)DAT_10003000[0x2f] == (code *)0x0))
    {
      if (uVar3 >> 0x20 != 0) {
        return 0;
      }
      if ((uint)DAT_10003000[2] < 0x6c) {
        return 0;
      }
      if ((code *)(ulong)(uint)DAT_10003000[0x1a] == (code *)0x0) {
        return 0;
      }
      iVar1 = (*(code *)(ulong)(uint)DAT_10003000[0x1a])(uVar3,4,&local_1c);
    }
    else {
      iVar1 = (*(code *)(ulong)(uint)DAT_10003000[0x2f])(uVar3,4,&local_1c);
    }
    if (iVar1 != 0) {
      *param_2 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef DAT_10003000
#undef DAT_10003008
#undef local_1c

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x12b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100016d1
 */

undefined8 recovered_100016d1(ulong param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;

  if (((DAT_10003008 != 0) && (DAT_10003000 != (int *)0x0)) && (*DAT_10003000 == 0x54584b57)) {
    uVar2 = DAT_10003008 + (param_1 & 0xffffffff);
    if ((0xc3 < (uint)DAT_10003000[2]) && ((code *)(ulong)(uint)DAT_10003000[0x30] != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x10001718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)DAT_10003000[0x30])(uVar2,4);
      return uVar1;
    }
    if ((uVar2 >> 0x20 == 0) &&
       ((0x6f < (uint)DAT_10003000[2] && ((code *)(ulong)(uint)DAT_10003000[0x1b] != (code *)0x0))))
    {
                    /* WARNING: Could not recover jumptable at 0x10001735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)DAT_10003000[0x1b])(uVar2,4,param_2);
      return uVar1;
    }
  }
  return 0;
}

#undef DAT_10003000
#undef DAT_10003008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000173b
 */

undefined8
recovered_1000173b(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000176f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001775
 */

void recovered_10001775(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000179b
 */

undefined8
recovered_1000179b(int *param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100017d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017d7
 */

void recovered_100017d7(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

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
 * Address: 0x1000180b
 */

void recovered_1000180b(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003018
#define DAT_10003018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12c1U)))
#define local_28 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001836
 */

bool recovered_10001836(uint param_1,uint param_2,long param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  local_28 = 0;
  uVar1 = recovered_1000179b(DAT_10003000,DAT_10003018,param_3,0x80,(long)&local_28,
                             (long)&local_28 + 4);
  bVar2 = false;
  if (((int)uVar1 != 0) && ((local_28 & 0x7f) == 0)) {
    uVar1 = recovered_100016d1((ulong)param_1,(undefined4)local_28);
    if ((int)uVar1 != 0) {
      uVar1 = recovered_100016d1((ulong)param_2,PF_PART4(local_28, 4));
      bVar2 = (int)uVar1 != 0;
    }
  }
  return bVar2;
}

#undef DAT_10003000
#undef DAT_10003018
#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a9
 */

void recovered_100018a9(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100011cc(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018e3
 */

void recovered_100018e3(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10001903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003018
#define DAT_10003018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12c1U)))
#undef DAT_1000301c
#define DAT_1000301c (*(int *)(((uintptr_t)pf_module_state + 0x12c5U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint *)(((uintptr_t)pf_module_state + 0x12cdU)))
#undef DAT_10003028
#define DAT_10003028 (*(uint *)(((uintptr_t)pf_module_state + 0x12d1U)))
#undef DAT_10003038
#define DAT_10003038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12e1U)))
#undef DAT_10003100
#define DAT_10003100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13a9U)))
#undef DAT_10003108
#define DAT_10003108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13b1U)))
#undef DAT_1000310c
#define DAT_1000310c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13b5U)))
#undef DAT_1000310d
#define DAT_1000310d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13b6U)))
#undef DAT_10003200
#define DAT_10003200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14a9U)))
#define local_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001907
 */

undefined8 recovered_10001907(long param_1,undefined4 param_2,uint *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined7 extraout_var = 0;
  undefined8 uVar4;
  undefined7 extraout_var_00 = 0;
  uint uVar5;
  long lVar6;

  PF_PART4(local_38, 4) = (undefined4)((ulong)in_RAX >> 0x20);
  recovered_10001cb5();
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if ((param_1 != 0) && (DAT_1000301c != 0)) {
    local_38 = CONCAT44(PF_PART4(local_38, 4),param_2);
    lVar6 = (ulong)DAT_10003028 * 0x10;
    recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10003100,0x80);
    if (((&DAT_1000310c)[lVar6] & 1) != 0) {
      local_38 = local_38 & 0xffffffff;
      uVar3 = recovered_100016d1(0x100,DAT_10003024 & 0xfffffffd);
      if ((int)uVar3 != 0) {
        recovered_100018e3(DAT_10003000);
        recovered_10001775(DAT_10003000,10);
        uVar3 = recovered_10001630(0x100,(undefined4 *)((long)&local_38 + 4));
        if (((int)uVar3 != 0) && ((local_38 & 0x200000000) == 0)) {
          recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10003100,0x80);
          if (((&DAT_1000310c)[lVar6] & 1) == 0) {
            bVar2 = recovered_10001cd6();
            if ((int)CONCAT71(extraout_var,bVar2) != 0) {
              DAT_10003038 = 0;
              return 0;
            }
          }
          else {
            uVar1 = *(ushort *)(&DAT_10003108 + lVar6);
            uVar5 = (uint)uVar1;
            if (uVar1 < 0x801) {
              recovered_1000180b(DAT_10003000,DAT_10003018,
                                 &DAT_10003200 + (ulong)DAT_10003028 * 0x800,0x800);
              uVar3 = 0;
              if ((((((&DAT_1000310c)[lVar6] & 2) != 0) && (uVar5 <= (uint)local_38)) &&
                  (0xd < uVar1)) && ((&DAT_1000310d)[lVar6] == '\0')) {
                recovered_10001d2d(param_1,(long)(&DAT_10003200 + (ulong)DAT_10003028 * 0x800),uVar5
                                  );
                uVar3 = 1;
                if (param_3 != (uint *)0x0) {
                  *param_3 = uVar5;
                }
              }
              *(undefined2 *)(&DAT_1000310c + lVar6) = 0;
              recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10003100,0x80);
              uVar4 = recovered_100016d1(0x2818,DAT_10003028);
              if (((int)uVar4 == 0) ||
                 (bVar2 = recovered_10001cd6(), (int)CONCAT71(extraout_var_00,bVar2) == 0)) {
                recovered_100014bf();
                DAT_10003038 = 0;
                return 0;
              }
              DAT_10003028 = DAT_10003028 + 1 & 7;
              DAT_10003038 = 0;
              return uVar3;
            }
          }
        }
      }
      recovered_100014bf();
    }
  }
  DAT_10003038 = 0;
  return 0;
}

#undef DAT_10003000
#undef DAT_10003018
#undef DAT_1000301c
#undef DAT_10003024
#undef DAT_10003028
#undef DAT_10003038
#undef DAT_10003100
#undef DAT_10003108
#undef DAT_1000310c
#undef DAT_1000310d
#undef DAT_10003200
#undef local_38

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003018
#define DAT_10003018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12c1U)))
#undef DAT_1000301c
#define DAT_1000301c (*(int *)(((uintptr_t)pf_module_state + 0x12c5U)))
#undef DAT_1000302c
#define DAT_1000302c (*(uint *)(((uintptr_t)pf_module_state + 0x12d5U)))
#undef DAT_10003038
#define DAT_10003038 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12e1U)))
#undef DAT_10007200
#define DAT_10007200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a9U)))
#undef DAT_10007208
#define DAT_10007208 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54b1U)))
#undef DAT_10007209
#define DAT_10007209 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54b2U)))
#undef DAT_1000720a
#define DAT_1000720a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54b3U)))
#undef DAT_1000720c
#define DAT_1000720c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54b5U)))
#undef DAT_1000720e
#define DAT_1000720e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54b7U)))
#undef DAT_10007300
#define DAT_10007300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x55a9U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b15
 */

undefined8 recovered_10001b15(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  recovered_10001cb5();
  if (((0xfffff80c < param_2 - 0x801) && (param_1 != 0)) && (DAT_1000301c != 0)) {
    lVar3 = (ulong)DAT_1000302c * 0x10;
    iVar5 = 999;
    while (recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10007200,0x80),
          ((&DAT_1000720c)[lVar3] & 1) == 0) {
      bVar6 = iVar5 == 0;
      iVar5 = iVar5 + -1;
      if (bVar6) goto LAB_10001c89;
      recovered_10001775(DAT_10003000,100);
    }
    uVar1 = (ulong)DAT_1000302c;
    recovered_10001d2d((long)(&DAT_10007300 + uVar1 * 0x800),param_1,param_2);
    (&DAT_10007208)[lVar3] = (char)param_2;
    (&DAT_10007209)[lVar3] = (char)(param_2 >> 8);
    *(undefined4 *)(&DAT_1000720a + lVar3) = 0xb00;
    *(undefined2 *)(&DAT_1000720e + lVar3) = 0;
    recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10007300 + uVar1 * 0x800,param_2);
    recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10007200,0x80);
    uVar4 = DAT_1000302c + 1 & 7;
    uVar2 = recovered_100016d1(0x3818,uVar4);
    if ((int)uVar2 != 0) {
      iVar5 = 1000;
      while (bVar6 = iVar5 != 0, iVar5 = iVar5 + -1, bVar6) {
        recovered_1000180b(DAT_10003000,DAT_10003018,&DAT_10007200,0x80);
        if (((&DAT_1000720c)[lVar3] & 1) != 0) {
          DAT_1000302c = uVar4;
          DAT_10003038 = 0;
          return 1;
        }
        recovered_10001775(DAT_10003000,100);
      }
    }
LAB_10001c89:
    recovered_100014bf();
  }
  DAT_10003038 = 0;
  return 0;
}

#undef DAT_10003000
#undef DAT_10003018
#undef DAT_1000301c
#undef DAT_1000302c
#undef DAT_10003038
#undef DAT_10007200
#undef DAT_10007208
#undef DAT_10007209
#undef DAT_1000720a
#undef DAT_1000720c
#undef DAT_1000720e
#undef DAT_10007300

#undef DAT_10003038
#define DAT_10003038 (*(int *)(((uintptr_t)pf_module_state + 0x12e1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cb5
 */

/* WARNING: Removing unreachable block (ram,0x10001cd2) */

void recovered_10001cb5(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10003038;
  { __typeof__(DAT_10003038) pf_atomic_old = __atomic_exchange_n(&(DAT_10003038),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10003038

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x12a9U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12cdU)))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cd6
 */

byte recovered_10001cd6(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  undefined8 uVar1;
  byte bVar2;

  uStack_18 = (ulong)in_EAX;
  uVar1 = recovered_100016d1(0x100,DAT_10003024);
  if ((int)uVar1 == 0) {
    bVar2 = 0;
  }
  else {
    recovered_100018e3(DAT_10003000);
    uVar1 = recovered_10001630(0x100,(undefined4 *)((long)&uStack_18 + 4));
    bVar2 = (byte)((PF_PART4(uStack_18, 4) & 2) >> 1) & (int)uVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10003000
#undef DAT_10003024
#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d2d
 */

void recovered_10001d2d(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 != 0 && param_1 != 0) {
    for (uVar1 = 0; param_3 != uVar1; uVar1 = uVar1 + 1) {
      *(undefined1 *)(param_1 + uVar1) = *(undefined1 *)(param_2 + uVar1);
    }
  }
  return;
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
