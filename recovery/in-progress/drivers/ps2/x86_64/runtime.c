/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10002000
#define DAT_10002000 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000470
 */

void * recovered_10000470(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10002000;
}

#undef DAT_10002000

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint *)(((uintptr_t)pf_module_state + 0x1c70U)))
#undef DAT_1000300c
#define DAT_1000300c (*(uint *)(((uintptr_t)pf_module_state + 0x1c74U)))
#undef DAT_10003010
#define DAT_10003010 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c78U)))
#undef DAT_10003014
#define DAT_10003014 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c7cU)))
#undef DAT_10003018
#define DAT_10003018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c80U)))
#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c84U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c88U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8cU)))
#undef DAT_10003028
#define DAT_10003028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c90U)))
#undef str_10001398
#define str_10001398 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x0U)))
#undef str_100013a9
#define str_100013a9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11U)))
#undef str_100013c2
#define str_100013c2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x2aU)))
#undef str_100013e9
#define str_100013e9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51U)))
#undef str_10001408
#define str_10001408 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x70U)))
#undef str_1000141e
#define str_1000141e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000142c
#define str_1000142c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x94U)))
#define local_34 (*(char (*)[52])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000047d
 */

uint recovered_1000047d(void *api)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  undefined7 extraout_var_02 = 0;
  undefined7 extraout_var_03 = 0;
  undefined7 extraout_var_04 = 0;
  undefined7 extraout_var_05 = 0;
  undefined7 extraout_var_06 = 0;
  undefined7 extraout_var_07 = 0;
  undefined7 extraout_var_08 = 0;
  undefined8 uVar2;
  undefined7 extraout_var_09 = 0;
  undefined7 extraout_var_10 = 0;
  undefined7 extraout_var_11 = 0;
  undefined7 extraout_var_12 = 0;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;

  if ((((api != (void *)0x0) && (*(int *)api == 0x54584b57)) && (*(int *)((long)api + 4) == 1100000)
      ) && (0xf7 < *(uint *)((long)api + 8))) {
    DAT_10003008 = 0;
    DAT_1000300c = 0;
    DAT_10003010 = 0;
    DAT_10003014 = 0;
    DAT_10003018 = 0;
    DAT_1000301c = 0;
    DAT_10003020 = 0;
    DAT_10003024 = 0;
    DAT_10003028 = 0;
    DAT_10003000 = api;
    recovered_10000834(((uintptr_t)pf_module_state+0x1c94U),0xc);
    recovered_10000834(((uintptr_t)pf_module_state+0x1ca0U),4);
    local_34[0] = '\0';
    local_34[1] = 0;
    local_34[3] = 0;
    bVar1 = recovered_10000a58(local_34);
    if ((((int)CONCAT71(extraout_var,bVar1) != 0) && (local_34[0] != -1)) &&
       ((bVar1 = recovered_10000a8e(), (int)CONCAT71(extraout_var_00,bVar1) != 0 &&
        (bVar1 = recovered_10000a8e(), (int)CONCAT71(extraout_var_01,bVar1) != 0)))) {
      recovered_10000ac5();
      bVar1 = recovered_10000b13(local_34 + 1);
      if (((int)CONCAT71(extraout_var_02,bVar1) != 0) &&
         (bVar1 = recovered_10000b44(), (int)CONCAT71(extraout_var_03,bVar1) != 0)) {
        iVar5 = 3;
        while (bVar1 = iVar5 != 0, iVar5 = iVar5 + -1, bVar1) {
          local_34[2] = '\0';
          bVar1 = recovered_10000a8e();
          if ((int)CONCAT71(extraout_var_04,bVar1) == 0) break;
          bVar1 = recovered_10000d2b(local_34 + 2);
          if (((int)CONCAT71(extraout_var_05,bVar1) != 0) && (local_34[2] == 'U')) {
            recovered_10000b44();
            bVar1 = recovered_10000a8e();
            if (((int)CONCAT71(extraout_var_06,bVar1) != 0) &&
               ((bVar1 = recovered_10000b13(local_34 + 3), (int)CONCAT71(extraout_var_07,bVar1) != 0
                && ((local_34[3] & 0x20U) == 0)))) {
              DAT_1000300c = 1;
            }
            recovered_10000a8e();
            bVar1 = recovered_10000a8e();
            if ((int)CONCAT71(extraout_var_08,bVar1) != 0) {
              recovered_10000ac5();
              uVar2 = recovered_10000b6f(0);
              DAT_10003008 = (uint)uVar2;
              if (DAT_1000300c != 0) {
                bVar1 = recovered_10000a8e();
                if ((int)CONCAT71(extraout_var_09,bVar1) == 0) {
                  DAT_1000300c = 0;
                }
                else {
                  recovered_10000ac5();
                  uVar2 = recovered_10000b6f(1);
                  if ((int)uVar2 == 0) {
                    DAT_1000300c = 0;
                  }
                  else {
                    uVar2 = recovered_10000b6f(1);
                    bVar1 = (int)uVar2 != 0;
                    DAT_1000300c = (uint)bVar1;
                    if (bVar1) goto LAB_100006e3;
                  }
                }
              }
LAB_100006e3:
              bVar1 = recovered_10000b44();
              if ((int)CONCAT71(extraout_var_10,bVar1) != 0) {
                if (DAT_1000300c == 0) {
                  recovered_10000a8e();
                }
                recovered_10000ac5();
                if (DAT_10003008 != 0 || DAT_1000300c != 0) {
                  if ((code *)(ulong)*(uint *)((long)api + 0xc) != (code *)0x0) {
                    pcVar4 = str_100013c2;
                    if (DAT_10003008 == 0) {
                      pcVar4 = str_100013e9;
                    }
                    pcVar3 = str_10001408;
                    if (DAT_1000300c != 0) {
                      pcVar3 = pcVar4;
                    }
                    (*(code *)(ulong)*(uint *)((long)api + 0xc))(str_10001398,str_100013a9,pcVar3);
                  }
                  if (((DAT_10003008 == 0) ||
                      (bVar1 = recovered_1000084f(0xb), (int)CONCAT71(extraout_var_11,bVar1) != 0))
                     && ((DAT_1000300c == 0 ||
                         (bVar1 = recovered_1000084f(10), (int)CONCAT71(extraout_var_12,bVar1) != 0)
                         ))) {
                    if (DAT_10003008 == 0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = 0;
                      if (((*(int *)api == 0x54584b57) && (0xa7 < *(uint *)((long)api + 8))) &&
                         ((code *)(ulong)*(uint *)((long)api + 0xa4) != (code *)0x0)) {
                        iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0xa4))
                                          (recovered_10000979,0x10003,str_1000141e);
                        uVar6 = (uint)(iVar5 != 0);
                      }
                      DAT_10003008 = uVar6;
                    }
                    if (DAT_1000300c != 0) {
                      if ((code *)(ulong)*(uint *)((long)api + 0x20) == (code *)0x0) {
                        DAT_1000300c = 0;
                      }
                      else {
                        iVar5 = (*(code *)(ulong)*(uint *)((long)api + 0x20))
                                          (recovered_100009d9,0x10002,str_1000142c);
                        DAT_1000300c = (uint)(iVar5 != 0);
                      }
                      uVar6 = uVar6 | DAT_1000300c;
                    }
                    if (uVar6 == 0) {
                      DAT_10003000 = (int *)0x0;
                      return 0;
                    }
                    return uVar6;
                  }
                }
              }
            }
            goto LAB_10000600;
          }
          recovered_10000ccf(DAT_10003000,50000);
        }
      }
      recovered_10000b44();
      recovered_10000a8e();
    }
