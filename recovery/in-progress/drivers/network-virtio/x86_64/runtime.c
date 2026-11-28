/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x115eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000468
 */

void * recovered_10000468(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10002ec0
#define DAT_10002ec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef str_10002ec1
#define str_10002ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fU)))
#define local_94 (*(byte (*)[148])(pf_stack_frame + 1052))
#define local_68 (*(byte (*)[104])(pf_stack_frame + 1096))
#define local_5c (*(char *)(pf_stack_frame + 1108))
#define local_3c (*(uint *)(pf_stack_frame + 1140))
#define local_38 (*(uint *)(pf_stack_frame + 1144))
#define local_34 (*(int *)(pf_stack_frame + 1148))
#define local_498 (*(undefined1 (*)[1176])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000475
 */

uint recovered_10000475(void *api)

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
    recovered_10000609(local_498,0x400,&DAT_10002ec0);
    if ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) {
      iVar1 = (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002ec0,str_10002ec1,local_498);
      if (((iVar1 != 0) && (*(int *)api == 0x54584b57)) &&
         ((0x5f < *(uint *)((long)api + 8) && (*(int *)((long)api + 0x5c) != 0)))) {
        uVar3 = 0;
        while (uVar3 != 8) {
          uVar4 = 0;
          local_38 = uVar3;
          while (uVar4 != 0x20) {
            local_3c = uVar4;
            iVar1 = recovered_10001bac(api,uVar3 & 0xff,uVar4 & 0xff,0,local_68);
            if (iVar1 != 0) {
              recovered_1000061d(api,local_68,&local_34);
              if (local_5c < '\0') {
                for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                  iVar2 = recovered_10001bac(api,uVar3 & 0xff,uVar4 & 0xff,iVar1 + 8U & 0xff,
                                             local_94);
                  if (iVar2 != 0) {
                    recovered_1000061d(api,local_94,&local_34);
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
            (*(code *)(ulong)*(uint *)((long)api + 0xc))(&DAT_10002ec0,str_10002ec1,local_498);
          }
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10002ec0
#undef str_10002ec1
#undef local_94
#undef local_68
#undef local_5c
#undef local_3c
#undef local_38
#undef local_34
#undef local_498

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000609
 */

void recovered_10000609(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  *param_1 = 0;
  recovered_10001b38((long)param_1,param_2,param_3);
  return;
}


#undef DAT_10002eb0
#define DAT_10002eb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeU)))
#undef DAT_10002ec0
#define DAT_10002ec0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1eU)))
#undef DAT_10002f6b
#define DAT_10002f6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc9U)))
#undef DAT_10002f70
#define DAT_10002f70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xceU)))
#undef DAT_10002f72
#define DAT_10002f72 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd0U)))
#undef DAT_10002f74
#define DAT_10002f74 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd2U)))
#undef DAT_10002f76
#define DAT_10002f76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd4U)))
#undef DAT_10002f7b
#define DAT_10002f7b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xd9U)))
#undef DAT_10002f7e
#define DAT_10002f7e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdcU)))
#undef DAT_10002f80
#define DAT_10002f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xdeU)))
#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x215eU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2166U)))
#undef DAT_10005010
#define DAT_10005010 (*(byte *)(((uintptr_t)pf_module_state + 0x216eU)))
#undef DAT_10005011
#define DAT_10005011 (*(byte *)(((uintptr_t)pf_module_state + 0x216fU)))
#undef DAT_10005012
#define DAT_10005012 (*(byte *)(((uintptr_t)pf_module_state + 0x2170U)))
#undef DAT_10005013
#define DAT_10005013 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2171U)))
#undef DAT_10005014
#define DAT_10005014 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10005018
#define DAT_10005018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2176U)))
#undef DAT_1000501c
#define DAT_1000501c (*(uint *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10005020
#define DAT_10005020 (*(uint *)(((uintptr_t)pf_module_state + 0x217eU)))
#undef DAT_10005024
#define DAT_10005024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef DAT_10005028
#define DAT_10005028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2186U)))
#undef DAT_10005030
#define DAT_10005030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218eU)))
#undef DAT_10005034
#define DAT_10005034 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2192U)))
#undef DAT_10005040
#define DAT_10005040 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x219eU)))
#undef DAT_10005042
#define DAT_10005042 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_10005050
#define DAT_10005050 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x21aeU)))
#undef DAT_10005060
#define DAT_10005060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21beU)))
#undef DAT_10005100
#define DAT_10005100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225eU)))
#undef DAT_10005200
#define DAT_10005200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235eU)))
#undef DAT_10005204
#define DAT_10005204 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2362U)))
#undef DAT_10005205
#define DAT_10005205 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2363U)))
#undef DAT_10005400
#define DAT_10005400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255eU)))
#undef DAT_1000e500
#define DAT_1000e500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb65eU)))
#undef UNK_10002eb4
#define UNK_10002eb4 (*(uint *)(((uintptr_t)pf_module_state + 0x12U)))
#undef UNK_10002eb8
#define UNK_10002eb8 (*(uint *)(((uintptr_t)pf_module_state + 0x16U)))
#undef UNK_10002ebc
#define UNK_10002ebc (*(uint *)(((uintptr_t)pf_module_state + 0x1aU)))
#undef _DAT_10002eb0
#define _DAT_10002eb0 (*(uint *)(((uintptr_t)pf_module_state + 0xeU)))
#undef _DAT_10005024
#define _DAT_10005024 (*(uint *)(((uintptr_t)pf_module_state + 0x2182U)))
#undef _DAT_10005200
#define _DAT_10005200 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x235eU)))
#undef _DAT_1000e500
#define _DAT_1000e500 (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb65eU)))
#undef str_10002ec1
#define str_10002ec1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fU)))
#undef str_10002efa
#define str_10002efa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x58U)))
#undef str_10002f05
#define str_10002f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x63U)))
#undef str_10002f15
#define str_10002f15 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x73U)))
#undef str_10002f27
#define str_10002f27 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x85U)))
#undef str_10002f34
#define str_10002f34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x92U)))
#undef str_10002f46
#define str_10002f46 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa4U)))
#undef str_10002f58
#define str_10002f58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb6U)))
#undef str_10002f83
#define str_10002f83 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe1U)))
#undef str_10002f8e
#define str_10002f8e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_10002f9d
#define str_10002f9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfbU)))
#undef str_10002fae
#define str_10002fae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10cU)))
#undef str_10002fc1
#define str_10002fc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11fU)))
#undef str_10002fd4
#define str_10002fd4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x132U)))
#undef str_10002fe4
#define str_10002fe4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142U)))
#undef str_10002ff3
#define str_10002ff3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x151U)))
#undef str_10003002
#define str_10003002 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x160U)))
#undef str_10003013
#define str_10003013 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x171U)))
#undef str_1000301e
#define str_1000301e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000302a
#define str_1000302a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#undef str_10003034
#define str_10003034 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
#undef str_1000303d
#define str_1000303d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19bU)))
#undef str_10003048
#define str_10003048 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a6U)))
#undef str_10003051
#define str_10003051 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1afU)))
#undef str_10003059
#define str_10003059 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b7U)))
#undef str_10003062
#define str_10003062 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c0U)))
#undef str_10003069
#define str_10003069 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c7U)))
#undef str_1000307c
#define str_1000307c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
#undef str_1000308f
#define str_1000308f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1edU)))
#undef str_100030a2
#define str_100030a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x200U)))
#undef uRam0000000010002eb4
#define uRam0000000010002eb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x12U)))
#undef uRam0000000010002eb8
#define uRam0000000010002eb8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x16U)))
#undef uRam0000000010002ebc
#define uRam0000000010002ebc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1aU)))
#define local_a28 (*(char (*)[2600])(pf_stack_frame + 24))
#define local_628 (*(undefined4 *)(pf_stack_frame + 1048))
#define local_624 (*(int *)(pf_stack_frame + 1052))
#define local_620 (*(uint *)(pf_stack_frame + 1056))
#define local_61c (*(undefined4 *)(pf_stack_frame + 1060))
#define local_5e8 (*(undefined1 (*)[1512])(pf_stack_frame + 1112))
#define local_5a8 (*(undefined1 (*)[1448])(pf_stack_frame + 1176))
#define local_568 (*(undefined8 *)(pf_stack_frame + 1240))
#define local_160 (*(undefined1 * *)(pf_stack_frame + 2272))
#define local_158 (*(uint (*)[86])(pf_stack_frame + 2280))
#define local_f0 (*(undefined * *)(pf_stack_frame + 2384))
#define local_e8 (*(ulong *)(pf_stack_frame + 2392))
#define local_e0 (*(ulong *)(pf_stack_frame + 2400))
#define local_d8 (*(ulong *)(pf_stack_frame + 2408))
#define local_d0 (*(ulong *)(pf_stack_frame + 2416))
#define local_c8 (*(uint *)(pf_stack_frame + 2424))
#define local_c4 (*(uint *)(pf_stack_frame + 2428))
#define local_c0 (*(uint *)(pf_stack_frame + 2432))
#define local_bc (*(uint *)(pf_stack_frame + 2436))
#define local_b8 (*(uint *)(pf_stack_frame + 2440))
#define local_b4 (*(uint *)(pf_stack_frame + 2444))
#define local_b0 (*(uint *)(pf_stack_frame + 2448))
#define local_ac (*(int *)(pf_stack_frame + 2452))
#define local_a8 (*(uint *)(pf_stack_frame + 2456))
#define local_a4 (*(uint *)(pf_stack_frame + 2460))
#define local_a0 (*(uint *)(pf_stack_frame + 2464))
#define local_98 (*(undefined1 (*)[152])(pf_stack_frame + 2472))
#define local_94 (*(uint (*)[37])(pf_stack_frame + 2476))
#define local_88 (*(undefined4 *)(pf_stack_frame + 2488))
#define local_84 (*(undefined4 *)(pf_stack_frame + 2492))
#define local_80 (*(undefined4 *)(pf_stack_frame + 2496))
#define local_78 (*(long *)(pf_stack_frame + 2504))
#define local_70 (*(undefined1 (*)[112])(pf_stack_frame + 2512))
#define local_68 (*(int *)(pf_stack_frame + 2520))
#define local_64 (*(uint *)(pf_stack_frame + 2524))
#define local_60 (*(uint *)(pf_stack_frame + 2528))
#define local_5a (*(byte (*)[90])(pf_stack_frame + 2534))
#define local_54 (*(undefined4 *)(pf_stack_frame + 2540))
#define local_50 (*(uint *)(pf_stack_frame + 2544))
#define local_4c (*(uint *)(pf_stack_frame + 2548))
#define local_48 (*(int *)(pf_stack_frame + 2552))
#define local_44 (*(uint *)(pf_stack_frame + 2556))
#define local_40 (*(uint *)(pf_stack_frame + 2560))
#define local_3c (*(uint *)(pf_stack_frame + 2564))
#define local_38 (*(char * *)(pf_stack_frame + 2568))
#define abStack_618 (*(byte (*)[1560])(pf_stack_frame + 1064))
#define uStack_9c (*(uint *)(pf_stack_frame + 2468))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000061d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000061d(int *param_1,byte *param_2,int *param_3)

{
  unsigned char pf_stack_frame[2656] __attribute__((aligned(16))) = {0};

  short sVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined8 uVar6;
  long lVar7;
  undefined7 extraout_var_01 = 0;
  uint uVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint128 auVar15;

  bVar3 = recovered_10001dab((long)param_2);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
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
  recovered_10000609(local_a28,0x400,&DAT_10002ec0);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  bVar3 = recovered_10001dab((long)param_2);
  if ((int)CONCAT71(extraout_var_00,bVar3) == 0) {
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
  recovered_10001dda((long)local_5a,6);
  recovered_10001dda((long)&local_e8,0x80);
  recovered_10001dda(((uintptr_t)pf_module_state+0x215eU),0x60);
  DAT_10005060 = 0;
  DAT_10005010 = *param_2;
  DAT_10005011 = param_2[1];
  DAT_10005012 = param_2[2];
  DAT_10005000 = param_1;
  uVar6 = recovered_10001d5e(param_1,DAT_10005010,DAT_10005011,DAT_10005012,4,2,(long)&local_54);
  if ((int)uVar6 == 0) {
    return;
  }
  local_568 = (ulong)PF_PART4(local_568, 4) << 0x20;
  PF_PART2(DAT_10005014, 0) = (undefined2)local_54;
  DAT_10005013 = 1;
  pcVar9 = str_10002f34;
  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     (param_1[0x18] == 0)) {
LAB_10000c30:
    recovered_10001b38((long)local_a28,0x400,pcVar9);
  }
  else {
    uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],4,2,(long)&local_568);
    if ((int)uVar6 == 0) {
      pcVar9 = str_10002f46;
      goto LAB_10000c30;
    }
    uVar14 = 0;
    for (lVar7 = 5; lVar7 != 0xb; lVar7 = lVar7 + 1) {
      uVar8 = uVar14 | 1;
      uVar11 = uVar14 | 2;
      if (*(uint *)(param_2 + lVar7 * 4) == 0) {
        uVar11 = uVar14;
      }
      uVar14 = uVar11;
      if ((*(uint *)(param_2 + lVar7 * 4) & 1) != 0) {
        uVar14 = uVar8;
      }
    }
    lVar7 = recovered_10001b8c(((uintptr_t)pf_module_state+0x43U));
    uVar11 = uVar14 | 4;
    if (lVar7 == 0) {
      uVar11 = uVar14;
    }
    if (param_2[8] == 6) {
      if (param_2[9] != 0) {
        uVar11 = uVar11 | 2;
      }
    }
    local_158[0] = (uint)local_568 | uVar11;
    uVar6 = recovered_100023c1(param_1,*param_2,param_2[1],param_2[2],local_158[0]);
    if ((int)uVar6 == 0) {
      pcVar9 = str_10002f58;
      goto LAB_10000c30;
    }
    recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],4,2,(long)local_158);
    if ((uVar11 & ~local_158[0]) == 0) {
      local_158[0] = 0;
      recovered_10001dda((long)&local_e8,0x80);
      uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],0x34,1,(long)local_158);
      if ((int)uVar6 != 0) {
        uVar14 = 0;
        while ((uVar14 < 0x20 && (local_158[0] - 0x40 < 0xb0))) {
          local_68 = 0;
          local_64 = 0;
          local_48 = 0;
          local_3c = 0;
          local_44 = 0;
          local_40 = 0;
          uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],(short)local_158[0],1,
                                     (long)&local_68);
          if (((int)uVar6 == 0) ||
             (uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],
                                         (short)local_158[0] + 1,1,(long)&local_64), (int)uVar6 == 0
             )) break;
          if ((((local_68 == 9) &&
               (uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],
                                           (short)local_158[0] + 3,1,(long)&local_48),
               (int)uVar6 != 0)) &&
              (uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],
                                          (short)local_158[0] + 4,1,(long)&local_3c),
              (int)uVar6 != 0)) &&
             ((uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],
                                          (short)local_158[0] + 8,4,(long)&local_44),
              (int)uVar6 != 0 &&
              (uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],
                                          (short)local_158[0] + 0xc,4,(long)&local_40),
              (int)uVar6 != 0)))) {
            local_568 = 0;
            local_ac = local_ac + 1;
            if ((!(0x37 < local_40 && local_48 == 1)) ||
               (uVar6 = recovered_100023fb(param_1,param_2,local_3c,local_44,local_40,&local_568),
               (int)uVar6 == 0)) {
              if ((local_40 < 2 || local_48 != 2) ||
                 (uVar6 = recovered_100023fb(param_1,param_2,local_3c,local_44,local_40,&local_568),
                 (int)uVar6 == 0)) {
                if ((local_48 == 3) &&
                   (uVar6 = recovered_100023fb(param_1,param_2,local_3c,local_44,local_40,&local_568
                                              ), (int)uVar6 != 0)) {
                  local_d8 = local_568;
                  local_bc = local_3c;
                }
                else if ((local_48 == 4) &&
                        (uVar6 = recovered_100023fb(param_1,param_2,local_3c,local_44,local_40,
                                                    &local_568), (int)uVar6 != 0)) {
                  local_d0 = local_568;
                  local_c8 = local_40;
                  local_b8 = local_3c;
                }
              }
              else {
                local_60 = 0;
                local_e0 = local_568;
                local_c0 = local_3c;
                uVar6 = recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],
                                           (short)local_158[0] + 0x10,4,(long)&local_60);
                if (local_60 == 0 || (int)uVar6 == 0) {
                  local_e0 = 0;
                }
                else {
                  local_b4 = local_60;
                  local_b0 = local_40;
                }
              }
            }
            else {
              local_e8 = local_568;
              local_c4 = local_3c;
            }
          }
          if ((local_64 == 0) || (local_64 == local_158[0])) break;
          uVar14 = uVar14 + 1;
          local_158[0] = local_64;
        }
        if (local_e8 != 0) {
          DAT_10005008 = local_e8;
          local_568 = local_568 & 0xffffffff00000000;
          local_158[0] = 0;
          recovered_10001df5(param_1,local_e8,0x14,(long)local_98);
          local_94[1] = 1;
          bVar3 = recovered_100025ca(param_1,local_e8);
          if ((int)CONCAT71(extraout_var_01,bVar3) != 0) {
            local_94[1] = 2;
            uVar6 = recovered_1000266d(param_1,local_e8,1);
            if ((((int)uVar6 != 0) &&
                (uVar6 = recovered_10001df5(param_1,local_e8,0x14,(long)local_158), (int)uVar6 != 0)
                ) && ((local_158[0] & 0xc1) == 1)) {
              local_94[1] = 3;
              uVar6 = recovered_1000266d(param_1,local_e8,3);
              if ((((int)uVar6 != 0) &&
                  (uVar6 = recovered_10001df5(param_1,local_e8,0x14,(long)local_158),
                  (int)uVar6 != 0)) && ((local_158[0] & 0xc3) == 3)) {
                local_94[1] = 4;
                uVar6 = recovered_10002689(param_1,local_e8,0,0);
                if ((((int)uVar6 != 0) &&
                    (uVar6 = recovered_100026a7(param_1,local_e8,&local_a8), (int)uVar6 != 0)) &&
                   ((uVar6 = recovered_10002689(param_1,local_e8,0,1), (int)uVar6 != 0 &&
                    ((uVar6 = recovered_100026a7(param_1,local_e8,&local_a4), (int)uVar6 != 0 &&
                     ((local_a4 & 1) != 0)))))) {
                  local_a0 = local_a8 & 0x10028;
                  uStack_9c = local_a4 & 3;
                  local_94[1] = 5;
                  uVar6 = recovered_10002689(param_1,local_e8,8,0);
                  if (((int)uVar6 != 0) &&
                     (((uVar6 = recovered_10002689(param_1,local_e8,0xc,local_a0), (int)uVar6 != 0
                       && (uVar6 = recovered_10002689(param_1,local_e8,8,1), (int)uVar6 != 0)) &&
                      (uVar6 = recovered_10002689(param_1,local_e8,0xc,uStack_9c), (int)uVar6 != 0))
                     )) {
                    recovered_100026f5(param_1);
                    local_158[0] = 0xb;
                    local_94[1] = 6;
                    uVar6 = recovered_1000266d(param_1,local_e8,0xb);
                    if ((((int)uVar6 != 0) &&
                        (uVar6 = recovered_10001df5(param_1,local_e8,0x14,(long)local_94),
                        (int)uVar6 != 0)) && ((local_94[0] & 200) == 8)) {
                      local_94[1] = 7;
                      uVar6 = recovered_10001e20(param_1,local_e8,0x12,local_94 + 2);
                      if ((((int)uVar6 != 0) &&
                          (uVar6 = recovered_10001df5(param_1,local_e8,0x15,(long)local_70),
                          (int)uVar6 != 0)) &&
                         ((uVar6 = recovered_10002719(param_1,local_e8,0x16,0), (int)uVar6 != 0 &&
                          ((uVar6 = recovered_10001e20(param_1,local_e8,0x18,&local_88),
                           (int)uVar6 != 0 &&
                           (uVar6 = recovered_10001e20(param_1,local_e8,0x1c,&local_84),
                           (int)uVar6 != 0)))))) {
                        uVar12 = local_e8;
                        uVar6 = recovered_10001e20(param_1,local_e8,0x1e,(undefined4 *)&local_568);
                        if ((int)uVar6 != 0) {
                          local_80 = (uint)local_568;
                          if (local_e0 != 0) {
                            if ((ulong)local_b4 != 0) {
                              uVar12 = (ulong)local_b0;
                              if (1 < uVar12) {
                                uVar10 = (ulong)local_b4 * (local_568 & 0xffffffff);
                                uVar12 = uVar12 - 2;
                                if (!CARRY8(local_e0,uVar10) && uVar10 <= uVar12) {
                                  local_78 = local_e0 + uVar10;
                                }
                              }
                            }
                          }
                        }
                        local_94[1] = 8;
                        PF_PART4(auVar15, 0) = -(uint)((local_a0 & _DAT_10002eb0) == 0);
                        PF_PART4(auVar15, 4) = -(uint)((local_a0 & uRam0000000010002eb4) == 0);
                        PF_PART4(auVar15, 8) = -(uint)((uStack_9c & uRam0000000010002eb8) == 0);
                        PF_PART4(auVar15, 12) =
                             -(uint)(SUB164((uint128)0x0,0xc) ==
                                    (uStack_9c & uRam0000000010002ebc));
                        uVar14 = movmskpd((int)uVar12,auVar15);
                        DAT_1000501c = (uVar14 >> 1) << 0x1e | (uint)param_2[2] << 8 |
                                       (uint)*param_2 << 0x10 | (uint)param_2[1] << 0xb | 0x80000000
                        ;
                        if ((((uVar14 & 1) == 0) && (local_d0 != 0)) && (5 < local_c8)) {
                          local_38 = (char *)((ulong)local_38 & 0xffffffff00000000);
                          for (uVar12 = 0; uVar12 != 6; uVar12 = uVar12 + 1) {
                            local_568 = local_568 & 0xffffffff00000000;
                            uVar6 = recovered_10001df5(param_1,local_d0,uVar12 & 0xffffffff,
                                                       (long)&local_568);
                            if ((int)uVar6 == 0) goto LAB_10000c41;
                            local_5a[uVar12] = (byte)local_568;
                            local_38 = (char *)CONCAT44(PF_PART4(local_38, 4),
                                                        (uint)local_38 | (uint)local_568 & 0xff);
                          }
                          if (((uint)local_38 != 0) && ((local_5a[0] & 1) == 0)) {
                            if ((local_a0 >> 0x10 & 1) == 0) {
                              local_50 = 1;
                            }
                            else if ((local_c8 < 8) ||
                                    (uVar6 = recovered_10001e20(param_1,local_d0,6,&local_50),
                                    (int)uVar6 == 0)) goto LAB_10000c41;
                            if ((((local_a0 & 8) == 0) ||
                                ((0xb < local_c8 &&
                                 (uVar6 = recovered_10001e20(param_1,local_d0,10,&local_4c),
                                 (int)uVar6 != 0)))) && (1 < local_94[2])) {
                              if (local_4c - 0x7f3 < 0xfffff80e) {
                                local_4c = 0x5dc;
                              }
                              _DAT_10005024 = local_50;
                              DAT_10005028 = 0xc;
                              DAT_10005020 = local_4c;
                              for (lVar7 = 0; lVar7 != 6; lVar7 = lVar7 + 1) {
                                (&DAT_10005034)[lVar7] = local_5a[lVar7];
                              }
                              puVar13 = &DAT_10005100;
                              recovered_10001dda(((uintptr_t)pf_module_state+0x225eU),0x100);
                              recovered_10001dda(((uintptr_t)pf_module_state+0x235eU),0x24);
                              recovered_10001dda(((uintptr_t)pf_module_state+0x245eU),0x84);
                              local_f0 = &DAT_10005400;
                              recovered_10001dda(((uintptr_t)pf_module_state+0x255eU),0x9000);
                              local_38 = (char *)0x0;
                              while (local_38 != (char *)0x10) {
                                local_568 = local_568 & 0xffffffff00000000;
                                local_158[0] = 0;
                                uVar6 = recovered_10002821(param_1,DAT_1000501c,(long)local_f0,0x900
                                                           ,(long)&local_568,local_158);
                                if ((int)uVar6 == 0) goto LAB_10000c41;
                                local_160 = puVar13;
                                recovered_1000285d(puVar13,(uint)local_568,local_158[0]);
                                pcVar9 = local_38;
                                puVar2 = local_f0;
                                *(undefined8 *)(puVar13 + 8) = 0x200000900;
                                (&DAT_10005204)[(long)local_38 * 2] = (char)local_38;
                                (&DAT_10005205)[(long)local_38 * 2] = 0;
                                recovered_10002891(param_1,DAT_1000501c,local_f0,0x900);
                                puVar13 = local_160 + 0x10;
                                local_f0 = puVar2 + 0x900;
                                local_38 = pcVar9 + 1;
                              }
                              _DAT_10005200 = 0x100000;
                              uVar6 = recovered_100028bc(param_1,(long *)&local_e8,0,0x10,((uintptr_t)pf_module_state+0x225eU)
                                                         ,0x100,((uintptr_t)pf_module_state+0x235eU),0x24,((uintptr_t)pf_module_state+0x245eU),0x84,
                                                         &DAT_10005040);
                              if ((int)uVar6 != 0) {
                                DAT_10005042 = 0x10;
                                recovered_10001dda(((uintptr_t)pf_module_state+0xb55eU),0x10);
                                recovered_10001dda(((uintptr_t)pf_module_state+0xb65eU),6);
                                recovered_10001dda(((uintptr_t)pf_module_state+0xb75eU),0xc);
                                recovered_10001dda(((uintptr_t)pf_module_state+0xb85eU),0x80c);
                                uVar6 = recovered_10002821(param_1,DAT_1000501c,((uintptr_t)pf_module_state+0xb85eU),0x80c,
                                                           ((uintptr_t)pf_module_state+0x218aU),&DAT_10005030);
                                if ((int)uVar6 != 0) {
                                  _DAT_1000e500 = 0;
                                  uVar6 = recovered_100028bc(param_1,(long *)&local_e8,1,1,
                                                             ((uintptr_t)pf_module_state+0xb55eU),0x10,((uintptr_t)pf_module_state+0xb65eU),6,((uintptr_t)pf_module_state+0xb75eU)
                                                             ,0xc,&DAT_10005050);
                                  uVar12 = local_e8;
                                  if ((((((int)uVar6 != 0) &&
                                        (local_568 = local_568 & 0xffffffff00000000, local_e8 != 0))
                                       && (uVar6 = recovered_10001df5(param_1,local_e8,0x14,
                                                                      (long)&local_568),
                                          (int)uVar6 != 0)) &&
                                      ((((uint)local_568 & 200) == 8 &&
                                       (uVar6 = recovered_1000266d(param_1,uVar12,
                                                                   (uint)local_568 | 4),
                                       (int)uVar6 != 0)))) &&
                                     ((uVar6 = recovered_10001df5(param_1,uVar12,0x14,
                                                                  (long)&local_568), (int)uVar6 != 0
                                      && ((((uint)local_568 & 0xc4) == 4 &&
                                          (uVar6 = recovered_10001df5(param_1,local_e8,0x14,
                                                                      (long)&local_54),
                                          (int)uVar6 != 0)))))) {
                                    DAT_10005018 = 1;
                                    uVar6 = recovered_10001e72(param_1,((uintptr_t)pf_module_state+0x219eU),0);
                                    if ((int)uVar6 != 0) {
                                      recovered_10001dda((long)&local_628,0xc0);
                                      local_628 = 0xc0;
                                      local_38 = (char *)CONCAT44(PF_PART4(local_38, 4),local_50);
                                      local_624 = (local_50 & 1) * 2 + 0xd;
                                      local_620 = DAT_10005020;
                                      local_61c = 0x800;
                                      for (lVar7 = 0; lVar7 != 6; lVar7 = lVar7 + 1) {
                                        abStack_618[lVar7] = local_5a[lVar7];
                                      }
                                      recovered_10000609(local_5e8,0x40,str_10002ec1);
                                      recovered_10000609(local_5a8,0x40,str_10002efa);
                                      recovered_10000609(local_a28,0x400,&DAT_10002ec0);
                                      recovered_10001b38((long)local_a28,0x400,&DAT_10002f6b);
                                      lVar7 = 0;
                                      do {
                                        if (lVar7 != 0) {
                                          if (lVar7 == 6) goto LAB_1000160e;
                                          recovered_10001b38((long)local_a28,0x400,&DAT_10002f70);
                                        }
                                        recovered_10002c3d((long)local_a28,0x400,
                                                           (uint)local_5a[lVar7],2);
                                        lVar7 = lVar7 + 1;
                                      } while( true );
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_10000c41;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar6 = recovered_10001df5(param_1,local_e8,0x14,(long)local_158);
          if (local_158[0] != 0 && (int)uVar6 != 0) {
            recovered_1000266d(param_1,local_e8,local_158[0] | 0x80);
          }
        }
      }
    }
  }
LAB_10000c41:
  recovered_10002345();
LAB_10000c46:
  return;
LAB_1000160e:
  pcVar9 = str_10002f05;
  if (((ulong)local_38 & 1) == 0) {
    pcVar9 = str_10002f15;
  }
  recovered_10001b38((long)local_a28,0x400,pcVar9);
  recovered_10001ebc((long)local_a28,0x400,(ulong)local_4c);
  sVar1 = *(short *)(param_2 + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(param_2 + 6) & 0xfffe) == 0xb8) {
      local_38 = str_1000303d;
      goto switchD_100016dd_caseD_1041;
    }
LAB_1000178e:
    bVar4 = param_2[8];
LAB_10001792:
    switch((uintptr_t)(bVar4)) {
    case 1:
      local_38 = str_1000308f;
      break;
    case 2:
      local_38 = str_1000307c;
      break;
    case 3:
      local_38 = str_10003069;
      break;
    case 4:
switchD_100017aa_caseD_4:
      local_38 = str_100030a2;
      break;
    default:
switchD_100017aa_caseD_5:
      local_38 = str_10002f83;
      break;
    case 0xc:
switchD_100017aa_caseD_c:
      if (param_2[9] != 3) goto switchD_100017aa_caseD_5;
      local_38 = recovered_10002cd4((uint)param_2[10]);
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(param_2 + 6) == 0x194) {
        local_38 = str_10003034;
        goto switchD_100016dd_caseD_1041;
      }
      goto LAB_1000178e;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(param_2 + 6) == 0x21) {
LAB_10001731:
        local_38 = str_10003062;
        goto switchD_100016dd_caseD_1041;
      }
      goto LAB_1000178e;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(param_2 + 6) == 0x2bad) goto LAB_10001731;
      goto LAB_1000178e;
    }
    if (sVar1 != 0x10ec) {
      if (sVar1 == 0x1234) {
        if (*(short *)(param_2 + 6) != 0x1111) goto LAB_1000178e;
        local_38 = str_10003048;
        goto switchD_100016dd_caseD_1041;
      }
      if (sVar1 != -0x7f7a) {
        if (sVar1 == 0x1b36) {
          if (*(short *)(param_2 + 6) == 0x100) {
            local_38 = str_10003051;
            goto switchD_100016dd_caseD_1041;
          }
        }
        else if (sVar1 == 0x1af4) {
          local_38 = str_10002f8e;
          switch((uintptr_t)(*(undefined2 *)(param_2 + 6))) {
          case 0x1041:
            break;
          case 0x1042:
switchD_100016dd_caseD_1042:
            local_38 = str_10002f9d;
            break;
          case 0x1043:
switchD_100016dd_caseD_1043:
            local_38 = str_10002fc1;
            break;
          case 0x1044:
switchD_100016dd_caseD_1044:
            local_38 = str_10002fe4;
            break;
          case 0x1045:
switchD_100016dd_caseD_1045:
            local_38 = str_10002fae;
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
switchD_100016dd_caseD_1046:
            local_38 = str_10003013;
            break;
          case 0x1048:
switchD_100016dd_caseD_1048:
            local_38 = str_10002fd4;
            break;
          case 0x1050:
            local_38 = str_10002ff3;
            break;
          case 0x1052:
            local_38 = str_10003002;
            break;
          default:
            switch((uintptr_t)(*(undefined2 *)(param_2 + 6))) {
            case 0x1000:
              break;
            case 0x1001:
              goto switchD_100016dd_caseD_1042;
            case 0x1002:
              goto switchD_100016dd_caseD_1045;
            case 0x1003:
              goto switchD_100016dd_caseD_1043;
            case 0x1004:
              goto switchD_100016dd_caseD_1048;
            case 0x1005:
              goto switchD_100016dd_caseD_1044;
            default:
              goto switchD_100016dd_caseD_1046;
            }
          }
          goto switchD_100016dd_caseD_1041;
        }
        goto LAB_1000178e;
      }
      if (*(short *)(param_2 + 6) == 0x100e) {
        local_38 = str_1000301e;
        goto switchD_100016dd_caseD_1041;
      }
      bVar4 = param_2[8];
      if (bVar4 == 0xc) goto switchD_100017aa_caseD_c;
      if (bVar4 != 4) goto LAB_10001792;
      if (param_2[9] == 3) {
        local_38 = str_1000302a;
        goto switchD_100016dd_caseD_1041;
      }
      goto switchD_100017aa_caseD_4;
    }
    if (*(short *)(param_2 + 6) != -0x7fd7) goto LAB_1000178e;
    local_38 = str_10003059;
  }
switchD_100016dd_caseD_1041:
  recovered_10000609((undefined1 *)local_158,0x60,str_10002f27);
  recovered_10001b38((long)local_158,0x60,&DAT_10002f72);
  recovered_10002c3d((long)local_158,0x60,(uint)*param_2,2);
  recovered_10001b38((long)local_158,0x60,&DAT_10002f70);
  recovered_10002c3d((long)local_158,0x60,(uint)param_2[1],2);
  recovered_10001b38((long)local_158,0x60,&DAT_10002f74);
  recovered_10001ebc((long)local_158,0x60,(ulong)param_2[2]);
  recovered_10000609((undefined1 *)&local_568,0x400,&DAT_10002f76);
  recovered_10002c3d((long)&local_568,0x400,(uint)*param_2,2);
  recovered_10001b38((long)&local_568,0x400,&DAT_10002f70);
  recovered_10002c3d((long)&local_568,0x400,(uint)param_2[1],2);
  recovered_10001b38((long)&local_568,0x400,&DAT_10002f74);
  recovered_10001ebc((long)&local_568,0x400,(ulong)param_2[2]);
  recovered_10001b38((long)&local_568,0x400,&DAT_10002f7b);
  recovered_10002c3d((long)&local_568,0x400,(uint)*(ushort *)(param_2 + 4),4);
  recovered_10001b38((long)&local_568,0x400,&DAT_10002f70);
  recovered_10002c3d((long)&local_568,0x400,(uint)*(ushort *)(param_2 + 6),4);
  recovered_10001b38((long)&local_568,0x400,&DAT_10002f7e);
  if (local_a28[0] != '\0') {
    recovered_10001b38((long)&local_568,0x400,&DAT_10002f80);
    recovered_10001b38((long)&local_568,0x400,local_a28);
  }
  if (((((code *)(ulong)(uint)param_1[3] != (code *)0x0) &&
       (iVar5 = (*(code *)(ulong)(uint)param_1[3])(local_158,local_38,&local_568), iVar5 != 0)) &&
      (*param_1 == 0x54584b57)) &&
     (((0xcb < (uint)param_1[2] && ((code *)(ulong)(uint)param_1[0x32] != (code *)0x0)) &&
      (iVar5 = (*(code *)(ulong)(uint)param_1[0x32])
                         (&local_628,recovered_10001f33,recovered_10002101), iVar5 != 0)))) {
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + 1;
    }
    goto LAB_10000c46;
  }
  goto LAB_10000c41;
}

#undef DAT_10002eb0
#undef DAT_10002ec0
#undef DAT_10002f6b
#undef DAT_10002f70
#undef DAT_10002f72
#undef DAT_10002f74
#undef DAT_10002f76
#undef DAT_10002f7b
#undef DAT_10002f7e
#undef DAT_10002f80
#undef DAT_10005000
#undef DAT_10005008
#undef DAT_10005010
#undef DAT_10005011
#undef DAT_10005012
#undef DAT_10005013
#undef DAT_10005014
#undef DAT_10005018
#undef DAT_1000501c
#undef DAT_10005020
#undef DAT_10005024
#undef DAT_10005028
#undef DAT_10005030
#undef DAT_10005034
#undef DAT_10005040
#undef DAT_10005042
#undef DAT_10005050
#undef DAT_10005060
#undef DAT_10005100
#undef DAT_10005200
#undef DAT_10005204
#undef DAT_10005205
#undef DAT_10005400
#undef DAT_1000e500
#undef UNK_10002eb4
#undef UNK_10002eb8
#undef UNK_10002ebc
#undef _DAT_10002eb0
#undef _DAT_10005024
#undef _DAT_10005200
#undef _DAT_1000e500
#undef str_10002ec1
#undef str_10002efa
#undef str_10002f05
#undef str_10002f15
#undef str_10002f27
#undef str_10002f34
#undef str_10002f46
#undef str_10002f58
#undef str_10002f83
#undef str_10002f8e
#undef str_10002f9d
#undef str_10002fae
#undef str_10002fc1
#undef str_10002fd4
#undef str_10002fe4
#undef str_10002ff3
#undef str_10003002
#undef str_10003013
#undef str_1000301e
#undef str_1000302a
#undef str_10003034
#undef str_1000303d
#undef str_10003048
#undef str_10003051
#undef str_10003059
#undef str_10003062
#undef str_10003069
#undef str_1000307c
#undef str_1000308f
#undef str_100030a2
#undef uRam0000000010002eb4
#undef uRam0000000010002eb8
#undef uRam0000000010002ebc
#undef local_a28
#undef local_628
#undef local_624
#undef local_620
#undef local_61c
#undef local_5e8
#undef local_5a8
#undef local_568
#undef local_160
#undef local_158
#undef local_f0
#undef local_e8
#undef local_e0
#undef local_d8
#undef local_d0
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_98
#undef local_94
#undef local_88
#undef local_84
#undef local_80
#undef local_78
#undef local_70
#undef local_68
#undef local_64
#undef local_60
#undef local_5a
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef abStack_618
#undef uStack_9c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b38
 */

void recovered_10001b38(long param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10001b8c(param_1);
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
 * Address: 0x10001b8c
 */

long recovered_10001b8c(long param_1)

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


#define local_40 (*(undefined4 *)(pf_stack_frame + 32))
#define local_3c (*(undefined4 *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 *)(pf_stack_frame + 40))
#define local_34 (*(undefined4 *)(pf_stack_frame + 44))
#define local_50 (*(undefined4 *)(pf_stack_frame + 16))
#define local_4c (*(undefined4 *)(pf_stack_frame + 20))
#define local_48 (*(undefined4 *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bac
 */

undefined4
recovered_10001bac(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    uVar2 = recovered_10001d5e(param_1,uVar5,uVar4,uVar3,0,4,(long)&local_3c);
    if ((((int)uVar2 != 0) && ((short)local_3c != 0)) && ((short)local_3c != -1)) {
      uVar2 = recovered_10001d5e(param_1,uVar5,uVar4,uVar3,8,4,(long)&local_50);
      if ((int)uVar2 != 0) {
        uVar2 = recovered_10001d5e(param_1,uVar5,uVar4,uVar3,4,4,(long)(param_5 + 0x10));
        if ((int)uVar2 == 0) {
          *(undefined4 *)(param_5 + 0x10) = 0;
        }
        uVar2 = recovered_10001d5e(param_1,uVar5,uVar4,uVar3,0xc,4,(long)&local_38);
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
          uVar2 = recovered_10001d5e(param_1,uVar5,uVar4,uVar3,(short)lVar6 + 0x10,4,(long)&local_4c
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

#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_50
#undef local_4c
#undef local_48
#undef local_44

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d5e
 */

undefined8
recovered_10001d5e(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined2 param_5,undefined4 param_6,long param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) && (0x5f < (uint)param_1[2])) {
    if (param_7 != 0 && (code *)(ulong)(uint)param_1[0x17] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10001da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x17])(param_2,param_3,param_4,param_5,param_6,param_7)
      ;
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dab
 */

bool recovered_10001dab(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if ((param_1 != 0) && (*(short *)(param_1 + 4) == 0x1af4)) {
    if (*(short *)(param_1 + 6) == 0x1000) {
      bVar1 = true;
    }
    else {
      bVar1 = *(short *)(param_1 + 6) == 0x1040;
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dda
 */

void recovered_10001dda(long param_1,long param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001df5
 */

undefined8 recovered_10001df5(int *param_1,long param_2,ulong param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0 || param_4 == 0) {
    return 0;
  }
  uVar1 = recovered_100027b0(param_1,(param_3 & 0xffffffff) + param_2,1,param_4);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e20
 */

undefined8 recovered_10001e20(int *param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_4 != (undefined4 *)0x0) {
    uVar1 = recovered_100027b0(param_1,(param_3 & 0xffffffff) + param_2,2,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_4 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e72
 */

undefined8 recovered_10001e72(int *param_1,long param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
    return 0;
  }
  recovered_100026f5(param_1);
  uVar1 = recovered_10002719(param_1,*(long *)(param_2 + 8),0,param_3);
  return uVar1;
}


#define abStack_2b (*(byte (*)[43])(pf_stack_frame + 21))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ebc
 */

void recovered_10001ebc(long param_1,ulong param_2,ulong param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((int)param_3 == 0) {
    recovered_10002c9a(param_1,param_2,0x30);
    return;
  }
  for (uVar2 = 0; (uVar1 = param_3 & 0xffffffff, (int)param_3 != 0 && (uVar2 < 10));
      uVar2 = uVar2 + 1) {
    param_3 = uVar1 / 10;
    abStack_2b[uVar2 + 1] = (byte)(uVar1 % 10) | 0x30;
  }
  while (uVar2 != 0) {
    recovered_10002c9a(param_1,param_2,abStack_2b[uVar2]);
    uVar2 = uVar2 - 1;
  }
  return;
}

#undef abStack_2b

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x215eU)))
#undef DAT_10005018
#define DAT_10005018 (*(int *)(((uintptr_t)pf_module_state + 0x2176U)))
#undef DAT_1000501c
#define DAT_1000501c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10005028
#define DAT_10005028 (*(uint *)(((uintptr_t)pf_module_state + 0x2186U)))
#undef DAT_10005040
#define DAT_10005040 (*(ushort *)(((uintptr_t)pf_module_state + 0x219eU)))
#undef DAT_10005044
#define DAT_10005044 (*(ushort *)(((uintptr_t)pf_module_state + 0x21a2U)))
#undef DAT_10005060
#define DAT_10005060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21beU)))
#undef DAT_10005300
#define DAT_10005300 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x245eU)))
#undef DAT_10005302
#define DAT_10005302 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2460U)))
#undef DAT_10005303
#define DAT_10005303 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2461U)))
#undef DAT_10005400
#define DAT_10005400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f33
 */

ulong recovered_10001f33(long param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;

  recovered_10002d3a();
  uVar7 = 10;
  if (DAT_10005028 != 0) {
    uVar7 = DAT_10005028;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if ((((param_1 != 0) && (DAT_10005018 != 0)) && (DAT_10005000 != (int *)0x0)) &&
     (DAT_10005040 != 0)) {
    recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_10005300,0x84);
    uVar1 = DAT_10005044;
    if (CONCAT11(DAT_10005303,DAT_10005302) != DAT_10005044) {
      if ((ushort)(CONCAT11(DAT_10005303,DAT_10005302) - DAT_10005044) <= DAT_10005040) {
        uVar6 = DAT_10005044 % DAT_10005040;
        uVar2 = recovered_10002d5b((undefined4 *)((ulong)uVar6 * 8 + ((uintptr_t)pf_module_state+0x2462U)));
        uVar3 = recovered_10002d5b((undefined4 *)((ulong)uVar6 * 8 + ((uintptr_t)pf_module_state+0x2466U)));
        DAT_10005044 = uVar1 + 1;
        if (uVar3 < 0x901 && uVar2 < 0x10) {
          uVar4 = uVar3 - uVar7;
          if (uVar7 <= uVar3 && uVar4 != 0) {
            recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_10005400 + (ulong)uVar2 * 0x900,0x900)
            ;
            if (param_3 != (uint *)0x0) {
              *param_3 = uVar4;
            }
            if (uVar4 <= param_2 && uVar4 < 0x801) {
              recovered_10002e78(param_1,(long)(&DAT_10005400 + (ulong)uVar2 * 0x900 + uVar7),uVar4)
              ;
              uVar5 = recovered_10002d88((ushort)uVar2);
              DAT_10005060 = 0;
              return uVar5 & 0xffffffff;
            }
          }
          recovered_10002d88((ushort)uVar2);
          DAT_10005060 = 0;
          return 0;
        }
      }
      recovered_10002345();
    }
  }
  DAT_10005060 = 0;
  return 0;
}

#undef DAT_10005000
#undef DAT_10005018
#undef DAT_1000501c
#undef DAT_10005028
#undef DAT_10005040
#undef DAT_10005044
#undef DAT_10005060
#undef DAT_10005300
#undef DAT_10005302
#undef DAT_10005303
#undef DAT_10005400

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x215eU)))
#undef DAT_10005018
#define DAT_10005018 (*(int *)(((uintptr_t)pf_module_state + 0x2176U)))
#undef DAT_1000501c
#define DAT_1000501c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10005028
#define DAT_10005028 (*(uint *)(((uintptr_t)pf_module_state + 0x2186U)))
#undef DAT_1000502c
#define DAT_1000502c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218aU)))
#undef DAT_10005030
#define DAT_10005030 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x218eU)))
#undef DAT_10005050
#define DAT_10005050 (*(ushort *)(((uintptr_t)pf_module_state + 0x21aeU)))
#undef DAT_10005052
#define DAT_10005052 (*(ushort *)(((uintptr_t)pf_module_state + 0x21b0U)))
#undef DAT_10005054
#define DAT_10005054 (*(ushort *)(((uintptr_t)pf_module_state + 0x21b2U)))
#undef DAT_10005060
#define DAT_10005060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x21beU)))
#undef DAT_1000e400
#define DAT_1000e400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb55eU)))
#undef DAT_1000e408
#define DAT_1000e408 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb566U)))
#undef DAT_1000e409
#define DAT_1000e409 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb567U)))
#undef DAT_1000e40a
#define DAT_1000e40a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb568U)))
#undef DAT_1000e40e
#define DAT_1000e40e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb56cU)))
#undef DAT_1000e500
#define DAT_1000e500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb65eU)))
#undef DAT_1000e502
#define DAT_1000e502 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb660U)))
#undef DAT_1000e503
#define DAT_1000e503 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb661U)))
#undef DAT_1000e504
#define DAT_1000e504 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb662U)))
#undef DAT_1000e600
#define DAT_1000e600 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb75eU)))
#undef DAT_1000e602
#define DAT_1000e602 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb760U)))
#undef DAT_1000e603
#define DAT_1000e603 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb761U)))
#undef DAT_1000e700
#define DAT_1000e700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb85eU)))
#undef _DAT_1000e40a
#define _DAT_1000e40a (*(uint32_t *)(((uintptr_t)pf_module_state + 0xb568U)))
#undef _DAT_1000e40e
#define _DAT_1000e40e (*(uint16_t *)(((uintptr_t)pf_module_state + 0xb56cU)))
#undef _DAT_1000e504
#define _DAT_1000e504 (*(uint16_t *)(((uintptr_t)pf_module_state + 0xb662U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002101
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10002101(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;

  recovered_10002d3a();
  uVar6 = 10;
  if (DAT_10005028 != 0) {
    uVar6 = DAT_10005028;
  }
  if (((((param_1 != 0) && (DAT_10005018 != 0)) && (DAT_10005000 != (int *)0x0)) &&
      ((0xfffff80c < param_2 - 0x801 && (DAT_10005050 != 0)))) &&
     (uVar2 = uVar6 + param_2, uVar2 < 0x80d)) {
    recovered_10001dda(((uintptr_t)pf_module_state+0xb85eU),0x80c);
    recovered_10002e78((long)(&DAT_1000e700 + uVar6),param_1,param_2);
    recovered_1000285d(&DAT_1000e400,DAT_1000502c,DAT_10005030);
    DAT_1000e408 = (undefined1)uVar2;
    DAT_1000e409 = (undefined1)(uVar2 >> 8);
    _DAT_1000e40a = 0;
    _DAT_1000e40e = 0;
    _DAT_1000e504 = 0;
    iVar4 = DAT_10005052 + 1;
    DAT_10005052 = (ushort)iVar4;
    DAT_1000e502 = (undefined1)iVar4;
    DAT_1000e503 = (undefined1)((uint)iVar4 >> 8);
    recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_1000e700,uVar2);
    recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_1000e400,0x10);
    recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_1000e500,6);
    uVar5 = recovered_10001e72(DAT_10005000,((uintptr_t)pf_module_state+0x21aeU),1);
    if ((int)uVar5 != 0) {
      iVar4 = 1000;
      while (bVar7 = iVar4 != 0, iVar4 = iVar4 + -1, bVar7) {
        recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_1000e600,0xc);
        uVar3 = DAT_10005054;
        if (CONCAT11(DAT_1000e603,DAT_1000e602) != DAT_10005054) {
          if ((ushort)(CONCAT11(DAT_1000e603,DAT_1000e602) - DAT_10005054) == 1) {
            lVar1 = (ulong)(DAT_10005054 % DAT_10005050) * 8;
            iVar4 = recovered_10002d5b((undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0xb762U)));
            if ((iVar4 == 0) &&
               (iVar4 = recovered_10002d5b((undefined4 *)(lVar1 + ((uintptr_t)pf_module_state+0xb766U))), iVar4 == 0)) {
              DAT_10005054 = uVar3 + 1;
              DAT_10005060 = 0;
              return 1;
            }
          }
          break;
        }
        recovered_10002737(DAT_10005000,100);
      }
    }
    recovered_10002345();
  }
  DAT_10005060 = 0;
  return 0;
}

#undef DAT_10005000
#undef DAT_10005018
#undef DAT_1000501c
#undef DAT_10005028
#undef DAT_1000502c
#undef DAT_10005030
#undef DAT_10005050
#undef DAT_10005052
#undef DAT_10005054
#undef DAT_10005060
#undef DAT_1000e400
#undef DAT_1000e408
#undef DAT_1000e409
#undef DAT_1000e40a
#undef DAT_1000e40e
#undef DAT_1000e500
#undef DAT_1000e502
#undef DAT_1000e503
#undef DAT_1000e504
#undef DAT_1000e600
#undef DAT_1000e602
#undef DAT_1000e603
#undef DAT_1000e700
#undef _DAT_1000e40a
#undef _DAT_1000e40e
#undef _DAT_1000e504

#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x215eU)))
#undef DAT_10005008
#define DAT_10005008 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x2166U)))
#undef DAT_10005010
#define DAT_10005010 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216eU)))
#undef DAT_10005011
#define DAT_10005011 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216fU)))
#undef DAT_10005012
#define DAT_10005012 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2170U)))
#undef DAT_10005013
#define DAT_10005013 (*(char *)(((uintptr_t)pf_module_state + 0x2171U)))
#undef DAT_10005014
#define DAT_10005014 (*(uint *)(((uintptr_t)pf_module_state + 0x2172U)))
#undef DAT_10005018
#define DAT_10005018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2176U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002345
 */

void recovered_10002345(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  uint uVar2;

  DAT_10005018 = 0;
  if (DAT_10005000 != (int *)0x0) {
    if (DAT_10005008 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = recovered_100025ca(DAT_10005000,DAT_10005008);
      bVar1 = (int)CONCAT71(extraout_var,bVar1) == 0;
    }
    if (DAT_10005013 != '\0') {
      uVar2 = DAT_10005014 & 0xfffffffb;
      if (!bVar1) {
        uVar2 = DAT_10005014;
      }
      recovered_100023c1(DAT_10005000,DAT_10005010,DAT_10005011,DAT_10005012,uVar2 & 0xffff);
      DAT_10005013 = '\0';
    }
  }
  return;
}

#undef DAT_10005000
#undef DAT_10005008
#undef DAT_10005010
#undef DAT_10005011
#undef DAT_10005012
#undef DAT_10005013
#undef DAT_10005014
#undef DAT_10005018

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023c1
 */

undefined8
recovered_100023c1(int *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 100)) ||
     ((code *)(ulong)(uint)param_1[0x18] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100023f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x18])(param_2,param_3,param_4,4,2,param_5);
  return uVar1;
}


