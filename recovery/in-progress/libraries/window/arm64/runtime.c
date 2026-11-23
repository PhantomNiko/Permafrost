/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_10010110
#define DAT_10010110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7880U)))
#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#undef _DAT_10010110
#define _DAT_10010110 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x7880U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000658
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000658(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000684();
  _DAT_10010110 = 0;
  recovered_100006bc();
  DAT_10010114 = 0;
  return;
}

#undef DAT_10010110
#undef DAT_10010114
#undef _DAT_10010110

#undef DAT_10010114
#define DAT_10010114 (*(int *)(((uintptr_t)pf_module_state + 0x7884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000684
 */

void recovered_10000684(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_10010114;
      cVar1 = '\x01';
      { __typeof__(DAT_10010114) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_10010114),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_10010114 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_10010114

#undef DAT_10010110
#define DAT_10010110 (*(byte *)(((uintptr_t)pf_module_state + 0x7880U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7890U)))
#undef DAT_82010088
#define DAT_82010088 (*(uint8_t *)(0x82010088U))
#undef DAT_8201008c
#define DAT_8201008c (*(uint8_t *)(0x8201008cU))
#undef DAT_82010238
#define DAT_82010238 (*(uint8_t *)(0x82010238U))
#undef DAT_8201023c
#define DAT_8201023c (*(uint8_t *)(0x8201023cU))
#undef _DAT_82010088
#define _DAT_82010088 (*(uint *)(0x82010088U))
#undef _DAT_8201008c
#define _DAT_8201008c (*(uint *)(0x8201008cU))
#undef _DAT_82010238
#define _DAT_82010238 (*(int *)(0x82010238U))
#undef _DAT_8201023c
#define _DAT_8201023c (*(uint *)(0x8201023cU))
#define auStack_458 (*(ulong (*)[139])(pf_stack_frame + 24))
#define local_48 (*(ulong *)(pf_stack_frame + 1064))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100006bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100006bc(void)

{
  unsigned char pf_stack_frame[1168] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;

  local_48 = 0;
  if ((DAT_10010110 & 1) == 0) {
    DAT_10010118 = 0;
    DAT_10010120 = 0;
    uVar4 = _DAT_8201008c;
    if (0xf < _DAT_8201008c) {
      uVar4 = 0x10;
    }
    if ((_DAT_82010238 == 0x34364857) && (_DAT_8201023c != 0)) {
      uVar5 = 0;
      uVar3 = 0;
      uVar4 = _DAT_8201023c;
      if (0x3f < _DAT_8201023c) {
        uVar4 = 0x40;
      }
      for (; uVar5 != uVar4; uVar5 = uVar5 + 1) {
        lVar7 = *(long *)(uVar5 * 0x10 + 0x82010248);
        if (lVar7 != 0) {
          uVar6 = *(ulong *)(uVar5 * 0x10 + 0x82010240);
          uVar1 = lVar7 + uVar6;
          if (0x300000 < uVar1 && uVar6 < uVar1) {
            if (uVar6 < 0x300001) {
              uVar6 = 0x300000;
            }
            if (uVar3 < 0x40) {
              uVar9 = uVar3;
              for (puVar8 = auStack_458 + uVar3 * 2 + 2; (uVar9 != 0 && (uVar6 < puVar8[-2]));
                  puVar8 = puVar8 + -2) {
                puVar8[1] = puVar8[-1];
                *puVar8 = puVar8[-2];
                uVar9 = uVar9 - 1;
              }
              *puVar8 = uVar6;
              puVar8[1] = uVar1 - uVar6;
              uVar3 = uVar3 + 1;
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      for (uVar5 = 0; uVar5 != uVar4; uVar5 = uVar5 + 1) {
        uVar2 = *(uint *)(uVar5 * 8 + 0x82010094);
        if (uVar2 != 0) {
          uVar6 = (ulong)*(uint *)(uVar5 * 8 + 0x82010090);
          uVar1 = uVar2 + uVar6;
          if (0x300000 < uVar1) {
            if (uVar6 < 0x300001) {
              uVar6 = 0x300000;
            }
            if (uVar3 < 0x40) {
              uVar9 = uVar3;
              for (puVar8 = auStack_458 + uVar3 * 2 + 2; (uVar9 != 0 && (uVar6 < puVar8[-2]));
                  puVar8 = puVar8 + -2) {
                puVar8[1] = puVar8[-1];
                *puVar8 = puVar8[-2];
                uVar9 = uVar9 - 1;
              }
              *puVar8 = uVar6;
              puVar8[1] = uVar1 - uVar6;
              uVar3 = uVar3 + 1;
            }
          }
        }
      }
    }
    if (uVar3 == 0) {
      lVar7 = 0;
    }
    else {
      puVar8 = auStack_458 + 4;
      lVar7 = 1;
      while (uVar3 = uVar3 - 1, uVar3 != 0) {
        uVar5 = auStack_458[lVar7 * 2 + 1] + auStack_458[lVar7 * 2];
        if (uVar5 < *puVar8) {
          uVar5 = *puVar8;
          auStack_458[lVar7 * 2 + 3] = puVar8[1];
          auStack_458[lVar7 * 2 + 2] = uVar5;
          lVar7 = lVar7 + 1;
        }
        else {
          uVar1 = puVar8[1] + *puVar8;
          if (uVar5 < uVar1) {
            auStack_458[lVar7 * 2 + 1] = uVar1 - auStack_458[lVar7 * 2];
          }
        }
        puVar8 = puVar8 + 2;
      }
    }
    puVar8 = auStack_458 + 3;
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      recovered_10002c84(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_10010118 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002c84(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_10010120 == 0) {
      DAT_10010120 = DAT_10010118;
    }
    DAT_10010110 = 1;
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118
#undef DAT_10010120
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef auStack_458
#undef local_48

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000940
 */

bool recovered_10000940(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_10000684();
  bVar1 = recovered_1000097c(param_1,param_2,param_3);
  DAT_10010114 = 0;
  return bVar1;
}

#undef DAT_10010114

#undef DAT_10010111
#define DAT_10010111 (*(byte *)(((uintptr_t)pf_module_state + 0x7881U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7890U)))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
#define local_61 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000097c
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_1000097c(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long *plVar1;
  bool bVar2;
  int extraout_w0 = 0;
  int extraout_w0_00 = 0;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;

  bVar2 = false;
  if (((param_1 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != 0)) {
    if ((DAT_10010111 & 1) == 0) {
      DAT_10010111 = 1;
      recovered_100006bc();
      for (lVar10 = 0; lVar10 != param_3; lVar10 = lVar10 + 1) {
        plVar9 = (long *)param_1[lVar10];
        uVar3 = param_2[lVar10];
        plVar1 = (long *)((long)plVar9 + uVar3);
        if (CARRY8((ulong)plVar9,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)plVar9 < uVar3 || plVar1 <= plVar9) {
          DAT_10010111 = 0;
          return false;
        }
        if ((ulong)plVar9 >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)plVar9 >> 0x1a < 0x21) &&
             (recovered_10002d88((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            DAT_10010111 = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x10000a7c;
        }
        else {
          recovered_10002d88((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            DAT_10010111 = 0;
            return false;
          }
joined_r0x10000a7c:
          if ((local_61 & 1) == 0) {
            DAT_10010111 = 0;
            return false;
          }
        }
        lVar4 = 0;
        while (lVar10 != lVar4) {
          plVar7 = (long *)param_1[lVar4];
          plVar8 = (long *)((long)plVar7 + param_2[lVar4]);
          if (CARRY8((ulong)plVar7,param_2[lVar4])) {
            plVar8 = (long *)0xffffffffffffffff;
          }
          lVar4 = lVar4 + 1;
          if (plVar7 < plVar1 && plVar9 < plVar8) {
            DAT_10010111 = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_10010118;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && plVar9 < plVar7) {
            DAT_10010111 = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_10010118;
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = *puVar5;
        puVar5 = (ulong *)(uVar3 + 8);
        uStack_70 = uVar6;
      } while (uVar3 != 0);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        recovered_10002c84(*param_1,*param_2,&uStack_70);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_10010120 == 0) {
        DAT_10010120 = DAT_10010118;
      }
      DAT_10010111 = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_10010111
#undef DAT_10010118
#undef DAT_10010120
#undef uStack_70
#undef local_61

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b78
 */

bool recovered_10000b78(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = param_2;
  uStack_18 = param_1;
  recovered_10000684();
  bVar1 = recovered_1000097c(&uStack_18,&local_20,1);
  DAT_10010114 = 0;
  return bVar1;
}

#undef DAT_10010114
#undef local_20
#undef uStack_18

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bb4
 */

ulong recovered_10000bb4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000684();
  recovered_100006bc();
  uVar1 = 0;
  for (plVar2 = &DAT_10010118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_10010114 = 0;
  return uVar1;
}

#undef DAT_10010114
#undef DAT_10010118

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c14
 */

long recovered_10000c14(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000684();
  recovered_100006bc();
  lVar1 = 0;
  for (plVar2 = &DAT_10010118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  DAT_10010114 = 0;
  return lVar1;
}

#undef DAT_10010114
#undef DAT_10010118

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c68
 */

ulong recovered_10000c68(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_10000684();
  recovered_100006bc();
  uVar1 = 0;
  for (plVar2 = &DAT_10010118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_10010114 = 0;
  return uVar1;
}

#undef DAT_10010114
#undef DAT_10010118

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb8
 */

long recovered_10000cb8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_10000684();
  recovered_100006bc();
  lVar1 = 0;
  for (plVar2 = &DAT_10010118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  DAT_10010114 = 0;
  return lVar1;
}

#undef DAT_10010114
#undef DAT_10010118

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cfc
 */

ulong * recovered_10000cfc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000684();
  puVar1 = recovered_10000d28(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_10010114 = 0;
  return puVar1;
}

#undef DAT_10010114

#undef DAT_10010118
#define DAT_10010118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7888U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d28
 */

ulong * recovered_10000d28(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;

  uVar1 = param_1 + 0xf;
  if (0xf < uVar1) {
    recovered_100006bc();
    puVar4 = DAT_10010118;
    puVar3 = DAT_10010118;
    if (DAT_10010120 != (ulong *)0x0) {
      puVar3 = DAT_10010120;
    }
    if (puVar3 != (ulong *)0x0) {
      uVar5 = uVar1 & 0xfffffffffffffff0;
      puVar6 = (ulong *)((long)param_2 + 0xfU & 0xfffffffffffffff0);
      puVar10 = puVar3;
      do {
        if ((char)puVar10[3] == '\x01') {
          uVar7 = *puVar10;
          if (uVar5 <= uVar7) {
            puVar2 = puVar10 + 4;
            if (puVar2 < param_2) {
              if ((param_2 < (ulong *)0xfffffffffffffff1) &&
                 (puVar2 < (ulong *)0xffffffffffffffcf || puVar10 == (ulong *)0xffffffffffffffaf)) {
                puVar8 = puVar6;
                if (puVar6 <= puVar10 + 10) {
                  puVar8 = puVar10 + 10;
                }
                uVar9 = (long)puVar8 - (long)puVar2;
                if (uVar9 < uVar7) goto LAB_10000dd8;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000dd8:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e14;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000e14:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000ebc;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e70;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000e70:
                        if (((ulong)puVar8 & 0xf) != 0) {
                          return (ulong *)0x0;
                        }
                        uVar1 = (long)puVar8 - (long)puVar2;
                        if (puVar8 < puVar2 || uVar1 == 0) {
                          return (ulong *)0x0;
                        }
                        if (uVar1 < 0x30 || uVar7 < uVar1) {
                          return (ulong *)0x0;
                        }
                        puVar11 = puVar8 + -4;
                        *puVar11 = uVar7 - uVar1;
                        uVar7 = puVar10[1];
                        puVar8[-3] = uVar7;
                        puVar8[-2] = (ulong)puVar10;
                        *(undefined1 *)(puVar8 + -1) = 1;
                        if (uVar7 != 0) {
                          *(ulong **)(uVar7 + 0x10) = puVar11;
                        }
                        *puVar10 = uVar1 - 0x20;
                        puVar10[1] = (ulong)puVar11;
LAB_10000ebc:
                        recovered_10002dd8(puVar11,uVar5);
                        *(undefined1 *)(puVar11 + 3) = 0;
                        DAT_10010120 = DAT_10010118;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_10010120 = (ulong *)puVar11[1];
                        }
                        return puVar11 + 4;
                      }
                    }
                  }
                }
                *(undefined1 *)(puVar10 + 3) = 0;
              }
            }
          }
        }
        puVar2 = puVar10 + 1;
        puVar10 = puVar4;
        if ((ulong *)*puVar2 != (ulong *)0x0) {
          puVar10 = (ulong *)*puVar2;
        }
      } while (puVar10 != (ulong *)0x0 && puVar10 != puVar3);
    }
  }
  return (ulong *)0x0;
}

#undef DAT_10010118
#undef DAT_10010120

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee4
 */

void recovered_10000ee4(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000684();
  recovered_10000d28(param_1,(ulong *)0x0,param_2);
  DAT_10010114 = 0;
  return;
}

#undef DAT_10010114

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f1c
 */

ulong * recovered_10000f1c(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_10000684();
  if (param_3 < param_2) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000d28(param_1,param_2,param_3);
  }
  DAT_10010114 = 0;
  return puVar1;
}

#undef DAT_10010114

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f60
 */

void recovered_10000f60(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10000684();
  recovered_10000f88(param_1);
  DAT_10010114 = 0;
  return;
}

#undef DAT_10010114

#undef DAT_10010120
#define DAT_10010120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f88
 */

void recovered_10000f88(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_100006bc();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002e2c(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002e2c(puVar2);
      puVar1 = puVar2;
    }
    DAT_10010120 = puVar1;
  }
  return;
}

#undef DAT_10010120

#undef DAT_10010114
#define DAT_10010114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x7884U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ffc
 */

ulong * recovered_10000ffc(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;

  recovered_10000684();
  if (param_1 == (ulong *)0x0) {
    puVar2 = recovered_10000d28(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_10010114 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000f88((long)param_1);
    DAT_10010114 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_10010114 = 0;
    return (ulong *)0x0;
  }
  recovered_100006bc();
  uVar7 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar2 = param_1 + -4;
  uVar3 = *puVar2;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7 - 1) {
      DAT_10010114 = 0;
      return (ulong *)0x0;
    }
    if (uVar3 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar3) {
        DAT_10010114 = 0;
        return (ulong *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < param_2) {
      DAT_10010114 = 0;
      return (ulong *)0x0;
    }
    uVar1 = recovered_10002dd8(puVar2,uVar7);
    if ((int)uVar1 == 0) {
      DAT_10010114 = 0;
      return param_1;
    }
    DAT_10010114 = 0;
    DAT_10010120 = param_1[-3];
    return param_1;
  }
  puVar6 = puVar2;
  for (uVar4 = uVar3;
      (((uVar4 < uVar7 && (puVar5 = (ulong *)puVar6[1], puVar5 != (ulong *)0x0)) &&
       ((char)puVar5[3] == '\x01')) &&
      ((uVar4 < 0xffffffffffffffe0 && (ulong *)((long)puVar6 + uVar3 + 0x20) == puVar5 &&
       (uVar3 = *puVar5, uVar3 <= -uVar4 - 0x21)))); uVar4 = uVar4 + uVar3 + 0x20) {
    puVar6 = puVar5;
  }
  if (uVar7 - 1 < uVar4) {
    if (uVar4 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar4) goto LAB_1001c124;
    }
    else if (0xffffffffffffffb0 < param_2) goto LAB_1001c124;
    do {
      uVar3 = *puVar2;
      if (uVar7 <= uVar3) goto LAB_10001128;
      uVar3 = recovered_10002e4c(puVar2);
    } while ((uVar3 & 1) != 0);
    uVar3 = *puVar2;
LAB_10001128:
    if (uVar7 <= uVar3) {
      uVar1 = recovered_10002dd8(puVar2,uVar7);
      if ((int)uVar1 != 0) {
        DAT_10010120 = param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_10010114 = 0;
      return param_1;
    }
  }
  else {
LAB_1001c124:
    puVar2 = recovered_10000d28(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_1000147c(puVar2,param_1,uVar3);
      recovered_10000f88((long)param_1);
      DAT_10010114 = 0;
      return puVar2;
    }
  }
  DAT_10010114 = 0;
  return (ulong *)0x0;
}

#undef DAT_10010114
#undef DAT_10010120

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_100011a4(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    uVar2 = (uint)param_1 << (ulong)(param_2 & 0x1f);
    uVar3 = (ulong)uVar2;
    uVar1 = (int)(param_1 >> 0x20) << (ulong)(param_2 & 0x1f) |
            ((uint)param_1 >> 1) >> (ulong)(~param_2 & 0x1f);
    if (0x1f < param_2) {
      uVar1 = uVar2;
    }
    if (0x1f < param_2) {
      uVar3 = 0;
    }
    param_1 = 0;
    if (param_2 < 0x40) {
      param_1 = uVar3 | (ulong)uVar1 << 0x20;
    }
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_100011e8(ulong param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return 0;
    }
    uVar2 = (uint)(param_1 >> 0x20);
    uVar1 = uVar2 >> (ulong)(param_2 & 0x1f);
    uVar3 = (ulong)uVar1 << 0x20;
    uVar2 = (uVar2 << 1) << (ulong)(~param_2 & 0x1f) | (uint)param_1 >> (ulong)(param_2 & 0x1f);
    if (0x1f < param_2) {
      uVar2 = uVar1;
    }
    if (0x1f < param_2) {
      uVar3 = 0;
    }
    param_1 = uVar3 | uVar2;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10001234(long param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  ulong in_x10;

  if (0 < (int)param_2) {
    if (0x3f < param_2) {
      return in_x10;
    }
    iVar1 = (int)((ulong)param_1 >> 0x20);
    uVar2 = iVar1 >> (param_2 & 0x1f);
    if (0x1f < param_2) {
      uVar2 = iVar1 >> 0x1f;
    }
    in_x10 = (ulong)uVar2;
  }
  return in_x10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001284(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = 0;
    uVar6 = 0x3f;
    do {
      uVar1 = param_1 >> (uVar6 & 0x3f) & 1 | lVar5 << 1;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = 1L << (uVar6 & 0x3f);
      }
      uVar4 = uVar2 | uVar4;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = param_2;
      }
      lVar5 = uVar1 - uVar2;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (-1 < (int)uVar3);
  }
  return uVar4;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_1000128c(ulong param_1,ulong param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  if (param_2 == 0) {
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar5 = 0;
    uVar6 = 0x3f;
    do {
      uVar1 = param_1 >> (uVar6 & 0x3f) & 1 | lVar5 << 1;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = 1L << (uVar6 & 0x3f);
      }
      uVar4 = uVar2 | uVar4;
      uVar2 = 0;
      if (param_2 <= uVar1) {
        uVar2 = param_2;
      }
      lVar5 = uVar1 - uVar2;
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
    } while (-1 < (int)uVar3);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar5;
  }
  return uVar4;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack_18 (*(undefined8 *)(frame + 16))
undefined8 recovered_100012ec(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_1000128c(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000130c(ulong param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = -param_1;
  if (-1 < (long)param_1) {
    uVar1 = param_1;
  }
  uVar2 = -param_2;
  if (-1 < (long)param_2) {
    uVar2 = param_2;
  }
  lVar4 = recovered_1000128c(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_28 (*(long *)(frame + 16))
long recovered_1000134c(long param_1,long param_2)

{
  unsigned char frame[88] = {0};

  long lVar1;
  long lVar2;

  if (param_2 == 0) {
    return 0;
  }
  lVar2 = -param_1;
  if (-1 < param_1) {
    lVar2 = param_1;
  }
  lVar1 = -param_2;
  if (-1 < param_2) {
    lVar1 = param_2;
  }
  lStack_28 = 0;
  recovered_1000128c(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10001398(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100013a0(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100013ac(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_100013f0(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10001430(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000147c
 */

void * recovered_1000147c(void *dst,void *src,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((bytes < 0x10) || ((((uint)src ^ (uint)dst) & 7) != 0)) {
    puVar3 = dst;
  }
  else {
    for (puVar3 = dst; (bytes != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)src;
      src = (undefined1 *)((long)src + 1);
      bytes = bytes - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < bytes + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)src + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    bytes = bytes + lVar4;
    while (7 < bytes) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)src + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      bytes = bytes - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    src = (void *)((long)src + (lVar6 - lVar4));
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *puVar3 = *(undefined1 *)src;
    src = (undefined1 *)((long)src + 1);
    puVar3 = puVar3 + 1;
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001554
 */

void * recovered_10001554(void *dst,void *src,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((dst != src) && (bytes != 0)) {
    puVar2 = (undefined1 *)((long)src + bytes);
    if ((dst >= src && dst <= puVar2) && (dst < src || puVar2 != dst)) {
      puVar3 = (undefined1 *)((long)dst + bytes);
      uVar1 = bytes;
      if ((0xf < bytes) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (bytes != 0 && (((int)dst + (int)bytes & 7U) != 0)); bytes = bytes - 1) {
          *(undefined1 *)((long)dst + (bytes - 1)) = *(undefined1 *)((long)src + (bytes - 1));
        }
        for (; 0x1f < bytes; bytes = bytes - 0x20) {
          *(undefined8 *)((long)dst + (bytes - 8)) = *(undefined8 *)((long)src + (bytes - 8));
          *(undefined8 *)((long)dst + (bytes - 0x10)) = *(undefined8 *)((long)src + (bytes - 0x10));
          *(undefined8 *)((long)dst + (bytes - 0x18)) = *(undefined8 *)((long)src + (bytes - 0x18));
          *(undefined8 *)((long)dst + (bytes - 0x20)) = *(undefined8 *)((long)src + (bytes - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = bytes; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)dst + bytes + lVar4 + -8) =
               *(undefined8 *)((long)src + bytes + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)dst + lVar4 + bytes);
        puVar2 = (undefined1 *)((long)src + lVar4 + bytes);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      dst = recovered_1000147c(dst,src,bytes);
    }
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001668
 */

void * recovered_10001668(void *dst,int byte,ulong bytes)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = dst;
  if (0xf < bytes) {
    uVar3 = (ulong)(byte & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = dst; (bytes != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)byte;
      bytes = bytes - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < bytes; bytes = bytes - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < bytes; bytes = bytes - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; bytes != 0; bytes = bytes - 1) {
    *(char *)puVar2 = (char)byte;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return dst;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001700
 */

void recovered_10001700(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (0xf < (ulong)param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (undefined1 *)((long)param_1 + 1);
    }
    for (; 0x1f < (ulong)param_2; param_2 = param_2 - 0x20) {
      *(ulong *)param_1 = uVar2;
      *(ulong *)((long)param_1 + 8) = uVar2;
      *(ulong *)((long)param_1 + 0x10) = uVar2;
      *(ulong *)((long)param_1 + 0x18) = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 0x20);
    }
    for (; 7 < (ulong)param_2; param_2 = param_2 - 8) {
      *(ulong *)param_1 = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 8);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001704
 */

void recovered_10001704(undefined1 *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;

  if (0xf < (ulong)param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (undefined1 *)((long)param_1 + 1);
    }
    for (; 0x1f < (ulong)param_2; param_2 = param_2 - 0x20) {
      *(ulong *)param_1 = uVar2;
      *(ulong *)((long)param_1 + 8) = uVar2;
      *(ulong *)((long)param_1 + 0x10) = uVar2;
      *(ulong *)((long)param_1 + 0x18) = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 0x20);
    }
    for (; 7 < (ulong)param_2; param_2 = param_2 - 8) {
      *(ulong *)param_1 = uVar2;
      param_1 = (undefined1 *)((long)param_1 + 8);
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *param_1 = 0;
    param_1 = (undefined1 *)((long)param_1 + 1);
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001708(long param_1,char param_2,long param_3)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = (char *)(param_1 + -1);
  do {
    if (param_3 == 0) {
      return (char *)0x0;
    }
    pcVar1 = pcVar1 + 1;
    param_3 = param_3 + -1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000172c
 */

int recovered_1000172c(byte *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < (ulong)param_3) && ((((uint)param_2 ^ (uint)param_1) & 7) == 0)) {
    for (lVar7 = 0; (uVar5 = param_3 - lVar7, uVar5 != 0 && (((uint)param_1 + (int)lVar7 & 7) != 0))
        ; lVar7 = lVar7 + 1) {
      if ((uint)param_1[lVar7] - (uint)param_2[lVar7] != 0) {
        return (uint)param_1[lVar7] - (uint)param_2[lVar7];
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)(param_1 + lVar7) != *(long *)(param_2 + lVar7)) {
        pbVar3 = param_1 + lVar7;
        pbVar4 = param_2 + lVar7;
        goto recovered_10001894;
      }
      if (*(long *)(param_1 + lVar7 + 8) != *(long *)(param_2 + lVar7 + 8)) {
        pbVar3 = param_1 + lVar7 + 8;
        pbVar4 = param_2 + lVar7 + 8;
        goto recovered_10001894;
      }
      if (*(long *)(param_1 + lVar7 + 0x10) != *(long *)(param_2 + lVar7 + 0x10)) {
        pbVar3 = param_1 + lVar7 + 0x10;
        pbVar4 = param_2 + lVar7 + 0x10;
        goto recovered_10001894;
      }
      if (*(long *)(param_1 + lVar7 + 0x18) != *(long *)(param_2 + lVar7 + 0x18)) {
        pbVar3 = param_1 + lVar7 + 0x18;
        pbVar4 = param_2 + lVar7 + 0x18;
        goto recovered_10001894;
      }
      lVar7 = lVar7 + 0x20;
    }
    lVar6 = 0;
    for (param_3 = uVar5; 7 < (ulong)param_3; param_3 = param_3 - 8) {
      if (*(long *)(param_1 + lVar7 + lVar6) != *(long *)(param_2 + lVar7 + lVar6)) {
        pbVar3 = param_1 + lVar6 + lVar7;
        pbVar4 = param_2 + lVar6 + lVar7;
recovered_10001894:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = pbVar3 + lVar7;
          pbVar2 = pbVar4 + lVar7;
          lVar7 = lVar7 + 1;
        } while ((uint)*pbVar1 - (uint)*pbVar2 == 0);
        return (uint)*pbVar1 - (uint)*pbVar2;
      }
      lVar6 = lVar6 + 8;
    }
    param_1 = param_1 + lVar6 + lVar7;
    param_2 = param_2 + lVar6 + lVar7;
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)*param_1 - (uint)*param_2 != 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001894
 */

int recovered_10001894(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;

  lVar4 = 0;
  do {
    if (lVar4 == 8) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + lVar4);
    pbVar2 = (byte *)(param_2 + lVar4);
    lVar4 = lVar4 + 1;
    iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
  } while (iVar3 == 0);
  return iVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018c0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018d0(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018e0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018f4(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001910(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001920(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001930(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001944(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001958(char *text)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = 0;
  while( true ) {
    if (text == (char *)0x0) {
      return 0;
    }
    if (text[uVar1] == '\0') break;
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_1000197c(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0 || (uint)bVar1 != (uint)*param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)bVar1 - (uint)*param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100019a4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *param_1;
    if (bVar1 == 0 || (uint)bVar1 != (uint)*param_2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)bVar1 - (uint)*param_2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100019a8(long param_1,long param_2)

{
  unsigned char frame[64] = {0};

  char cVar1;
  long lVar2;

  lVar2 = 0;
  do {
    cVar1 = *(char *)(param_2 + lVar2);
    *(char *)(param_1 + lVar2) = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100019c0(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_10001958((char *)param_1);
    dst = recovered_100013ac(uVar1 + 1);
    pvVar2 = (void *)0x0;
    if (dst != (void *)0x0) {
      pvVar2 = recovered_1000147c(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return (long)pvVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100019fc(char *param_1,char param_2)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if (*param_1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a24
 */

long recovered_10001a24(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100019fc(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a64
 */

long recovered_10001a64(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100019fc(param_2,*(char *)(param_1 + lVar2)), pcVar1 == (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001aa4(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100019fc(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001ae4(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  long lVar3;

  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      lVar3 = 0;
      do {
        pcVar1 = param_2 + lVar3;
        if (*pcVar1 == '\0') {
          return param_1;
        }
        pcVar2 = param_1 + lVar3;
        lVar3 = lVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


#undef DAT_100089bf
#define DAT_100089bf (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12fU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b20
 */

undefined * recovered_10001b20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_100089bf;
}

#undef DAT_100089bf

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x7770U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b2c
 */

undefined ** recovered_10001b2c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_10010000;
}

#undef PTR_DAT_10010000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10001b38(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10001668(auStack_38,0,0x18);
  bVar1 = recovered_10002ed4(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return local_30;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef local_30

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001bb0(double param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    param_1 = param_1 + param_1;
  }
  for (uVar1 = param_2 & (int)param_2 >> 0x1f; uVar1 != 0; uVar1 = uVar1 + 1) {
    param_1 = param_1 * 0.5;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001be4(double param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;

  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  dVar5 = 0.0;
  if (param_1 != 0.0) {
    iVar3 = 0;
    dVar4 = -param_1;
    if (0.0 <= param_1) {
      dVar4 = param_1;
    }
    for (; 1.0 <= dVar4; dVar4 = dVar4 * 0.5) {
      iVar3 = iVar3 + 1;
    }
    while( true ) {
      bVar2 = false;
      if ((0.0 < dVar4) && (bVar2 = false, !NAN(dVar4))) {
        bVar2 = dVar4 < 0.5;
      }
      if (!bVar2) break;
      dVar4 = dVar4 + dVar4;
      iVar3 = iVar3 + -1;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
    dVar5 = -dVar4;
    if (0.0 <= param_1) {
      dVar5 = dVar4;
    }
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar5;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001c58(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  if (param_2 == 0.0) {
    return ZEXT816(0);
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = param_1 - param_2 * (double)(int)(param_1 / param_2);
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001c7c(double param_1,double param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint128 auVar2;
  uint uVar3;
  double dVar4;
  double dVar5;

  uVar3 = (uint)param_2;
  dVar5 = 0.0;
  if ((double)(int)uVar3 == param_2) {
    if (uVar3 == 0) {
      dVar5 = 1.0;
    }
    else {
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      dVar4 = 1.0;
      for (; uVar1 != 0; uVar1 = uVar1 >> 1) {
        if ((uVar1 & 1) != 0) {
          dVar4 = param_1 * dVar4;
        }
        param_1 = param_1 * param_1;
      }
      dVar5 = 1.0 / dVar4;
      if (-1 < (int)uVar3) {
        dVar5 = dVar4;
      }
    }
  }
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar5;
  return auVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001cdc(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(int)param_1;
  dVar2 = (double)((int)param_1 + -1);
  if (dVar3 <= param_1) {
    dVar2 = dVar3;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar2;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001cf8(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar2 = (double)(int)param_1;
  dVar3 = (double)((int)param_1 + -1);
  if (dVar2 <= param_1) {
    dVar3 = dVar2;
  }
  dVar2 = dVar3 + 1.0;
  if (param_1 <= dVar3) {
    dVar2 = dVar3;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar2;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001d24(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  int iVar2;
  double dVar3;

  dVar3 = 0.0;
  if (0.0 < param_1) {
    iVar2 = 0x18;
    dVar3 = param_1;
    do {
      dVar3 = (dVar3 + param_1 / dVar3) * 0.5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar3;
  return auVar1;
}


#undef DAT_10008890
#define DAT_10008890 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d60
 */

uint128 recovered_10001d60(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;

  if (0.0 < param_1) {
    iVar2 = 0;
    for (; 1.5 < param_1; param_1 = param_1 * 0.5) {
      iVar2 = iVar2 + 1;
    }
    for (; param_1 < 0.75; param_1 = param_1 + param_1) {
      iVar2 = iVar2 + -1;
    }
    dVar5 = 1.0;
    dVar6 = (param_1 + -1.0) / (param_1 + 1.0);
    dVar7 = dVar6 * dVar6;
    dVar4 = 0.0;
    for (uVar3 = 1; uVar3 < 0x14; uVar3 = uVar3 + 2) {
      dVar4 = dVar4 + dVar6 / dVar5;
      dVar6 = dVar7 * dVar6;
      dVar5 = dVar5 + 2.0;
    }
    PF_PART8(auVar1, 8) = 0;
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10008890 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10008890

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10001e0c(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10008898
#define DAT_10008898 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e20
 */

uint128 recovered_10001e20(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001e74(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10008898);
  return auVar1;
}

#undef DAT_10008898

#undef DAT_100088a0
#define DAT_100088a0 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_100088a8
#define DAT_100088a8 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_100088b0
#define DAT_100088b0 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_100088b8
#define DAT_100088b8 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e74
 */

void recovered_10001e74(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_100088a0 < param_1; param_1 = param_1 + DAT_100088b8) {
  }
  for (; param_1 < DAT_100088a8; param_1 = param_1 + DAT_100088b0) {
  }
  return;
}

#undef DAT_100088a0
#undef DAT_100088a8
#undef DAT_100088b0
#undef DAT_100088b8

#undef DAT_100088c0
#define DAT_100088c0 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001eb8
 */

uint128 recovered_10001eb8(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001e74(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_100088c0;
  return auVar1;
}

#undef DAT_100088c0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001f04(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = -param_1;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar2;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001f14(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (param_1 == 0.0) {
    return 0;
  }
  uVar4 = 0;
  dVar6 = -param_1;
  if (0.0 <= param_1) {
    dVar6 = param_1;
  }
  uVar5 = 0x3f;
  dVar7 = 9.223372036854776e+18;
  do {
    bVar3 = dVar7 <= dVar6;
    if (bVar3) {
      dVar6 = dVar6 - dVar7;
    }
    uVar1 = 0;
    if (bVar3) {
      uVar1 = 1L << (uVar5 & 0x3f);
    }
    uVar4 = uVar1 | uVar4;
    dVar7 = dVar7 * 0.5;
    uVar2 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar2;
  } while (-1 < (int)uVar2);
  uVar5 = -uVar4;
  if (0.0 <= param_1) {
    uVar5 = uVar4;
  }
  return uVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001f74(double param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;

  uVar4 = 0;
  if (0.0 < param_1) {
    uVar5 = 0x3f;
    dVar6 = 9.223372036854776e+18;
    do {
      bVar3 = dVar6 <= param_1;
      if (bVar3) {
        param_1 = param_1 - dVar6;
      }
      uVar1 = 0;
      if (bVar3) {
        uVar1 = 1L << (uVar5 & 0x3f);
      }
      uVar4 = uVar1 | uVar4;
      dVar6 = dVar6 * 0.5;
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
    } while (-1 < (int)uVar2);
  }
  return uVar4;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10001fc4(ulong param_1)

{
  unsigned char frame[64] = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001fec(long param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if (param_1 < 0) {
    recovered_10001fc4(-param_1);
    PF_PART8(auVar2, 8) = 0;
    PF_PART8(auVar2, 0) = -extraout_d0;
    return auVar2;
  }
  dVar4 = 1.0;
  dVar3 = 0.0;
  for (; param_1 != 0; param_1 = (ulong)param_1 >> 1) {
    if ((param_1 & 1U) != 0) {
      dVar3 = dVar3 + dVar4;
    }
    dVar4 = dVar4 + dVar4;
  }
  PF_PART8(auVar1, 8) = 0;
  PF_PART8(auVar1, 0) = dVar3;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002010(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002044(int *in_x0,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001be4((double)param_2,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_1000205c(uint in_w0,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001bb0((double)param_2,in_w0);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002074(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001c7c((double)param_1,(double)param_2);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002090(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)param_1;
  fVar2 = (float)((int)param_1 + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100020b4(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001cf8((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_100020cc(double param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double dVar4;

  if (param_1 < 0.0) {
    dVar4 = (double)(int)param_1;
    dVar3 = (double)((int)param_1 + -1);
    if (dVar4 <= param_1) {
      dVar3 = dVar4;
    }
    dVar4 = dVar3 + 1.0;
    if (param_1 <= dVar3) {
      dVar4 = dVar3;
    }
    PF_PART8(auVar1, 8) = 0;
    PF_PART8(auVar1, 0) = dVar4;
    return auVar1;
  }
  dVar4 = (double)(int)param_1;
  dVar3 = (double)((int)param_1 + -1);
  if (dVar4 <= param_1) {
    dVar3 = dVar4;
  }
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar3;
  return auVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100020f4(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_100020cc((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_1000210c(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001d24((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002124(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001d60((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000213c(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002150(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001e20((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002168(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001eb8((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002180(float param_1)

{
  unsigned char frame[64] = {0};

  float fVar1;

  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  return fVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10002190(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;

  for (pbVar5 = param_1; bVar2 = *pbVar5,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar5 = pbVar5 + 1) {
  }
  uVar6 = (ulong)(bVar2 == 0x2d || bVar2 == 0x2b);
  pbVar4 = pbVar5;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar4 = pbVar5 + 1;
  }
  if (param_3 == 0x10) {
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10001e20;
  }
  else {
    if (param_3 != 0) {
      if (param_3 - 0x25 < 0xffffffdd) {
        if (param_2 == (undefined8 *)0x0) {
          return 0;
        }
        *param_2 = param_1;
        return 0;
      }
      goto LAB_100016c0;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_100016c0;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_100016c0;
    }
LAB_10001e20:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_100016c0:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_10002294((uint)*pbVar4);
    if (param_3 <= uVar3) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar3;
    param_1 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar1 = -lVar7;
  if (bVar2 != 0x2d) {
    lVar1 = lVar7;
  }
  return lVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10002294(int param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = param_1 - 0x37;
  if (0x19 < param_1 - 0x41U) {
    uVar1 = 0xffffffff;
  }
  if (param_1 - 0x61U < 0x1a) {
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar1 = param_1 - 0x30U;
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100022c4(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;

  pbVar6 = param_1;
  while( true ) {
    bVar3 = *pbVar6;
    if ((4 < bVar3 - 9) && (bVar3 != 0x20)) break;
    pbVar6 = pbVar6 + 1;
  }
  if (bVar3 == 0x2b) {
    bVar4 = false;
    pbVar6 = pbVar6 + 1;
  }
  else if (bVar3 == 0x2d) {
    pbVar6 = pbVar6 + 1;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (param_3 == 0x10) {
    if (*pbVar6 != 0x30) {
      param_3 = 0x10;
      goto LAB_10001814;
    }
    bVar3 = pbVar6[1];
    uVar5 = 0x10;
  }
  else {
    if (param_3 != 0) {
      if (param_3 - 0x25 < 0xffffffdd) {
        if (param_2 == (undefined8 *)0x0) {
          return 0;
        }
        *param_2 = param_1;
        return 0;
      }
      goto LAB_10001814;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10001814;
    }
    bVar3 = pbVar6[1];
    uVar5 = 8;
  }
  pbVar2 = pbVar6 + 2;
  param_3 = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    param_3 = uVar5;
  }
  pbVar6 = pbVar2;
LAB_10001814:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_10002294((uint)*pbVar6);
    if (param_3 <= uVar5) break;
    lVar7 = lVar7 * (ulong)param_3 + (ulong)uVar5;
    param_1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  lVar1 = -lVar7;
  if (!bVar4) {
    lVar1 = lVar7;
  }
  return lVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_100023e8(byte *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint128 auVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  double dVar12;
  double dVar13;
  double dVar14;

  for (pbVar7 = param_1; bVar2 = *pbVar7,
      bVar2 < 0x21 && (1L << ((ulong)bVar2 & 0x3f) & 0x100003e00U) != 0; pbVar7 = pbVar7 + 1) {
  }
  bVar8 = false;
  if (bVar2 == 0x2d || bVar2 == 0x2b) {
    pbVar7 = pbVar7 + 1;
  }
  dVar12 = 0.0;
  while( true ) {
    bVar3 = *pbVar7;
    uVar4 = bVar3 - 0x30U;
    if (9 < uVar4) break;
    dVar12 = (double)uVar4 + dVar12 * 10.0;
    pbVar7 = pbVar7 + 1;
    bVar8 = true;
  }
  if (bVar3 == 0x2e) {
    dVar13 = 1.0;
    dVar14 = 0.0;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar7;
      if (9 < bVar3 - 0x30U) break;
      dVar14 = (double)(bVar3 - 0x30U) + dVar14 * 10.0;
      dVar13 = dVar13 * 10.0;
      bVar8 = true;
    }
  }
  else {
    dVar13 = 1.0;
    dVar14 = 0.0;
  }
  if (bVar8) {
    dVar12 = dVar12 + dVar14 / dVar13;
    if ((bVar3 | 0x20) == 0x65) {
      iVar9 = 0;
      bVar8 = false;
      bVar3 = pbVar7[1];
      iVar10 = 1;
      pbVar1 = pbVar7 + 1;
      if (bVar3 == 0x2d) {
        iVar10 = -1;
        pbVar1 = pbVar7 + 2;
      }
      pbVar11 = pbVar7 + 2;
      iVar6 = 1;
      if (bVar3 != 0x2b) {
        pbVar11 = pbVar1;
        iVar6 = iVar10;
      }
      for (; *pbVar11 - 0x30U < 10; pbVar11 = pbVar11 + 1) {
        iVar9 = (uint)*pbVar11 + iVar9 * 10 + -0x30;
        bVar8 = true;
      }
      if (bVar8) {
        dVar12 = recovered_10001bb0(dVar12,iVar9 * iVar6);
        pbVar7 = pbVar11;
      }
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = pbVar7;
    }
    dVar13 = -dVar12;
    if (bVar2 != 0x2d) {
      dVar13 = dVar12;
    }
  }
  else {
    dVar13 = 0.0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
  }
  PF_PART8(auVar5, 8) = 0;
  PF_PART8(auVar5, 0) = dVar13;
  return auVar5;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002578(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_100023e8(in_x0,in_x1);
  return (float)PF_PART8(auVar1, 0);
}


#undef str_100089c1
#define str_100089c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002590
 */

int recovered_10002590(byte *param_1,ulong param_2,byte *param_3,double *param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  double *pdVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;

  local_8c = 0;
  local_88 = param_2;
  local_80 = param_1;
  pdStack_78 = param_4;
  if (param_2 != 0) {
    *param_1 = 0;
  }
LAB_10002600:
  bVar10 = *param_3;
  if (bVar10 != 0x25) {
    if (bVar10 == 0) {
      if (param_2 != 0) {
        *local_80 = 0;
      }
      return local_8c;
    }
    pbVar9 = param_3;
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = bVar10;
      goto LAB_1000262c;
    }
    goto LAB_10002630;
  }
  pbVar9 = param_3 + 1;
  bVar10 = *pbVar9;
  if (bVar10 != 0x25) {
    pbVar9 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar10)) {
      case 0x2a:
        goto code_r0x100026c0;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_100026a8;
      default:
        if ((bVar10 != 0x20) && (bVar10 != 0x23)) goto LAB_100026a8;
      case 0x2b:
      case 0x2d:
      case 0x30:
        bVar10 = *pbVar9;
        param_3 = param_3 + 1;
        pbVar9 = pbVar9 + 1;
      }
    } while( true );
  }
  if (1 < local_88) {
    *local_80 = 0x25;
    local_88 = local_88 - 1;
    local_80 = local_80 + 1;
  }
  local_8c = local_8c + 1;
  goto LAB_10002988;
LAB_100026a8:
  do {
    pbVar9 = param_3 + 1;
    bVar10 = *pbVar9;
    param_3 = pbVar9;
  } while (bVar10 - 0x30U < 10);
LAB_100026d0:
  if (bVar10 == 0x2e) {
    pbVar14 = pbVar9 + 1;
    bVar10 = *pbVar14;
    if (bVar10 == 0x2a) {
      uVar8 = *(uint *)pdStack_78;
      bVar10 = pbVar9[2];
      pbVar9 = pbVar9 + 2;
      pdStack_78 = pdStack_78 + 1;
    }
    else {
      uVar8 = 0;
      while( true ) {
        bVar2 = bVar10 - 0x30U;
        pbVar9 = pbVar14;
        if (9 < bVar2) break;
        iVar13 = uVar8 * 10;
        bVar1 = (int)uVar8 <= (int)((bVar2 ^ 0x7ffffffe) / 10);
        uVar8 = 0x7fffffff;
        if (bVar1) {
          uVar8 = iVar13 + (uint)bVar2;
        }
        pbVar14 = pbVar14 + 1;
        bVar10 = *pbVar14;
      }
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (bVar10 == 0x4c) {
    pbVar9 = pbVar9 + 1;
    uVar11 = 8;
    bVar1 = true;
  }
  else if (bVar10 == 0x7a) {
    bVar1 = false;
    pbVar9 = pbVar9 + 1;
    uVar11 = 5;
  }
  else if (bVar10 == 0x6a) {
    bVar1 = false;
    pbVar9 = pbVar9 + 1;
    uVar11 = 7;
  }
  else if (bVar10 == 0x6c) {
    bVar4 = pbVar9[1] == 0x6c;
    uVar11 = 3;
    if (bVar4) {
      uVar11 = 4;
    }
LAB_100027bc:
    bVar1 = false;
    pbVar14 = pbVar9 + 1;
    if (bVar4) {
      pbVar14 = pbVar9 + 2;
    }
    pbVar9 = pbVar14;
  }
  else if (bVar10 == 0x74) {
    bVar1 = false;
    pbVar9 = pbVar9 + 1;
    uVar11 = 6;
  }
  else {
    if (bVar10 == 0x68) {
      bVar4 = pbVar9[1] == 0x68;
      uVar11 = 1;
      if (!bVar4) {
        uVar11 = 2;
      }
      goto LAB_100027bc;
    }
    bVar1 = false;
    uVar11 = 0;
  }
  bVar10 = *pbVar9;
  switch((uintptr_t)(bVar10)) {
  case 99:
    pdVar3 = pdStack_78 + 1;
    if (1 < local_88) {
      *local_80 = (byte)*(uint *)pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      goto LAB_1000262c;
    }
    break;
  case 100:
  case 0x69:
code_r0x100028dc:
    switch((uintptr_t)(uVar11)) {
    case 1:
      dVar5 = (double)(long)*(char *)pdStack_78;
      break;
    case 2:
      dVar5 = (double)(long)*(short *)pdStack_78;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      dVar5 = *pdStack_78;
      break;
    default:
      dVar5 = (double)(long)(int)*(uint *)pdStack_78;
    }
    if ((long)dVar5 < 0) {
      if (1 < local_88) {
        *local_80 = 0x2d;
        local_88 = local_88 - 1;
        local_80 = local_80 + 1;
      }
      local_8c = local_8c + 1;
      dVar5 = (double)-(long)dVar5;
    }
LAB_10002978:
    pdStack_78 = pdStack_78 + 1;
    uVar8 = SUB84(dVar5,0);
    uVar6 = 10;
code_r0x10002980:
    uVar7 = 0;
LAB_10002984:
    recovered_10002b70((long *)&local_80,&local_88,&local_8c,uVar8,uVar6,uVar7);
    goto LAB_10002988;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002c10((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x138U));
    }
    else {
      dVar5 = *pdStack_78;
      if (dVar5 < 0.0) {
        if (1 < local_88) {
          *local_80 = 0x2d;
          local_88 = local_88 - 1;
          local_80 = local_80 + 1;
        }
        local_8c = local_8c + 1;
        dVar5 = -dVar5;
      }
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(int)dVar5,10,0);
      pbVar14 = local_80;
      if (1 < local_88) {
        pbVar14 = local_80 + 1;
        *local_80 = 0x2e;
        local_88 = local_88 - 1;
      }
      dVar5 = dVar5 - (double)(int)dVar5;
      iVar13 = 6;
      do {
        iVar17 = (int)(dVar5 * 10.0);
        local_80 = pbVar14;
        if (1 < local_88) {
          local_80 = pbVar14 + 1;
          *pbVar14 = (char)iVar17 + 0x30;
          local_88 = local_88 - 1;
        }
        dVar5 = dVar5 * 10.0 - (double)iVar17;
        iVar13 = iVar13 + -1;
        pbVar14 = local_80;
      } while (iVar13 != 0);
      local_8c = local_8c + 7;
    }
    goto LAB_10002988;
  default:
    switch((uintptr_t)(bVar10)) {
    case 0x70:
      uVar8 = SUB84(*pdStack_78,0);
      pdStack_78 = pdStack_78 + 1;
      recovered_10002c10((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x166U));
      uVar6 = 0x10;
      goto code_r0x10002980;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar14 = (byte *)str_100089c1;
      if ((byte *)(uintptr_t)pf_double_bits(*pdStack_78) != (byte *)0x0) {
        pbVar14 = (byte *)(uintptr_t)pf_double_bits(*pdStack_78);
      }
      uVar12 = local_88;
      pbVar15 = local_80;
      while( true ) {
        pdStack_78 = pdVar3;
        if ((uVar8 == 0) || (*pbVar14 == 0)) break;
        pbVar16 = pbVar15;
        if (1 < uVar12) {
          pbVar16 = pbVar15 + 1;
          *pbVar15 = *pbVar14;
          uVar12 = uVar12 - 1;
          local_88 = uVar12;
          local_80 = pbVar16;
        }
        uVar8 = uVar8 - (0 < (int)uVar8);
        pbVar14 = pbVar14 + 1;
        pbVar15 = pbVar16;
        local_8c = local_8c + 1;
      }
      goto LAB_10002988;
    case 0x75:
      switch((uintptr_t)(uVar11)) {
      case 1:
        dVar5 = (double)(ulong)*(byte *)pdStack_78;
        break;
      case 2:
        dVar5 = (double)(ulong)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        dVar5 = *pdStack_78;
        break;
      default:
        dVar5 = (double)(ulong)*(uint *)pdStack_78;
      }
      goto LAB_10002978;
    case 0x78:
code_r0x10002898:
      switch((uintptr_t)(uVar11)) {
      case 1:
        uVar8 = (uint)*(byte *)pdStack_78;
        break;
      case 2:
        uVar8 = (uint)*(ushort *)pdStack_78;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        uVar8 = SUB84(*pdStack_78,0);
        break;
      default:
        uVar8 = *(uint *)pdStack_78;
      }
      pdStack_78 = pdStack_78 + 1;
      uVar7 = (uint)(*pbVar9 == 0x58);
      uVar6 = 0x10;
      goto LAB_10002984;
    default:
      if (bVar10 == 0x49) goto code_r0x100028dc;
      if (bVar10 == 0x58) goto code_r0x10002898;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_1000262c:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10002630:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002988:
  param_3 = pbVar9 + 1;
  goto LAB_10002600;
code_r0x100026c0:
  pdStack_78 = pdStack_78 + 1;
  bVar10 = *pbVar9;
  goto LAB_100026d0;
}

#undef str_100089c1
#undef local_8c
#undef local_88
#undef local_80
#undef pdStack_78

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10002b34(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64] = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef str_100089d4
#define str_100089d4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x144U)))
#undef str_100089e5
#define str_100089e5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x155U)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

void recovered_10002b70(long *param_1,ulong *param_2,int *param_3,uint param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  pcVar1 = str_100089d4;
  if (param_6 == 0) {
    pcVar1 = str_100089e5;
  }
  uVar6 = (ulong)param_5;
  uVar5 = (ulong)param_4;
  lVar3 = 0;
  do {
    lVar7 = lVar3;
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar5 / uVar6;
    }
    acStack_80[lVar7] = pcVar1[uVar5 - uVar2 * uVar6];
    bVar4 = uVar6 <= uVar5;
    uVar5 = uVar2;
    lVar3 = lVar7 + 1;
  } while (bVar4);
  for (; lVar7 != -1; lVar7 = lVar7 + -1) {
    recovered_10002b34(param_1,param_2,param_3,acStack_80[lVar7]);
  }
  return;
}

#undef str_100089d4
#undef str_100089e5
#undef acStack_80

#undef str_100089c1
#define str_100089c1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x131U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c10
 */

void recovered_10002c10(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_100089c1;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002b34(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_100089c1

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10002c5c(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002590(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_10010110
#define DAT_10010110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7880U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c84
 */

void recovered_10002c84(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;

  uVar4 = param_1 + param_2;
  if (CARRY8(param_1,param_2)) {
    uVar4 = 0xffffffffffffffff;
  }
  bVar1 = 0x44 < param_1 >> 0x19;
  if (((!bVar1 && param_1 < uVar4) && 0x83ffffff < uVar4) &&
      ((bVar1 || uVar4 <= param_1) || uVar4 != 0x84000000)) {
    if (param_1 >> 0x1a < 0x21) {
      recovered_10002d08(param_1,0x84000000 - param_1,param_3);
    }
    if (uVar4 < 0x8a000001) {
      return;
    }
    param_2 = uVar4 - 0x8a000000;
    param_1 = 0x8a000000;
  }
  if (((!CARRY8(param_1,param_2)) && (param_1 < 0xfffffffffffffff1)) && (param_3 != (ulong *)0x0)) {
    plVar3 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar4 = param_2 - ((long)plVar3 - param_1);
    if (((long)plVar3 - param_1 <= param_2 && uVar4 != 0) &&
       (uVar4 = uVar4 & 0xfffffffffffffff0, 0x30 < uVar4)) {
      *plVar3 = uVar4 - 0x20;
      plVar3[1] = 0;
      puVar5 = (undefined1 *)*param_3;
      plVar3[2] = (long)puVar5;
      *(undefined1 *)(plVar3 + 3) = 1;
      puVar2 = &DAT_10010110;
      if (DAT_10010118 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_10010120 == (long *)0x0) {
        DAT_10010120 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118
#undef DAT_10010120

#undef DAT_10010110
#define DAT_10010110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7880U)))
#undef DAT_10010118
#define DAT_10010118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7888U)))
#undef DAT_10010120
#define DAT_10010120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d08
 */

void recovered_10002d08(long param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;

  if (((!CARRY8(param_1,param_2)) && ((ulong)param_1 < 0xfffffffffffffff1)) &&
     (param_3 != (ulong *)0x0)) {
    plVar2 = (long *)(param_1 + 0xfU & 0xfffffffffffffff0);
    uVar3 = param_2 - ((long)plVar2 - param_1);
    if (((ulong)((long)plVar2 - param_1) <= param_2 && uVar3 != 0) &&
       (uVar3 = uVar3 & 0xfffffffffffffff0, 0x30 < uVar3)) {
      *plVar2 = uVar3 - 0x20;
      plVar2[1] = 0;
      puVar4 = (undefined1 *)*param_3;
      plVar2[2] = (long)puVar4;
      *(undefined1 *)(plVar2 + 3) = 1;
      puVar1 = &DAT_10010110;
      if (DAT_10010118 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_10010120 == (long *)0x0) {
        DAT_10010120 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_10010110
#undef DAT_10010118
#undef DAT_10010120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d88
 */

void recovered_10002d88(ulong param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((param_1 < 0xfffffffffffffff1 && param_3 != (undefined1 *)0x0) && param_2 <= ~param_1) {
    *param_3 = 0;
    uVar2 = (param_1 + 0xf & 0xfffffffffffffff0) - param_1;
    uVar1 = param_2 - uVar2;
    if ((uVar2 <= param_2 && uVar1 != 0) && (0x30 < (uVar1 & 0xfffffffffffffff0))) {
      *param_3 = 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dd8
 */

undefined8 recovered_10002dd8(ulong *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;

  uVar1 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
    uVar4 = *param_1 - uVar3;
    if ((uVar3 <= *param_1) && (0x2f < uVar4)) {
      plVar2 = (long *)((long)param_1 + uVar3 + 0x20);
      *plVar2 = uVar4 - 0x20;
      uVar4 = param_1[1];
      *(ulong *)((long)param_1 + uVar3 + 0x28) = uVar4;
      *(ulong **)((long)param_1 + uVar3 + 0x30) = param_1;
      *(undefined1 *)((long)param_1 + uVar3 + 0x38) = 1;
      if (uVar4 != 0) {
        *(long **)(uVar4 + 0x10) = plVar2;
      }
      *param_1 = uVar3;
      param_1[1] = (ulong)plVar2;
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e2c
 */

void recovered_10002e2c(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002e4c(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_10010120
#define DAT_10010120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7890U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e4c
 */

undefined8 recovered_10002e4c(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (((param_1 != (ulong *)0x0) && (puVar2 = (ulong *)param_1[1], puVar2 != (ulong *)0x0)) &&
     ((char)puVar2[3] == '\x01')) {
    uVar3 = *param_1;
    if ((ulong *)((long)param_1 + uVar3 + 0x20) != puVar2) {
      return 0;
    }
    if (0xffffffffffffffdf < uVar3) {
      return 0;
    }
    if (*puVar2 <= -uVar3 - 0x21) {
      if (DAT_10010120 == puVar2) {
        DAT_10010120 = param_1;
      }
      uVar1 = puVar2[1];
      *param_1 = uVar3 + *puVar2 + 0x20;
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        *(ulong **)(uVar1 + 0x10) = param_1;
      }
      return 1;
    }
  }
  return 0;
}

#undef DAT_10010120

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ed4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002ed4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000306c
 */

void recovered_1000306c(char *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010130 != 0) {
          DAT_10010130 = DAT_10010130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003124(1);
        }
        else {
          if (DAT_10010130 - 0x1ffU < 0xfffffffffffffdff || DAT_10010130 == -2) {
            recovered_10003124(0);
          }
          pcVar1 = &DAT_10010138 + DAT_10010130;
          DAT_10010130 = DAT_10010130 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010130
#undef DAT_10010138

#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003124
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003124(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010130 != 0) || (param_1 != 0)) {
    if (DAT_10010130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000147c(local_230,&DAT_10010138,DAT_10010130);
      uVar2 = DAT_10010130;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003e94(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_10010130 = 0;
  }
  return;
}

#undef DAT_10010130
#undef DAT_10010138
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100031b0(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010130 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_1000147c(auStack_230,&DAT_10010138,DAT_10010130);
    uVar2 = DAT_10010130;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003e94(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_10010130 = 0;
  return;
}

#undef DAT_10010130
#undef DAT_10010138
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031b8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100031b8(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010130 != 0) {
    if (DAT_10010130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_1000147c(auStack_230,&DAT_10010138,DAT_10010130);
      uVar2 = DAT_10010130;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003e94(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_10010130 = 0;
  }
  return;
}

#undef DAT_10010130
#undef DAT_10010138
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_100089f9
#define DAT_100089f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x169U)))
#define abStack_160 (*(byte (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031c0
 */

void recovered_100031c0(undefined *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  byte *in_x2;
  uint extraout_w0 = 0;

  in_x2 = &DAT_100089f9;
  if (param_1 != (undefined *)0x0) {
    in_x2 = param_1;
  }
  recovered_10002c5c(abStack_160,0x140,in_x2);
  if (0 < (int)extraout_w0) {
    recovered_1000306c((char *)abStack_160,(ulong)extraout_w0);
  }
  return;
}

#undef DAT_100089f9
#undef abStack_160

#undef DAT_10008a17
#define DAT_10008a17 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x187U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003224
 */

/* WARNING: Removing unreachable block (ram,0x10003270) */

void recovered_10003224(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10003248(((uintptr_t)pf_module_state+0x16cU));
  pcVar4 = &DAT_10008a17;
  for (uVar3 = recovered_10001958(&DAT_10008a17); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010130 != 0) {
        DAT_10010130 = DAT_10010130 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003124(1);
      }
      else {
        if (DAT_10010130 - 0x1ffU < 0xfffffffffffffdff || DAT_10010130 == -2) {
          recovered_10003124(0);
        }
        pcVar1 = &DAT_10010138 + DAT_10010130;
        DAT_10010130 = DAT_10010130 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10008a17
#undef DAT_10010130
#undef DAT_10010138

#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003248
 */

void recovered_10003248(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == 0) {
    return;
  }
  uVar3 = recovered_10001958((char *)param_1);
  if (param_1 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *(char *)param_1;
      if (cVar2 == '\b') {
        if (DAT_10010130 != 0) {
          DAT_10010130 = DAT_10010130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003124(1);
        }
        else {
          if (DAT_10010130 - 0x1ffU < 0xfffffffffffffdff || DAT_10010130 == -2) {
            recovered_10003124(0);
          }
          pcVar1 = &DAT_10010138 + DAT_10010130;
          DAT_10010130 = DAT_10010130 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010130
#undef DAT_10010138

#undef DAT_10008a17
#define DAT_10008a17 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x187U)))
#undef DAT_10010130
#define DAT_10010130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x78a0U)))
#undef DAT_10010138
#define DAT_10010138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x78a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003274
 */

/* WARNING: Removing unreachable block (ram,0x10003270) */

void recovered_10003274(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10003248(((uintptr_t)pf_module_state+0x18aU));
  pcVar4 = &DAT_10008a17;
  for (uVar3 = recovered_10001958(&DAT_10008a17); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010130 != 0) {
        DAT_10010130 = DAT_10010130 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003124(1);
      }
      else {
        if (DAT_10010130 - 0x1ffU < 0xfffffffffffffdff || DAT_10010130 == -2) {
          recovered_10003124(0);
        }
        pcVar1 = &DAT_10010138 + DAT_10010130;
        DAT_10010130 = DAT_10010130 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10008a17
#undef DAT_10010130
#undef DAT_10010138

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003298
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10003298(long param_1,long param_2,char *param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_100031b8();
    bVar2 = recovered_10003e94(0x44);
    bVar1 = false;
    if (bVar2) {
      if (_DAT_82010844 == 0) {
        bVar1 = false;
      }
      else {
        iVar3 = (*(code *)(ulong)_DAT_82010844)(param_1,param_2,param_3,param_4);
        bVar1 = iVar3 != 0;
      }
    }
  }
  return bVar1;
}

#undef DAT_82010844
#undef _DAT_82010844

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003310(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003314(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003318(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_100089f9
#define DAT_100089f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x169U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
#undef str_10008a9b
#define str_10008a9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20bU)))
#undef str_10008aa8
#define str_10008aa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x218U)))
#undef str_10008ab6
#define str_10008ab6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003320
 */

undefined4 * recovered_10003320(long param_1,long param_2)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_1000197c((byte *)param_1,(byte *)str_10008a9b);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_1000197c((byte *)param_1,(byte *)str_10008aa8);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_1000197c((byte *)param_1,(byte *)str_10008ab6);
      if (iVar3 != 0) {
        puVar4 = recovered_100013ac(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001668(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100019fc((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019fc((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019fc((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100019fc((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019fc((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019fc((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100019fc((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002c5c((byte *)(puVar4 + 1),0xf1,&DAT_100089f9);
        recovered_10001668(&uStack_4c,0,0xc);
        uVar6 = recovered_1000355c((char *)param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_10003504:
            recovered_100013f0(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019fc((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100035ac((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003504;
              recovered_1000147c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
                                );
              uVar7 = (ulong)uStack_48;
            }
            else {
              *(ulong *)(puVar4 + 0x3e) = (ulong)uStack_4c;
            }
            *(ulong *)(puVar4 + 0x42) = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          *(undefined8 *)(puVar4 + 0x46) = *(undefined8 *)(puVar4 + 0x42);
          return puVar4;
        }
        return puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_100013ac(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001668(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002c5c((byte *)(puVar4 + 1),0xf1,&DAT_100089f9);
  return puVar4;
}

#undef DAT_100089f9
#undef DAT_10010058
#undef str_10008a9b
#undef str_10008aa8
#undef str_10008ab6
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000355c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_1000355c(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e94(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035ac
 */

undefined8 recovered_100035ac(long param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;

  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x110);
    if (uVar4 < param_2) {
      uVar1 = 0x100;
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 << 1;
      } while (uVar4 < param_2);
      pvVar2 = recovered_10001430(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_10010058 = 0xc;
        *(undefined1 *)(param_1 + 0x129) = 1;
        uVar3 = 0;
      }
      else {
        *(ulong *)(param_1 + 0x110) = uVar4;
        uVar3 = 1;
        *(void **)(param_1 + 0xf8) = pvVar2;
        *(void **)(param_1 + 0x100) = pvVar2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

#undef DAT_10010058

#undef DAT_100089f9
#define DAT_100089f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x169U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
#undef str_10008a9b
#define str_10008a9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20bU)))
#undef str_10008aa8
#define str_10008aa8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x218U)))
#undef str_10008ab6
#define str_10008ab6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x226U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003634
 */

undefined4 * recovered_10003634(long param_1,long param_2,int *param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;

  if (param_3 != (int *)0x0) {
    recovered_10003668(param_3);
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_1000197c((byte *)param_1,(byte *)str_10008a9b);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_1000197c((byte *)param_1,(byte *)str_10008aa8);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_1000197c((byte *)param_1,(byte *)str_10008ab6);
      if (iVar3 != 0) {
        puVar4 = recovered_100013ac(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001668(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100019fc((char *)param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019fc((char *)param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019fc((char *)param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100019fc((char *)param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019fc((char *)param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019fc((char *)param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100019fc((char *)param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002c5c((byte *)(puVar4 + 1),0xf1,&DAT_100089f9);
        recovered_10001668(&uStack_4c,0,0xc);
        uVar6 = recovered_1000355c((char *)param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_10003504:
            recovered_100013f0(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019fc((char *)param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_100035ac((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003504;
              recovered_1000147c(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
                                );
              uVar7 = (ulong)uStack_48;
            }
            else {
              *(ulong *)(puVar4 + 0x3e) = (ulong)uStack_4c;
            }
            *(ulong *)(puVar4 + 0x42) = uVar7;
          }
        }
        if (*(char *)((long)puVar4 + 0x126) == '\x01') {
          *(undefined8 *)(puVar4 + 0x46) = *(undefined8 *)(puVar4 + 0x42);
          return puVar4;
        }
        return puVar4;
      }
      uVar8 = 3;
    }
  }
  puVar4 = recovered_100013ac(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001668(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002c5c((byte *)(puVar4 + 1),0xf1,&DAT_100089f9);
  return puVar4;
}

#undef DAT_100089f9
#undef DAT_10010058
#undef str_10008a9b
#undef str_10008aa8
#undef str_10008ab6
#undef uStack_4c
#undef uStack_48

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003668(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003a8c(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_100013f0(*(void **)(param_1 + 0x40));
    }
    recovered_100013f0(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036ac
 */

long recovered_100036ac(undefined1 *param_1,long param_2,long param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong bytes;
  uint128 auVar1;
  uint128 auVar2;
  long lVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;

  uVar8 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      if ((*param_4 == 0) && (param_4[0x48] == -1)) {
        uVar6 = *(ulong *)(param_4 + 0x46);
        uVar8 = *(ulong *)(param_4 + 0x42) - uVar6;
        if (*(ulong *)(param_4 + 0x42) < uVar6 || uVar8 == 0) {
          uVar8 = 0;
          *(undefined1 *)(param_4 + 0x4a) = 1;
        }
        else {
          PF_PART8(auVar1, 8) = 0;
          PF_PART8(auVar1, 0) = param_2;
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_3;
          uVar7 = param_3 * param_2;
          if (SUB168(auVar1 * auVar2,8) != 0) {
            uVar7 = 0xffffffffffffffff;
          }
          bytes = uVar8;
          if (uVar7 <= uVar8) {
            bytes = uVar7;
          }
          recovered_1000147c(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar6),bytes);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + bytes;
          if (uVar8 < uVar7) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = bytes / (ulong)param_2;
          }
        }
      }
      else {
        lVar9 = 0;
        while( true ) {
          lVar3 = param_2;
          puVar4 = param_1;
          if (lVar9 == param_3) break;
          for (; lVar3 != 0; lVar3 = lVar3 + -1) {
            uVar5 = recovered_100037e0(param_4);
            if (uVar5 == 0xffffffff) {
              return lVar9;
            }
            *puVar4 = (char)uVar5;
            puVar4 = puVar4 + 1;
          }
          param_1 = param_1 + param_2;
          lVar9 = lVar9 + 1;
        }
        uVar8 = param_3;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e0
 */

uint recovered_100037e0(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;

  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if ((char)param_1[0x49] == '\x01') {
    uVar1 = param_1[0x48];
    if (uVar1 != 0xffffffff) {
      param_1[0x48] = -1;
      return uVar1;
    }
    if (*param_1 == 1) {
      uVar4 = *(ulong *)(param_1 + 0xce);
      if (uVar4 < *(ulong *)(param_1 + 0xcc)) {
LAB_10003878:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10003298((long)text,0x1fe,&DAT_100089d3,0);
      if ((bVar2 & 1) != 0) {
        uVar3 = recovered_10001958(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10003878;
      }
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x46);
      if (uVar4 < *(ulong *)(param_1 + 0x42)) {
        *(ulong *)(param_1 + 0x46) = uVar4 + 1;
        return (uint)*(byte *)(*(long *)(param_1 + 0x3e) + uVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return 0xffffffff;
}

#undef DAT_100089d3

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100038c4(long param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;

  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_1000306c((char *)param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_100028b8;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_100035ac((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10001668((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_1000147c((void *)(*(long *)(param_4 + 0x40) + uVar3),(void *)param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_100028b8;
    }
  }
  param_3 = 0;
LAB_100028b8:
  return param_3;
}


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039d4
 */

undefined8 recovered_100039d4(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_10010058 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_100039e0;
        lVar1 = 0x108;
      }
      param_2 = *(long *)((long)param_1 + lVar1) + param_2;
    }
    if (-1 < (long)param_2) {
      *(ulong *)(param_1 + 0x46) = param_2;
      *(bool *)(param_1 + 0x4a) = *(ulong *)(param_1 + 0x42) <= param_2;
      param_1[0x48] = -1;
      return 0;
    }
  }
LAB_100039e0:
  DAT_10010058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a68
 */

undefined8 recovered_10003a68(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a8c
 */

undefined8 recovered_10003a8c(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003c68((char *)(param_1 + 1),*(void **)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_10010058 = 5;
        *(undefined1 *)((long)param_1 + 0x129) = 1;
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
        *(undefined1 *)((long)param_1 + 0x127) = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

#undef DAT_10010058

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10003b00(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x128);
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10003b0c(long param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x129);
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003b18(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10003b2c(uint param_1,long param_2)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = 0xffffffff;
  if ((param_1 != 0xffffffff) && (param_2 != 0)) {
    uVar1 = param_1 & 0xff;
    *(uint *)(param_2 + 0x120) = uVar1;
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return uVar1;
}


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b50
 */

undefined8 recovered_10003b50(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
  }
  else {
    uVar1 = recovered_10003b88((char *)param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_10010058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b88
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003b88(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e94(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x77c8U)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bcc
 */

undefined8 recovered_10003bcc(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
  }
  else {
    recovered_10001668(&uStack_2c,0,0xc);
    uVar1 = recovered_1000355c((char *)param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010058 = 2;
    }
    else {
      uVar1 = recovered_10003c68((char *)param_2,(void *)(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003b88((char *)param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_10010058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_10010058
#undef uStack_28
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c68
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003c68(char *param_1,void *param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e94(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010838
#undef _DAT_82010838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define uStack_38 (*(uint *)(frame + 20))
#define uStack_3c (*(uint *)(frame + 16))
undefined8 recovered_10003cc8(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *dst;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10001668(&uStack_3c,0,0xc);
    uVar2 = recovered_1000355c(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      dst = recovered_100013ac((ulong)uVar1);
      uVar2 = 0;
      if (dst != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_1000147c(dst,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = (long)dst;
        *param_3 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_38
#undef uStack_3c

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10003d68(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003c68(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003d94(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003d98(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003d9c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003da0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003da4(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003da8(byte *param_1,byte *param_2,long param_3)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  int iVar2;

  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    bVar1 = *param_1;
    iVar2 = (uint)bVar1 - (uint)*param_2;
    if (iVar2 != 0) break;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


#undef DAT_10008a2a
#define DAT_10008a2a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19aU)))
#undef str_10008a2d
#define str_10008a2d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19dU)))
#undef str_10008a3a
#define str_10008a3a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1aaU)))
#undef str_10008a44
#define str_10008a44 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b4U)))
#undef str_10008a58
#define str_10008a58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1c8U)))
#undef str_10008a66
#define str_10008a66 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d6U)))
#undef str_10008a78
#define str_10008a78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1e8U)))
#undef str_10008a84
#define str_10008a84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f4U)))
#undef str_10008a95
#define str_10008a95 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x205U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd8
 */

char * recovered_10003dd8(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10008a2a;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003e04_caseD_1;
  case 2:
    return str_10008a2d;
  case 5:
    return str_10008a3a;
  case 9:
    return str_10008a44;
  case 0xc:
    return str_10008a58;
  case 0xd:
    return str_10008a66;
  default:
    if (param_1 == 0x11) {
      return str_10008a78;
    }
    if (param_1 == 0x16) {
      return str_10008a84;
    }
switchD_10003e04_caseD_1:
    return str_10008a95;
  }
}

#undef DAT_10008a2a
#undef str_10008a2d
#undef str_10008a3a
#undef str_10008a44
#undef str_10008a58
#undef str_10008a66
#undef str_10008a78
#undef str_10008a84
#undef str_10008a95

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003e78(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003e7c(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_10010128
#define DAT_10010128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7898U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e80
 */

void recovered_10003e80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010128 = DAT_10010128 + 1;
  return;
}

#undef DAT_10010128

#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e94
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003e94(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return false;
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003f60(long param_1)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Could not recover jumptable at 0x10002e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x48))();
  return;
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003f74(void *context){
 __asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) int recovered_10003fd0(long context,int value){
 __asm__ volatile("cbnz w1,1f\nmov w1, #1\n1:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret");
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004034(void)

{
  unsigned char frame[64] = {0};

  code *pcVar1;

  recovered_10001398();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002efc);
  (*pcVar1)();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10004048(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004050(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004060(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10004034();
}


#undef DAT_10010338
#define DAT_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7aa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004060
 */

long recovered_10004060(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_10004264(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004034();
  }
  *(long *)(lVar1 + 0x10) = DAT_10010338;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_10010338 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_10010338

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_1000408c(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100013ac(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001398();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void * recovered_100040bc(ulong size)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100013ac(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001398();
  }
  return pvVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100040c0(void *pointer)

{
  unsigned char frame[64] = {0};

  recovered_100013f0(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100040d8(void *pointer)

{
  unsigned char frame[64] = {0};

  recovered_100013f0(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100040f0(void *pointer,ulong size)

{
  unsigned char frame[64] = {0};

  recovered_100013f0(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004108(void *pointer,ulong size)

{
  unsigned char frame[64] = {0};

  recovered_100013f0(pointer);
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10004120(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10004128(uint *param_1)

{
  unsigned char frame[64] = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004138(ulong *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004148(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 * recovered_1000414c(ulong param_1)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;

  if (param_1 < 2) {
    param_1 = 1;
  }
  size = param_1 + 0x30;
  puVar2 = recovered_100013ac(size);
  puVar1 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004034();
  }
  for (; size != 0; size = size - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return puVar2 + 0x30;
}


#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041f4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  recovered_10004224(param_1 + -0x38);
  bVar1 = recovered_10002ed4(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x38);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_10010350
#define DAT_10010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ac0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004224
 */

void recovered_10004224(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  long lVar3;

  if (param_1 != 0) {
    puVar2 = &DAT_10010350;
    lVar1 = DAT_10010350;
    if (DAT_10010350 != param_1) {
      do {
        lVar3 = lVar1;
        if (lVar3 == 0) {
          return;
        }
        lVar1 = *(long *)(lVar3 + 0x18);
      } while (*(long *)(lVar3 + 0x18) != param_1);
      puVar2 = (undefined8 *)(lVar3 + 0x18);
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

#undef DAT_10010350

#undef DAT_10010350
#define DAT_10010350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ac0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004264
 */

long recovered_10004264(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = &DAT_10010350;
  while ((lVar2 = *plVar1, lVar2 != 0 && lVar2 != param_1 &&
         (*(int *)(lVar2 + 0x30) != (int)param_1))) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  return lVar2;
}

#undef DAT_10010350

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10004294(long param_1)

{
  unsigned char frame[64] = {0};

  return param_1 + 0x30;
}


#undef DAT_10010338
#define DAT_10010338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7aa8U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000429c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000429c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10010338;
  if (DAT_10010338 != 0) {
    puVar1 = (undefined8 *)(DAT_10010338 + 0x10);
    DAT_10010338 = *(long *)(DAT_10010338 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x38);
      }
      recovered_10004224(lVar2);
      bVar3 = recovered_10002ed4(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010338
#undef DAT_82010850
#undef _DAT_82010850

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100042fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char frame[64] = {0};

  *(undefined8 *)(param_1 + -0x30) = param_2;
  *(undefined8 *)(param_1 + -0x28) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -8) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000431c((undefined8 *)(param_1 + -0x30));
}


#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ab0U)))
#define local_30 (*(undefined2 *)(pf_stack_frame + 16))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define cStack_2e (*(char *)(pf_stack_frame + 18))
#define uStack_2d (*(undefined1 *)(pf_stack_frame + 19))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000431c
 */

void recovered_1000431c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10010340;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1000437c;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10004910((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[4] = puVar2;
  param_1[5] = CONCAT44(local_28,uStack_2c);
  recovered_10004434(param_1);
LAB_1000437c:
                    /* WARNING: Subroutine does not return */
  recovered_10004034();
}

#undef DAT_10010340
#undef local_30
#undef local_28
#undef cStack_2e
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010338
#define DAT_10010338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7aa8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004380
 */

void recovered_10004380(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010338;
  if (DAT_10010338 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004034();
  }
  *(undefined1 *)((long)DAT_10010338 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000431c(puVar1);
}

#undef DAT_10010338

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7ab0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b0
 */

void recovered_100043b0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010340;
  DAT_10010340 = param_1;
  return;
}

#undef DAT_10010340

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ab0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043c4
 */

void recovered_100043c4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010340;
  while( true ) {
    puVar2 = (undefined8 *)*puVar1;
    if (puVar2 == param_1) {
      *puVar1 = *param_1;
      return;
    }
    if (puVar2 == (undefined8 *)0x0) break;
    puVar1 = puVar2;
  }
  return;
}

#undef DAT_10010340

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100043f0(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000431c(in_x0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100043fc(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004034();
}


#undef DAT_10010340
#define DAT_10010340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7ab0U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004408
 */

undefined8 recovered_10004408(undefined8 *param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x0 = 0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_10004264((long)param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10004034();
  }
  if (DAT_10010340 != (long *)0x0) {
    DAT_10010340 = (long *)*DAT_10010340;
  }
  puVar2 = (undefined8 *)recovered_10004434(puVar2);
  plVar3 = DAT_10010340;
  while( true ) {
    DAT_10010340 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004034();
    }
    if (plVar3 == (long *)puVar2[4]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10004910((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_100044c8;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_100044c8:
  recovered_10003f60((long)plVar3);
  recovered_10004408(extraout_x0);
  return 0;
}

#undef DAT_10010340
#undef uStack_50
#undef uStack_48

#undef DAT_10010340
#define DAT_10010340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7ab0U)))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004434
 */

undefined8 recovered_10004434(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *extraout_x0 = 0;
  long *plVar2;

  plVar2 = DAT_10010340;
  while( true ) {
    DAT_10010340 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10004034();
    }
    if (plVar2 == (long *)param_1[4]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10004910((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_100044c8;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x2c);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_100044c8:
  recovered_10003f60((long)plVar2);
  recovered_10004408(extraout_x0);
  return 0;
}

#undef DAT_10010340
#undef local_38
#undef local_40

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100044d0(undefined8 *in_x0)

{
  unsigned char frame[64] = {0};

  recovered_10004408(in_x0);
  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100044dc(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100044e4(void)

{
  unsigned char frame[64] = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10004034();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100044f0(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10004530(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004530
 */

uchar recovered_10004530(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_100045b4:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_100045b4;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_100045b4;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x7820U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100045bc(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100045c0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100045c8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100045d8(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10004610(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000462c(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10004644(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000465c(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10004674(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_10008908
#define DAT_10008908 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10008910
#define DAT_10008910 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000468c
 */

uint128 recovered_1000468c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (NAN(param_1)) {
    dVar4 = param_1;
  }
  else if (param_1 <= DAT_10008908) {
    dVar4 = 0.0;
    if (DAT_10008910 <= param_1) {
      iVar2 = 0;
      for (; 0.5 < param_1; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      for (; param_1 < -0.5; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        dVar5 = dVar5 * (param_1 / dVar6);
        dVar4 = dVar4 + dVar5;
        dVar6 = dVar6 + 1.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = INFINITY;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
  return auVar1;
}

#undef DAT_10008908
#undef DAT_10008910

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000474c
 */

void recovered_1000474c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000468c((double)param_1);
  return;
}


#undef DAT_10008908
#define DAT_10008908 (*(double *)(((uintptr_t)pf_module_state + 0x78U)))
#undef DAT_10008910
#define DAT_10008910 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004768
 */

uint128 recovered_10004768(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;

  if (NAN(param_1)) {
    dVar4 = param_1;
  }
  else if (param_1 <= DAT_10008908) {
    dVar4 = 0.0;
    if (DAT_10008910 <= param_1) {
      iVar2 = 0;
      for (; 0.5 < param_1; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      for (; param_1 < -0.5; param_1 = param_1 * 0.5) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = 0x20;
      dVar5 = 1.0;
      dVar4 = 1.0;
      dVar6 = 1.0;
      do {
        dVar5 = dVar5 * (param_1 / dVar6);
        dVar4 = dVar4 + dVar5;
        dVar6 = dVar6 + 1.0;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        dVar4 = dVar4 * dVar4;
      }
    }
  }
  else {
    dVar4 = INFINITY;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
  return auVar1;
}

#undef DAT_10008908
#undef DAT_10008910

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000476c
 */

uint128 recovered_1000476c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = (double)param_1 - (double)param_2;
  return auVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_1000477c(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001cdc(param_1);
  dVar1 = PF_PART8(auVar2, 0);
  dVar3 = dVar1;
  if (param_1 - dVar1 <= -0.5) {
    dVar3 = dVar1 + -1.0;
  }
  if (0.5 <= param_1 - dVar1) {
    dVar3 = dVar1 + 1.0;
  }
  PF_PART8(auVar2, 8) = 0;
  PF_PART8(auVar2, 0) = dVar3;
  return auVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100047c8(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;

  for (pbVar6 = param_1; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100034c0;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100034c0:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar5 = bVar3 == 0x2d;
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = false;
  }
  if (param_3 == 0x10) {
    if (*pbVar6 != 0x30) {
      param_3 = 0x10;
      goto LAB_10003544;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003544;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003544;
    }
    bVar3 = pbVar6[1];
    uVar8 = 8;
  }
  pbVar2 = pbVar6 + 2;
  param_3 = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    param_3 = uVar8;
  }
  pbVar6 = pbVar2;
LAB_10003544:
  pbVar6 = pbVar6 + -1;
  lVar7 = 1;
  lVar1 = 0;
  do {
    lVar10 = lVar1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30U;
    uVar9 = (uint)bVar3;
    uVar8 = uVar9 - 0x37;
    if (0x19 < uVar9 - 0x41) {
      uVar8 = 0xffffffff;
    }
    if (bVar3 - 0x61U < 0x1a) {
      uVar8 = uVar9 - 0x57;
    }
    if (9 < uVar4) {
      uVar4 = uVar8;
    }
    lVar7 = lVar7 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar1 = lVar10 * (ulong)param_3 + (ulong)uVar4, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar7 != 0) {
      param_1 = pbVar6;
    }
    *param_2 = param_1;
  }
  lVar1 = -lVar10;
  if (!bVar5) {
    lVar1 = lVar10;
  }
  return lVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000490c(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char frame[64] = {0};

  long lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;

  for (pbVar6 = param_1; pbVar6 != (byte *)0x0; pbVar6 = pbVar6 + 1) {
    bVar3 = *pbVar6;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_100034c0;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_100034c0:
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    bVar5 = bVar3 == 0x2d;
    pbVar6 = pbVar6 + 1;
  }
  else {
    bVar5 = false;
  }
  if (param_3 == 0x10) {
    if (*pbVar6 != 0x30) {
      param_3 = 0x10;
      goto LAB_10003544;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_10003544;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10003544;
    }
    bVar3 = pbVar6[1];
    uVar8 = 8;
  }
  pbVar2 = pbVar6 + 2;
  param_3 = 0x10;
  if ((bVar3 | 0x20) != 0x78) {
    pbVar2 = pbVar6;
    param_3 = uVar8;
  }
  pbVar6 = pbVar2;
LAB_10003544:
  pbVar6 = pbVar6 + -1;
  lVar7 = 1;
  lVar1 = 0;
  do {
    lVar10 = lVar1;
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = bVar3 - 0x30U;
    uVar9 = (uint)bVar3;
    uVar8 = uVar9 - 0x37;
    if (0x19 < uVar9 - 0x41) {
      uVar8 = 0xffffffff;
    }
    if (bVar3 - 0x61U < 0x1a) {
      uVar8 = uVar9 - 0x57;
    }
    if (9 < uVar4) {
      uVar4 = uVar8;
    }
    lVar7 = lVar7 + -1;
  } while ((-1 < (int)uVar4) &&
          (lVar1 = lVar10 * (ulong)param_3 + (ulong)uVar4, (int)uVar4 < (int)param_3));
  if (param_2 != (undefined8 *)0x0) {
    if (lVar7 != 0) {
      param_1 = pbVar6;
    }
    *param_2 = param_1;
  }
  lVar1 = -lVar10;
  if (!bVar5) {
    lVar1 = lVar10;
  }
  return lVar1;
}


#undef DAT_10008928
#define DAT_10008928 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004910
 */

undefined8 recovered_10004910(long param_1,long *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uchar uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;

  pbVar7 = *(byte **)(param_1 + 0x38);
  if (pbVar7 != (byte *)0x0) {
    local_68 = pbVar7 + 1;
    pbVar8 = local_68;
    if (*pbVar7 != 0xff) {
      recovered_10004ae8((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004bdc(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004bdc(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004bdc(&local_68);
        uVar5 = recovered_10004bdc(&local_68);
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
          *param_3 = 1;
          *(undefined1 *)(param_3 + 1) = 0;
          *(int *)(param_3 + 2) = (int)uVar4;
          *(undefined4 *)(param_3 + 4) = 0;
          if ((uVar5 & 0xffffffff) == 0) {
            *(undefined1 *)((long)param_3 + 1) = 1;
            return 0;
          }
          pbStack_70 = pbVar8 + ((uVar5 & 0xffffffff) - 1);
          uVar4 = (ulong)bVar1 & 0xf;
          iVar9 = 0x40;
          do {
            uVar5 = recovered_10004c38(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004c38(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10008928 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004ae8((uint)bVar1,(long *)&local_68);
              }
              uVar2 = recovered_10004530(param_2,(long *)puVar6);
              if (uVar2 != '\0') {
                *(undefined1 *)(param_3 + 1) = 1;
                *(int *)(param_3 + 4) = (int)uVar5;
                return 1;
              }
            }
            if (uVar3 == 0) {
              return 0;
            }
            pbStack_70 = pbVar8 + uVar3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          return 0;
        }
      }
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  return 0;
}

#undef DAT_10008928
#undef pbStack_70
#undef local_68

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong * recovered_10004ae8(uint param_1,long *param_2)

{
  unsigned char frame[64] = {0};

  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;

  if (param_1 == 0xff) {
    return (ulong *)0x0;
  }
  puVar1 = (ulong *)0x0;
  if (0xc < (param_1 & 0xf)) {
    return (ulong *)0x0;
  }
  pbVar5 = (byte *)*param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 4:
  case 0xc:
    puVar1 = (ulong *)recovered_10004c10(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10003858;
  case 1:
    puVar1 = (ulong *)recovered_10004bdc(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004c10(pbVar5,2);
    goto LAB_1000431c;
  case 3:
    puVar1 = (ulong *)recovered_10004c10(pbVar5,4);
    goto LAB_1000381c;
  default:
    goto switchD_100037e8_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004c38(param_2);
    break;
  case 10:
    uVar3 = recovered_10004c10(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_1000431c:
    pbVar4 = pbVar5 + 2;
LAB_10003858:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004c10(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_1000381c:
    pbVar4 = pbVar5 + 4;
    goto LAB_10003858;
  }
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (ulong *)0x0;
    }
    puVar1 = (ulong *)((long)puVar1 + (long)pbVar5);
  }
  if (((param_1 >> 7 & 1) != 0) && (puVar1 != (ulong *)0x0)) {
    puVar1 = (ulong *)*puVar1;
  }
switchD_100037e8_caseD_5:
  return puVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10004bdc(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;

  uVar3 = 0;
  uVar2 = 0;
  pbVar4 = (byte *)*param_1;
  do {
    *param_1 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = ((ulong)bVar1 & 0x7f) << (uVar3 & 0x3f) | uVar2;
    uVar3 = (ulong)((int)uVar3 + 7);
    pbVar4 = pbVar4 + 1;
  } while ((char)bVar1 < '\0');
  return uVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10004c10(byte *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  ulong uVar2;

  uVar2 = 0;
  uVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (ulong)*param_1 << (uVar2 & 0x3f) | uVar1;
    uVar2 = uVar2 + 8;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10004c38(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;

  uVar4 = 0;
  uVar5 = 0;
  pbVar6 = (byte *)*param_1;
  do {
    *param_1 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar4 = ((ulong)bVar3 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulong)uVar1;
    pbVar6 = pbVar6 + 1;
  } while ((char)bVar3 < '\0');
  uVar2 = 0;
  if (0x3f < bVar3 && uVar1 < 0x40) {
    uVar2 = -1L << (uVar5 & 0x3f);
  }
  return uVar4 | uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb8
 */

undefined8 * recovered_10004cb8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100040c0((void *)*param_1);
  return param_1;
}


#undef DAT_10008990
#define DAT_10008990 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef DAT_10010358
#define DAT_10010358 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ac8U)))
#undef DAT_10010360
#define DAT_10010360 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x7ad0U)))
#undef DAT_10010370
#define DAT_10010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ae0U)))
#undef DAT_820108a0
#define DAT_820108a0 (*(uint8_t *)(0x820108a0U))
#undef UNK_82010814
#define UNK_82010814 (*(uint *)(0x82010814U))
#undef _DAT_10010358
#define _DAT_10010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ac8U)))
#undef _DAT_820108a0
#define _DAT_820108a0 (*(uint *)(0x820108a0U))
#undef str_10008ac4
#define str_10008ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x234U)))
#undef uRam0000000082010814
#define uRam0000000082010814 (*(uint32_t *)(0x82010814U))
#define auStack_68 (*(ulong (*)[13])(pf_stack_frame + 24))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cbc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10004cbc(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  uchar uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  void *pointer;

  plVar7 = recovered_1000408c(0x328);
  *plVar7 = 0;
  plVar7[2] = 0;
  plVar7[1] = 0;
  *(undefined4 *)(plVar7 + 3) = 0;
  *(undefined1 *)((long)plVar7 + 0x1c) = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  *(int *)(plVar7 + 6) = (int)DAT_10008990;
  *(undefined1 *)((long)plVar7 + 0x34) = 0xf6;
  plVar7[8] = 0;
  plVar7[7] = 0;
  *(undefined4 *)(plVar7 + 9) = 0;
  *(undefined8 *)((long)plVar7 + 0x4c) = 0;
  *(undefined4 *)((long)plVar7 + 0x54) = 0;
  *(undefined2 *)(plVar7 + 0xb) = 0;
  *(undefined1 *)((long)plVar7 + 0x5a) = 0;
  *(undefined8 *)((long)plVar7 + 100) = 0;
  *(undefined8 *)((long)plVar7 + 0x5c) = 0;
  plVar7[0xe] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[0x11] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x14] = 0;
  plVar7[0x16] = 0;
  plVar7[0x15] = 0;
  plVar7[0x18] = 0;
  plVar7[0x17] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1d] = 0;
  pcVar1 = str_10008ac4;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  plVar7[0x20] = 0;
  plVar7[0x1f] = 0;
  recovered_10001700((undefined1 *)(plVar7 + 0x21),0x220);
  recovered_10004eac(plVar7,(long)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)(plVar7 + 4) = param_2;
  *(uint *)((long)plVar7 + 0x24) = param_3;
  *(uint *)((long)plVar7 + 0x3c) = param_2 >> 1;
  *(uint *)(plVar7 + 8) = param_3 >> 1;
  *(uint *)((long)plVar7 + 0x44) = param_2 >> 1;
  *(uint *)(plVar7 + 9) = param_3 >> 1;
  uVar5 = recovered_10007c24(0x14);
  if ((uVar5 == '\0') || (uRam0000000082010814 == 0)) {
    *(undefined1 *)((long)plVar7 + 0x1c) = 0;
  }
  else {
    iVar6 = (*(code *)(ulong)uRam0000000082010814)();
    *(bool *)((long)plVar7 + 0x1c) = iVar6 != 0;
    if (iVar6 != 0) {
      auStack_68[0] = 0;
      auStack_68[2] = 0;
      auStack_68[1] = 0;
      auStack_68[4] = 0;
      auStack_68[3] = 0;
      auStack_68[5] = 0;
      uStack_38 = 0;
      uVar8 = recovered_10004ee8(auStack_68);
      if ((int)uVar8 != 0) {
        _DAT_10010358 = 0;
        DAT_10010370 = 0;
        DAT_10010360 = plVar7;
        recovered_10005108(plVar7);
        if ((*(byte *)((long)plVar7 + 0x31) & 1) != 0) {
          return plVar7;
        }
        DAT_10010360 = (long *)0x0;
      }
      recovered_100050a4();
      goto LAB_10004e84;
    }
  }
  puVar2 = &DAT_100089d3;
  if ((undefined1 *)*plVar7 != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)*plVar7;
  }
  lVar4 = plVar7[4];
  uVar3 = *(undefined4 *)((long)plVar7 + 0x24);
  uVar5 = recovered_10007c24(0xa0);
  if ((uVar5 == '\0') || (_DAT_820108a0 == 0)) {
    *(undefined4 *)(plVar7 + 3) = 0;
  }
  else {
    iVar6 = (*(code *)(ulong)_DAT_820108a0)(puVar2,(int)lVar4,uVar3);
    *(int *)(plVar7 + 3) = iVar6;
    if (iVar6 != 0) {
      _DAT_10010358 = 0;
      DAT_10010370 = 0;
      DAT_10010360 = plVar7;
      recovered_10005108(plVar7);
      recovered_10005404((long)plVar7);
      return plVar7;
    }
  }
LAB_10004e84:
  recovered_100050d8(plVar7);
  recovered_100040c0(pointer);
  return (long *)0x0;
}

#undef DAT_10008990
#undef DAT_100089d3
#undef DAT_10010358
#undef DAT_10010360
#undef DAT_10010370
#undef DAT_820108a0
#undef UNK_82010814
#undef _DAT_10010358
#undef _DAT_820108a0
#undef str_10008ac4
#undef uRam0000000082010814
#undef auStack_68
#undef uStack_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_10004eac(long *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  uVar1 = recovered_10007ab4(param_2);
  recovered_100079cc(param_1,param_2,uVar1);
  return param_1;
}


#undef UNK_8201087c
#define UNK_8201087c (*(uint *)(0x8201087cU))
#undef uRam000000008201087c
#define uRam000000008201087c (*(uint32_t *)(0x8201087cU))
#define uStack_48 (*(ulong *)(pf_stack_frame + 40))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 48))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 56))
#define local_60 (*(ulong *)(pf_stack_frame + 16))
#define local_50 (*(ulong *)(pf_stack_frame + 32))
#define local_30 (*(uint *)(pf_stack_frame + 64))
#define uStack_58 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004ee8
 */

ulong recovered_10004ee8(ulong *param_1)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ushort uVar21;

  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uVar16 = 0;
  if (param_1 != (ulong *)0x0) {
    bVar14 = recovered_10007c24(0x7c);
    uVar16 = (ulong)bVar14;
    if (bVar14 != 0) {
      if (uRam000000008201087c != 0) {
        uVar16 = (*(code *)(ulong)uRam000000008201087c)(&local_60);
        if ((int)uVar16 == 0) {
          return uVar16;
        }
        uVar3 = (uint)uStack_48;
        uVar20 = (uint)(uStack_48 >> 0x20);
        bVar8 = uVar20 == 0;
        bVar9 = PF_PART4(uStack_40, 4) == 0;
        bVar10 = PF_PART4(uStack_38, 4) == 0;
        bVar13 = uVar3 <= PF_PART4(uStack_40, 4);
        bVar11 = PF_PART4(uStack_40, 4) != uVar3;
        bVar4 = uVar3 <= PF_PART4(uStack_38, 4);
        bVar12 = PF_PART4(uStack_38, 4) != uVar3;
        bVar5 = uVar3 <= (uint)uStack_40;
        bVar6 = uVar3 <= (uint)uStack_38;
        bVar7 = uVar3 <= local_30;
        uVar15 = (uint)uStack_40 + uVar20;
        uVar18 = (uint)uStack_38 + PF_PART4(uStack_40, 4);
        uVar15 = (uint)((((((((((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                               ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) || bVar4
                              ) && (((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                                    ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) ||
                                   bVar12) || bVar5) || bVar6) || bVar7) || uVar3 < uVar15) ||
                         uVar3 <= uVar18) &&
                         ((((((((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                               ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) || bVar4
                              ) && (((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                                    ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) ||
                                   bVar12) || bVar5) || bVar6) || bVar7) || uVar3 < uVar15) ||
                         uVar18 != uVar3) || uVar3 <= local_30 + PF_PART4(uStack_38, 4)) &&
                       (((((((((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                              ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) || bVar4)
                             && (((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                                 ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) ||
                                bVar12) || bVar5) || bVar6) || bVar7) || uVar3 < uVar15) ||
                        uVar3 <= uVar18) &&
                        ((((((((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                              ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) || bVar4)
                             && (((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar13) &&
                                 ((((bVar8 || bVar9) || bVar10) || uVar3 < uVar20) || bVar11) ||
                                bVar12) || bVar5) || bVar6) || bVar7) || uVar3 < uVar15) ||
                        uVar18 != uVar3) || local_30 + PF_PART4(uStack_38, 4) != uVar3));
        bVar13 = uVar15 == 0;
        uVar16 = 0;
        if (bVar13) {
          uVar16 = ~(-1L << ((ulong)PF_PART4(uStack_40, 4) & 0x3f)) << (uStack_38 & 0x3f);
        }
        uVar1 = 0;
        if (bVar13) {
          uVar1 = ~(-1L << ((ulong)uVar20 & 0x3f)) << (uStack_40 & 0x3f);
        }
        uVar2 = 0;
        if (bVar13) {
          uVar2 = ~(-1L << ((ulong)PF_PART4(uStack_38, 4) & 0x3f)) << ((ulong)local_30 & 0x3f);
        }
        iVar19 = (int)(local_50 >> 0x20);
        uVar18 = (uint)(uStack_58 >> 0x20);
        uVar17 = (ulong)(uVar3 + 7 >> 3) * (local_50 & 0xffffffff);
        uVar21 = NEON_umaxv(CONCAT26(-(ushort)(iVar19 == 0),
                                     CONCAT24(-(ushort)((int)local_50 == 0),
                                              CONCAT22(-(ushort)(uVar18 == 0),
                                                       -(ushort)((int)uStack_58 == 0)))),2);
        if ((uVar2 & uVar16) != 0 ||
            (uStack_58 & 0xffffffff) < uVar17 + (ulong)(iVar19 - 1) * (ulong)uVar18) {
          uVar15 = 1;
        }
        if (((((uint)uVar21 | (uint)((uVar1 & (uVar16 | uVar2)) != 0) | (uint)(local_60 == 0) |
               uVar15 | (uint)(uVar18 <= uVar17 && uVar17 != uVar18 || 0x20 < uVar3) |
                        0xfefe7fffU >> (uStack_48 & 0x3f)) & 1) == 0) &&
           (!CARRY8(local_60,(ulong)((int)uStack_58 - 1)))) {
          *param_1 = local_60;
          param_1[2] = local_50;
          param_1[1] = uStack_58;
          param_1[4] = CONCAT44(PF_PART4(uStack_38, 4),PF_PART4(uStack_40, 4));
          param_1[3] = uStack_48;
          *(uint *)(param_1 + 5) = (uint)uStack_40;
          *(uint *)((long)param_1 + 0x2c) = (uint)uStack_38;
          *(uint *)(param_1 + 6) = local_30;
          return 1;
        }
      }
      uVar16 = 0;
    }
  }
  return uVar16;
}

#undef UNK_8201087c
#undef uRam000000008201087c
#undef uStack_48
#undef uStack_40
#undef uStack_38
#undef local_60
#undef local_50
#undef local_30
#undef uStack_58

#undef DAT_82010818
#define DAT_82010818 (*(uint8_t *)(0x82010818U))
#undef _DAT_82010818
#define _DAT_82010818 (*(uint *)(0x82010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050a4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100050a4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_10007c24(0x18);
  if ((uVar1 == '\0') || (_DAT_82010818 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100050cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_82010818)();
  return;
}

#undef DAT_82010818
#undef _DAT_82010818

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100050d8
 */

void recovered_100050d8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000850c(param_1 + 0x11);
  recovered_1000850c(param_1 + 0xe);
  recovered_100040c0((void *)*param_1);
  return;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
#define pvStack_78 (*(void * *)(pf_stack_frame + 24))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005108
 */

void recovered_10005108(undefined8 *param_1)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uchar uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;

  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    uVar16 = recovered_10005ccc((long)param_1);
    *(char *)((long)param_1 + 0x31) = (char)uVar16;
    if ((uVar16 & 1) == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
    return;
  }
  if (param_1[0xf] == 0) {
    pvVar23 = (void *)0x0;
  }
  else {
    pvVar23 = (void *)param_1[0xe];
  }
  iVar15 = *(int *)(param_1 + 3);
  if (iVar15 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x15);
  uVar16 = (ulong)uVar6;
  uVar7 = *(uint *)((long)param_1 + 0xac);
  uVar21 = (ulong)uVar7;
  uVar8 = *(uint *)(param_1 + 4);
  uVar9 = *(uint *)((long)param_1 + 0x24);
  uVar20 = uVar8;
  if ((int)uVar8 < 2) {
    uVar20 = 1;
  }
  uVar24 = (ulong)uVar20;
  uVar20 = uVar9;
  if ((int)uVar9 < 2) {
    uVar20 = 1;
  }
  uVar25 = (ulong)uVar20;
  uStack_70 = 0;
  uStack_68 = 0;
  pvStack_78 = (void *)0x0;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    if (pvVar23 != (void *)0x0) {
      if ((int)uVar6 < 1 || (int)uVar7 < 1) {
        pvVar23 = (void *)0x0;
      }
      else if (uVar8 == uVar6 && uVar9 == uVar7) {
        uVar24 = uVar16;
        uVar25 = uVar21;
      }
      else {
        uVar26 = (long)(int)uVar8 * (long)(int)uVar9 * 4;
        recovered_10007c6c((long *)&pvStack_78,uVar26);
        for (uVar19 = 0; uVar19 < uVar26; uVar19 = uVar19 + 4) {
          *(undefined1 *)((long)pvStack_78 + uVar19) = *(undefined1 *)((long)param_1 + 0x32);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 1) = *(undefined1 *)((long)param_1 + 0x33);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 2) = *(undefined1 *)((long)param_1 + 0x34);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 3) = 0xff;
        }
        uVar8 = *(uint *)(param_1 + 4);
        uVar9 = *(uint *)((long)param_1 + 0x24);
        uVar20 = 0;
        if (uVar16 != 0) {
          uVar20 = (uint)((long)((long)(int)uVar8 * uVar21) / (long)uVar16);
        }
        if ((int)uVar20 < 2) {
          uVar20 = 1;
        }
        uVar18 = uVar8;
        if ((int)uVar9 < (int)uVar20) {
          uVar18 = 0;
          if (uVar21 != 0) {
            uVar18 = (uint)((long)((long)(int)uVar9 * uVar16) / (long)uVar21);
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          uVar20 = uVar9;
        }
        lVar22 = (long)((int)(uVar9 - uVar20) / 2);
        for (uVar21 = 0; uVar21 != (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
            uVar21 = uVar21 + 1) {
          iVar15 = 0;
          iVar13 = 0;
          if (uVar20 != 0) {
            iVar13 = (int)(uVar7 * (int)uVar21) / (int)uVar20;
          }
          iVar4 = uVar7 - 1;
          if (iVar13 <= (int)(uVar7 - 1)) {
            iVar4 = iVar13;
          }
          iVar3 = 0;
          if (-1 < iVar13) {
            iVar3 = iVar4;
          }
          lVar1 = (long)((int)(uVar8 - uVar18) / 2);
          for (uVar19 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
              uVar19 = uVar19 - 1) {
            iVar13 = 0;
            if (uVar18 != 0) {
              iVar13 = iVar15 / (int)uVar18;
            }
            iVar4 = uVar6 - 1;
            if (iVar13 <= (int)(uVar6 - 1)) {
              iVar4 = iVar13;
            }
            iVar5 = 0;
            if (-1 < iVar13) {
              iVar5 = iVar4;
            }
            lVar17 = lVar1 + lVar22 * *(int *)(param_1 + 4);
            puVar2 = (undefined1 *)((long)pvVar23 + ((long)iVar3 * uVar16 + (long)iVar5) * 4);
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4) = *puVar2;
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 1) = puVar2[1];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 2) = puVar2[2];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 3) = puVar2[3];
            lVar1 = lVar1 + 1;
            iVar15 = iVar15 + uVar6;
          }
          lVar22 = lVar22 + 1;
        }
        iVar15 = *(int *)(param_1 + 3);
        pvVar23 = pvStack_78;
      }
    }
    puVar2 = &DAT_100089d3;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    bVar10 = *(byte *)((long)param_1 + 0x32);
    bVar11 = *(byte *)((long)param_1 + 0x33);
    bVar12 = *(byte *)((long)param_1 + 0x34);
    uVar14 = recovered_10007c24(0xa4);
    if ((uVar14 == '\0') || (uRam00000000820108a4 == 0)) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    else {
      iVar15 = (*(code *)(ulong)uRam00000000820108a4)
                         (iVar15,puVar2,pvVar23,uVar24,uVar25,(int)uVar24 << 2,
                          (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12);
      *(bool *)((long)param_1 + 0x31) = iVar15 != 0;
      if (iVar15 != 0) goto LAB_100053c8;
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
LAB_100053c8:
  uStack_70 = 0;
  recovered_100040c0(pvStack_78);
  return;
}

#undef DAT_100089d3
#undef UNK_820108a4
#undef uRam00000000820108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

#undef UNK_820108b4
#define UNK_820108b4 (*(uint *)(0x820108b4U))
#undef uRam00000000820108b4
#define uRam00000000820108b4 (*(uint32_t *)(0x820108b4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005404
 */

ulong recovered_10005404(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  uint uVar3;

  if (param_1 == 0) {
    uVar3 = 0;
  }
  else if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar3 = *(byte *)(param_1 + 0x30) ^ 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = recovered_10007c24(0xb4);
      if (((uVar1 == '\0') || (uRam00000000820108b4 == 0)) ||
         (iVar2 = (*(code *)(ulong)uRam00000000820108b4)(iVar2,param_1 + 0xb0), iVar2 == 0)) {
        uVar3 = 0;
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0xdc);
        uVar3 = 1;
        if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
      }
    }
  }
  return (ulong)(uVar3 & 1);
}

#undef UNK_820108b4
#undef uRam00000000820108b4

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000549c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000549c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uchar uVar4;

  if (((param_1 == 0) || (*(undefined1 *)(param_1 + 0x30) = 1, (*(byte *)(param_1 + 0x1c) & 1) != 0)
      ) || (iVar3 = *(int *)(param_1 + 0x18), iVar3 == 0)) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = recovered_10007c24(0xb0);
  if ((uVar4 == '\0') || (_DAT_820108b0 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10005538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)_DAT_820108b0)(iVar3,uVar1,uVar2,1,1);
  return;
}

#undef DAT_820108b0
#undef _DAT_820108b0

#undef DAT_820108b0
#define DAT_820108b0 (*(uint8_t *)(0x820108b0U))
#undef _DAT_820108b0
#define _DAT_820108b0 (*(uint *)(0x820108b0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
recovered_100054d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007c24(0xb0);
  if ((uVar1 == '\0') || (_DAT_820108b0 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10005538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_820108b0)(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

#undef DAT_820108b0
#undef _DAT_820108b0

#undef DAT_10010358
#define DAT_10010358 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7ac8U)))
#undef DAT_10010360
#define DAT_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ad0U)))
#undef DAT_10010370
#define DAT_10010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ae0U)))
#undef UNK_820108a8
#define UNK_820108a8 (*(uint *)(0x820108a8U))
#undef _DAT_10010358
#define _DAT_10010358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ac8U)))
#undef uRam00000000820108a8
#define uRam00000000820108a8 (*(uint32_t *)(0x820108a8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005554
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005554(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  void *pointer;

  if (param_1 == 0) {
    return;
  }
  if (DAT_10010360 == param_1) {
    DAT_10010360 = 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    recovered_100050a4();
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (uVar2 = recovered_10007c24(0xa8), uVar2 != '\0')) &&
       (uRam00000000820108a8 != 0)) {
      (*(code *)(ulong)uRam00000000820108a8)(iVar1);
    }
  }
  _DAT_10010358 = 0;
  DAT_10010370 = 0;
  recovered_100050d8((undefined8 *)param_1);
  recovered_100013f0(pointer);
  return;
}

#undef DAT_10010358
#undef DAT_10010360
#undef DAT_10010370
#undef UNK_820108a8
#undef _DAT_10010358
#undef uRam00000000820108a8

#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 24))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
#define local_30 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e0
 */

long recovered_100055e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *src;
  ulong size;
  void *dst;

  if (param_1 == (undefined8 *)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    size = 1;
    local_38 = (undefined1 *)0x0;
  }
  else {
    recovered_10007d54(&local_38,param_1);
    size = local_30 + 1;
  }
  dst = recovered_100040bc(size);
  src = &DAT_100089d3;
  if (local_38 != (undefined1 *)0x0) {
    src = local_38;
  }
  recovered_1000147c(dst,src,local_30 + 1);
  recovered_100040c0(local_38);
  return (long)dst;
}

#undef DAT_100089d3
#undef local_38
#undef uStack_28
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005660
 */

void recovered_10005660(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
    }
    *param_3 = uVar1;
  }
  return;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
#define pvStack_78 (*(void * *)(pf_stack_frame + 24))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005694
 */

void recovered_10005694(long param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uchar uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  if (param_3 < 2) {
    param_3 = 1;
  }
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_3;
  recovered_100056e8(param_1);
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 0;
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar16 = recovered_10005ccc(param_1);
    *(char *)(param_1 + 0x31) = (char)uVar16;
    if ((uVar16 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    return;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    pvVar23 = (void *)0x0;
  }
  else {
    pvVar23 = *(void **)(param_1 + 0x70);
  }
  iVar15 = *(int *)(param_1 + 0x18);
  if (iVar15 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0xa8);
  uVar16 = (ulong)uVar6;
  uVar7 = *(uint *)(param_1 + 0xac);
  uVar21 = (ulong)uVar7;
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar9 = *(uint *)(param_1 + 0x24);
  uVar20 = uVar8;
  if ((int)uVar8 < 2) {
    uVar20 = 1;
  }
  uVar24 = (ulong)uVar20;
  uVar20 = uVar9;
  if ((int)uVar9 < 2) {
    uVar20 = 1;
  }
  uVar25 = (ulong)uVar20;
  uStack_70 = 0;
  uStack_68 = 0;
  pvStack_78 = (void *)0x0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (pvVar23 != (void *)0x0) {
      if ((int)uVar6 < 1 || (int)uVar7 < 1) {
        pvVar23 = (void *)0x0;
      }
      else if (uVar8 == uVar6 && uVar9 == uVar7) {
        uVar24 = uVar16;
        uVar25 = uVar21;
      }
      else {
        uVar26 = (long)(int)uVar8 * (long)(int)uVar9 * 4;
        recovered_10007c6c((long *)&pvStack_78,uVar26);
        for (uVar19 = 0; uVar19 < uVar26; uVar19 = uVar19 + 4) {
          *(undefined1 *)((long)pvStack_78 + uVar19) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 1) = *(undefined1 *)(param_1 + 0x33);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 2) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 3) = 0xff;
        }
        uVar8 = *(uint *)(param_1 + 0x20);
        uVar9 = *(uint *)(param_1 + 0x24);
        uVar20 = 0;
        if (uVar16 != 0) {
          uVar20 = (uint)((long)((long)(int)uVar8 * uVar21) / (long)uVar16);
        }
        if ((int)uVar20 < 2) {
          uVar20 = 1;
        }
        uVar18 = uVar8;
        if ((int)uVar9 < (int)uVar20) {
          uVar18 = 0;
          if (uVar21 != 0) {
            uVar18 = (uint)((long)((long)(int)uVar9 * uVar16) / (long)uVar21);
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          uVar20 = uVar9;
        }
        lVar22 = (long)((int)(uVar9 - uVar20) / 2);
        for (uVar21 = 0; uVar21 != (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
            uVar21 = uVar21 + 1) {
          iVar15 = 0;
          iVar13 = 0;
          if (uVar20 != 0) {
            iVar13 = (int)(uVar7 * (int)uVar21) / (int)uVar20;
          }
          iVar4 = uVar7 - 1;
          if (iVar13 <= (int)(uVar7 - 1)) {
            iVar4 = iVar13;
          }
          iVar3 = 0;
          if (-1 < iVar13) {
            iVar3 = iVar4;
          }
          lVar1 = (long)((int)(uVar8 - uVar18) / 2);
          for (uVar19 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
              uVar19 = uVar19 - 1) {
            iVar13 = 0;
            if (uVar18 != 0) {
              iVar13 = iVar15 / (int)uVar18;
            }
            iVar4 = uVar6 - 1;
            if (iVar13 <= (int)(uVar6 - 1)) {
              iVar4 = iVar13;
            }
            iVar5 = 0;
            if (-1 < iVar13) {
              iVar5 = iVar4;
            }
            lVar17 = lVar1 + lVar22 * *(int *)(param_1 + 0x20);
            puVar2 = (undefined1 *)((long)pvVar23 + ((long)iVar3 * uVar16 + (long)iVar5) * 4);
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4) = *puVar2;
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 1) = puVar2[1];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 2) = puVar2[2];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 3) = puVar2[3];
            lVar1 = lVar1 + 1;
            iVar15 = iVar15 + uVar6;
          }
          lVar22 = lVar22 + 1;
        }
        iVar15 = *(int *)(param_1 + 0x18);
        pvVar23 = pvStack_78;
      }
    }
    puVar2 = &DAT_100089d3;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)param_1;
    }
    bVar10 = *(byte *)(param_1 + 0x32);
    bVar11 = *(byte *)(param_1 + 0x33);
    bVar12 = *(byte *)(param_1 + 0x34);
    uVar14 = recovered_10007c24(0xa4);
    if ((uVar14 == '\0') || (uRam00000000820108a4 == 0)) {
      *(undefined1 *)(param_1 + 0x31) = 0;
    }
    else {
      iVar15 = (*(code *)(ulong)uRam00000000820108a4)
                         (iVar15,puVar2,pvVar23,uVar24,uVar25,(int)uVar24 << 2,
                          (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12);
      *(bool *)(param_1 + 0x31) = iVar15 != 0;
      if (iVar15 != 0) goto LAB_100053c8;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
LAB_100053c8:
  uStack_70 = 0;
  recovered_100040c0(pvStack_78);
  return;
}

#undef DAT_100089d3
#undef UNK_820108a4
#undef uRam00000000820108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e8
 */

void recovered_100056e8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;

  uVar1 = NEON_smax(*(undefined8 *)(param_1 + 0x20),0x100000001,4);
  lVar3 = *(long *)(param_1 + 0x3c);
  uVar2 = NEON_smin(CONCAT44((int)((ulong)uVar1 >> 0x20) + -1,(int)uVar1 + -1),lVar3,4);
  *(ulong *)(param_1 + 0x3c) = CONCAT44(-(uint)(-1 < lVar3),-(uint)(-1 < (int)lVar3)) & uVar2;
  return;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
#define pvStack_78 (*(void * *)(pf_stack_frame + 24))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005714
 */

void recovered_10005714(long param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uchar uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  puVar2 = &DAT_100089d3;
  if (param_2 != (undefined1 *)0x0) {
    puVar2 = param_2;
  }
  recovered_10004eac((long *)param_1,(long)puVar2);
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar16 = recovered_10005ccc(param_1);
    *(char *)(param_1 + 0x31) = (char)uVar16;
    if ((uVar16 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    return;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    pvVar23 = (void *)0x0;
  }
  else {
    pvVar23 = *(void **)(param_1 + 0x70);
  }
  iVar15 = *(int *)(param_1 + 0x18);
  if (iVar15 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0xa8);
  uVar16 = (ulong)uVar6;
  uVar7 = *(uint *)(param_1 + 0xac);
  uVar21 = (ulong)uVar7;
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar9 = *(uint *)(param_1 + 0x24);
  uVar20 = uVar8;
  if ((int)uVar8 < 2) {
    uVar20 = 1;
  }
  uVar24 = (ulong)uVar20;
  uVar20 = uVar9;
  if ((int)uVar9 < 2) {
    uVar20 = 1;
  }
  uVar25 = (ulong)uVar20;
  uStack_70 = 0;
  uStack_68 = 0;
  pvStack_78 = (void *)0x0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (pvVar23 != (void *)0x0) {
      if ((int)uVar6 < 1 || (int)uVar7 < 1) {
        pvVar23 = (void *)0x0;
      }
      else if (uVar8 == uVar6 && uVar9 == uVar7) {
        uVar24 = uVar16;
        uVar25 = uVar21;
      }
      else {
        uVar26 = (long)(int)uVar8 * (long)(int)uVar9 * 4;
        recovered_10007c6c((long *)&pvStack_78,uVar26);
        for (uVar19 = 0; uVar19 < uVar26; uVar19 = uVar19 + 4) {
          *(undefined1 *)((long)pvStack_78 + uVar19) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 1) = *(undefined1 *)(param_1 + 0x33);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 2) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 3) = 0xff;
        }
        uVar8 = *(uint *)(param_1 + 0x20);
        uVar9 = *(uint *)(param_1 + 0x24);
        uVar20 = 0;
        if (uVar16 != 0) {
          uVar20 = (uint)((long)((long)(int)uVar8 * uVar21) / (long)uVar16);
        }
        if ((int)uVar20 < 2) {
          uVar20 = 1;
        }
        uVar18 = uVar8;
        if ((int)uVar9 < (int)uVar20) {
          uVar18 = 0;
          if (uVar21 != 0) {
            uVar18 = (uint)((long)((long)(int)uVar9 * uVar16) / (long)uVar21);
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          uVar20 = uVar9;
        }
        lVar22 = (long)((int)(uVar9 - uVar20) / 2);
        for (uVar21 = 0; uVar21 != (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
            uVar21 = uVar21 + 1) {
          iVar15 = 0;
          iVar13 = 0;
          if (uVar20 != 0) {
            iVar13 = (int)(uVar7 * (int)uVar21) / (int)uVar20;
          }
          iVar4 = uVar7 - 1;
          if (iVar13 <= (int)(uVar7 - 1)) {
            iVar4 = iVar13;
          }
          iVar3 = 0;
          if (-1 < iVar13) {
            iVar3 = iVar4;
          }
          lVar1 = (long)((int)(uVar8 - uVar18) / 2);
          for (uVar19 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
              uVar19 = uVar19 - 1) {
            iVar13 = 0;
            if (uVar18 != 0) {
              iVar13 = iVar15 / (int)uVar18;
            }
            iVar4 = uVar6 - 1;
            if (iVar13 <= (int)(uVar6 - 1)) {
              iVar4 = iVar13;
            }
            iVar5 = 0;
            if (-1 < iVar13) {
              iVar5 = iVar4;
            }
            lVar17 = lVar1 + lVar22 * *(int *)(param_1 + 0x20);
            puVar2 = (undefined1 *)((long)pvVar23 + ((long)iVar3 * uVar16 + (long)iVar5) * 4);
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4) = *puVar2;
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 1) = puVar2[1];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 2) = puVar2[2];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 3) = puVar2[3];
            lVar1 = lVar1 + 1;
            iVar15 = iVar15 + uVar6;
          }
          lVar22 = lVar22 + 1;
        }
        iVar15 = *(int *)(param_1 + 0x18);
        pvVar23 = pvStack_78;
      }
    }
    puVar2 = &DAT_100089d3;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)param_1;
    }
    bVar10 = *(byte *)(param_1 + 0x32);
    bVar11 = *(byte *)(param_1 + 0x33);
    bVar12 = *(byte *)(param_1 + 0x34);
    uVar14 = recovered_10007c24(0xa4);
    if ((uVar14 == '\0') || (uRam00000000820108a4 == 0)) {
      *(undefined1 *)(param_1 + 0x31) = 0;
    }
    else {
      iVar15 = (*(code *)(ulong)uRam00000000820108a4)
                         (iVar15,puVar2,pvVar23,uVar24,uVar25,(int)uVar24 << 2,
                          (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12);
      *(bool *)(param_1 + 0x31) = iVar15 != 0;
      if (iVar15 != 0) goto LAB_100053c8;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
LAB_100053c8:
  uStack_70 = 0;
  recovered_100040c0(pvStack_78);
  return;
}

#undef DAT_100089d3
#undef UNK_820108a4
#undef uRam00000000820108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
#define pvStack_78 (*(void * *)(pf_stack_frame + 24))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000575c
 */

void recovered_1000575c(long param_1,uint *param_2)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  uchar uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  void *pvVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;

  if ((((((param_1 == 0) || (param_2 == (uint *)0x0)) || (*(long *)(param_2 + 2) == 0)) ||
       (((int)*param_2 < 1 || ((int)param_2[1] < 1)))) ||
      (((*(byte *)(param_1 + 0x1c) & 1) == 0 &&
       (uVar17 = recovered_10005404(param_1), (int)uVar17 == 0)))) ||
     ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    return;
  }
  cVar13 = *(char *)(param_1 + 0x1c);
  recovered_10005800((long *)(param_1 + 0x70),*(undefined1 **)(param_2 + 2),
                     *(undefined1 **)(param_2 + 2) + (long)(int)*param_2 * (long)(int)param_2[1] * 4
                    );
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)param_2;
  if (cVar13 == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 0;
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar17 = recovered_10005ccc(param_1);
    *(char *)(param_1 + 0x31) = (char)uVar17;
    if ((uVar17 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    return;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    pvVar24 = (void *)0x0;
  }
  else {
    pvVar24 = *(void **)(param_1 + 0x70);
  }
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0xa8);
  uVar17 = (ulong)uVar6;
  uVar7 = *(uint *)(param_1 + 0xac);
  uVar22 = (ulong)uVar7;
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar9 = *(uint *)(param_1 + 0x24);
  uVar21 = uVar8;
  if ((int)uVar8 < 2) {
    uVar21 = 1;
  }
  uVar25 = (ulong)uVar21;
  uVar21 = uVar9;
  if ((int)uVar9 < 2) {
    uVar21 = 1;
  }
  uVar26 = (ulong)uVar21;
  uStack_70 = 0;
  uStack_68 = 0;
  pvStack_78 = (void *)0x0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (pvVar24 != (void *)0x0) {
      if ((int)uVar6 < 1 || (int)uVar7 < 1) {
        pvVar24 = (void *)0x0;
      }
      else if (uVar8 == uVar6 && uVar9 == uVar7) {
        uVar25 = uVar17;
        uVar26 = uVar22;
      }
      else {
        uVar27 = (long)(int)uVar8 * (long)(int)uVar9 * 4;
        recovered_10007c6c((long *)&pvStack_78,uVar27);
        for (uVar20 = 0; uVar20 < uVar27; uVar20 = uVar20 + 4) {
          *(undefined1 *)((long)pvStack_78 + uVar20) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)((long)pvStack_78 + uVar20 + 1) = *(undefined1 *)(param_1 + 0x33);
          *(undefined1 *)((long)pvStack_78 + uVar20 + 2) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)((long)pvStack_78 + uVar20 + 3) = 0xff;
        }
        uVar8 = *(uint *)(param_1 + 0x20);
        uVar9 = *(uint *)(param_1 + 0x24);
        uVar21 = 0;
        if (uVar17 != 0) {
          uVar21 = (uint)((long)((long)(int)uVar8 * uVar22) / (long)uVar17);
        }
        if ((int)uVar21 < 2) {
          uVar21 = 1;
        }
        uVar19 = uVar8;
        if ((int)uVar9 < (int)uVar21) {
          uVar19 = 0;
          if (uVar22 != 0) {
            uVar19 = (uint)((long)((long)(int)uVar9 * uVar17) / (long)uVar22);
          }
          if ((int)uVar19 < 2) {
            uVar19 = 1;
          }
          uVar21 = uVar9;
        }
        lVar23 = (long)((int)(uVar9 - uVar21) / 2);
        for (uVar22 = 0; uVar22 != (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
            uVar22 = uVar22 + 1) {
          iVar16 = 0;
          iVar14 = 0;
          if (uVar21 != 0) {
            iVar14 = (int)(uVar7 * (int)uVar22) / (int)uVar21;
          }
          iVar4 = uVar7 - 1;
          if (iVar14 <= (int)(uVar7 - 1)) {
            iVar4 = iVar14;
          }
          iVar3 = 0;
          if (-1 < iVar14) {
            iVar3 = iVar4;
          }
          lVar1 = (long)((int)(uVar8 - uVar19) / 2);
          for (uVar20 = (ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)); uVar20 != 0;
              uVar20 = uVar20 - 1) {
            iVar14 = 0;
            if (uVar19 != 0) {
              iVar14 = iVar16 / (int)uVar19;
            }
            iVar4 = uVar6 - 1;
            if (iVar14 <= (int)(uVar6 - 1)) {
              iVar4 = iVar14;
            }
            iVar5 = 0;
            if (-1 < iVar14) {
              iVar5 = iVar4;
            }
            lVar18 = lVar1 + lVar23 * *(int *)(param_1 + 0x20);
            puVar2 = (undefined1 *)((long)pvVar24 + ((long)iVar3 * uVar17 + (long)iVar5) * 4);
            *(undefined1 *)((long)pvStack_78 + lVar18 * 4) = *puVar2;
            *(undefined1 *)((long)pvStack_78 + lVar18 * 4 + 1) = puVar2[1];
            *(undefined1 *)((long)pvStack_78 + lVar18 * 4 + 2) = puVar2[2];
            *(undefined1 *)((long)pvStack_78 + lVar18 * 4 + 3) = puVar2[3];
            lVar1 = lVar1 + 1;
            iVar16 = iVar16 + uVar6;
          }
          lVar23 = lVar23 + 1;
        }
        iVar16 = *(int *)(param_1 + 0x18);
        pvVar24 = pvStack_78;
      }
    }
    puVar2 = &DAT_100089d3;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)param_1;
    }
    bVar10 = *(byte *)(param_1 + 0x32);
    bVar11 = *(byte *)(param_1 + 0x33);
    bVar12 = *(byte *)(param_1 + 0x34);
    uVar15 = recovered_10007c24(0xa4);
    if ((uVar15 == '\0') || (uRam00000000820108a4 == 0)) {
      *(undefined1 *)(param_1 + 0x31) = 0;
    }
    else {
      iVar16 = (*(code *)(ulong)uRam00000000820108a4)
                         (iVar16,puVar2,pvVar24,uVar25,uVar26,(int)uVar25 << 2,
                          (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12);
      *(bool *)(param_1 + 0x31) = iVar16 != 0;
      if (iVar16 != 0) goto LAB_100053c8;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
LAB_100053c8:
  uStack_70 = 0;
  recovered_100040c0(pvStack_78);
  return;
}

#undef DAT_100089d3
#undef UNK_820108a4
#undef uRam00000000820108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005800
 */

long recovered_10005800(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  param_1[1] = 0;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = *param_1 - lVar4;
  }
  lVar3 = (long)param_3 - (long)param_2;
  if (lVar3 != 0) {
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar6 + lVar3) {
      uVar2 = 4;
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      do {
        uVar5 = uVar2;
        uVar2 = uVar5 << 1;
      } while (uVar5 < uVar6 + lVar3);
      recovered_10007cd4(param_1,uVar5);
      uVar6 = param_1[1];
    }
    while (uVar7 < uVar6) {
      puVar1 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar1[lVar3] = *puVar1;
      uVar6 = uVar6 - 1;
    }
    uVar6 = uVar7;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *(undefined1 *)(*param_1 + uVar6) = *param_2;
      uVar6 = uVar6 + 1;
    }
    lVar4 = *param_1;
    param_1[1] = param_1[1] + lVar3;
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + uVar7;
  }
  return lVar3;
}


#undef DAT_8201089c
#define DAT_8201089c (*(uint8_t *)(0x8201089cU))
#undef _DAT_8201089c
#define _DAT_8201089c (*(uint *)(0x8201089cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005814
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005814(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  ulong uVar2;

  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        recovered_10005898(param_1);
      }
      uVar2 = recovered_10005ccc(param_1);
      *(char *)(param_1 + 0x31) = (char)uVar2;
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
    }
    else if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
      recovered_10005108((undefined8 *)param_1);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    uVar1 = recovered_10007c24(0x9c);
    if ((uVar1 != '\0') && (_DAT_8201089c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x1000588c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_8201089c)();
      return;
    }
  }
  return;
}

#undef DAT_8201089c
#undef _DAT_8201089c

#undef UNK_82010900
#define UNK_82010900 (*(uint *)(0x82010900U))
#undef uRam0000000082010900
#define uRam0000000082010900 (*(uint32_t *)(0x82010900U))
#define uStack_d0 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_c0 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_a8 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_9c (*(undefined4 *)(pf_stack_frame + 68))
#define auStack_88 (*(ulong (*)[17])(pf_stack_frame + 88))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 112))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 120))
#define uStack_60 (*(undefined8 *)(pf_stack_frame + 128))
#define uStack_58 (*(undefined4 *)(pf_stack_frame + 136))
#define uStack_48 (*(undefined8 *)(pf_stack_frame + 152))
#define uStack_38 (*(undefined8 *)(pf_stack_frame + 168))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 48))
#define local_a0 (*(int *)(pf_stack_frame + 64))
#define local_98 (*(undefined4 *)(pf_stack_frame + 72))
#define local_78 (*(undefined8 *)(pf_stack_frame + 104))
#define local_50 (*(undefined8 *)(pf_stack_frame + 144))
#define local_40 (*(undefined8 *)(pf_stack_frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005898
 */

void recovered_10005898(long param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uchar uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  byte bVar18;
  byte bVar19;

  if (param_1 == 0) {
    return;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar10 = recovered_10007d94(&local_50);
    if ((int)uVar10 == 0) {
      return;
    }
    if ((local_50 & 1) == 0) {
      if (((uint)local_50 >> 1 & 1) != 0) {
        *(undefined2 *)(param_1 + 0x59) = 0;
        iVar8 = (int)((ulong)local_40 >> 0x20);
        if ((int)local_40 != 0 || iVar8 != 0) {
          *(ulong *)(param_1 + 0x3c) =
               CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) + iVar8,
                        (int)*(undefined8 *)(param_1 + 0x3c) + (int)local_40);
        }
      }
    }
    else {
      if (((*(char *)(param_1 + 0x59) == '\x01') && (*(int *)(param_1 + 100) == (uint)uStack_38)) &&
         (*(int *)(param_1 + 0x68) == PF_PART4(uStack_38, 4))) {
        if ((*(int *)(param_1 + 0x5c) == (uint)uStack_48) &&
           (*(int *)(param_1 + 0x60) == PF_PART4(uStack_48, 4))) {
          if ((*(byte *)(param_1 + 0x5a) & 1) == 0) goto LAB_100059cc;
        }
        else {
          *(undefined1 *)(param_1 + 0x5a) = 1;
        }
        auStack_88[0] = 0;
        local_78 = 0;
        auStack_88[1] = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uVar12 = recovered_10004ee8(auStack_88);
        if ((int)uVar12 == 0) {
LAB_10005bec:
          uVar4 = uStack_38;
          uVar10 = uStack_48;
          uStack_d0 = uStack_38;
          uStack_c0 = uStack_48;
          uVar12 = recovered_10007ebc((uint)uStack_48,(uint)uStack_38,*(int *)(param_1 + 0x20));
          *(int *)(param_1 + 0x3c) = (int)uVar12;
          uVar12 = recovered_10007ebc((uint)((ulong)uVar10 >> 0x20),(uint)((ulong)uVar4 >> 0x20),
                                      *(int *)(param_1 + 0x24));
          uVar9 = (undefined4)uVar12;
        }
        else {
          uVar13 = recovered_10007dd4((long)auStack_88,param_1,(uint *)&local_b0);
          uVar4 = uStack_38;
          uVar10 = uStack_48;
          if ((int)uVar13 == 0) goto LAB_10005bec;
          uStack_d0 = uStack_38;
          uStack_c0 = uStack_48;
          uVar12 = recovered_10007e58((uint)uStack_48,(uint)uStack_38,(uint)local_78,
                                      local_b0 & 0xffffffff,(uint)uStack_a8,*(int *)(param_1 + 0x20)
                                     );
          *(int *)(param_1 + 0x3c) = (int)uVar12;
          uVar12 = recovered_10007e58((uint)((ulong)uVar10 >> 0x20),(uint)((ulong)uVar4 >> 0x20),
                                      PF_PART4(local_78, 4),local_b0 >> 0x20,PF_PART4(uStack_a8, 4),
                                      *(int *)(param_1 + 0x24));
          uVar9 = (undefined4)uVar12;
        }
        *(undefined4 *)(param_1 + 0x40) = uVar9;
      }
      else {
        *(undefined2 *)(param_1 + 0x59) = 1;
LAB_100059cc:
        uStack_c0 = uStack_48;
        uStack_d0 = uStack_38;
      }
      *(undefined8 *)(param_1 + 100) = uStack_d0;
      *(undefined8 *)(param_1 + 0x5c) = uStack_c0;
    }
    auStack_88[0] = CONCAT71(PF_PART7(auStack_88[0], 1),PF_PART1(local_50, 4)) & 0xffffffffffffff01;
    auStack_88[0] =
         CONCAT62(PF_PART6(auStack_88[0], 2),CONCAT11(PF_PART1(local_50, 4) >> 1,(undefined1)auStack_88[0])) &
         0xffffffffffff01ff;
    auStack_88[0] =
         CONCAT53(PF_PART5(auStack_88[0], 3),CONCAT12(PF_PART1(local_50, 4) >> 2,(undefined2)auStack_88[0])) &
         0xffffffffff01ffff;
    for (lVar17 = 0; lVar17 != 3; lVar17 = lVar17 + 1) {
      cVar3 = *(char *)((long)auStack_88 + lVar17);
      if ((cVar3 == '\x01') && (lVar1 = param_1 + lVar17, (*(byte *)(lVar1 + 0x4c) & 1) == 0)) {
        *(undefined1 *)(lVar1 + 0x52) = 1;
        *(undefined1 *)(lVar1 + 0x55) = 1;
      }
      *(char *)(param_1 + lVar17 + 0x4c) = cVar3;
    }
  }
  else {
    local_b0 = 0;
    uStack_a8 = 0;
    local_98 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    local_78 = 0;
    uVar12 = recovered_10005404(param_1);
    if ((int)uVar12 == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      return;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = recovered_10007c24(0x100);
    if (((uVar7 != '\0') && (uRam0000000082010900 != 0)) &&
       (iVar8 = (*(code *)(ulong)uRam0000000082010900)(uVar9,&local_b0), iVar8 != 0)) {
      if ((local_b0 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x4c) = 0;
        *(undefined1 *)(param_1 + 0x4e) = 0;
        goto LAB_10005b50;
      }
      bVar5 = (local_b0 & 4) == 0;
      bVar6 = (*(uint *)(param_1 + 0xd8) & 6) != 2;
      *(ulong *)(param_1 + 0x44) = CONCAT44(local_98,uStack_9c);
      *(ulong *)(param_1 + 0x3c) = CONCAT44(local_98,uStack_9c);
      if (local_a0 == *(int *)(param_1 + 0x38)) {
        uVar16 = PF_PART4(local_b0, 4);
        if (!((local_b0 & 2) == 0 || (bVar5 || bVar6))) goto LAB_10005c60;
LAB_10005c84:
        bVar18 = 0;
        bVar19 = 0;
        bVar14 = 0;
      }
      else {
        *(int *)(param_1 + 0x38) = local_a0;
        if (!((local_b0 & 2) != 0 && (!bVar5 && !bVar6))) goto LAB_10005c84;
        uVar16 = (uint)uStack_a8 | PF_PART4(local_b0, 4);
        for (lVar17 = 0; lVar17 != 3; lVar17 = lVar17 + 1) {
          if (((uint)uStack_a8 >> (ulong)((uint)lVar17 & 0x1f) & 1) != 0) {
            *(undefined1 *)(param_1 + 0x55 + lVar17) = 1;
          }
        }
LAB_10005c60:
        bVar18 = (byte)uVar16 & 1;
        bVar19 = (byte)(uVar16 >> 1) & 1;
        bVar14 = (byte)(uVar16 >> 2) & 1;
      }
      *(byte *)(param_1 + 0x4c) = bVar18;
      *(byte *)(param_1 + 0x4d) = bVar19;
      *(byte *)(param_1 + 0x4e) = bVar14;
      goto LAB_10005b50;
    }
    uVar10 = recovered_10007d94(&local_50);
    if ((int)uVar10 == 0) {
      return;
    }
    uVar12 = recovered_10004ee8(auStack_88);
    if (((int)uVar12 == 0) || ((local_50 & 1) == 0)) {
      if (((uint)local_50 >> 1 & 1) != 0) {
        if ((int)local_40 != 0 || PF_PART4(local_40, 4) != 0) {
          uVar16 = *(int *)(param_1 + 0x44) + (int)local_40;
          uVar15 = (int)uVar16 >> 0x1f ^ 0x80000000;
          if (!SCARRY4(*(int *)(param_1 + 0x44),(int)local_40)) {
            uVar15 = uVar16;
          }
          *(uint *)(param_1 + 0x3c) = uVar15;
          uVar16 = *(int *)(param_1 + 0x48) + PF_PART4(local_40, 4);
          uVar15 = (int)uVar16 >> 0x1f ^ 0x80000000;
          if (!SCARRY4(*(int *)(param_1 + 0x48),PF_PART4(local_40, 4))) {
            uVar15 = uVar16;
          }
          goto LAB_10005a98;
        }
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x2c);
      uVar12 = recovered_10007ebc((uint)uStack_48,(uint)uStack_38,(uint)local_78);
      uVar11 = recovered_10007ebc(PF_PART4(uStack_48, 4),PF_PART4(uStack_38, 4),PF_PART4(local_78, 4));
      *(int *)(param_1 + 0x3c) = ((int)uVar12 - iVar8) + -0xe;
      uVar15 = ((int)uVar11 - iVar2) - 0x26;
LAB_10005a98:
      *(uint *)(param_1 + 0x40) = uVar15;
    }
    uVar16 = *(uint *)(param_1 + 0xd8) & 6;
    for (lVar17 = 0; lVar17 != 3; lVar17 = lVar17 + 1) {
      if (((uVar16 == 2) && ((PF_PART4(local_50, 4) >> (ulong)((uint)lVar17 & 0x1f) & 1) != 0)) &&
         ((*(byte *)(param_1 + lVar17 + 0x4c) & 1) == 0)) {
        *(undefined1 *)(param_1 + lVar17 + 0x55) = 1;
      }
    }
    bVar5 = uVar16 == 2;
    bVar18 = 0;
    if (bVar5) {
      bVar18 = (byte)(PF_PART4(local_50, 4) >> 1) & 1;
    }
    *(byte *)(param_1 + 0x4c) = bVar5 & (byte)(local_50 >> 0x20);
    *(byte *)(param_1 + 0x4d) = bVar18;
    bVar18 = 0;
    if (bVar5) {
      bVar18 = (byte)(PF_PART4(local_50, 4) >> 2) & 1;
    }
    *(byte *)(param_1 + 0x4e) = bVar18;
  }
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x3c);
LAB_10005b50:
  recovered_100056e8(param_1);
  return;
}

#undef UNK_82010900
#undef uRam0000000082010900
#undef uStack_d0
#undef uStack_c0
#undef uStack_a8
#undef uStack_9c
#undef auStack_88
#undef uStack_70
#undef uStack_68
#undef uStack_60
#undef uStack_58
#undef uStack_48
#undef uStack_38
#undef local_b0
#undef local_a0
#undef local_98
#undef local_78
#undef local_50
#undef local_40

#undef UNK_8201095c
#define UNK_8201095c (*(uint *)(0x8201095cU))
#undef uRam000000008201095c
#define uRam000000008201095c (*(uint32_t *)(0x8201095cU))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 56))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 64))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 72))
#define local_b0 (*(uint (*)[44])(pf_stack_frame + 16))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_98 (*(ulong (*)[19])(pf_stack_frame + 40))
#define local_70 (*(undefined8 *)(pf_stack_frame + 80))
#define local_68 (*(undefined4 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ccc
 */

ulong recovered_10005ccc(long param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  uchar uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;

  if (*(char *)(param_1 + 0x1c) != '\x01') {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) < 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) < 1) {
    return 0;
  }
  local_98[0] = 0;
  uStack_88 = 0;
  local_98[1] = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar16 = recovered_10004ee8(local_98);
  if ((int)uVar16 == 0) {
    return 0;
  }
  uVar9 = recovered_10007f04((long)local_98,(ulong)*(byte *)(param_1 + 0x32),
                             (ulong)*(byte *)(param_1 + 0x33),(ulong)*(byte *)(param_1 + 0x34));
  for (uVar20 = 0; uVar20 < PF_PART4(uStack_88, 4); uVar20 = uVar20 + 1) {
    for (uVar11 = 0; uVar11 < (uint)uStack_88; uVar11 = uVar11 + 1) {
      recovered_10007f68((long *)local_98,uVar11,uVar20,uVar9);
    }
  }
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_a8 = 0;
  uVar16 = recovered_10007dd4((long)local_98,param_1,local_b0);
  if ((int)uVar16 == 0) {
    return uVar16;
  }
  uVar11 = (uint)local_a8;
  uVar16 = local_a8 & 0xffffffff;
  uVar12 = PF_PART4(local_a8, 4);
  uVar17 = (ulong)PF_PART4(local_a8, 4);
  uVar20 = local_b0[0];
  uVar9 = local_b0[1];
  if (((*(long *)(param_1 + 0x78) != 0) &&
      (uVar18 = (ulong)*(uint *)(param_1 + 0xa8), 0 < (int)*(uint *)(param_1 + 0xa8))) &&
     (uVar19 = (ulong)*(uint *)(param_1 + 0xac), 0 < (int)*(uint *)(param_1 + 0xac))) {
    uVar24 = 0;
    uVar10 = 0;
    if (uVar18 != 0) {
      uVar10 = (uint)((uVar19 * uVar16) / uVar18);
    }
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar4 = 0;
    if (uVar19 != 0) {
      uVar4 = (uint)((uVar18 * uVar17) / uVar19);
    }
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar3 = PF_PART4(local_a8, 4);
    uVar18 = (ulong)uVar4;
    uVar19 = uVar17;
    if (uVar10 <= PF_PART4(local_a8, 4)) {
      uVar3 = uVar10;
      uVar18 = uVar16;
      uVar19 = (ulong)uVar10;
      uVar4 = (uint)local_a8;
    }
    iVar15 = local_b0[1] + (PF_PART4(local_a8, 4) - uVar3 >> 1);
    iVar1 = local_b0[0] + ((uint)local_a8 - uVar4 >> 1);
    for (; uVar24 < uVar19; uVar24 = uVar24 + 1) {
      uVar22 = 0;
      uVar5 = 0;
      if (uVar19 != 0) {
        uVar5 = (uVar24 * *(uint *)(param_1 + 0xac)) / uVar19;
      }
      for (; uVar18 != uVar22; uVar22 = uVar22 + 1) {
        uVar6 = 0;
        if (uVar18 != 0) {
          uVar6 = (uVar22 * *(uint *)(param_1 + 0xa8)) / uVar18;
        }
        pbVar2 = (byte *)(*(long *)(param_1 + 0x70) +
                         ((uVar5 & 0xffffffff) * (long)(int)*(uint *)(param_1 + 0xa8) +
                         (uVar6 & 0xffffffff)) * 4);
        uVar10 = recovered_10007f04((long)local_98,(ulong)*pbVar2,(ulong)pbVar2[1],(ulong)pbVar2[2])
        ;
        recovered_10007f68((long *)local_98,iVar1 + (int)uVar22,iVar15 + (int)uVar24,uVar10);
      }
    }
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if ((((int)uVar10 < 1) || (uVar12 == 0)) || (uVar11 == 0)) goto LAB_10006014;
  uVar11 = *(uint *)(param_1 + 0x24);
  if ((int)uVar11 < 1) goto LAB_10006014;
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar21 = *(int *)(param_1 + 0x40);
  iVar15 = uVar10 - 1;
  if (iVar1 <= (int)(uVar10 - 1)) {
    iVar15 = iVar1;
  }
  iVar23 = 0;
  if (-1 < iVar1) {
    iVar23 = iVar15;
  }
  iVar15 = 0;
  if ((ulong)uVar10 != 0) {
    iVar15 = (int)(((long)iVar23 * uVar16) / (ulong)uVar10);
  }
  iVar1 = uVar11 - 1;
  if (iVar21 <= (int)(uVar11 - 1)) {
    iVar1 = iVar21;
  }
  iVar23 = 0;
  if (-1 < iVar21) {
    iVar23 = iVar1;
  }
  iVar1 = 0;
  if ((ulong)uVar11 != 0) {
    iVar1 = (int)(((long)iVar23 * uVar17) / (ulong)uVar11);
  }
  uVar11 = recovered_10007f04((long)local_98,0,0,0);
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    uVar16 = 0xff;
    uVar17 = 0x3c;
LAB_10005f64:
    uVar18 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x4d) == '\x01') {
      uVar16 = 0x3c;
      uVar17 = 0xff;
      goto LAB_10005f64;
    }
    if (*(char *)(param_1 + 0x4e) == '\x01') {
      uVar16 = 0x50;
      uVar17 = 0x82;
    }
    else {
      uVar16 = 0xff;
      uVar17 = 0xff;
    }
    uVar18 = 0xff;
  }
  uVar12 = recovered_10007f04((long)local_98,uVar16,uVar17,uVar18);
  for (iVar21 = -7; iVar21 != 8; iVar21 = iVar21 + 1) {
    uVar10 = uVar9 + iVar1 + iVar21;
    for (iVar23 = -7; iVar23 != 8; iVar23 = iVar23 + 1) {
      iVar13 = recovered_100013a0(iVar23);
      iVar14 = recovered_100013a0(iVar21);
      if (((iVar14 + iVar13 < 8) && (uVar4 = uVar20 + iVar15 + iVar23, -1 < (int)uVar4)) &&
         (-1 < (int)uVar10)) {
        uVar3 = uVar11;
        if (iVar14 + iVar13 < 6) {
          uVar3 = uVar12;
        }
        recovered_10007f68((long *)local_98,uVar4,uVar10,uVar3);
      }
    }
  }
LAB_10006014:
  uVar16 = uStack_88 & 0xffffffff;
  uVar7 = PF_PART4(uStack_88, 4);
  uVar8 = recovered_10007c24(0x15c);
  if (uVar8 == '\0') {
    return 0;
  }
  if (uRam000000008201095c == 0) {
    return 0;
  }
  iVar15 = (*(code *)(ulong)uRam000000008201095c)(0,0,uVar16,uVar7);
  return (ulong)(iVar15 != 0);
}

#undef UNK_8201095c
#undef uRam000000008201095c
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef local_b0
#undef local_a8
#undef local_98
#undef local_70
#undef local_68

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte recovered_10006074(long param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    recovered_10005404(param_1);
    bVar1 = *(byte *)(param_1 + 0x2c);
  }
  return bVar1 & 1;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef UNK_820108a4
#define UNK_820108a4 (*(uint *)(0x820108a4U))
#undef uRam00000000820108a4
#define uRam00000000820108a4 (*(uint32_t *)(0x820108a4U))
#define pvStack_78 (*(void * *)(pf_stack_frame + 24))
#define uStack_70 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061c4
 */

void recovered_100061c4(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uchar uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  void *pvVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;

  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x32) = param_2;
  *(undefined1 *)(param_1 + 0x33) = param_3;
  *(undefined1 *)(param_1 + 0x34) = param_4;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 0;
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    uVar16 = recovered_10005ccc(param_1);
    *(char *)(param_1 + 0x31) = (char)uVar16;
    if ((uVar16 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
    return;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    pvVar23 = (void *)0x0;
  }
  else {
    pvVar23 = *(void **)(param_1 + 0x70);
  }
  iVar15 = *(int *)(param_1 + 0x18);
  if (iVar15 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0xa8);
  uVar16 = (ulong)uVar6;
  uVar7 = *(uint *)(param_1 + 0xac);
  uVar21 = (ulong)uVar7;
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar9 = *(uint *)(param_1 + 0x24);
  uVar20 = uVar8;
  if ((int)uVar8 < 2) {
    uVar20 = 1;
  }
  uVar24 = (ulong)uVar20;
  uVar20 = uVar9;
  if ((int)uVar9 < 2) {
    uVar20 = 1;
  }
  uVar25 = (ulong)uVar20;
  uStack_70 = 0;
  uStack_68 = 0;
  pvStack_78 = (void *)0x0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (pvVar23 != (void *)0x0) {
      if ((int)uVar6 < 1 || (int)uVar7 < 1) {
        pvVar23 = (void *)0x0;
      }
      else if (uVar8 == uVar6 && uVar9 == uVar7) {
        uVar24 = uVar16;
        uVar25 = uVar21;
      }
      else {
        uVar26 = (long)(int)uVar8 * (long)(int)uVar9 * 4;
        recovered_10007c6c((long *)&pvStack_78,uVar26);
        for (uVar19 = 0; uVar19 < uVar26; uVar19 = uVar19 + 4) {
          *(undefined1 *)((long)pvStack_78 + uVar19) = *(undefined1 *)(param_1 + 0x32);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 1) = *(undefined1 *)(param_1 + 0x33);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 2) = *(undefined1 *)(param_1 + 0x34);
          *(undefined1 *)((long)pvStack_78 + uVar19 + 3) = 0xff;
        }
        uVar8 = *(uint *)(param_1 + 0x20);
        uVar9 = *(uint *)(param_1 + 0x24);
        uVar20 = 0;
        if (uVar16 != 0) {
          uVar20 = (uint)((long)((long)(int)uVar8 * uVar21) / (long)uVar16);
        }
        if ((int)uVar20 < 2) {
          uVar20 = 1;
        }
        uVar18 = uVar8;
        if ((int)uVar9 < (int)uVar20) {
          uVar18 = 0;
          if (uVar21 != 0) {
            uVar18 = (uint)((long)((long)(int)uVar9 * uVar16) / (long)uVar21);
          }
          if ((int)uVar18 < 2) {
            uVar18 = 1;
          }
          uVar20 = uVar9;
        }
        lVar22 = (long)((int)(uVar9 - uVar20) / 2);
        for (uVar21 = 0; uVar21 != (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
            uVar21 = uVar21 + 1) {
          iVar15 = 0;
          iVar13 = 0;
          if (uVar20 != 0) {
            iVar13 = (int)(uVar7 * (int)uVar21) / (int)uVar20;
          }
          iVar4 = uVar7 - 1;
          if (iVar13 <= (int)(uVar7 - 1)) {
            iVar4 = iVar13;
          }
          iVar3 = 0;
          if (-1 < iVar13) {
            iVar3 = iVar4;
          }
          lVar1 = (long)((int)(uVar8 - uVar18) / 2);
          for (uVar19 = (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
              uVar19 = uVar19 - 1) {
            iVar13 = 0;
            if (uVar18 != 0) {
              iVar13 = iVar15 / (int)uVar18;
            }
            iVar4 = uVar6 - 1;
            if (iVar13 <= (int)(uVar6 - 1)) {
              iVar4 = iVar13;
            }
            iVar5 = 0;
            if (-1 < iVar13) {
              iVar5 = iVar4;
            }
            lVar17 = lVar1 + lVar22 * *(int *)(param_1 + 0x20);
            puVar2 = (undefined1 *)((long)pvVar23 + ((long)iVar3 * uVar16 + (long)iVar5) * 4);
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4) = *puVar2;
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 1) = puVar2[1];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 2) = puVar2[2];
            *(undefined1 *)((long)pvStack_78 + lVar17 * 4 + 3) = puVar2[3];
            lVar1 = lVar1 + 1;
            iVar15 = iVar15 + uVar6;
          }
          lVar22 = lVar22 + 1;
        }
        iVar15 = *(int *)(param_1 + 0x18);
        pvVar23 = pvStack_78;
      }
    }
    puVar2 = &DAT_100089d3;
    if (*(undefined1 **)param_1 != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)param_1;
    }
    bVar10 = *(byte *)(param_1 + 0x32);
    bVar11 = *(byte *)(param_1 + 0x33);
    bVar12 = *(byte *)(param_1 + 0x34);
    uVar14 = recovered_10007c24(0xa4);
    if ((uVar14 == '\0') || (uRam00000000820108a4 == 0)) {
      *(undefined1 *)(param_1 + 0x31) = 0;
    }
    else {
      iVar15 = (*(code *)(ulong)uRam00000000820108a4)
                         (iVar15,puVar2,pvVar23,uVar24,uVar25,(int)uVar24 << 2,
                          (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12);
      *(bool *)(param_1 + 0x31) = iVar15 != 0;
      if (iVar15 != 0) goto LAB_100053c8;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
LAB_100053c8:
  uStack_70 = 0;
  recovered_100040c0(pvStack_78);
  return;
}

#undef DAT_100089d3
#undef UNK_820108a4
#undef uRam00000000820108a4
#undef pvStack_78
#undef uStack_70
#undef uStack_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061ec
 */

int * recovered_100061ec(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *dst;
  int *piVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong size;
  int iVar4;
  int iVar5;

  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = recovered_1000408c(0x20);
    iVar4 = *(int *)(param_1 + 0xa8);
    if (iVar4 < 1) {
      iVar4 = *(int *)(param_1 + 0x20);
    }
    *piVar1 = iVar4;
    iVar5 = *(int *)(param_1 + 0xac);
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x24);
    }
    piVar1[1] = iVar5;
    size = (long)iVar4 * (long)iVar5 * 4;
    dst = recovered_100040bc(size);
    *(void **)(piVar1 + 2) = dst;
    if (((*(long *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0xa8) != iVar4)) ||
       (*(int *)(param_1 + 0xac) != iVar5)) {
      puVar3 = (undefined1 *)((long)dst + 3);
      for (uVar2 = 0; uVar2 < size; uVar2 = uVar2 + 4) {
        puVar3[-3] = *(undefined1 *)(param_1 + 0x32);
        *(undefined2 *)(puVar3 + -2) = *(undefined2 *)(param_1 + 0x33);
        *puVar3 = 0xff;
        puVar3 = puVar3 + 4;
      }
    }
    else {
      recovered_1000147c(dst,*(void **)(param_1 + 0x70),size);
    }
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  return piVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062d4
 */

void recovered_100062d4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xffffffff;
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x3c);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x40);
  }
  *param_3 = uVar1;
  return;
}


#undef DAT_10010360
#define DAT_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ad0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000630c
 */

byte recovered_1000630c(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte bVar2;

  bVar2 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar2 = recovered_100063a8(param_1);
    if ((bVar2 & 1) == 0) {
      bVar2 = 0;
      *(undefined1 *)(param_1 + (ulong)param_2 + 0x4f) = 0;
    }
    else if (DAT_10010360 == param_1) {
      bVar2 = *(byte *)(param_1 + (ulong)param_2 + 0x4f);
    }
    else {
      recovered_10005898(param_1);
      if ((*(byte *)(param_1 + (ulong)param_2 + 0x4c) & 1) == 0) {
        bVar2 = *(byte *)(param_1 + (ulong)param_2 + 0x52);
      }
      else {
        bVar2 = 1;
      }
      lVar1 = param_1 + (ulong)param_2;
      *(byte *)(lVar1 + 0x4f) = bVar2 & 1;
      *(undefined1 *)(lVar1 + 0x52) = 0;
    }
  }
  return bVar2 & 1;
}

#undef DAT_10010360

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a8
 */

byte recovered_100063a8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte bVar2;

  if (*(char *)(param_1 + 0x1c) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x30) ^ 1;
  }
  else {
    uVar1 = recovered_10005404(param_1);
    if ((int)uVar1 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (*(uint *)(param_1 + 0xd8) & 2) != 0 && (*(uint *)(param_1 + 0xd8) & 4) == 0;
    }
  }
  return bVar2 & 1;
}


#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7850U)))
#undef DAT_100100e1
#define DAT_100100e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7851U)))
#undef DAT_100100e2
#define DAT_100100e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7852U)))
#undef DAT_100100e3
#define DAT_100100e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7853U)))
#undef DAT_100100e4
#define DAT_100100e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_10010109
#define DAT_10010109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7879U)))
#undef DAT_1001010a
#define DAT_1001010a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787aU)))
#undef DAT_1001010b
#define DAT_1001010b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787bU)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787cU)))
#undef DAT_1001010d
#define DAT_1001010d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787dU)))
#undef DAT_1001010e
#define DAT_1001010e (*(byte *)(((uintptr_t)pf_module_state + 0x787eU)))
#undef DAT_10010358
#define DAT_10010358 (*(int *)(((uintptr_t)pf_module_state + 0x7ac8U)))
#undef DAT_1001035c
#define DAT_1001035c (*(int *)(((uintptr_t)pf_module_state + 0x7accU)))
#undef DAT_10010360
#define DAT_10010360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ad0U)))
#undef DAT_10010368
#define DAT_10010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ad8U)))
#undef DAT_10010370
#define DAT_10010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ae0U)))
#undef PTR_DAT_1000c010
#define PTR_DAT_1000c010 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x3780U)))
#define local_69 (*(undefined1 *)(pf_stack_frame + 23))
#define local_68 (*(int *)(pf_stack_frame + 24))
#define local_61 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063f8
 */

void recovered_100063f8(void)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;

  recovered_100068a4();
  if (DAT_10010360 == 0) {
    return;
  }
  bVar8 = recovered_100063a8(DAT_10010360);
  lVar7 = DAT_10010360;
  if (bVar8 == 0) {
    return;
  }
  *(undefined8 *)(DAT_10010360 + 0x90) = 0;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  iVar6 = DAT_10010358;
  DAT_1001035c = 0;
  recovered_10005898(lVar7);
  lVar7 = DAT_10010360;
  *(undefined1 *)(DAT_10010360 + 0x58) = 1;
  lVar11 = 3;
  pbVar10 = (byte *)(lVar7 + 0x52);
  do {
    if ((pbVar10[-6] & 1) == 0) {
      bVar8 = *pbVar10;
    }
    else {
      bVar8 = 1;
    }
    pbVar10[-3] = bVar8 & 1;
    *pbVar10 = 0;
    lVar11 = lVar11 + -1;
    pbVar10 = pbVar10 + 1;
  } while (lVar11 != 0);
  while( true ) {
    uVar9 = recovered_10006a20();
    local_68 = (int)uVar9;
    if (local_68 == 0) break;
    recovered_100085a0(&DAT_10010368,&local_68);
  }
  uVar12 = 0;
  local_68 = 0;
  do {
    lVar7 = DAT_10010360;
    if (DAT_10010370 <= uVar12) {
      DAT_10010370 = 0;
      if (iVar6 == 1 && DAT_10010358 == 1) {
        *(undefined1 *)(DAT_10010360 + 0x30) = 1;
      }
      else if (iVar6 != 2 || DAT_10010358 != 2) {
        DAT_1001035c = DAT_10010358;
        DAT_10010370 = 0;
        return;
      }
      DAT_1001035c = 0;
      DAT_10010358 = 0;
      return;
    }
    uVar3 = *(uint *)(DAT_10010368 + uVar12 * 4);
    uVar5 = uVar3 >> 8 & 0xff;
    uVar1 = uVar3 & 0xff;
    if ((*(char *)(DAT_10010360 + 0x1c) == '\x01' && uVar5 == 1) && uVar1 != 0x1b) {
LAB_100065a0:
      *(undefined1 *)(DAT_10010360 + 0x30) = 1;
      goto LAB_10006830;
    }
    if (uVar1 == 0) {
      switch((uintptr_t)(uVar5)) {
      case 1:
        DAT_100100e1 = 1;
        break;
      case 2:
        DAT_100100e2 = 1;
        break;
      case 3:
        DAT_100100e4 = 1;
        break;
      case 4:
        DAT_100100e3 = 1;
        break;
      default:
        if (uVar5 == 0x17) goto LAB_100065a0;
        goto LAB_1000677c;
      }
    }
    else {
      if (DAT_10010358 == 2) {
        DAT_10010358 = 0;
        switch((uintptr_t)(uVar3 & 0xff)) {
        case 0x41:
          DAT_100100e1 = 1;
          break;
        case 0x42:
          DAT_100100e2 = 1;
          break;
        case 0x43:
          DAT_100100e4 = 1;
          break;
        case 0x44:
          DAT_100100e3 = 1;
          break;
        default:
          goto joined_r0x100065c8;
        }
      }
      else {
        if (DAT_10010358 == 1) {
          if ((uVar3 & 0xff) == 0x5b) {
            DAT_10010358 = 2;
            goto switchD_10006708_caseD_5;
          }
          DAT_10010358 = 0;
          *(undefined1 *)(DAT_10010360 + 0x30) = 1;
        }
joined_r0x100065c8:
        if ((uVar3 & 0xff) == 0x1b) {
          DAT_10010358 = 1;
        }
        else {
          uVar2 = uVar3 & 0xff;
          if (uVar2 < 0x20) {
            if (uVar2 < 0xe) {
              uVar4 = 1 << (ulong)(uVar3 & 0x1f);
              if ((uVar4 & 0x2500) != 0) goto LAB_100065f0;
              if ((uVar4 & 0x18) == 0) goto switchD_10006708_caseD_5;
switchD_10006708_caseD_3:
              *(undefined1 *)(lVar7 + 0x30) = 1;
            }
          }
          else {
LAB_100065f0:
            uVar4 = 0xd;
            if (uVar2 != 10) {
              uVar4 = uVar3;
            }
            local_61 = 8;
            if (uVar2 != 0x7f) {
              local_61 = (char)uVar4;
            }
            recovered_10008538((long *)(lVar7 + 0x88),&local_61);
            if ((uVar3 - 0x20 & 0xff) < 0x5f) {
              DAT_1001010e = (byte)uVar3;
              bVar8 = DAT_1001010e;
              if (0x19 < (uVar3 - 0x61 & 0xff)) {
                if (0x19 < (uVar3 - 0x41 & 0xff)) {
                  if ((uVar3 - 0x30 & 0xff) < 10) {
                    *(&PTR_DAT_1000c010)[(ulong)(uVar3 - 0x30) & 0xff] = 1;
                    goto switchD_10006708_caseD_5;
                  }
                  goto LAB_100066e4;
                }
                bVar8 = DAT_1001010e | 0x20;
              }
              recovered_10007ff0((int)(char)bVar8);
            }
            else {
LAB_100066e4:
              uVar3 = uVar3 & 0xff;
              switch((uintptr_t)(uVar3)) {
              case 3:
              case 4:
                goto switchD_10006708_caseD_3;
              case 5:
              case 6:
              case 7:
              case 9:
              case 0xb:
              case 0xc:
                break;
              case 8:
switchD_10006708_caseD_8:
                DAT_1001010b = 1;
                break;
              case 10:
              case 0xd:
                DAT_100100e0 = 1;
                break;
              default:
                if (uVar3 == 0x20) {
                  DAT_1001010d = 1;
                }
                else if (uVar3 == 0x2d) {
                  DAT_10010109 = 1;
                }
                else if (uVar3 == 0x2e) {
                  DAT_1001010a = 1;
                }
                else if (uVar3 == 0x7f) goto switchD_10006708_caseD_8;
              }
            }
          }
        }
      }
switchD_10006708_caseD_5:
      if (uVar1 != 0x1b && DAT_10010360 != 0) {
LAB_1000677c:
        lVar7 = DAT_10010360;
        switch((uintptr_t)(uVar5)) {
        case 0x48:
          DAT_100100e1 = 1;
          break;
        case 0x49:
        case 0x4a:
        case 0x4c:
        case 0x4e:
        case 0x4f:
        case 0x51:
        case 0x52:
          break;
        case 0x4b:
          DAT_100100e3 = 1;
          break;
        case 0x4d:
          DAT_100100e4 = 1;
          break;
        case 0x50:
          DAT_100100e2 = 1;
          break;
        case 0x53:
          DAT_1001010c = 1;
          break;
        default:
          if (uVar5 == 1) {
            *(undefined1 *)(DAT_10010360 + 0x30) = 1;
          }
          else if (uVar5 == 0xe) {
            DAT_1001010b = 1;
          }
          else if (uVar5 == 0x1c) {
            DAT_100100e0 = 1;
          }
        }
        if (uVar1 == 0 && uVar5 == 0xe) {
          local_69 = 8;
          recovered_10008538((long *)(lVar7 + 0x88),&local_69);
        }
      }
    }
LAB_10006830:
    uVar12 = uVar12 + 1;
  } while( true );
}

#undef DAT_100100e0
#undef DAT_100100e1
#undef DAT_100100e2
#undef DAT_100100e3
#undef DAT_100100e4
#undef DAT_10010109
#undef DAT_1001010a
#undef DAT_1001010b
#undef DAT_1001010c
#undef DAT_1001010d
#undef DAT_1001010e
#undef DAT_10010358
#undef DAT_1001035c
#undef DAT_10010360
#undef DAT_10010368
#undef DAT_10010370
#undef PTR_DAT_1000c010
#undef local_69
#undef local_68
#undef local_61

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7850U)))
#undef DAT_100100e1
#define DAT_100100e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7851U)))
#undef DAT_100100e2
#define DAT_100100e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7852U)))
#undef DAT_100100e3
#define DAT_100100e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7853U)))
#undef DAT_100100e4
#define DAT_100100e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_100100e5
#define DAT_100100e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7855U)))
#undef DAT_100100e6
#define DAT_100100e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7856U)))
#undef DAT_100100e7
#define DAT_100100e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7857U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7858U)))
#undef DAT_100100e9
#define DAT_100100e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7859U)))
#undef DAT_100100ea
#define DAT_100100ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785aU)))
#undef DAT_100100eb
#define DAT_100100eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785bU)))
#undef DAT_100100ec
#define DAT_100100ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785cU)))
#undef DAT_100100ed
#define DAT_100100ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785dU)))
#undef DAT_100100ee
#define DAT_100100ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785eU)))
#undef DAT_100100ef
#define DAT_100100ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785fU)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7860U)))
#undef DAT_100100f1
#define DAT_100100f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7861U)))
#undef DAT_100100f2
#define DAT_100100f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7862U)))
#undef DAT_100100f3
#define DAT_100100f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7863U)))
#undef DAT_100100f4
#define DAT_100100f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7864U)))
#undef DAT_100100f5
#define DAT_100100f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7865U)))
#undef DAT_100100f6
#define DAT_100100f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7866U)))
#undef DAT_100100f7
#define DAT_100100f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7867U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7868U)))
#undef DAT_100100f9
#define DAT_100100f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7869U)))
#undef DAT_100100fa
#define DAT_100100fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786aU)))
#undef DAT_100100fb
#define DAT_100100fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786bU)))
#undef DAT_100100fc
#define DAT_100100fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786cU)))
#undef DAT_100100fd
#define DAT_100100fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786dU)))
#undef DAT_100100fe
#define DAT_100100fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786eU)))
#undef DAT_100100ff
#define DAT_100100ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786fU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7870U)))
#undef DAT_10010101
#define DAT_10010101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7871U)))
#undef DAT_10010102
#define DAT_10010102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7872U)))
#undef DAT_10010103
#define DAT_10010103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7873U)))
#undef DAT_10010104
#define DAT_10010104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7874U)))
#undef DAT_10010105
#define DAT_10010105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7875U)))
#undef DAT_10010106
#define DAT_10010106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7876U)))
#undef DAT_10010107
#define DAT_10010107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7877U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7878U)))
#undef DAT_10010109
#define DAT_10010109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7879U)))
#undef DAT_1001010a
#define DAT_1001010a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787aU)))
#undef DAT_1001010b
#define DAT_1001010b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787bU)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787cU)))
#undef DAT_1001010d
#define DAT_1001010d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787dU)))
#undef DAT_1001010e
#define DAT_1001010e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068a4
 */

void recovered_100068a4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100100e0 = 0;
  DAT_100100e1 = 0;
  DAT_100100e2 = 0;
  DAT_100100e3 = 0;
  DAT_100100e4 = 0;
  DAT_100100e5 = 0;
  DAT_100100e6 = 0;
  DAT_100100e7 = 0;
  DAT_100100e8 = 0;
  DAT_100100e9 = 0;
  DAT_100100ea = 0;
  DAT_100100eb = 0;
  DAT_100100ec = 0;
  DAT_100100ed = 0;
  DAT_100100ee = 0;
  DAT_100100ef = 0;
  DAT_100100f0 = 0;
  DAT_100100f1 = 0;
  DAT_100100f2 = 0;
  DAT_100100f3 = 0;
  DAT_100100f4 = 0;
  DAT_100100f5 = 0;
  DAT_100100f6 = 0;
  DAT_100100f7 = 0;
  DAT_100100f8 = 0;
  DAT_100100f9 = 0;
  DAT_100100fa = 0;
  DAT_100100fb = 0;
  DAT_100100fc = 0;
  DAT_100100fd = 0;
  DAT_100100fe = 0;
  DAT_100100ff = 0;
  DAT_10010100 = 0;
  DAT_10010101 = 0;
  DAT_10010102 = 0;
  DAT_10010103 = 0;
  DAT_10010104 = 0;
  DAT_10010105 = 0;
  DAT_10010106 = 0;
  DAT_10010107 = 0;
  DAT_10010108 = 0;
  DAT_10010109 = 0;
  DAT_1001010a = 0;
  DAT_1001010b = 0;
  DAT_1001010c = 0;
  DAT_1001010d = 0;
  DAT_1001010e = 0;
  return;
}

#undef DAT_100100e0
#undef DAT_100100e1
#undef DAT_100100e2
#undef DAT_100100e3
#undef DAT_100100e4
#undef DAT_100100e5
#undef DAT_100100e6
#undef DAT_100100e7
#undef DAT_100100e8
#undef DAT_100100e9
#undef DAT_100100ea
#undef DAT_100100eb
#undef DAT_100100ec
#undef DAT_100100ed
#undef DAT_100100ee
#undef DAT_100100ef
#undef DAT_100100f0
#undef DAT_100100f1
#undef DAT_100100f2
#undef DAT_100100f3
#undef DAT_100100f4
#undef DAT_100100f5
#undef DAT_100100f6
#undef DAT_100100f7
#undef DAT_100100f8
#undef DAT_100100f9
#undef DAT_100100fa
#undef DAT_100100fb
#undef DAT_100100fc
#undef DAT_100100fd
#undef DAT_100100fe
#undef DAT_100100ff
#undef DAT_10010100
#undef DAT_10010101
#undef DAT_10010102
#undef DAT_10010103
#undef DAT_10010104
#undef DAT_10010105
#undef DAT_10010106
#undef DAT_10010107
#undef DAT_10010108
#undef DAT_10010109
#undef DAT_1001010a
#undef DAT_1001010b
#undef DAT_1001010c
#undef DAT_1001010d
#undef DAT_1001010e

#undef DAT_8201082c
#define DAT_8201082c (*(uint8_t *)(0x8201082cU))
#undef _DAT_8201082c
#define _DAT_8201082c (*(uint *)(0x8201082cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006a20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007c24(0x2c);
  if ((uVar1 == '\0') || (_DAT_8201082c == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_8201082c)();
  return uVar2;
}

#undef DAT_8201082c
#undef _DAT_8201082c

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7850U)))
#undef DAT_100100e1
#define DAT_100100e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7851U)))
#undef DAT_100100e2
#define DAT_100100e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7852U)))
#undef DAT_100100e3
#define DAT_100100e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7853U)))
#undef DAT_100100e4
#define DAT_100100e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7854U)))
#undef DAT_100100e5
#define DAT_100100e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7855U)))
#undef DAT_100100e6
#define DAT_100100e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7856U)))
#undef DAT_100100e7
#define DAT_100100e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7857U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7858U)))
#undef DAT_100100e9
#define DAT_100100e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7859U)))
#undef DAT_100100ea
#define DAT_100100ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785aU)))
#undef DAT_100100eb
#define DAT_100100eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785bU)))
#undef DAT_100100ec
#define DAT_100100ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785cU)))
#undef DAT_100100ed
#define DAT_100100ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785dU)))
#undef DAT_100100ee
#define DAT_100100ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785eU)))
#undef DAT_100100ef
#define DAT_100100ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x785fU)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7860U)))
#undef DAT_100100f1
#define DAT_100100f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7861U)))
#undef DAT_100100f2
#define DAT_100100f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7862U)))
#undef DAT_100100f3
#define DAT_100100f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7863U)))
#undef DAT_100100f4
#define DAT_100100f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7864U)))
#undef DAT_100100f5
#define DAT_100100f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7865U)))
#undef DAT_100100f6
#define DAT_100100f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7866U)))
#undef DAT_100100f7
#define DAT_100100f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7867U)))
#undef DAT_100100f8
#define DAT_100100f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7868U)))
#undef DAT_100100f9
#define DAT_100100f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7869U)))
#undef DAT_100100fa
#define DAT_100100fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786aU)))
#undef DAT_100100fb
#define DAT_100100fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786bU)))
#undef DAT_100100fc
#define DAT_100100fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786cU)))
#undef DAT_100100fd
#define DAT_100100fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786dU)))
#undef DAT_100100fe
#define DAT_100100fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786eU)))
#undef DAT_100100ff
#define DAT_100100ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x786fU)))
#undef DAT_10010100
#define DAT_10010100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7870U)))
#undef DAT_10010101
#define DAT_10010101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7871U)))
#undef DAT_10010102
#define DAT_10010102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7872U)))
#undef DAT_10010103
#define DAT_10010103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7873U)))
#undef DAT_10010104
#define DAT_10010104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7874U)))
#undef DAT_10010105
#define DAT_10010105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7875U)))
#undef DAT_10010106
#define DAT_10010106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7876U)))
#undef DAT_10010107
#define DAT_10010107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7877U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7878U)))
#undef DAT_10010109
#define DAT_10010109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x7879U)))
#undef DAT_1001010a
#define DAT_1001010a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787aU)))
#undef DAT_1001010b
#define DAT_1001010b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787bU)))
#undef DAT_1001010c
#define DAT_1001010c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787cU)))
#undef DAT_1001010d
#define DAT_1001010d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787dU)))
#undef DAT_1001010e
#define DAT_1001010e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x787eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a58
 */

void recovered_10006a58(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100100e0 = 0;
  DAT_100100e1 = 0;
  DAT_100100e2 = 0;
  DAT_100100e3 = 0;
  DAT_100100e4 = 0;
  DAT_100100e5 = 0;
  DAT_100100e6 = 0;
  DAT_100100e7 = 0;
  DAT_100100e8 = 0;
  DAT_100100e9 = 0;
  DAT_100100ea = 0;
  DAT_100100eb = 0;
  DAT_100100ec = 0;
  DAT_100100ed = 0;
  DAT_100100ee = 0;
  DAT_100100ef = 0;
  DAT_100100f0 = 0;
  DAT_100100f1 = 0;
  DAT_100100f2 = 0;
  DAT_100100f3 = 0;
  DAT_100100f4 = 0;
  DAT_100100f5 = 0;
  DAT_100100f6 = 0;
  DAT_100100f7 = 0;
  DAT_100100f8 = 0;
  DAT_100100f9 = 0;
  DAT_100100fa = 0;
  DAT_100100fb = 0;
  DAT_100100fc = 0;
  DAT_100100fd = 0;
  DAT_100100fe = 0;
  DAT_100100ff = 0;
  DAT_10010100 = 0;
  DAT_10010101 = 0;
  DAT_10010102 = 0;
  DAT_10010103 = 0;
  DAT_10010104 = 0;
  DAT_10010105 = 0;
  DAT_10010106 = 0;
  DAT_10010107 = 0;
  DAT_10010108 = 0;
  DAT_10010109 = 0;
  DAT_1001010a = 0;
  DAT_1001010b = 0;
  DAT_1001010c = 0;
  DAT_1001010d = 0;
  DAT_1001010e = 0;
  return;
}

#undef DAT_100100e0
#undef DAT_100100e1
#undef DAT_100100e2
#undef DAT_100100e3
#undef DAT_100100e4
#undef DAT_100100e5
#undef DAT_100100e6
#undef DAT_100100e7
#undef DAT_100100e8
#undef DAT_100100e9
#undef DAT_100100ea
#undef DAT_100100eb
#undef DAT_100100ec
#undef DAT_100100ed
#undef DAT_100100ee
#undef DAT_100100ef
#undef DAT_100100f0
#undef DAT_100100f1
#undef DAT_100100f2
#undef DAT_100100f3
#undef DAT_100100f4
#undef DAT_100100f5
#undef DAT_100100f6
#undef DAT_100100f7
#undef DAT_100100f8
#undef DAT_100100f9
#undef DAT_100100fa
#undef DAT_100100fb
#undef DAT_100100fc
#undef DAT_100100fd
#undef DAT_100100fe
#undef DAT_100100ff
#undef DAT_10010100
#undef DAT_10010101
#undef DAT_10010102
#undef DAT_10010103
#undef DAT_10010104
#undef DAT_10010105
#undef DAT_10010106
#undef DAT_10010107
#undef DAT_10010108
#undef DAT_10010109
#undef DAT_1001010a
#undef DAT_1001010b
#undef DAT_1001010c
#undef DAT_1001010d
#undef DAT_1001010e

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006a5c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006a60(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006a64(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006a68(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10006a6c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_100089d1
#define DAT_100089d1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x141U)))
#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#undef DAT_10008afc
#define DAT_10008afc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26cU)))
#undef DAT_10008aff
#define DAT_10008aff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x26fU)))
#define pvStack_90 (*(void * *)(pf_stack_frame + 16))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 56))
#define local_88 (*(long *)(pf_stack_frame + 24))
#define local_78 (*(long *)(pf_stack_frame + 40))
#define local_70 (*(ulong *)(pf_stack_frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b6c
 */

void recovered_10006b6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 param_4,ulong param_5)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  bool bVar4;
  uchar uVar5;
  long extraout_x0;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;

  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  if (param_2[1] == 0) {
    bVar4 = false;
  }
  else {
    pcVar1 = &DAT_100089d3;
    if ((char *)*param_2 != (char *)0x0) {
      pcVar1 = (char *)*param_2;
    }
    bVar4 = *pcVar1 == '/';
  }
  puVar8 = (undefined8 *)0x0;
  do {
    if ((undefined8 *)param_2[1] <= puVar8) break;
    recovered_10008018(param_2,'/',(ulong)puVar8);
    lVar6 = param_2[1];
    if (extraout_x0 != -1) {
      lVar6 = extraout_x0;
    }
    recovered_10008050(param_2,puVar8,lVar6 - (long)puVar8,param_5);
    if ((local_88 != 0) && (uVar5 = recovered_10006f00(&pvStack_90,&DAT_100089d1), uVar5 != '\0')) {
      uVar5 = recovered_1000808c(&pvStack_90,&DAT_10008afc);
      if (uVar5 == '\0') {
LAB_10006c7c:
        recovered_10008200(&local_78,&pvStack_90);
      }
      else if ((local_70 == 0) ||
              (uVar5 = recovered_10006f00((undefined8 *)(local_78 + local_70 * 0x18 + -0x18),
                                          &DAT_10008afc), uVar5 == '\0')) {
        if (!bVar4) goto LAB_10006c7c;
      }
      else {
        recovered_100080dc(&local_78);
      }
    }
    puVar8 = (undefined8 *)(extraout_x0 + 1);
    recovered_100040c0(pvStack_90);
  } while (extraout_x0 != -1);
  puVar2 = &DAT_10008aff;
  if (!bVar4) {
    puVar2 = &DAT_100089d3;
  }
  recovered_1000849c(&pvStack_90,(long)puVar2);
  lVar6 = 0;
  for (uVar7 = 0; uVar7 < local_70; uVar7 = uVar7 + 1) {
    if (uVar7 != 0 || bVar4) {
      recovered_10008118((long *)&pvStack_90,0x2f);
    }
    recovered_1000817c((long *)&pvStack_90,(undefined8 *)(local_78 + lVar6));
    lVar6 = lVar6 + 0x18;
  }
  if (local_88 == 0) {
    puVar3 = &DAT_10008aff;
    if (!bVar4) {
      puVar3 = &DAT_100089d1;
    }
    recovered_1000849c(param_1,(long)puVar3);
  }
  else {
    recovered_10007d54(param_1,&pvStack_90);
  }
  recovered_100040c0(pvStack_90);
  recovered_1000841c(&local_78);
  return;
}

#undef DAT_100089d1
#undef DAT_100089d3
#undef DAT_10008afc
#undef DAT_10008aff
#undef pvStack_90
#undef uStack_68
#undef local_88
#undef local_78
#undef local_70

#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#define apvStack_78 (*(void * (*)[15])(pf_stack_frame + 24))
#define apcStack_60 (*(char * (*)[12])(pf_stack_frame + 48))
#define uStack_40 (*(undefined8 *)(pf_stack_frame + 80))
#define local_48 (*(void * *)(pf_stack_frame + 72))
#define local_38 (*(undefined8 *)(pf_stack_frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d78
 */

long recovered_10006d78(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  void *src;
  uchar uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1 = 0;
  undefined4 *puVar4;
  ulong in_x3;
  void *dst;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  dst = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    puVar4 = param_3;
    recovered_1000849c(apvStack_78,(long)param_1);
    recovered_10006b6c(apcStack_60,apvStack_78,extraout_x1,puVar4,in_x3);
    recovered_100040c0(apvStack_78[0]);
    pcVar1 = &DAT_100089d3;
    if (apcStack_60[0] != (char *)0x0) {
      pcVar1 = apcStack_60[0];
    }
    uVar3 = recovered_10006eb0(pcVar1,&local_48);
    if (((int)uVar3 == 0) &&
       ((uVar2 = recovered_10006f00(apcStack_60,param_1), uVar2 == '\0' ||
        (uVar3 = recovered_10006eb0(param_1,&local_48), (int)uVar3 == 0)))) {
      dst = (void *)0x0;
    }
    else {
      src = local_48;
      dst = (void *)0x0;
      if ((((local_48 != (void *)0x0) && ((int)uStack_40 != 0)) && (PF_PART4(uStack_40, 4) != 0)) &&
         ((int)local_38 != 0)) {
        dst = recovered_100040bc(uStack_40 & 0xffffffff);
        recovered_1000147c(dst,src,uStack_40 & 0xffffffff);
        recovered_10006f18(src);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = PF_PART4(uStack_40, 4);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)local_38;
        }
      }
    }
    recovered_100040c0(apcStack_60[0]);
  }
  return (long)dst;
}

#undef DAT_100089d3
#undef apvStack_78
#undef apcStack_60
#undef uStack_40
#undef local_48
#undef local_38

#undef DAT_82010858
#define DAT_82010858 (*(uint8_t *)(0x82010858U))
#undef _DAT_82010858
#define _DAT_82010858 (*(uint *)(0x82010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006eb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006eb0(char *param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007c24(0x58);
  if ((uVar1 == '\0') || (_DAT_82010858 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10006ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_82010858)(param_1,param_2);
  return uVar2;
}

#undef DAT_82010858
#undef _DAT_82010858

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10006f00(undefined8 *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  bVar1 = recovered_1000808c(param_1,param_2);
  return !bVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006f18(void *param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10007c24(0x50);
  if ((bVar2) && (uVar1 = (*(volatile uint32_t *)(uintptr_t)0x40010850), uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10004d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(param_1);
    return;
  }
  return;
}


#undef UNK_82010868
#define UNK_82010868 (*(uint *)(0x82010868U))
#undef uRam0000000082010868
#define uRam0000000082010868 (*(uint32_t *)(0x82010868U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f54
 */

undefined8 recovered_10006f54(float param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007c24(0x68);
  if ((uVar1 == '\0') || (uRam0000000082010868 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1001caac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)uRam0000000082010868)(param_1,param_2);
  return uVar2;
}

#undef UNK_82010868
#undef uRam0000000082010868

#undef UNK_82010870
#define UNK_82010870 (*(uint *)(0x82010870U))
#undef uRam0000000082010870
#define uRam0000000082010870 (*(uint32_t *)(0x82010870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006fa0
 */

void recovered_10006fa0(float param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_10007c24(0x70);
  if ((uVar1 == '\0') || (uRam0000000082010870 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1001cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam0000000082010870)(param_1,param_2);
  return;
}

#undef UNK_82010870
#undef uRam0000000082010870

#undef DAT_10008998
#define DAT_10008998 (*(double *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_82010874
#define UNK_82010874 (*(uint *)(0x82010874U))
#undef uRam0000000082010874
#define uRam0000000082010874 (*(uint32_t *)(0x82010874U))
#define uStack_54 (*(undefined4 *)(pf_stack_frame + 44))
#define local_68 (*(void * *)(pf_stack_frame + 24))
#define local_58 (*(uint *)(pf_stack_frame + 40))
#define uStack_60 (*(uint *)(pf_stack_frame + 32))
#define uStack_5c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ff0
 */

undefined8 *
recovered_10006ff0(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  ulong size;
  void *src;
  uchar uVar1;
  int iVar2;
  void *dst;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;

  local_68 = (void *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    dVar4 = 1.0;
    if (param_1 <= 1.0) {
      dVar4 = param_1;
    }
    dVar5 = 0.0;
    if (0.0 <= param_1) {
      dVar5 = dVar4 * DAT_10008998;
    }
    uVar1 = recovered_10007c24(0x74);
    if (((uVar1 != '\0') && (uRam0000000082010874 != 0)) &&
       (iVar2 = (*(code *)(ulong)uRam0000000082010874)
                          (param_2,param_3,param_4,param_5,param_6,(int)dVar5,&local_68),
       src = local_68, iVar2 != 0)) {
      if (((local_68 != (void *)0x0) && (uStack_5c != 0)) && (local_58 != 0)) {
        size = (ulong)uStack_5c * (ulong)local_58 * 4;
        if (uStack_60 != 0) {
          size = (ulong)uStack_60;
        }
        puVar3 = recovered_1000408c(0x20);
        *puVar3 = CONCAT44(local_58,uStack_5c);
        dst = recovered_100040bc(size);
        puVar3[1] = dst;
        recovered_1000147c(dst,src,size);
        puVar3[3] = 0;
        puVar3[2] = 0;
        recovered_10006f18(src);
        return puVar3;
      }
      if (local_68 != (void *)0x0) {
        recovered_10006f18(local_68);
      }
    }
  }
  return (undefined8 *)0x0;
}

#undef DAT_10008998
#undef UNK_82010874
#undef uRam0000000082010874
#undef uStack_54
#undef local_68
#undef local_58
#undef uStack_60
#undef uStack_5c

#undef UNK_82010878
#define UNK_82010878 (*(uint *)(0x82010878U))
#undef uRam0000000082010878
#define uRam0000000082010878 (*(uint32_t *)(0x82010878U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007128
 */

void recovered_10007128(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;

  uVar1 = recovered_10007c24(0x78);
  if ((uVar1 == '\0') || (uRam0000000082010878 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1001cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam0000000082010878)(param_1);
  return;
}

#undef UNK_82010878
#undef uRam0000000082010878

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007164
 */

uint * recovered_10007164(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,
                         undefined1 param_5,undefined1 param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong size;
  uint *puVar4;

  if ((int)param_1 < 1 || (int)param_2 < 1) {
    puVar4 = (uint *)0x0;
  }
  else {
    size = (ulong)param_1 * (ulong)param_2 * 4;
    puVar4 = recovered_1000408c(0x20);
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *puVar4 = param_1;
    puVar4[1] = param_2;
    pvVar1 = recovered_100040bc(size);
    *(void **)(puVar4 + 2) = pvVar1;
    puVar3 = (undefined1 *)((long)pvVar1 + 3);
    for (uVar2 = 0; uVar2 < size; uVar2 = uVar2 + 4) {
      puVar3[-3] = param_3;
      puVar3[-2] = param_4;
      puVar3[-1] = param_5;
      *puVar3 = param_6;
      puVar3 = puVar3 + 4;
    }
  }
  return puVar4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000720c
 */

void recovered_1000720c(uint *param_1,uint param_2,uint param_3,undefined1 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  if ((((param_1 != (uint *)0x0) && (-1 < (int)(param_3 | param_2))) &&
      (*(long *)(param_1 + 2) != 0)) &&
     (((int)param_2 < (int)*param_1 && ((int)param_3 < (int)param_1[1])))) {
    puVar1 = (undefined1 *)
             (*(long *)(param_1 + 2) + ((ulong)param_2 + (ulong)*param_1 * (ulong)param_3) * 4);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    puVar1[2] = param_6;
    puVar1[3] = param_7;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007258
 */

void recovered_10007258(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((long)param_1 + 8) != (void *)0x0) {
    recovered_100040d8(*(void **)((long)param_1 + 8));
  }
  if (*(void **)((long)param_1 + 0x18) != (void *)0x0) {
    recovered_100040d8(*(void **)((long)param_1 + 0x18));
  }
  recovered_100013f0(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007298
 */

void recovered_10007298(int *param_1,int *param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;

  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*(long *)(param_1 + 2) != 0)) &&
     (*(long *)(param_2 + 2) != 0)) {
    lVar10 = 0;
    lVar12 = (long)param_4;
    for (lVar11 = 0; lVar11 < param_2[1]; lVar11 = lVar11 + 1) {
      lVar2 = lVar11 + param_4;
      if ((-1 < lVar2) && (lVar2 < param_1[1])) {
        lVar13 = 0;
        lVar8 = (long)param_3;
        for (lVar14 = 0; lVar9 = (long)*param_2, lVar14 < lVar9; lVar14 = lVar14 + 1) {
          lVar3 = lVar14 + param_3;
          if ((-1 < lVar3) && (lVar15 = (long)*param_1, lVar3 < lVar15)) {
            lVar16 = *(long *)(param_2 + 2);
            lVar3 = *(long *)(param_1 + 2) + (lVar3 + lVar2 * lVar15) * 4;
            bVar5 = *(byte *)(lVar16 + (lVar14 + lVar11 * lVar9) * 4 + 3);
            uVar7 = ((bVar5 ^ 0xff) * (uint)*(byte *)(lVar3 + 3) + 0x7f & 0xffff) / 0xff;
            uVar1 = uVar7 + bVar5;
            if (uVar1 != 0) {
              lVar4 = *(long *)(param_1 + 2) + (lVar8 + lVar12 * lVar15) * 4;
              for (lVar15 = 0; lVar15 != 3; lVar15 = lVar15 + 1) {
                uVar6 = 0;
                if (uVar1 != 0) {
                  uVar6 = (undefined1)
                          (((uVar1 >> 1) +
                            (uint)*(byte *)(lVar16 + lVar13 + lVar10 * lVar9 + lVar15) * (uint)bVar5
                           + *(byte *)(lVar4 + lVar15) * uVar7) / uVar1);
                }
                *(undefined1 *)(lVar4 + lVar15) = uVar6;
              }
              *(char *)(lVar3 + 3) = (char)uVar1;
            }
          }
          lVar13 = lVar13 + 4;
          lVar8 = lVar8 + 1;
        }
      }
      lVar10 = lVar10 + 4;
      lVar12 = lVar12 + 1;
    }
  }
  return;
}


#undef UNK_82010978
#define UNK_82010978 (*(uint *)(0x82010978U))
#undef uRam0000000082010978
#define uRam0000000082010978 (*(uint32_t *)(0x82010978U))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 32))
#define local_58 (*(void * *)(pf_stack_frame + 24))
#define local_48 (*(ulong *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100073d0
 */

uint * recovered_100073d0(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                         uint param_6)

{
  unsigned char pf_stack_frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong bytes;
  long lVar9;
  ulong uVar10;

  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  uVar5 = param_5;
  if (0xfe < param_5) {
    uVar5 = 0xff;
  }
  uVar6 = param_4;
  if (0xfe < param_4) {
    uVar6 = 0xff;
  }
  uVar7 = param_3;
  if (0xfe < param_3) {
    uVar7 = 0xff;
  }
  uVar1 = 0;
  if (-1 < (int)param_3) {
    uVar1 = uVar7 << 0x18;
  }
  uVar7 = 0;
  if (-1 < (int)param_4) {
    uVar7 = uVar6 << 0x10;
  }
  uVar6 = 0;
  if (-1 < (int)param_5) {
    uVar6 = uVar5 << 8;
  }
  uVar3 = recovered_10007c24(0x178);
  if ((((uVar3 == '\0') || (uRam0000000082010978 == 0)) ||
      (iVar4 = (*(code *)(ulong)uRam0000000082010978)
                         (param_1,0xffffffff,param_2,uVar7 | uVar1 | param_6 | uVar6,&local_58),
      pvVar2 = local_58, iVar4 == 0)) || (local_58 == (void *)0x0)) {
    return (uint *)0x0;
  }
  if (0 < (int)PF_PART4(uStack_50, 4) && 0 < (int)(uint)local_48) {
    if (((ulong)PF_PART4(uStack_50, 4) * 4 <= local_48 >> 0x20) &&
       ((ulong)PF_PART4(uStack_50, 4) * 4 + (local_48 >> 0x20) * (ulong)((uint)local_48 - 1) <=
        (uStack_50 & 0xffffffff))) {
      puVar8 = recovered_10007164(PF_PART4(uStack_50, 4),(uint)local_48,0,0,0,0);
      if (puVar8 != (uint *)0x0) {
        lVar9 = 0;
        bytes = (uStack_50 >> 0x20) * 4;
        for (uVar10 = 0; uVar10 < (local_48 & 0xffffffff); uVar10 = uVar10 + 1) {
          recovered_1000147c((void *)(*(long *)(puVar8 + 2) + lVar9),
                             (void *)((long)pvVar2 + uVar10 * (local_48 >> 0x20)),bytes);
          lVar9 = lVar9 + bytes;
        }
      }
      goto LAB_100074bc;
    }
  }
  puVar8 = (uint *)0x0;
LAB_100074bc:
  recovered_10006f18(pvVar2);
  return puVar8;
}

#undef UNK_82010978
#undef uRam0000000082010978
#undef uStack_50
#undef local_58
#undef local_48

/* Native system-font selection through the WinterScript variable service.
 * Pooka's Free Software License. */
void *recovered_10007540(float size){
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 unsigned char value[48]={0};char path[1024];const char *selected="\\Fonts\\EBGaramond08-Regular.ttf";
 if(api[0]==0x50414d57 && api[1] && api[2]>0x207 && api[0x204/4]){
  int found=((int (*)(const char *,void *))(uintptr_t)api[0x204/4])("TundraFont",value);
  uint32_t kind=*(uint32_t *)value;int32_t number=*(int32_t *)(value+4);
  if(found && kind==3 && *(const char **)(value+(sizeof(uintptr_t)==8?16:12)))selected=*(const char **)(value+(sizeof(uintptr_t)==8?16:12));
  else if(found && kind==1){
   unsigned magnitude=number<0?0U-(unsigned)number:(unsigned)number;char digits[12];unsigned count=0,used=0;
   do{digits[count++]=(char)('0'+magnitude%10);magnitude/=10;}while(magnitude);
   if(number<0)path[used++]='-';while(count)path[used++]=digits[--count];path[used]=0;selected=path;
  }else if(found && kind==5)selected=number?"true":"false";
 }
 if(selected!=path){unsigned n=0;while(n<1023 && selected[n]){path[n]=selected[n];n++;}path[n]=0;}
 if(!path[0] || api[0]!=0x50414d57 || !api[1] || api[2]<0x6c || !api[0x68/4])return 0;
 return ((void *(*)(const char *,float))(uintptr_t)api[0x68/4])(path,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007748
 */

undefined1 recovered_10007748(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  ulong uVar2;

  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0xa0);
    if (uVar2 < *(ulong *)(param_1 + 0x90)) {
      *(ulong *)(param_1 + 0xa0) = uVar2 + 1;
      uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x88) + uVar2);
      if (uVar2 + 1 == *(ulong *)(param_1 + 0x90)) {
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        return uVar1;
      }
      return uVar1;
    }
  }
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000778c
 */

void recovered_1000778c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    if (param_2 == (undefined4 *)0x0) {
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0xffffffff;
      *param_2 = 0xffffffff;
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      recovered_10005898(param_1);
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x44);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x48);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007804
 */

bool recovered_10007804(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (((param_1 != 0) && (bVar1 = false, (uint)param_2 < 4)) &&
     ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    uVar2 = recovered_10007840((ulong)*(uint *)(param_1 + 0x18),param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


#undef DAT_82010964
#define DAT_82010964 (*(uint8_t *)(0x82010964U))
#undef _DAT_82010964
#define _DAT_82010964 (*(uint *)(0x82010964U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10007840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007c24(0x164);
  if ((uVar1 == '\0') || (_DAT_82010964 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x10007890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)_DAT_82010964)(param_1,param_2,param_3);
  return uVar2;
}

#undef DAT_82010964
#undef _DAT_82010964

#undef UNK_82010960
#define UNK_82010960 (*(uint *)(0x82010960U))
#undef uRam0000000082010960
#define uRam0000000082010960 (*(uint32_t *)(0x82010960U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100078a0
 */

ulong recovered_100078a0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  uchar uVar2;
  undefined8 uVar3;
  ulong uVar4;

  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    uVar4 = recovered_10005404(param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar4 = recovered_10007840((ulong)*(uint *)(param_1 + 0x18),1,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = recovered_10007c24(0x160);
    if (uVar2 == '\0') {
      return 0;
    }
    if (uRam0000000082010960 != 0) {
      uVar4 = (*(code *)(ulong)uRam0000000082010960)(uVar1,0xff,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      uVar3 = recovered_100054d0((ulong)*(uint *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0xdc),
                                 (ulong)*(uint *)(param_1 + 0xe0),0x100,0x100);
      return (ulong)((int)uVar3 != 0);
    }
  }
  return 0;
}

#undef UNK_82010960
#undef uRam0000000082010960

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007938
 */

byte recovered_10007938(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte *pbVar2;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = recovered_100063a8(param_1);
    if ((bVar1 & 1) == 0) {
      bVar1 = 0;
      pbVar2 = (byte *)(param_1 + (ulong)param_2 + 0x55);
    }
    else {
      if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
        recovered_10005898(param_1);
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      pbVar2 = (byte *)(param_1 + (ulong)param_2 + 0x55);
      bVar1 = *pbVar2;
    }
    *pbVar2 = 0;
  }
  return bVar1 & 1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_100079a4(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100040c0((void *)*param_1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_40 (*(long *)(frame + 32))
#define local_38 (*(long *)(frame + 40))
#define local_48 (*(long *)(frame + 24))
#define local_50 (*(void * *)(frame + 16))
void recovered_100079cc(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pointer;
  ulong uVar3;
  long lVar4;
  long lVar5;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10007ad8(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_10007b24(param_1);
    }
    else {
      recovered_10007b5c(param_1,uVar1);
      for (uVar3 = 0; uVar1 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_10007bd4(&local_50,*param_1 + local_38,uVar1);
    pointer = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar5 = param_1[2];
    lVar4 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pointer;
    local_48 = lVar4;
    lStack_40 = lVar5;
    recovered_100040c0(pointer);
  }
  return;
}

#undef lStack_40
#undef local_38
#undef local_48
#undef local_50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10007ab4(long param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;

  lVar1 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + lVar1) == '\0') break;
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10007ad8(long *param_1,long param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;

  uVar1 = 0;
  if ((param_2 != 0) && (*param_1 != 0)) {
    uVar3 = 0;
    lVar2 = param_2 - *param_1;
    do {
      if ((ulong)param_1[1] < uVar3) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (lVar2 + 1U != uVar3);
    *param_3 = lVar2;
    uVar1 = 1;
  }
  return uVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007b24(long *param_1)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  if (*param_1 == 0) {
    pcVar1 = recovered_10007c08(0);
    *param_1 = (long)pcVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007b5c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pcVar1 = recovered_10007c08(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      pcVar1[uVar2] = *(char *)(*param_1 + uVar2);
    }
    pcVar1[param_1[1]] = '\0';
    recovered_100040c0((void *)*param_1);
    *param_1 = (long)pcVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_10007bd4(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_100079cc(param_1,param_2,uVar1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10007c08(ulong size)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = recovered_1000408c(size + 1);
  *pcVar1 = '\0';
  return pcVar1;
}


#undef DAT_82010800
#define DAT_82010800 (*(uint8_t *)(0x82010800U))
#undef DAT_82010804
#define DAT_82010804 (*(uint8_t *)(0x82010804U))
#undef DAT_82010808
#define DAT_82010808 (*(uint8_t *)(0x82010808U))
#undef _DAT_82010800
#define _DAT_82010800 (*(int *)(0x82010800U))
#undef _DAT_82010804
#define _DAT_82010804 (*(int *)(0x82010804U))
#undef _DAT_82010808
#define _DAT_82010808 (*(uint *)(0x82010808U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c24
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar recovered_10007c24(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (((_DAT_82010800 == 0x50414d57) && (_DAT_82010804 != 0)) && (0xb < _DAT_82010808)) {
    return param_1 + 4U <= _DAT_82010808;
  }
  return '\0';
}

#undef DAT_82010800
#undef DAT_82010804
#undef DAT_82010808
#undef _DAT_82010800
#undef _DAT_82010804
#undef _DAT_82010808

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007c6c(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10007cd4(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007cd4(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  ulong uVar1;

  if ((ulong)param_1[2] < param_2) {
    recovered_10007d48(param_2);
    for (uVar1 = 0; uVar1 < (ulong)param_1[1]; uVar1 = uVar1 + 1) {
      *(undefined1 *)(extraout_x0 + uVar1) = *(undefined1 *)(*param_1 + uVar1);
    }
    recovered_100040c0((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10007d48(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return;
  }
  if ((ulong)param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_100013ac(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001398();
  }
  return;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d54
 */

undefined8 * recovered_10007d54(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_100089d3;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_100079cc(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_100089d3

#undef UNK_82010880
#define UNK_82010880 (*(uint *)(0x82010880U))
#undef uRam0000000082010880
#define uRam0000000082010880 (*(uint32_t *)(0x82010880U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007d94
 */

undefined8 recovered_10007d94(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined8 uVar2;

  uVar1 = recovered_10007c24(0x80);
  if ((uVar1 == '\0') || (uRam0000000082010880 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1001cbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(ulong)uRam0000000082010880)(param_1);
  return uVar2;
}

#undef UNK_82010880
#undef uRam0000000082010880

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007dd4
 */

undefined8 recovered_10007dd4(long param_1,long param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;

  if ((((param_3 == (uint *)0x0) ||
       (uVar4 = (ulong)*(uint *)(param_2 + 0x20), (int)*(uint *)(param_2 + 0x20) < 1)) ||
      (uVar5 = (ulong)*(uint *)(param_2 + 0x24), (int)*(uint *)(param_2 + 0x24) < 1)) ||
     ((uVar1 = *(uint *)(param_1 + 0x10), uVar1 == 0 ||
      (uVar2 = *(uint *)(param_1 + 0x14), uVar2 == 0)))) {
    return 0;
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = (uint)((uVar1 * uVar5) / uVar4);
  }
  uVar6 = uVar3;
  if (uVar3 < 2) {
    uVar6 = 1;
  }
  param_3[2] = uVar1;
  param_3[3] = uVar6;
  uVar7 = uVar1;
  if (uVar2 < uVar3) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = (uint)((uVar2 * uVar4) / uVar5);
    }
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    param_3[2] = uVar7;
    param_3[3] = uVar2;
    uVar6 = uVar2;
  }
  *param_3 = uVar1 - uVar7 >> 1;
  param_3[1] = uVar2 - uVar6 >> 1;
  return 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007e58
 */

ulong recovered_10007e58(uint param_1,uint param_2,uint param_3,ulong param_4,uint param_5,
                        int param_6)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;

  if ((param_3 < 2 || param_5 < 2) || param_6 < 2) {
    return 0;
  }
  uVar2 = recovered_10007ebc(param_1,param_2,param_3);
  uVar3 = (long)(int)uVar2 - (param_4 & 0xffffffff);
  uVar4 = (ulong)(param_5 - 1);
  uVar2 = uVar4;
  if ((long)uVar3 <= (long)uVar4) {
    uVar2 = uVar3;
  }
  uVar1 = 0;
  if (-1 < (long)uVar3) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = (uVar1 * (param_6 - 1)) / uVar4;
  }
  return uVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10007ebc(uint param_1,uint param_2,int param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;

  if (param_3 < 2) {
    return 0;
  }
  if (param_2 != 0) {
    uVar1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
    if (param_2 <= uVar1) {
      uVar1 = param_2;
    }
    uVar3 = 0;
    if ((ulong)param_2 != 0) {
      uVar3 = ((ulong)(param_3 - 1) * (ulong)uVar1) / (ulong)param_2;
    }
    return uVar3;
  }
  uVar1 = param_3 - 1U;
  if (param_1 <= param_3 - 1U) {
    uVar1 = param_1;
  }
  uVar2 = 0;
  if (-1 < (int)param_1) {
    uVar2 = uVar1;
  }
  return (ulong)uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f04
 */

uint recovered_10007f04(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar1 = recovered_10007fb8(param_2,*(uint *)(param_1 + 0x1c),(ulong)*(uint *)(param_1 + 0x28));
  lVar2 = recovered_10007fb8(param_3,*(uint *)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x2c));
  lVar3 = recovered_10007fb8(param_4,*(uint *)(param_1 + 0x24),(ulong)*(uint *)(param_1 + 0x30));
  return (uint)lVar2 | (uint)lVar1 | (uint)lVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007f68
 */

void recovered_10007f68(long *param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;

  if ((param_2 < *(uint *)(param_1 + 2) && param_3 <= *(uint *)((long)param_1 + 0x14)) &&
      (*(uint *)(param_1 + 2) <= param_2 || *(uint *)((long)param_1 + 0x14) != param_3)) {
    uVar3 = (ulong)((int)param_1[3] + 7U >> 3);
    puVar2 = (undefined1 *)
             (*param_1 + (ulong)*(uint *)((long)param_1 + 0xc) * (ulong)param_3 + uVar3 * param_2);
    for (lVar1 = 0; uVar3 * 8 != lVar1; lVar1 = lVar1 + 8) {
      *puVar2 = (char)(param_4 >> (ulong)((uint)lVar1 & 0x1f));
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007fb8
 */

long recovered_10007fb8(ulong param_1,uint param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = ~(-1L << ((ulong)param_2 & 0x3f));
  }
  return (uVar1 * (param_1 & 0xffffffff) + 0x7f) / 0xff << (param_3 & 0x3f);
}


#undef PTR_DAT_1000c060
#define PTR_DAT_1000c060 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x37d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007ff0
 */

void recovered_10007ff0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 0x61U < 0x1a) {
    *(&PTR_DAT_1000c060)[(ulong)(param_1 - 0x61U) & 0xff] = 1;
  }
  return;
}

#undef PTR_DAT_1000c060

#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008018
 */

void recovered_10008018(undefined8 *param_1,char param_2,ulong param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_100089d3;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_10008194((long *)&local_20,param_2,param_3);
  return;
}

#undef DAT_100089d3
#undef local_20
#undef uStack_18

#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008050
 */

void recovered_10008050(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long *in_x8;
  ulong uVar5;

  puVar4 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (param_2 <= puVar4) {
    puVar2 = param_2;
  }
  uVar5 = (long)puVar4 - (long)puVar2;
  uVar1 = uVar5;
  if (param_3 <= uVar5) {
    uVar1 = param_3;
  }
  if (param_3 != 0xffffffffffffffff) {
    uVar5 = uVar1;
  }
  puVar3 = &DAT_100089d3;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_1;
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  uVar1 = 0;
  if (puVar3 + (long)puVar2 != (undefined1 *)0x0) {
    uVar1 = uVar5;
  }
  recovered_100079cc(in_x8,(long)(puVar3 + (long)puVar2),uVar1);
  return;
}

#undef DAT_100089d3

#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000808c
 */

uchar recovered_1000808c(undefined8 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_100089d3;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_10007ab4((long)param_2);
  if (lVar6 == lVar4) {
    do {
      bVar3 = lVar6 == 0;
      if (lVar6 == 0) {
        return '\x01';
      }
      cVar1 = *pcVar5;
      cVar2 = *param_2;
      lVar6 = lVar6 + -1;
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

#undef DAT_100089d3

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100080dc(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_100079a4((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008118(long *param_1,undefined1 param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10007b5c(param_1,uVar1);
  }
  recovered_10007b24(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_100089d3
#define DAT_100089d3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x143U)))
#define lStack_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000817c
 */

void recovered_1000817c(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  uVar6 = param_2[1];
  puVar1 = &DAT_100089d3;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10007ad8(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_10007b5c(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_10007b5c(param_1,uVar4 + lVar7);
      lVar3 = 0;
      for (uVar5 = uVar4; uVar6 = uVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)(*param_1 + lVar7) = *(undefined1 *)(*param_1 + lStack_38 + lVar3);
        lVar3 = lVar3 + 1;
        lVar7 = lVar7 + 1;
      }
    }
    lVar7 = param_1[1];
    param_1[1] = lVar7 + uVar6;
    *(undefined1 *)(*param_1 + lVar7 + uVar6) = 0;
  }
  return;
}

#undef DAT_100089d3
#undef lStack_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10008194(long *param_1,char param_2,ulong param_3)

{
  unsigned char frame[64] = {0};

  while( true ) {
    if ((ulong)param_1[1] <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) == param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100081c8(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char frame[64] = {0};

  char cVar1;
  char cVar2;
  bool bVar3;

  if (param_2 == param_4) {
    do {
      bVar3 = param_2 == 0;
      if (param_2 == 0) {
        return true;
      }
      cVar1 = *param_1;
      cVar2 = *param_3;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (cVar1 == cVar2);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10008200(long *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10008274(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10007d54((undefined8 *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008274(long *param_1,ulong param_2)

{
  unsigned char frame[64] = {0};

  long extraout_x0;
  long lVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    recovered_10008308(param_2);
    lVar1 = 0;
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      recovered_1000831c((undefined8 *)(extraout_x0 + lVar1),(undefined8 *)(*param_1 + lVar1));
      recovered_100079a4((undefined8 *)(*param_1 + lVar1));
      lVar1 = lVar1 + 0x18;
    }
    recovered_100040c0((void *)*param_1);
    *param_1 = extraout_x0;
    param_1[2] = param_2;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008308(long param_1)

{
  unsigned char frame[64] = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return;
  }
  size = param_1 * 0x18;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100013ac(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001398();
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_1000831c(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_38 (*(long *)(frame + 16))
long * recovered_10008338(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[104] = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10007ad8(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_10007b5c(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_10007b5c(param_1,uVar3 + lVar5);
      lVar2 = 0;
      for (uVar4 = uVar3; param_3 = uVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)(*param_1 + lVar5) = *(undefined1 *)(*param_1 + local_38 + lVar2);
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + 1;
      }
    }
    lVar5 = param_1[1];
    param_1[1] = lVar5 + param_3;
    *(undefined1 *)(*param_1 + lVar5 + param_3) = 0;
  }
  return param_1;
}

#undef local_38

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long * recovered_1000841c(long *param_1)

{
  unsigned char frame[64] = {0};

  recovered_10008448(param_1);
  recovered_100040c0((void *)*param_1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10008448(long *param_1)

{
  unsigned char frame[64] = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_100079a4((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_1000849c(undefined8 *param_1,long param_2)

{
  unsigned char frame[64] = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_10007ab4(param_2);
  recovered_100079cc(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084e0
 */

undefined8 * recovered_100084e0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_100040c0((void *)*param_1);
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 * recovered_1000850c(undefined8 *param_1)

{
  unsigned char frame[64] = {0};

  param_1[1] = 0;
  recovered_100040c0((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008538
 */

long recovered_10008538(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10007cd4(param_1,uVar1);
    lVar2 = param_1[1];
  }
  *(undefined1 *)(*param_1 + lVar2) = *param_2;
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 + 1 + -1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100085a0
 */

long recovered_100085a0(long *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 4;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_10008604(param_1,uVar1);
    lVar2 = param_1[1];
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + lVar2 * 4) = *param_2;
  param_1[1] = lVar2 + 1;
  return lVar3 + (lVar2 + 1) * 4 + -4;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008604
 */

void recovered_10008604(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10008678(param_2);
    uVar3 = param_1[1];
    for (uVar2 = 0; uVar2 < uVar3; uVar2 = uVar2 + 1) {
      *(undefined4 *)((long)pvVar1 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
    }
    recovered_100040c0((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008678
 */

void * recovered_10008678(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulonglong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 4;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_100013ac(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001398();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008688
 */

long recovered_10008688(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar7 = param_1[1];
  }
  else {
    uVar7 = param_2 - lVar4;
  }
  lVar3 = (long)param_4 - (long)param_3;
  if (lVar3 != 0) {
    uVar6 = param_1[1];
    uVar5 = param_1[2];
    if (uVar5 < uVar6 + lVar3) {
      uVar2 = 4;
      if (uVar5 != 0) {
        uVar2 = uVar5;
      }
      do {
        uVar5 = uVar2;
        uVar2 = uVar5 << 1;
      } while (uVar5 < uVar6 + lVar3);
      recovered_10007cd4(param_1,uVar5);
      uVar6 = param_1[1];
    }
    while (uVar7 < uVar6) {
      puVar1 = (undefined1 *)(*param_1 + (uVar6 - 1));
      puVar1[lVar3] = *puVar1;
      uVar6 = uVar6 - 1;
    }
    uVar6 = uVar7;
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      *(undefined1 *)(*param_1 + uVar6) = *param_3;
      uVar6 = uVar6 + 1;
    }
    lVar4 = *param_1;
    param_1[1] = param_1[1] + lVar3;
  }
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar4 + uVar7;
  }
  return lVar3;
}


#undef DAT_10010368
#define DAT_10010368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ad8U)))
#undef DAT_10010370
#define DAT_10010370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ae0U)))
#undef DAT_10010378
#define DAT_10010378 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x7ae8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000886c
 */

undefined8 recovered_1000886c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_10010378 = 0;
  DAT_10010368 = 0;
  DAT_10010370 = 0;
  return 0;
}

#undef DAT_10010368
#undef DAT_10010370
#undef DAT_10010378