LAB_10000600:
    DAT_10003000 = (int *)0x0;
  }
  return 0;
}

#undef DAT_10003000
#undef DAT_10003008
#undef DAT_1000300c
#undef DAT_10003010
#undef DAT_10003014
#undef DAT_10003018
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003028
#undef str_10001398
#undef str_100013a9
#undef str_100013c2
#undef str_100013e9
#undef str_10001408
#undef str_1000141e
#undef str_1000142c
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000834
 */

void recovered_10000834(long param_1,long param_2)

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
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#undef str_1000141e
#define str_1000141e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000146c
#define str_1000146c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_10001484
#define str_10001484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_10001494
#define str_10001494 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfcU)))
#undef str_100014a2
#define str_100014a2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10aU)))
#undef str_100014e4
#define str_100014e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#define local_190 (*(undefined1 (*)[400])(pf_stack_frame + 128))
#define local_150 (*(undefined1 (*)[336])(pf_stack_frame + 192))
#define local_f0 (*(undefined1 (*)[240])(pf_stack_frame + 288))
#define local_1f8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_1f0 (*(int *)(pf_stack_frame + 32))
#define local_1ec (*(undefined4 *)(pf_stack_frame + 36))
#define local_1e0 (*(code * *)(pf_stack_frame + 48))
#define local_1d0 (*(undefined1 (*)[464])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000084f
 */