#define local_40 (*(int *)(pf_stack_frame + 16))
#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023fb
 */

undefined8
recovered_100023fb(int *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5,
                  ulong *param_6)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = param_5 + param_4;
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
  local_40 = 0;
  if ((param_3 != 0) && ((*(uint *)(param_2 + (ulong)(param_3 - 1) * 4 + 0x14) & 7) == 4)) {
    return 0;
  }
  local_38 = *(uint *)(param_2 + (ulong)param_3 * 4 + 0x14);
  if ((local_38 & 1) != 0 || local_38 == 0) {
    return 0;
  }
  local_34 = param_4;
  recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x10,4,
                     (long)&local_38);
  iVar2 = 0;
  if ((local_38 & 7) == 4) {
    if (4 < param_3) {
      return 0;
    }
    local_40 = *(int *)(param_2 + (ulong)param_3 * 4 + 0x18);
    recovered_10001d5e(param_1,*param_2,param_2[1],param_2[2],(short)param_3 * 4 + 0x14,4,
                       (long)&local_40);
    iVar2 = local_40;
  }
  uVar3 = 0xfffffffc;
  if ((local_38 & 1) == 0) {
    uVar3 = 0xfffffff0;
  }
  uVar3 = uVar3 & local_38;
  if (iVar4 == 0) {
    return 0;
  }
  if (uVar3 == 0 && iVar2 == 0) {
    return 0;
  }
  *param_6 = 0;
  local_3c = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (((uint)param_1[2] < 0xbc) || ((code *)(ulong)(uint)param_1[0x2e] == (code *)0x0)) {
      if (((0x67 < (uint)param_1[2] && iVar2 == 0) &&
          ((code *)(ulong)(uint)param_1[0x19] != (code *)0x0)) &&
         (iVar4 = (*(code *)(ulong)(uint)param_1[0x19])(uVar3,0,iVar4,&local_3c), iVar4 != 0)) {
        uVar1 = (ulong)local_3c;
        goto LAB_100025a7;
      }
    }
    else {
      iVar4 = (*(code *)(ulong)(uint)param_1[0x2e])(uVar3,iVar2,iVar4);
      if (iVar4 != 0) {
        uVar1 = *param_6;
LAB_100025a7:
        *param_6 = local_34 + uVar1;
        return 1;
      }
    }
  }
  return 0;
}

