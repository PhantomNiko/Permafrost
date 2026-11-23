/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5480U)))
#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#undef _DAT_1000c110
#define _DAT_1000c110 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5480U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000610
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000610(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000063c();
  _DAT_1000c110 = 0;
  recovered_10000674();
  DAT_1000c114 = 0;
  return;
}

#undef DAT_1000c110
#undef DAT_1000c114
#undef _DAT_1000c110

#undef DAT_1000c114
#define DAT_1000c114 (*(int *)(((uintptr_t)pf_module_state + 0x5484U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000063c
 */

void recovered_1000063c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  int iVar3;

  while( true ) {
    do {
      iVar3 = DAT_1000c114;
      cVar1 = '\x01';
      { __typeof__(DAT_1000c114) pf_exclusive_expected = iVar3;
bVar2 = __atomic_compare_exchange_n(&(DAT_1000c114),&pf_exclusive_expected,1,0,__ATOMIC_ACQ_REL,__ATOMIC_RELAXED);
cVar1 = bVar2 ? 0 : 1;
}
    } while (cVar1 != '\0');
    if (iVar3 == 0) break;
    while (DAT_1000c114 != 0) {
      Yield();
    }
  }
  return;
}

#undef DAT_1000c114

#undef DAT_1000c110
#define DAT_1000c110 (*(byte *)(((uintptr_t)pf_module_state + 0x5480U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5490U)))
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
 * Address: 0x10000674
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10000674(void)

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
  if ((DAT_1000c110 & 1) == 0) {
    DAT_1000c118 = 0;
    DAT_1000c120 = 0;
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
      recovered_10002c3c(puVar8[-1],*puVar8,&local_48);
      puVar8 = puVar8 + 2;
    }
    if (DAT_1000c118 == 0) {
      uVar4 = _DAT_82010088 & 0xfffffff0;
      if (_DAT_82010088 < 0x300001) {
        uVar4 = 0x4000000;
      }
      uVar2 = 0x4000000;
      if (0x300030 < uVar4) {
        uVar2 = uVar4;
      }
      recovered_10002c3c(0x300000,(ulong)uVar2 - 0x300000,&local_48);
    }
    if (DAT_1000c120 == 0) {
      DAT_1000c120 = DAT_1000c118;
    }
    DAT_1000c110 = 1;
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120
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

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100008f8
 */

bool recovered_100008f8(ulong *param_1,ulong *param_2,long param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  recovered_1000063c();
  bVar1 = recovered_10000934(param_1,param_2,param_3);
  DAT_1000c114 = 0;
  return bVar1;
}

#undef DAT_1000c114

#undef DAT_1000c111
#define DAT_1000c111 (*(byte *)(((uintptr_t)pf_module_state + 0x5481U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5490U)))
#define local_61 (*(byte *)(pf_stack_frame + 31))
#define uStack_70 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000934
 */

/* WARNING: Type propagation algorithm not settling */

bool recovered_10000934(ulong *param_1,ulong *param_2,long param_3)

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
    if ((DAT_1000c111 & 1) == 0) {
      DAT_1000c111 = 1;
      recovered_10000674();
      for (lVar10 = 0; lVar10 != param_3; lVar10 = lVar10 + 1) {
        plVar9 = (long *)param_1[lVar10];
        uVar3 = param_2[lVar10];
        plVar1 = (long *)((long)plVar9 + uVar3);
        if (CARRY8((ulong)plVar9,uVar3)) {
          plVar1 = (long *)0xffffffffffffffff;
        }
        local_61 = 0;
        if (~(ulong)plVar9 < uVar3 || plVar1 <= plVar9) {
          DAT_1000c111 = 0;
          return false;
        }
        if ((ulong)plVar9 >> 0x19 < 0x45 && (long *)0x84000000 < plVar1) {
          if (((ulong)plVar9 >> 0x1a < 0x21) &&
             (recovered_10002d40((ulong)plVar9,0x84000000 - (long)plVar9,&local_61),
             extraout_w0_00 == 0)) {
            DAT_1000c111 = 0;
            return false;
          }
          if (0xffffffffffffffce < ((ulong)plVar1 & 0xfffffffffffffff0) - 0x8a000031 ||
              plVar1 < (long *)0x8a000001) goto joined_r0x10000a34;
        }
        else {
          recovered_10002d40((ulong)plVar9,uVar3,&local_61);
          if (extraout_w0 == 0) {
            DAT_1000c111 = 0;
            return false;
          }
joined_r0x10000a34:
          if ((local_61 & 1) == 0) {
            DAT_1000c111 = 0;
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
            DAT_1000c111 = 0;
            return false;
          }
        }
        puVar5 = (ulong *)&DAT_1000c118;
        while (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0) {
          puVar5 = (ulong *)(plVar8 + 1);
          plVar7 = (long *)((long)plVar8 + *plVar8 + 0x20U);
          if (CARRY8((ulong)plVar8,*plVar8 + 0x20U)) {
            plVar7 = (long *)0xffffffffffffffff;
          }
          if (plVar8 < plVar1 && plVar9 < plVar7) {
            DAT_1000c111 = 0;
            return false;
          }
        }
      }
      puVar5 = (ulong *)&DAT_1000c118;
      uVar3 = 0;
      do {
        uVar6 = uVar3;
        uVar3 = *puVar5;
        puVar5 = (ulong *)(uVar3 + 8);
        uStack_70 = uVar6;
      } while (uVar3 != 0);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        recovered_10002c3c(*param_1,*param_2,&uStack_70);
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      if (DAT_1000c120 == 0) {
        DAT_1000c120 = DAT_1000c118;
      }
      DAT_1000c111 = 0;
      bVar2 = uStack_70 != uVar6;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

#undef DAT_1000c111
#undef DAT_1000c118
#undef DAT_1000c120
#undef local_61
#undef uStack_70

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#define local_20 (*(ulong *)(pf_stack_frame + 16))
#define uStack_18 (*(ulong *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b30
 */

bool recovered_10000b30(ulong param_1,ulong param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_20 = param_2;
  uStack_18 = param_1;
  recovered_1000063c();
  bVar1 = recovered_10000934(&uStack_18,&local_20,1);
  DAT_1000c114 = 0;
  return bVar1;
}

#undef DAT_1000c114
#undef local_20
#undef uStack_18

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000b6c
 */

ulong recovered_10000b6c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000063c();
  recovered_10000674();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      uVar1 = *plVar2 + uVar1;
    }
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_1000c114 = 0;
  return uVar1;
}

#undef DAT_1000c114
#undef DAT_1000c118

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000bcc
 */

long recovered_10000bcc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1000063c();
  recovered_10000674();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    if ((char)plVar2[3] == '\x01') {
      lVar1 = *plVar2 + lVar1;
    }
  }
  DAT_1000c114 = 0;
  return lVar1;
}

#undef DAT_1000c114
#undef DAT_1000c118

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c20
 */

ulong recovered_10000c20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long *plVar2;

  recovered_1000063c();
  recovered_10000674();
  uVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    uVar1 = *plVar2 + uVar1;
  }
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  DAT_1000c114 = 0;
  return uVar1;
}

#undef DAT_1000c114
#undef DAT_1000c118

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000c70
 */

long recovered_10000c70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;

  recovered_1000063c();
  recovered_10000674();
  lVar1 = 0;
  for (plVar2 = &DAT_1000c118; plVar2 = (long *)*plVar2, plVar2 != (long *)0x0; plVar2 = plVar2 + 1)
  {
    lVar1 = *plVar2 + lVar1;
  }
  DAT_1000c114 = 0;
  return lVar1;
}

#undef DAT_1000c114
#undef DAT_1000c118

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cb4
 */

void recovered_10000cb4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000063c();
  recovered_10000ce0(param_1,(ulong *)0x0,(ulong *)0xffffffffffffffff);
  DAT_1000c114 = 0;
  return;
}

#undef DAT_1000c114

#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ce0
 */