bool recovered_1000084f(int param_1)

{
  unsigned char pf_stack_frame[560] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;

  recovered_10000834((long)&local_1f8,0x1c8);
  bVar4 = param_1 == 10;
  local_1f8 = 0x1000001c8;
  local_1e0 = recovered_10000de0;
  if (bVar4) {
    local_1e0 = recovered_10000dd3;
  }
  local_1ec = 0x13;
  pcVar2 = str_1000141e;
  if (bVar4) {
    pcVar2 = str_1000146c;
  }
  pcVar3 = str_100014e4;
  if (bVar4) {
    pcVar3 = str_100014a2;
  }
  local_1f0 = param_1;
  recovered_10000ded(local_1d0,0x40,pcVar2);
  recovered_10000ded(local_190,0x40,str_10001484);
  recovered_10000ded(local_150,0x60,str_10001494);
  recovered_10000ded(local_f0,0xc0,pcVar3);
  bVar4 = false;
  if ((((DAT_10003000 != (int *)0x0) && (*DAT_10003000 == 0x54584b57)) &&
      (0xef < (uint)DAT_10003000[2])) && ((code *)(ulong)(uint)DAT_10003000[0x3b] != (code *)0x0)) {
    iVar1 = (*(code *)(ulong)(uint)DAT_10003000[0x3b])(&local_1f8);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

#undef DAT_10003000
#undef str_1000141e
#undef str_1000146c
#undef str_10001484
#undef str_10001494
#undef str_100014a2
#undef str_100014e4
#undef local_190
#undef local_150
#undef local_f0
#undef local_1f8
#undef local_1f0
#undef local_1ec
#undef local_1e0
#undef local_1d0

#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c68U)))
#undef DAT_10003010
#define DAT_10003010 (*(uint *)(((uintptr_t)pf_module_state + 0x1c78U)))
#undef DAT_10003014
#define DAT_10003014 (*(uint *)(((uintptr_t)pf_module_state + 0x1c7cU)))
#undef DAT_10003040
#define DAT_10003040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca8U)))
#undef DAT_10003140
#define DAT_10003140 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1da8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000979
 */

undefined4 recovered_10000979(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (DAT_10003000 == 0) {
    return 0;
  }
  recovered_10000f6b();
  if (DAT_10003010 == DAT_10003014) {
    recovered_10000f8c();
  }
  uVar1 = 0;
  if (DAT_10003010 != DAT_10003014) {
    uVar1 = *(undefined4 *)(&DAT_10003040 + (ulong)DAT_10003010 * 4);
    DAT_10003010 = DAT_10003010 + 1 & 0x3f;
  }
  DAT_10003140 = 0;
  return uVar1;
}

#undef DAT_10003000
#undef DAT_10003010
#undef DAT_10003014
#undef DAT_10003040
#undef DAT_10003140

#undef DAT_10003000
#define DAT_10003000 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x1c68U)))
#undef DAT_10003018
#define DAT_10003018 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c80U)))
#undef DAT_1000301c
#define DAT_1000301c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c84U)))
#undef DAT_10003020
#define DAT_10003020 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c88U)))
#undef DAT_10003024
#define DAT_10003024 (*(char *)(((uintptr_t)pf_module_state + 0x1c8cU)))
#undef DAT_10003140
#define DAT_10003140 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1da8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100009d9
 */

undefined8 recovered_100009d9(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if ((param_1 != (undefined4 *)0x0) && (DAT_10003000 != 0)) {
    recovered_10000834((long)param_1,0x20);
    recovered_10000f6b();
    recovered_10000f8c();
    param_1[1] = DAT_10003018;
    if (DAT_10003024 == '\x01') {
      *param_1 = 2;
      param_1[4] = DAT_1000301c;
      param_1[5] = DAT_10003020;
      DAT_1000301c = 0;
      DAT_10003020 = 0;
      DAT_10003024 = '\0';
    }
    DAT_10003140 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

#undef DAT_10003000
#undef DAT_10003018
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003140

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a58
 */

bool recovered_10000a58(undefined1 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint uVar1;

  uStack_18 = (ulong)in_EAX;
  uVar1 = recovered_10000bfd(DAT_10003000,100,(void *)((long)&uStack_18 + 4));
  if (uVar1 != 0) {
    *param_1 = PF_PART1(uStack_18, 4);
  }
  return uVar1 != 0;
}

#undef DAT_10003000
#undef uStack_18

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a8e
 */

bool recovered_10000a8e(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10000c36();
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10000ca3(DAT_10003000,100);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10003000

#define uStack_28 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ac5
 */

void recovered_10000ac5(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 in_register_00000004 = 0;
  int iVar1;
  bool bVar2;

  uStack_28 = CONCAT44(in_register_00000004,in_EAX);
  iVar1 = 0x40;
  while( true ) {
    bVar2 = iVar1 == 0;
    iVar1 = iVar1 + -1;
    if (bVar2) {
      return;
    }
    uStack_28 = uStack_28 & 0xffffffffffffff;
    bVar2 = recovered_10000a58((undefined1 *)((long)&uStack_28 + 7));
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return;
    }
    if (PF_PART1(uStack_28, 7) == -1) {
      return;
    }
    if ((uStack_28 & 0x100000000000000) == 0) break;
    bVar2 = recovered_10000cf5((undefined1 *)((long)&uStack_28 + 6));
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      return;
    }
  }
  return;
}

#undef uStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b13
 */

bool recovered_10000b13(undefined1 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;

  bVar1 = recovered_10000a8e();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = recovered_10000d2b(param_1);
    bVar1 = (int)CONCAT71(extraout_var_00,bVar1) != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b44
 */

bool recovered_10000b44(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined7 extraout_var = 0;

  bVar1 = recovered_10000a8e();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    return false;
  }
  bVar1 = recovered_10000d9c();
  return bVar1;
}


#define uStack_38 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b6f
 */

undefined8 recovered_10000b6f(int param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  ulong in_RAX;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  undefined7 extraout_var_01 = 0;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  uStack_38 = in_RAX;
  do {
    if (iVar4 == 3) {
      return 0;
    }
    uStack_38 = uStack_38 & 0xffffffffffffff;
    if ((param_1 != 0) && (bVar1 = recovered_10000a8e(), (int)CONCAT71(extraout_var,bVar1) == 0)) {
      return 0;
    }
    bVar1 = recovered_10000d9c();
    if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
      return 0;
    }
    iVar3 = 9;
    bVar2 = 0;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      bVar1 = recovered_10000d2b((undefined1 *)((long)&uStack_38 + 7));
      if ((int)CONCAT71(extraout_var_01,bVar1) == 0) {
        return 0;
      }
      bVar2 = PF_PART1(uStack_38, 7);
    } while ((PF_PART1(uStack_38, 7) & 0xfb) != 0xfa);
    if (bVar2 != 0xfe) {
      if (bVar2 == 0xfa) {
        return 1;
      }
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bfd
 */

uint recovered_10000bfd(int *api,uint port,void *out)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if ((((api == (int *)0x0) || (*api != 0x54584b57)) || ((uint)api[2] < 0x58)) ||
     (out == (void *)0x0 || (code *)(ulong)(uint)api[0x15] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)api[0x15])(port & 0xffff,1,out);
  return uVar1;
}


#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#define local_29 (*(byte *)(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c36
 */

undefined8 recovered_10000c36(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined7 extraout_var = 0;
  int iVar1;
  bool bVar2;

  iVar1 = 2000;
  while( true ) {
    bVar2 = iVar1 == 0;
    iVar1 = iVar1 + -1;
    if (bVar2) {
      return 0;
    }
    local_29 = 0;
    bVar2 = recovered_10000a58(&local_29);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      return 0;
    }
    if (local_29 == 0xff) {
      return 0;
    }
    if ((local_29 & 2) == 0) break;
    recovered_10000ccf(DAT_10003000,0x32);
  }
  return 1;
}

#undef DAT_10003000
#undef local_29

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ca3
 */

undefined8 recovered_10000ca3(int *param_1,undefined2 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x5c)) ||
     ((code *)(ulong)(uint)param_1[0x16] == (code *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10000cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(ulong)(uint)param_1[0x16])(param_2,1);
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ccf
 */

void recovered_10000ccf(int *param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_1 == (int *)0x0) || (*param_1 != 0x54584b57)) || ((uint)param_1[2] < 0x34)) ||
     ((code *)(ulong)(uint)param_1[0xc] == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10000cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)param_1[0xc])(param_2);
  return;
}