#undef local_40
#undef local_3c
#undef local_38
#undef local_34

#define local_34 (*(int *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100025ca
 */

bool recovered_100025ca(int *param_1,long param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  uint uVar2;
  bool bVar3;

  local_34 = 0xff;
  bVar3 = false;
  if (param_2 != 0 && param_1 != (int *)0x0) {
    bVar3 = false;
    uVar1 = recovered_1000266d(param_1,param_2,0);
    if ((int)uVar1 != 0) {
      recovered_100026f5(param_1);
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        uVar1 = recovered_10001df5(param_1,param_2,0x14,(long)&local_34);
        if (((int)uVar1 != 0) && (local_34 == 0)) break;
        recovered_10002737(param_1,10);
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000266d
 */

undefined8 recovered_1000266d(int *param_1,long param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000275d(param_1,param_2 + 0x14,1,param_3);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002689
 */

undefined8 recovered_10002689(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000275d(param_1,(param_3 & 0xffffffff) + param_2,4,param_4);
  return uVar1;
}


#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026a7
 */

undefined8 recovered_100026a7(int *param_1,long param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;

  local_1c = 0;
  uVar2 = 0;
  if (param_2 != 0 && param_3 != (undefined4 *)0x0) {
    uVar1 = recovered_100027b0(param_1,param_2 + 4,4,(long)&local_1c);
    if ((int)uVar1 != 0) {
      *param_3 = local_1c;
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f5
 */

void recovered_100026f5(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x7c)) ||
     ((code *)(ulong)(uint)param_1[0x1e] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1e])();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002719
 */

undefined8 recovered_10002719(int *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = recovered_1000275d(param_1,(param_3 & 0xffffffff) + param_2,2,param_4);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002737
 */

void recovered_10002737(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10002759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000275d
 */

undefined8 recovered_1000275d(int *param_1,ulong param_2,undefined4 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if ((0xc3 < (uint)param_1[2]) && ((code *)(ulong)(uint)param_1[0x30] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1000278a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x30])(param_2,param_3,param_4);
      return uVar1;
    }
    if (((param_2 >> 0x20 == 0) && (0x6f < (uint)param_1[2])) &&
       ((code *)(ulong)(uint)param_1[0x1b] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x100027aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(ulong)(uint)param_1[0x1b])(param_2 & 0xffffffff,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100027b0
 */

undefined8 recovered_100027b0(int *param_1,ulong param_2,undefined4 param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 != (int *)0x0) && (*param_1 == 0x54584b57)) {
    if (0xbf < (uint)param_1[2]) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x2f] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100027ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x2f])(param_2,param_3,param_4);
        return uVar1;
      }
    }
    if ((param_2 >> 0x20 == 0) && (0x6b < (uint)param_1[2])) {
      if (param_4 != 0 && (code *)(ulong)(uint)param_1[0x1a] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000281b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(ulong)(uint)param_1[0x1a])(param_2 & 0xffffffff,param_3,param_4);
        return uVar1;
      }
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002821
 */

undefined8
recovered_10002821(int *param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x74)) ||
     (((param_5 == 0 || (param_3 == 0)) || (param_1[0x1c] == 0)))) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000285b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x1c])(param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000285d
 */

void recovered_1000285d(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

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
 * Address: 0x10002891
 */

void recovered_10002891(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x78)) ||
     ((code *)(ulong)(uint)param_1[0x1d] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100028b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0x1d])(param_2,param_3,param_4);
  return;
}


