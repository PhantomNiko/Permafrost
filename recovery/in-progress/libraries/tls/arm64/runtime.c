/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_100100e0
#define DAT_100100e0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x89a8U)))
#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005b8
 */

void recovered_100005b8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  DAT_100100e0 = 0;
  recovered_1000061c();
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e0
#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(int *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100005e4
 */

void recovered_100005e4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_100100e4;
      cVar1 = '\x01';
      { __typeof__(DAT_100100e4) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_100100e4),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_100100e4 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_100100e4

#undef DAT_100100e0
#define DAT_100100e0 (*(byte *)(((uintptr_t)pf_module_state + 0x89a8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
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
#define local_48 (*(ulong *)(pf_stack_frame + 1064))
#define auStack_458 (*(ulong (*)[139])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000061c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000061c(void)

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
  if ((DAT_100100e0 & 1) == 0) {
    DAT_100100e8 = 0;
    DAT_100100f0 = 0;
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
      recovered_10002be4(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_100100e8 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002be4(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_100100f0 == 0) {
      DAT_100100f0 = DAT_100100e8;
    }
    DAT_100100e0 = 1;
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0
#undef DAT_82010088
#undef DAT_8201008c
#undef DAT_82010238
#undef DAT_8201023c
#undef _DAT_82010088
#undef _DAT_8201008c
#undef _DAT_82010238
#undef _DAT_8201023c
#undef local_48
#undef auStack_458

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008a0
 */

bool recovered_100008a0(ulong *addresses,ulong *sizes,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_100005e4();
  bVar1 = recovered_100008dc(addresses,sizes,count);
  DAT_100100e4 = 0;
  return bVar1;
}

#undef DAT_100100e4

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89a8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
#define local_61 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008dc
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_100008dc(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *address;
  long lVar9;

  bVar2 = false;
  if (((param_1 != (ulong *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != 0)) {
    if ((PF_PART1(DAT_100100e0, 1) & 1) == 0) {
      PF_PART1(DAT_100100e0, 1) = 1;
      recovered_1000061c();
      for (lVar9 = 0; lVar9 != param_3; lVar9 = lVar9 + 1) {
        address = (long *)param_1[lVar9];
        uVar3 = param_2[lVar9];
        plVar1 = (long *)((long)address + uVar3);
        if (CARRY8((ulong)address,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)address < uVar3 || plVar1 <= address) {
          PF_PART1(DAT_100100e0, 1) = 0;
          return false;
        }
        if ((ulong)address >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)address >> 0x1a < 0x21) &&
             (bVar2 = recovered_10002ce8((ulong)address,0x84000000 - (long)address,&local_61),
             !bVar2)) {
            PF_PART1(DAT_100100e0, 1) = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x100009dc;
        }
        else {
          bVar2 = recovered_10002ce8((ulong)address,uVar3,&local_61);
          if (!bVar2) {
            PF_PART1(DAT_100100e0, 1) = 0;
            return false;
          }
joined_r0x100009dc:
          if ((local_61 & 1) == 0) {
            PF_PART1(DAT_100100e0, 1) = 0;
            return false;
          }
        }
        lVar4 = 0;
        while (lVar9 != lVar4) {
          plVar7 = (long *)param_1[lVar4];
          plVar8 = (long *)((long)plVar7 + param_2[lVar4]);
          if (CARRY8((ulong)plVar7,param_2[lVar4])) {
            plVar8 = (long *)0xffffffffffffffff;
          }
          lVar4 = lVar4 + 1;
          if (plVar7 < plVar1 && address < plVar8) {
            PF_PART1(DAT_100100e0, 1) = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_100100e8;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && address < plVar7) {
            PF_PART1(DAT_100100e0, 1) = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_100100e8;
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = *puVar5;
        puVar5 = (ulong *)(uVar3 + 8);
        uStack_70 = uVar6;
      } while (uVar3 != 0);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        recovered_10002be4(*param_1,*param_2,&uStack_70);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_100100f0 == 0) {
        DAT_100100f0 = DAT_100100e8;
      }
      PF_PART1(DAT_100100e0, 1) = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0
#undef uStack_70
#undef local_61

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ad8
 */

bool recovered_10000ad8(ulong address,ulong size)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = size;
  uStack_18 = address;
  recovered_100005e4();
  bVar1 = recovered_100008dc(&uStack_18,&local_20,1);
  DAT_100100e4 = 0;
  return bVar1;
}

#undef DAT_100100e4
#undef uStack_18
#undef local_20

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b14
 */

uint recovered_10000b14(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_100100e4 = 0;
  return (uint)uVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b74
 */

ulonglong recovered_10000b74(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  DAT_100100e4 = 0;
  return uVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bc8
 */

uint recovered_10000bc8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_100100e4 = 0;
  return (uint)uVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c18
 */

ulonglong recovered_10000c18(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long *plVar2;

  recovered_100005e4();
  recovered_1000061c();
  uVar1 = 0;
  for (plVar2 = &DAT_100100e8; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  DAT_100100e4 = 0;
  return uVar1;
}

#undef DAT_100100e4
#undef DAT_100100e8

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c5c
 */

void * recovered_10000c5c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_100005e4();
  puVar1 = recovered_10000c88(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_100100e4 = 0;
  return puVar1;
}

#undef DAT_100100e4

#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x89b0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c88
 */

ulong * recovered_10000c88(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_1000061c();
    puVar4 = DAT_100100e8;
    puVar3 = DAT_100100e8;
    if (DAT_100100f0 != (ulong *)0x0) {
      puVar3 = DAT_100100f0;
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
                if (uVar9 < uVar7) goto LAB_10000d38;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000d38:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000d74;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000d74:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000e1c;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000dd0;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000dd0:
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
LAB_10000e1c:
                        recovered_10002d38(puVar11,uVar5);
                        *(undefined1 *)(puVar11 + 3) = 0;
                        DAT_100100f0 = DAT_100100e8;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_100100f0 = (ulong *)puVar11[1];
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

#undef DAT_100100e8
#undef DAT_100100f0

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e44
 */

void * recovered_10000e44(ulong size,ulong limit)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_100005e4();
  puVar1 = recovered_10000c88(size,(ulong *)0x0,(ulong *)limit);
  DAT_100100e4 = 0;
  return puVar1;
}

#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e7c
 */

void * recovered_10000e7c(ulong size,ulong first,ulong last)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_100005e4();
  if (last < first) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000c88(size,(ulong *)first,(ulong *)last);
  }
  DAT_100100e4 = 0;
  return puVar1;
}

#undef DAT_100100e4

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ec0
 */

void recovered_10000ec0(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100005e4();
  recovered_10000ee8((long)pointer);
  DAT_100100e4 = 0;
  return;
}

#undef DAT_100100e4

#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ee8
 */

void recovered_10000ee8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_1000061c();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002d8c(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002d8c(puVar2);
      puVar1 = puVar2;
    }
    DAT_100100f0 = puVar1;
  }
  return;
}

#undef DAT_100100f0

#undef DAT_100100e4
#define DAT_100100e4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x89acU)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f5c
 */

void * recovered_10000f5c(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;

  recovered_100005e4();
  if (pointer == (void *)0x0) {
    puVar7 = recovered_10000c88(size,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_100100e4 = 0;
    return puVar7;
  }
  if (size == 0) {
    recovered_10000ee8((long)pointer);
    DAT_100100e4 = 0;
    return (void *)0x0;
  }
  if (0xfffffffffffffff0 < size) {
    DAT_100100e4 = 0;
    return (void *)0x0;
  }
  recovered_1000061c();
  uVar6 = size + 0xf & 0xfffffffffffffff0;
  puVar7 = (ulong *)((long)pointer + -0x20);
  uVar2 = *puVar7;
  if (uVar6 <= uVar2) {
    if (uVar2 <= uVar6 - 1) {
      DAT_100100e4 = 0;
      return (void *)0x0;
    }
    if (uVar2 - uVar6 < 0x30) {
      if (0xffffffffffffffdf < uVar2) {
        DAT_100100e4 = 0;
        return (void *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < size) {
      DAT_100100e4 = 0;
      return (void *)0x0;
    }
    uVar1 = recovered_10002d38(puVar7,uVar6);
    if ((int)uVar1 == 0) {
      DAT_100100e4 = 0;
      return pointer;
    }
    DAT_100100e4 = 0;
    DAT_100100f0 = *(undefined8 *)((long)pointer + -0x18);
    return pointer;
  }
  puVar5 = puVar7;
  for (uVar3 = uVar2;
      (((uVar3 < uVar6 && (puVar4 = (ulong *)puVar5[1], puVar4 != (ulong *)0x0)) &&
       ((char)puVar4[3] == '\x01')) &&
      ((uVar3 < 0xffffffffffffffe0 && (ulong *)((long)puVar5 + uVar2 + 0x20) == puVar4 &&
       (uVar2 = *puVar4, uVar2 <= -uVar3 - 0x21)))); uVar3 = uVar3 + uVar2 + 0x20) {
    puVar5 = puVar4;
  }
  if (uVar6 - 1 < uVar3) {
    if (uVar3 - uVar6 < 0x30) {
      if (0xffffffffffffffdf < uVar3) goto LAB_10018124;
    }
    else if (0xffffffffffffffb0 < size) goto LAB_10018124;
    do {
      uVar2 = *puVar7;
      if (uVar6 <= uVar2) goto LAB_10001088;
      uVar2 = recovered_10002dac(puVar7);
    } while ((uVar2 & 1) != 0);
    uVar2 = *puVar7;
LAB_10001088:
    if (uVar6 <= uVar2) {
      uVar1 = recovered_10002d38(puVar7,uVar6);
      if ((int)uVar1 != 0) {
        DAT_100100f0 = *(undefined8 *)((long)pointer + -0x18);
      }
      *(undefined1 *)((long)pointer + -8) = 0;
      DAT_100100e4 = 0;
      return pointer;
    }
  }
  else {
LAB_10018124:
    puVar7 = recovered_10000c88(uVar6,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar7 != (ulong *)0x0) {
      uVar2 = *(ulong *)((long)pointer + -0x20);
      if (uVar6 <= *(ulong *)((long)pointer + -0x20)) {
        uVar2 = uVar6;
      }
      recovered_100013dc(puVar7,pointer,uVar2);
      recovered_10000ee8((long)pointer);
      DAT_100100e4 = 0;
      return puVar7;
    }
  }
  DAT_100100e4 = 0;
  return (void *)0x0;
}

#undef DAT_100100e4
#undef DAT_100100f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001104
 */

ulong recovered_10001104(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001148
 */

ulong recovered_10001148(ulong param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001194
 */

long recovered_10001194(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011e4
 */

/* WARNING: Removing unreachable block (ram,0x10001234) */

ulong recovered_100011e4(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011ec
 */

ulong recovered_100011ec(ulong param_1,ulong param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000124c
 */

undefined8 recovered_1000124c(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = 0;
  recovered_100011ec(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000126c
 */

long recovered_1000126c(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  lVar4 = recovered_100011ec(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


#define lStack_28 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012ac
 */

long recovered_100012ac(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

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
  recovered_100011ec(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012f8
 */

void recovered_100012f8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001300
 */

int recovered_10001300(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = -param_1;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


#undef UINT_8201084c
#define UINT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000130c
 */

void * recovered_1000130c(ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002e34(0x4c);
  if ((bVar2) && (uVar1 = UINT_8201084c, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(size);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef UINT_8201084c

#undef UINT_82010850
#define UINT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001350
 */

void recovered_10001350(void *pointer)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = recovered_10002e34(0x50);
  if ((bVar2) && (uVar1 = UINT_82010850, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)uVar1)(pointer);
    return;
  }
  return;
}

#undef UINT_82010850

#undef UINT_82010854
#define UINT_82010854 (*(uint *)(0x82010854U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001390
 */

void * recovered_10001390(void *pointer,ulong size)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  void *pvVar3;

  bVar2 = recovered_10002e34(0x54);
  if ((bVar2) && (uVar1 = UINT_82010854, uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = (*(code *)(ulong)uVar1)(pointer,size);
    return pvVar3;
  }
  return (void *)0x0;
}

#undef UINT_82010854

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100013dc
 */

void * recovered_100013dc(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;

  if ((count < 0x10) || ((((uint)source ^ (uint)destination) & 7) != 0)) {
    puVar3 = destination;
  }
  else {
    for (puVar3 = destination; (count != 0 && (((ulong)puVar3 & 7) != 0)); puVar3 = puVar3 + 1) {
      *puVar3 = *(undefined1 *)source;
      source = (undefined1 *)((long)source + 1);
      count = count - 1;
    }
    lVar5 = 0;
    for (lVar4 = 0; 0x1f < count + lVar4; lVar4 = lVar4 + -0x20) {
      puVar1 = (undefined8 *)(puVar3 + lVar5);
      puVar2 = (undefined8 *)((long)source + lVar5);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      lVar5 = lVar5 + 0x20;
    }
    lVar6 = 0;
    count = count + lVar4;
    while (7 < count) {
      *(undefined8 *)(puVar3 + lVar5 + lVar6) = *(undefined8 *)((long)source + lVar5 + lVar6);
      lVar6 = lVar6 + 8;
      count = count - 8;
    }
    puVar3 = puVar3 + (lVar6 - lVar4);
    source = (void *)((long)source + (lVar6 - lVar4));
  }
  for (; count != 0; count = count - 1) {
    *puVar3 = *(undefined1 *)source;
    source = (undefined1 *)((long)source + 1);
    puVar3 = puVar3 + 1;
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100014b4
 */

void * recovered_100014b4(void *destination,void *source,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;

  if ((destination != source) && (count != 0)) {
    puVar2 = (undefined1 *)((long)source + count);
    if ((destination >= source && destination <= puVar2) &&
        (destination < source || puVar2 != destination)) {
      puVar3 = (undefined1 *)((long)destination + count);
      uVar1 = count;
      if ((0xf < count) && ((((uint)puVar2 ^ (uint)puVar3) & 7) == 0)) {
        for (; (count != 0 && (((int)destination + (int)count & 7U) != 0)); count = count - 1) {
          *(undefined1 *)((long)destination + (count - 1)) =
               *(undefined1 *)((long)source + (count - 1));
        }
        for (; 0x1f < count; count = count - 0x20) {
          *(undefined8 *)((long)destination + (count - 8)) =
               *(undefined8 *)((long)source + (count - 8));
          *(undefined8 *)((long)destination + (count - 0x10)) =
               *(undefined8 *)((long)source + (count - 0x10));
          *(undefined8 *)((long)destination + (count - 0x18)) =
               *(undefined8 *)((long)source + (count - 0x18));
          *(undefined8 *)((long)destination + (count - 0x20)) =
               *(undefined8 *)((long)source + (count - 0x20));
        }
        lVar4 = 0;
        for (uVar1 = count; 7 < uVar1; uVar1 = uVar1 - 8) {
          *(undefined8 *)((long)destination + count + lVar4 + -8) =
               *(undefined8 *)((long)source + count + lVar4 + -8);
          lVar4 = lVar4 + -8;
        }
        puVar3 = (undefined1 *)((long)destination + lVar4 + count);
        puVar2 = (undefined1 *)((long)source + lVar4 + count);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        puVar3 = puVar3 + -1;
        puVar2 = puVar2 + -1;
        *puVar3 = *puVar2;
      }
    }
    else {
      destination = recovered_100013dc(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100015c8
 */

void * recovered_100015c8(void *destination,int value,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  void *pvVar4;

  puVar2 = destination;
  if (0xf < count) {
    uVar3 = (ulong)(value & 0xff);
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
    }
    for (pvVar4 = destination; (count != 0 && (((ulong)pvVar4 & 7) != 0));
        pvVar4 = (void *)((long)pvVar4 + 1)) {
      *(char *)puVar2 = (char)value;
      count = count - 1;
      puVar2 = (ulong *)((long)puVar2 + 1);
    }
    for (; 0x1f < count; count = count - 0x20) {
      *puVar2 = uVar3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
    }
    for (; 7 < count; count = count - 8) {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
    }
  }
  for (; count != 0; count = count - 1) {
    *(char *)puVar2 = (char)value;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001660
 */

void recovered_10001660(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;

  if (0xf < param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0));
        puVar3 = (ulong *)((long)puVar3 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    for (; 0x1f < param_2; param_2 = param_2 - 0x20) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    }
    for (; 7 < param_2; param_2 = param_2 - 8) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (ulong *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001664
 */

void recovered_10001664(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;

  if (0xf < param_2) {
    uVar2 = 0;
    for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
      uVar2 = uVar2 << (uVar1 & 0x3f) | uVar2;
    }
    for (puVar3 = param_1; (param_2 != 0 && (((ulong)puVar3 & 7) != 0));
        puVar3 = (ulong *)((long)puVar3 + 1)) {
      *(undefined1 *)param_1 = 0;
      param_2 = param_2 - 1;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    for (; 0x1f < param_2; param_2 = param_2 - 0x20) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    }
    for (; 7 < param_2; param_2 = param_2 - 8) {
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (ulong *)((long)param_1 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001668
 */

char * recovered_10001668(long param_1,char param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x1000168c
 */

int recovered_1000168c(void *left,void *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;

  if ((0xf < count) && ((((uint)right ^ (uint)left) & 7) == 0)) {
    for (lVar6 = 0; (uVar5 = count - lVar6, uVar5 != 0 && (((uint)left + (int)lVar6 & 7) != 0));
        lVar6 = lVar6 + 1) {
      iVar3 = (uint)*(byte *)((long)left + lVar6) - (uint)*(byte *)((long)right + lVar6);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    for (; 0x1f < uVar5; uVar5 = uVar5 - 0x20) {
      if (*(long *)((long)left + lVar6) != *(long *)((long)right + lVar6)) {
        lVar4 = (long)left + lVar6;
        lVar6 = (long)right + lVar6;
        goto recovered_100017f4;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_100017f4;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_100017f4;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_100017f4;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_100017f4:
        lVar7 = 0;
        do {
          if (lVar7 == 8) {
            return 0;
          }
          pbVar1 = (byte *)(lVar4 + lVar7);
          pbVar2 = (byte *)(lVar6 + lVar7);
          lVar7 = lVar7 + 1;
          iVar3 = (uint)*pbVar1 - (uint)*pbVar2;
        } while (iVar3 == 0);
        return iVar3;
      }
      lVar7 = lVar7 + 8;
    }
    left = (void *)((long)left + lVar7 + lVar6);
    right = (void *)((long)right + lVar7 + lVar6);
  }
  while( true ) {
    if (count == 0) {
      return 0;
    }
    if ((uint)*(byte *)left - (uint)*(byte *)right != 0) break;
    left = (void *)((long)left + 1);
    right = (void *)((long)right + 1);
    count = count - 1;
  }
  return (uint)*(byte *)left - (uint)*(byte *)right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f4
 */

int recovered_100017f4(long param_1,long param_2)

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001820
 */

bool recovered_10001820(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001830
 */

bool recovered_10001830(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001840
 */

bool recovered_10001840(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001854
 */

bool recovered_10001854(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001870
 */

bool recovered_10001870(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001880
 */

bool recovered_10001880(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001890
 */

int recovered_10001890(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018a4
 */

int recovered_100018a4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018b8
 */

ulong recovered_100018b8(char *text)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100018dc
 */

int recovered_100018dc(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *left;
    if (bVar1 == 0 || (uint)bVar1 != (uint)(byte)*right) break;
    left = left + 1;
    right = right + 1;
  }
  return (uint)bVar1 - (uint)(byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001904
 */

int recovered_10001904(char *left,char *right)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  while( true ) {
    bVar1 = *left;
    if (bVar1 == 0 || (uint)bVar1 != (uint)(byte)*right) break;
    left = left + 1;
    right = right + 1;
  }
  return (uint)bVar1 - (uint)(byte)*right;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001908
 */

void recovered_10001908(long param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001920
 */

void recovered_10001920(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  void *destination;

  if (param_1 != (char *)0x0) {
    uVar1 = recovered_100018b8(param_1);
    destination = recovered_1000130c(uVar1 + 1);
    if (destination != (void *)0x0) {
      recovered_100013dc(destination,param_1,uVar1 + 1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000195c
 */

char * recovered_1000195c(char *param_1,char param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
 * Address: 0x10001984
 */

long recovered_10001984(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_1000195c(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100019c4
 */

ulong recovered_100019c4(char *text,char *reject)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;

  uVar2 = 0;
  while ((text[uVar2] != '\0' &&
         (pcVar1 = recovered_1000195c(reject,text[uVar2]), pcVar1 == (char *)0x0))) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a04
 */

char * recovered_10001a04(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_1000195c(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a44
 */

char * recovered_10001a44(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10007a56
#define DAT_10007a56 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a80
 */

undefined * recovered_10001a80(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10007a56;
}

#undef DAT_10007a56

#undef PTR_DAT_10010000
#define PTR_DAT_10010000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x88c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a8c
 */

undefined ** recovered_10001a8c(void)

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
 * Address: 0x10001a98
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001a98(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_100015c8(auStack_38,0,0x18);
  bVar1 = recovered_10002e34(0x168);
  if (((!bVar1) || (_DAT_82010968 == 0)) ||
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 == 0)) {
    local_30 = 0x574d4236;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = local_30;
  }
  return;
}

#undef DAT_82010968
#undef _DAT_82010968
#undef auStack_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b10
 */

double recovered_10001b10(double param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  for (uVar1 = param_2; 0 < (int)uVar1; uVar1 = uVar1 - 1) {
    param_1 = param_1 + param_1;
  }
  for (uVar1 = param_2 & (int)param_2 >> 0x1f; uVar1 != 0; uVar1 = uVar1 + 1) {
    param_1 = param_1 * 0.5;
  }
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b44
 */

uint128 recovered_10001b44(double param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar5;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bb8
 */

uint128 recovered_10001bb8(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;

  if (param_2 == 0.0) {
    return ZEXT816(0);
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = param_1 - param_2 * (double)(int)(param_1 / param_2);
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001bdc
 */

uint128 recovered_10001bdc(double param_1,double param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar5;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c3c
 */

uint128 recovered_10001c3c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;
  double dVar3;

  dVar3 = (double)(int)param_1;
  dVar2 = (double)((int)param_1 + -1);
  if (dVar3 <= param_1) {
    dVar2 = dVar3;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c58
 */

uint128 recovered_10001c58(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c84
 */

uint128 recovered_10001c84(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar3;
  return auVar1;
}


#undef DAT_10007740
#define DAT_10007740 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001cc0
 */

uint128 recovered_10001cc0(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10007740 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10007740

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d6c
 */

long recovered_10001d6c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10007748
#define DAT_10007748 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d80
 */

uint128 recovered_10001d80(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001dd4(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10007748);
  return auVar1;
}

#undef DAT_10007748

#undef DAT_10007750
#define DAT_10007750 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10007758
#define DAT_10007758 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10007760
#define DAT_10007760 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_10007768
#define DAT_10007768 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd4
 */

void recovered_10001dd4(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10007750 < param_1; param_1 = param_1 + DAT_10007768) {
  }
  for (; param_1 < DAT_10007758; param_1 = param_1 + DAT_10007760) {
  }
  return;
}

#undef DAT_10007750
#undef DAT_10007758
#undef DAT_10007760
#undef DAT_10007768

#undef DAT_10007770
#define DAT_10007770 (*(double *)(((uintptr_t)pf_module_state + 0x38U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e18
 */

uint128 recovered_10001e18(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001dd4(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10007770;
  return auVar1;
}

#undef DAT_10007770

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e64
 */

uint128 recovered_10001e64(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double dVar2;

  dVar2 = -param_1;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2;
  return auVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e74
 */

longlong recovered_10001e74(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;

  if (value == 0.0) {
    return 0;
  }
  uVar4 = 0;
  dVar6 = -value;
  if (0.0 <= value) {
    dVar6 = value;
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
  if (0.0 <= value) {
    uVar5 = uVar4;
  }
  return uVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ed4
 */

ulonglong recovered_10001ed4(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulong uVar5;
  double dVar6;

  uVar4 = 0;
  if (0.0 < value) {
    uVar5 = 0x3f;
    dVar6 = 9.223372036854776e+18;
    do {
      bVar3 = dVar6 <= value;
      if (bVar3) {
        value = value - dVar6;
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f24
 */

double recovered_10001f24(ulonglong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  dVar2 = 1.0;
  dVar1 = 0.0;
  for (; value != 0; value = value >> 1) {
    if ((value & 1) != 0) {
      dVar1 = dVar1 + dVar2;
    }
    dVar2 = dVar2 + dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f4c
 */

double recovered_10001f4c(longlong value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;

  if (value < 0) {
    dVar2 = recovered_10001f24(-value);
    return -dVar2;
  }
  dVar2 = 1.0;
  dVar1 = 0.0;
  for (; value != 0; value = (ulong)value >> 1) {
    if ((value & 1U) != 0) {
      dVar1 = dVar1 + dVar2;
    }
    dVar2 = dVar2 + dVar2;
  }
  return dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001f70
 */

float recovered_10001f70(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fa4
 */

void recovered_10001fa4(float param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001b44((double)param_1,param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fbc
 */

float recovered_10001fbc(float param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_10001b10((double)param_1,param_2);
  return (float)dVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001fd4
 */

void recovered_10001fd4(float param_1,float param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001bdc((double)param_1,(double)param_2);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ff0
 */

float recovered_10001ff0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;
  float fVar2;

  fVar1 = (float)(int)param_1;
  fVar2 = (float)((int)param_1 + -1);
  if (fVar1 <= param_1) {
    fVar2 = fVar1;
  }
  return fVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002014
 */

void recovered_10002014(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c58((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000202c
 */

uint128 recovered_1000202c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = dVar4;
    return auVar1;
  }
  dVar4 = (double)(int)param_1;
  dVar3 = (double)((int)param_1 + -1);
  if (dVar4 <= param_1) {
    dVar3 = dVar4;
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3;
  return auVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002054
 */

void recovered_10002054(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000202c((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000206c
 */

void recovered_1000206c(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001c84((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002084
 */

void recovered_10002084(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001cc0((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000209c
 */

long recovered_1000209c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020b0
 */

void recovered_100020b0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001d80((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020c8
 */

void recovered_100020c8(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001e18((double)param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020e0
 */

float recovered_100020e0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  fVar1 = -param_1;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  return fVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100020f0
 */

long recovered_100020f0(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    if ((*pbVar4 == 0x30) && ((pbVar5[uVar6 + 1] | 0x20) == 0x78)) goto LAB_10002188;
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
      goto LAB_100021b4;
    }
    if (*pbVar4 != 0x30) {
      param_3 = 10;
      goto LAB_100021b4;
    }
    if ((pbVar5[uVar6 + 1] | 0x20) != 0x78) {
      param_3 = 8;
      goto LAB_100021b4;
    }
LAB_10002188:
    pbVar4 = pbVar5 + uVar6 + 2;
  }
  param_3 = 0x10;
LAB_100021b4:
  lVar7 = 0;
  while( true ) {
    uVar3 = recovered_100021f4((uint)*pbVar4);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100021f4
 */

uint recovered_100021f4(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002224
 */

long recovered_10002224(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
      goto LAB_10002308;
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
      goto LAB_10002308;
    }
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_10002308;
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
LAB_10002308:
  lVar7 = 0;
  while( true ) {
    uVar5 = recovered_100021f4((uint)*pbVar6);
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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002348
 */

uint128 recovered_10002348(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
        dVar12 = recovered_10001b10(dVar12,iVar9 * iVar6);
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
  (*(double *)((uint8_t *)&(auVar5)+0)) = dVar13;
  return auVar5;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024d8
 */

void recovered_100024d8(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002348(param_1,param_2);
  return;
}


#undef str_10007a58
#define str_10007a58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x320U)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100024f0
 */

int recovered_100024f0(byte *param_1,ulong param_2,byte *param_3,double *param_4)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  double *pdVar3;
  bool bVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;

  local_8c = 0;
  local_88 = param_2;
  local_80 = param_1;
  pdStack_78 = param_4;
  if (param_2 != 0) {
    *param_1 = 0;
  }
LAB_10002560:
  bVar9 = *param_3;
  if (bVar9 != 0x25) {
    if (bVar9 == 0) {
      if (param_2 != 0) {
        *local_80 = 0;
      }
      return local_8c;
    }
    pbVar8 = param_3;
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = bVar9;
      goto LAB_1000258c;
    }
    goto LAB_10002590;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x10002620;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002608;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_10002608;
      case 0x2b:
      case 0x2d:
      case 0x30:
        bVar9 = *pbVar8;
        param_3 = param_3 + 1;
        pbVar8 = pbVar8 + 1;
      }
    } while( true );
  }
  if (1 < local_88) {
    *local_80 = 0x25;
    local_88 = local_88 - 1;
    local_80 = local_80 + 1;
  }
  local_8c = local_8c + 1;
  goto LAB_100028e8;
LAB_10002608:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_10002630:
  if (bVar9 == 0x2e) {
    pbVar13 = pbVar8 + 1;
    bVar9 = *pbVar13;
    if (bVar9 == 0x2a) {
      uVar7 = *(uint *)pdStack_78;
      bVar9 = pbVar8[2];
      pbVar8 = pbVar8 + 2;
      pdStack_78 = pdStack_78 + 1;
    }
    else {
      uVar7 = 0;
      while( true ) {
        bVar2 = bVar9 - 0x30U;
        pbVar8 = pbVar13;
        if (9 < bVar2) break;
        iVar12 = uVar7 * 10;
        bVar1 = (int)uVar7 <= (int)((bVar2 ^ 0x7ffffffe) / 10);
        uVar7 = 0x7fffffff;
        if (bVar1) {
          uVar7 = iVar12 + (uint)bVar2;
        }
        pbVar13 = pbVar13 + 1;
        bVar9 = *pbVar13;
      }
    }
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (bVar9 == 0x4c) {
    pbVar8 = pbVar8 + 1;
    uVar10 = 8;
    bVar1 = true;
  }
  else if (bVar9 == 0x7a) {
    bVar1 = false;
    pbVar8 = pbVar8 + 1;
    uVar10 = 5;
  }
  else if (bVar9 == 0x6a) {
    bVar1 = false;
    pbVar8 = pbVar8 + 1;
    uVar10 = 7;
  }
  else if (bVar9 == 0x6c) {
    bVar4 = pbVar8[1] == 0x6c;
    uVar10 = 3;
    if (bVar4) {
      uVar10 = 4;
    }
LAB_1000271c:
    bVar1 = false;
    pbVar13 = pbVar8 + 1;
    if (bVar4) {
      pbVar13 = pbVar8 + 2;
    }
    pbVar8 = pbVar13;
  }
  else if (bVar9 == 0x74) {
    bVar1 = false;
    pbVar8 = pbVar8 + 1;
    uVar10 = 6;
  }
  else {
    if (bVar9 == 0x68) {
      bVar4 = pbVar8[1] == 0x68;
      uVar10 = 1;
      if (!bVar4) {
        uVar10 = 2;
      }
      goto LAB_1000271c;
    }
    bVar1 = false;
    uVar10 = 0;
  }
  bVar9 = *pbVar8;
  switch((uintptr_t)(bVar9)) {
  case 99:
    pdVar3 = pdStack_78 + 1;
    if (1 < local_88) {
      *local_80 = (byte)*(uint *)pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      goto LAB_1000258c;
    }
    break;
  case 100:
  case 0x69:
code_r0x1000283c:
    switch((uintptr_t)(uVar10)) {
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
LAB_100028d8:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x100028e0:
    uVar6 = 0;
LAB_100028e4:
    recovered_10002ad0((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_100028e8;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x327U));
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
      recovered_10002ad0((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
      pbVar13 = local_80;
      if (1 < local_88) {
        pbVar13 = local_80 + 1;
        *local_80 = 0x2e;
        local_88 = local_88 - 1;
      }
      dVar5 = dVar5 - (double)(int)dVar5;
      iVar12 = 6;
      do {
        iVar16 = (int)(dVar5 * 10.0);
        local_80 = pbVar13;
        if (1 < local_88) {
          local_80 = pbVar13 + 1;
          *pbVar13 = (char)iVar16 + 0x30;
          local_88 = local_88 - 1;
        }
        dVar5 = dVar5 * 10.0 - (double)iVar16;
        iVar12 = iVar12 + -1;
        pbVar13 = local_80;
      } while (iVar12 != 0);
      local_8c = local_8c + 7;
    }
    goto LAB_100028e8;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002b70((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x355U));
      uVar7 = 0x10;
      goto code_r0x100028e0;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_10007a58;
      if ((byte *)(uintptr_t)pf_double_bits(*pdStack_78) != (byte *)0x0) {
        pbVar13 = (byte *)(uintptr_t)pf_double_bits(*pdStack_78);
      }
      uVar11 = local_88;
      pbVar14 = local_80;
      while( true ) {
        pdStack_78 = pdVar3;
        if ((uVar7 == 0) || (*pbVar13 == 0)) break;
        pbVar15 = pbVar14;
        if (1 < uVar11) {
          pbVar15 = pbVar14 + 1;
          *pbVar14 = *pbVar13;
          uVar11 = uVar11 - 1;
          local_88 = uVar11;
          local_80 = pbVar15;
        }
        uVar7 = uVar7 - (0 < (int)uVar7);
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar15;
        local_8c = local_8c + 1;
      }
      goto LAB_100028e8;
    case 0x75:
      switch((uintptr_t)(uVar10)) {
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
      goto LAB_100028d8;
    case 0x78:
code_r0x100027f8:
      switch((uintptr_t)(uVar10)) {
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
      pdStack_78 = pdStack_78 + 1;
      uVar6 = (uint)(*pbVar8 == 0x58);
      uVar7 = 0x10;
      goto LAB_100028e4;
    default:
      if (bVar9 == 0x49) goto code_r0x1000283c;
      if (bVar9 == 0x58) goto code_r0x100027f8;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_1000258c:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_10002590:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_100028e8:
  param_3 = pbVar8 + 1;
  goto LAB_10002560;
code_r0x10002620:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_10002630;
}

#undef str_10007a58
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a94
 */

void recovered_10002a94(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}


#undef str_10007a6b
#define str_10007a6b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x333U)))
#undef str_10007a7c
#define str_10007a7c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x344U)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ad0
 */

void recovered_10002ad0(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10007a6b;
  if (param_6 == 0) {
    pcVar1 = str_10007a7c;
  }
  uVar5 = (ulong)param_5;
  lVar3 = 0;
  do {
    lVar6 = lVar3;
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = param_4 / uVar5;
    }
    acStack_80[lVar6] = pcVar1[param_4 - uVar2 * uVar5];
    bVar4 = uVar5 <= param_4;
    param_4 = uVar2;
    lVar3 = lVar6 + 1;
  } while (bVar4);
  for (; lVar6 != -1; lVar6 = lVar6 + -1) {
    recovered_10002a94(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_10007a6b
#undef str_10007a7c
#undef acStack_80

#undef str_10007a58
#define str_10007a58 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x320U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b70
 */

void recovered_10002b70(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10007a58;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002a94(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10007a58

#define uStack0000000000000000 (*(undefined1 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bbc
 */

int recovered_10002bbc(char *buffer,ulong capacity,char *format,...)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = recovered_100024f0((byte *)buffer,capacity,(byte *)format,
                             (double *)&uStack0000000000000000);
  return iVar1;
}

#undef uStack0000000000000000

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89a8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002be4
 */

void recovered_10002be4(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_10002c68(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_100100e0;
      if (DAT_100100e8 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_100100f0 == (long *)0x0) {
        DAT_100100f0 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0

#undef DAT_100100e0
#define DAT_100100e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89a8U)))
#undef DAT_100100e8
#define DAT_100100e8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89b0U)))
#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c68
 */

void recovered_10002c68(ulong param_1,ulong param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 *puVar4;

  if (((!CARRY8(param_1,param_2)) && (param_1 < 0xfffffffffffffff1)) && (param_3 != (ulong *)0x0)) {
    plVar2 = (long *)(param_1 + 0xf & 0xfffffffffffffff0);
    uVar3 = param_2 - ((long)plVar2 - param_1);
    if (((long)plVar2 - param_1 <= param_2 && uVar3 != 0) &&
       (uVar3 = uVar3 & 0xfffffffffffffff0, 0x30 < uVar3)) {
      *plVar2 = uVar3 - 0x20;
      plVar2[1] = 0;
      puVar4 = (undefined1 *)*param_3;
      plVar2[2] = (long)puVar4;
      *(undefined1 *)(plVar2 + 3) = 1;
      puVar1 = &DAT_100100e0;
      if (DAT_100100e8 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_100100f0 == (long *)0x0) {
        DAT_100100f0 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_100100e0
#undef DAT_100100e8
#undef DAT_100100f0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002ce8
 */

bool recovered_10002ce8(ulong address,ulong size,uchar *added)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;

  if ((address < 0xfffffffffffffff1 && added != (uchar *)0x0) && size <= ~address) {
    *added = '\0';
    uVar2 = (address + 0xf & 0xfffffffffffffff0) - address;
    uVar1 = size - uVar2;
    if ((uVar2 <= size && uVar1 != 0) && (0x30 < (uVar1 & 0xfffffffffffffff0))) {
      *added = '\x01';
    }
  }
  return (address < 0xfffffffffffffff1 && added != (uchar *)0x0) && size <= ~address;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d38
 */

undefined8 recovered_10002d38(ulong *param_1,long param_2)

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
 * Address: 0x10002d8c
 */

void recovered_10002d8c(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002dac(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_100100f0
#define DAT_100100f0 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x89b8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002dac
 */

undefined8 recovered_10002dac(ulong *param_1)

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
      if (DAT_100100f0 == puVar2) {
        DAT_100100f0 = param_1;
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

#undef DAT_100100f0

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
 * Address: 0x10002e34
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002e34(int param_1)

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

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fcc
 */

void recovered_10002fcc(char *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003084(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_10003084(0);
          }
          pcVar1 = &DAT_10010108 + DAT_10010100;
          DAT_10010100 = DAT_10010100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003084
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003084(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_10010100 != 0) || (param_1 != 0)) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_100013dc(local_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003df4(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_10010100 = 0;
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003110(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010100 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_100013dc(auStack_230,&DAT_10010108,DAT_10010100);
    uVar2 = DAT_10010100;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003df4(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_10010100 = 0;
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003118
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003118(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_10010100 != 0) {
    if (DAT_10010100 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_100013dc(auStack_230,&DAT_10010108,DAT_10010100);
      uVar2 = DAT_10010100;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003df4(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_10010100 = 0;
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10007a90
#define DAT_10007a90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
#define acStack_160 (*(char (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

void recovered_10003120(char *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10007a90;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002bbc(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10002fcc(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10007a90
#undef acStack_160

#undef DAT_10007aae
#define DAT_10007aae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x376U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
#undef str_10007a93
#define str_10007a93 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x35bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003184
 */

/* WARNING: Removing unreachable block (ram,0x100031d0) */

void recovered_10003184(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100031a8(str_10007a93);
  pcVar4 = &DAT_10007aae;
  for (uVar3 = recovered_100018b8(&DAT_10007aae); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003084(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_10003084(0);
        }
        pcVar1 = &DAT_10010108 + DAT_10010100;
        DAT_10010100 = DAT_10010100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10007aae
#undef DAT_10010100
#undef DAT_10010108
#undef str_10007a93

#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031a8
 */

void recovered_100031a8(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_100018b8(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_10010100 != 0) {
          DAT_10010100 = DAT_10010100 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_10003084(1);
        }
        else {
          if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
            recovered_10003084(0);
          }
          pcVar1 = &DAT_10010108 + DAT_10010100;
          DAT_10010100 = DAT_10010100 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_10010100
#undef DAT_10010108

#undef DAT_10007aae
#define DAT_10007aae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x376U)))
#undef DAT_10010100
#define DAT_10010100 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c8U)))
#undef DAT_10010108
#define DAT_10010108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x89d0U)))
#undef str_10007ab1
#define str_10007ab1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x379U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031d4
 */

/* WARNING: Removing unreachable block (ram,0x100031d0) */

void recovered_100031d4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_100031a8(str_10007ab1);
  pcVar4 = &DAT_10007aae;
  for (uVar3 = recovered_100018b8(&DAT_10007aae); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_10010100 != 0) {
        DAT_10010100 = DAT_10010100 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_10003084(1);
      }
      else {
        if (DAT_10010100 - 0x1ffU < 0xfffffffffffffdff || DAT_10010100 == -2) {
          recovered_10003084(0);
        }
        pcVar1 = &DAT_10010108 + DAT_10010100;
        DAT_10010100 = DAT_10010100 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10007aae
#undef DAT_10010100
#undef DAT_10010108
#undef str_10007ab1

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031f8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100031f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10003118();
    bVar2 = recovered_10003df4(0x44);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003270
 */

undefined8 recovered_10003270(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003274
 */

void recovered_10003274(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003278
 */

undefined8 recovered_10003278(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 1;
}


#undef DAT_10007a90
#define DAT_10007a90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
#undef str_10007b32
#define str_10007b32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_10007b3f
#define str_10007b3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x407U)))
#undef str_10007b4d
#define str_10007b4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x415U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

undefined4 * recovered_10003280(byte *param_1,char *param_2)

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

  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100018dc((char *)param_1,str_10007b32);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100018dc((char *)param_1,str_10007b3f);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100018dc((char *)param_1,str_10007b4d);
      if (iVar3 != 0) {
        puVar4 = recovered_1000130c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_100015c8(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_1000195c(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_10007a90);
        recovered_100015c8(&uStack_4c,0,0xc);
        uVar6 = recovered_100034bc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_10003464:
            recovered_10001350(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_1000195c(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000350c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003464;
              recovered_100013dc(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000130c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100015c8(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_10007a90);
  return puVar4;
}

#undef DAT_10007a90
#undef DAT_10010058
#undef str_10007b32
#undef str_10007b3f
#undef str_10007b4d
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100034bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100034bc(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003df4(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100034fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000350c
 */

undefined8 recovered_1000350c(long param_1,ulong param_2)

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
      pvVar2 = recovered_10001390(*(void **)(param_1 + 0x100),uVar4);
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

#undef DAT_10007a90
#define DAT_10007a90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x358U)))
#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
#undef str_10007b32
#define str_10007b32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3faU)))
#undef str_10007b3f
#define str_10007b3f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x407U)))
#undef str_10007b4d
#define str_10007b4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x415U)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003594
 */

undefined4 * recovered_10003594(byte *param_1,char *param_2,int *param_3)

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
    recovered_100035c8(param_3);
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_10010058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_100018dc((char *)param_1,str_10007b32);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_100018dc((char *)param_1,str_10007b3f);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_100018dc((char *)param_1,str_10007b4d);
      if (iVar3 != 0) {
        puVar4 = recovered_1000130c(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_10010058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_100015c8(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_1000195c(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_1000195c(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_1000195c(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_1000195c(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_10007a90);
        recovered_100015c8(&uStack_4c,0,0xc);
        uVar6 = recovered_100034bc(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_10010058 = 2;
LAB_10003464:
            recovered_10001350(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_1000195c(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_1000350c((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_10003464;
              recovered_100013dc(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_1000130c(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_10010058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_100015c8(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002bbc((char *)(puVar4 + 1),0xf1,&DAT_10007a90);
  return puVar4;
}

#undef DAT_10007a90
#undef DAT_10010058
#undef str_10007b32
#undef str_10007b3f
#undef str_10007b4d
#undef uStack_4c
#undef uStack_48

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035c8
 */

undefined8 recovered_100035c8(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_100039ec(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_10001350(*(void **)(param_1 + 0x40));
    }
    recovered_10001350(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000360c
 */

ulong recovered_1000360c(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong count;
  uint128 auVar1;
  uint128 auVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;

  uVar7 = 0;
  if ((((param_3 != 0) && (param_2 != 0)) && (param_1 != (undefined1 *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if ((char)param_4[0x49] == '\x01') {
      if ((*param_4 == 0) && (param_4[0x48] == -1)) {
        uVar5 = *(ulong *)(param_4 + 0x46);
        uVar7 = *(ulong *)(param_4 + 0x42) - uVar5;
        if (*(ulong *)(param_4 + 0x42) < uVar5 || uVar7 == 0) {
          uVar7 = 0;
          *(undefined1 *)(param_4 + 0x4a) = 1;
        }
        else {
          PF_PART8(auVar1, 8) = 0;
          PF_PART8(auVar1, 0) = param_2;
          PF_PART8(auVar2, 8) = 0;
          PF_PART8(auVar2, 0) = param_3;
          uVar6 = param_3 * param_2;
          if (SUB168(auVar1 * auVar2,8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          count = uVar7;
          if (uVar6 <= uVar7) {
            count = uVar6;
          }
          recovered_100013dc(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
          *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + count;
          if (uVar7 < uVar6) {
            *(undefined1 *)(param_4 + 0x4a) = 1;
          }
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = count / param_2;
          }
        }
      }
      else {
        uVar7 = 0;
        while( true ) {
          uVar5 = param_2;
          puVar3 = param_1;
          if (uVar7 == param_3) break;
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar4 = recovered_10003740(param_4);
            if (uVar4 == 0xffffffff) {
              return uVar7;
            }
            *puVar3 = (char)uVar4;
            puVar3 = puVar3 + 1;
          }
          param_1 = param_1 + param_2;
          uVar7 = uVar7 + 1;
        }
        uVar7 = param_3;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
}


#undef DAT_10007a6a
#define DAT_10007a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003740
 */

uint recovered_10003740(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  bool bVar2;
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
LAB_100037d8:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_100031f8((long)text,0x1fe,&DAT_10007a6a,0);
      if (bVar2) {
        uVar3 = recovered_100018b8(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_100037d8;
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

#undef DAT_10007a6a

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003824
 */

long recovered_10003824(char *param_1,long param_2,long param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  if (*(char *)((long)param_4 + 0x125) == '\x01') {
    uVar5 = param_3 * param_2;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10002fcc(param_1,uVar5);
      *(ulong *)(param_4 + 0x46) = *(long *)(param_4 + 0x46) + uVar5;
      goto LAB_10003924;
    }
    if ((*(byte *)((long)param_4 + 0x126) & 1) == 0) {
      lVar2 = *(long *)(param_4 + 0x46);
    }
    else {
      lVar2 = *(long *)(param_4 + 0x42);
      *(long *)(param_4 + 0x46) = lVar2;
    }
    uVar1 = recovered_1000350c((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_100015c8((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_100013dc((void *)(*(long *)(param_4 + 0x40) + uVar3),param_1,uVar5);
      uVar5 = *(long *)(param_4 + 0x46) + uVar5;
      *(ulong *)(param_4 + 0x46) = uVar5;
      if (*(ulong *)(param_4 + 0x42) < uVar5) {
        *(ulong *)(param_4 + 0x42) = uVar5;
      }
      *(undefined2 *)((long)param_4 + 0x127) = 1;
      goto LAB_10003924;
    }
  }
  param_3 = 0;
LAB_10003924:
  return param_3;
}


#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003934
 */

undefined8 recovered_10003934(int *param_1,ulong param_2,int param_3)

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
        if (param_3 != 2) goto LAB_10003940;
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
LAB_10003940:
  DAT_10010058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_10010058

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039c8
 */

undefined8 recovered_100039c8(long param_1)

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
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100039ec
 */

undefined8 recovered_100039ec(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003bc8(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a60
 */

undefined1 recovered_10003a60(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x128);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a6c
 */

undefined1 recovered_10003a6c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x129);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a78
 */

void recovered_10003a78(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a8c
 */

uint recovered_10003a8c(uint param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ab0
 */

undefined8 recovered_10003ab0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_10010058 = 0x16;
  }
  else {
    uVar1 = recovered_10003ae8(param_1);
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
 * Address: 0x10003ae8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003ae8(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003df4(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_10010058
#define DAT_10010058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x8920U)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b2c
 */

undefined8 recovered_10003b2c(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_10010058 = 0x16;
  }
  else {
    recovered_100015c8(&uStack_2c,0,0xc);
    uVar1 = recovered_100034bc(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_10010058 = 2;
    }
    else {
      uVar1 = recovered_10003bc8(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003ae8(param_1), (int)uVar1 != 0)) {
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
 * Address: 0x10003bc8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003df4(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010838)(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010838
#undef _DAT_82010838

#define uStack_3c (*(uint *)(pf_stack_frame + 20))
#define uStack_38 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c28
 */

undefined8 recovered_10003c28(long param_1,undefined8 *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined8 uVar2;
  void *destination;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_100015c8(&uStack_3c,0,0xc);
    uVar2 = recovered_100034bc(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      destination = recovered_1000130c((ulong)uVar1);
      uVar2 = 0;
      if (destination != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_100013dc(destination,(void *)(ulong)uStack_3c,(ulong)uStack_38);
          uVar3 = (ulong)uStack_38;
        }
        *param_2 = destination;
        *param_3 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

#undef uStack_3c
#undef uStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cc8
 */

bool recovered_10003cc8(long param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003bc8(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf4
 */

undefined8 recovered_10003cf4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cf8
 */

void recovered_10003cf8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003cfc
 */

undefined8 recovered_10003cfc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d00
 */

undefined8 recovered_10003d00(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d04
 */

undefined8 recovered_10003d04(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d08
 */

int recovered_10003d08(char *left,char *right,ulong count)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;

  while( true ) {
    if (count == 0) {
      return 0;
    }
    bVar1 = *left;
    iVar2 = (uint)bVar1 - (uint)(byte)*right;
    if (iVar2 != 0) break;
    count = count - 1;
    left = left + 1;
    right = right + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return iVar2;
}


#undef DAT_10007ac1
#define DAT_10007ac1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x389U)))
#undef str_10007ac4
#define str_10007ac4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x38cU)))
#undef str_10007ad1
#define str_10007ad1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x399U)))
#undef str_10007adb
#define str_10007adb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3a3U)))
#undef str_10007aef
#define str_10007aef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_10007afd
#define str_10007afd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3c5U)))
#undef str_10007b0f
#define str_10007b0f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3d7U)))
#undef str_10007b1b
#define str_10007b1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3e3U)))
#undef str_10007b2c
#define str_10007b2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3f4U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d38
 */

char * recovered_10003d38(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10007ac1;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003d64_caseD_1;
  case 2:
    return str_10007ac4;
  case 5:
    return str_10007ad1;
  case 9:
    return str_10007adb;
  case 0xc:
    return str_10007aef;
  case 0xd:
    return str_10007afd;
  default:
    if (param_1 == 0x11) {
      return str_10007b0f;
    }
    if (param_1 == 0x16) {
      return str_10007b1b;
    }
switchD_10003d64_caseD_1:
    return str_10007b2c;
  }
}

#undef DAT_10007ac1
#undef str_10007ac4
#undef str_10007ad1
#undef str_10007adb
#undef str_10007aef
#undef str_10007afd
#undef str_10007b0f
#undef str_10007b1b
#undef str_10007b2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dd8
 */

undefined8 recovered_10003dd8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003ddc
 */

undefined8 recovered_10003ddc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0xffffffff;
}


#undef DAT_100100f8
#define DAT_100100f8 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x89c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003de0
 */

void recovered_10003de0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_100100f8 = DAT_100100f8 + 1;
  return;
}

#undef DAT_100100f8

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
 * Address: 0x10003df4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003df4(int param_1)

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

/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003ec0(void *context,...){
 __asm__ volatile("ldr x16, [x0, #0x50]\nmov sp, x16\nldr x29, [x0, #0x40]\nldr x16, [x0, #0x48]\nbr x16");
}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003ed4(void *context){__asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret \nbrk #1");}


/* Native context boundary; Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10003f30(void *context,int value){__asm__ volatile("cbnz w1, Lpf_context_10003f38\nmov w1, #1\nLpf_context_10003f38:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret \nbrk #1");}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f94
 */

void recovered_10003f94(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_100012f8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003fa4);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fa8
 */

undefined8 recovered_10003fa8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fb0
 */

void recovered_10003fb0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10003fc0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fc0
 */

long recovered_10003fc0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_100041c4(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  *(long *)(lVar1 + 0x10) = DAT_10010308;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_10010308 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_10010308

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fec
 */

void * recovered_10003fec(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000130c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000401c
 */

void * recovered_1000401c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000130c(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_100012f8();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004020
 */

void recovered_10004020(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004038
 */

void recovered_10004038(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004050
 */

void recovered_10004050(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004068
 */

void recovered_10004068(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10001350(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004080
 */

undefined8 recovered_10004080(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004088
 */

uint recovered_10004088(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004098
 */

void recovered_10004098(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a8
 */

void recovered_100040a8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_10010318
#define DAT_10010318 (*(int *)(((uintptr_t)pf_module_state + 0x8be0U)))
#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040ac
 */

long recovered_100040ac(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_1000130c(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  for (uVar3 = 0; param_1 + 0x38 != uVar3; uVar3 = uVar3 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar3) = 0;
  }
  iVar2 = DAT_10010318;
  do {
    DAT_10010318 = 1;
    if (1 < iVar2 + 1U) {
      DAT_10010318 = iVar2 + 1;
    }
    plVar4 = (long *)&DAT_10010320;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        *(int *)((long)pvVar1 + 0x30) = DAT_10010318;
        *(void **)((long)pvVar1 + 0x18) = DAT_10010320;
        DAT_10010320 = pvVar1;
        return (long)pvVar1 + 0x38;
      }
      plVar4 = (long *)(lVar5 + 0x18);
      iVar2 = DAT_10010318;
    } while (*(int *)(lVar5 + 0x30) != DAT_10010318);
  } while( true );
}

#undef DAT_10010318
#undef DAT_10010320

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004154
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004154(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  recovered_10004184(param_1 + -0x38);
  bVar1 = recovered_10002e34(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x38);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004184
 */

void recovered_10004184(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  long lVar3;

  if (param_1 != 0) {
    puVar2 = &DAT_10010320;
    lVar1 = DAT_10010320;
    if (DAT_10010320 != param_1) {
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

#undef DAT_10010320

#undef DAT_10010320
#define DAT_10010320 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041c4
 */

long recovered_100041c4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = &DAT_10010320;
  while ((lVar2 = *plVar1, lVar2 != 0 && lVar2 != param_1 &&
         (*(int *)(lVar2 + 0x30) != (int)param_1))) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  return lVar2;
}

#undef DAT_10010320

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041f4
 */

long recovered_100041f4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_10010308
#define DAT_10010308 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bd0U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041fc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041fc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_10010308;
  if (DAT_10010308 != 0) {
    puVar1 = (undefined8 *)(DAT_10010308 + 0x10);
    DAT_10010308 = *(long *)(DAT_10010308 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x38);
      }
      recovered_10004184(lVar2);
      bVar3 = recovered_10002e34(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10001384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_10010308
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000425c
 */

void recovered_1000425c(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000427c((undefined8 *)(param_1 + -0x38));
}


#undef DAT_10010310
#define DAT_10010310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bd8U)))
#define local_30 (*(undefined2 *)(pf_stack_frame + 16))
#define cStack_2e (*(char *)(pf_stack_frame + 18))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define uStack_2d (*(undefined1 *)(pf_stack_frame + 19))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000427c
 */

void recovered_1000427c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_10010310;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_100042dc;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_10004870((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[4] = puVar2;
  param_1[5] = CONCAT44(local_28,uStack_2c);
  recovered_10004394(param_1);
LAB_100042dc:
                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}

#undef DAT_10010310
#undef local_30
#undef cStack_2e
#undef local_28
#undef uStack_2d
#undef uStack_2c

#undef DAT_10010308
#define DAT_10010308 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8bd0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042e0
 */

void recovered_100042e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_10010308;
  if (DAT_10010308 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  *(undefined1 *)((long)DAT_10010308 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_1000427c(puVar1);
}

#undef DAT_10010308

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004310
 */

void recovered_10004310(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_10010310;
  DAT_10010310 = param_1;
  return;
}

#undef DAT_10010310

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x8bd8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004324
 */

void recovered_10004324(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_10010310;
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

#undef DAT_10010310

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004350
 */

void recovered_10004350(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_1000427c(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000435c
 */

void recovered_1000435c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}


#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8bd8U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004368
 */

undefined8 recovered_10004368(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long extraout_x0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_100041c4(param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003f94();
  }
  if (DAT_10010310 != (long *)0x0) {
    DAT_10010310 = (long *)*DAT_10010310;
  }
  puVar2 = (undefined8 *)recovered_10004394(puVar2);
  plVar3 = DAT_10010310;
  while( true ) {
    DAT_10010310 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003f94();
    }
    if (plVar3 == (long *)puVar2[4]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_10004870((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10004428;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10004428:
  recovered_10003ec0((long)plVar3);
  recovered_10004368(extraout_x0);
  return 0;
}

#undef DAT_10010310
#undef uStack_50
#undef uStack_48

#undef DAT_10010310
#define DAT_10010310 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x8bd8U)))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004394
 */

undefined8 recovered_10004394(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long extraout_x0;
  long *plVar2;

  plVar2 = DAT_10010310;
  while( true ) {
    DAT_10010310 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003f94();
    }
    if (plVar2 == (long *)param_1[4]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_10004870((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10004428;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x2c);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10004428:
  recovered_10003ec0((long)plVar2);
  recovered_10004368(extraout_x0);
  return 0;
}

#undef DAT_10010310
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004430
 */

undefined8 recovered_10004430(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004368(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000443c
 */

undefined8 recovered_1000443c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004444
 */

void recovered_10004444(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003f94();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004450
 */

long recovered_10004450(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_10004490(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

bool recovered_10004490(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_10004514:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_10004514;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_10004514;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x8978U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000451c
 */

void recovered_1000451c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004520
 */

undefined8 recovered_10004520(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004528
 */

bool recovered_10004528(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30U < 10;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004538
 */

bool recovered_10004538(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004570
 */

bool recovered_10004570(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000458c
 */

bool recovered_1000458c(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045a4
 */

bool recovered_100045a4(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045bc
 */

bool recovered_100045bc(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045d4
 */

bool recovered_100045d4(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


#undef DAT_100077b8
#define DAT_100077b8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_100077c0
#define DAT_100077c0 (*(double *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100045ec
 */

double recovered_100045ec(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (NAN(value)) {
    dVar3 = value;
  }
  else if (value <= DAT_100077b8) {
    dVar3 = 0.0;
    if (DAT_100077c0 <= value) {
      iVar1 = 0;
      for (; 0.5 < value; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; value < -0.5; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
      dVar4 = 1.0;
      dVar3 = 1.0;
      dVar5 = 1.0;
      do {
        dVar4 = dVar4 * (value / dVar5);
        dVar3 = dVar3 + dVar4;
        dVar5 = dVar5 + 1.0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        dVar3 = dVar3 * dVar3;
      }
    }
  }
  else {
    dVar3 = INFINITY;
  }
  return dVar3;
}

#undef DAT_100077b8
#undef DAT_100077c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046ac
 */

float recovered_100046ac(float value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;

  dVar1 = recovered_100045ec((double)value);
  return (float)dVar1;
}


#undef DAT_100077b8
#define DAT_100077b8 (*(double *)(((uintptr_t)pf_module_state + 0x80U)))
#undef DAT_100077c0
#define DAT_100077c0 (*(double *)(((uintptr_t)pf_module_state + 0x88U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046c8
 */

double recovered_100046c8(double value)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;

  if (NAN(value)) {
    dVar3 = value;
  }
  else if (value <= DAT_100077b8) {
    dVar3 = 0.0;
    if (DAT_100077c0 <= value) {
      iVar1 = 0;
      for (; 0.5 < value; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      for (; value < -0.5; value = value * 0.5) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = 0x20;
      dVar4 = 1.0;
      dVar3 = 1.0;
      dVar5 = 1.0;
      do {
        dVar4 = dVar4 * (value / dVar5);
        dVar3 = dVar3 + dVar4;
        dVar5 = dVar5 + 1.0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        dVar3 = dVar3 * dVar3;
      }
    }
  }
  else {
    dVar3 = INFINITY;
  }
  return dVar3;
}

#undef DAT_100077b8
#undef DAT_100077c0

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046cc
 */

double recovered_100046cc(long end,long start)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (double)end - (double)start;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100046dc
 */

uint128 recovered_100046dc(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001c3c(param_1);
  dVar1 = (*(double *)((uint8_t *)&(auVar2)+0));
  dVar3 = dVar1;
  if (param_1 - dVar1 <= -0.5) {
    dVar3 = dVar1 + -1.0;
  }
  if (0.5 <= param_1 - dVar1) {
    dVar3 = dVar1 + 1.0;
  }
  PF_PART8(auVar2, 8) = 0;
  (*(double *)((uint8_t *)&(auVar2)+0)) = dVar3;
  return auVar2;
}


#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004728
 */

long recovered_10004728(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10004768;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10004768:
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
      goto LAB_100047ec;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100047ec;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100047ec;
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
LAB_100047ec:
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

#undef EXT_00000000

#undef EXT_00000000
#define EXT_00000000 (*(byte *)(0x0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000486c
 */

long recovered_1000486c(byte *param_1,undefined8 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100003e00U) == 0) goto LAB_10004768;
  }
  pbVar6 = (byte *)0x0;
  bVar3 = Reset;
LAB_10004768:
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
      goto LAB_100047ec;
    }
    bVar3 = pbVar6[1];
    uVar8 = 0x10;
  }
  else {
    if (param_3 != 0) goto LAB_100047ec;
    if (*pbVar6 != 0x30) {
      param_3 = 10;
      goto LAB_100047ec;
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
LAB_100047ec:
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

#undef EXT_00000000

#undef DAT_100077d8
#define DAT_100077d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa0U)))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004870
 */

undefined8 recovered_10004870(long param_1,long *param_2,undefined2 *param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
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
      recovered_10004a48((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004b3c(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004b3c(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004b3c(&local_68);
        uVar5 = recovered_10004b3c(&local_68);
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
            uVar5 = recovered_10004b98(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004b98(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_100077d8 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004a48((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_10004490(param_2,(long *)puVar6);
              if (bVar2) {
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

#undef DAT_100077d8
#undef local_68
#undef pbStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004a48
 */

ulong * recovered_10004a48(uint param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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
    puVar1 = (ulong *)recovered_10004b70(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10004b00;
  case 1:
    puVar1 = (ulong *)recovered_10004b3c(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004b70(pbVar5,2);
    goto LAB_10004afc;
  case 3:
    puVar1 = (ulong *)recovered_10004b70(pbVar5,4);
    goto LAB_10004ac4;
  default:
    goto switchD_10004a90_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004b98(param_2);
    break;
  case 10:
    uVar3 = recovered_10004b70(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004afc:
    pbVar4 = pbVar5 + 2;
LAB_10004b00:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004b70(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004ac4:
    pbVar4 = pbVar5 + 4;
    goto LAB_10004b00;
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
switchD_10004a90_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b3c
 */

ulong recovered_10004b3c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b70
 */

ulong recovered_10004b70(byte *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b98
 */

ulong recovered_10004b98(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef str_10007b5b
#define str_10007b5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x423U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c18
 */

char * recovered_10004c18(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return str_10007b5b;
}

#undef str_10007b5b

#undef DAT_10007a6a
#define DAT_10007a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c24
 */

void recovered_10004c24(void *context,void *io,char *hostname)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *text;
  uint uVar1;
  ulong count;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;

  if (context != (void *)0x0) {
    recovered_100015c8(context,0,0x220);
    if (io != (void *)0x0) {
      uVar3 = *(undefined8 *)((long)io + 8);
      uVar2 = *(undefined8 *)io;
      uVar5 = *(undefined8 *)((long)io + 0x18);
      uVar4 = *(undefined8 *)((long)io + 0x10);
      *(undefined8 *)((long)context + 0x20) = *(undefined8 *)((long)io + 0x20);
      *(undefined8 *)((long)context + 8) = uVar3;
      *(undefined8 *)context = uVar2;
      *(undefined8 *)((long)context + 0x18) = uVar5;
      *(undefined8 *)((long)context + 0x10) = uVar4;
    }
    text = &DAT_10007a6a;
    if (hostname != (char *)0x0) {
      text = hostname;
    }
    count = recovered_100018b8(text);
    if (0x7e < count) {
      count = 0x7f;
    }
    recovered_100013dc((void *)((long)context + 0x28),text,count);
    *(undefined1 *)((long)context + 0x28 + count) = 0;
    uVar1 = recovered_10004cb8((long)context);
    *(uint *)((long)context + 0x218) = uVar1;
  }
  return;
}

#undef DAT_10007a6a

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_28 (*(int *)(pf_stack_frame + 40))
#define auStack_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define iStack_2c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cb8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10004cb8(long param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;

  uVar3 = 0x574d544c;
  recovered_100015c8(auStack_38,0,0x18);
  bVar1 = recovered_100064dc(0x168);
  if (((bVar1) && (_DAT_82010968 != 0)) &&
     (iVar2 = (*(code *)(ulong)_DAT_82010968)(auStack_38), iVar2 != 0)) {
    uVar3 = local_30 ^ iStack_2c * 0x3c6ef35f ^ local_28 * 0x19660d ^ 0x574d544cU;
  }
  return uVar3 ^ (uint)param_1 ^ *(uint *)(param_1 + 0x218);
}

#undef DAT_82010968
#undef _DAT_82010968
#undef local_30
#undef local_28
#undef auStack_38
#undef iStack_2c

#undef DAT_10007840
#define DAT_10007840 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef DAT_10007848
#define DAT_10007848 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef DAT_10007850
#define DAT_10007850 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x118U)))
#undef DAT_10007858
#define DAT_10007858 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x120U)))
#undef DAT_100078c0
#define DAT_100078c0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x188U)))
#undef str_1000788f
#define str_1000788f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157U)))
#undef str_10007aef
#define str_10007aef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_10007b89
#define str_10007b89 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x451U)))
#undef str_10007ba4
#define str_10007ba4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x46cU)))
#undef str_10007bc1
#define str_10007bc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x489U)))
#undef str_10007bc9
#define str_10007bc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x491U)))
#undef str_10007bd6
#define str_10007bd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x49eU)))
#undef str_10007c39
#define str_10007c39 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x501U)))
#undef str_10007c57
#define str_10007c57 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x51fU)))
#undef str_10007c70
#define str_10007c70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x538U)))
#undef str_10007c8a
#define str_10007c8a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x552U)))
#undef str_10007ca6
#define str_10007ca6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x56eU)))
#undef str_10007cc0
#define str_10007cc0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x588U)))
#undef str_10007cec
#define str_10007cec (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5b4U)))
#undef str_10007d05
#define str_10007d05 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5cdU)))
#undef str_10007d1e
#define str_10007d1e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e6U)))
#undef str_10007d34
#define str_10007d34 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5fcU)))
#undef str_10007d6e
#define str_10007d6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x636U)))
#undef str_10007d84
#define str_10007d84 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x64cU)))
#undef str_10007d9c
#define str_10007d9c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x664U)))
#undef str_10007db8
#define str_10007db8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x680U)))
#undef str_10007dc1
#define str_10007dc1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x689U)))
#undef str_10007de2
#define str_10007de2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6aaU)))
#undef str_10007def
#define str_10007def (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6b7U)))
#define pcStack_820 (*(char * *)(pf_stack_frame + 16))
#define auStack_818 (*(undefined1 (*)[2072])(pf_stack_frame + 24))
#define auStack_7f8 (*(undefined1 (*)[2040])(pf_stack_frame + 56))
#define auStack_7d8 (*(undefined1 (*)[2008])(pf_stack_frame + 88))
#define auStack_7b8 (*(undefined1 (*)[1976])(pf_stack_frame + 120))
#define auStack_798 (*(undefined1 (*)[1944])(pf_stack_frame + 152))
#define auStack_778 (*(undefined1 (*)[1912])(pf_stack_frame + 184))
#define auStack_758 (*(undefined1 (*)[1880])(pf_stack_frame + 216))
#define uStack_738 (*(ulong *)(pf_stack_frame + 248))
#define uStack_730 (*(undefined1 *)(pf_stack_frame + 256))
#define uStack_72f (*(undefined1 *)(pf_stack_frame + 257))
#define uStack_72e (*(undefined1 *)(pf_stack_frame + 258))
#define uStack_72d (*(undefined1 *)(pf_stack_frame + 259))
#define uStack_72c (*(undefined2 *)(pf_stack_frame + 260))
#define auStack_72a (*(undefined1 (*)[1834])(pf_stack_frame + 262))
#define uStack_70a (*(undefined4 *)(pf_stack_frame + 294))
#define uStack_706 (*(undefined2 *)(pf_stack_frame + 298))
#define uStack_704 (*(undefined1 *)(pf_stack_frame + 300))
#define uStack_703 (*(ushort *)(pf_stack_frame + 301))
#define auStack_701 (*(undefined1 (*)[1793])(pf_stack_frame + 303))
#define auStack_530 (*(undefined1 (*)[1328])(pf_stack_frame + 768))
#define auStack_510 (*(undefined1 (*)[1296])(pf_stack_frame + 800))
#define auStack_4f0 (*(undefined1 (*)[1264])(pf_stack_frame + 832))
#define auStack_4d0 (*(undefined1 (*)[1232])(pf_stack_frame + 864))
#define uStack_4b0 (*(undefined4 *)(pf_stack_frame + 896))
#define uStack_4ac (*(undefined2 *)(pf_stack_frame + 900))
#define auStack_4aa (*(undefined1 (*)[1194])(pf_stack_frame + 902))
#define uStack_3b0 (*(undefined8 *)(pf_stack_frame + 1152))
#define auStack_1a8 (*(undefined1 (*)[424])(pf_stack_frame + 1672))
#define auStack_188 (*(undefined1 (*)[392])(pf_stack_frame + 1704))
#define auStack_168 (*(undefined1 (*)[360])(pf_stack_frame + 1736))
#define auStack_148 (*(undefined1 (*)[328])(pf_stack_frame + 1768))
#define auStack_128 (*(undefined1 (*)[296])(pf_stack_frame + 1800))
#define auStack_108 (*(undefined1 (*)[264])(pf_stack_frame + 1832))
#define auStack_e8 (*(undefined1 (*)[232])(pf_stack_frame + 1864))
#define abStack_c8 (*(byte (*)[200])(pf_stack_frame + 1896))
#define auStack_a8 (*(ulong (*)[21])(pf_stack_frame + 1928))
#define auStack_88 (*(undefined1 (*)[136])(pf_stack_frame + 1960))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d54
 */

int recovered_10004d54(void *context,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[2128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *data;
  void *source;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;

  uStack_738 = 0;
  if ((((context == (void *)0x0) || (*(long *)((long)context + 8) == 0)) ||
      (*(long *)((long)context + 0x10) == 0)) ||
     (pcVar14 = (char *)((long)context + 0x28), *pcVar14 == '\0')) {
    pcVar14 = str_10007b89;
    goto LAB_10004ed4;
  }
  auStack_a8[0] = 0;
  uVar9 = recovered_100018b8(pcVar14);
  if (0xffffffffffffff4b < uVar9 - 0xb5) {
    recovered_10006528(context,auStack_88);
    recovered_10006528(context,auStack_4d0);
    recovered_10005970(auStack_4f0,auStack_4d0,str_1000788f + 0x11);
    recovered_100015c8(&uStack_3b0,0,0x200);
    recovered_100015c8(&uStack_4b0,0,0x100);
    iVar8 = (int)uVar9 + 3;
    uStack_4b0 = (uint)CONCAT11((char)iVar8,(char)((uint)iVar8 >> 8));
    uStack_4ac = CONCAT11(PF_PART1(uStack_4ac, 1),(char)uVar9);
    recovered_100013dc((void *)((long)&uStack_4ac + 1),pcVar14,uVar9);
    uVar10 = recovered_100065cc((long)&uStack_3b0,(long *)auStack_a8,0,&uStack_4b0,
                                (int)uVar9 + 5U & 0xffff);
    if ((int)uVar10 != 0) {
      uStack_4b0 = CONCAT13(PF_PART1(uStack_4b0, 3),0x40302);
      uVar10 = recovered_100065cc((long)&uStack_3b0,(long *)auStack_a8,0x2b,&uStack_4b0,3);
      if ((int)uVar10 != 0) {
        uStack_4b0 = (uint)DAT_10007840;
        uVar10 = recovered_100065cc((long)&uStack_3b0,(long *)auStack_a8,10,&uStack_4b0,4);
        if ((int)uVar10 != 0) {
          uStack_4b0 = CONCAT22(PF_PART2(uStack_4b0, 2),0xc00);
          for (lVar11 = 0; lVar11 != 0xc; lVar11 = lVar11 + 2) {
            *(ushort *)(auStack_4d0 + lVar11 + 0x22) =
                 *(ushort *)((long)&DAT_100078c0 + lVar11) >> 8 |
                 *(ushort *)((long)&DAT_100078c0 + lVar11) << 8;
          }
          uVar9 = recovered_100065cc((long)&uStack_3b0,(long *)auStack_a8,0xd,&uStack_4b0,0xe);
          if ((uVar9 & 1) != 0) {
            uStack_4b0 = (uint)DAT_10007848;
            uStack_4ac = 0x2000;
            recovered_100013dc(auStack_4aa,auStack_4f0,0x20);
            uVar9 = recovered_100065cc((long)&uStack_3b0,(long *)auStack_a8,0x33,&uStack_4b0,0x26);
            if ((uVar9 & 1) != 0) {
              uStack_730 = 1;
              uStack_72c = 0x303;
              recovered_100013dc(auStack_72a,auStack_88,0x20);
              uStack_70a = (undefined4)DAT_10007850;
              uStack_706 = 0x103;
              uStack_704 = 0;
              uStack_703 = (ushort)(auStack_a8[0] >> 8) & 0xff |
                           (ushort)(((uint)auStack_a8[0] & 0xff00ff) << 8);
              recovered_100013dc(auStack_701,&uStack_3b0,auStack_a8[0]);
              uVar13 = auStack_a8[0];
              iVar8 = (int)auStack_a8[0] + 0x2b;
              uStack_72f = (undefined1)((uint)iVar8 >> 0x10);
              uStack_72e = (undefined1)((uint)iVar8 >> 8);
              uStack_72d = (undefined1)iVar8;
              uVar9 = auStack_a8[0] + 0x2f;
              recovered_100056ac((undefined8 *)((long)context + 0xa8));
              recovered_100056d0((void *)((long)context + 0xa8),&uStack_730,uVar9);
              uVar16 = uStack_3b0;
              if (0x205 < uVar13 + 0x34) {
                return 0;
              }
              PF_PART3(uStack_3b0, 5) = SUB83(uVar16,5);
              PF_PART5(uStack_3b0, 0) = CONCAT14((char)uVar9,CONCAT13((char)(uVar9 >> 8),0x10316));
              recovered_100013dc((void *)((long)&uStack_3b0 + 5),&uStack_730,uVar9);
              uVar10 = recovered_10006670(context,(long)&uStack_3b0,uVar13 + 0x34,error,capacity);
              if ((int)uVar10 == 0) {
                return 0;
              }
              data = (char *)recovered_100058dc(0x4100);
              if (data != (char *)0x0) {
                uStack_3b0 = uStack_3b0 & 0xffffffffffffff00;
                uVar10 = recovered_100061a8(context,(void *)0x0,(byte *)&uStack_3b0,(long)data,
                                            0x4100,&uStack_738,error,capacity);
                if ((int)uVar10 == 0) goto LAB_100050e0;
                if ((byte)uStack_3b0 == 0x16) {
                  if ((uStack_738 < 4) || (*data != '\x02')) {
                    pcVar15 = str_10007c57;
                  }
                  else {
                    uVar5 = (uint)(byte)data[1] << 0x10 | (uint)(byte)data[2] << 8 |
                            (uint)(byte)data[3];
                    if (uVar5 < 0x26 || uStack_738 < uVar5 + 4) {
                      pcVar15 = str_10007c70;
                    }
                    else if ((data[4] == '\x03') && (data[5] == '\x03')) {
                      uVar9 = (ulong)(byte)data[0x26];
                      if (uStack_738 < uVar9 + 0x2b) {
                        pcVar15 = str_10007ca6;
                      }
                      else if ((ushort)(*(ushort *)(data + uVar9 + 0x27) >> 8 |
                                       *(ushort *)(data + uVar9 + 0x27) << 8) == 0x1303) {
                        if ((data[uVar9 + 0x29] == '\0') &&
                           (uVar16 = uVar9 + 0x2c, uVar16 <= uStack_738)) {
                          uVar9 = ((uint)(*(ushort *)(data + uVar9 + 0x2a) >> 8) |
                                  (*(ushort *)(data + uVar9 + 0x2a) & 0xff00ff) << 8) + uVar16;
                          if (uStack_738 < uVar9) {
                            pcVar15 = str_10007d05;
                          }
                          else {
                            bVar7 = false;
                            bVar6 = 0;
                            pcVar15 = str_10007d1e;
                            while (uVar13 = uVar16 + 4, uVar13 <= uVar9) {
                              puVar2 = (ushort *)(data + uVar16);
                              uVar4 = puVar2[1];
                              uVar5 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
                              uVar16 = uVar13 + uVar5;
                              if (uVar9 < uVar16) goto LAB_100050dc;
                              uVar4 = *puVar2;
                              uVar4 = uVar4 >> 8 | uVar4 << 8;
                              if (uVar4 == 0x2b && 1 < uVar5) {
                                bVar7 = (ushort)(*(ushort *)(data + uVar13) >> 8 |
                                                *(ushort *)(data + uVar13) << 8) == 0x304;
                              }
                              else if ((((uVar4 == 0x33) && (0x23 < uVar5)) &&
                                       (puVar2 = (ushort *)(data + uVar13),
                                       (ushort)(*puVar2 >> 8 | *puVar2 << 8) == 0x1d)) &&
                                      ((ushort)(puVar2[1] >> 8 | puVar2[1] << 8) == 0x20)) {
                                recovered_100013dc(auStack_510,puVar2 + 2,0x20);
                                bVar6 = 1;
                              }
                            }
                            if ((bool)(bVar7 & bVar6)) {
                              recovered_100056d0((void *)((long)context + 0xa8),data,uStack_738);
                              recovered_10005928(data);
                              recovered_10005970(auStack_530,auStack_4d0,auStack_510);
                              recovered_100015c8(auStack_758,0,0x20);
                              recovered_10005de8(auStack_758,auStack_758,auStack_778);
                              recovered_10005e2c(auStack_778,str_10007bc1,(void *)0x0,auStack_798);
                              recovered_10005de8(auStack_798,auStack_530,auStack_7b8);
                              recovered_10005e88((long)context,auStack_7d8);
                              recovered_10005e2c(auStack_7b8,str_10007bc9,auStack_7d8,auStack_7f8);
                              recovered_10005e2c(auStack_7b8,str_10007bd6,auStack_7d8,auStack_818);
                              recovered_10005ec8((void *)((long)context + 0x118),auStack_7f8);
                              recovered_10005ec8((void *)((long)context + 0x150),auStack_818);
                              *(undefined1 *)((long)context + 0x21c) = 1;
                              source = (void *)recovered_100058dc(0x4100);
                              data = (char *)recovered_100058dc(0x8000);
                              if ((source != (void *)0x0) && (data != (char *)0x0)) {
                                bVar7 = false;
                                uVar9 = 0;
                                pcStack_820 = str_10007d6e;
                                while( true ) {
                                  if (bVar7) {
                                    recovered_10005e88((long)context,abStack_c8);
                                    recovered_10005e2c(auStack_7b8,str_10007bc1,(void *)0x0,
                                                       auStack_e8);
                                    recovered_100015c8(auStack_168,0,0x20);
                                    recovered_10005de8(auStack_e8,auStack_168,auStack_108);
                                    recovered_10005e2c(auStack_108,str_10007de2,abStack_c8,
                                                       auStack_128);
                                    recovered_10005e2c(auStack_108,str_10007def,abStack_c8,
                                                       auStack_148);
                                    recovered_10005ec8((void *)((long)context + 0x188),auStack_128);
                                    recovered_10005ec8((void *)((long)context + 0x1c0),auStack_148);
                                    *(undefined1 *)((long)context + 0x21d) = 1;
                                    uStack_3b0 = CONCAT44(PF_PART4(uStack_3b0, 4),(int)DAT_10007858);
                                    recovered_10005e88((long)context,auStack_188);
                                    recovered_10006c14(auStack_7f8,str_10007db8,(void *)0x0,0,
                                                       auStack_1a8,0x20);
                                    recovered_100069e4(auStack_1a8,auStack_188,
                                                       (void *)((long)&uStack_3b0 + 4));
                                    uVar10 = recovered_10005f94(context,(void *)((long)context +
                                                                                0x118),0x16,
                                                                &uStack_3b0,0x24,error,capacity);
                                    if ((int)uVar10 != 0) {
                                      recovered_100056d0((void *)((long)context + 0xa8),&uStack_3b0,
                                                         0x24);
                                    }
                                    recovered_10005928(source);
                                    recovered_10005928(data);
                                    if ((int)uVar10 == 0) {
                                      return 0;
                                    }
                                    if ((*(code **)((long)context + 0x20) == (code *)0x0) ||
                                       (iVar8 = (**(code **)((long)context + 0x20))
                                                          (*(undefined8 *)context,pcVar14,
                                                           (long)context + 0x1f8,
                                                           *(undefined1 *)((long)context + 0x21e),
                                                           error,capacity), iVar8 != 0)) {
                                      return 1;
                                    }
                                    return 0;
                                  }
                                  abStack_c8[0] = 0;
                                  uStack_3b0 = 0;
                                  uVar10 = recovered_100061a8(context,(void *)((long)context + 0x150
                                                                              ),abStack_c8,
                                                              (long)source,0x4100,&uStack_3b0,error,
                                                              capacity);
                                  if ((int)uVar10 == 0) break;
                                  if (abStack_c8[0] == 0x16) {
                                    if (0x8000 - uVar9 < uStack_3b0) {
                                      pcStack_820 = str_10007d84;
                                      goto LAB_10005694;
                                    }
                                    recovered_100013dc(data + uVar9,source,uStack_3b0);
                                    uVar9 = uStack_3b0 + uVar9;
                                    for (lVar11 = 0; lVar11 + 4U <= uVar9;
                                        lVar11 = uVar16 + 4 + lVar11) {
                                      pcVar15 = data + lVar11;
                                      uVar5 = (uint)(byte)pcVar15[1] << 0x10 |
                                              (uint)(byte)pcVar15[2] << 8 | (uint)(byte)pcVar15[3];
                                      uVar16 = (ulong)uVar5;
                                      if (uVar9 < lVar11 + 4U + uVar16) break;
                                      if (*pcVar15 == '\x14') {
                                        if (uVar5 != 0x20) {
                                          pcStack_820 = str_10007d9c;
                                          goto LAB_10005694;
                                        }
                                        recovered_10005e88((long)context,&uStack_4b0);
                                        recovered_10006c14(auStack_818,str_10007db8,(void *)0x0,0,
                                                           auStack_88,0x20);
                                        recovered_100069e4(auStack_88,&uStack_4b0,auStack_a8);
                                        bVar7 = recovered_10006de0((byte *)auStack_a8,
                                                                   (byte *)(pcVar15 + 4),0x20);
                                        if (!bVar7) {
                                          pcStack_820 = str_10007dc1;
                                          goto LAB_10005694;
                                        }
                                        recovered_100056d0((void *)((long)context + 0xa8),pcVar15,
                                                           0x24);
                                        lVar11 = lVar11 + 0x24;
                                        bVar7 = true;
                                        goto LAB_100054f0;
                                      }
                                      if (*pcVar15 == '\v' && 6 < uVar5) {
                                        pbVar12 = (byte *)(pcVar15 + 4);
                                        uVar13 = (ulong)*pbVar12;
                                        if ((uVar13 + 4 <= uVar16) &&
                                           (uVar1 = uVar13 + 7,
                                           ((pbVar12[uVar13 + 1] != 0 || pbVar12[uVar13 + 2] != 0)
                                           || pbVar12[uVar13 + 3] != 0) && uVar1 <= uVar16)) {
                                          pbVar3 = pbVar12 + uVar13 + 4;
                                          uVar5 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 |
                                                  (uint)pbVar3[2];
                                          if (uVar5 != 0 && uVar1 + uVar5 <= uVar16) {
                                            recovered_10006bc0(pbVar12 + uVar1,(ulong)uVar5,
                                                               (void *)((long)context + 0x1f8));
                                            *(undefined1 *)((long)context + 0x21e) = 1;
                                          }
                                        }
                                      }
                                      recovered_100056d0((void *)((long)context + 0xa8),pcVar15,
                                                         uVar16 + 4);
                                    }
                                    bVar7 = false;
LAB_100054f0:
                                    if ((lVar11 != 0) && (uVar9 = uVar9 - lVar11, uVar9 != 0)) {
                                      recovered_100014b4(data,data + lVar11,uVar9);
                                    }
                                  }
                                  else {
                                    if (abStack_c8[0] == 0x15) {
LAB_10005694:
                                      recovered_10002bbc(error,capacity,pcStack_820);
                                      break;
                                    }
                                    bVar7 = false;
                                  }
                                }
                                recovered_10005928(source);
                                goto LAB_100050e0;
                              }
                              if (source != (void *)0x0) {
                                recovered_10005928(source);
                              }
                              if (data != (char *)0x0) {
                                recovered_10005928(data);
                              }
                              goto LAB_1000552c;
                            }
                            pcVar15 = str_10007d34;
                          }
                        }
                        else {
                          pcVar15 = str_10007cec;
                        }
                      }
                      else {
                        pcVar15 = str_10007cc0;
                      }
                    }
                    else {
                      pcVar15 = str_10007c8a;
                    }
                  }
                }
                else {
                  pcVar15 = str_10007c39;
                }
LAB_100050dc:
                recovered_10002bbc(error,capacity,pcVar15);
LAB_100050e0:
                recovered_10005928(data);
                return 0;
              }
LAB_1000552c:
              pcVar14 = str_10007aef;
              goto LAB_10004ed4;
            }
          }
        }
      }
    }
  }
  pcVar14 = str_10007ba4;
LAB_10004ed4:
  recovered_10002bbc(error,capacity,pcVar14);
  return 0;
}

#undef DAT_10007840
#undef DAT_10007848
#undef DAT_10007850
#undef DAT_10007858
#undef DAT_100078c0
#undef str_1000788f
#undef str_10007aef
#undef str_10007b89
#undef str_10007ba4
#undef str_10007bc1
#undef str_10007bc9
#undef str_10007bd6
#undef str_10007c39
#undef str_10007c57
#undef str_10007c70
#undef str_10007c8a
#undef str_10007ca6
#undef str_10007cc0
#undef str_10007cec
#undef str_10007d05
#undef str_10007d1e
#undef str_10007d34
#undef str_10007d6e
#undef str_10007d84
#undef str_10007d9c
#undef str_10007db8
#undef str_10007dc1
#undef str_10007de2
#undef str_10007def
#undef pcStack_820
#undef auStack_818
#undef auStack_7f8
#undef auStack_7d8
#undef auStack_7b8
#undef auStack_798
#undef auStack_778
#undef auStack_758
#undef uStack_738
#undef uStack_730
#undef uStack_72f
#undef uStack_72e
#undef uStack_72d
#undef uStack_72c
#undef auStack_72a
#undef uStack_70a
#undef uStack_706
#undef uStack_704
#undef uStack_703
#undef auStack_701
#undef auStack_530
#undef auStack_510
#undef auStack_4f0
#undef auStack_4d0
#undef uStack_4b0
#undef uStack_4ac
#undef auStack_4aa
#undef uStack_3b0
#undef auStack_1a8
#undef auStack_188
#undef auStack_168
#undef auStack_148
#undef auStack_128
#undef auStack_108
#undef auStack_e8
#undef abStack_c8
#undef auStack_a8
#undef auStack_88

#undef DAT_10007870
#define DAT_10007870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef DAT_10007880
#define DAT_10007880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef UNK_10007878
#define UNK_10007878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10007888
#define UNK_10007888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef _DAT_10007870
#define _DAT_10007870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef _DAT_10007880
#define _DAT_10007880 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef uRam0000000010007878
#define uRam0000000010007878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef uRam0000000010007888
#define uRam0000000010007888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x150U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100056ac(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;

  uVar3 = uRam0000000010007888;
  uVar2 = _DAT_10007880;
  uVar1 = _DAT_10007870;
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = uRam0000000010007878;
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  return;
}

#undef DAT_10007870
#undef DAT_10007880
#undef UNK_10007878
#undef UNK_10007888
#undef _DAT_10007870
#undef _DAT_10007880
#undef uRam0000000010007878
#undef uRam0000000010007888

#define auStack_168 (*(uint (*)[90])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056d0
 */

void recovered_100056d0(void *context,void *data,ulong size)

{
  unsigned char pf_stack_frame[416] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong count;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;

  if ((context != (void *)0x0) && ((data != (void *)0x0 || (size == 0)))) {
    *(ulong *)((long)context + 0x20) = *(long *)((long)context + 0x20) + size;
    while (size != 0) {
      uVar11 = (ulong)(0x40 - *(uint *)((long)context + 0x68));
      count = size;
      if (uVar11 <= size) {
        count = uVar11;
      }
      recovered_100013dc((void *)((long)context + (ulong)*(uint *)((long)context + 0x68) + 0x28),
                         data,count);
      iVar1 = *(int *)((long)context + 0x68) + (int)count;
      *(int *)((long)context + 0x68) = iVar1;
      data = (void *)((long)data + count);
      size = size - count;
      if (iVar1 == 0x40) {
        for (lVar10 = 0; lVar10 != 0x40; lVar10 = lVar10 + 4) {
          uVar2 = *(uint *)((long)context + lVar10 + 0x28);
          uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          *(uint *)((long)auStack_168 + lVar10) = uVar2 >> 0x10 | uVar2 << 0x10;
        }
        for (lVar10 = 0; lVar10 != 0xc0; lVar10 = lVar10 + 4) {
          uVar2 = *(uint *)((long)auStack_168 + lVar10 + 4);
          uVar3 = *(uint *)((long)auStack_168 + lVar10 + 0x38);
          *(uint *)((long)auStack_168 + lVar10 + 0x40) =
               ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3) +
               *(int *)((long)auStack_168 + lVar10) + *(int *)((long)auStack_168 + lVar10 + 0x24) +
               ((uVar3 >> 0x11 | uVar3 << 0xf) ^ (uVar3 >> 0x13 | uVar3 << 0xd) ^ uVar3 >> 10);
        }
        uVar3 = *(uint *)context;
        uVar9 = *(uint *)((long)context + 4);
        uVar8 = *(uint *)((long)context + 8);
        uVar4 = *(uint *)((long)context + 0xc);
        uVar2 = *(uint *)((long)context + 0x10);
        uVar6 = *(uint *)((long)context + 0x14);
        uVar13 = *(uint *)((long)context + 0x18);
        uVar5 = *(uint *)((long)context + 0x1c);
        for (lVar10 = 0; uVar12 = uVar13, uVar13 = uVar6, uVar6 = uVar2, uVar7 = uVar8,
            uVar8 = uVar9, uVar9 = uVar3, lVar10 != 0x100; lVar10 = lVar10 + 4) {
          iVar1 = (uVar6 & uVar13 | uVar12 & (uVar6 ^ 0xffffffff)) + uVar5 +
                  ((uVar6 >> 6 | uVar6 << 0x1a) ^ (uVar6 >> 0xb | uVar6 << 0x15) ^
                  (uVar6 >> 0x19 | uVar6 << 7)) +
                  *(int *)(lVar10 + ((uintptr_t)pf_module_state+0x194U)) + *(int *)((long)auStack_168 + lVar10);
          uVar2 = iVar1 + uVar4;
          uVar3 = ((uVar9 >> 2 | uVar9 << 0x1e) ^ (uVar9 >> 0xd | uVar9 << 0x13) ^
                  (uVar9 >> 0x16 | uVar9 << 10)) + (uVar9 & (uVar8 ^ uVar7) ^ uVar8 & uVar7) + iVar1
          ;
          uVar4 = uVar7;
          uVar5 = uVar12;
        }
        *(uint *)context = uVar9 + *(uint *)context;
        *(uint *)((long)context + 4) = uVar8 + *(uint *)((long)context + 4);
        *(uint *)((long)context + 8) = uVar7 + *(uint *)((long)context + 8);
        *(uint *)((long)context + 0xc) = uVar4 + *(uint *)((long)context + 0xc);
        *(uint *)((long)context + 0x10) = uVar6 + *(uint *)((long)context + 0x10);
        *(uint *)((long)context + 0x14) = uVar13 + *(uint *)((long)context + 0x14);
        *(uint *)((long)context + 0x18) = uVar12 + *(uint *)((long)context + 0x18);
        *(uint *)((long)context + 0x1c) = uVar5 + *(uint *)((long)context + 0x1c);
        *(undefined4 *)((long)context + 0x68) = 0;
      }
    }
  }
  return;
}

#undef auStack_168

#undef DAT_8201084c
#define DAT_8201084c (*(uint8_t *)(0x8201084cU))
#undef _DAT_8201084c
#define _DAT_8201084c (*(uint *)(0x8201084cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100058dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100058dc(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100064dc(0x4c);
  if ((bVar1) && (_DAT_8201084c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201084c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201084c
#undef _DAT_8201084c

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005928
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005928(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_100064dc(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10005960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#define auStack_5bc (*(uint (*)[367])(pf_stack_frame + 20))
#define auStack_578 (*(uint (*)[350])(pf_stack_frame + 88))
#define auStack_534 (*(uint (*)[333])(pf_stack_frame + 156))
#define auStack_4f0 (*(uint (*)[316])(pf_stack_frame + 224))
#define auStack_4ac (*(uint (*)[299])(pf_stack_frame + 292))
#define auStack_468 (*(uint (*)[282])(pf_stack_frame + 360))
#define auStack_424 (*(uint (*)[265])(pf_stack_frame + 428))
#define auStack_3e0 (*(uint (*)[248])(pf_stack_frame + 496))
#define auStack_39c (*(uint (*)[231])(pf_stack_frame + 564))
#define auStack_358 (*(uint (*)[214])(pf_stack_frame + 632))
#define auStack_314 (*(uint (*)[197])(pf_stack_frame + 700))
#define auStack_2d0 (*(ulong (*)[90])(pf_stack_frame + 768))
#define auStack_28c (*(uint (*)[163])(pf_stack_frame + 836))
#define auStack_248 (*(ulong (*)[73])(pf_stack_frame + 904))
#define auStack_204 (*(ulong (*)[64])(pf_stack_frame + 972))
#define auStack_1c0 (*(uint (*)[112])(pf_stack_frame + 1040))
#define abStack_17c (*(byte (*)[380])(pf_stack_frame + 1108))
#define bStack_15d (*(byte *)(pf_stack_frame + 1139))
#define auStack_15c (*(undefined1 (*)[348])(pf_stack_frame + 1140))
#define abStack_118 (*(byte (*)[280])(pf_stack_frame + 1208))
#define uStack_f9 (*(undefined1 *)(pf_stack_frame + 1239))
#define auStack_f8 (*(ulong (*)[31])(pf_stack_frame + 1240))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005970
 */

void recovered_10005970(void *output,void *scalar,void *point)

{
  unsigned char pf_stack_frame[1520] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;

  if (((output != (void *)0x0) && (scalar != (void *)0x0)) && (point != (void *)0x0)) {
    recovered_100013dc(abStack_17c,scalar,0x20);
    abStack_17c[0] = abStack_17c[0] & 0xf8;
    bStack_15d = bStack_15d & 0x3f | 0x40;
    recovered_100015c8(auStack_1c0,0,0x44);
    iVar2 = 0;
    for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
      uVar5 = 0;
      for (uVar6 = 0; uVar6 != 0xf; uVar6 = uVar6 + 1) {
        uVar5 = -(*(byte *)((long)point + (ulong)(iVar2 + uVar6 >> 3)) >> (ulong)(iVar2 + uVar6 & 7)
                 & 1) & 1 << (ulong)(uVar6 & 0x1f) | uVar5;
      }
      auStack_1c0[lVar3] = uVar5;
      iVar2 = iVar2 + 0xf;
    }
    recovered_10006918(auStack_1c0);
    recovered_100066a8(auStack_204);
    recovered_100066d4(auStack_248);
    recovered_100013dc(auStack_28c,auStack_1c0,0x44);
    recovered_100066a8(auStack_2d0);
    uVar8 = 0xfe;
    uVar6 = 0;
    do {
      uVar5 = abStack_17c[uVar8 >> 3] >> (ulong)((uint)uVar8 & 7) & 1;
      recovered_100066e8((long)auStack_204,(long)auStack_28c,uVar5 ^ uVar6);
      recovered_100066e8((long)auStack_248,(long)auStack_2d0,uVar5 ^ uVar6);
      recovered_10006730(auStack_314,(long)auStack_204,(long)auStack_248);
      recovered_10006768(auStack_358,(long)auStack_314);
      recovered_10006770(auStack_39c,(long)auStack_204,(long)auStack_248);
      recovered_10006768(auStack_3e0,(long)auStack_39c);
      recovered_10006770(auStack_424,(long)auStack_358,(long)auStack_3e0);
      recovered_10006730(auStack_468,(long)auStack_28c,(long)auStack_2d0);
      recovered_10006770(auStack_4ac,(long)auStack_28c,(long)auStack_2d0);
      recovered_100067b8(auStack_4f0,(long)auStack_4ac,(long)auStack_314);
      recovered_100067b8(auStack_534,(long)auStack_468,(long)auStack_39c);
      recovered_10006730(auStack_578,(long)auStack_4f0,(long)auStack_534);
      recovered_10006768(auStack_28c,(long)auStack_578);
      recovered_10006770(auStack_578,(long)auStack_4f0,(long)auStack_534);
      recovered_10006768(auStack_5bc,(long)auStack_578);
      recovered_100067b8((uint *)auStack_2d0,(long)auStack_1c0,(long)auStack_5bc);
      recovered_100067b8((uint *)auStack_204,(long)auStack_358,(long)auStack_3e0);
      recovered_100015c8(auStack_f8,0,0x90);
      for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
        auStack_f8[lVar3] = (ulong)auStack_424[lVar3] * 0x1db41;
      }
      for (iVar2 = 0; iVar2 != 4; iVar2 = iVar2 + 1) {
        for (lVar3 = 0; lVar3 != 0x88; lVar3 = lVar3 + 8) {
          uVar4 = *(ulong *)((long)auStack_f8 + lVar3) >> 0xf;
          *(ulong *)((long)auStack_f8 + lVar3) = *(ulong *)((long)auStack_f8 + lVar3) & 0x7fff;
          if (lVar3 == 0x80) {
            auStack_f8[0] = auStack_f8[0] + uVar4 * 0x13;
          }
          else {
            *(ulong *)((long)auStack_f8 + lVar3 + 8) =
                 *(long *)((long)auStack_f8 + lVar3 + 8) + uVar4;
          }
        }
      }
      for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
        auStack_578[lVar3] = (uint)auStack_f8[lVar3];
      }
      recovered_10006918(auStack_578);
      recovered_10006730(auStack_578,(long)auStack_358,(long)auStack_578);
      recovered_100067b8((uint *)auStack_248,(long)auStack_424,(long)auStack_578);
      uVar7 = (uint)uVar8 - 1;
      uVar8 = (ulong)uVar7;
      uVar6 = uVar5;
    } while (-1 < (int)uVar7);
    recovered_100066e8((long)auStack_204,(long)auStack_28c,uVar5);
    recovered_100066e8((long)auStack_248,(long)auStack_2d0,uVar5);
    recovered_100015c8(abStack_118,0xff,0x20);
    abStack_118[0] = 0xeb;
    uStack_f9 = 0x7f;
    recovered_100066a8(auStack_f8);
    recovered_100013dc(auStack_15c,auStack_248,0x44);
    uVar8 = 0xfe;
    do {
      recovered_10006768((uint *)auStack_f8,(long)auStack_f8);
      if ((abStack_118[uVar8 >> 3] >> (ulong)((uint)uVar8 & 7) & 1) != 0) {
        recovered_100067b8((uint *)auStack_f8,(long)auStack_f8,(long)auStack_15c);
      }
      uVar6 = (uint)uVar8 - 1;
      uVar8 = (ulong)uVar6;
    } while (-1 < (int)uVar6);
    recovered_100013dc(auStack_248,auStack_f8,0x44);
    recovered_100067b8((uint *)auStack_204,(long)auStack_204,(long)auStack_248);
    recovered_100013dc(auStack_f8,auStack_204,0x44);
    recovered_10006918((uint *)auStack_f8);
    recovered_100015c8(output,0,0x20);
    uVar6 = 0;
    for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
      uVar1 = *(uint *)((long)auStack_f8 + lVar3 * 4);
      uVar7 = uVar6;
      for (uVar5 = 0; uVar5 != 0xf; uVar5 = uVar5 + 1) {
        if ((uVar1 >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
          *(byte *)((long)output + (ulong)(uVar7 >> 3)) =
               *(byte *)((long)output + (ulong)(uVar7 >> 3)) | (byte)(1 << (ulong)(uVar7 & 7));
        }
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar6 + 0xf;
    }
  }
  return;
}

#undef auStack_5bc
#undef auStack_578
#undef auStack_534
#undef auStack_4f0
#undef auStack_4ac
#undef auStack_468
#undef auStack_424
#undef auStack_3e0
#undef auStack_39c
#undef auStack_358
#undef auStack_314
#undef auStack_2d0
#undef auStack_28c
#undef auStack_248
#undef auStack_204
#undef auStack_1c0
#undef abStack_17c
#undef bStack_15d
#undef auStack_15c
#undef abStack_118
#undef uStack_f9
#undef auStack_f8

#define auStack_50 (*(undefined1 (*)[80])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005de8
 */

void recovered_10005de8(void *salt,void *input,void *output)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};


  if (salt == (void *)0x0) {
    recovered_100015c8(auStack_50,0,0x20);
    salt = auStack_50;
  }
  recovered_100069e4(salt,input,output);
  return;
}

#undef auStack_50

#undef DAT_10007a6a
#define DAT_10007a6a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x332U)))
#define auStack_50 (*(undefined1 (*)[80])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e2c
 */

void recovered_10005e2c(void *secret,char *label,void *hash,void *output)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};


  if (hash == (void *)0x0) {
    recovered_10006bc0(&DAT_10007a6a,0,auStack_50);
    hash = auStack_50;
  }
  recovered_10006c14(secret,label,hash,0x20,output,0x20);
  return;
}

#undef DAT_10007a6a
#undef auStack_50

#define auStack_90 (*(undefined1 (*)[144])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005e88
 */

void recovered_10005e88(long param_1,void *param_2)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  if (param_2 != (void *)0x0) {
    recovered_100013dc(auStack_90,(void *)(param_1 + 0xa8),0x70);
    recovered_10006b10(auStack_90,param_2);
  }
  return;
}

#undef auStack_90

#undef DAT_10007d67
#define DAT_10007d67 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x62fU)))
#undef DAT_10007d6b
#define DAT_10007d6b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x633U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ec8
 */

void recovered_10005ec8(void *output,void *secret)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((output != (void *)0x0) && (secret != (void *)0x0)) {
    recovered_100015c8(output,0,0x38);
    recovered_10006c14(secret,&DAT_10007d67,(void *)0x0,0,output,0x20);
    recovered_10006c14(secret,&DAT_10007d6b,(void *)0x0,0,(void *)((long)output + 0x20),0xc);
    *(undefined8 *)((long)output + 0x30) = 0;
  }
  return;
}

#undef DAT_10007d67
#undef DAT_10007d6b

#undef str_10007aef
#define str_10007aef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_10007be3
#define str_10007be3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4abU)))
#define auStack_7c (*(undefined1 (*)[124])(pf_stack_frame + 20))
#define auStack_6c (*(undefined1 (*)[108])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f38
 */

int recovered_10005f38(void *context,void *data,ulong size,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *key;
  ulong size_00;
  void *destination;
  undefined2 *associated;
  undefined8 uVar2;

  if (((context == (void *)0x0) || (*(char *)((long)context + 0x21d) != '\x01')) ||
     ((data == (void *)0x0 && (size != 0)))) {
    recovered_10002bbc(error,capacity,str_10007be3);
    return 0;
  }
  key = (void *)((long)context + 0x188);
  if ((key != (void *)0x0) && ((data != (void *)0x0 || (size == 0)))) {
    associated = (undefined2 *)recovered_100058dc(size + 0x16);
    if (associated != (undefined2 *)0x0) {
      size_00 = size + 1;
      *associated = 0x317;
      *(undefined1 *)(associated + 1) = 3;
      iVar1 = (int)size + 0x11;
      *(char *)((long)associated + 3) = (char)((uint)iVar1 >> 8);
      *(char *)(associated + 2) = (char)iVar1;
      destination = (void *)((long)associated + 5);
      if (size != 0) {
        recovered_100013dc(destination,data,size);
      }
      *(undefined1 *)((long)destination + size) = 0x17;
      recovered_10006e1c((long)key,auStack_6c);
      recovered_10006e7c(key,auStack_6c,(long)destination,(long)destination,size_00);
      recovered_10006f38(key,auStack_6c,associated,destination,size_00,auStack_7c);
      recovered_100013dc((void *)((long)destination + size_00),auStack_7c,0x10);
      *(long *)((long)context + 0x1b8) = *(long *)((long)context + 0x1b8) + 1;
      uVar2 = recovered_10006670(context,(long)associated,size + 0x16,error,capacity);
      recovered_10005928(associated);
      return (int)uVar2;
    }
    recovered_10002bbc(error,capacity,str_10007aef);
  }
  return 0;
}

#undef str_10007aef
#undef str_10007be3
#undef auStack_7c
#undef auStack_6c

#undef str_10007aef
#define str_10007aef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#define auStack_7c (*(undefined1 (*)[124])(pf_stack_frame + 20))
#define auStack_6c (*(undefined1 (*)[108])(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f94
 */

undefined8
recovered_10005f94(undefined8 *param_1,void *param_2,undefined1 param_3,void *param_4,ulong param_5,
                  char *param_6,ulong param_7)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong size;
  void *destination;
  undefined2 *associated;
  undefined8 uVar2;

  if ((param_2 != (void *)0x0) && ((param_4 != (void *)0x0 || (param_5 == 0)))) {
    associated = (undefined2 *)recovered_100058dc(param_5 + 0x16);
    if (associated != (undefined2 *)0x0) {
      size = param_5 + 1;
      *associated = 0x317;
      *(undefined1 *)(associated + 1) = 3;
      iVar1 = (int)param_5 + 0x11;
      *(char *)((long)associated + 3) = (char)((uint)iVar1 >> 8);
      *(char *)(associated + 2) = (char)iVar1;
      destination = (void *)((long)associated + 5);
      if (param_5 != 0) {
        recovered_100013dc(destination,param_4,param_5);
      }
      *(undefined1 *)((long)destination + param_5) = param_3;
      recovered_10006e1c((long)param_2,auStack_6c);
      recovered_10006e7c(param_2,auStack_6c,(long)destination,(long)destination,size);
      recovered_10006f38(param_2,auStack_6c,associated,destination,size,auStack_7c);
      recovered_100013dc((void *)((long)destination + size),auStack_7c,0x10);
      *(long *)((long)param_2 + 0x30) = *(long *)((long)param_2 + 0x30) + 1;
      uVar2 = recovered_10006670(param_1,(long)associated,param_5 + 0x16,param_6,param_7);
      recovered_10005928(associated);
      return uVar2;
    }
    recovered_10002bbc(param_6,param_7,str_10007aef);
  }
  return 0;
}

#undef str_10007aef
#undef auStack_7c
#undef auStack_6c

#undef str_10007be3
#define str_10007be3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4abU)))
#undef str_10007c06
#define str_10007c06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4ceU)))
#define local_50 (*(ulong *)(pf_stack_frame + 16))
#define local_41 (*(byte *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060d8
 */

int recovered_100060d8(void *context,void *data,ulong size,ulong *read,char *error,ulong capacity)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  char *format;

  if (read != (ulong *)0x0) {
    *read = 0;
  }
  if ((((context == (void *)0x0) || (size == 0)) || (data == (void *)0x0)) ||
     ((*(byte *)((long)context + 0x21d) & 1) == 0)) {
    format = str_10007be3;
  }
  else {
    do {
      local_41 = 0;
      local_50 = 0;
      uVar1 = recovered_100061a8(context,(void *)((long)context + 0x1c0),&local_41,(long)data,size,
                                 &local_50,error,capacity);
      if ((int)uVar1 == 0) {
        return 0;
      }
      if (local_41 == 0x17) {
        if (read != (ulong *)0x0) {
          *read = local_50;
        }
        return 1;
      }
    } while (local_41 != 0x15);
    format = str_10007c06;
  }
  recovered_10002bbc(error,capacity,format);
  return 0;
}

#undef str_10007be3
#undef str_10007c06
#undef local_50
#undef local_41

#undef str_10007aef
#define str_10007aef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x3b7U)))
#undef str_10007dfc
#define str_10007dfc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6c4U)))
#undef str_10007e16
#define str_10007e16 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6deU)))
#undef str_10007e35
#define str_10007e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x6fdU)))
#undef str_10007e62
#define str_10007e62 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x72aU)))
#undef str_10007ec0
#define str_10007ec0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x788U)))
#undef str_10007ed5
#define str_10007ed5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x79dU)))
#undef str_10007ef6
#define str_10007ef6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x7beU)))
#define abStack_81 (*(byte (*)[129])(pf_stack_frame + 31))
#define uStack_7e (*(ushort *)(pf_stack_frame + 34))
#define abStack_7c (*(byte (*)[124])(pf_stack_frame + 36))
#define auStack_6c (*(undefined1 (*)[108])(pf_stack_frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100061a8
 */

undefined8
recovered_100061a8(undefined8 *param_1,void *param_2,byte *param_3,long param_4,ulong param_5,
                  ulong *param_6,char *param_7,ulong param_8)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  bool bVar3;
  void *ciphertext;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;

  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 == 0) {
    return 0;
  }
LAB_10006200:
  uVar4 = recovered_10007608(param_1,(long)abStack_81,5,param_7,param_8);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (((uint)(uStack_7e >> 8) | (uStack_7e & 0xff00ff) << 8) - 0x4801 < 0xffffb800) {
    pcVar6 = str_10007dfc;
  }
  else {
    uVar2 = (uint)(uStack_7e >> 8) | (uStack_7e & 0xff00ff) << 8;
    uVar7 = (ulong)uVar2;
    if (param_2 != (void *)0x0) {
      ciphertext = (void *)recovered_100058dc(uVar7);
      if (ciphertext == (void *)0x0) {
        pcVar6 = str_10007aef;
        goto LAB_10006440;
      }
      uVar5 = recovered_10007608(param_1,(long)ciphertext,uVar7,param_7,param_8);
      if ((uVar5 & 1) == 0) goto LAB_10018b2c;
      if (abStack_81[0] == 0x14) {
        recovered_10005928(ciphertext);
      }
      else {
        if (abStack_81[0] != 0x17) {
          if (abStack_81[0] == 0x15) {
            pcVar6 = str_10007e35;
          }
          else {
            pcVar6 = str_10007e62;
          }
          goto LAB_10006468;
        }
        if (param_6 != (ulong *)0x0) {
          *param_6 = 0;
        }
        if (param_3 != (byte *)0x0) {
          *param_3 = 0;
        }
        if (uVar2 < 0x10) goto LAB_10018b2c;
        uVar5 = uVar7 - 0x10;
        if (param_5 < uVar5) {
          pcVar6 = str_10007ec0;
LAB_10006468:
          recovered_10002bbc(param_7,param_8,pcVar6);
LAB_10018b2c:
          recovered_10005928(ciphertext);
          return 0;
        }
        recovered_10006e1c((long)param_2,auStack_6c);
        recovered_10006f38(param_2,auStack_6c,abStack_81,ciphertext,uVar5,abStack_7c);
        bVar3 = recovered_10006de0(abStack_7c,(byte *)((long)ciphertext + uVar5),0x10);
        if (!bVar3) {
          pcVar6 = str_10007ed5;
          goto LAB_10006468;
        }
        recovered_10006e7c(param_2,auStack_6c,(long)ciphertext,param_4,uVar5);
        *(long *)((long)param_2 + 0x30) = *(long *)((long)param_2 + 0x30) + 1;
        for (uVar7 = uVar7 - 0x11; uVar7 != 0xffffffffffffffff; uVar7 = uVar7 - 1) {
          bVar1 = *(byte *)(param_4 + uVar7);
          if (bVar1 != 0) {
            if ((bVar1 & 0xfc) != 0x14) {
              pcVar6 = str_10007ef6;
              goto LAB_10006468;
            }
            if (param_3 != (byte *)0x0) {
              *param_3 = bVar1;
            }
            if (param_6 != (ulong *)0x0) {
              *param_6 = uVar7;
            }
            break;
          }
        }
        recovered_10005928(ciphertext);
        if (param_3 == (byte *)0x0) {
          return 1;
        }
        if (param_6 == (ulong *)0x0) {
          return 1;
        }
        if (*param_3 != 0) {
          return 1;
        }
        if (*param_6 != 0) {
          return 1;
        }
      }
      goto LAB_10006200;
    }
    if (param_5 < uVar7) {
      pcVar6 = str_10007e16;
      goto LAB_10006440;
    }
    uVar4 = recovered_10007608(param_1,param_4,uVar7,param_7,param_8);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (abStack_81[0] == 0x14) goto LAB_10006200;
    if (abStack_81[0] != 0x15) {
      if (param_3 != (byte *)0x0) {
        *param_3 = abStack_81[0];
      }
      if (param_6 != (ulong *)0x0) {
        *param_6 = uVar7;
      }
      return 1;
    }
    pcVar6 = str_10007e35;
  }
LAB_10006440:
  recovered_10002bbc(param_7,param_8,pcVar6);
  return 0;
}

#undef str_10007aef
#undef str_10007dfc
#undef str_10007e16
#undef str_10007e35
#undef str_10007e62
#undef str_10007ec0
#undef str_10007ed5
#undef str_10007ef6
#undef abStack_81
#undef uStack_7e
#undef abStack_7c
#undef auStack_6c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006494
 */

int recovered_10006494(void *context,void *output)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = 0;
  if ((context != (void *)0x0) && (output != (void *)0x0)) {
    if (*(char *)((long)context + 0x21e) == '\x01') {
      recovered_100013dc(output,(void *)((long)context + 0x1f8),0x20);
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
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
 * Address: 0x100064dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100064dc(int param_1)

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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006528
 */

void recovered_10006528(void *context,void *output)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;

  uVar1 = recovered_10004cb8((long)context);
  if (output != (void *)0x0) {
    if ((*(code **)((long)context + 0x18) == (code *)0x0) ||
       (iVar2 = (**(code **)((long)context + 0x18))(*(undefined8 *)context,output,0x20), iVar2 == 0)
       ) {
      for (lVar3 = 0; lVar3 != 0x100; lVar3 = lVar3 + 8) {
        uVar1 = uVar1 ^ uVar1 << 0xd;
        uVar1 = uVar1 ^ uVar1 >> 0x11;
        uVar1 = uVar1 ^ uVar1 << 5;
        *(char *)output = (char)(uVar1 >> (ulong)((uint)lVar3 & 0x18));
        output = (undefined1 *)((long)output + 1);
      }
    }
    else {
      for (lVar3 = 0; lVar3 != 0x100; lVar3 = lVar3 + 8) {
        uVar1 = (uint)*(byte *)output << (ulong)((uint)lVar3 & 0x18) ^ uVar1;
        output = (byte *)((long)output + 1);
      }
    }
    *(uint *)((long)context + 0x218) = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065cc
 */

undefined8 recovered_100065cc(long param_1,long *param_2,uint param_3,void *param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;

  uVar2 = 0;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if (*param_2 + (ulong)param_5 + 4 < 0x201) {
      *(ushort *)(param_1 + *param_2) =
           (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
      lVar3 = *param_2;
      *param_2 = lVar3 + 2;
      puVar1 = (undefined1 *)(param_1 + lVar3 + 2);
      *puVar1 = (char)(param_5 >> 8);
      puVar1[1] = (char)param_5;
      lVar3 = *param_2 + 2;
      *param_2 = lVar3;
      if ((param_4 != (void *)0x0) && (param_5 != 0)) {
        recovered_100013dc((void *)(param_1 + lVar3),param_4,(ulong)param_5);
        lVar3 = *param_2;
      }
      *param_2 = lVar3 + (ulong)param_5;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


#undef str_10007c17
#define str_10007c17 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x4dfU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006670
 */

undefined8
recovered_10006670(undefined8 *param_1,long param_2,long param_3,char *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((code *)param_1[2] == (code *)0x0) || ((param_2 == 0 && (param_3 != 0)))) {
    recovered_10002bbc(param_4,param_5,str_10007c17);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100066a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[2])(*param_1);
  return uVar1;
}

#undef str_10007c17

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066a8
 */

void recovered_100066a8(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100066d4(param_1);
  if (param_1 != (ulong *)0x0) {
    *(undefined4 *)param_1 = 1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066d4
 */

/* WARNING: Removing unreachable block (ram,0x100015f0) */

void recovered_100066d4(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;

  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar3 = 0;
  for (uVar1 = 8; uVar1 < 0x40; uVar1 = uVar1 << 1) {
    uVar3 = uVar3 << (uVar1 & 0x3f) | uVar3;
  }
  uVar1 = 0x44;
  puVar2 = param_1;
  for (; (uVar1 != 0 && (((ulong)param_1 & 7) != 0)); param_1 = (ulong *)((long)param_1 + 1)) {
    *(undefined1 *)puVar2 = 0;
    uVar1 = uVar1 - 1;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  for (; 0x1f < uVar1; uVar1 = uVar1 - 0x20) {
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  }
  while (7 < uVar1) {
    *puVar2 = uVar3;
    uVar1 = uVar1 - 8;
    puVar2 = puVar2 + 1;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (ulong *)((long)puVar2 + 1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066e8
 */

void recovered_100066e8(long param_1,long param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;

  if ((param_1 != 0) && (param_2 != 0)) {
    for (lVar2 = 0; lVar2 != 0x44; lVar2 = lVar2 + 4) {
      uVar1 = -(param_3 & 1) & (*(uint *)(param_2 + lVar2) ^ *(uint *)(param_1 + lVar2));
      *(uint *)(param_1 + lVar2) = uVar1 ^ *(uint *)(param_1 + lVar2);
      *(uint *)(param_2 + lVar2) = *(uint *)(param_2 + lVar2) ^ uVar1;
    }
  }
  return;
}


#undef DAT_100079cc
#define DAT_100079cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x294U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006730
 */

void recovered_10006730(uint *param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;

  if (((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return;
  }
  for (lVar9 = 0; lVar9 != 0x44; lVar9 = lVar9 + 4) {
    *(int *)((long)param_1 + lVar9) = *(int *)(param_3 + lVar9) + *(int *)(param_2 + lVar9);
  }
  if (param_1 != (uint *)0x0) {
    for (iVar8 = 0; iVar8 != 4; iVar8 = iVar8 + 1) {
      for (lVar9 = 0; lVar9 != 0x44; lVar9 = lVar9 + 4) {
        puVar3 = (uint *)((long)param_1 + lVar9);
        uVar6 = *puVar3 >> 0xf;
        *puVar3 = *puVar3 & 0x7fff;
        uVar10 = uVar6 * 0x13;
        puVar7 = param_1;
        if (lVar9 != 0x40) {
          uVar10 = uVar6;
          puVar7 = puVar3 + 1;
        }
        *puVar7 = *puVar7 + uVar10;
      }
    }
    uVar10 = 0x10;
    do {
      if ((int)uVar10 < 0) {
LAB_100069a8:
        uVar10 = 0;
        for (lVar9 = 0; lVar9 != 0x44; lVar9 = lVar9 + 4) {
          uVar5 = *(uint *)((long)param_1 + lVar9);
          uVar6 = *(int *)((long)&DAT_100079cc + lVar9) + uVar10;
          uVar10 = (uint)(uVar5 < uVar6);
          uVar4 = uVar5 + 0x8000;
          if (uVar5 >= uVar6) {
            uVar4 = uVar5;
          }
          *(uint *)((long)param_1 + lVar9) = uVar4 - uVar6;
        }
        return;
      }
      uVar1 = (ulong)uVar10;
      uVar2 = (ulong)uVar10;
      if ((uint)(&DAT_100079cc)[uVar2] < param_1[uVar1]) goto LAB_100069a8;
      uVar10 = uVar10 - 1;
    } while ((uint)(&DAT_100079cc)[uVar2] <= param_1[uVar1]);
  }
  return;
}

#undef DAT_100079cc

#define auStack_150 (*(ulong (*)[42])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006768
 */

void recovered_10006768(uint *param_1,long param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;

  if (param_1 != (uint *)0x0) {
    puVar6 = auStack_150;
    if ((param_2 != 0) && (param_2 != 0)) {
      recovered_100015c8(auStack_150,0,0x110);
      for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
        uVar1 = *(uint *)(param_2 + lVar3 * 4);
        for (lVar4 = 0; lVar4 != 0x11; lVar4 = lVar4 + 1) {
          *(ulong *)((long)puVar6 + lVar4 * 8) =
               *(long *)((long)puVar6 + lVar4 * 8) +
               (ulong)*(uint *)(param_2 + lVar4 * 4) * (ulong)uVar1;
        }
        puVar6 = (ulong *)((long)puVar6 + 8);
      }
      for (lVar3 = 0; 0x10 < lVar3 + 0x21U; lVar3 = lVar3 + -1) {
        auStack_150[lVar3 + 0x10] = auStack_150[lVar3 + 0x10] + auStack_150[lVar3 + 0x21] * 0x13;
      }
      for (iVar2 = 0; iVar2 != 4; iVar2 = iVar2 + 1) {
        for (lVar3 = 0; lVar3 != 0x88; lVar3 = lVar3 + 8) {
          uVar5 = *(ulong *)((long)auStack_150 + lVar3) >> 0xf;
          *(ulong *)((long)auStack_150 + lVar3) = *(ulong *)((long)auStack_150 + lVar3) & 0x7fff;
          if (lVar3 == 0x80) {
            auStack_150[0] = auStack_150[0] + uVar5 * 0x13;
          }
          else {
            *(ulong *)((long)auStack_150 + lVar3 + 8) =
                 *(long *)((long)auStack_150 + lVar3 + 8) + uVar5;
          }
        }
      }
      for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
        param_1[lVar3] = (uint)auStack_150[lVar3];
      }
      recovered_10006918(param_1);
    }
  }
  return;
}

#undef auStack_150

#undef DAT_100079cc
#define DAT_100079cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x294U)))
#undef DAT_10007a10
#define DAT_10007a10 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x2d8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006770
 */

void recovered_10006770(uint *param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;

  if (((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return;
  }
  for (lVar9 = 0; lVar9 != 0x44; lVar9 = lVar9 + 4) {
    *(int *)((long)param_1 + lVar9) =
         (*(int *)((long)&DAT_10007a10 + lVar9) + *(int *)(param_2 + lVar9)) -
         *(int *)(param_3 + lVar9);
  }
  if (param_1 != (uint *)0x0) {
    for (iVar8 = 0; iVar8 != 4; iVar8 = iVar8 + 1) {
      for (lVar9 = 0; lVar9 != 0x44; lVar9 = lVar9 + 4) {
        puVar3 = (uint *)((long)param_1 + lVar9);
        uVar6 = *puVar3 >> 0xf;
        *puVar3 = *puVar3 & 0x7fff;
        uVar10 = uVar6 * 0x13;
        puVar7 = param_1;
        if (lVar9 != 0x40) {
          uVar10 = uVar6;
          puVar7 = puVar3 + 1;
        }
        *puVar7 = *puVar7 + uVar10;
      }
    }
    uVar10 = 0x10;
    do {
      if ((int)uVar10 < 0) {
LAB_100069a8:
        uVar10 = 0;
        for (lVar9 = 0; lVar9 != 0x44; lVar9 = lVar9 + 4) {
          uVar5 = *(uint *)((long)param_1 + lVar9);
          uVar6 = *(int *)((long)&DAT_100079cc + lVar9) + uVar10;
          uVar10 = (uint)(uVar5 < uVar6);
          uVar4 = uVar5 + 0x8000;
          if (uVar5 >= uVar6) {
            uVar4 = uVar5;
          }
          *(uint *)((long)param_1 + lVar9) = uVar4 - uVar6;
        }
        return;
      }
      uVar1 = (ulong)uVar10;
      uVar2 = (ulong)uVar10;
      if ((uint)(&DAT_100079cc)[uVar2] < param_1[uVar1]) goto LAB_100069a8;
      uVar10 = uVar10 - 1;
    } while ((uint)(&DAT_100079cc)[uVar2] <= param_1[uVar1]);
  }
  return;
}

#undef DAT_100079cc
#undef DAT_10007a10

#define local_150 (*(ulong (*)[42])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067b8
 */

void recovered_100067b8(uint *param_1,long param_2,long param_3)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;

  if (param_1 != (uint *)0x0) {
    puVar6 = local_150;
    if ((param_2 != 0) && (param_3 != 0)) {
      recovered_100015c8(local_150,0,0x110);
      for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
        uVar1 = *(uint *)(param_2 + lVar3 * 4);
        for (lVar4 = 0; lVar4 != 0x11; lVar4 = lVar4 + 1) {
          *(ulong *)((long)puVar6 + lVar4 * 8) =
               *(long *)((long)puVar6 + lVar4 * 8) +
               (ulong)*(uint *)(param_3 + lVar4 * 4) * (ulong)uVar1;
        }
        puVar6 = (ulong *)((long)puVar6 + 8);
      }
      for (lVar3 = 0; 0x10 < lVar3 + 0x21U; lVar3 = lVar3 + -1) {
        local_150[lVar3 + 0x10] = local_150[lVar3 + 0x10] + local_150[lVar3 + 0x21] * 0x13;
      }
      for (iVar2 = 0; iVar2 != 4; iVar2 = iVar2 + 1) {
        for (lVar3 = 0; lVar3 != 0x88; lVar3 = lVar3 + 8) {
          uVar5 = *(ulong *)((long)local_150 + lVar3) >> 0xf;
          *(ulong *)((long)local_150 + lVar3) = *(ulong *)((long)local_150 + lVar3) & 0x7fff;
          if (lVar3 == 0x80) {
            local_150[0] = local_150[0] + uVar5 * 0x13;
          }
          else {
            *(ulong *)((long)local_150 + lVar3 + 8) = *(long *)((long)local_150 + lVar3 + 8) + uVar5
            ;
          }
        }
      }
      for (lVar3 = 0; lVar3 != 0x11; lVar3 = lVar3 + 1) {
        param_1[lVar3] = (uint)local_150[lVar3];
      }
      recovered_10006918(param_1);
    }
  }
  return;
}

#undef local_150

#undef DAT_100079cc
#define DAT_100079cc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x294U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006918
 */

void recovered_10006918(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;

  if (param_1 != (uint *)0x0) {
    for (iVar8 = 0; iVar8 != 4; iVar8 = iVar8 + 1) {
      for (lVar10 = 0; lVar10 != 0x44; lVar10 = lVar10 + 4) {
        puVar3 = (uint *)((long)param_1 + lVar10);
        uVar6 = *puVar3 >> 0xf;
        *puVar3 = *puVar3 & 0x7fff;
        uVar9 = uVar6 * 0x13;
        puVar7 = param_1;
        if (lVar10 != 0x40) {
          uVar9 = uVar6;
          puVar7 = puVar3 + 1;
        }
        *puVar7 = *puVar7 + uVar9;
      }
    }
    uVar9 = 0x10;
    do {
      if ((int)uVar9 < 0) {
LAB_100069a8:
        uVar9 = 0;
        for (lVar10 = 0; lVar10 != 0x44; lVar10 = lVar10 + 4) {
          uVar5 = *(uint *)((long)param_1 + lVar10);
          uVar6 = *(int *)((long)&DAT_100079cc + lVar10) + uVar9;
          uVar9 = (uint)(uVar5 < uVar6);
          uVar4 = uVar5 + 0x8000;
          if (uVar5 >= uVar6) {
            uVar4 = uVar5;
          }
          *(uint *)((long)param_1 + lVar10) = uVar4 - uVar6;
        }
        return;
      }
      uVar1 = (ulong)uVar9;
      uVar2 = (ulong)uVar9;
      if ((uint)(&DAT_100079cc)[uVar2] < param_1[uVar1]) goto LAB_100069a8;
      uVar9 = uVar9 - 1;
    } while ((uint)(&DAT_100079cc)[uVar2] <= param_1[uVar1]);
  }
  return;
}

#undef DAT_100079cc

#define auStack_130 (*(undefined1 (*)[304])(pf_stack_frame + 16))
#define auStack_110 (*(undefined1 (*)[272])(pf_stack_frame + 48))
#define auStack_a0 (*(undefined1 (*)[160])(pf_stack_frame + 160))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069e4
 */

void recovered_100069e4(void *param_1,void *param_2,void *param_3)

{
  unsigned char pf_stack_frame[352] __attribute__((aligned(16))) = {0};


  recovered_10006a50(auStack_a0,auStack_110,param_1);
  recovered_100056d0(auStack_a0,param_2,0x20);
  recovered_10006b10(auStack_a0,auStack_130);
  recovered_100056d0(auStack_110,auStack_130,0x20);
  recovered_10006b10(auStack_110,param_3);
  return;
}

#undef auStack_130
#undef auStack_110
#undef auStack_a0

#define local_f0 (*(byte (*)[240])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a50
 */

void recovered_10006a50(void *inner,void *outer,void *key)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  long lVar1;

  recovered_100015c8(local_f0 + 0x80,0,0x40);
  if (key != (void *)0x0) {
    recovered_100013dc(local_f0 + 0x80,key,0x20);
  }
  for (lVar1 = 0; lVar1 != 0x40; lVar1 = lVar1 + 1) {
    local_f0[lVar1 + 0x40] = local_f0[lVar1 + 0x80] ^ 0x36;
    local_f0[lVar1] = local_f0[lVar1 + 0x80] ^ 0x5c;
  }
  recovered_100056ac(inner);
  recovered_100056d0(inner,local_f0 + 0x40,0x40);
  recovered_100056ac(outer);
  recovered_100056d0(outer,local_f0,0x40);
  return;
}

#undef local_f0

#undef DAT_10007a54
#define DAT_10007a54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x31cU)))
#undef DAT_10007d5e
#define DAT_10007d5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x626U)))
#define local_38 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b10
 */

void recovered_10006b10(void *context,void *output)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;

  if ((context != (void *)0x0) && (output != (void *)0x0)) {
    uVar2 = *(long *)((long)context + 0x20) << 3;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    local_38 = uVar2 >> 0x20 | uVar2 << 0x20;
    recovered_100056d0(context,&DAT_10007d5e,1);
    while (*(int *)((long)context + 0x68) != 0x38) {
      recovered_100056d0(context,&DAT_10007a54,1);
    }
    recovered_100056d0(context,&local_38,8);
    lVar4 = (long)output + 1;
    for (lVar3 = 0; lVar3 != 8; lVar3 = lVar3 + 1) {
      uVar1 = *(uint *)((long)context + lVar3 * 4);
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)(lVar4 + -1) = uVar1 >> 0x10 | uVar1 << 0x10;
      lVar4 = lVar4 + 4;
    }
  }
  return;
}

#undef DAT_10007a54
#undef DAT_10007d5e
#undef local_38

#undef DAT_10007870
#define DAT_10007870 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef DAT_10007880
#define DAT_10007880 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef UNK_10007878
#define UNK_10007878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef UNK_10007888
#define UNK_10007888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x150U)))
#undef _DAT_10007870
#define _DAT_10007870 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x138U)))
#undef _DAT_10007880
#define _DAT_10007880 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x148U)))
#undef uRam0000000010007878
#define uRam0000000010007878 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef uRam0000000010007888
#define uRam0000000010007888 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x150U)))
#define uStack_88 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_80 (*(undefined8 *)(pf_stack_frame + 32))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 40))
#define local_90 (*(undefined8 *)(pf_stack_frame + 16))
#define local_70 (*(undefined8 *)(pf_stack_frame + 48))
#define local_28 (*(undefined4 *)(pf_stack_frame + 120))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10006bc0(void *param_1,ulong param_2,void *param_3)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};


  uStack_88 = uRam0000000010007878;
  local_90 = _DAT_10007870;
  uStack_78 = uRam0000000010007888;
  uStack_80 = _DAT_10007880;
  local_70 = 0;
  local_28 = 0;
  recovered_100056d0(&local_90,param_1,param_2);
  recovered_10006b10(&local_90,param_3);
  return;
}

#undef DAT_10007870
#undef DAT_10007880
#undef UNK_10007878
#undef UNK_10007888
#undef _DAT_10007870
#undef _DAT_10007880
#undef uRam0000000010007878
#undef uRam0000000010007888
#undef uStack_88
#undef uStack_80
#undef uStack_78
#undef local_90
#undef local_70
#undef local_28

#undef str_10007d60
#define str_10007d60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x628U)))
#define auStack_20d (*(undefined1 (*)[525])(pf_stack_frame + 19))
#define auStack_190 (*(undefined1 (*)[400])(pf_stack_frame + 144))
#define auStack_170 (*(undefined1 (*)[368])(pf_stack_frame + 176))
#define auStack_100 (*(undefined1 (*)[256])(pf_stack_frame + 288))
#define bStack_89 (*(byte *)(pf_stack_frame + 407))
#define auStack_88 (*(undefined1 (*)[136])(pf_stack_frame + 408))
#define local_210 (*(undefined1 *)(pf_stack_frame + 16))
#define local_20f (*(undefined1 *)(pf_stack_frame + 17))
#define local_20e (*(undefined1 *)(pf_stack_frame + 18))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c14
 */

void recovered_10006c14(void *secret,char *label,void *context,ulong context_length,void *output,
                       ulong output_length)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong count;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;

  uVar2 = recovered_100018b8(str_10007d60);
  if ((((label != (char *)0x0) && (uVar3 = recovered_100018b8(label), label != (char *)0x0)) &&
      (secret != (void *)0x0)) && ((output != (void *)0x0 && (uVar3 + uVar2 < 0x100)))) {
    lVar1 = uVar3 + uVar2 + 3;
    uVar5 = lVar1 + 1U + context_length;
    if (uVar5 < 0x81) {
      local_210 = (undefined1)(output_length >> 8);
      local_20f = (undefined1)output_length;
      local_20e = (undefined1)(uVar3 + uVar2);
      recovered_100013dc(auStack_20d,str_10007d60,uVar2);
      recovered_100013dc(auStack_20d + uVar2,label,uVar3);
      auStack_20d[lVar1 + -3] = (char)context_length;
      uVar2 = lVar1 + 1U;
      if (context_length != 0) {
        recovered_100013dc(auStack_20d + lVar1 + -2,context,context_length);
        uVar2 = uVar5;
      }
      uVar3 = 0;
      uVar5 = 0;
      bVar6 = true;
      bStack_89 = 1;
      do {
        count = output_length - uVar3;
        if (output_length < uVar3 || count == 0) {
          return;
        }
        recovered_10006a50(auStack_100,auStack_170,secret);
        if (!bVar6) {
          recovered_100056d0(auStack_100,auStack_88,uVar5);
        }
        recovered_100056d0(auStack_100,&local_210,uVar2);
        recovered_100056d0(auStack_100,&bStack_89,1);
        recovered_10006b10(auStack_100,auStack_190);
        recovered_100056d0(auStack_170,auStack_190,0x20);
        recovered_10006b10(auStack_170,auStack_88);
        if (0x1f < count) {
          count = 0x20;
        }
        recovered_100013dc((void *)((long)output + uVar3),auStack_88,count);
        bVar6 = false;
        uVar3 = count + uVar3;
        uVar4 = (uint)bStack_89;
        bStack_89 = (byte)(uVar4 + 1);
        uVar5 = 0x20;
      } while ((uVar4 + 1 >> 8 == 0) || (uVar5 = 0x20, output_length <= uVar3));
    }
  }
  return;
}

#undef str_10007d60
#undef auStack_20d
#undef auStack_190
#undef auStack_170
#undef auStack_100
#undef bStack_89
#undef auStack_88
#undef local_210
#undef local_20f
#undef local_20e

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006de0
 */

bool recovered_10006de0(byte *param_1,byte *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;

  bVar1 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    bVar2 = 0;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      bVar2 = *param_2 ^ *param_1 | bVar2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    bVar1 = bVar2 == 0;
  }
  return bVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e1c
 */

void recovered_10006e1c(long param_1,void *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;

  if (param_2 != (void *)0x0) {
    recovered_100013dc(param_2,(void *)(param_1 + 0x20),0xc);
    pbVar2 = (byte *)((long)param_2 + 0xb);
    for (uVar1 = 0; uVar1 != 0x40; uVar1 = uVar1 + 8) {
      *pbVar2 = *pbVar2 ^ (byte)(*(ulong *)(param_1 + 0x30) >> (uVar1 & 0x3f));
      pbVar2 = pbVar2 + -1;
    }
  }
  return;
}


#define abStack_a0 (*(byte (*)[160])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e7c
 */

void recovered_10006e7c(void *param_1,void *param_2,long param_3,long param_4,ulong param_5)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint counter;
  ulong uVar6;

  counter = 1;
  for (uVar6 = 0; uVar1 = param_5 - uVar6, uVar6 <= param_5 && uVar1 != 0; uVar6 = uVar1 + uVar6) {
    if (0x3f < uVar1) {
      uVar1 = 0x40;
    }
    recovered_10007380(param_1,counter,param_2,abStack_a0);
    pbVar2 = (byte *)(param_4 + uVar6);
    pbVar3 = (byte *)(param_3 + uVar6);
    pbVar4 = abStack_a0;
    for (uVar5 = uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar2 = *pbVar4 ^ *pbVar3;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    }
    counter = counter + 1;
  }
  return;
}

#undef abStack_a0

#undef DAT_10007860
#define DAT_10007860 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x128U)))
#define uStack_c8 (*(undefined8 *)(pf_stack_frame + 24))
#define uStack_bf (*(undefined1 *)(pf_stack_frame + 33))
#define uStack_c0 (*(undefined1 *)(pf_stack_frame + 32))
#define uStack_bd (*(undefined1 *)(pf_stack_frame + 35))
#define uStack_be (*(undefined1 *)(pf_stack_frame + 34))
#define uStack_bb (*(undefined1 *)(pf_stack_frame + 37))
#define uStack_bc (*(undefined1 *)(pf_stack_frame + 36))
#define uStack_b9 (*(undefined1 *)(pf_stack_frame + 39))
#define uStack_ba (*(undefined1 *)(pf_stack_frame + 38))
#define uStack_b4 (*(undefined2 *)(pf_stack_frame + 44))
#define uStack_b8 (*(undefined4 *)(pf_stack_frame + 40))
#define uStack_b1 (*(undefined2 *)(pf_stack_frame + 47))
#define uStack_b2 (*(undefined1 *)(pf_stack_frame + 46))
#define uStack_ae (*(undefined2 *)(pf_stack_frame + 50))
#define uStack_af (*(undefined1 *)(pf_stack_frame + 49))
#define uStack_a8 (*(uint *)(pf_stack_frame + 56))
#define uStack_ac (*(uint *)(pf_stack_frame + 52))
#define uStack_a0 (*(uint *)(pf_stack_frame + 64))
#define uStack_a4 (*(uint *)(pf_stack_frame + 60))
#define uStack_78 (*(undefined4 *)(pf_stack_frame + 104))
#define uStack_9c (*(uint *)(pf_stack_frame + 68))
#define uStack_72 (*(undefined1 *)(pf_stack_frame + 110))
#define uStack_74 (*(undefined2 *)(pf_stack_frame + 108))
#define uStack_6f (*(undefined1 *)(pf_stack_frame + 113))
#define uStack_71 (*(undefined2 *)(pf_stack_frame + 111))
#define uStack_6c (*(uint *)(pf_stack_frame + 116))
#define uStack_6e (*(undefined2 *)(pf_stack_frame + 114))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f38
 */

/* WARNING: Removing unreachable block (ram,0x100015f0) */

void recovered_10006f38(void *key,void *nonce,void *associated,void *ciphertext,ulong size,
                       void *output)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  void *source;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong count;
  long lVar6;
  void *destination;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;

  recovered_10007380(key,0,nonce,&uStack_b8);
  destination = (void *)recovered_100058dc(size + ((ulong)(uint)-(int)size & 0xf) + 0x20);
  if (destination == (void *)0x0) {
    uVar12 = 0;
    for (uVar16 = 8; uVar16 < 0x40; uVar16 = uVar16 << 1) {
      uVar12 = uVar12 << (uVar16 & 0x3f) | uVar12;
    }
    uVar16 = 0x10;
    puVar7 = output;
    for (; (uVar16 != 0 && (((ulong)output & 7) != 0)); output = (void *)((long)output + 1)) {
      *(undefined1 *)puVar7 = 0;
      uVar16 = uVar16 - 1;
      puVar7 = (ulong *)((long)puVar7 + 1);
    }
    for (; 0x1f < uVar16; uVar16 = uVar16 - 0x20) {
      *puVar7 = uVar12;
      puVar7[1] = uVar12;
      puVar7[2] = uVar12;
      puVar7[3] = uVar12;
      puVar7 = puVar7 + 4;
    }
    while (7 < uVar16) {
      *puVar7 = uVar12;
      uVar16 = uVar16 - 8;
      puVar7 = puVar7 + 1;
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (ulong *)((long)puVar7 + 1);
    }
    return;
  }
  recovered_100013dc(destination,associated,5);
  for (lVar13 = 5; lVar13 != 0x10; lVar13 = lVar13 + 1) {
    *(undefined1 *)((long)destination + lVar13) = 0;
  }
  recovered_100013dc((void *)((long)destination + 0x10),ciphertext,size);
  for (uVar16 = size + 0x10; (uVar16 & 0xf) != 0; uVar16 = uVar16 + 1) {
    *(undefined1 *)((long)destination + uVar16) = 0;
  }
  recovered_100015c8(&uStack_c8,0,0x10);
  uStack_c8 = DAT_10007860;
  uStack_c0 = (undefined1)size;
  uStack_bf = (undefined1)(size >> 8);
  uStack_be = (undefined1)(size >> 0x10);
  uStack_bd = (undefined1)(size >> 0x18);
  uStack_bc = (undefined1)(size >> 0x20);
  uStack_bb = (undefined1)(size >> 0x28);
  uStack_ba = (undefined1)(size >> 0x30);
  uStack_b9 = (undefined1)(size >> 0x38);
  recovered_100013dc((void *)((long)destination + uVar16),&uStack_c8,0x10);
  uVar19 = 0;
  uVar14 = 0;
  uVar18 = 0;
  uVar12 = 0;
  uVar20 = 0;
  uVar17 = (ulong)(CONCAT13(uStack_b2,CONCAT21(uStack_b4,PF_PART1(uStack_b8, 3))) >> 2 & 0x3ffff03);
  uVar11 = (ulong)(CONCAT13(uStack_af,CONCAT21(uStack_b1,uStack_b2)) >> 4 & 0x3ffc0ff);
  uVar9 = (ulong)(CONCAT13((undefined1)uStack_ac,CONCAT21(uStack_ae,uStack_af)) >> 6 & 0x3f03fff);
  uVar10 = (ulong)(uStack_ac >> 8) & 0xfffff;
  uVar15 = (ulong)uStack_b8 & 0x3ffffff;
  lVar13 = (uintptr_t)(uintptr_t)uVar9 * 5;
  lVar6 = (uintptr_t)uVar10 * 5;
  source = destination;
  for (uVar16 = uVar16 + 0x10; uVar16 != 0; uVar16 = uVar16 - count) {
    count = uVar16;
    if (0xf < uVar16) {
      count = 0x10;
    }
    recovered_100015c8(&uStack_78,0,0x10);
    recovered_100013dc(&uStack_78,source,count);
    if (uVar16 < 0x10) {
      uVar8 = 0;
      *(undefined1 *)((long)&uStack_78 + count) = 1;
    }
    else {
      uVar8 = 0x1000000;
    }
    source = (void *)((long)source + count);
    lVar1 = uVar20 + ((ulong)uStack_78 & 0x3ffffff);
    lVar2 = uVar12 + ((ulong)(CONCAT13(uStack_72,CONCAT21(uStack_74,PF_PART1(uStack_78, 3))) >> 2) &
                     0x3ffffff);
    lVar3 = uVar18 + ((ulong)(CONCAT13(uStack_6f,CONCAT21(uStack_71,uStack_72)) >> 4) & 0x3ffffff);
    lVar4 = uVar14 + (CONCAT13((undefined1)uStack_6c,CONCAT21(uStack_6e,uStack_6f)) >> 6);
    lVar5 = (uVar8 | uStack_6c >> 8) + uVar19;
    uVar8 = lVar1 * uVar15 + lVar2 * lVar6 + lVar3 * lVar13 + lVar4 * (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar11 * 5 +
            (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar17 * 5 * lVar5;
    uVar12 = lVar1 * uVar17 + lVar2 * uVar15 + lVar3 * lVar6 + lVar4 * lVar13 + lVar5 * (uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)(uintptr_t)uVar11 * 5 +
             (uVar8 >> 0x1a);
    uVar14 = lVar1 * uVar11 + lVar2 * uVar17 + lVar3 * uVar15 + lVar4 * lVar6 + lVar5 * lVar13 +
             (uVar12 >> 0x1a);
    uVar18 = uVar14 & 0x3ffffff;
    uVar19 = lVar1 * uVar9 + lVar2 * uVar11 + lVar3 * uVar17 + lVar4 * uVar15 + lVar5 * lVar6 +
             (uVar14 >> 0x1a);
    uVar14 = uVar19 & 0x3ffffff;
    uVar20 = lVar1 * uVar10 + lVar2 * uVar9 + lVar3 * uVar11 + lVar4 * uVar17 + lVar5 * uVar15 +
             (uVar19 >> 0x1a);
    uVar19 = uVar20 & 0x3ffffff;
    uVar8 = (uVar20 >> 0x1a) * 4 + (uVar20 >> 0x1a) + (uVar8 & 0x3ffffff);
    uVar20 = uVar8 & 0x3ffffff;
    uVar12 = (uVar12 & 0x3ffffff) + (uVar8 >> 0x1a);
  }
  uVar18 = uVar18 + (uVar12 >> 0x1a);
  uVar10 = uVar18 & 0x3ffffff;
  uVar14 = uVar14 + (uVar18 >> 0x1a);
  uVar9 = uVar14 & 0x3ffffff;
  uVar19 = uVar19 + (uVar14 >> 0x1a);
  uVar20 = (uVar19 >> 0x1a) * 4 + (uVar19 >> 0x1a) + uVar20;
  uVar11 = uVar20 & 0x3ffffff;
  uVar12 = (uVar12 & 0x3ffffff) + (uVar20 >> 0x1a);
  uVar16 = uVar11 + 5;
  uVar18 = uVar12 + (uVar16 >> 0x1a);
  uVar14 = uVar10 + (uVar18 >> 0x1a);
  uVar20 = uVar9 + (uVar14 >> 0x1a);
  uVar15 = (long)((uVar19 | 0xfffffffffc000000) + (uVar20 >> 0x1a)) >> 0x3f;
  if ((uVar15 & 1) == 0) {
    uVar9 = uVar20 & 0x3ffffff;
    uVar10 = uVar14 & 0x3ffffff;
    uVar12 = uVar18 & 0x3ffffff;
    uVar11 = uVar16 & 0x3ffffff;
  }
  uVar16 = (uVar11 | (uVar12 & 0x3f) << 0x1a) + (ulong)uStack_a8;
  uVar12 = (ulong)((uint)(uVar12 >> 6) | (int)uVar10 << 0x14) + (ulong)uStack_a4 + (uVar16 >> 0x20);
  *(char *)output = (char)uVar16;
  *(char *)((long)output + 1) = (char)(uVar16 >> 8);
  *(char *)((long)output + 2) = (char)(uVar16 >> 0x10);
  *(char *)((long)output + 3) = (char)(uVar16 >> 0x18);
  *(char *)((long)output + 4) = (char)uVar12;
  *(char *)((long)output + 5) = (char)(uVar12 >> 8);
  uVar16 = (uVar10 >> 0xc | (uVar9 & 0x3ffff) << 0xe) + (ulong)uStack_a0 + (uVar12 >> 0x20);
  *(char *)((long)output + 6) = (char)(uVar12 >> 0x10);
  *(char *)((long)output + 7) = (char)(uVar12 >> 0x18);
  *(char *)((long)output + 8) = (char)uVar16;
  *(char *)((long)output + 9) = (char)(uVar16 >> 8);
  *(char *)((long)output + 10) = (char)(uVar16 >> 0x10);
  *(char *)((long)output + 0xb) = (char)(uVar16 >> 0x18);
  lVar13 = (uVar9 >> 0x12 | (uVar19 & uVar15) << 8) + (ulong)uStack_9c + (uVar16 >> 0x20);
  *(char *)((long)output + 0xc) = (char)lVar13;
  *(char *)((long)output + 0xd) = (char)((ulong)lVar13 >> 8);
  *(char *)((long)output + 0xe) = (char)((ulong)lVar13 >> 0x10);
  *(char *)((long)output + 0xf) = (char)((ulong)lVar13 >> 0x18);
  recovered_10005928(destination);
  return;
}

#undef DAT_10007860
#undef uStack_c8
#undef uStack_bf
#undef uStack_c0
#undef uStack_bd
#undef uStack_be
#undef uStack_bb
#undef uStack_bc
#undef uStack_b9
#undef uStack_ba
#undef uStack_b4
#undef uStack_b8
#undef uStack_b1
#undef uStack_b2
#undef uStack_ae
#undef uStack_af
#undef uStack_a8
#undef uStack_ac
#undef uStack_a0
#undef uStack_a4
#undef uStack_78
#undef uStack_9c
#undef uStack_72
#undef uStack_74
#undef uStack_6f
#undef uStack_71
#undef uStack_6c
#undef uStack_6e

#undef str_1000788f
#define str_1000788f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x157U)))
#define aiStack_70 (*(int (*)[28])(pf_stack_frame + 96))
#define acStack_78 (*(char (*)[120])(pf_stack_frame + 88))
#define local_c0 (*(uint (*)[48])(pf_stack_frame + 16))
#define local_80 (*(int (*)[32])(pf_stack_frame + 80))
#define local_50 (*(uint *)(pf_stack_frame + 128))
#define local_4c (*(undefined8 *)(pf_stack_frame + 132))
#define local_44 (*(undefined4 *)(pf_stack_frame + 140))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007380
 */

void recovered_10007380(void *key,uint counter,void *nonce,void *output)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;

  *(uint64_t *)(void *)acStack_78 = PF_PART8(str_1000788f, 9);
  *(uint64_t *)(void *)local_80 = PF_PART8(str_1000788f, 1);
  for (lVar14 = 4; lVar14 != 0xc; lVar14 = lVar14 + 1) {
    local_80[lVar14] = *(int *)key;
    key = (int *)((long)key + 4);
  }
  local_4c = *(undefined8 *)nonce;
  local_44 = *(undefined4 *)((long)nonce + 8);
  local_50 = counter;
  recovered_100013dc(local_c0,local_80,0x40);
  iVar13 = 10;
  do {
    local_c0[0xc] = local_c0[0xc] ^ local_c0[0] + local_c0[4];
    local_c0[8] = local_c0[8] + (local_c0[0xc] >> 0x10 | local_c0[0xc] << 0x10);
    uVar2 = local_c0[8] ^ local_c0[4];
    local_c0[0xd] = local_c0[0xd] ^ local_c0[1] + local_c0[5];
    local_c0[9] = local_c0[9] + (local_c0[0xd] >> 0x10 | local_c0[0xd] << 0x10);
    uVar3 = local_c0[9] ^ local_c0[5];
    local_c0[1] = (uVar3 >> 0x14 | uVar3 << 0xc) + local_c0[1] + local_c0[5];
    uVar4 = local_c0[1] ^ (local_c0[0xd] >> 0x10 | local_c0[0xd] << 0x10);
    local_c0[9] = (uVar4 >> 0x18 | uVar4 << 8) + local_c0[9];
    uVar5 = local_c0[9] ^ (uVar3 >> 0x14 | uVar3 << 0xc);
    uVar3 = (uVar2 >> 0x14 | uVar2 << 0xc) + local_c0[0] + local_c0[4];
    local_c0[0] = (uVar5 >> 0x19 | uVar5 << 7) + uVar3;
    uVar3 = uVar3 ^ (local_c0[0xc] >> 0x10 | local_c0[0xc] << 0x10);
    local_c0[0xe] = local_c0[0xe] ^ local_c0[2] + local_c0[6];
    local_c0[10] = local_c0[10] + (local_c0[0xe] >> 0x10 | local_c0[0xe] << 0x10);
    uVar6 = local_c0[10] ^ local_c0[6];
    local_c0[2] = (uVar6 >> 0x14 | uVar6 << 0xc) + local_c0[2] + local_c0[6];
    uVar7 = local_c0[2] ^ (local_c0[0xe] >> 0x10 | local_c0[0xe] << 0x10);
    local_c0[0xf] = local_c0[0xf] ^ local_c0[3] + local_c0[7];
    local_c0[0xb] = local_c0[0xb] + (local_c0[0xf] >> 0x10 | local_c0[0xf] << 0x10);
    uVar8 = local_c0[0xb] ^ local_c0[7];
    local_c0[3] = (uVar8 >> 0x14 | uVar8 << 0xc) + local_c0[3] + local_c0[7];
    uVar9 = local_c0[3] ^ (local_c0[0xf] >> 0x10 | local_c0[0xf] << 0x10);
    uVar10 = local_c0[0] ^ (uVar9 >> 0x18 | uVar9 << 8);
    local_c0[10] = (uVar7 >> 0x18 | uVar7 << 8) + local_c0[10];
    uVar1 = (uVar10 >> 0x10 | uVar10 << 0x10) + local_c0[10];
    uVar11 = local_c0[10] ^ (uVar6 >> 0x14 | uVar6 << 0xc);
    local_c0[1] = (uVar11 >> 0x19 | uVar11 << 7) + local_c0[1];
    uVar12 = local_c0[1] ^ (uVar3 >> 0x18 | uVar3 << 8);
    local_c0[0xb] = (uVar9 >> 0x18 | uVar9 << 8) + local_c0[0xb];
    uVar6 = local_c0[0xb] + (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar8 = local_c0[0xb] ^ (uVar8 >> 0x14 | uVar8 << 0xc);
    local_c0[2] = (uVar8 >> 0x19 | uVar8 << 7) + local_c0[2];
    uVar4 = local_c0[2] ^ (uVar4 >> 0x18 | uVar4 << 8);
    local_c0[8] = (uVar3 >> 0x18 | uVar3 << 8) + local_c0[8];
    uVar3 = (uVar4 >> 0x10 | uVar4 << 0x10) + local_c0[8];
    uVar2 = local_c0[8] ^ (uVar2 >> 0x14 | uVar2 << 0xc);
    uVar5 = uVar1 ^ (uVar5 >> 0x19 | uVar5 << 7);
    local_c0[0] = (uVar5 >> 0x14 | uVar5 << 0xc) + local_c0[0];
    uVar9 = local_c0[0] ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    local_c0[0xf] = uVar9 >> 0x18 | uVar9 << 8;
    local_c0[10] = local_c0[0xf] + uVar1;
    uVar1 = local_c0[10] ^ (uVar5 >> 0x14 | uVar5 << 0xc);
    local_c0[5] = uVar1 >> 0x19 | uVar1 << 7;
    uVar1 = uVar6 ^ (uVar11 >> 0x19 | uVar11 << 7);
    local_c0[1] = (uVar1 >> 0x14 | uVar1 << 0xc) + local_c0[1];
    uVar5 = local_c0[1] ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    local_c0[0xc] = uVar5 >> 0x18 | uVar5 << 8;
    local_c0[0xb] = local_c0[0xc] + uVar6;
    uVar1 = local_c0[0xb] ^ (uVar1 >> 0x14 | uVar1 << 0xc);
    local_c0[6] = uVar1 >> 0x19 | uVar1 << 7;
    uVar1 = uVar3 ^ (uVar8 >> 0x19 | uVar8 << 7);
    local_c0[2] = (uVar1 >> 0x14 | uVar1 << 0xc) + local_c0[2];
    uVar6 = local_c0[2] ^ (uVar4 >> 0x10 | uVar4 << 0x10);
    local_c0[0xd] = uVar6 >> 0x18 | uVar6 << 8;
    local_c0[8] = local_c0[0xd] + uVar3;
    uVar3 = local_c0[8] ^ (uVar1 >> 0x14 | uVar1 << 0xc);
    local_c0[7] = uVar3 >> 0x19 | uVar3 << 7;
    local_c0[3] = local_c0[3] + (uVar2 >> 0x19 | uVar2 << 7);
    uVar3 = local_c0[3] ^ (uVar7 >> 0x18 | uVar7 << 8);
    local_c0[9] = (uVar3 >> 0x10 | uVar3 << 0x10) + local_c0[9];
    uVar1 = local_c0[9] ^ (uVar2 >> 0x19 | uVar2 << 7);
    local_c0[3] = (uVar1 >> 0x14 | uVar1 << 0xc) + local_c0[3];
    uVar3 = local_c0[3] ^ (uVar3 >> 0x10 | uVar3 << 0x10);
    local_c0[0xe] = uVar3 >> 0x18 | uVar3 << 8;
    local_c0[9] = local_c0[0xe] + local_c0[9];
    uVar3 = local_c0[9] ^ (uVar1 >> 0x14 | uVar1 << 0xc);
    local_c0[4] = uVar3 >> 0x19 | uVar3 << 7;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  lVar14 = (long)output + 3;
  for (lVar15 = 0; lVar15 != 0x10; lVar15 = lVar15 + 1) {
    *(uint *)(lVar14 + -3) = local_80[lVar15] + local_c0[lVar15];
    lVar14 = lVar14 + 4;
  }
  return;
}

#undef str_1000788f
#undef aiStack_70
#undef acStack_78
#undef local_c0
#undef local_80
#undef local_50
#undef local_4c
#undef local_44

#undef str_10007e9f
#define str_10007e9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x767U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007608
 */

undefined8
recovered_10007608(undefined8 *param_1,long param_2,long param_3,char *param_4,ulong param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (((code *)param_1[1] == (code *)0x0) || ((param_2 == 0 && (param_3 != 0)))) {
    recovered_10002bbc(param_4,param_5,str_10007e9f);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x1000763c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)param_1[1])(*param_1);
  return uVar1;
}

#undef str_10007e9f