#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cf5
 */

bool recovered_10000cf5(undefined1 *param_1)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint uVar1;

  uStack_18 = (ulong)in_EAX;
  uVar1 = recovered_10000bfd(DAT_10003000,0x60,(void *)((long)&uStack_18 + 4));
  if (uVar1 != 0) {
    *param_1 = PF_PART1(uStack_18, 4);
  }
  return uVar1 != 0;
}

#undef DAT_10003000
#undef uStack_18

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#define local_29 (*(byte *)(pf_stack_frame + 23))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d2b
 */

bool recovered_10000d2b(undefined1 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined7 extraout_var = 0;
  int iVar1;
  bool bVar2;

  iVar1 = 10000;
  while( true ) {
    bVar2 = iVar1 == 0;
    iVar1 = iVar1 + -1;
    if (bVar2) {
      return false;
    }
    local_29 = 0;
    bVar2 = recovered_10000a58(&local_29);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      return false;
    }
    if (local_29 == 0xff) {
      return false;
    }
    if ((local_29 & 1) != 0) break;
    recovered_10000ccf(DAT_10003000,0x32);
  }
  bVar2 = recovered_10000cf5(param_1);
  return bVar2;
}

#undef DAT_10003000
#undef local_29

#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d9c
 */

bool recovered_10000d9c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  bool bVar2;

  uVar1 = recovered_10000c36();
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = recovered_10000ca3(DAT_10003000,0x60);
    bVar2 = (int)uVar1 != 0;
  }
  return bVar2;
}