#undef DAT_1000501c
#define DAT_1000501c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x217aU)))
#define local_68 (*(uint *)(pf_stack_frame + 24))
#define local_60 (*(uint *)(pf_stack_frame + 32))
#define local_5c (*(int *)(pf_stack_frame + 36))
#define local_58 (*(int *)(pf_stack_frame + 40))
#define local_54 (*(undefined4 *)(pf_stack_frame + 44))
#define local_50 (*(undefined4 *)(pf_stack_frame + 48))
#define local_4c (*(undefined4 *)(pf_stack_frame + 52))
#define local_48 (*(undefined4 *)(pf_stack_frame + 56))
#define local_44 (*(uint *)(pf_stack_frame + 60))
#define local_40 (*(uint *)(pf_stack_frame + 64))
#define local_3c (*(uint *)(pf_stack_frame + 68))
#define local_38 (*(uint *)(pf_stack_frame + 72))
#define local_34 (*(uint *)(pf_stack_frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028bc
 */

undefined8
recovered_100028bc(int *param_1,long *param_2,undefined4 param_3,uint param_4,long param_5,
                  undefined4 param_6,long param_7,undefined4 param_8,long param_9,
                  undefined4 param_10,undefined2 *param_11)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;

  local_58 = 0;
  local_40 = 0;
  local_54 = 0;
  local_3c = 0;
  local_50 = 0;
  local_38 = 0;
  local_4c = 0;
  uVar6 = 0;
  if (param_11 != (undefined2 *)0x0) {
    local_44 = 0;
    local_60 = 0;
    local_5c = 0;
    if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
      local_48 = param_6;
      local_34 = param_4;
      recovered_10002719(param_1,*param_2,0x16,param_3);
      uVar4 = recovered_10001e20(param_1,*param_2,0x18,&local_44);
      if ((((int)uVar4 != 0) &&
          (((local_44 != 0 &&
            (uVar3 = local_44 - (local_44 >> 1 & 0x55555555),
            uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
            ((uVar3 >> 4) + uVar3 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)) &&
           (uVar4 = recovered_10001e20(param_1,*param_2,0x1c,&local_5c), (int)uVar4 != 0)))) &&
         (local_5c == 0)) {
        local_68 = local_44 & 0xffff;
        uVar4 = recovered_10001e20(param_1,*param_2,0x1e,&local_60);
        uVar6 = 0;
        if ((((int)uVar4 == 0) || (uVar1 = param_2[1], uVar1 == 0)) ||
           (((ulong)*(uint *)((long)param_2 + 0x34) == 0 || ((ulong)*(uint *)(param_2 + 7) < 2)))) {
          lVar7 = 0;
        }
        else {
          uVar5 = (ulong)local_60 * (ulong)*(uint *)((long)param_2 + 0x34);
          lVar7 = uVar1 + uVar5;
          if (CARRY8(uVar1,uVar5)) {
            lVar7 = 0;
          }
          if ((ulong)*(uint *)(param_2 + 7) - 2 < uVar5) {
            lVar7 = 0;
          }
        }
        if ((((lVar7 != 0) && (local_34 <= local_68)) &&
            ((uVar4 = recovered_10002821(param_1,DAT_1000501c,param_5,local_48,(long)&local_40,
                                         &local_54), (int)uVar4 != 0 &&
             (((uVar4 = recovered_10002821(param_1,DAT_1000501c,param_7,param_8,(long)&local_3c,
                                           &local_50), (int)uVar4 != 0 &&
               (uVar4 = recovered_10002821(param_1,DAT_1000501c,param_9,param_10,(long)&local_38,
                                           &local_4c), (int)uVar4 != 0)) && ((local_40 & 0xf) == 0))
             )))) && ((((((local_3c & 1) == 0 && ((local_38 & 3) == 0)) &&
                        (uVar4 = recovered_10002719(param_1,*param_2,0x16,param_3), (int)uVar4 != 0)
                        ) && ((uVar4 = recovered_10002719(param_1,*param_2,0x18,local_34),
                              (int)uVar4 != 0 &&
                              (bVar2 = recovered_10002bf3(param_1,*param_2,0x20,local_40,local_54),
                              (int)CONCAT71(extraout_var,bVar2) != 0)))) &&
                      ((bVar2 = recovered_10002bf3(param_1,*param_2,0x28,local_3c,local_50),
                       (int)CONCAT71(extraout_var_00,bVar2) != 0 &&
                       (bVar2 = recovered_10002bf3(param_1,*param_2,0x30,local_38,local_4c),
                       (int)CONCAT71(extraout_var_01,bVar2) != 0)))))) {
          recovered_10002891(param_1,DAT_1000501c,param_5,local_48);
          recovered_10002891(param_1,DAT_1000501c,param_7,param_8);
          recovered_10002891(param_1,DAT_1000501c,param_9,param_10);
          uVar4 = recovered_10002719(param_1,*param_2,0x1c,1);
          if ((((int)uVar4 != 0) &&
              (uVar4 = recovered_10001e20(param_1,*param_2,0x1c,&local_58), (int)uVar4 != 0)) &&
             (local_58 != 0)) {
            *param_11 = (short)local_34;
            param_11[1] = *(undefined2 *)(param_7 + 2);
            param_11[2] = *(undefined2 *)(param_9 + 2);
            *(long *)(param_11 + 4) = lVar7;
            uVar6 = 1;
          }
        }
      }
    }
  }
  return uVar6;
}

