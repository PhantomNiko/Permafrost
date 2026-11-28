/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10004000
#define DAT_10004000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x278U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010fc
 */

void * recovered_100010fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10004000;
}

#undef DAT_10004000

#undef DAT_10003d88
#define DAT_10003d88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef str_10003d89
#define str_10003d89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#define local_414 (*(undefined1 (*)[1044])(pf_stack_frame + 140))
#define local_488 (*(int *)(pf_stack_frame + 24))
#define local_484 (*(undefined * *)(pf_stack_frame + 28))
#define local_480 (*(uint *)(pf_stack_frame + 32))
#define local_47c (*(uint *)(pf_stack_frame + 36))
#define local_478 (*(char * *)(pf_stack_frame + 40))
#define local_474 (*(uint *)(pf_stack_frame + 44))
#define local_470 (*(uint *)(pf_stack_frame + 48))
#define local_46c (*(undefined1 (*)[1132])(pf_stack_frame + 52))
#define local_460 (*(char *)(pf_stack_frame + 64))
#define local_440 (*(undefined1 (*)[1088])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001112
 */

uint recovered_10001112(void *api)

{
  unsigned char pf_stack_frame[1216] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  local_488 = 0;
  uVar3 = 0;
  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((int)api + 4) == 1100000))
     && (0xf7 < *(uint *)((int)api + 8))) {
    local_484 = &DAT_10003d88;
    recovered_100012cf(&DAT_10003d88);
    if (*(code **)((int)api + 0xc) != (code *)0x0) {
      local_478 = str_10003d89;
      iVar1 = (**(code **)((int)api + 0xc))(local_484,str_10003d89,local_414);
      if (((iVar1 != 0) && (*(int *)api == 0x54584b57)) &&
         ((0x5f < *(uint *)((int)api + 8) && (*(int *)((int)api + 0x5c) != 0)))) {
        uVar3 = 0;
        while (uVar3 != 8) {
          local_47c = uVar3 & 0xff;
          uVar2 = 0;
          local_474 = uVar3;
          while (uVar2 != 0x20) {
            local_480 = uVar2;
            uVar3 = recovered_100029ef(api,local_47c,uVar2 & 0xff,0,local_46c);
            if (uVar3 != 0) {
              recovered_100012ee(&local_488);
              if (local_460 < '\0') {
                local_470 = local_480 & 0xff;
                for (iVar1 = -7; iVar1 != 0; iVar1 = iVar1 + 1) {
                  uVar3 = recovered_100029ef(api,local_47c,local_470,iVar1 + 8U & 0xff,local_440);
                  if (uVar3 != 0) {
                    recovered_100012ee(&local_488);
                  }
                }
              }
            }
            uVar2 = local_480 + 1;
          }
          uVar3 = local_474 + 1;
        }
        if (local_488 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          if (*(code **)((int)api + 0xc) != (code *)0x0) {
            (**(code **)((int)api + 0xc))(local_484,local_478,local_414);
          }
        }
      }
    }
  }
  return uVar3;
}

#undef DAT_10003d88
#undef str_10003d89
#undef local_414
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_460
#undef local_440

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012cf
 */

void recovered_100012cf(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *in_ECX;

  if (in_ECX != (undefined1 *)0x0) {
    *in_ECX = 0;
    recovered_10002988(param_1);
  }
  return;
}


#undef DAT_10003d88
#define DAT_10003d88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x0U)))
#undef DAT_10003e33
#define DAT_10003e33 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xabU)))
#undef DAT_10003e38
#define DAT_10003e38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb0U)))
#undef DAT_10003e3a
#define DAT_10003e3a (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb2U)))
#undef DAT_10003e3c
#define DAT_10003e3c (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb4U)))
#undef DAT_10003e3e
#define DAT_10003e3e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xb6U)))
#undef DAT_10003e43
#define DAT_10003e43 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbbU)))
#undef DAT_10003e46
#define DAT_10003e46 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xbeU)))
#undef DAT_10003e48
#define DAT_10003e48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc0U)))
#undef DAT_10004100
#define DAT_10004100 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x378U)))
#undef DAT_10004104
#define DAT_10004104 (*(uint *)(((uintptr_t)pf_module_state + 0x37cU)))
#undef DAT_10004108
#define DAT_10004108 (*(byte *)(((uintptr_t)pf_module_state + 0x380U)))
#undef DAT_10004109
#define DAT_10004109 (*(byte *)(((uintptr_t)pf_module_state + 0x381U)))
#undef DAT_1000410a
#define DAT_1000410a (*(byte *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000410b
#define DAT_1000410b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_1000410c
#define DAT_1000410c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_10004110
#define DAT_10004110 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x388U)))
#undef DAT_10004114
#define DAT_10004114 (*(uint *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10004118
#define DAT_10004118 (*(uint *)(((uintptr_t)pf_module_state + 0x390U)))
#undef DAT_1000411c
#define DAT_1000411c (*(uint *)(((uintptr_t)pf_module_state + 0x394U)))
#undef DAT_10004120
#define DAT_10004120 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x398U)))
#undef DAT_1000412c
#define DAT_1000412c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a4U)))
#undef DAT_10004134
#define DAT_10004134 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3acU)))
#undef DAT_10004136
#define DAT_10004136 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_10004140
#define DAT_10004140 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3b8U)))
#undef DAT_1000414c
#define DAT_1000414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_10004200
#define DAT_10004200 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x478U)))
#undef DAT_10004300
#define DAT_10004300 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x578U)))
#undef DAT_10004305
#define DAT_10004305 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57dU)))
#undef DAT_10004400
#define DAT_10004400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x678U)))
#undef DAT_10004500
#define DAT_10004500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
#undef DAT_1000d500
#define DAT_1000d500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9778U)))
#undef DAT_1000d600
#define DAT_1000d600 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9878U)))
#undef DAT_1000d700
#define DAT_1000d700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9978U)))
#undef DAT_1000d800
#define DAT_1000d800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a78U)))
#undef str_10003d89
#define str_10003d89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1U)))
#undef str_10003dc2
#define str_10003dc2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3aU)))
#undef str_10003dcd
#define str_10003dcd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x45U)))
#undef str_10003ddd
#define str_10003ddd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x55U)))
#undef str_10003def
#define str_10003def (*(char (*)[1])(((uintptr_t)pf_module_state + 0x67U)))
#undef str_10003dfc
#define str_10003dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x74U)))
#undef str_10003e0e
#define str_10003e0e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_10003e20
#define str_10003e20 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98U)))
#undef str_10003e4b
#define str_10003e4b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc3U)))
#undef str_10003e56
#define str_10003e56 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xceU)))
#undef str_10003e65
#define str_10003e65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xddU)))
#undef str_10003e76
#define str_10003e76 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeeU)))
#undef str_10003e89
#define str_10003e89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x101U)))
#undef str_10003e9c
#define str_10003e9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114U)))
#undef str_10003eac
#define str_10003eac (*(char (*)[1])(((uintptr_t)pf_module_state + 0x124U)))
#undef str_10003ebb
#define str_10003ebb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x133U)))
#undef str_10003eca
#define str_10003eca (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142U)))
#undef str_10003edb
#define str_10003edb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x153U)))
#undef str_10003ee6
#define str_10003ee6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15eU)))
#undef str_10003ef2
#define str_10003ef2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16aU)))
#undef str_10003efc
#define str_10003efc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
#undef str_10003f05
#define str_10003f05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17dU)))
#undef str_10003f10
#define str_10003f10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x188U)))
#undef str_10003f19
#define str_10003f19 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x191U)))
#undef str_10003f21
#define str_10003f21 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x199U)))
#undef str_10003f2a
#define str_10003f2a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a2U)))
#undef str_10003f31
#define str_10003f31 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a9U)))
#undef str_10003f44
#define str_10003f44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_10003f57
#define str_10003f57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1cfU)))
#undef str_10003f6a
#define str_10003f6a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e2U)))
#define local_9ec (*(char * *)(pf_stack_frame + 20))
#define local_9dc (*(undefined1 * *)(pf_stack_frame + 36))
#define local_9d8 (*(uint *)(pf_stack_frame + 40))
#define abStack_4c4 (*(byte (*)[1220])(pf_stack_frame + 1340))
#define local_9d4 (*(uint *)(pf_stack_frame + 44))
#define local_9d0 (*(uint *)(pf_stack_frame + 48))
#define local_9cc (*(uint *)(pf_stack_frame + 52))
#define local_9c8 (*(int *)(pf_stack_frame + 56))
#define local_9c4 (*(char * *)(pf_stack_frame + 60))
#define local_9c0 (*(uint *)(pf_stack_frame + 64))
#define local_9bc (*(uint *)(pf_stack_frame + 68))
#define local_9b8 (*(undefined4 * *)(pf_stack_frame + 72))
#define local_9b4 (*(undefined4 *)(pf_stack_frame + 76))
#define local_9ae (*(byte (*)[2478])(pf_stack_frame + 82))
#define local_9a8 (*(uint *)(pf_stack_frame + 88))
#define local_9a4 (*(uint *)(pf_stack_frame + 92))
#define local_9a0 (*(uint *)(pf_stack_frame + 96))
#define local_99c (*(uint *)(pf_stack_frame + 100))
#define local_998 (*(uint *)(pf_stack_frame + 104))
#define local_994 (*(uint *)(pf_stack_frame + 108))
#define local_990 (*(uint *)(pf_stack_frame + 112))
#define local_98c (*(uint *)(pf_stack_frame + 116))
#define local_988 (*(uint *)(pf_stack_frame + 120))
#define local_984 (*(uint *)(pf_stack_frame + 124))
#define local_980 (*(uint *)(pf_stack_frame + 128))
#define local_97c (*(uint *)(pf_stack_frame + 132))
#define local_978 (*(uint *)(pf_stack_frame + 136))
#define local_974 (*(int *)(pf_stack_frame + 140))
#define local_970 (*(uint *)(pf_stack_frame + 144))
#define local_96c (*(uint *)(pf_stack_frame + 148))
#define local_968 (*(uint *)(pf_stack_frame + 152))
#define local_964 (*(uint *)(pf_stack_frame + 156))
#define local_960 (*(undefined1 (*)[2400])(pf_stack_frame + 160))
#define local_95c (*(uint (*)[599])(pf_stack_frame + 164))
#define local_950 (*(undefined4 *)(pf_stack_frame + 176))
#define local_94c (*(undefined4 *)(pf_stack_frame + 180))
#define local_948 (*(uint *)(pf_stack_frame + 184))
#define local_944 (*(int *)(pf_stack_frame + 188))
#define local_940 (*(undefined1 (*)[2368])(pf_stack_frame + 192))
#define local_93c (*(undefined2 * *)(pf_stack_frame + 196))
#define local_938 (*(undefined * *)(pf_stack_frame + 200))
#define local_934 (*(uint (*)[589])(pf_stack_frame + 204))
#define local_8d4 (*(uint (*)[565])(pf_stack_frame + 300))
#define local_4d4 (*(undefined4 *)(pf_stack_frame + 1324))
#define local_4d0 (*(int *)(pf_stack_frame + 1328))
#define local_4cc (*(uint *)(pf_stack_frame + 1332))
#define local_4c8 (*(undefined4 *)(pf_stack_frame + 1336))
#define local_414 (*(char (*)[1044])(pf_stack_frame + 1516))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ee
 */