ulong * recovered_10000ce0(long param_1,ulong *param_2,ulong *param_3)

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
    recovered_10000674();
    puVar4 = DAT_1000c118;
    puVar3 = DAT_1000c118;
    if (DAT_1000c120 != (ulong *)0x0) {
      puVar3 = DAT_1000c120;
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
                if (uVar9 < uVar7) goto LAB_10000d90;
              }
            }
            else {
              uVar9 = 0;
              puVar8 = puVar2;
LAB_10000d90:
              if ((puVar8 <= param_3 && uVar5 - 1 <= (ulong)((long)param_3 - (long)puVar8)) &&
                 (uVar9 <= uVar7 && uVar5 <= uVar7 - uVar9)) {
                if (uVar5 - 1 < uVar7) {
                  if (uVar7 - uVar5 < 0x30) {
                    if (uVar7 < 0xffffffffffffffe0) goto LAB_10000dcc;
                  }
                  else if (uVar1 < 0xffffffffffffffbf || param_1 == -0x50) {
LAB_10000dcc:
                    puVar11 = puVar10;
                    if (uVar9 == 0) goto LAB_10000e74;
                    uVar9 = uVar9 + uVar5;
                    if (uVar9 - 1 < uVar7) {
                      if (uVar7 - uVar9 < 0x30) {
                        if (uVar7 < 0xffffffffffffffe0) goto LAB_10000e28;
                      }
                      else if (uVar9 < 0xffffffffffffffc0) {
LAB_10000e28:
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
LAB_10000e74:
                        recovered_10002d90(puVar11,uVar5);
                        *(undefined1 *)(puVar11 + 3) = 0;
                        DAT_1000c120 = DAT_1000c118;
                        if ((ulong *)puVar11[1] != (ulong *)0x0) {
                          DAT_1000c120 = (ulong *)puVar11[1];
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

#undef DAT_1000c118
#undef DAT_1000c120

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e9c
 */

void recovered_10000e9c(long param_1,ulong *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000063c();
  recovered_10000ce0(param_1,(ulong *)0x0,param_2);
  DAT_1000c114 = 0;
  return;
}

#undef DAT_1000c114

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000ed4
 */

ulong * recovered_10000ed4(long param_1,ulong *param_2,ulong *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;

  recovered_1000063c();
  if (param_3 < param_2) {
    puVar1 = (ulong *)0x0;
  }
  else {
    puVar1 = recovered_10000ce0(param_1,param_2,param_3);
  }
  DAT_1000c114 = 0;
  return puVar1;
}

#undef DAT_1000c114

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f18
 */

void recovered_10000f18(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000063c();
  recovered_10000f40(param_1);
  DAT_1000c114 = 0;
  return;
}

#undef DAT_1000c114

#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f40
 */

void recovered_10000f40(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  ulong *puVar2;

  if (param_1 != 0) {
    recovered_10000674();
    puVar1 = (ulong *)(param_1 + -0x20);
    *(undefined1 *)(param_1 + -8) = 1;
    recovered_10002de4(puVar1);
    puVar2 = *(ulong **)(param_1 + -0x10);
    if (((puVar2 != (ulong *)0x0) && ((char)puVar2[3] == '\x01')) &&
       ((ulong *)((long)puVar2 + *puVar2 + 0x20) == puVar1)) {
      recovered_10002de4(puVar2);
      puVar1 = puVar2;
    }
    DAT_1000c120 = puVar1;
  }
  return;
}

#undef DAT_1000c120

#undef DAT_1000c114
#define DAT_1000c114 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5484U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fb4
 */

ulong * recovered_10000fb4(ulong *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;

  recovered_1000063c();
  if (param_1 == (ulong *)0x0) {
    puVar2 = recovered_10000ce0(param_2,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    DAT_1000c114 = 0;
    return puVar2;
  }
  if (param_2 == 0) {
    recovered_10000f40((long)param_1);
    DAT_1000c114 = 0;
    return (ulong *)0x0;
  }
  if (0xfffffffffffffff0 < param_2) {
    DAT_1000c114 = 0;
    return (ulong *)0x0;
  }
  recovered_10000674();
  uVar7 = param_2 + 0xf & 0xfffffffffffffff0;
  puVar2 = param_1 + -4;
  uVar3 = *puVar2;
  if (uVar7 <= uVar3) {
    if (uVar3 <= uVar7 - 1) {
      DAT_1000c114 = 0;
      return (ulong *)0x0;
    }
    if (uVar3 - uVar7 < 0x30) {
      if (0xffffffffffffffdf < uVar3) {
        DAT_1000c114 = 0;
        return (ulong *)0x0;
      }
    }
    else if (0xffffffffffffffb0 < param_2) {
      DAT_1000c114 = 0;
      return (ulong *)0x0;
    }
    uVar1 = recovered_10002d90(puVar2,uVar7);
    if ((int)uVar1 == 0) {
      DAT_1000c114 = 0;
      return param_1;
    }
    DAT_1000c114 = 0;
    DAT_1000c120 = param_1[-3];
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
      if (0xffffffffffffffdf < uVar4) goto LAB_10018124;
    }
    else if (0xffffffffffffffb0 < param_2) goto LAB_10018124;
    do {
      uVar3 = *puVar2;
      if (uVar7 <= uVar3) goto LAB_100010e0;
      uVar3 = recovered_10002e04(puVar2);
    } while ((uVar3 & 1) != 0);
    uVar3 = *puVar2;
LAB_100010e0:
    if (uVar7 <= uVar3) {
      uVar1 = recovered_10002d90(puVar2,uVar7);
      if ((int)uVar1 != 0) {
        DAT_1000c120 = param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000c114 = 0;
      return param_1;
    }
  }
  else {
LAB_10018124:
    puVar2 = recovered_10000ce0(uVar7,(ulong *)0x0,(ulong *)0xffffffffffffffff);
    if (puVar2 != (ulong *)0x0) {
      uVar3 = param_1[-4];
      if (uVar7 <= param_1[-4]) {
        uVar3 = uVar7;
      }
      recovered_10001434(puVar2,param_1,uVar3);
      recovered_10000f40((long)param_1);
      DAT_1000c114 = 0;
      return puVar2;
    }
  }
  DAT_1000c114 = 0;
  return (ulong *)0x0;
}

#undef DAT_1000c114
#undef DAT_1000c120

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_1000115c(ulong param_1,uint param_2)

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

ulong recovered_100011a0(ulong param_1,uint param_2)

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

long recovered_100011ec(long param_1,uint param_2)

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

ulong recovered_1000123c(ulong param_1,ulong param_2)

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

ulong recovered_10001244(ulong param_1,ulong param_2,long *param_3)

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
undefined8 recovered_100012a4(undefined8 param_1,undefined8 param_2)

{
  unsigned char frame[72] = {0};


  uStack_18 = 0;
  recovered_10001244(param_1,param_2,&uStack_18);
  return uStack_18;
}

#undef uStack_18

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100012c4(ulong param_1,ulong param_2)

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
  lVar4 = recovered_10001244(uVar1,uVar2,0);
  lVar3 = -lVar4;
  if (-1 < (long)(param_2 ^ param_1)) {
    lVar3 = lVar4;
  }
  return lVar3;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define lStack_28 (*(long *)(frame + 16))
long recovered_10001304(long param_1,long param_2)

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
  recovered_10001244(lVar2,lVar1,&lStack_28);
  lVar2 = -lStack_28;
  if (-1 < param_1) {
    lVar2 = lStack_28;
  }
  return lVar2;
}

#undef lStack_28

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10001350(void)

{
  unsigned char frame[64] = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10001358(int param_1)

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
void * recovered_10001364(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_100013a8(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100013e8(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x82010800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001434
 */

void * recovered_10001434(void *destination,void *source,ulong count)

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
 * Address: 0x1000150c
 */

void * recovered_1000150c(void *destination,void *source,ulong count)

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
      destination = recovered_10001434(destination,source,count);
    }
  }
  return destination;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001620
 */

void * recovered_10001620(void *destination,int value,ulong count)

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
 * Address: 0x100016b8
 */

void recovered_100016b8(ulong *param_1,ulong param_2)

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
 * Address: 0x100016bc
 */

void recovered_100016bc(ulong *param_1,ulong param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100016c0(long param_1,char param_2,long param_3)

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
 * Address: 0x100016e4
 */

int recovered_100016e4(void *left,void *right,ulong count)

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
        goto recovered_1000184c;
      }
      if (*(long *)((long)left + lVar6 + 8) != *(long *)((long)right + lVar6 + 8)) {
        lVar4 = (long)left + lVar6 + 8;
        lVar6 = (long)right + lVar6 + 8;
        goto recovered_1000184c;
      }
      if (*(long *)((long)left + lVar6 + 0x10) != *(long *)((long)right + lVar6 + 0x10)) {
        lVar4 = (long)left + lVar6 + 0x10;
        lVar6 = (long)right + lVar6 + 0x10;
        goto recovered_1000184c;
      }
      if (*(long *)((long)left + lVar6 + 0x18) != *(long *)((long)right + lVar6 + 0x18)) {
        lVar4 = (long)left + lVar6 + 0x18;
        lVar6 = (long)right + lVar6 + 0x18;
        goto recovered_1000184c;
      }
      lVar6 = lVar6 + 0x20;
    }
    lVar7 = 0;
    for (count = uVar5; 7 < count; count = count - 8) {
      if (*(long *)((long)left + lVar6 + lVar7) != *(long *)((long)right + lVar6 + lVar7)) {
        lVar4 = (long)left + lVar7 + lVar6;
        lVar6 = (long)right + lVar7 + lVar6;
recovered_1000184c:
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
 * Address: 0x1000184c
 */

int recovered_1000184c(long param_1,long param_2)

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

bool recovered_10001878(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001888(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10001898(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018ac(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018c8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 0x20 || param_1 == 9;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100018d8(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100018e8(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100018fc(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

ulong recovered_10001910(char *text)

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

int recovered_10001934(byte *param_1,byte *param_2)

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

int recovered_1000195c(byte *param_1,byte *param_2)

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

void recovered_10001960(long param_1,long param_2)

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

long recovered_10001978(long param_1)

{
  unsigned char frame[64] = {0};

  ulong uVar1;
  void *dst;
  void *pvVar2;

  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    uVar1 = recovered_10001910((char *)param_1);
    dst = recovered_10001364(uVar1 + 1);
    pvVar2 = (void *)0x0;
    if (dst != (void *)0x0) {
      pvVar2 = recovered_10001434(dst,(void *)param_1,uVar1 + 1);
    }
  }
  return (long)pvVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_100019b4(char *param_1,char param_2)

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
 * Address: 0x100019dc
 */

long recovered_100019dc(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100019b4(param_2,*(char *)(param_1 + lVar2)), pcVar1 != (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a1c
 */

long recovered_10001a1c(long param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  lVar2 = 0;
  while ((*(char *)(param_1 + lVar2) != '\0' &&
         (pcVar1 = recovered_100019b4(param_2,*(char *)(param_1 + lVar2)), pcVar1 == (char *)0x0)))
  {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001a5c(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_100019b4(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10001a9c(char *param_1,char *param_2)

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


#undef DAT_10006dc7
#define DAT_10006dc7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x137U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ad8
 */

undefined * recovered_10001ad8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_10006dc7;
}

#undef DAT_10006dc7

#undef PTR_DAT_1000c000
#define PTR_DAT_1000c000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x5370U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001ae4
 */

undefined ** recovered_10001ae4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000c000;
}

#undef PTR_DAT_1000c000

#undef DAT_82010968
#define DAT_82010968 (*(uint8_t *)(0x82010968U))
#undef _DAT_82010968
#define _DAT_82010968 (*(uint *)(0x82010968U))
#define auStack_38 (*(undefined1 (*)[56])(pf_stack_frame + 24))
#define local_30 (*(undefined8 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001af0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001af0(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  recovered_10001620(auStack_38,0,0x18);
  bVar1 = recovered_10002e8c(0x168);
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

double recovered_10001b68(double param_1,uint param_2)

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

uint128 recovered_10001b9c(double param_1,int *param_2)

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

uint128 recovered_10001c10(double param_1,double param_2)

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

uint128 recovered_10001c34(double param_1,double param_2)

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

uint128 recovered_10001c94(double param_1)

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

uint128 recovered_10001cb0(double param_1)

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

uint128 recovered_10001cdc(double param_1)

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


#undef DAT_10006c90
#define DAT_10006c90 (*(double *)(((uintptr_t)pf_module_state + 0x0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d18
 */

uint128 recovered_10001d18(double param_1)

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
    (*(double *)((uint8_t *)&(auVar1)+0)) = (double)iVar2 * DAT_10006c90 + dVar4 * 2.0;
    return auVar1;
  }
  return ZEXT816(0xfff0000000000000);
}

#undef DAT_10006c90

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_10001dc4(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = 0.5;
  if (param_1 < 0.0) {
    dVar1 = -0.5;
  }
  return (long)(dVar1 + param_1);
}


#undef DAT_10006c98
#define DAT_10006c98 (*(double *)(((uintptr_t)pf_module_state + 0x8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001dd8
 */

uint128 recovered_10001dd8(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001e2c(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = extraout_d0 *
                 (dVar2 / -6.0 + 1.0 + (dVar2 * dVar2) / 120.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006c98);
  return auVar1;
}

#undef DAT_10006c98

#undef DAT_10006ca0
#define DAT_10006ca0 (*(double *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_10006ca8
#define DAT_10006ca8 (*(double *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_10006cb0
#define DAT_10006cb0 (*(double *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_10006cb8
#define DAT_10006cb8 (*(double *)(((uintptr_t)pf_module_state + 0x28U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e2c
 */

void recovered_10001e2c(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  for (; DAT_10006ca0 < param_1; param_1 = param_1 + DAT_10006cb8) {
  }
  for (; param_1 < DAT_10006ca8; param_1 = param_1 + DAT_10006cb0) {
  }
  return;
}

#undef DAT_10006ca0
#undef DAT_10006ca8
#undef DAT_10006cb0
#undef DAT_10006cb8

#undef DAT_10006cc0
#define DAT_10006cc0 (*(double *)(((uintptr_t)pf_module_state + 0x30U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e70
 */

uint128 recovered_10001e70(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  double extraout_d0 = 0;
  double dVar2;

  recovered_10001e2c(param_1);
  dVar2 = extraout_d0 * extraout_d0;
  PF_PART8(auVar1, 8) = 0;
  (*(double *)((uint8_t *)&(auVar1)+0)) = dVar2 * -0.5 + 1.0 + (dVar2 * dVar2) / 24.0 +
                 (dVar2 * dVar2 * dVar2) / DAT_10006cc0;
  return auVar1;
}

#undef DAT_10006cc0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001ebc(double param_1)

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

ulong recovered_10001ecc(double param_1)

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

ulong recovered_10001f2c(double param_1)

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

void recovered_10001f7c(ulong param_1)

{
  unsigned char frame[64] = {0};

  for (; param_1 != 0; param_1 = param_1 >> 1) {
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10001fa4(long param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;
  uint128 auVar2;
  double dVar3;
  double extraout_d0 = 0;
  double dVar4;

  if (param_1 < 0) {
    recovered_10001f7c(-param_1);
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

float recovered_10001fc8(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  if (param_2 == 0.0) {
    return 0.0;
  }
  return param_1 - param_2 * (float)(int)(param_1 / param_2);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10001ffc(int *in_x0,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001b9c((double)param_2,in_x0);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002014(uint in_w0,float param_2)

{
  unsigned char frame[64] = {0};

  double dVar1;

  dVar1 = recovered_10001b68((double)param_2,in_w0);
  return (float)dVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_1000202c(float param_1,float param_2)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001c34((double)param_1,(double)param_2);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002048(float param_1)

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

float recovered_1000206c(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001cb0((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10002084(double param_1)

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

float recovered_100020ac(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10002084((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100020c4(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001cdc((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_100020dc(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001d18((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100020f4(double param_1)

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

float recovered_10002108(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001dd8((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002120(float param_1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_10001e70((double)param_1);
  return (float)PF_PART8(auVar1, 0);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

float recovered_10002138(float param_1)

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

long recovered_10002148(byte *param_1,undefined8 *param_2,uint param_3)

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
    uVar3 = recovered_1000224c((uint)*pbVar4);
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

uint recovered_1000224c(int param_1)

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

long recovered_1000227c(byte *param_1,undefined8 *param_2,uint param_3)

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
    uVar5 = recovered_1000224c((uint)*pbVar6);
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

uint128 recovered_100023a0(byte *param_1,undefined8 *param_2)

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
        dVar12 = recovered_10001b68(dVar12,iVar9 * iVar6);
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

float recovered_10002530(byte *in_x0,undefined8 *in_x1)

{
  unsigned char frame[64] = {0};

  uint128 auVar1;

  auVar1 = recovered_100023a0(in_x0,in_x1);
  return (float)PF_PART8(auVar1, 0);
}


#undef str_10006dc9
#define str_10006dc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
#define pdStack_78 (*(double * *)(pf_stack_frame + 40))
#define local_8c (*(int *)(pf_stack_frame + 20))
#define local_88 (*(ulong *)(pf_stack_frame + 24))
#define local_80 (*(byte * *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002548
 */

int recovered_10002548(byte *param_1,ulong param_2,byte *param_3,double *param_4)

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
LAB_100025b8:
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
      goto LAB_100025e4;
    }
    goto LAB_100025e8;
  }
  pbVar8 = param_3 + 1;
  bVar9 = *pbVar8;
  if (bVar9 != 0x25) {
    pbVar8 = param_3 + 2;
    do {
      switch((uintptr_t)(bVar9)) {
      case 0x2a:
        goto code_r0x10002678;
      case 0x2c:
      case 0x2e:
      case 0x2f:
        goto LAB_10002660;
      default:
        if ((bVar9 != 0x20) && (bVar9 != 0x23)) goto LAB_10002660;
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
  goto LAB_10002940;
LAB_10002660:
  do {
    pbVar8 = param_3 + 1;
    bVar9 = *pbVar8;
    param_3 = pbVar8;
  } while (bVar9 - 0x30U < 10);
LAB_10002688:
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
LAB_10002774:
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
      goto LAB_10002774;
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
      goto LAB_100025e4;
    }
    break;
  case 100:
  case 0x69:
code_r0x10002894:
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
LAB_10002930:
    pdStack_78 = pdStack_78 + 1;
    uVar7 = 10;
code_r0x10002938:
    uVar6 = 0;
LAB_1000293c:
    recovered_10002b28((long *)&local_80,&local_88,&local_8c,(ulong)dVar5,uVar7,uVar6);
    goto LAB_10002940;
  case 0x66:
    if (bVar1) {
      pdStack_78 = pdStack_78 + 1;
      recovered_10002bc8((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x140U));
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
      recovered_10002b28((long *)&local_80,&local_88,&local_8c,(ulong)(uint)(int)dVar5,10,0);
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
    goto LAB_10002940;
  default:
    switch((uintptr_t)(bVar9)) {
    case 0x70:
      dVar5 = *pdStack_78;
      pdStack_78 = pdStack_78 + 1;
      recovered_10002bc8((long *)&local_80,&local_88,&local_8c,(char *)((uintptr_t)pf_module_state+0x16eU));
      uVar7 = 0x10;
      goto code_r0x10002938;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      break;
    case 0x73:
      pdVar3 = pdStack_78 + 1;
      pbVar13 = (byte *)str_10006dc9;
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
      goto LAB_10002940;
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
      goto LAB_10002930;
    case 0x78:
code_r0x10002850:
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
      goto LAB_1000293c;
    default:
      if (bVar9 == 0x49) goto code_r0x10002894;
      if (bVar9 == 0x58) goto code_r0x10002850;
    }
  case 0x65:
  case 0x67:
  case 0x68:
    pdVar3 = pdStack_78;
    if (1 < local_88) {
      *local_80 = 0x3f;
LAB_100025e4:
      local_80 = local_80 + 1;
      local_88 = local_88 - 1;
      pdVar3 = pdStack_78;
    }
  }
LAB_100025e8:
  pdStack_78 = pdVar3;
  local_8c = local_8c + 1;
LAB_10002940:
  param_3 = pbVar8 + 1;
  goto LAB_100025b8;
code_r0x10002678:
  pdStack_78 = pdStack_78 + 1;
  bVar9 = *pbVar8;
  goto LAB_10002688;
}

#undef str_10006dc9
#undef pdStack_78
#undef local_8c
#undef local_88
#undef local_80

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10002aec(long *param_1,ulong *param_2,int *param_3,undefined1 param_4)

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


#undef str_10006ddc
#define str_10006ddc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x14cU)))
#undef str_10006ded
#define str_10006ded (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15dU)))
#define acStack_80 (*(char (*)[128])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002b28
 */

void recovered_10002b28(long *param_1,ulong *param_2,int *param_3,ulong param_4,uint param_5,
                       int param_6)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;

  pcVar1 = str_10006ddc;
  if (param_6 == 0) {
    pcVar1 = str_10006ded;
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
    recovered_10002aec(param_1,param_2,param_3,acStack_80[lVar6]);
  }
  return;
}

#undef str_10006ddc
#undef str_10006ded
#undef acStack_80

#undef str_10006dc9
#define str_10006dc9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002bc8
 */

void recovered_10002bc8(long *param_1,ulong *param_2,int *param_3,char *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = str_10006dc9;
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_10002aec(param_1,param_2,param_3,*pcVar1);
  }
  return;
}

#undef str_10006dc9

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_10002c14(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10002548(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return result;
}


#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5480U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c3c
 */

void recovered_10002c3c(ulong param_1,ulong param_2,ulong *param_3)

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
      recovered_10002cc0(param_1,0x84000000 - param_1,param_3);
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
      puVar2 = &DAT_1000c110;
      if (DAT_1000c118 != 0) {
        puVar2 = puVar5;
      }
      *(long **)(puVar2 + 8) = plVar3;
      *param_3 = (ulong)plVar3;
      if (DAT_1000c120 == (long *)0x0) {
        DAT_1000c120 = plVar3;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120

#undef DAT_1000c110
#define DAT_1000c110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5480U)))
#undef DAT_1000c118
#define DAT_1000c118 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5488U)))
#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002cc0
 */

void recovered_10002cc0(ulong param_1,ulong param_2,ulong *param_3)

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
      puVar1 = &DAT_1000c110;
      if (DAT_1000c118 != 0) {
        puVar1 = puVar4;
      }
      *(long **)(puVar1 + 8) = plVar2;
      *param_3 = (ulong)plVar2;
      if (DAT_1000c120 == (long *)0x0) {
        DAT_1000c120 = plVar2;
        return;
      }
    }
  }
  return;
}

#undef DAT_1000c110
#undef DAT_1000c118
#undef DAT_1000c120

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d40
 */

void recovered_10002d40(ulong param_1,ulong param_2,undefined1 *param_3)

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
 * Address: 0x10002d90
 */

undefined8 recovered_10002d90(ulong *param_1,long param_2)

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
 * Address: 0x10002de4
 */

void recovered_10002de4(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  do {
    uVar1 = recovered_10002e04(param_1);
  } while ((uVar1 & 1) != 0);
  return;
}


#undef DAT_1000c120
#define DAT_1000c120 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5490U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e04
 */

undefined8 recovered_10002e04(ulong *param_1)

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
      if (DAT_1000c120 == puVar2) {
        DAT_1000c120 = param_1;
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

#undef DAT_1000c120

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
 * Address: 0x10002e8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10002e8c(int param_1)

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

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003024
 */

void recovered_10003024(char *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (param_1 != (char *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c130 != 0) {
          DAT_1000c130 = DAT_1000c130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100030dc(1);
        }
        else {
          if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
            recovered_100030dc(0);
          }
          pcVar1 = &DAT_1000c138 + DAT_1000c130;
          DAT_1000c130 = DAT_1000c130 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define local_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100030dc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100030dc(int param_1)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if ((DAT_1000c130 != 0) || (param_1 != 0)) {
    if (DAT_1000c130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10001434(local_230,&DAT_1000c138,DAT_1000c130);
      uVar2 = DAT_1000c130;
    }
    local_230[uVar2] = 0;
    bVar1 = recovered_10003e4c(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(local_230);
    }
    DAT_1000c130 = 0;
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138
#undef DAT_82010840
#undef _DAT_82010840
#undef local_230

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003168
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003168(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c130 == 0) {
    uVar2 = 0;
  }
  else {
    recovered_10001434(auStack_230,&DAT_1000c138,DAT_1000c130);
    uVar2 = DAT_1000c130;
  }
  auStack_230[uVar2] = 0;
  bVar1 = recovered_10003e4c(0x40);
  if ((bVar1) && (_DAT_82010840 != 0)) {
    (*(code *)(ulong)_DAT_82010840)(auStack_230);
  }
  DAT_1000c130 = 0;
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
#undef DAT_82010840
#define DAT_82010840 (*(uint8_t *)(0x82010840U))
#undef _DAT_82010840
#define _DAT_82010840 (*(uint *)(0x82010840U))
#define auStack_230 (*(undefined1 (*)[560])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003170
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003170(void)

{
  unsigned char pf_stack_frame[608] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;

  if (DAT_1000c130 != 0) {
    if (DAT_1000c130 == 0) {
      uVar2 = 0;
    }
    else {
      recovered_10001434(auStack_230,&DAT_1000c138,DAT_1000c130);
      uVar2 = DAT_1000c130;
    }
    auStack_230[uVar2] = 0;
    bVar1 = recovered_10003e4c(0x40);
    if ((bVar1) && (_DAT_82010840 != 0)) {
      (*(code *)(ulong)_DAT_82010840)(auStack_230);
    }
    DAT_1000c130 = 0;
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138
#undef DAT_82010840
#undef _DAT_82010840
#undef auStack_230

#undef DAT_10006e01
#define DAT_10006e01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171U)))
#define acStack_160 (*(char (*)[352])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003178
 */

void recovered_10003178(char *param_1)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  char *format;
  uint uVar1;

  format = &DAT_10006e01;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  uVar1 = recovered_10002c14(acStack_160,0x140,format);
  if (0 < (int)uVar1) {
    recovered_10003024(acStack_160,(ulong)uVar1);
  }
  return;
}

#undef DAT_10006e01
#undef acStack_160

#undef DAT_10006e1f
#define DAT_10006e1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
#undef str_10006e04
#define str_10006e04 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x174U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100031dc
 */

/* WARNING: Removing unreachable block (ram,0x10003228) */

void recovered_100031dc(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10003200(str_10006e04);
  pcVar4 = &DAT_10006e1f;
  for (uVar3 = recovered_10001910(&DAT_10006e1f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c130 != 0) {
        DAT_1000c130 = DAT_1000c130 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100030dc(1);
      }
      else {
        if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
          recovered_100030dc(0);
        }
        pcVar1 = &DAT_1000c138 + DAT_1000c130;
        DAT_1000c130 = DAT_1000c130 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10006e1f
#undef DAT_1000c130
#undef DAT_1000c138
#undef str_10006e04

#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003200
 */

void recovered_10003200(char *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = recovered_10001910(param_1);
  if (param_1 != (char *)0x0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000c130 != 0) {
          DAT_1000c130 = DAT_1000c130 + -1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          recovered_100030dc(1);
        }
        else {
          if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
            recovered_100030dc(0);
          }
          pcVar1 = &DAT_1000c138 + DAT_1000c130;
          DAT_1000c130 = DAT_1000c130 + 1;
          *pcVar1 = cVar2;
        }
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}

#undef DAT_1000c130
#undef DAT_1000c138

#undef DAT_10006e1f
#define DAT_10006e1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x18fU)))
#undef DAT_1000c130
#define DAT_1000c130 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x54a0U)))
#undef DAT_1000c138
#define DAT_1000c138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x54a8U)))
#undef str_10006e22
#define str_10006e22 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x192U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000322c
 */

/* WARNING: Removing unreachable block (ram,0x10003228) */

void recovered_1000322c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;

  recovered_10003200(str_10006e22);
  pcVar4 = &DAT_10006e1f;
  for (uVar3 = recovered_10001910(&DAT_10006e1f); uVar3 != 0; uVar3 = uVar3 - 1) {
    cVar2 = *pcVar4;
    if (cVar2 == '\b') {
      if (DAT_1000c130 != 0) {
        DAT_1000c130 = DAT_1000c130 + -1;
      }
    }
    else if (cVar2 != '\r') {
      if (cVar2 == '\n') {
        recovered_100030dc(1);
      }
      else {
        if (DAT_1000c130 - 0x1ffU < 0xfffffffffffffdff || DAT_1000c130 == -2) {
          recovered_100030dc(0);
        }
        pcVar1 = &DAT_1000c138 + DAT_1000c130;
        DAT_1000c130 = DAT_1000c130 + 1;
        *pcVar1 = cVar2;
      }
    }
    pcVar4 = pcVar4 + 1;
  }
  return;
}

#undef DAT_10006e1f
#undef DAT_1000c130
#undef DAT_1000c138
#undef str_10006e22

#undef DAT_82010844
#define DAT_82010844 (*(uint8_t *)(0x82010844U))
#undef _DAT_82010844
#define _DAT_82010844 (*(uint *)(0x82010844U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003250(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  int iVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_10003170();
    bVar2 = recovered_10003e4c(0x44);
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

undefined8 recovered_100032c8(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100032cc(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_100032d0(void)

{
  unsigned char frame[64] = {0};

  return 1;
}


#undef DAT_10006e01
#define DAT_10006e01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
#undef str_10006ea3
#define str_10006ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#undef str_10006eb0
#define str_10006eb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10006ebe
#define str_10006ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032d8
 */

undefined4 * recovered_100032d8(byte *param_1,char *param_2)

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
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001934((char *)param_1,str_10006ea3);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001934((char *)param_1,str_10006eb0);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001934((char *)param_1,str_10006ebe);
      if (iVar3 != 0) {
        puVar4 = recovered_10001364(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001620(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100019b4(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019b4(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019b4(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100019b4(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019b4(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019b4(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100019b4(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002c14((char *)(puVar4 + 1),0xf1,&DAT_10006e01);
        recovered_10001620(&uStack_4c,0,0xc);
        uVar6 = recovered_10003514(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_100034bc:
            recovered_100013a8(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019b4(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10003564((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100034bc;
              recovered_10001434(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10001364(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001620(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002c14((char *)(puVar4 + 1),0xf1,&DAT_10006e01);
  return puVar4;
}

#undef DAT_10006e01
#undef DAT_1000c058
#undef str_10006ea3
#undef str_10006eb0
#undef str_10006ebe
#undef uStack_4c
#undef uStack_48

#undef DAT_82010834
#define DAT_82010834 (*(uint8_t *)(0x82010834U))
#undef _DAT_82010834
#define _DAT_82010834 (*(uint *)(0x82010834U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003514
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003514(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e4c(0x34);
  if ((bVar1) && (_DAT_82010834 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010834)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010834
#undef _DAT_82010834

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003564
 */

undefined8 recovered_10003564(long param_1,ulong param_2)

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
      pvVar2 = recovered_100013e8(*(void **)(param_1 + 0x100),uVar4);
      if (pvVar2 == (void *)0x0) {
        DAT_1000c058 = 0xc;
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

#undef DAT_1000c058

#undef DAT_10006e01
#define DAT_10006e01 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x171U)))
#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
#undef str_10006ea3
#define str_10006ea3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x213U)))
#undef str_10006eb0
#define str_10006eb0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x220U)))
#undef str_10006ebe
#define str_10006ebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x22eU)))
#define uStack_4c (*(uint *)(pf_stack_frame + 20))
#define uStack_48 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035ec
 */

undefined4 * recovered_100035ec(byte *param_1,char *param_2,int *param_3)

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
    recovered_10003620(param_3);
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (char *)0x0)) {
    DAT_1000c058 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar2 = recovered_10001934((char *)param_1,str_10006ea3);
  if (iVar2 == 0) {
    uVar8 = 1;
  }
  else {
    iVar3 = recovered_10001934((char *)param_1,str_10006eb0);
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    else {
      iVar3 = recovered_10001934((char *)param_1,str_10006ebe);
      if (iVar3 != 0) {
        puVar4 = recovered_10001364(0x340);
        if (puVar4 == (undefined4 *)0x0) {
          DAT_1000c058 = 0xc;
          return (undefined4 *)0x0;
        }
        recovered_10001620(puVar4,0,0x340);
        *puVar4 = 0;
        pcVar5 = recovered_100019b4(param_2,'r');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019b4(param_2,'+'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019b4(param_2,'a');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)(puVar4 + 0x49) = bVar1;
        pcVar5 = recovered_100019b4(param_2,'w');
        if ((pcVar5 == (char *)0x0) &&
           (pcVar5 = recovered_100019b4(param_2,'a'), pcVar5 == (char *)0x0)) {
          pcVar5 = recovered_100019b4(param_2,'+');
          bVar1 = pcVar5 != (char *)0x0;
        }
        else {
          bVar1 = true;
        }
        *(bool *)((long)puVar4 + 0x125) = bVar1;
        pcVar5 = recovered_100019b4(param_2,'a');
        *(bool *)((long)puVar4 + 0x126) = pcVar5 != (char *)0x0;
        puVar4[0x48] = 0xffffffff;
        recovered_10002c14((char *)(puVar4 + 1),0xf1,&DAT_10006e01);
        recovered_10001620(&uStack_4c,0,0xc);
        uVar6 = recovered_10003514(param_1,&uStack_4c);
        if ((int)uVar6 == 0) {
          if ((*(byte *)((long)puVar4 + 0x125) & 1) == 0) {
            DAT_1000c058 = 2;
LAB_100034bc:
            recovered_100013a8(puVar4);
            return (undefined4 *)0x0;
          }
        }
        else {
          pcVar5 = recovered_100019b4(param_2,'w');
          if ((pcVar5 == (char *)0x0) && (uVar7 = (ulong)uStack_48, uStack_48 != 0)) {
            if (*(char *)((long)puVar4 + 0x125) == '\x01') {
              uVar7 = recovered_10003564((long)puVar4,uVar7);
              if ((uVar7 & 1) == 0) goto LAB_100034bc;
              recovered_10001434(*(void **)(puVar4 + 0x40),(void *)(ulong)uStack_4c,(ulong)uStack_48
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
  puVar4 = recovered_10001364(0x340);
  if (puVar4 == (undefined4 *)0x0) {
    DAT_1000c058 = 0xc;
    return (undefined4 *)0x0;
  }
  recovered_10001620(puVar4,0,0x340);
  *puVar4 = uVar8;
  *(bool *)(puVar4 + 0x49) = iVar2 == 0;
  *(bool *)((long)puVar4 + 0x125) = iVar2 != 0;
  puVar4[0x48] = 0xffffffff;
  recovered_10002c14((char *)(puVar4 + 1),0xf1,&DAT_10006e01);
  return puVar4;
}

#undef DAT_10006e01
#undef DAT_1000c058
#undef str_10006ea3
#undef str_10006eb0
#undef str_10006ebe
#undef uStack_4c
#undef uStack_48

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003620(int *param_1)

{
  unsigned char frame[64] = {0};

  undefined8 uVar1;

  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_10003a44(param_1);
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      recovered_100013a8(*(void **)(param_1 + 0x40));
    }
    recovered_100013a8(param_1);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003664
 */

ulong recovered_10003664(undefined1 *param_1,ulong param_2,ulong param_3,int *param_4)

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
          recovered_10001434(param_1,(void *)(*(long *)(param_4 + 0x3e) + uVar5),count);
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
            uVar4 = recovered_10003798(param_4);
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


#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003798
 */

uint recovered_10003798(int *param_1)

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
LAB_10003830:
        *(ulong *)(param_1 + 0xce) = uVar4 + 1;
        return (uint)*(byte *)((long)param_1 + uVar4 + 0x12a);
      }
      text = (char *)((long)param_1 + 0x12a);
      bVar2 = recovered_10003250((long)text,0x1fe,&DAT_10006ddb,0);
      if (bVar2) {
        uVar3 = recovered_10001910(text);
        uVar4 = 0;
        *(ulong *)(param_1 + 0xcc) = uVar3 + 1;
        text[uVar3] = '\n';
        text[*(long *)(param_1 + 0xcc)] = '\0';
        goto LAB_10003830;
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

#undef DAT_10006ddb

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_1000387c(long param_1,long param_2,long param_3,uint *param_4)

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
      recovered_10003024((char *)param_1,uVar5);
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
    uVar1 = recovered_10003564((long)param_4,lVar2 + uVar5);
    if ((int)uVar1 != 0) {
      uVar3 = *(ulong *)(param_4 + 0x46);
      uVar4 = *(ulong *)(param_4 + 0x42);
      if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
        recovered_10001620((void *)(*(long *)(param_4 + 0x40) + uVar4),0,uVar3 - uVar4);
        uVar3 = *(ulong *)(param_4 + 0x46);
      }
      recovered_10001434((void *)(*(long *)(param_4 + 0x40) + uVar3),(void *)param_1,uVar5);
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


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000398c
 */

undefined8 recovered_1000398c(int *param_1,ulong param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == (int *)0x0) {
    DAT_1000c058 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar1 = 0x118;
      }
      else {
        if (param_3 != 2) goto LAB_10003998;
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
LAB_10003998:
  DAT_1000c058 = 0x16;
  *(undefined1 *)((long)param_1 + 0x129) = 1;
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a20
 */

undefined8 recovered_10003a20(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x118);
}

#undef DAT_1000c058

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003a44
 */

undefined8 recovered_10003a44(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0) && (*(char *)((long)param_1 + 0x127) == '\x01')) {
      uVar1 = recovered_10003c20(param_1 + 1,*(undefined8 *)(param_1 + 0x3e),
                                 (ulong)(uint)param_1[0x42]);
      if ((int)uVar1 == 0) {
        DAT_1000c058 = 5;
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

#undef DAT_1000c058

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10003ab8(long param_1)

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

undefined1 recovered_10003ac4(long param_1)

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

void recovered_10003ad0(long param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10003ae4(uint param_1,long param_2)

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


#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b08
 */

undefined8 recovered_10003b08(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if (param_1 == 0) {
    DAT_1000c058 = 0x16;
  }
  else {
    uVar1 = recovered_10003b40(param_1);
    if ((int)uVar1 != 0) {
      return 0;
    }
    DAT_1000c058 = 5;
  }
  return 0xffffffff;
}

#undef DAT_1000c058

#undef DAT_8201083c
#define DAT_8201083c (*(uint8_t *)(0x8201083cU))
#undef _DAT_8201083c
#define _DAT_8201083c (*(uint *)(0x8201083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003b40(undefined8 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e4c(0x3c);
  if ((bVar1) && (_DAT_8201083c != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_8201083c)(param_1);
    return uVar2;
  }
  return 0;
}

#undef DAT_8201083c
#undef _DAT_8201083c

#undef DAT_1000c058
#define DAT_1000c058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c8U)))
#define uStack_28 (*(uint *)(pf_stack_frame + 24))
#define uStack_2c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b84
 */

undefined8 recovered_10003b84(long param_1,long param_2)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;

  if ((param_1 == 0) || (param_2 == 0)) {
    DAT_1000c058 = 0x16;
  }
  else {
    recovered_10001620(&uStack_2c,0,0xc);
    uVar1 = recovered_10003514(param_1,&uStack_2c);
    if ((int)uVar1 == 0) {
      DAT_1000c058 = 2;
    }
    else {
      uVar1 = recovered_10003c20(param_2,(ulong)uStack_2c,(ulong)uStack_28);
      if (((int)uVar1 != 0) && (uVar1 = recovered_10003b40(param_1), (int)uVar1 != 0)) {
        return 0;
      }
      DAT_1000c058 = 5;
    }
  }
  return 0xffffffff;
}

#undef DAT_1000c058
#undef uStack_28
#undef uStack_2c

#undef DAT_82010838
#define DAT_82010838 (*(uint8_t *)(0x82010838U))
#undef _DAT_82010838
#define _DAT_82010838 (*(uint *)(0x82010838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10003c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_10003e4c(0x38);
  if ((bVar1) && (_DAT_82010838 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x10003c70. Too many branches */
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
undefined8 recovered_10003c80(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[108] = {0};

  uint uVar1;
  undefined8 uVar2;
  void *dst;
  ulong uVar3;

  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (long *)0x0)) && (param_3 != (ulong *)0x0)) {
    recovered_10001620(&uStack_3c,0,0xc);
    uVar2 = recovered_10003514(param_1,&uStack_3c);
    if ((int)uVar2 != 0) {
      uVar1 = uStack_38;
      if (uStack_38 < 2) {
        uVar1 = 1;
      }
      dst = recovered_10001364((ulong)uVar1);
      uVar2 = 0;
      if (dst != (void *)0x0) {
        if (uStack_38 == 0) {
          uVar3 = 0;
        }
        else {
          recovered_10001434(dst,(void *)(ulong)uStack_3c,(ulong)uStack_38);
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

bool recovered_10003d20(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = false;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      return false;
    }
    uVar2 = recovered_10003c20(param_1,param_2,param_3);
    bVar1 = (int)uVar2 != 0;
  }
  return bVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003d4c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003d50(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003d54(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003d58(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003d5c(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10003d60(byte *param_1,byte *param_2,long param_3)

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


#undef DAT_10006e32
#define DAT_10006e32 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1a2U)))
#undef str_10006e35
#define str_10006e35 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1a5U)))
#undef str_10006e42
#define str_10006e42 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b2U)))
#undef str_10006e4c
#define str_10006e4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1bcU)))
#undef str_10006e60
#define str_10006e60 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1d0U)))
#undef str_10006e6e
#define str_10006e6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1deU)))
#undef str_10006e80
#define str_10006e80 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1f0U)))
#undef str_10006e8c
#define str_10006e8c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1fcU)))
#undef str_10006e9d
#define str_10006e9d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x20dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

char * recovered_10003d90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  switch((uintptr_t)(param_1)) {
  case 0:
    return &DAT_10006e32;
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
    goto switchD_10003dbc_caseD_1;
  case 2:
    return str_10006e35;
  case 5:
    return str_10006e42;
  case 9:
    return str_10006e4c;
  case 0xc:
    return str_10006e60;
  case 0xd:
    return str_10006e6e;
  default:
    if (param_1 == 0x11) {
      return str_10006e80;
    }
    if (param_1 == 0x16) {
      return str_10006e8c;
    }
switchD_10003dbc_caseD_1:
    return str_10006e9d;
  }
}

#undef DAT_10006e32
#undef str_10006e35
#undef str_10006e42
#undef str_10006e4c
#undef str_10006e60
#undef str_10006e6e
#undef str_10006e80
#undef str_10006e8c
#undef str_10006e9d

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003e30(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10003e34(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000c128
#define DAT_1000c128 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5498U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003e38
 */

void recovered_10003e38(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c128 = DAT_1000c128 + 1;
  return;
}

#undef DAT_1000c128

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
 * Address: 0x10003e4c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10003e4c(int param_1)

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
__attribute__((naked,noreturn)) void recovered_10003f18(void *context,...){
 __asm__ volatile("ldr x16, [x0, #0x50]\nmov sp, x16\nldr x29, [x0, #0x40]\nldr x16, [x0, #0x48]\nbr x16");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10003f2c(void *context){
 __asm__ volatile("stp x19, x20, [x0]\nstp x21, x22, [x0, #0x10]\nstp x23, x24, [x0, #0x20]\nstp x25, x26, [x0, #0x30]\nstp x27, x28, [x0, #0x40]\nstp x29, x30, [x0, #0x50]\nmov x8, sp\nstr x8, [x0, #0x60]\nstp d8, d9, [x0, #0x68]\nstp d10, d11, [x0, #0x78]\nstp d12, d13, [x0, #0x88]\nstp d14, d15, [x0, #0x98]\nmrs x8, tpidr_el0\nmrs x9, tpidrro_el0\nstr x8, [x0, #0xa8]\nstr x9, [x0, #0xb0]\nmrs x8, fpcr\nmrs x9, fpsr\nstr w8, [x0, #0xb8]\nstr w9, [x0, #0xbc]\nmov w0, #0\nret");
}


/* Native register context transfer and floating/thread state.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) int recovered_10003f88(long context,int value){
 __asm__ volatile("cbnz w1,1f\nmov w1, #1\n1:\nldp x19, x20, [x0]\nldp x21, x22, [x0, #0x10]\nldp x23, x24, [x0, #0x20]\nldp x25, x26, [x0, #0x30]\nldp x27, x28, [x0, #0x40]\nldp x29, x30, [x0, #0x50]\nldr x8, [x0, #0x60]\nmov sp, x8\nldp d8, d9, [x0, #0x68]\nldp d10, d11, [x0, #0x78]\nldp d12, d13, [x0, #0x88]\nldp d14, d15, [x0, #0x98]\nldr x8, [x0, #0xa8]\nldr x9, [x0, #0xb0]\nmsr tpidr_el0, x8\nmsr tpidrro_el0, x9\nldr w8, [x0, #0xb8]\nldr w9, [x0, #0xbc]\nmsr fpcr, x8\nmsr fpsr, x9\nmov w0, w1\nret");
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003fec
 */

void recovered_10003fec(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  recovered_10001350();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10003ffc);
  (*pcVar1)();
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004000
 */

undefined8 recovered_10004000(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10004008(long param_1)

{
  unsigned char frame[64] = {0};

  recovered_10004018(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10003fec();
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004018
 */

long recovered_10004018(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_1000421c(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fec();
  }
  *(long *)(lVar1 + 0x10) = DAT_1000c338;
  *(undefined1 *)(lVar1 + 0x34) = 0;
  DAT_1000c338 = lVar1;
  return lVar1 + 0x38;
}

#undef DAT_1000c338

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004044
 */

void * recovered_10004044(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10001364(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001350();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004074
 */

void * recovered_10004074(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10001364(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001350();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004078
 */

void recovered_10004078(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a8(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004090
 */

void recovered_10004090(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a8(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040a8
 */

void recovered_100040a8(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a8(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040c0
 */

void recovered_100040c0(void *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100013a8(param_1);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040d8
 */

undefined8 recovered_100040d8(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040e0
 */

uint recovered_100040e0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (*param_1 ^ 0xffffffff) & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040f0
 */

void recovered_100040f0(ulong *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004100
 */

void recovered_10004100(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000c348
#define DAT_1000c348 (*(int *)(((uintptr_t)pf_module_state + 0x56b8U)))
#undef DAT_1000c350
#define DAT_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004104
 */

long recovered_10004104(ulong param_1)

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
  pvVar1 = recovered_10001364(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fec();
  }
  for (uVar3 = 0; param_1 + 0x38 != uVar3; uVar3 = uVar3 + 1) {
    *(undefined1 *)((long)pvVar1 + uVar3) = 0;
  }
  iVar2 = DAT_1000c348;
  do {
    DAT_1000c348 = 1;
    if (1 < iVar2 + 1U) {
      DAT_1000c348 = iVar2 + 1;
    }
    plVar4 = (long *)&DAT_1000c350;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) {
        *(int *)((long)pvVar1 + 0x30) = DAT_1000c348;
        *(void **)((long)pvVar1 + 0x18) = DAT_1000c350;
        DAT_1000c350 = pvVar1;
        return (long)pvVar1 + 0x38;
      }
      plVar4 = (long *)(lVar5 + 0x18);
      iVar2 = DAT_1000c348;
    } while (*(int *)(lVar5 + 0x30) != DAT_1000c348);
  } while( true );
}

#undef DAT_1000c348
#undef DAT_1000c350

#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041ac
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100041ac(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  if (param_1 == 0) {
    return;
  }
  recovered_100041dc(param_1 + -0x38);
  bVar1 = recovered_10002e8c(0x50);
  if ((bVar1) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)_DAT_82010850)(param_1 + -0x38);
    return;
  }
  return;
}

#undef DAT_82010850
#undef _DAT_82010850

#undef DAT_1000c350
#define DAT_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100041dc
 */

void recovered_100041dc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  long lVar3;

  if (param_1 != 0) {
    puVar2 = &DAT_1000c350;
    lVar1 = DAT_1000c350;
    if (DAT_1000c350 != param_1) {
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

#undef DAT_1000c350

#undef DAT_1000c350
#define DAT_1000c350 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56c0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000421c
 */

long recovered_1000421c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;

  plVar1 = &DAT_1000c350;
  while ((lVar2 = *plVar1, lVar2 != 0 && lVar2 != param_1 &&
         (*(int *)(lVar2 + 0x30) != (int)param_1))) {
    plVar1 = (long *)(lVar2 + 0x18);
  }
  return lVar2;
}

#undef DAT_1000c350

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000424c
 */

long recovered_1000424c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 + 0x38;
}


#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56a8U)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004254
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004254(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  bool bVar3;

  lVar2 = DAT_1000c338;
  if (DAT_1000c338 != 0) {
    puVar1 = (undefined8 *)(DAT_1000c338 + 0x10);
    DAT_1000c338 = *(long *)(DAT_1000c338 + 0x10);
    *puVar1 = 0;
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      if (*(code **)(lVar2 + 8) != (code *)0x0) {
        (**(code **)(lVar2 + 8))(lVar2 + 0x38);
      }
      recovered_100041dc(lVar2);
      bVar3 = recovered_10002e8c(0x50);
      if ((bVar3) && (_DAT_82010850 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(ulong)_DAT_82010850)(lVar2);
        return;
      }
      return;
    }
  }
  return;
}

#undef DAT_1000c338
#undef DAT_82010850
#undef _DAT_82010850

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042b4
 */

void recovered_100042b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined8 *)(param_1 + -0x38) = param_2;
  *(undefined8 *)(param_1 + -0x30) = param_3;
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -0x18) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100042d4((undefined8 *)(param_1 + -0x38));
}


#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56b0U)))
#define local_30 (*(undefined2 *)(pf_stack_frame + 16))
#define cStack_2e (*(char *)(pf_stack_frame + 18))
#define local_28 (*(undefined4 *)(pf_stack_frame + 24))
#define uStack_2d (*(undefined1 *)(pf_stack_frame + 19))
#define uStack_2c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100042d4
 */

void recovered_100042d4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined8 *puVar2;

  puVar2 = &DAT_1000c340;
  do {
    puVar2 = (undefined8 *)*puVar2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_10004334;
    local_28 = 0;
    local_30 = 0;
    cStack_2e = '\0';
    uStack_2d = 0;
    uStack_2c = 0;
    uVar1 = recovered_100048c8((long)puVar2,(long *)*param_1,&local_30);
  } while (((int)uVar1 == 0) || (cStack_2e != '\x01'));
  param_1[4] = puVar2;
  param_1[5] = CONCAT44(local_28,uStack_2c);
  recovered_100043ec(param_1);
LAB_10004334:
                    /* WARNING: Subroutine does not return */
  recovered_10003fec();
}

#undef DAT_1000c340
#undef local_30
#undef cStack_2e
#undef local_28
#undef uStack_2d
#undef uStack_2c

#undef DAT_1000c338
#define DAT_1000c338 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x56a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004338
 */

void recovered_10004338(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  puVar1 = DAT_1000c338;
  if (DAT_1000c338 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fec();
  }
  *(undefined1 *)((long)DAT_1000c338 + 0x34) = 1;
  puVar1[5] = 0;
  puVar1[4] = 0;
                    /* WARNING: Subroutine does not return */
  recovered_100042d4(puVar1);
}

#undef DAT_1000c338

#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x56b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004368
 */

void recovered_10004368(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000c340;
  DAT_1000c340 = param_1;
  return;
}

#undef DAT_1000c340

#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56b0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000437c
 */

void recovered_1000437c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;

  puVar1 = &DAT_1000c340;
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

#undef DAT_1000c340

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043a8
 */

void recovered_100043a8(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_100042d4(param_1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043b4
 */

void recovered_100043b4(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003fec();
}


#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x56b0U)))
#define uStack_50 (*(undefined8 *)(pf_stack_frame + 16))
#define uStack_48 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043c0
 */

undefined8 recovered_100043c0(long param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined8 *puVar2;
  long extraout_x0;
  long *plVar3;

  puVar2 = (undefined8 *)recovered_1000421c(param_1);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10003fec();
  }
  if (DAT_1000c340 != (long *)0x0) {
    DAT_1000c340 = (long *)*DAT_1000c340;
  }
  puVar2 = (undefined8 *)recovered_100043ec(puVar2);
  plVar3 = DAT_1000c340;
  while( true ) {
    DAT_1000c340 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003fec();
    }
    if (plVar3 == (long *)puVar2[4]) break;
    uStack_48 = 0;
    uStack_50 = 0;
    recovered_100048c8((long)plVar3,(long *)*puVar2,(undefined2 *)&uStack_50);
    if (((char)uStack_50 == '\x01') && (PF_PART1(uStack_50, 1) == '\x01')) {
      plVar3[2] = (long)puVar2;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)(plVar3 + 1) = PF_PART4(uStack_50, 4);
      goto LAB_10004480;
    }
    plVar3 = (long *)*plVar3;
  }
  plVar3[2] = (long)puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)(plVar3 + 3) = *(undefined4 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = uVar1;
LAB_10004480:
  recovered_10003f18((long)plVar3);
  recovered_100043c0(extraout_x0);
  return 0;
}

#undef DAT_1000c340
#undef uStack_50
#undef uStack_48

#undef DAT_1000c340
#define DAT_1000c340 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x56b0U)))
#define local_40 (*(undefined8 *)(pf_stack_frame + 16))
#define local_38 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100043ec
 */

undefined8 recovered_100043ec(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  long extraout_x0;
  long *plVar2;

  plVar2 = DAT_1000c340;
  while( true ) {
    DAT_1000c340 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      recovered_10003fec();
    }
    if (plVar2 == (long *)param_1[4]) break;
    local_38 = 0;
    local_40 = 0;
    recovered_100048c8((long)plVar2,(long *)*param_1,(undefined2 *)&local_40);
    if (((char)local_40 == '\x01') && (PF_PART1(local_40, 1) == '\x01')) {
      plVar2[2] = (long)param_1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)(plVar2 + 1) = PF_PART4(local_40, 4);
      goto LAB_10004480;
    }
    plVar2 = (long *)*plVar2;
  }
  plVar2[2] = (long)param_1;
  uVar1 = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)((long)param_1 + 0x2c);
  *(undefined4 *)(plVar2 + 1) = uVar1;
LAB_10004480:
  recovered_10003f18((long)plVar2);
  recovered_100043c0(extraout_x0);
  return 0;
}

#undef DAT_1000c340
#undef local_40
#undef local_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004488
 */

undefined8 recovered_10004488(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100043c0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004494
 */

undefined8 recovered_10004494(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000449c
 */

void recovered_1000449c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10003fec();
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

long recovered_100044a8(long *param_1,undefined8 param_2,long *param_3)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  long lVar2;

  lVar2 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*param_1 + -0x10);
    bVar1 = recovered_100044e8(*(long **)(*param_1 + -8),param_3);
    lVar2 = (long)param_1 + lVar2;
    if (!bVar1) {
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100044e8
 */

bool recovered_100044e8(long *param_1,long *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;

  if (param_2 == (long *)0x0) {
LAB_1000456c:
    bVar3 = true;
  }
  else {
    while ((plVar4 = param_1, bVar3 = plVar4 != (long *)0x0, plVar4 != param_2 &&
           (plVar4 != (long *)0x0))) {
      pcVar5 = (char *)plVar4[1];
      pcVar6 = (char *)param_2[1];
      if ((pcVar5 == (char *)0x0) || (pcVar6 == (char *)0x0)) {
        if (pcVar5 == pcVar6) goto LAB_1000456c;
      }
      else {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar6;
          if ((cVar1 == '\0') || (cVar2 == '\0')) {
            if (cVar1 == cVar2) goto LAB_1000456c;
            break;
          }
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
      }
      param_1 = (long *)0x0;
      if (*plVar4 == ((uintptr_t)pf_module_state+0x5420U)) {
        param_1 = (long *)plVar4[2];
      }
    }
  }
  return bVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004574
 */

void recovered_10004574(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
    WaitForEvent();
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004578
 */

undefined8 recovered_10004578(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10004580(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10004590(uint param_1)

{
  unsigned char frame[64] = {0};

  if ((param_1 < 0x21) && ((1L << ((ulong)param_1 & 0x3f) & 0x100003600U) != 0)) {
    return true;
  }
  return param_1 == 0xb;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100045c8(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100045e4(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100045fc(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffff) < 0x7f800000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10004614(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_1000462c(ulong param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10004644(double value) {
 if(value!=value)return value;
 if(value>709.782712893384)return pf_bits_double(0x7ff0000000000000ULL);
 if(value< -745.1332191019411)return 0.0;
 unsigned halves=0;
 while(value>0.5){value*=0.5;++halves;}
 while(value< -0.5){value*=0.5;++halves;}
 double sum=1.0,term=1.0;
 for(int n=1;n<=32;++n){term=(value/(double)n)*term;sum=sum+term;}
 while(halves--){sum=sum*sum;}
 return sum;
}


/* Native exponential ABI; Pooka's Free Software License. */
float recovered_10004704(float value){return (float)recovered_10004644((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10004720(long double value){return (long double)recovered_10004644((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10004724(long end,long start){return (double)end-(double)start;}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint128 recovered_10004734(double param_1)

{
  unsigned char frame[64] = {0};

  double dVar1;
  uint128 auVar2;
  double dVar3;

  auVar2 = recovered_10001c94(param_1);
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

long recovered_10004780(byte *param_1,undefined8 *param_2,uint param_3)

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

long recovered_100048c4(byte *param_1,undefined8 *param_2,uint param_3)

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


#undef DAT_10006d28
#define DAT_10006d28 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x98U)))
#define local_68 (*(byte * *)(pf_stack_frame + 24))
#define pbStack_70 (*(byte * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100048c8
 */

undefined8 recovered_100048c8(long param_1,long *param_2,undefined2 *param_3)

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
      recovered_10004aa0((uint)*pbVar7,(long *)&local_68);
      pbVar8 = local_68;
    }
    local_68 = pbVar8 + 1;
    bVar1 = *pbVar8;
    if ((ulong)bVar1 == 0xff) {
      pbVar7 = (byte *)0x0;
    }
    else {
      uVar4 = recovered_10004b94(&local_68);
      pbVar7 = local_68 + uVar4;
    }
    local_68 = local_68 + 1;
    uVar4 = recovered_10004b94(&local_68);
    iVar9 = *(int *)(param_1 + 8);
    if (0 < iVar9) {
      pbVar8 = local_68 + uVar4;
      while (local_68 < pbVar8) {
        uVar4 = recovered_10004b94(&local_68);
        uVar5 = recovered_10004b94(&local_68);
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
            uVar5 = recovered_10004bf0(&pbStack_70);
            pbVar8 = pbStack_70;
            uVar3 = recovered_10004bf0(&pbStack_70);
            if (uVar5 == 0) {
              *(undefined1 *)((long)param_3 + 1) = 1;
            }
            else if (0 < (long)uVar5) {
              puVar6 = (ulong *)0x0;
              if ((((uint)uVar4 < 0xd && 0 < (int)uVar5) && (pbVar7 != (byte *)0x0)) &&
                 ((0x1c1dU >> uVar4 & 1) != 0)) {
                local_68 = pbVar7 + *(long *)(&DAT_10006d28 + uVar4 * 8) * (uVar5 & 0x7fffffff);
                puVar6 = recovered_10004aa0((uint)bVar1,(long *)&local_68);
              }
              bVar2 = recovered_100044e8(param_2,(long *)puVar6);
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

#undef DAT_10006d28
#undef local_68
#undef pbStack_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004aa0
 */

ulong * recovered_10004aa0(uint param_1,long *param_2)

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
    puVar1 = (ulong *)recovered_10004bc8(pbVar5,8);
    pbVar4 = pbVar5 + 8;
    goto LAB_10004b58;
  case 1:
    puVar1 = (ulong *)recovered_10004b94(param_2);
    break;
  case 2:
    puVar1 = (ulong *)recovered_10004bc8(pbVar5,2);
    goto LAB_10004b54;
  case 3:
    puVar1 = (ulong *)recovered_10004bc8(pbVar5,4);
    goto LAB_10004b1c;
  default:
    goto switchD_10004ae8_caseD_5;
  case 9:
    puVar1 = (ulong *)recovered_10004bf0(param_2);
    break;
  case 10:
    uVar3 = recovered_10004bc8(pbVar5,2);
    puVar1 = (ulong *)(-(uVar3 >> 0xf & 1) & 0xffffffffffff0000 | uVar3);
LAB_10004b54:
    pbVar4 = pbVar5 + 2;
LAB_10004b58:
    *param_2 = (long)pbVar4;
    break;
  case 0xb:
    uVar2 = recovered_10004bc8(pbVar5,4);
    uVar3 = 0;
    if ((int)uVar2 < 0) {
      uVar3 = 0xffffffff00000000;
    }
    puVar1 = (ulong *)(uVar3 | uVar2);
LAB_10004b1c:
    pbVar4 = pbVar5 + 4;
    goto LAB_10004b58;
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
switchD_10004ae8_caseD_5:
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b94
 */

ulong recovered_10004b94(undefined8 *param_1)

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
 * Address: 0x10004bc8
 */

ulong recovered_10004bc8(byte *param_1,long param_2)

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
 * Address: 0x10004bf0
 */

ulong recovered_10004bf0(undefined8 *param_1)

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


#undef DAT_1000c398
#define DAT_1000c398 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5708U)))
#undef DAT_82010814
#define DAT_82010814 (*(uint8_t *)(0x82010814U))
#undef _DAT_82010814
#define _DAT_82010814 (*(uint *)(0x82010814U))
#undef str_10006ecc
#define str_10006ecc (*(char (*)[1])(((uintptr_t)pf_module_state + 0x23cU)))
#define local_31 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004c70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * recovered_10004c70(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  long *plVar3;

  bVar2 = recovered_100060f4(0x14);
  if ((bVar2) && (_DAT_82010814 != 0)) {
    (*(code *)(ulong)_DAT_82010814)();
  }
  plVar3 = recovered_10004044(0x70);
  *plVar3 = 0;
  plVar3[2] = 0;
  plVar3[1] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[5] = 0;
  *(undefined2 *)((long)plVar3 + 0x34) = 0;
  *(undefined1 *)((long)plVar3 + 0x36) = 0;
  plVar3[7] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  pcVar1 = str_10006ecc;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  recovered_10004d70(plVar3,(long)pcVar1);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  *(uint *)(plVar3 + 3) = param_2;
  *(uint *)((long)plVar3 + 0x1c) = param_3;
  *(uint *)(plVar3 + 4) = param_2;
  *(uint *)((long)plVar3 + 0x24) = param_3;
  *(uint *)((long)plVar3 + 0x2c) = param_2 >> 1;
  *(uint *)(plVar3 + 6) = param_3 >> 1;
  local_31 = 0;
  recovered_10004dac(plVar3 + 0xb,(ulong)param_2 * (ulong)param_3 * 4,&local_31);
  DAT_1000c398 = plVar3;
  recovered_10004db4((long)plVar3);
  recovered_10004fe4((long)plVar3);
  return plVar3;
}

#undef DAT_1000c398
#undef DAT_82010814
#undef _DAT_82010814
#undef str_10006ecc
#undef local_31

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004d70
 */

long * recovered_10004d70(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_1000624c(param_2);
  recovered_10006164(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004dac
 */

void recovered_10004dac(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  if ((ulong)param_1[1] <= param_2) {
    recovered_10006ac0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006ac0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


#define local_65 (*(undefined1 *)(pf_stack_frame + 27))
#define local_64 (*(undefined2 *)(pf_stack_frame + 28))
#define local_62 (*(undefined1 *)(pf_stack_frame + 30))
#define local_61 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004db4
 */

undefined8 recovered_10004db4(long param_1)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 unaff_x30;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;

  uVar9 = 0;
  if (param_1 != 0) {
    if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
      local_61 = 0;
      recovered_10004dac((long *)(param_1 + 0x58),
                         (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                         &local_61);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
        iVar12 = 0;
        iVar13 = 0;
        bVar8 = false;
        iVar11 = 0;
        iVar10 = 0;
      }
      else {
        fVar18 = (float)*(uint *)(param_1 + 0x50);
        fVar17 = (float)*(int *)(param_1 + 0x18) / fVar18;
        fVar20 = (float)*(uint *)(param_1 + 0x54);
        fVar19 = (float)*(int *)(param_1 + 0x1c) / fVar20;
        if (fVar17 <= fVar19) {
          fVar19 = fVar17;
        }
        iVar10 = (int)(fVar19 * fVar18);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar11 = (int)(fVar19 * fVar20);
        if (iVar11 < 2) {
          iVar11 = 1;
        }
        iVar12 = (*(int *)(param_1 + 0x18) - iVar10) / 2;
        iVar13 = (*(int *)(param_1 + 0x1c) - iVar11) / 2;
        bVar8 = true;
      }
      for (lVar16 = 0; lVar16 < *(int *)(param_1 + 0x1c); lVar16 = lVar16 + 1) {
        iVar15 = -iVar12;
        for (lVar14 = 0; lVar14 < *(int *)(param_1 + 0x18); lVar14 = lVar14 + 1) {
          local_65 = *(undefined1 *)(param_1 + 0x29);
          local_64 = *(undefined2 *)(param_1 + 0x2a);
          bVar7 = false;
          if (iVar12 <= lVar14) {
            bVar7 = bVar8;
          }
          if (((bVar7 && lVar14 < iVar10 + iVar12) && iVar13 <= lVar16) && lVar16 < iVar11 + iVar13)
          {
            iVar4 = *(int *)(param_1 + 0x50);
            iVar5 = 0;
            if (iVar10 != 0) {
              iVar5 = (iVar4 * iVar15) / iVar10;
            }
            iVar6 = iVar4 + -1;
            if (iVar5 <= iVar4 + -1) {
              iVar6 = iVar5;
            }
            iVar2 = 0;
            if (-1 < iVar5) {
              iVar2 = iVar6;
            }
            iVar5 = 0;
            if (iVar11 != 0) {
              iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar16 - iVar13)) / iVar11;
            }
            iVar6 = *(int *)(param_1 + 0x54) + -1;
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
            iVar3 = 0;
            if (-1 < iVar5) {
              iVar3 = iVar6;
            }
            puVar1 = (undefined1 *)
                     (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4);
            local_65 = *puVar1;
            local_64 = *(undefined2 *)(puVar1 + 1);
          }
          local_62 = 0xff;
          recovered_10001434((void *)(*(long *)(param_1 + 0x58) +
                                     (lVar14 + lVar16 * *(int *)(param_1 + 0x18)) * 4),&local_65,4);
          iVar15 = iVar15 + 1;
        }
      }
    }
    uVar9 = unaff_x30;
  }
  return uVar9;
}

#undef local_65
#undef local_64
#undef local_62
#undef local_61

#undef DAT_10006d90
#define DAT_10006d90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_10006da0
#define DAT_10006da0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef DAT_1000c358
#define DAT_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56c8U)))
#undef DAT_1000c360
#define DAT_1000c360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56d0U)))
#undef DAT_1000c370
#define DAT_1000c370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56e0U)))
#undef DAT_1000c378
#define DAT_1000c378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56e8U)))
#undef DAT_1000c37c
#define DAT_1000c37c (*(int *)(((uintptr_t)pf_module_state + 0x56ecU)))
#undef DAT_1000c380
#define DAT_1000c380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56f0U)))
#undef DAT_1000c384
#define DAT_1000c384 (*(int *)(((uintptr_t)pf_module_state + 0x56f4U)))
#undef DAT_1000c388
#define DAT_1000c388 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56f8U)))
#undef DAT_8201087c
#define DAT_8201087c (*(uint8_t *)(0x8201087cU))
#undef UNK_10006d98
#define UNK_10006d98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_1000c368
#define UNK_1000c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56d8U)))
#undef _DAT_10006d90
#define _DAT_10006d90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef _DAT_1000c360
#define _DAT_1000c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56d0U)))
#undef _DAT_8201087c
#define _DAT_8201087c (*(uint *)(0x8201087cU))
#undef uRam0000000010006d98
#define uRam0000000010006d98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef uRam000000001000c368
#define uRam000000001000c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56d8U)))
#define uStack_80 (*(uint *)(pf_stack_frame + 32))
#define iStack_70 (*(int *)(pf_stack_frame + 48))
#define local_90 (*(ulong *)(pf_stack_frame + 16))
#define local_88 (*(int *)(pf_stack_frame + 24))
#define local_84 (*(uint *)(pf_stack_frame + 28))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 56))
#define local_7c (*(undefined8 *)(pf_stack_frame + 36))
#define local_74 (*(int *)(pf_stack_frame + 44))
#define local_6c (*(undefined4 *)(pf_stack_frame + 52))
#define local_64 (*(undefined4 *)(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004fe4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004fe4(long param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;

  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  recovered_10001620(&DAT_1000c358,0,0x34);
  bVar9 = recovered_100060f4(0x7c);
  if (!bVar9) {
    return;
  }
  if (_DAT_8201087c == 0) {
    return;
  }
  iVar10 = (*(code *)(ulong)_DAT_8201087c)(&DAT_1000c358);
  uVar23 = _DAT_1000c360;
  uVar22 = DAT_1000c358;
  if (iVar10 == 0) {
    return;
  }
  if (DAT_1000c358 == 0) {
    return;
  }
  iVar10 = (int)((ulong)DAT_1000c370 >> 0x20);
  local_88 = (int)_DAT_1000c360;
  local_84 = (uint)(_DAT_1000c360 >> 0x20);
  uVar26 = (uint)uRam000000001000c368;
  uVar27 = (uint)(uRam000000001000c368 >> 0x20);
  uVar19 = CONCAT17(-((char)((DAT_1000c384 == (int)((ulong)uRam0000000010006d98 >> 0x20)) * -0x80) <
                     '\0'),CONCAT16(-((char)((DAT_1000c37c == (int)uRam0000000010006d98) * -0x80) <
                                     '\0'),CONCAT15(-((char)((iVar10 ==
                                                             (int)((ulong)_DAT_10006d90 >> 0x20)) *
                                                            -0x80) < '\0'),
                                                    CONCAT14(-((char)(~-((int)DAT_1000c370 ==
                                                                        (int)_DAT_10006d90) << 7) <
                                                              '\0'),CONCAT13(-((char)((uVar27 == 0)
                                                                                     * -0x80) < '\0'
                                                                              ),CONCAT12(-((char)((
                                                  uVar26 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((local_84 == 0) * -0x80) < '\0')
                                                           ,-((char)((local_88 == 0) * -0x80) < '\0'
                                                             )))))))) & DAT_10006da0;
  uVar20 = (ulong)local_84;
  uVar24 = uRam000000001000c368 & 0xffffffff;
  if ((char)((char)uVar19 + (char)(uVar19 >> 8) + (char)(uVar19 >> 0x10) + (char)(uVar19 >> 0x18) +
             (char)(uVar19 >> 0x20) + (char)(uVar19 >> 0x28) + (char)(uVar19 >> 0x30) +
            (char)(uVar19 >> 0x38)) != '\0' || local_84 >> 2 < uVar26) {
    return;
  }
  local_90 = DAT_1000c358;
  uVar25 = (ulong)uVar27;
  local_7c = CONCAT44(iVar10,uVar27);
  local_74 = DAT_1000c37c;
  iStack_70 = DAT_1000c384;
  local_6c = DAT_1000c378;
  uStack_68 = DAT_1000c380;
  local_64 = DAT_1000c388;
  uStack_80 = uVar26;
  uVar11 = recovered_100063bc((long)&local_90,(uint)*(byte *)(param_1 + 0x29),
                              (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b));
  for (uVar19 = 0; uVar19 != uVar25; uVar19 = uVar19 + 1) {
    puVar8 = (uint *)(uVar22 + uVar19 * uVar20);
    for (uVar21 = uVar24; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    }
  }
  uVar19 = 0;
  uVar21 = (ulong)*(uint *)(param_1 + 0x18);
  uVar5 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar11 = 0;
  if (uVar21 != 0) {
    uVar11 = (uint)((uVar5 * uVar24) / uVar21);
  }
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar13 = (uint)((uVar21 * uVar25) / uVar5);
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  uVar21 = (ulong)uVar13;
  uVar14 = uVar27;
  if (uVar11 <= uVar27) {
    uVar13 = uVar26;
    uVar21 = uVar24;
    uVar25 = (ulong)uVar11;
    uVar14 = uVar11;
  }
  uVar11 = uVar26 - uVar13 >> 1;
  uVar6 = uVar27 - uVar14 >> 1;
  for (; uVar19 < uVar25; uVar19 = uVar19 + 1) {
    uVar24 = 0;
    uVar5 = 0;
    if (uVar25 != 0) {
      uVar5 = (uVar19 * *(uint *)(param_1 + 0x1c)) / uVar25;
    }
    for (; uVar21 != uVar24; uVar24 = uVar24 + 1) {
      uVar7 = 0;
      if (uVar21 != 0) {
        uVar7 = (uVar24 * *(uint *)(param_1 + 0x18)) / uVar21;
      }
      pbVar2 = (byte *)(*(long *)(param_1 + 0x58) +
                       ((uVar5 & 0xffffffff) * (long)(int)*(uint *)(param_1 + 0x18) +
                       (uVar7 & 0xffffffff)) * 4);
      uVar12 = recovered_100063bc((long)&local_90,(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2]);
      *(uint *)(uVar22 + (ulong)uVar11 * 4 + uVar20 * (uVar6 + (int)uVar19) + (uintptr_t)uVar24 * 4) = uVar12;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if ((((int)uVar12 < 1) || (uVar14 == 0)) || (uVar13 == 0)) goto LAB_100053e8;
  uVar13 = *(uint *)(param_1 + 0x24);
  if ((int)uVar13 < 1) goto LAB_100053e8;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x30);
  iVar10 = uVar12 - 1;
  if (iVar4 <= (int)(uVar12 - 1)) {
    iVar10 = iVar4;
  }
  iVar18 = 0;
  if (-1 < iVar4) {
    iVar18 = iVar10;
  }
  iVar10 = 0;
  if ((ulong)uVar12 != 0) {
    iVar10 = (int)((uVar21 * (long)iVar18) / (ulong)uVar12);
  }
  iVar4 = uVar13 - 1;
  if (iVar17 <= (int)(uVar13 - 1)) {
    iVar4 = iVar17;
  }
  iVar18 = 0;
  if (-1 < iVar17) {
    iVar18 = iVar4;
  }
  iVar4 = 0;
  if ((ulong)uVar13 != 0) {
    iVar4 = (int)((uVar25 * (long)iVar18) / (ulong)uVar13);
  }
  uVar13 = recovered_100063bc((long)&local_90,0,0,0);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar17 = 0xff;
    iVar18 = 0x3c;
LAB_10005318:
    iVar15 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x35) == '\x01') {
      iVar17 = 0x3c;
      iVar18 = 0xff;
      goto LAB_10005318;
    }
    if (*(char *)(param_1 + 0x36) == '\x01') {
      iVar17 = 0x50;
      iVar18 = 0x82;
    }
    else {
      iVar17 = 0xff;
      iVar18 = 0xff;
    }
    iVar15 = 0xff;
  }
  uVar14 = recovered_100063bc((long)&local_90,iVar17,iVar18,iVar15);
  for (iVar17 = -7; iVar17 != 8; iVar17 = iVar17 + 1) {
    uVar12 = uVar6 + iVar4 + iVar17;
    for (iVar18 = -7; iVar18 != 8; iVar18 = iVar18 + 1) {
      iVar15 = recovered_10001358(iVar18);
      iVar16 = recovered_10001358(iVar17);
      if (((iVar16 + iVar15 < 8) && (uVar1 = uVar11 + iVar10 + iVar18, -1 < (int)uVar1)) &&
         ((-1 < (int)uVar12 && (uVar1 < uVar26 && uVar12 < uVar27)))) {
        uVar3 = uVar13;
        if (iVar16 + iVar15 < 6) {
          uVar3 = uVar14;
        }
        *(uint *)(uVar22 + (ulong)uVar1 * 4 + uVar20 * uVar12) = uVar3;
      }
    }
  }
LAB_100053e8:
  uVar19 = ctr_el0;
  uVar20 = 4L << (uVar19 >> 0x10 & 0xf);
  uVar19 = uVar22 + (uVar23 & 0xffffffff);
  if (CARRY8(uVar22,uVar23 & 0xffffffff)) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar22 = uVar22 & -uVar20;
  uVar23 = ~uVar22 + uVar20;
  do {
    if (uVar19 <= uVar22) break;
    DC_CVAC(uVar22);
    uVar22 = uVar22 + uVar20;
    uVar23 = uVar23 - uVar20;
  } while (uVar20 <= uVar23);
  DataSynchronizationBarrier(3,3,0);
  InstructionSynchronizationBarrier();
  return;
}

#undef DAT_10006d90
#undef DAT_10006da0
#undef DAT_1000c358
#undef DAT_1000c360
#undef DAT_1000c370
#undef DAT_1000c378
#undef DAT_1000c37c
#undef DAT_1000c380
#undef DAT_1000c384
#undef DAT_1000c388
#undef DAT_8201087c
#undef UNK_10006d98
#undef UNK_1000c368
#undef _DAT_10006d90
#undef _DAT_1000c360
#undef _DAT_8201087c
#undef uRam0000000010006d98
#undef uRam000000001000c368
#undef uStack_80
#undef iStack_70
#undef local_90
#undef local_88
#undef local_84
#undef uStack_68
#undef local_7c
#undef local_74
#undef local_6c
#undef local_64

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000545c
 */

void recovered_1000545c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


#undef DAT_1000c398
#define DAT_1000c398 (*(uint64_t * *)(((uintptr_t)pf_module_state + 0x5708U)))
#undef DAT_82010818
#define DAT_82010818 (*(uint8_t *)(0x82010818U))
#undef _DAT_82010818
#define _DAT_82010818 (*(uint *)(0x82010818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000546c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000546c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 *puVar2;

  if (param_1 != (undefined8 *)0x0) {
    if (DAT_1000c398 == param_1) {
      DAT_1000c398 = (undefined8 *)0x0;
    }
    recovered_10006b40(param_1 + 0xb);
    recovered_10006b40(param_1 + 7);
    puVar2 = recovered_1000613c(param_1);
    recovered_10004078(puVar2);
    bVar1 = recovered_100060f4(0x18);
    if ((bVar1) && (_DAT_82010818 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100054d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(ulong)_DAT_82010818)();
      return;
    }
  }
  return;
}

#undef DAT_1000c398
#undef DAT_82010818
#undef _DAT_82010818

#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#define uStack_28 (*(undefined8 *)(pf_stack_frame + 40))
#define local_38 (*(undefined1 * *)(pf_stack_frame + 24))
#define local_30 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100054e4
 */

void * recovered_100054e4(undefined8 *param_1)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined1 *source;
  ulong uVar1;
  void *destination;

  if (param_1 == (undefined8 *)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    uVar1 = 1;
    local_38 = (undefined1 *)0x0;
  }
  else {
    recovered_10006458((long *)&local_38,param_1);
    uVar1 = local_30 + 1;
  }
  destination = recovered_10004074(uVar1);
  source = &DAT_10006ddb;
  if (local_38 != (undefined1 *)0x0) {
    source = local_38;
  }
  recovered_10001434(destination,source,local_30 + 1);
  recovered_10004078(local_38);
  return destination;
}

#undef DAT_10006ddb
#undef uStack_28
#undef local_38
#undef local_30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005568
 */

void recovered_10005568(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
    }
    *param_3 = uVar1;
  }
  return;
}


#define uStack_65 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_64 (*(undefined2 *)(pf_stack_frame + 28))
#define uStack_62 (*(undefined1 *)(pf_stack_frame + 30))
#define uStack_61 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000559c
 */

undefined8 recovered_1000559c(long param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 unaff_x30;
  float fVar17;
  uint128 auVar18;
  uint128 auVar19;
  float fVar20;
  float fVar21;
  float fVar22;

  if (param_1 == 0) {
    return 0;
  }
  PF_PART4(auVar18, 4) = param_3;
  PF_PART4(auVar18, 0) = param_2;
  PF_PART4(auVar18, 8) = param_2;
  PF_PART4(auVar18, 12) = param_3;
  PF_PART4(auVar19, 8) = 1;
  PF_PART8(auVar19, 0) = 0x100000001;
  PF_PART4(auVar19, 12) = 1;
  auVar19 = NEON_smax(auVar18,auVar19,4);
  *(long *)(param_1 + 0x20) = PF_PART8(auVar19, 8);
  *(long *)(param_1 + 0x18) = PF_PART8(auVar19, 0);
  recovered_100055e4(param_1);
  uVar9 = 0;
  if (param_1 != 0) {
    if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
      uStack_61 = 0;
      recovered_10004dac((long *)(param_1 + 0x58),
                         (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                         &uStack_61);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
        iVar12 = 0;
        iVar13 = 0;
        bVar8 = false;
        iVar11 = 0;
        iVar10 = 0;
      }
      else {
        fVar20 = (float)*(uint *)(param_1 + 0x50);
        fVar17 = (float)*(int *)(param_1 + 0x18) / fVar20;
        fVar22 = (float)*(uint *)(param_1 + 0x54);
        fVar21 = (float)*(int *)(param_1 + 0x1c) / fVar22;
        if (fVar17 <= fVar21) {
          fVar21 = fVar17;
        }
        iVar10 = (int)(fVar21 * fVar20);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar11 = (int)(fVar21 * fVar22);
        if (iVar11 < 2) {
          iVar11 = 1;
        }
        iVar12 = (*(int *)(param_1 + 0x18) - iVar10) / 2;
        iVar13 = (*(int *)(param_1 + 0x1c) - iVar11) / 2;
        bVar8 = true;
      }
      for (lVar16 = 0; lVar16 < *(int *)(param_1 + 0x1c); lVar16 = lVar16 + 1) {
        iVar15 = -iVar12;
        for (lVar14 = 0; lVar14 < *(int *)(param_1 + 0x18); lVar14 = lVar14 + 1) {
          uStack_65 = *(undefined1 *)(param_1 + 0x29);
          uStack_64 = *(undefined2 *)(param_1 + 0x2a);
          bVar7 = false;
          if (iVar12 <= lVar14) {
            bVar7 = bVar8;
          }
          if (((bVar7 && lVar14 < iVar10 + iVar12) && iVar13 <= lVar16) && lVar16 < iVar11 + iVar13)
          {
            iVar4 = *(int *)(param_1 + 0x50);
            iVar5 = 0;
            if (iVar10 != 0) {
              iVar5 = (iVar4 * iVar15) / iVar10;
            }
            iVar6 = iVar4 + -1;
            if (iVar5 <= iVar4 + -1) {
              iVar6 = iVar5;
            }
            iVar2 = 0;
            if (-1 < iVar5) {
              iVar2 = iVar6;
            }
            iVar5 = 0;
            if (iVar11 != 0) {
              iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar16 - iVar13)) / iVar11;
            }
            iVar6 = *(int *)(param_1 + 0x54) + -1;
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
            iVar3 = 0;
            if (-1 < iVar5) {
              iVar3 = iVar6;
            }
            puVar1 = (undefined1 *)
                     (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4);
            uStack_65 = *puVar1;
            uStack_64 = *(undefined2 *)(puVar1 + 1);
          }
          uStack_62 = 0xff;
          recovered_10001434((void *)(*(long *)(param_1 + 0x58) +
                                     (lVar14 + lVar16 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,4)
          ;
          iVar15 = iVar15 + 1;
        }
      }
    }
    uVar9 = unaff_x30;
  }
  return uVar9;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055e4
 */

void recovered_100055e4(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  ulong uVar2;
  long lVar3;

  if (param_1 != 0) {
    uVar1 = NEON_smax(*(undefined8 *)(param_1 + 0x20),0x100000001,4);
    lVar3 = *(long *)(param_1 + 0x2c);
    uVar2 = NEON_smin(CONCAT44((int)((ulong)uVar1 >> 0x20) + -1,(int)uVar1 + -1),lVar3,4);
    *(ulong *)(param_1 + 0x2c) = CONCAT44(-(uint)(-1 < lVar3),-(uint)(-1 < (int)lVar3)) & uVar2;
  }
  return;
}


#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005614
 */

long * recovered_10005614(long *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  ulong uVar2;

  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  puVar1 = &DAT_10006ddb;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  uVar2 = recovered_1000624c((long)puVar1);
  recovered_10006164(param_1,(long)puVar1,uVar2);
  return param_1;
}

#undef DAT_10006ddb

#define uStack_65 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_64 (*(undefined2 *)(pf_stack_frame + 28))
#define uStack_62 (*(undefined1 *)(pf_stack_frame + 30))
#define uStack_61 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005630
 */

long recovered_10005630(long param_1,uint *param_2)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long unaff_x30;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if ((((param_1 == 0) || (param_2 == (uint *)0x0)) ||
      (puVar8 = *(undefined1 **)(param_2 + 2), puVar8 == (undefined1 *)0x0)) ||
     (((int)*param_2 < 1 || ((int)param_2[1] < 1)))) {
    return param_1;
  }
  recovered_100056a0((long *)(param_1 + 0x38),puVar8,
                     puVar8 + (ulong)*param_2 * (ulong)param_2[1] * 4);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
  lVar15 = 0;
  if (param_1 != 0) {
    if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
      uStack_61 = 0;
      recovered_10004dac((long *)(param_1 + 0x58),
                         (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4,
                         &uStack_61);
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
        iVar11 = 0;
        iVar12 = 0;
        bVar7 = false;
        iVar10 = 0;
        iVar9 = 0;
      }
      else {
        fVar17 = (float)*(uint *)(param_1 + 0x50);
        fVar16 = (float)*(int *)(param_1 + 0x18) / fVar17;
        fVar19 = (float)*(uint *)(param_1 + 0x54);
        fVar18 = (float)*(int *)(param_1 + 0x1c) / fVar19;
        if (fVar16 <= fVar18) {
          fVar18 = fVar16;
        }
        iVar9 = (int)(fVar18 * fVar17);
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        iVar10 = (int)(fVar18 * fVar19);
        if (iVar10 < 2) {
          iVar10 = 1;
        }
        iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
        iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
        bVar7 = true;
      }
      for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
        iVar14 = -iVar11;
        for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
          uStack_65 = *(undefined1 *)(param_1 + 0x29);
          uStack_64 = *(undefined2 *)(param_1 + 0x2a);
          bVar6 = false;
          if (iVar11 <= lVar13) {
            bVar6 = bVar7;
          }
          if (((bVar6 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) && lVar15 < iVar10 + iVar12)
          {
            iVar3 = *(int *)(param_1 + 0x50);
            iVar4 = 0;
            if (iVar9 != 0) {
              iVar4 = (iVar3 * iVar14) / iVar9;
            }
            iVar5 = iVar3 + -1;
            if (iVar4 <= iVar3 + -1) {
              iVar5 = iVar4;
            }
            iVar1 = 0;
            if (-1 < iVar4) {
              iVar1 = iVar5;
            }
            iVar4 = 0;
            if (iVar10 != 0) {
              iVar4 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
            }
            iVar5 = *(int *)(param_1 + 0x54) + -1;
            if (iVar4 <= iVar5) {
              iVar5 = iVar4;
            }
            iVar2 = 0;
            if (-1 < iVar4) {
              iVar2 = iVar5;
            }
            puVar8 = (undefined1 *)
                     (*(long *)(param_1 + 0x38) + ((long)iVar1 + (long)iVar3 * (long)iVar2) * 4);
            uStack_65 = *puVar8;
            uStack_64 = *(undefined2 *)(puVar8 + 1);
          }
          uStack_62 = 0xff;
          recovered_10001434((void *)(*(long *)(param_1 + 0x58) +
                                     (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),&uStack_65,4)
          ;
          iVar14 = iVar14 + 1;
        }
      }
    }
    lVar15 = unaff_x30;
  }
  return lVar15;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056a0
 */

long recovered_100056a0(long *param_1,undefined1 *param_2,undefined1 *param_3)

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
      recovered_10006ac0(param_1,uVar5);
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


#undef DAT_10006d90
#define DAT_10006d90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef DAT_10006da0
#define DAT_10006da0 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x110U)))
#undef DAT_1000c358
#define DAT_1000c358 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56c8U)))
#undef DAT_1000c360
#define DAT_1000c360 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x56d0U)))
#undef DAT_1000c370
#define DAT_1000c370 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56e0U)))
#undef DAT_1000c378
#define DAT_1000c378 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56e8U)))
#undef DAT_1000c37c
#define DAT_1000c37c (*(int *)(((uintptr_t)pf_module_state + 0x56ecU)))
#undef DAT_1000c380
#define DAT_1000c380 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56f0U)))
#undef DAT_1000c384
#define DAT_1000c384 (*(int *)(((uintptr_t)pf_module_state + 0x56f4U)))
#undef DAT_1000c388
#define DAT_1000c388 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x56f8U)))
#undef DAT_8201087c
#define DAT_8201087c (*(uint8_t *)(0x8201087cU))
#undef UNK_10006d98
#define UNK_10006d98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef UNK_1000c368
#define UNK_1000c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56d8U)))
#undef _DAT_10006d90
#define _DAT_10006d90 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x100U)))
#undef _DAT_1000c360
#define _DAT_1000c360 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56d0U)))
#undef _DAT_8201087c
#define _DAT_8201087c (*(uint *)(0x8201087cU))
#undef uRam0000000010006d98
#define uRam0000000010006d98 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x108U)))
#undef uRam000000001000c368
#define uRam000000001000c368 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x56d8U)))
#define iStack_88 (*(int *)(pf_stack_frame + 24))
#define uStack_84 (*(uint *)(pf_stack_frame + 28))
#define uStack_80 (*(uint *)(pf_stack_frame + 32))
#define uStack_7c (*(undefined8 *)(pf_stack_frame + 36))
#define iStack_74 (*(int *)(pf_stack_frame + 44))
#define iStack_70 (*(int *)(pf_stack_frame + 48))
#define uStack_6c (*(undefined4 *)(pf_stack_frame + 52))
#define uStack_68 (*(undefined4 *)(pf_stack_frame + 56))
#define uStack_64 (*(undefined4 *)(pf_stack_frame + 60))
#define uStack_90 (*(ulong *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100056b4(long param_1)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;

  if (param_1 == 0) {
    return;
  }
  recovered_100056e8();
  recovered_10004db4(param_1);
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  recovered_10001620(&DAT_1000c358,0,0x34);
  bVar9 = recovered_100060f4(0x7c);
  if (!bVar9) {
    return;
  }
  if (_DAT_8201087c == 0) {
    return;
  }
  iVar10 = (*(code *)(ulong)_DAT_8201087c)(&DAT_1000c358);
  uVar23 = _DAT_1000c360;
  uVar22 = DAT_1000c358;
  if (iVar10 == 0) {
    return;
  }
  if (DAT_1000c358 == 0) {
    return;
  }
  iVar10 = (int)((ulong)DAT_1000c370 >> 0x20);
  iStack_88 = (int)_DAT_1000c360;
  uStack_84 = (uint)(_DAT_1000c360 >> 0x20);
  uVar26 = (uint)uRam000000001000c368;
  uVar27 = (uint)(uRam000000001000c368 >> 0x20);
  uVar19 = CONCAT17(-((char)((DAT_1000c384 == (int)((ulong)uRam0000000010006d98 >> 0x20)) * -0x80) <
                     '\0'),CONCAT16(-((char)((DAT_1000c37c == (int)uRam0000000010006d98) * -0x80) <
                                     '\0'),CONCAT15(-((char)((iVar10 ==
                                                             (int)((ulong)_DAT_10006d90 >> 0x20)) *
                                                            -0x80) < '\0'),
                                                    CONCAT14(-((char)(~-((int)DAT_1000c370 ==
                                                                        (int)_DAT_10006d90) << 7) <
                                                              '\0'),CONCAT13(-((char)((uVar27 == 0)
                                                                                     * -0x80) < '\0'
                                                                              ),CONCAT12(-((char)((
                                                  uVar26 == 0) * -0x80) < '\0'),
                                                  CONCAT11(-((char)((uStack_84 == 0) * -0x80) < '\0'
                                                            ),-((char)((iStack_88 == 0) * -0x80) <
                                                               '\0')))))))) & DAT_10006da0;
  uVar20 = (ulong)uStack_84;
  uVar24 = uRam000000001000c368 & 0xffffffff;
  if ((char)((char)uVar19 + (char)(uVar19 >> 8) + (char)(uVar19 >> 0x10) + (char)(uVar19 >> 0x18) +
             (char)(uVar19 >> 0x20) + (char)(uVar19 >> 0x28) + (char)(uVar19 >> 0x30) +
            (char)(uVar19 >> 0x38)) != '\0' || uStack_84 >> 2 < uVar26) {
    return;
  }
  uStack_90 = DAT_1000c358;
  uVar25 = (ulong)uVar27;
  uStack_7c = CONCAT44(iVar10,uVar27);
  iStack_74 = DAT_1000c37c;
  iStack_70 = DAT_1000c384;
  uStack_6c = DAT_1000c378;
  uStack_68 = DAT_1000c380;
  uStack_64 = DAT_1000c388;
  uStack_80 = uVar26;
  uVar11 = recovered_100063bc((long)&uStack_90,(uint)*(byte *)(param_1 + 0x29),
                              (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b));
  for (uVar19 = 0; uVar19 != uVar25; uVar19 = uVar19 + 1) {
    puVar8 = (uint *)(uVar22 + uVar19 * uVar20);
    for (uVar21 = uVar24; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar8 = uVar11;
      puVar8 = puVar8 + 1;
    }
  }
  uVar19 = 0;
  uVar21 = (ulong)*(uint *)(param_1 + 0x18);
  uVar5 = (ulong)*(uint *)(param_1 + 0x1c);
  uVar11 = 0;
  if (uVar21 != 0) {
    uVar11 = (uint)((uVar5 * uVar24) / uVar21);
  }
  if (uVar11 < 2) {
    uVar11 = 1;
  }
  uVar13 = 0;
  if (uVar5 != 0) {
    uVar13 = (uint)((uVar21 * uVar25) / uVar5);
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  uVar21 = (ulong)uVar13;
  uVar14 = uVar27;
  if (uVar11 <= uVar27) {
    uVar13 = uVar26;
    uVar21 = uVar24;
    uVar25 = (ulong)uVar11;
    uVar14 = uVar11;
  }
  uVar11 = uVar26 - uVar13 >> 1;
  uVar6 = uVar27 - uVar14 >> 1;
  for (; uVar19 < uVar25; uVar19 = uVar19 + 1) {
    uVar24 = 0;
    uVar5 = 0;
    if (uVar25 != 0) {
      uVar5 = (uVar19 * *(uint *)(param_1 + 0x1c)) / uVar25;
    }
    for (; uVar21 != uVar24; uVar24 = uVar24 + 1) {
      uVar7 = 0;
      if (uVar21 != 0) {
        uVar7 = (uVar24 * *(uint *)(param_1 + 0x18)) / uVar21;
      }
      pbVar2 = (byte *)(*(long *)(param_1 + 0x58) +
                       ((uVar5 & 0xffffffff) * (long)(int)*(uint *)(param_1 + 0x18) +
                       (uVar7 & 0xffffffff)) * 4);
      uVar12 = recovered_100063bc((long)&uStack_90,(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2]);
      *(uint *)(uVar22 + (ulong)uVar11 * 4 + uVar20 * (uVar6 + (int)uVar19) + (uintptr_t)uVar24 * 4) = uVar12;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if ((((int)uVar12 < 1) || (uVar14 == 0)) || (uVar13 == 0)) goto LAB_100053e8;
  uVar13 = *(uint *)(param_1 + 0x24);
  if ((int)uVar13 < 1) goto LAB_100053e8;
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x30);
  iVar10 = uVar12 - 1;
  if (iVar4 <= (int)(uVar12 - 1)) {
    iVar10 = iVar4;
  }
  iVar18 = 0;
  if (-1 < iVar4) {
    iVar18 = iVar10;
  }
  iVar10 = 0;
  if ((ulong)uVar12 != 0) {
    iVar10 = (int)((uVar21 * (long)iVar18) / (ulong)uVar12);
  }
  iVar4 = uVar13 - 1;
  if (iVar17 <= (int)(uVar13 - 1)) {
    iVar4 = iVar17;
  }
  iVar18 = 0;
  if (-1 < iVar17) {
    iVar18 = iVar4;
  }
  iVar4 = 0;
  if ((ulong)uVar13 != 0) {
    iVar4 = (int)((uVar25 * (long)iVar18) / (ulong)uVar13);
  }
  uVar13 = recovered_100063bc((long)&uStack_90,0,0,0);
  if (*(char *)(param_1 + 0x34) == '\x01') {
    iVar17 = 0xff;
    iVar18 = 0x3c;
LAB_10005318:
    iVar15 = 0x3c;
  }
  else {
    if (*(char *)(param_1 + 0x35) == '\x01') {
      iVar17 = 0x3c;
      iVar18 = 0xff;
      goto LAB_10005318;
    }
    if (*(char *)(param_1 + 0x36) == '\x01') {
      iVar17 = 0x50;
      iVar18 = 0x82;
    }
    else {
      iVar17 = 0xff;
      iVar18 = 0xff;
    }
    iVar15 = 0xff;
  }
  uVar14 = recovered_100063bc((long)&uStack_90,iVar17,iVar18,iVar15);
  for (iVar17 = -7; iVar17 != 8; iVar17 = iVar17 + 1) {
    uVar12 = uVar6 + iVar4 + iVar17;
    for (iVar18 = -7; iVar18 != 8; iVar18 = iVar18 + 1) {
      iVar15 = recovered_10001358(iVar18);
      iVar16 = recovered_10001358(iVar17);
      if (((iVar16 + iVar15 < 8) && (uVar1 = uVar11 + iVar10 + iVar18, -1 < (int)uVar1)) &&
         ((-1 < (int)uVar12 && (uVar1 < uVar26 && uVar12 < uVar27)))) {
        uVar3 = uVar13;
        if (iVar16 + iVar15 < 6) {
          uVar3 = uVar14;
        }
        *(uint *)(uVar22 + (ulong)uVar1 * 4 + uVar20 * uVar12) = uVar3;
      }
    }
  }
LAB_100053e8:
  uVar19 = ctr_el0;
  uVar20 = 4L << (uVar19 >> 0x10 & 0xf);
  uVar19 = uVar22 + (uVar23 & 0xffffffff);
  if (CARRY8(uVar22,uVar23 & 0xffffffff)) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar22 = uVar22 & -uVar20;
  uVar23 = ~uVar22 + uVar20;
  do {
    if (uVar19 <= uVar22) break;
    DC_CVAC(uVar22);
    uVar22 = uVar22 + uVar20;
    uVar23 = uVar23 - uVar20;
  } while (uVar20 <= uVar23);
  DataSynchronizationBarrier(3,3,0);
  InstructionSynchronizationBarrier();
  return;
}

#undef DAT_10006d90
#undef DAT_10006da0
#undef DAT_1000c358
#undef DAT_1000c360
#undef DAT_1000c370
#undef DAT_1000c378
#undef DAT_1000c37c
#undef DAT_1000c380
#undef DAT_1000c384
#undef DAT_1000c388
#undef DAT_8201087c
#undef UNK_10006d98
#undef UNK_1000c368
#undef _DAT_10006d90
#undef _DAT_1000c360
#undef _DAT_8201087c
#undef uRam0000000010006d98
#undef uRam000000001000c368
#undef iStack_88
#undef uStack_84
#undef uStack_80
#undef uStack_7c
#undef iStack_74
#undef iStack_70
#undef uStack_6c
#undef uStack_68
#undef uStack_64
#undef uStack_90

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5450U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5451U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5452U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5453U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5455U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5456U)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5457U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5459U)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545aU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545bU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545cU)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545dU)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545eU)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545fU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5461U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5462U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5463U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5464U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5465U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5466U)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5467U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5468U)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5469U)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546aU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546bU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546cU)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546dU)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546eU)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546fU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5470U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5471U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5472U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5473U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5474U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5475U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5476U)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5477U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5478U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5479U)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547aU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547bU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547cU)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547dU)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(byte *)(((uintptr_t)pf_module_state + 0x547eU)))
#undef DAT_1000c390
#define DAT_1000c390 (*(int *)(((uintptr_t)pf_module_state + 0x5700U)))
#undef DAT_1000c398
#define DAT_1000c398 (*(uint64_t *)(((uintptr_t)pf_module_state + 0x5708U)))
#undef DAT_8201082c
#define DAT_8201082c (*(uint8_t *)(0x8201082cU))
#undef DAT_82010880
#define DAT_82010880 (*(uint8_t *)(0x82010880U))
#undef PTR_DAT_10008008
#define PTR_DAT_10008008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x1378U)))
#undef _DAT_8201082c
#define _DAT_8201082c (*(uint *)(0x8201082cU))
#undef _DAT_82010880
#define _DAT_82010880 (*(uint *)(0x82010880U))
#define uStack_78 (*(undefined8 *)(pf_stack_frame + 24))
#define local_80 (*(undefined8 *)(pf_stack_frame + 16))
#define local_70 (*(undefined8 *)(pf_stack_frame + 32))
#define local_68 (*(undefined8 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100056e8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_100056e8(void)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 unaff_x30;

  if (DAT_1000c398 == 0) {
    DAT_1000c0e0 = 0;
    DAT_1000c0e1 = 0;
    DAT_1000c0e2 = 0;
    DAT_1000c0e3 = 0;
    DAT_1000c0e4 = 0;
    DAT_1000c0e5 = 0;
    DAT_1000c0e6 = 0;
    DAT_1000c0e7 = 0;
    DAT_1000c0e8 = 0;
    DAT_1000c0e9 = 0;
    DAT_1000c0ea = 0;
    DAT_1000c0eb = 0;
    DAT_1000c0ec = 0;
    DAT_1000c0ed = 0;
    DAT_1000c0ee = 0;
    DAT_1000c0ef = 0;
    DAT_1000c0f0 = 0;
    DAT_1000c0f1 = 0;
    DAT_1000c0f2 = 0;
    DAT_1000c0f3 = 0;
    DAT_1000c0f4 = 0;
    DAT_1000c0f5 = 0;
    DAT_1000c0f6 = 0;
    DAT_1000c0f7 = 0;
    DAT_1000c0f8 = 0;
    DAT_1000c0f9 = 0;
    DAT_1000c0fa = 0;
    DAT_1000c0fb = 0;
    DAT_1000c0fc = 0;
    DAT_1000c0fd = 0;
    DAT_1000c0fe = 0;
    DAT_1000c0ff = 0;
    DAT_1000c100 = 0;
    DAT_1000c101 = 0;
    DAT_1000c102 = 0;
    DAT_1000c103 = 0;
    DAT_1000c104 = 0;
    DAT_1000c105 = 0;
    DAT_1000c106 = 0;
    DAT_1000c107 = 0;
    DAT_1000c108 = 0;
    DAT_1000c109 = 0;
    DAT_1000c10a = 0;
    DAT_1000c10b = 0;
    DAT_1000c10c = 0;
    DAT_1000c10d = 0;
    DAT_1000c10e = 0;
    return unaff_x30;
  }
switchD_1000595c_caseD_49:
  do {
    bVar5 = recovered_100060f4(0x2c);
    if (((!bVar5) || (_DAT_8201082c == 0)) ||
       (uVar6 = (*(code *)(ulong)_DAT_8201082c)(), uVar6 == 0)) {
      lVar4 = DAT_1000c398;
      recovered_100055e4(DAT_1000c398);
      if (lVar4 != 0) {
        uStack_78 = 0;
        local_80 = 0;
        local_68 = 0;
        local_70 = 0;
        bVar5 = recovered_100060f4(0x80);
        if (((bVar5) && (_DAT_82010880 != 0)) &&
           (iVar7 = (*(code *)(ulong)_DAT_82010880)(&local_80), iVar7 != 0)) {
          if ((local_80 & 1) == 0) {
            if (((uint)local_80 >> 1 & 1) != 0) {
              iVar7 = (int)((ulong)local_70 >> 0x20);
              if ((int)local_70 != 0 || iVar7 != 0) {
                *(ulong *)(lVar4 + 0x2c) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20) + iVar7,
                              (int)*(undefined8 *)(lVar4 + 0x2c) + (int)local_70);
              }
            }
          }
          else {
            uVar8 = recovered_100064c0((uint)uStack_78,(uint)local_68,*(int *)(lVar4 + 0x20));
            *(int *)(lVar4 + 0x2c) = (int)uVar8;
            uVar8 = recovered_100064c0(PF_PART4(uStack_78, 4),PF_PART4(local_68, 4),*(int *)(lVar4 + 0x24));
            *(int *)(lVar4 + 0x30) = (int)uVar8;
          }
          *(byte *)(lVar4 + 0x34) = PF_PART1(local_80, 4) & 1;
          *(byte *)(lVar4 + 0x35) = PF_PART1(local_80, 4) >> 1 & 1;
          *(byte *)(lVar4 + 0x36) = PF_PART1(local_80, 4) >> 2 & 1;
          recovered_100055e4(lVar4);
        }
      }
      return unaff_x30;
    }
    uVar2 = uVar6 >> 8 & 0xff;
    if ((uVar6 & 0xff) == 0) goto LAB_100057a0;
    if (DAT_1000c398 != 0) {
      if (DAT_1000c390 == 2) {
        DAT_1000c390 = 0;
        switch((uintptr_t)(uVar6 & 0xff)) {
        case 0x41:
          DAT_1000c0e1 = 1;
          break;
        case 0x42:
          DAT_1000c0e2 = 1;
          break;
        case 0x43:
          DAT_1000c0e4 = 1;
          break;
        case 0x44:
          DAT_1000c0e3 = 1;
        }
      }
      else if (DAT_1000c390 == 1) {
        DAT_1000c390 = (uint)((uVar6 & 0xff) == 0x5b) << 1;
      }
      else if ((uVar6 & 0xff) == 0x1b) {
        DAT_1000c390 = 1;
      }
      else if ((uVar6 - 0x20 & 0xff) < 0x5f) {
        DAT_1000c10e = (byte)uVar6;
        bVar3 = DAT_1000c10e;
        if (0x19 < (uVar6 - 0x61 & 0xff)) {
          if (0x19 < (uVar6 - 0x41 & 0xff)) {
            if ((uVar6 - 0x30 & 0xff) < 10) {
              *(&PTR_DAT_10008008)[(ulong)(uVar6 - 0x30) & 0xff] = 1;
              goto switchD_100058cc_caseD_5;
            }
            goto LAB_100058a8;
          }
          bVar3 = DAT_1000c10e | 0x20;
        }
        recovered_10006498((int)(char)bVar3);
      }
      else {
LAB_100058a8:
        uVar1 = uVar6 & 0xff;
        switch((uintptr_t)(uVar1)) {
        case 3:
        case 4:
          *(undefined1 *)(DAT_1000c398 + 0x28) = 1;
          break;
        case 5:
        case 6:
        case 7:
        case 9:
        case 0xb:
        case 0xc:
          break;
        case 8:
switchD_100058cc_caseD_8:
          DAT_1000c10b = 1;
          break;
        case 10:
        case 0xd:
          DAT_1000c0e0 = 1;
          break;
        default:
          if (uVar1 == 0x20) {
            DAT_1000c10d = 1;
          }
          else if (uVar1 == 0x2d) {
            DAT_1000c109 = 1;
          }
          else if (uVar1 == 0x2e) {
            DAT_1000c10a = 1;
          }
          else if (uVar1 == 0x7f) goto switchD_100058cc_caseD_8;
        }
      }
    }
switchD_100058cc_caseD_5:
  } while (((uVar6 & 0xffff) == 0x11b) || (DAT_1000c398 == 0));
  goto LAB_10005944;
LAB_100057a0:
  if (DAT_1000c398 == 0) goto switchD_1000595c_caseD_49;
  switch((uintptr_t)(uVar2)) {
  case 1:
switchD_1000595c_caseD_48:
    DAT_1000c0e1 = 1;
    goto switchD_1000595c_caseD_49;
  case 2:
switchD_1000595c_caseD_50:
    DAT_1000c0e2 = 1;
    goto switchD_1000595c_caseD_49;
  case 3:
switchD_1000595c_caseD_4d:
    DAT_1000c0e4 = 1;
    goto switchD_1000595c_caseD_49;
  case 4:
switchD_1000595c_caseD_4b:
    DAT_1000c0e3 = 1;
    goto switchD_1000595c_caseD_49;
  }
  if (uVar2 != 0x17) {
LAB_10005944:
    switch((uintptr_t)(uVar2)) {
    case 0x48:
      goto switchD_1000595c_caseD_48;
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
      goto switchD_1000595c_caseD_49;
    case 0x4b:
      goto switchD_1000595c_caseD_4b;
    case 0x4d:
      goto switchD_1000595c_caseD_4d;
    case 0x50:
      goto switchD_1000595c_caseD_50;
    case 0x53:
      DAT_1000c10c = 1;
      goto switchD_1000595c_caseD_49;
    default:
      if (uVar2 != 1) {
        if (uVar2 == 0xe) {
          DAT_1000c10b = 1;
        }
        else if (uVar2 == 0x1c) {
          DAT_1000c0e0 = 1;
        }
        goto switchD_1000595c_caseD_49;
      }
    }
  }
  *(undefined1 *)(DAT_1000c398 + 0x28) = 1;
  goto switchD_1000595c_caseD_49;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c0e5
#undef DAT_1000c0e6
#undef DAT_1000c0e7
#undef DAT_1000c0e8
#undef DAT_1000c0e9
#undef DAT_1000c0ea
#undef DAT_1000c0eb
#undef DAT_1000c0ec
#undef DAT_1000c0ed
#undef DAT_1000c0ee
#undef DAT_1000c0ef
#undef DAT_1000c0f0
#undef DAT_1000c0f1
#undef DAT_1000c0f2
#undef DAT_1000c0f3
#undef DAT_1000c0f4
#undef DAT_1000c0f5
#undef DAT_1000c0f6
#undef DAT_1000c0f7
#undef DAT_1000c0f8
#undef DAT_1000c0f9
#undef DAT_1000c0fa
#undef DAT_1000c0fb
#undef DAT_1000c0fc
#undef DAT_1000c0fd
#undef DAT_1000c0fe
#undef DAT_1000c0ff
#undef DAT_1000c100
#undef DAT_1000c101
#undef DAT_1000c102
#undef DAT_1000c103
#undef DAT_1000c104
#undef DAT_1000c105
#undef DAT_1000c106
#undef DAT_1000c107
#undef DAT_1000c108
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e
#undef DAT_1000c390
#undef DAT_1000c398
#undef DAT_8201082c
#undef DAT_82010880
#undef PTR_DAT_10008008
#undef _DAT_8201082c
#undef _DAT_82010880
#undef uStack_78
#undef local_80
#undef local_70
#undef local_68

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ab0
 */

byte recovered_10005ab0(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  if (param_1 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  return bVar1 & 1;
}


#define uStack_65 (*(undefined1 *)(pf_stack_frame + 27))
#define uStack_64 (*(undefined2 *)(pf_stack_frame + 28))
#define uStack_62 (*(undefined1 *)(pf_stack_frame + 30))
#define uStack_61 (*(undefined1 *)(pf_stack_frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ac8
 */

long recovered_10005ac8(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long unaff_x30;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x29) = param_2;
    *(undefined1 *)(param_1 + 0x2a) = param_3;
    *(undefined1 *)(param_1 + 0x2b) = param_4;
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar15 = 0;
      if (param_1 != 0) {
        if ((0 < (int)*(uint *)(param_1 + 0x18)) && (0 < (int)*(uint *)(param_1 + 0x1c))) {
          uStack_61 = 0;
          recovered_10004dac((long *)(param_1 + 0x58),
                             (ulong)*(uint *)(param_1 + 0x18) * (ulong)*(uint *)(param_1 + 0x1c) * 4
                             ,&uStack_61);
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (((int)*(uint *)(param_1 + 0x50) < 1 || ((int)*(uint *)(param_1 + 0x54) < 1)))) {
            iVar11 = 0;
            iVar12 = 0;
            bVar8 = false;
            iVar10 = 0;
            iVar9 = 0;
          }
          else {
            fVar17 = (float)*(uint *)(param_1 + 0x50);
            fVar16 = (float)*(int *)(param_1 + 0x18) / fVar17;
            fVar19 = (float)*(uint *)(param_1 + 0x54);
            fVar18 = (float)*(int *)(param_1 + 0x1c) / fVar19;
            if (fVar16 <= fVar18) {
              fVar18 = fVar16;
            }
            iVar9 = (int)(fVar18 * fVar17);
            if (iVar9 < 2) {
              iVar9 = 1;
            }
            iVar10 = (int)(fVar18 * fVar19);
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            iVar11 = (*(int *)(param_1 + 0x18) - iVar9) / 2;
            iVar12 = (*(int *)(param_1 + 0x1c) - iVar10) / 2;
            bVar8 = true;
          }
          for (lVar15 = 0; lVar15 < *(int *)(param_1 + 0x1c); lVar15 = lVar15 + 1) {
            iVar14 = -iVar11;
            for (lVar13 = 0; lVar13 < *(int *)(param_1 + 0x18); lVar13 = lVar13 + 1) {
              uStack_65 = *(undefined1 *)(param_1 + 0x29);
              uStack_64 = *(undefined2 *)(param_1 + 0x2a);
              bVar7 = false;
              if (iVar11 <= lVar13) {
                bVar7 = bVar8;
              }
              if (((bVar7 && lVar13 < iVar9 + iVar11) && iVar12 <= lVar15) &&
                  lVar15 < iVar10 + iVar12) {
                iVar4 = *(int *)(param_1 + 0x50);
                iVar5 = 0;
                if (iVar9 != 0) {
                  iVar5 = (iVar4 * iVar14) / iVar9;
                }
                iVar6 = iVar4 + -1;
                if (iVar5 <= iVar4 + -1) {
                  iVar6 = iVar5;
                }
                iVar2 = 0;
                if (-1 < iVar5) {
                  iVar2 = iVar6;
                }
                iVar5 = 0;
                if (iVar10 != 0) {
                  iVar5 = (*(int *)(param_1 + 0x54) * ((int)lVar15 - iVar12)) / iVar10;
                }
                iVar6 = *(int *)(param_1 + 0x54) + -1;
                if (iVar5 <= iVar6) {
                  iVar6 = iVar5;
                }
                iVar3 = 0;
                if (-1 < iVar5) {
                  iVar3 = iVar6;
                }
                puVar1 = (undefined1 *)
                         (*(long *)(param_1 + 0x38) + ((long)iVar2 + (long)iVar4 * (long)iVar3) * 4)
                ;
                uStack_65 = *puVar1;
                uStack_64 = *(undefined2 *)(puVar1 + 1);
              }
              uStack_62 = 0xff;
              recovered_10001434((void *)(*(long *)(param_1 + 0x58) +
                                         (lVar13 + lVar15 * *(int *)(param_1 + 0x18)) * 4),
                                 &uStack_65,4);
              iVar14 = iVar14 + 1;
            }
          }
        }
        lVar15 = unaff_x30;
      }
      return lVar15;
    }
  }
  return param_1;
}

#undef uStack_65
#undef uStack_64
#undef uStack_62
#undef uStack_61

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ae8
 */

int * recovered_10005ae8(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int *piVar3;
  void *destination;
  ulong count;

  if ((param_1 == 0) || (recovered_10004db4(param_1), *(long *)(param_1 + 0x60) == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = recovered_10004044(0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x1c);
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    count = (long)iVar1 * (long)iVar2 * 4;
    destination = recovered_10004074(count);
    *(void **)(piVar3 + 2) = destination;
    recovered_10001434(destination,*(void **)(param_1 + 0x58),count);
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b68
 */

void recovered_10005b68(long param_1,undefined4 *param_2,undefined4 *param_3)

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
      *param_2 = *(undefined4 *)(param_1 + 0x2c);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005ba0
 */

byte recovered_10005ba0(long param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  if ((param_1 != 0) && (param_2 < 3)) {
    bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x34);
  }
  return bVar1 & 1;
}


#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5450U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5451U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5452U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5453U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5455U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5456U)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5457U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5459U)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545aU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545bU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545cU)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545dU)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545eU)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545fU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5461U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5462U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5463U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5464U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5465U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5466U)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5467U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5468U)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5469U)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546aU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546bU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546cU)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546dU)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546eU)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546fU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5470U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5471U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5472U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5473U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5474U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5475U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5476U)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5477U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5478U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5479U)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547aU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547bU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547cU)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547dU)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005bc0
 */

void recovered_10005bc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0e0 = 0;
  DAT_1000c0e1 = 0;
  DAT_1000c0e2 = 0;
  DAT_1000c0e3 = 0;
  DAT_1000c0e4 = 0;
  DAT_1000c0e5 = 0;
  DAT_1000c0e6 = 0;
  DAT_1000c0e7 = 0;
  DAT_1000c0e8 = 0;
  DAT_1000c0e9 = 0;
  DAT_1000c0ea = 0;
  DAT_1000c0eb = 0;
  DAT_1000c0ec = 0;
  DAT_1000c0ed = 0;
  DAT_1000c0ee = 0;
  DAT_1000c0ef = 0;
  DAT_1000c0f0 = 0;
  DAT_1000c0f1 = 0;
  DAT_1000c0f2 = 0;
  DAT_1000c0f3 = 0;
  DAT_1000c0f4 = 0;
  DAT_1000c0f5 = 0;
  DAT_1000c0f6 = 0;
  DAT_1000c0f7 = 0;
  DAT_1000c0f8 = 0;
  DAT_1000c0f9 = 0;
  DAT_1000c0fa = 0;
  DAT_1000c0fb = 0;
  DAT_1000c0fc = 0;
  DAT_1000c0fd = 0;
  DAT_1000c0fe = 0;
  DAT_1000c0ff = 0;
  DAT_1000c100 = 0;
  DAT_1000c101 = 0;
  DAT_1000c102 = 0;
  DAT_1000c103 = 0;
  DAT_1000c104 = 0;
  DAT_1000c105 = 0;
  DAT_1000c106 = 0;
  DAT_1000c107 = 0;
  DAT_1000c108 = 0;
  DAT_1000c109 = 0;
  DAT_1000c10a = 0;
  DAT_1000c10b = 0;
  DAT_1000c10c = 0;
  DAT_1000c10d = 0;
  DAT_1000c10e = 0;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c0e5
#undef DAT_1000c0e6
#undef DAT_1000c0e7
#undef DAT_1000c0e8
#undef DAT_1000c0e9
#undef DAT_1000c0ea
#undef DAT_1000c0eb
#undef DAT_1000c0ec
#undef DAT_1000c0ed
#undef DAT_1000c0ee
#undef DAT_1000c0ef
#undef DAT_1000c0f0
#undef DAT_1000c0f1
#undef DAT_1000c0f2
#undef DAT_1000c0f3
#undef DAT_1000c0f4
#undef DAT_1000c0f5
#undef DAT_1000c0f6
#undef DAT_1000c0f7
#undef DAT_1000c0f8
#undef DAT_1000c0f9
#undef DAT_1000c0fa
#undef DAT_1000c0fb
#undef DAT_1000c0fc
#undef DAT_1000c0fd
#undef DAT_1000c0fe
#undef DAT_1000c0ff
#undef DAT_1000c100
#undef DAT_1000c101
#undef DAT_1000c102
#undef DAT_1000c103
#undef DAT_1000c104
#undef DAT_1000c105
#undef DAT_1000c106
#undef DAT_1000c107
#undef DAT_1000c108
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e

#undef DAT_1000c0e0
#define DAT_1000c0e0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5450U)))
#undef DAT_1000c0e1
#define DAT_1000c0e1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5451U)))
#undef DAT_1000c0e2
#define DAT_1000c0e2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5452U)))
#undef DAT_1000c0e3
#define DAT_1000c0e3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5453U)))
#undef DAT_1000c0e4
#define DAT_1000c0e4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5454U)))
#undef DAT_1000c0e5
#define DAT_1000c0e5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5455U)))
#undef DAT_1000c0e6
#define DAT_1000c0e6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5456U)))
#undef DAT_1000c0e7
#define DAT_1000c0e7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5457U)))
#undef DAT_1000c0e8
#define DAT_1000c0e8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5458U)))
#undef DAT_1000c0e9
#define DAT_1000c0e9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5459U)))
#undef DAT_1000c0ea
#define DAT_1000c0ea (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545aU)))
#undef DAT_1000c0eb
#define DAT_1000c0eb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545bU)))
#undef DAT_1000c0ec
#define DAT_1000c0ec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545cU)))
#undef DAT_1000c0ed
#define DAT_1000c0ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545dU)))
#undef DAT_1000c0ee
#define DAT_1000c0ee (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545eU)))
#undef DAT_1000c0ef
#define DAT_1000c0ef (*(uint8_t *)(((uintptr_t)pf_module_state + 0x545fU)))
#undef DAT_1000c0f0
#define DAT_1000c0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5460U)))
#undef DAT_1000c0f1
#define DAT_1000c0f1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5461U)))
#undef DAT_1000c0f2
#define DAT_1000c0f2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5462U)))
#undef DAT_1000c0f3
#define DAT_1000c0f3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5463U)))
#undef DAT_1000c0f4
#define DAT_1000c0f4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5464U)))
#undef DAT_1000c0f5
#define DAT_1000c0f5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5465U)))
#undef DAT_1000c0f6
#define DAT_1000c0f6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5466U)))
#undef DAT_1000c0f7
#define DAT_1000c0f7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5467U)))
#undef DAT_1000c0f8
#define DAT_1000c0f8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5468U)))
#undef DAT_1000c0f9
#define DAT_1000c0f9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5469U)))
#undef DAT_1000c0fa
#define DAT_1000c0fa (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546aU)))
#undef DAT_1000c0fb
#define DAT_1000c0fb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546bU)))
#undef DAT_1000c0fc
#define DAT_1000c0fc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546cU)))
#undef DAT_1000c0fd
#define DAT_1000c0fd (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546dU)))
#undef DAT_1000c0fe
#define DAT_1000c0fe (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546eU)))
#undef DAT_1000c0ff
#define DAT_1000c0ff (*(uint8_t *)(((uintptr_t)pf_module_state + 0x546fU)))
#undef DAT_1000c100
#define DAT_1000c100 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5470U)))
#undef DAT_1000c101
#define DAT_1000c101 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5471U)))
#undef DAT_1000c102
#define DAT_1000c102 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5472U)))
#undef DAT_1000c103
#define DAT_1000c103 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5473U)))
#undef DAT_1000c104
#define DAT_1000c104 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5474U)))
#undef DAT_1000c105
#define DAT_1000c105 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5475U)))
#undef DAT_1000c106
#define DAT_1000c106 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5476U)))
#undef DAT_1000c107
#define DAT_1000c107 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5477U)))
#undef DAT_1000c108
#define DAT_1000c108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5478U)))
#undef DAT_1000c109
#define DAT_1000c109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5479U)))
#undef DAT_1000c10a
#define DAT_1000c10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547aU)))
#undef DAT_1000c10b
#define DAT_1000c10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547bU)))
#undef DAT_1000c10c
#define DAT_1000c10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547cU)))
#undef DAT_1000c10d
#define DAT_1000c10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547dU)))
#undef DAT_1000c10e
#define DAT_1000c10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x547eU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d3c
 */

void recovered_10005d3c(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000c0e0 = 0;
  DAT_1000c0e1 = 0;
  DAT_1000c0e2 = 0;
  DAT_1000c0e3 = 0;
  DAT_1000c0e4 = 0;
  DAT_1000c0e5 = 0;
  DAT_1000c0e6 = 0;
  DAT_1000c0e7 = 0;
  DAT_1000c0e8 = 0;
  DAT_1000c0e9 = 0;
  DAT_1000c0ea = 0;
  DAT_1000c0eb = 0;
  DAT_1000c0ec = 0;
  DAT_1000c0ed = 0;
  DAT_1000c0ee = 0;
  DAT_1000c0ef = 0;
  DAT_1000c0f0 = 0;
  DAT_1000c0f1 = 0;
  DAT_1000c0f2 = 0;
  DAT_1000c0f3 = 0;
  DAT_1000c0f4 = 0;
  DAT_1000c0f5 = 0;
  DAT_1000c0f6 = 0;
  DAT_1000c0f7 = 0;
  DAT_1000c0f8 = 0;
  DAT_1000c0f9 = 0;
  DAT_1000c0fa = 0;
  DAT_1000c0fb = 0;
  DAT_1000c0fc = 0;
  DAT_1000c0fd = 0;
  DAT_1000c0fe = 0;
  DAT_1000c0ff = 0;
  DAT_1000c100 = 0;
  DAT_1000c101 = 0;
  DAT_1000c102 = 0;
  DAT_1000c103 = 0;
  DAT_1000c104 = 0;
  DAT_1000c105 = 0;
  DAT_1000c106 = 0;
  DAT_1000c107 = 0;
  DAT_1000c108 = 0;
  DAT_1000c109 = 0;
  DAT_1000c10a = 0;
  DAT_1000c10b = 0;
  DAT_1000c10c = 0;
  DAT_1000c10d = 0;
  DAT_1000c10e = 0;
  return;
}

#undef DAT_1000c0e0
#undef DAT_1000c0e1
#undef DAT_1000c0e2
#undef DAT_1000c0e3
#undef DAT_1000c0e4
#undef DAT_1000c0e5
#undef DAT_1000c0e6
#undef DAT_1000c0e7
#undef DAT_1000c0e8
#undef DAT_1000c0e9
#undef DAT_1000c0ea
#undef DAT_1000c0eb
#undef DAT_1000c0ec
#undef DAT_1000c0ed
#undef DAT_1000c0ee
#undef DAT_1000c0ef
#undef DAT_1000c0f0
#undef DAT_1000c0f1
#undef DAT_1000c0f2
#undef DAT_1000c0f3
#undef DAT_1000c0f4
#undef DAT_1000c0f5
#undef DAT_1000c0f6
#undef DAT_1000c0f7
#undef DAT_1000c0f8
#undef DAT_1000c0f9
#undef DAT_1000c0fa
#undef DAT_1000c0fb
#undef DAT_1000c0fc
#undef DAT_1000c0fd
#undef DAT_1000c0fe
#undef DAT_1000c0ff
#undef DAT_1000c100
#undef DAT_1000c101
#undef DAT_1000c102
#undef DAT_1000c103
#undef DAT_1000c104
#undef DAT_1000c105
#undef DAT_1000c106
#undef DAT_1000c107
#undef DAT_1000c108
#undef DAT_1000c109
#undef DAT_1000c10a
#undef DAT_1000c10b
#undef DAT_1000c10c
#undef DAT_1000c10d
#undef DAT_1000c10e

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005d40(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005d44(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10005d48(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005d4c(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined8 recovered_10005d50(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


#undef DAT_10006dd9
#define DAT_10006dd9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x149U)))
#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#undef DAT_10006ed7
#define DAT_10006ed7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x247U)))
#undef DAT_10006eda
#define DAT_10006eda (*(uint8_t *)(((uintptr_t)pf_module_state + 0x24aU)))
#undef DAT_82010850
#define DAT_82010850 (*(uint8_t *)(0x82010850U))
#undef _DAT_82010850
#define _DAT_82010850 (*(uint *)(0x82010850U))
#define lStack_b8 (*(long *)(pf_stack_frame + 56))
#define uStack_a0 (*(undefined8 *)(pf_stack_frame + 80))
#define local_d8 (*(char * *)(pf_stack_frame + 24))
#define local_d0 (*(ulong *)(pf_stack_frame + 32))
#define local_c0 (*(undefined1 * *)(pf_stack_frame + 48))
#define local_b0 (*(undefined8 *)(pf_stack_frame + 64))
#define local_a8 (*(void * *)(pf_stack_frame + 72))
#define uStack_68 (*(undefined8 *)(pf_stack_frame + 136))
#define local_98 (*(undefined8 *)(pf_stack_frame + 88))
#define local_90 (*(undefined1 * *)(pf_stack_frame + 96))
#define local_88 (*(long *)(pf_stack_frame + 104))
#define local_80 (*(undefined8 *)(pf_stack_frame + 112))
#define local_78 (*(long *)(pf_stack_frame + 120))
#define local_70 (*(ulong *)(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005d54
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10005d54(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[272] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  void *source;
  bool bVar5;
  bool bVar6;
  ulong extraout_x0;
  undefined8 uVar7;
  void *destination;
  long lVar8;
  ulong uVar9;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  destination = (void *)0x0;
  if (param_1 != (char *)0x0) {
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    recovered_10006990((long *)&local_d8,(long)param_1);
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    if (local_d0 == 0) {
      bVar5 = false;
    }
    else {
      pcVar1 = &DAT_10006ddb;
      if (local_d8 != (char *)0x0) {
        pcVar1 = local_d8;
      }
      bVar5 = *pcVar1 == '/';
    }
    uVar9 = 0;
    do {
      if (local_d0 <= uVar9) break;
      recovered_1000650c(&local_d8,'/',uVar9);
      uVar2 = local_d0;
      if (extraout_x0 != 0xffffffffffffffff) {
        uVar2 = extraout_x0;
      }
      recovered_10006544((long *)&local_90,&local_d8,uVar9,uVar2 - uVar9);
      if ((local_88 != 0) && (bVar6 = recovered_100060dc(&local_90,&DAT_10006dd9), bVar6)) {
        bVar6 = recovered_10006580(&local_90,&DAT_10006ed7);
        if (bVar6) {
          if ((local_70 == 0) ||
             (bVar6 = recovered_100060dc((undefined8 *)(local_78 + local_70 * 0x18 + -0x18),
                                         &DAT_10006ed7), !bVar6)) {
            if (!bVar5) goto LAB_10005e90;
          }
          else {
            recovered_100065d0(&local_78);
          }
        }
        else {
LAB_10005e90:
          recovered_100066f4(&local_78,&local_90);
        }
      }
      uVar9 = extraout_x0 + 1;
      recovered_10004078(local_90);
    } while (extraout_x0 != 0xffffffffffffffff);
    puVar3 = &DAT_10006eda;
    if (!bVar5) {
      puVar3 = &DAT_10006ddb;
    }
    recovered_10006990((long *)&local_90,(long)puVar3);
    lVar8 = 0;
    for (uVar9 = 0; uVar9 < local_70; uVar9 = uVar9 + 1) {
      if (uVar9 != 0 || bVar5) {
        recovered_1000660c((long *)&local_90,0x2f);
      }
      recovered_10006670((long *)&local_90,(undefined8 *)(local_78 + lVar8));
      lVar8 = lVar8 + 0x18;
    }
    if (local_88 == 0) {
      puVar4 = &DAT_10006eda;
      if (!bVar5) {
        puVar4 = &DAT_10006dd9;
      }
      recovered_10006990((long *)&local_c0,(long)puVar4);
    }
    else {
      local_c0 = local_90;
      lStack_b8 = local_88;
      local_b0 = local_80;
      local_88 = 0;
      local_80 = 0;
      local_90 = (undefined1 *)0x0;
    }
    recovered_10004078(local_90);
    recovered_10006910(&local_78);
    recovered_10004078(local_d8);
    puVar3 = &DAT_10006ddb;
    if (local_c0 != (undefined1 *)0x0) {
      puVar3 = local_c0;
    }
    uVar7 = recovered_10006088(puVar3,&local_a8);
    if (((int)uVar7 != 0) ||
       ((bVar5 = recovered_100060dc(&local_c0,param_1), bVar5 &&
        (uVar7 = recovered_10006088(param_1,&local_a8), (int)uVar7 != 0)))) {
      source = local_a8;
      destination = (void *)0x0;
      if ((((local_a8 != (void *)0x0) && ((int)uStack_a0 != 0)) && (PF_PART4(uStack_a0, 4) != 0)) &&
         ((int)local_98 != 0)) {
        destination = recovered_10004074(uStack_a0 & 0xffffffff);
        recovered_10001434(destination,source,uStack_a0 & 0xffffffff);
        bVar5 = recovered_100060f4(0x50);
        if ((bVar5) && (_DAT_82010850 != 0)) {
          (*(code *)(ulong)_DAT_82010850)(source);
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = PF_PART4(uStack_a0, 4);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)local_98;
        }
      }
    }
    else {
      destination = (void *)0x0;
    }
    recovered_10004078(local_c0);
  }
  return destination;
}

#undef DAT_10006dd9
#undef DAT_10006ddb
#undef DAT_10006ed7
#undef DAT_10006eda
#undef DAT_82010850
#undef _DAT_82010850
#undef lStack_b8
#undef uStack_a0
#undef local_d8
#undef local_d0
#undef local_c0
#undef local_b0
#undef local_a8
#undef uStack_68
#undef local_98
#undef local_90
#undef local_88
#undef local_80
#undef local_78
#undef local_70

#undef DAT_82010858
#define DAT_82010858 (*(uint8_t *)(0x82010858U))
#undef _DAT_82010858
#define _DAT_82010858 (*(uint *)(0x82010858U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006088
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 recovered_10006088(undefined8 param_1,undefined8 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined8 uVar2;

  bVar1 = recovered_100060f4(0x58);
  if ((bVar1) && (_DAT_82010858 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x100060c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(ulong)_DAT_82010858)(param_1,param_2);
    return uVar2;
  }
  return 0;
}

#undef DAT_82010858
#undef _DAT_82010858

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100060dc
 */

bool recovered_100060dc(undefined8 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_10006580(param_1,param_2);
  return !bVar1;
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
 * Address: 0x100060f4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_100060f4(int param_1)

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
 * Address: 0x1000613c
 */

undefined8 * recovered_1000613c(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10004078((void *)*param_1);
  return param_1;
}


#define local_50 (*(void * *)(pf_stack_frame + 16))
#define local_48 (*(long *)(pf_stack_frame + 24))
#define local_38 (*(long *)(pf_stack_frame + 40))
#define lStack_40 (*(long *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006164
 */

void recovered_10006164(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_10006270(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_100062bc(param_1);
    }
    else {
      recovered_100062f4(param_1,uVar1);
      for (uVar4 = 0; uVar1 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar4) = *(undefined1 *)(param_2 + uVar4);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_1000636c(&local_50,*param_1 + local_38,uVar1);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar6 = param_1[2];
    lVar5 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = pvVar3;
    local_48 = lVar5;
    lStack_40 = lVar6;
    recovered_10004078(pvVar3);
  }
  return;
}

#undef local_50
#undef local_48
#undef local_38
#undef lStack_40

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000624c
 */

long recovered_1000624c(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006270
 */

undefined8 recovered_10006270(long *param_1,long param_2,long *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062bc
 */

void recovered_100062bc(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (*param_1 == 0) {
    pvVar1 = recovered_100063a0(0);
    *param_1 = (long)pvVar1;
    param_1[2] = 0;
    return;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100062f4
 */

void recovered_100062f4(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_100063a0(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    *(undefined1 *)((long)pvVar1 + param_1[1]) = 0;
    recovered_10004078((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000636c
 */

undefined8 * recovered_1000636c(undefined8 *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  recovered_10006164(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063a0
 */

void * recovered_100063a0(ulong capacity)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  puVar1 = recovered_10004044(capacity + 1);
  *puVar1 = 0;
  return puVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063bc
 */

uint recovered_100063bc(long param_1,int param_2,int param_3,int param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;

  uVar1 = recovered_10006428(param_2,*(uint *)(param_1 + 0x18),*(uint *)(param_1 + 0x24));
  uVar2 = recovered_10006428(param_3,*(uint *)(param_1 + 0x1c),*(uint *)(param_1 + 0x28));
  uVar3 = recovered_10006428(param_4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x2c));
  return uVar2 | uVar1 | uVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006428
 */

int recovered_10006428(int param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = ~(-1 << (ulong)(param_2 & 0x1f));
  }
  return (uVar1 * param_1 + 0x7f) / 0xff << (ulong)(param_3 & 0x1f);
}


#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006458
 */

long * recovered_10006458(long *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = &DAT_10006ddb;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  recovered_10006164(param_1,(long)puVar1,param_2[1]);
  return param_1;
}

#undef DAT_10006ddb

#undef PTR_DAT_10008058
#define PTR_DAT_10008058 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x13c8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006498
 */

void recovered_10006498(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 - 0x61U < 0x1a) {
    *(&PTR_DAT_10008058)[(ulong)(param_1 - 0x61U) & 0xff] = 1;
  }
  return;
}

#undef PTR_DAT_10008058

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100064c0
 */

ulong recovered_100064c0(uint param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 16))
#define uStack_18 (*(undefined8 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000650c
 */

void recovered_1000650c(undefined8 *param_1,char param_2,ulong param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  uStack_18 = param_1[1];
  local_20 = &DAT_10006ddb;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    local_20 = (undefined1 *)*param_1;
  }
  recovered_10006688((long *)&local_20,param_2,param_3);
  return;
}

#undef DAT_10006ddb
#undef local_20
#undef uStack_18

#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006544
 */

long * recovered_10006544(long *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;

  uVar4 = param_2[1];
  uVar2 = uVar4;
  if (param_3 <= uVar4) {
    uVar2 = param_3;
  }
  uVar4 = uVar4 - uVar2;
  uVar1 = uVar4;
  if (param_4 <= uVar4) {
    uVar1 = param_4;
  }
  if (param_4 != 0xffffffffffffffff) {
    uVar4 = uVar1;
  }
  puVar3 = &DAT_10006ddb;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 0;
  if (puVar3 + uVar2 != (undefined1 *)0x0) {
    uVar1 = uVar4;
  }
  recovered_10006164(param_1,(long)(puVar3 + uVar2),uVar1);
  return param_1;
}

#undef DAT_10006ddb

#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006580
 */

bool recovered_10006580(undefined8 *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;

  lVar6 = param_1[1];
  pcVar5 = &DAT_10006ddb;
  if ((char *)*param_1 != (char *)0x0) {
    pcVar5 = (char *)*param_1;
  }
  lVar4 = recovered_1000624c((long)param_2);
  if (lVar6 == lVar4) {
    do {
      bVar3 = lVar6 == 0;
      if (lVar6 == 0) {
        return true;
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

#undef DAT_10006ddb

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100065d0
 */

void recovered_100065d0(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000613c((undefined8 *)(*param_1 + param_1[1] * 0x18 + -0x18));
  param_1[1] = param_1[1] + -1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000660c
 */

void recovered_1000660c(long *param_1,undefined1 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;

  lVar2 = param_1[1];
  if (lVar2 == param_1[2]) {
    uVar1 = 0x10;
    if (lVar2 != 0) {
      uVar1 = lVar2 << 1;
    }
    recovered_100062f4(param_1,uVar1);
  }
  recovered_100062bc(param_1);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined1 *)(*param_1 + lVar2) = param_2;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return;
}


#undef DAT_10006ddb
#define DAT_10006ddb (*(uint8_t *)(((uintptr_t)pf_module_state + 0x14bU)))
#define lStack_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006670
 */

long * recovered_10006670(long *param_1,undefined8 *param_2)

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
  puVar1 = &DAT_10006ddb;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)*param_2;
  }
  if ((puVar1 != (undefined1 *)0x0) && (uVar6 != 0)) {
    lStack_38 = 0;
    uVar2 = recovered_10006270(param_1,(long)puVar1,&lStack_38);
    lVar7 = param_1[1];
    if ((int)uVar2 == 0) {
      recovered_100062f4(param_1,lVar7 + uVar6);
      for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar4) = puVar1[uVar4];
      }
    }
    else {
      uVar4 = lVar7 - lStack_38;
      if (uVar6 <= (ulong)(lVar7 - lStack_38)) {
        uVar4 = uVar6;
      }
      recovered_100062f4(param_1,uVar4 + lVar7);
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
  return param_1;
}

#undef DAT_10006ddb
#undef lStack_38

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006688
 */

ulong recovered_10006688(long *param_1,char param_2,ulong param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  while( true ) {
    if ((ulong)param_1[1] <= param_3) {
      return 0xffffffffffffffff;
    }
    if (*(char *)(*param_1 + param_3) == param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066bc
 */

bool recovered_100066bc(char *param_1,long param_2,char *param_3,long param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100066f4
 */

long recovered_100066f4(long *param_1,undefined8 *param_2)

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
    recovered_10006768(param_1,uVar1);
    lVar2 = param_1[1];
  }
  recovered_10006458((long *)(*param_1 + lVar2 * 0x18),param_2);
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  return *param_1 + lVar2 * 0x18;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006768
 */

void recovered_10006768(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  long lVar2;
  ulong uVar3;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_100067fc(param_2);
    lVar2 = 0;
    for (uVar3 = 0; uVar3 < (ulong)param_1[1]; uVar3 = uVar3 + 1) {
      recovered_100068f4((undefined8 *)((long)pvVar1 + lVar2),(undefined8 *)(*param_1 + lVar2));
      recovered_1000613c((undefined8 *)(*param_1 + lVar2));
      lVar2 = lVar2 + 0x18;
    }
    recovered_10004078((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067fc
 */

void * recovered_100067fc(long param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong size;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  size = param_1 * 0x18;
  if (size < 2) {
    size = 1;
  }
  pvVar1 = recovered_10001364(size);
  if (pvVar1 == (void *)0x0) {
    recovered_10001350();
  }
  return pvVar1;
}


#define local_38 (*(long *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006810
 */

long * recovered_10006810(long *param_1,long param_2,ulong param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;

  if ((param_2 != 0) && (param_3 != 0)) {
    local_38 = 0;
    uVar1 = recovered_10006270(param_1,param_2,&local_38);
    lVar5 = param_1[1];
    if ((int)uVar1 == 0) {
      recovered_100062f4(param_1,lVar5 + param_3);
      for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + param_1[1] + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
    }
    else {
      uVar3 = lVar5 - local_38;
      if (param_3 <= (ulong)(lVar5 - local_38)) {
        uVar3 = param_3;
      }
      recovered_100062f4(param_1,uVar3 + lVar5);
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

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100068f4
 */

void recovered_100068f4(undefined8 *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

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


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006910
 */

long * recovered_10006910(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_1000693c(param_1);
  recovered_10004078((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000693c
 */

void recovered_1000693c(long *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;

  lVar1 = param_1[1];
  lVar2 = lVar1 * 0x18;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar2 = lVar2 + -0x18;
    recovered_1000613c((undefined8 *)(*param_1 + lVar2));
  }
  param_1[1] = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006990
 */

long * recovered_10006990(long *param_1,long param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = recovered_1000624c(param_2);
  recovered_10006164(param_1,param_2,uVar1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100069d4
 */

void recovered_100069d4(long *param_1,ulong param_2,undefined1 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if ((ulong)param_1[1] <= param_2) {
    recovered_10006ac0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = *param_3;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
    return;
  }
  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006ac0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006a58
 */

void recovered_10006a58(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (param_2 < (ulong)param_1[1]) {
    param_1[1] = param_2;
  }
  else if ((ulong)param_1[1] < param_2) {
    recovered_10006ac0(param_1,param_2);
    uVar1 = param_1[1];
    while (uVar1 < param_2) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      uVar1 = param_1[1] + 1;
      param_1[1] = uVar1;
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ac0
 */

void recovered_10006ac0(long *param_1,ulong param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  ulong uVar2;

  if ((ulong)param_1[2] < param_2) {
    pvVar1 = recovered_10006b34(param_2);
    for (uVar2 = 0; uVar2 < (ulong)param_1[1]; uVar2 = uVar2 + 1) {
      *(undefined1 *)((long)pvVar1 + uVar2) = *(undefined1 *)(*param_1 + uVar2);
    }
    recovered_10004078((void *)*param_1);
    *param_1 = (long)pvVar1;
    param_1[2] = param_2;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b34
 */

void * recovered_10006b34(ulong param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  pvVar1 = recovered_10001364(param_1);
  if (pvVar1 == (void *)0x0) {
    recovered_10001350();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b40
 */

undefined8 * recovered_10006b40(undefined8 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  param_1[1] = 0;
  recovered_10004078((void *)*param_1);
  return param_1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006b6c
 */

long recovered_10006b6c(long *param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

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
      recovered_10006ac0(param_1,uVar5);
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