#undef DAT_1000501c
#undef local_68
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bf3
 */

bool recovered_10002bf3(int *param_1,long param_2,ulong param_3,undefined4 param_4,
                       undefined4 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10002689(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10002689(param_1,param_2,(ulong)((int)param_3 + 4),param_5);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3d
 */

void recovered_10002c3d(long param_1,ulong param_2,uint param_3,int param_4)

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
    recovered_10002c9a(param_1,param_2,cVar4);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9a
 */

void recovered_10002c9a(long param_1,ulong param_2,undefined1 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10001b8c(param_1);
  if ((param_1 != 0) && (lVar1 + 1U < param_2)) {
    *(undefined1 *)(param_1 + lVar1) = param_3;
    *(undefined1 *)(param_1 + 1 + lVar1) = 0;
  }
  return;
}


#undef DAT_100030b8
#define DAT_100030b8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x216U)))
#undef DAT_100030bd
#define DAT_100030bd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x21bU)))
#undef DAT_100030c2
#define DAT_100030c2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x220U)))
#undef DAT_100030c7
#define DAT_100030c7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x225U)))
#undef str_100030cc
#define str_100030cc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22aU)))
#undef str_100030d7
#define str_100030d7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x235U)))
#undef str_100030e0
#define str_100030e0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cd4
 */

char * recovered_10002cd4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  if (param_1 == 0) {
    pcVar1 = &DAT_100030b8;
  }
  else if (param_1 == 0xfe) {
    pcVar1 = str_100030d7;
  }
  else if (param_1 == 0x20) {
    pcVar1 = &DAT_100030c2;
  }
  else if (param_1 == 0x30) {
    pcVar1 = &DAT_100030c7;
  }
  else if (param_1 == 0x80) {
    pcVar1 = str_100030cc;
  }
  else if (param_1 == 0x10) {
    pcVar1 = &DAT_100030bd;
  }
  else {
    pcVar1 = str_100030e0;
  }
  return pcVar1;
}

#undef DAT_100030b8
#undef DAT_100030bd
#undef DAT_100030c2
#undef DAT_100030c7
#undef str_100030cc
#undef str_100030d7
#undef str_100030e0

#undef DAT_10005060
#define DAT_10005060 (*(int *)(((uintptr_t)pf_module_state + 0x21beU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d3a
 */

/* WARNING: Removing unreachable block (ram,0x10002d57) */

void recovered_10002d3a(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10005060;
  { __typeof__(DAT_10005060) pf_atomic_old = __atomic_exchange_n(&(DAT_10005060),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10005060

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d5b
 */

undefined4 recovered_10002d5b(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


#undef DAT_10005000
#define DAT_10005000 (*(int * *)(((uintptr_t)pf_module_state + 0x215eU)))
#undef DAT_1000501c
#define DAT_1000501c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x217aU)))
#undef DAT_10005040
#define DAT_10005040 (*(ushort *)(((uintptr_t)pf_module_state + 0x219eU)))
#undef DAT_10005042
#define DAT_10005042 (*(ushort *)(((uintptr_t)pf_module_state + 0x21a0U)))
#undef DAT_10005200
#define DAT_10005200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x235eU)))
#undef DAT_10005202
#define DAT_10005202 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2360U)))
#undef DAT_10005203
#define DAT_10005203 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2361U)))
#undef DAT_10005204
#define DAT_10005204 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2362U)))
#undef DAT_10005400
#define DAT_10005400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x255eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d88
 */

undefined8 recovered_10002d88(ushort param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;

  uVar3 = 0;
  if ((DAT_10005000 != (int *)0x0) && (DAT_10005040 != 0)) {
    recovered_10001dda((long)(&DAT_10005400 + (ulong)param_1 * 0x900),0x900);
    uVar3 = 0;
    *(ushort *)(&DAT_10005204 + (ulong)(DAT_10005042 % DAT_10005040) * 2) = param_1;
    iVar2 = DAT_10005042 + 1;
    DAT_10005042 = (ushort)iVar2;
    DAT_10005202 = (undefined1)iVar2;
    DAT_10005203 = (undefined1)((uint)iVar2 >> 8);
    recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_10005400 + (ulong)param_1 * 0x900,0x900);
    recovered_10002891(DAT_10005000,DAT_1000501c,&DAT_10005200,0x24);
    uVar1 = recovered_10001e72(DAT_10005000,((uintptr_t)pf_module_state+0x219eU),0);
    if ((int)uVar1 == 0) {
      recovered_10002345();
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_10005000
#undef DAT_1000501c
#undef DAT_10005040
#undef DAT_10005042
#undef DAT_10005200
#undef DAT_10005202
#undef DAT_10005203
#undef DAT_10005204
#undef DAT_10005400

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e78
 */

void recovered_10002e78(long param_1,long param_2,uint param_3)

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