#undef DAT_10003000

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dd3
 */

void recovered_10000dd3(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e28(param_1,10);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000de0
 */

void recovered_10000de0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000e28(param_1,0xb);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ded
 */

void recovered_10000ded(undefined1 *param_1,ulong param_2,char *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
    uVar2 = 0;
    do {
      pcVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    if (param_3 != (char *)0x0) {
      for (; (*param_3 != '\0' && (uVar2 < param_2)); uVar2 = uVar2 + 1) {
        param_1[uVar2 - 1] = *param_3;
        param_3 = param_3 + 1;
      }
      param_1[uVar2 - 1] = 0;
    }
  }
  return;
}


#undef DAT_10003000
#define DAT_10003000 (*(int * *)(((uintptr_t)pf_module_state + 0x1c68U)))
#undef DAT_10003008
#define DAT_10003008 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c70U)))
#undef DAT_1000300c
#define DAT_1000300c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c74U)))
#undef DAT_10003028
#define DAT_10003028 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1c90U)))
#undef str_1000141e
#define str_1000141e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x86U)))
#undef str_1000146c
#define str_1000146c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4U)))
#undef str_10001484
#define str_10001484 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xecU)))
#undef str_1000151a
#define str_1000151a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x182U)))
#undef str_1000152f
#define str_1000152f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x197U)))
#undef str_10001546
#define str_10001546 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aeU)))
#undef str_100015da
#define str_100015da (*(char (*)[1])(((uintptr_t)pf_module_state + 0x242U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e28
 */

undefined8 recovered_10000e28(undefined8 *param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;

  uVar3 = 0;
  if ((param_1 != (undefined8 *)0x0) && (DAT_10003000 != (int *)0x0)) {
    piVar4 = &DAT_10003008;
    if (param_2 == 10) {
      piVar4 = &DAT_1000300c;
    }
    iVar1 = *piVar4;
    recovered_10000834((long)param_1,500);
    *param_1 = 0x1000001f4;
    *(int *)((long)param_1 + 0xc) = param_2;
    uVar2 = 0x13;
    if (iVar1 == 0) {
      uVar2 = 8;
    }
    *(undefined4 *)(param_1 + 2) = uVar2;
    uVar2 = 0;
    if ((((DAT_10003000 != (int *)0x0) && (*DAT_10003000 == 0x54584b57)) &&
        (0x2f < (uint)DAT_10003000[2])) && ((code *)(ulong)(uint)DAT_10003000[0xb] != (code *)0x0))
    {
      uVar2 = (*(code *)(ulong)(uint)DAT_10003000[0xb])();
    }
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(int *)((long)param_1 + 0x44) = iVar1;
    *(undefined4 *)(param_1 + 9) = DAT_10003028;
    pcVar5 = str_1000141e;
    if (param_2 == 10) {
      pcVar5 = str_1000146c;
    }
    pcVar6 = str_100015da;
    if (param_2 == 10) {
      pcVar6 = str_10001546;
    }
    recovered_10000ded((undefined1 *)((long)param_1 + 0x54),0x40,pcVar5);
    recovered_10000ded((undefined1 *)((long)param_1 + 0x94),0x40,str_10001484);
    pcVar5 = str_1000151a;
    if (iVar1 == 0) {
      pcVar5 = str_1000152f;
    }
    recovered_10000ded((undefined1 *)((long)param_1 + 0xd4),0x60,pcVar5);
    recovered_10000ded((undefined1 *)((long)param_1 + 0x134),0xc0,pcVar6);
    uVar3 = 1;
  }
  return uVar3;
}

#undef DAT_10003000
#undef DAT_10003008
#undef DAT_1000300c
#undef DAT_10003028
#undef str_1000141e
#undef str_1000146c
#undef str_10001484
#undef str_1000151a
#undef str_1000152f
#undef str_10001546
#undef str_100015da

#undef DAT_10003140
#define DAT_10003140 (*(int *)(((uintptr_t)pf_module_state + 0x1da8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f6b
 */

/* WARNING: Removing unreachable block (ram,0x10000f88) */

void recovered_10000f6b(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_10003140;
  { __typeof__(DAT_10003140) pf_atomic_old = __atomic_exchange_n(&(DAT_10003140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    return;
  }
  do {
  } while( true );
}

#undef DAT_10003140

#undef DAT_10001670
#define DAT_10001670 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x2d8U)))
#undef DAT_100016b0
#define DAT_100016b0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x318U)))
#undef DAT_10003008
#define DAT_10003008 (*(int *)(((uintptr_t)pf_module_state + 0x1c70U)))
#undef DAT_1000300c
#define DAT_1000300c (*(int *)(((uintptr_t)pf_module_state + 0x1c74U)))
#undef DAT_10003010
#define DAT_10003010 (*(uint *)(((uintptr_t)pf_module_state + 0x1c78U)))
#undef DAT_10003014
#define DAT_10003014 (*(uint *)(((uintptr_t)pf_module_state + 0x1c7cU)))
#undef DAT_10003018
#define DAT_10003018 (*(uint *)(((uintptr_t)pf_module_state + 0x1c80U)))
#undef DAT_1000301c
#define DAT_1000301c (*(int *)(((uintptr_t)pf_module_state + 0x1c84U)))
#undef DAT_10003020
#define DAT_10003020 (*(int *)(((uintptr_t)pf_module_state + 0x1c88U)))
#undef DAT_10003024
#define DAT_10003024 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1c8cU)))
#undef DAT_10003028
#define DAT_10003028 (*(int *)(((uintptr_t)pf_module_state + 0x1c90U)))
#undef DAT_1000302c
#define DAT_1000302c (*(char *)(((uintptr_t)pf_module_state + 0x1c94U)))
#undef DAT_1000302d
#define DAT_1000302d (*(char *)(((uintptr_t)pf_module_state + 0x1c95U)))
#undef DAT_1000302e
#define DAT_1000302e (*(byte *)(((uintptr_t)pf_module_state + 0x1c96U)))
#undef DAT_1000302f
#define DAT_1000302f (*(byte *)(((uintptr_t)pf_module_state + 0x1c97U)))
#undef DAT_10003030
#define DAT_10003030 (*(byte *)(((uintptr_t)pf_module_state + 0x1c98U)))
#undef DAT_10003031
#define DAT_10003031 (*(byte *)(((uintptr_t)pf_module_state + 0x1c99U)))
#undef DAT_10003032
#define DAT_10003032 (*(byte *)(((uintptr_t)pf_module_state + 0x1c9aU)))
#undef DAT_10003033
#define DAT_10003033 (*(byte *)(((uintptr_t)pf_module_state + 0x1c9bU)))
#undef DAT_10003034
#define DAT_10003034 (*(uint *)(((uintptr_t)pf_module_state + 0x1c9cU)))
#undef DAT_10003038
#define DAT_10003038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca0U)))
#undef DAT_10003039
#define DAT_10003039 (*(byte *)(((uintptr_t)pf_module_state + 0x1ca1U)))
#undef DAT_1000303a
#define DAT_1000303a (*(byte *)(((uintptr_t)pf_module_state + 0x1ca2U)))
#undef DAT_1000303b
#define DAT_1000303b (*(byte *)(((uintptr_t)pf_module_state + 0x1ca3U)))
#undef DAT_10003040
#define DAT_10003040 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1ca8U)))
#undef _DAT_1000302c
#define _DAT_1000302c (*(uint16_t *)(((uintptr_t)pf_module_state + 0x1c94U)))
#define local_3c (*(uint (*)[15])(pf_stack_frame + 20))
#define local_32 (*(byte *)(pf_stack_frame + 30))
#define local_31 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000f8c(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined7 extraout_var = 0;
  undefined7 extraout_var_00 = 0;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;

  iVar11 = 0;
  do {
    if (iVar11 == 0x40) {
      return;
    }
    local_32 = 0;
    local_31 = 0;
    bVar3 = recovered_10000a58(&local_32);
    bVar5 = local_32;
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      return;
    }
    if (local_32 == 0xff) {
      return;
    }
    if ((local_32 & 1) == 0) {
      return;
    }
    bVar3 = recovered_10000cf5(&local_31);
    uVar4 = DAT_10003010;
    if ((int)CONCAT71(extraout_var_00,bVar3) == 0) {
      return;
    }
    DAT_10003028 = DAT_10003028 + 1;
    if (bVar5 < 0x40) {
      if (bVar5 < 0x20) {
        if (DAT_10003008 != 0) {
          cVar2 = DAT_1000302c;
          if (DAT_1000302d == '\0') {
            uVar6 = local_31 - 0xe0;
            if (uVar6 < 0x20) {
              if ((0xc4004000U >> (uVar6 & 0x1f) & 1) != 0) goto LAB_100010f8;
              if (uVar6 == 0) {
                _DAT_1000302c = 1;
              }
              else {
                if (uVar6 != 1) goto LAB_10001151;
                _DAT_1000302c = 0x200;
              }
              goto LAB_100010ff;
            }
LAB_10001151:
            if (local_31 == 0) {
LAB_100010f8:
              _DAT_1000302c = 0;
              goto LAB_100010ff;
            }
            _DAT_1000302c = 0;
            uVar6 = local_31 & 0x7f;
            bVar5 = (byte)uVar6;
            if (cVar2 == '\x01') {
              uVar7 = 0;
              if ((((local_31 != 0x2a) && (local_31 != 0x36)) && (local_31 != 0xaa)) &&
                 (local_31 != 0xb6)) {
                if (bVar5 == 0x5c) {
                  DAT_10003033 = (byte)~local_31 >> 7;
                }
                else if (uVar6 == 0x5b) {
                  DAT_10003032 = (byte)~local_31 >> 7;
                }
                else {
                  bVar1 = 1;
                  if (uVar6 != 0x1d) goto LAB_10001214;
                  DAT_10003031 = (byte)~local_31 >> 7;
                }
                goto LAB_10001211;
              }
            }
            else {
              if (bVar5 == 0x1d) {
                DAT_10003030 = (byte)~local_31 >> 7;
LAB_10001211:
                bVar1 = 0;
              }
              else {
                if (uVar6 == 0x36) {
                  DAT_1000302f = (byte)~local_31 >> 7;
                  goto LAB_10001211;
                }
                bVar1 = 1;
                if (uVar6 == 0x2a) {
                  DAT_1000302e = (byte)~local_31 >> 7;
                  goto LAB_10001211;
                }
              }
LAB_10001214:
              if ((DAT_1000302e != 0) || (uVar10 = 0, DAT_1000302f == 1)) {
                uVar10 = 0x10000;
              }
              if ((DAT_10003030 != 0) || (DAT_10003031 == 1)) {
                uVar10 = uVar10 | 0x20000;
              }
              if ((DAT_10003032 != 0) || (DAT_10003033 == 1)) {
                uVar10 = uVar10 | 0x40000;
              }
              bVar3 = uVar10 != DAT_10003034;
              if (bVar3) {
                local_3c[0] = uVar10 + 0x80000000;
                DAT_10003034 = uVar10;
              }
              uVar7 = (ulong)bVar3;
              if (!(bool)(bVar1 ^ 1) && -1 < (char)local_31) {
                if (cVar2 == '\0') {
                  if (bVar5 != 0x38) {
                    if ((byte)(bVar5 - 1) < 0x44) {
                      if (bVar5 < 0x3a) {
                        puVar9 = &DAT_100016b0;
                        if ((uVar10 >> 0x10 & 1) == 0) {
                          puVar9 = &DAT_10001670;
                        }
                        uVar6 = (uint)(byte)puVar9[uVar6];
                        goto LAB_1000134a;
                      }
                    }
                    else if (1 < (byte)(bVar5 + 0xa9) && 0xc < (byte)(bVar5 + 0xb9))
                    goto LAB_10001101;
                    uVar6 = 0;
                    if (bVar5 == 0x4e) {
                      uVar6 = 0x2b;
                    }
                    if (bVar5 == 0x4a) {
                      uVar6 = 0x2d;
                    }
                    goto LAB_1000134a;
                  }
                }
                else if (((bVar5 == 0x1c) || (uVar6 == 0x35)) ||
                        (((byte)(bVar5 + 0xb9) < 0xd &&
                         ((4 < uVar6 - 0x4a || ((0x15U >> (uVar6 - 0x4a & 0x1f) & 1) == 0)))))) {
                  uVar6 = 0;
                  if (bVar5 == 0x35) {
                    uVar6 = 0x2f;
                  }
                  if (bVar5 == 0x1c) {
                    uVar6 = 0xd;
                  }
LAB_1000134a:
                  local_3c[uVar7] = (uint)local_31 << 8 | uVar6 | uVar10;
                  uVar7 = (ulong)(bVar3 + 1);
                }
              }
            }
          }
          else {
            _DAT_1000302c = CONCAT11(DAT_1000302d + -1,DAT_1000302c);
LAB_100010ff:
            uVar7 = 0;
          }
LAB_10001101:
          uVar6 = DAT_10003014;
          for (uVar8 = 0; uVar7 != uVar8; uVar8 = uVar8 + 1) {
            uVar10 = uVar6 + 1 & 0x3f;
            if (uVar10 == uVar4) {
            }
            else {
              *(uint *)(&DAT_10003040 + (ulong)uVar6 * 4) = local_3c[uVar8];
              uVar6 = uVar10;
              DAT_10003014 = uVar10;
            }
          }
        }
      }
      else if ((DAT_1000300c != 0) &&
              (uVar7 = (ulong)DAT_1000303b, (local_31 & 8) != 0 || DAT_1000303b != 0)) {
        DAT_1000303b = DAT_1000303b + 1;
        (&DAT_10003038)[uVar7] = local_31;
        if (2 < DAT_1000303b) {
          DAT_1000303b = 0;
          uVar4 = (uint)DAT_10003038;
          if (uVar4 < 0x40) {
            DAT_10003018 = uVar4 & 7;
            DAT_1000301c = DAT_1000301c + (uint)DAT_10003039 + (uVar4 & 0x10) * -0x10;
            DAT_10003020 = DAT_10003020 + ((uVar4 & 0x20) * 8 - (uint)DAT_1000303a);
            DAT_10003024 = 1;
          }
        }
      }
    }
    else if ((bVar5 & 0x20) != 0) {
      DAT_1000303b = 0;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

#undef DAT_10001670
#undef DAT_100016b0
#undef DAT_10003008
#undef DAT_1000300c
#undef DAT_10003010
#undef DAT_10003014
#undef DAT_10003018
#undef DAT_1000301c
#undef DAT_10003020
#undef DAT_10003024
#undef DAT_10003028
#undef DAT_1000302c
#undef DAT_1000302d
#undef DAT_1000302e
#undef DAT_1000302f
#undef DAT_10003030
#undef DAT_10003031
#undef DAT_10003032
#undef DAT_10003033
#undef DAT_10003034
#undef DAT_10003038
#undef DAT_10003039
#undef DAT_1000303a
#undef DAT_1000303b
#undef DAT_10003040
#undef _DAT_1000302c
#undef local_3c
#undef local_32
#undef local_31

void *memset(void *p,int v,size_t n){volatile unsigned char *b=p;while(n--)*b++=(unsigned char)v;return p;}
void __bzero(void *p,size_t n){volatile unsigned char *b=p;while(n--)*b++=0;}
void bzero(void *p,size_t n){__bzero(p,n);}