void recovered_100012ee(int *param_1)

{
  unsigned char pf_stack_frame[2592] __attribute__((aligned(16))) = {0};

  short sVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined3 extraout_var_01 = 0;
  int iVar8;
  byte *pbVar9;
  int *in_ECX;
  byte *in_EDX;
  uint uVar10;
  undefined *data;
  undefined *data_00;

  bVar2 = recovered_10002bd0();
  if (CONCAT31(extraout_var,bVar2) == 0) {
    if (in_EDX == (byte *)0x0) {
      return;
    }
    if (*(short *)(in_EDX + 4) != 0x1af4) {
      return;
    }
    if (*(short *)(in_EDX + 6) != 0x1041) {
      return;
    }
  }
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return;
  }
  local_9c4 = &DAT_10003d88;
  recovered_100012cf(&DAT_10003d88);
  local_9b4 = 0;
  local_9bc = 0;
  local_9c0 = 0;
  bVar2 = recovered_10002bd0();
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    if (in_EDX == (byte *)0x0) {
      return;
    }
    if (*(short *)(in_EDX + 4) != 0x1af4) {
      return;
    }
    if (*(short *)(in_EDX + 6) != 0x1041) {
      return;
    }
  }
  recovered_10002c02(local_9ae,6);
  recovered_10002c02(&local_9a0,100);
  recovered_10002c02(&DAT_10004100,0x4c);
  DAT_1000414c = 0;
  DAT_10004108 = *in_EDX;
  DAT_10004109 = in_EDX[1];
  DAT_1000410a = in_EDX[2];
  DAT_10004100 = in_ECX;
  uVar4 = recovered_10002b6c(in_ECX,(uint)DAT_10004108,(uint)DAT_10004109,(uint)DAT_1000410a,4,2,
                             &local_9b4);
  if (uVar4 == 0) {
    return;
  }
  PF_PART2(DAT_1000410c, 0) = (undefined2)local_9b4;
  DAT_1000410b = 1;
  local_8d4[0] = 0;
  pcVar7 = str_10003dfc;
  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     (in_ECX[0x18] == 0)) {
LAB_10001966:
    recovered_10002988(pcVar7);
  }
  else {
    uVar4 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,local_8d4);
    if (uVar4 == 0) {
      pcVar7 = str_10003e0e;
      goto LAB_10001966;
    }
    uVar4 = 0;
    for (iVar5 = -0x18; iVar5 != 0; iVar5 = iVar5 + 4) {
      uVar10 = uVar4 | 1;
      uVar6 = uVar4 | 2;
      if (*(uint *)(in_EDX + iVar5 + 0x2c) == 0) {
        uVar6 = uVar4;
      }
      uVar4 = uVar6;
      if ((*(uint *)(in_EDX + iVar5 + 0x2c) & 1) != 0) {
        uVar4 = uVar10;
      }
    }
    iVar5 = recovered_100029ce();
    uVar6 = uVar4 | 4;
    if (iVar5 == 0) {
      uVar6 = uVar4;
    }
    if (in_EDX[8] == 6) {
      if (in_EDX[9] != 0) {
        uVar6 = uVar6 | 2;
      }
    }
    local_934[0] = local_8d4[0] | uVar6;
    iVar5 = recovered_1000317c(in_EDX[1],in_EDX[2],local_934[0]);
    if (iVar5 == 0) {
      pcVar7 = str_10003e20;
      goto LAB_10001966;
    }
    recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],4,2,local_934);
    if ((uVar6 & ~local_934[0]) == 0) {
      local_8d4[0] = 0;
      recovered_10002c02(&local_9a0,100);
      uVar4 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],0x34,1,
                                 local_8d4);
      if (uVar4 != 0) {
        uVar4 = 0;
        while ((uVar4 < 0x20 && (local_8d4[0] - 0x40 < 0xb0))) {
          local_934[0] = 0;
          local_9a4 = 0;
          local_9c8 = 0;
          local_9d8 = 0;
          local_9cc = 0;
          local_9d0 = 0;
          uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                     local_8d4[0] & 0xffff,1,local_934);
          if ((uVar6 == 0) ||
             (uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                         local_8d4[0] + 1 & 0xffff,1,&local_9a4), uVar6 == 0))
          break;
          if ((((local_934[0] == 9) &&
               (uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                           local_8d4[0] + 3 & 0xffff,1,&local_9c8), uVar6 != 0)) &&
              (uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_8d4[0] + 4 & 0xffff,1,&local_9d8), uVar6 != 0)) &&
             ((uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_8d4[0] + 8 & 0xffff,4,&local_9cc), uVar6 != 0 &&
              (uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                          local_8d4[0] + 0xc & 0xffff,4,&local_9d0), uVar6 != 0))))
          {
            local_9d4 = 0;
            local_974 = local_974 + 1;
            if ((!(0x37 < local_9d0 && local_9c8 == 1)) ||
               (iVar5 = recovered_100031c9(local_9d8,local_9cc,local_9d0,(int *)&local_9d4),
               iVar5 == 0)) {
              if ((local_9d0 < 2 || local_9c8 != 2) ||
                 (iVar5 = recovered_100031c9(local_9d8,local_9cc,local_9d0,(int *)&local_9d4),
                 iVar5 == 0)) {
                if ((local_9c8 == 3) &&
                   (iVar5 = recovered_100031c9(local_9d8,local_9cc,local_9d0,(int *)&local_9d4),
                   iVar5 != 0)) {
                  local_998 = local_9d4;
                  local_984 = local_9d8;
                }
                else if ((local_9c8 == 4) &&
                        (iVar5 = recovered_100031c9(local_9d8,local_9cc,local_9d0,(int *)&local_9d4)
                        , iVar5 != 0)) {
                  local_994 = local_9d4;
                  local_990 = local_9d0;
                  local_980 = local_9d8;
                }
              }
              else {
                local_9a8 = 0;
                local_99c = local_9d4;
                local_988 = local_9d8;
                uVar6 = recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                                           local_8d4[0] + 0x10 & 0xffff,4,&local_9a8);
                if (local_9a8 == 0 || uVar6 == 0) {
                  local_99c = 0;
                }
                else {
                  local_97c = local_9a8;
                  local_978 = local_9d0;
                }
              }
            }
            else {
              local_9a0 = local_9d4;
              local_98c = local_9d8;
            }
          }
          if ((local_9a4 == 0) || (local_9a4 == local_8d4[0])) break;
          uVar4 = uVar4 + 1;
          local_8d4[0] = local_9a4;
        }
        if (local_9a0 != 0) {
          DAT_10004104 = local_9a0;
          local_8d4[0] = 0;
          local_934[0] = 0;
          recovered_10002c1b(0x14,(int)local_960);
          local_95c[1] = 1;
          bVar2 = recovered_1000338f();
          if (CONCAT31(extraout_var_01,bVar2) != 0) {
            local_95c[1] = 2;
            iVar5 = recovered_1000341f();
            if (((iVar5 != 0) && (iVar5 = recovered_10002c1b(0x14,(int)local_934), iVar5 != 0)) &&
               ((local_934[0] & 0xc1) == 1)) {
              local_95c[1] = 3;
              iVar5 = recovered_1000341f();
              if (((iVar5 != 0) && (iVar5 = recovered_10002c1b(0x14,(int)local_934), iVar5 != 0)) &&
                 ((local_934[0] & 0xc3) == 3)) {
                local_95c[1] = 4;
                iVar5 = recovered_10003446();
                if (((iVar5 != 0) && (iVar5 = recovered_1000346d(&local_970), iVar5 != 0)) &&
                   ((iVar5 = recovered_10003446(), iVar5 != 0 &&
                    ((iVar5 = recovered_1000346d(&local_96c), iVar5 != 0 && ((local_96c & 1) != 0)))
                    ))) {
                  local_968 = local_970 & 0x10028;
                  local_964 = local_96c & 3;
                  local_95c[1] = 5;
                  iVar5 = recovered_10003446();
                  if ((iVar5 != 0) &&
                     (((iVar5 = recovered_10003446(), iVar5 != 0 &&
                       (iVar5 = recovered_10003446(), iVar5 != 0)) &&
                      (iVar5 = recovered_10003446(), iVar5 != 0)))) {
                    recovered_100034bb(in_ECX);
                    local_934[0] = 0xb;
                    local_95c[1] = 6;
                    iVar5 = recovered_1000341f();
                    if (((iVar5 != 0) &&
                        (iVar5 = recovered_10002c1b(0x14,(int)local_95c), iVar5 != 0)) &&
                       ((local_95c[0] & 200) == 8)) {
                      local_95c[1] = 7;
                      iVar5 = recovered_10002c51(0x12,local_95c + 2);
                      if (((iVar5 != 0) &&
                          (iVar5 = recovered_10002c1b(0x15,(int)local_940), iVar5 != 0)) &&
                         ((uVar4 = recovered_100034e3(in_ECX,local_9a0,0x16,0), uVar4 != 0 &&
                          ((iVar5 = recovered_10002c51(0x18,&local_950), iVar5 != 0 &&
                           (iVar5 = recovered_10002c51(0x1c,&local_94c), iVar5 != 0)))))) {
                        iVar5 = recovered_10002c51(0x1e,local_8d4);
                        if ((iVar5 != 0) &&
                           ((((local_948 = local_8d4[0], local_99c != 0 && (local_97c != 0)) &&
                             (1 < local_978)) &&
                            ((int)((ulonglong)local_97c * (ulonglong)local_8d4[0] >> 0x20) == 0))))
                        {
                          uVar4 = local_97c * local_8d4[0];
                          if (!CARRY4(local_99c,uVar4) && uVar4 <= local_978 - 2) {
                            local_944 = local_99c + uVar4;
                          }
                        }
                        local_95c[1] = 8;
                        DAT_10004114 = (uint)((local_964 & 2) == 0) << 0x1e | (uint)in_EDX[2] << 8 |
                                       (uint)*in_EDX << 0x10 | (uint)in_EDX[1] << 0xb | 0x80000000;
                        if ((((local_968 & 0x20) != 0) && (local_994 != 0)) && (5 < local_990)) {
                          uVar4 = 0;
                          for (iVar5 = 0; iVar5 != 6; iVar5 = iVar5 + 1) {
                            local_8d4[0] = 0;
                            iVar8 = recovered_10002c1b(iVar5,(int)local_8d4);
                            if (iVar8 == 0) goto LAB_1000197e;
                            local_9ae[iVar5] = (byte)local_8d4[0];
                            uVar4 = uVar4 | local_8d4[0] & 0xff;
                          }
                          if ((uVar4 != 0) && ((local_9ae[0] & 1) == 0)) {
                            if ((local_968 >> 0x10 & 1) == 0) {
                              local_9bc = 1;
                            }
                            else if ((local_990 < 8) ||
                                    (iVar5 = recovered_10002c51(6,&local_9bc), iVar5 == 0))
                            goto LAB_1000197e;
                            if ((((local_968 & 8) == 0) ||
                                ((0xb < local_990 &&
                                 (iVar5 = recovered_10002c51(10,&local_9c0), iVar5 != 0)))) &&
                               (1 < local_95c[2])) {
                              if (local_9c0 - 0x7f3 < 0xfffff80e) {
                                local_9c0 = 0x5dc;
                              }
                              pbVar9 = &DAT_1000412c;
                              DAT_10004118 = local_9c0;
                              DAT_1000411c = local_9bc;
                              DAT_10004120 = 0xc;
                              for (iVar5 = -6; iVar5 != 0; iVar5 = iVar5 + 1) {
                                *pbVar9 = local_9ae[iVar5 + 6];
                                pbVar9 = pbVar9 + 1;
                              }
                              data_00 = &DAT_10004200;
                              recovered_10002c02(&DAT_10004200,0x100);
                              local_9b8 = &DAT_10004300;
                              recovered_10002c02(&DAT_10004300,0x24);
                              local_938 = &DAT_10004400;
                              recovered_10002c02(&DAT_10004400,0x84);
                              data = &DAT_10004500;
                              recovered_10002c02(&DAT_10004500,0x9000);
                              local_9dc = &DAT_10004305;
                              for (local_9ec = (char *)0x0; local_9ec != (char *)0x10;
                                  local_9ec = (char *)((int)local_9ec + 1)) {
                                local_8d4[0] = 0;
                                local_934[0] = 0;
                                iVar5 = recovered_100035e5((int)data,0x900,(int)local_8d4);
                                if (iVar5 == 0) goto LAB_1000197e;
                                recovered_10003631(data_00,local_8d4[0],local_934[0]);
                                *(undefined4 *)(data_00 + 8) = 0x900;
                                *(undefined4 *)(data_00 + 0xc) = 2;
                                local_9dc[-1] = (char)local_9ec;
                                *local_9dc = 0;
                                recovered_1000366c(in_ECX,DAT_10004114,data,0x900);
                                local_9dc = local_9dc + 2;
                                data_00 = data_00 + 0x10;
                                data = data + 0x900;
                              }
                              DAT_10004300 = 0x100000;
                              local_93c = &DAT_10004134;
                              iVar5 = recovered_1000369e(0,0x10,((uintptr_t)pf_module_state+0x478U),0x100,(int)local_9b8,0x24
                                                         ,(int)local_938,0x84,&DAT_10004134);
                              if (iVar5 != 0) {
                                DAT_10004136 = 0x10;
                                recovered_10002c02(&DAT_1000d500,0x10);
                                recovered_10002c02(&DAT_1000d600,6);
                                local_9b8 = (undefined4 *)&DAT_1000d700;
                                recovered_10002c02(&DAT_1000d700,0xc);
                                recovered_10002c02(&DAT_1000d800,0x80c);
                                iVar5 = recovered_100035e5(((uintptr_t)pf_module_state+0x9a78U),0x80c,((uintptr_t)pf_module_state+0x39cU));
                                if (iVar5 != 0) {
                                  DAT_1000d600 = 0;
                                  iVar5 = recovered_1000369e(1,1,((uintptr_t)pf_module_state+0x9778U),0x10,((uintptr_t)pf_module_state+0x9878U),6,
                                                             (int)local_9b8,0xc,&DAT_10004140);
                                  if ((((iVar5 != 0) && (local_8d4[0] = 0, local_9a0 != 0)) &&
                                      (iVar5 = recovered_10002c1b(0x14,(int)local_8d4), iVar5 != 0))
                                     && ((((local_8d4[0] & 200) == 8 &&
                                          (iVar5 = recovered_1000341f(), iVar5 != 0)) &&
                                         ((iVar5 = recovered_10002c1b(0x14,(int)local_8d4),
                                          iVar5 != 0 &&
                                          (((local_8d4[0] & 0xc4) == 4 &&
                                           (iVar5 = recovered_10002c1b(0x14,(int)&local_9b4),
                                           iVar5 != 0)))))))) {
                                    DAT_10004110 = 1;
                                    uVar4 = recovered_10002c9f(in_ECX,local_93c,0);
                                    if (uVar4 != 0) {
                                      recovered_10002c02(&local_4d4,0xc0);
                                      uVar4 = local_9bc;
                                      local_4d4 = 0xc0;
                                      local_4d0 = (local_9bc & 1) * 2 + 0xd;
                                      local_4cc = DAT_10004118;
                                      local_4c8 = 0x800;
                                      for (iVar5 = -6; iVar5 != 0; iVar5 = iVar5 + 1) {
                                        abStack_4c4[iVar5 + 6] = local_9ae[iVar5 + 6];
                                      }
                                      recovered_100012cf(str_10003d89);
                                      recovered_100012cf(str_10003dc2);
                                      recovered_100012cf(local_9c4);
                                      recovered_10002988(&DAT_10003e33);
                                      iVar5 = 0;
                                      do {
                                        if (iVar5 != 0) {
                                          if (iVar5 == 6) goto LAB_10002378;
                                          recovered_10002988(&DAT_10003e38);
                                        }
                                        recovered_10003a84((uint)local_9ae[iVar5],2);
                                        iVar5 = iVar5 + 1;
                                      } while( true );
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_1000197e;
                      }
                    }
                  }
                }
              }
            }
          }
          iVar5 = recovered_10002c1b(0x14,(int)local_934);
          if (local_934[0] != 0 && iVar5 != 0) {
            recovered_1000341f();
          }
        }
      }
    }
  }
LAB_1000197e:
  recovered_100030ed();
LAB_10001983:
  return;
LAB_10002378:
  pcVar7 = str_10003dcd;
  if ((uVar4 & 1) == 0) {
    pcVar7 = str_10003ddd;
  }
  recovered_10002988(pcVar7);
  recovered_10002ce0(local_9c0);
  sVar1 = *(short *)(in_EDX + 4);
  if (sVar1 == 0x1013) {
    if ((*(ushort *)(in_EDX + 6) & 0xfffe) == 0xb8) {
      local_9ec = str_10003f05;
      goto switchD_10002458_caseD_1041;
    }
LAB_10002543:
    bVar3 = in_EDX[8];
LAB_1000254a:
    local_9ec = str_10003f31;
    switch((uintptr_t)(bVar3)) {
    case 1:
      local_9ec = str_10003f57;
      break;
    case 2:
      local_9ec = str_10003f44;
      break;
    case 3:
      break;
    case 4:
switchD_1000256a_caseD_4:
      local_9ec = str_10003f6a;
      break;
    default:
switchD_1000256a_caseD_5:
      local_9ec = str_10003e4b;
      break;
    case 0xc:
switchD_1000256a_caseD_c:
      if (in_EDX[9] != 3) goto switchD_1000256a_caseD_5;
      local_9ec = recovered_10003b04();
    }
  }
  else {
    if (sVar1 == 0x1033) {
      if (*(short *)(in_EDX + 6) == 0x194) {
        local_9ec = str_10003efc;
        goto switchD_10002458_caseD_1041;
      }
      goto LAB_10002543;
    }
    if (sVar1 == 0x106b) {
      if (*(short *)(in_EDX + 6) == 0x21) {
LAB_100024c8:
        local_9ec = str_10003f2a;
        goto switchD_10002458_caseD_1041;
      }
      goto LAB_10002543;
    }
    if (sVar1 == 0x108e) {
      if (*(short *)(in_EDX + 6) == 0x2bad) goto LAB_100024c8;
      goto LAB_10002543;
    }
    if (sVar1 != 0x10ec) {
      if (sVar1 == 0x1234) {
        if (*(short *)(in_EDX + 6) != 0x1111) goto LAB_10002543;
        local_9ec = str_10003f10;
        goto switchD_10002458_caseD_1041;
      }
      if (sVar1 != -0x7f7a) {
        if (sVar1 == 0x1b36) {
          if (*(short *)(in_EDX + 6) == 0x100) {
            local_9ec = str_10003f19;
            goto switchD_10002458_caseD_1041;
          }
        }
        else if (sVar1 == 0x1af4) {
          local_9ec = str_10003e56;
          switch((uintptr_t)(*(undefined2 *)(in_EDX + 6))) {
          case 0x1041:
            break;
          case 0x1042:
switchD_10002458_caseD_1042:
            local_9ec = str_10003e65;
            break;
          case 0x1043:
switchD_10002458_caseD_1043:
            local_9ec = str_10003e89;
            break;
          case 0x1044:
switchD_10002458_caseD_1044:
            local_9ec = str_10003eac;
            break;
          case 0x1045:
switchD_10002458_caseD_1045:
            local_9ec = str_10003e76;
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
switchD_10002458_caseD_1046:
            local_9ec = str_10003edb;
            break;
          case 0x1048:
switchD_10002458_caseD_1048:
            local_9ec = str_10003e9c;
            break;
          case 0x1050:
            local_9ec = str_10003ebb;
            break;
          case 0x1052:
            local_9ec = str_10003eca;
            break;
          default:
            switch((uintptr_t)(*(undefined2 *)(in_EDX + 6))) {
            case 0x1000:
              break;
            case 0x1001:
              goto switchD_10002458_caseD_1042;
            case 0x1002:
              goto switchD_10002458_caseD_1045;
            case 0x1003:
              goto switchD_10002458_caseD_1043;
            case 0x1004:
              goto switchD_10002458_caseD_1048;
            case 0x1005:
              goto switchD_10002458_caseD_1044;
            default:
              goto switchD_10002458_caseD_1046;
            }
          }
          goto switchD_10002458_caseD_1041;
        }
        goto LAB_10002543;
      }
      if (*(short *)(in_EDX + 6) == 0x100e) {
        local_9ec = str_10003ee6;
        goto switchD_10002458_caseD_1041;
      }
      bVar3 = in_EDX[8];
      if (bVar3 == 0xc) goto switchD_1000256a_caseD_c;
      if (bVar3 != 4) goto LAB_1000254a;
      if (in_EDX[9] == 3) {
        local_9ec = str_10003ef2;
        goto switchD_10002458_caseD_1041;
      }
      goto switchD_1000256a_caseD_4;
    }
    if (*(short *)(in_EDX + 6) != -0x7fd7) goto LAB_10002543;
    local_9ec = str_10003f21;
  }
switchD_10002458_caseD_1041:
  recovered_100012cf(str_10003def);
  recovered_10002988(&DAT_10003e3a);
  recovered_10003a84((uint)*in_EDX,2);
  local_9c4 = &DAT_10003e38;
  recovered_10002988(&DAT_10003e38);
  recovered_10003a84((uint)in_EDX[1],2);
  recovered_10002988(&DAT_10003e3c);
  recovered_10002ce0((uint)in_EDX[2]);
  recovered_100012cf(&DAT_10003e3e);
  recovered_10003a84((uint)*in_EDX,2);
  recovered_10002988(local_9c4);
  recovered_10003a84((uint)in_EDX[1],2);
  recovered_10002988(&DAT_10003e3c);
  recovered_10002ce0((uint)in_EDX[2]);
  recovered_10002988(&DAT_10003e43);
  recovered_10003a84((uint)*(ushort *)(in_EDX + 4),4);
  recovered_10002988(local_9c4);
  recovered_10003a84((uint)*(ushort *)(in_EDX + 6),4);
  recovered_10002988(&DAT_10003e46);
  if (local_414[0] != '\0') {
    recovered_10002988(&DAT_10003e48);
    recovered_10002988(local_414);
  }
  if (((((code *)in_ECX[3] != (code *)0x0) &&
       (iVar5 = (*(code *)in_ECX[3])(local_934,local_9ec,local_8d4), iVar5 != 0)) &&
      (*in_ECX == 0x54584b57)) &&
     (((0xcb < (uint)in_ECX[2] && ((code *)in_ECX[0x32] != (code *)0x0)) &&
      (iVar5 = (*(code *)in_ECX[0x32])(&local_4d4,recovered_10002d47,recovered_10002ed7), iVar5 != 0
      )))) {
    if (param_1 != (int *)0x0) {
      *param_1 = *param_1 + 1;
    }
    goto LAB_10001983;
  }
  goto LAB_1000197e;
}

#undef DAT_10003d88
#undef DAT_10003e33
#undef DAT_10003e38
#undef DAT_10003e3a
#undef DAT_10003e3c
#undef DAT_10003e3e
#undef DAT_10003e43
#undef DAT_10003e46
#undef DAT_10003e48
#undef DAT_10004100
#undef DAT_10004104
#undef DAT_10004108
#undef DAT_10004109
#undef DAT_1000410a
#undef DAT_1000410b
#undef DAT_1000410c
#undef DAT_10004110
#undef DAT_10004114
#undef DAT_10004118
#undef DAT_1000411c
#undef DAT_10004120
#undef DAT_1000412c
#undef DAT_10004134
#undef DAT_10004136
#undef DAT_10004140
#undef DAT_1000414c
#undef DAT_10004200
#undef DAT_10004300
#undef DAT_10004305
#undef DAT_10004400
#undef DAT_10004500
#undef DAT_1000d500
#undef DAT_1000d600
#undef DAT_1000d700
#undef DAT_1000d800
#undef str_10003d89
#undef str_10003dc2
#undef str_10003dcd
#undef str_10003ddd
#undef str_10003def
#undef str_10003dfc
#undef str_10003e0e
#undef str_10003e20
#undef str_10003e4b
#undef str_10003e56
#undef str_10003e65
#undef str_10003e76
#undef str_10003e89
#undef str_10003e9c
#undef str_10003eac
#undef str_10003ebb
#undef str_10003eca
#undef str_10003edb
#undef str_10003ee6
#undef str_10003ef2
#undef str_10003efc
#undef str_10003f05
#undef str_10003f10
#undef str_10003f19
#undef str_10003f21
#undef str_10003f2a
#undef str_10003f31
#undef str_10003f44
#undef str_10003f57
#undef str_10003f6a
#undef local_9ec
#undef local_9dc
#undef local_9d8
#undef abStack_4c4
#undef local_9d4
#undef local_9d0
#undef local_9cc
#undef local_9c8
#undef local_9c4
#undef local_9c0
#undef local_9bc
#undef local_9b8
#undef local_9b4
#undef local_9ae
#undef local_9a8
#undef local_9a4
#undef local_9a0
#undef local_99c
#undef local_998
#undef local_994
#undef local_990
#undef local_98c
#undef local_988
#undef local_984
#undef local_980
#undef local_97c
#undef local_978
#undef local_974
#undef local_970
#undef local_96c
#undef local_968
#undef local_964
#undef local_960
#undef local_95c
#undef local_950
#undef local_94c
#undef local_948
#undef local_944
#undef local_940
#undef local_93c
#undef local_938
#undef local_934
#undef local_8d4
#undef local_4d4
#undef local_4d0
#undef local_4cc
#undef local_4c8
#undef local_414

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002988
 */

void recovered_10002988(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int in_ECX;
  uint in_EDX;

  uVar1 = recovered_100029ce();
  if (param_1 != (char *)0x0 && in_ECX != 0) {
    while( true ) {
      uVar1 = uVar1 + 1;
      if ((*param_1 == '\0') || (in_EDX <= uVar1)) break;
      *(char *)(in_ECX + -1 + uVar1) = *param_1;
      param_1 = param_1 + 1;
    }
    *(undefined1 *)(in_ECX + -1 + uVar1) = 0;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029ce
 */

int recovered_100029ce(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  int in_ECX;
  int iVar3;

  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = -1;
    do {
      iVar2 = iVar3 + 1;
      pcVar1 = (char *)(in_ECX + 1 + iVar3);
      iVar3 = iVar2;
    } while (*pcVar1 != '\0');
  }
  return iVar2;
}


#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(int * *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029ef
 */

uint recovered_100029ef(int *api,uint bus,uint slot,uint function,void *out)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint bus_00;
  uint slot_00;
  int iVar4;
  uint function_00;

  local_30 = 0;
  local_24 = 0;
  local_34 = 0;
  uVar1 = 0;
  if (out != (void *)0x0) {
    function_00 = function & 0xff;
    slot_00 = slot & 0xff;
    bus_00 = bus & 0xff;
    local_2c = bus;
    uVar1 = recovered_10002b6c(api,bus_00,slot_00,function_00,0,4,&local_30);
    if (((uVar1 == 0) || ((local_30 & 0xffff) == 0)) || ((local_30 & 0xffff) == 0xffff)) {
      uVar1 = 0;
    }
    else {
      uVar2 = recovered_10002b6c(api,bus_00,slot_00,function_00,8,4,&local_24);
      uVar1 = 0;
      if (uVar2 != 0) {
        local_20 = (undefined4 *)((int)out + 0x10);
        uVar1 = recovered_10002b6c(api,bus_00,slot_00,function_00,4,4,local_20);
        if (uVar1 == 0) {
          *local_20 = 0;
        }
        uVar1 = recovered_10002b6c(api,bus_00,slot_00,function_00,0xc,4,&local_34);
        if (uVar1 == 0) {
          local_34 = 0;
          PF_PART1(local_34, 2) = 0;
        }
        else {
        }
        *(char *)out = (char)local_2c;
        *(undefined1 *)((int)out + 1) = (undefined1)slot;
        *(undefined1 *)((int)out + 2) = (undefined1)function;
        *(uint *)((int)out + 4) = local_30;
        *(ushort *)((int)out + 10) = (ushort)local_24 << 8 | (ushort)local_24 >> 8;
        *(char *)((int)out + 9) = (char)((uint)local_24 >> 0x10);
        *(char *)((int)out + 8) = (char)((uint)local_24 >> 0x18);
        *(undefined1 *)((int)out + 0xc) = PF_PART1(local_34, 2);
        local_1c = slot_00;
        local_18 = api;
        for (iVar4 = -0x18; iVar4 != 0; iVar4 = iVar4 + 4) {
          local_28 = 0;
          uVar1 = recovered_10002b6c(local_18,bus_00,local_1c,function_00,iVar4 + 0x28U & 0xffff,4,
                                     &local_28);
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = local_28;
          }
          *(undefined4 *)((int)out + iVar4 + 0x2c) = uVar3;
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b6c
 */

uint recovered_10002b6c(int *api,uint bus,uint slot,uint function,uint offset,uint width,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x60)) ||
     (out == (void *)0x0 || (code *)api[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)api[0x17])
                    (bus & 0xff,slot & 0xff,(undefined1)function,offset & 0xffff,width,out);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bd0
 */

bool recovered_10002bd0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int in_ECX;
  bool bVar1;

  bVar1 = false;
  if ((in_ECX != 0) && (*(short *)(in_ECX + 4) == 0x1af4)) {
    if (*(short *)(in_ECX + 6) == 0x1000) {
      bVar1 = true;
    }
    else {
      bVar1 = *(short *)(in_ECX + 6) == 0x1040;
    }
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c02
 */

void recovered_10002c02(void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (data != (void *)0x0) {
    while (bVar1 = size != 0, size = size - 1, bVar1) {
      *(undefined1 *)data = 0;
      data = (void *)((int)data + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c1b
 */

undefined4 recovered_10002c1b(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int in_EDX;

  if (in_EDX == 0 || param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_1000357f(1,param_2);
  }
  return uVar1;
}


#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c51
 */

undefined4 recovered_10002c51(undefined4 param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_2 != (undefined4 *)0x0) {
    iVar1 = recovered_1000357f(2,(int)local_14);
    if (iVar1 != 0) {
      *param_2 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c9f
 */

uint recovered_10002c9f(int *api,void *queue,uint index)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((queue == (void *)0x0) || (*(int *)((int)queue + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    recovered_100034bb(api);
    uVar1 = recovered_100034e3(api,*(uint *)((int)queue + 8),0,index);
  }
  return uVar1;
}


#define abStack_1f (*(byte (*)[31])(pf_stack_frame + 17))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce0
 */

void recovered_10002ce0(uint param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == 0) {
    recovered_10003ad6(0x30);
  }
  else {
    for (uVar1 = 0; (param_1 != 0 && (uVar1 < 10)); uVar1 = uVar1 + 1) {
      abStack_1f[uVar1 + 1] = (byte)(param_1 % 10) | 0x30;
      param_1 = param_1 / 10;
    }
    while (uVar1 != 0) {
      recovered_10003ad6(abStack_1f[uVar1]);
      uVar1 = uVar1 - 1;
    }
  }
  return;
}

#undef abStack_1f

#undef DAT_10004100
#define DAT_10004100 (*(int * *)(((uintptr_t)pf_module_state + 0x378U)))
#undef DAT_10004110
#define DAT_10004110 (*(int *)(((uintptr_t)pf_module_state + 0x388U)))
#undef DAT_10004114
#define DAT_10004114 (*(uint *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10004120
#define DAT_10004120 (*(uint *)(((uintptr_t)pf_module_state + 0x398U)))
#undef DAT_10004134
#define DAT_10004134 (*(ushort *)(((uintptr_t)pf_module_state + 0x3acU)))
#undef DAT_10004138
#define DAT_10004138 (*(ushort *)(((uintptr_t)pf_module_state + 0x3b0U)))
#undef DAT_1000414c
#define DAT_1000414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_10004400
#define DAT_10004400 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x678U)))
#undef DAT_10004402
#define DAT_10004402 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x67aU)))
#undef DAT_10004500
#define DAT_10004500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
#undef _DAT_10004402
#define _DAT_10004402 (*(ushort *)(((uintptr_t)pf_module_state + 0x67aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d47
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002d47(int param_1,uint param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  recovered_10003b6d();
  uVar5 = 10;
  if (DAT_10004120 != 0) {
    uVar5 = DAT_10004120;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    DAT_1000414c = 0;
    return 0;
  }
  if (DAT_10004110 == 0) {
    DAT_1000414c = 0;
    return 0;
  }
  if (DAT_10004100 == (int *)0x0) {
    DAT_1000414c = 0;
    return 0;
  }
  if (DAT_10004134 == 0) {
    DAT_1000414c = 0;
    return 0;
  }
  recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_10004400,0x84);
  uVar1 = DAT_10004138;
  if (_DAT_10004402 != DAT_10004138) {
    if ((ushort)(_DAT_10004402 - DAT_10004138) <= DAT_10004134) {
      uVar3 = (uint)DAT_10004134;
      uVar4 = (uint)DAT_10004138;
      uVar2 = recovered_10003b98((void *)((uVar4 % uVar3) * 8 + ((uintptr_t)pf_module_state+0x67cU)));
      uVar3 = recovered_10003b98((void *)((uVar4 % uVar3) * 8 + ((uintptr_t)pf_module_state+0x680U)));
      DAT_10004138 = uVar1 + 1;
      if (uVar3 < 0x901 && uVar2 < 0x10) {
        uVar4 = uVar3 - uVar5;
        if (uVar5 <= uVar3 && uVar4 != 0) {
          recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_10004500 + uVar2 * 0x900,0x900);
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar4;
          }
          if (uVar4 <= param_2 && uVar4 < 0x801) {
            recovered_10003c9d((void *)param_1,&DAT_10004500 + uVar2 * 0x900 + uVar5,uVar4);
            uVar5 = recovered_10003bca(uVar2 & 0xffff);
            DAT_1000414c = 0;
            return uVar5;
          }
        }
        recovered_10003bca(uVar2 & 0xffff);
        DAT_1000414c = 0;
        return 0;
      }
    }
    recovered_100030ed();
  }
  DAT_1000414c = 0;
  return 0;
}

#undef DAT_10004100
#undef DAT_10004110
#undef DAT_10004114
#undef DAT_10004120
#undef DAT_10004134
#undef DAT_10004138
#undef DAT_1000414c
#undef DAT_10004400
#undef DAT_10004402
#undef DAT_10004500
#undef _DAT_10004402

#undef DAT_10004100
#define DAT_10004100 (*(int * *)(((uintptr_t)pf_module_state + 0x378U)))
#undef DAT_10004110
#define DAT_10004110 (*(int *)(((uintptr_t)pf_module_state + 0x388U)))
#undef DAT_10004114
#define DAT_10004114 (*(uint *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10004120
#define DAT_10004120 (*(int *)(((uintptr_t)pf_module_state + 0x398U)))
#undef DAT_10004124
#define DAT_10004124 (*(uint *)(((uintptr_t)pf_module_state + 0x39cU)))
#undef DAT_10004128
#define DAT_10004128 (*(uint *)(((uintptr_t)pf_module_state + 0x3a0U)))
#undef DAT_10004140
#define DAT_10004140 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3b8U)))
#undef DAT_10004142
#define DAT_10004142 (*(ushort *)(((uintptr_t)pf_module_state + 0x3baU)))
#undef DAT_10004144
#define DAT_10004144 (*(ushort *)(((uintptr_t)pf_module_state + 0x3bcU)))
#undef DAT_1000414c
#define DAT_1000414c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_1000d500
#define DAT_1000d500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9778U)))
#undef DAT_1000d508
#define DAT_1000d508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9780U)))
#undef DAT_1000d509
#define DAT_1000d509 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9781U)))
#undef DAT_1000d50a
#define DAT_1000d50a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9782U)))
#undef DAT_1000d50e
#define DAT_1000d50e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x9786U)))
#undef DAT_1000d600
#define DAT_1000d600 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9878U)))
#undef DAT_1000d604
#define DAT_1000d604 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x987cU)))
#undef DAT_1000d700
#define DAT_1000d700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9978U)))
#undef DAT_1000d702
#define DAT_1000d702 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x997aU)))
#undef DAT_1000d800
#define DAT_1000d800 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9a78U)))
#undef _DAT_1000d702
#define _DAT_1000d702 (*(ushort *)(((uintptr_t)pf_module_state + 0x997aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10002ed7(int param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  recovered_10003b6d();
  iVar2 = 10;
  if (DAT_10004120 != 0) {
    iVar2 = DAT_10004120;
  }
  if (((((param_1 != 0) && (DAT_10004110 != 0)) && (DAT_10004100 != (int *)0x0)) &&
      ((0xfffff80c < param_2 - 0x801U && (DAT_10004140 != 0)))) &&
     (uVar3 = param_2 + iVar2, uVar3 < 0x80d)) {
    recovered_10002c02(&DAT_1000d800,0x80c);
    recovered_10003c9d(&DAT_1000d800 + iVar2,(void *)param_1,param_2);
    recovered_10003631(&DAT_1000d500,DAT_10004124,DAT_10004128);
    DAT_1000d508 = (undefined1)uVar3;
    DAT_1000d509 = (undefined1)(uVar3 >> 8);
    DAT_1000d50a = 0;
    DAT_1000d50e = 0;
    DAT_1000d604 = 0;
    iVar2 = DAT_10004142 + 1;
    DAT_10004142 = (ushort)iVar2;
    PF_PART1(DAT_1000d600, 2) = (undefined1)iVar2;
    PF_PART1(DAT_1000d600, 3) = (undefined1)((uint)iVar2 >> 8);
    recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_1000d800,uVar3);
    recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_1000d500,0x10);
    recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_1000d600,6);
    uVar3 = recovered_10002c9f(DAT_10004100,&DAT_10004140,1);
    if (uVar3 != 0) {
      iVar2 = 1000;
      while (bVar4 = iVar2 != 0, iVar2 = iVar2 + -1, bVar4) {
        recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_1000d700,0xc);
        uVar1 = DAT_10004144;
        if (_DAT_1000d702 != DAT_10004144) {
          if ((ushort)(_DAT_1000d702 - DAT_10004144) == 1) {
            iVar2 = ((uint)DAT_10004144 % (uint)DAT_10004140) * 8;
            uVar3 = recovered_10003b98((void *)(iVar2 + ((uintptr_t)pf_module_state+0x997cU)));
            if ((uVar3 == 0) &&
               (uVar3 = recovered_10003b98((void *)(iVar2 + ((uintptr_t)pf_module_state+0x9980U))), uVar3 == 0)) {
              DAT_10004144 = uVar1 + 1;
              DAT_1000414c = 0;
              return 1;
            }
          }
          break;
        }
        recovered_1000350a(DAT_10004100,100);
      }
    }
    recovered_100030ed();
  }
  DAT_1000414c = 0;
  return 0;
}

#undef DAT_10004100
#undef DAT_10004110
#undef DAT_10004114
#undef DAT_10004120
#undef DAT_10004124
#undef DAT_10004128
#undef DAT_10004140
#undef DAT_10004142
#undef DAT_10004144
#undef DAT_1000414c
#undef DAT_1000d500
#undef DAT_1000d508
#undef DAT_1000d509
#undef DAT_1000d50a
#undef DAT_1000d50e
#undef DAT_1000d600
#undef DAT_1000d604
#undef DAT_1000d700
#undef DAT_1000d702
#undef DAT_1000d800
#undef _DAT_1000d702

#undef DAT_10004100
#define DAT_10004100 (*(int *)(((uintptr_t)pf_module_state + 0x378U)))
#undef DAT_10004104
#define DAT_10004104 (*(int *)(((uintptr_t)pf_module_state + 0x37cU)))
#undef DAT_10004109
#define DAT_10004109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x381U)))
#undef DAT_1000410a
#define DAT_1000410a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x382U)))
#undef DAT_1000410b
#define DAT_1000410b (*(char *)(((uintptr_t)pf_module_state + 0x383U)))
#undef DAT_1000410c
#define DAT_1000410c (*(uint *)(((uintptr_t)pf_module_state + 0x384U)))
#undef DAT_10004110
#define DAT_10004110 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x388U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030ed
 */

void recovered_100030ed(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;

  DAT_10004110 = 0;
  if (DAT_10004100 != 0) {
    if (DAT_10004104 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = recovered_1000338f();
      bVar1 = CONCAT31(extraout_var,bVar1) == 0;
    }
    if (DAT_1000410b != '\0') {
      uVar2 = DAT_1000410c & 0xfffffffb;
      if (!bVar1) {
        uVar2 = DAT_1000410c;
      }
      recovered_1000317c(DAT_10004109,DAT_1000410a,uVar2 & 0xffff);
      DAT_1000410b = '\0';
    }
  }
  return;
}

#undef DAT_10004100
#undef DAT_10004104
#undef DAT_10004109
#undef DAT_1000410a
#undef DAT_1000410b
#undef DAT_1000410c
#undef DAT_10004110

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000317c
 */

undefined4 recovered_1000317c(undefined1 param_1,undefined1 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  undefined1 in_DL;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 100)) ||
     ((code *)in_ECX[0x18] == (code *)0x0)) {
    return 0;
  }
  uVar1 = (*(code *)in_ECX[0x18])(in_DL,param_1,param_2,4,2,param_3);
  return uVar1;
}


#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_24 (*(int *)(pf_stack_frame + 28))
#define local_20 (*(int *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
#define local_18 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031c9
 */

undefined4 recovered_100031c9(uint param_1,uint param_2,uint param_3,int *param_4)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int iVar2;
  byte *in_EDX;
  int iVar3;

  iVar3 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (5 < param_1) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    return 0;
  }
  local_24 = 0;
  if (((param_1 == 0) || ((*(uint *)(in_EDX + param_1 * 4 + 0x10) & 7) != 4)) &&
     (local_28 = *(uint *)(in_EDX + param_1 * 4 + 0x14), (local_28 & 1) == 0 && local_28 != 0)) {
    local_18 = (uint)in_EDX[2];
    local_1c = param_1 * 4 + 0x10 & 0xffff;
    recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],local_18,local_1c,4,&local_28);
    iVar2 = 0;
    if ((local_28 & 7) == 4) {
      if (4 < param_1) {
        return 0;
      }
      local_24 = *(int *)(in_EDX + param_1 * 4 + 0x18);
      recovered_10002b6c(in_ECX,(uint)*in_EDX,(uint)in_EDX[1],(uint)in_EDX[2],
                         param_1 * 4 + 0x14 & 0xffff,4,&local_24);
      iVar2 = local_24;
    }
    uVar1 = 0xfffffffc;
    if ((local_28 & 1) == 0) {
      uVar1 = 0xfffffff0;
    }
    uVar1 = uVar1 & local_28;
    if ((iVar3 != 0) && (uVar1 != 0 || iVar2 != 0)) {
      *param_4 = 0;
      local_20 = 0;
      if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
        if (((uint)in_ECX[2] < 0xbc) || ((code *)in_ECX[0x2e] == (code *)0x0)) {
          if ((0x67 < (uint)in_ECX[2] && iVar2 == 0) &&
             (((code *)in_ECX[0x19] != (code *)0x0 &&
              (iVar3 = (*(code *)in_ECX[0x19])(uVar1,0,iVar3,&local_20), iVar3 != 0))))
          goto LAB_10003382;
        }
        else {
          iVar3 = (*(code *)in_ECX[0x2e])(uVar1,iVar2,iVar3,param_4);
          if (iVar3 != 0) {
            local_20 = *param_4;
LAB_10003382:
            *param_4 = local_20 + param_2;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#define local_18 (*(int (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000338f
 */

bool recovered_1000338f(void)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *in_ECX;
  int in_EDX;
  uint uVar2;
  bool bVar3;

  local_18[0] = 0xff;
  bVar3 = false;
  if (in_EDX != 0 && in_ECX != (int *)0x0) {
    iVar1 = recovered_1000341f();
    if (iVar1 != 0) {
      recovered_100034bb(in_ECX);
      for (uVar2 = 0; uVar2 != 1000; uVar2 = uVar2 + 1) {
        iVar1 = recovered_10002c1b(0x14,(int)local_18);
        if ((iVar1 != 0) && (local_18[0] == 0)) break;
        recovered_1000350a(in_ECX,10);
      }
      bVar3 = uVar2 < 1000;
    }
  }
  return bVar3;
}

#undef local_18

#define in_stack_00000004 (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000341f
 */

uint recovered_1000341f(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10003535(in_ECX,in_EDX + 0x14,1,in_stack_00000004);
  return uVar1;
}

#undef in_stack_00000004

#define in_stack_00000004 (*(int *)(pf_stack_frame + 36))
#define in_stack_00000008 (*(uint *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003446
 */

uint recovered_10003446(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int *in_ECX;
  int in_EDX;

  if (in_EDX == 0) {
    return 0;
  }
  uVar1 = recovered_10003535(in_ECX,in_EDX + in_stack_00000004,4,in_stack_00000008);
  return uVar1;
}

#undef in_stack_00000004
#undef in_stack_00000008

#define local_14 (*(undefined4 (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000346d
 */

undefined4 recovered_1000346d(undefined4 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_EDX;
  undefined4 uVar2;

  local_14[0] = 0;
  uVar2 = 0;
  if (in_EDX != 0 && param_1 != (undefined4 *)0x0) {
    iVar1 = recovered_1000357f(4,(int)local_14);
    if (iVar1 != 0) {
      *param_1 = local_14[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034bb
 */

void recovered_100034bb(int *api)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x7b < (uint)api[2])) &&
     ((code *)api[0x1e] != (code *)0x0)) {
    (*(code *)api[0x1e])();
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034e3
 */

uint recovered_100034e3(int *api,uint base,uint offset,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (base == 0) {
    return 0;
  }
  uVar1 = recovered_10003535(api,base + offset,2,value);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000350a
 */

uint recovered_1000350a(int *api,uint delay)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x33 < (uint)api[2])) &&
     (in_EAX = 0, (code *)api[0xc] != (code *)0x0)) {
    in_EAX = (*(code *)api[0xc])(delay);
  }
  return in_EAX;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003535
 */

uint recovered_10003535(int *api,uint address,uint width,uint value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  uint uVar2;

  if ((api != (int *)0x0) && (*api == 0x54584b57)) {
    if ((uint)api[2] < 0xc4) {
      if ((uint)api[2] < 0x70) {
        return 0;
      }
    }
    else {
      pcVar1 = (code *)api[0x30];
      if (pcVar1 != (code *)0x0) goto LAB_10003563;
    }
    pcVar1 = (code *)api[0x1b];
    if (pcVar1 != (code *)0x0) {
LAB_10003563:
      uVar2 = (*pcVar1)(address,width,value);
      return uVar2;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000357f
 */

undefined4 recovered_1000357f(undefined4 param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;
  code *pcVar2;

  if ((in_ECX != (int *)0x0) && (*in_ECX == 0x54584b57)) {
    if ((uint)in_ECX[2] < 0xc0) {
      if ((uint)in_ECX[2] < 0x6c) {
        return 0;
      }
    }
    else {
      pcVar2 = (code *)in_ECX[0x2f];
      if (param_2 != 0 && pcVar2 != (code *)0x0) goto LAB_100035cd;
    }
    pcVar2 = (code *)in_ECX[0x1a];
    if (param_2 != 0 && pcVar2 != (code *)0x0) {
LAB_100035cd:
      uVar1 = (*pcVar2)();
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e5
 */

undefined4 recovered_100035e5(int param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int *in_ECX;

  if ((((in_ECX == (int *)0x0) || (*in_ECX != 0x54584b57)) || ((uint)in_ECX[2] < 0x74)) ||
     (((param_3 == 0 || (param_1 == 0)) || ((code *)in_ECX[0x1c] == (code *)0x0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)in_ECX[0x1c])();
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003631
 */

void recovered_10003631(void *data,uint low,uint high)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (data != (void *)0x0) {
    *(char *)data = (char)low;
    *(char *)((int)data + 1) = (char)(low >> 8);
    *(char *)((int)data + 2) = (char)(low >> 0x10);
    *(char *)((int)data + 3) = (char)(low >> 0x18);
    *(char *)((int)data + 4) = (char)high;
    *(char *)((int)data + 5) = (char)(high >> 8);
    *(char *)((int)data + 6) = (char)(high >> 0x10);
    *(char *)((int)data + 7) = (char)(high >> 0x18);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000366c
 */

void recovered_1000366c(int *api,uint device,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((api != (int *)0x0) && (*api == 0x54584b57)) && (0x77 < (uint)api[2])) &&
     ((code *)api[0x1d] != (code *)0x0)) {
    (*(code *)api[0x1d])(device,data,size);
  }
  return;
}


#undef DAT_10004114
#define DAT_10004114 (*(uint *)(((uintptr_t)pf_module_state + 0x38cU)))
#define local_48 (*(uint *)(pf_stack_frame + 24))
#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(uint *)(pf_stack_frame + 40))
#define local_34 (*(uint *)(pf_stack_frame + 44))
#define local_30 (*(undefined4 *)(pf_stack_frame + 48))
#define local_2c (*(undefined4 *)(pf_stack_frame + 52))
#define local_28 (*(undefined4 *)(pf_stack_frame + 56))
#define local_24 (*(int *)(pf_stack_frame + 60))
#define local_20 (*(int *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(uint *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000369e
 */

undefined4
recovered_1000369e(uint param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                  int param_7,uint param_8,undefined2 *param_9)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int *in_ECX;
  uint *in_EDX;
  int iVar6;
  undefined4 uVar7;

  local_24 = 0;
  local_40 = 0;
  local_28 = 0;
  local_44 = 0;
  local_2c = 0;
  local_48 = 0;
  local_30 = 0;
  uVar7 = 0;
  if (param_9 != (undefined2 *)0x0) {
    local_3c = 0;
    local_1c = 0;
    local_20 = 0;
    if ((in_EDX != (uint *)0x0) && (*in_EDX != 0)) {
      recovered_100034e3(in_ECX,*in_EDX,0x16,param_1);
      iVar3 = recovered_10002c51(0x18,&local_3c);
      if (((iVar3 != 0) &&
          (((local_3c != 0 &&
            (uVar4 = local_3c - (local_3c >> 1 & 0x55555555),
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
            ((uVar4 >> 4) + uVar4 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)) &&
           (iVar3 = recovered_10002c51(0x1c,&local_20), iVar3 != 0)))) && (local_20 == 0)) {
        uVar4 = local_3c & 0xffff;
        iVar3 = recovered_10002c51(0x1e,&local_1c);
        uVar7 = 0;
        iVar6 = 0;
        if (((iVar3 != 0) && (uVar1 = in_EDX[1], uVar1 != 0)) &&
           ((local_34 = in_EDX[9], local_34 != 0 && (local_38 = in_EDX[10], 1 < local_38)))) {
          local_18 = local_1c;
          iVar6 = 0;
          if ((int)((ulonglong)local_34 * (ulonglong)local_1c >> 0x20) == 0) {
            uVar5 = local_1c * local_34;
            local_38 = local_38 - 2;
            iVar6 = uVar1 + uVar5;
            if (CARRY4(uVar1,uVar5)) {
              iVar6 = 0;
            }
            if (local_38 < uVar5) {
              iVar6 = 0;
            }
          }
        }
        if ((((iVar6 != 0) && (param_2 <= uVar4)) &&
            ((iVar3 = recovered_100035e5(param_3,param_4,(int)&local_40), iVar3 != 0 &&
             (((iVar3 = recovered_100035e5(param_5,param_6,(int)&local_44), iVar3 != 0 &&
               (iVar3 = recovered_100035e5(param_7,param_8,(int)&local_48), iVar3 != 0)) &&
              ((local_40 & 0xf) == 0)))))) &&
           ((((((local_44 & 1) == 0 && ((local_48 & 3) == 0)) &&
              (uVar4 = recovered_100034e3(in_ECX,*in_EDX,0x16,param_1), uVar4 != 0)) &&
             ((uVar4 = recovered_100034e3(in_ECX,*in_EDX,0x18,param_2), uVar4 != 0 &&
              (bVar2 = recovered_10003a33(), CONCAT31(extraout_var,bVar2) != 0)))) &&
            ((bVar2 = recovered_10003a33(), CONCAT31(extraout_var_00,bVar2) != 0 &&
             (bVar2 = recovered_10003a33(), CONCAT31(extraout_var_01,bVar2) != 0)))))) {
          recovered_1000366c(in_ECX,DAT_10004114,(void *)param_3,param_4);
          recovered_1000366c(in_ECX,DAT_10004114,(void *)param_5,param_6);
          recovered_1000366c(in_ECX,DAT_10004114,(void *)param_7,param_8);
          uVar4 = recovered_100034e3(in_ECX,*in_EDX,0x1c,1);
          if (((uVar4 != 0) && (iVar3 = recovered_10002c51(0x1c,&local_24), iVar3 != 0)) &&
             (local_24 != 0)) {
            *param_9 = (short)param_2;
            param_9[1] = *(undefined2 *)(param_5 + 2);
            param_9[2] = *(undefined2 *)(param_7 + 2);
            *(int *)(param_9 + 4) = iVar6;
            uVar7 = 1;
          }
        }
      }
    }
  }
  return uVar7;
}

#undef DAT_10004114
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a33
 */

bool recovered_10003a33(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  iVar1 = recovered_10003446();
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = recovered_10003446();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a84
 */

void recovered_10003a84(uint param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;

  iVar4 = param_2 * 4;
  while( true ) {
    iVar4 = iVar4 + -4;
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) break;
    uVar2 = param_1 >> ((byte)iVar4 & 0x1f) & 0xf;
    cVar1 = (char)uVar2;
    cVar3 = cVar1 + '7';
    if (uVar2 < 10) {
      cVar3 = cVar1 + '0';
    }
    recovered_10003ad6(cVar3);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ad6
 */

void recovered_10003ad6(undefined1 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int in_ECX;
  uint in_EDX;

  iVar1 = recovered_100029ce();
  if ((in_ECX != 0) && (iVar1 + 1U < in_EDX)) {
    *(undefined1 *)(in_ECX + iVar1) = param_1;
    *(undefined1 *)(in_ECX + 1 + iVar1) = 0;
  }
  return;
}


#undef DAT_10003f80
#define DAT_10003f80 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f8U)))
#undef DAT_10003f85
#define DAT_10003f85 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fdU)))
#undef DAT_10003f8a
#define DAT_10003f8a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x202U)))
#undef DAT_10003f8f
#define DAT_10003f8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x207U)))
#undef str_10003f94
#define str_10003f94 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20cU)))
#undef str_10003f9f
#define str_10003f9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x217U)))
#undef str_10003fa8
#define str_10003fa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b04
 */

char * recovered_10003b04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int in_ECX;

  if (in_ECX == 0) {
    pcVar1 = &DAT_10003f80;
  }
  else if (in_ECX == 0xfe) {
    pcVar1 = str_10003f9f;
  }
  else if (in_ECX == 0x20) {
    pcVar1 = &DAT_10003f8a;
  }
  else if (in_ECX == 0x30) {
    pcVar1 = &DAT_10003f8f;
  }
  else if (in_ECX == 0x80) {
    pcVar1 = str_10003f94;
  }
  else if (in_ECX == 0x10) {
    pcVar1 = &DAT_10003f85;
  }
  else {
    pcVar1 = str_10003fa8;
  }
  return pcVar1;
}

#undef DAT_10003f80
#undef DAT_10003f85
#undef DAT_10003f8a
#undef DAT_10003f8f
#undef str_10003f94
#undef str_10003f9f
#undef str_10003fa8

#undef DAT_1000414c
#define DAT_1000414c (*(int *)(((uintptr_t)pf_module_state + 0x3c4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b6d
 */

/* WARNING: Removing unreachable block (ram,0x10003b92) */

void recovered_10003b6d(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000414c;
  { __typeof__(DAT_1000414c) pf_atomic_old = __atomic_exchange_n(&(DAT_1000414c),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000414c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b98
 */

uint recovered_10003b98(void *data)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (data == (void *)0x0) {
    return 0;
  }
  return *(uint *)data;
}


#undef DAT_10004100
#define DAT_10004100 (*(int * *)(((uintptr_t)pf_module_state + 0x378U)))
#undef DAT_10004114
#define DAT_10004114 (*(uint *)(((uintptr_t)pf_module_state + 0x38cU)))
#undef DAT_10004134
#define DAT_10004134 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3acU)))
#undef DAT_10004136
#define DAT_10004136 (*(ushort *)(((uintptr_t)pf_module_state + 0x3aeU)))
#undef DAT_10004300
#define DAT_10004300 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x578U)))
#undef DAT_10004304
#define DAT_10004304 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x57cU)))
#undef DAT_10004500
#define DAT_10004500 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x778U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bca
 */

uint recovered_10003bca(uint descriptor)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 0;
  if ((DAT_10004100 != (int *)0x0) && (DAT_10004134 != 0)) {
    recovered_10002c02(&DAT_10004500 + (descriptor & 0xffff) * 0x900,0x900);
    *(short *)(&DAT_10004304 + ((uint)DAT_10004136 % (uint)DAT_10004134) * 2) = (short)descriptor;
    uVar3 = 0;
    iVar2 = DAT_10004136 + 1;
    DAT_10004136 = (ushort)iVar2;
    PF_PART1(DAT_10004300, 2) = (undefined1)iVar2;
    PF_PART1(DAT_10004300, 3) = (undefined1)((uint)iVar2 >> 8);
    recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_10004500 + (descriptor & 0xffff) * 0x900,0x900
                      );
    recovered_1000366c(DAT_10004100,DAT_10004114,&DAT_10004300,0x24);
    uVar1 = recovered_10002c9f(DAT_10004100,&DAT_10004134,0);
    if (uVar1 == 0) {
      recovered_100030ed();
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_10004100
#undef DAT_10004114
#undef DAT_10004134
#undef DAT_10004136
#undef DAT_10004300
#undef DAT_10004304
#undef DAT_10004500

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c9d
 */

void recovered_10003c9d(void *dest,void *data,uint size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (data != (void *)0x0 && dest != (void *)0x0) {
    for (uVar1 = 0; size != uVar1; uVar1 = uVar1 + 1) {
      *(undefined1 *)((int)dest + uVar1) = *(undefined1 *)((int)data + uVar1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ccc
 */

undefined8 recovered_10003ccc(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar3 = param_2;
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    if (0x3f < param_3) goto LAB_10003d07;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_10003d07;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_10003d07:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d0e
 */

undefined8 recovered_10003d0e(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  uint uVar3;

  if ((int)param_3 < 1) {
    uVar1 = param_1;
    uVar3 = param_2;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (param_3 < 0x40) {
      bVar2 = (byte)param_3;
      if (param_3 < 0x20) {
        uVar1 = param_1 >> (bVar2 & 0x1f) | param_2 << 0x20 - (bVar2 & 0x1f);
        uVar3 = param_2 >> (bVar2 & 0x1f);
      }
      else {
        uVar1 = param_2 >> (bVar2 & 0x1f);
        uVar3 = 0;
      }
    }
  }
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d52
 */

undefined8 recovered_10003d52(uint param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;

  uVar2 = param_2;
  if (0 < (int)param_3) {
    uVar2 = (int)param_2 >> 0x1f;
    if (param_3 < 0x40) {
      bVar1 = (byte)param_3;
      if (param_3 < 0x20) {
        param_1 = param_1 >> (bVar1 & 0x1f) | param_2 << 0x20 - (bVar1 & 0x1f);
        uVar2 = (int)param_2 >> (bVar1 & 0x1f);
      }
      else {
        param_1 = (int)param_2 >> (bVar1 & 0x1f);
      }
    }
    else {
      param_1 = uVar2;
    }
  }
  return CONCAT44(uVar2,param_1);
}


void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
